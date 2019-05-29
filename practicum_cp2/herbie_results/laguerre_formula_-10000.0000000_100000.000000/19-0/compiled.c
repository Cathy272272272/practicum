#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r10924872 = 1.0;
        return r10924872;
}

double f_id(double __attribute__((unused)) x) {
        double r10924873 = 1.0;
        return r10924873;
}


double f_of(float __attribute__((unused)) x) {
        float r10924874 = 1.0;
        return r10924874;
}

double f_od(double __attribute__((unused)) x) {
        double r10924875 = 1.0;
        return r10924875;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10924876;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10924876, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10924876, MPFR_RNDN);
}

static mpfr_t r10924877;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10924877, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10924877, MPFR_RNDN);
}

static mpfr_t r10924878;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10924878, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10924878, MPFR_RNDN);
}

