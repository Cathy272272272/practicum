#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r11591425 = 1.0;
        return r11591425;
}

double f_id(double __attribute__((unused)) x) {
        double r11591426 = 1.0;
        return r11591426;
}


double f_of(float __attribute__((unused)) x) {
        float r11591427 = 1.0;
        return r11591427;
}

double f_od(double __attribute__((unused)) x) {
        double r11591428 = 1.0;
        return r11591428;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11591429;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11591429, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11591429, MPFR_RNDN);
}

static mpfr_t r11591430;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11591430, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11591430, MPFR_RNDN);
}

static mpfr_t r11591431;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11591431, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r11591431, MPFR_RNDN);
}

