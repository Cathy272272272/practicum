#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r11591390 = 1.0;
        float r11591391 = -1.0;
        float r11591392 = x;
        float r11591393 = r11591391 * r11591392;
        float r11591394 = r11591390 + r11591393;
        return r11591394;
}

double f_id(double x) {
        double r11591395 = 1.0;
        double r11591396 = -1.0;
        double r11591397 = x;
        double r11591398 = r11591396 * r11591397;
        double r11591399 = r11591395 + r11591398;
        return r11591399;
}


double f_of(float x) {
        float r11591400 = 1.0;
        float r11591401 = -1.0;
        float r11591402 = x;
        float r11591403 = r11591401 * r11591402;
        float r11591404 = r11591400 + r11591403;
        return r11591404;
}

double f_od(double x) {
        double r11591405 = 1.0;
        double r11591406 = -1.0;
        double r11591407 = x;
        double r11591408 = r11591406 * r11591407;
        double r11591409 = r11591405 + r11591408;
        return r11591409;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11591410, r11591411, r11591412, r11591413, r11591414;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11591410, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591411, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11591412);
        mpfr_init(r11591413);
        mpfr_init(r11591414);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11591412, x, MPFR_RNDN);
        mpfr_mul(r11591413, r11591411, r11591412, MPFR_RNDN);
        mpfr_add(r11591414, r11591410, r11591413, MPFR_RNDN);
        return mpfr_get_d(r11591414, MPFR_RNDN);
}

static mpfr_t r11591415, r11591416, r11591417, r11591418, r11591419;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11591415, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591416, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11591417);
        mpfr_init(r11591418);
        mpfr_init(r11591419);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11591417, x, MPFR_RNDN);
        mpfr_mul(r11591418, r11591416, r11591417, MPFR_RNDN);
        mpfr_add(r11591419, r11591415, r11591418, MPFR_RNDN);
        return mpfr_get_d(r11591419, MPFR_RNDN);
}

static mpfr_t r11591420, r11591421, r11591422, r11591423, r11591424;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11591420, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591421, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r11591422);
        mpfr_init(r11591423);
        mpfr_init(r11591424);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11591422, x, MPFR_RNDN);
        mpfr_mul(r11591423, r11591421, r11591422, MPFR_RNDN);
        mpfr_add(r11591424, r11591420, r11591423, MPFR_RNDN);
        return mpfr_get_d(r11591424, MPFR_RNDN);
}

