#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r83191317 = 1.0;
        float r83191318 = -4.0;
        float r83191319 = x;
        float r83191320 = r83191318 * r83191319;
        float r83191321 = r83191317 + r83191320;
        float r83191322 = 3.0;
        float r83191323 = r83191319 * r83191319;
        float r83191324 = r83191322 * r83191323;
        float r83191325 = r83191321 + r83191324;
        float r83191326 = -0.666667;
        float r83191327 = r83191323 * r83191319;
        float r83191328 = r83191326 * r83191327;
        float r83191329 = r83191325 + r83191328;
        float r83191330 = 0.041667;
        float r83191331 = r83191327 * r83191319;
        float r83191332 = r83191330 * r83191331;
        float r83191333 = r83191329 + r83191332;
        return r83191333;
}

double f_id(double x) {
        double r83191334 = 1.0;
        double r83191335 = -4.0;
        double r83191336 = x;
        double r83191337 = r83191335 * r83191336;
        double r83191338 = r83191334 + r83191337;
        double r83191339 = 3.0;
        double r83191340 = r83191336 * r83191336;
        double r83191341 = r83191339 * r83191340;
        double r83191342 = r83191338 + r83191341;
        double r83191343 = -0.666667;
        double r83191344 = r83191340 * r83191336;
        double r83191345 = r83191343 * r83191344;
        double r83191346 = r83191342 + r83191345;
        double r83191347 = 0.041667;
        double r83191348 = r83191344 * r83191336;
        double r83191349 = r83191347 * r83191348;
        double r83191350 = r83191346 + r83191349;
        return r83191350;
}


double f_of(float x) {
        float r83191351 = 1.0;
        float r83191352 = -4.0;
        float r83191353 = 3.0;
        float r83191354 = x;
        float r83191355 = r83191353 * r83191354;
        float r83191356 = r83191352 + r83191355;
        float r83191357 = r83191356 * r83191354;
        float r83191358 = r83191351 + r83191357;
        float r83191359 = -0.666667;
        float r83191360 = 3;
        float r83191361 = pow(r83191354, r83191360);
        float r83191362 = exp(r83191361);
        float r83191363 = log(r83191362);
        float r83191364 = r83191359 * r83191363;
        float r83191365 = r83191358 + r83191364;
        float r83191366 = 0.041667;
        float r83191367 = r83191354 * r83191354;
        float r83191368 = r83191367 * r83191354;
        float r83191369 = r83191368 * r83191354;
        float r83191370 = r83191366 * r83191369;
        float r83191371 = r83191365 + r83191370;
        return r83191371;
}

double f_od(double x) {
        double r83191372 = 1.0;
        double r83191373 = -4.0;
        double r83191374 = 3.0;
        double r83191375 = x;
        double r83191376 = r83191374 * r83191375;
        double r83191377 = r83191373 + r83191376;
        double r83191378 = r83191377 * r83191375;
        double r83191379 = r83191372 + r83191378;
        double r83191380 = -0.666667;
        double r83191381 = 3;
        double r83191382 = pow(r83191375, r83191381);
        double r83191383 = exp(r83191382);
        double r83191384 = log(r83191383);
        double r83191385 = r83191380 * r83191384;
        double r83191386 = r83191379 + r83191385;
        double r83191387 = 0.041667;
        double r83191388 = r83191375 * r83191375;
        double r83191389 = r83191388 * r83191375;
        double r83191390 = r83191389 * r83191375;
        double r83191391 = r83191387 * r83191390;
        double r83191392 = r83191386 + r83191391;
        return r83191392;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83191393, r83191394, r83191395, r83191396, r83191397, r83191398, r83191399, r83191400, r83191401, r83191402, r83191403, r83191404, r83191405, r83191406, r83191407, r83191408, r83191409;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191393, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191394, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r83191395);
        mpfr_init(r83191396);
        mpfr_init(r83191397);
        mpfr_init_set_str(r83191398, "3.0", 10, MPFR_RNDN);
        mpfr_init(r83191399);
        mpfr_init(r83191400);
        mpfr_init(r83191401);
        mpfr_init_set_str(r83191402, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r83191403);
        mpfr_init(r83191404);
        mpfr_init(r83191405);
        mpfr_init_set_str(r83191406, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r83191407);
        mpfr_init(r83191408);
        mpfr_init(r83191409);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83191395, x, MPFR_RNDN);
        mpfr_mul(r83191396, r83191394, r83191395, MPFR_RNDN);
        mpfr_add(r83191397, r83191393, r83191396, MPFR_RNDN);
        ;
        mpfr_mul(r83191399, r83191395, r83191395, MPFR_RNDN);
        mpfr_mul(r83191400, r83191398, r83191399, MPFR_RNDN);
        mpfr_add(r83191401, r83191397, r83191400, MPFR_RNDN);
        ;
        mpfr_mul(r83191403, r83191399, r83191395, MPFR_RNDN);
        mpfr_mul(r83191404, r83191402, r83191403, MPFR_RNDN);
        mpfr_add(r83191405, r83191401, r83191404, MPFR_RNDN);
        ;
        mpfr_mul(r83191407, r83191403, r83191395, MPFR_RNDN);
        mpfr_mul(r83191408, r83191406, r83191407, MPFR_RNDN);
        mpfr_add(r83191409, r83191405, r83191408, MPFR_RNDN);
        return mpfr_get_d(r83191409, MPFR_RNDN);
}

