#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r31480704 = -2.1875;
        float r31480705 = x;
        float r31480706 = r31480704 * r31480705;
        float r31480707 = 19.6875;
        float r31480708 = r31480705 * r31480705;
        float r31480709 = r31480708 * r31480705;
        float r31480710 = r31480707 * r31480709;
        float r31480711 = r31480706 + r31480710;
        float r31480712 = -43.3125;
        float r31480713 = r31480709 * r31480705;
        float r31480714 = r31480713 * r31480705;
        float r31480715 = r31480712 * r31480714;
        float r31480716 = r31480711 + r31480715;
        float r31480717 = 26.8125;
        float r31480718 = r31480714 * r31480705;
        float r31480719 = r31480718 * r31480705;
        float r31480720 = r31480717 * r31480719;
        float r31480721 = r31480716 + r31480720;
        return r31480721;
}

double f_id(double x) {
        double r31480722 = -2.1875;
        double r31480723 = x;
        double r31480724 = r31480722 * r31480723;
        double r31480725 = 19.6875;
        double r31480726 = r31480723 * r31480723;
        double r31480727 = r31480726 * r31480723;
        double r31480728 = r31480725 * r31480727;
        double r31480729 = r31480724 + r31480728;
        double r31480730 = -43.3125;
        double r31480731 = r31480727 * r31480723;
        double r31480732 = r31480731 * r31480723;
        double r31480733 = r31480730 * r31480732;
        double r31480734 = r31480729 + r31480733;
        double r31480735 = 26.8125;
        double r31480736 = r31480732 * r31480723;
        double r31480737 = r31480736 * r31480723;
        double r31480738 = r31480735 * r31480737;
        double r31480739 = r31480734 + r31480738;
        return r31480739;
}


double f_of(float x) {
        float r31480740 = x;
        float r31480741 = exp(r31480740);
        float r31480742 = r31480740 * r31480740;
        float r31480743 = r31480742 * r31480742;
        float r31480744 = pow(r31480741, r31480743);
        float r31480745 = 26.8125;
        float r31480746 = r31480745 * r31480740;
        float r31480747 = r31480740 * r31480746;
        float r31480748 = -43.3125;
        float r31480749 = r31480747 + r31480748;
        float r31480750 = pow(r31480744, r31480749);
        float r31480751 = sqrt(r31480750);
        float r31480752 = r31480751 * r31480751;
        float r31480753 = -2.1875;
        float r31480754 = exp(r31480753);
        float r31480755 = 19.6875;
        float r31480756 = exp(r31480755);
        float r31480757 = pow(r31480756, r31480742);
        float r31480758 = r31480754 * r31480757;
        float r31480759 = pow(r31480758, r31480740);
        float r31480760 = r31480740 + r31480740;
        float r31480761 = pow(r31480758, r31480760);
        float r31480762 = r31480759 * r31480761;
        float r31480763 = cbrt(r31480762);
        float r31480764 = r31480752 * r31480763;
        float r31480765 = log(r31480764);
        return r31480765;
}

double f_od(double x) {
        double r31480766 = x;
        double r31480767 = exp(r31480766);
        double r31480768 = r31480766 * r31480766;
        double r31480769 = r31480768 * r31480768;
        double r31480770 = pow(r31480767, r31480769);
        double r31480771 = 26.8125;
        double r31480772 = r31480771 * r31480766;
        double r31480773 = r31480766 * r31480772;
        double r31480774 = -43.3125;
        double r31480775 = r31480773 + r31480774;
        double r31480776 = pow(r31480770, r31480775);
        double r31480777 = sqrt(r31480776);
        double r31480778 = r31480777 * r31480777;
        double r31480779 = -2.1875;
        double r31480780 = exp(r31480779);
        double r31480781 = 19.6875;
        double r31480782 = exp(r31480781);
        double r31480783 = pow(r31480782, r31480768);
        double r31480784 = r31480780 * r31480783;
        double r31480785 = pow(r31480784, r31480766);
        double r31480786 = r31480766 + r31480766;
        double r31480787 = pow(r31480784, r31480786);
        double r31480788 = r31480785 * r31480787;
        double r31480789 = cbrt(r31480788);
        double r31480790 = r31480778 * r31480789;
        double r31480791 = log(r31480790);
        return r31480791;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31480792, r31480793, r31480794, r31480795, r31480796, r31480797, r31480798, r31480799, r31480800, r31480801, r31480802, r31480803, r31480804, r31480805, r31480806, r31480807, r31480808, r31480809;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31480792, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r31480793);
        mpfr_init(r31480794);
        mpfr_init_set_str(r31480795, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r31480796);
        mpfr_init(r31480797);
        mpfr_init(r31480798);
        mpfr_init(r31480799);
        mpfr_init_set_str(r31480800, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r31480801);
        mpfr_init(r31480802);
        mpfr_init(r31480803);
        mpfr_init(r31480804);
        mpfr_init_set_str(r31480805, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r31480806);
        mpfr_init(r31480807);
        mpfr_init(r31480808);
        mpfr_init(r31480809);
}

