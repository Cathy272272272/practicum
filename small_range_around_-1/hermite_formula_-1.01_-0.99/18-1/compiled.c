#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r60483144 = 2.0;
        float r60483145 = x;
        float r60483146 = r60483144 * r60483145;
        return r60483146;
}

double f_id(double x) {
        double r60483147 = 2.0;
        double r60483148 = x;
        double r60483149 = r60483147 * r60483148;
        return r60483149;
}


double f_of(float x) {
        float r60483150 = 2.0;
        float r60483151 = x;
        float r60483152 = r60483150 * r60483151;
        return r60483152;
}

double f_od(double x) {
        double r60483153 = 2.0;
        double r60483154 = x;
        double r60483155 = r60483153 * r60483154;
        return r60483155;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60483156, r60483157, r60483158;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60483156, "2.0", 10, MPFR_RNDN);
        mpfr_init(r60483157);
        mpfr_init(r60483158);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60483157, x, MPFR_RNDN);
        mpfr_mul(r60483158, r60483156, r60483157, MPFR_RNDN);
        return mpfr_get_d(r60483158, MPFR_RNDN);
}

static mpfr_t r60483159, r60483160, r60483161;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60483159, "2.0", 10, MPFR_RNDN);
        mpfr_init(r60483160);
        mpfr_init(r60483161);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r60483160, x, MPFR_RNDN);
        mpfr_mul(r60483161, r60483159, r60483160, MPFR_RNDN);
        return mpfr_get_d(r60483161, MPFR_RNDN);
}

static mpfr_t r60483162, r60483163, r60483164;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60483162, "2.0", 10, MPFR_RNDN);
        mpfr_init(r60483163);
        mpfr_init(r60483164);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r60483163, x, MPFR_RNDN);
        mpfr_mul(r60483164, r60483162, r60483163, MPFR_RNDN);
        return mpfr_get_d(r60483164, MPFR_RNDN);
}

