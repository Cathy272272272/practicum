
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
	rel =  (  (  (  (  (  ( 0.225586+ ( -17.595703* ( x*x )  )  ) + ( 219.946289* (  (  ( x*x ) *x ) *x )  )  ) + ( -997.089844* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( 2029.790039* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -1894.470703* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 660.194336* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  ( 660.194336*x ) *x ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) + ( -997.089844*pow(x,6) )  ) + (  ( 0.225586+ (  ( pow(x,3)* ( x*219.946289 )  ) + (  ( x*x ) *-17.595703 )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) *-1894.470703 ) +2029.790039 )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
