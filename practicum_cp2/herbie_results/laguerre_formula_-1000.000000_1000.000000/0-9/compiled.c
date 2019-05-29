#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6512380 = 1.0;
        float r6512381 = -9.0;
        float r6512382 = x;
        float r6512383 = r6512381 * r6512382;
        float r6512384 = r6512380 + r6512383;
        float r6512385 = 18.0;
        float r6512386 = r6512382 * r6512382;
        float r6512387 = r6512385 * r6512386;
        float r6512388 = r6512384 + r6512387;
        float r6512389 = -14.0;
        float r6512390 = r6512386 * r6512382;
        float r6512391 = r6512389 * r6512390;
        float r6512392 = r6512388 + r6512391;
        float r6512393 = 5.25;
        float r6512394 = r6512390 * r6512382;
        float r6512395 = r6512393 * r6512394;
        float r6512396 = r6512392 + r6512395;
        float r6512397 = -1.05;
        float r6512398 = r6512394 * r6512382;
        float r6512399 = r6512397 * r6512398;
        float r6512400 = r6512396 + r6512399;
        float r6512401 = 0.116667;
        float r6512402 = r6512398 * r6512382;
        float r6512403 = r6512401 * r6512402;
        float r6512404 = r6512400 + r6512403;
        float r6512405 = -0.007143;
        float r6512406 = r6512402 * r6512382;
        float r6512407 = r6512405 * r6512406;
        float r6512408 = r6512404 + r6512407;
        float r6512409 = 0.000223;
        float r6512410 = r6512406 * r6512382;
        float r6512411 = r6512409 * r6512410;
        float r6512412 = r6512408 + r6512411;
        float r6512413 = -3e-06;
        float r6512414 = r6512410 * r6512382;
        float r6512415 = r6512413 * r6512414;
        float r6512416 = r6512412 + r6512415;
        return r6512416;
}

double f_id(double x) {
        double r6512417 = 1.0;
        double r6512418 = -9.0;
        double r6512419 = x;
        double r6512420 = r6512418 * r6512419;
        double r6512421 = r6512417 + r6512420;
        double r6512422 = 18.0;
        double r6512423 = r6512419 * r6512419;
        double r6512424 = r6512422 * r6512423;
        double r6512425 = r6512421 + r6512424;
        double r6512426 = -14.0;
        double r6512427 = r6512423 * r6512419;
        double r6512428 = r6512426 * r6512427;
        double r6512429 = r6512425 + r6512428;
        double r6512430 = 5.25;
        double r6512431 = r6512427 * r6512419;
        double r6512432 = r6512430 * r6512431;
        double r6512433 = r6512429 + r6512432;
        double r6512434 = -1.05;
        double r6512435 = r6512431 * r6512419;
        double r6512436 = r6512434 * r6512435;
        double r6512437 = r6512433 + r6512436;
        double r6512438 = 0.116667;
        double r6512439 = r6512435 * r6512419;
        double r6512440 = r6512438 * r6512439;
        double r6512441 = r6512437 + r6512440;
        double r6512442 = -0.007143;
        double r6512443 = r6512439 * r6512419;
        double r6512444 = r6512442 * r6512443;
        double r6512445 = r6512441 + r6512444;
        double r6512446 = 0.000223;
        double r6512447 = r6512443 * r6512419;
        double r6512448 = r6512446 * r6512447;
        double r6512449 = r6512445 + r6512448;
        double r6512450 = -3e-06;
        double r6512451 = r6512447 * r6512419;
        double r6512452 = r6512450 * r6512451;
        double r6512453 = r6512449 + r6512452;
        return r6512453;
}


double f_of(float x) {
        float r6512454 = x;
        float r6512455 = r6512454 * r6512454;
        float r6512456 = 0.116667;
        float r6512457 = r6512455 * r6512456;
        float r6512458 = r6512455 * r6512455;
        float r6512459 = r6512457 * r6512458;
        float r6512460 = -1.05;
        float r6512461 = r6512460 * r6512454;
        float r6512462 = 5.25;
        float r6512463 = r6512461 + r6512462;
        float r6512464 = r6512458 * r6512463;
        float r6512465 = r6512459 + r6512464;
        float r6512466 = -9.0;
        float r6512467 = r6512454 * r6512466;
        float r6512468 = 1.0;
        float r6512469 = r6512467 + r6512468;
        float r6512470 = -14.0;
        float r6512471 = r6512470 * r6512454;
        float r6512472 = 18.0;
        float r6512473 = r6512471 + r6512472;
        float r6512474 = r6512455 * r6512473;
        float r6512475 = r6512469 + r6512474;
        float r6512476 = r6512465 + r6512475;
        float r6512477 = -0.007143;
        float r6512478 = r6512477 * r6512454;
        float r6512479 = r6512478 * r6512455;
        float r6512480 = r6512479 * r6512458;
        float r6512481 = r6512458 * r6512458;
        float r6512482 = -3e-06;
        float r6512483 = r6512482 * r6512454;
        float r6512484 = 0.000223;
        float r6512485 = r6512483 + r6512484;
        float r6512486 = r6512481 * r6512485;
        float r6512487 = r6512480 + r6512486;
        float r6512488 = r6512476 + r6512487;
        return r6512488;
}

