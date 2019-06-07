
#!/bin/bash

#g++ -DFT=__float128 -o legendre_128 legendre.cpp -lm -lquadmath
#g++ -DFT=double -o legendre_64 legendre.cpp -lm -lquadmath
#g++ -DFT=float -o legendre_32 legendre.cpp -lm -lquadmath
#
#g++ -DFT=__float128 -DORIG -o legendre_128_orig legendre.cpp -lm -lquadmath
#g++ -DFT=double -DORIG -o legendre_64_orig legendre.cpp -lm -lquadmath
#g++ -DFT=float -DORIG -o legendre_32_orig legendre.cpp -lm -lquadmath

#Tell make to make one .out file for each .cpp file found in the current directory
#all: $(patsubst %.cpp, %_32, $(wildcard *.cpp))
#
##Rule how to create arbitary .out files.
##First state what is needed for them e.g. additional headers, .cpp files in an include folder...
##Then the command to create the .out file, probably you want to add further options to the g++ call.
#%_32: %.cpp Makefile
#g++ -DFT=float $< -o $@ -lm -lquadmath

#%_64: %.cpp Makefile
#        g++ -DFT=double $< -o $@ -lm -lquadmath
#%_128: %.cpp Makefile
#        g++ -DFT=__float128 $< -o $@ -lm -lquadmath

for D in */; do cd "$D";
# then either call make or call your g++
# with whatever arguments in here
# or nest that script you found online if it seems to
# be doing the trick for you.

#Tell make to make one .out file for each .cpp file found in the current directory
#all: $(patsubst %.cpp, %_32, $(wildcard *.cpp))
#
##Rule how to create arbitary .out files.
##First state what is needed for them e.g. additional headers, .cpp files in an include folder...
##Then the command to create the .out file, probably you want to add further options to the g++ call.
#%_32: %.cpp Makefile
#g++ -DFT=float $< -o $@ -lm -lquadmath

#%_64: %.cpp Makefile
#        g++ -DFT=double $< -o $@ -lm -lquadmath
#%_128: %.cpp Makefile
#        g++ -DFT=__float128 $< -o $@ -lm -lquadmath
cp ../Makefile .;
make;
cd ../;
#echo "$D";
done;
