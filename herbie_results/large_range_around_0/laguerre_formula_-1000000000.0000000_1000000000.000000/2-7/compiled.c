#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r13457465 = 1.0;
        float r13457466 = -7.0;
        float r13457467 = x;
        float r13457468 = r13457466 * r13457467;
        float r13457469 = r13457465 + r13457468;
        float r13457470 = 10.5;
        float r13457471 = r13457467 * r13457467;
        float r13457472 = r13457470 * r13457471;
        float r13457473 = r13457469 + r13457472;
        float r13457474 = -5.833333;
        float r13457475 = r13457471 * r13457467;
        float r13457476 = r13457474 * r13457475;
        float r13457477 = r13457473 + r13457476;
        float r13457478 = 1.458333;
        float r13457479 = r13457475 * r13457467;
        float r13457480 = r13457478 * r13457479;
        float r13457481 = r13457477 + r13457480;
        float r13457482 = -0.175;
        float r13457483 = r13457479 * r13457467;
        float r13457484 = r13457482 * r13457483;
        float r13457485 = r13457481 + r13457484;
        float r13457486 = 0.009722;
        float r13457487 = r13457483 * r13457467;
        float r13457488 = r13457486 * r13457487;
        float r13457489 = r13457485 + r13457488;
        float r13457490 = -0.000198;
        float r13457491 = r13457487 * r13457467;
        float r13457492 = r13457490 * r13457491;
        float r13457493 = r13457489 + r13457492;
        return r13457493;
}

double f_id(double x) {
        double r13457494 = 1.0;
        double r13457495 = -7.0;
        double r13457496 = x;
        double r13457497 = r13457495 * r13457496;
        double r13457498 = r13457494 + r13457497;
        double r13457499 = 10.5;
        double r13457500 = r13457496 * r13457496;
        double r13457501 = r13457499 * r13457500;
        double r13457502 = r13457498 + r13457501;
        double r13457503 = -5.833333;
        double r13457504 = r13457500 * r13457496;
        double r13457505 = r13457503 * r13457504;
        double r13457506 = r13457502 + r13457505;
        double r13457507 = 1.458333;
        double r13457508 = r13457504 * r13457496;
        double r13457509 = r13457507 * r13457508;
        double r13457510 = r13457506 + r13457509;
        double r13457511 = -0.175;
        double r13457512 = r13457508 * r13457496;
        double r13457513 = r13457511 * r13457512;
        double r13457514 = r13457510 + r13457513;
        double r13457515 = 0.009722;
        double r13457516 = r13457512 * r13457496;
        double r13457517 = r13457515 * r13457516;
        double r13457518 = r13457514 + r13457517;
        double r13457519 = -0.000198;
        double r13457520 = r13457516 * r13457496;
        double r13457521 = r13457519 * r13457520;
        double r13457522 = r13457518 + r13457521;
        return r13457522;
}


double f_of(float x) {
        float r13457523 = 1.458333;
        float r13457524 = -0.175;
        float r13457525 = x;
        float r13457526 = r13457524 * r13457525;
        float r13457527 = r13457523 + r13457526;
        float r13457528 = r13457525 * r13457525;
        float r13457529 = r13457528 * r13457528;
        float r13457530 = r13457527 * r13457529;
        float r13457531 = -7.0;
        float r13457532 = r13457531 * r13457525;
        float r13457533 = 1.0;
        float r13457534 = r13457532 + r13457533;
        float r13457535 = r13457530 + r13457534;
        float r13457536 = 3;
        float r13457537 = pow(r13457525, r13457536);
        float r13457538 = r13457537 * r13457537;
        float r13457539 = 0.009722;
        float r13457540 = -0.000198;
        float r13457541 = r13457525 * r13457540;
        float r13457542 = r13457539 + r13457541;
        float r13457543 = r13457538 * r13457542;
        float r13457544 = 10.5;
        float r13457545 = 5.833333;
        float r13457546 = r13457545 * r13457525;
        float r13457547 = r13457544 - r13457546;
        float r13457548 = r13457528 * r13457547;
        float r13457549 = r13457543 + r13457548;
        float r13457550 = r13457535 + r13457549;
        return r13457550;
}

