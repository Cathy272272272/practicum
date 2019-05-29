#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8034649 = -0.246094;
        float r8034650 = 13.535156;
        float r8034651 = x;
        float r8034652 = r8034651 * r8034651;
        float r8034653 = r8034650 * r8034652;
        float r8034654 = r8034649 + r8034653;
        float r8034655 = -117.304688;
        float r8034656 = r8034652 * r8034651;
        float r8034657 = r8034656 * r8034651;
        float r8034658 = r8034655 * r8034657;
        float r8034659 = r8034654 + r8034658;
        float r8034660 = 351.914062;
        float r8034661 = r8034657 * r8034651;
        float r8034662 = r8034661 * r8034651;
        float r8034663 = r8034660 * r8034662;
        float r8034664 = r8034659 + r8034663;
        float r8034665 = -427.324219;
        float r8034666 = r8034662 * r8034651;
        float r8034667 = r8034666 * r8034651;
        float r8034668 = r8034665 * r8034667;
        float r8034669 = r8034664 + r8034668;
        float r8034670 = 180.425781;
        float r8034671 = r8034667 * r8034651;
        float r8034672 = r8034671 * r8034651;
        float r8034673 = r8034670 * r8034672;
        float r8034674 = r8034669 + r8034673;
        return r8034674;
}

double f_id(double x) {
        double r8034675 = -0.246094;
        double r8034676 = 13.535156;
        double r8034677 = x;
        double r8034678 = r8034677 * r8034677;
        double r8034679 = r8034676 * r8034678;
        double r8034680 = r8034675 + r8034679;
        double r8034681 = -117.304688;
        double r8034682 = r8034678 * r8034677;
        double r8034683 = r8034682 * r8034677;
        double r8034684 = r8034681 * r8034683;
        double r8034685 = r8034680 + r8034684;
        double r8034686 = 351.914062;
        double r8034687 = r8034683 * r8034677;
        double r8034688 = r8034687 * r8034677;
        double r8034689 = r8034686 * r8034688;
        double r8034690 = r8034685 + r8034689;
        double r8034691 = -427.324219;
        double r8034692 = r8034688 * r8034677;
        double r8034693 = r8034692 * r8034677;
        double r8034694 = r8034691 * r8034693;
        double r8034695 = r8034690 + r8034694;
        double r8034696 = 180.425781;
        double r8034697 = r8034693 * r8034677;
        double r8034698 = r8034697 * r8034677;
        double r8034699 = r8034696 * r8034698;
        double r8034700 = r8034695 + r8034699;
        return r8034700;
}


double f_of(float x) {
        float r8034701 = x;
        float r8034702 = r8034701 * r8034701;
        float r8034703 = r8034702 * r8034702;
        float r8034704 = 351.914062;
        float r8034705 = r8034704 * r8034701;
        float r8034706 = r8034705 * r8034701;
        float r8034707 = r8034703 * r8034706;
        float r8034708 = -427.324219;
        float r8034709 = 8;
        float r8034710 = pow(r8034701, r8034709);
        float r8034711 = r8034708 * r8034710;
        float r8034712 = -117.304688;
        float r8034713 = r8034701 * r8034712;
        float r8034714 = 3;
        float r8034715 = pow(r8034701, r8034714);
        float r8034716 = r8034713 * r8034715;
        float r8034717 = r8034711 + r8034716;
        float r8034718 = r8034707 + r8034717;
        float r8034719 = 180.425781;
        float r8034720 = r8034719 * r8034701;
        float r8034721 = r8034720 * r8034715;
        float r8034722 = r8034715 * r8034715;
        float r8034723 = r8034721 * r8034722;
        float r8034724 = 13.535156;
        float r8034725 = r8034702 * r8034724;
        float r8034726 = -0.246094;
        float r8034727 = r8034725 + r8034726;
        float r8034728 = r8034723 + r8034727;
        float r8034729 = r8034718 + r8034728;
        return r8034729;
}

