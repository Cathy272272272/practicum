
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
	rel =  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -29.0*x )  ) + ( 203.0* ( x*x )  )  ) + ( -609.0* (  ( x*x ) *x )  )  ) + ( 989.625* (  (  ( x*x ) *x ) *x )  )  ) + ( -989.625* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 659.75* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -309.678571* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 106.452009* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -27.598669* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 5.519734* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.866735* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.108342* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.010898* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.00089* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -5.9e-05* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 3e-06* (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  (  (  ( 989.625*x ) *pow(x,3) ) + (  (  ( x*x ) * ( x*x )  ) * ( x*-989.625 )  )  ) + (  (  (  ( -609.0*x ) * ( x*x )  ) +1.0 ) + ( x* ( -29.0+ ( x*203.0 )  )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( cbrt( (  ( x*x ) *659.75 ) )*cbrt( (  ( x*x ) *659.75 ) ) ) *cbrt( (  ( x*x ) *659.75 ) ) )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) *106.452009 )  ) + (  ( pow(x,3)*pow(x,3) ) * ( x*-309.678571 )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-27.598669 )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *5.519734 )  )  ) + (  (  (  ( pow(x,3)*pow(x,3) ) *pow(x,3) ) * (  ( x*x ) *-0.866735 )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.108342 )  )  )  )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.00089 )  ) + (  ( -0.010898*x ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *3e-06 )  ) + (  ( -5.9e-05*x ) * (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
