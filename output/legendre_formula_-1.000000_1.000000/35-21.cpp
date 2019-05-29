
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
	rel =  (  (  (  (  (  (  (  (  (  (  ( 3.700138*x ) + ( -283.677254* (  ( x*x ) *x )  )  ) + ( 6382.738209* (  (  (  ( x*x ) *x ) *x ) *x )  )  ) + ( -65651.021576* (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 370198.816109* (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -1251945.087204* (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 2648345.376778* (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -3531127.169037* (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 2882022.910023* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -1314606.941414* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 256661.355228* (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  (  (  (  ( x*256661.355228 ) * ( x*x )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  ( pow(x,7)*-65651.021576 ) + ( 3.700138*x )  ) + (  ( x*x ) * (  (  ( x*6382.738209 ) * ( x*x )  ) + ( -283.677254*x )  )  )  ) + (  (  ( pow(x,3)*pow(x,3) ) *pow(x,3) ) * (  ( -1251945.087204* ( x*x )  ) +370198.816109 )  )  )  ) + (  (  ( pow(x,3)* (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  )  ) * ( 2648345.376778+ ( x* ( -3531127.169037*x )  )  )  ) + (  ( pow(x,3)* (  (  ( x*x ) * ( x*x )  ) * (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  )  )  ) * ( 2882022.910023+ (  ( x*x ) *-1314606.941414 )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
