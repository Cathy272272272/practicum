#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10920713 = 1.0;
        float r10920714 = -7.0;
        float r10920715 = x;
        float r10920716 = r10920714 * r10920715;
        float r10920717 = r10920713 + r10920716;
        float r10920718 = 10.5;
        float r10920719 = r10920715 * r10920715;
        float r10920720 = r10920718 * r10920719;
        float r10920721 = r10920717 + r10920720;
        float r10920722 = -5.833333;
        float r10920723 = r10920719 * r10920715;
        float r10920724 = r10920722 * r10920723;
        float r10920725 = r10920721 + r10920724;
        float r10920726 = 1.458333;
        float r10920727 = r10920723 * r10920715;
        float r10920728 = r10920726 * r10920727;
        float r10920729 = r10920725 + r10920728;
        float r10920730 = -0.175;
        float r10920731 = r10920727 * r10920715;
        float r10920732 = r10920730 * r10920731;
        float r10920733 = r10920729 + r10920732;
        float r10920734 = 0.009722;
        float r10920735 = r10920731 * r10920715;
        float r10920736 = r10920734 * r10920735;
        float r10920737 = r10920733 + r10920736;
        float r10920738 = -0.000198;
        float r10920739 = r10920735 * r10920715;
        float r10920740 = r10920738 * r10920739;
        float r10920741 = r10920737 + r10920740;
        return r10920741;
}

double f_id(double x) {
        double r10920742 = 1.0;
        double r10920743 = -7.0;
        double r10920744 = x;
        double r10920745 = r10920743 * r10920744;
        double r10920746 = r10920742 + r10920745;
        double r10920747 = 10.5;
        double r10920748 = r10920744 * r10920744;
        double r10920749 = r10920747 * r10920748;
        double r10920750 = r10920746 + r10920749;
        double r10920751 = -5.833333;
        double r10920752 = r10920748 * r10920744;
        double r10920753 = r10920751 * r10920752;
        double r10920754 = r10920750 + r10920753;
        double r10920755 = 1.458333;
        double r10920756 = r10920752 * r10920744;
        double r10920757 = r10920755 * r10920756;
        double r10920758 = r10920754 + r10920757;
        double r10920759 = -0.175;
        double r10920760 = r10920756 * r10920744;
        double r10920761 = r10920759 * r10920760;
        double r10920762 = r10920758 + r10920761;
        double r10920763 = 0.009722;
        double r10920764 = r10920760 * r10920744;
        double r10920765 = r10920763 * r10920764;
        double r10920766 = r10920762 + r10920765;
        double r10920767 = -0.000198;
        double r10920768 = r10920764 * r10920744;
        double r10920769 = r10920767 * r10920768;
        double r10920770 = r10920766 + r10920769;
        return r10920770;
}


double f_of(float x) {
        float r10920771 = x;
        float r10920772 = 3;
        float r10920773 = pow(r10920771, r10920772);
        float r10920774 = r10920771 * r10920771;
        float r10920775 = r10920773 * r10920774;
        float r10920776 = 0.009722;
        float r10920777 = r10920776 * r10920771;
        float r10920778 = -0.175;
        float r10920779 = r10920777 + r10920778;
        float r10920780 = r10920775 * r10920779;
        float r10920781 = cbrt(r10920780);
        float r10920782 = r10920781 * r10920781;
        float r10920783 = r10920782 * r10920781;
        float r10920784 = 4;
        float r10920785 = pow(r10920771, r10920784);
        float r10920786 = r10920774 * r10920785;
        float r10920787 = -0.000198;
        float r10920788 = r10920787 * r10920771;
        float r10920789 = r10920786 * r10920788;
        float r10920790 = r10920783 + r10920789;
        float r10920791 = 10.5;
        float r10920792 = r10920771 * r10920791;
        float r10920793 = r10920792 * r10920771;
        float r10920794 = -7.0;
        float r10920795 = r10920771 * r10920794;
        float r10920796 = 1.0;
        float r10920797 = r10920795 + r10920796;
        float r10920798 = r10920793 + r10920797;
        float r10920799 = -5.833333;
        float r10920800 = 1.458333;
        float r10920801 = r10920800 * r10920771;
        float r10920802 = r10920799 + r10920801;
        float r10920803 = r10920773 * r10920802;
        float r10920804 = r10920798 + r10920803;
        float r10920805 = r10920790 + r10920804;
        return r10920805;
}

