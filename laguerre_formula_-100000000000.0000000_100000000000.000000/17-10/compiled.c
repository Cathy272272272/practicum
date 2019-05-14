#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8599339 = 1.0;
        float r8599340 = -10.0;
        float r8599341 = x;
        float r8599342 = r8599340 * r8599341;
        float r8599343 = r8599339 + r8599342;
        float r8599344 = 22.5;
        float r8599345 = r8599341 * r8599341;
        float r8599346 = r8599344 * r8599345;
        float r8599347 = r8599343 + r8599346;
        float r8599348 = -20.0;
        float r8599349 = r8599345 * r8599341;
        float r8599350 = r8599348 * r8599349;
        float r8599351 = r8599347 + r8599350;
        float r8599352 = 8.75;
        float r8599353 = r8599349 * r8599341;
        float r8599354 = r8599352 * r8599353;
        float r8599355 = r8599351 + r8599354;
        float r8599356 = -2.1;
        float r8599357 = r8599353 * r8599341;
        float r8599358 = r8599356 * r8599357;
        float r8599359 = r8599355 + r8599358;
        float r8599360 = 0.291667;
        float r8599361 = r8599357 * r8599341;
        float r8599362 = r8599360 * r8599361;
        float r8599363 = r8599359 + r8599362;
        float r8599364 = -0.02381;
        float r8599365 = r8599361 * r8599341;
        float r8599366 = r8599364 * r8599365;
        float r8599367 = r8599363 + r8599366;
        float r8599368 = 0.001116;
        float r8599369 = r8599365 * r8599341;
        float r8599370 = r8599368 * r8599369;
        float r8599371 = r8599367 + r8599370;
        float r8599372 = -2.8e-05;
        float r8599373 = r8599369 * r8599341;
        float r8599374 = r8599372 * r8599373;
        float r8599375 = r8599371 + r8599374;
        return r8599375;
}

double f_id(double x) {
        double r8599376 = 1.0;
        double r8599377 = -10.0;
        double r8599378 = x;
        double r8599379 = r8599377 * r8599378;
        double r8599380 = r8599376 + r8599379;
        double r8599381 = 22.5;
        double r8599382 = r8599378 * r8599378;
        double r8599383 = r8599381 * r8599382;
        double r8599384 = r8599380 + r8599383;
        double r8599385 = -20.0;
        double r8599386 = r8599382 * r8599378;
        double r8599387 = r8599385 * r8599386;
        double r8599388 = r8599384 + r8599387;
        double r8599389 = 8.75;
        double r8599390 = r8599386 * r8599378;
        double r8599391 = r8599389 * r8599390;
        double r8599392 = r8599388 + r8599391;
        double r8599393 = -2.1;
        double r8599394 = r8599390 * r8599378;
        double r8599395 = r8599393 * r8599394;
        double r8599396 = r8599392 + r8599395;
        double r8599397 = 0.291667;
        double r8599398 = r8599394 * r8599378;
        double r8599399 = r8599397 * r8599398;
        double r8599400 = r8599396 + r8599399;
        double r8599401 = -0.02381;
        double r8599402 = r8599398 * r8599378;
        double r8599403 = r8599401 * r8599402;
        double r8599404 = r8599400 + r8599403;
        double r8599405 = 0.001116;
        double r8599406 = r8599402 * r8599378;
        double r8599407 = r8599405 * r8599406;
        double r8599408 = r8599404 + r8599407;
        double r8599409 = -2.8e-05;
        double r8599410 = r8599406 * r8599378;
        double r8599411 = r8599409 * r8599410;
        double r8599412 = r8599408 + r8599411;
        return r8599412;
}


