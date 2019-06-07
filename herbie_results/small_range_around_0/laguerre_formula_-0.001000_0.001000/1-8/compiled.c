#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r3748468 = 1.0;
        float r3748469 = -8.0;
        float r3748470 = x;
        float r3748471 = r3748469 * r3748470;
        float r3748472 = r3748468 + r3748471;
        float r3748473 = 14.0;
        float r3748474 = r3748470 * r3748470;
        float r3748475 = r3748473 * r3748474;
        float r3748476 = r3748472 + r3748475;
        float r3748477 = -9.333333;
        float r3748478 = r3748474 * r3748470;
        float r3748479 = r3748477 * r3748478;
        float r3748480 = r3748476 + r3748479;
        float r3748481 = 2.916667;
        float r3748482 = r3748478 * r3748470;
        float r3748483 = r3748481 * r3748482;
        float r3748484 = r3748480 + r3748483;
        float r3748485 = -0.466667;
        float r3748486 = r3748482 * r3748470;
        float r3748487 = r3748485 * r3748486;
        float r3748488 = r3748484 + r3748487;
        float r3748489 = 0.038889;
        float r3748490 = r3748486 * r3748470;
        float r3748491 = r3748489 * r3748490;
        float r3748492 = r3748488 + r3748491;
        float r3748493 = -0.001587;
        float r3748494 = r3748490 * r3748470;
        float r3748495 = r3748493 * r3748494;
        float r3748496 = r3748492 + r3748495;
        float r3748497 = 2.5e-05;
        float r3748498 = r3748494 * r3748470;
        float r3748499 = r3748497 * r3748498;
        float r3748500 = r3748496 + r3748499;
        return r3748500;
}

double f_id(double x) {
        double r3748501 = 1.0;
        double r3748502 = -8.0;
        double r3748503 = x;
        double r3748504 = r3748502 * r3748503;
        double r3748505 = r3748501 + r3748504;
        double r3748506 = 14.0;
        double r3748507 = r3748503 * r3748503;
        double r3748508 = r3748506 * r3748507;
        double r3748509 = r3748505 + r3748508;
        double r3748510 = -9.333333;
        double r3748511 = r3748507 * r3748503;
        double r3748512 = r3748510 * r3748511;
        double r3748513 = r3748509 + r3748512;
        double r3748514 = 2.916667;
        double r3748515 = r3748511 * r3748503;
        double r3748516 = r3748514 * r3748515;
        double r3748517 = r3748513 + r3748516;
        double r3748518 = -0.466667;
        double r3748519 = r3748515 * r3748503;
        double r3748520 = r3748518 * r3748519;
        double r3748521 = r3748517 + r3748520;
        double r3748522 = 0.038889;
        double r3748523 = r3748519 * r3748503;
        double r3748524 = r3748522 * r3748523;
        double r3748525 = r3748521 + r3748524;
        double r3748526 = -0.001587;
        double r3748527 = r3748523 * r3748503;
        double r3748528 = r3748526 * r3748527;
        double r3748529 = r3748525 + r3748528;
        double r3748530 = 2.5e-05;
        double r3748531 = r3748527 * r3748503;
        double r3748532 = r3748530 * r3748531;
        double r3748533 = r3748529 + r3748532;
        return r3748533;
}


double f_of(float x) {
        float r3748534 = x;
        float r3748535 = r3748534 * r3748534;
        float r3748536 = 3;
        float r3748537 = pow(r3748535, r3748536);
        float r3748538 = 2.5e-05;
        float r3748539 = r3748538 * r3748535;
        float r3748540 = r3748537 * r3748539;
        float r3748541 = -0.001587;
        float r3748542 = r3748541 * r3748534;
        float r3748543 = 0.038889;
        float r3748544 = r3748542 + r3748543;
        float r3748545 = r3748537 * r3748544;
        float r3748546 = r3748540 + r3748545;
        float r3748547 = -9.333333;
        float r3748548 = r3748547 * r3748534;
        float r3748549 = 14.0;
        float r3748550 = r3748548 + r3748549;
        float r3748551 = r3748535 * r3748550;
        float r3748552 = r3748535 * r3748535;
        float r3748553 = 2.916667;
        float r3748554 = -0.466667;
        float r3748555 = r3748554 * r3748534;
        float r3748556 = r3748553 + r3748555;
        float r3748557 = r3748552 * r3748556;
        float r3748558 = r3748551 + r3748557;
        float r3748559 = -8.0;
        float r3748560 = r3748534 * r3748559;
        float r3748561 = 1.0;
        float r3748562 = r3748560 + r3748561;
        float r3748563 = r3748558 + r3748562;
        float r3748564 = r3748546 + r3748563;
        return r3748564;
}

