#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r4601362 = -2.707031;
        float r4601363 = x;
        float r4601364 = r4601362 * r4601363;
        float r4601365 = 58.652344;
        float r4601366 = r4601363 * r4601363;
        float r4601367 = r4601366 * r4601363;
        float r4601368 = r4601365 * r4601367;
        float r4601369 = r4601364 + r4601368;
        float r4601370 = -351.914062;
        float r4601371 = r4601367 * r4601363;
        float r4601372 = r4601371 * r4601363;
        float r4601373 = r4601370 * r4601372;
        float r4601374 = r4601369 + r4601373;
        float r4601375 = 854.648438;
        float r4601376 = r4601372 * r4601363;
        float r4601377 = r4601376 * r4601363;
        float r4601378 = r4601375 * r4601377;
        float r4601379 = r4601374 + r4601378;
        float r4601380 = -902.128906;
        float r4601381 = r4601377 * r4601363;
        float r4601382 = r4601381 * r4601363;
        float r4601383 = r4601380 * r4601382;
        float r4601384 = r4601379 + r4601383;
        float r4601385 = 344.449219;
        float r4601386 = r4601382 * r4601363;
        float r4601387 = r4601386 * r4601363;
        float r4601388 = r4601385 * r4601387;
        float r4601389 = r4601384 + r4601388;
        return r4601389;
}

double f_id(double x) {
        double r4601390 = -2.707031;
        double r4601391 = x;
        double r4601392 = r4601390 * r4601391;
        double r4601393 = 58.652344;
        double r4601394 = r4601391 * r4601391;
        double r4601395 = r4601394 * r4601391;
        double r4601396 = r4601393 * r4601395;
        double r4601397 = r4601392 + r4601396;
        double r4601398 = -351.914062;
        double r4601399 = r4601395 * r4601391;
        double r4601400 = r4601399 * r4601391;
        double r4601401 = r4601398 * r4601400;
        double r4601402 = r4601397 + r4601401;
        double r4601403 = 854.648438;
        double r4601404 = r4601400 * r4601391;
        double r4601405 = r4601404 * r4601391;
        double r4601406 = r4601403 * r4601405;
        double r4601407 = r4601402 + r4601406;
        double r4601408 = -902.128906;
        double r4601409 = r4601405 * r4601391;
        double r4601410 = r4601409 * r4601391;
        double r4601411 = r4601408 * r4601410;
        double r4601412 = r4601407 + r4601411;
        double r4601413 = 344.449219;
        double r4601414 = r4601410 * r4601391;
        double r4601415 = r4601414 * r4601391;
        double r4601416 = r4601413 * r4601415;
        double r4601417 = r4601412 + r4601416;
        return r4601417;
}


double f_of(float x) {
        float r4601418 = x;
        float r4601419 = 344.449219;
        float r4601420 = r4601418 * r4601419;
        float r4601421 = r4601418 * r4601418;
        float r4601422 = r4601420 * r4601421;
        float r4601423 = 4;
        float r4601424 = pow(r4601418, r4601423);
        float r4601425 = r4601424 * r4601421;
        float r4601426 = r4601425 * r4601421;
        float r4601427 = r4601422 * r4601426;
        float r4601428 = -2.707031;
        float r4601429 = r4601428 * r4601418;
        float r4601430 = r4601427 + r4601429;
        float r4601431 = 3;
        float r4601432 = pow(r4601418, r4601431);
        float r4601433 = r4601432 * r4601432;
        float r4601434 = r4601433 * r4601418;
        float r4601435 = -902.128906;
        float r4601436 = r4601435 * r4601418;
        float r4601437 = r4601418 * r4601436;
        float r4601438 = 854.648438;
        float r4601439 = r4601437 + r4601438;
        float r4601440 = r4601434 * r4601439;
        float r4601441 = 58.652344;
        float r4601442 = r4601441 * r4601418;
        float r4601443 = -351.914062;
        float r4601444 = r4601418 * r4601443;
        float r4601445 = r4601444 * r4601421;
        float r4601446 = r4601442 + r4601445;
        float r4601447 = r4601421 * r4601446;
        float r4601448 = r4601440 + r4601447;
        float r4601449 = r4601430 + r4601448;
        return r4601449;
}

