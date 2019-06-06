#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r83945086 = 1.0;
        return r83945086;
}

double f_id(double __attribute__((unused)) x) {
        double r83945087 = 1.0;
        return r83945087;
}


double f_of(float __attribute__((unused)) x) {
        float r83945088 = 1.0;
        return r83945088;
}

double f_od(double __attribute__((unused)) x) {
        double r83945089 = 1.0;
        return r83945089;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83945090;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83945090, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r83945090, MPFR_RNDN);
}

static mpfr_t r83945091;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83945091, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r83945091, MPFR_RNDN);
}

static mpfr_t r83945092;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83945092, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r83945092, MPFR_RNDN);
}