double f_od(double x) {
        double r6512489 = x;
        double r6512490 = r6512489 * r6512489;
        double r6512491 = 0.116667;
        double r6512492 = r6512490 * r6512491;
        double r6512493 = r6512490 * r6512490;
        double r6512494 = r6512492 * r6512493;
        double r6512495 = -1.05;
        double r6512496 = r6512495 * r6512489;
        double r6512497 = 5.25;
        double r6512498 = r6512496 + r6512497;
        double r6512499 = r6512493 * r6512498;
        double r6512500 = r6512494 + r6512499;
        double r6512501 = -9.0;
        double r6512502 = r6512489 * r6512501;
        double r6512503 = 1.0;
        double r6512504 = r6512502 + r6512503;
        double r6512505 = -14.0;
        double r6512506 = r6512505 * r6512489;
        double r6512507 = 18.0;
        double r6512508 = r6512506 + r6512507;
        double r6512509 = r6512490 * r6512508;
        double r6512510 = r6512504 + r6512509;
        double r6512511 = r6512500 + r6512510;
        double r6512512 = -0.007143;
        double r6512513 = r6512512 * r6512489;
        double r6512514 = r6512513 * r6512490;
        double r6512515 = r6512514 * r6512493;
        double r6512516 = r6512493 * r6512493;
        double r6512517 = -3e-06;
        double r6512518 = r6512517 * r6512489;
        double r6512519 = 0.000223;
        double r6512520 = r6512518 + r6512519;
        double r6512521 = r6512516 * r6512520;
        double r6512522 = r6512515 + r6512521;
        double r6512523 = r6512511 + r6512522;
        return r6512523;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6512524, r6512525, r6512526, r6512527, r6512528, r6512529, r6512530, r6512531, r6512532, r6512533, r6512534, r6512535, r6512536, r6512537, r6512538, r6512539, r6512540, r6512541, r6512542, r6512543, r6512544, r6512545, r6512546, r6512547, r6512548, r6512549, r6512550, r6512551, r6512552, r6512553, r6512554, r6512555, r6512556, r6512557, r6512558, r6512559, r6512560;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6512524, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6512525, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r6512526);
        mpfr_init(r6512527);
        mpfr_init(r6512528);
        mpfr_init_set_str(r6512529, "18.0", 10, MPFR_RNDN);
        mpfr_init(r6512530);
        mpfr_init(r6512531);
        mpfr_init(r6512532);
        mpfr_init_set_str(r6512533, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r6512534);
        mpfr_init(r6512535);
        mpfr_init(r6512536);
        mpfr_init_set_str(r6512537, "5.25", 10, MPFR_RNDN);
        mpfr_init(r6512538);
        mpfr_init(r6512539);
        mpfr_init(r6512540);
        mpfr_init_set_str(r6512541, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r6512542);
        mpfr_init(r6512543);
        mpfr_init(r6512544);
        mpfr_init_set_str(r6512545, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r6512546);
        mpfr_init(r6512547);
        mpfr_init(r6512548);
        mpfr_init_set_str(r6512549, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r6512550);
        mpfr_init(r6512551);
        mpfr_init(r6512552);
        mpfr_init_set_str(r6512553, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r6512554);
        mpfr_init(r6512555);
        mpfr_init(r6512556);
        mpfr_init_set_str(r6512557, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r6512558);
        mpfr_init(r6512559);
        mpfr_init(r6512560);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6512526, x, MPFR_RNDN);
        mpfr_mul(r6512527, r6512525, r6512526, MPFR_RNDN);
        mpfr_add(r6512528, r6512524, r6512527, MPFR_RNDN);
        ;
        mpfr_mul(r6512530, r6512526, r6512526, MPFR_RNDN);
        mpfr_mul(r6512531, r6512529, r6512530, MPFR_RNDN);
        mpfr_add(r6512532, r6512528, r6512531, MPFR_RNDN);
        ;
        mpfr_mul(r6512534, r6512530, r6512526, MPFR_RNDN);
        mpfr_mul(r6512535, r6512533, r6512534, MPFR_RNDN);
        mpfr_add(r6512536, r6512532, r6512535, MPFR_RNDN);
        ;
        mpfr_mul(r6512538, r6512534, r6512526, MPFR_RNDN);
        mpfr_mul(r6512539, r6512537, r6512538, MPFR_RNDN);
        mpfr_add(r6512540, r6512536, r6512539, MPFR_RNDN);
        ;
        mpfr_mul(r6512542, r6512538, r6512526, MPFR_RNDN);
        mpfr_mul(r6512543, r6512541, r6512542, MPFR_RNDN);
        mpfr_add(r6512544, r6512540, r6512543, MPFR_RNDN);
        ;
        mpfr_mul(r6512546, r6512542, r6512526, MPFR_RNDN);
        mpfr_mul(r6512547, r6512545, r6512546, MPFR_RNDN);
        mpfr_add(r6512548, r6512544, r6512547, MPFR_RNDN);
        ;
        mpfr_mul(r6512550, r6512546, r6512526, MPFR_RNDN);
        mpfr_mul(r6512551, r6512549, r6512550, MPFR_RNDN);
        mpfr_add(r6512552, r6512548, r6512551, MPFR_RNDN);
        ;
        mpfr_mul(r6512554, r6512550, r6512526, MPFR_RNDN);
        mpfr_mul(r6512555, r6512553, r6512554, MPFR_RNDN);
        mpfr_add(r6512556, r6512552, r6512555, MPFR_RNDN);
        ;
        mpfr_mul(r6512558, r6512554, r6512526, MPFR_RNDN);
        mpfr_mul(r6512559, r6512557, r6512558, MPFR_RNDN);
        mpfr_add(r6512560, r6512556, r6512559, MPFR_RNDN);
        return mpfr_get_d(r6512560, MPFR_RNDN);
}

