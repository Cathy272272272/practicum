
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
	rel =  (  (  (  (  (  (  (  (  ( 1.0+ ( -10.0*x )  ) + ( 22.5* ( x*x )  )  ) + ( -20.0* (  ( x*x ) *x )  )  ) + ( 8.75* (  (  ( x*x ) *x ) *x )  )  ) + ( -2.1* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 0.291667* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -0.02381* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.001116* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -2.8e-05* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  ( pow(x, ( 3+3 ) )* (  ( -0.02381*x ) +0.291667 )  ) + (  (  (  ( x*-2.8e-05 ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  ) + (  ( 0.001116*pow(x,4) ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  ( x*-10.0 ) +1.0 ) + (  (  ( x*x ) * (  ( -20.0*x ) +22.5 )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( -2.1*x ) +8.75 )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
