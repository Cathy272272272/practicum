#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9581708 = 1.0;
        float r9581709 = -7.0;
        float r9581710 = x;
        float r9581711 = r9581709 * r9581710;
        float r9581712 = r9581708 + r9581711;
        float r9581713 = 10.5;
        float r9581714 = r9581710 * r9581710;
        float r9581715 = r9581713 * r9581714;
        float r9581716 = r9581712 + r9581715;
        float r9581717 = -5.833333;
        float r9581718 = r9581714 * r9581710;
        float r9581719 = r9581717 * r9581718;
        float r9581720 = r9581716 + r9581719;
        float r9581721 = 1.458333;
        float r9581722 = r9581718 * r9581710;
        float r9581723 = r9581721 * r9581722;
        float r9581724 = r9581720 + r9581723;
        float r9581725 = -0.175;
        float r9581726 = r9581722 * r9581710;
        float r9581727 = r9581725 * r9581726;
        float r9581728 = r9581724 + r9581727;
        float r9581729 = 0.009722;
        float r9581730 = r9581726 * r9581710;
        float r9581731 = r9581729 * r9581730;
        float r9581732 = r9581728 + r9581731;
        float r9581733 = -0.000198;
        float r9581734 = r9581730 * r9581710;
        float r9581735 = r9581733 * r9581734;
        float r9581736 = r9581732 + r9581735;
        return r9581736;
}

double f_id(double x) {
        double r9581737 = 1.0;
        double r9581738 = -7.0;
        double r9581739 = x;
        double r9581740 = r9581738 * r9581739;
        double r9581741 = r9581737 + r9581740;
        double r9581742 = 10.5;
        double r9581743 = r9581739 * r9581739;
        double r9581744 = r9581742 * r9581743;
        double r9581745 = r9581741 + r9581744;
        double r9581746 = -5.833333;
        double r9581747 = r9581743 * r9581739;
        double r9581748 = r9581746 * r9581747;
        double r9581749 = r9581745 + r9581748;
        double r9581750 = 1.458333;
        double r9581751 = r9581747 * r9581739;
        double r9581752 = r9581750 * r9581751;
        double r9581753 = r9581749 + r9581752;
        double r9581754 = -0.175;
        double r9581755 = r9581751 * r9581739;
        double r9581756 = r9581754 * r9581755;
        double r9581757 = r9581753 + r9581756;
        double r9581758 = 0.009722;
        double r9581759 = r9581755 * r9581739;
        double r9581760 = r9581758 * r9581759;
        double r9581761 = r9581757 + r9581760;
        double r9581762 = -0.000198;
        double r9581763 = r9581759 * r9581739;
        double r9581764 = r9581762 * r9581763;
        double r9581765 = r9581761 + r9581764;
        return r9581765;
}


double f_of(float x) {
        float r9581766 = x;
        float r9581767 = 3;
        float r9581768 = pow(r9581766, r9581767);
        float r9581769 = r9581768 * r9581768;
        float r9581770 = 10.5;
        float r9581771 = -5.833333;
        float r9581772 = r9581771 * r9581766;
        float r9581773 = r9581770 + r9581772;
        float r9581774 = r9581769 * r9581773;
        float r9581775 = r9581773 * r9581773;
        float r9581776 = r9581774 * r9581775;
        float r9581777 = cbrt(r9581776);
        float r9581778 = -7.0;
        float r9581779 = r9581766 * r9581778;
        float r9581780 = 1.0;
        float r9581781 = r9581779 + r9581780;
        float r9581782 = r9581777 + r9581781;
        float r9581783 = r9581766 * r9581766;
        float r9581784 = r9581783 * r9581783;
        float r9581785 = 1.458333;
        float r9581786 = -0.175;
        float r9581787 = r9581786 * r9581766;
        float r9581788 = r9581785 + r9581787;
        float r9581789 = r9581784 * r9581788;
        float r9581790 = -0.000198;
        float r9581791 = r9581790 * r9581766;
        float r9581792 = 0.009722;
        float r9581793 = r9581791 + r9581792;
        float r9581794 = r9581769 * r9581793;
        float r9581795 = r9581789 + r9581794;
        float r9581796 = r9581782 + r9581795;
        return r9581796;
}

