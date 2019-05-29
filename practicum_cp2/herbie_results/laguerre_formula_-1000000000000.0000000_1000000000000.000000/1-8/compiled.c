#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9581477 = 1.0;
        float r9581478 = -8.0;
        float r9581479 = x;
        float r9581480 = r9581478 * r9581479;
        float r9581481 = r9581477 + r9581480;
        float r9581482 = 14.0;
        float r9581483 = r9581479 * r9581479;
        float r9581484 = r9581482 * r9581483;
        float r9581485 = r9581481 + r9581484;
        float r9581486 = -9.333333;
        float r9581487 = r9581483 * r9581479;
        float r9581488 = r9581486 * r9581487;
        float r9581489 = r9581485 + r9581488;
        float r9581490 = 2.916667;
        float r9581491 = r9581487 * r9581479;
        float r9581492 = r9581490 * r9581491;
        float r9581493 = r9581489 + r9581492;
        float r9581494 = -0.466667;
        float r9581495 = r9581491 * r9581479;
        float r9581496 = r9581494 * r9581495;
        float r9581497 = r9581493 + r9581496;
        float r9581498 = 0.038889;
        float r9581499 = r9581495 * r9581479;
        float r9581500 = r9581498 * r9581499;
        float r9581501 = r9581497 + r9581500;
        float r9581502 = -0.001587;
        float r9581503 = r9581499 * r9581479;
        float r9581504 = r9581502 * r9581503;
        float r9581505 = r9581501 + r9581504;
        float r9581506 = 2.5e-05;
        float r9581507 = r9581503 * r9581479;
        float r9581508 = r9581506 * r9581507;
        float r9581509 = r9581505 + r9581508;
        return r9581509;
}

double f_id(double x) {
        double r9581510 = 1.0;
        double r9581511 = -8.0;
        double r9581512 = x;
        double r9581513 = r9581511 * r9581512;
        double r9581514 = r9581510 + r9581513;
        double r9581515 = 14.0;
        double r9581516 = r9581512 * r9581512;
        double r9581517 = r9581515 * r9581516;
        double r9581518 = r9581514 + r9581517;
        double r9581519 = -9.333333;
        double r9581520 = r9581516 * r9581512;
        double r9581521 = r9581519 * r9581520;
        double r9581522 = r9581518 + r9581521;
        double r9581523 = 2.916667;
        double r9581524 = r9581520 * r9581512;
        double r9581525 = r9581523 * r9581524;
        double r9581526 = r9581522 + r9581525;
        double r9581527 = -0.466667;
        double r9581528 = r9581524 * r9581512;
        double r9581529 = r9581527 * r9581528;
        double r9581530 = r9581526 + r9581529;
        double r9581531 = 0.038889;
        double r9581532 = r9581528 * r9581512;
        double r9581533 = r9581531 * r9581532;
        double r9581534 = r9581530 + r9581533;
        double r9581535 = -0.001587;
        double r9581536 = r9581532 * r9581512;
        double r9581537 = r9581535 * r9581536;
        double r9581538 = r9581534 + r9581537;
        double r9581539 = 2.5e-05;
        double r9581540 = r9581536 * r9581512;
        double r9581541 = r9581539 * r9581540;
        double r9581542 = r9581538 + r9581541;
        return r9581542;
}


double f_of(float x) {
        float r9581543 = x;
        float r9581544 = 3;
        float r9581545 = pow(r9581543, r9581544);
        float r9581546 = r9581545 * r9581545;
        float r9581547 = 2.5e-05;
        float r9581548 = r9581547 * r9581543;
        float r9581549 = r9581548 * r9581543;
        float r9581550 = 0.038889;
        float r9581551 = -0.001587;
        float r9581552 = r9581551 * r9581543;
        float r9581553 = r9581550 + r9581552;
        float r9581554 = r9581549 + r9581553;
        float r9581555 = r9581546 * r9581554;
        float r9581556 = -8.0;
        float r9581557 = r9581556 * r9581543;
        float r9581558 = r9581555 + r9581557;
        float r9581559 = -0.466667;
        float r9581560 = r9581543 * r9581559;
        float r9581561 = 2.916667;
        float r9581562 = r9581560 + r9581561;
        float r9581563 = 4;
        float r9581564 = pow(r9581543, r9581563);
        float r9581565 = r9581562 * r9581564;
        float r9581566 = 1.0;
        float r9581567 = r9581543 * r9581543;
        float r9581568 = -9.333333;
        float r9581569 = r9581543 * r9581568;
        float r9581570 = 14.0;
        float r9581571 = r9581569 + r9581570;
        float r9581572 = r9581567 * r9581571;
        float r9581573 = r9581566 + r9581572;
        float r9581574 = r9581565 + r9581573;
        float r9581575 = r9581558 + r9581574;
        return r9581575;
}

