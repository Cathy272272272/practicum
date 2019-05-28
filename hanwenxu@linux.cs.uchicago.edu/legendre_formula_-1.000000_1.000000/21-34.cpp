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
	rel = __libcpp_legendre_recurrence(34, x);
	#else
	rel =  (  (  (  (  (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *1656184990.147628 )  ) + (  (  (  (  (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-121776273467.25195 )  ) + (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *188653407256.6444 )  )  ) + (  (  (  (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-207838499520.03198 )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *167729315402.13107 )  )  ) + (  (  (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-100637589241.27864 )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *45097032914.72392 )  )  ) + (  (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-15032344304.907972 )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *3681390442.018279 )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *79197761.28219 )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-647981683.217918 )  )  ) + (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) *-6375490.622001 )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *310999.542537 )  )  ) + (  (  ( x*x ) *80.821087 ) + ( -0.135834+ ( pow(x,3)* ( x*-7974.347245 )  )  )  )  )  )  )  )  )  )  ) + (  (  (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *52909691230.59912 )  ) + (  (  (  (  (  (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-13867459395.116707 )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
