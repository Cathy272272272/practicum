#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r4681364 = 1.0;
        float r4681365 = -10.0;
        float r4681366 = x;
        float r4681367 = r4681365 * r4681366;
        float r4681368 = r4681364 + r4681367;
        float r4681369 = 22.5;
        float r4681370 = r4681366 * r4681366;
        float r4681371 = r4681369 * r4681370;
        float r4681372 = r4681368 + r4681371;
        float r4681373 = -20.0;
        float r4681374 = r4681370 * r4681366;
        float r4681375 = r4681373 * r4681374;
        float r4681376 = r4681372 + r4681375;
        float r4681377 = 8.75;
        float r4681378 = r4681374 * r4681366;
        float r4681379 = r4681377 * r4681378;
        float r4681380 = r4681376 + r4681379;
        float r4681381 = -2.1;
        float r4681382 = r4681378 * r4681366;
        float r4681383 = r4681381 * r4681382;
        float r4681384 = r4681380 + r4681383;
        float r4681385 = 0.291667;
        float r4681386 = r4681382 * r4681366;
        float r4681387 = r4681385 * r4681386;
        float r4681388 = r4681384 + r4681387;
        float r4681389 = -0.02381;
        float r4681390 = r4681386 * r4681366;
        float r4681391 = r4681389 * r4681390;
        float r4681392 = r4681388 + r4681391;
        float r4681393 = 0.001116;
        float r4681394 = r4681390 * r4681366;
        float r4681395 = r4681393 * r4681394;
        float r4681396 = r4681392 + r4681395;
        float r4681397 = -2.8e-05;
        float r4681398 = r4681394 * r4681366;
        float r4681399 = r4681397 * r4681398;
        float r4681400 = r4681396 + r4681399;
        return r4681400;
}

double f_id(double x) {
        double r4681401 = 1.0;
        double r4681402 = -10.0;
        double r4681403 = x;
        double r4681404 = r4681402 * r4681403;
        double r4681405 = r4681401 + r4681404;
        double r4681406 = 22.5;
        double r4681407 = r4681403 * r4681403;
        double r4681408 = r4681406 * r4681407;
        double r4681409 = r4681405 + r4681408;
        double r4681410 = -20.0;
        double r4681411 = r4681407 * r4681403;
        double r4681412 = r4681410 * r4681411;
        double r4681413 = r4681409 + r4681412;
        double r4681414 = 8.75;
        double r4681415 = r4681411 * r4681403;
        double r4681416 = r4681414 * r4681415;
        double r4681417 = r4681413 + r4681416;
        double r4681418 = -2.1;
        double r4681419 = r4681415 * r4681403;
        double r4681420 = r4681418 * r4681419;
        double r4681421 = r4681417 + r4681420;
        double r4681422 = 0.291667;
        double r4681423 = r4681419 * r4681403;
        double r4681424 = r4681422 * r4681423;
        double r4681425 = r4681421 + r4681424;
        double r4681426 = -0.02381;
        double r4681427 = r4681423 * r4681403;
        double r4681428 = r4681426 * r4681427;
        double r4681429 = r4681425 + r4681428;
        double r4681430 = 0.001116;
        double r4681431 = r4681427 * r4681403;
        double r4681432 = r4681430 * r4681431;
        double r4681433 = r4681429 + r4681432;
        double r4681434 = -2.8e-05;
        double r4681435 = r4681431 * r4681403;
        double r4681436 = r4681434 * r4681435;
        double r4681437 = r4681433 + r4681436;
        return r4681437;
}


double f_of(float x) {
        float r4681438 = x;
        float r4681439 = r4681438 * r4681438;
        float r4681440 = 0.291667;
        float r4681441 = r4681439 * r4681440;
        float r4681442 = r4681439 * r4681439;
        float r4681443 = r4681441 * r4681442;
        float r4681444 = -2.1;
        float r4681445 = r4681444 * r4681438;
        float r4681446 = 8.75;
        float r4681447 = r4681445 + r4681446;
        float r4681448 = r4681442 * r4681447;
        float r4681449 = r4681443 + r4681448;
        float r4681450 = -10.0;
        float r4681451 = r4681438 * r4681450;
        float r4681452 = 1.0;
        float r4681453 = r4681451 + r4681452;
        float r4681454 = -20.0;
        float r4681455 = r4681454 * r4681438;
        float r4681456 = 22.5;
        float r4681457 = r4681455 + r4681456;
        float r4681458 = r4681439 * r4681457;
        float r4681459 = r4681453 + r4681458;
        float r4681460 = r4681449 + r4681459;
        float r4681461 = -0.02381;
        float r4681462 = r4681461 * r4681438;
        float r4681463 = r4681462 * r4681439;
        float r4681464 = r4681463 * r4681442;
        float r4681465 = r4681442 * r4681442;
        float r4681466 = -2.8e-05;
        float r4681467 = r4681466 * r4681438;
        float r4681468 = 0.001116;
        float r4681469 = r4681467 + r4681468;
        float r4681470 = r4681465 * r4681469;
        float r4681471 = r4681464 + r4681470;
        float r4681472 = r4681460 + r4681471;
        return r4681472;
}

