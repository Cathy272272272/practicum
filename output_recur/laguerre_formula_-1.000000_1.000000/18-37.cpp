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
	rel = __libcpp_generalized_laguerre_recurrence(37, x);
	#else
	rel =  (  (  (  ( -4.5e-05*x ) * (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *3e-06 )  )  ) + (  (  (  (  (  (  ( 2751.875*x ) *pow(x,3) ) + (  ( -3632.475*x ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  ( x*x ) * ( x*-1295.0 )  ) +1.0 ) + ( x* ( -37.0+ ( x*333.0 )  )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *3228.866667 )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) *957.540179 )  ) + (  ( -2042.752381*x ) * ( pow(x,3)*pow(x,3) )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-342.823027 )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *95.990448 )  )  ) + (  (  (  ( pow(x,3)*pow(x,3) ) *pow(x,3) ) * (  ( x*x ) *-21.419356 )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *3.867384 )  )  )  )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.070053 )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-0.572098 )  )  ) + (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.000615 )  ) + (  ( -0.007161*x ) * (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
