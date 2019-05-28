
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
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -25.0*x )  ) + ( 150.0* ( x*x )  )  ) + ( -383.333333* (  ( x*x ) *x )  )  ) + ( 527.083333* (  (  ( x*x ) *x ) *x )  )  ) + ( -442.75* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 245.972222* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -95.376984* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 26.824777* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -5.629891* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.900783* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.111667* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.010857* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.000835* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 5.1e-05* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -2e-06* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  (  (  ( -442.75*x ) * (  ( x*x ) * ( x*x )  )  ) + (  (  ( x*x ) * ( x*x )  ) *exp(log( (  ( x*x ) *245.972222 ) )) )  ) + (  (  (  ( 527.083333*x ) *pow(x,3) ) + (  ( x*-25.0 ) +1.0 )  ) + (  (  ( -383.333333*x ) * ( x*x )  ) + ( x* ( x*150.0 )  )  )  )  ) + (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( cbrt( (  ( x*x ) *26.824777 ) )*cbrt( (  ( x*x ) *26.824777 ) ) ) *cbrt( (  ( x*x ) *26.824777 ) ) )  ) + (  ( -95.376984*x ) * ( pow(x,3)*pow(x,3) )  )  ) + (  ( -5.629891*x ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.900783 )  ) + (  (  ( pow(x,3)*pow(x,3) ) *pow(x,3) ) * (  ( x*x ) *-0.111667 )  )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.010857 )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-0.000835 )  ) + (  (  (  (  ( pow(x,3)*pow(x,3) ) *pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-2e-06 )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *5.1e-05 )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
