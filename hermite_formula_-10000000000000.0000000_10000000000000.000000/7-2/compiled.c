#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r5316578 = -2.0;
        float r5316579 = 4.0;
        float r5316580 = x;
        float r5316581 = r5316580 * r5316580;
        float r5316582 = r5316579 * r5316581;
        float r5316583 = r5316578 + r5316582;
        return r5316583;
}

double f_id(double x) {
        double r5316584 = -2.0;
        double r5316585 = 4.0;
        double r5316586 = x;
        double r5316587 = r5316586 * r5316586;
        double r5316588 = r5316585 * r5316587;
        double r5316589 = r5316584 + r5316588;
        return r5316589;
}


double f_of(float x) {
        float r5316590 = -2.0;
        float r5316591 = 4.0;
        float r5316592 = x;
        float r5316593 = r5316592 * r5316592;
        float r5316594 = r5316591 * r5316593;
        float r5316595 = r5316590 + r5316594;
        return r5316595;
}

double f_od(double x) {
        double r5316596 = -2.0;
        double r5316597 = 4.0;
        double r5316598 = x;
        double r5316599 = r5316598 * r5316598;
        double r5316600 = r5316597 * r5316599;
        double r5316601 = r5316596 + r5316600;
        return r5316601;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316602, r5316603, r5316604, r5316605, r5316606, r5316607;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316602, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316603, "4.0", 10, MPFR_RNDN);
        mpfr_init(r5316604);
        mpfr_init(r5316605);
        mpfr_init(r5316606);
        mpfr_init(r5316607);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5316604, x, MPFR_RNDN);
        mpfr_mul(r5316605, r5316604, r5316604, MPFR_RNDN);
        mpfr_mul(r5316606, r5316603, r5316605, MPFR_RNDN);
        mpfr_add(r5316607, r5316602, r5316606, MPFR_RNDN);
        return mpfr_get_d(r5316607, MPFR_RNDN);
}

static mpfr_t r5316608, r5316609, r5316610, r5316611, r5316612, r5316613;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316608, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316609, "4.0", 10, MPFR_RNDN);
        mpfr_init(r5316610);
        mpfr_init(r5316611);
        mpfr_init(r5316612);
        mpfr_init(r5316613);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5316610, x, MPFR_RNDN);
        mpfr_mul(r5316611, r5316610, r5316610, MPFR_RNDN);
        mpfr_mul(r5316612, r5316609, r5316611, MPFR_RNDN);
        mpfr_add(r5316613, r5316608, r5316612, MPFR_RNDN);
        return mpfr_get_d(r5316613, MPFR_RNDN);
}

static mpfr_t r5316614, r5316615, r5316616, r5316617, r5316618, r5316619;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316614, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316615, "4.0", 10, MPFR_RNDN);
        mpfr_init(r5316616);
        mpfr_init(r5316617);
        mpfr_init(r5316618);
        mpfr_init(r5316619);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5316616, x, MPFR_RNDN);
        mpfr_mul(r5316617, r5316616, r5316616, MPFR_RNDN);
        mpfr_mul(r5316618, r5316615, r5316617, MPFR_RNDN);
        mpfr_add(r5316619, r5316614, r5316618, MPFR_RNDN);
        return mpfr_get_d(r5316619, MPFR_RNDN);
}

