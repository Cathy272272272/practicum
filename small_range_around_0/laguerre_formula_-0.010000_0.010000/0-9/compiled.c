#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r3277268 = 1.0;
        float r3277269 = -9.0;
        float r3277270 = x;
        float r3277271 = r3277269 * r3277270;
        float r3277272 = r3277268 + r3277271;
        float r3277273 = 18.0;
        float r3277274 = r3277270 * r3277270;
        float r3277275 = r3277273 * r3277274;
        float r3277276 = r3277272 + r3277275;
        float r3277277 = -14.0;
        float r3277278 = r3277274 * r3277270;
        float r3277279 = r3277277 * r3277278;
        float r3277280 = r3277276 + r3277279;
        float r3277281 = 5.25;
        float r3277282 = r3277278 * r3277270;
        float r3277283 = r3277281 * r3277282;
        float r3277284 = r3277280 + r3277283;
        float r3277285 = -1.05;
        float r3277286 = r3277282 * r3277270;
        float r3277287 = r3277285 * r3277286;
        float r3277288 = r3277284 + r3277287;
        float r3277289 = 0.116667;
        float r3277290 = r3277286 * r3277270;
        float r3277291 = r3277289 * r3277290;
        float r3277292 = r3277288 + r3277291;
        float r3277293 = -0.007143;
        float r3277294 = r3277290 * r3277270;
        float r3277295 = r3277293 * r3277294;
        float r3277296 = r3277292 + r3277295;
        float r3277297 = 0.000223;
        float r3277298 = r3277294 * r3277270;
        float r3277299 = r3277297 * r3277298;
        float r3277300 = r3277296 + r3277299;
        float r3277301 = -3e-06;
        float r3277302 = r3277298 * r3277270;
        float r3277303 = r3277301 * r3277302;
        float r3277304 = r3277300 + r3277303;
        return r3277304;
}

double f_id(double x) {
        double r3277305 = 1.0;
        double r3277306 = -9.0;
        double r3277307 = x;
        double r3277308 = r3277306 * r3277307;
        double r3277309 = r3277305 + r3277308;
        double r3277310 = 18.0;
        double r3277311 = r3277307 * r3277307;
        double r3277312 = r3277310 * r3277311;
        double r3277313 = r3277309 + r3277312;
        double r3277314 = -14.0;
        double r3277315 = r3277311 * r3277307;
        double r3277316 = r3277314 * r3277315;
        double r3277317 = r3277313 + r3277316;
        double r3277318 = 5.25;
        double r3277319 = r3277315 * r3277307;
        double r3277320 = r3277318 * r3277319;
        double r3277321 = r3277317 + r3277320;
        double r3277322 = -1.05;
        double r3277323 = r3277319 * r3277307;
        double r3277324 = r3277322 * r3277323;
        double r3277325 = r3277321 + r3277324;
        double r3277326 = 0.116667;
        double r3277327 = r3277323 * r3277307;
        double r3277328 = r3277326 * r3277327;
        double r3277329 = r3277325 + r3277328;
        double r3277330 = -0.007143;
        double r3277331 = r3277327 * r3277307;
        double r3277332 = r3277330 * r3277331;
        double r3277333 = r3277329 + r3277332;
        double r3277334 = 0.000223;
        double r3277335 = r3277331 * r3277307;
        double r3277336 = r3277334 * r3277335;
        double r3277337 = r3277333 + r3277336;
        double r3277338 = -3e-06;
        double r3277339 = r3277335 * r3277307;
        double r3277340 = r3277338 * r3277339;
        double r3277341 = r3277337 + r3277340;
        return r3277341;
}


double f_of(float x) {
        float r3277342 = x;
        float r3277343 = r3277342 * r3277342;
        float r3277344 = 18.0;
        float r3277345 = 14.0;
        float r3277346 = r3277345 * r3277342;
        float r3277347 = r3277344 - r3277346;
        float r3277348 = r3277343 * r3277347;
        float r3277349 = -9.0;
        float r3277350 = r3277349 * r3277342;
        float r3277351 = r3277348 + r3277350;
        float r3277352 = 1.0;
        float r3277353 = 3;
        float r3277354 = 1;
        float r3277355 = r3277353 + r3277354;
        float r3277356 = pow(r3277343, r3277355);
        float r3277357 = -3e-06;
        float r3277358 = r3277342 * r3277357;
        float r3277359 = 0.000223;
        float r3277360 = r3277358 + r3277359;
        float r3277361 = r3277356 * r3277360;
        float r3277362 = r3277352 + r3277361;
        float r3277363 = r3277351 + r3277362;
        float r3277364 = r3277343 * r3277343;
        float r3277365 = 0.116667;
        float r3277366 = r3277342 * r3277365;
        float r3277367 = r3277366 * r3277342;
        float r3277368 = 5.25;
        float r3277369 = -1.05;
        float r3277370 = r3277342 * r3277369;
        float r3277371 = r3277368 + r3277370;
        float r3277372 = r3277367 + r3277371;
        float r3277373 = -0.007143;
        float r3277374 = r3277373 * r3277342;
        float r3277375 = r3277343 * r3277374;
        float r3277376 = r3277372 + r3277375;
        float r3277377 = r3277364 * r3277376;
        float r3277378 = r3277363 + r3277377;
        return r3277378;
}

