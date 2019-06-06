#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r31480477 = 0.273438;
        float r31480478 = -9.84375;
        float r31480479 = x;
        float r31480480 = r31480479 * r31480479;
        float r31480481 = r31480478 * r31480480;
        float r31480482 = r31480477 + r31480481;
        float r31480483 = 54.140625;
        float r31480484 = r31480480 * r31480479;
        float r31480485 = r31480484 * r31480479;
        float r31480486 = r31480483 * r31480485;
        float r31480487 = r31480482 + r31480486;
        float r31480488 = -93.84375;
        float r31480489 = r31480485 * r31480479;
        float r31480490 = r31480489 * r31480479;
        float r31480491 = r31480488 * r31480490;
        float r31480492 = r31480487 + r31480491;
        float r31480493 = 50.273438;
        float r31480494 = r31480490 * r31480479;
        float r31480495 = r31480494 * r31480479;
        float r31480496 = r31480493 * r31480495;
        float r31480497 = r31480492 + r31480496;
        return r31480497;
}

double f_id(double x) {
        double r31480498 = 0.273438;
        double r31480499 = -9.84375;
        double r31480500 = x;
        double r31480501 = r31480500 * r31480500;
        double r31480502 = r31480499 * r31480501;
        double r31480503 = r31480498 + r31480502;
        double r31480504 = 54.140625;
        double r31480505 = r31480501 * r31480500;
        double r31480506 = r31480505 * r31480500;
        double r31480507 = r31480504 * r31480506;
        double r31480508 = r31480503 + r31480507;
        double r31480509 = -93.84375;
        double r31480510 = r31480506 * r31480500;
        double r31480511 = r31480510 * r31480500;
        double r31480512 = r31480509 * r31480511;
        double r31480513 = r31480508 + r31480512;
        double r31480514 = 50.273438;
        double r31480515 = r31480511 * r31480500;
        double r31480516 = r31480515 * r31480500;
        double r31480517 = r31480514 * r31480516;
        double r31480518 = r31480513 + r31480517;
        return r31480518;
}


double f_of(float x) {
        float r31480519 = x;
        float r31480520 = r31480519 * r31480519;
        float r31480521 = 3;
        float r31480522 = pow(r31480520, r31480521);
        float r31480523 = cbrt(r31480522);
        float r31480524 = r31480523 * r31480523;
        float r31480525 = exp(r31480524);
        float r31480526 = pow(r31480519, r31480521);
        float r31480527 = 50.273438;
        float r31480528 = r31480527 * r31480519;
        float r31480529 = r31480526 * r31480528;
        float r31480530 = -93.84375;
        float r31480531 = r31480530 * r31480520;
        float r31480532 = r31480529 + r31480531;
        float r31480533 = pow(r31480525, r31480532);
        float r31480534 = 54.140625;
        float r31480535 = r31480519 * r31480534;
        float r31480536 = exp(r31480535);
        float r31480537 = exp(r31480521);
        float r31480538 = log(r31480519);
        float r31480539 = pow(r31480537, r31480538);
        float r31480540 = pow(r31480536, r31480539);
        float r31480541 = r31480533 * r31480540;
        float r31480542 = log(r31480541);
        float r31480543 = sqrt(r31480542);
        float r31480544 = 9.84375;
        float r31480545 = r31480544 * r31480520;
        float r31480546 = 0.273438;
        float r31480547 = r31480545 - r31480546;
        float r31480548 = sqrt(r31480547);
        float r31480549 = r31480543 + r31480548;
        float r31480550 = r31480526 * r31480526;
        float r31480551 = r31480520 * r31480527;
        float r31480552 = r31480530 + r31480551;
        float r31480553 = r31480550 * r31480552;
        float r31480554 = r31480534 * r31480539;
        float r31480555 = r31480554 * r31480519;
        float r31480556 = r31480553 + r31480555;
        float r31480557 = sqrt(r31480556);
        float r31480558 = r31480557 - r31480548;
        float r31480559 = r31480549 * r31480558;
        return r31480559;
}

