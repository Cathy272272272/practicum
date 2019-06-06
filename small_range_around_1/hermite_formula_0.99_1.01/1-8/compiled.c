#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r61032510 = 1680.0;
        float r61032511 = -13440.0;
        float r61032512 = x;
        float r61032513 = r61032512 * r61032512;
        float r61032514 = r61032511 * r61032513;
        float r61032515 = r61032510 + r61032514;
        float r61032516 = 13440.0;
        float r61032517 = r61032513 * r61032512;
        float r61032518 = r61032517 * r61032512;
        float r61032519 = r61032516 * r61032518;
        float r61032520 = r61032515 + r61032519;
        float r61032521 = -3584.0;
        float r61032522 = r61032518 * r61032512;
        float r61032523 = r61032522 * r61032512;
        float r61032524 = r61032521 * r61032523;
        float r61032525 = r61032520 + r61032524;
        float r61032526 = 256.0;
        float r61032527 = r61032523 * r61032512;
        float r61032528 = r61032527 * r61032512;
        float r61032529 = r61032526 * r61032528;
        float r61032530 = r61032525 + r61032529;
        return r61032530;
}

double f_id(double x) {
        double r61032531 = 1680.0;
        double r61032532 = -13440.0;
        double r61032533 = x;
        double r61032534 = r61032533 * r61032533;
        double r61032535 = r61032532 * r61032534;
        double r61032536 = r61032531 + r61032535;
        double r61032537 = 13440.0;
        double r61032538 = r61032534 * r61032533;
        double r61032539 = r61032538 * r61032533;
        double r61032540 = r61032537 * r61032539;
        double r61032541 = r61032536 + r61032540;
        double r61032542 = -3584.0;
        double r61032543 = r61032539 * r61032533;
        double r61032544 = r61032543 * r61032533;
        double r61032545 = r61032542 * r61032544;
        double r61032546 = r61032541 + r61032545;
        double r61032547 = 256.0;
        double r61032548 = r61032544 * r61032533;
        double r61032549 = r61032548 * r61032533;
        double r61032550 = r61032547 * r61032549;
        double r61032551 = r61032546 + r61032550;
        return r61032551;
}


double f_of(float x) {
        float r61032552 = -3584.0;
        float r61032553 = x;
        float r61032554 = 256.0;
        float r61032555 = r61032553 * r61032554;
        float r61032556 = r61032553 * r61032555;
        float r61032557 = r61032552 + r61032556;
        float r61032558 = 3;
        float r61032559 = pow(r61032553, r61032558);
        float r61032560 = pow(r61032559, r61032558);
        float r61032561 = r61032560 * r61032560;
        float r61032562 = cbrt(r61032561);
        float r61032563 = r61032557 * r61032562;
        float r61032564 = 1680.0;
        float r61032565 = r61032563 + r61032564;
        float r61032566 = 13440.0;
        float r61032567 = r61032566 * r61032553;
        float r61032568 = exp(r61032558);
        float r61032569 = 0;
        float r61032570 = log(r61032553);
        float r61032571 = r61032569 + r61032570;
        float r61032572 = pow(r61032568, r61032571);
        float r61032573 = pow(r61032572, r61032558);
        float r61032574 = r61032573 - r61032559;
        float r61032575 = pow(r61032568, r61032570);
        float r61032576 = r61032575 + r61032553;
        float r61032577 = r61032576 * r61032553;
        float r61032578 = r61032575 * r61032575;
        float r61032579 = r61032577 + r61032578;
        float r61032580 = r61032574 / r61032579;
        float r61032581 = r61032567 * r61032580;
        float r61032582 = r61032565 + r61032581;
        return r61032582;
}

