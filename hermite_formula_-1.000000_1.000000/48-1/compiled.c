#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7998910 = 2.0;
        float r7998911 = x;
        float r7998912 = r7998910 * r7998911;
        return r7998912;
}

double f_id(double x) {
        double r7998913 = 2.0;
        double r7998914 = x;
        double r7998915 = r7998913 * r7998914;
        return r7998915;
}


double f_of(float x) {
        float r7998916 = 2.0;
        float r7998917 = x;
        float r7998918 = r7998916 * r7998917;
        return r7998918;
}

double f_od(double x) {
        double r7998919 = 2.0;
        double r7998920 = x;
        double r7998921 = r7998919 * r7998920;
        return r7998921;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7998922, r7998923, r7998924;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998922, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7998923);
        mpfr_init(r7998924);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7998923, x, MPFR_RNDN);
        mpfr_mul(r7998924, r7998922, r7998923, MPFR_RNDN);
        return mpfr_get_d(r7998924, MPFR_RNDN);
}

static mpfr_t r7998925, r7998926, r7998927;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998925, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7998926);
        mpfr_init(r7998927);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7998926, x, MPFR_RNDN);
        mpfr_mul(r7998927, r7998925, r7998926, MPFR_RNDN);
        return mpfr_get_d(r7998927, MPFR_RNDN);
}

static mpfr_t r7998928, r7998929, r7998930;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998928, "2.0", 10, MPFR_RNDN);
        mpfr_init(r7998929);
        mpfr_init(r7998930);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7998929, x, MPFR_RNDN);
        mpfr_mul(r7998930, r7998928, r7998929, MPFR_RNDN);
        return mpfr_get_d(r7998930, MPFR_RNDN);
}