double f_od(double x) {
        double r31480560 = x;
        double r31480561 = r31480560 * r31480560;
        double r31480562 = 3;
        double r31480563 = pow(r31480561, r31480562);
        double r31480564 = cbrt(r31480563);
        double r31480565 = r31480564 * r31480564;
        double r31480566 = exp(r31480565);
        double r31480567 = pow(r31480560, r31480562);
        double r31480568 = 50.273438;
        double r31480569 = r31480568 * r31480560;
        double r31480570 = r31480567 * r31480569;
        double r31480571 = -93.84375;
        double r31480572 = r31480571 * r31480561;
        double r31480573 = r31480570 + r31480572;
        double r31480574 = pow(r31480566, r31480573);
        double r31480575 = 54.140625;
        double r31480576 = r31480560 * r31480575;
        double r31480577 = exp(r31480576);
        double r31480578 = exp(r31480562);
        double r31480579 = log(r31480560);
        double r31480580 = pow(r31480578, r31480579);
        double r31480581 = pow(r31480577, r31480580);
        double r31480582 = r31480574 * r31480581;
        double r31480583 = log(r31480582);
        double r31480584 = sqrt(r31480583);
        double r31480585 = 9.84375;
        double r31480586 = r31480585 * r31480561;
        double r31480587 = 0.273438;
        double r31480588 = r31480586 - r31480587;
        double r31480589 = sqrt(r31480588);
        double r31480590 = r31480584 + r31480589;
        double r31480591 = r31480567 * r31480567;
        double r31480592 = r31480561 * r31480568;
        double r31480593 = r31480571 + r31480592;
        double r31480594 = r31480591 * r31480593;
        double r31480595 = r31480575 * r31480580;
        double r31480596 = r31480595 * r31480560;
        double r31480597 = r31480594 + r31480596;
        double r31480598 = sqrt(r31480597);
        double r31480599 = r31480598 - r31480589;
        double r31480600 = r31480590 * r31480599;
        return r31480600;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31480601, r31480602, r31480603, r31480604, r31480605, r31480606, r31480607, r31480608, r31480609, r31480610, r31480611, r31480612, r31480613, r31480614, r31480615, r31480616, r31480617, r31480618, r31480619, r31480620, r31480621;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31480601, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r31480602, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r31480603);
        mpfr_init(r31480604);
        mpfr_init(r31480605);
        mpfr_init(r31480606);
        mpfr_init_set_str(r31480607, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r31480608);
        mpfr_init(r31480609);
        mpfr_init(r31480610);
        mpfr_init(r31480611);
        mpfr_init_set_str(r31480612, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r31480613);
        mpfr_init(r31480614);
        mpfr_init(r31480615);
        mpfr_init(r31480616);
        mpfr_init_set_str(r31480617, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r31480618);
        mpfr_init(r31480619);
        mpfr_init(r31480620);
        mpfr_init(r31480621);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r31480603, x, MPFR_RNDN);
        mpfr_mul(r31480604, r31480603, r31480603, MPFR_RNDN);
        mpfr_mul(r31480605, r31480602, r31480604, MPFR_RNDN);
        mpfr_add(r31480606, r31480601, r31480605, MPFR_RNDN);
        ;
        mpfr_mul(r31480608, r31480604, r31480603, MPFR_RNDN);
        mpfr_mul(r31480609, r31480608, r31480603, MPFR_RNDN);
        mpfr_mul(r31480610, r31480607, r31480609, MPFR_RNDN);
        mpfr_add(r31480611, r31480606, r31480610, MPFR_RNDN);
        ;
        mpfr_mul(r31480613, r31480609, r31480603, MPFR_RNDN);
        mpfr_mul(r31480614, r31480613, r31480603, MPFR_RNDN);
        mpfr_mul(r31480615, r31480612, r31480614, MPFR_RNDN);
        mpfr_add(r31480616, r31480611, r31480615, MPFR_RNDN);
        ;
        mpfr_mul(r31480618, r31480614, r31480603, MPFR_RNDN);
        mpfr_mul(r31480619, r31480618, r31480603, MPFR_RNDN);
        mpfr_mul(r31480620, r31480617, r31480619, MPFR_RNDN);
        mpfr_add(r31480621, r31480616, r31480620, MPFR_RNDN);
        return mpfr_get_d(r31480621, MPFR_RNDN);
}