static mpfr_t r83191410, r83191411, r83191412, r83191413, r83191414, r83191415, r83191416, r83191417, r83191418, r83191419, r83191420, r83191421, r83191422, r83191423, r83191424, r83191425, r83191426, r83191427, r83191428, r83191429, r83191430;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191410, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191411, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191412, "3.0", 10, MPFR_RNDN);
        mpfr_init(r83191413);
        mpfr_init(r83191414);
        mpfr_init(r83191415);
        mpfr_init(r83191416);
        mpfr_init(r83191417);
        mpfr_init_set_str(r83191418, "-0.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191419, "3", 10, MPFR_RNDN);
        mpfr_init(r83191420);
        mpfr_init(r83191421);
        mpfr_init(r83191422);
        mpfr_init(r83191423);
        mpfr_init(r83191424);
        mpfr_init_set_str(r83191425, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r83191426);
        mpfr_init(r83191427);
        mpfr_init(r83191428);
        mpfr_init(r83191429);
        mpfr_init(r83191430);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r83191413, x, MPFR_RNDN);
        mpfr_mul(r83191414, r83191412, r83191413, MPFR_RNDN);
        mpfr_add(r83191415, r83191411, r83191414, MPFR_RNDN);
        mpfr_mul(r83191416, r83191415, r83191413, MPFR_RNDN);
        mpfr_add(r83191417, r83191410, r83191416, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r83191420, r83191413, r83191419, MPFR_RNDN);
        mpfr_exp(r83191421, r83191420, MPFR_RNDN);
        mpfr_log(r83191422, r83191421, MPFR_RNDN);
        mpfr_mul(r83191423, r83191418, r83191422, MPFR_RNDN);
        mpfr_add(r83191424, r83191417, r83191423, MPFR_RNDN);
        ;
        mpfr_mul(r83191426, r83191413, r83191413, MPFR_RNDN);
        mpfr_mul(r83191427, r83191426, r83191413, MPFR_RNDN);
        mpfr_mul(r83191428, r83191427, r83191413, MPFR_RNDN);
        mpfr_mul(r83191429, r83191425, r83191428, MPFR_RNDN);
        mpfr_add(r83191430, r83191424, r83191429, MPFR_RNDN);
        return mpfr_get_d(r83191430, MPFR_RNDN);
}

static mpfr_t r83191431, r83191432, r83191433, r83191434, r83191435, r83191436, r83191437, r83191438, r83191439, r83191440, r83191441, r83191442, r83191443, r83191444, r83191445, r83191446, r83191447, r83191448, r83191449, r83191450, r83191451;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191431, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191432, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191433, "3.0", 10, MPFR_RNDN);
        mpfr_init(r83191434);
        mpfr_init(r83191435);
        mpfr_init(r83191436);
        mpfr_init(r83191437);
        mpfr_init(r83191438);
        mpfr_init_set_str(r83191439, "-0.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191440, "3", 10, MPFR_RNDN);
        mpfr_init(r83191441);
        mpfr_init(r83191442);
        mpfr_init(r83191443);
        mpfr_init(r83191444);
        mpfr_init(r83191445);
        mpfr_init_set_str(r83191446, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r83191447);
        mpfr_init(r83191448);
        mpfr_init(r83191449);
        mpfr_init(r83191450);
        mpfr_init(r83191451);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r83191434, x, MPFR_RNDN);
        mpfr_mul(r83191435, r83191433, r83191434, MPFR_RNDN);
        mpfr_add(r83191436, r83191432, r83191435, MPFR_RNDN);
        mpfr_mul(r83191437, r83191436, r83191434, MPFR_RNDN);
        mpfr_add(r83191438, r83191431, r83191437, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r83191441, r83191434, r83191440, MPFR_RNDN);
        mpfr_exp(r83191442, r83191441, MPFR_RNDN);
        mpfr_log(r83191443, r83191442, MPFR_RNDN);
        mpfr_mul(r83191444, r83191439, r83191443, MPFR_RNDN);
        mpfr_add(r83191445, r83191438, r83191444, MPFR_RNDN);
        ;
        mpfr_mul(r83191447, r83191434, r83191434, MPFR_RNDN);
        mpfr_mul(r83191448, r83191447, r83191434, MPFR_RNDN);
        mpfr_mul(r83191449, r83191448, r83191434, MPFR_RNDN);
        mpfr_mul(r83191450, r83191446, r83191449, MPFR_RNDN);
        mpfr_add(r83191451, r83191445, r83191450, MPFR_RNDN);
        return mpfr_get_d(r83191451, MPFR_RNDN);
}