double f_od(double x) {
        double r13457551 = 1.458333;
        double r13457552 = -0.175;
        double r13457553 = x;
        double r13457554 = r13457552 * r13457553;
        double r13457555 = r13457551 + r13457554;
        double r13457556 = r13457553 * r13457553;
        double r13457557 = r13457556 * r13457556;
        double r13457558 = r13457555 * r13457557;
        double r13457559 = -7.0;
        double r13457560 = r13457559 * r13457553;
        double r13457561 = 1.0;
        double r13457562 = r13457560 + r13457561;
        double r13457563 = r13457558 + r13457562;
        double r13457564 = 3;
        double r13457565 = pow(r13457553, r13457564);
        double r13457566 = r13457565 * r13457565;
        double r13457567 = 0.009722;
        double r13457568 = -0.000198;
        double r13457569 = r13457553 * r13457568;
        double r13457570 = r13457567 + r13457569;
        double r13457571 = r13457566 * r13457570;
        double r13457572 = 10.5;
        double r13457573 = 5.833333;
        double r13457574 = r13457573 * r13457553;
        double r13457575 = r13457572 - r13457574;
        double r13457576 = r13457556 * r13457575;
        double r13457577 = r13457571 + r13457576;
        double r13457578 = r13457563 + r13457577;
        return r13457578;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13457579, r13457580, r13457581, r13457582, r13457583, r13457584, r13457585, r13457586, r13457587, r13457588, r13457589, r13457590, r13457591, r13457592, r13457593, r13457594, r13457595, r13457596, r13457597, r13457598, r13457599, r13457600, r13457601, r13457602, r13457603, r13457604, r13457605, r13457606, r13457607;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13457579, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457580, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r13457581);
        mpfr_init(r13457582);
        mpfr_init(r13457583);
        mpfr_init_set_str(r13457584, "10.5", 10, MPFR_RNDN);
        mpfr_init(r13457585);
        mpfr_init(r13457586);
        mpfr_init(r13457587);
        mpfr_init_set_str(r13457588, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r13457589);
        mpfr_init(r13457590);
        mpfr_init(r13457591);
        mpfr_init_set_str(r13457592, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r13457593);
        mpfr_init(r13457594);
        mpfr_init(r13457595);
        mpfr_init_set_str(r13457596, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r13457597);
        mpfr_init(r13457598);
        mpfr_init(r13457599);
        mpfr_init_set_str(r13457600, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r13457601);
        mpfr_init(r13457602);
        mpfr_init(r13457603);
        mpfr_init_set_str(r13457604, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r13457605);
        mpfr_init(r13457606);
        mpfr_init(r13457607);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13457581, x, MPFR_RNDN);
        mpfr_mul(r13457582, r13457580, r13457581, MPFR_RNDN);
        mpfr_add(r13457583, r13457579, r13457582, MPFR_RNDN);
        ;
        mpfr_mul(r13457585, r13457581, r13457581, MPFR_RNDN);
        mpfr_mul(r13457586, r13457584, r13457585, MPFR_RNDN);
        mpfr_add(r13457587, r13457583, r13457586, MPFR_RNDN);
        ;
        mpfr_mul(r13457589, r13457585, r13457581, MPFR_RNDN);
        mpfr_mul(r13457590, r13457588, r13457589, MPFR_RNDN);
        mpfr_add(r13457591, r13457587, r13457590, MPFR_RNDN);
        ;
        mpfr_mul(r13457593, r13457589, r13457581, MPFR_RNDN);
        mpfr_mul(r13457594, r13457592, r13457593, MPFR_RNDN);
        mpfr_add(r13457595, r13457591, r13457594, MPFR_RNDN);
        ;
        mpfr_mul(r13457597, r13457593, r13457581, MPFR_RNDN);
        mpfr_mul(r13457598, r13457596, r13457597, MPFR_RNDN);
        mpfr_add(r13457599, r13457595, r13457598, MPFR_RNDN);
        ;
        mpfr_mul(r13457601, r13457597, r13457581, MPFR_RNDN);
        mpfr_mul(r13457602, r13457600, r13457601, MPFR_RNDN);
        mpfr_add(r13457603, r13457599, r13457602, MPFR_RNDN);
        ;
        mpfr_mul(r13457605, r13457601, r13457581, MPFR_RNDN);
        mpfr_mul(r13457606, r13457604, r13457605, MPFR_RNDN);
        mpfr_add(r13457607, r13457603, r13457606, MPFR_RNDN);
        return mpfr_get_d(r13457607, MPFR_RNDN);
}

