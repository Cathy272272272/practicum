#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r61033195 = -12.0;
        float r61033196 = x;
        float r61033197 = r61033195 * r61033196;
        float r61033198 = 8.0;
        float r61033199 = r61033196 * r61033196;
        float r61033200 = r61033199 * r61033196;
        float r61033201 = r61033198 * r61033200;
        float r61033202 = r61033197 + r61033201;
        return r61033202;
}

double f_id(double x) {
        double r61033203 = -12.0;
        double r61033204 = x;
        double r61033205 = r61033203 * r61033204;
        double r61033206 = 8.0;
        double r61033207 = r61033204 * r61033204;
        double r61033208 = r61033207 * r61033204;
        double r61033209 = r61033206 * r61033208;
        double r61033210 = r61033205 + r61033209;
        return r61033210;
}


double f_of(float x) {
        float r61033211 = -12.0;
        float r61033212 = x;
        float r61033213 = r61033211 * r61033212;
        float r61033214 = 8.0;
        float r61033215 = r61033212 * r61033212;
        float r61033216 = r61033215 * r61033212;
        float r61033217 = r61033214 * r61033216;
        float r61033218 = r61033213 + r61033217;
        return r61033218;
}

double f_od(double x) {
        double r61033219 = -12.0;
        double r61033220 = x;
        double r61033221 = r61033219 * r61033220;
        double r61033222 = 8.0;
        double r61033223 = r61033220 * r61033220;
        double r61033224 = r61033223 * r61033220;
        double r61033225 = r61033222 * r61033224;
        double r61033226 = r61033221 + r61033225;
        return r61033226;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61033227, r61033228, r61033229, r61033230, r61033231, r61033232, r61033233, r61033234;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033227, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r61033228);
        mpfr_init(r61033229);
        mpfr_init_set_str(r61033230, "8.0", 10, MPFR_RNDN);
        mpfr_init(r61033231);
        mpfr_init(r61033232);
        mpfr_init(r61033233);
        mpfr_init(r61033234);
}

double f_im(double x) {
        ;
        mpfr_set_d(r61033228, x, MPFR_RNDN);
        mpfr_mul(r61033229, r61033227, r61033228, MPFR_RNDN);
        ;
        mpfr_mul(r61033231, r61033228, r61033228, MPFR_RNDN);
        mpfr_mul(r61033232, r61033231, r61033228, MPFR_RNDN);
        mpfr_mul(r61033233, r61033230, r61033232, MPFR_RNDN);
        mpfr_add(r61033234, r61033229, r61033233, MPFR_RNDN);
        return mpfr_get_d(r61033234, MPFR_RNDN);
}

static mpfr_t r61033235, r61033236, r61033237, r61033238, r61033239, r61033240, r61033241, r61033242;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033235, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r61033236);
        mpfr_init(r61033237);
        mpfr_init_set_str(r61033238, "8.0", 10, MPFR_RNDN);
        mpfr_init(r61033239);
        mpfr_init(r61033240);
        mpfr_init(r61033241);
        mpfr_init(r61033242);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r61033236, x, MPFR_RNDN);
        mpfr_mul(r61033237, r61033235, r61033236, MPFR_RNDN);
        ;
        mpfr_mul(r61033239, r61033236, r61033236, MPFR_RNDN);
        mpfr_mul(r61033240, r61033239, r61033236, MPFR_RNDN);
        mpfr_mul(r61033241, r61033238, r61033240, MPFR_RNDN);
        mpfr_add(r61033242, r61033237, r61033241, MPFR_RNDN);
        return mpfr_get_d(r61033242, MPFR_RNDN);
}

static mpfr_t r61033243, r61033244, r61033245, r61033246, r61033247, r61033248, r61033249, r61033250;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033243, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r61033244);
        mpfr_init(r61033245);
        mpfr_init_set_str(r61033246, "8.0", 10, MPFR_RNDN);
        mpfr_init(r61033247);
        mpfr_init(r61033248);
        mpfr_init(r61033249);
        mpfr_init(r61033250);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r61033244, x, MPFR_RNDN);
        mpfr_mul(r61033245, r61033243, r61033244, MPFR_RNDN);
        ;
        mpfr_mul(r61033247, r61033244, r61033244, MPFR_RNDN);
        mpfr_mul(r61033248, r61033247, r61033244, MPFR_RNDN);
        mpfr_mul(r61033249, r61033246, r61033248, MPFR_RNDN);
        mpfr_add(r61033250, r61033245, r61033249, MPFR_RNDN);
        return mpfr_get_d(r61033250, MPFR_RNDN);
}

