
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
	rel =  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -12.0*x )  ) + ( 33.0* ( x*x )  )  ) + ( -36.666667* (  ( x*x ) *x )  )  ) + ( 20.625* (  (  ( x*x ) *x ) *x )  )  ) + ( -6.6* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 1.283333* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.157143* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.012277* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.000606* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1.8e-05* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  (  ( 1.8e-05*x ) *pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( x*-6.6 ) +20.625 )  )  ) + (  (  ( x*-0.000606 ) +0.012277 ) * (  (  ( x*x ) * ( x*x )  ) *pow(x,4) )  )  ) + (  (  ( -12.0*x ) +1.0 ) + (  (  ( pow(x,3)*pow(x,3) ) * ( 1.283333+ ( -0.157143*x )  )  ) + (  (  ( x*-36.666667 ) +33.0 ) * ( x*x )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
