#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r11544699 = 1.0;
        float r11544700 = -5.0;
        float r11544701 = x;
        float r11544702 = r11544700 * r11544701;
        float r11544703 = r11544699 + r11544702;
        float r11544704 = 5.0;
        float r11544705 = r11544701 * r11544701;
        float r11544706 = r11544704 * r11544705;
        float r11544707 = r11544703 + r11544706;
        float r11544708 = -1.666667;
        float r11544709 = r11544705 * r11544701;
        float r11544710 = r11544708 * r11544709;
        float r11544711 = r11544707 + r11544710;
        float r11544712 = 0.208333;
        float r11544713 = r11544709 * r11544701;
        float r11544714 = r11544712 * r11544713;
        float r11544715 = r11544711 + r11544714;
        float r11544716 = -0.008333;
        float r11544717 = r11544713 * r11544701;
        float r11544718 = r11544716 * r11544717;
        float r11544719 = r11544715 + r11544718;
        return r11544719;
}

double f_id(double x) {
        double r11544720 = 1.0;
        double r11544721 = -5.0;
        double r11544722 = x;
        double r11544723 = r11544721 * r11544722;
        double r11544724 = r11544720 + r11544723;
        double r11544725 = 5.0;
        double r11544726 = r11544722 * r11544722;
        double r11544727 = r11544725 * r11544726;
        double r11544728 = r11544724 + r11544727;
        double r11544729 = -1.666667;
        double r11544730 = r11544726 * r11544722;
        double r11544731 = r11544729 * r11544730;
        double r11544732 = r11544728 + r11544731;
        double r11544733 = 0.208333;
        double r11544734 = r11544730 * r11544722;
        double r11544735 = r11544733 * r11544734;
        double r11544736 = r11544732 + r11544735;
        double r11544737 = -0.008333;
        double r11544738 = r11544734 * r11544722;
        double r11544739 = r11544737 * r11544738;
        double r11544740 = r11544736 + r11544739;
        return r11544740;
}


double f_of(float x) {
        float r11544741 = x;
        float r11544742 = -5.0;
        float r11544743 = r11544741 * r11544742;
        float r11544744 = 1.0;
        float r11544745 = r11544743 + r11544744;
        float r11544746 = exp(r11544741);
        float r11544747 = 3;
        float r11544748 = pow(r11544741, r11544747);
        float r11544749 = pow(r11544746, r11544748);
        float r11544750 = -0.008333;
        float r11544751 = r11544750 * r11544741;
        float r11544752 = 0.208333;
        float r11544753 = r11544751 + r11544752;
        float r11544754 = pow(r11544749, r11544753);
        float r11544755 = log(r11544754);
        float r11544756 = r11544741 * r11544741;
        float r11544757 = -1.666667;
        float r11544758 = r11544757 * r11544741;
        float r11544759 = 5.0;
        float r11544760 = r11544758 + r11544759;
        float r11544761 = r11544756 * r11544760;
        float r11544762 = r11544755 + r11544761;
        float r11544763 = r11544745 + r11544762;
        return r11544763;
}

double f_od(double x) {
        double r11544764 = x;
        double r11544765 = -5.0;
        double r11544766 = r11544764 * r11544765;
        double r11544767 = 1.0;
        double r11544768 = r11544766 + r11544767;
        double r11544769 = exp(r11544764);
        double r11544770 = 3;
        double r11544771 = pow(r11544764, r11544770);
        double r11544772 = pow(r11544769, r11544771);
        double r11544773 = -0.008333;
        double r11544774 = r11544773 * r11544764;
        double r11544775 = 0.208333;
        double r11544776 = r11544774 + r11544775;
        double r11544777 = pow(r11544772, r11544776);
        double r11544778 = log(r11544777);
        double r11544779 = r11544764 * r11544764;
        double r11544780 = -1.666667;
        double r11544781 = r11544780 * r11544764;
        double r11544782 = 5.0;
        double r11544783 = r11544781 + r11544782;
        double r11544784 = r11544779 * r11544783;
        double r11544785 = r11544778 + r11544784;
        double r11544786 = r11544768 + r11544785;
        return r11544786;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11544787, r11544788, r11544789, r11544790, r11544791, r11544792, r11544793, r11544794, r11544795, r11544796, r11544797, r11544798, r11544799, r11544800, r11544801, r11544802, r11544803, r11544804, r11544805, r11544806, r11544807;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11544787, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544788, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11544789);
        mpfr_init(r11544790);
        mpfr_init(r11544791);
        mpfr_init_set_str(r11544792, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11544793);
        mpfr_init(r11544794);
        mpfr_init(r11544795);
        mpfr_init_set_str(r11544796, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11544797);
        mpfr_init(r11544798);
        mpfr_init(r11544799);
        mpfr_init_set_str(r11544800, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11544801);
        mpfr_init(r11544802);
        mpfr_init(r11544803);
        mpfr_init_set_str(r11544804, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11544805);
        mpfr_init(r11544806);
        mpfr_init(r11544807);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11544789, x, MPFR_RNDN);
        mpfr_mul(r11544790, r11544788, r11544789, MPFR_RNDN);
        mpfr_add(r11544791, r11544787, r11544790, MPFR_RNDN);
        ;
        mpfr_mul(r11544793, r11544789, r11544789, MPFR_RNDN);
        mpfr_mul(r11544794, r11544792, r11544793, MPFR_RNDN);
        mpfr_add(r11544795, r11544791, r11544794, MPFR_RNDN);
        ;
        mpfr_mul(r11544797, r11544793, r11544789, MPFR_RNDN);
        mpfr_mul(r11544798, r11544796, r11544797, MPFR_RNDN);
        mpfr_add(r11544799, r11544795, r11544798, MPFR_RNDN);
        ;
        mpfr_mul(r11544801, r11544797, r11544789, MPFR_RNDN);
        mpfr_mul(r11544802, r11544800, r11544801, MPFR_RNDN);
        mpfr_add(r11544803, r11544799, r11544802, MPFR_RNDN);
        ;
        mpfr_mul(r11544805, r11544801, r11544789, MPFR_RNDN);
        mpfr_mul(r11544806, r11544804, r11544805, MPFR_RNDN);
        mpfr_add(r11544807, r11544803, r11544806, MPFR_RNDN);
        return mpfr_get_d(r11544807, MPFR_RNDN);
}

