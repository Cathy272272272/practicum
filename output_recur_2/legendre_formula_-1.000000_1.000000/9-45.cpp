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
	rel = __libcpp_legendre_recurrence(45, x);
	#else
	rel =  (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*2950952798742.987 ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) *pow(x,4) ) * ( x*-32825205289388.277 )  )  )  ) + (  (  (  (  (  (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)*pow( (  ( x*x ) * ( x*x )  ) ,3) ) * (  (  ( x*x ) * ( x*x )  ) * ( x*1916039416030376.5 )  )  ) + (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( -2472308923910163.0*x )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( -1184036534107051.5*x )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( 585347638692359.2*x )  )  )  )  ) + (  (  ( 72804432673179.02*x ) * (  ( x*x ) * ( x*x )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( -231362703040458.22*x )  )  ) + (  (  ( x*x ) * (  ( x*x ) * ( -18093409303393.6*x )  )  ) * (  ( x* ( pow(x,3)*pow(x,3) )  ) * ( x* ( pow(x,3)*pow(x,3) )  )  )  )  ) + (  (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  ( x*x ) * (  ( x*x ) * ( x*3507905885351.821 )  )  )  ) + (  (  (  ( x*-521393661647.9209 ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  ) + (  (  ( x*x ) * (  ( x*x ) * ( 57993998382.44883*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) + (  (  (  (  (  ( x*259347085.989623 ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  ) + (  ( x*x ) * (  ( x*x ) * ( x*190885.757548 )  )  )  ) + (  (  ( -9271593.93806*x ) * ( pow(x,3)*pow(x,3) )  ) + (  (  ( -1855.060812*x ) * ( x*x )  ) + ( 5.382188*x )  )  )  ) + (  ( x* ( x*-4668247547.813218 )  ) *pow(pow(x,3),3) )  )  )  )  ) + (  (  (  (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)*pow( (  ( x*x ) * ( x*x )  ) ,3) ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*2523815359824958.5 )  )  ) + (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  (  ( x*x ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * (  ( x*x ) * ( -2010568874885765.0*x )  )  )  )  )  ) + (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)*pow( (  ( x*x ) * ( x*x )  ) ,3) ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( 1.22264323472783e+15*x ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) + (  (  (  (  ( x* ( pow(x,3)*pow(x,3) )  ) * ( x* ( pow(x,3)*pow(x,3) )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-547796968865910.4 )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( 170351496415618.47*x )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
