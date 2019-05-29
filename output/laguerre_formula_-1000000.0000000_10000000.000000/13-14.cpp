
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
	rel =  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -14.0*x )  ) + ( 45.5* ( x*x )  )  ) + ( -60.666667* (  ( x*x ) *x )  )  ) + ( 41.708333* (  (  ( x*x ) *x ) *x )  )  ) + ( -16.683333* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 4.170833* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.680952* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.074479* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.005517* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.000276* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -9e-06* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  (  ( -0.680952*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( 0.074479+ ( -0.005517*x )  )  )  ) + (  (  (  ( x*-14.0 ) +1.0 ) + (  ( x*x ) * (  ( -60.666667*x ) +45.5 )  )  ) + (  (  (  ( x*x ) *4.170833 ) * (  ( x*x ) * ( x*x )  )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( -16.683333*x ) +41.708333 )  )  )  )  ) + (  (  (  ( x*-9e-06 ) * ( x*x )  ) * ( cbrt(pow(x,12))* (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( 0.000276* ( x*x )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