double f_im(double x) {
        ;
        mpfr_set_d(r31480793, x, MPFR_RNDN);
        mpfr_mul(r31480794, r31480792, r31480793, MPFR_RNDN);
        ;
        mpfr_mul(r31480796, r31480793, r31480793, MPFR_RNDN);
        mpfr_mul(r31480797, r31480796, r31480793, MPFR_RNDN);
        mpfr_mul(r31480798, r31480795, r31480797, MPFR_RNDN);
        mpfr_add(r31480799, r31480794, r31480798, MPFR_RNDN);
        ;
        mpfr_mul(r31480801, r31480797, r31480793, MPFR_RNDN);
        mpfr_mul(r31480802, r31480801, r31480793, MPFR_RNDN);
        mpfr_mul(r31480803, r31480800, r31480802, MPFR_RNDN);
        mpfr_add(r31480804, r31480799, r31480803, MPFR_RNDN);
        ;
        mpfr_mul(r31480806, r31480802, r31480793, MPFR_RNDN);
        mpfr_mul(r31480807, r31480806, r31480793, MPFR_RNDN);
        mpfr_mul(r31480808, r31480805, r31480807, MPFR_RNDN);
        mpfr_add(r31480809, r31480804, r31480808, MPFR_RNDN);
        return mpfr_get_d(r31480809, MPFR_RNDN);
}

static mpfr_t r31480810, r31480811, r31480812, r31480813, r31480814, r31480815, r31480816, r31480817, r31480818, r31480819, r31480820, r31480821, r31480822, r31480823, r31480824, r31480825, r31480826, r31480827, r31480828, r31480829, r31480830, r31480831, r31480832, r31480833, r31480834, r31480835;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31480810);
        mpfr_init(r31480811);
        mpfr_init(r31480812);
        mpfr_init(r31480813);
        mpfr_init(r31480814);
        mpfr_init_set_str(r31480815, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r31480816);
        mpfr_init(r31480817);
        mpfr_init_set_str(r31480818, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r31480819);
        mpfr_init(r31480820);
        mpfr_init(r31480821);
        mpfr_init(r31480822);
        mpfr_init_set_str(r31480823, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r31480824);
        mpfr_init_set_str(r31480825, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r31480826);
        mpfr_init(r31480827);
        mpfr_init(r31480828);
        mpfr_init(r31480829);
        mpfr_init(r31480830);
        mpfr_init(r31480831);
        mpfr_init(r31480832);
        mpfr_init(r31480833);
        mpfr_init(r31480834);
        mpfr_init(r31480835);
}

