#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r4212938 = 2.0;
        float r4212939 = x;
        float r4212940 = r4212938 * r4212939;
        return r4212940;
}

double f_id(double x) {
        double r4212941 = 2.0;
        double r4212942 = x;
        double r4212943 = r4212941 * r4212942;
        return r4212943;
}


double f_of(float x) {
        float r4212944 = 2.0;
        float r4212945 = x;
        float r4212946 = r4212944 * r4212945;
        return r4212946;
}

double f_od(double x) {
        double r4212947 = 2.0;
        double r4212948 = x;
        double r4212949 = r4212947 * r4212948;
        return r4212949;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4212950, r4212951, r4212952;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4212950, "2.0", 10, MPFR_RNDN);
        mpfr_init(r4212951);
        mpfr_init(r4212952);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4212951, x, MPFR_RNDN);
        mpfr_mul(r4212952, r4212950, r4212951, MPFR_RNDN);
        return mpfr_get_d(r4212952, MPFR_RNDN);
}

static mpfr_t r4212953, r4212954, r4212955;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4212953, "2.0", 10, MPFR_RNDN);
        mpfr_init(r4212954);
        mpfr_init(r4212955);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4212954, x, MPFR_RNDN);
        mpfr_mul(r4212955, r4212953, r4212954, MPFR_RNDN);
        return mpfr_get_d(r4212955, MPFR_RNDN);
}

static mpfr_t r4212956, r4212957, r4212958;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4212956, "2.0", 10, MPFR_RNDN);
        mpfr_init(r4212957);
        mpfr_init(r4212958);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4212957, x, MPFR_RNDN);
        mpfr_mul(r4212958, r4212956, r4212957, MPFR_RNDN);
        return mpfr_get_d(r4212958, MPFR_RNDN);
}

