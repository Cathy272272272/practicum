#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6176601 = -2.1875;
        float r6176602 = x;
        float r6176603 = r6176601 * r6176602;
        float r6176604 = 19.6875;
        float r6176605 = r6176602 * r6176602;
        float r6176606 = r6176605 * r6176602;
        float r6176607 = r6176604 * r6176606;
        float r6176608 = r6176603 + r6176607;
        float r6176609 = -43.3125;
        float r6176610 = r6176606 * r6176602;
        float r6176611 = r6176610 * r6176602;
        float r6176612 = r6176609 * r6176611;
        float r6176613 = r6176608 + r6176612;
        float r6176614 = 26.8125;
        float r6176615 = r6176611 * r6176602;
        float r6176616 = r6176615 * r6176602;
        float r6176617 = r6176614 * r6176616;
        float r6176618 = r6176613 + r6176617;
        return r6176618;
}

double f_id(double x) {
        double r6176619 = -2.1875;
        double r6176620 = x;
        double r6176621 = r6176619 * r6176620;
        double r6176622 = 19.6875;
        double r6176623 = r6176620 * r6176620;
        double r6176624 = r6176623 * r6176620;
        double r6176625 = r6176622 * r6176624;
        double r6176626 = r6176621 + r6176625;
        double r6176627 = -43.3125;
        double r6176628 = r6176624 * r6176620;
        double r6176629 = r6176628 * r6176620;
        double r6176630 = r6176627 * r6176629;
        double r6176631 = r6176626 + r6176630;
        double r6176632 = 26.8125;
        double r6176633 = r6176629 * r6176620;
        double r6176634 = r6176633 * r6176620;
        double r6176635 = r6176632 * r6176634;
        double r6176636 = r6176631 + r6176635;
        return r6176636;
}


double f_of(float x) {
        float r6176637 = -2.1875;
        float r6176638 = x;
        float r6176639 = r6176637 * r6176638;
        float r6176640 = 19.6875;
        float r6176641 = r6176638 * r6176638;
        float r6176642 = r6176641 * r6176638;
        float r6176643 = r6176640 * r6176642;
        float r6176644 = r6176639 + r6176643;
        float r6176645 = -43.3125;
        float r6176646 = r6176642 * r6176638;
        float r6176647 = r6176646 * r6176638;
        float r6176648 = r6176645 * r6176647;
        float r6176649 = r6176644 + r6176648;
        float r6176650 = 26.8125;
        float r6176651 = r6176647 * r6176638;
        float r6176652 = r6176651 * r6176638;
        float r6176653 = r6176650 * r6176652;
        float r6176654 = r6176649 + r6176653;
        return r6176654;
}

double f_od(double x) {
        double r6176655 = -2.1875;
        double r6176656 = x;
        double r6176657 = r6176655 * r6176656;
        double r6176658 = 19.6875;
        double r6176659 = r6176656 * r6176656;
        double r6176660 = r6176659 * r6176656;
        double r6176661 = r6176658 * r6176660;
        double r6176662 = r6176657 + r6176661;
        double r6176663 = -43.3125;
        double r6176664 = r6176660 * r6176656;
        double r6176665 = r6176664 * r6176656;
        double r6176666 = r6176663 * r6176665;
        double r6176667 = r6176662 + r6176666;
        double r6176668 = 26.8125;
        double r6176669 = r6176665 * r6176656;
        double r6176670 = r6176669 * r6176656;
        double r6176671 = r6176668 * r6176670;
        double r6176672 = r6176667 + r6176671;
        return r6176672;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6176673, r6176674, r6176675, r6176676, r6176677, r6176678, r6176679, r6176680, r6176681, r6176682, r6176683, r6176684, r6176685, r6176686, r6176687, r6176688, r6176689, r6176690;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6176673, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6176674);
        mpfr_init(r6176675);
        mpfr_init_set_str(r6176676, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6176677);
        mpfr_init(r6176678);
        mpfr_init(r6176679);
        mpfr_init(r6176680);
        mpfr_init_set_str(r6176681, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6176682);
        mpfr_init(r6176683);
        mpfr_init(r6176684);
        mpfr_init(r6176685);
        mpfr_init_set_str(r6176686, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6176687);
        mpfr_init(r6176688);
        mpfr_init(r6176689);
        mpfr_init(r6176690);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6176674, x, MPFR_RNDN);
        mpfr_mul(r6176675, r6176673, r6176674, MPFR_RNDN);
        ;
        mpfr_mul(r6176677, r6176674, r6176674, MPFR_RNDN);
        mpfr_mul(r6176678, r6176677, r6176674, MPFR_RNDN);
        mpfr_mul(r6176679, r6176676, r6176678, MPFR_RNDN);
        mpfr_add(r6176680, r6176675, r6176679, MPFR_RNDN);
        ;
        mpfr_mul(r6176682, r6176678, r6176674, MPFR_RNDN);
        mpfr_mul(r6176683, r6176682, r6176674, MPFR_RNDN);
        mpfr_mul(r6176684, r6176681, r6176683, MPFR_RNDN);
        mpfr_add(r6176685, r6176680, r6176684, MPFR_RNDN);
        ;
        mpfr_mul(r6176687, r6176683, r6176674, MPFR_RNDN);
        mpfr_mul(r6176688, r6176687, r6176674, MPFR_RNDN);
        mpfr_mul(r6176689, r6176686, r6176688, MPFR_RNDN);
        mpfr_add(r6176690, r6176685, r6176689, MPFR_RNDN);
        return mpfr_get_d(r6176690, MPFR_RNDN);
}

