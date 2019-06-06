#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r3752751 = 1.0;
        float r3752752 = -1.0;
        float r3752753 = x;
        float r3752754 = r3752752 * r3752753;
        float r3752755 = r3752751 + r3752754;
        return r3752755;
}

double f_id(double x) {
        double r3752756 = 1.0;
        double r3752757 = -1.0;
        double r3752758 = x;
        double r3752759 = r3752757 * r3752758;
        double r3752760 = r3752756 + r3752759;
        return r3752760;
}


double f_of(float x) {
        float r3752761 = 1.0;
        float r3752762 = -1.0;
        float r3752763 = x;
        float r3752764 = r3752762 * r3752763;
        float r3752765 = r3752761 + r3752764;
        return r3752765;
}

double f_od(double x) {
        double r3752766 = 1.0;
        double r3752767 = -1.0;
        double r3752768 = x;
        double r3752769 = r3752767 * r3752768;
        double r3752770 = r3752766 + r3752769;
        return r3752770;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3752771, r3752772, r3752773, r3752774, r3752775;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752771, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752772, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r3752773);
        mpfr_init(r3752774);
        mpfr_init(r3752775);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3752773, x, MPFR_RNDN);
        mpfr_mul(r3752774, r3752772, r3752773, MPFR_RNDN);
        mpfr_add(r3752775, r3752771, r3752774, MPFR_RNDN);
        return mpfr_get_d(r3752775, MPFR_RNDN);
}

static mpfr_t r3752776, r3752777, r3752778, r3752779, r3752780;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752776, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752777, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r3752778);
        mpfr_init(r3752779);
        mpfr_init(r3752780);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3752778, x, MPFR_RNDN);
        mpfr_mul(r3752779, r3752777, r3752778, MPFR_RNDN);
        mpfr_add(r3752780, r3752776, r3752779, MPFR_RNDN);
        return mpfr_get_d(r3752780, MPFR_RNDN);
}

static mpfr_t r3752781, r3752782, r3752783, r3752784, r3752785;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752781, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752782, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r3752783);
        mpfr_init(r3752784);
        mpfr_init(r3752785);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3752783, x, MPFR_RNDN);
        mpfr_mul(r3752784, r3752782, r3752783, MPFR_RNDN);
        mpfr_add(r3752785, r3752781, r3752784, MPFR_RNDN);
        return mpfr_get_d(r3752785, MPFR_RNDN);
}

