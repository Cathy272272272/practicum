#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r11054334 = -120.0;
        float r11054335 = 720.0;
        float r11054336 = x;
        float r11054337 = r11054336 * r11054336;
        float r11054338 = r11054335 * r11054337;
        float r11054339 = r11054334 + r11054338;
        float r11054340 = -480.0;
        float r11054341 = r11054337 * r11054336;
        float r11054342 = r11054341 * r11054336;
        float r11054343 = r11054340 * r11054342;
        float r11054344 = r11054339 + r11054343;
        float r11054345 = 64.0;
        float r11054346 = r11054342 * r11054336;
        float r11054347 = r11054346 * r11054336;
        float r11054348 = r11054345 * r11054347;
        float r11054349 = r11054344 + r11054348;
        return r11054349;
}

double f_id(double x) {
        double r11054350 = -120.0;
        double r11054351 = 720.0;
        double r11054352 = x;
        double r11054353 = r11054352 * r11054352;
        double r11054354 = r11054351 * r11054353;
        double r11054355 = r11054350 + r11054354;
        double r11054356 = -480.0;
        double r11054357 = r11054353 * r11054352;
        double r11054358 = r11054357 * r11054352;
        double r11054359 = r11054356 * r11054358;
        double r11054360 = r11054355 + r11054359;
        double r11054361 = 64.0;
        double r11054362 = r11054358 * r11054352;
        double r11054363 = r11054362 * r11054352;
        double r11054364 = r11054361 * r11054363;
        double r11054365 = r11054360 + r11054364;
        return r11054365;
}


double f_of(float x) {
        float r11054366 = x;
        float r11054367 = 720.0;
        float r11054368 = r11054366 * r11054367;
        float r11054369 = r11054368 * r11054366;
        float r11054370 = -120.0;
        float r11054371 = r11054369 + r11054370;
        float r11054372 = 2;
        float r11054373 = r11054372 + r11054372;
        float r11054374 = pow(r11054366, r11054373);
        float r11054375 = -480.0;
        float r11054376 = r11054366 * r11054366;
        float r11054377 = 64.0;
        float r11054378 = r11054376 * r11054377;
        float r11054379 = r11054375 + r11054378;
        float r11054380 = r11054374 * r11054379;
        float r11054381 = r11054371 + r11054380;
        return r11054381;
}

double f_od(double x) {
        double r11054382 = x;
        double r11054383 = 720.0;
        double r11054384 = r11054382 * r11054383;
        double r11054385 = r11054384 * r11054382;
        double r11054386 = -120.0;
        double r11054387 = r11054385 + r11054386;
        double r11054388 = 2;
        double r11054389 = r11054388 + r11054388;
        double r11054390 = pow(r11054382, r11054389);
        double r11054391 = -480.0;
        double r11054392 = r11054382 * r11054382;
        double r11054393 = 64.0;
        double r11054394 = r11054392 * r11054393;
        double r11054395 = r11054391 + r11054394;
        double r11054396 = r11054390 * r11054395;
        double r11054397 = r11054387 + r11054396;
        return r11054397;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054398, r11054399, r11054400, r11054401, r11054402, r11054403, r11054404, r11054405, r11054406, r11054407, r11054408, r11054409, r11054410, r11054411, r11054412, r11054413;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054398, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054399, "720.0", 10, MPFR_RNDN);
        mpfr_init(r11054400);
        mpfr_init(r11054401);
        mpfr_init(r11054402);
        mpfr_init(r11054403);
        mpfr_init_set_str(r11054404, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r11054405);
        mpfr_init(r11054406);
        mpfr_init(r11054407);
        mpfr_init(r11054408);
        mpfr_init_set_str(r11054409, "64.0", 10, MPFR_RNDN);
        mpfr_init(r11054410);
        mpfr_init(r11054411);
        mpfr_init(r11054412);
        mpfr_init(r11054413);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11054400, x, MPFR_RNDN);
        mpfr_mul(r11054401, r11054400, r11054400, MPFR_RNDN);
        mpfr_mul(r11054402, r11054399, r11054401, MPFR_RNDN);
        mpfr_add(r11054403, r11054398, r11054402, MPFR_RNDN);
        ;
        mpfr_mul(r11054405, r11054401, r11054400, MPFR_RNDN);
        mpfr_mul(r11054406, r11054405, r11054400, MPFR_RNDN);
        mpfr_mul(r11054407, r11054404, r11054406, MPFR_RNDN);
        mpfr_add(r11054408, r11054403, r11054407, MPFR_RNDN);
        ;
        mpfr_mul(r11054410, r11054406, r11054400, MPFR_RNDN);
        mpfr_mul(r11054411, r11054410, r11054400, MPFR_RNDN);
        mpfr_mul(r11054412, r11054409, r11054411, MPFR_RNDN);
        mpfr_add(r11054413, r11054408, r11054412, MPFR_RNDN);
        return mpfr_get_d(r11054413, MPFR_RNDN);
}

