#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6432565 = -0.3125;
        float r6432566 = 6.5625;
        float r6432567 = x;
        float r6432568 = r6432567 * r6432567;
        float r6432569 = r6432566 * r6432568;
        float r6432570 = r6432565 + r6432569;
        float r6432571 = -19.6875;
        float r6432572 = r6432568 * r6432567;
        float r6432573 = r6432572 * r6432567;
        float r6432574 = r6432571 * r6432573;
        float r6432575 = r6432570 + r6432574;
        float r6432576 = 14.4375;
        float r6432577 = r6432573 * r6432567;
        float r6432578 = r6432577 * r6432567;
        float r6432579 = r6432576 * r6432578;
        float r6432580 = r6432575 + r6432579;
        return r6432580;
}

double f_id(double x) {
        double r6432581 = -0.3125;
        double r6432582 = 6.5625;
        double r6432583 = x;
        double r6432584 = r6432583 * r6432583;
        double r6432585 = r6432582 * r6432584;
        double r6432586 = r6432581 + r6432585;
        double r6432587 = -19.6875;
        double r6432588 = r6432584 * r6432583;
        double r6432589 = r6432588 * r6432583;
        double r6432590 = r6432587 * r6432589;
        double r6432591 = r6432586 + r6432590;
        double r6432592 = 14.4375;
        double r6432593 = r6432589 * r6432583;
        double r6432594 = r6432593 * r6432583;
        double r6432595 = r6432592 * r6432594;
        double r6432596 = r6432591 + r6432595;
        return r6432596;
}


double f_of(float x) {
        float r6432597 = x;
        float r6432598 = 6.5625;
        float r6432599 = r6432597 * r6432598;
        float r6432600 = r6432599 * r6432597;
        float r6432601 = -0.3125;
        float r6432602 = r6432600 + r6432601;
        float r6432603 = 14.4375;
        float r6432604 = 6;
        float r6432605 = pow(r6432597, r6432604);
        float r6432606 = r6432603 * r6432605;
        float r6432607 = 19.6875;
        float r6432608 = 4;
        float r6432609 = pow(r6432597, r6432608);
        float r6432610 = r6432607 * r6432609;
        float r6432611 = r6432606 - r6432610;
        float r6432612 = r6432602 + r6432611;
        return r6432612;
}

double f_od(double x) {
        double r6432613 = x;
        double r6432614 = 6.5625;
        double r6432615 = r6432613 * r6432614;
        double r6432616 = r6432615 * r6432613;
        double r6432617 = -0.3125;
        double r6432618 = r6432616 + r6432617;
        double r6432619 = 14.4375;
        double r6432620 = 6;
        double r6432621 = pow(r6432613, r6432620);
        double r6432622 = r6432619 * r6432621;
        double r6432623 = 19.6875;
        double r6432624 = 4;
        double r6432625 = pow(r6432613, r6432624);
        double r6432626 = r6432623 * r6432625;
        double r6432627 = r6432622 - r6432626;
        double r6432628 = r6432618 + r6432627;
        return r6432628;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432629, r6432630, r6432631, r6432632, r6432633, r6432634, r6432635, r6432636, r6432637, r6432638, r6432639, r6432640, r6432641, r6432642, r6432643, r6432644;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432629, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432630, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6432631);
        mpfr_init(r6432632);
        mpfr_init(r6432633);
        mpfr_init(r6432634);
        mpfr_init_set_str(r6432635, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6432636);
        mpfr_init(r6432637);
        mpfr_init(r6432638);
        mpfr_init(r6432639);
        mpfr_init_set_str(r6432640, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6432641);
        mpfr_init(r6432642);
        mpfr_init(r6432643);
        mpfr_init(r6432644);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6432631, x, MPFR_RNDN);
        mpfr_mul(r6432632, r6432631, r6432631, MPFR_RNDN);
        mpfr_mul(r6432633, r6432630, r6432632, MPFR_RNDN);
        mpfr_add(r6432634, r6432629, r6432633, MPFR_RNDN);
        ;
        mpfr_mul(r6432636, r6432632, r6432631, MPFR_RNDN);
        mpfr_mul(r6432637, r6432636, r6432631, MPFR_RNDN);
        mpfr_mul(r6432638, r6432635, r6432637, MPFR_RNDN);
        mpfr_add(r6432639, r6432634, r6432638, MPFR_RNDN);
        ;
        mpfr_mul(r6432641, r6432637, r6432631, MPFR_RNDN);
        mpfr_mul(r6432642, r6432641, r6432631, MPFR_RNDN);
        mpfr_mul(r6432643, r6432640, r6432642, MPFR_RNDN);
        mpfr_add(r6432644, r6432639, r6432643, MPFR_RNDN);
        return mpfr_get_d(r6432644, MPFR_RNDN);
}

