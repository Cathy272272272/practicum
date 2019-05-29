#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r11629280 = 1.0;
        return r11629280;
}

double f_id(double __attribute__((unused)) x) {
        double r11629281 = 1.0;
        return r11629281;
}


double f_of(float __attribute__((unused)) x) {
        float r11629282 = 1.0;
        return r11629282;
}

double f_od(double __attribute__((unused)) x) {
        double r11629283 = 1.0;
        return r11629283;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11629284;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629284, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11629284, MPFR_RNDN);
}

static mpfr_t r11629285;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629285, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11629285, MPFR_RNDN);
}

static mpfr_t r11629286;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11629286, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11629286, MPFR_RNDN);
}

