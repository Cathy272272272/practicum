#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r7082520 = 1.0;
        return r7082520;
}

double f_id(double __attribute__((unused)) x) {
        double r7082521 = 1.0;
        return r7082521;
}


double f_of(float __attribute__((unused)) x) {
        float r7082522 = 1.0;
        return r7082522;
}

double f_od(double __attribute__((unused)) x) {
        double r7082523 = 1.0;
        return r7082523;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7082524;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7082524, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7082524, MPFR_RNDN);
}

static mpfr_t r7082525;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7082525, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7082525, MPFR_RNDN);
}

static mpfr_t r7082526;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7082526, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7082526, MPFR_RNDN);
}

