#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r10035542 = 2.460938;
        float r10035543 = x;
        float r10035544 = r10035542 * r10035543;
        float r10035545 = -36.09375;
        float r10035546 = r10035543 * r10035543;
        float r10035547 = r10035546 * r10035543;
        float r10035548 = r10035545 * r10035547;
        float r10035549 = r10035544 + r10035548;
        float r10035550 = 140.765625;
        float r10035551 = r10035547 * r10035543;
        float r10035552 = r10035551 * r10035543;
        float r10035553 = r10035550 * r10035552;
        float r10035554 = r10035549 + r10035553;
        float r10035555 = -201.09375;
        float r10035556 = r10035552 * r10035543;
        float r10035557 = r10035556 * r10035543;
        float r10035558 = r10035555 * r10035557;
        float r10035559 = r10035554 + r10035558;
        float r10035560 = 94.960938;
        float r10035561 = r10035557 * r10035543;
        float r10035562 = r10035561 * r10035543;
        float r10035563 = r10035560 * r10035562;
        float r10035564 = r10035559 + r10035563;
        return r10035564;
}

double f_id(double x) {
        double r10035565 = 2.460938;
        double r10035566 = x;
        double r10035567 = r10035565 * r10035566;
        double r10035568 = -36.09375;
        double r10035569 = r10035566 * r10035566;
        double r10035570 = r10035569 * r10035566;
        double r10035571 = r10035568 * r10035570;
        double r10035572 = r10035567 + r10035571;
        double r10035573 = 140.765625;
        double r10035574 = r10035570 * r10035566;
        double r10035575 = r10035574 * r10035566;
        double r10035576 = r10035573 * r10035575;
        double r10035577 = r10035572 + r10035576;
        double r10035578 = -201.09375;
        double r10035579 = r10035575 * r10035566;
        double r10035580 = r10035579 * r10035566;
        double r10035581 = r10035578 * r10035580;
        double r10035582 = r10035577 + r10035581;
        double r10035583 = 94.960938;
        double r10035584 = r10035580 * r10035566;
        double r10035585 = r10035584 * r10035566;
        double r10035586 = r10035583 * r10035585;
        double r10035587 = r10035582 + r10035586;
        return r10035587;
}


double f_of(float x) {
        float r10035588 = x;
        float r10035589 = r10035588 * r10035588;
        float r10035590 = -36.09375;
        float r10035591 = r10035590 * r10035588;
        float r10035592 = 140.765625;
        float r10035593 = r10035588 * r10035592;
        float r10035594 = r10035589 * r10035593;
        float r10035595 = r10035591 + r10035594;
        float r10035596 = r10035589 * r10035595;
        float r10035597 = 7;
        float r10035598 = pow(r10035588, r10035597);
        float r10035599 = -201.09375;
        float r10035600 = r10035598 * r10035599;
        float r10035601 = 2.460938;
        float r10035602 = r10035601 * r10035588;
        float r10035603 = r10035600 + r10035602;
        float r10035604 = 94.960938;
        float r10035605 = r10035604 * r10035588;
        float r10035606 = 1;
        float r10035607 = 3;
        float r10035608 = r10035606 + r10035607;
        float r10035609 = pow(r10035589, r10035608);
        float r10035610 = r10035605 * r10035609;
        float r10035611 = r10035603 + r10035610;
        float r10035612 = r10035596 + r10035611;
        return r10035612;
}

