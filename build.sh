
g++ -DFT=__float128 -o *_128 *.cpp -lm -lquadmath
g++ -DFT=double -o *_64 *.cpp -lm -lquadmath
g++ -DFT=float -o *_32 *.cpp -lm -lquadmath