static mpfr_t r13457608, r13457609, r13457610, r13457611, r13457612, r13457613, r13457614, r13457615, r13457616, r13457617, r13457618, r13457619, r13457620, r13457621, r13457622, r13457623, r13457624, r13457625, r13457626, r13457627, r13457628, r13457629, r13457630, r13457631, r13457632, r13457633, r13457634, r13457635;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13457608, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457609, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r13457610);
        mpfr_init(r13457611);
        mpfr_init(r13457612);
        mpfr_init(r13457613);
        mpfr_init(r13457614);
        mpfr_init(r13457615);
        mpfr_init_set_str(r13457616, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r13457617);
        mpfr_init_set_str(r13457618, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457619);
        mpfr_init(r13457620);
        mpfr_init_set_str(r13457621, "3", 10, MPFR_RNDN);
        mpfr_init(r13457622);
        mpfr_init(r13457623);
        mpfr_init_set_str(r13457624, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457625, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r13457626);
        mpfr_init(r13457627);
        mpfr_init(r13457628);
        mpfr_init_set_str(r13457629, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457630, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r13457631);
        mpfr_init(r13457632);
        mpfr_init(r13457633);
        mpfr_init(r13457634);
        mpfr_init(r13457635);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r13457610, x, MPFR_RNDN);
        mpfr_mul(r13457611, r13457609, r13457610, MPFR_RNDN);
        mpfr_add(r13457612, r13457608, r13457611, MPFR_RNDN);
        mpfr_mul(r13457613, r13457610, r13457610, MPFR_RNDN);
        mpfr_mul(r13457614, r13457613, r13457613, MPFR_RNDN);
        mpfr_mul(r13457615, r13457612, r13457614, MPFR_RNDN);
        ;
        mpfr_mul(r13457617, r13457616, r13457610, MPFR_RNDN);
        ;
        mpfr_add(r13457619, r13457617, r13457618, MPFR_RNDN);
        mpfr_add(r13457620, r13457615, r13457619, MPFR_RNDN);
        ;
        mpfr_pow(r13457622, r13457610, r13457621, MPFR_RNDN);
        mpfr_mul(r13457623, r13457622, r13457622, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457626, r13457610, r13457625, MPFR_RNDN);
        mpfr_add(r13457627, r13457624, r13457626, MPFR_RNDN);
        mpfr_mul(r13457628, r13457623, r13457627, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457631, r13457630, r13457610, MPFR_RNDN);
        mpfr_sub(r13457632, r13457629, r13457631, MPFR_RNDN);
        mpfr_mul(r13457633, r13457613, r13457632, MPFR_RNDN);
        mpfr_add(r13457634, r13457628, r13457633, MPFR_RNDN);
        mpfr_add(r13457635, r13457620, r13457634, MPFR_RNDN);
        return mpfr_get_d(r13457635, MPFR_RNDN);
}

static mpfr_t r13457636, r13457637, r13457638, r13457639, r13457640, r13457641, r13457642, r13457643, r13457644, r13457645, r13457646, r13457647, r13457648, r13457649, r13457650, r13457651, r13457652, r13457653, r13457654, r13457655, r13457656, r13457657, r13457658, r13457659, r13457660, r13457661, r13457662, r13457663;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13457636, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457637, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r13457638);
        mpfr_init(r13457639);
        mpfr_init(r13457640);
        mpfr_init(r13457641);
        mpfr_init(r13457642);
        mpfr_init(r13457643);
        mpfr_init_set_str(r13457644, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r13457645);
        mpfr_init_set_str(r13457646, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457647);
        mpfr_init(r13457648);
        mpfr_init_set_str(r13457649, "3", 10, MPFR_RNDN);
        mpfr_init(r13457650);
        mpfr_init(r13457651);
        mpfr_init_set_str(r13457652, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457653, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r13457654);
        mpfr_init(r13457655);
        mpfr_init(r13457656);
        mpfr_init_set_str(r13457657, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457658, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r13457659);
        mpfr_init(r13457660);
        mpfr_init(r13457661);
        mpfr_init(r13457662);
        mpfr_init(r13457663);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r13457638, x, MPFR_RNDN);
        mpfr_mul(r13457639, r13457637, r13457638, MPFR_RNDN);
        mpfr_add(r13457640, r13457636, r13457639, MPFR_RNDN);
        mpfr_mul(r13457641, r13457638, r13457638, MPFR_RNDN);
        mpfr_mul(r13457642, r13457641, r13457641, MPFR_RNDN);
        mpfr_mul(r13457643, r13457640, r13457642, MPFR_RNDN);
        ;
        mpfr_mul(r13457645, r13457644, r13457638, MPFR_RNDN);
        ;
        mpfr_add(r13457647, r13457645, r13457646, MPFR_RNDN);
        mpfr_add(r13457648, r13457643, r13457647, MPFR_RNDN);
        ;
        mpfr_pow(r13457650, r13457638, r13457649, MPFR_RNDN);
        mpfr_mul(r13457651, r13457650, r13457650, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457654, r13457638, r13457653, MPFR_RNDN);
        mpfr_add(r13457655, r13457652, r13457654, MPFR_RNDN);
        mpfr_mul(r13457656, r13457651, r13457655, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457659, r13457658, r13457638, MPFR_RNDN);
        mpfr_sub(r13457660, r13457657, r13457659, MPFR_RNDN);
        mpfr_mul(r13457661, r13457641, r13457660, MPFR_RNDN);
        mpfr_add(r13457662, r13457656, r13457661, MPFR_RNDN);
        mpfr_add(r13457663, r13457648, r13457662, MPFR_RNDN);
        return mpfr_get_d(r13457663, MPFR_RNDN);
}