double f_od(double x) {
        double r10920806 = x;
        double r10920807 = 3;
        double r10920808 = pow(r10920806, r10920807);
        double r10920809 = r10920806 * r10920806;
        double r10920810 = r10920808 * r10920809;
        double r10920811 = 0.009722;
        double r10920812 = r10920811 * r10920806;
        double r10920813 = -0.175;
        double r10920814 = r10920812 + r10920813;
        double r10920815 = r10920810 * r10920814;
        double r10920816 = cbrt(r10920815);
        double r10920817 = r10920816 * r10920816;
        double r10920818 = r10920817 * r10920816;
        double r10920819 = 4;
        double r10920820 = pow(r10920806, r10920819);
        double r10920821 = r10920809 * r10920820;
        double r10920822 = -0.000198;
        double r10920823 = r10920822 * r10920806;
        double r10920824 = r10920821 * r10920823;
        double r10920825 = r10920818 + r10920824;
        double r10920826 = 10.5;
        double r10920827 = r10920806 * r10920826;
        double r10920828 = r10920827 * r10920806;
        double r10920829 = -7.0;
        double r10920830 = r10920806 * r10920829;
        double r10920831 = 1.0;
        double r10920832 = r10920830 + r10920831;
        double r10920833 = r10920828 + r10920832;
        double r10920834 = -5.833333;
        double r10920835 = 1.458333;
        double r10920836 = r10920835 * r10920806;
        double r10920837 = r10920834 + r10920836;
        double r10920838 = r10920808 * r10920837;
        double r10920839 = r10920833 + r10920838;
        double r10920840 = r10920825 + r10920839;
        return r10920840;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10920841, r10920842, r10920843, r10920844, r10920845, r10920846, r10920847, r10920848, r10920849, r10920850, r10920851, r10920852, r10920853, r10920854, r10920855, r10920856, r10920857, r10920858, r10920859, r10920860, r10920861, r10920862, r10920863, r10920864, r10920865, r10920866, r10920867, r10920868, r10920869;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10920841, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10920842, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10920843);
        mpfr_init(r10920844);
        mpfr_init(r10920845);
        mpfr_init_set_str(r10920846, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10920847);
        mpfr_init(r10920848);
        mpfr_init(r10920849);
        mpfr_init_set_str(r10920850, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10920851);
        mpfr_init(r10920852);
        mpfr_init(r10920853);
        mpfr_init_set_str(r10920854, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10920855);
        mpfr_init(r10920856);
        mpfr_init(r10920857);
        mpfr_init_set_str(r10920858, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10920859);
        mpfr_init(r10920860);
        mpfr_init(r10920861);
        mpfr_init_set_str(r10920862, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10920863);
        mpfr_init(r10920864);
        mpfr_init(r10920865);
        mpfr_init_set_str(r10920866, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10920867);
        mpfr_init(r10920868);
        mpfr_init(r10920869);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10920843, x, MPFR_RNDN);
        mpfr_mul(r10920844, r10920842, r10920843, MPFR_RNDN);
        mpfr_add(r10920845, r10920841, r10920844, MPFR_RNDN);
        ;
        mpfr_mul(r10920847, r10920843, r10920843, MPFR_RNDN);
        mpfr_mul(r10920848, r10920846, r10920847, MPFR_RNDN);
        mpfr_add(r10920849, r10920845, r10920848, MPFR_RNDN);
        ;
        mpfr_mul(r10920851, r10920847, r10920843, MPFR_RNDN);
        mpfr_mul(r10920852, r10920850, r10920851, MPFR_RNDN);
        mpfr_add(r10920853, r10920849, r10920852, MPFR_RNDN);
        ;
        mpfr_mul(r10920855, r10920851, r10920843, MPFR_RNDN);
        mpfr_mul(r10920856, r10920854, r10920855, MPFR_RNDN);
        mpfr_add(r10920857, r10920853, r10920856, MPFR_RNDN);
        ;
        mpfr_mul(r10920859, r10920855, r10920843, MPFR_RNDN);
        mpfr_mul(r10920860, r10920858, r10920859, MPFR_RNDN);
        mpfr_add(r10920861, r10920857, r10920860, MPFR_RNDN);
        ;
        mpfr_mul(r10920863, r10920859, r10920843, MPFR_RNDN);
        mpfr_mul(r10920864, r10920862, r10920863, MPFR_RNDN);
        mpfr_add(r10920865, r10920861, r10920864, MPFR_RNDN);
        ;
        mpfr_mul(r10920867, r10920863, r10920843, MPFR_RNDN);
        mpfr_mul(r10920868, r10920866, r10920867, MPFR_RNDN);
        mpfr_add(r10920869, r10920865, r10920868, MPFR_RNDN);
        return mpfr_get_d(r10920869, MPFR_RNDN);
}