double f_fm(double x) {
        mpfr_set_d(r31480810, x, MPFR_RNDN);
        mpfr_exp(r31480811, r31480810, MPFR_RNDN);
        mpfr_mul(r31480812, r31480810, r31480810, MPFR_RNDN);
        mpfr_mul(r31480813, r31480812, r31480812, MPFR_RNDN);
        mpfr_pow(r31480814, r31480811, r31480813, MPFR_RNDN);
        ;
        mpfr_mul(r31480816, r31480815, r31480810, MPFR_RNDN);
        mpfr_mul(r31480817, r31480810, r31480816, MPFR_RNDN);
        ;
        mpfr_add(r31480819, r31480817, r31480818, MPFR_RNDN);
        mpfr_pow(r31480820, r31480814, r31480819, MPFR_RNDN);
        mpfr_sqrt(r31480821, r31480820, MPFR_RNDN);
        mpfr_mul(r31480822, r31480821, r31480821, MPFR_RNDN);
        ;
        mpfr_exp(r31480824, r31480823, MPFR_RNDN);
        ;
        mpfr_exp(r31480826, r31480825, MPFR_RNDN);
        mpfr_pow(r31480827, r31480826, r31480812, MPFR_RNDN);
        mpfr_mul(r31480828, r31480824, r31480827, MPFR_RNDN);
        mpfr_pow(r31480829, r31480828, r31480810, MPFR_RNDN);
        mpfr_add(r31480830, r31480810, r31480810, MPFR_RNDN);
        mpfr_pow(r31480831, r31480828, r31480830, MPFR_RNDN);
        mpfr_mul(r31480832, r31480829, r31480831, MPFR_RNDN);
        mpfr_cbrt(r31480833, r31480832, MPFR_RNDN);
        mpfr_mul(r31480834, r31480822, r31480833, MPFR_RNDN);
        mpfr_log(r31480835, r31480834, MPFR_RNDN);
        return mpfr_get_d(r31480835, MPFR_RNDN);
}

static mpfr_t r31480836, r31480837, r31480838, r31480839, r31480840, r31480841, r31480842, r31480843, r31480844, r31480845, r31480846, r31480847, r31480848, r31480849, r31480850, r31480851, r31480852, r31480853, r31480854, r31480855, r31480856, r31480857, r31480858, r31480859, r31480860, r31480861;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31480836);
        mpfr_init(r31480837);
        mpfr_init(r31480838);
        mpfr_init(r31480839);
        mpfr_init(r31480840);
        mpfr_init_set_str(r31480841, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r31480842);
        mpfr_init(r31480843);
        mpfr_init_set_str(r31480844, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r31480845);
        mpfr_init(r31480846);
        mpfr_init(r31480847);
        mpfr_init(r31480848);
        mpfr_init_set_str(r31480849, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r31480850);
        mpfr_init_set_str(r31480851, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r31480852);
        mpfr_init(r31480853);
        mpfr_init(r31480854);
        mpfr_init(r31480855);
        mpfr_init(r31480856);
        mpfr_init(r31480857);
        mpfr_init(r31480858);
        mpfr_init(r31480859);
        mpfr_init(r31480860);
        mpfr_init(r31480861);
}

double f_dm(double x) {
        mpfr_set_d(r31480836, x, MPFR_RNDN);
        mpfr_exp(r31480837, r31480836, MPFR_RNDN);
        mpfr_mul(r31480838, r31480836, r31480836, MPFR_RNDN);
        mpfr_mul(r31480839, r31480838, r31480838, MPFR_RNDN);
        mpfr_pow(r31480840, r31480837, r31480839, MPFR_RNDN);
        ;
        mpfr_mul(r31480842, r31480841, r31480836, MPFR_RNDN);
        mpfr_mul(r31480843, r31480836, r31480842, MPFR_RNDN);
        ;
        mpfr_add(r31480845, r31480843, r31480844, MPFR_RNDN);
        mpfr_pow(r31480846, r31480840, r31480845, MPFR_RNDN);
        mpfr_sqrt(r31480847, r31480846, MPFR_RNDN);
        mpfr_mul(r31480848, r31480847, r31480847, MPFR_RNDN);
        ;
        mpfr_exp(r31480850, r31480849, MPFR_RNDN);
        ;
        mpfr_exp(r31480852, r31480851, MPFR_RNDN);
        mpfr_pow(r31480853, r31480852, r31480838, MPFR_RNDN);
        mpfr_mul(r31480854, r31480850, r31480853, MPFR_RNDN);
        mpfr_pow(r31480855, r31480854, r31480836, MPFR_RNDN);
        mpfr_add(r31480856, r31480836, r31480836, MPFR_RNDN);
        mpfr_pow(r31480857, r31480854, r31480856, MPFR_RNDN);
        mpfr_mul(r31480858, r31480855, r31480857, MPFR_RNDN);
        mpfr_cbrt(r31480859, r31480858, MPFR_RNDN);
        mpfr_mul(r31480860, r31480848, r31480859, MPFR_RNDN);
        mpfr_log(r31480861, r31480860, MPFR_RNDN);
        return mpfr_get_d(r31480861, MPFR_RNDN);
}

