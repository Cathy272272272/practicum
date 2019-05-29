
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
	rel =  (  (  (  (  (  (  (  ( 518918400.0+ ( -8302694400.0* ( x*x )  )  ) + ( 19372953600.0* (  (  ( x*x ) *x ) *x )  )  ) + ( -15498362880.0* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( 5535129600.0* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -984023040.0* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 89456640.0* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -3932160.0* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 65536.0* (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( 518918400.0+ ( x* ( x*-8302694400.0 )  )  ) + (  ( 89456640.0*pow(x,9) ) / (  ( 1/x ) / ( x*x )  )  )  ) + (  ( -3932160.0+ ( 65536.0* ( x*x )  )  ) * ( pow( ( x*x ) ,3)*pow( ( x*x ) , ( 3+1 ) ) )  )  ) + (  ( pow( ( x*x ) , ( 3+1 ) )* (  (  ( x*x ) *-984023040.0 ) +5535129600.0 )  ) + (  ( pow(x,4)*19372953600.0 ) - ( pow(x,6)*15498362880.0 )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