static mpfr_t r10920870, r10920871, r10920872, r10920873, r10920874, r10920875, r10920876, r10920877, r10920878, r10920879, r10920880, r10920881, r10920882, r10920883, r10920884, r10920885, r10920886, r10920887, r10920888, r10920889, r10920890, r10920891, r10920892, r10920893, r10920894, r10920895, r10920896, r10920897, r10920898, r10920899, r10920900, r10920901, r10920902, r10920903, r10920904;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10920870);
        mpfr_init_set_str(r10920871, "3", 10, MPFR_RNDN);
        mpfr_init(r10920872);
        mpfr_init(r10920873);
        mpfr_init(r10920874);
        mpfr_init_set_str(r10920875, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10920876);
        mpfr_init_set_str(r10920877, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10920878);
        mpfr_init(r10920879);
        mpfr_init(r10920880);
        mpfr_init(r10920881);
        mpfr_init(r10920882);
        mpfr_init_set_str(r10920883, "4", 10, MPFR_RNDN);
        mpfr_init(r10920884);
        mpfr_init(r10920885);
        mpfr_init_set_str(r10920886, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10920887);
        mpfr_init(r10920888);
        mpfr_init(r10920889);
        mpfr_init_set_str(r10920890, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10920891);
        mpfr_init(r10920892);
        mpfr_init_set_str(r10920893, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10920894);
        mpfr_init_set_str(r10920895, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10920896);
        mpfr_init(r10920897);
        mpfr_init_set_str(r10920898, "-5.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10920899, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10920900);
        mpfr_init(r10920901);
        mpfr_init(r10920902);
        mpfr_init(r10920903);
        mpfr_init(r10920904);
}

double f_fm(double x) {
        mpfr_set_d(r10920870, x, MPFR_RNDN);
        ;
        mpfr_pow(r10920872, r10920870, r10920871, MPFR_RNDN);
        mpfr_mul(r10920873, r10920870, r10920870, MPFR_RNDN);
        mpfr_mul(r10920874, r10920872, r10920873, MPFR_RNDN);
        ;
        mpfr_mul(r10920876, r10920875, r10920870, MPFR_RNDN);
        ;
        mpfr_add(r10920878, r10920876, r10920877, MPFR_RNDN);
        mpfr_mul(r10920879, r10920874, r10920878, MPFR_RNDN);
        mpfr_cbrt(r10920880, r10920879, MPFR_RNDN);
        mpfr_mul(r10920881, r10920880, r10920880, MPFR_RNDN);
        mpfr_mul(r10920882, r10920881, r10920880, MPFR_RNDN);
        ;
        mpfr_pow(r10920884, r10920870, r10920883, MPFR_RNDN);
        mpfr_mul(r10920885, r10920873, r10920884, MPFR_RNDN);
        ;
        mpfr_mul(r10920887, r10920886, r10920870, MPFR_RNDN);
        mpfr_mul(r10920888, r10920885, r10920887, MPFR_RNDN);
        mpfr_add(r10920889, r10920882, r10920888, MPFR_RNDN);
        ;
        mpfr_mul(r10920891, r10920870, r10920890, MPFR_RNDN);
        mpfr_mul(r10920892, r10920891, r10920870, MPFR_RNDN);
        ;
        mpfr_mul(r10920894, r10920870, r10920893, MPFR_RNDN);
        ;
        mpfr_add(r10920896, r10920894, r10920895, MPFR_RNDN);
        mpfr_add(r10920897, r10920892, r10920896, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10920900, r10920899, r10920870, MPFR_RNDN);
        mpfr_add(r10920901, r10920898, r10920900, MPFR_RNDN);
        mpfr_mul(r10920902, r10920872, r10920901, MPFR_RNDN);
        mpfr_add(r10920903, r10920897, r10920902, MPFR_RNDN);
        mpfr_add(r10920904, r10920889, r10920903, MPFR_RNDN);
        return mpfr_get_d(r10920904, MPFR_RNDN);
}

