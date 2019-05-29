#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r9856644 = 1.0;
        return r9856644;
}

double f_id(double __attribute__((unused)) x) {
        double r9856645 = 1.0;
        return r9856645;
}


double f_of(float __attribute__((unused)) x) {
        float r9856646 = 1.0;
        return r9856646;
}

double f_od(double __attribute__((unused)) x) {
        double r9856647 = 1.0;
        return r9856647;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9856648;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9856648, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9856648, MPFR_RNDN);
}

static mpfr_t r9856649;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9856649, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9856649, MPFR_RNDN);
}

static mpfr_t r9856650;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9856650, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9856650, MPFR_RNDN);
}