double f_od(double x) {
        double r3748565 = x;
        double r3748566 = r3748565 * r3748565;
        double r3748567 = 3;
        double r3748568 = pow(r3748566, r3748567);
        double r3748569 = 2.5e-05;
        double r3748570 = r3748569 * r3748566;
        double r3748571 = r3748568 * r3748570;
        double r3748572 = -0.001587;
        double r3748573 = r3748572 * r3748565;
        double r3748574 = 0.038889;
        double r3748575 = r3748573 + r3748574;
        double r3748576 = r3748568 * r3748575;
        double r3748577 = r3748571 + r3748576;
        double r3748578 = -9.333333;
        double r3748579 = r3748578 * r3748565;
        double r3748580 = 14.0;
        double r3748581 = r3748579 + r3748580;
        double r3748582 = r3748566 * r3748581;
        double r3748583 = r3748566 * r3748566;
        double r3748584 = 2.916667;
        double r3748585 = -0.466667;
        double r3748586 = r3748585 * r3748565;
        double r3748587 = r3748584 + r3748586;
        double r3748588 = r3748583 * r3748587;
        double r3748589 = r3748582 + r3748588;
        double r3748590 = -8.0;
        double r3748591 = r3748565 * r3748590;
        double r3748592 = 1.0;
        double r3748593 = r3748591 + r3748592;
        double r3748594 = r3748589 + r3748593;
        double r3748595 = r3748577 + r3748594;
        return r3748595;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3748596, r3748597, r3748598, r3748599, r3748600, r3748601, r3748602, r3748603, r3748604, r3748605, r3748606, r3748607, r3748608, r3748609, r3748610, r3748611, r3748612, r3748613, r3748614, r3748615, r3748616, r3748617, r3748618, r3748619, r3748620, r3748621, r3748622, r3748623, r3748624, r3748625, r3748626, r3748627, r3748628;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3748596, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3748597, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r3748598);
        mpfr_init(r3748599);
        mpfr_init(r3748600);
        mpfr_init_set_str(r3748601, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3748602);
        mpfr_init(r3748603);
        mpfr_init(r3748604);
        mpfr_init_set_str(r3748605, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r3748606);
        mpfr_init(r3748607);
        mpfr_init(r3748608);
        mpfr_init_set_str(r3748609, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r3748610);
        mpfr_init(r3748611);
        mpfr_init(r3748612);
        mpfr_init_set_str(r3748613, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r3748614);
        mpfr_init(r3748615);
        mpfr_init(r3748616);
        mpfr_init_set_str(r3748617, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r3748618);
        mpfr_init(r3748619);
        mpfr_init(r3748620);
        mpfr_init_set_str(r3748621, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r3748622);
        mpfr_init(r3748623);
        mpfr_init(r3748624);
        mpfr_init_set_str(r3748625, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r3748626);
        mpfr_init(r3748627);
        mpfr_init(r3748628);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3748598, x, MPFR_RNDN);
        mpfr_mul(r3748599, r3748597, r3748598, MPFR_RNDN);
        mpfr_add(r3748600, r3748596, r3748599, MPFR_RNDN);
        ;
        mpfr_mul(r3748602, r3748598, r3748598, MPFR_RNDN);
        mpfr_mul(r3748603, r3748601, r3748602, MPFR_RNDN);
        mpfr_add(r3748604, r3748600, r3748603, MPFR_RNDN);
        ;
        mpfr_mul(r3748606, r3748602, r3748598, MPFR_RNDN);
        mpfr_mul(r3748607, r3748605, r3748606, MPFR_RNDN);
        mpfr_add(r3748608, r3748604, r3748607, MPFR_RNDN);
        ;
        mpfr_mul(r3748610, r3748606, r3748598, MPFR_RNDN);
        mpfr_mul(r3748611, r3748609, r3748610, MPFR_RNDN);
        mpfr_add(r3748612, r3748608, r3748611, MPFR_RNDN);
        ;
        mpfr_mul(r3748614, r3748610, r3748598, MPFR_RNDN);
        mpfr_mul(r3748615, r3748613, r3748614, MPFR_RNDN);
        mpfr_add(r3748616, r3748612, r3748615, MPFR_RNDN);
        ;
        mpfr_mul(r3748618, r3748614, r3748598, MPFR_RNDN);
        mpfr_mul(r3748619, r3748617, r3748618, MPFR_RNDN);
        mpfr_add(r3748620, r3748616, r3748619, MPFR_RNDN);
        ;
        mpfr_mul(r3748622, r3748618, r3748598, MPFR_RNDN);
        mpfr_mul(r3748623, r3748621, r3748622, MPFR_RNDN);
        mpfr_add(r3748624, r3748620, r3748623, MPFR_RNDN);
        ;
        mpfr_mul(r3748626, r3748622, r3748598, MPFR_RNDN);
        mpfr_mul(r3748627, r3748625, r3748626, MPFR_RNDN);
        mpfr_add(r3748628, r3748624, r3748627, MPFR_RNDN);
        return mpfr_get_d(r3748628, MPFR_RNDN);
}

