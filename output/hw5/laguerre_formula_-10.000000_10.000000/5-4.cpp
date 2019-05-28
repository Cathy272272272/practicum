
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
	rel =  (  (  (  ( 1.0+ ( -4.0*x )  ) + ( 3.0* ( x*x )  )  ) + ( -0.666667* (  ( x*x ) *x )  )  ) + ( 0.041667* (  (  ( x*x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( pow(x,3)* (  (  ( 0.041667*x ) * ( 0.041667*x )  ) - ( -0.666667*-0.666667 )  )  ) * (  (  (  ( x*3.0 ) *x ) * (  ( x*3.0 ) *x )  ) + (  (  (  ( x*-4.0 ) +1.0 ) * (  ( x*-4.0 ) +1.0 )  ) - (  (  ( x*3.0 ) *x ) * (  ( x*-4.0 ) +1.0 )  )  )  )  ) + (  (  ( 0.041667*x ) --0.666667 ) * ( pow( (  ( x*3.0 ) *x ) ,3)+pow( (  ( x*-4.0 ) +1.0 ) ,3) )  )  ) / (  (  ( 0.041667*x ) --0.666667 ) * (  (  (  ( x*3.0 ) *x ) *exp(log( (  ( x*3.0 ) *x ) )) ) + (  (  (  ( x*-4.0 ) +1.0 ) * (  ( x*-4.0 ) +1.0 )  ) - (  (  ( x*3.0 ) *x ) * (  ( x*-4.0 ) +1.0 )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
