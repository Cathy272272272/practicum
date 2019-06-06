#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r4435694 = 2.460938;
        float r4435695 = x;
        float r4435696 = r4435694 * r4435695;
        float r4435697 = -36.09375;
        float r4435698 = r4435695 * r4435695;
        float r4435699 = r4435698 * r4435695;
        float r4435700 = r4435697 * r4435699;
        float r4435701 = r4435696 + r4435700;
        float r4435702 = 140.765625;
        float r4435703 = r4435699 * r4435695;
        float r4435704 = r4435703 * r4435695;
        float r4435705 = r4435702 * r4435704;
        float r4435706 = r4435701 + r4435705;
        float r4435707 = -201.09375;
        float r4435708 = r4435704 * r4435695;
        float r4435709 = r4435708 * r4435695;
        float r4435710 = r4435707 * r4435709;
        float r4435711 = r4435706 + r4435710;
        float r4435712 = 94.960938;
        float r4435713 = r4435709 * r4435695;
        float r4435714 = r4435713 * r4435695;
        float r4435715 = r4435712 * r4435714;
        float r4435716 = r4435711 + r4435715;
        return r4435716;
}

double f_id(double x) {
        double r4435717 = 2.460938;
        double r4435718 = x;
        double r4435719 = r4435717 * r4435718;
        double r4435720 = -36.09375;
        double r4435721 = r4435718 * r4435718;
        double r4435722 = r4435721 * r4435718;
        double r4435723 = r4435720 * r4435722;
        double r4435724 = r4435719 + r4435723;
        double r4435725 = 140.765625;
        double r4435726 = r4435722 * r4435718;
        double r4435727 = r4435726 * r4435718;
        double r4435728 = r4435725 * r4435727;
        double r4435729 = r4435724 + r4435728;
        double r4435730 = -201.09375;
        double r4435731 = r4435727 * r4435718;
        double r4435732 = r4435731 * r4435718;
        double r4435733 = r4435730 * r4435732;
        double r4435734 = r4435729 + r4435733;
        double r4435735 = 94.960938;
        double r4435736 = r4435732 * r4435718;
        double r4435737 = r4435736 * r4435718;
        double r4435738 = r4435735 * r4435737;
        double r4435739 = r4435734 + r4435738;
        return r4435739;
}


double f_of(float x) {
        float r4435740 = 2.460938;
        float r4435741 = x;
        float r4435742 = r4435740 * r4435741;
        float r4435743 = -36.09375;
        float r4435744 = r4435741 * r4435741;
        float r4435745 = r4435744 * r4435741;
        float r4435746 = r4435743 * r4435745;
        float r4435747 = r4435742 + r4435746;
        float r4435748 = 140.765625;
        float r4435749 = r4435745 * r4435741;
        float r4435750 = r4435749 * r4435741;
        float r4435751 = r4435748 * r4435750;
        float r4435752 = r4435747 + r4435751;
        float r4435753 = -201.09375;
        float r4435754 = r4435750 * r4435741;
        float r4435755 = r4435754 * r4435741;
        float r4435756 = r4435753 * r4435755;
        float r4435757 = r4435752 + r4435756;
        float r4435758 = 94.960938;
        float r4435759 = r4435755 * r4435741;
        float r4435760 = r4435759 * r4435741;
        float r4435761 = r4435758 * r4435760;
        float r4435762 = r4435757 + r4435761;
        return r4435762;
}