double f_of(float x) {
        float r8599413 = 1.0;
        float r8599414 = -10.0;
        float r8599415 = x;
        float r8599416 = r8599414 * r8599415;
        float r8599417 = r8599413 + r8599416;
        float r8599418 = 22.5;
        float r8599419 = r8599415 * r8599415;
        float r8599420 = r8599418 * r8599419;
        float r8599421 = r8599417 + r8599420;
        float r8599422 = -20.0;
        float r8599423 = r8599419 * r8599415;
        float r8599424 = r8599422 * r8599423;
        float r8599425 = r8599421 + r8599424;
        float r8599426 = 8.75;
        float r8599427 = r8599423 * r8599415;
        float r8599428 = r8599426 * r8599427;
        float r8599429 = r8599425 + r8599428;
        float r8599430 = -2.1;
        float r8599431 = r8599427 * r8599415;
        float r8599432 = r8599430 * r8599431;
        float r8599433 = r8599429 + r8599432;
        float r8599434 = 0.291667;
        float r8599435 = r8599431 * r8599415;
        float r8599436 = r8599434 * r8599435;
        float r8599437 = r8599433 + r8599436;
        float r8599438 = -0.02381;
        float r8599439 = r8599435 * r8599415;
        float r8599440 = r8599438 * r8599439;
        float r8599441 = r8599437 + r8599440;
        float r8599442 = 0.001116;
        float r8599443 = r8599439 * r8599415;
        float r8599444 = r8599442 * r8599443;
        float r8599445 = r8599441 + r8599444;
        float r8599446 = -2.8e-05;
        float r8599447 = r8599443 * r8599415;
        float r8599448 = r8599446 * r8599447;
        float r8599449 = r8599445 + r8599448;
        return r8599449;
}

