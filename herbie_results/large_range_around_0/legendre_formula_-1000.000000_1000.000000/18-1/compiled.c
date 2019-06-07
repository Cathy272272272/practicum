#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7058278 = 1.0;
        float r7058279 = x;
        float r7058280 = r7058278 * r7058279;
        return r7058280;
}

double f_id(double x) {
        double r7058281 = 1.0;
        double r7058282 = x;
        double r7058283 = r7058281 * r7058282;
        return r7058283;
}


double f_of(float x) {
        float r7058284 = 1.0;
        float r7058285 = x;
        float r7058286 = r7058284 * r7058285;
        return r7058286;
}

double f_od(double x) {
        double r7058287 = 1.0;
        double r7058288 = x;
        double r7058289 = r7058287 * r7058288;
        return r7058289;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7058290, r7058291, r7058292;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7058290, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7058291);
        mpfr_init(r7058292);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7058291, x, MPFR_RNDN);
        mpfr_mul(r7058292, r7058290, r7058291, MPFR_RNDN);
        return mpfr_get_d(r7058292, MPFR_RNDN);
}

static mpfr_t r7058293, r7058294, r7058295;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7058293, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7058294);
        mpfr_init(r7058295);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7058294, x, MPFR_RNDN);
        mpfr_mul(r7058295, r7058293, r7058294, MPFR_RNDN);
        return mpfr_get_d(r7058295, MPFR_RNDN);
}

static mpfr_t r7058296, r7058297, r7058298;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7058296, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7058297);
        mpfr_init(r7058298);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7058297, x, MPFR_RNDN);
        mpfr_mul(r7058298, r7058296, r7058297, MPFR_RNDN);
        return mpfr_get_d(r7058298, MPFR_RNDN);
}

