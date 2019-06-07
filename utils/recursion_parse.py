import json
import os
import argparse


orig = []
orig_rel = []
str = "\
template <class _Real>\n\
_Real __libcpp_hermite_recurrence(unsigned __n, _Real __x) {\n\
    if (__n == 0u)\n\
        return _Real(1);\n\
        \n\
    _Real __t2(1);\n\
    _Real __t1 = _Real(2) * __x;\n\
    for (unsigned __i = 1; __i < __n; ++__i) {\n\
        const _Real __t0 = _Real(2) * (__x * __t1 - _Real(__i) * __t2);\n\
        __t2 = __t1;\n\
        __t1 = __t0;\n\
    }\n\
    return __t1;\n\
}\n"
orig_rel.append("rel = __libcpp_hermite_recurrence(")
orig.append(str)
str = "\
template <class _Real>\n\
_Real __libcpp_generalized_laguerre_recurrence(unsigned __n,_Real __x) {\n\
    if (__n == 0u)\n\
        return _Real(1);\n\
            \n\
    _Real __delta = _Real(0) - __x;\n\
    _Real __li = _Real(1) + _Real(0);\n\
    const _Real __alpham1 = _Real(0) - _Real(1);\n\
    for (unsigned __i = 2; __i <= __n; ++__i) {\n\
        __delta = (__delta * (_Real(__i) + __alpham1) - __x * __li) / _Real(__i);\n\
        __li += __delta;\n\
    }\n\
    return __li;\n\
}\n"
orig_rel.append("rel = __libcpp_generalized_laguerre_recurrence(")
orig.append(str)
str="\
template <class _Real>\n\
_Real __libcpp_legendre_recurrence(unsigned __n, _Real __x) {\n\
    if (__n == 0u)\n\
        return _Real(1);\n\
            \
    _Real __t2(1);\n\
    _Real __t1 = __x;\n\
    for (unsigned __i = 1; __i < __n; ++__i) {\n\
        const _Real __k = _Real(__i);\n\
        _Real __t0 = ((_Real(2) * __k + _Real(1)) * __x * __t1 - __k * __t2) / (__k + _Real(1));\n\
        __t2 = __t1;\n\
        __t1 = __t0;\n\
    }\n\
    return __t1;\n\
}\n"
orig_rel.append("rel = __libcpp_legendre_recurrence(")
orig.append(str)

heading = "\
#include <iostream>\n\
#include <stdio.h>\n\
#include <assert.h>\n\
#include <math.h>\n\
extern \"C\" {\n\
#include \"quadmath.h\"\n\
}\n\
\n\
#ifndef IFT\n\
#define IFT float\n\
#endif\n\
\n\
#ifndef OFT\n\
#define OFT __float128\n\
#endif\n"
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
    with open ("c++_recursion.cpp","r") as r:
        for line in r:
            template += line
    with open(dir + "results.json", "r") as read_file:
        data = json.load(read_file)
        test = data['tests']
        for idx,i in enumerate(test):
            if i['status'] == "timeout":
                continue
#            if i['input'] == i['output']:
#                continue
            input.append(i['name'])
            output.append(i['output'])
            link.append(i['link'])
    for i in range(len(output)):
        filename = output_dir + link[i] + ".cpp"
        content = heading + orig[type] + template


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
