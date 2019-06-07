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
_Real __libcpp_legendre_recurrence(unsigned __n, _Real __x) {
    if (__n == 0u)
        return _Real(1);
                _Real __t2(1);
    _Real __t1 = __x;
    for (unsigned __i = 1; __i < __n; ++__i) {
        const _Real __k = _Real(__i);
        _Real __t0 = ((_Real(2) * __k + _Real(1)) * __x * __t1 - __k * __t2) / (__k + _Real(1));
        __t2 = __t1;
        __t1 = __t0;
    }
    return __t1;
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
	rel = __libcpp_legendre_recurrence(7, x + 0.0);
	#else
	rel =  (  ( cbrt( (  (  ( x*pow(x,4) ) * ( -43.3125+ (  ( x*26.8125 ) *x )  )  ) + (  ( x*-2.1875 ) + (  ( x*x ) * ( 19.6875*x )  )  )  ) )*cbrt(log( (  ( exp( ( 26.8125*pow(x,7) ) )*exp( ( 19.6875*pow(x,3) ) ) ) / ( exp( ( 43.3125*pow(x,5) ) )*exp( ( 2.1875*x ) ) )  ) )) ) *cbrt( (  ( x* (  (  ( 19.6875*x ) *x ) +-2.1875 )  ) + (  ( x*pow(x,4) ) * (  ( x* ( 26.8125*x )  ) +-43.3125 )  )  ) ) ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
