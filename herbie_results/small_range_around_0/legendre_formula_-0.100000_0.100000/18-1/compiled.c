#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r4601748 = 1.0;
        float r4601749 = x;
        float r4601750 = r4601748 * r4601749;
        return r4601750;
}

double f_id(double x) {
        double r4601751 = 1.0;
        double r4601752 = x;
        double r4601753 = r4601751 * r4601752;
        return r4601753;
}


double f_of(float x) {
        float r4601754 = 1.0;
        float r4601755 = x;
        float r4601756 = r4601754 * r4601755;
        return r4601756;
}

double f_od(double x) {
        double r4601757 = 1.0;
        double r4601758 = x;
        double r4601759 = r4601757 * r4601758;
        return r4601759;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4601760, r4601761, r4601762;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601760, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4601761);
        mpfr_init(r4601762);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4601761, x, MPFR_RNDN);
        mpfr_mul(r4601762, r4601760, r4601761, MPFR_RNDN);
        return mpfr_get_d(r4601762, MPFR_RNDN);
}

static mpfr_t r4601763, r4601764, r4601765;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601763, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4601764);
        mpfr_init(r4601765);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4601764, x, MPFR_RNDN);
        mpfr_mul(r4601765, r4601763, r4601764, MPFR_RNDN);
        return mpfr_get_d(r4601765, MPFR_RNDN);
}

static mpfr_t r4601766, r4601767, r4601768;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601766, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4601767);
        mpfr_init(r4601768);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4601767, x, MPFR_RNDN);
        mpfr_mul(r4601768, r4601766, r4601767, MPFR_RNDN);
        return mpfr_get_d(r4601768, MPFR_RNDN);
}