double f_od(double x) {
        double r4435763 = 2.460938;
        double r4435764 = x;
        double r4435765 = r4435763 * r4435764;
        double r4435766 = -36.09375;
        double r4435767 = r4435764 * r4435764;
        double r4435768 = r4435767 * r4435764;
        double r4435769 = r4435766 * r4435768;
        double r4435770 = r4435765 + r4435769;
        double r4435771 = 140.765625;
        double r4435772 = r4435768 * r4435764;
        double r4435773 = r4435772 * r4435764;
        double r4435774 = r4435771 * r4435773;
        double r4435775 = r4435770 + r4435774;
        double r4435776 = -201.09375;
        double r4435777 = r4435773 * r4435764;
        double r4435778 = r4435777 * r4435764;
        double r4435779 = r4435776 * r4435778;
        double r4435780 = r4435775 + r4435779;
        double r4435781 = 94.960938;
        double r4435782 = r4435778 * r4435764;
        double r4435783 = r4435782 * r4435764;
        double r4435784 = r4435781 * r4435783;
        double r4435785 = r4435780 + r4435784;
        return r4435785;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4435786, r4435787, r4435788, r4435789, r4435790, r4435791, r4435792, r4435793, r4435794, r4435795, r4435796, r4435797, r4435798, r4435799, r4435800, r4435801, r4435802, r4435803, r4435804, r4435805, r4435806, r4435807, r4435808;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4435786, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4435787);
        mpfr_init(r4435788);
        mpfr_init_set_str(r4435789, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4435790);
        mpfr_init(r4435791);
        mpfr_init(r4435792);
        mpfr_init(r4435793);
        mpfr_init_set_str(r4435794, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4435795);
        mpfr_init(r4435796);
        mpfr_init(r4435797);
        mpfr_init(r4435798);
        mpfr_init_set_str(r4435799, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4435800);
        mpfr_init(r4435801);
        mpfr_init(r4435802);
        mpfr_init(r4435803);
        mpfr_init_set_str(r4435804, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4435805);
        mpfr_init(r4435806);
        mpfr_init(r4435807);
        mpfr_init(r4435808);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4435787, x, MPFR_RNDN);
        mpfr_mul(r4435788, r4435786, r4435787, MPFR_RNDN);
        ;
        mpfr_mul(r4435790, r4435787, r4435787, MPFR_RNDN);
        mpfr_mul(r4435791, r4435790, r4435787, MPFR_RNDN);
        mpfr_mul(r4435792, r4435789, r4435791, MPFR_RNDN);
        mpfr_add(r4435793, r4435788, r4435792, MPFR_RNDN);
        ;
        mpfr_mul(r4435795, r4435791, r4435787, MPFR_RNDN);
        mpfr_mul(r4435796, r4435795, r4435787, MPFR_RNDN);
        mpfr_mul(r4435797, r4435794, r4435796, MPFR_RNDN);
        mpfr_add(r4435798, r4435793, r4435797, MPFR_RNDN);
        ;
        mpfr_mul(r4435800, r4435796, r4435787, MPFR_RNDN);
        mpfr_mul(r4435801, r4435800, r4435787, MPFR_RNDN);
        mpfr_mul(r4435802, r4435799, r4435801, MPFR_RNDN);
        mpfr_add(r4435803, r4435798, r4435802, MPFR_RNDN);
        ;
        mpfr_mul(r4435805, r4435801, r4435787, MPFR_RNDN);
        mpfr_mul(r4435806, r4435805, r4435787, MPFR_RNDN);
        mpfr_mul(r4435807, r4435804, r4435806, MPFR_RNDN);
        mpfr_add(r4435808, r4435803, r4435807, MPFR_RNDN);
        return mpfr_get_d(r4435808, MPFR_RNDN);
}