static mpfr_t r3748629, r3748630, r3748631, r3748632, r3748633, r3748634, r3748635, r3748636, r3748637, r3748638, r3748639, r3748640, r3748641, r3748642, r3748643, r3748644, r3748645, r3748646, r3748647, r3748648, r3748649, r3748650, r3748651, r3748652, r3748653, r3748654, r3748655, r3748656, r3748657, r3748658, r3748659;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3748629);
        mpfr_init(r3748630);
        mpfr_init_set_str(r3748631, "3", 10, MPFR_RNDN);
        mpfr_init(r3748632);
        mpfr_init_set_str(r3748633, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r3748634);
        mpfr_init(r3748635);
        mpfr_init_set_str(r3748636, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r3748637);
        mpfr_init_set_str(r3748638, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r3748639);
        mpfr_init(r3748640);
        mpfr_init(r3748641);
        mpfr_init_set_str(r3748642, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r3748643);
        mpfr_init_set_str(r3748644, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3748645);
        mpfr_init(r3748646);
        mpfr_init(r3748647);
        mpfr_init_set_str(r3748648, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r3748649, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r3748650);
        mpfr_init(r3748651);
        mpfr_init(r3748652);
        mpfr_init(r3748653);
        mpfr_init_set_str(r3748654, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r3748655);
        mpfr_init_set_str(r3748656, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3748657);
        mpfr_init(r3748658);
        mpfr_init(r3748659);
}

double f_fm(double x) {
        mpfr_set_d(r3748629, x, MPFR_RNDN);
        mpfr_mul(r3748630, r3748629, r3748629, MPFR_RNDN);
        ;
        mpfr_pow(r3748632, r3748630, r3748631, MPFR_RNDN);
        ;
        mpfr_mul(r3748634, r3748633, r3748630, MPFR_RNDN);
        mpfr_mul(r3748635, r3748632, r3748634, MPFR_RNDN);
        ;
        mpfr_mul(r3748637, r3748636, r3748629, MPFR_RNDN);
        ;
        mpfr_add(r3748639, r3748637, r3748638, MPFR_RNDN);
        mpfr_mul(r3748640, r3748632, r3748639, MPFR_RNDN);
        mpfr_add(r3748641, r3748635, r3748640, MPFR_RNDN);
        ;
        mpfr_mul(r3748643, r3748642, r3748629, MPFR_RNDN);
        ;
        mpfr_add(r3748645, r3748643, r3748644, MPFR_RNDN);
        mpfr_mul(r3748646, r3748630, r3748645, MPFR_RNDN);
        mpfr_mul(r3748647, r3748630, r3748630, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3748650, r3748649, r3748629, MPFR_RNDN);
        mpfr_add(r3748651, r3748648, r3748650, MPFR_RNDN);
        mpfr_mul(r3748652, r3748647, r3748651, MPFR_RNDN);
        mpfr_add(r3748653, r3748646, r3748652, MPFR_RNDN);
        ;
        mpfr_mul(r3748655, r3748629, r3748654, MPFR_RNDN);
        ;
        mpfr_add(r3748657, r3748655, r3748656, MPFR_RNDN);
        mpfr_add(r3748658, r3748653, r3748657, MPFR_RNDN);
        mpfr_add(r3748659, r3748641, r3748658, MPFR_RNDN);
        return mpfr_get_d(r3748659, MPFR_RNDN);
}