double f_od(double x) {
        double r8034730 = x;
        double r8034731 = r8034730 * r8034730;
        double r8034732 = r8034731 * r8034731;
        double r8034733 = 351.914062;
        double r8034734 = r8034733 * r8034730;
        double r8034735 = r8034734 * r8034730;
        double r8034736 = r8034732 * r8034735;
        double r8034737 = -427.324219;
        double r8034738 = 8;
        double r8034739 = pow(r8034730, r8034738);
        double r8034740 = r8034737 * r8034739;
        double r8034741 = -117.304688;
        double r8034742 = r8034730 * r8034741;
        double r8034743 = 3;
        double r8034744 = pow(r8034730, r8034743);
        double r8034745 = r8034742 * r8034744;
        double r8034746 = r8034740 + r8034745;
        double r8034747 = r8034736 + r8034746;
        double r8034748 = 180.425781;
        double r8034749 = r8034748 * r8034730;
        double r8034750 = r8034749 * r8034744;
        double r8034751 = r8034744 * r8034744;
        double r8034752 = r8034750 * r8034751;
        double r8034753 = 13.535156;
        double r8034754 = r8034731 * r8034753;
        double r8034755 = -0.246094;
        double r8034756 = r8034754 + r8034755;
        double r8034757 = r8034752 + r8034756;
        double r8034758 = r8034747 + r8034757;
        return r8034758;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8034759, r8034760, r8034761, r8034762, r8034763, r8034764, r8034765, r8034766, r8034767, r8034768, r8034769, r8034770, r8034771, r8034772, r8034773, r8034774, r8034775, r8034776, r8034777, r8034778, r8034779, r8034780, r8034781, r8034782, r8034783, r8034784;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8034759, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r8034760, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8034761);
        mpfr_init(r8034762);
        mpfr_init(r8034763);
        mpfr_init(r8034764);
        mpfr_init_set_str(r8034765, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8034766);
        mpfr_init(r8034767);
        mpfr_init(r8034768);
        mpfr_init(r8034769);
        mpfr_init_set_str(r8034770, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8034771);
        mpfr_init(r8034772);
        mpfr_init(r8034773);
        mpfr_init(r8034774);
        mpfr_init_set_str(r8034775, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r8034776);
        mpfr_init(r8034777);
        mpfr_init(r8034778);
        mpfr_init(r8034779);
        mpfr_init_set_str(r8034780, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8034781);
        mpfr_init(r8034782);
        mpfr_init(r8034783);
        mpfr_init(r8034784);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8034761, x, MPFR_RNDN);
        mpfr_mul(r8034762, r8034761, r8034761, MPFR_RNDN);
        mpfr_mul(r8034763, r8034760, r8034762, MPFR_RNDN);
        mpfr_add(r8034764, r8034759, r8034763, MPFR_RNDN);
        ;
        mpfr_mul(r8034766, r8034762, r8034761, MPFR_RNDN);
        mpfr_mul(r8034767, r8034766, r8034761, MPFR_RNDN);
        mpfr_mul(r8034768, r8034765, r8034767, MPFR_RNDN);
        mpfr_add(r8034769, r8034764, r8034768, MPFR_RNDN);
        ;
        mpfr_mul(r8034771, r8034767, r8034761, MPFR_RNDN);
        mpfr_mul(r8034772, r8034771, r8034761, MPFR_RNDN);
        mpfr_mul(r8034773, r8034770, r8034772, MPFR_RNDN);
        mpfr_add(r8034774, r8034769, r8034773, MPFR_RNDN);
        ;
        mpfr_mul(r8034776, r8034772, r8034761, MPFR_RNDN);
        mpfr_mul(r8034777, r8034776, r8034761, MPFR_RNDN);
        mpfr_mul(r8034778, r8034775, r8034777, MPFR_RNDN);
        mpfr_add(r8034779, r8034774, r8034778, MPFR_RNDN);
        ;
        mpfr_mul(r8034781, r8034777, r8034761, MPFR_RNDN);
        mpfr_mul(r8034782, r8034781, r8034761, MPFR_RNDN);
        mpfr_mul(r8034783, r8034780, r8034782, MPFR_RNDN);
        mpfr_add(r8034784, r8034779, r8034783, MPFR_RNDN);
        return mpfr_get_d(r8034784, MPFR_RNDN);
}

static mpfr_t r8034785, r8034786, r8034787, r8034788, r8034789, r8034790, r8034791, r8034792, r8034793, r8034794, r8034795, r8034796, r8034797, r8034798, r8034799, r8034800, r8034801, r8034802, r8034803, r8034804, r8034805, r8034806, r8034807, r8034808, r8034809, r8034810, r8034811, r8034812, r8034813;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8034785);
        mpfr_init(r8034786);
        mpfr_init(r8034787);
        mpfr_init_set_str(r8034788, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8034789);
        mpfr_init(r8034790);
        mpfr_init(r8034791);
        mpfr_init_set_str(r8034792, "-427.324219", 10, MPFR_RNDN);
        mpfr_init_set_str(r8034793, "8", 10, MPFR_RNDN);
        mpfr_init(r8034794);
        mpfr_init(r8034795);
        mpfr_init_set_str(r8034796, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8034797);
        mpfr_init_set_str(r8034798, "3", 10, MPFR_RNDN);
        mpfr_init(r8034799);
        mpfr_init(r8034800);
        mpfr_init(r8034801);
        mpfr_init(r8034802);
        mpfr_init_set_str(r8034803, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8034804);
        mpfr_init(r8034805);
        mpfr_init(r8034806);
        mpfr_init(r8034807);
        mpfr_init_set_str(r8034808, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8034809);
        mpfr_init_set_str(r8034810, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r8034811);
        mpfr_init(r8034812);
        mpfr_init(r8034813);
}