double f_od(double x) {
        double r9581576 = x;
        double r9581577 = 3;
        double r9581578 = pow(r9581576, r9581577);
        double r9581579 = r9581578 * r9581578;
        double r9581580 = 2.5e-05;
        double r9581581 = r9581580 * r9581576;
        double r9581582 = r9581581 * r9581576;
        double r9581583 = 0.038889;
        double r9581584 = -0.001587;
        double r9581585 = r9581584 * r9581576;
        double r9581586 = r9581583 + r9581585;
        double r9581587 = r9581582 + r9581586;
        double r9581588 = r9581579 * r9581587;
        double r9581589 = -8.0;
        double r9581590 = r9581589 * r9581576;
        double r9581591 = r9581588 + r9581590;
        double r9581592 = -0.466667;
        double r9581593 = r9581576 * r9581592;
        double r9581594 = 2.916667;
        double r9581595 = r9581593 + r9581594;
        double r9581596 = 4;
        double r9581597 = pow(r9581576, r9581596);
        double r9581598 = r9581595 * r9581597;
        double r9581599 = 1.0;
        double r9581600 = r9581576 * r9581576;
        double r9581601 = -9.333333;
        double r9581602 = r9581576 * r9581601;
        double r9581603 = 14.0;
        double r9581604 = r9581602 + r9581603;
        double r9581605 = r9581600 * r9581604;
        double r9581606 = r9581599 + r9581605;
        double r9581607 = r9581598 + r9581606;
        double r9581608 = r9581591 + r9581607;
        return r9581608;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9581609, r9581610, r9581611, r9581612, r9581613, r9581614, r9581615, r9581616, r9581617, r9581618, r9581619, r9581620, r9581621, r9581622, r9581623, r9581624, r9581625, r9581626, r9581627, r9581628, r9581629, r9581630, r9581631, r9581632, r9581633, r9581634, r9581635, r9581636, r9581637, r9581638, r9581639, r9581640, r9581641;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9581609, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581610, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9581611);
        mpfr_init(r9581612);
        mpfr_init(r9581613);
        mpfr_init_set_str(r9581614, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9581615);
        mpfr_init(r9581616);
        mpfr_init(r9581617);
        mpfr_init_set_str(r9581618, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9581619);
        mpfr_init(r9581620);
        mpfr_init(r9581621);
        mpfr_init_set_str(r9581622, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9581623);
        mpfr_init(r9581624);
        mpfr_init(r9581625);
        mpfr_init_set_str(r9581626, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9581627);
        mpfr_init(r9581628);
        mpfr_init(r9581629);
        mpfr_init_set_str(r9581630, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9581631);
        mpfr_init(r9581632);
        mpfr_init(r9581633);
        mpfr_init_set_str(r9581634, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9581635);
        mpfr_init(r9581636);
        mpfr_init(r9581637);
        mpfr_init_set_str(r9581638, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9581639);
        mpfr_init(r9581640);
        mpfr_init(r9581641);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9581611, x, MPFR_RNDN);
        mpfr_mul(r9581612, r9581610, r9581611, MPFR_RNDN);
        mpfr_add(r9581613, r9581609, r9581612, MPFR_RNDN);
        ;
        mpfr_mul(r9581615, r9581611, r9581611, MPFR_RNDN);
        mpfr_mul(r9581616, r9581614, r9581615, MPFR_RNDN);
        mpfr_add(r9581617, r9581613, r9581616, MPFR_RNDN);
        ;
        mpfr_mul(r9581619, r9581615, r9581611, MPFR_RNDN);
        mpfr_mul(r9581620, r9581618, r9581619, MPFR_RNDN);
        mpfr_add(r9581621, r9581617, r9581620, MPFR_RNDN);
        ;
        mpfr_mul(r9581623, r9581619, r9581611, MPFR_RNDN);
        mpfr_mul(r9581624, r9581622, r9581623, MPFR_RNDN);
        mpfr_add(r9581625, r9581621, r9581624, MPFR_RNDN);
        ;
        mpfr_mul(r9581627, r9581623, r9581611, MPFR_RNDN);
        mpfr_mul(r9581628, r9581626, r9581627, MPFR_RNDN);
        mpfr_add(r9581629, r9581625, r9581628, MPFR_RNDN);
        ;
        mpfr_mul(r9581631, r9581627, r9581611, MPFR_RNDN);
        mpfr_mul(r9581632, r9581630, r9581631, MPFR_RNDN);
        mpfr_add(r9581633, r9581629, r9581632, MPFR_RNDN);
        ;
        mpfr_mul(r9581635, r9581631, r9581611, MPFR_RNDN);
        mpfr_mul(r9581636, r9581634, r9581635, MPFR_RNDN);
        mpfr_add(r9581637, r9581633, r9581636, MPFR_RNDN);
        ;
        mpfr_mul(r9581639, r9581635, r9581611, MPFR_RNDN);
        mpfr_mul(r9581640, r9581638, r9581639, MPFR_RNDN);
        mpfr_add(r9581641, r9581637, r9581640, MPFR_RNDN);
        return mpfr_get_d(r9581641, MPFR_RNDN);
}