double f_od(double x) {
        double r3277379 = x;
        double r3277380 = r3277379 * r3277379;
        double r3277381 = 18.0;
        double r3277382 = 14.0;
        double r3277383 = r3277382 * r3277379;
        double r3277384 = r3277381 - r3277383;
        double r3277385 = r3277380 * r3277384;
        double r3277386 = -9.0;
        double r3277387 = r3277386 * r3277379;
        double r3277388 = r3277385 + r3277387;
        double r3277389 = 1.0;
        double r3277390 = 3;
        double r3277391 = 1;
        double r3277392 = r3277390 + r3277391;
        double r3277393 = pow(r3277380, r3277392);
        double r3277394 = -3e-06;
        double r3277395 = r3277379 * r3277394;
        double r3277396 = 0.000223;
        double r3277397 = r3277395 + r3277396;
        double r3277398 = r3277393 * r3277397;
        double r3277399 = r3277389 + r3277398;
        double r3277400 = r3277388 + r3277399;
        double r3277401 = r3277380 * r3277380;
        double r3277402 = 0.116667;
        double r3277403 = r3277379 * r3277402;
        double r3277404 = r3277403 * r3277379;
        double r3277405 = 5.25;
        double r3277406 = -1.05;
        double r3277407 = r3277379 * r3277406;
        double r3277408 = r3277405 + r3277407;
        double r3277409 = r3277404 + r3277408;
        double r3277410 = -0.007143;
        double r3277411 = r3277410 * r3277379;
        double r3277412 = r3277380 * r3277411;
        double r3277413 = r3277409 + r3277412;
        double r3277414 = r3277401 * r3277413;
        double r3277415 = r3277400 + r3277414;
        return r3277415;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3277416, r3277417, r3277418, r3277419, r3277420, r3277421, r3277422, r3277423, r3277424, r3277425, r3277426, r3277427, r3277428, r3277429, r3277430, r3277431, r3277432, r3277433, r3277434, r3277435, r3277436, r3277437, r3277438, r3277439, r3277440, r3277441, r3277442, r3277443, r3277444, r3277445, r3277446, r3277447, r3277448, r3277449, r3277450, r3277451, r3277452;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3277416, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277417, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r3277418);
        mpfr_init(r3277419);
        mpfr_init(r3277420);
        mpfr_init_set_str(r3277421, "18.0", 10, MPFR_RNDN);
        mpfr_init(r3277422);
        mpfr_init(r3277423);
        mpfr_init(r3277424);
        mpfr_init_set_str(r3277425, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r3277426);
        mpfr_init(r3277427);
        mpfr_init(r3277428);
        mpfr_init_set_str(r3277429, "5.25", 10, MPFR_RNDN);
        mpfr_init(r3277430);
        mpfr_init(r3277431);
        mpfr_init(r3277432);
        mpfr_init_set_str(r3277433, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r3277434);
        mpfr_init(r3277435);
        mpfr_init(r3277436);
        mpfr_init_set_str(r3277437, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r3277438);
        mpfr_init(r3277439);
        mpfr_init(r3277440);
        mpfr_init_set_str(r3277441, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r3277442);
        mpfr_init(r3277443);
        mpfr_init(r3277444);
        mpfr_init_set_str(r3277445, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r3277446);
        mpfr_init(r3277447);
        mpfr_init(r3277448);
        mpfr_init_set_str(r3277449, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r3277450);
        mpfr_init(r3277451);
        mpfr_init(r3277452);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3277418, x, MPFR_RNDN);
        mpfr_mul(r3277419, r3277417, r3277418, MPFR_RNDN);
        mpfr_add(r3277420, r3277416, r3277419, MPFR_RNDN);
        ;
        mpfr_mul(r3277422, r3277418, r3277418, MPFR_RNDN);
        mpfr_mul(r3277423, r3277421, r3277422, MPFR_RNDN);
        mpfr_add(r3277424, r3277420, r3277423, MPFR_RNDN);
        ;
        mpfr_mul(r3277426, r3277422, r3277418, MPFR_RNDN);
        mpfr_mul(r3277427, r3277425, r3277426, MPFR_RNDN);
        mpfr_add(r3277428, r3277424, r3277427, MPFR_RNDN);
        ;
        mpfr_mul(r3277430, r3277426, r3277418, MPFR_RNDN);
        mpfr_mul(r3277431, r3277429, r3277430, MPFR_RNDN);
        mpfr_add(r3277432, r3277428, r3277431, MPFR_RNDN);
        ;
        mpfr_mul(r3277434, r3277430, r3277418, MPFR_RNDN);
        mpfr_mul(r3277435, r3277433, r3277434, MPFR_RNDN);
        mpfr_add(r3277436, r3277432, r3277435, MPFR_RNDN);
        ;
        mpfr_mul(r3277438, r3277434, r3277418, MPFR_RNDN);
        mpfr_mul(r3277439, r3277437, r3277438, MPFR_RNDN);
        mpfr_add(r3277440, r3277436, r3277439, MPFR_RNDN);
        ;
        mpfr_mul(r3277442, r3277438, r3277418, MPFR_RNDN);
        mpfr_mul(r3277443, r3277441, r3277442, MPFR_RNDN);
        mpfr_add(r3277444, r3277440, r3277443, MPFR_RNDN);
        ;
        mpfr_mul(r3277446, r3277442, r3277418, MPFR_RNDN);
        mpfr_mul(r3277447, r3277445, r3277446, MPFR_RNDN);
        mpfr_add(r3277448, r3277444, r3277447, MPFR_RNDN);
        ;
        mpfr_mul(r3277450, r3277446, r3277418, MPFR_RNDN);
        mpfr_mul(r3277451, r3277449, r3277450, MPFR_RNDN);
        mpfr_add(r3277452, r3277448, r3277451, MPFR_RNDN);
        return mpfr_get_d(r3277452, MPFR_RNDN);
}

