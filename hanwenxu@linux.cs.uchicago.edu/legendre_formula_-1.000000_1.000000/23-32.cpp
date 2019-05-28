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
	rel = __libcpp_legendre_recurrence(32, x);
	#else
	rel =  (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *-3359345474.958674 )  )  )  ) + (  (  ( x*426691058.311283 ) *x ) * (  (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) )  ) *pow( ( x*x ) ,3) )  )  ) + (  (  (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) )  ) * (  ( x*x ) * (  ( x*11977994111.532978 ) *x )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( -25580123017.85009* ( x*x )  )  )  )  )  ) + (  (  (  (  (  (  ( x* ( 5522085663.027419*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( -1566549124.263098* ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *-44203401.645873 )  )  ) + (  (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) *316791045.12876 ) + (  (  (  ( x* ( x*-223281.722847 )  ) * (  ( x*x ) * ( x*x )  )  ) + ( pow( ( x*x ) ,3)* (  ( x*x ) *4042994.052976 )  )  ) + (  (  ( x* ( -73.893565*x )  ) +0.13995 ) + (  ( 6465.686955*x ) *pow(x,3) )  )  )  )  ) + (  (  (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * (  (  ( x*x ) *-14148088757.560446 ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  ( x*x ) * (  ( 26583514139.20568*x ) *x )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *-36595486996.8286 )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  ( x*x ) * (  (  ( 36462894652.63719*x ) *x ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
