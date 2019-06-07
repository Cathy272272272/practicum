#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10532230 = 1.0;
        float r10532231 = -1.0;
        float r10532232 = x;
        float r10532233 = r10532231 * r10532232;
        float r10532234 = r10532230 + r10532233;
        return r10532234;
}

double f_id(double x) {
        double r10532235 = 1.0;
        double r10532236 = -1.0;
        double r10532237 = x;
        double r10532238 = r10532236 * r10532237;
        double r10532239 = r10532235 + r10532238;
        return r10532239;
}


double f_of(float x) {
        float r10532240 = 1.0;
        float r10532241 = -1.0;
        float r10532242 = x;
        float r10532243 = r10532241 * r10532242;
        float r10532244 = r10532240 + r10532243;
        return r10532244;
}

double f_od(double x) {
        double r10532245 = 1.0;
        double r10532246 = -1.0;
        double r10532247 = x;
        double r10532248 = r10532246 * r10532247;
        double r10532249 = r10532245 + r10532248;
        return r10532249;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10532250, r10532251, r10532252, r10532253, r10532254;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10532250, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532251, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10532252);
        mpfr_init(r10532253);
        mpfr_init(r10532254);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10532252, x, MPFR_RNDN);
        mpfr_mul(r10532253, r10532251, r10532252, MPFR_RNDN);
        mpfr_add(r10532254, r10532250, r10532253, MPFR_RNDN);
        return mpfr_get_d(r10532254, MPFR_RNDN);
}

static mpfr_t r10532255, r10532256, r10532257, r10532258, r10532259;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10532255, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532256, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10532257);
        mpfr_init(r10532258);
        mpfr_init(r10532259);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10532257, x, MPFR_RNDN);
        mpfr_mul(r10532258, r10532256, r10532257, MPFR_RNDN);
        mpfr_add(r10532259, r10532255, r10532258, MPFR_RNDN);
        return mpfr_get_d(r10532259, MPFR_RNDN);
}

static mpfr_t r10532260, r10532261, r10532262, r10532263, r10532264;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10532260, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10532261, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10532262);
        mpfr_init(r10532263);
        mpfr_init(r10532264);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10532262, x, MPFR_RNDN);
        mpfr_mul(r10532263, r10532261, r10532262, MPFR_RNDN);
        mpfr_add(r10532264, r10532260, r10532263, MPFR_RNDN);
        return mpfr_get_d(r10532264, MPFR_RNDN);
}