static mpfr_t r3277453, r3277454, r3277455, r3277456, r3277457, r3277458, r3277459, r3277460, r3277461, r3277462, r3277463, r3277464, r3277465, r3277466, r3277467, r3277468, r3277469, r3277470, r3277471, r3277472, r3277473, r3277474, r3277475, r3277476, r3277477, r3277478, r3277479, r3277480, r3277481, r3277482, r3277483, r3277484, r3277485, r3277486, r3277487, r3277488, r3277489;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3277453);
        mpfr_init(r3277454);
        mpfr_init_set_str(r3277455, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277456, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3277457);
        mpfr_init(r3277458);
        mpfr_init(r3277459);
        mpfr_init_set_str(r3277460, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r3277461);
        mpfr_init(r3277462);
        mpfr_init_set_str(r3277463, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277464, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277465, "1", 10, MPFR_RNDN);
        mpfr_init(r3277466);
        mpfr_init(r3277467);
        mpfr_init_set_str(r3277468, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r3277469);
        mpfr_init_set_str(r3277470, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r3277471);
        mpfr_init(r3277472);
        mpfr_init(r3277473);
        mpfr_init(r3277474);
        mpfr_init(r3277475);
        mpfr_init_set_str(r3277476, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r3277477);
        mpfr_init(r3277478);
        mpfr_init_set_str(r3277479, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277480, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r3277481);
        mpfr_init(r3277482);
        mpfr_init(r3277483);
        mpfr_init_set_str(r3277484, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r3277485);
        mpfr_init(r3277486);
        mpfr_init(r3277487);
        mpfr_init(r3277488);
        mpfr_init(r3277489);
}

double f_fm(double x) {
        mpfr_set_d(r3277453, x, MPFR_RNDN);
        mpfr_mul(r3277454, r3277453, r3277453, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277457, r3277456, r3277453, MPFR_RNDN);
        mpfr_sub(r3277458, r3277455, r3277457, MPFR_RNDN);
        mpfr_mul(r3277459, r3277454, r3277458, MPFR_RNDN);
        ;
        mpfr_mul(r3277461, r3277460, r3277453, MPFR_RNDN);
        mpfr_add(r3277462, r3277459, r3277461, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r3277466, r3277464, r3277465, MPFR_RNDN);
        mpfr_pow(r3277467, r3277454, r3277466, MPFR_RNDN);
        ;
        mpfr_mul(r3277469, r3277453, r3277468, MPFR_RNDN);
        ;
        mpfr_add(r3277471, r3277469, r3277470, MPFR_RNDN);
        mpfr_mul(r3277472, r3277467, r3277471, MPFR_RNDN);
        mpfr_add(r3277473, r3277463, r3277472, MPFR_RNDN);
        mpfr_add(r3277474, r3277462, r3277473, MPFR_RNDN);
        mpfr_mul(r3277475, r3277454, r3277454, MPFR_RNDN);
        ;
        mpfr_mul(r3277477, r3277453, r3277476, MPFR_RNDN);
        mpfr_mul(r3277478, r3277477, r3277453, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277481, r3277453, r3277480, MPFR_RNDN);
        mpfr_add(r3277482, r3277479, r3277481, MPFR_RNDN);
        mpfr_add(r3277483, r3277478, r3277482, MPFR_RNDN);
        ;
        mpfr_mul(r3277485, r3277484, r3277453, MPFR_RNDN);
        mpfr_mul(r3277486, r3277454, r3277485, MPFR_RNDN);
        mpfr_add(r3277487, r3277483, r3277486, MPFR_RNDN);
        mpfr_mul(r3277488, r3277475, r3277487, MPFR_RNDN);
        mpfr_add(r3277489, r3277474, r3277488, MPFR_RNDN);
        return mpfr_get_d(r3277489, MPFR_RNDN);
}

