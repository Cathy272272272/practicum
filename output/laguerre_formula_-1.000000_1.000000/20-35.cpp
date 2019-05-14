
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
	rel = (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ 1.0 (* -35.0 x)) (* 297.5 (* x x))) (* -1090.833333 (* (* x x) x))) (* 2181.666667 (* (* (* x x) x) x))) (* -2705.266667 (* (* (* (* x x) x) x) x))) (* 2254.388889 (* (* (* (* (* x x) x) x) x) x))) (* -1334.230159 (* (* (* (* (* (* x x) x) x) x) x) x))) (* 583.725694 (* (* (* (* (* (* (* x x) x) x) x) x) x) x))) (* -194.575231 (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x))) (* 50.58956 (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x))) (* -10.452388 (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x))) (* 1.742065 (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x))) (* -0.237086 (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x))) (* 0.026612 (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -0.002484 (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 0.000194 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -1.3e-05 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 1e-06 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x)))
	#else
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -35.0*x )  ) + ( 297.5* ( x*x )  )  ) + ( -1090.833333* (  ( x*x ) *x )  )  ) + ( 2181.666667* (  (  ( x*x ) *x ) *x )  )  ) + ( -2705.266667* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 2254.388889* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -1334.230159* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 583.725694* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -194.575231* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 50.58956* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -10.452388* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1.742065* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.237086* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.026612* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.002484* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.000194* (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -1.3e-05* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1e-06* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
