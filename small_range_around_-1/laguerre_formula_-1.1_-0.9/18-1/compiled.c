#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r20717015 = 1.0;
        float r20717016 = -1.0;
        float r20717017 = x;
        float r20717018 = r20717016 * r20717017;
        float r20717019 = r20717015 + r20717018;
        return r20717019;
}

double f_id(double x) {
        double r20717020 = 1.0;
        double r20717021 = -1.0;
        double r20717022 = x;
        double r20717023 = r20717021 * r20717022;
        double r20717024 = r20717020 + r20717023;
        return r20717024;
}


double f_of(float x) {
        float r20717025 = 1.0;
        float r20717026 = -1.0;
        float r20717027 = x;
        float r20717028 = r20717026 * r20717027;
        float r20717029 = r20717025 + r20717028;
        return r20717029;
}

double f_od(double x) {
        double r20717030 = 1.0;
        double r20717031 = -1.0;
        double r20717032 = x;
        double r20717033 = r20717031 * r20717032;
        double r20717034 = r20717030 + r20717033;
        return r20717034;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20717035, r20717036, r20717037, r20717038, r20717039;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20717035, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20717036, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r20717037);
        mpfr_init(r20717038);
        mpfr_init(r20717039);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20717037, x, MPFR_RNDN);
        mpfr_mul(r20717038, r20717036, r20717037, MPFR_RNDN);
        mpfr_add(r20717039, r20717035, r20717038, MPFR_RNDN);
        return mpfr_get_d(r20717039, MPFR_RNDN);
}

static mpfr_t r20717040, r20717041, r20717042, r20717043, r20717044;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20717040, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20717041, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r20717042);
        mpfr_init(r20717043);
        mpfr_init(r20717044);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20717042, x, MPFR_RNDN);
        mpfr_mul(r20717043, r20717041, r20717042, MPFR_RNDN);
        mpfr_add(r20717044, r20717040, r20717043, MPFR_RNDN);
        return mpfr_get_d(r20717044, MPFR_RNDN);
}

static mpfr_t r20717045, r20717046, r20717047, r20717048, r20717049;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20717045, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20717046, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r20717047);
        mpfr_init(r20717048);
        mpfr_init(r20717049);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20717047, x, MPFR_RNDN);
        mpfr_mul(r20717048, r20717046, r20717047, MPFR_RNDN);
        mpfr_add(r20717049, r20717045, r20717048, MPFR_RNDN);
        return mpfr_get_d(r20717049, MPFR_RNDN);
}