static mpfr_t r4435809, r4435810, r4435811, r4435812, r4435813, r4435814, r4435815, r4435816, r4435817, r4435818, r4435819, r4435820, r4435821, r4435822, r4435823, r4435824, r4435825, r4435826, r4435827, r4435828, r4435829, r4435830, r4435831;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4435809, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4435810);
        mpfr_init(r4435811);
        mpfr_init_set_str(r4435812, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4435813);
        mpfr_init(r4435814);
        mpfr_init(r4435815);
        mpfr_init(r4435816);
        mpfr_init_set_str(r4435817, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4435818);
        mpfr_init(r4435819);
        mpfr_init(r4435820);
        mpfr_init(r4435821);
        mpfr_init_set_str(r4435822, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4435823);
        mpfr_init(r4435824);
        mpfr_init(r4435825);
        mpfr_init(r4435826);
        mpfr_init_set_str(r4435827, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4435828);
        mpfr_init(r4435829);
        mpfr_init(r4435830);
        mpfr_init(r4435831);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4435810, x, MPFR_RNDN);
        mpfr_mul(r4435811, r4435809, r4435810, MPFR_RNDN);
        ;
        mpfr_mul(r4435813, r4435810, r4435810, MPFR_RNDN);
        mpfr_mul(r4435814, r4435813, r4435810, MPFR_RNDN);
        mpfr_mul(r4435815, r4435812, r4435814, MPFR_RNDN);
        mpfr_add(r4435816, r4435811, r4435815, MPFR_RNDN);
        ;
        mpfr_mul(r4435818, r4435814, r4435810, MPFR_RNDN);
        mpfr_mul(r4435819, r4435818, r4435810, MPFR_RNDN);
        mpfr_mul(r4435820, r4435817, r4435819, MPFR_RNDN);
        mpfr_add(r4435821, r4435816, r4435820, MPFR_RNDN);
        ;
        mpfr_mul(r4435823, r4435819, r4435810, MPFR_RNDN);
        mpfr_mul(r4435824, r4435823, r4435810, MPFR_RNDN);
        mpfr_mul(r4435825, r4435822, r4435824, MPFR_RNDN);
        mpfr_add(r4435826, r4435821, r4435825, MPFR_RNDN);
        ;
        mpfr_mul(r4435828, r4435824, r4435810, MPFR_RNDN);
        mpfr_mul(r4435829, r4435828, r4435810, MPFR_RNDN);
        mpfr_mul(r4435830, r4435827, r4435829, MPFR_RNDN);
        mpfr_add(r4435831, r4435826, r4435830, MPFR_RNDN);
        return mpfr_get_d(r4435831, MPFR_RNDN);
}

static mpfr_t r4435832, r4435833, r4435834, r4435835, r4435836, r4435837, r4435838, r4435839, r4435840, r4435841, r4435842, r4435843, r4435844, r4435845, r4435846, r4435847, r4435848, r4435849, r4435850, r4435851, r4435852, r4435853, r4435854;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4435832, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4435833);
        mpfr_init(r4435834);
        mpfr_init_set_str(r4435835, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4435836);
        mpfr_init(r4435837);
        mpfr_init(r4435838);
        mpfr_init(r4435839);
        mpfr_init_set_str(r4435840, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4435841);
        mpfr_init(r4435842);
        mpfr_init(r4435843);
        mpfr_init(r4435844);
        mpfr_init_set_str(r4435845, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4435846);
        mpfr_init(r4435847);
        mpfr_init(r4435848);
        mpfr_init(r4435849);
        mpfr_init_set_str(r4435850, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4435851);
        mpfr_init(r4435852);
        mpfr_init(r4435853);
        mpfr_init(r4435854);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4435833, x, MPFR_RNDN);
        mpfr_mul(r4435834, r4435832, r4435833, MPFR_RNDN);
        ;
        mpfr_mul(r4435836, r4435833, r4435833, MPFR_RNDN);
        mpfr_mul(r4435837, r4435836, r4435833, MPFR_RNDN);
        mpfr_mul(r4435838, r4435835, r4435837, MPFR_RNDN);
        mpfr_add(r4435839, r4435834, r4435838, MPFR_RNDN);
        ;
        mpfr_mul(r4435841, r4435837, r4435833, MPFR_RNDN);
        mpfr_mul(r4435842, r4435841, r4435833, MPFR_RNDN);
        mpfr_mul(r4435843, r4435840, r4435842, MPFR_RNDN);
        mpfr_add(r4435844, r4435839, r4435843, MPFR_RNDN);
        ;
        mpfr_mul(r4435846, r4435842, r4435833, MPFR_RNDN);
        mpfr_mul(r4435847, r4435846, r4435833, MPFR_RNDN);
        mpfr_mul(r4435848, r4435845, r4435847, MPFR_RNDN);
        mpfr_add(r4435849, r4435844, r4435848, MPFR_RNDN);
        ;
        mpfr_mul(r4435851, r4435847, r4435833, MPFR_RNDN);
        mpfr_mul(r4435852, r4435851, r4435833, MPFR_RNDN);
        mpfr_mul(r4435853, r4435850, r4435852, MPFR_RNDN);
        mpfr_add(r4435854, r4435849, r4435853, MPFR_RNDN);
        return mpfr_get_d(r4435854, MPFR_RNDN);
}

