#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7167328 = -2.1875;
        float r7167329 = x;
        float r7167330 = r7167328 * r7167329;
        float r7167331 = 19.6875;
        float r7167332 = r7167329 * r7167329;
        float r7167333 = r7167332 * r7167329;
        float r7167334 = r7167331 * r7167333;
        float r7167335 = r7167330 + r7167334;
        float r7167336 = -43.3125;
        float r7167337 = r7167333 * r7167329;
        float r7167338 = r7167337 * r7167329;
        float r7167339 = r7167336 * r7167338;
        float r7167340 = r7167335 + r7167339;
        float r7167341 = 26.8125;
        float r7167342 = r7167338 * r7167329;
        float r7167343 = r7167342 * r7167329;
        float r7167344 = r7167341 * r7167343;
        float r7167345 = r7167340 + r7167344;
        return r7167345;
}

double f_id(double x) {
        double r7167346 = -2.1875;
        double r7167347 = x;
        double r7167348 = r7167346 * r7167347;
        double r7167349 = 19.6875;
        double r7167350 = r7167347 * r7167347;
        double r7167351 = r7167350 * r7167347;
        double r7167352 = r7167349 * r7167351;
        double r7167353 = r7167348 + r7167352;
        double r7167354 = -43.3125;
        double r7167355 = r7167351 * r7167347;
        double r7167356 = r7167355 * r7167347;
        double r7167357 = r7167354 * r7167356;
        double r7167358 = r7167353 + r7167357;
        double r7167359 = 26.8125;
        double r7167360 = r7167356 * r7167347;
        double r7167361 = r7167360 * r7167347;
        double r7167362 = r7167359 * r7167361;
        double r7167363 = r7167358 + r7167362;
        return r7167363;
}


double f_of(float x) {
        float r7167364 = x;
        float r7167365 = r7167364 * r7167364;
        float r7167366 = r7167365 * r7167365;
        float r7167367 = 3;
        float r7167368 = pow(r7167364, r7167367);
        float r7167369 = r7167368 * r7167368;
        float r7167370 = 26.8125;
        float r7167371 = r7167364 * r7167370;
        float r7167372 = pow(r7167371, r7167367);
        float r7167373 = r7167369 * r7167372;
        float r7167374 = cbrt(r7167373);
        float r7167375 = -43.3125;
        float r7167376 = r7167364 * r7167375;
        float r7167377 = r7167374 + r7167376;
        float r7167378 = r7167366 * r7167377;
        float r7167379 = 19.6875;
        float r7167380 = r7167379 * r7167364;
        float r7167381 = r7167380 * r7167364;
        float r7167382 = -2.1875;
        float r7167383 = r7167381 + r7167382;
        float r7167384 = r7167364 * r7167383;
        float r7167385 = r7167378 + r7167384;
        return r7167385;
}

double f_od(double x) {
        double r7167386 = x;
        double r7167387 = r7167386 * r7167386;
        double r7167388 = r7167387 * r7167387;
        double r7167389 = 3;
        double r7167390 = pow(r7167386, r7167389);
        double r7167391 = r7167390 * r7167390;
        double r7167392 = 26.8125;
        double r7167393 = r7167386 * r7167392;
        double r7167394 = pow(r7167393, r7167389);
        double r7167395 = r7167391 * r7167394;
        double r7167396 = cbrt(r7167395);
        double r7167397 = -43.3125;
        double r7167398 = r7167386 * r7167397;
        double r7167399 = r7167396 + r7167398;
        double r7167400 = r7167388 * r7167399;
        double r7167401 = 19.6875;
        double r7167402 = r7167401 * r7167386;
        double r7167403 = r7167402 * r7167386;
        double r7167404 = -2.1875;
        double r7167405 = r7167403 + r7167404;
        double r7167406 = r7167386 * r7167405;
        double r7167407 = r7167400 + r7167406;
        return r7167407;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167408, r7167409, r7167410, r7167411, r7167412, r7167413, r7167414, r7167415, r7167416, r7167417, r7167418, r7167419, r7167420, r7167421, r7167422, r7167423, r7167424, r7167425;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7167408, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7167409);
        mpfr_init(r7167410);
        mpfr_init_set_str(r7167411, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7167412);
        mpfr_init(r7167413);
        mpfr_init(r7167414);
        mpfr_init(r7167415);
        mpfr_init_set_str(r7167416, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7167417);
        mpfr_init(r7167418);
        mpfr_init(r7167419);
        mpfr_init(r7167420);
        mpfr_init_set_str(r7167421, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7167422);
        mpfr_init(r7167423);
        mpfr_init(r7167424);
        mpfr_init(r7167425);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7167409, x, MPFR_RNDN);
        mpfr_mul(r7167410, r7167408, r7167409, MPFR_RNDN);
        ;
        mpfr_mul(r7167412, r7167409, r7167409, MPFR_RNDN);
        mpfr_mul(r7167413, r7167412, r7167409, MPFR_RNDN);
        mpfr_mul(r7167414, r7167411, r7167413, MPFR_RNDN);
        mpfr_add(r7167415, r7167410, r7167414, MPFR_RNDN);
        ;
        mpfr_mul(r7167417, r7167413, r7167409, MPFR_RNDN);
        mpfr_mul(r7167418, r7167417, r7167409, MPFR_RNDN);
        mpfr_mul(r7167419, r7167416, r7167418, MPFR_RNDN);
        mpfr_add(r7167420, r7167415, r7167419, MPFR_RNDN);
        ;
        mpfr_mul(r7167422, r7167418, r7167409, MPFR_RNDN);
        mpfr_mul(r7167423, r7167422, r7167409, MPFR_RNDN);
        mpfr_mul(r7167424, r7167421, r7167423, MPFR_RNDN);
        mpfr_add(r7167425, r7167420, r7167424, MPFR_RNDN);
        return mpfr_get_d(r7167425, MPFR_RNDN);
}