double f_fm(double x) {
        mpfr_set_d(r8034785, x, MPFR_RNDN);
        mpfr_mul(r8034786, r8034785, r8034785, MPFR_RNDN);
        mpfr_mul(r8034787, r8034786, r8034786, MPFR_RNDN);
        ;
        mpfr_mul(r8034789, r8034788, r8034785, MPFR_RNDN);
        mpfr_mul(r8034790, r8034789, r8034785, MPFR_RNDN);
        mpfr_mul(r8034791, r8034787, r8034790, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8034794, r8034785, r8034793, MPFR_RNDN);
        mpfr_mul(r8034795, r8034792, r8034794, MPFR_RNDN);
        ;
        mpfr_mul(r8034797, r8034785, r8034796, MPFR_RNDN);
        ;
        mpfr_pow(r8034799, r8034785, r8034798, MPFR_RNDN);
        mpfr_mul(r8034800, r8034797, r8034799, MPFR_RNDN);
        mpfr_add(r8034801, r8034795, r8034800, MPFR_RNDN);
        mpfr_add(r8034802, r8034791, r8034801, MPFR_RNDN);
        ;
        mpfr_mul(r8034804, r8034803, r8034785, MPFR_RNDN);
        mpfr_mul(r8034805, r8034804, r8034799, MPFR_RNDN);
        mpfr_mul(r8034806, r8034799, r8034799, MPFR_RNDN);
        mpfr_mul(r8034807, r8034805, r8034806, MPFR_RNDN);
        ;
        mpfr_mul(r8034809, r8034786, r8034808, MPFR_RNDN);
        ;
        mpfr_add(r8034811, r8034809, r8034810, MPFR_RNDN);
        mpfr_add(r8034812, r8034807, r8034811, MPFR_RNDN);
        mpfr_add(r8034813, r8034802, r8034812, MPFR_RNDN);
        return mpfr_get_d(r8034813, MPFR_RNDN);
}

static mpfr_t r8034814, r8034815, r8034816, r8034817, r8034818, r8034819, r8034820, r8034821, r8034822, r8034823, r8034824, r8034825, r8034826, r8034827, r8034828, r8034829, r8034830, r8034831, r8034832, r8034833, r8034834, r8034835, r8034836, r8034837, r8034838, r8034839, r8034840, r8034841, r8034842;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8034814);
        mpfr_init(r8034815);
        mpfr_init(r8034816);
        mpfr_init_set_str(r8034817, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r8034818);
        mpfr_init(r8034819);
        mpfr_init(r8034820);
        mpfr_init_set_str(r8034821, "-427.324219", 10, MPFR_RNDN);
        mpfr_init_set_str(r8034822, "8", 10, MPFR_RNDN);
        mpfr_init(r8034823);
        mpfr_init(r8034824);
        mpfr_init_set_str(r8034825, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r8034826);
        mpfr_init_set_str(r8034827, "3", 10, MPFR_RNDN);
        mpfr_init(r8034828);
        mpfr_init(r8034829);
        mpfr_init(r8034830);
        mpfr_init(r8034831);
        mpfr_init_set_str(r8034832, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r8034833);
        mpfr_init(r8034834);
        mpfr_init(r8034835);
        mpfr_init(r8034836);
        mpfr_init_set_str(r8034837, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r8034838);
        mpfr_init_set_str(r8034839, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r8034840);
        mpfr_init(r8034841);
        mpfr_init(r8034842);
}

double f_dm(double x) {
        mpfr_set_d(r8034814, x, MPFR_RNDN);
        mpfr_mul(r8034815, r8034814, r8034814, MPFR_RNDN);
        mpfr_mul(r8034816, r8034815, r8034815, MPFR_RNDN);
        ;
        mpfr_mul(r8034818, r8034817, r8034814, MPFR_RNDN);
        mpfr_mul(r8034819, r8034818, r8034814, MPFR_RNDN);
        mpfr_mul(r8034820, r8034816, r8034819, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8034823, r8034814, r8034822, MPFR_RNDN);
        mpfr_mul(r8034824, r8034821, r8034823, MPFR_RNDN);
        ;
        mpfr_mul(r8034826, r8034814, r8034825, MPFR_RNDN);
        ;
        mpfr_pow(r8034828, r8034814, r8034827, MPFR_RNDN);
        mpfr_mul(r8034829, r8034826, r8034828, MPFR_RNDN);
        mpfr_add(r8034830, r8034824, r8034829, MPFR_RNDN);
        mpfr_add(r8034831, r8034820, r8034830, MPFR_RNDN);
        ;
        mpfr_mul(r8034833, r8034832, r8034814, MPFR_RNDN);
        mpfr_mul(r8034834, r8034833, r8034828, MPFR_RNDN);
        mpfr_mul(r8034835, r8034828, r8034828, MPFR_RNDN);
        mpfr_mul(r8034836, r8034834, r8034835, MPFR_RNDN);
        ;
        mpfr_mul(r8034838, r8034815, r8034837, MPFR_RNDN);
        ;
        mpfr_add(r8034840, r8034838, r8034839, MPFR_RNDN);
        mpfr_add(r8034841, r8034836, r8034840, MPFR_RNDN);
        mpfr_add(r8034842, r8034831, r8034841, MPFR_RNDN);
        return mpfr_get_d(r8034842, MPFR_RNDN);
}

