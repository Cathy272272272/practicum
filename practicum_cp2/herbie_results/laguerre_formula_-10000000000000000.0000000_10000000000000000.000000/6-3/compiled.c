#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10002335 = 1.0;
        float r10002336 = -3.0;
        float r10002337 = x;
        float r10002338 = r10002336 * r10002337;
        float r10002339 = r10002335 + r10002338;
        float r10002340 = 1.5;
        float r10002341 = r10002337 * r10002337;
        float r10002342 = r10002340 * r10002341;
        float r10002343 = r10002339 + r10002342;
        float r10002344 = -0.166667;
        float r10002345 = r10002341 * r10002337;
        float r10002346 = r10002344 * r10002345;
        float r10002347 = r10002343 + r10002346;
        return r10002347;
}

double f_id(double x) {
        double r10002348 = 1.0;
        double r10002349 = -3.0;
        double r10002350 = x;
        double r10002351 = r10002349 * r10002350;
        double r10002352 = r10002348 + r10002351;
        double r10002353 = 1.5;
        double r10002354 = r10002350 * r10002350;
        double r10002355 = r10002353 * r10002354;
        double r10002356 = r10002352 + r10002355;
        double r10002357 = -0.166667;
        double r10002358 = r10002354 * r10002350;
        double r10002359 = r10002357 * r10002358;
        double r10002360 = r10002356 + r10002359;
        return r10002360;
}


double f_of(float x) {
        float r10002361 = x;
        float r10002362 = -3.0;
        float r10002363 = r10002361 * r10002362;
        float r10002364 = 1.0;
        float r10002365 = r10002363 + r10002364;
        float r10002366 = 3;
        float r10002367 = pow(r10002365, r10002366);
        float r10002368 = 1.5;
        float r10002369 = -0.166667;
        float r10002370 = r10002369 * r10002361;
        float r10002371 = r10002368 + r10002370;
        float r10002372 = r10002361 * r10002361;
        float r10002373 = r10002371 * r10002372;
        float r10002374 = pow(r10002373, r10002366);
        float r10002375 = r10002367 + r10002374;
        float r10002376 = r10002364 + r10002363;
        float r10002377 = r10002376 * r10002376;
        float r10002378 = r10002370 + r10002368;
        float r10002379 = r10002372 * r10002378;
        float r10002380 = r10002379 - r10002376;
        float r10002381 = r10002379 * r10002380;
        float r10002382 = r10002377 + r10002381;
        float r10002383 = r10002375 / r10002382;
        return r10002383;
}

double f_od(double x) {
        double r10002384 = x;
        double r10002385 = -3.0;
        double r10002386 = r10002384 * r10002385;
        double r10002387 = 1.0;
        double r10002388 = r10002386 + r10002387;
        double r10002389 = 3;
        double r10002390 = pow(r10002388, r10002389);
        double r10002391 = 1.5;
        double r10002392 = -0.166667;
        double r10002393 = r10002392 * r10002384;
        double r10002394 = r10002391 + r10002393;
        double r10002395 = r10002384 * r10002384;
        double r10002396 = r10002394 * r10002395;
        double r10002397 = pow(r10002396, r10002389);
        double r10002398 = r10002390 + r10002397;
        double r10002399 = r10002387 + r10002386;
        double r10002400 = r10002399 * r10002399;
        double r10002401 = r10002393 + r10002391;
        double r10002402 = r10002395 * r10002401;
        double r10002403 = r10002402 - r10002399;
        double r10002404 = r10002402 * r10002403;
        double r10002405 = r10002400 + r10002404;
        double r10002406 = r10002398 / r10002405;
        return r10002406;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10002407, r10002408, r10002409, r10002410, r10002411, r10002412, r10002413, r10002414, r10002415, r10002416, r10002417, r10002418, r10002419;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10002407, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002408, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10002409);
        mpfr_init(r10002410);
        mpfr_init(r10002411);
        mpfr_init_set_str(r10002412, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10002413);
        mpfr_init(r10002414);
        mpfr_init(r10002415);
        mpfr_init_set_str(r10002416, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10002417);
        mpfr_init(r10002418);
        mpfr_init(r10002419);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10002409, x, MPFR_RNDN);
        mpfr_mul(r10002410, r10002408, r10002409, MPFR_RNDN);
        mpfr_add(r10002411, r10002407, r10002410, MPFR_RNDN);
        ;
        mpfr_mul(r10002413, r10002409, r10002409, MPFR_RNDN);
        mpfr_mul(r10002414, r10002412, r10002413, MPFR_RNDN);
        mpfr_add(r10002415, r10002411, r10002414, MPFR_RNDN);
        ;
        mpfr_mul(r10002417, r10002413, r10002409, MPFR_RNDN);
        mpfr_mul(r10002418, r10002416, r10002417, MPFR_RNDN);
        mpfr_add(r10002419, r10002415, r10002418, MPFR_RNDN);
        return mpfr_get_d(r10002419, MPFR_RNDN);
}

