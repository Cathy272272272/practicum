
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
	rel =  (  (  (  (  (  (  (  (  (  (  (  ( 1.0+ ( -16.0*x )  ) + ( 60.0* ( x*x )  )  ) + ( -93.333333* (  ( x*x ) *x )  )  ) + ( 75.833333* (  (  ( x*x ) *x ) *x )  )  ) + ( -36.4* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( 11.122222* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -2.269841* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.319196* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.031526* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 0.002207* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -0.000109* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 4e-06* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  ( x*x ) * ( 4e-06*x )  ) *pow(pow(x,3),3) ) + (  (  (  ( -0.000109*x ) +0.002207 ) * ( x*x )  ) * (  (  ( x*x ) * ( x*x )  ) *pow(x, ( 2+2 ) ) )  )  ) + (  (  (  (  ( 0.319196+ ( -0.031526*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( 75.833333+ ( -36.4*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  ( 11.122222+ ( x*-2.269841 )  ) *pow( ( x*x ) ,3) ) + ( 1.0+ ( -16.0*x )  )  ) + (  ( x* ( x*60.0 )  ) - (  ( x*x ) * ( x*93.333333 )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
