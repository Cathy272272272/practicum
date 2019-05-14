
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
	rel = (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ (+ 1.0 (* -26.0 x)) (* 162.5 (* x x))) (* -433.333333 (* (* x x) x))) (* 622.916667 (* (* (* x x) x) x))) (* -548.166667 (* (* (* (* x x) x) x) x))) (* 319.763889 (* (* (* (* (* x x) x) x) x) x))) (* -130.515873 (* (* (* (* (* (* x x) x) x) x) x) x))) (* 38.7469 (* (* (* (* (* (* (* x x) x) x) x) x) x) x))) (* -8.610422 (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x))) (* 1.463772 (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x))) (* -0.193557 (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x))) (* 0.020162 (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x))) (* -0.00167 (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x))) (* 0.000111 (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x))) (* -6e-06 (* (* (* (* (* (* (* (* (* (* (* (* (* (* x x) x) x) x) x) x) x) x) x) x) x) x) x) x)))
	#else
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -26.0*x )  ) + ( 162.5* ( x*x )  )  ) + ( -433.333333* (  ( x*x ) *x )  )  ) + ( 622.916667* (  (  ( x*x ) *x ) *x )  )  ) + ( -548.166667* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 319.763889* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -130.515873* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 38.7469* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -8.610422* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1.463772* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.193557* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.020162* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.00167* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.000111* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -6e-06* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) 
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
