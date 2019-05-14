
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
    
//    FT x = in_x;
    FT rel = 0;
    
//    FT x2 = x*x;
//    FT x3 = x2*x;
    
    FT x[128];
    x[0] = 1;
    x[1] = 1*in_x;
    for ( int i = 2; i < 20; i++ ) x[i] = x[i-1] * in_x;
    
#ifdef ORIG
//    rel = (-x3 + 3*(k+3)*x2 - 3*(k+2)*(k+3)*x + (k+1)*(k+2)*(k+3)) / 6;
    rel = 1680 - 13440 * x[2] + 13440 * x[4] - 3584 * x[6] + 256 * x[8];

//    -2.707031*x[1]+58.652344*x[3]-351.914062*x[5]+854.648438*x[7]-902.128906*x[9]+344.449219*x[11];
//    ((((−2.707031*x+58.652344*((x*x)*x))−351.914062*((((x*x)*x)*x)*x))+854.648438*((((((x*x)*x)*x)*x)*x)*x))−902.128906*((((((((x*x)*x)*x)*x)*x)*x)*x)*x))+344.449219*((((((((((x*x)*x)*x)*x)*x)*x)*x)*x)*x)*x);
    
    
#else
    rel = 256 * x[8] + 1680 - 3584 * x[6] + x[2] * (x[2] * 13440 - 13440);
//    rel = (3*(k+3) - x) / (6 / x) - (3*(k+2)*(k+3)*x - (k+1)*(k+2)*(k+3)) / 6;

//    rel = pow(-pow(x[2],(1+3))*(902.128906*x[1]),(1/3));
//    −2.707031*x[1]+58.652344*x[3]−351.914062*x[5]+854.648438*x[7]+((x[2]^(1+3)*(−902.128906*x))^(1/3)*(x[2]^(1+3)*(−902.128906*x))^(1/3)*(x[2]^3*(x[2]*(−902.128906*x)))^(1/3)+344.449219*x[11];
//    ((((−2.707031*x+58.652344*((x*x)*x))+−351.914062*((((x*x)*x)*x)*x))+854.648438*((((((x*x)*x)*x)*x)*x)*x))+(((x*x)^(1+3)*(−902.128906*x))^(1/3)*((x*x)(1+3)*(−902.128906*x))^(1/3)*(−902.128906*((((((((x*x)*x)*x)*x)*x)*x)*x)*x))^(1/3))+344.449219*((((((((((x*x)*x)*x)*x)*x)*x)*x)*x)*x);
    
#endif
    
    OFT outv = rel;
    fwrite(&outv, sizeof(OFT), 1, ofile);
    
    fclose(ifile);
    fclose(ofile);
    
    return 0;
}