double f_od(double x) {
        double r4681473 = x;
        double r4681474 = r4681473 * r4681473;
        double r4681475 = 0.291667;
        double r4681476 = r4681474 * r4681475;
        double r4681477 = r4681474 * r4681474;
        double r4681478 = r4681476 * r4681477;
        double r4681479 = -2.1;
        double r4681480 = r4681479 * r4681473;
        double r4681481 = 8.75;
        double r4681482 = r4681480 + r4681481;
        double r4681483 = r4681477 * r4681482;
        double r4681484 = r4681478 + r4681483;
        double r4681485 = -10.0;
        double r4681486 = r4681473 * r4681485;
        double r4681487 = 1.0;
        double r4681488 = r4681486 + r4681487;
        double r4681489 = -20.0;
        double r4681490 = r4681489 * r4681473;
        double r4681491 = 22.5;
        double r4681492 = r4681490 + r4681491;
        double r4681493 = r4681474 * r4681492;
        double r4681494 = r4681488 + r4681493;
        double r4681495 = r4681484 + r4681494;
        double r4681496 = -0.02381;
        double r4681497 = r4681496 * r4681473;
        double r4681498 = r4681497 * r4681474;
        double r4681499 = r4681498 * r4681477;
        double r4681500 = r4681477 * r4681477;
        double r4681501 = -2.8e-05;
        double r4681502 = r4681501 * r4681473;
        double r4681503 = 0.001116;
        double r4681504 = r4681502 + r4681503;
        double r4681505 = r4681500 * r4681504;
        double r4681506 = r4681499 + r4681505;
        double r4681507 = r4681495 + r4681506;
        return r4681507;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4681508, r4681509, r4681510, r4681511, r4681512, r4681513, r4681514, r4681515, r4681516, r4681517, r4681518, r4681519, r4681520, r4681521, r4681522, r4681523, r4681524, r4681525, r4681526, r4681527, r4681528, r4681529, r4681530, r4681531, r4681532, r4681533, r4681534, r4681535, r4681536, r4681537, r4681538, r4681539, r4681540, r4681541, r4681542, r4681543, r4681544;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4681508, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4681509, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r4681510);
        mpfr_init(r4681511);
        mpfr_init(r4681512);
        mpfr_init_set_str(r4681513, "22.5", 10, MPFR_RNDN);
        mpfr_init(r4681514);
        mpfr_init(r4681515);
        mpfr_init(r4681516);
        mpfr_init_set_str(r4681517, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r4681518);
        mpfr_init(r4681519);
        mpfr_init(r4681520);
        mpfr_init_set_str(r4681521, "8.75", 10, MPFR_RNDN);
        mpfr_init(r4681522);
        mpfr_init(r4681523);
        mpfr_init(r4681524);
        mpfr_init_set_str(r4681525, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r4681526);
        mpfr_init(r4681527);
        mpfr_init(r4681528);
        mpfr_init_set_str(r4681529, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r4681530);
        mpfr_init(r4681531);
        mpfr_init(r4681532);
        mpfr_init_set_str(r4681533, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r4681534);
        mpfr_init(r4681535);
        mpfr_init(r4681536);
        mpfr_init_set_str(r4681537, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r4681538);
        mpfr_init(r4681539);
        mpfr_init(r4681540);
        mpfr_init_set_str(r4681541, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r4681542);
        mpfr_init(r4681543);
        mpfr_init(r4681544);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4681510, x, MPFR_RNDN);
        mpfr_mul(r4681511, r4681509, r4681510, MPFR_RNDN);
        mpfr_add(r4681512, r4681508, r4681511, MPFR_RNDN);
        ;
        mpfr_mul(r4681514, r4681510, r4681510, MPFR_RNDN);
        mpfr_mul(r4681515, r4681513, r4681514, MPFR_RNDN);
        mpfr_add(r4681516, r4681512, r4681515, MPFR_RNDN);
        ;
        mpfr_mul(r4681518, r4681514, r4681510, MPFR_RNDN);
        mpfr_mul(r4681519, r4681517, r4681518, MPFR_RNDN);
        mpfr_add(r4681520, r4681516, r4681519, MPFR_RNDN);
        ;
        mpfr_mul(r4681522, r4681518, r4681510, MPFR_RNDN);
        mpfr_mul(r4681523, r4681521, r4681522, MPFR_RNDN);
        mpfr_add(r4681524, r4681520, r4681523, MPFR_RNDN);
        ;
        mpfr_mul(r4681526, r4681522, r4681510, MPFR_RNDN);
        mpfr_mul(r4681527, r4681525, r4681526, MPFR_RNDN);
        mpfr_add(r4681528, r4681524, r4681527, MPFR_RNDN);
        ;
        mpfr_mul(r4681530, r4681526, r4681510, MPFR_RNDN);
        mpfr_mul(r4681531, r4681529, r4681530, MPFR_RNDN);
        mpfr_add(r4681532, r4681528, r4681531, MPFR_RNDN);
        ;
        mpfr_mul(r4681534, r4681530, r4681510, MPFR_RNDN);
        mpfr_mul(r4681535, r4681533, r4681534, MPFR_RNDN);
        mpfr_add(r4681536, r4681532, r4681535, MPFR_RNDN);
        ;
        mpfr_mul(r4681538, r4681534, r4681510, MPFR_RNDN);
        mpfr_mul(r4681539, r4681537, r4681538, MPFR_RNDN);
        mpfr_add(r4681540, r4681536, r4681539, MPFR_RNDN);
        ;
        mpfr_mul(r4681542, r4681538, r4681510, MPFR_RNDN);
        mpfr_mul(r4681543, r4681541, r4681542, MPFR_RNDN);
        mpfr_add(r4681544, r4681540, r4681543, MPFR_RNDN);
        return mpfr_get_d(r4681544, MPFR_RNDN);
}

