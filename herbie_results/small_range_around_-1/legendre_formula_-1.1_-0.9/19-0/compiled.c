#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "0";

double f_if(float __attribute__((unused)) x) {
        float r29572276 = 1.0;
        return r29572276;
}

double f_id(double __attribute__((unused)) x) {
        double r29572277 = 1.0;
        return r29572277;
}


double f_of(float __attribute__((unused)) x) {
        float r29572278 = 1.0;
        return r29572278;
}

double f_od(double __attribute__((unused)) x) {
        double r29572279 = 1.0;
        return r29572279;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29572280;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r29572280, "1.0", 10, MPFR_RNDN);
}

double f_im(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r29572280, MPFR_RNDN);
}

static mpfr_t r29572281;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r29572281, "1.0", 10, MPFR_RNDN);
}

double f_fm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r29572281, MPFR_RNDN);
}

static mpfr_t r29572282;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r29572282, "1.0", 10, MPFR_RNDN);
}

double f_dm(double __attribute__((unused)) x) {
        ;
        return mpfr_get_d(r29572282, MPFR_RNDN);
}

