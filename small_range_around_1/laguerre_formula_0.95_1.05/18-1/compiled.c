#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r83945051 = 1.0;
        float r83945052 = -1.0;
        float r83945053 = x;
        float r83945054 = r83945052 * r83945053;
        float r83945055 = r83945051 + r83945054;
        return r83945055;
}

double f_id(double x) {
        double r83945056 = 1.0;
        double r83945057 = -1.0;
        double r83945058 = x;
        double r83945059 = r83945057 * r83945058;
        double r83945060 = r83945056 + r83945059;
        return r83945060;
}


double f_of(float x) {
        float r83945061 = 1.0;
        float r83945062 = -1.0;
        float r83945063 = x;
        float r83945064 = r83945062 * r83945063;
        float r83945065 = r83945061 + r83945064;
        return r83945065;
}

double f_od(double x) {
        double r83945066 = 1.0;
        double r83945067 = -1.0;
        double r83945068 = x;
        double r83945069 = r83945067 * r83945068;
        double r83945070 = r83945066 + r83945069;
        return r83945070;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83945071, r83945072, r83945073, r83945074, r83945075;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83945071, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83945072, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r83945073);
        mpfr_init(r83945074);
        mpfr_init(r83945075);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83945073, x, MPFR_RNDN);
        mpfr_mul(r83945074, r83945072, r83945073, MPFR_RNDN);
        mpfr_add(r83945075, r83945071, r83945074, MPFR_RNDN);
        return mpfr_get_d(r83945075, MPFR_RNDN);
}

static mpfr_t r83945076, r83945077, r83945078, r83945079, r83945080;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83945076, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83945077, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r83945078);
        mpfr_init(r83945079);
        mpfr_init(r83945080);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r83945078, x, MPFR_RNDN);
        mpfr_mul(r83945079, r83945077, r83945078, MPFR_RNDN);
        mpfr_add(r83945080, r83945076, r83945079, MPFR_RNDN);
        return mpfr_get_d(r83945080, MPFR_RNDN);
}

static mpfr_t r83945081, r83945082, r83945083, r83945084, r83945085;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r83945081, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83945082, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r83945083);
        mpfr_init(r83945084);
        mpfr_init(r83945085);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r83945083, x, MPFR_RNDN);
        mpfr_mul(r83945084, r83945082, r83945083, MPFR_RNDN);
        mpfr_add(r83945085, r83945081, r83945084, MPFR_RNDN);
        return mpfr_get_d(r83945085, MPFR_RNDN);
}

