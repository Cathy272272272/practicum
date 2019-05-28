
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
	rel =  (  (  (  (  (  (  (  ( -3.14209*x ) + ( 124.63623* (  ( x*x ) *x )  )  ) + ( -1420.853027* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 7104.265137* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -18155.344238* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 24757.287598* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -17139.660645* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 4733.811035* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)* ( pow(x,3)*pow(x,3) )  )  ) * (  (  ( x*x ) *4733.811035 ) +-17139.660645 )  ) + (  (  (  ( pow(x,3)* ( pow(x,3)*pow(x,3) )  ) * (  ( 24757.287598* ( x*x )  ) +-18155.344238 )  ) + (  ( x*x ) * ( 124.63623*x )  )  ) + (  (  ( -3.14209*x ) + (  ( x*-1420.853027 ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  ( x*7104.265137 ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
