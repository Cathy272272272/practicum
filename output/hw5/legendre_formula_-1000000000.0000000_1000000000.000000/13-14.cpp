
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
	rel =  (  (  (  (  (  (  ( -0.209473+ ( 21.994629* ( x*x )  )  ) + ( -373.908691* (  (  ( x*x ) *x ) *x )  )  ) + ( 2368.088379* (  (  (  (  ( x*x ) *x ) *x ) *x ) *x )  )  ) + ( -7104.265137* (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 10893.206543* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( -8252.429199* (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) + ( 2448.522949* (  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#else
	rel =  (  ( -0.209473+ (  (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) * ( -8252.429199+ (  ( x*x ) *2448.522949 )  )  )  ) + (  (  (  (  ( x*x ) *10893.206543 ) +-7104.265137 ) *pow( ( x*x ) , ( 3+1 ) ) ) + (  (  ( 2368.088379* ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( x* ( 21.994629*x )  ) + ( pow(x,4)*-373.908691 )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
