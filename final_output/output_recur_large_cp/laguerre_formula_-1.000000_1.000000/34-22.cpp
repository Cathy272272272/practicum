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
template <class _Real>
_Real __libcpp_generalized_laguerre_recurrence(unsigned __n,_Real __x) {
    if (__n == 0u)
        return _Real(1);
            
    _Real __delta = _Real(0) - __x;
    _Real __li = _Real(1) + _Real(0);
    const _Real __alpham1 = _Real(0) - _Real(1);
    for (unsigned __i = 2; __i <= __n; ++__i) {
        __delta = (__delta * (_Real(__i) + __alpham1) - __x * __li) / _Real(__i);
        __li += __delta;
    }
    return __li;
}
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
    FT x = in_x;
	#ifdef ORIG
	rel = __libcpp_generalized_laguerre_recurrence(22, x + 0.0);
	#else
	rel =  (  (  (  ( pow(x,3)*pow(x,3) ) * (  (  ( -33.838095+ ( x*7.930804 )  ) *x ) + (  ( x*x ) * ( x*-1.370756 )  )  )  ) + (  (  ( x* ( -8e-05+ ( 4e-06*x )  )  ) * (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  )  ) + (  (  ( x*x ) * ( 115.5+ ( -256.666667*x )  )  ) + (  ( 1.0+ ( -22.0*x )  ) + (  ( 304.791667*x ) *pow(x,3) )  )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * ( x* (  ( 103.629167*x ) +-219.45 )  )  ) + (  (  (  ( 0.178198*x ) *pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) + (  (  ( pow(x,3)*pow(x,3) ) *pow(x,4) ) * ( x* ( -0.017673+ ( x*0.00135 )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
