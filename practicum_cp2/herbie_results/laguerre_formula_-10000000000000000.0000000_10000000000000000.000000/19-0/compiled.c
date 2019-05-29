#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r10005894 = 1.0;
        return r10005894;
}

double f_id(double __attribute__((unused)) x) {
        double r10005895 = 1.0;
        return r10005895;
}


double f_of(float __attribute__((unused)) x) {
        float r10005896 = 1.0;
        return r10005896;
}

double f_od(double __attribute__((unused)) x) {
        double r10005897 = 1.0;
        return r10005897;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10005898;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10005898, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10005898, MPFR_RNDN);
}

static mpfr_t r10005899;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10005899, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10005899, MPFR_RNDN);
}

static mpfr_t r10005900;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10005900, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10005900, MPFR_RNDN);
}

