For the Herbie results, please look at the folder herbie_results.
In this folder, there are several folders with the format hermite/lagaerre/legendre_formula_-x.xx_x.xx,
they are the reports generated by Herbie, with lower bound, upper bound and polynomial names specified by its folder name.
The results of herbie can be checked by results.json, which include the original formula as input, and the herbie rewrite formula as output.
The order of the polynomial is specified by the 'name' tag in the json file, which is in fact the second number of the name of the subfolders in this folder. (e.g. 0-9, 9 is the order, 0 is just the index).

Herbie accepts fpcore file as input, so I write a program to automatically generate those fpcore files.(See formula.cpp)

Then, I generate all those Herbie results by typing "Herbie report [input file] [output folder name]" to get all those results.


All other files are results related to S3FP.

To generate formulas that S3FP accpets, I write two parse program(parse.py and recursion_parse.py), the first one parse the explicit formulas of those polynomials and Herbie rewrite formulas, the second one use a C++ implemented recursion relationship and Herbie rewrite formulas.
When running parse.py/recur_parse.py, the folder output/output_recur will be generated.

To evaluate those formulas with S3FP, please look at the folder output_recur_2.

Within it, there are several subfolders with names indicated there polynomials types and input range, and within those subfolders, there are several cpp files that S3FP needs them to evaluate.

Then I run run.sh to generate executables of each precision by amending Makefile.

Finally, I run run2.sh to let S3FP evaluating all those executables and ouput the results to a csv file.
 
