#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r26950451 = 1.0;
        return r26950451;
}

double f_id(double __attribute__((unused)) x) {
        double r26950452 = 1.0;
        return r26950452;
}


double f_of(float __attribute__((unused)) x) {
        float r26950453 = 1.0;
        return r26950453;
}

double f_od(double __attribute__((unused)) x) {
        double r26950454 = 1.0;
        return r26950454;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26950455;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r26950455, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r26950455, MPFR_RNDN);
}

static mpfr_t r26950456;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r26950456, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r26950456, MPFR_RNDN);
}

static mpfr_t r26950457;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r26950457, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r26950457, MPFR_RNDN);
}

