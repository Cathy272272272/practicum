#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9405564 = 2.0;
        float r9405565 = x;
        float r9405566 = r9405564 * r9405565;
        return r9405566;
}

double f_id(double x) {
        double r9405567 = 2.0;
        double r9405568 = x;
        double r9405569 = r9405567 * r9405568;
        return r9405569;
}


double f_of(float x) {
        float r9405570 = 2.0;
        float r9405571 = x;
        float r9405572 = r9405570 * r9405571;
        return r9405572;
}

double f_od(double x) {
        double r9405573 = 2.0;
        double r9405574 = x;
        double r9405575 = r9405573 * r9405574;
        return r9405575;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9405576, r9405577, r9405578;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9405576, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9405577);
        mpfr_init(r9405578);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9405577, x, MPFR_RNDN);
        mpfr_mul(r9405578, r9405576, r9405577, MPFR_RNDN);
        return mpfr_get_d(r9405578, MPFR_RNDN);
}

static mpfr_t r9405579, r9405580, r9405581;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9405579, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9405580);
        mpfr_init(r9405581);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9405580, x, MPFR_RNDN);
        mpfr_mul(r9405581, r9405579, r9405580, MPFR_RNDN);
        return mpfr_get_d(r9405581, MPFR_RNDN);
}

static mpfr_t r9405582, r9405583, r9405584;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9405582, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9405583);
        mpfr_init(r9405584);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9405583, x, MPFR_RNDN);
        mpfr_mul(r9405584, r9405582, r9405583, MPFR_RNDN);
        return mpfr_get_d(r9405584, MPFR_RNDN);
}