static mpfr_t r4681545, r4681546, r4681547, r4681548, r4681549, r4681550, r4681551, r4681552, r4681553, r4681554, r4681555, r4681556, r4681557, r4681558, r4681559, r4681560, r4681561, r4681562, r4681563, r4681564, r4681565, r4681566, r4681567, r4681568, r4681569, r4681570, r4681571, r4681572, r4681573, r4681574, r4681575, r4681576, r4681577, r4681578, r4681579;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4681545);
        mpfr_init(r4681546);
        mpfr_init_set_str(r4681547, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r4681548);
        mpfr_init(r4681549);
        mpfr_init(r4681550);
        mpfr_init_set_str(r4681551, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r4681552);
        mpfr_init_set_str(r4681553, "8.75", 10, MPFR_RNDN);
        mpfr_init(r4681554);
        mpfr_init(r4681555);
        mpfr_init(r4681556);
        mpfr_init_set_str(r4681557, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r4681558);
        mpfr_init_set_str(r4681559, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4681560);
        mpfr_init_set_str(r4681561, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r4681562);
        mpfr_init_set_str(r4681563, "22.5", 10, MPFR_RNDN);
        mpfr_init(r4681564);
        mpfr_init(r4681565);
        mpfr_init(r4681566);
        mpfr_init(r4681567);
        mpfr_init_set_str(r4681568, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r4681569);
        mpfr_init(r4681570);
        mpfr_init(r4681571);
        mpfr_init(r4681572);
        mpfr_init_set_str(r4681573, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r4681574);
        mpfr_init_set_str(r4681575, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r4681576);
        mpfr_init(r4681577);
        mpfr_init(r4681578);
        mpfr_init(r4681579);
}

double f_fm(double x) {
        mpfr_set_d(r4681545, x, MPFR_RNDN);
        mpfr_mul(r4681546, r4681545, r4681545, MPFR_RNDN);
        ;
        mpfr_mul(r4681548, r4681546, r4681547, MPFR_RNDN);
        mpfr_mul(r4681549, r4681546, r4681546, MPFR_RNDN);
        mpfr_mul(r4681550, r4681548, r4681549, MPFR_RNDN);
        ;
        mpfr_mul(r4681552, r4681551, r4681545, MPFR_RNDN);
        ;
        mpfr_add(r4681554, r4681552, r4681553, MPFR_RNDN);
        mpfr_mul(r4681555, r4681549, r4681554, MPFR_RNDN);
        mpfr_add(r4681556, r4681550, r4681555, MPFR_RNDN);
        ;
        mpfr_mul(r4681558, r4681545, r4681557, MPFR_RNDN);
        ;
        mpfr_add(r4681560, r4681558, r4681559, MPFR_RNDN);
        ;
        mpfr_mul(r4681562, r4681561, r4681545, MPFR_RNDN);
        ;
        mpfr_add(r4681564, r4681562, r4681563, MPFR_RNDN);
        mpfr_mul(r4681565, r4681546, r4681564, MPFR_RNDN);
        mpfr_add(r4681566, r4681560, r4681565, MPFR_RNDN);
        mpfr_add(r4681567, r4681556, r4681566, MPFR_RNDN);
        ;
        mpfr_mul(r4681569, r4681568, r4681545, MPFR_RNDN);
        mpfr_mul(r4681570, r4681569, r4681546, MPFR_RNDN);
        mpfr_mul(r4681571, r4681570, r4681549, MPFR_RNDN);
        mpfr_mul(r4681572, r4681549, r4681549, MPFR_RNDN);
        ;
        mpfr_mul(r4681574, r4681573, r4681545, MPFR_RNDN);
        ;
        mpfr_add(r4681576, r4681574, r4681575, MPFR_RNDN);
        mpfr_mul(r4681577, r4681572, r4681576, MPFR_RNDN);
        mpfr_add(r4681578, r4681571, r4681577, MPFR_RNDN);
        mpfr_add(r4681579, r4681567, r4681578, MPFR_RNDN);
        return mpfr_get_d(r4681579, MPFR_RNDN);
}

