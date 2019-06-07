#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r49139354 = -2.1875;
        float r49139355 = x;
        float r49139356 = r49139354 * r49139355;
        float r49139357 = 19.6875;
        float r49139358 = r49139355 * r49139355;
        float r49139359 = r49139358 * r49139355;
        float r49139360 = r49139357 * r49139359;
        float r49139361 = r49139356 + r49139360;
        float r49139362 = -43.3125;
        float r49139363 = r49139359 * r49139355;
        float r49139364 = r49139363 * r49139355;
        float r49139365 = r49139362 * r49139364;
        float r49139366 = r49139361 + r49139365;
        float r49139367 = 26.8125;
        float r49139368 = r49139364 * r49139355;
        float r49139369 = r49139368 * r49139355;
        float r49139370 = r49139367 * r49139369;
        float r49139371 = r49139366 + r49139370;
        return r49139371;
}

double f_id(double x) {
        double r49139372 = -2.1875;
        double r49139373 = x;
        double r49139374 = r49139372 * r49139373;
        double r49139375 = 19.6875;
        double r49139376 = r49139373 * r49139373;
        double r49139377 = r49139376 * r49139373;
        double r49139378 = r49139375 * r49139377;
        double r49139379 = r49139374 + r49139378;
        double r49139380 = -43.3125;
        double r49139381 = r49139377 * r49139373;
        double r49139382 = r49139381 * r49139373;
        double r49139383 = r49139380 * r49139382;
        double r49139384 = r49139379 + r49139383;
        double r49139385 = 26.8125;
        double r49139386 = r49139382 * r49139373;
        double r49139387 = r49139386 * r49139373;
        double r49139388 = r49139385 * r49139387;
        double r49139389 = r49139384 + r49139388;
        return r49139389;
}


double f_of(float x) {
        float r49139390 = x;
        float r49139391 = 4;
        float r49139392 = pow(r49139390, r49139391);
        float r49139393 = r49139390 * r49139392;
        float r49139394 = -43.3125;
        float r49139395 = 26.8125;
        float r49139396 = r49139390 * r49139395;
        float r49139397 = r49139396 * r49139390;
        float r49139398 = r49139394 + r49139397;
        float r49139399 = r49139393 * r49139398;
        float r49139400 = -2.1875;
        float r49139401 = r49139390 * r49139400;
        float r49139402 = r49139390 * r49139390;
        float r49139403 = 19.6875;
        float r49139404 = r49139403 * r49139390;
        float r49139405 = r49139402 * r49139404;
        float r49139406 = r49139401 + r49139405;
        float r49139407 = r49139399 + r49139406;
        float r49139408 = cbrt(r49139407);
        float r49139409 = 7;
        float r49139410 = pow(r49139390, r49139409);
        float r49139411 = r49139395 * r49139410;
        float r49139412 = exp(r49139411);
        float r49139413 = 3;
        float r49139414 = pow(r49139390, r49139413);
        float r49139415 = r49139403 * r49139414;
        float r49139416 = exp(r49139415);
        float r49139417 = r49139412 * r49139416;
        float r49139418 = 43.3125;
        float r49139419 = 5;
        float r49139420 = pow(r49139390, r49139419);
        float r49139421 = r49139418 * r49139420;
        float r49139422 = exp(r49139421);
        float r49139423 = 2.1875;
        float r49139424 = r49139423 * r49139390;
        float r49139425 = exp(r49139424);
        float r49139426 = r49139422 * r49139425;
        float r49139427 = r49139417 / r49139426;
        float r49139428 = log(r49139427);
        float r49139429 = cbrt(r49139428);
        float r49139430 = r49139408 * r49139429;
        float r49139431 = r49139404 * r49139390;
        float r49139432 = r49139431 + r49139400;
        float r49139433 = r49139390 * r49139432;
        float r49139434 = r49139395 * r49139390;
        float r49139435 = r49139390 * r49139434;
        float r49139436 = r49139435 + r49139394;
        float r49139437 = r49139393 * r49139436;
        float r49139438 = r49139433 + r49139437;
        float r49139439 = cbrt(r49139438);
        float r49139440 = r49139430 * r49139439;
        return r49139440;
}