static mpfr_t r10920905, r10920906, r10920907, r10920908, r10920909, r10920910, r10920911, r10920912, r10920913, r10920914, r10920915, r10920916, r10920917, r10920918, r10920919, r10920920, r10920921, r10920922, r10920923, r10920924, r10920925, r10920926, r10920927, r10920928, r10920929, r10920930, r10920931, r10920932, r10920933, r10920934, r10920935, r10920936, r10920937, r10920938, r10920939;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10920905);
        mpfr_init_set_str(r10920906, "3", 10, MPFR_RNDN);
        mpfr_init(r10920907);
        mpfr_init(r10920908);
        mpfr_init(r10920909);
        mpfr_init_set_str(r10920910, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10920911);
        mpfr_init_set_str(r10920912, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10920913);
        mpfr_init(r10920914);
        mpfr_init(r10920915);
        mpfr_init(r10920916);
        mpfr_init(r10920917);
        mpfr_init_set_str(r10920918, "4", 10, MPFR_RNDN);
        mpfr_init(r10920919);
        mpfr_init(r10920920);
        mpfr_init_set_str(r10920921, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10920922);
        mpfr_init(r10920923);
        mpfr_init(r10920924);
        mpfr_init_set_str(r10920925, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10920926);
        mpfr_init(r10920927);
        mpfr_init_set_str(r10920928, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10920929);
        mpfr_init_set_str(r10920930, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10920931);
        mpfr_init(r10920932);
        mpfr_init_set_str(r10920933, "-5.833333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10920934, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10920935);
        mpfr_init(r10920936);
        mpfr_init(r10920937);
        mpfr_init(r10920938);
        mpfr_init(r10920939);
}

double f_dm(double x) {
        mpfr_set_d(r10920905, x, MPFR_RNDN);
        ;
        mpfr_pow(r10920907, r10920905, r10920906, MPFR_RNDN);
        mpfr_mul(r10920908, r10920905, r10920905, MPFR_RNDN);
        mpfr_mul(r10920909, r10920907, r10920908, MPFR_RNDN);
        ;
        mpfr_mul(r10920911, r10920910, r10920905, MPFR_RNDN);
        ;
        mpfr_add(r10920913, r10920911, r10920912, MPFR_RNDN);
        mpfr_mul(r10920914, r10920909, r10920913, MPFR_RNDN);
        mpfr_cbrt(r10920915, r10920914, MPFR_RNDN);
        mpfr_mul(r10920916, r10920915, r10920915, MPFR_RNDN);
        mpfr_mul(r10920917, r10920916, r10920915, MPFR_RNDN);
        ;
        mpfr_pow(r10920919, r10920905, r10920918, MPFR_RNDN);
        mpfr_mul(r10920920, r10920908, r10920919, MPFR_RNDN);
        ;
        mpfr_mul(r10920922, r10920921, r10920905, MPFR_RNDN);
        mpfr_mul(r10920923, r10920920, r10920922, MPFR_RNDN);
        mpfr_add(r10920924, r10920917, r10920923, MPFR_RNDN);
        ;
        mpfr_mul(r10920926, r10920905, r10920925, MPFR_RNDN);
        mpfr_mul(r10920927, r10920926, r10920905, MPFR_RNDN);
        ;
        mpfr_mul(r10920929, r10920905, r10920928, MPFR_RNDN);
        ;
        mpfr_add(r10920931, r10920929, r10920930, MPFR_RNDN);
        mpfr_add(r10920932, r10920927, r10920931, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10920935, r10920934, r10920905, MPFR_RNDN);
        mpfr_add(r10920936, r10920933, r10920935, MPFR_RNDN);
        mpfr_mul(r10920937, r10920907, r10920936, MPFR_RNDN);
        mpfr_add(r10920938, r10920932, r10920937, MPFR_RNDN);
        mpfr_add(r10920939, r10920924, r10920938, MPFR_RNDN);
        return mpfr_get_d(r10920939, MPFR_RNDN);
}

