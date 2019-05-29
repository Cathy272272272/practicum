#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7405501 = -0.246094;
        float r7405502 = 13.535156;
        float r7405503 = x;
        float r7405504 = r7405503 * r7405503;
        float r7405505 = r7405502 * r7405504;
        float r7405506 = r7405501 + r7405505;
        float r7405507 = -117.304688;
        float r7405508 = r7405504 * r7405503;
        float r7405509 = r7405508 * r7405503;
        float r7405510 = r7405507 * r7405509;
        float r7405511 = r7405506 + r7405510;
        float r7405512 = 351.914062;
        float r7405513 = r7405509 * r7405503;
        float r7405514 = r7405513 * r7405503;
        float r7405515 = r7405512 * r7405514;
        float r7405516 = r7405511 + r7405515;
        float r7405517 = -427.324219;
        float r7405518 = r7405514 * r7405503;
        float r7405519 = r7405518 * r7405503;
        float r7405520 = r7405517 * r7405519;
        float r7405521 = r7405516 + r7405520;
        float r7405522 = 180.425781;
        float r7405523 = r7405519 * r7405503;
        float r7405524 = r7405523 * r7405503;
        float r7405525 = r7405522 * r7405524;
        float r7405526 = r7405521 + r7405525;
        return r7405526;
}

double f_id(double x) {
        double r7405527 = -0.246094;
        double r7405528 = 13.535156;
        double r7405529 = x;
        double r7405530 = r7405529 * r7405529;
        double r7405531 = r7405528 * r7405530;
        double r7405532 = r7405527 + r7405531;
        double r7405533 = -117.304688;
        double r7405534 = r7405530 * r7405529;
        double r7405535 = r7405534 * r7405529;
        double r7405536 = r7405533 * r7405535;
        double r7405537 = r7405532 + r7405536;
        double r7405538 = 351.914062;
        double r7405539 = r7405535 * r7405529;
        double r7405540 = r7405539 * r7405529;
        double r7405541 = r7405538 * r7405540;
        double r7405542 = r7405537 + r7405541;
        double r7405543 = -427.324219;
        double r7405544 = r7405540 * r7405529;
        double r7405545 = r7405544 * r7405529;
        double r7405546 = r7405543 * r7405545;
        double r7405547 = r7405542 + r7405546;
        double r7405548 = 180.425781;
        double r7405549 = r7405545 * r7405529;
        double r7405550 = r7405549 * r7405529;
        double r7405551 = r7405548 * r7405550;
        double r7405552 = r7405547 + r7405551;
        return r7405552;
}


double f_of(float x) {
        float r7405553 = x;
        float r7405554 = r7405553 * r7405553;
        float r7405555 = r7405554 * r7405554;
        float r7405556 = -117.304688;
        float r7405557 = 351.914062;
        float r7405558 = r7405557 * r7405553;
        float r7405559 = r7405553 * r7405558;
        float r7405560 = r7405556 + r7405559;
        float r7405561 = r7405555 * r7405560;
        float r7405562 = r7405555 * r7405555;
        float r7405563 = 180.425781;
        float r7405564 = r7405563 * r7405554;
        float r7405565 = cbrt(r7405564);
        float r7405566 = r7405565 * r7405565;
        float r7405567 = r7405566 * r7405565;
        float r7405568 = -427.324219;
        float r7405569 = r7405567 + r7405568;
        float r7405570 = r7405562 * r7405569;
        float r7405571 = r7405561 + r7405570;
        float r7405572 = 13.535156;
        float r7405573 = r7405553 * r7405572;
        float r7405574 = r7405553 * r7405573;
        float r7405575 = -0.246094;
        float r7405576 = r7405574 + r7405575;
        float r7405577 = r7405571 + r7405576;
        return r7405577;
}