double f_od(double x) {
        double r9581797 = x;
        double r9581798 = 3;
        double r9581799 = pow(r9581797, r9581798);
        double r9581800 = r9581799 * r9581799;
        double r9581801 = 10.5;
        double r9581802 = -5.833333;
        double r9581803 = r9581802 * r9581797;
        double r9581804 = r9581801 + r9581803;
        double r9581805 = r9581800 * r9581804;
        double r9581806 = r9581804 * r9581804;
        double r9581807 = r9581805 * r9581806;
        double r9581808 = cbrt(r9581807);
        double r9581809 = -7.0;
        double r9581810 = r9581797 * r9581809;
        double r9581811 = 1.0;
        double r9581812 = r9581810 + r9581811;
        double r9581813 = r9581808 + r9581812;
        double r9581814 = r9581797 * r9581797;
        double r9581815 = r9581814 * r9581814;
        double r9581816 = 1.458333;
        double r9581817 = -0.175;
        double r9581818 = r9581817 * r9581797;
        double r9581819 = r9581816 + r9581818;
        double r9581820 = r9581815 * r9581819;
        double r9581821 = -0.000198;
        double r9581822 = r9581821 * r9581797;
        double r9581823 = 0.009722;
        double r9581824 = r9581822 + r9581823;
        double r9581825 = r9581800 * r9581824;
        double r9581826 = r9581820 + r9581825;
        double r9581827 = r9581813 + r9581826;
        return r9581827;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9581828, r9581829, r9581830, r9581831, r9581832, r9581833, r9581834, r9581835, r9581836, r9581837, r9581838, r9581839, r9581840, r9581841, r9581842, r9581843, r9581844, r9581845, r9581846, r9581847, r9581848, r9581849, r9581850, r9581851, r9581852, r9581853, r9581854, r9581855, r9581856;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9581828, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581829, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9581830);
        mpfr_init(r9581831);
        mpfr_init(r9581832);
        mpfr_init_set_str(r9581833, "10.5", 10, MPFR_RNDN);
        mpfr_init(r9581834);
        mpfr_init(r9581835);
        mpfr_init(r9581836);
        mpfr_init_set_str(r9581837, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9581838);
        mpfr_init(r9581839);
        mpfr_init(r9581840);
        mpfr_init_set_str(r9581841, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r9581842);
        mpfr_init(r9581843);
        mpfr_init(r9581844);
        mpfr_init_set_str(r9581845, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9581846);
        mpfr_init(r9581847);
        mpfr_init(r9581848);
        mpfr_init_set_str(r9581849, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9581850);
        mpfr_init(r9581851);
        mpfr_init(r9581852);
        mpfr_init_set_str(r9581853, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9581854);
        mpfr_init(r9581855);
        mpfr_init(r9581856);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9581830, x, MPFR_RNDN);
        mpfr_mul(r9581831, r9581829, r9581830, MPFR_RNDN);
        mpfr_add(r9581832, r9581828, r9581831, MPFR_RNDN);
        ;
        mpfr_mul(r9581834, r9581830, r9581830, MPFR_RNDN);
        mpfr_mul(r9581835, r9581833, r9581834, MPFR_RNDN);
        mpfr_add(r9581836, r9581832, r9581835, MPFR_RNDN);
        ;
        mpfr_mul(r9581838, r9581834, r9581830, MPFR_RNDN);
        mpfr_mul(r9581839, r9581837, r9581838, MPFR_RNDN);
        mpfr_add(r9581840, r9581836, r9581839, MPFR_RNDN);
        ;
        mpfr_mul(r9581842, r9581838, r9581830, MPFR_RNDN);
        mpfr_mul(r9581843, r9581841, r9581842, MPFR_RNDN);
        mpfr_add(r9581844, r9581840, r9581843, MPFR_RNDN);
        ;
        mpfr_mul(r9581846, r9581842, r9581830, MPFR_RNDN);
        mpfr_mul(r9581847, r9581845, r9581846, MPFR_RNDN);
        mpfr_add(r9581848, r9581844, r9581847, MPFR_RNDN);
        ;
        mpfr_mul(r9581850, r9581846, r9581830, MPFR_RNDN);
        mpfr_mul(r9581851, r9581849, r9581850, MPFR_RNDN);
        mpfr_add(r9581852, r9581848, r9581851, MPFR_RNDN);
        ;
        mpfr_mul(r9581854, r9581850, r9581830, MPFR_RNDN);
        mpfr_mul(r9581855, r9581853, r9581854, MPFR_RNDN);
        mpfr_add(r9581856, r9581852, r9581855, MPFR_RNDN);
        return mpfr_get_d(r9581856, MPFR_RNDN);
}