static mpfr_t r6432645, r6432646, r6432647, r6432648, r6432649, r6432650, r6432651, r6432652, r6432653, r6432654, r6432655, r6432656, r6432657, r6432658, r6432659, r6432660;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6432645);
        mpfr_init_set_str(r6432646, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6432647);
        mpfr_init(r6432648);
        mpfr_init_set_str(r6432649, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6432650);
        mpfr_init_set_str(r6432651, "14.4375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432652, "6", 10, MPFR_RNDN);
        mpfr_init(r6432653);
        mpfr_init(r6432654);
        mpfr_init_set_str(r6432655, "19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432656, "4", 10, MPFR_RNDN);
        mpfr_init(r6432657);
        mpfr_init(r6432658);
        mpfr_init(r6432659);
        mpfr_init(r6432660);
}

double f_fm(double x) {
        mpfr_set_d(r6432645, x, MPFR_RNDN);
        ;
        mpfr_mul(r6432647, r6432645, r6432646, MPFR_RNDN);
        mpfr_mul(r6432648, r6432647, r6432645, MPFR_RNDN);
        ;
        mpfr_add(r6432650, r6432648, r6432649, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6432653, r6432645, r6432652, MPFR_RNDN);
        mpfr_mul(r6432654, r6432651, r6432653, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6432657, r6432645, r6432656, MPFR_RNDN);
        mpfr_mul(r6432658, r6432655, r6432657, MPFR_RNDN);
        mpfr_sub(r6432659, r6432654, r6432658, MPFR_RNDN);
        mpfr_add(r6432660, r6432650, r6432659, MPFR_RNDN);
        return mpfr_get_d(r6432660, MPFR_RNDN);
}

static mpfr_t r6432661, r6432662, r6432663, r6432664, r6432665, r6432666, r6432667, r6432668, r6432669, r6432670, r6432671, r6432672, r6432673, r6432674, r6432675, r6432676;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6432661);
        mpfr_init_set_str(r6432662, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6432663);
        mpfr_init(r6432664);
        mpfr_init_set_str(r6432665, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6432666);
        mpfr_init_set_str(r6432667, "14.4375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432668, "6", 10, MPFR_RNDN);
        mpfr_init(r6432669);
        mpfr_init(r6432670);
        mpfr_init_set_str(r6432671, "19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432672, "4", 10, MPFR_RNDN);
        mpfr_init(r6432673);
        mpfr_init(r6432674);
        mpfr_init(r6432675);
        mpfr_init(r6432676);
}

double f_dm(double x) {
        mpfr_set_d(r6432661, x, MPFR_RNDN);
        ;
        mpfr_mul(r6432663, r6432661, r6432662, MPFR_RNDN);
        mpfr_mul(r6432664, r6432663, r6432661, MPFR_RNDN);
        ;
        mpfr_add(r6432666, r6432664, r6432665, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6432669, r6432661, r6432668, MPFR_RNDN);
        mpfr_mul(r6432670, r6432667, r6432669, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6432673, r6432661, r6432672, MPFR_RNDN);
        mpfr_mul(r6432674, r6432671, r6432673, MPFR_RNDN);
        mpfr_sub(r6432675, r6432670, r6432674, MPFR_RNDN);
        mpfr_add(r6432676, r6432666, r6432675, MPFR_RNDN);
        return mpfr_get_d(r6432676, MPFR_RNDN);
}

