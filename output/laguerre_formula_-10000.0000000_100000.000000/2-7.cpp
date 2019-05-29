
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
	rel =  (  (  (  (  (  (  ( 1.0+ ( -7.0*x )  ) + ( 10.5* ( x*x )  )  ) + ( -5.833333* (  ( x*x ) *x )  )  ) + ( 1.458333* (  (  ( x*x ) *x ) *x )  )  ) + ( -0.175* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 0.009722* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.000198* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( cbrt( (  ( pow(x,3)* ( x*x )  ) * (  ( 0.009722*x ) +-0.175 )  ) )*cbrt( (  ( pow(x,3)* ( x*x )  ) * (  ( 0.009722*x ) +-0.175 )  ) ) ) *cbrt( (  ( pow(x,3)* ( x*x )  ) * (  ( 0.009722*x ) +-0.175 )  ) ) ) + (  (  ( x*x ) *pow(x,4) ) * ( -0.000198*x )  )  ) + (  (  (  ( x*10.5 ) *x ) + (  ( x*-7.0 ) +1.0 )  ) + ( pow(x,3)* ( -5.833333+ ( 1.458333*x )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
