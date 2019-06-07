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
	rel = __libcpp_generalized_laguerre_recurrence(18, x + 0.0);
	#else
	rel =  (  (  (  (  (  ( -136.0*x ) +76.5 ) * ( x*x )  ) + (  (  ( x*-18.0 ) +1.0 ) + (  ( 127.5*x ) *pow(x,3) )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * ( -71.4*x )  ) + (  ( pow(x,6)*pow(x,3) ) * ( -0.133984+ ( 0.012059*x )  )  )  )  ) + (  (  (  ( x*x ) *pow(x,6) ) *1.085268 ) + (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*-6.314286 ) +25.783333 )  ) + (  (  ( x*-1e-06 ) *pow(x,3) ) *pow(pow(x,3),3) )  ) + (  (  ( x*x ) *pow(x,6) ) * (  (  ( x*3.9e-05 ) *pow(x,3) ) + (  ( x*x ) * ( x*-0.000797 )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
