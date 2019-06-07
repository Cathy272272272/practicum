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
	rel = __libcpp_legendre_recurrence(20, x + 0.0);
	#else
	rel =  (  (  (  (  ( pow( ( x*x ) ,3)* (  ( x*x ) * ( x*x )  )  ) * (  ( x* ( 1043287.57267*x )  ) +-444238.57933 )  ) + (  (  (  ( x*x ) *-37.001381 ) +0.176197 ) + ( pow( ( x*x ) ,3)* (  ( x*x ) *114889.287758 )  )  )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( x* ( -17020.635223*x )  ) +1276.547642 )  )  ) + (  (  (  ( pow( ( x*x ) ,3)* (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) *1324172.688389 ) +-1513340.215302 )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( pow( ( x*x ) ,3)* (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  ( x*x ) *131460.694141 ) +-640449.535561 )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