static mpfr_t r11054414, r11054415, r11054416, r11054417, r11054418, r11054419, r11054420, r11054421, r11054422, r11054423, r11054424, r11054425, r11054426, r11054427, r11054428, r11054429;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11054414);
        mpfr_init_set_str(r11054415, "720.0", 10, MPFR_RNDN);
        mpfr_init(r11054416);
        mpfr_init(r11054417);
        mpfr_init_set_str(r11054418, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r11054419);
        mpfr_init_set_str(r11054420, "2", 10, MPFR_RNDN);
        mpfr_init(r11054421);
        mpfr_init(r11054422);
        mpfr_init_set_str(r11054423, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r11054424);
        mpfr_init_set_str(r11054425, "64.0", 10, MPFR_RNDN);
        mpfr_init(r11054426);
        mpfr_init(r11054427);
        mpfr_init(r11054428);
        mpfr_init(r11054429);
}

double f_fm(double x) {
        mpfr_set_d(r11054414, x, MPFR_RNDN);
        ;
        mpfr_mul(r11054416, r11054414, r11054415, MPFR_RNDN);
        mpfr_mul(r11054417, r11054416, r11054414, MPFR_RNDN);
        ;
        mpfr_add(r11054419, r11054417, r11054418, MPFR_RNDN);
        ;
        mpfr_add(r11054421, r11054420, r11054420, MPFR_RNDN);
        mpfr_pow(r11054422, r11054414, r11054421, MPFR_RNDN);
        ;
        mpfr_mul(r11054424, r11054414, r11054414, MPFR_RNDN);
        ;
        mpfr_mul(r11054426, r11054424, r11054425, MPFR_RNDN);
        mpfr_add(r11054427, r11054423, r11054426, MPFR_RNDN);
        mpfr_mul(r11054428, r11054422, r11054427, MPFR_RNDN);
        mpfr_add(r11054429, r11054419, r11054428, MPFR_RNDN);
        return mpfr_get_d(r11054429, MPFR_RNDN);
}

static mpfr_t r11054430, r11054431, r11054432, r11054433, r11054434, r11054435, r11054436, r11054437, r11054438, r11054439, r11054440, r11054441, r11054442, r11054443, r11054444, r11054445;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11054430);
        mpfr_init_set_str(r11054431, "720.0", 10, MPFR_RNDN);
        mpfr_init(r11054432);
        mpfr_init(r11054433);
        mpfr_init_set_str(r11054434, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r11054435);
        mpfr_init_set_str(r11054436, "2", 10, MPFR_RNDN);
        mpfr_init(r11054437);
        mpfr_init(r11054438);
        mpfr_init_set_str(r11054439, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r11054440);
        mpfr_init_set_str(r11054441, "64.0", 10, MPFR_RNDN);
        mpfr_init(r11054442);
        mpfr_init(r11054443);
        mpfr_init(r11054444);
        mpfr_init(r11054445);
}

double f_dm(double x) {
        mpfr_set_d(r11054430, x, MPFR_RNDN);
        ;
        mpfr_mul(r11054432, r11054430, r11054431, MPFR_RNDN);
        mpfr_mul(r11054433, r11054432, r11054430, MPFR_RNDN);
        ;
        mpfr_add(r11054435, r11054433, r11054434, MPFR_RNDN);
        ;
        mpfr_add(r11054437, r11054436, r11054436, MPFR_RNDN);
        mpfr_pow(r11054438, r11054430, r11054437, MPFR_RNDN);
        ;
        mpfr_mul(r11054440, r11054430, r11054430, MPFR_RNDN);
        ;
        mpfr_mul(r11054442, r11054440, r11054441, MPFR_RNDN);
        mpfr_add(r11054443, r11054439, r11054442, MPFR_RNDN);
        mpfr_mul(r11054444, r11054438, r11054443, MPFR_RNDN);
        mpfr_add(r11054445, r11054435, r11054444, MPFR_RNDN);
        return mpfr_get_d(r11054445, MPFR_RNDN);
}

