#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r4210451 = 30240.0;
        float r4210452 = x;
        float r4210453 = r4210451 * r4210452;
        float r4210454 = -80640.0;
        float r4210455 = r4210452 * r4210452;
        float r4210456 = r4210455 * r4210452;
        float r4210457 = r4210454 * r4210456;
        float r4210458 = r4210453 + r4210457;
        float r4210459 = 48384.0;
        float r4210460 = r4210456 * r4210452;
        float r4210461 = r4210460 * r4210452;
        float r4210462 = r4210459 * r4210461;
        float r4210463 = r4210458 + r4210462;
        float r4210464 = -9216.0;
        float r4210465 = r4210461 * r4210452;
        float r4210466 = r4210465 * r4210452;
        float r4210467 = r4210464 * r4210466;
        float r4210468 = r4210463 + r4210467;
        float r4210469 = 512.0;
        float r4210470 = r4210466 * r4210452;
        float r4210471 = r4210470 * r4210452;
        float r4210472 = r4210469 * r4210471;
        float r4210473 = r4210468 + r4210472;
        return r4210473;
}

double f_id(double x) {
        double r4210474 = 30240.0;
        double r4210475 = x;
        double r4210476 = r4210474 * r4210475;
        double r4210477 = -80640.0;
        double r4210478 = r4210475 * r4210475;
        double r4210479 = r4210478 * r4210475;
        double r4210480 = r4210477 * r4210479;
        double r4210481 = r4210476 + r4210480;
        double r4210482 = 48384.0;
        double r4210483 = r4210479 * r4210475;
        double r4210484 = r4210483 * r4210475;
        double r4210485 = r4210482 * r4210484;
        double r4210486 = r4210481 + r4210485;
        double r4210487 = -9216.0;
        double r4210488 = r4210484 * r4210475;
        double r4210489 = r4210488 * r4210475;
        double r4210490 = r4210487 * r4210489;
        double r4210491 = r4210486 + r4210490;
        double r4210492 = 512.0;
        double r4210493 = r4210489 * r4210475;
        double r4210494 = r4210493 * r4210475;
        double r4210495 = r4210492 * r4210494;
        double r4210496 = r4210491 + r4210495;
        return r4210496;
}


double f_of(float x) {
        float r4210497 = 30240.0;
        float r4210498 = x;
        float r4210499 = r4210497 * r4210498;
        float r4210500 = -80640.0;
        float r4210501 = r4210498 * r4210498;
        float r4210502 = r4210501 * r4210498;
        float r4210503 = r4210500 * r4210502;
        float r4210504 = r4210499 + r4210503;
        float r4210505 = 48384.0;
        float r4210506 = r4210502 * r4210498;
        float r4210507 = r4210506 * r4210498;
        float r4210508 = r4210505 * r4210507;
        float r4210509 = r4210504 + r4210508;
        float r4210510 = -9216.0;
        float r4210511 = r4210507 * r4210498;
        float r4210512 = r4210511 * r4210498;
        float r4210513 = r4210510 * r4210512;
        float r4210514 = r4210509 + r4210513;
        float r4210515 = 512.0;
        float r4210516 = cbrt(r4210506);
        float r4210517 = r4210516 * r4210516;
        float r4210518 = r4210517 * r4210516;
        float r4210519 = r4210518 * r4210498;
        float r4210520 = r4210519 * r4210498;
        float r4210521 = r4210520 * r4210498;
        float r4210522 = r4210521 * r4210498;
        float r4210523 = r4210522 * r4210498;
        float r4210524 = r4210515 * r4210523;
        float r4210525 = r4210514 + r4210524;
        return r4210525;
}

