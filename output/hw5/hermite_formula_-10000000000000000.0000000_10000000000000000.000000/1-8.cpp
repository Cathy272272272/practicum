
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
	rel =  (  (  (  ( 1680.0+ ( -13440.0* ( x*x )  )  ) + ( 13440.0* (  (  ( x*x ) *x ) *x )  )  ) + ( -3584.0* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( 256.0* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( 1680.0+ ( -13440.0* ( x*x )  )  ) + ( 13440.0* (  (  ( x*x ) *x ) *x )  )  ) + ( -3584.0* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( 256.0* (  (  (  (  ( pow(x,3)*x ) *x ) *x ) *x ) *x )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
