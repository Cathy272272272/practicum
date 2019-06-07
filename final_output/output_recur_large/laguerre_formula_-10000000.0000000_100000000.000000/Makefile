#Tell make to make one .out file for each .cpp file found in the current directory
all: $(patsubst %.cpp,%_128,  $(wildcard *.cpp))

#Rule how to create arbitary .out files. 
#First state what is needed for them e.g. additional headers, .cpp files in an include folder...
#Then the command to create the .out file, probably you want to add further options to the g++ call.
%_32: %.cpp Makefile
	g++ -DFT=float $< -o $@ -lm -lquadmath
      
%_64: %.cpp Makefile
	g++ -DFT=double $< -o $@ -lm -lquadmath
%_128: %.cpp Makefile
	g++ -DFT=__float128 $< -o $@ -lm -lquadmath
#g++ -DFT=__float128 -DORIG -o legendre_128_orig legendre.cpp -lm -lquadmath
#g++ -DFT=double -DORIG -o legendre_64_orig legendre.cpp -lm -lquadmath
#g++ -DFT=float -DORIG -o legendre_32_orig legendre.cpp -lm -lquadmath

%_32_orig: %.cpp Makefile
	g++ -DFT=float -DORIG $< -o $@ -lm -lquadmath
      
%_64_orig: %.cpp Makefile
	g++ -DFT=double -DORIG $< -o $@ -lm -lquadmath
%_128_orig: %.cpp Makefile
	g++ -DFT=__float128 -DORIG $< -o $@ -lm -lquadmath
