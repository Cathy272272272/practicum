
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
	rel =  (  (  (  (  (  (  ( -17297280.0+ ( 242161920.0* ( x*x )  )  ) + ( -484323840.0* (  (  ( x*x ) *x ) *x )  )  ) + ( 322882560.0* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -92252160.0* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 12300288.0* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -745472.0* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 16384.0* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  ( cbrt( (  (  (  ( 16384.0* ( x*x )  ) +-745472.0 ) *pow(pow(pow(x,3),3), ( 3+1 ) ) ) * (  (  ( 16384.0* ( x*x )  ) +-745472.0 ) * (  ( 16384.0* ( x*x )  ) +-745472.0 )  )  ) )+ (  ( x* ( 242161920.0*x )  ) + ( pow(x,4)*-484323840.0 )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * ( 322882560.0* ( x*x )  )  ) +-17297280.0 ) + (  (  (  ( 12300288.0*x ) *x ) +-92252160.0 ) *pow( ( x*x ) , ( 3+1 ) ) )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