double f_od(double x) {
        double r8599450 = 1.0;
        double r8599451 = -10.0;
        double r8599452 = x;
        double r8599453 = r8599451 * r8599452;
        double r8599454 = r8599450 + r8599453;
        double r8599455 = 22.5;
        double r8599456 = r8599452 * r8599452;
        double r8599457 = r8599455 * r8599456;
        double r8599458 = r8599454 + r8599457;
        double r8599459 = -20.0;
        double r8599460 = r8599456 * r8599452;
        double r8599461 = r8599459 * r8599460;
        double r8599462 = r8599458 + r8599461;
        double r8599463 = 8.75;
        double r8599464 = r8599460 * r8599452;
        double r8599465 = r8599463 * r8599464;
        double r8599466 = r8599462 + r8599465;
        double r8599467 = -2.1;
        double r8599468 = r8599464 * r8599452;
        double r8599469 = r8599467 * r8599468;
        double r8599470 = r8599466 + r8599469;
        double r8599471 = 0.291667;
        double r8599472 = r8599468 * r8599452;
        double r8599473 = r8599471 * r8599472;
        double r8599474 = r8599470 + r8599473;
        double r8599475 = -0.02381;
        double r8599476 = r8599472 * r8599452;
        double r8599477 = r8599475 * r8599476;
        double r8599478 = r8599474 + r8599477;
        double r8599479 = 0.001116;
        double r8599480 = r8599476 * r8599452;
        double r8599481 = r8599479 * r8599480;
        double r8599482 = r8599478 + r8599481;
        double r8599483 = -2.8e-05;
        double r8599484 = r8599480 * r8599452;
        double r8599485 = r8599483 * r8599484;
        double r8599486 = r8599482 + r8599485;
        return r8599486;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8599487, r8599488, r8599489, r8599490, r8599491, r8599492, r8599493, r8599494, r8599495, r8599496, r8599497, r8599498, r8599499, r8599500, r8599501, r8599502, r8599503, r8599504, r8599505, r8599506, r8599507, r8599508, r8599509, r8599510, r8599511, r8599512, r8599513, r8599514, r8599515, r8599516, r8599517, r8599518, r8599519, r8599520, r8599521, r8599522, r8599523;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8599487, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8599488, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r8599489);
        mpfr_init(r8599490);
        mpfr_init(r8599491);
        mpfr_init_set_str(r8599492, "22.5", 10, MPFR_RNDN);
        mpfr_init(r8599493);
        mpfr_init(r8599494);
        mpfr_init(r8599495);
        mpfr_init_set_str(r8599496, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r8599497);
        mpfr_init(r8599498);
        mpfr_init(r8599499);
        mpfr_init_set_str(r8599500, "8.75", 10, MPFR_RNDN);
        mpfr_init(r8599501);
        mpfr_init(r8599502);
        mpfr_init(r8599503);
        mpfr_init_set_str(r8599504, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r8599505);
        mpfr_init(r8599506);
        mpfr_init(r8599507);
        mpfr_init_set_str(r8599508, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r8599509);
        mpfr_init(r8599510);
        mpfr_init(r8599511);
        mpfr_init_set_str(r8599512, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r8599513);
        mpfr_init(r8599514);
        mpfr_init(r8599515);
        mpfr_init_set_str(r8599516, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r8599517);
        mpfr_init(r8599518);
        mpfr_init(r8599519);
        mpfr_init_set_str(r8599520, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r8599521);
        mpfr_init(r8599522);
        mpfr_init(r8599523);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8599489, x, MPFR_RNDN);
        mpfr_mul(r8599490, r8599488, r8599489, MPFR_RNDN);
        mpfr_add(r8599491, r8599487, r8599490, MPFR_RNDN);
        ;
        mpfr_mul(r8599493, r8599489, r8599489, MPFR_RNDN);
        mpfr_mul(r8599494, r8599492, r8599493, MPFR_RNDN);
        mpfr_add(r8599495, r8599491, r8599494, MPFR_RNDN);
        ;
        mpfr_mul(r8599497, r8599493, r8599489, MPFR_RNDN);
        mpfr_mul(r8599498, r8599496, r8599497, MPFR_RNDN);
        mpfr_add(r8599499, r8599495, r8599498, MPFR_RNDN);
        ;
        mpfr_mul(r8599501, r8599497, r8599489, MPFR_RNDN);
        mpfr_mul(r8599502, r8599500, r8599501, MPFR_RNDN);
        mpfr_add(r8599503, r8599499, r8599502, MPFR_RNDN);
        ;
        mpfr_mul(r8599505, r8599501, r8599489, MPFR_RNDN);
        mpfr_mul(r8599506, r8599504, r8599505, MPFR_RNDN);
        mpfr_add(r8599507, r8599503, r8599506, MPFR_RNDN);
        ;
        mpfr_mul(r8599509, r8599505, r8599489, MPFR_RNDN);
        mpfr_mul(r8599510, r8599508, r8599509, MPFR_RNDN);
        mpfr_add(r8599511, r8599507, r8599510, MPFR_RNDN);
        ;
        mpfr_mul(r8599513, r8599509, r8599489, MPFR_RNDN);
        mpfr_mul(r8599514, r8599512, r8599513, MPFR_RNDN);
        mpfr_add(r8599515, r8599511, r8599514, MPFR_RNDN);
        ;
        mpfr_mul(r8599517, r8599513, r8599489, MPFR_RNDN);
        mpfr_mul(r8599518, r8599516, r8599517, MPFR_RNDN);
        mpfr_add(r8599519, r8599515, r8599518, MPFR_RNDN);
        ;
        mpfr_mul(r8599521, r8599517, r8599489, MPFR_RNDN);
        mpfr_mul(r8599522, r8599520, r8599521, MPFR_RNDN);
        mpfr_add(r8599523, r8599519, r8599522, MPFR_RNDN);
        return mpfr_get_d(r8599523, MPFR_RNDN);
}