double f_od(double x) {
        double r49139441 = x;
        double r49139442 = 4;
        double r49139443 = pow(r49139441, r49139442);
        double r49139444 = r49139441 * r49139443;
        double r49139445 = -43.3125;
        double r49139446 = 26.8125;
        double r49139447 = r49139441 * r49139446;
        double r49139448 = r49139447 * r49139441;
        double r49139449 = r49139445 + r49139448;
        double r49139450 = r49139444 * r49139449;
        double r49139451 = -2.1875;
        double r49139452 = r49139441 * r49139451;
        double r49139453 = r49139441 * r49139441;
        double r49139454 = 19.6875;
        double r49139455 = r49139454 * r49139441;
        double r49139456 = r49139453 * r49139455;
        double r49139457 = r49139452 + r49139456;
        double r49139458 = r49139450 + r49139457;
        double r49139459 = cbrt(r49139458);
        double r49139460 = 7;
        double r49139461 = pow(r49139441, r49139460);
        double r49139462 = r49139446 * r49139461;
        double r49139463 = exp(r49139462);
        double r49139464 = 3;
        double r49139465 = pow(r49139441, r49139464);
        double r49139466 = r49139454 * r49139465;
        double r49139467 = exp(r49139466);
        double r49139468 = r49139463 * r49139467;
        double r49139469 = 43.3125;
        double r49139470 = 5;
        double r49139471 = pow(r49139441, r49139470);
        double r49139472 = r49139469 * r49139471;
        double r49139473 = exp(r49139472);
        double r49139474 = 2.1875;
        double r49139475 = r49139474 * r49139441;
        double r49139476 = exp(r49139475);
        double r49139477 = r49139473 * r49139476;
        double r49139478 = r49139468 / r49139477;
        double r49139479 = log(r49139478);
        double r49139480 = cbrt(r49139479);
        double r49139481 = r49139459 * r49139480;
        double r49139482 = r49139455 * r49139441;
        double r49139483 = r49139482 + r49139451;
        double r49139484 = r49139441 * r49139483;
        double r49139485 = r49139446 * r49139441;
        double r49139486 = r49139441 * r49139485;
        double r49139487 = r49139486 + r49139445;
        double r49139488 = r49139444 * r49139487;
        double r49139489 = r49139484 + r49139488;
        double r49139490 = cbrt(r49139489);
        double r49139491 = r49139481 * r49139490;
        return r49139491;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49139492, r49139493, r49139494, r49139495, r49139496, r49139497, r49139498, r49139499, r49139500, r49139501, r49139502, r49139503, r49139504, r49139505, r49139506, r49139507, r49139508, r49139509;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49139492, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r49139493);
        mpfr_init(r49139494);
        mpfr_init_set_str(r49139495, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r49139496);
        mpfr_init(r49139497);
        mpfr_init(r49139498);
        mpfr_init(r49139499);
        mpfr_init_set_str(r49139500, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r49139501);
        mpfr_init(r49139502);
        mpfr_init(r49139503);
        mpfr_init(r49139504);
        mpfr_init_set_str(r49139505, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r49139506);
        mpfr_init(r49139507);
        mpfr_init(r49139508);
        mpfr_init(r49139509);
}

double f_im(double x) {
        ;
        mpfr_set_d(r49139493, x, MPFR_RNDN);
        mpfr_mul(r49139494, r49139492, r49139493, MPFR_RNDN);
        ;
        mpfr_mul(r49139496, r49139493, r49139493, MPFR_RNDN);
        mpfr_mul(r49139497, r49139496, r49139493, MPFR_RNDN);
        mpfr_mul(r49139498, r49139495, r49139497, MPFR_RNDN);
        mpfr_add(r49139499, r49139494, r49139498, MPFR_RNDN);
        ;
        mpfr_mul(r49139501, r49139497, r49139493, MPFR_RNDN);
        mpfr_mul(r49139502, r49139501, r49139493, MPFR_RNDN);
        mpfr_mul(r49139503, r49139500, r49139502, MPFR_RNDN);
        mpfr_add(r49139504, r49139499, r49139503, MPFR_RNDN);
        ;
        mpfr_mul(r49139506, r49139502, r49139493, MPFR_RNDN);
        mpfr_mul(r49139507, r49139506, r49139493, MPFR_RNDN);
        mpfr_mul(r49139508, r49139505, r49139507, MPFR_RNDN);
        mpfr_add(r49139509, r49139504, r49139508, MPFR_RNDN);
        return mpfr_get_d(r49139509, MPFR_RNDN);
}