static mpfr_t r31480622, r31480623, r31480624, r31480625, r31480626, r31480627, r31480628, r31480629, r31480630, r31480631, r31480632, r31480633, r31480634, r31480635, r31480636, r31480637, r31480638, r31480639, r31480640, r31480641, r31480642, r31480643, r31480644, r31480645, r31480646, r31480647, r31480648, r31480649, r31480650, r31480651, r31480652, r31480653, r31480654, r31480655, r31480656, r31480657, r31480658, r31480659, r31480660, r31480661, r31480662;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31480622);
        mpfr_init(r31480623);
        mpfr_init_set_str(r31480624, "3", 10, MPFR_RNDN);
        mpfr_init(r31480625);
        mpfr_init(r31480626);
        mpfr_init(r31480627);
        mpfr_init(r31480628);
        mpfr_init(r31480629);
        mpfr_init_set_str(r31480630, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r31480631);
        mpfr_init(r31480632);
        mpfr_init_set_str(r31480633, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r31480634);
        mpfr_init(r31480635);
        mpfr_init(r31480636);
        mpfr_init_set_str(r31480637, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r31480638);
        mpfr_init(r31480639);
        mpfr_init(r31480640);
        mpfr_init(r31480641);
        mpfr_init(r31480642);
        mpfr_init(r31480643);
        mpfr_init(r31480644);
        mpfr_init(r31480645);
        mpfr_init(r31480646);
        mpfr_init_set_str(r31480647, "9.84375", 10, MPFR_RNDN);
        mpfr_init(r31480648);
        mpfr_init_set_str(r31480649, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r31480650);
        mpfr_init(r31480651);
        mpfr_init(r31480652);
        mpfr_init(r31480653);
        mpfr_init(r31480654);
        mpfr_init(r31480655);
        mpfr_init(r31480656);
        mpfr_init(r31480657);
        mpfr_init(r31480658);
        mpfr_init(r31480659);
        mpfr_init(r31480660);
        mpfr_init(r31480661);
        mpfr_init(r31480662);
}

double f_fm(double x) {
        mpfr_set_d(r31480622, x, MPFR_RNDN);
        mpfr_mul(r31480623, r31480622, r31480622, MPFR_RNDN);
        ;
        mpfr_pow(r31480625, r31480623, r31480624, MPFR_RNDN);
        mpfr_cbrt(r31480626, r31480625, MPFR_RNDN);
        mpfr_mul(r31480627, r31480626, r31480626, MPFR_RNDN);
        mpfr_exp(r31480628, r31480627, MPFR_RNDN);
        mpfr_pow(r31480629, r31480622, r31480624, MPFR_RNDN);
        ;
        mpfr_mul(r31480631, r31480630, r31480622, MPFR_RNDN);
        mpfr_mul(r31480632, r31480629, r31480631, MPFR_RNDN);
        ;
        mpfr_mul(r31480634, r31480633, r31480623, MPFR_RNDN);
        mpfr_add(r31480635, r31480632, r31480634, MPFR_RNDN);
        mpfr_pow(r31480636, r31480628, r31480635, MPFR_RNDN);
        ;
        mpfr_mul(r31480638, r31480622, r31480637, MPFR_RNDN);
        mpfr_exp(r31480639, r31480638, MPFR_RNDN);
        mpfr_exp(r31480640, r31480624, MPFR_RNDN);
        mpfr_log(r31480641, r31480622, MPFR_RNDN);
        mpfr_pow(r31480642, r31480640, r31480641, MPFR_RNDN);
        mpfr_pow(r31480643, r31480639, r31480642, MPFR_RNDN);
        mpfr_mul(r31480644, r31480636, r31480643, MPFR_RNDN);
        mpfr_log(r31480645, r31480644, MPFR_RNDN);
        mpfr_sqrt(r31480646, r31480645, MPFR_RNDN);
        ;
        mpfr_mul(r31480648, r31480647, r31480623, MPFR_RNDN);
        ;
        mpfr_sub(r31480650, r31480648, r31480649, MPFR_RNDN);
        mpfr_sqrt(r31480651, r31480650, MPFR_RNDN);
        mpfr_add(r31480652, r31480646, r31480651, MPFR_RNDN);
        mpfr_mul(r31480653, r31480629, r31480629, MPFR_RNDN);
        mpfr_mul(r31480654, r31480623, r31480630, MPFR_RNDN);
        mpfr_add(r31480655, r31480633, r31480654, MPFR_RNDN);
        mpfr_mul(r31480656, r31480653, r31480655, MPFR_RNDN);
        mpfr_mul(r31480657, r31480637, r31480642, MPFR_RNDN);
        mpfr_mul(r31480658, r31480657, r31480622, MPFR_RNDN);
        mpfr_add(r31480659, r31480656, r31480658, MPFR_RNDN);
        mpfr_sqrt(r31480660, r31480659, MPFR_RNDN);
        mpfr_sub(r31480661, r31480660, r31480651, MPFR_RNDN);
        mpfr_mul(r31480662, r31480652, r31480661, MPFR_RNDN);
        return mpfr_get_d(r31480662, MPFR_RNDN);
}