static mpfr_t r9581642, r9581643, r9581644, r9581645, r9581646, r9581647, r9581648, r9581649, r9581650, r9581651, r9581652, r9581653, r9581654, r9581655, r9581656, r9581657, r9581658, r9581659, r9581660, r9581661, r9581662, r9581663, r9581664, r9581665, r9581666, r9581667, r9581668, r9581669, r9581670, r9581671, r9581672, r9581673, r9581674;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9581642);
        mpfr_init_set_str(r9581643, "3", 10, MPFR_RNDN);
        mpfr_init(r9581644);
        mpfr_init(r9581645);
        mpfr_init_set_str(r9581646, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9581647);
        mpfr_init(r9581648);
        mpfr_init_set_str(r9581649, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581650, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9581651);
        mpfr_init(r9581652);
        mpfr_init(r9581653);
        mpfr_init(r9581654);
        mpfr_init_set_str(r9581655, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9581656);
        mpfr_init(r9581657);
        mpfr_init_set_str(r9581658, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9581659);
        mpfr_init_set_str(r9581660, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9581661);
        mpfr_init_set_str(r9581662, "4", 10, MPFR_RNDN);
        mpfr_init(r9581663);
        mpfr_init(r9581664);
        mpfr_init_set_str(r9581665, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9581666);
        mpfr_init_set_str(r9581667, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9581668);
        mpfr_init_set_str(r9581669, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9581670);
        mpfr_init(r9581671);
        mpfr_init(r9581672);
        mpfr_init(r9581673);
        mpfr_init(r9581674);
}

double f_fm(double x) {
        mpfr_set_d(r9581642, x, MPFR_RNDN);
        ;
        mpfr_pow(r9581644, r9581642, r9581643, MPFR_RNDN);
        mpfr_mul(r9581645, r9581644, r9581644, MPFR_RNDN);
        ;
        mpfr_mul(r9581647, r9581646, r9581642, MPFR_RNDN);
        mpfr_mul(r9581648, r9581647, r9581642, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9581651, r9581650, r9581642, MPFR_RNDN);
        mpfr_add(r9581652, r9581649, r9581651, MPFR_RNDN);
        mpfr_add(r9581653, r9581648, r9581652, MPFR_RNDN);
        mpfr_mul(r9581654, r9581645, r9581653, MPFR_RNDN);
        ;
        mpfr_mul(r9581656, r9581655, r9581642, MPFR_RNDN);
        mpfr_add(r9581657, r9581654, r9581656, MPFR_RNDN);
        ;
        mpfr_mul(r9581659, r9581642, r9581658, MPFR_RNDN);
        ;
        mpfr_add(r9581661, r9581659, r9581660, MPFR_RNDN);
        ;
        mpfr_pow(r9581663, r9581642, r9581662, MPFR_RNDN);
        mpfr_mul(r9581664, r9581661, r9581663, MPFR_RNDN);
        ;
        mpfr_mul(r9581666, r9581642, r9581642, MPFR_RNDN);
        ;
        mpfr_mul(r9581668, r9581642, r9581667, MPFR_RNDN);
        ;
        mpfr_add(r9581670, r9581668, r9581669, MPFR_RNDN);
        mpfr_mul(r9581671, r9581666, r9581670, MPFR_RNDN);
        mpfr_add(r9581672, r9581665, r9581671, MPFR_RNDN);
        mpfr_add(r9581673, r9581664, r9581672, MPFR_RNDN);
        mpfr_add(r9581674, r9581657, r9581673, MPFR_RNDN);
        return mpfr_get_d(r9581674, MPFR_RNDN);
}

