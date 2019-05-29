#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r9831877 = 1.0;
        return r9831877;
}

double f_id(double __attribute__((unused)) x) {
        double r9831878 = 1.0;
        return r9831878;
}


double f_of(float __attribute__((unused)) x) {
        float r9831879 = 1.0;
        return r9831879;
}

double f_od(double __attribute__((unused)) x) {
        double r9831880 = 1.0;
        return r9831880;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9831881;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831881, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9831881, MPFR_RNDN);
}

static mpfr_t r9831882;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831882, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9831882, MPFR_RNDN);
}

static mpfr_t r9831883;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9831883, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r9831883, MPFR_RNDN);
}