static mpfr_t r8599524, r8599525, r8599526, r8599527, r8599528, r8599529, r8599530, r8599531, r8599532, r8599533, r8599534, r8599535, r8599536, r8599537, r8599538, r8599539, r8599540, r8599541, r8599542, r8599543, r8599544, r8599545, r8599546, r8599547, r8599548, r8599549, r8599550, r8599551, r8599552, r8599553, r8599554, r8599555, r8599556, r8599557, r8599558, r8599559, r8599560;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8599524, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8599525, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r8599526);
        mpfr_init(r8599527);
        mpfr_init(r8599528);
        mpfr_init_set_str(r8599529, "22.5", 10, MPFR_RNDN);
        mpfr_init(r8599530);
        mpfr_init(r8599531);
        mpfr_init(r8599532);
        mpfr_init_set_str(r8599533, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r8599534);
        mpfr_init(r8599535);
        mpfr_init(r8599536);
        mpfr_init_set_str(r8599537, "8.75", 10, MPFR_RNDN);
        mpfr_init(r8599538);
        mpfr_init(r8599539);
        mpfr_init(r8599540);
        mpfr_init_set_str(r8599541, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r8599542);
        mpfr_init(r8599543);
        mpfr_init(r8599544);
        mpfr_init_set_str(r8599545, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r8599546);
        mpfr_init(r8599547);
        mpfr_init(r8599548);
        mpfr_init_set_str(r8599549, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r8599550);
        mpfr_init(r8599551);
        mpfr_init(r8599552);
        mpfr_init_set_str(r8599553, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r8599554);
        mpfr_init(r8599555);
        mpfr_init(r8599556);
        mpfr_init_set_str(r8599557, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r8599558);
        mpfr_init(r8599559);
        mpfr_init(r8599560);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8599526, x, MPFR_RNDN);
        mpfr_mul(r8599527, r8599525, r8599526, MPFR_RNDN);
        mpfr_add(r8599528, r8599524, r8599527, MPFR_RNDN);
        ;
        mpfr_mul(r8599530, r8599526, r8599526, MPFR_RNDN);
        mpfr_mul(r8599531, r8599529, r8599530, MPFR_RNDN);
        mpfr_add(r8599532, r8599528, r8599531, MPFR_RNDN);
        ;
        mpfr_mul(r8599534, r8599530, r8599526, MPFR_RNDN);
        mpfr_mul(r8599535, r8599533, r8599534, MPFR_RNDN);
        mpfr_add(r8599536, r8599532, r8599535, MPFR_RNDN);
        ;
        mpfr_mul(r8599538, r8599534, r8599526, MPFR_RNDN);
        mpfr_mul(r8599539, r8599537, r8599538, MPFR_RNDN);
        mpfr_add(r8599540, r8599536, r8599539, MPFR_RNDN);
        ;
        mpfr_mul(r8599542, r8599538, r8599526, MPFR_RNDN);
        mpfr_mul(r8599543, r8599541, r8599542, MPFR_RNDN);
        mpfr_add(r8599544, r8599540, r8599543, MPFR_RNDN);
        ;
        mpfr_mul(r8599546, r8599542, r8599526, MPFR_RNDN);
        mpfr_mul(r8599547, r8599545, r8599546, MPFR_RNDN);
        mpfr_add(r8599548, r8599544, r8599547, MPFR_RNDN);
        ;
        mpfr_mul(r8599550, r8599546, r8599526, MPFR_RNDN);
        mpfr_mul(r8599551, r8599549, r8599550, MPFR_RNDN);
        mpfr_add(r8599552, r8599548, r8599551, MPFR_RNDN);
        ;
        mpfr_mul(r8599554, r8599550, r8599526, MPFR_RNDN);
        mpfr_mul(r8599555, r8599553, r8599554, MPFR_RNDN);
        mpfr_add(r8599556, r8599552, r8599555, MPFR_RNDN);
        ;
        mpfr_mul(r8599558, r8599554, r8599526, MPFR_RNDN);
        mpfr_mul(r8599559, r8599557, r8599558, MPFR_RNDN);
        mpfr_add(r8599560, r8599556, r8599559, MPFR_RNDN);
        return mpfr_get_d(r8599560, MPFR_RNDN);
}

