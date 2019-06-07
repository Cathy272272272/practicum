#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6329352 = 2.0;
        float r6329353 = x;
        float r6329354 = r6329352 * r6329353;
        return r6329354;
}

double f_id(double x) {
        double r6329355 = 2.0;
        double r6329356 = x;
        double r6329357 = r6329355 * r6329356;
        return r6329357;
}


double f_of(float x) {
        float r6329358 = 2.0;
        float r6329359 = x;
        float r6329360 = r6329358 * r6329359;
        return r6329360;
}

double f_od(double x) {
        double r6329361 = 2.0;
        double r6329362 = x;
        double r6329363 = r6329361 * r6329362;
        return r6329363;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6329364, r6329365, r6329366;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6329364, "2.0", 10, MPFR_RNDN);
        mpfr_init(r6329365);
        mpfr_init(r6329366);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6329365, x, MPFR_RNDN);
        mpfr_mul(r6329366, r6329364, r6329365, MPFR_RNDN);
        return mpfr_get_d(r6329366, MPFR_RNDN);
}

static mpfr_t r6329367, r6329368, r6329369;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6329367, "2.0", 10, MPFR_RNDN);
        mpfr_init(r6329368);
        mpfr_init(r6329369);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6329368, x, MPFR_RNDN);
        mpfr_mul(r6329369, r6329367, r6329368, MPFR_RNDN);
        return mpfr_get_d(r6329369, MPFR_RNDN);
}

static mpfr_t r6329370, r6329371, r6329372;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6329370, "2.0", 10, MPFR_RNDN);
        mpfr_init(r6329371);
        mpfr_init(r6329372);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6329371, x, MPFR_RNDN);
        mpfr_mul(r6329372, r6329370, r6329371, MPFR_RNDN);
        return mpfr_get_d(r6329372, MPFR_RNDN);
}

