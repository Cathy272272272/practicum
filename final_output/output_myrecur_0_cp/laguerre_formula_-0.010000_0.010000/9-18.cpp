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

//#include <cmath>
using namespace std;
//static const int k = 3;

template <class T>
T n_factorial(T n){
    if ( n == 0 ) return 1;
    return n*n_factorial(n-1);
}
template <class T>
T my_pow(T x, unsigned n){
    if ( n == 0 ) return T(1.0);
    return x * my_pow(x, n-1);
}
template <class T>
T my_hermite(unsigned n, T x){
    if (n == 0 ) return T(1);
    T res(0);
    T cnt = n - 2*(n/2);
    T n_start = n_factorial(cnt);
    T m_start = n_factorial(n/2);
    T n_multiply = n_factorial(n);
    T neg_one = my_pow(-1, n/2);
    T x_start = my_pow(2*x, cnt);
    
    for ( unsigned i = n/2; i > 0; i-- ){
        res += neg_one * x_start / m_start / n_start;
        neg_one *= (-1);
        x_start *= 4*x*x;
        m_start /= i;
        n_start *= (cnt+1) *(cnt+2);
        cnt += 2;
    }
    res += neg_one * x_start / m_start / n_start;
    return n_multiply * res;
}

template <class T>
T my_laguerre(unsigned n, T x){
    if (n == 0 ) return 1.0;
    T n_multiple = 1;
    T k_multiple = 1;
    T x_multiple = 1.0;
    T neg = 1.0;
    T res = 1.0;
    for ( unsigned i = 1; i <= n; i++ ){
        x_multiple *= x;
        k_multiple *= i;
        n_multiple *= (n-i+1);
        neg *= (-1);
        res += neg * n_multiple / k_multiple / k_multiple * x_multiple;
    }
    return res;
}

template <class T>
T my_legendre(unsigned n, T x){
    if (n == 0 ) return 1.0;
    T x_half = 1.0;
    T n_minus_multiple = n_factorial(T(n));
    T n_plus_multiple = n_minus_multiple;
    T k_multiple = 1;
    T res = 1.0;
    for ( unsigned i = 1; i <= n; i++ ){
        n_minus_multiple /= (n-i+1);
        n_plus_multiple *= (n+i);
        k_multiple *= i;
        x_half *= ((x - 1.0) / 2);
        res += n_plus_multiple / n_minus_multiple / k_multiple / k_multiple * x_half;
    }
    return res;
}


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
	rel = my_laguerre(18, x + 0.0);
	#else
	rel =  (  (  ( -1e-06*x ) * (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) * ( x*x )  )  )  ) + (  (  (  (  (  ( -71.4*x ) * (  ( x*x ) * ( x*x )  )  ) + (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) *25.783333 )  )  ) + (  (  (  ( 127.5*x ) *pow(x,3) ) + (  ( x*-18.0 ) +1.0 )  ) + (  (  ( -136.0*x ) * ( x*x )  ) + ( x* ( x*76.5 )  )  )  )  ) + (  (  (  ( -6.314286*x ) * ( pow(x,3)*pow(x,3) )  ) + (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) *1.085268 )  )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * ( x*-0.133984 )  )  )  ) + (  (  (  (  ( pow(x,3)*pow(x,3) ) *pow(x,3) ) * (  ( x*x ) *-0.000797 )  ) + (  (  (  ( x*x ) * ( x*x )  ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *0.012059 )  )  ) + (  (  ( pow(x,3)*pow(x,3) ) * (  ( x*x ) * ( x*x )  )  ) * (  ( x*x ) *3.9e-05 )  )  )  )  ) ;
	#endif
	OFT outv = rel;
	fwrite(&outv, sizeof(OFT), 1, ofile);
	fclose(ifile);
	fclose(ofile);
	return 0;
}