static mpfr_t r6512561, r6512562, r6512563, r6512564, r6512565, r6512566, r6512567, r6512568, r6512569, r6512570, r6512571, r6512572, r6512573, r6512574, r6512575, r6512576, r6512577, r6512578, r6512579, r6512580, r6512581, r6512582, r6512583, r6512584, r6512585, r6512586, r6512587, r6512588, r6512589, r6512590, r6512591, r6512592, r6512593, r6512594, r6512595;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6512561);
        mpfr_init(r6512562);
        mpfr_init_set_str(r6512563, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r6512564);
        mpfr_init(r6512565);
        mpfr_init(r6512566);
        mpfr_init_set_str(r6512567, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r6512568);
        mpfr_init_set_str(r6512569, "5.25", 10, MPFR_RNDN);
        mpfr_init(r6512570);
        mpfr_init(r6512571);
        mpfr_init(r6512572);
        mpfr_init_set_str(r6512573, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r6512574);
        mpfr_init_set_str(r6512575, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6512576);
        mpfr_init_set_str(r6512577, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r6512578);
        mpfr_init_set_str(r6512579, "18.0", 10, MPFR_RNDN);
        mpfr_init(r6512580);
        mpfr_init(r6512581);
        mpfr_init(r6512582);
        mpfr_init(r6512583);
        mpfr_init_set_str(r6512584, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r6512585);
        mpfr_init(r6512586);
        mpfr_init(r6512587);
        mpfr_init(r6512588);
        mpfr_init_set_str(r6512589, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r6512590);
        mpfr_init_set_str(r6512591, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r6512592);
        mpfr_init(r6512593);
        mpfr_init(r6512594);
        mpfr_init(r6512595);
}

double f_fm(double x) {
        mpfr_set_d(r6512561, x, MPFR_RNDN);
        mpfr_mul(r6512562, r6512561, r6512561, MPFR_RNDN);
        ;
        mpfr_mul(r6512564, r6512562, r6512563, MPFR_RNDN);
        mpfr_mul(r6512565, r6512562, r6512562, MPFR_RNDN);
        mpfr_mul(r6512566, r6512564, r6512565, MPFR_RNDN);
        ;
        mpfr_mul(r6512568, r6512567, r6512561, MPFR_RNDN);
        ;
        mpfr_add(r6512570, r6512568, r6512569, MPFR_RNDN);
        mpfr_mul(r6512571, r6512565, r6512570, MPFR_RNDN);
        mpfr_add(r6512572, r6512566, r6512571, MPFR_RNDN);
        ;
        mpfr_mul(r6512574, r6512561, r6512573, MPFR_RNDN);
        ;
        mpfr_add(r6512576, r6512574, r6512575, MPFR_RNDN);
        ;
        mpfr_mul(r6512578, r6512577, r6512561, MPFR_RNDN);
        ;
        mpfr_add(r6512580, r6512578, r6512579, MPFR_RNDN);
        mpfr_mul(r6512581, r6512562, r6512580, MPFR_RNDN);
        mpfr_add(r6512582, r6512576, r6512581, MPFR_RNDN);
        mpfr_add(r6512583, r6512572, r6512582, MPFR_RNDN);
        ;
        mpfr_mul(r6512585, r6512584, r6512561, MPFR_RNDN);
        mpfr_mul(r6512586, r6512585, r6512562, MPFR_RNDN);
        mpfr_mul(r6512587, r6512586, r6512565, MPFR_RNDN);
        mpfr_mul(r6512588, r6512565, r6512565, MPFR_RNDN);
        ;
        mpfr_mul(r6512590, r6512589, r6512561, MPFR_RNDN);
        ;
        mpfr_add(r6512592, r6512590, r6512591, MPFR_RNDN);
        mpfr_mul(r6512593, r6512588, r6512592, MPFR_RNDN);
        mpfr_add(r6512594, r6512587, r6512593, MPFR_RNDN);
        mpfr_add(r6512595, r6512583, r6512594, MPFR_RNDN);
        return mpfr_get_d(r6512595, MPFR_RNDN);
}