double f_od(double x) {
        double r7405578 = x;
        double r7405579 = r7405578 * r7405578;
        double r7405580 = r7405579 * r7405579;
        double r7405581 = -117.304688;
        double r7405582 = 351.914062;
        double r7405583 = r7405582 * r7405578;
        double r7405584 = r7405578 * r7405583;
        double r7405585 = r7405581 + r7405584;
        double r7405586 = r7405580 * r7405585;
        double r7405587 = r7405580 * r7405580;
        double r7405588 = 180.425781;
        double r7405589 = r7405588 * r7405579;
        double r7405590 = cbrt(r7405589);
        double r7405591 = r7405590 * r7405590;
        double r7405592 = r7405591 * r7405590;
        double r7405593 = -427.324219;
        double r7405594 = r7405592 + r7405593;
        double r7405595 = r7405587 * r7405594;
        double r7405596 = r7405586 + r7405595;
        double r7405597 = 13.535156;
        double r7405598 = r7405578 * r7405597;
        double r7405599 = r7405578 * r7405598;
        double r7405600 = -0.246094;
        double r7405601 = r7405599 + r7405600;
        double r7405602 = r7405596 + r7405601;
        return r7405602;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7405603, r7405604, r7405605, r7405606, r7405607, r7405608, r7405609, r7405610, r7405611, r7405612, r7405613, r7405614, r7405615, r7405616, r7405617, r7405618, r7405619, r7405620, r7405621, r7405622, r7405623, r7405624, r7405625, r7405626, r7405627, r7405628;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7405603, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405604, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7405605);
        mpfr_init(r7405606);
        mpfr_init(r7405607);
        mpfr_init(r7405608);
        mpfr_init_set_str(r7405609, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r7405610);
        mpfr_init(r7405611);
        mpfr_init(r7405612);
        mpfr_init(r7405613);
        mpfr_init_set_str(r7405614, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7405615);
        mpfr_init(r7405616);
        mpfr_init(r7405617);
        mpfr_init(r7405618);
        mpfr_init_set_str(r7405619, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7405620);
        mpfr_init(r7405621);
        mpfr_init(r7405622);
        mpfr_init(r7405623);
        mpfr_init_set_str(r7405624, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7405625);
        mpfr_init(r7405626);
        mpfr_init(r7405627);
        mpfr_init(r7405628);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7405605, x, MPFR_RNDN);
        mpfr_mul(r7405606, r7405605, r7405605, MPFR_RNDN);
        mpfr_mul(r7405607, r7405604, r7405606, MPFR_RNDN);
        mpfr_add(r7405608, r7405603, r7405607, MPFR_RNDN);
        ;
        mpfr_mul(r7405610, r7405606, r7405605, MPFR_RNDN);
        mpfr_mul(r7405611, r7405610, r7405605, MPFR_RNDN);
        mpfr_mul(r7405612, r7405609, r7405611, MPFR_RNDN);
        mpfr_add(r7405613, r7405608, r7405612, MPFR_RNDN);
        ;
        mpfr_mul(r7405615, r7405611, r7405605, MPFR_RNDN);
        mpfr_mul(r7405616, r7405615, r7405605, MPFR_RNDN);
        mpfr_mul(r7405617, r7405614, r7405616, MPFR_RNDN);
        mpfr_add(r7405618, r7405613, r7405617, MPFR_RNDN);
        ;
        mpfr_mul(r7405620, r7405616, r7405605, MPFR_RNDN);
        mpfr_mul(r7405621, r7405620, r7405605, MPFR_RNDN);
        mpfr_mul(r7405622, r7405619, r7405621, MPFR_RNDN);
        mpfr_add(r7405623, r7405618, r7405622, MPFR_RNDN);
        ;
        mpfr_mul(r7405625, r7405621, r7405605, MPFR_RNDN);
        mpfr_mul(r7405626, r7405625, r7405605, MPFR_RNDN);
        mpfr_mul(r7405627, r7405624, r7405626, MPFR_RNDN);
        mpfr_add(r7405628, r7405623, r7405627, MPFR_RNDN);
        return mpfr_get_d(r7405628, MPFR_RNDN);
}

static mpfr_t r7405629, r7405630, r7405631, r7405632, r7405633, r7405634, r7405635, r7405636, r7405637, r7405638, r7405639, r7405640, r7405641, r7405642, r7405643, r7405644, r7405645, r7405646, r7405647, r7405648, r7405649, r7405650, r7405651, r7405652, r7405653;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7405629);
        mpfr_init(r7405630);
        mpfr_init(r7405631);
        mpfr_init_set_str(r7405632, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405633, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7405634);
        mpfr_init(r7405635);
        mpfr_init(r7405636);
        mpfr_init(r7405637);
        mpfr_init(r7405638);
        mpfr_init_set_str(r7405639, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7405640);
        mpfr_init(r7405641);
        mpfr_init(r7405642);
        mpfr_init(r7405643);
        mpfr_init_set_str(r7405644, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7405645);
        mpfr_init(r7405646);
        mpfr_init(r7405647);
        mpfr_init_set_str(r7405648, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7405649);
        mpfr_init(r7405650);
        mpfr_init_set_str(r7405651, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r7405652);
        mpfr_init(r7405653);
}