double f_od(double x) {
        double r4210526 = 30240.0;
        double r4210527 = x;
        double r4210528 = r4210526 * r4210527;
        double r4210529 = -80640.0;
        double r4210530 = r4210527 * r4210527;
        double r4210531 = r4210530 * r4210527;
        double r4210532 = r4210529 * r4210531;
        double r4210533 = r4210528 + r4210532;
        double r4210534 = 48384.0;
        double r4210535 = r4210531 * r4210527;
        double r4210536 = r4210535 * r4210527;
        double r4210537 = r4210534 * r4210536;
        double r4210538 = r4210533 + r4210537;
        double r4210539 = -9216.0;
        double r4210540 = r4210536 * r4210527;
        double r4210541 = r4210540 * r4210527;
        double r4210542 = r4210539 * r4210541;
        double r4210543 = r4210538 + r4210542;
        double r4210544 = 512.0;
        double r4210545 = cbrt(r4210535);
        double r4210546 = r4210545 * r4210545;
        double r4210547 = r4210546 * r4210545;
        double r4210548 = r4210547 * r4210527;
        double r4210549 = r4210548 * r4210527;
        double r4210550 = r4210549 * r4210527;
        double r4210551 = r4210550 * r4210527;
        double r4210552 = r4210551 * r4210527;
        double r4210553 = r4210544 * r4210552;
        double r4210554 = r4210543 + r4210553;
        return r4210554;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4210555, r4210556, r4210557, r4210558, r4210559, r4210560, r4210561, r4210562, r4210563, r4210564, r4210565, r4210566, r4210567, r4210568, r4210569, r4210570, r4210571, r4210572, r4210573, r4210574, r4210575, r4210576, r4210577;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4210555, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r4210556);
        mpfr_init(r4210557);
        mpfr_init_set_str(r4210558, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r4210559);
        mpfr_init(r4210560);
        mpfr_init(r4210561);
        mpfr_init(r4210562);
        mpfr_init_set_str(r4210563, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r4210564);
        mpfr_init(r4210565);
        mpfr_init(r4210566);
        mpfr_init(r4210567);
        mpfr_init_set_str(r4210568, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r4210569);
        mpfr_init(r4210570);
        mpfr_init(r4210571);
        mpfr_init(r4210572);
        mpfr_init_set_str(r4210573, "512.0", 10, MPFR_RNDN);
        mpfr_init(r4210574);
        mpfr_init(r4210575);
        mpfr_init(r4210576);
        mpfr_init(r4210577);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4210556, x, MPFR_RNDN);
        mpfr_mul(r4210557, r4210555, r4210556, MPFR_RNDN);
        ;
        mpfr_mul(r4210559, r4210556, r4210556, MPFR_RNDN);
        mpfr_mul(r4210560, r4210559, r4210556, MPFR_RNDN);
        mpfr_mul(r4210561, r4210558, r4210560, MPFR_RNDN);
        mpfr_add(r4210562, r4210557, r4210561, MPFR_RNDN);
        ;
        mpfr_mul(r4210564, r4210560, r4210556, MPFR_RNDN);
        mpfr_mul(r4210565, r4210564, r4210556, MPFR_RNDN);
        mpfr_mul(r4210566, r4210563, r4210565, MPFR_RNDN);
        mpfr_add(r4210567, r4210562, r4210566, MPFR_RNDN);
        ;
        mpfr_mul(r4210569, r4210565, r4210556, MPFR_RNDN);
        mpfr_mul(r4210570, r4210569, r4210556, MPFR_RNDN);
        mpfr_mul(r4210571, r4210568, r4210570, MPFR_RNDN);
        mpfr_add(r4210572, r4210567, r4210571, MPFR_RNDN);
        ;
        mpfr_mul(r4210574, r4210570, r4210556, MPFR_RNDN);
        mpfr_mul(r4210575, r4210574, r4210556, MPFR_RNDN);
        mpfr_mul(r4210576, r4210573, r4210575, MPFR_RNDN);
        mpfr_add(r4210577, r4210572, r4210576, MPFR_RNDN);
        return mpfr_get_d(r4210577, MPFR_RNDN);
}

static mpfr_t r4210578, r4210579, r4210580, r4210581, r4210582, r4210583, r4210584, r4210585, r4210586, r4210587, r4210588, r4210589, r4210590, r4210591, r4210592, r4210593, r4210594, r4210595, r4210596, r4210597, r4210598, r4210599, r4210600, r4210601, r4210602, r4210603, r4210604, r4210605, r4210606;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4210578, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r4210579);
        mpfr_init(r4210580);
        mpfr_init_set_str(r4210581, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r4210582);
        mpfr_init(r4210583);
        mpfr_init(r4210584);
        mpfr_init(r4210585);
        mpfr_init_set_str(r4210586, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r4210587);
        mpfr_init(r4210588);
        mpfr_init(r4210589);
        mpfr_init(r4210590);
        mpfr_init_set_str(r4210591, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r4210592);
        mpfr_init(r4210593);
        mpfr_init(r4210594);
        mpfr_init(r4210595);
        mpfr_init_set_str(r4210596, "512.0", 10, MPFR_RNDN);
        mpfr_init(r4210597);
        mpfr_init(r4210598);
        mpfr_init(r4210599);
        mpfr_init(r4210600);
        mpfr_init(r4210601);
        mpfr_init(r4210602);
        mpfr_init(r4210603);
        mpfr_init(r4210604);
        mpfr_init(r4210605);
        mpfr_init(r4210606);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4210579, x, MPFR_RNDN);
        mpfr_mul(r4210580, r4210578, r4210579, MPFR_RNDN);
        ;
        mpfr_mul(r4210582, r4210579, r4210579, MPFR_RNDN);
        mpfr_mul(r4210583, r4210582, r4210579, MPFR_RNDN);
        mpfr_mul(r4210584, r4210581, r4210583, MPFR_RNDN);
        mpfr_add(r4210585, r4210580, r4210584, MPFR_RNDN);
        ;
        mpfr_mul(r4210587, r4210583, r4210579, MPFR_RNDN);
        mpfr_mul(r4210588, r4210587, r4210579, MPFR_RNDN);
        mpfr_mul(r4210589, r4210586, r4210588, MPFR_RNDN);
        mpfr_add(r4210590, r4210585, r4210589, MPFR_RNDN);
        ;
        mpfr_mul(r4210592, r4210588, r4210579, MPFR_RNDN);
        mpfr_mul(r4210593, r4210592, r4210579, MPFR_RNDN);
        mpfr_mul(r4210594, r4210591, r4210593, MPFR_RNDN);
        mpfr_add(r4210595, r4210590, r4210594, MPFR_RNDN);
        ;
        mpfr_cbrt(r4210597, r4210587, MPFR_RNDN);
        mpfr_mul(r4210598, r4210597, r4210597, MPFR_RNDN);
        mpfr_mul(r4210599, r4210598, r4210597, MPFR_RNDN);
        mpfr_mul(r4210600, r4210599, r4210579, MPFR_RNDN);
        mpfr_mul(r4210601, r4210600, r4210579, MPFR_RNDN);
        mpfr_mul(r4210602, r4210601, r4210579, MPFR_RNDN);
        mpfr_mul(r4210603, r4210602, r4210579, MPFR_RNDN);
        mpfr_mul(r4210604, r4210603, r4210579, MPFR_RNDN);
        mpfr_mul(r4210605, r4210596, r4210604, MPFR_RNDN);
        mpfr_add(r4210606, r4210595, r4210605, MPFR_RNDN);
        return mpfr_get_d(r4210606, MPFR_RNDN);
}

