#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r11626623 = -2.0;
        float r11626624 = 4.0;
        float r11626625 = x;
        float r11626626 = r11626625 * r11626625;
        float r11626627 = r11626624 * r11626626;
        float r11626628 = r11626623 + r11626627;
        return r11626628;
}

double f_id(double x) {
        double r11626629 = -2.0;
        double r11626630 = 4.0;
        double r11626631 = x;
        double r11626632 = r11626631 * r11626631;
        double r11626633 = r11626630 * r11626632;
        double r11626634 = r11626629 + r11626633;
        return r11626634;
}


double f_of(float x) {
        float r11626635 = -2.0;
        float r11626636 = 4.0;
        float r11626637 = x;
        float r11626638 = r11626637 * r11626637;
        float r11626639 = r11626636 * r11626638;
        float r11626640 = r11626635 + r11626639;
        return r11626640;
}

double f_od(double x) {
        double r11626641 = -2.0;
        double r11626642 = 4.0;
        double r11626643 = x;
        double r11626644 = r11626643 * r11626643;
        double r11626645 = r11626642 * r11626644;
        double r11626646 = r11626641 + r11626645;
        return r11626646;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626647, r11626648, r11626649, r11626650, r11626651, r11626652;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626647, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626648, "4.0", 10, MPFR_RNDN);
        mpfr_init(r11626649);
        mpfr_init(r11626650);
        mpfr_init(r11626651);
        mpfr_init(r11626652);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11626649, x, MPFR_RNDN);
        mpfr_mul(r11626650, r11626649, r11626649, MPFR_RNDN);
        mpfr_mul(r11626651, r11626648, r11626650, MPFR_RNDN);
        mpfr_add(r11626652, r11626647, r11626651, MPFR_RNDN);
        return mpfr_get_d(r11626652, MPFR_RNDN);
}

static mpfr_t r11626653, r11626654, r11626655, r11626656, r11626657, r11626658;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626653, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626654, "4.0", 10, MPFR_RNDN);
        mpfr_init(r11626655);
        mpfr_init(r11626656);
        mpfr_init(r11626657);
        mpfr_init(r11626658);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11626655, x, MPFR_RNDN);
        mpfr_mul(r11626656, r11626655, r11626655, MPFR_RNDN);
        mpfr_mul(r11626657, r11626654, r11626656, MPFR_RNDN);
        mpfr_add(r11626658, r11626653, r11626657, MPFR_RNDN);
        return mpfr_get_d(r11626658, MPFR_RNDN);
}

static mpfr_t r11626659, r11626660, r11626661, r11626662, r11626663, r11626664;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11626659, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626660, "4.0", 10, MPFR_RNDN);
        mpfr_init(r11626661);
        mpfr_init(r11626662);
        mpfr_init(r11626663);
        mpfr_init(r11626664);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11626661, x, MPFR_RNDN);
        mpfr_mul(r11626662, r11626661, r11626661, MPFR_RNDN);
        mpfr_mul(r11626663, r11626660, r11626662, MPFR_RNDN);
        mpfr_add(r11626664, r11626659, r11626663, MPFR_RNDN);
        return mpfr_get_d(r11626664, MPFR_RNDN);
}