static mpfr_t r31480663, r31480664, r31480665, r31480666, r31480667, r31480668, r31480669, r31480670, r31480671, r31480672, r31480673, r31480674, r31480675, r31480676, r31480677, r31480678, r31480679, r31480680, r31480681, r31480682, r31480683, r31480684, r31480685, r31480686, r31480687, r31480688, r31480689, r31480690, r31480691, r31480692, r31480693, r31480694, r31480695, r31480696, r31480697, r31480698, r31480699, r31480700, r31480701, r31480702, r31480703;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31480663);
        mpfr_init(r31480664);
        mpfr_init_set_str(r31480665, "3", 10, MPFR_RNDN);
        mpfr_init(r31480666);
        mpfr_init(r31480667);
        mpfr_init(r31480668);
        mpfr_init(r31480669);
        mpfr_init(r31480670);
        mpfr_init_set_str(r31480671, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r31480672);
        mpfr_init(r31480673);
        mpfr_init_set_str(r31480674, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r31480675);
        mpfr_init(r31480676);
        mpfr_init(r31480677);
        mpfr_init_set_str(r31480678, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r31480679);
        mpfr_init(r31480680);
        mpfr_init(r31480681);
        mpfr_init(r31480682);
        mpfr_init(r31480683);
        mpfr_init(r31480684);
        mpfr_init(r31480685);
        mpfr_init(r31480686);
        mpfr_init(r31480687);
        mpfr_init_set_str(r31480688, "9.84375", 10, MPFR_RNDN);
        mpfr_init(r31480689);
        mpfr_init_set_str(r31480690, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r31480691);
        mpfr_init(r31480692);
        mpfr_init(r31480693);
        mpfr_init(r31480694);
        mpfr_init(r31480695);
        mpfr_init(r31480696);
        mpfr_init(r31480697);
        mpfr_init(r31480698);
        mpfr_init(r31480699);
        mpfr_init(r31480700);
        mpfr_init(r31480701);
        mpfr_init(r31480702);
        mpfr_init(r31480703);
}

double f_dm(double x) {
        mpfr_set_d(r31480663, x, MPFR_RNDN);
        mpfr_mul(r31480664, r31480663, r31480663, MPFR_RNDN);
        ;
        mpfr_pow(r31480666, r31480664, r31480665, MPFR_RNDN);
        mpfr_cbrt(r31480667, r31480666, MPFR_RNDN);
        mpfr_mul(r31480668, r31480667, r31480667, MPFR_RNDN);
        mpfr_exp(r31480669, r31480668, MPFR_RNDN);
        mpfr_pow(r31480670, r31480663, r31480665, MPFR_RNDN);
        ;
        mpfr_mul(r31480672, r31480671, r31480663, MPFR_RNDN);
        mpfr_mul(r31480673, r31480670, r31480672, MPFR_RNDN);
        ;
        mpfr_mul(r31480675, r31480674, r31480664, MPFR_RNDN);
        mpfr_add(r31480676, r31480673, r31480675, MPFR_RNDN);
        mpfr_pow(r31480677, r31480669, r31480676, MPFR_RNDN);
        ;
        mpfr_mul(r31480679, r31480663, r31480678, MPFR_RNDN);
        mpfr_exp(r31480680, r31480679, MPFR_RNDN);
        mpfr_exp(r31480681, r31480665, MPFR_RNDN);
        mpfr_log(r31480682, r31480663, MPFR_RNDN);
        mpfr_pow(r31480683, r31480681, r31480682, MPFR_RNDN);
        mpfr_pow(r31480684, r31480680, r31480683, MPFR_RNDN);
        mpfr_mul(r31480685, r31480677, r31480684, MPFR_RNDN);
        mpfr_log(r31480686, r31480685, MPFR_RNDN);
        mpfr_sqrt(r31480687, r31480686, MPFR_RNDN);
        ;
        mpfr_mul(r31480689, r31480688, r31480664, MPFR_RNDN);
        ;
        mpfr_sub(r31480691, r31480689, r31480690, MPFR_RNDN);
        mpfr_sqrt(r31480692, r31480691, MPFR_RNDN);
        mpfr_add(r31480693, r31480687, r31480692, MPFR_RNDN);
        mpfr_mul(r31480694, r31480670, r31480670, MPFR_RNDN);
        mpfr_mul(r31480695, r31480664, r31480671, MPFR_RNDN);
        mpfr_add(r31480696, r31480674, r31480695, MPFR_RNDN);
        mpfr_mul(r31480697, r31480694, r31480696, MPFR_RNDN);
        mpfr_mul(r31480698, r31480678, r31480683, MPFR_RNDN);
        mpfr_mul(r31480699, r31480698, r31480663, MPFR_RNDN);
        mpfr_add(r31480700, r31480697, r31480699, MPFR_RNDN);
        mpfr_sqrt(r31480701, r31480700, MPFR_RNDN);
        mpfr_sub(r31480702, r31480701, r31480692, MPFR_RNDN);
        mpfr_mul(r31480703, r31480693, r31480702, MPFR_RNDN);
        return mpfr_get_d(r31480703, MPFR_RNDN);
}

