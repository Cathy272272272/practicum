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
	rel = __libcpp_legendre_recurrence(35, x + 0.0);
	#else
	rel =  (  (  (  (  (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) )  ) * (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( 3265050409.148181*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  ) + (  ( x*x ) * (  ( x*x ) * ( x*-264548456152.9956 )  )  )  )  ) + (  (  ( pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) )* ( x*x )  ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  (  ( x*110939675160.93364 ) * ( x*x )  ) * ( x*x )  )  )  ) + (  ( pow( ( x*x ) ,3)*pow( ( x*x ) ,3) ) * ( pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) )* (  ( -28155144832.509674*x ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  ) + (  (  (  (  (  ( -4.754182*x ) + (  ( x*x ) * ( 996.793406*x )  )  ) + (  ( 323990841.608959* ( x*x )  ) *pow(pow(x,3),3) )  ) + (  (  ( pow(x,3)* ( x*1821568.749143 )  ) *pow(x,3) ) + (  (  ( x*-30460677.416227 ) * ( x*x )  ) * ( pow(x,3)*pow(x,3) )  )  )  ) + (  ( x*-62199.908507 ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * (  ( -2342703008.557087*x ) * ( x*x )  )  )  ) + (  (  ( pow(x,3)*pow(x,3) ) * ( x* ( 12025875443.926378*x )  )  ) * (  ( pow(x,3)*pow(x,3) ) *x )  )  ) + (  (  ( x*-45097032914.72392 ) *pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) ) ) + (  (  ( pow(x,3)* ( x*125796986551.5983 )  ) *pow(x,3) ) * (  ( pow(x,3)*pow(x,3) ) * ( pow(x,3)*pow(x,3) )  )  )  )  )  )  ) + (  (  (  ( pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) )*x ) * (  (  (  ( 426216957135.38184*x ) *x ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  ( -490498858867.27545*pow(pow(x,3),3) ) *pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) ) )  ) + (  ( pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) )* (  ( x*x ) * (  ( x*x ) * ( x*-263574638489.0631 )  )  )  ) + (  ( x*x ) * ( pow( (  ( x*x ) * ( x*x )  ) , ( 3+1 ) )* (  ( x*415676999040.06396 ) * (  ( x*x ) * ( x*x )  )  )  )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
