#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r6863401 = 1.0;
        return r6863401;
}

double f_id(double __attribute__((unused)) x) {
        double r6863402 = 1.0;
        return r6863402;
}


double f_of(float __attribute__((unused)) x) {
        float r6863403 = 1.0;
        return r6863403;
}

double f_od(double __attribute__((unused)) x) {
        double r6863404 = 1.0;
        return r6863404;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6863405;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863405, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6863405, MPFR_RNDN);
}

static mpfr_t r6863406;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863406, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6863406, MPFR_RNDN);
}

static mpfr_t r6863407;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6863407, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r6863407, MPFR_RNDN);
}

