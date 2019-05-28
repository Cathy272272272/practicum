all: $(patsubst %.cpp, %_32, $(wildcard *.cpp))

#Rule how to create arbitary .out files.
#First state what is needed for them e.g. additional headers, .cpp files in an include folder...
#Then the command to create the .out file, probably you want to add further options to the g++ call.
%_32: %.cpp Makefile
g++ -DFT=float $< -o $@ -lm -lquadmath

