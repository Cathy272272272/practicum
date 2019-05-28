
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
	rel =  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -17.0*x )  ) + ( 68.0* ( x*x )  )  ) + ( -113.333333* (  ( x*x ) *x )  )  ) + ( 99.166667* (  (  ( x*x ) *x ) *x )  )  ) + ( -51.566667* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 17.188889* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -3.85873* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.602927* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.066992* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.005359* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.00031* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 1.3e-05* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  ( x*-17.0 ) +1.0 ) + (  (  (  ( pow(x,4)* ( 0.602927+ ( -0.066992*x )  )  ) + (  ( pow(x,3)*pow(x,3) ) * (  ( x*-0.00031 ) +0.005359 )  )  ) *pow(x, ( 2+2 ) ) ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( -51.566667*x ) +99.166667 )  ) + (  ( x*x ) * ( 68.0- ( 113.333333*x )  )  )  ) + (  (  (  ( x*x ) * ( x*1.3e-05 )  ) *pow(pow(x,3),3) ) + (  ( pow(x,3)*pow(x,3) ) * (  ( -3.85873*x ) +17.188889 )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
