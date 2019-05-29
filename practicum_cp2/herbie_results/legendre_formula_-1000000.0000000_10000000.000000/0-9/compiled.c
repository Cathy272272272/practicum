#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6405637 = 2.460938;
        float r6405638 = x;
        float r6405639 = r6405637 * r6405638;
        float r6405640 = -36.09375;
        float r6405641 = r6405638 * r6405638;
        float r6405642 = r6405641 * r6405638;
        float r6405643 = r6405640 * r6405642;
        float r6405644 = r6405639 + r6405643;
        float r6405645 = 140.765625;
        float r6405646 = r6405642 * r6405638;
        float r6405647 = r6405646 * r6405638;
        float r6405648 = r6405645 * r6405647;
        float r6405649 = r6405644 + r6405648;
        float r6405650 = -201.09375;
        float r6405651 = r6405647 * r6405638;
        float r6405652 = r6405651 * r6405638;
        float r6405653 = r6405650 * r6405652;
        float r6405654 = r6405649 + r6405653;
        float r6405655 = 94.960938;
        float r6405656 = r6405652 * r6405638;
        float r6405657 = r6405656 * r6405638;
        float r6405658 = r6405655 * r6405657;
        float r6405659 = r6405654 + r6405658;
        return r6405659;
}

double f_id(double x) {
        double r6405660 = 2.460938;
        double r6405661 = x;
        double r6405662 = r6405660 * r6405661;
        double r6405663 = -36.09375;
        double r6405664 = r6405661 * r6405661;
        double r6405665 = r6405664 * r6405661;
        double r6405666 = r6405663 * r6405665;
        double r6405667 = r6405662 + r6405666;
        double r6405668 = 140.765625;
        double r6405669 = r6405665 * r6405661;
        double r6405670 = r6405669 * r6405661;
        double r6405671 = r6405668 * r6405670;
        double r6405672 = r6405667 + r6405671;
        double r6405673 = -201.09375;
        double r6405674 = r6405670 * r6405661;
        double r6405675 = r6405674 * r6405661;
        double r6405676 = r6405673 * r6405675;
        double r6405677 = r6405672 + r6405676;
        double r6405678 = 94.960938;
        double r6405679 = r6405675 * r6405661;
        double r6405680 = r6405679 * r6405661;
        double r6405681 = r6405678 * r6405680;
        double r6405682 = r6405677 + r6405681;
        return r6405682;
}


double f_of(float x) {
        float r6405683 = x;
        float r6405684 = r6405683 * r6405683;
        float r6405685 = -36.09375;
        float r6405686 = r6405685 * r6405683;
        float r6405687 = 140.765625;
        float r6405688 = r6405683 * r6405687;
        float r6405689 = r6405684 * r6405688;
        float r6405690 = r6405686 + r6405689;
        float r6405691 = r6405684 * r6405690;
        float r6405692 = 7;
        float r6405693 = pow(r6405683, r6405692);
        float r6405694 = -201.09375;
        float r6405695 = r6405693 * r6405694;
        float r6405696 = 2.460938;
        float r6405697 = r6405696 * r6405683;
        float r6405698 = r6405695 + r6405697;
        float r6405699 = 94.960938;
        float r6405700 = r6405699 * r6405683;
        float r6405701 = 1;
        float r6405702 = 3;
        float r6405703 = r6405701 + r6405702;
        float r6405704 = pow(r6405684, r6405703);
        float r6405705 = r6405700 * r6405704;
        float r6405706 = r6405698 + r6405705;
        float r6405707 = r6405691 + r6405706;
        return r6405707;
}

