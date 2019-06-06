#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r64040357 = 2.0;
        float r64040358 = x;
        float r64040359 = r64040357 * r64040358;
        return r64040359;
}

double f_id(double x) {
        double r64040360 = 2.0;
        double r64040361 = x;
        double r64040362 = r64040360 * r64040361;
        return r64040362;
}


double f_of(float x) {
        float r64040363 = 2.0;
        float r64040364 = x;
        float r64040365 = r64040363 * r64040364;
        return r64040365;
}

double f_od(double x) {
        double r64040366 = 2.0;
        double r64040367 = x;
        double r64040368 = r64040366 * r64040367;
        return r64040368;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64040369, r64040370, r64040371;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64040369, "2.0", 10, MPFR_RNDN);
        mpfr_init(r64040370);
        mpfr_init(r64040371);
}

double f_im(double x) {
        ;
        mpfr_set_d(r64040370, x, MPFR_RNDN);
        mpfr_mul(r64040371, r64040369, r64040370, MPFR_RNDN);
        return mpfr_get_d(r64040371, MPFR_RNDN);
}

static mpfr_t r64040372, r64040373, r64040374;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64040372, "2.0", 10, MPFR_RNDN);
        mpfr_init(r64040373);
        mpfr_init(r64040374);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r64040373, x, MPFR_RNDN);
        mpfr_mul(r64040374, r64040372, r64040373, MPFR_RNDN);
        return mpfr_get_d(r64040374, MPFR_RNDN);
}

static mpfr_t r64040375, r64040376, r64040377;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r64040375, "2.0", 10, MPFR_RNDN);
        mpfr_init(r64040376);
        mpfr_init(r64040377);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r64040376, x, MPFR_RNDN);
        mpfr_mul(r64040377, r64040375, r64040376, MPFR_RNDN);
        return mpfr_get_d(r64040377, MPFR_RNDN);
}

