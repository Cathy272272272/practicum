#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6177067 = -0.5;
        float r6177068 = 1.5;
        float r6177069 = x;
        float r6177070 = r6177069 * r6177069;
        float r6177071 = r6177068 * r6177070;
        float r6177072 = r6177067 + r6177071;
        return r6177072;
}

double f_id(double x) {
        double r6177073 = -0.5;
        double r6177074 = 1.5;
        double r6177075 = x;
        double r6177076 = r6177075 * r6177075;
        double r6177077 = r6177074 * r6177076;
        double r6177078 = r6177073 + r6177077;
        return r6177078;
}


double f_of(float x) {
        float r6177079 = -0.5;
        float r6177080 = 1.5;
        float r6177081 = x;
        float r6177082 = r6177081 * r6177081;
        float r6177083 = r6177080 * r6177082;
        float r6177084 = r6177079 + r6177083;
        return r6177084;
}

double f_od(double x) {
        double r6177085 = -0.5;
        double r6177086 = 1.5;
        double r6177087 = x;
        double r6177088 = r6177087 * r6177087;
        double r6177089 = r6177086 * r6177088;
        double r6177090 = r6177085 + r6177089;
        return r6177090;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6177091, r6177092, r6177093, r6177094, r6177095, r6177096;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6177091, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6177092, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6177093);
        mpfr_init(r6177094);
        mpfr_init(r6177095);
        mpfr_init(r6177096);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6177093, x, MPFR_RNDN);
        mpfr_mul(r6177094, r6177093, r6177093, MPFR_RNDN);
        mpfr_mul(r6177095, r6177092, r6177094, MPFR_RNDN);
        mpfr_add(r6177096, r6177091, r6177095, MPFR_RNDN);
        return mpfr_get_d(r6177096, MPFR_RNDN);
}

static mpfr_t r6177097, r6177098, r6177099, r6177100, r6177101, r6177102;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6177097, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6177098, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6177099);
        mpfr_init(r6177100);
        mpfr_init(r6177101);
        mpfr_init(r6177102);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6177099, x, MPFR_RNDN);
        mpfr_mul(r6177100, r6177099, r6177099, MPFR_RNDN);
        mpfr_mul(r6177101, r6177098, r6177100, MPFR_RNDN);
        mpfr_add(r6177102, r6177097, r6177101, MPFR_RNDN);
        return mpfr_get_d(r6177102, MPFR_RNDN);
}

static mpfr_t r6177103, r6177104, r6177105, r6177106, r6177107, r6177108;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6177103, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6177104, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6177105);
        mpfr_init(r6177106);
        mpfr_init(r6177107);
        mpfr_init(r6177108);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6177105, x, MPFR_RNDN);
        mpfr_mul(r6177106, r6177105, r6177105, MPFR_RNDN);
        mpfr_mul(r6177107, r6177104, r6177106, MPFR_RNDN);
        mpfr_add(r6177108, r6177103, r6177107, MPFR_RNDN);
        return mpfr_get_d(r6177108, MPFR_RNDN);
}

