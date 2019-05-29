
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
	rel =  (  (  (  (  (  (  (  (  (  ( -3.523941*x ) + ( 222.008286* (  ( x*x ) *x )  )  ) + ( -4084.952454* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 34041.270447* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -153185.71701* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 403853.253937* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -642023.121643* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 605336.086121* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -311570.044327* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 67415.740585* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  ( x*x ) * ( x*x )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *pow(x,3) )  ) * (  ( x*x ) * ( x*x )  )  )  ) * ( -311570.044327+ ( 67415.740585* ( x*x )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *pow(x,3) )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( 605336.086121* ( x*x )  ) +-642023.121643 )  ) + (  (  (  (  (  ( x*34041.270447 ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) + (  (  ( -4084.952454*x ) * ( x*x )  ) * ( x*x )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *pow(x,3) )  ) * (  (  ( x*x ) *403853.253937 ) +-153185.71701 )  )  ) + (  ( -3.523941*x ) + ( -222.008286/pow( ( -1/x ) ,3) )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}