static mpfr_t r6512596, r6512597, r6512598, r6512599, r6512600, r6512601, r6512602, r6512603, r6512604, r6512605, r6512606, r6512607, r6512608, r6512609, r6512610, r6512611, r6512612, r6512613, r6512614, r6512615, r6512616, r6512617, r6512618, r6512619, r6512620, r6512621, r6512622, r6512623, r6512624, r6512625, r6512626, r6512627, r6512628, r6512629, r6512630;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6512596);
        mpfr_init(r6512597);
        mpfr_init_set_str(r6512598, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r6512599);
        mpfr_init(r6512600);
        mpfr_init(r6512601);
        mpfr_init_set_str(r6512602, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r6512603);
        mpfr_init_set_str(r6512604, "5.25", 10, MPFR_RNDN);
        mpfr_init(r6512605);
        mpfr_init(r6512606);
        mpfr_init(r6512607);
        mpfr_init_set_str(r6512608, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r6512609);
        mpfr_init_set_str(r6512610, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6512611);
        mpfr_init_set_str(r6512612, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r6512613);
        mpfr_init_set_str(r6512614, "18.0", 10, MPFR_RNDN);
        mpfr_init(r6512615);
        mpfr_init(r6512616);
        mpfr_init(r6512617);
        mpfr_init(r6512618);
        mpfr_init_set_str(r6512619, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r6512620);
        mpfr_init(r6512621);
        mpfr_init(r6512622);
        mpfr_init(r6512623);
        mpfr_init_set_str(r6512624, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r6512625);
        mpfr_init_set_str(r6512626, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r6512627);
        mpfr_init(r6512628);
        mpfr_init(r6512629);
        mpfr_init(r6512630);
}

double f_dm(double x) {
        mpfr_set_d(r6512596, x, MPFR_RNDN);
        mpfr_mul(r6512597, r6512596, r6512596, MPFR_RNDN);
        ;
        mpfr_mul(r6512599, r6512597, r6512598, MPFR_RNDN);
        mpfr_mul(r6512600, r6512597, r6512597, MPFR_RNDN);
        mpfr_mul(r6512601, r6512599, r6512600, MPFR_RNDN);
        ;
        mpfr_mul(r6512603, r6512602, r6512596, MPFR_RNDN);
        ;
        mpfr_add(r6512605, r6512603, r6512604, MPFR_RNDN);
        mpfr_mul(r6512606, r6512600, r6512605, MPFR_RNDN);
        mpfr_add(r6512607, r6512601, r6512606, MPFR_RNDN);
        ;
        mpfr_mul(r6512609, r6512596, r6512608, MPFR_RNDN);
        ;
        mpfr_add(r6512611, r6512609, r6512610, MPFR_RNDN);
        ;
        mpfr_mul(r6512613, r6512612, r6512596, MPFR_RNDN);
        ;
        mpfr_add(r6512615, r6512613, r6512614, MPFR_RNDN);
        mpfr_mul(r6512616, r6512597, r6512615, MPFR_RNDN);
        mpfr_add(r6512617, r6512611, r6512616, MPFR_RNDN);
        mpfr_add(r6512618, r6512607, r6512617, MPFR_RNDN);
        ;
        mpfr_mul(r6512620, r6512619, r6512596, MPFR_RNDN);
        mpfr_mul(r6512621, r6512620, r6512597, MPFR_RNDN);
        mpfr_mul(r6512622, r6512621, r6512600, MPFR_RNDN);
        mpfr_mul(r6512623, r6512600, r6512600, MPFR_RNDN);
        ;
        mpfr_mul(r6512625, r6512624, r6512596, MPFR_RNDN);
        ;
        mpfr_add(r6512627, r6512625, r6512626, MPFR_RNDN);
        mpfr_mul(r6512628, r6512623, r6512627, MPFR_RNDN);
        mpfr_add(r6512629, r6512622, r6512628, MPFR_RNDN);
        mpfr_add(r6512630, r6512618, r6512629, MPFR_RNDN);
        return mpfr_get_d(r6512630, MPFR_RNDN);
}

