#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10198539 = 1.0;
        float r10198540 = -5.0;
        float r10198541 = x;
        float r10198542 = r10198540 * r10198541;
        float r10198543 = r10198539 + r10198542;
        float r10198544 = 5.0;
        float r10198545 = r10198541 * r10198541;
        float r10198546 = r10198544 * r10198545;
        float r10198547 = r10198543 + r10198546;
        float r10198548 = -1.666667;
        float r10198549 = r10198545 * r10198541;
        float r10198550 = r10198548 * r10198549;
        float r10198551 = r10198547 + r10198550;
        float r10198552 = 0.208333;
        float r10198553 = r10198549 * r10198541;
        float r10198554 = r10198552 * r10198553;
        float r10198555 = r10198551 + r10198554;
        float r10198556 = -0.008333;
        float r10198557 = r10198553 * r10198541;
        float r10198558 = r10198556 * r10198557;
        float r10198559 = r10198555 + r10198558;
        return r10198559;
}

double f_id(double x) {
        double r10198560 = 1.0;
        double r10198561 = -5.0;
        double r10198562 = x;
        double r10198563 = r10198561 * r10198562;
        double r10198564 = r10198560 + r10198563;
        double r10198565 = 5.0;
        double r10198566 = r10198562 * r10198562;
        double r10198567 = r10198565 * r10198566;
        double r10198568 = r10198564 + r10198567;
        double r10198569 = -1.666667;
        double r10198570 = r10198566 * r10198562;
        double r10198571 = r10198569 * r10198570;
        double r10198572 = r10198568 + r10198571;
        double r10198573 = 0.208333;
        double r10198574 = r10198570 * r10198562;
        double r10198575 = r10198573 * r10198574;
        double r10198576 = r10198572 + r10198575;
        double r10198577 = -0.008333;
        double r10198578 = r10198574 * r10198562;
        double r10198579 = r10198577 * r10198578;
        double r10198580 = r10198576 + r10198579;
        return r10198580;
}


double f_of(float x) {
        float r10198581 = x;
        float r10198582 = -5.0;
        float r10198583 = r10198581 * r10198582;
        float r10198584 = 1.0;
        float r10198585 = r10198583 + r10198584;
        float r10198586 = 2;
        float r10198587 = r10198586 + r10198586;
        float r10198588 = pow(r10198581, r10198587);
        float r10198589 = -0.008333;
        float r10198590 = r10198589 * r10198581;
        float r10198591 = r10198588 * r10198590;
        float r10198592 = 0.208333;
        float r10198593 = r10198588 * r10198592;
        float r10198594 = r10198581 * r10198581;
        float r10198595 = -1.666667;
        float r10198596 = r10198595 * r10198581;
        float r10198597 = 5.0;
        float r10198598 = r10198596 + r10198597;
        float r10198599 = r10198594 * r10198598;
        float r10198600 = r10198593 + r10198599;
        float r10198601 = r10198591 + r10198600;
        float r10198602 = r10198585 + r10198601;
        return r10198602;
}

double f_od(double x) {
        double r10198603 = x;
        double r10198604 = -5.0;
        double r10198605 = r10198603 * r10198604;
        double r10198606 = 1.0;
        double r10198607 = r10198605 + r10198606;
        double r10198608 = 2;
        double r10198609 = r10198608 + r10198608;
        double r10198610 = pow(r10198603, r10198609);
        double r10198611 = -0.008333;
        double r10198612 = r10198611 * r10198603;
        double r10198613 = r10198610 * r10198612;
        double r10198614 = 0.208333;
        double r10198615 = r10198610 * r10198614;
        double r10198616 = r10198603 * r10198603;
        double r10198617 = -1.666667;
        double r10198618 = r10198617 * r10198603;
        double r10198619 = 5.0;
        double r10198620 = r10198618 + r10198619;
        double r10198621 = r10198616 * r10198620;
        double r10198622 = r10198615 + r10198621;
        double r10198623 = r10198613 + r10198622;
        double r10198624 = r10198607 + r10198623;
        return r10198624;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198625, r10198626, r10198627, r10198628, r10198629, r10198630, r10198631, r10198632, r10198633, r10198634, r10198635, r10198636, r10198637, r10198638, r10198639, r10198640, r10198641, r10198642, r10198643, r10198644, r10198645;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10198625, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198626, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10198627);
        mpfr_init(r10198628);
        mpfr_init(r10198629);
        mpfr_init_set_str(r10198630, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10198631);
        mpfr_init(r10198632);
        mpfr_init(r10198633);
        mpfr_init_set_str(r10198634, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10198635);
        mpfr_init(r10198636);
        mpfr_init(r10198637);
        mpfr_init_set_str(r10198638, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10198639);
        mpfr_init(r10198640);
        mpfr_init(r10198641);
        mpfr_init_set_str(r10198642, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10198643);
        mpfr_init(r10198644);
        mpfr_init(r10198645);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198627, x, MPFR_RNDN);
        mpfr_mul(r10198628, r10198626, r10198627, MPFR_RNDN);
        mpfr_add(r10198629, r10198625, r10198628, MPFR_RNDN);
        ;
        mpfr_mul(r10198631, r10198627, r10198627, MPFR_RNDN);
        mpfr_mul(r10198632, r10198630, r10198631, MPFR_RNDN);
        mpfr_add(r10198633, r10198629, r10198632, MPFR_RNDN);
        ;
        mpfr_mul(r10198635, r10198631, r10198627, MPFR_RNDN);
        mpfr_mul(r10198636, r10198634, r10198635, MPFR_RNDN);
        mpfr_add(r10198637, r10198633, r10198636, MPFR_RNDN);
        ;
        mpfr_mul(r10198639, r10198635, r10198627, MPFR_RNDN);
        mpfr_mul(r10198640, r10198638, r10198639, MPFR_RNDN);
        mpfr_add(r10198641, r10198637, r10198640, MPFR_RNDN);
        ;
        mpfr_mul(r10198643, r10198639, r10198627, MPFR_RNDN);
        mpfr_mul(r10198644, r10198642, r10198643, MPFR_RNDN);
        mpfr_add(r10198645, r10198641, r10198644, MPFR_RNDN);
        return mpfr_get_d(r10198645, MPFR_RNDN);
}

