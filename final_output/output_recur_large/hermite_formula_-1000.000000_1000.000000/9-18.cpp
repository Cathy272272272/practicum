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
_Real __libcpp_hermite_recurrence(unsigned __n, _Real __x) {
    if (__n == 0u)
        return _Real(1);
        
    _Real __t2(1);
    _Real __t1 = _Real(2) * __x;
    for (unsigned __i = 1; __i < __n; ++__i) {
        const _Real __t0 = _Real(2) * (__x * __t1 - _Real(__i) * __t2);
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
	rel = __libcpp_hermite_recurrence(18, x + 0.0);
	#else
	rel =  (  (  (  (  ( 790416506880.0*pow(x,6) ) - ( 846874828800.0*pow(x,4) )  ) + ( -17643225600.0+ (  ( x*317578060800.0 ) *x )  )  ) + (  (  ( x* ( 262144.0*x )  ) +-20054016.0 ) * ( pow( ( x*x ) , ( 3+1 ) )*pow( ( x*x ) , ( 3+1 ) ) )  )  ) + (  (  ( pow( ( x*x ) , ( 3+1 ) )* (  ( x*75277762560.0 ) *x )  ) + ( -338749931520.0*pow(x,8) )  ) + ( pow( (  ( x*x ) * ( x*x )  ) ,3)* ( -9124577280.0+ ( 601620480.0* ( x*x )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
