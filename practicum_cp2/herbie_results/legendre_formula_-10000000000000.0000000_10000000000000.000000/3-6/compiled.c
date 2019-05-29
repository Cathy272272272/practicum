#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7514327 = -0.3125;
        float r7514328 = 6.5625;
        float r7514329 = x;
        float r7514330 = r7514329 * r7514329;
        float r7514331 = r7514328 * r7514330;
        float r7514332 = r7514327 + r7514331;
        float r7514333 = -19.6875;
        float r7514334 = r7514330 * r7514329;
        float r7514335 = r7514334 * r7514329;
        float r7514336 = r7514333 * r7514335;
        float r7514337 = r7514332 + r7514336;
        float r7514338 = 14.4375;
        float r7514339 = r7514335 * r7514329;
        float r7514340 = r7514339 * r7514329;
        float r7514341 = r7514338 * r7514340;
        float r7514342 = r7514337 + r7514341;
        return r7514342;
}

double f_id(double x) {
        double r7514343 = -0.3125;
        double r7514344 = 6.5625;
        double r7514345 = x;
        double r7514346 = r7514345 * r7514345;
        double r7514347 = r7514344 * r7514346;
        double r7514348 = r7514343 + r7514347;
        double r7514349 = -19.6875;
        double r7514350 = r7514346 * r7514345;
        double r7514351 = r7514350 * r7514345;
        double r7514352 = r7514349 * r7514351;
        double r7514353 = r7514348 + r7514352;
        double r7514354 = 14.4375;
        double r7514355 = r7514351 * r7514345;
        double r7514356 = r7514355 * r7514345;
        double r7514357 = r7514354 * r7514356;
        double r7514358 = r7514353 + r7514357;
        return r7514358;
}


double f_of(float x) {
        float r7514359 = -0.3125;
        float r7514360 = 6.5625;
        float r7514361 = x;
        float r7514362 = r7514360 * r7514361;
        float r7514363 = r7514362 * r7514361;
        float r7514364 = r7514359 + r7514363;
        float r7514365 = -19.6875;
        float r7514366 = r7514361 * r7514361;
        float r7514367 = r7514366 * r7514361;
        float r7514368 = r7514367 * r7514361;
        float r7514369 = r7514365 * r7514368;
        float r7514370 = r7514364 + r7514369;
        float r7514371 = 14.4375;
        float r7514372 = r7514368 * r7514361;
        float r7514373 = r7514372 * r7514361;
        float r7514374 = r7514371 * r7514373;
        float r7514375 = r7514370 + r7514374;
        return r7514375;
}

double f_od(double x) {
        double r7514376 = -0.3125;
        double r7514377 = 6.5625;
        double r7514378 = x;
        double r7514379 = r7514377 * r7514378;
        double r7514380 = r7514379 * r7514378;
        double r7514381 = r7514376 + r7514380;
        double r7514382 = -19.6875;
        double r7514383 = r7514378 * r7514378;
        double r7514384 = r7514383 * r7514378;
        double r7514385 = r7514384 * r7514378;
        double r7514386 = r7514382 * r7514385;
        double r7514387 = r7514381 + r7514386;
        double r7514388 = 14.4375;
        double r7514389 = r7514385 * r7514378;
        double r7514390 = r7514389 * r7514378;
        double r7514391 = r7514388 * r7514390;
        double r7514392 = r7514387 + r7514391;
        return r7514392;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514393, r7514394, r7514395, r7514396, r7514397, r7514398, r7514399, r7514400, r7514401, r7514402, r7514403, r7514404, r7514405, r7514406, r7514407, r7514408;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7514393, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514394, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7514395);
        mpfr_init(r7514396);
        mpfr_init(r7514397);
        mpfr_init(r7514398);
        mpfr_init_set_str(r7514399, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7514400);
        mpfr_init(r7514401);
        mpfr_init(r7514402);
        mpfr_init(r7514403);
        mpfr_init_set_str(r7514404, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7514405);
        mpfr_init(r7514406);
        mpfr_init(r7514407);
        mpfr_init(r7514408);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7514395, x, MPFR_RNDN);
        mpfr_mul(r7514396, r7514395, r7514395, MPFR_RNDN);
        mpfr_mul(r7514397, r7514394, r7514396, MPFR_RNDN);
        mpfr_add(r7514398, r7514393, r7514397, MPFR_RNDN);
        ;
        mpfr_mul(r7514400, r7514396, r7514395, MPFR_RNDN);
        mpfr_mul(r7514401, r7514400, r7514395, MPFR_RNDN);
        mpfr_mul(r7514402, r7514399, r7514401, MPFR_RNDN);
        mpfr_add(r7514403, r7514398, r7514402, MPFR_RNDN);
        ;
        mpfr_mul(r7514405, r7514401, r7514395, MPFR_RNDN);
        mpfr_mul(r7514406, r7514405, r7514395, MPFR_RNDN);
        mpfr_mul(r7514407, r7514404, r7514406, MPFR_RNDN);
        mpfr_add(r7514408, r7514403, r7514407, MPFR_RNDN);
        return mpfr_get_d(r7514408, MPFR_RNDN);
}

