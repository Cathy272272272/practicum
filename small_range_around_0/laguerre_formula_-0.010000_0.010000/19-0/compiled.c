#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r3281821 = 1.0;
        return r3281821;
}

double f_id(double __attribute__((unused)) x) {
        double r3281822 = 1.0;
        return r3281822;
}


double f_of(float __attribute__((unused)) x) {
        float r3281823 = 1.0;
        return r3281823;
}

double f_od(double __attribute__((unused)) x) {
        double r3281824 = 1.0;
        return r3281824;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3281825;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281825, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3281825, MPFR_RNDN);
}

static mpfr_t r3281826;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281826, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3281826, MPFR_RNDN);
}

static mpfr_t r3281827;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281827, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r3281827, MPFR_RNDN);
}