static mpfr_t r10198646, r10198647, r10198648, r10198649, r10198650, r10198651, r10198652, r10198653, r10198654, r10198655, r10198656, r10198657, r10198658, r10198659, r10198660, r10198661, r10198662, r10198663, r10198664, r10198665, r10198666, r10198667;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198646);
        mpfr_init_set_str(r10198647, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10198648);
        mpfr_init_set_str(r10198649, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198650);
        mpfr_init_set_str(r10198651, "2", 10, MPFR_RNDN);
        mpfr_init(r10198652);
        mpfr_init(r10198653);
        mpfr_init_set_str(r10198654, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10198655);
        mpfr_init(r10198656);
        mpfr_init_set_str(r10198657, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10198658);
        mpfr_init(r10198659);
        mpfr_init_set_str(r10198660, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10198661);
        mpfr_init_set_str(r10198662, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10198663);
        mpfr_init(r10198664);
        mpfr_init(r10198665);
        mpfr_init(r10198666);
        mpfr_init(r10198667);
}

double f_fm(double x) {
        mpfr_set_d(r10198646, x, MPFR_RNDN);
        ;
        mpfr_mul(r10198648, r10198646, r10198647, MPFR_RNDN);
        ;
        mpfr_add(r10198650, r10198648, r10198649, MPFR_RNDN);
        ;
        mpfr_add(r10198652, r10198651, r10198651, MPFR_RNDN);
        mpfr_pow(r10198653, r10198646, r10198652, MPFR_RNDN);
        ;
        mpfr_mul(r10198655, r10198654, r10198646, MPFR_RNDN);
        mpfr_mul(r10198656, r10198653, r10198655, MPFR_RNDN);
        ;
        mpfr_mul(r10198658, r10198653, r10198657, MPFR_RNDN);
        mpfr_mul(r10198659, r10198646, r10198646, MPFR_RNDN);
        ;
        mpfr_mul(r10198661, r10198660, r10198646, MPFR_RNDN);
        ;
        mpfr_add(r10198663, r10198661, r10198662, MPFR_RNDN);
        mpfr_mul(r10198664, r10198659, r10198663, MPFR_RNDN);
        mpfr_add(r10198665, r10198658, r10198664, MPFR_RNDN);
        mpfr_add(r10198666, r10198656, r10198665, MPFR_RNDN);
        mpfr_add(r10198667, r10198650, r10198666, MPFR_RNDN);
        return mpfr_get_d(r10198667, MPFR_RNDN);
}

static mpfr_t r10198668, r10198669, r10198670, r10198671, r10198672, r10198673, r10198674, r10198675, r10198676, r10198677, r10198678, r10198679, r10198680, r10198681, r10198682, r10198683, r10198684, r10198685, r10198686, r10198687, r10198688, r10198689;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198668);
        mpfr_init_set_str(r10198669, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10198670);
        mpfr_init_set_str(r10198671, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198672);
        mpfr_init_set_str(r10198673, "2", 10, MPFR_RNDN);
        mpfr_init(r10198674);
        mpfr_init(r10198675);
        mpfr_init_set_str(r10198676, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10198677);
        mpfr_init(r10198678);
        mpfr_init_set_str(r10198679, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10198680);
        mpfr_init(r10198681);
        mpfr_init_set_str(r10198682, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10198683);
        mpfr_init_set_str(r10198684, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10198685);
        mpfr_init(r10198686);
        mpfr_init(r10198687);
        mpfr_init(r10198688);
        mpfr_init(r10198689);
}

double f_dm(double x) {
        mpfr_set_d(r10198668, x, MPFR_RNDN);
        ;
        mpfr_mul(r10198670, r10198668, r10198669, MPFR_RNDN);
        ;
        mpfr_add(r10198672, r10198670, r10198671, MPFR_RNDN);
        ;
        mpfr_add(r10198674, r10198673, r10198673, MPFR_RNDN);
        mpfr_pow(r10198675, r10198668, r10198674, MPFR_RNDN);
        ;
        mpfr_mul(r10198677, r10198676, r10198668, MPFR_RNDN);
        mpfr_mul(r10198678, r10198675, r10198677, MPFR_RNDN);
        ;
        mpfr_mul(r10198680, r10198675, r10198679, MPFR_RNDN);
        mpfr_mul(r10198681, r10198668, r10198668, MPFR_RNDN);
        ;
        mpfr_mul(r10198683, r10198682, r10198668, MPFR_RNDN);
        ;
        mpfr_add(r10198685, r10198683, r10198684, MPFR_RNDN);
        mpfr_mul(r10198686, r10198681, r10198685, MPFR_RNDN);
        mpfr_add(r10198687, r10198680, r10198686, MPFR_RNDN);
        mpfr_add(r10198688, r10198678, r10198687, MPFR_RNDN);
        mpfr_add(r10198689, r10198672, r10198688, MPFR_RNDN);
        return mpfr_get_d(r10198689, MPFR_RNDN);
}