static mpfr_t r7514409, r7514410, r7514411, r7514412, r7514413, r7514414, r7514415, r7514416, r7514417, r7514418, r7514419, r7514420, r7514421, r7514422, r7514423, r7514424, r7514425;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7514409, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514410, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7514411);
        mpfr_init(r7514412);
        mpfr_init(r7514413);
        mpfr_init(r7514414);
        mpfr_init_set_str(r7514415, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7514416);
        mpfr_init(r7514417);
        mpfr_init(r7514418);
        mpfr_init(r7514419);
        mpfr_init(r7514420);
        mpfr_init_set_str(r7514421, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7514422);
        mpfr_init(r7514423);
        mpfr_init(r7514424);
        mpfr_init(r7514425);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7514411, x, MPFR_RNDN);
        mpfr_mul(r7514412, r7514410, r7514411, MPFR_RNDN);
        mpfr_mul(r7514413, r7514412, r7514411, MPFR_RNDN);
        mpfr_add(r7514414, r7514409, r7514413, MPFR_RNDN);
        ;
        mpfr_mul(r7514416, r7514411, r7514411, MPFR_RNDN);
        mpfr_mul(r7514417, r7514416, r7514411, MPFR_RNDN);
        mpfr_mul(r7514418, r7514417, r7514411, MPFR_RNDN);
        mpfr_mul(r7514419, r7514415, r7514418, MPFR_RNDN);
        mpfr_add(r7514420, r7514414, r7514419, MPFR_RNDN);
        ;
        mpfr_mul(r7514422, r7514418, r7514411, MPFR_RNDN);
        mpfr_mul(r7514423, r7514422, r7514411, MPFR_RNDN);
        mpfr_mul(r7514424, r7514421, r7514423, MPFR_RNDN);
        mpfr_add(r7514425, r7514420, r7514424, MPFR_RNDN);
        return mpfr_get_d(r7514425, MPFR_RNDN);
}

static mpfr_t r7514426, r7514427, r7514428, r7514429, r7514430, r7514431, r7514432, r7514433, r7514434, r7514435, r7514436, r7514437, r7514438, r7514439, r7514440, r7514441, r7514442;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7514426, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514427, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7514428);
        mpfr_init(r7514429);
        mpfr_init(r7514430);
        mpfr_init(r7514431);
        mpfr_init_set_str(r7514432, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7514433);
        mpfr_init(r7514434);
        mpfr_init(r7514435);
        mpfr_init(r7514436);
        mpfr_init(r7514437);
        mpfr_init_set_str(r7514438, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7514439);
        mpfr_init(r7514440);
        mpfr_init(r7514441);
        mpfr_init(r7514442);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7514428, x, MPFR_RNDN);
        mpfr_mul(r7514429, r7514427, r7514428, MPFR_RNDN);
        mpfr_mul(r7514430, r7514429, r7514428, MPFR_RNDN);
        mpfr_add(r7514431, r7514426, r7514430, MPFR_RNDN);
        ;
        mpfr_mul(r7514433, r7514428, r7514428, MPFR_RNDN);
        mpfr_mul(r7514434, r7514433, r7514428, MPFR_RNDN);
        mpfr_mul(r7514435, r7514434, r7514428, MPFR_RNDN);
        mpfr_mul(r7514436, r7514432, r7514435, MPFR_RNDN);
        mpfr_add(r7514437, r7514431, r7514436, MPFR_RNDN);
        ;
        mpfr_mul(r7514439, r7514435, r7514428, MPFR_RNDN);
        mpfr_mul(r7514440, r7514439, r7514428, MPFR_RNDN);
        mpfr_mul(r7514441, r7514438, r7514440, MPFR_RNDN);
        mpfr_add(r7514442, r7514437, r7514441, MPFR_RNDN);
        return mpfr_get_d(r7514442, MPFR_RNDN);
}

