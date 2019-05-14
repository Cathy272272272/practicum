
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
	rel = (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ 1.0 (* -34.0 x)) (* 280.5 (* x x))) (* -997.333333 (* (* x x) x))) (* 1932.333333 (* (* (* x x) x) x))) (* -2318.8 (* (* (* (* x x) x) x) x))) (* 1867.922222 (* (* (* (* (* x x) x) x) x) x))) (* -1067.384127 (* (* (* (* (* (* x x) x) x) x) x) x))) (* 450.302679 (* (* (* (* (* (* (* x x) x) x) x) x) x) x))) (* -144.541601 (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x))) (* 36.1354 (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x))) (* -7.167352 (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x))) (* 1.144785 (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x))) (* -0.149025 (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x))) (* 0.015967 (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -0.001419 (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* 0.000105 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -7e-06 (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x) x) x)))
	#else
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -34.0*x )  ) + ( 280.5* ( x*x )  )  ) + ( -997.333333* (  ( x*x ) *x )  )  ) + ( 1932.333333* (  (  ( x*x ) *x ) *x )  )  ) + ( -2318.8* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 1867.922222* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -1067.384127* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 450.302679* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -144.541601* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 36.1354* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -7.167352* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1.144785* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.149025* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.015967* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.001419* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.000105* (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -7e-06* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
