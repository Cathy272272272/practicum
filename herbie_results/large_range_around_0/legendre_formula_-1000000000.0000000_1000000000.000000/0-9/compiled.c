#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r5020484 = 2.460938;
        float r5020485 = x;
        float r5020486 = r5020484 * r5020485;
        float r5020487 = -36.09375;
        float r5020488 = r5020485 * r5020485;
        float r5020489 = r5020488 * r5020485;
        float r5020490 = r5020487 * r5020489;
        float r5020491 = r5020486 + r5020490;
        float r5020492 = 140.765625;
        float r5020493 = r5020489 * r5020485;
        float r5020494 = r5020493 * r5020485;
        float r5020495 = r5020492 * r5020494;
        float r5020496 = r5020491 + r5020495;
        float r5020497 = -201.09375;
        float r5020498 = r5020494 * r5020485;
        float r5020499 = r5020498 * r5020485;
        float r5020500 = r5020497 * r5020499;
        float r5020501 = r5020496 + r5020500;
        float r5020502 = 94.960938;
        float r5020503 = r5020499 * r5020485;
        float r5020504 = r5020503 * r5020485;
        float r5020505 = r5020502 * r5020504;
        float r5020506 = r5020501 + r5020505;
        return r5020506;
}

double f_id(double x) {
        double r5020507 = 2.460938;
        double r5020508 = x;
        double r5020509 = r5020507 * r5020508;
        double r5020510 = -36.09375;
        double r5020511 = r5020508 * r5020508;
        double r5020512 = r5020511 * r5020508;
        double r5020513 = r5020510 * r5020512;
        double r5020514 = r5020509 + r5020513;
        double r5020515 = 140.765625;
        double r5020516 = r5020512 * r5020508;
        double r5020517 = r5020516 * r5020508;
        double r5020518 = r5020515 * r5020517;
        double r5020519 = r5020514 + r5020518;
        double r5020520 = -201.09375;
        double r5020521 = r5020517 * r5020508;
        double r5020522 = r5020521 * r5020508;
        double r5020523 = r5020520 * r5020522;
        double r5020524 = r5020519 + r5020523;
        double r5020525 = 94.960938;
        double r5020526 = r5020522 * r5020508;
        double r5020527 = r5020526 * r5020508;
        double r5020528 = r5020525 * r5020527;
        double r5020529 = r5020524 + r5020528;
        return r5020529;
}


double f_of(float x) {
        float r5020530 = x;
        float r5020531 = r5020530 * r5020530;
        float r5020532 = 140.765625;
        float r5020533 = r5020530 * r5020532;
        float r5020534 = r5020531 * r5020533;
        float r5020535 = r5020531 * r5020534;
        float r5020536 = 2.460938;
        float r5020537 = r5020536 * r5020530;
        float r5020538 = -36.09375;
        float r5020539 = r5020538 * r5020530;
        float r5020540 = r5020539 * r5020531;
        float r5020541 = r5020537 + r5020540;
        float r5020542 = r5020535 + r5020541;
        float r5020543 = 3;
        float r5020544 = pow(r5020530, r5020543);
        float r5020545 = r5020544 * r5020544;
        float r5020546 = r5020545 * r5020530;
        float r5020547 = -201.09375;
        float r5020548 = 94.960938;
        float r5020549 = r5020548 * r5020530;
        float r5020550 = r5020530 * r5020549;
        float r5020551 = r5020547 + r5020550;
        float r5020552 = r5020546 * r5020551;
        float r5020553 = r5020542 + r5020552;
        return r5020553;
}