static mpfr_t r8599561, r8599562, r8599563, r8599564, r8599565, r8599566, r8599567, r8599568, r8599569, r8599570, r8599571, r8599572, r8599573, r8599574, r8599575, r8599576, r8599577, r8599578, r8599579, r8599580, r8599581, r8599582, r8599583, r8599584, r8599585, r8599586, r8599587, r8599588, r8599589, r8599590, r8599591, r8599592, r8599593, r8599594, r8599595, r8599596, r8599597;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8599561, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8599562, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r8599563);
        mpfr_init(r8599564);
        mpfr_init(r8599565);
        mpfr_init_set_str(r8599566, "22.5", 10, MPFR_RNDN);
        mpfr_init(r8599567);
        mpfr_init(r8599568);
        mpfr_init(r8599569);
        mpfr_init_set_str(r8599570, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r8599571);
        mpfr_init(r8599572);
        mpfr_init(r8599573);
        mpfr_init_set_str(r8599574, "8.75", 10, MPFR_RNDN);
        mpfr_init(r8599575);
        mpfr_init(r8599576);
        mpfr_init(r8599577);
        mpfr_init_set_str(r8599578, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r8599579);
        mpfr_init(r8599580);
        mpfr_init(r8599581);
        mpfr_init_set_str(r8599582, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r8599583);
        mpfr_init(r8599584);
        mpfr_init(r8599585);
        mpfr_init_set_str(r8599586, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r8599587);
        mpfr_init(r8599588);
        mpfr_init(r8599589);
        mpfr_init_set_str(r8599590, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r8599591);
        mpfr_init(r8599592);
        mpfr_init(r8599593);
        mpfr_init_set_str(r8599594, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r8599595);
        mpfr_init(r8599596);
        mpfr_init(r8599597);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8599563, x, MPFR_RNDN);
        mpfr_mul(r8599564, r8599562, r8599563, MPFR_RNDN);
        mpfr_add(r8599565, r8599561, r8599564, MPFR_RNDN);
        ;
        mpfr_mul(r8599567, r8599563, r8599563, MPFR_RNDN);
        mpfr_mul(r8599568, r8599566, r8599567, MPFR_RNDN);
        mpfr_add(r8599569, r8599565, r8599568, MPFR_RNDN);
        ;
        mpfr_mul(r8599571, r8599567, r8599563, MPFR_RNDN);
        mpfr_mul(r8599572, r8599570, r8599571, MPFR_RNDN);
        mpfr_add(r8599573, r8599569, r8599572, MPFR_RNDN);
        ;
        mpfr_mul(r8599575, r8599571, r8599563, MPFR_RNDN);
        mpfr_mul(r8599576, r8599574, r8599575, MPFR_RNDN);
        mpfr_add(r8599577, r8599573, r8599576, MPFR_RNDN);
        ;
        mpfr_mul(r8599579, r8599575, r8599563, MPFR_RNDN);
        mpfr_mul(r8599580, r8599578, r8599579, MPFR_RNDN);
        mpfr_add(r8599581, r8599577, r8599580, MPFR_RNDN);
        ;
        mpfr_mul(r8599583, r8599579, r8599563, MPFR_RNDN);
        mpfr_mul(r8599584, r8599582, r8599583, MPFR_RNDN);
        mpfr_add(r8599585, r8599581, r8599584, MPFR_RNDN);
        ;
        mpfr_mul(r8599587, r8599583, r8599563, MPFR_RNDN);
        mpfr_mul(r8599588, r8599586, r8599587, MPFR_RNDN);
        mpfr_add(r8599589, r8599585, r8599588, MPFR_RNDN);
        ;
        mpfr_mul(r8599591, r8599587, r8599563, MPFR_RNDN);
        mpfr_mul(r8599592, r8599590, r8599591, MPFR_RNDN);
        mpfr_add(r8599593, r8599589, r8599592, MPFR_RNDN);
        ;
        mpfr_mul(r8599595, r8599591, r8599563, MPFR_RNDN);
        mpfr_mul(r8599596, r8599594, r8599595, MPFR_RNDN);
        mpfr_add(r8599597, r8599593, r8599596, MPFR_RNDN);
        return mpfr_get_d(r8599597, MPFR_RNDN);
}