double f_fm(double x) {
        mpfr_set_d(r7405629, x, MPFR_RNDN);
        mpfr_mul(r7405630, r7405629, r7405629, MPFR_RNDN);
        mpfr_mul(r7405631, r7405630, r7405630, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7405634, r7405633, r7405629, MPFR_RNDN);
        mpfr_mul(r7405635, r7405629, r7405634, MPFR_RNDN);
        mpfr_add(r7405636, r7405632, r7405635, MPFR_RNDN);
        mpfr_mul(r7405637, r7405631, r7405636, MPFR_RNDN);
        mpfr_mul(r7405638, r7405631, r7405631, MPFR_RNDN);
        ;
        mpfr_mul(r7405640, r7405639, r7405630, MPFR_RNDN);
        mpfr_cbrt(r7405641, r7405640, MPFR_RNDN);
        mpfr_mul(r7405642, r7405641, r7405641, MPFR_RNDN);
        mpfr_mul(r7405643, r7405642, r7405641, MPFR_RNDN);
        ;
        mpfr_add(r7405645, r7405643, r7405644, MPFR_RNDN);
        mpfr_mul(r7405646, r7405638, r7405645, MPFR_RNDN);
        mpfr_add(r7405647, r7405637, r7405646, MPFR_RNDN);
        ;
        mpfr_mul(r7405649, r7405629, r7405648, MPFR_RNDN);
        mpfr_mul(r7405650, r7405629, r7405649, MPFR_RNDN);
        ;
        mpfr_add(r7405652, r7405650, r7405651, MPFR_RNDN);
        mpfr_add(r7405653, r7405647, r7405652, MPFR_RNDN);
        return mpfr_get_d(r7405653, MPFR_RNDN);
}

static mpfr_t r7405654, r7405655, r7405656, r7405657, r7405658, r7405659, r7405660, r7405661, r7405662, r7405663, r7405664, r7405665, r7405666, r7405667, r7405668, r7405669, r7405670, r7405671, r7405672, r7405673, r7405674, r7405675, r7405676, r7405677, r7405678;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7405654);
        mpfr_init(r7405655);
        mpfr_init(r7405656);
        mpfr_init_set_str(r7405657, "-117.304688", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405658, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r7405659);
        mpfr_init(r7405660);
        mpfr_init(r7405661);
        mpfr_init(r7405662);
        mpfr_init(r7405663);
        mpfr_init_set_str(r7405664, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r7405665);
        mpfr_init(r7405666);
        mpfr_init(r7405667);
        mpfr_init(r7405668);
        mpfr_init_set_str(r7405669, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r7405670);
        mpfr_init(r7405671);
        mpfr_init(r7405672);
        mpfr_init_set_str(r7405673, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r7405674);
        mpfr_init(r7405675);
        mpfr_init_set_str(r7405676, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r7405677);
        mpfr_init(r7405678);
}

double f_dm(double x) {
        mpfr_set_d(r7405654, x, MPFR_RNDN);
        mpfr_mul(r7405655, r7405654, r7405654, MPFR_RNDN);
        mpfr_mul(r7405656, r7405655, r7405655, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7405659, r7405658, r7405654, MPFR_RNDN);
        mpfr_mul(r7405660, r7405654, r7405659, MPFR_RNDN);
        mpfr_add(r7405661, r7405657, r7405660, MPFR_RNDN);
        mpfr_mul(r7405662, r7405656, r7405661, MPFR_RNDN);
        mpfr_mul(r7405663, r7405656, r7405656, MPFR_RNDN);
        ;
        mpfr_mul(r7405665, r7405664, r7405655, MPFR_RNDN);
        mpfr_cbrt(r7405666, r7405665, MPFR_RNDN);
        mpfr_mul(r7405667, r7405666, r7405666, MPFR_RNDN);
        mpfr_mul(r7405668, r7405667, r7405666, MPFR_RNDN);
        ;
        mpfr_add(r7405670, r7405668, r7405669, MPFR_RNDN);
        mpfr_mul(r7405671, r7405663, r7405670, MPFR_RNDN);
        mpfr_add(r7405672, r7405662, r7405671, MPFR_RNDN);
        ;
        mpfr_mul(r7405674, r7405654, r7405673, MPFR_RNDN);
        mpfr_mul(r7405675, r7405654, r7405674, MPFR_RNDN);
        ;
        mpfr_add(r7405677, r7405675, r7405676, MPFR_RNDN);
        mpfr_add(r7405678, r7405672, r7405677, MPFR_RNDN);
        return mpfr_get_d(r7405678, MPFR_RNDN);
}

