#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r60546219 = 1.0;
        return r60546219;
}

double f_id(double __attribute__((unused)) x) {
        double r60546220 = 1.0;
        return r60546220;
}


double f_of(float __attribute__((unused)) x) {
        float r60546221 = 1.0;
        return r60546221;
}

double f_od(double __attribute__((unused)) x) {
        double r60546222 = 1.0;
        return r60546222;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60546223;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60546223, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r60546223, MPFR_RNDN);
}

static mpfr_t r60546224;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60546224, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r60546224, MPFR_RNDN);
}

static mpfr_t r60546225;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r60546225, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r60546225, MPFR_RNDN);
}

