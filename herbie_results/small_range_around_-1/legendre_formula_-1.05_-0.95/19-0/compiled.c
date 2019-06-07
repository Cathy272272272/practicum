#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r33708899 = 1.0;
        return r33708899;
}

double f_id(double __attribute__((unused)) x) {
        double r33708900 = 1.0;
        return r33708900;
}


double f_of(float __attribute__((unused)) x) {
        float r33708901 = 1.0;
        return r33708901;
}

double f_od(double __attribute__((unused)) x) {
        double r33708902 = 1.0;
        return r33708902;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33708903;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r33708903, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r33708903, MPFR_RNDN);
}

static mpfr_t r33708904;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r33708904, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r33708904, MPFR_RNDN);
}

static mpfr_t r33708905;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r33708905, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r33708905, MPFR_RNDN);
}

