#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10585112 = 1.0;
        float r10585113 = -2.0;
        float r10585114 = x;
        float r10585115 = r10585113 * r10585114;
        float r10585116 = r10585112 + r10585115;
        float r10585117 = 0.5;
        float r10585118 = r10585114 * r10585114;
        float r10585119 = r10585117 * r10585118;
        float r10585120 = r10585116 + r10585119;
        return r10585120;
}

double f_id(double x) {
        double r10585121 = 1.0;
        double r10585122 = -2.0;
        double r10585123 = x;
        double r10585124 = r10585122 * r10585123;
        double r10585125 = r10585121 + r10585124;
        double r10585126 = 0.5;
        double r10585127 = r10585123 * r10585123;
        double r10585128 = r10585126 * r10585127;
        double r10585129 = r10585125 + r10585128;
        return r10585129;
}


double f_of(float x) {
        float r10585130 = 1.0;
        float r10585131 = -2.0;
        float r10585132 = 0.5;
        float r10585133 = x;
        float r10585134 = r10585132 * r10585133;
        float r10585135 = r10585131 + r10585134;
        float r10585136 = r10585135 * r10585133;
        float r10585137 = r10585130 + r10585136;
        return r10585137;
}

double f_od(double x) {
        double r10585138 = 1.0;
        double r10585139 = -2.0;
        double r10585140 = 0.5;
        double r10585141 = x;
        double r10585142 = r10585140 * r10585141;
        double r10585143 = r10585139 + r10585142;
        double r10585144 = r10585143 * r10585141;
        double r10585145 = r10585138 + r10585144;
        return r10585145;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10585146, r10585147, r10585148, r10585149, r10585150, r10585151, r10585152, r10585153, r10585154;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10585146, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585147, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10585148);
        mpfr_init(r10585149);
        mpfr_init(r10585150);
        mpfr_init_set_str(r10585151, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10585152);
        mpfr_init(r10585153);
        mpfr_init(r10585154);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10585148, x, MPFR_RNDN);
        mpfr_mul(r10585149, r10585147, r10585148, MPFR_RNDN);
        mpfr_add(r10585150, r10585146, r10585149, MPFR_RNDN);
        ;
        mpfr_mul(r10585152, r10585148, r10585148, MPFR_RNDN);
        mpfr_mul(r10585153, r10585151, r10585152, MPFR_RNDN);
        mpfr_add(r10585154, r10585150, r10585153, MPFR_RNDN);
        return mpfr_get_d(r10585154, MPFR_RNDN);
}

static mpfr_t r10585155, r10585156, r10585157, r10585158, r10585159, r10585160, r10585161, r10585162;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10585155, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585156, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585157, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10585158);
        mpfr_init(r10585159);
        mpfr_init(r10585160);
        mpfr_init(r10585161);
        mpfr_init(r10585162);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10585158, x, MPFR_RNDN);
        mpfr_mul(r10585159, r10585157, r10585158, MPFR_RNDN);
        mpfr_add(r10585160, r10585156, r10585159, MPFR_RNDN);
        mpfr_mul(r10585161, r10585160, r10585158, MPFR_RNDN);
        mpfr_add(r10585162, r10585155, r10585161, MPFR_RNDN);
        return mpfr_get_d(r10585162, MPFR_RNDN);
}

static mpfr_t r10585163, r10585164, r10585165, r10585166, r10585167, r10585168, r10585169, r10585170;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10585163, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585164, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585165, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10585166);
        mpfr_init(r10585167);
        mpfr_init(r10585168);
        mpfr_init(r10585169);
        mpfr_init(r10585170);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10585166, x, MPFR_RNDN);
        mpfr_mul(r10585167, r10585165, r10585166, MPFR_RNDN);
        mpfr_add(r10585168, r10585164, r10585167, MPFR_RNDN);
        mpfr_mul(r10585169, r10585168, r10585166, MPFR_RNDN);
        mpfr_add(r10585170, r10585163, r10585169, MPFR_RNDN);
        return mpfr_get_d(r10585170, MPFR_RNDN);
}

