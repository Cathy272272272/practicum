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
    FT x;
	#ifdef ORIG
	rel = __libcpp_generalized_laguerre_recurrence(19, x);
	#else
	rel =  (  (  ( pow( ( x*x ) , ( 3+1 ) )* (  (  ( -0.254569+ ( 0.025457*x )  ) *x ) + ( pow(x,4)* ( -4e-06*x )  )  )  ) + ( pow( ( x*x ) ,3)* (  (  (  ( x*x ) * ( x*x )  ) * ( x*-0.001893 )  ) + (  ( pow(x,4)*0.000105 ) * ( x*x )  )  )  )  ) + (  (  (  (  (  ( x*-161.5 ) * ( x*x )  ) +1.0 ) + ( x* ( -19.0+ ( 85.5*x )  )  )  ) + (  (  ( -96.9*x ) * (  ( x*x ) * ( x*x )  )  ) + (  ( 161.5*x ) *pow(x,3) )  )  ) + (  (  (  ( x*x ) *37.683333 ) * (  ( x*x ) * ( x*x )  )  ) + (  (  (  ( x*x ) * ( -9.997619*x )  ) * (  ( x*x ) * ( x*x )  )  ) + ( pow( ( x*x ) , ( 3+1 ) )*1.874554 )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