double f_od(double x) {
        double r4601450 = x;
        double r4601451 = 344.449219;
        double r4601452 = r4601450 * r4601451;
        double r4601453 = r4601450 * r4601450;
        double r4601454 = r4601452 * r4601453;
        double r4601455 = 4;
        double r4601456 = pow(r4601450, r4601455);
        double r4601457 = r4601456 * r4601453;
        double r4601458 = r4601457 * r4601453;
        double r4601459 = r4601454 * r4601458;
        double r4601460 = -2.707031;
        double r4601461 = r4601460 * r4601450;
        double r4601462 = r4601459 + r4601461;
        double r4601463 = 3;
        double r4601464 = pow(r4601450, r4601463);
        double r4601465 = r4601464 * r4601464;
        double r4601466 = r4601465 * r4601450;
        double r4601467 = -902.128906;
        double r4601468 = r4601467 * r4601450;
        double r4601469 = r4601450 * r4601468;
        double r4601470 = 854.648438;
        double r4601471 = r4601469 + r4601470;
        double r4601472 = r4601466 * r4601471;
        double r4601473 = 58.652344;
        double r4601474 = r4601473 * r4601450;
        double r4601475 = -351.914062;
        double r4601476 = r4601450 * r4601475;
        double r4601477 = r4601476 * r4601453;
        double r4601478 = r4601474 + r4601477;
        double r4601479 = r4601453 * r4601478;
        double r4601480 = r4601472 + r4601479;
        double r4601481 = r4601462 + r4601480;
        return r4601481;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4601482, r4601483, r4601484, r4601485, r4601486, r4601487, r4601488, r4601489, r4601490, r4601491, r4601492, r4601493, r4601494, r4601495, r4601496, r4601497, r4601498, r4601499, r4601500, r4601501, r4601502, r4601503, r4601504, r4601505, r4601506, r4601507, r4601508, r4601509;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4601482, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r4601483);
        mpfr_init(r4601484);
        mpfr_init_set_str(r4601485, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r4601486);
        mpfr_init(r4601487);
        mpfr_init(r4601488);
        mpfr_init(r4601489);
        mpfr_init_set_str(r4601490, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r4601491);
        mpfr_init(r4601492);
        mpfr_init(r4601493);
        mpfr_init(r4601494);
        mpfr_init_set_str(r4601495, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r4601496);
        mpfr_init(r4601497);
        mpfr_init(r4601498);
        mpfr_init(r4601499);
        mpfr_init_set_str(r4601500, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r4601501);
        mpfr_init(r4601502);
        mpfr_init(r4601503);
        mpfr_init(r4601504);
        mpfr_init_set_str(r4601505, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r4601506);
        mpfr_init(r4601507);
        mpfr_init(r4601508);
        mpfr_init(r4601509);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4601483, x, MPFR_RNDN);
        mpfr_mul(r4601484, r4601482, r4601483, MPFR_RNDN);
        ;
        mpfr_mul(r4601486, r4601483, r4601483, MPFR_RNDN);
        mpfr_mul(r4601487, r4601486, r4601483, MPFR_RNDN);
        mpfr_mul(r4601488, r4601485, r4601487, MPFR_RNDN);
        mpfr_add(r4601489, r4601484, r4601488, MPFR_RNDN);
        ;
        mpfr_mul(r4601491, r4601487, r4601483, MPFR_RNDN);
        mpfr_mul(r4601492, r4601491, r4601483, MPFR_RNDN);
        mpfr_mul(r4601493, r4601490, r4601492, MPFR_RNDN);
        mpfr_add(r4601494, r4601489, r4601493, MPFR_RNDN);
        ;
        mpfr_mul(r4601496, r4601492, r4601483, MPFR_RNDN);
        mpfr_mul(r4601497, r4601496, r4601483, MPFR_RNDN);
        mpfr_mul(r4601498, r4601495, r4601497, MPFR_RNDN);
        mpfr_add(r4601499, r4601494, r4601498, MPFR_RNDN);
        ;
        mpfr_mul(r4601501, r4601497, r4601483, MPFR_RNDN);
        mpfr_mul(r4601502, r4601501, r4601483, MPFR_RNDN);
        mpfr_mul(r4601503, r4601500, r4601502, MPFR_RNDN);
        mpfr_add(r4601504, r4601499, r4601503, MPFR_RNDN);
        ;
        mpfr_mul(r4601506, r4601502, r4601483, MPFR_RNDN);
        mpfr_mul(r4601507, r4601506, r4601483, MPFR_RNDN);
        mpfr_mul(r4601508, r4601505, r4601507, MPFR_RNDN);
        mpfr_add(r4601509, r4601504, r4601508, MPFR_RNDN);
        return mpfr_get_d(r4601509, MPFR_RNDN);
}