static mpfr_t r9581675, r9581676, r9581677, r9581678, r9581679, r9581680, r9581681, r9581682, r9581683, r9581684, r9581685, r9581686, r9581687, r9581688, r9581689, r9581690, r9581691, r9581692, r9581693, r9581694, r9581695, r9581696, r9581697, r9581698, r9581699, r9581700, r9581701, r9581702, r9581703, r9581704, r9581705, r9581706, r9581707;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9581675);
        mpfr_init_set_str(r9581676, "3", 10, MPFR_RNDN);
        mpfr_init(r9581677);
        mpfr_init(r9581678);
        mpfr_init_set_str(r9581679, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9581680);
        mpfr_init(r9581681);
        mpfr_init_set_str(r9581682, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581683, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9581684);
        mpfr_init(r9581685);
        mpfr_init(r9581686);
        mpfr_init(r9581687);
        mpfr_init_set_str(r9581688, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9581689);
        mpfr_init(r9581690);
        mpfr_init_set_str(r9581691, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9581692);
        mpfr_init_set_str(r9581693, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9581694);
        mpfr_init_set_str(r9581695, "4", 10, MPFR_RNDN);
        mpfr_init(r9581696);
        mpfr_init(r9581697);
        mpfr_init_set_str(r9581698, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9581699);
        mpfr_init_set_str(r9581700, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9581701);
        mpfr_init_set_str(r9581702, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9581703);
        mpfr_init(r9581704);
        mpfr_init(r9581705);
        mpfr_init(r9581706);
        mpfr_init(r9581707);
}

double f_dm(double x) {
        mpfr_set_d(r9581675, x, MPFR_RNDN);
        ;
        mpfr_pow(r9581677, r9581675, r9581676, MPFR_RNDN);
        mpfr_mul(r9581678, r9581677, r9581677, MPFR_RNDN);
        ;
        mpfr_mul(r9581680, r9581679, r9581675, MPFR_RNDN);
        mpfr_mul(r9581681, r9581680, r9581675, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9581684, r9581683, r9581675, MPFR_RNDN);
        mpfr_add(r9581685, r9581682, r9581684, MPFR_RNDN);
        mpfr_add(r9581686, r9581681, r9581685, MPFR_RNDN);
        mpfr_mul(r9581687, r9581678, r9581686, MPFR_RNDN);
        ;
        mpfr_mul(r9581689, r9581688, r9581675, MPFR_RNDN);
        mpfr_add(r9581690, r9581687, r9581689, MPFR_RNDN);
        ;
        mpfr_mul(r9581692, r9581675, r9581691, MPFR_RNDN);
        ;
        mpfr_add(r9581694, r9581692, r9581693, MPFR_RNDN);
        ;
        mpfr_pow(r9581696, r9581675, r9581695, MPFR_RNDN);
        mpfr_mul(r9581697, r9581694, r9581696, MPFR_RNDN);
        ;
        mpfr_mul(r9581699, r9581675, r9581675, MPFR_RNDN);
        ;
        mpfr_mul(r9581701, r9581675, r9581700, MPFR_RNDN);
        ;
        mpfr_add(r9581703, r9581701, r9581702, MPFR_RNDN);
        mpfr_mul(r9581704, r9581699, r9581703, MPFR_RNDN);
        mpfr_add(r9581705, r9581698, r9581704, MPFR_RNDN);
        mpfr_add(r9581706, r9581697, r9581705, MPFR_RNDN);
        mpfr_add(r9581707, r9581690, r9581706, MPFR_RNDN);
        return mpfr_get_d(r9581707, MPFR_RNDN);
}

