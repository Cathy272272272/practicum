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
	rel = __libcpp_legendre_recurrence(47, x);
	#else
	rel =  (  (  (  (  (  (  (  (  ( x* ( 42002557311449.43*x )  ) *pow(pow(x,3),3) ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * ( x*-7366602359238.823 )  ) *pow( (  ( x*x ) * ( x*x )  ) ,3) )  ) + (  (  (  ( -100636644251.8965*x ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) + ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  ( x*x ) * ( 993906667516.3492*x )  )  )  )  ) + (  (  (  ( -5.499192*x ) + (  ( x*x ) * ( x*2065.863177 )  )  ) + (  (  ( x*x ) * ( x*-231789.848452 )  ) * ( x*x )  )  ) + (  (  ( x* ( 7391391950.704262*x )  ) *pow(pow(x,3),3) ) + (  (  ( x*12284861.96793 ) *pow( ( x*x ) ,3) ) + (  (  ( -375370782.353402*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  )  )  )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  ( x*x ) * (  ( x*x ) * (  ( x*x ) * ( 665167771241317.4*x )  )  )  )  ) + (  (  ( x*-187611422657807.47 ) * (  ( x*x ) * ( x*x )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) + (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( -1889076470325341.2*x )  )  )  ) + (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*4321733349490738.0 )  )  )  )  )  ) + (  (  (  ( pow( (  ( x*x ) * ( x*x )  ) ,3)* (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  ( x*pow( ( x*x ) ,3) ) * ( 1.189798669631766e+16* ( x*x )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  ( x*x ) * ( x*x )  ) * ( -7983497566793235.0*x )  )  )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-14241529530440836.0 )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * ( 13571339905478914.0*x )  )  )  )  ) + (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  ( x*x ) * ( -1.014793884824099e+16*x )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  ( x*pow( ( x*x ) ,3) ) * (  ( x* ( 5820342794200298.0*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  )  ) + (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  ( x*pow( ( x*x ) ,3) ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*11551301357891.719 ) *x )  )  )  ) + (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  ( -134268352342805.89*x ) * (  ( x*x ) * ( x*x )  )  )  )  ) + (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  ( x*x ) * ( x*730360817688889.1 )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) *pow( ( x*x ) ,3) )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  )  )  ) * (  ( x*x ) * (  ( x*-2470096698026468.0 ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
