#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10220072 = 1.0;
        float r10220073 = -1.0;
        float r10220074 = x;
        float r10220075 = r10220073 * r10220074;
        float r10220076 = r10220072 + r10220075;
        return r10220076;
}

double f_id(double x) {
        double r10220077 = 1.0;
        double r10220078 = -1.0;
        double r10220079 = x;
        double r10220080 = r10220078 * r10220079;
        double r10220081 = r10220077 + r10220080;
        return r10220081;
}


double f_of(float x) {
        float r10220082 = 1.0;
        float r10220083 = -1.0;
        float r10220084 = x;
        float r10220085 = r10220083 * r10220084;
        float r10220086 = r10220082 + r10220085;
        return r10220086;
}

double f_od(double x) {
        double r10220087 = 1.0;
        double r10220088 = -1.0;
        double r10220089 = x;
        double r10220090 = r10220088 * r10220089;
        double r10220091 = r10220087 + r10220090;
        return r10220091;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10220092, r10220093, r10220094, r10220095, r10220096;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10220092, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220093, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10220094);
        mpfr_init(r10220095);
        mpfr_init(r10220096);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10220094, x, MPFR_RNDN);
        mpfr_mul(r10220095, r10220093, r10220094, MPFR_RNDN);
        mpfr_add(r10220096, r10220092, r10220095, MPFR_RNDN);
        return mpfr_get_d(r10220096, MPFR_RNDN);
}

static mpfr_t r10220097, r10220098, r10220099, r10220100, r10220101;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10220097, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220098, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10220099);
        mpfr_init(r10220100);
        mpfr_init(r10220101);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10220099, x, MPFR_RNDN);
        mpfr_mul(r10220100, r10220098, r10220099, MPFR_RNDN);
        mpfr_add(r10220101, r10220097, r10220100, MPFR_RNDN);
        return mpfr_get_d(r10220101, MPFR_RNDN);
}

static mpfr_t r10220102, r10220103, r10220104, r10220105, r10220106;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10220102, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220103, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10220104);
        mpfr_init(r10220105);
        mpfr_init(r10220106);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10220104, x, MPFR_RNDN);
        mpfr_mul(r10220105, r10220103, r10220104, MPFR_RNDN);
        mpfr_add(r10220106, r10220102, r10220105, MPFR_RNDN);
        return mpfr_get_d(r10220106, MPFR_RNDN);
}

