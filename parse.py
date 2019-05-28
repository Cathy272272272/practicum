import json
import os

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
                val.append(s)
                continue
            cur = s[:idx]
            num += s.count(")")
            while num > 0 :
                num = num - 1
                o = operator.pop()
                if o == "log" or o == "exp" or o == "sqrt" or o == "cbrt":
                    cur = o + "(" + cur + ")"
                else:
                    if val:
                        v = val.pop()
                        if o == "pow":
                            cur = "pow(" + v + "," + cur + ")"
                        else:
                            cur = " ( " + v + o + cur + " ) "
            val.append(cur)
    str = val.pop()
    return str
def write(dir):
    input = []
    output = []
    link = []
    output_dir = "output/" + dir
    os.makedirs(os.path.dirname(output_dir), exist_ok=True)
    template = ""
    with open ("template.cpp","r") as r:
        for line in r:
            template += line
    with open(dir + "results.json", "r") as read_file:
        data = json.load(read_file)
        test = data['tests']
        for idx,i in enumerate(test):
            if i['input'] == i['output']:
                continue
            input.append(i['input'])
            output.append(i['output'])
            link.append(i['link'])
    for i in range(len(output)):
        filename = output_dir + link[i] + ".cpp"
        content = template

        orig = parse(input[i])
        rewrite = parse(output[i])
        content += "\t#ifdef ORIG\n\t" + "rel = " +  orig + ";\n\t#else\n\t" + "rel = " + rewrite +";"
        content += "\n\t#endif\n" + "\tOFT outv = rel;\n" + "\tfwrite(&outv, sizeof(OFT), 1, ofile);\n" + "\tfclose(ifile);\n" + "\tfclose(ofile);\n" + "\treturn 0;\n" + "}\n"
        with open(filename, "w") as write_file:
            write_file.write(content)


if __name__ == "__main__":
    for dir in os.listdir('.'):
        if (dir.startswith("legendre" )) or (dir.startswith("hermite")) or (dir.startswith("laguerre")):
            write(dir + "/")