static mpfr_t r9581857, r9581858, r9581859, r9581860, r9581861, r9581862, r9581863, r9581864, r9581865, r9581866, r9581867, r9581868, r9581869, r9581870, r9581871, r9581872, r9581873, r9581874, r9581875, r9581876, r9581877, r9581878, r9581879, r9581880, r9581881, r9581882, r9581883, r9581884, r9581885, r9581886, r9581887;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9581857);
        mpfr_init_set_str(r9581858, "3", 10, MPFR_RNDN);
        mpfr_init(r9581859);
        mpfr_init(r9581860);
        mpfr_init_set_str(r9581861, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581862, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9581863);
        mpfr_init(r9581864);
        mpfr_init(r9581865);
        mpfr_init(r9581866);
        mpfr_init(r9581867);
        mpfr_init(r9581868);
        mpfr_init_set_str(r9581869, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9581870);
        mpfr_init_set_str(r9581871, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9581872);
        mpfr_init(r9581873);
        mpfr_init(r9581874);
        mpfr_init(r9581875);
        mpfr_init_set_str(r9581876, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581877, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9581878);
        mpfr_init(r9581879);
        mpfr_init(r9581880);
        mpfr_init_set_str(r9581881, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9581882);
        mpfr_init_set_str(r9581883, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9581884);
        mpfr_init(r9581885);
        mpfr_init(r9581886);
        mpfr_init(r9581887);
}

double f_fm(double x) {
        mpfr_set_d(r9581857, x, MPFR_RNDN);
        ;
        mpfr_pow(r9581859, r9581857, r9581858, MPFR_RNDN);
        mpfr_mul(r9581860, r9581859, r9581859, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9581863, r9581862, r9581857, MPFR_RNDN);
        mpfr_add(r9581864, r9581861, r9581863, MPFR_RNDN);
        mpfr_mul(r9581865, r9581860, r9581864, MPFR_RNDN);
        mpfr_mul(r9581866, r9581864, r9581864, MPFR_RNDN);
        mpfr_mul(r9581867, r9581865, r9581866, MPFR_RNDN);
        mpfr_cbrt(r9581868, r9581867, MPFR_RNDN);
        ;
        mpfr_mul(r9581870, r9581857, r9581869, MPFR_RNDN);
        ;
        mpfr_add(r9581872, r9581870, r9581871, MPFR_RNDN);
        mpfr_add(r9581873, r9581868, r9581872, MPFR_RNDN);
        mpfr_mul(r9581874, r9581857, r9581857, MPFR_RNDN);
        mpfr_mul(r9581875, r9581874, r9581874, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9581878, r9581877, r9581857, MPFR_RNDN);
        mpfr_add(r9581879, r9581876, r9581878, MPFR_RNDN);
        mpfr_mul(r9581880, r9581875, r9581879, MPFR_RNDN);
        ;
        mpfr_mul(r9581882, r9581881, r9581857, MPFR_RNDN);
        ;
        mpfr_add(r9581884, r9581882, r9581883, MPFR_RNDN);
        mpfr_mul(r9581885, r9581860, r9581884, MPFR_RNDN);
        mpfr_add(r9581886, r9581880, r9581885, MPFR_RNDN);
        mpfr_add(r9581887, r9581873, r9581886, MPFR_RNDN);
        return mpfr_get_d(r9581887, MPFR_RNDN);
}

