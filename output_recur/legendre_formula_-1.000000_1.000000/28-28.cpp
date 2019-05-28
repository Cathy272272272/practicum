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
    FT x;
	#ifdef ORIG
	rel = __libcpp_legendre_recurrence(28, x);
	#else
	rel =  (  (  (  (  (  (  ( x*x ) *-1083107273.306063 ) * (  ( x*x ) * ( x*x )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  ( x*x ) * (  (  ( x*x ) * ( x*x )  ) * ( 600418162.376187* ( x*x )  )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) *pow( (  ( x*x ) * ( x*x )  ) ,3) ) * (  ( x*x ) * (  ( 28493592.89095* ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*-195828692.959618 ) *x )  )  )  )  ) + (  (  (  (  (  (  ( x*x ) *-12163537.663655 ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x* ( 64687904.84762*x )  )  )  )  ) + (  (  (  ( -60.675068* ( x*x )  ) + (  ( 4075.342081*x ) *pow(x,3) )  ) +0.149446 ) + (  (  ( 1479349.175309* ( x*x )  ) * ( pow(x,3)*pow(x,3) )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *-107589.030932 )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( -233160799.890321*x ) *x )  )  ) + (  (  (  ( x*584845006.391556 ) *x ) * ( pow(x,3)*pow(x,3) )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) *pow( (  ( x*x ) * ( x*x )  ) ,3) ) *1276519286.396431 ) + ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  (  ( -1032079423.043923*x ) *x ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
