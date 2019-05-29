
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
	rel =  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -13.0*x )  ) + ( 39.0* ( x*x )  )  ) + ( -47.666667* (  ( x*x ) *x )  )  ) + ( 29.791667* (  (  ( x*x ) *x ) *x )  )  ) + ( -10.725* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 2.383333* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.340476* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.03192* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.00197* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 7.9e-05* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -2e-06* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  ( pow(x,3)*pow(x,3) ) *x ) * ( pow(x,3)* (  ( x*-2e-06 ) +7.9e-05 )  )  ) + (  ( pow(x,4)*pow(x, ( 2+2 ) ) ) * ( 0.03192+ ( -0.00197*x )  )  )  ) + (  (  ( 1.0+ ( x*-13.0 )  ) + (  ( pow(x,3)*pow(x,3) ) * ( 2.383333+ ( x*-0.340476 )  )  )  ) + (  (  (  ( x*-10.725 ) +29.791667 ) * (  ( x*x ) * ( x*x )  )  ) + (  (  ( -47.666667*x ) +39.0 ) * ( x*x )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