static mpfr_t r3277490, r3277491, r3277492, r3277493, r3277494, r3277495, r3277496, r3277497, r3277498, r3277499, r3277500, r3277501, r3277502, r3277503, r3277504, r3277505, r3277506, r3277507, r3277508, r3277509, r3277510, r3277511, r3277512, r3277513, r3277514, r3277515, r3277516, r3277517, r3277518, r3277519, r3277520, r3277521, r3277522, r3277523, r3277524, r3277525, r3277526;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3277490);
        mpfr_init(r3277491);
        mpfr_init_set_str(r3277492, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277493, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3277494);
        mpfr_init(r3277495);
        mpfr_init(r3277496);
        mpfr_init_set_str(r3277497, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r3277498);
        mpfr_init(r3277499);
        mpfr_init_set_str(r3277500, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277501, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277502, "1", 10, MPFR_RNDN);
        mpfr_init(r3277503);
        mpfr_init(r3277504);
        mpfr_init_set_str(r3277505, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r3277506);
        mpfr_init_set_str(r3277507, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r3277508);
        mpfr_init(r3277509);
        mpfr_init(r3277510);
        mpfr_init(r3277511);
        mpfr_init(r3277512);
        mpfr_init_set_str(r3277513, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r3277514);
        mpfr_init(r3277515);
        mpfr_init_set_str(r3277516, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277517, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r3277518);
        mpfr_init(r3277519);
        mpfr_init(r3277520);
        mpfr_init_set_str(r3277521, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r3277522);
        mpfr_init(r3277523);
        mpfr_init(r3277524);
        mpfr_init(r3277525);
        mpfr_init(r3277526);
}

double f_dm(double x) {
        mpfr_set_d(r3277490, x, MPFR_RNDN);
        mpfr_mul(r3277491, r3277490, r3277490, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277494, r3277493, r3277490, MPFR_RNDN);
        mpfr_sub(r3277495, r3277492, r3277494, MPFR_RNDN);
        mpfr_mul(r3277496, r3277491, r3277495, MPFR_RNDN);
        ;
        mpfr_mul(r3277498, r3277497, r3277490, MPFR_RNDN);
        mpfr_add(r3277499, r3277496, r3277498, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r3277503, r3277501, r3277502, MPFR_RNDN);
        mpfr_pow(r3277504, r3277491, r3277503, MPFR_RNDN);
        ;
        mpfr_mul(r3277506, r3277490, r3277505, MPFR_RNDN);
        ;
        mpfr_add(r3277508, r3277506, r3277507, MPFR_RNDN);
        mpfr_mul(r3277509, r3277504, r3277508, MPFR_RNDN);
        mpfr_add(r3277510, r3277500, r3277509, MPFR_RNDN);
        mpfr_add(r3277511, r3277499, r3277510, MPFR_RNDN);
        mpfr_mul(r3277512, r3277491, r3277491, MPFR_RNDN);
        ;
        mpfr_mul(r3277514, r3277490, r3277513, MPFR_RNDN);
        mpfr_mul(r3277515, r3277514, r3277490, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277518, r3277490, r3277517, MPFR_RNDN);
        mpfr_add(r3277519, r3277516, r3277518, MPFR_RNDN);
        mpfr_add(r3277520, r3277515, r3277519, MPFR_RNDN);
        ;
        mpfr_mul(r3277522, r3277521, r3277490, MPFR_RNDN);
        mpfr_mul(r3277523, r3277491, r3277522, MPFR_RNDN);
        mpfr_add(r3277524, r3277520, r3277523, MPFR_RNDN);
        mpfr_mul(r3277525, r3277512, r3277524, MPFR_RNDN);
        mpfr_add(r3277526, r3277511, r3277525, MPFR_RNDN);
        return mpfr_get_d(r3277526, MPFR_RNDN);
}

