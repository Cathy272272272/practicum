#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9829160 = -12.0;
        float r9829161 = x;
        float r9829162 = r9829160 * r9829161;
        float r9829163 = 8.0;
        float r9829164 = r9829161 * r9829161;
        float r9829165 = r9829164 * r9829161;
        float r9829166 = r9829163 * r9829165;
        float r9829167 = r9829162 + r9829166;
        return r9829167;
}

double f_id(double x) {
        double r9829168 = -12.0;
        double r9829169 = x;
        double r9829170 = r9829168 * r9829169;
        double r9829171 = 8.0;
        double r9829172 = r9829169 * r9829169;
        double r9829173 = r9829172 * r9829169;
        double r9829174 = r9829171 * r9829173;
        double r9829175 = r9829170 + r9829174;
        return r9829175;
}


double f_of(float x) {
        float r9829176 = -12.0;
        float r9829177 = x;
        float r9829178 = r9829176 * r9829177;
        float r9829179 = 8.0;
        float r9829180 = r9829177 * r9829177;
        float r9829181 = r9829180 * r9829177;
        float r9829182 = r9829179 * r9829181;
        float r9829183 = r9829178 + r9829182;
        return r9829183;
}

double f_od(double x) {
        double r9829184 = -12.0;
        double r9829185 = x;
        double r9829186 = r9829184 * r9829185;
        double r9829187 = 8.0;
        double r9829188 = r9829185 * r9829185;
        double r9829189 = r9829188 * r9829185;
        double r9829190 = r9829187 * r9829189;
        double r9829191 = r9829186 + r9829190;
        return r9829191;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9829192, r9829193, r9829194, r9829195, r9829196, r9829197, r9829198, r9829199;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9829192, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9829193);
        mpfr_init(r9829194);
        mpfr_init_set_str(r9829195, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9829196);
        mpfr_init(r9829197);
        mpfr_init(r9829198);
        mpfr_init(r9829199);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9829193, x, MPFR_RNDN);
        mpfr_mul(r9829194, r9829192, r9829193, MPFR_RNDN);
        ;
        mpfr_mul(r9829196, r9829193, r9829193, MPFR_RNDN);
        mpfr_mul(r9829197, r9829196, r9829193, MPFR_RNDN);
        mpfr_mul(r9829198, r9829195, r9829197, MPFR_RNDN);
        mpfr_add(r9829199, r9829194, r9829198, MPFR_RNDN);
        return mpfr_get_d(r9829199, MPFR_RNDN);
}

static mpfr_t r9829200, r9829201, r9829202, r9829203, r9829204, r9829205, r9829206, r9829207;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9829200, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9829201);
        mpfr_init(r9829202);
        mpfr_init_set_str(r9829203, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9829204);
        mpfr_init(r9829205);
        mpfr_init(r9829206);
        mpfr_init(r9829207);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9829201, x, MPFR_RNDN);
        mpfr_mul(r9829202, r9829200, r9829201, MPFR_RNDN);
        ;
        mpfr_mul(r9829204, r9829201, r9829201, MPFR_RNDN);
        mpfr_mul(r9829205, r9829204, r9829201, MPFR_RNDN);
        mpfr_mul(r9829206, r9829203, r9829205, MPFR_RNDN);
        mpfr_add(r9829207, r9829202, r9829206, MPFR_RNDN);
        return mpfr_get_d(r9829207, MPFR_RNDN);
}

static mpfr_t r9829208, r9829209, r9829210, r9829211, r9829212, r9829213, r9829214, r9829215;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9829208, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9829209);
        mpfr_init(r9829210);
        mpfr_init_set_str(r9829211, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9829212);
        mpfr_init(r9829213);
        mpfr_init(r9829214);
        mpfr_init(r9829215);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9829209, x, MPFR_RNDN);
        mpfr_mul(r9829210, r9829208, r9829209, MPFR_RNDN);
        ;
        mpfr_mul(r9829212, r9829209, r9829209, MPFR_RNDN);
        mpfr_mul(r9829213, r9829212, r9829209, MPFR_RNDN);
        mpfr_mul(r9829214, r9829211, r9829213, MPFR_RNDN);
        mpfr_add(r9829215, r9829210, r9829214, MPFR_RNDN);
        return mpfr_get_d(r9829215, MPFR_RNDN);
}