static mpfr_t r9581888, r9581889, r9581890, r9581891, r9581892, r9581893, r9581894, r9581895, r9581896, r9581897, r9581898, r9581899, r9581900, r9581901, r9581902, r9581903, r9581904, r9581905, r9581906, r9581907, r9581908, r9581909, r9581910, r9581911, r9581912, r9581913, r9581914, r9581915, r9581916, r9581917, r9581918;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9581888);
        mpfr_init_set_str(r9581889, "3", 10, MPFR_RNDN);
        mpfr_init(r9581890);
        mpfr_init(r9581891);
        mpfr_init_set_str(r9581892, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581893, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r9581894);
        mpfr_init(r9581895);
        mpfr_init(r9581896);
        mpfr_init(r9581897);
        mpfr_init(r9581898);
        mpfr_init(r9581899);
        mpfr_init_set_str(r9581900, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r9581901);
        mpfr_init_set_str(r9581902, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9581903);
        mpfr_init(r9581904);
        mpfr_init(r9581905);
        mpfr_init(r9581906);
        mpfr_init_set_str(r9581907, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581908, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r9581909);
        mpfr_init(r9581910);
        mpfr_init(r9581911);
        mpfr_init_set_str(r9581912, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r9581913);
        mpfr_init_set_str(r9581914, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r9581915);
        mpfr_init(r9581916);
        mpfr_init(r9581917);
        mpfr_init(r9581918);
}

double f_dm(double x) {
        mpfr_set_d(r9581888, x, MPFR_RNDN);
        ;
        mpfr_pow(r9581890, r9581888, r9581889, MPFR_RNDN);
        mpfr_mul(r9581891, r9581890, r9581890, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9581894, r9581893, r9581888, MPFR_RNDN);
        mpfr_add(r9581895, r9581892, r9581894, MPFR_RNDN);
        mpfr_mul(r9581896, r9581891, r9581895, MPFR_RNDN);
        mpfr_mul(r9581897, r9581895, r9581895, MPFR_RNDN);
        mpfr_mul(r9581898, r9581896, r9581897, MPFR_RNDN);
        mpfr_cbrt(r9581899, r9581898, MPFR_RNDN);
        ;
        mpfr_mul(r9581901, r9581888, r9581900, MPFR_RNDN);
        ;
        mpfr_add(r9581903, r9581901, r9581902, MPFR_RNDN);
        mpfr_add(r9581904, r9581899, r9581903, MPFR_RNDN);
        mpfr_mul(r9581905, r9581888, r9581888, MPFR_RNDN);
        mpfr_mul(r9581906, r9581905, r9581905, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9581909, r9581908, r9581888, MPFR_RNDN);
        mpfr_add(r9581910, r9581907, r9581909, MPFR_RNDN);
        mpfr_mul(r9581911, r9581906, r9581910, MPFR_RNDN);
        ;
        mpfr_mul(r9581913, r9581912, r9581888, MPFR_RNDN);
        ;
        mpfr_add(r9581915, r9581913, r9581914, MPFR_RNDN);
        mpfr_mul(r9581916, r9581891, r9581915, MPFR_RNDN);
        mpfr_add(r9581917, r9581911, r9581916, MPFR_RNDN);
        mpfr_add(r9581918, r9581904, r9581917, MPFR_RNDN);
        return mpfr_get_d(r9581918, MPFR_RNDN);
}

