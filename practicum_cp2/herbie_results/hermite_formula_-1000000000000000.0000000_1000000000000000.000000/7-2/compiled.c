#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8953905 = -2.0;
        float r8953906 = 4.0;
        float r8953907 = x;
        float r8953908 = r8953907 * r8953907;
        float r8953909 = r8953906 * r8953908;
        float r8953910 = r8953905 + r8953909;
        return r8953910;
}

double f_id(double x) {
        double r8953911 = -2.0;
        double r8953912 = 4.0;
        double r8953913 = x;
        double r8953914 = r8953913 * r8953913;
        double r8953915 = r8953912 * r8953914;
        double r8953916 = r8953911 + r8953915;
        return r8953916;
}


double f_of(float x) {
        float r8953917 = -2.0;
        float r8953918 = 4.0;
        float r8953919 = x;
        float r8953920 = r8953919 * r8953919;
        float r8953921 = r8953918 * r8953920;
        float r8953922 = r8953917 + r8953921;
        return r8953922;
}

double f_od(double x) {
        double r8953923 = -2.0;
        double r8953924 = 4.0;
        double r8953925 = x;
        double r8953926 = r8953925 * r8953925;
        double r8953927 = r8953924 * r8953926;
        double r8953928 = r8953923 + r8953927;
        return r8953928;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953929, r8953930, r8953931, r8953932, r8953933, r8953934;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953929, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953930, "4.0", 10, MPFR_RNDN);
        mpfr_init(r8953931);
        mpfr_init(r8953932);
        mpfr_init(r8953933);
        mpfr_init(r8953934);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8953931, x, MPFR_RNDN);
        mpfr_mul(r8953932, r8953931, r8953931, MPFR_RNDN);
        mpfr_mul(r8953933, r8953930, r8953932, MPFR_RNDN);
        mpfr_add(r8953934, r8953929, r8953933, MPFR_RNDN);
        return mpfr_get_d(r8953934, MPFR_RNDN);
}

static mpfr_t r8953935, r8953936, r8953937, r8953938, r8953939, r8953940;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953935, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953936, "4.0", 10, MPFR_RNDN);
        mpfr_init(r8953937);
        mpfr_init(r8953938);
        mpfr_init(r8953939);
        mpfr_init(r8953940);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8953937, x, MPFR_RNDN);
        mpfr_mul(r8953938, r8953937, r8953937, MPFR_RNDN);
        mpfr_mul(r8953939, r8953936, r8953938, MPFR_RNDN);
        mpfr_add(r8953940, r8953935, r8953939, MPFR_RNDN);
        return mpfr_get_d(r8953940, MPFR_RNDN);
}

static mpfr_t r8953941, r8953942, r8953943, r8953944, r8953945, r8953946;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8953941, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953942, "4.0", 10, MPFR_RNDN);
        mpfr_init(r8953943);
        mpfr_init(r8953944);
        mpfr_init(r8953945);
        mpfr_init(r8953946);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8953943, x, MPFR_RNDN);
        mpfr_mul(r8953944, r8953943, r8953943, MPFR_RNDN);
        mpfr_mul(r8953945, r8953942, r8953944, MPFR_RNDN);
        mpfr_add(r8953946, r8953941, r8953945, MPFR_RNDN);
        return mpfr_get_d(r8953946, MPFR_RNDN);
}

