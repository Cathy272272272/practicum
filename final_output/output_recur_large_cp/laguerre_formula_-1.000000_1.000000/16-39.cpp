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
	rel = __libcpp_generalized_laguerre_recurrence(39, x + 0.0);
	#else
	rel =  (  (  (  (  (  (  ( -0.000143*x ) * (  ( x*x ) * ( x*x )  )  ) * ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) )  ) + (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * (  ( x*x ) * ( x* ( 0.001802*x )  )  )  )  ) + (  (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * (  ( x* ( 1e-05*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * ( -1e-06* ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow(pow(x,3),3) )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * ( x* ( x*4531.420833 )  )  ) + (  ( pow( ( x*x ) ,3)* ( x*-3051.773214 )  ) + (  ( 1525.886607* ( x*x )  ) *pow( ( x*x ) ,3) )  )  ) + (  (  (  (  ( -1523.166667*x ) * ( x*x )  ) +1.0 ) + (  (  ( x*370.5 ) +-39.0 ) *x )  ) + (  (  ( -4797.975*x ) * (  ( x*x ) * ( x*x )  )  ) + (  ( 3427.125*x ) *pow(x,3) )  )  )  )  ) + (  (  (  ( x* (  ( x*0.173031 ) +-1.304384 )  ) * ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) )  ) + (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * (  ( x*x ) * ( -0.019226*x )  )  )  ) + (  ( pow( ( x*x ) ,3)* (  (  (  ( x*x ) * ( x*x )  ) * ( x*-41.988738 )  ) + (  (  ( x*x ) * ( x*x )  ) * ( x* ( x*8.164477 )  )  )  )  ) + (  ( pow(x, ( 2+2 ) )*pow(x, ( 2+2 ) ) ) * (  ( -583.981294*x ) + ( x* ( x*175.194388 )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
