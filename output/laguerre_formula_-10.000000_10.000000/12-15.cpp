
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
	rel =  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -15.0*x )  ) + ( 52.5* ( x*x )  )  ) + ( -75.833333* (  ( x*x ) *x )  )  ) + ( 56.875* (  (  ( x*x ) *x ) *x )  )  ) + ( -25.025* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 6.951389* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -1.276786* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.159598* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.013792* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.000828* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -3.4e-05* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1e-06* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( 1.0+ ( -15.0*x )  ) + (  (  ( x*-75.833333 ) +52.5 ) * ( x*x )  )  ) + (  ( pow(x,4)* (  ( x*-25.025 ) +56.875 )  ) + (  ( pow(x,3)*pow(x,3) ) * ( 6.951389+ ( -1.276786*x )  )  )  )  ) + (  (  (  (  ( 0.159598+ ( -0.013792*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  (  (  ( -3.4e-05*x ) +0.000828 ) * ( x*x )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  ( 1e-06*x ) * ( x*x )  ) *pow(pow(x,3),3) )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
