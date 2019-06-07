#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r3819934 = 2.0;
        float r3819935 = x;
        float r3819936 = r3819934 * r3819935;
        return r3819936;
}

double f_id(double x) {
        double r3819937 = 2.0;
        double r3819938 = x;
        double r3819939 = r3819937 * r3819938;
        return r3819939;
}


double f_of(float x) {
        float r3819940 = 2.0;
        float r3819941 = x;
        float r3819942 = r3819940 * r3819941;
        return r3819942;
}

double f_od(double x) {
        double r3819943 = 2.0;
        double r3819944 = x;
        double r3819945 = r3819943 * r3819944;
        return r3819945;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3819946, r3819947, r3819948;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819946, "2.0", 10, MPFR_RNDN);
        mpfr_init(r3819947);
        mpfr_init(r3819948);
}

double f_im(double x) {
        ;
        mpfr_set_d(r3819947, x, MPFR_RNDN);
        mpfr_mul(r3819948, r3819946, r3819947, MPFR_RNDN);
        return mpfr_get_d(r3819948, MPFR_RNDN);
}

static mpfr_t r3819949, r3819950, r3819951;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819949, "2.0", 10, MPFR_RNDN);
        mpfr_init(r3819950);
        mpfr_init(r3819951);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3819950, x, MPFR_RNDN);
        mpfr_mul(r3819951, r3819949, r3819950, MPFR_RNDN);
        return mpfr_get_d(r3819951, MPFR_RNDN);
}

static mpfr_t r3819952, r3819953, r3819954;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3819952, "2.0", 10, MPFR_RNDN);
        mpfr_init(r3819953);
        mpfr_init(r3819954);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3819953, x, MPFR_RNDN);
        mpfr_mul(r3819954, r3819952, r3819953, MPFR_RNDN);
        return mpfr_get_d(r3819954, MPFR_RNDN);
}

