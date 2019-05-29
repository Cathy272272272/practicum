#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r13461736 = 1.0;
        return r13461736;
}

double f_id(double __attribute__((unused)) x) {
        double r13461737 = 1.0;
        return r13461737;
}


double f_of(float __attribute__((unused)) x) {
        float r13461738 = 1.0;
        return r13461738;
}

double f_od(double __attribute__((unused)) x) {
        double r13461739 = 1.0;
        return r13461739;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13461740;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13461740, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r13461740, MPFR_RNDN);
}

static mpfr_t r13461741;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13461741, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r13461741, MPFR_RNDN);
}

static mpfr_t r13461742;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13461742, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r13461742, MPFR_RNDN);
}