static mpfr_t r6176691, r6176692, r6176693, r6176694, r6176695, r6176696, r6176697, r6176698, r6176699, r6176700, r6176701, r6176702, r6176703, r6176704, r6176705, r6176706, r6176707, r6176708;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6176691, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6176692);
        mpfr_init(r6176693);
        mpfr_init_set_str(r6176694, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6176695);
        mpfr_init(r6176696);
        mpfr_init(r6176697);
        mpfr_init(r6176698);
        mpfr_init_set_str(r6176699, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6176700);
        mpfr_init(r6176701);
        mpfr_init(r6176702);
        mpfr_init(r6176703);
        mpfr_init_set_str(r6176704, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6176705);
        mpfr_init(r6176706);
        mpfr_init(r6176707);
        mpfr_init(r6176708);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6176692, x, MPFR_RNDN);
        mpfr_mul(r6176693, r6176691, r6176692, MPFR_RNDN);
        ;
        mpfr_mul(r6176695, r6176692, r6176692, MPFR_RNDN);
        mpfr_mul(r6176696, r6176695, r6176692, MPFR_RNDN);
        mpfr_mul(r6176697, r6176694, r6176696, MPFR_RNDN);
        mpfr_add(r6176698, r6176693, r6176697, MPFR_RNDN);
        ;
        mpfr_mul(r6176700, r6176696, r6176692, MPFR_RNDN);
        mpfr_mul(r6176701, r6176700, r6176692, MPFR_RNDN);
        mpfr_mul(r6176702, r6176699, r6176701, MPFR_RNDN);
        mpfr_add(r6176703, r6176698, r6176702, MPFR_RNDN);
        ;
        mpfr_mul(r6176705, r6176701, r6176692, MPFR_RNDN);
        mpfr_mul(r6176706, r6176705, r6176692, MPFR_RNDN);
        mpfr_mul(r6176707, r6176704, r6176706, MPFR_RNDN);
        mpfr_add(r6176708, r6176703, r6176707, MPFR_RNDN);
        return mpfr_get_d(r6176708, MPFR_RNDN);
}

static mpfr_t r6176709, r6176710, r6176711, r6176712, r6176713, r6176714, r6176715, r6176716, r6176717, r6176718, r6176719, r6176720, r6176721, r6176722, r6176723, r6176724, r6176725, r6176726;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6176709, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6176710);
        mpfr_init(r6176711);
        mpfr_init_set_str(r6176712, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6176713);
        mpfr_init(r6176714);
        mpfr_init(r6176715);
        mpfr_init(r6176716);
        mpfr_init_set_str(r6176717, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6176718);
        mpfr_init(r6176719);
        mpfr_init(r6176720);
        mpfr_init(r6176721);
        mpfr_init_set_str(r6176722, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6176723);
        mpfr_init(r6176724);
        mpfr_init(r6176725);
        mpfr_init(r6176726);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6176710, x, MPFR_RNDN);
        mpfr_mul(r6176711, r6176709, r6176710, MPFR_RNDN);
        ;
        mpfr_mul(r6176713, r6176710, r6176710, MPFR_RNDN);
        mpfr_mul(r6176714, r6176713, r6176710, MPFR_RNDN);
        mpfr_mul(r6176715, r6176712, r6176714, MPFR_RNDN);
        mpfr_add(r6176716, r6176711, r6176715, MPFR_RNDN);
        ;
        mpfr_mul(r6176718, r6176714, r6176710, MPFR_RNDN);
        mpfr_mul(r6176719, r6176718, r6176710, MPFR_RNDN);
        mpfr_mul(r6176720, r6176717, r6176719, MPFR_RNDN);
        mpfr_add(r6176721, r6176716, r6176720, MPFR_RNDN);
        ;
        mpfr_mul(r6176723, r6176719, r6176710, MPFR_RNDN);
        mpfr_mul(r6176724, r6176723, r6176710, MPFR_RNDN);
        mpfr_mul(r6176725, r6176722, r6176724, MPFR_RNDN);
        mpfr_add(r6176726, r6176721, r6176725, MPFR_RNDN);
        return mpfr_get_d(r6176726, MPFR_RNDN);
}

