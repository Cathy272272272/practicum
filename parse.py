import json
import os
#import re

def parse(str):
    operator = []
    val = []
    list = str.split(" ")
    num = 0
#    s = ""
    str = ""
    for s in list:
        if s[0] == '(':
            operator.append(s[1:])
        else:
            idx = s.find(')')
#            val.append(s[:idx])
            if idx == -1:
                val.append(s)
                continue
            cur = s[:idx]
            num += s.count(")")
#            tmp = ""
            while num > 0 :
                num = num - 1
#                v = val.pop()
                o = operator.pop()
#                print(o == "pow")
#                print(o)
                if o == "pow":
                    v = val.pop()
                    cur = "pow(" + v + "," + cur + ")"
                elif o == "log":
                    cur = "log(" + cur + ")"
                elif o == "exp":
                    cur = "exp(" + cur + ")"
                elif o == "sqrt":
                    cur = "sqrt(" + cur + ")"
                elif o == "cbrt":
                    cur = "cbrt(" + cur + ")"
                else:
#                    print("haha")
                    v = val.pop()
                    cur = " ( " + v + o + cur + " ) "
#                print(val)
            val.append(cur)
    str = val.pop()
#    print(str)
    return str
#if __name__ == "__main__":
def write(dir):
    input = []
    output = []
    link = []
#    dir = "legendre_formula_-1000.000000_1000.000000/"
    output_dir = "output/" + dir
    os.makedirs(os.path.dirname(output_dir), exist_ok=True)
    template = ""
    with open ("template.cpp","r") as r:
        for line in r:
            template += line
#    with open ("template_output.cpp","w" ) as w:
#        w.write(template)
#
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
        orig = input[i]
        rewrite = parse(orig)
        content += "\t#ifdef ORIG\n\t" + "rel = " +  orig + "\n\t#else\n\t" + "rel = " + rewrite
        content += "\n\t#endif\n" + "\tOFT outv = rel;\n" + "\tfwrite(&outv, sizeof(OFT), 1, ofile);\n" + "\tfclose(ifile);\n" + "\tfclose(ofile);\n" + "\treturn 0;\n" + "}\n"
        with open(filename, "w") as write_file:
            write_file.write(content)

#        with open ("template_output.cpp","w" ) as w:
#            w.write(template)
#    parse("(+ (+ (cbrt (* (* (* (pow x 3) (pow x 3)) (+ 10.5 (* -5.833333 x))) (* (+ 10.5 (* -5.833333 x)) (+ 10.5 (* -5.833333 x))))) (+ (* x -7.0) 1.0)) (+ (* (exp (+ (log (* x x)) (log (* x x)))) (+ 1.458333 (* -0.175 x))) (* (* (* (pow x 3) (* x x)) x) (+ (* -0.000198 x) 0.009722))))")
#    print(input)
#    print(output)

if __name__ == "__main__":
    for dir in os.listdir('.'):
        if (dir.startswith("legendre" )) or (dir.startswith("hermite")) or (dir.startswith("laguerre")):
            write(dir + "/")