static mpfr_t r4601510, r4601511, r4601512, r4601513, r4601514, r4601515, r4601516, r4601517, r4601518, r4601519, r4601520, r4601521, r4601522, r4601523, r4601524, r4601525, r4601526, r4601527, r4601528, r4601529, r4601530, r4601531, r4601532, r4601533, r4601534, r4601535, r4601536, r4601537, r4601538, r4601539, r4601540, r4601541;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4601510);
        mpfr_init_set_str(r4601511, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r4601512);
        mpfr_init(r4601513);
        mpfr_init(r4601514);
        mpfr_init_set_str(r4601515, "4", 10, MPFR_RNDN);
        mpfr_init(r4601516);
        mpfr_init(r4601517);
        mpfr_init(r4601518);
        mpfr_init(r4601519);
        mpfr_init_set_str(r4601520, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r4601521);
        mpfr_init(r4601522);
        mpfr_init_set_str(r4601523, "3", 10, MPFR_RNDN);
        mpfr_init(r4601524);
        mpfr_init(r4601525);
        mpfr_init(r4601526);
        mpfr_init_set_str(r4601527, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r4601528);
        mpfr_init(r4601529);
        mpfr_init_set_str(r4601530, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r4601531);
        mpfr_init(r4601532);
        mpfr_init_set_str(r4601533, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r4601534);
        mpfr_init_set_str(r4601535, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r4601536);
        mpfr_init(r4601537);
        mpfr_init(r4601538);
        mpfr_init(r4601539);
        mpfr_init(r4601540);
        mpfr_init(r4601541);
}

double f_fm(double x) {
        mpfr_set_d(r4601510, x, MPFR_RNDN);
        ;
        mpfr_mul(r4601512, r4601510, r4601511, MPFR_RNDN);
        mpfr_mul(r4601513, r4601510, r4601510, MPFR_RNDN);
        mpfr_mul(r4601514, r4601512, r4601513, MPFR_RNDN);
        ;
        mpfr_pow(r4601516, r4601510, r4601515, MPFR_RNDN);
        mpfr_mul(r4601517, r4601516, r4601513, MPFR_RNDN);
        mpfr_mul(r4601518, r4601517, r4601513, MPFR_RNDN);
        mpfr_mul(r4601519, r4601514, r4601518, MPFR_RNDN);
        ;
        mpfr_mul(r4601521, r4601520, r4601510, MPFR_RNDN);
        mpfr_add(r4601522, r4601519, r4601521, MPFR_RNDN);
        ;
        mpfr_pow(r4601524, r4601510, r4601523, MPFR_RNDN);
        mpfr_mul(r4601525, r4601524, r4601524, MPFR_RNDN);
        mpfr_mul(r4601526, r4601525, r4601510, MPFR_RNDN);
        ;
        mpfr_mul(r4601528, r4601527, r4601510, MPFR_RNDN);
        mpfr_mul(r4601529, r4601510, r4601528, MPFR_RNDN);
        ;
        mpfr_add(r4601531, r4601529, r4601530, MPFR_RNDN);
        mpfr_mul(r4601532, r4601526, r4601531, MPFR_RNDN);
        ;
        mpfr_mul(r4601534, r4601533, r4601510, MPFR_RNDN);
        ;
        mpfr_mul(r4601536, r4601510, r4601535, MPFR_RNDN);
        mpfr_mul(r4601537, r4601536, r4601513, MPFR_RNDN);
        mpfr_add(r4601538, r4601534, r4601537, MPFR_RNDN);
        mpfr_mul(r4601539, r4601513, r4601538, MPFR_RNDN);
        mpfr_add(r4601540, r4601532, r4601539, MPFR_RNDN);
        mpfr_add(r4601541, r4601522, r4601540, MPFR_RNDN);
        return mpfr_get_d(r4601541, MPFR_RNDN);
}

