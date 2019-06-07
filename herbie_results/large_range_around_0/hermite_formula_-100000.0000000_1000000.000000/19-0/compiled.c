#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r7641903 = 1.0;
        return r7641903;
}

double f_id(double __attribute__((unused)) x) {
        double r7641904 = 1.0;
        return r7641904;
}


double f_of(float __attribute__((unused)) x) {
        float r7641905 = 1.0;
        return r7641905;
}

double f_od(double __attribute__((unused)) x) {
        double r7641906 = 1.0;
        return r7641906;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7641907;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641907, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7641907, MPFR_RNDN);
}

static mpfr_t r7641908;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641908, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7641908, MPFR_RNDN);
}

static mpfr_t r7641909;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7641909, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r7641909, MPFR_RNDN);
}

