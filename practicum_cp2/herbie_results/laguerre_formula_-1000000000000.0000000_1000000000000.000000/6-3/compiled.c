#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9582384 = 1.0;
        float r9582385 = -3.0;
        float r9582386 = x;
        float r9582387 = r9582385 * r9582386;
        float r9582388 = r9582384 + r9582387;
        float r9582389 = 1.5;
        float r9582390 = r9582386 * r9582386;
        float r9582391 = r9582389 * r9582390;
        float r9582392 = r9582388 + r9582391;
        float r9582393 = -0.166667;
        float r9582394 = r9582390 * r9582386;
        float r9582395 = r9582393 * r9582394;
        float r9582396 = r9582392 + r9582395;
        return r9582396;
}

double f_id(double x) {
        double r9582397 = 1.0;
        double r9582398 = -3.0;
        double r9582399 = x;
        double r9582400 = r9582398 * r9582399;
        double r9582401 = r9582397 + r9582400;
        double r9582402 = 1.5;
        double r9582403 = r9582399 * r9582399;
        double r9582404 = r9582402 * r9582403;
        double r9582405 = r9582401 + r9582404;
        double r9582406 = -0.166667;
        double r9582407 = r9582403 * r9582399;
        double r9582408 = r9582406 * r9582407;
        double r9582409 = r9582405 + r9582408;
        return r9582409;
}


double f_of(float x) {
        float r9582410 = x;
        float r9582411 = -3.0;
        float r9582412 = r9582410 * r9582411;
        float r9582413 = 1.0;
        float r9582414 = r9582412 + r9582413;
        float r9582415 = 1.5;
        float r9582416 = -0.166667;
        float r9582417 = r9582416 * r9582410;
        float r9582418 = r9582415 + r9582417;
        float r9582419 = r9582410 * r9582410;
        float r9582420 = r9582418 * r9582419;
        float r9582421 = r9582414 + r9582420;
        return r9582421;
}

double f_od(double x) {
        double r9582422 = x;
        double r9582423 = -3.0;
        double r9582424 = r9582422 * r9582423;
        double r9582425 = 1.0;
        double r9582426 = r9582424 + r9582425;
        double r9582427 = 1.5;
        double r9582428 = -0.166667;
        double r9582429 = r9582428 * r9582422;
        double r9582430 = r9582427 + r9582429;
        double r9582431 = r9582422 * r9582422;
        double r9582432 = r9582430 * r9582431;
        double r9582433 = r9582426 + r9582432;
        return r9582433;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9582434, r9582435, r9582436, r9582437, r9582438, r9582439, r9582440, r9582441, r9582442, r9582443, r9582444, r9582445, r9582446;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9582434, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582435, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9582436);
        mpfr_init(r9582437);
        mpfr_init(r9582438);
        mpfr_init_set_str(r9582439, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9582440);
        mpfr_init(r9582441);
        mpfr_init(r9582442);
        mpfr_init_set_str(r9582443, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9582444);
        mpfr_init(r9582445);
        mpfr_init(r9582446);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9582436, x, MPFR_RNDN);
        mpfr_mul(r9582437, r9582435, r9582436, MPFR_RNDN);
        mpfr_add(r9582438, r9582434, r9582437, MPFR_RNDN);
        ;
        mpfr_mul(r9582440, r9582436, r9582436, MPFR_RNDN);
        mpfr_mul(r9582441, r9582439, r9582440, MPFR_RNDN);
        mpfr_add(r9582442, r9582438, r9582441, MPFR_RNDN);
        ;
        mpfr_mul(r9582444, r9582440, r9582436, MPFR_RNDN);
        mpfr_mul(r9582445, r9582443, r9582444, MPFR_RNDN);
        mpfr_add(r9582446, r9582442, r9582445, MPFR_RNDN);
        return mpfr_get_d(r9582446, MPFR_RNDN);
}

static mpfr_t r9582447, r9582448, r9582449, r9582450, r9582451, r9582452, r9582453, r9582454, r9582455, r9582456, r9582457, r9582458;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9582447);
        mpfr_init_set_str(r9582448, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9582449);
        mpfr_init_set_str(r9582450, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9582451);
        mpfr_init_set_str(r9582452, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582453, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9582454);
        mpfr_init(r9582455);
        mpfr_init(r9582456);
        mpfr_init(r9582457);
        mpfr_init(r9582458);
}

double f_fm(double x) {
        mpfr_set_d(r9582447, x, MPFR_RNDN);
        ;
        mpfr_mul(r9582449, r9582447, r9582448, MPFR_RNDN);
        ;
        mpfr_add(r9582451, r9582449, r9582450, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9582454, r9582453, r9582447, MPFR_RNDN);
        mpfr_add(r9582455, r9582452, r9582454, MPFR_RNDN);
        mpfr_mul(r9582456, r9582447, r9582447, MPFR_RNDN);
        mpfr_mul(r9582457, r9582455, r9582456, MPFR_RNDN);
        mpfr_add(r9582458, r9582451, r9582457, MPFR_RNDN);
        return mpfr_get_d(r9582458, MPFR_RNDN);
}

static mpfr_t r9582459, r9582460, r9582461, r9582462, r9582463, r9582464, r9582465, r9582466, r9582467, r9582468, r9582469, r9582470;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9582459);
        mpfr_init_set_str(r9582460, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9582461);
        mpfr_init_set_str(r9582462, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9582463);
        mpfr_init_set_str(r9582464, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582465, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9582466);
        mpfr_init(r9582467);
        mpfr_init(r9582468);
        mpfr_init(r9582469);
        mpfr_init(r9582470);
}

double f_dm(double x) {
        mpfr_set_d(r9582459, x, MPFR_RNDN);
        ;
        mpfr_mul(r9582461, r9582459, r9582460, MPFR_RNDN);
        ;
        mpfr_add(r9582463, r9582461, r9582462, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9582466, r9582465, r9582459, MPFR_RNDN);
        mpfr_add(r9582467, r9582464, r9582466, MPFR_RNDN);
        mpfr_mul(r9582468, r9582459, r9582459, MPFR_RNDN);
        mpfr_mul(r9582469, r9582467, r9582468, MPFR_RNDN);
        mpfr_add(r9582470, r9582463, r9582469, MPFR_RNDN);
        return mpfr_get_d(r9582470, MPFR_RNDN);
}