double f_od(double x) {
        double r61032583 = -3584.0;
        double r61032584 = x;
        double r61032585 = 256.0;
        double r61032586 = r61032584 * r61032585;
        double r61032587 = r61032584 * r61032586;
        double r61032588 = r61032583 + r61032587;
        double r61032589 = 3;
        double r61032590 = pow(r61032584, r61032589);
        double r61032591 = pow(r61032590, r61032589);
        double r61032592 = r61032591 * r61032591;
        double r61032593 = cbrt(r61032592);
        double r61032594 = r61032588 * r61032593;
        double r61032595 = 1680.0;
        double r61032596 = r61032594 + r61032595;
        double r61032597 = 13440.0;
        double r61032598 = r61032597 * r61032584;
        double r61032599 = exp(r61032589);
        double r61032600 = 0;
        double r61032601 = log(r61032584);
        double r61032602 = r61032600 + r61032601;
        double r61032603 = pow(r61032599, r61032602);
        double r61032604 = pow(r61032603, r61032589);
        double r61032605 = r61032604 - r61032590;
        double r61032606 = pow(r61032599, r61032601);
        double r61032607 = r61032606 + r61032584;
        double r61032608 = r61032607 * r61032584;
        double r61032609 = r61032606 * r61032606;
        double r61032610 = r61032608 + r61032609;
        double r61032611 = r61032605 / r61032610;
        double r61032612 = r61032598 * r61032611;
        double r61032613 = r61032596 + r61032612;
        return r61032613;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61032614, r61032615, r61032616, r61032617, r61032618, r61032619, r61032620, r61032621, r61032622, r61032623, r61032624, r61032625, r61032626, r61032627, r61032628, r61032629, r61032630, r61032631, r61032632, r61032633, r61032634;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032614, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032615, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r61032616);
        mpfr_init(r61032617);
        mpfr_init(r61032618);
        mpfr_init(r61032619);
        mpfr_init_set_str(r61032620, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r61032621);
        mpfr_init(r61032622);
        mpfr_init(r61032623);
        mpfr_init(r61032624);
        mpfr_init_set_str(r61032625, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r61032626);
        mpfr_init(r61032627);
        mpfr_init(r61032628);
        mpfr_init(r61032629);
        mpfr_init_set_str(r61032630, "256.0", 10, MPFR_RNDN);
        mpfr_init(r61032631);
        mpfr_init(r61032632);
        mpfr_init(r61032633);
        mpfr_init(r61032634);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r61032616, x, MPFR_RNDN);
        mpfr_mul(r61032617, r61032616, r61032616, MPFR_RNDN);
        mpfr_mul(r61032618, r61032615, r61032617, MPFR_RNDN);
        mpfr_add(r61032619, r61032614, r61032618, MPFR_RNDN);
        ;
        mpfr_mul(r61032621, r61032617, r61032616, MPFR_RNDN);
        mpfr_mul(r61032622, r61032621, r61032616, MPFR_RNDN);
        mpfr_mul(r61032623, r61032620, r61032622, MPFR_RNDN);
        mpfr_add(r61032624, r61032619, r61032623, MPFR_RNDN);
        ;
        mpfr_mul(r61032626, r61032622, r61032616, MPFR_RNDN);
        mpfr_mul(r61032627, r61032626, r61032616, MPFR_RNDN);
        mpfr_mul(r61032628, r61032625, r61032627, MPFR_RNDN);
        mpfr_add(r61032629, r61032624, r61032628, MPFR_RNDN);
        ;
        mpfr_mul(r61032631, r61032627, r61032616, MPFR_RNDN);
        mpfr_mul(r61032632, r61032631, r61032616, MPFR_RNDN);
        mpfr_mul(r61032633, r61032630, r61032632, MPFR_RNDN);
        mpfr_add(r61032634, r61032629, r61032633, MPFR_RNDN);
        return mpfr_get_d(r61032634, MPFR_RNDN);
}

static mpfr_t r61032635, r61032636, r61032637, r61032638, r61032639, r61032640, r61032641, r61032642, r61032643, r61032644, r61032645, r61032646, r61032647, r61032648, r61032649, r61032650, r61032651, r61032652, r61032653, r61032654, r61032655, r61032656, r61032657, r61032658, r61032659, r61032660, r61032661, r61032662, r61032663, r61032664, r61032665;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032635, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r61032636);
        mpfr_init_set_str(r61032637, "256.0", 10, MPFR_RNDN);
        mpfr_init(r61032638);
        mpfr_init(r61032639);
        mpfr_init(r61032640);
        mpfr_init_set_str(r61032641, "3", 10, MPFR_RNDN);
        mpfr_init(r61032642);
        mpfr_init(r61032643);
        mpfr_init(r61032644);
        mpfr_init(r61032645);
        mpfr_init(r61032646);
        mpfr_init_set_str(r61032647, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r61032648);
        mpfr_init_set_str(r61032649, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r61032650);
        mpfr_init(r61032651);
        mpfr_init_set_str(r61032652, "0", 10, MPFR_RNDN);
        mpfr_init(r61032653);
        mpfr_init(r61032654);
        mpfr_init(r61032655);
        mpfr_init(r61032656);
        mpfr_init(r61032657);
        mpfr_init(r61032658);
        mpfr_init(r61032659);
        mpfr_init(r61032660);
        mpfr_init(r61032661);
        mpfr_init(r61032662);
        mpfr_init(r61032663);
        mpfr_init(r61032664);
        mpfr_init(r61032665);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r61032636, x, MPFR_RNDN);
        ;
        mpfr_mul(r61032638, r61032636, r61032637, MPFR_RNDN);
        mpfr_mul(r61032639, r61032636, r61032638, MPFR_RNDN);
        mpfr_add(r61032640, r61032635, r61032639, MPFR_RNDN);
        ;
        mpfr_pow(r61032642, r61032636, r61032641, MPFR_RNDN);
        mpfr_pow(r61032643, r61032642, r61032641, MPFR_RNDN);
        mpfr_mul(r61032644, r61032643, r61032643, MPFR_RNDN);
        mpfr_cbrt(r61032645, r61032644, MPFR_RNDN);
        mpfr_mul(r61032646, r61032640, r61032645, MPFR_RNDN);
        ;
        mpfr_add(r61032648, r61032646, r61032647, MPFR_RNDN);
        ;
        mpfr_mul(r61032650, r61032649, r61032636, MPFR_RNDN);
        mpfr_exp(r61032651, r61032641, MPFR_RNDN);
        ;
        mpfr_log(r61032653, r61032636, MPFR_RNDN);
        mpfr_add(r61032654, r61032652, r61032653, MPFR_RNDN);
        mpfr_pow(r61032655, r61032651, r61032654, MPFR_RNDN);
        mpfr_pow(r61032656, r61032655, r61032641, MPFR_RNDN);
        mpfr_sub(r61032657, r61032656, r61032642, MPFR_RNDN);
        mpfr_pow(r61032658, r61032651, r61032653, MPFR_RNDN);
        mpfr_add(r61032659, r61032658, r61032636, MPFR_RNDN);
        mpfr_mul(r61032660, r61032659, r61032636, MPFR_RNDN);
        mpfr_mul(r61032661, r61032658, r61032658, MPFR_RNDN);
        mpfr_add(r61032662, r61032660, r61032661, MPFR_RNDN);
        mpfr_div(r61032663, r61032657, r61032662, MPFR_RNDN);
        mpfr_mul(r61032664, r61032650, r61032663, MPFR_RNDN);
        mpfr_add(r61032665, r61032648, r61032664, MPFR_RNDN);
        return mpfr_get_d(r61032665, MPFR_RNDN);
}

