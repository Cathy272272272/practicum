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
	rel = __libcpp_legendre_recurrence(14, x + 0.0);
	#else
	rel =  (  (  ( cbrt( ( pow( (  (  (  ( -373.908691+ ( x* ( x*2368.088379 )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( x*x ) *21.994629 )  ) + (  (  (  ( 2448.522949* ( x*x )  ) +-8252.429199 ) *pow(pow(x,3), ( 3+1 ) ) ) +-0.209473 )  ) ,3)+pow( (  (  (  ( pow(10893.206543,3)* ( x*x )  ) *pow(pow(x,3), ( 3+1 ) ) ) + ( pow( ( x*x ) , ( 3+1 ) )*pow(-7104.265137,3) )  ) / (  (  ( 10893.206543* ( x*x )  ) * ( 10893.206543* ( x*x )  )  ) + (  ( -7104.265137*-7104.265137 ) - (  ( -7104.265137*10893.206543 ) * ( x*x )  )  )  )  ) ,3) ) )*cbrt( ( pow( (  (  (  ( -373.908691+ ( x* ( x*2368.088379 )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( x*x ) *21.994629 )  ) + (  (  (  ( 2448.522949* ( x*x )  ) +-8252.429199 ) *pow(pow(x,3), ( 3+1 ) ) ) +-0.209473 )  ) ,3)+pow( (  (  (  ( pow(10893.206543,3)* ( x*x )  ) *pow(pow(x,3), ( 3+1 ) ) ) + ( pow( ( x*x ) , ( 3+1 ) )*pow(-7104.265137,3) )  ) / (  (  ( 10893.206543* ( x*x )  ) * ( 10893.206543* ( x*x )  )  ) + (  ( -7104.265137*-7104.265137 ) - (  ( -7104.265137*10893.206543 ) * ( x*x )  )  )  )  ) ,3) ) ) ) *cbrt( ( pow( (  (  (  ( 2448.522949* ( x*x )  ) +-8252.429199 ) *pow(pow(x,3), ( 3+1 ) ) ) + (  (  ( -373.908691+ (  ( x*x ) *2368.088379 )  ) * (  ( x*x ) * ( x*x )  )  ) + (  (  ( x*x ) *21.994629 ) +-0.209473 )  )  ) ,3)+pow( (  (  (  ( pow(10893.206543,3)* ( x*x )  ) *pow(pow(x,3), ( 3+1 ) ) ) + ( pow(-7104.265137,3)*pow( ( x*x ) , ( 3+1 ) ) )  ) / (  (  ( 10893.206543* ( x*x )  ) * ( 10893.206543* ( x*x )  )  ) + (  ( -7104.265137*-7104.265137 ) - (  ( 10893.206543*x ) * ( x*-7104.265137 )  )  )  )  ) ,3) ) ) ) / (  (  (  ( -0.209473+ (  ( x*x ) *21.994629 )  ) + (  (  ( -373.908691+ ( 2368.088379* ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( -8252.429199+ ( x* ( 2448.522949*x )  )  ) * (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  )  )  )  ) * (  ( -0.209473+ (  ( x*x ) *21.994629 )  ) + (  (  ( -373.908691+ ( 2368.088379* ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( -8252.429199+ ( x* ( 2448.522949*x )  )  ) * (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  )  )  )  )  ) + (  (  (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *pow(10893.206543,3) )  ) +pow(-7104.265137,3) ) *pow( ( x*x ) , ( 3+1 ) ) ) / (  (  ( 10893.206543* ( x*x )  ) * ( 10893.206543* ( x*x )  )  ) + (  ( -7104.265137*-7104.265137 ) - (  ( x*10893.206543 ) * ( x*-7104.265137 )  )  )  )  ) - (  ( -0.209473+ (  ( x*x ) *21.994629 )  ) + (  (  ( -373.908691+ ( 2368.088379* ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( -8252.429199+ ( x* ( 2448.522949*x )  )  ) * (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  )  )  )  )  ) * (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *pow(10893.206543,3) )  ) +pow(-7104.265137,3) ) *pow( ( x*x ) , ( 3+1 ) ) ) / (  (  ( 10893.206543* ( x*x )  ) * ( 10893.206543* ( x*x )  )  ) + (  ( -7104.265137*-7104.265137 ) - (  ( x*10893.206543 ) * ( x*-7104.265137 )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
