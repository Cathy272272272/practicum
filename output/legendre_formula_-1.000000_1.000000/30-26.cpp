
#include <iostream>
#include <stdio.h>
#include <assert.h>
#include <math.h>
extern "C" {
#include "quadmath.h"
}

#ifndef IFT
#define IFT float
#endif

#ifndef OFT
#define OFT __float128
#endif

using namespace std;

static const int k = 3;

int main (int argc, char *argv[]) {
    assert(argc == 3);
    
    char *iname = argv[1];
    char *oname = argv[2];
    
    FILE *ifile = fopen(iname, "r");
    FILE *ofile = fopen(oname, "w");
    
    assert(ifile != NULL && ofile != NULL);
    
    fseek(ifile, 0, SEEK_END);
    unsigned long fsize = ftell(ifile);
    assert(fsize == (sizeof(IFT) * 1));
    fseek(ifile, 0, SEEK_SET);
    
    IFT in_x;
    
    fread(&in_x, sizeof(IFT), 1, ifile);
    
    FT rel = 0;
    FT x;
	#ifdef ORIG
	rel = (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ -0.154981 (* 54.398337 (* x x))) (* -3155.103546 (* (* (* x x) x) x))) (* 71726.020621 (* (* (* (* (* x x) x) x) x) x))) (* -845342.385891 (* (* (* (* (* (* (* x x) x) x) x) x) x) x))) (* 5917396.701238 (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x))) (* -26538627.629793 (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x))) (* 79615882.889378 (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -163212559.923225 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 229350982.89865 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -217279878.535563 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 132625380.404824 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -47091620.578524 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 7389761.998476 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x)))
	#else
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  ( -0.154981+ ( 54.398337* ( x*x )  )  ) + ( -3155.103546* (  (  ( x*x ) *x ) *x )  )  ) + ( 71726.020621* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -845342.385891* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 5917396.701238* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -26538627.629793* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 79615882.889378* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -163212559.923225* (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 229350982.89865* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -217279878.535563* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 132625380.404824* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -47091620.578524* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 7389761.998476* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
