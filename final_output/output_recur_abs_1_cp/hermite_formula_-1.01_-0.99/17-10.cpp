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
	rel = __libcpp_hermite_recurrence(10, x + 0.0);
	#else
	rel =  (  (  ( cbrt( (  (  (  ( x*x ) * ( x*x )  ) * (  (  ( x*x ) *161280.0 ) +-403200.0 )  ) + (  (  (  ( x*x ) *302400.0 ) +-30240.0 ) + (  (  ( x*x ) *-23040.0 ) *pow( ( x*x ) ,3) )  )  ) )*cbrt( (  (  (  ( x*x ) * ( x*x )  ) * (  (  ( x*x ) *161280.0 ) +-403200.0 )  ) + (  (  (  ( x*x ) *302400.0 ) +-30240.0 ) + (  (  ( x*x ) *-23040.0 ) *pow( ( x*x ) ,3) )  )  ) ) ) *cbrt( (  (  (  (  (  (  (  (  ( 302400.0*x ) *x ) + (  (  ( x*-403200.0 ) *pow(x,3) ) +-30240.0 )  ) * (  (  ( 302400.0*x ) *x ) + (  ( x*-403200.0 ) *pow(x,3) )  )  ) + ( -30240.0*-30240.0 )  ) * (  (  ( pow( (  ( x*-23040.0 ) *x ) ,3)*pow( (  ( x*-23040.0 ) *x ) ,3) ) + (  ( pow(161280.0,3)*pow(161280.0,3) ) - (  ( pow(x,3)*pow(x,3) ) * ( pow(-23040.0,3)*pow(161280.0,3) )  )  )  ) * (  (  (  (  (  ( x*-23040.0 ) *x ) * (  ( x*-23040.0 ) *x )  ) - (  ( 161280.0*161280.0 ) - (  ( x*x ) * ( 161280.0*-23040.0 )  )  )  ) * (  (  (  ( x*-23040.0 ) *x ) * (  ( x*-23040.0 ) *x )  ) + (  ( 161280.0*161280.0 ) - (  ( x*x ) * ( 161280.0*-23040.0 )  )  )  )  ) * (  (  ( -30240.0*-30240.0 ) * ( -30240.0*-30240.0 )  ) -pow( (  (  ( 302400.0*x ) *x ) + (  ( x*-403200.0 ) *pow(x,3) )  ) , ( 3+1 ) ) )  )  )  ) + (  (  (  (  (  (  ( x*-23040.0 ) *x ) * (  ( x*-23040.0 ) *x )  ) - (  ( 161280.0*161280.0 ) - (  ( x*x ) * ( 161280.0*-23040.0 )  )  )  ) * ( pow(-30240.0,3)-pow( (  (  ( 302400.0*x ) *x ) + (  ( x*-403200.0 ) *pow(x,3) )  ) ,3) )  ) * (  (  (  ( pow(x,3)*pow(x,3) ) *pow( (  ( x*-23040.0 ) *x ) ,3) ) * ( pow( (  ( x*-23040.0 ) *x ) ,3)*pow( (  ( x*-23040.0 ) *x ) ,3) )  ) + ( pow(pow(161280.0,3),3)* ( pow(x,3)*pow(x,3) )  )  )  ) * (  ( -30240.0*-30240.0 ) + (  (  (  ( 302400.0*x ) *x ) + (  ( x*-403200.0 ) *pow(x,3) )  ) * (  (  ( 302400.0*x ) *x ) + (  ( x*-403200.0 ) *pow(x,3) )  )  )  )  )  ) / (  (  (  ( pow(161280.0,3)*pow(161280.0,3) ) - ( pow( ( x*x ) ,3)* ( pow(-23040.0,3)*pow(161280.0,3) )  )  ) + ( pow( (  ( x*x ) *-23040.0 ) ,3)*pow( (  ( x*x ) *-23040.0 ) ,3) )  ) * (  (  (  (  (  ( x*x ) *-23040.0 ) * (  ( x*x ) *-23040.0 )  ) - (  ( 161280.0*161280.0 ) - (  ( x*x ) * ( -23040.0*161280.0 )  )  )  ) * (  (  (  (  ( 302400.0*x ) *x ) + ( pow(x,3)* ( x*-403200.0 )  )  ) * (  (  ( 302400.0*x ) *x ) + ( pow(x,3)* ( x*-403200.0 )  )  )  ) + ( -30240.0*-30240.0 )  )  ) * (  (  (  (  ( 302400.0*x ) *x ) + ( pow(x,3)* ( x*-403200.0 )  )  ) * ( -30240.0+ (  (  ( 302400.0*x ) *x ) + ( pow(x,3)* ( x*-403200.0 )  )  )  )  ) + ( -30240.0*-30240.0 )  )  )  )  ) / (  ( -30240.0- (  (  ( x*-403200.0 ) *pow(x,3) ) + ( x* ( x*302400.0 )  )  )  ) * (  (  (  ( x*x ) *-23040.0 ) * (  ( x*x ) *-23040.0 )  ) + (  ( 161280.0*161280.0 ) - (  (  ( x*x ) *-23040.0 ) *161280.0 )  )  )  )  ) ) ) + ( 1024.0* (  (  (  (  (  (  (  (  ( x*x ) *x ) *x ) *x ) *x ) *x ) *x ) *x ) *x )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
