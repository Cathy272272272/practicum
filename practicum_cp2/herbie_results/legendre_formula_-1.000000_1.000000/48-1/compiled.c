#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10049137 = 1.0;
        float r10049138 = x;
        float r10049139 = r10049137 * r10049138;
        return r10049139;
}

double f_id(double x) {
        double r10049140 = 1.0;
        double r10049141 = x;
        double r10049142 = r10049140 * r10049141;
        return r10049142;
}


double f_of(float x) {
        float r10049143 = 1.0;
        float r10049144 = x;
        float r10049145 = r10049143 * r10049144;
        return r10049145;
}

double f_od(double x) {
        double r10049146 = 1.0;
        double r10049147 = x;
        double r10049148 = r10049146 * r10049147;
        return r10049148;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10049149, r10049150, r10049151;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10049149, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10049150);
        mpfr_init(r10049151);
}

double f_im(double x) {
        ;
        mpfr_set_d(r10049150, x, MPFR_RNDN);
        mpfr_mul(r10049151, r10049149, r10049150, MPFR_RNDN);
        return mpfr_get_d(r10049151, MPFR_RNDN);
}

static mpfr_t r10049152, r10049153, r10049154;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10049152, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10049153);
        mpfr_init(r10049154);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10049153, x, MPFR_RNDN);
        mpfr_mul(r10049154, r10049152, r10049153, MPFR_RNDN);
        return mpfr_get_d(r10049154, MPFR_RNDN);
}

static mpfr_t r10049155, r10049156, r10049157;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10049155, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10049156);
        mpfr_init(r10049157);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10049156, x, MPFR_RNDN);
        mpfr_mul(r10049157, r10049155, r10049156, MPFR_RNDN);
        return mpfr_get_d(r10049157, MPFR_RNDN);
}