static mpfr_t r4601542, r4601543, r4601544, r4601545, r4601546, r4601547, r4601548, r4601549, r4601550, r4601551, r4601552, r4601553, r4601554, r4601555, r4601556, r4601557, r4601558, r4601559, r4601560, r4601561, r4601562, r4601563, r4601564, r4601565, r4601566, r4601567, r4601568, r4601569, r4601570, r4601571, r4601572, r4601573;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4601542);
        mpfr_init_set_str(r4601543, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r4601544);
        mpfr_init(r4601545);
        mpfr_init(r4601546);
        mpfr_init_set_str(r4601547, "4", 10, MPFR_RNDN);
        mpfr_init(r4601548);
        mpfr_init(r4601549);
        mpfr_init(r4601550);
        mpfr_init(r4601551);
        mpfr_init_set_str(r4601552, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r4601553);
        mpfr_init(r4601554);
        mpfr_init_set_str(r4601555, "3", 10, MPFR_RNDN);
        mpfr_init(r4601556);
        mpfr_init(r4601557);
        mpfr_init(r4601558);
        mpfr_init_set_str(r4601559, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r4601560);
        mpfr_init(r4601561);
        mpfr_init_set_str(r4601562, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r4601563);
        mpfr_init(r4601564);
        mpfr_init_set_str(r4601565, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r4601566);
        mpfr_init_set_str(r4601567, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r4601568);
        mpfr_init(r4601569);
        mpfr_init(r4601570);
        mpfr_init(r4601571);
        mpfr_init(r4601572);
        mpfr_init(r4601573);
}

double f_dm(double x) {
        mpfr_set_d(r4601542, x, MPFR_RNDN);
        ;
        mpfr_mul(r4601544, r4601542, r4601543, MPFR_RNDN);
        mpfr_mul(r4601545, r4601542, r4601542, MPFR_RNDN);
        mpfr_mul(r4601546, r4601544, r4601545, MPFR_RNDN);
        ;
        mpfr_pow(r4601548, r4601542, r4601547, MPFR_RNDN);
        mpfr_mul(r4601549, r4601548, r4601545, MPFR_RNDN);
        mpfr_mul(r4601550, r4601549, r4601545, MPFR_RNDN);
        mpfr_mul(r4601551, r4601546, r4601550, MPFR_RNDN);
        ;
        mpfr_mul(r4601553, r4601552, r4601542, MPFR_RNDN);
        mpfr_add(r4601554, r4601551, r4601553, MPFR_RNDN);
        ;
        mpfr_pow(r4601556, r4601542, r4601555, MPFR_RNDN);
        mpfr_mul(r4601557, r4601556, r4601556, MPFR_RNDN);
        mpfr_mul(r4601558, r4601557, r4601542, MPFR_RNDN);
        ;
        mpfr_mul(r4601560, r4601559, r4601542, MPFR_RNDN);
        mpfr_mul(r4601561, r4601542, r4601560, MPFR_RNDN);
        ;
        mpfr_add(r4601563, r4601561, r4601562, MPFR_RNDN);
        mpfr_mul(r4601564, r4601558, r4601563, MPFR_RNDN);
        ;
        mpfr_mul(r4601566, r4601565, r4601542, MPFR_RNDN);
        ;
        mpfr_mul(r4601568, r4601542, r4601567, MPFR_RNDN);
        mpfr_mul(r4601569, r4601568, r4601545, MPFR_RNDN);
        mpfr_add(r4601570, r4601566, r4601569, MPFR_RNDN);
        mpfr_mul(r4601571, r4601545, r4601570, MPFR_RNDN);
        mpfr_add(r4601572, r4601564, r4601571, MPFR_RNDN);
        mpfr_add(r4601573, r4601554, r4601572, MPFR_RNDN);
        return mpfr_get_d(r4601573, MPFR_RNDN);
}

