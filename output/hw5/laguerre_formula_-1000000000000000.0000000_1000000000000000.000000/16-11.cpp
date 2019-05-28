
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
	rel =  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -11.0*x )  ) + ( 27.5* ( x*x )  )  ) + ( -27.5* (  ( x*x ) *x )  )  ) + ( 13.75* (  (  ( x*x ) *x ) *x )  )  ) + ( -3.85* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 0.641667* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.065476* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.004092* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.000152* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 3e-06* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( x*x ) * ( 27.5+ ( -27.5*x )  )  ) + (  (  (  ( -3.85*x ) +13.75 ) * (  ( x*x ) * ( x*x )  )  ) + (  ( -11.0*x ) +1.0 )  )  ) + (  ( pow(x,6)* (  ( x*-0.065476 ) +0.641667 )  ) + ( pow(x, ( 2* ( 3+1 )  ) )* (  (  ( -0.000152*x ) +0.004092 ) + ( 3e-06* ( x*x )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