double f_od(double x) {
        double r10035613 = x;
        double r10035614 = r10035613 * r10035613;
        double r10035615 = -36.09375;
        double r10035616 = r10035615 * r10035613;
        double r10035617 = 140.765625;
        double r10035618 = r10035613 * r10035617;
        double r10035619 = r10035614 * r10035618;
        double r10035620 = r10035616 + r10035619;
        double r10035621 = r10035614 * r10035620;
        double r10035622 = 7;
        double r10035623 = pow(r10035613, r10035622);
        double r10035624 = -201.09375;
        double r10035625 = r10035623 * r10035624;
        double r10035626 = 2.460938;
        double r10035627 = r10035626 * r10035613;
        double r10035628 = r10035625 + r10035627;
        double r10035629 = 94.960938;
        double r10035630 = r10035629 * r10035613;
        double r10035631 = 1;
        double r10035632 = 3;
        double r10035633 = r10035631 + r10035632;
        double r10035634 = pow(r10035614, r10035633);
        double r10035635 = r10035630 * r10035634;
        double r10035636 = r10035628 + r10035635;
        double r10035637 = r10035621 + r10035636;
        return r10035637;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10035638, r10035639, r10035640, r10035641, r10035642, r10035643, r10035644, r10035645, r10035646, r10035647, r10035648, r10035649, r10035650, r10035651, r10035652, r10035653, r10035654, r10035655, r10035656, r10035657, r10035658, r10035659, r10035660;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10035638, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r10035639);
        mpfr_init(r10035640);
        mpfr_init_set_str(r10035641, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r10035642);
        mpfr_init(r10035643);
        mpfr_init(r10035644);
        mpfr_init(r10035645);
        mpfr_init_set_str(r10035646, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r10035647);
        mpfr_init(r10035648);
        mpfr_init(r10035649);
        mpfr_init(r10035650);
        mpfr_init_set_str(r10035651, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r10035652);
        mpfr_init(r10035653);
        mpfr_init(r10035654);
        mpfr_init(r10035655);
        mpfr_init_set_str(r10035656, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r10035657);
        mpfr_init(r10035658);
        mpfr_init(r10035659);
        mpfr_init(r10035660);
}

double f_im(double x) {
        ;
        mpfr_set_d(r10035639, x, MPFR_RNDN);
        mpfr_mul(r10035640, r10035638, r10035639, MPFR_RNDN);
        ;
        mpfr_mul(r10035642, r10035639, r10035639, MPFR_RNDN);
        mpfr_mul(r10035643, r10035642, r10035639, MPFR_RNDN);
        mpfr_mul(r10035644, r10035641, r10035643, MPFR_RNDN);
        mpfr_add(r10035645, r10035640, r10035644, MPFR_RNDN);
        ;
        mpfr_mul(r10035647, r10035643, r10035639, MPFR_RNDN);
        mpfr_mul(r10035648, r10035647, r10035639, MPFR_RNDN);
        mpfr_mul(r10035649, r10035646, r10035648, MPFR_RNDN);
        mpfr_add(r10035650, r10035645, r10035649, MPFR_RNDN);
        ;
        mpfr_mul(r10035652, r10035648, r10035639, MPFR_RNDN);
        mpfr_mul(r10035653, r10035652, r10035639, MPFR_RNDN);
        mpfr_mul(r10035654, r10035651, r10035653, MPFR_RNDN);
        mpfr_add(r10035655, r10035650, r10035654, MPFR_RNDN);
        ;
        mpfr_mul(r10035657, r10035653, r10035639, MPFR_RNDN);
        mpfr_mul(r10035658, r10035657, r10035639, MPFR_RNDN);
        mpfr_mul(r10035659, r10035656, r10035658, MPFR_RNDN);
        mpfr_add(r10035660, r10035655, r10035659, MPFR_RNDN);
        return mpfr_get_d(r10035660, MPFR_RNDN);
}

static mpfr_t r10035661, r10035662, r10035663, r10035664, r10035665, r10035666, r10035667, r10035668, r10035669, r10035670, r10035671, r10035672, r10035673, r10035674, r10035675, r10035676, r10035677, r10035678, r10035679, r10035680, r10035681, r10035682, r10035683, r10035684, r10035685;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10035661);
        mpfr_init(r10035662);
        mpfr_init_set_str(r10035663, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r10035664);
        mpfr_init_set_str(r10035665, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r10035666);
        mpfr_init(r10035667);
        mpfr_init(r10035668);
        mpfr_init(r10035669);
        mpfr_init_set_str(r10035670, "7", 10, MPFR_RNDN);
        mpfr_init(r10035671);
        mpfr_init_set_str(r10035672, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r10035673);
        mpfr_init_set_str(r10035674, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r10035675);
        mpfr_init(r10035676);
        mpfr_init_set_str(r10035677, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r10035678);
        mpfr_init_set_str(r10035679, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r10035680, "3", 10, MPFR_RNDN);
        mpfr_init(r10035681);
        mpfr_init(r10035682);
        mpfr_init(r10035683);
        mpfr_init(r10035684);
        mpfr_init(r10035685);
}

