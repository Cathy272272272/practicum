#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r5394381 = -1.5;
        float r5394382 = x;
        float r5394383 = r5394381 * r5394382;
        float r5394384 = 2.5;
        float r5394385 = r5394382 * r5394382;
        float r5394386 = r5394385 * r5394382;
        float r5394387 = r5394384 * r5394386;
        float r5394388 = r5394383 + r5394387;
        return r5394388;
}

double f_id(double x) {
        double r5394389 = -1.5;
        double r5394390 = x;
        double r5394391 = r5394389 * r5394390;
        double r5394392 = 2.5;
        double r5394393 = r5394390 * r5394390;
        double r5394394 = r5394393 * r5394390;
        double r5394395 = r5394392 * r5394394;
        double r5394396 = r5394391 + r5394395;
        return r5394396;
}


double f_of(float x) {
        float r5394397 = x;
        float r5394398 = -1.5;
        float r5394399 = 2.5;
        float r5394400 = r5394397 * r5394397;
        float r5394401 = r5394399 * r5394400;
        float r5394402 = r5394398 + r5394401;
        float r5394403 = r5394397 * r5394402;
        return r5394403;
}

double f_od(double x) {
        double r5394404 = x;
        double r5394405 = -1.5;
        double r5394406 = 2.5;
        double r5394407 = r5394404 * r5394404;
        double r5394408 = r5394406 * r5394407;
        double r5394409 = r5394405 + r5394408;
        double r5394410 = r5394404 * r5394409;
        return r5394410;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5394411, r5394412, r5394413, r5394414, r5394415, r5394416, r5394417, r5394418;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5394411, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r5394412);
        mpfr_init(r5394413);
        mpfr_init_set_str(r5394414, "2.5", 10, MPFR_RNDN);
        mpfr_init(r5394415);
        mpfr_init(r5394416);
        mpfr_init(r5394417);
        mpfr_init(r5394418);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5394412, x, MPFR_RNDN);
        mpfr_mul(r5394413, r5394411, r5394412, MPFR_RNDN);
        ;
        mpfr_mul(r5394415, r5394412, r5394412, MPFR_RNDN);
        mpfr_mul(r5394416, r5394415, r5394412, MPFR_RNDN);
        mpfr_mul(r5394417, r5394414, r5394416, MPFR_RNDN);
        mpfr_add(r5394418, r5394413, r5394417, MPFR_RNDN);
        return mpfr_get_d(r5394418, MPFR_RNDN);
}

static mpfr_t r5394419, r5394420, r5394421, r5394422, r5394423, r5394424, r5394425;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r5394419);
        mpfr_init_set_str(r5394420, "-1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394421, "2.5", 10, MPFR_RNDN);
        mpfr_init(r5394422);
        mpfr_init(r5394423);
        mpfr_init(r5394424);
        mpfr_init(r5394425);
}

double f_fm(double x) {
        mpfr_set_d(r5394419, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5394422, r5394419, r5394419, MPFR_RNDN);
        mpfr_mul(r5394423, r5394421, r5394422, MPFR_RNDN);
        mpfr_add(r5394424, r5394420, r5394423, MPFR_RNDN);
        mpfr_mul(r5394425, r5394419, r5394424, MPFR_RNDN);
        return mpfr_get_d(r5394425, MPFR_RNDN);
}

static mpfr_t r5394426, r5394427, r5394428, r5394429, r5394430, r5394431, r5394432;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r5394426);
        mpfr_init_set_str(r5394427, "-1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394428, "2.5", 10, MPFR_RNDN);
        mpfr_init(r5394429);
        mpfr_init(r5394430);
        mpfr_init(r5394431);
        mpfr_init(r5394432);
}

double f_dm(double x) {
        mpfr_set_d(r5394426, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5394429, r5394426, r5394426, MPFR_RNDN);
        mpfr_mul(r5394430, r5394428, r5394429, MPFR_RNDN);
        mpfr_add(r5394431, r5394427, r5394430, MPFR_RNDN);
        mpfr_mul(r5394432, r5394426, r5394431, MPFR_RNDN);
        return mpfr_get_d(r5394432, MPFR_RNDN);
}

