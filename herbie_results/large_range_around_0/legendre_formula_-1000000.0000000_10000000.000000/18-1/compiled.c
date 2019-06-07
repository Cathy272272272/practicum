#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6409071 = 1.0;
        float r6409072 = x;
        float r6409073 = r6409071 * r6409072;
        return r6409073;
}

double f_id(double x) {
        double r6409074 = 1.0;
        double r6409075 = x;
        double r6409076 = r6409074 * r6409075;
        return r6409076;
}


double f_of(float x) {
        float r6409077 = 1.0;
        float r6409078 = x;
        float r6409079 = r6409077 * r6409078;
        return r6409079;
}

double f_od(double x) {
        double r6409080 = 1.0;
        double r6409081 = x;
        double r6409082 = r6409080 * r6409081;
        return r6409082;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6409083, r6409084, r6409085;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6409083, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6409084);
        mpfr_init(r6409085);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6409084, x, MPFR_RNDN);
        mpfr_mul(r6409085, r6409083, r6409084, MPFR_RNDN);
        return mpfr_get_d(r6409085, MPFR_RNDN);
}

static mpfr_t r6409086, r6409087, r6409088;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6409086, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6409087);
        mpfr_init(r6409088);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6409087, x, MPFR_RNDN);
        mpfr_mul(r6409088, r6409086, r6409087, MPFR_RNDN);
        return mpfr_get_d(r6409088, MPFR_RNDN);
}

static mpfr_t r6409089, r6409090, r6409091;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6409089, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6409090);
        mpfr_init(r6409091);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6409090, x, MPFR_RNDN);
        mpfr_mul(r6409091, r6409089, r6409090, MPFR_RNDN);
        return mpfr_get_d(r6409091, MPFR_RNDN);
}

