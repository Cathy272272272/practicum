
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
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -22.0*x )  ) + ( 115.5* ( x*x )  )  ) + ( -256.666667* (  ( x*x ) *x )  )  ) + ( 304.791667* (  (  ( x*x ) *x ) *x )  )  ) + ( -219.45* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 103.629167* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -33.838095* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 7.930804* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -1.370756* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.178198* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.017673* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.00135* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -8e-05* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 4e-06* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  ( pow(x,3)*pow(x,3) ) * (  (  ( -33.838095+ ( x*7.930804 )  ) *x ) + (  ( x*x ) * ( x*-1.370756 )  )  )  ) + (  (  ( x* ( -8e-05+ ( 4e-06*x )  )  ) * (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  )  ) + (  (  ( x*x ) * ( 115.5+ ( -256.666667*x )  )  ) + (  ( 1.0+ ( -22.0*x )  ) + (  ( 304.791667*x ) *pow(x,3) )  )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * ( x* (  ( 103.629167*x ) +-219.45 )  )  ) + (  (  (  ( 0.178198*x ) *pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) + (  (  ( pow(x,3)*pow(x,3) ) *pow(x,4) ) * ( x* ( -0.017673+ ( x*0.00135 )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
