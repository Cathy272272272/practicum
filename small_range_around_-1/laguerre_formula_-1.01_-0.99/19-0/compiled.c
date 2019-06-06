#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r11548592 = 1.0;
        return r11548592;
}

double f_id(double __attribute__((unused)) x) {
        double r11548593 = 1.0;
        return r11548593;
}


double f_of(float __attribute__((unused)) x) {
        float r11548594 = 1.0;
        return r11548594;
}

double f_od(double __attribute__((unused)) x) {
        double r11548595 = 1.0;
        return r11548595;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11548596;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11548596, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11548596, MPFR_RNDN);
}

static mpfr_t r11548597;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11548597, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11548597, MPFR_RNDN);
}

static mpfr_t r11548598;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11548598, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11548598, MPFR_RNDN);
}