double f_od(double x) {
        double r6405708 = x;
        double r6405709 = r6405708 * r6405708;
        double r6405710 = -36.09375;
        double r6405711 = r6405710 * r6405708;
        double r6405712 = 140.765625;
        double r6405713 = r6405708 * r6405712;
        double r6405714 = r6405709 * r6405713;
        double r6405715 = r6405711 + r6405714;
        double r6405716 = r6405709 * r6405715;
        double r6405717 = 7;
        double r6405718 = pow(r6405708, r6405717);
        double r6405719 = -201.09375;
        double r6405720 = r6405718 * r6405719;
        double r6405721 = 2.460938;
        double r6405722 = r6405721 * r6405708;
        double r6405723 = r6405720 + r6405722;
        double r6405724 = 94.960938;
        double r6405725 = r6405724 * r6405708;
        double r6405726 = 1;
        double r6405727 = 3;
        double r6405728 = r6405726 + r6405727;
        double r6405729 = pow(r6405709, r6405728);
        double r6405730 = r6405725 * r6405729;
        double r6405731 = r6405723 + r6405730;
        double r6405732 = r6405716 + r6405731;
        return r6405732;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6405733, r6405734, r6405735, r6405736, r6405737, r6405738, r6405739, r6405740, r6405741, r6405742, r6405743, r6405744, r6405745, r6405746, r6405747, r6405748, r6405749, r6405750, r6405751, r6405752, r6405753, r6405754, r6405755;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6405733, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6405734);
        mpfr_init(r6405735);
        mpfr_init_set_str(r6405736, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6405737);
        mpfr_init(r6405738);
        mpfr_init(r6405739);
        mpfr_init(r6405740);
        mpfr_init_set_str(r6405741, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6405742);
        mpfr_init(r6405743);
        mpfr_init(r6405744);
        mpfr_init(r6405745);
        mpfr_init_set_str(r6405746, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6405747);
        mpfr_init(r6405748);
        mpfr_init(r6405749);
        mpfr_init(r6405750);
        mpfr_init_set_str(r6405751, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6405752);
        mpfr_init(r6405753);
        mpfr_init(r6405754);
        mpfr_init(r6405755);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6405734, x, MPFR_RNDN);
        mpfr_mul(r6405735, r6405733, r6405734, MPFR_RNDN);
        ;
        mpfr_mul(r6405737, r6405734, r6405734, MPFR_RNDN);
        mpfr_mul(r6405738, r6405737, r6405734, MPFR_RNDN);
        mpfr_mul(r6405739, r6405736, r6405738, MPFR_RNDN);
        mpfr_add(r6405740, r6405735, r6405739, MPFR_RNDN);
        ;
        mpfr_mul(r6405742, r6405738, r6405734, MPFR_RNDN);
        mpfr_mul(r6405743, r6405742, r6405734, MPFR_RNDN);
        mpfr_mul(r6405744, r6405741, r6405743, MPFR_RNDN);
        mpfr_add(r6405745, r6405740, r6405744, MPFR_RNDN);
        ;
        mpfr_mul(r6405747, r6405743, r6405734, MPFR_RNDN);
        mpfr_mul(r6405748, r6405747, r6405734, MPFR_RNDN);
        mpfr_mul(r6405749, r6405746, r6405748, MPFR_RNDN);
        mpfr_add(r6405750, r6405745, r6405749, MPFR_RNDN);
        ;
        mpfr_mul(r6405752, r6405748, r6405734, MPFR_RNDN);
        mpfr_mul(r6405753, r6405752, r6405734, MPFR_RNDN);
        mpfr_mul(r6405754, r6405751, r6405753, MPFR_RNDN);
        mpfr_add(r6405755, r6405750, r6405754, MPFR_RNDN);
        return mpfr_get_d(r6405755, MPFR_RNDN);
}

static mpfr_t r6405756, r6405757, r6405758, r6405759, r6405760, r6405761, r6405762, r6405763, r6405764, r6405765, r6405766, r6405767, r6405768, r6405769, r6405770, r6405771, r6405772, r6405773, r6405774, r6405775, r6405776, r6405777, r6405778, r6405779, r6405780;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6405756);
        mpfr_init(r6405757);
        mpfr_init_set_str(r6405758, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6405759);
        mpfr_init_set_str(r6405760, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6405761);
        mpfr_init(r6405762);
        mpfr_init(r6405763);
        mpfr_init(r6405764);
        mpfr_init_set_str(r6405765, "7", 10, MPFR_RNDN);
        mpfr_init(r6405766);
        mpfr_init_set_str(r6405767, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6405768);
        mpfr_init_set_str(r6405769, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6405770);
        mpfr_init(r6405771);
        mpfr_init_set_str(r6405772, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6405773);
        mpfr_init_set_str(r6405774, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r6405775, "3", 10, MPFR_RNDN);
        mpfr_init(r6405776);
        mpfr_init(r6405777);
        mpfr_init(r6405778);
        mpfr_init(r6405779);
        mpfr_init(r6405780);
}

