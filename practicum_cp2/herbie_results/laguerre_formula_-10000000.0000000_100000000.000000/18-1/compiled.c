#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r11733634 = 1.0;
        float r11733635 = -1.0;
        float r11733636 = x;
        float r11733637 = r11733635 * r11733636;
        float r11733638 = r11733634 + r11733637;
        return r11733638;
}

double f_id(double x) {
        double r11733639 = 1.0;
        double r11733640 = -1.0;
        double r11733641 = x;
        double r11733642 = r11733640 * r11733641;
        double r11733643 = r11733639 + r11733642;
        return r11733643;
}


double f_of(float x) {
        float r11733644 = 1.0;
        float r11733645 = -1.0;
        float r11733646 = x;
        float r11733647 = r11733645 * r11733646;
        float r11733648 = r11733644 + r11733647;
        return r11733648;
}

double f_od(double x) {
        double r11733649 = 1.0;
        double r11733650 = -1.0;
        double r11733651 = x;
        double r11733652 = r11733650 * r11733651;
        double r11733653 = r11733649 + r11733652;
        return r11733653;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11733654, r11733655, r11733656, r11733657, r11733658;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11733654, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11733655, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11733656);
        mpfr_init(r11733657);
        mpfr_init(r11733658);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11733656, x, MPFR_RNDN);
        mpfr_mul(r11733657, r11733655, r11733656, MPFR_RNDN);
        mpfr_add(r11733658, r11733654, r11733657, MPFR_RNDN);
        return mpfr_get_d(r11733658, MPFR_RNDN);
}

static mpfr_t r11733659, r11733660, r11733661, r11733662, r11733663;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11733659, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11733660, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11733661);
        mpfr_init(r11733662);
        mpfr_init(r11733663);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11733661, x, MPFR_RNDN);
        mpfr_mul(r11733662, r11733660, r11733661, MPFR_RNDN);
        mpfr_add(r11733663, r11733659, r11733662, MPFR_RNDN);
        return mpfr_get_d(r11733663, MPFR_RNDN);
}

static mpfr_t r11733664, r11733665, r11733666, r11733667, r11733668;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11733664, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11733665, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11733666);
        mpfr_init(r11733667);
        mpfr_init(r11733668);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11733666, x, MPFR_RNDN);
        mpfr_mul(r11733667, r11733665, r11733666, MPFR_RNDN);
        mpfr_add(r11733668, r11733664, r11733667, MPFR_RNDN);
        return mpfr_get_d(r11733668, MPFR_RNDN);
}