double f_od(double x) {
        double r5020554 = x;
        double r5020555 = r5020554 * r5020554;
        double r5020556 = 140.765625;
        double r5020557 = r5020554 * r5020556;
        double r5020558 = r5020555 * r5020557;
        double r5020559 = r5020555 * r5020558;
        double r5020560 = 2.460938;
        double r5020561 = r5020560 * r5020554;
        double r5020562 = -36.09375;
        double r5020563 = r5020562 * r5020554;
        double r5020564 = r5020563 * r5020555;
        double r5020565 = r5020561 + r5020564;
        double r5020566 = r5020559 + r5020565;
        double r5020567 = 3;
        double r5020568 = pow(r5020554, r5020567);
        double r5020569 = r5020568 * r5020568;
        double r5020570 = r5020569 * r5020554;
        double r5020571 = -201.09375;
        double r5020572 = 94.960938;
        double r5020573 = r5020572 * r5020554;
        double r5020574 = r5020554 * r5020573;
        double r5020575 = r5020571 + r5020574;
        double r5020576 = r5020570 * r5020575;
        double r5020577 = r5020566 + r5020576;
        return r5020577;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5020578, r5020579, r5020580, r5020581, r5020582, r5020583, r5020584, r5020585, r5020586, r5020587, r5020588, r5020589, r5020590, r5020591, r5020592, r5020593, r5020594, r5020595, r5020596, r5020597, r5020598, r5020599, r5020600;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5020578, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r5020579);
        mpfr_init(r5020580);
        mpfr_init_set_str(r5020581, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r5020582);
        mpfr_init(r5020583);
        mpfr_init(r5020584);
        mpfr_init(r5020585);
        mpfr_init_set_str(r5020586, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r5020587);
        mpfr_init(r5020588);
        mpfr_init(r5020589);
        mpfr_init(r5020590);
        mpfr_init_set_str(r5020591, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r5020592);
        mpfr_init(r5020593);
        mpfr_init(r5020594);
        mpfr_init(r5020595);
        mpfr_init_set_str(r5020596, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r5020597);
        mpfr_init(r5020598);
        mpfr_init(r5020599);
        mpfr_init(r5020600);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5020579, x, MPFR_RNDN);
        mpfr_mul(r5020580, r5020578, r5020579, MPFR_RNDN);
        ;
        mpfr_mul(r5020582, r5020579, r5020579, MPFR_RNDN);
        mpfr_mul(r5020583, r5020582, r5020579, MPFR_RNDN);
        mpfr_mul(r5020584, r5020581, r5020583, MPFR_RNDN);
        mpfr_add(r5020585, r5020580, r5020584, MPFR_RNDN);
        ;
        mpfr_mul(r5020587, r5020583, r5020579, MPFR_RNDN);
        mpfr_mul(r5020588, r5020587, r5020579, MPFR_RNDN);
        mpfr_mul(r5020589, r5020586, r5020588, MPFR_RNDN);
        mpfr_add(r5020590, r5020585, r5020589, MPFR_RNDN);
        ;
        mpfr_mul(r5020592, r5020588, r5020579, MPFR_RNDN);
        mpfr_mul(r5020593, r5020592, r5020579, MPFR_RNDN);
        mpfr_mul(r5020594, r5020591, r5020593, MPFR_RNDN);
        mpfr_add(r5020595, r5020590, r5020594, MPFR_RNDN);
        ;
        mpfr_mul(r5020597, r5020593, r5020579, MPFR_RNDN);
        mpfr_mul(r5020598, r5020597, r5020579, MPFR_RNDN);
        mpfr_mul(r5020599, r5020596, r5020598, MPFR_RNDN);
        mpfr_add(r5020600, r5020595, r5020599, MPFR_RNDN);
        return mpfr_get_d(r5020600, MPFR_RNDN);
}

static mpfr_t r5020601, r5020602, r5020603, r5020604, r5020605, r5020606, r5020607, r5020608, r5020609, r5020610, r5020611, r5020612, r5020613, r5020614, r5020615, r5020616, r5020617, r5020618, r5020619, r5020620, r5020621, r5020622, r5020623, r5020624;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5020601);
        mpfr_init(r5020602);
        mpfr_init_set_str(r5020603, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r5020604);
        mpfr_init(r5020605);
        mpfr_init(r5020606);
        mpfr_init_set_str(r5020607, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r5020608);
        mpfr_init_set_str(r5020609, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r5020610);
        mpfr_init(r5020611);
        mpfr_init(r5020612);
        mpfr_init(r5020613);
        mpfr_init_set_str(r5020614, "3", 10, MPFR_RNDN);
        mpfr_init(r5020615);
        mpfr_init(r5020616);
        mpfr_init(r5020617);
        mpfr_init_set_str(r5020618, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020619, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r5020620);
        mpfr_init(r5020621);
        mpfr_init(r5020622);
        mpfr_init(r5020623);
        mpfr_init(r5020624);
}

