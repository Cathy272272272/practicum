#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r8599598 = 1.0;
        float r8599599 = -1.0;
        float r8599600 = x;
        float r8599601 = r8599599 * r8599600;
        float r8599602 = r8599598 + r8599601;
        return r8599602;
}

double f_id(double x) {
        double r8599603 = 1.0;
        double r8599604 = -1.0;
        double r8599605 = x;
        double r8599606 = r8599604 * r8599605;
        double r8599607 = r8599603 + r8599606;
        return r8599607;
}


double f_of(float x) {
        float r8599608 = 1.0;
        float r8599609 = -1.0;
        float r8599610 = x;
        float r8599611 = r8599609 * r8599610;
        float r8599612 = r8599608 + r8599611;
        return r8599612;
}

double f_od(double x) {
        double r8599613 = 1.0;
        double r8599614 = -1.0;
        double r8599615 = x;
        double r8599616 = r8599614 * r8599615;
        double r8599617 = r8599613 + r8599616;
        return r8599617;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8599618, r8599619, r8599620, r8599621, r8599622;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8599618, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8599619, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r8599620);
        mpfr_init(r8599621);
        mpfr_init(r8599622);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8599620, x, MPFR_RNDN);
        mpfr_mul(r8599621, r8599619, r8599620, MPFR_RNDN);
        mpfr_add(r8599622, r8599618, r8599621, MPFR_RNDN);
        return mpfr_get_d(r8599622, MPFR_RNDN);
}

static mpfr_t r8599623, r8599624, r8599625, r8599626, r8599627;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8599623, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8599624, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r8599625);
        mpfr_init(r8599626);
        mpfr_init(r8599627);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8599625, x, MPFR_RNDN);
        mpfr_mul(r8599626, r8599624, r8599625, MPFR_RNDN);
        mpfr_add(r8599627, r8599623, r8599626, MPFR_RNDN);
        return mpfr_get_d(r8599627, MPFR_RNDN);
}

static mpfr_t r8599628, r8599629, r8599630, r8599631, r8599632;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8599628, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8599629, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r8599630);
        mpfr_init(r8599631);
        mpfr_init(r8599632);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8599630, x, MPFR_RNDN);
        mpfr_mul(r8599631, r8599629, r8599630, MPFR_RNDN);
        mpfr_add(r8599632, r8599628, r8599631, MPFR_RNDN);
        return mpfr_get_d(r8599632, MPFR_RNDN);
}

