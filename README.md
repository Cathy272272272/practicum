1. Get the results from Herbie
All the results I got from Herbie is in the folder herbie_results.

To get herbie results, Herbie needs to be fed by fpcore format formulas. I geenerate those fpcore files by running gen_fpcore_formula.cpp in utils folder, which requires a lower bound and a higher bound as command line arguments.

After, we get the results from Herbie, we need to parse its output and write it to a cpp file that S3FP accepts, together with the recursion formula implemented by C++ and the explicit form wrote by me.

2. Generate cpp files for S3FP
We can run explicit_form_parse.py and rucursion_parse.py in utils folder to generate S3FP files. Note, c++_recursion.cpp and explicit.cpp are just templates that help to generate S3FP files.

3. Evaluating with S3FP
When evaluating, S3FP is fed by the data in the folder final_output. All subfolders in this folder contain *cpp files that represent the C++ implementation(recur), the explicit form derived by Rodrigues’ formula and Herbie generated rewritten forms.
To automatically run S3FP, we need to do the following procedures.

1) type  ./run_make.sh (this command generates executables for all cpp files in subfolders).
2) type ./run_e-40.sh or run-orig_e-40.sh in each subfolders, to make s3fp evaluate all the executables in the subfolder automatically, where run_e-40.sh execute the re-written forms specified by the executables and run_orig_e-40.sh run the original form specified by the executables, with an extra padding e-40 when calculating the relative error to avoid division by 0 problem.
3  type ./collect.sh to store all the results in a subfolder named data_collection.

4. Data collection
For all processed data by S3FP, I put it into collected_result folder, where large_range_centered_0.xlsm records the input range centered 0 and wider than (-1,1) and small_range_centered_0.xlsm is less than (-1,1). small_range_centered_abs_1.xlsm is centered by -1 and 1, with input range less than (-1,1). order_50.xlsm is the polynomial up to order 50, with input range(-1,1). The comparison of all data is in res.xlsm.


 