double f_fm(double x) {
        mpfr_set_d(r5020601, x, MPFR_RNDN);
        mpfr_mul(r5020602, r5020601, r5020601, MPFR_RNDN);
        ;
        mpfr_mul(r5020604, r5020601, r5020603, MPFR_RNDN);
        mpfr_mul(r5020605, r5020602, r5020604, MPFR_RNDN);
        mpfr_mul(r5020606, r5020602, r5020605, MPFR_RNDN);
        ;
        mpfr_mul(r5020608, r5020607, r5020601, MPFR_RNDN);
        ;
        mpfr_mul(r5020610, r5020609, r5020601, MPFR_RNDN);
        mpfr_mul(r5020611, r5020610, r5020602, MPFR_RNDN);
        mpfr_add(r5020612, r5020608, r5020611, MPFR_RNDN);
        mpfr_add(r5020613, r5020606, r5020612, MPFR_RNDN);
        ;
        mpfr_pow(r5020615, r5020601, r5020614, MPFR_RNDN);
        mpfr_mul(r5020616, r5020615, r5020615, MPFR_RNDN);
        mpfr_mul(r5020617, r5020616, r5020601, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5020620, r5020619, r5020601, MPFR_RNDN);
        mpfr_mul(r5020621, r5020601, r5020620, MPFR_RNDN);
        mpfr_add(r5020622, r5020618, r5020621, MPFR_RNDN);
        mpfr_mul(r5020623, r5020617, r5020622, MPFR_RNDN);
        mpfr_add(r5020624, r5020613, r5020623, MPFR_RNDN);
        return mpfr_get_d(r5020624, MPFR_RNDN);
}

static mpfr_t r5020625, r5020626, r5020627, r5020628, r5020629, r5020630, r5020631, r5020632, r5020633, r5020634, r5020635, r5020636, r5020637, r5020638, r5020639, r5020640, r5020641, r5020642, r5020643, r5020644, r5020645, r5020646, r5020647, r5020648;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5020625);
        mpfr_init(r5020626);
        mpfr_init_set_str(r5020627, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r5020628);
        mpfr_init(r5020629);
        mpfr_init(r5020630);
        mpfr_init_set_str(r5020631, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r5020632);
        mpfr_init_set_str(r5020633, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r5020634);
        mpfr_init(r5020635);
        mpfr_init(r5020636);
        mpfr_init(r5020637);
        mpfr_init_set_str(r5020638, "3", 10, MPFR_RNDN);
        mpfr_init(r5020639);
        mpfr_init(r5020640);
        mpfr_init(r5020641);
        mpfr_init_set_str(r5020642, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020643, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r5020644);
        mpfr_init(r5020645);
        mpfr_init(r5020646);
        mpfr_init(r5020647);
        mpfr_init(r5020648);
}

double f_dm(double x) {
        mpfr_set_d(r5020625, x, MPFR_RNDN);
        mpfr_mul(r5020626, r5020625, r5020625, MPFR_RNDN);
        ;
        mpfr_mul(r5020628, r5020625, r5020627, MPFR_RNDN);
        mpfr_mul(r5020629, r5020626, r5020628, MPFR_RNDN);
        mpfr_mul(r5020630, r5020626, r5020629, MPFR_RNDN);
        ;
        mpfr_mul(r5020632, r5020631, r5020625, MPFR_RNDN);
        ;
        mpfr_mul(r5020634, r5020633, r5020625, MPFR_RNDN);
        mpfr_mul(r5020635, r5020634, r5020626, MPFR_RNDN);
        mpfr_add(r5020636, r5020632, r5020635, MPFR_RNDN);
        mpfr_add(r5020637, r5020630, r5020636, MPFR_RNDN);
        ;
        mpfr_pow(r5020639, r5020625, r5020638, MPFR_RNDN);
        mpfr_mul(r5020640, r5020639, r5020639, MPFR_RNDN);
        mpfr_mul(r5020641, r5020640, r5020625, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5020644, r5020643, r5020625, MPFR_RNDN);
        mpfr_mul(r5020645, r5020625, r5020644, MPFR_RNDN);
        mpfr_add(r5020646, r5020642, r5020645, MPFR_RNDN);
        mpfr_mul(r5020647, r5020641, r5020646, MPFR_RNDN);
        mpfr_add(r5020648, r5020637, r5020647, MPFR_RNDN);
        return mpfr_get_d(r5020648, MPFR_RNDN);
}

