
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
	rel =  (  (  (  (  (  (  (  (  ( 1.0+ ( -9.0*x )  ) + ( 18.0* ( x*x )  )  ) + ( -14.0* (  ( x*x ) *x )  )  ) + ( 5.25* (  (  ( x*x ) *x ) *x )  )  ) + ( -1.05* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 0.116667* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.007143* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.000223* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -3e-06* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *0.116667 )  ) + (  ( x*-9.0 ) +1.0 )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( -1.05*x ) +5.25 )  ) + (  ( x*x ) * (  ( -14.0*x ) +18.0 )  )  )  ) + (  (  ( pow(x, ( 2+2 ) )*pow(x, ( 2+2 ) ) ) * (  ( -3e-06*x ) +0.000223 )  ) + (  (  ( -0.007143*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
