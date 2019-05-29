#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r10747856 = 1.0;
        return r10747856;
}

double f_id(double __attribute__((unused)) x) {
        double r10747857 = 1.0;
        return r10747857;
}


double f_of(float __attribute__((unused)) x) {
        float r10747858 = 1.0;
        return r10747858;
}

double f_od(double __attribute__((unused)) x) {
        double r10747859 = 1.0;
        return r10747859;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10747860;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10747860, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10747860, MPFR_RNDN);
}

static mpfr_t r10747861;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10747861, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10747861, MPFR_RNDN);
}

static mpfr_t r10747862;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10747862, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10747862, MPFR_RNDN);
}