static mpfr_t r4210607, r4210608, r4210609, r4210610, r4210611, r4210612, r4210613, r4210614, r4210615, r4210616, r4210617, r4210618, r4210619, r4210620, r4210621, r4210622, r4210623, r4210624, r4210625, r4210626, r4210627, r4210628, r4210629, r4210630, r4210631, r4210632, r4210633, r4210634, r4210635;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4210607, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r4210608);
        mpfr_init(r4210609);
        mpfr_init_set_str(r4210610, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r4210611);
        mpfr_init(r4210612);
        mpfr_init(r4210613);
        mpfr_init(r4210614);
        mpfr_init_set_str(r4210615, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r4210616);
        mpfr_init(r4210617);
        mpfr_init(r4210618);
        mpfr_init(r4210619);
        mpfr_init_set_str(r4210620, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r4210621);
        mpfr_init(r4210622);
        mpfr_init(r4210623);
        mpfr_init(r4210624);
        mpfr_init_set_str(r4210625, "512.0", 10, MPFR_RNDN);
        mpfr_init(r4210626);
        mpfr_init(r4210627);
        mpfr_init(r4210628);
        mpfr_init(r4210629);
        mpfr_init(r4210630);
        mpfr_init(r4210631);
        mpfr_init(r4210632);
        mpfr_init(r4210633);
        mpfr_init(r4210634);
        mpfr_init(r4210635);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4210608, x, MPFR_RNDN);
        mpfr_mul(r4210609, r4210607, r4210608, MPFR_RNDN);
        ;
        mpfr_mul(r4210611, r4210608, r4210608, MPFR_RNDN);
        mpfr_mul(r4210612, r4210611, r4210608, MPFR_RNDN);
        mpfr_mul(r4210613, r4210610, r4210612, MPFR_RNDN);
        mpfr_add(r4210614, r4210609, r4210613, MPFR_RNDN);
        ;
        mpfr_mul(r4210616, r4210612, r4210608, MPFR_RNDN);
        mpfr_mul(r4210617, r4210616, r4210608, MPFR_RNDN);
        mpfr_mul(r4210618, r4210615, r4210617, MPFR_RNDN);
        mpfr_add(r4210619, r4210614, r4210618, MPFR_RNDN);
        ;
        mpfr_mul(r4210621, r4210617, r4210608, MPFR_RNDN);
        mpfr_mul(r4210622, r4210621, r4210608, MPFR_RNDN);
        mpfr_mul(r4210623, r4210620, r4210622, MPFR_RNDN);
        mpfr_add(r4210624, r4210619, r4210623, MPFR_RNDN);
        ;
        mpfr_cbrt(r4210626, r4210616, MPFR_RNDN);
        mpfr_mul(r4210627, r4210626, r4210626, MPFR_RNDN);
        mpfr_mul(r4210628, r4210627, r4210626, MPFR_RNDN);
        mpfr_mul(r4210629, r4210628, r4210608, MPFR_RNDN);
        mpfr_mul(r4210630, r4210629, r4210608, MPFR_RNDN);
        mpfr_mul(r4210631, r4210630, r4210608, MPFR_RNDN);
        mpfr_mul(r4210632, r4210631, r4210608, MPFR_RNDN);
        mpfr_mul(r4210633, r4210632, r4210608, MPFR_RNDN);
        mpfr_mul(r4210634, r4210625, r4210633, MPFR_RNDN);
        mpfr_add(r4210635, r4210624, r4210634, MPFR_RNDN);
        return mpfr_get_d(r4210635, MPFR_RNDN);
}