static mpfr_t r49139510, r49139511, r49139512, r49139513, r49139514, r49139515, r49139516, r49139517, r49139518, r49139519, r49139520, r49139521, r49139522, r49139523, r49139524, r49139525, r49139526, r49139527, r49139528, r49139529, r49139530, r49139531, r49139532, r49139533, r49139534, r49139535, r49139536, r49139537, r49139538, r49139539, r49139540, r49139541, r49139542, r49139543, r49139544, r49139545, r49139546, r49139547, r49139548, r49139549, r49139550, r49139551, r49139552, r49139553, r49139554, r49139555, r49139556, r49139557, r49139558, r49139559, r49139560;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49139510);
        mpfr_init_set_str(r49139511, "4", 10, MPFR_RNDN);
        mpfr_init(r49139512);
        mpfr_init(r49139513);
        mpfr_init_set_str(r49139514, "-43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r49139515, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r49139516);
        mpfr_init(r49139517);
        mpfr_init(r49139518);
        mpfr_init(r49139519);
        mpfr_init_set_str(r49139520, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r49139521);
        mpfr_init(r49139522);
        mpfr_init_set_str(r49139523, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r49139524);
        mpfr_init(r49139525);
        mpfr_init(r49139526);
        mpfr_init(r49139527);
        mpfr_init(r49139528);
        mpfr_init_set_str(r49139529, "7", 10, MPFR_RNDN);
        mpfr_init(r49139530);
        mpfr_init(r49139531);
        mpfr_init(r49139532);
        mpfr_init_set_str(r49139533, "3", 10, MPFR_RNDN);
        mpfr_init(r49139534);
        mpfr_init(r49139535);
        mpfr_init(r49139536);
        mpfr_init(r49139537);
        mpfr_init_set_str(r49139538, "43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r49139539, "5", 10, MPFR_RNDN);
        mpfr_init(r49139540);
        mpfr_init(r49139541);
        mpfr_init(r49139542);
        mpfr_init_set_str(r49139543, "2.1875", 10, MPFR_RNDN);
        mpfr_init(r49139544);
        mpfr_init(r49139545);
        mpfr_init(r49139546);
        mpfr_init(r49139547);
        mpfr_init(r49139548);
        mpfr_init(r49139549);
        mpfr_init(r49139550);
        mpfr_init(r49139551);
        mpfr_init(r49139552);
        mpfr_init(r49139553);
        mpfr_init(r49139554);
        mpfr_init(r49139555);
        mpfr_init(r49139556);
        mpfr_init(r49139557);
        mpfr_init(r49139558);
        mpfr_init(r49139559);
        mpfr_init(r49139560);
}

double f_fm(double x) {
        mpfr_set_d(r49139510, x, MPFR_RNDN);
        ;
        mpfr_pow(r49139512, r49139510, r49139511, MPFR_RNDN);
        mpfr_mul(r49139513, r49139510, r49139512, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r49139516, r49139510, r49139515, MPFR_RNDN);
        mpfr_mul(r49139517, r49139516, r49139510, MPFR_RNDN);
        mpfr_add(r49139518, r49139514, r49139517, MPFR_RNDN);
        mpfr_mul(r49139519, r49139513, r49139518, MPFR_RNDN);
        ;
        mpfr_mul(r49139521, r49139510, r49139520, MPFR_RNDN);
        mpfr_mul(r49139522, r49139510, r49139510, MPFR_RNDN);
        ;
        mpfr_mul(r49139524, r49139523, r49139510, MPFR_RNDN);
        mpfr_mul(r49139525, r49139522, r49139524, MPFR_RNDN);
        mpfr_add(r49139526, r49139521, r49139525, MPFR_RNDN);
        mpfr_add(r49139527, r49139519, r49139526, MPFR_RNDN);
        mpfr_cbrt(r49139528, r49139527, MPFR_RNDN);
        ;
        mpfr_pow(r49139530, r49139510, r49139529, MPFR_RNDN);
        mpfr_mul(r49139531, r49139515, r49139530, MPFR_RNDN);
        mpfr_exp(r49139532, r49139531, MPFR_RNDN);
        ;
        mpfr_pow(r49139534, r49139510, r49139533, MPFR_RNDN);
        mpfr_mul(r49139535, r49139523, r49139534, MPFR_RNDN);
        mpfr_exp(r49139536, r49139535, MPFR_RNDN);
        mpfr_mul(r49139537, r49139532, r49139536, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r49139540, r49139510, r49139539, MPFR_RNDN);
        mpfr_mul(r49139541, r49139538, r49139540, MPFR_RNDN);
        mpfr_exp(r49139542, r49139541, MPFR_RNDN);
        ;
        mpfr_mul(r49139544, r49139543, r49139510, MPFR_RNDN);
        mpfr_exp(r49139545, r49139544, MPFR_RNDN);
        mpfr_mul(r49139546, r49139542, r49139545, MPFR_RNDN);
        mpfr_div(r49139547, r49139537, r49139546, MPFR_RNDN);
        mpfr_log(r49139548, r49139547, MPFR_RNDN);
        mpfr_cbrt(r49139549, r49139548, MPFR_RNDN);
        mpfr_mul(r49139550, r49139528, r49139549, MPFR_RNDN);
        mpfr_mul(r49139551, r49139524, r49139510, MPFR_RNDN);
        mpfr_add(r49139552, r49139551, r49139520, MPFR_RNDN);
        mpfr_mul(r49139553, r49139510, r49139552, MPFR_RNDN);
        mpfr_mul(r49139554, r49139515, r49139510, MPFR_RNDN);
        mpfr_mul(r49139555, r49139510, r49139554, MPFR_RNDN);
        mpfr_add(r49139556, r49139555, r49139514, MPFR_RNDN);
        mpfr_mul(r49139557, r49139513, r49139556, MPFR_RNDN);
        mpfr_add(r49139558, r49139553, r49139557, MPFR_RNDN);
        mpfr_cbrt(r49139559, r49139558, MPFR_RNDN);
        mpfr_mul(r49139560, r49139550, r49139559, MPFR_RNDN);
        return mpfr_get_d(r49139560, MPFR_RNDN);
}

static mpfr_t r49139561, r49139562, r49139563, r49139564, r49139565, r49139566, r49139567, r49139568, r49139569, r49139570, r49139571, r49139572, r49139573, r49139574, r49139575, r49139576, r49139577, r49139578, r49139579, r49139580, r49139581, r49139582, r49139583, r49139584, r49139585, r49139586, r49139587, r49139588, r49139589, r49139590, r49139591, r49139592, r49139593, r49139594, r49139595, r49139596, r49139597, r49139598, r49139599, r49139600, r49139601, r49139602, r49139603, r49139604, r49139605, r49139606, r49139607, r49139608, r49139609, r49139610, r49139611;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49139561);
        mpfr_init_set_str(r49139562, "4", 10, MPFR_RNDN);
        mpfr_init(r49139563);
        mpfr_init(r49139564);
        mpfr_init_set_str(r49139565, "-43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r49139566, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r49139567);
        mpfr_init(r49139568);
        mpfr_init(r49139569);
        mpfr_init(r49139570);
        mpfr_init_set_str(r49139571, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r49139572);
        mpfr_init(r49139573);
        mpfr_init_set_str(r49139574, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r49139575);
        mpfr_init(r49139576);
        mpfr_init(r49139577);
        mpfr_init(r49139578);
        mpfr_init(r49139579);
        mpfr_init_set_str(r49139580, "7", 10, MPFR_RNDN);
        mpfr_init(r49139581);
        mpfr_init(r49139582);
        mpfr_init(r49139583);
        mpfr_init_set_str(r49139584, "3", 10, MPFR_RNDN);
        mpfr_init(r49139585);
        mpfr_init(r49139586);
        mpfr_init(r49139587);
        mpfr_init(r49139588);
        mpfr_init_set_str(r49139589, "43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r49139590, "5", 10, MPFR_RNDN);
        mpfr_init(r49139591);
        mpfr_init(r49139592);
        mpfr_init(r49139593);
        mpfr_init_set_str(r49139594, "2.1875", 10, MPFR_RNDN);
        mpfr_init(r49139595);
        mpfr_init(r49139596);
        mpfr_init(r49139597);
        mpfr_init(r49139598);
        mpfr_init(r49139599);
        mpfr_init(r49139600);
        mpfr_init(r49139601);
        mpfr_init(r49139602);
        mpfr_init(r49139603);
        mpfr_init(r49139604);
        mpfr_init(r49139605);
        mpfr_init(r49139606);
        mpfr_init(r49139607);
        mpfr_init(r49139608);
        mpfr_init(r49139609);
        mpfr_init(r49139610);
        mpfr_init(r49139611);
}

double f_dm(double x) {
        mpfr_set_d(r49139561, x, MPFR_RNDN);
        ;
        mpfr_pow(r49139563, r49139561, r49139562, MPFR_RNDN);
        mpfr_mul(r49139564, r49139561, r49139563, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r49139567, r49139561, r49139566, MPFR_RNDN);
        mpfr_mul(r49139568, r49139567, r49139561, MPFR_RNDN);
        mpfr_add(r49139569, r49139565, r49139568, MPFR_RNDN);
        mpfr_mul(r49139570, r49139564, r49139569, MPFR_RNDN);
        ;
        mpfr_mul(r49139572, r49139561, r49139571, MPFR_RNDN);
        mpfr_mul(r49139573, r49139561, r49139561, MPFR_RNDN);
        ;
        mpfr_mul(r49139575, r49139574, r49139561, MPFR_RNDN);
        mpfr_mul(r49139576, r49139573, r49139575, MPFR_RNDN);
        mpfr_add(r49139577, r49139572, r49139576, MPFR_RNDN);
        mpfr_add(r49139578, r49139570, r49139577, MPFR_RNDN);
        mpfr_cbrt(r49139579, r49139578, MPFR_RNDN);
        ;
        mpfr_pow(r49139581, r49139561, r49139580, MPFR_RNDN);
        mpfr_mul(r49139582, r49139566, r49139581, MPFR_RNDN);
        mpfr_exp(r49139583, r49139582, MPFR_RNDN);
        ;
        mpfr_pow(r49139585, r49139561, r49139584, MPFR_RNDN);
        mpfr_mul(r49139586, r49139574, r49139585, MPFR_RNDN);
        mpfr_exp(r49139587, r49139586, MPFR_RNDN);
        mpfr_mul(r49139588, r49139583, r49139587, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r49139591, r49139561, r49139590, MPFR_RNDN);
        mpfr_mul(r49139592, r49139589, r49139591, MPFR_RNDN);
        mpfr_exp(r49139593, r49139592, MPFR_RNDN);
        ;
        mpfr_mul(r49139595, r49139594, r49139561, MPFR_RNDN);
        mpfr_exp(r49139596, r49139595, MPFR_RNDN);
        mpfr_mul(r49139597, r49139593, r49139596, MPFR_RNDN);
        mpfr_div(r49139598, r49139588, r49139597, MPFR_RNDN);
        mpfr_log(r49139599, r49139598, MPFR_RNDN);
        mpfr_cbrt(r49139600, r49139599, MPFR_RNDN);
        mpfr_mul(r49139601, r49139579, r49139600, MPFR_RNDN);
        mpfr_mul(r49139602, r49139575, r49139561, MPFR_RNDN);
        mpfr_add(r49139603, r49139602, r49139571, MPFR_RNDN);
        mpfr_mul(r49139604, r49139561, r49139603, MPFR_RNDN);
        mpfr_mul(r49139605, r49139566, r49139561, MPFR_RNDN);
        mpfr_mul(r49139606, r49139561, r49139605, MPFR_RNDN);
        mpfr_add(r49139607, r49139606, r49139565, MPFR_RNDN);
        mpfr_mul(r49139608, r49139564, r49139607, MPFR_RNDN);
        mpfr_add(r49139609, r49139604, r49139608, MPFR_RNDN);
        mpfr_cbrt(r49139610, r49139609, MPFR_RNDN);
        mpfr_mul(r49139611, r49139601, r49139610, MPFR_RNDN);
        return mpfr_get_d(r49139611, MPFR_RNDN);
}

