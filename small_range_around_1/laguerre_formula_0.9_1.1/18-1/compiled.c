#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r98658943 = 1.0;
        float r98658944 = -1.0;
        float r98658945 = x;
        float r98658946 = r98658944 * r98658945;
        float r98658947 = r98658943 + r98658946;
        return r98658947;
}

double f_id(double x) {
        double r98658948 = 1.0;
        double r98658949 = -1.0;
        double r98658950 = x;
        double r98658951 = r98658949 * r98658950;
        double r98658952 = r98658948 + r98658951;
        return r98658952;
}


double f_of(float x) {
        float r98658953 = 1.0;
        float r98658954 = -1.0;
        float r98658955 = x;
        float r98658956 = r98658954 * r98658955;
        float r98658957 = r98658953 + r98658956;
        return r98658957;
}

double f_od(double x) {
        double r98658958 = 1.0;
        double r98658959 = -1.0;
        double r98658960 = x;
        double r98658961 = r98658959 * r98658960;
        double r98658962 = r98658958 + r98658961;
        return r98658962;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658963, r98658964, r98658965, r98658966, r98658967;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r98658963, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658964, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r98658965);
        mpfr_init(r98658966);
        mpfr_init(r98658967);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98658965, x, MPFR_RNDN);
        mpfr_mul(r98658966, r98658964, r98658965, MPFR_RNDN);
        mpfr_add(r98658967, r98658963, r98658966, MPFR_RNDN);
        return mpfr_get_d(r98658967, MPFR_RNDN);
}

static mpfr_t r98658968, r98658969, r98658970, r98658971, r98658972;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r98658968, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658969, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r98658970);
        mpfr_init(r98658971);
        mpfr_init(r98658972);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r98658970, x, MPFR_RNDN);
        mpfr_mul(r98658971, r98658969, r98658970, MPFR_RNDN);
        mpfr_add(r98658972, r98658968, r98658971, MPFR_RNDN);
        return mpfr_get_d(r98658972, MPFR_RNDN);
}

static mpfr_t r98658973, r98658974, r98658975, r98658976, r98658977;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r98658973, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658974, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r98658975);
        mpfr_init(r98658976);
        mpfr_init(r98658977);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r98658975, x, MPFR_RNDN);
        mpfr_mul(r98658976, r98658974, r98658975, MPFR_RNDN);
        mpfr_add(r98658977, r98658973, r98658976, MPFR_RNDN);
        return mpfr_get_d(r98658977, MPFR_RNDN);
}