static mpfr_t r3748660, r3748661, r3748662, r3748663, r3748664, r3748665, r3748666, r3748667, r3748668, r3748669, r3748670, r3748671, r3748672, r3748673, r3748674, r3748675, r3748676, r3748677, r3748678, r3748679, r3748680, r3748681, r3748682, r3748683, r3748684, r3748685, r3748686, r3748687, r3748688, r3748689, r3748690;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3748660);
        mpfr_init(r3748661);
        mpfr_init_set_str(r3748662, "3", 10, MPFR_RNDN);
        mpfr_init(r3748663);
        mpfr_init_set_str(r3748664, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r3748665);
        mpfr_init(r3748666);
        mpfr_init_set_str(r3748667, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r3748668);
        mpfr_init_set_str(r3748669, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r3748670);
        mpfr_init(r3748671);
        mpfr_init(r3748672);
        mpfr_init_set_str(r3748673, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r3748674);
        mpfr_init_set_str(r3748675, "14.0", 10, MPFR_RNDN);
        mpfr_init(r3748676);
        mpfr_init(r3748677);
        mpfr_init(r3748678);
        mpfr_init_set_str(r3748679, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r3748680, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r3748681);
        mpfr_init(r3748682);
        mpfr_init(r3748683);
        mpfr_init(r3748684);
        mpfr_init_set_str(r3748685, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r3748686);
        mpfr_init_set_str(r3748687, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3748688);
        mpfr_init(r3748689);
        mpfr_init(r3748690);
}

double f_dm(double x) {
        mpfr_set_d(r3748660, x, MPFR_RNDN);
        mpfr_mul(r3748661, r3748660, r3748660, MPFR_RNDN);
        ;
        mpfr_pow(r3748663, r3748661, r3748662, MPFR_RNDN);
        ;
        mpfr_mul(r3748665, r3748664, r3748661, MPFR_RNDN);
        mpfr_mul(r3748666, r3748663, r3748665, MPFR_RNDN);
        ;
        mpfr_mul(r3748668, r3748667, r3748660, MPFR_RNDN);
        ;
        mpfr_add(r3748670, r3748668, r3748669, MPFR_RNDN);
        mpfr_mul(r3748671, r3748663, r3748670, MPFR_RNDN);
        mpfr_add(r3748672, r3748666, r3748671, MPFR_RNDN);
        ;
        mpfr_mul(r3748674, r3748673, r3748660, MPFR_RNDN);
        ;
        mpfr_add(r3748676, r3748674, r3748675, MPFR_RNDN);
        mpfr_mul(r3748677, r3748661, r3748676, MPFR_RNDN);
        mpfr_mul(r3748678, r3748661, r3748661, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3748681, r3748680, r3748660, MPFR_RNDN);
        mpfr_add(r3748682, r3748679, r3748681, MPFR_RNDN);
        mpfr_mul(r3748683, r3748678, r3748682, MPFR_RNDN);
        mpfr_add(r3748684, r3748677, r3748683, MPFR_RNDN);
        ;
        mpfr_mul(r3748686, r3748660, r3748685, MPFR_RNDN);
        ;
        mpfr_add(r3748688, r3748686, r3748687, MPFR_RNDN);
        mpfr_add(r3748689, r3748684, r3748688, MPFR_RNDN);
        mpfr_add(r3748690, r3748672, r3748689, MPFR_RNDN);
        return mpfr_get_d(r3748690, MPFR_RNDN);
}

