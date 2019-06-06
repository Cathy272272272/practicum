#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r63173656 = 1.0;
        return r63173656;
}

double f_id(double __attribute__((unused)) x) {
        double r63173657 = 1.0;
        return r63173657;
}


double f_of(float __attribute__((unused)) x) {
        float r63173658 = 1.0;
        return r63173658;
}

double f_od(double __attribute__((unused)) x) {
        double r63173659 = 1.0;
        return r63173659;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63173660;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r63173660, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r63173660, MPFR_RNDN);
}

static mpfr_t r63173661;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r63173661, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r63173661, MPFR_RNDN);
}

static mpfr_t r63173662;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r63173662, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r63173662, MPFR_RNDN);
}