double f_fm(double x) {
        mpfr_set_d(r10035661, x, MPFR_RNDN);
        mpfr_mul(r10035662, r10035661, r10035661, MPFR_RNDN);
        ;
        mpfr_mul(r10035664, r10035663, r10035661, MPFR_RNDN);
        ;
        mpfr_mul(r10035666, r10035661, r10035665, MPFR_RNDN);
        mpfr_mul(r10035667, r10035662, r10035666, MPFR_RNDN);
        mpfr_add(r10035668, r10035664, r10035667, MPFR_RNDN);
        mpfr_mul(r10035669, r10035662, r10035668, MPFR_RNDN);
        ;
        mpfr_pow(r10035671, r10035661, r10035670, MPFR_RNDN);
        ;
        mpfr_mul(r10035673, r10035671, r10035672, MPFR_RNDN);
        ;
        mpfr_mul(r10035675, r10035674, r10035661, MPFR_RNDN);
        mpfr_add(r10035676, r10035673, r10035675, MPFR_RNDN);
        ;
        mpfr_mul(r10035678, r10035677, r10035661, MPFR_RNDN);
        ;
        ;
        mpfr_add(r10035681, r10035679, r10035680, MPFR_RNDN);
        mpfr_pow(r10035682, r10035662, r10035681, MPFR_RNDN);
        mpfr_mul(r10035683, r10035678, r10035682, MPFR_RNDN);
        mpfr_add(r10035684, r10035676, r10035683, MPFR_RNDN);
        mpfr_add(r10035685, r10035669, r10035684, MPFR_RNDN);
        return mpfr_get_d(r10035685, MPFR_RNDN);
}

static mpfr_t r10035686, r10035687, r10035688, r10035689, r10035690, r10035691, r10035692, r10035693, r10035694, r10035695, r10035696, r10035697, r10035698, r10035699, r10035700, r10035701, r10035702, r10035703, r10035704, r10035705, r10035706, r10035707, r10035708, r10035709, r10035710;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10035686);
        mpfr_init(r10035687);
        mpfr_init_set_str(r10035688, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r10035689);
        mpfr_init_set_str(r10035690, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r10035691);
        mpfr_init(r10035692);
        mpfr_init(r10035693);
        mpfr_init(r10035694);
        mpfr_init_set_str(r10035695, "7", 10, MPFR_RNDN);
        mpfr_init(r10035696);
        mpfr_init_set_str(r10035697, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r10035698);
        mpfr_init_set_str(r10035699, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r10035700);
        mpfr_init(r10035701);
        mpfr_init_set_str(r10035702, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r10035703);
        mpfr_init_set_str(r10035704, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r10035705, "3", 10, MPFR_RNDN);
        mpfr_init(r10035706);
        mpfr_init(r10035707);
        mpfr_init(r10035708);
        mpfr_init(r10035709);
        mpfr_init(r10035710);
}

double f_dm(double x) {
        mpfr_set_d(r10035686, x, MPFR_RNDN);
        mpfr_mul(r10035687, r10035686, r10035686, MPFR_RNDN);
        ;
        mpfr_mul(r10035689, r10035688, r10035686, MPFR_RNDN);
        ;
        mpfr_mul(r10035691, r10035686, r10035690, MPFR_RNDN);
        mpfr_mul(r10035692, r10035687, r10035691, MPFR_RNDN);
        mpfr_add(r10035693, r10035689, r10035692, MPFR_RNDN);
        mpfr_mul(r10035694, r10035687, r10035693, MPFR_RNDN);
        ;
        mpfr_pow(r10035696, r10035686, r10035695, MPFR_RNDN);
        ;
        mpfr_mul(r10035698, r10035696, r10035697, MPFR_RNDN);
        ;
        mpfr_mul(r10035700, r10035699, r10035686, MPFR_RNDN);
        mpfr_add(r10035701, r10035698, r10035700, MPFR_RNDN);
        ;
        mpfr_mul(r10035703, r10035702, r10035686, MPFR_RNDN);
        ;
        ;
        mpfr_add(r10035706, r10035704, r10035705, MPFR_RNDN);
        mpfr_pow(r10035707, r10035687, r10035706, MPFR_RNDN);
        mpfr_mul(r10035708, r10035703, r10035707, MPFR_RNDN);
        mpfr_add(r10035709, r10035701, r10035708, MPFR_RNDN);
        mpfr_add(r10035710, r10035694, r10035709, MPFR_RNDN);
        return mpfr_get_d(r10035710, MPFR_RNDN);
}

