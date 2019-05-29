#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9886117 = 2.0;
        float r9886118 = x;
        float r9886119 = r9886117 * r9886118;
        return r9886119;
}

double f_id(double x) {
        double r9886120 = 2.0;
        double r9886121 = x;
        double r9886122 = r9886120 * r9886121;
        return r9886122;
}


double f_of(float x) {
        float r9886123 = 2.0;
        float r9886124 = x;
        float r9886125 = r9886123 * r9886124;
        return r9886125;
}

double f_od(double x) {
        double r9886126 = 2.0;
        double r9886127 = x;
        double r9886128 = r9886126 * r9886127;
        return r9886128;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9886129, r9886130, r9886131;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9886129, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9886130);
        mpfr_init(r9886131);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9886130, x, MPFR_RNDN);
        mpfr_mul(r9886131, r9886129, r9886130, MPFR_RNDN);
        return mpfr_get_d(r9886131, MPFR_RNDN);
}

static mpfr_t r9886132, r9886133, r9886134;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9886132, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9886133);
        mpfr_init(r9886134);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9886133, x, MPFR_RNDN);
        mpfr_mul(r9886134, r9886132, r9886133, MPFR_RNDN);
        return mpfr_get_d(r9886134, MPFR_RNDN);
}

static mpfr_t r9886135, r9886136, r9886137;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9886135, "2.0", 10, MPFR_RNDN);
        mpfr_init(r9886136);
        mpfr_init(r9886137);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9886136, x, MPFR_RNDN);
        mpfr_mul(r9886137, r9886135, r9886136, MPFR_RNDN);
        return mpfr_get_d(r9886137, MPFR_RNDN);
}

