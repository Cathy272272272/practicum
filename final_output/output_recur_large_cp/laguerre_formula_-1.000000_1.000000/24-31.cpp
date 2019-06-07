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
	rel = __libcpp_generalized_laguerre_recurrence(31, x + 0.0);
	#else
	rel =  (  (  (  (  (  (  ( -55.555762*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  ) + (  ( pow(x,3)*pow(x,3) ) * (  (  ( x*195.652902 ) *x ) + ( -521.741071*x )  )  )  ) + (  (  ( x* ( -1415.925+ ( x*1022.6125 )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  (  (  ( x*-31.0 ) +1.0 ) + (  ( 1311.041667*x ) *pow(x,3) )  ) + (  (  ( -749.166667*x ) * ( x*x )  ) + ( 232.5* ( x*x )  )  )  )  )  ) + ( pow(pow(x,3),3)* ( x*12.222268 )  )  ) + (  (  (  (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) *0.294614 ) + (  ( pow(pow(x,3),3)* (  ( x*x ) *-2.12122 )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( x*-0.033122 )  )  )  )  ) + (  (  (  (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) * (  (  ( x*x ) * ( x*x )  ) * ( -1e-06*x )  )  ) + (  (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) * (  ( x*x ) * (  ( x*x ) *1.4e-05 )  )  )  ) + (  (  (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  ) * (  ( x*x ) * ( -0.00023*x )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( 0.003042* ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
