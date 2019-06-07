#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r3278386 = 1.0;
        float r3278387 = -3.0;
        float r3278388 = x;
        float r3278389 = r3278387 * r3278388;
        float r3278390 = r3278386 + r3278389;
        float r3278391 = 1.5;
        float r3278392 = r3278388 * r3278388;
        float r3278393 = r3278391 * r3278392;
        float r3278394 = r3278390 + r3278393;
        float r3278395 = -0.166667;
        float r3278396 = r3278392 * r3278388;
        float r3278397 = r3278395 * r3278396;
        float r3278398 = r3278394 + r3278397;
        return r3278398;
}

double f_id(double x) {
        double r3278399 = 1.0;
        double r3278400 = -3.0;
        double r3278401 = x;
        double r3278402 = r3278400 * r3278401;
        double r3278403 = r3278399 + r3278402;
        double r3278404 = 1.5;
        double r3278405 = r3278401 * r3278401;
        double r3278406 = r3278404 * r3278405;
        double r3278407 = r3278403 + r3278406;
        double r3278408 = -0.166667;
        double r3278409 = r3278405 * r3278401;
        double r3278410 = r3278408 * r3278409;
        double r3278411 = r3278407 + r3278410;
        return r3278411;
}


double f_of(float x) {
        float r3278412 = x;
        float r3278413 = -3.0;
        float r3278414 = r3278412 * r3278413;
        float r3278415 = 1.0;
        float r3278416 = r3278414 + r3278415;
        float r3278417 = 1.5;
        float r3278418 = -0.166667;
        float r3278419 = r3278418 * r3278412;
        float r3278420 = r3278417 + r3278419;
        float r3278421 = r3278412 * r3278412;
        float r3278422 = r3278420 * r3278421;
        float r3278423 = r3278416 + r3278422;
        return r3278423;
}

double f_od(double x) {
        double r3278424 = x;
        double r3278425 = -3.0;
        double r3278426 = r3278424 * r3278425;
        double r3278427 = 1.0;
        double r3278428 = r3278426 + r3278427;
        double r3278429 = 1.5;
        double r3278430 = -0.166667;
        double r3278431 = r3278430 * r3278424;
        double r3278432 = r3278429 + r3278431;
        double r3278433 = r3278424 * r3278424;
        double r3278434 = r3278432 * r3278433;
        double r3278435 = r3278428 + r3278434;
        return r3278435;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3278436, r3278437, r3278438, r3278439, r3278440, r3278441, r3278442, r3278443, r3278444, r3278445, r3278446, r3278447, r3278448;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278436, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278437, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r3278438);
        mpfr_init(r3278439);
        mpfr_init(r3278440);
        mpfr_init_set_str(r3278441, "1.5", 10, MPFR_RNDN);
        mpfr_init(r3278442);
        mpfr_init(r3278443);
        mpfr_init(r3278444);
        mpfr_init_set_str(r3278445, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r3278446);
        mpfr_init(r3278447);
        mpfr_init(r3278448);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3278438, x, MPFR_RNDN);
        mpfr_mul(r3278439, r3278437, r3278438, MPFR_RNDN);
        mpfr_add(r3278440, r3278436, r3278439, MPFR_RNDN);
        ;
        mpfr_mul(r3278442, r3278438, r3278438, MPFR_RNDN);
        mpfr_mul(r3278443, r3278441, r3278442, MPFR_RNDN);
        mpfr_add(r3278444, r3278440, r3278443, MPFR_RNDN);
        ;
        mpfr_mul(r3278446, r3278442, r3278438, MPFR_RNDN);
        mpfr_mul(r3278447, r3278445, r3278446, MPFR_RNDN);
        mpfr_add(r3278448, r3278444, r3278447, MPFR_RNDN);
        return mpfr_get_d(r3278448, MPFR_RNDN);
}

static mpfr_t r3278449, r3278450, r3278451, r3278452, r3278453, r3278454, r3278455, r3278456, r3278457, r3278458, r3278459, r3278460;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3278449);
        mpfr_init_set_str(r3278450, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r3278451);
        mpfr_init_set_str(r3278452, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3278453);
        mpfr_init_set_str(r3278454, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278455, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r3278456);
        mpfr_init(r3278457);
        mpfr_init(r3278458);
        mpfr_init(r3278459);
        mpfr_init(r3278460);
}

double f_fm(double x) {
        mpfr_set_d(r3278449, x, MPFR_RNDN);
        ;
        mpfr_mul(r3278451, r3278449, r3278450, MPFR_RNDN);
        ;
        mpfr_add(r3278453, r3278451, r3278452, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3278456, r3278455, r3278449, MPFR_RNDN);
        mpfr_add(r3278457, r3278454, r3278456, MPFR_RNDN);
        mpfr_mul(r3278458, r3278449, r3278449, MPFR_RNDN);
        mpfr_mul(r3278459, r3278457, r3278458, MPFR_RNDN);
        mpfr_add(r3278460, r3278453, r3278459, MPFR_RNDN);
        return mpfr_get_d(r3278460, MPFR_RNDN);
}

static mpfr_t r3278461, r3278462, r3278463, r3278464, r3278465, r3278466, r3278467, r3278468, r3278469, r3278470, r3278471, r3278472;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3278461);
        mpfr_init_set_str(r3278462, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r3278463);
        mpfr_init_set_str(r3278464, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3278465);
        mpfr_init_set_str(r3278466, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278467, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r3278468);
        mpfr_init(r3278469);
        mpfr_init(r3278470);
        mpfr_init(r3278471);
        mpfr_init(r3278472);
}

double f_dm(double x) {
        mpfr_set_d(r3278461, x, MPFR_RNDN);
        ;
        mpfr_mul(r3278463, r3278461, r3278462, MPFR_RNDN);
        ;
        mpfr_add(r3278465, r3278463, r3278464, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3278468, r3278467, r3278461, MPFR_RNDN);
        mpfr_add(r3278469, r3278466, r3278468, MPFR_RNDN);
        mpfr_mul(r3278470, r3278461, r3278461, MPFR_RNDN);
        mpfr_mul(r3278471, r3278469, r3278470, MPFR_RNDN);
        mpfr_add(r3278472, r3278465, r3278471, MPFR_RNDN);
        return mpfr_get_d(r3278472, MPFR_RNDN);
}

