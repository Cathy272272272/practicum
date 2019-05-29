#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7170240 = 1.0;
        float r7170241 = x;
        float r7170242 = r7170240 * r7170241;
        return r7170242;
}

double f_id(double x) {
        double r7170243 = 1.0;
        double r7170244 = x;
        double r7170245 = r7170243 * r7170244;
        return r7170245;
}


double f_of(float x) {
        float r7170246 = 1.0;
        float r7170247 = x;
        float r7170248 = r7170246 * r7170247;
        return r7170248;
}

double f_od(double x) {
        double r7170249 = 1.0;
        double r7170250 = x;
        double r7170251 = r7170249 * r7170250;
        return r7170251;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7170252, r7170253, r7170254;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7170252, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7170253);
        mpfr_init(r7170254);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7170253, x, MPFR_RNDN);
        mpfr_mul(r7170254, r7170252, r7170253, MPFR_RNDN);
        return mpfr_get_d(r7170254, MPFR_RNDN);
}

static mpfr_t r7170255, r7170256, r7170257;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7170255, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7170256);
        mpfr_init(r7170257);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7170256, x, MPFR_RNDN);
        mpfr_mul(r7170257, r7170255, r7170256, MPFR_RNDN);
        return mpfr_get_d(r7170257, MPFR_RNDN);
}

static mpfr_t r7170258, r7170259, r7170260;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7170258, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7170259);
        mpfr_init(r7170260);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7170259, x, MPFR_RNDN);
        mpfr_mul(r7170260, r7170258, r7170259, MPFR_RNDN);
        return mpfr_get_d(r7170260, MPFR_RNDN);
}

