#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r31482454 = 1.0;
        return r31482454;
}

double f_id(double __attribute__((unused)) x) {
        double r31482455 = 1.0;
        return r31482455;
}


double f_of(float __attribute__((unused)) x) {
        float r31482456 = 1.0;
        return r31482456;
}

double f_od(double __attribute__((unused)) x) {
        double r31482457 = 1.0;
        return r31482457;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31482458;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r31482458, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r31482458, MPFR_RNDN);
}

static mpfr_t r31482459;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r31482459, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r31482459, MPFR_RNDN);
}

static mpfr_t r31482460;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r31482460, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r31482460, MPFR_RNDN);
}