double f_fm(double x) {
        mpfr_set_d(r6405756, x, MPFR_RNDN);
        mpfr_mul(r6405757, r6405756, r6405756, MPFR_RNDN);
        ;
        mpfr_mul(r6405759, r6405758, r6405756, MPFR_RNDN);
        ;
        mpfr_mul(r6405761, r6405756, r6405760, MPFR_RNDN);
        mpfr_mul(r6405762, r6405757, r6405761, MPFR_RNDN);
        mpfr_add(r6405763, r6405759, r6405762, MPFR_RNDN);
        mpfr_mul(r6405764, r6405757, r6405763, MPFR_RNDN);
        ;
        mpfr_pow(r6405766, r6405756, r6405765, MPFR_RNDN);
        ;
        mpfr_mul(r6405768, r6405766, r6405767, MPFR_RNDN);
        ;
        mpfr_mul(r6405770, r6405769, r6405756, MPFR_RNDN);
        mpfr_add(r6405771, r6405768, r6405770, MPFR_RNDN);
        ;
        mpfr_mul(r6405773, r6405772, r6405756, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6405776, r6405774, r6405775, MPFR_RNDN);
        mpfr_pow(r6405777, r6405757, r6405776, MPFR_RNDN);
        mpfr_mul(r6405778, r6405773, r6405777, MPFR_RNDN);
        mpfr_add(r6405779, r6405771, r6405778, MPFR_RNDN);
        mpfr_add(r6405780, r6405764, r6405779, MPFR_RNDN);
        return mpfr_get_d(r6405780, MPFR_RNDN);
}

static mpfr_t r6405781, r6405782, r6405783, r6405784, r6405785, r6405786, r6405787, r6405788, r6405789, r6405790, r6405791, r6405792, r6405793, r6405794, r6405795, r6405796, r6405797, r6405798, r6405799, r6405800, r6405801, r6405802, r6405803, r6405804, r6405805;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6405781);
        mpfr_init(r6405782);
        mpfr_init_set_str(r6405783, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6405784);
        mpfr_init_set_str(r6405785, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6405786);
        mpfr_init(r6405787);
        mpfr_init(r6405788);
        mpfr_init(r6405789);
        mpfr_init_set_str(r6405790, "7", 10, MPFR_RNDN);
        mpfr_init(r6405791);
        mpfr_init_set_str(r6405792, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6405793);
        mpfr_init_set_str(r6405794, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6405795);
        mpfr_init(r6405796);
        mpfr_init_set_str(r6405797, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6405798);
        mpfr_init_set_str(r6405799, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r6405800, "3", 10, MPFR_RNDN);
        mpfr_init(r6405801);
        mpfr_init(r6405802);
        mpfr_init(r6405803);
        mpfr_init(r6405804);
        mpfr_init(r6405805);
}

double f_dm(double x) {
        mpfr_set_d(r6405781, x, MPFR_RNDN);
        mpfr_mul(r6405782, r6405781, r6405781, MPFR_RNDN);
        ;
        mpfr_mul(r6405784, r6405783, r6405781, MPFR_RNDN);
        ;
        mpfr_mul(r6405786, r6405781, r6405785, MPFR_RNDN);
        mpfr_mul(r6405787, r6405782, r6405786, MPFR_RNDN);
        mpfr_add(r6405788, r6405784, r6405787, MPFR_RNDN);
        mpfr_mul(r6405789, r6405782, r6405788, MPFR_RNDN);
        ;
        mpfr_pow(r6405791, r6405781, r6405790, MPFR_RNDN);
        ;
        mpfr_mul(r6405793, r6405791, r6405792, MPFR_RNDN);
        ;
        mpfr_mul(r6405795, r6405794, r6405781, MPFR_RNDN);
        mpfr_add(r6405796, r6405793, r6405795, MPFR_RNDN);
        ;
        mpfr_mul(r6405798, r6405797, r6405781, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6405801, r6405799, r6405800, MPFR_RNDN);
        mpfr_pow(r6405802, r6405782, r6405801, MPFR_RNDN);
        mpfr_mul(r6405803, r6405798, r6405802, MPFR_RNDN);
        mpfr_add(r6405804, r6405796, r6405803, MPFR_RNDN);
        mpfr_add(r6405805, r6405789, r6405804, MPFR_RNDN);
        return mpfr_get_d(r6405805, MPFR_RNDN);
}