static mpfr_t r11544808, r11544809, r11544810, r11544811, r11544812, r11544813, r11544814, r11544815, r11544816, r11544817, r11544818, r11544819, r11544820, r11544821, r11544822, r11544823, r11544824, r11544825, r11544826, r11544827, r11544828, r11544829, r11544830;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544808);
        mpfr_init_set_str(r11544809, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11544810);
        mpfr_init_set_str(r11544811, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544812);
        mpfr_init(r11544813);
        mpfr_init_set_str(r11544814, "3", 10, MPFR_RNDN);
        mpfr_init(r11544815);
        mpfr_init(r11544816);
        mpfr_init_set_str(r11544817, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11544818);
        mpfr_init_set_str(r11544819, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11544820);
        mpfr_init(r11544821);
        mpfr_init(r11544822);
        mpfr_init(r11544823);
        mpfr_init_set_str(r11544824, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11544825);
        mpfr_init_set_str(r11544826, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11544827);
        mpfr_init(r11544828);
        mpfr_init(r11544829);
        mpfr_init(r11544830);
}

double f_fm(double x) {
        mpfr_set_d(r11544808, x, MPFR_RNDN);
        ;
        mpfr_mul(r11544810, r11544808, r11544809, MPFR_RNDN);
        ;
        mpfr_add(r11544812, r11544810, r11544811, MPFR_RNDN);
        mpfr_exp(r11544813, r11544808, MPFR_RNDN);
        ;
        mpfr_pow(r11544815, r11544808, r11544814, MPFR_RNDN);
        mpfr_pow(r11544816, r11544813, r11544815, MPFR_RNDN);
        ;
        mpfr_mul(r11544818, r11544817, r11544808, MPFR_RNDN);
        ;
        mpfr_add(r11544820, r11544818, r11544819, MPFR_RNDN);
        mpfr_pow(r11544821, r11544816, r11544820, MPFR_RNDN);
        mpfr_log(r11544822, r11544821, MPFR_RNDN);
        mpfr_mul(r11544823, r11544808, r11544808, MPFR_RNDN);
        ;
        mpfr_mul(r11544825, r11544824, r11544808, MPFR_RNDN);
        ;
        mpfr_add(r11544827, r11544825, r11544826, MPFR_RNDN);
        mpfr_mul(r11544828, r11544823, r11544827, MPFR_RNDN);
        mpfr_add(r11544829, r11544822, r11544828, MPFR_RNDN);
        mpfr_add(r11544830, r11544812, r11544829, MPFR_RNDN);
        return mpfr_get_d(r11544830, MPFR_RNDN);
}

static mpfr_t r11544831, r11544832, r11544833, r11544834, r11544835, r11544836, r11544837, r11544838, r11544839, r11544840, r11544841, r11544842, r11544843, r11544844, r11544845, r11544846, r11544847, r11544848, r11544849, r11544850, r11544851, r11544852, r11544853;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544831);
        mpfr_init_set_str(r11544832, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11544833);
        mpfr_init_set_str(r11544834, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544835);
        mpfr_init(r11544836);
        mpfr_init_set_str(r11544837, "3", 10, MPFR_RNDN);
        mpfr_init(r11544838);
        mpfr_init(r11544839);
        mpfr_init_set_str(r11544840, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11544841);
        mpfr_init_set_str(r11544842, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11544843);
        mpfr_init(r11544844);
        mpfr_init(r11544845);
        mpfr_init(r11544846);
        mpfr_init_set_str(r11544847, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11544848);
        mpfr_init_set_str(r11544849, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11544850);
        mpfr_init(r11544851);
        mpfr_init(r11544852);
        mpfr_init(r11544853);
}

double f_dm(double x) {
        mpfr_set_d(r11544831, x, MPFR_RNDN);
        ;
        mpfr_mul(r11544833, r11544831, r11544832, MPFR_RNDN);
        ;
        mpfr_add(r11544835, r11544833, r11544834, MPFR_RNDN);
        mpfr_exp(r11544836, r11544831, MPFR_RNDN);
        ;
        mpfr_pow(r11544838, r11544831, r11544837, MPFR_RNDN);
        mpfr_pow(r11544839, r11544836, r11544838, MPFR_RNDN);
        ;
        mpfr_mul(r11544841, r11544840, r11544831, MPFR_RNDN);
        ;
        mpfr_add(r11544843, r11544841, r11544842, MPFR_RNDN);
        mpfr_pow(r11544844, r11544839, r11544843, MPFR_RNDN);
        mpfr_log(r11544845, r11544844, MPFR_RNDN);
        mpfr_mul(r11544846, r11544831, r11544831, MPFR_RNDN);
        ;
        mpfr_mul(r11544848, r11544847, r11544831, MPFR_RNDN);
        ;
        mpfr_add(r11544850, r11544848, r11544849, MPFR_RNDN);
        mpfr_mul(r11544851, r11544846, r11544850, MPFR_RNDN);
        mpfr_add(r11544852, r11544845, r11544851, MPFR_RNDN);
        mpfr_add(r11544853, r11544835, r11544852, MPFR_RNDN);
        return mpfr_get_d(r11544853, MPFR_RNDN);
}

