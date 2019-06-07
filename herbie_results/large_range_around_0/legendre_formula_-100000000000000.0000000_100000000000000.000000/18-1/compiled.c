#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6435561 = 1.0;
        float r6435562 = x;
        float r6435563 = r6435561 * r6435562;
        return r6435563;
}

double f_id(double x) {
        double r6435564 = 1.0;
        double r6435565 = x;
        double r6435566 = r6435564 * r6435565;
        return r6435566;
}


double f_of(float x) {
        float r6435567 = 1.0;
        float r6435568 = x;
        float r6435569 = r6435567 * r6435568;
        return r6435569;
}

double f_od(double x) {
        double r6435570 = 1.0;
        double r6435571 = x;
        double r6435572 = r6435570 * r6435571;
        return r6435572;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6435573, r6435574, r6435575;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435573, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6435574);
        mpfr_init(r6435575);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6435574, x, MPFR_RNDN);
        mpfr_mul(r6435575, r6435573, r6435574, MPFR_RNDN);
        return mpfr_get_d(r6435575, MPFR_RNDN);
}

static mpfr_t r6435576, r6435577, r6435578;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435576, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6435577);
        mpfr_init(r6435578);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6435577, x, MPFR_RNDN);
        mpfr_mul(r6435578, r6435576, r6435577, MPFR_RNDN);
        return mpfr_get_d(r6435578, MPFR_RNDN);
}

static mpfr_t r6435579, r6435580, r6435581;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435579, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6435580);
        mpfr_init(r6435581);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6435580, x, MPFR_RNDN);
        mpfr_mul(r6435581, r6435579, r6435580, MPFR_RNDN);
        return mpfr_get_d(r6435581, MPFR_RNDN);
}

