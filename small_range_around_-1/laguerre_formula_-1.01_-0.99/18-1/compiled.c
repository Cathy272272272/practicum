#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r11548557 = 1.0;
        float r11548558 = -1.0;
        float r11548559 = x;
        float r11548560 = r11548558 * r11548559;
        float r11548561 = r11548557 + r11548560;
        return r11548561;
}

double f_id(double x) {
        double r11548562 = 1.0;
        double r11548563 = -1.0;
        double r11548564 = x;
        double r11548565 = r11548563 * r11548564;
        double r11548566 = r11548562 + r11548565;
        return r11548566;
}


double f_of(float x) {
        float r11548567 = 1.0;
        float r11548568 = -1.0;
        float r11548569 = x;
        float r11548570 = r11548568 * r11548569;
        float r11548571 = r11548567 + r11548570;
        return r11548571;
}

double f_od(double x) {
        double r11548572 = 1.0;
        double r11548573 = -1.0;
        double r11548574 = x;
        double r11548575 = r11548573 * r11548574;
        double r11548576 = r11548572 + r11548575;
        return r11548576;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11548577, r11548578, r11548579, r11548580, r11548581;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11548577, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11548578, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11548579);
        mpfr_init(r11548580);
        mpfr_init(r11548581);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11548579, x, MPFR_RNDN);
        mpfr_mul(r11548580, r11548578, r11548579, MPFR_RNDN);
        mpfr_add(r11548581, r11548577, r11548580, MPFR_RNDN);
        return mpfr_get_d(r11548581, MPFR_RNDN);
}

static mpfr_t r11548582, r11548583, r11548584, r11548585, r11548586;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11548582, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11548583, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11548584);
        mpfr_init(r11548585);
        mpfr_init(r11548586);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11548584, x, MPFR_RNDN);
        mpfr_mul(r11548585, r11548583, r11548584, MPFR_RNDN);
        mpfr_add(r11548586, r11548582, r11548585, MPFR_RNDN);
        return mpfr_get_d(r11548586, MPFR_RNDN);
}

static mpfr_t r11548587, r11548588, r11548589, r11548590, r11548591;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11548587, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11548588, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11548589);
        mpfr_init(r11548590);
        mpfr_init(r11548591);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11548589, x, MPFR_RNDN);
        mpfr_mul(r11548590, r11548588, r11548589, MPFR_RNDN);
        mpfr_add(r11548591, r11548587, r11548590, MPFR_RNDN);
        return mpfr_get_d(r11548591, MPFR_RNDN);
}

