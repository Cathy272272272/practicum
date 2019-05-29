#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r10202364 = 1.0;
        return r10202364;
}

double f_id(double __attribute__((unused)) x) {
        double r10202365 = 1.0;
        return r10202365;
}


double f_of(float __attribute__((unused)) x) {
        float r10202366 = 1.0;
        return r10202366;
}

double f_od(double __attribute__((unused)) x) {
        double r10202367 = 1.0;
        return r10202367;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10202368;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10202368, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10202368, MPFR_RNDN);
}

static mpfr_t r10202369;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10202369, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10202369, MPFR_RNDN);
}

static mpfr_t r10202370;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10202370, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r10202370, MPFR_RNDN);
}