static mpfr_t r4681580, r4681581, r4681582, r4681583, r4681584, r4681585, r4681586, r4681587, r4681588, r4681589, r4681590, r4681591, r4681592, r4681593, r4681594, r4681595, r4681596, r4681597, r4681598, r4681599, r4681600, r4681601, r4681602, r4681603, r4681604, r4681605, r4681606, r4681607, r4681608, r4681609, r4681610, r4681611, r4681612, r4681613, r4681614;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4681580);
        mpfr_init(r4681581);
        mpfr_init_set_str(r4681582, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r4681583);
        mpfr_init(r4681584);
        mpfr_init(r4681585);
        mpfr_init_set_str(r4681586, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r4681587);
        mpfr_init_set_str(r4681588, "8.75", 10, MPFR_RNDN);
        mpfr_init(r4681589);
        mpfr_init(r4681590);
        mpfr_init(r4681591);
        mpfr_init_set_str(r4681592, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r4681593);
        mpfr_init_set_str(r4681594, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4681595);
        mpfr_init_set_str(r4681596, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r4681597);
        mpfr_init_set_str(r4681598, "22.5", 10, MPFR_RNDN);
        mpfr_init(r4681599);
        mpfr_init(r4681600);
        mpfr_init(r4681601);
        mpfr_init(r4681602);
        mpfr_init_set_str(r4681603, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r4681604);
        mpfr_init(r4681605);
        mpfr_init(r4681606);
        mpfr_init(r4681607);
        mpfr_init_set_str(r4681608, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r4681609);
        mpfr_init_set_str(r4681610, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r4681611);
        mpfr_init(r4681612);
        mpfr_init(r4681613);
        mpfr_init(r4681614);
}

double f_dm(double x) {
        mpfr_set_d(r4681580, x, MPFR_RNDN);
        mpfr_mul(r4681581, r4681580, r4681580, MPFR_RNDN);
        ;
        mpfr_mul(r4681583, r4681581, r4681582, MPFR_RNDN);
        mpfr_mul(r4681584, r4681581, r4681581, MPFR_RNDN);
        mpfr_mul(r4681585, r4681583, r4681584, MPFR_RNDN);
        ;
        mpfr_mul(r4681587, r4681586, r4681580, MPFR_RNDN);
        ;
        mpfr_add(r4681589, r4681587, r4681588, MPFR_RNDN);
        mpfr_mul(r4681590, r4681584, r4681589, MPFR_RNDN);
        mpfr_add(r4681591, r4681585, r4681590, MPFR_RNDN);
        ;
        mpfr_mul(r4681593, r4681580, r4681592, MPFR_RNDN);
        ;
        mpfr_add(r4681595, r4681593, r4681594, MPFR_RNDN);
        ;
        mpfr_mul(r4681597, r4681596, r4681580, MPFR_RNDN);
        ;
        mpfr_add(r4681599, r4681597, r4681598, MPFR_RNDN);
        mpfr_mul(r4681600, r4681581, r4681599, MPFR_RNDN);
        mpfr_add(r4681601, r4681595, r4681600, MPFR_RNDN);
        mpfr_add(r4681602, r4681591, r4681601, MPFR_RNDN);
        ;
        mpfr_mul(r4681604, r4681603, r4681580, MPFR_RNDN);
        mpfr_mul(r4681605, r4681604, r4681581, MPFR_RNDN);
        mpfr_mul(r4681606, r4681605, r4681584, MPFR_RNDN);
        mpfr_mul(r4681607, r4681584, r4681584, MPFR_RNDN);
        ;
        mpfr_mul(r4681609, r4681608, r4681580, MPFR_RNDN);
        ;
        mpfr_add(r4681611, r4681609, r4681610, MPFR_RNDN);
        mpfr_mul(r4681612, r4681607, r4681611, MPFR_RNDN);
        mpfr_add(r4681613, r4681606, r4681612, MPFR_RNDN);
        mpfr_add(r4681614, r4681602, r4681613, MPFR_RNDN);
        return mpfr_get_d(r4681614, MPFR_RNDN);
}