static mpfr_t r7167426, r7167427, r7167428, r7167429, r7167430, r7167431, r7167432, r7167433, r7167434, r7167435, r7167436, r7167437, r7167438, r7167439, r7167440, r7167441, r7167442, r7167443, r7167444, r7167445, r7167446, r7167447;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7167426);
        mpfr_init(r7167427);
        mpfr_init(r7167428);
        mpfr_init_set_str(r7167429, "3", 10, MPFR_RNDN);
        mpfr_init(r7167430);
        mpfr_init(r7167431);
        mpfr_init_set_str(r7167432, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7167433);
        mpfr_init(r7167434);
        mpfr_init(r7167435);
        mpfr_init(r7167436);
        mpfr_init_set_str(r7167437, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7167438);
        mpfr_init(r7167439);
        mpfr_init(r7167440);
        mpfr_init_set_str(r7167441, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7167442);
        mpfr_init(r7167443);
        mpfr_init_set_str(r7167444, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7167445);
        mpfr_init(r7167446);
        mpfr_init(r7167447);
}

double f_fm(double x) {
        mpfr_set_d(r7167426, x, MPFR_RNDN);
        mpfr_mul(r7167427, r7167426, r7167426, MPFR_RNDN);
        mpfr_mul(r7167428, r7167427, r7167427, MPFR_RNDN);
        ;
        mpfr_pow(r7167430, r7167426, r7167429, MPFR_RNDN);
        mpfr_mul(r7167431, r7167430, r7167430, MPFR_RNDN);
        ;
        mpfr_mul(r7167433, r7167426, r7167432, MPFR_RNDN);
        mpfr_pow(r7167434, r7167433, r7167429, MPFR_RNDN);
        mpfr_mul(r7167435, r7167431, r7167434, MPFR_RNDN);
        mpfr_cbrt(r7167436, r7167435, MPFR_RNDN);
        ;
        mpfr_mul(r7167438, r7167426, r7167437, MPFR_RNDN);
        mpfr_add(r7167439, r7167436, r7167438, MPFR_RNDN);
        mpfr_mul(r7167440, r7167428, r7167439, MPFR_RNDN);
        ;
        mpfr_mul(r7167442, r7167441, r7167426, MPFR_RNDN);
        mpfr_mul(r7167443, r7167442, r7167426, MPFR_RNDN);
        ;
        mpfr_add(r7167445, r7167443, r7167444, MPFR_RNDN);
        mpfr_mul(r7167446, r7167426, r7167445, MPFR_RNDN);
        mpfr_add(r7167447, r7167440, r7167446, MPFR_RNDN);
        return mpfr_get_d(r7167447, MPFR_RNDN);
}

static mpfr_t r7167448, r7167449, r7167450, r7167451, r7167452, r7167453, r7167454, r7167455, r7167456, r7167457, r7167458, r7167459, r7167460, r7167461, r7167462, r7167463, r7167464, r7167465, r7167466, r7167467, r7167468, r7167469;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7167448);
        mpfr_init(r7167449);
        mpfr_init(r7167450);
        mpfr_init_set_str(r7167451, "3", 10, MPFR_RNDN);
        mpfr_init(r7167452);
        mpfr_init(r7167453);
        mpfr_init_set_str(r7167454, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7167455);
        mpfr_init(r7167456);
        mpfr_init(r7167457);
        mpfr_init(r7167458);
        mpfr_init_set_str(r7167459, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7167460);
        mpfr_init(r7167461);
        mpfr_init(r7167462);
        mpfr_init_set_str(r7167463, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7167464);
        mpfr_init(r7167465);
        mpfr_init_set_str(r7167466, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7167467);
        mpfr_init(r7167468);
        mpfr_init(r7167469);
}

double f_dm(double x) {
        mpfr_set_d(r7167448, x, MPFR_RNDN);
        mpfr_mul(r7167449, r7167448, r7167448, MPFR_RNDN);
        mpfr_mul(r7167450, r7167449, r7167449, MPFR_RNDN);
        ;
        mpfr_pow(r7167452, r7167448, r7167451, MPFR_RNDN);
        mpfr_mul(r7167453, r7167452, r7167452, MPFR_RNDN);
        ;
        mpfr_mul(r7167455, r7167448, r7167454, MPFR_RNDN);
        mpfr_pow(r7167456, r7167455, r7167451, MPFR_RNDN);
        mpfr_mul(r7167457, r7167453, r7167456, MPFR_RNDN);
        mpfr_cbrt(r7167458, r7167457, MPFR_RNDN);
        ;
        mpfr_mul(r7167460, r7167448, r7167459, MPFR_RNDN);
        mpfr_add(r7167461, r7167458, r7167460, MPFR_RNDN);
        mpfr_mul(r7167462, r7167450, r7167461, MPFR_RNDN);
        ;
        mpfr_mul(r7167464, r7167463, r7167448, MPFR_RNDN);
        mpfr_mul(r7167465, r7167464, r7167448, MPFR_RNDN);
        ;
        mpfr_add(r7167467, r7167465, r7167466, MPFR_RNDN);
        mpfr_mul(r7167468, r7167448, r7167467, MPFR_RNDN);
        mpfr_add(r7167469, r7167462, r7167468, MPFR_RNDN);
        return mpfr_get_d(r7167469, MPFR_RNDN);
}

