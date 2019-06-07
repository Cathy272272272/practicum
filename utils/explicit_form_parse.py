import json
import os
import argparse

orig_rel = []
orig_rel.append("rel = my_hermite(")
orig_rel.append("rel = my_laguerre(")
orig_rel.append("rel = my_legendre(")

def parse(str):
    operator = []
    val = []
    list = str.split(" ")
    num = 0
    str = ""
    for s in list:
        if s[0] == '(':
            operator.append(s[1:])
        else:
            idx = s.find(')')
            if idx == -1:
                if s == "E":
                    s = "exp(1)"
                val.append(s)
                continue
            cur = s[:idx]
            num += s.count(")")
            while num > 0 :
                num = num - 1
                o = operator.pop()
                if o == "log" or o == "exp" or o == "sqrt" or o == "cbrt":
                    cur = o + "(" + cur + ")"
                elif o == "fabs":
                    cur = "abs(" + cur + ")"
                else:
                    if val:
                        v = val.pop()
                        if o == "pow":
                            cur = "pow(" + v + "," + cur + ")"
                        else:
                            if o == "-" and cur[0] == "-":
                                cur = " ( " + v + " + " + cur[1:] + " ) "
                            else:
                                cur = " ( " + v + o + cur + " ) "
            val.append(cur)
    str = val.pop()
    return str
def write(output_dir, dir, type):
    input = []
    output = []
    link = []
    output_dir = output_dir + "/" + dir
    os.makedirs(os.path.dirname(output_dir), exist_ok=True)
    template = ""
    with open ("explicit.cpp","r") as r:
        for line in r:
            template += line
    with open(dir + "results.json", "r") as read_file:
        data = json.load(read_file)
        test = data['tests']
        for idx,i in enumerate(test):
            if i['status'] == "timeout":
                continue
            input.append(i['name'])
            output.append(i['output'])
            link.append(i['link'])
    for i in range(len(output)):
        filename = output_dir + link[i] + ".cpp"
        content = template

        rewrite = parse(output[i])
        content += "\t#ifdef ORIG\n\t" + orig_rel[type] + input[i] + ", x + 0.0);" + "\n\t#else\n" + "\trel = " + rewrite +";"
        content += "\n\t#endif\n" + "\tOFT outv = rel;\n" + "\tfwrite(&outv, sizeof(OFT), 1, ofile);\n" + "\tfclose(ifile);\n" + "\tfclose(ofile);\n" + "\treturn 0;\n" + "}\n"
        with open(filename, "w") as write_file:
            write_file.write(content)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("output", help="specify the output dir to put result")
    args = parser.parse_args()

    for dir in os.listdir('.'):
        if (dir.startswith("hermite" )):
            write(str(args.output), dir + "/", 0)
        elif (dir.startswith("laguerre")):
            write(str(args.output), dir + "/", 1)
        elif (dir.startswith("legendre")):
            write(str(args.output), dir + "/", 2)
