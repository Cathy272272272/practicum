
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
	rel = (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ 1.0 (* -30.0 x)) (* 217.5 (* x x))) (* -676.666667 (* (* x x) x))) (* 1141.875 (* (* (* x x) x) x))) (* -1187.55 (* (* (* (* x x) x) x) x))) (* 824.6875 (* (* (* (* (* x x) x) x) x) x))) (* -403.928571 (* (* (* (* (* (* x x) x) x) x) x) x))) (* 145.16183 (* (* (* (* (* (* (* x x) x) x) x) x) x) x))) (* -39.42667 (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x))) (* 8.279601 (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x))) (* -1.368529 (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x))) (* 0.18057 (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x))) (* -0.019232 (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x))) (* 0.001668 (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -0.000119 (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 7e-06 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x)))
	#else
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -30.0*x )  ) + ( 217.5* ( x*x )  )  ) + ( -676.666667* (  ( x*x ) *x )  )  ) + ( 1141.875* (  (  ( x*x ) *x ) *x )  )  ) + ( -1187.55* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 824.6875* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -403.928571* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 145.16183* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -39.42667* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 8.279601* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -1.368529* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.18057* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.019232* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.001668* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.000119* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 7e-06* (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