static mpfr_t r61032666, r61032667, r61032668, r61032669, r61032670, r61032671, r61032672, r61032673, r61032674, r61032675, r61032676, r61032677, r61032678, r61032679, r61032680, r61032681, r61032682, r61032683, r61032684, r61032685, r61032686, r61032687, r61032688, r61032689, r61032690, r61032691, r61032692, r61032693, r61032694, r61032695, r61032696;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032666, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r61032667);
        mpfr_init_set_str(r61032668, "256.0", 10, MPFR_RNDN);
        mpfr_init(r61032669);
        mpfr_init(r61032670);
        mpfr_init(r61032671);
        mpfr_init_set_str(r61032672, "3", 10, MPFR_RNDN);
        mpfr_init(r61032673);
        mpfr_init(r61032674);
        mpfr_init(r61032675);
        mpfr_init(r61032676);
        mpfr_init(r61032677);
        mpfr_init_set_str(r61032678, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r61032679);
        mpfr_init_set_str(r61032680, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r61032681);
        mpfr_init(r61032682);
        mpfr_init_set_str(r61032683, "0", 10, MPFR_RNDN);
        mpfr_init(r61032684);
        mpfr_init(r61032685);
        mpfr_init(r61032686);
        mpfr_init(r61032687);
        mpfr_init(r61032688);
        mpfr_init(r61032689);
        mpfr_init(r61032690);
        mpfr_init(r61032691);
        mpfr_init(r61032692);
        mpfr_init(r61032693);
        mpfr_init(r61032694);
        mpfr_init(r61032695);
        mpfr_init(r61032696);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r61032667, x, MPFR_RNDN);
        ;
        mpfr_mul(r61032669, r61032667, r61032668, MPFR_RNDN);
        mpfr_mul(r61032670, r61032667, r61032669, MPFR_RNDN);
        mpfr_add(r61032671, r61032666, r61032670, MPFR_RNDN);
        ;
        mpfr_pow(r61032673, r61032667, r61032672, MPFR_RNDN);
        mpfr_pow(r61032674, r61032673, r61032672, MPFR_RNDN);
        mpfr_mul(r61032675, r61032674, r61032674, MPFR_RNDN);
        mpfr_cbrt(r61032676, r61032675, MPFR_RNDN);
        mpfr_mul(r61032677, r61032671, r61032676, MPFR_RNDN);
        ;
        mpfr_add(r61032679, r61032677, r61032678, MPFR_RNDN);
        ;
        mpfr_mul(r61032681, r61032680, r61032667, MPFR_RNDN);
        mpfr_exp(r61032682, r61032672, MPFR_RNDN);
        ;
        mpfr_log(r61032684, r61032667, MPFR_RNDN);
        mpfr_add(r61032685, r61032683, r61032684, MPFR_RNDN);
        mpfr_pow(r61032686, r61032682, r61032685, MPFR_RNDN);
        mpfr_pow(r61032687, r61032686, r61032672, MPFR_RNDN);
        mpfr_sub(r61032688, r61032687, r61032673, MPFR_RNDN);
        mpfr_pow(r61032689, r61032682, r61032684, MPFR_RNDN);
        mpfr_add(r61032690, r61032689, r61032667, MPFR_RNDN);
        mpfr_mul(r61032691, r61032690, r61032667, MPFR_RNDN);
        mpfr_mul(r61032692, r61032689, r61032689, MPFR_RNDN);
        mpfr_add(r61032693, r61032691, r61032692, MPFR_RNDN);
        mpfr_div(r61032694, r61032688, r61032693, MPFR_RNDN);
        mpfr_mul(r61032695, r61032681, r61032694, MPFR_RNDN);
        mpfr_add(r61032696, r61032679, r61032695, MPFR_RNDN);
        return mpfr_get_d(r61032696, MPFR_RNDN);
}

