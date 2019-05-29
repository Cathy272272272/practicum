#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r11056642 = 1.0;
        return r11056642;
}

double f_id(double __attribute__((unused)) x) {
        double r11056643 = 1.0;
        return r11056643;
}


double f_of(float __attribute__((unused)) x) {
        float r11056644 = 1.0;
        return r11056644;
}

double f_od(double __attribute__((unused)) x) {
        double r11056645 = 1.0;
        return r11056645;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11056646;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11056646, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11056646, MPFR_RNDN);
}

static mpfr_t r11056647;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11056647, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11056647, MPFR_RNDN);
}

static mpfr_t r11056648;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11056648, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11056648, MPFR_RNDN);
}

