#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r4115101 = 2.0;
        float r4115102 = x;
        float r4115103 = r4115101 * r4115102;
        return r4115103;
}

double f_id(double x) {
        double r4115104 = 2.0;
        double r4115105 = x;
        double r4115106 = r4115104 * r4115105;
        return r4115106;
}


double f_of(float x) {
        float r4115107 = 2.0;
        float r4115108 = x;
        float r4115109 = r4115107 * r4115108;
        return r4115109;
}

double f_od(double x) {
        double r4115110 = 2.0;
        double r4115111 = x;
        double r4115112 = r4115110 * r4115111;
        return r4115112;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4115113, r4115114, r4115115;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4115113, "2.0", 10, MPFR_RNDN);
        mpfr_init(r4115114);
        mpfr_init(r4115115);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4115114, x, MPFR_RNDN);
        mpfr_mul(r4115115, r4115113, r4115114, MPFR_RNDN);
        return mpfr_get_d(r4115115, MPFR_RNDN);
}

static mpfr_t r4115116, r4115117, r4115118;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4115116, "2.0", 10, MPFR_RNDN);
        mpfr_init(r4115117);
        mpfr_init(r4115118);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4115117, x, MPFR_RNDN);
        mpfr_mul(r4115118, r4115116, r4115117, MPFR_RNDN);
        return mpfr_get_d(r4115118, MPFR_RNDN);
}

static mpfr_t r4115119, r4115120, r4115121;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4115119, "2.0", 10, MPFR_RNDN);
        mpfr_init(r4115120);
        mpfr_init(r4115121);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4115120, x, MPFR_RNDN);
        mpfr_mul(r4115121, r4115119, r4115120, MPFR_RNDN);
        return mpfr_get_d(r4115121, MPFR_RNDN);
}