static mpfr_t r10002420, r10002421, r10002422, r10002423, r10002424, r10002425, r10002426, r10002427, r10002428, r10002429, r10002430, r10002431, r10002432, r10002433, r10002434, r10002435, r10002436, r10002437, r10002438, r10002439, r10002440, r10002441, r10002442;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10002420);
        mpfr_init_set_str(r10002421, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10002422);
        mpfr_init_set_str(r10002423, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10002424);
        mpfr_init_set_str(r10002425, "3", 10, MPFR_RNDN);
        mpfr_init(r10002426);
        mpfr_init_set_str(r10002427, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002428, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10002429);
        mpfr_init(r10002430);
        mpfr_init(r10002431);
        mpfr_init(r10002432);
        mpfr_init(r10002433);
        mpfr_init(r10002434);
        mpfr_init(r10002435);
        mpfr_init(r10002436);
        mpfr_init(r10002437);
        mpfr_init(r10002438);
        mpfr_init(r10002439);
        mpfr_init(r10002440);
        mpfr_init(r10002441);
        mpfr_init(r10002442);
}

double f_fm(double x) {
        mpfr_set_d(r10002420, x, MPFR_RNDN);
        ;
        mpfr_mul(r10002422, r10002420, r10002421, MPFR_RNDN);
        ;
        mpfr_add(r10002424, r10002422, r10002423, MPFR_RNDN);
        ;
        mpfr_pow(r10002426, r10002424, r10002425, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10002429, r10002428, r10002420, MPFR_RNDN);
        mpfr_add(r10002430, r10002427, r10002429, MPFR_RNDN);
        mpfr_mul(r10002431, r10002420, r10002420, MPFR_RNDN);
        mpfr_mul(r10002432, r10002430, r10002431, MPFR_RNDN);
        mpfr_pow(r10002433, r10002432, r10002425, MPFR_RNDN);
        mpfr_add(r10002434, r10002426, r10002433, MPFR_RNDN);
        mpfr_add(r10002435, r10002423, r10002422, MPFR_RNDN);
        mpfr_mul(r10002436, r10002435, r10002435, MPFR_RNDN);
        mpfr_add(r10002437, r10002429, r10002427, MPFR_RNDN);
        mpfr_mul(r10002438, r10002431, r10002437, MPFR_RNDN);
        mpfr_sub(r10002439, r10002438, r10002435, MPFR_RNDN);
        mpfr_mul(r10002440, r10002438, r10002439, MPFR_RNDN);
        mpfr_add(r10002441, r10002436, r10002440, MPFR_RNDN);
        mpfr_div(r10002442, r10002434, r10002441, MPFR_RNDN);
        return mpfr_get_d(r10002442, MPFR_RNDN);
}

static mpfr_t r10002443, r10002444, r10002445, r10002446, r10002447, r10002448, r10002449, r10002450, r10002451, r10002452, r10002453, r10002454, r10002455, r10002456, r10002457, r10002458, r10002459, r10002460, r10002461, r10002462, r10002463, r10002464, r10002465;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10002443);
        mpfr_init_set_str(r10002444, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10002445);
        mpfr_init_set_str(r10002446, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10002447);
        mpfr_init_set_str(r10002448, "3", 10, MPFR_RNDN);
        mpfr_init(r10002449);
        mpfr_init_set_str(r10002450, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002451, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10002452);
        mpfr_init(r10002453);
        mpfr_init(r10002454);
        mpfr_init(r10002455);
        mpfr_init(r10002456);
        mpfr_init(r10002457);
        mpfr_init(r10002458);
        mpfr_init(r10002459);
        mpfr_init(r10002460);
        mpfr_init(r10002461);
        mpfr_init(r10002462);
        mpfr_init(r10002463);
        mpfr_init(r10002464);
        mpfr_init(r10002465);
}

double f_dm(double x) {
        mpfr_set_d(r10002443, x, MPFR_RNDN);
        ;
        mpfr_mul(r10002445, r10002443, r10002444, MPFR_RNDN);
        ;
        mpfr_add(r10002447, r10002445, r10002446, MPFR_RNDN);
        ;
        mpfr_pow(r10002449, r10002447, r10002448, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10002452, r10002451, r10002443, MPFR_RNDN);
        mpfr_add(r10002453, r10002450, r10002452, MPFR_RNDN);
        mpfr_mul(r10002454, r10002443, r10002443, MPFR_RNDN);
        mpfr_mul(r10002455, r10002453, r10002454, MPFR_RNDN);
        mpfr_pow(r10002456, r10002455, r10002448, MPFR_RNDN);
        mpfr_add(r10002457, r10002449, r10002456, MPFR_RNDN);
        mpfr_add(r10002458, r10002446, r10002445, MPFR_RNDN);
        mpfr_mul(r10002459, r10002458, r10002458, MPFR_RNDN);
        mpfr_add(r10002460, r10002452, r10002450, MPFR_RNDN);
        mpfr_mul(r10002461, r10002454, r10002460, MPFR_RNDN);
        mpfr_sub(r10002462, r10002461, r10002458, MPFR_RNDN);
        mpfr_mul(r10002463, r10002461, r10002462, MPFR_RNDN);
        mpfr_add(r10002464, r10002459, r10002463, MPFR_RNDN);
        mpfr_div(r10002465, r10002457, r10002464, MPFR_RNDN);
        return mpfr_get_d(r10002465, MPFR_RNDN);
}

