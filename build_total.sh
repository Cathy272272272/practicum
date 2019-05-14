#g++ -DFT=__float128 -o legendre_128 -I legendre.cpp legendre.cpp -lm -lquadmath
#g++ -DFT=double -o legendre_64 -I legendre.cpp legendre.cpp -lm -lquadmath
#g++ -DFT=float -o legendre_32 -I legendre.cpp legendre.cpp -lm -lquadmath
#
#g++ -DFT=__float128 -DORIG -o legendre_128_orig -I legendre.cpp legendre.cpp -lm -lquadmath
#g++ -DFT=double -DORIG -o legendre_64_orig -I legendre.cpp legendre.cpp -lm -lquadmath
#g++ -DFT=float -DORIG -o legendre_32_orig -I legendre.cpp legendre.cpp -lm -lquadmath

#SRC_DIR := .../src
#OBJ_DIR := .../obj
#SRC_FILES := $(wildcard $(SRC_DIR)/*.cpp)
#OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
#LDFLAGS := ...
#CPPFLAGS := ...
#CXXFLAGS := ...
#
#main.exe: $(OBJ_FILES)
#g++ $(LDFLAGS) -o $@ $^
#
#$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
#g++ $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<
#CC = g++
#CFLAGS = -O2 -std=gnu99
#all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))
#%.out: %.c Makefile
#$(CC) $(CFLAGS) $< -o $@ -lm
#clean:
#rm *.out
#CXX=g++
#CXXFLAGS=-Wall -Werror -std=c++11
#
#all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))
#
#%.out: %.cpp Makefile
#$(CXX) $(CXXFLAGS) $< -o $(@:.out=)
#
#clean: $(patsubst %.cpp, %.clean, $(wildcard *.cpp))
#
#%.clean:
#rm -f $(@:.clean=)
#Tell make to make one .out file for each .cpp file found in the current directory
all: $(patsubst %.cpp, %.out, $(wildcard *.cpp))

#Rule how to create arbitary .out files.
#First state what is needed for them e.g. additional headers, .cpp files in an include folder...
#Then the command to create the .out file, probably you want to add further options to the g++ call.
%.out: %.cpp Makefile
    g++ $< -o $@ -std=c++0x
