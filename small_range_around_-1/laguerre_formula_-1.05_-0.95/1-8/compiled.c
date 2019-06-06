#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10527703 = 1.0;
        float r10527704 = -8.0;
        float r10527705 = x;
        float r10527706 = r10527704 * r10527705;
        float r10527707 = r10527703 + r10527706;
        float r10527708 = 14.0;
        float r10527709 = r10527705 * r10527705;
        float r10527710 = r10527708 * r10527709;
        float r10527711 = r10527707 + r10527710;
        float r10527712 = -9.333333;
        float r10527713 = r10527709 * r10527705;
        float r10527714 = r10527712 * r10527713;
        float r10527715 = r10527711 + r10527714;
        float r10527716 = 2.916667;
        float r10527717 = r10527713 * r10527705;
        float r10527718 = r10527716 * r10527717;
        float r10527719 = r10527715 + r10527718;
        float r10527720 = -0.466667;
        float r10527721 = r10527717 * r10527705;
        float r10527722 = r10527720 * r10527721;
        float r10527723 = r10527719 + r10527722;
        float r10527724 = 0.038889;
        float r10527725 = r10527721 * r10527705;
        float r10527726 = r10527724 * r10527725;
        float r10527727 = r10527723 + r10527726;
        float r10527728 = -0.001587;
        float r10527729 = r10527725 * r10527705;
        float r10527730 = r10527728 * r10527729;
        float r10527731 = r10527727 + r10527730;
        float r10527732 = 2.5e-05;
        float r10527733 = r10527729 * r10527705;
        float r10527734 = r10527732 * r10527733;
        float r10527735 = r10527731 + r10527734;
        return r10527735;
}

double f_id(double x) {
        double r10527736 = 1.0;
        double r10527737 = -8.0;
        double r10527738 = x;
        double r10527739 = r10527737 * r10527738;
        double r10527740 = r10527736 + r10527739;
        double r10527741 = 14.0;
        double r10527742 = r10527738 * r10527738;
        double r10527743 = r10527741 * r10527742;
        double r10527744 = r10527740 + r10527743;
        double r10527745 = -9.333333;
        double r10527746 = r10527742 * r10527738;
        double r10527747 = r10527745 * r10527746;
        double r10527748 = r10527744 + r10527747;
        double r10527749 = 2.916667;
        double r10527750 = r10527746 * r10527738;
        double r10527751 = r10527749 * r10527750;
        double r10527752 = r10527748 + r10527751;
        double r10527753 = -0.466667;
        double r10527754 = r10527750 * r10527738;
        double r10527755 = r10527753 * r10527754;
        double r10527756 = r10527752 + r10527755;
        double r10527757 = 0.038889;
        double r10527758 = r10527754 * r10527738;
        double r10527759 = r10527757 * r10527758;
        double r10527760 = r10527756 + r10527759;
        double r10527761 = -0.001587;
        double r10527762 = r10527758 * r10527738;
        double r10527763 = r10527761 * r10527762;
        double r10527764 = r10527760 + r10527763;
        double r10527765 = 2.5e-05;
        double r10527766 = r10527762 * r10527738;
        double r10527767 = r10527765 * r10527766;
        double r10527768 = r10527764 + r10527767;
        return r10527768;
}


double f_of(float x) {
        float r10527769 = x;
        float r10527770 = r10527769 * r10527769;
        float r10527771 = 3;
        float r10527772 = pow(r10527770, r10527771);
        float r10527773 = 2.5e-05;
        float r10527774 = r10527773 * r10527770;
        float r10527775 = r10527772 * r10527774;
        float r10527776 = -0.001587;
        float r10527777 = r10527776 * r10527769;
        float r10527778 = 0.038889;
        float r10527779 = r10527777 + r10527778;
        float r10527780 = r10527772 * r10527779;
        float r10527781 = r10527775 + r10527780;
        float r10527782 = pow(r10527769, r10527771);
        float r10527783 = r10527782 * r10527782;
        float r10527784 = 14.0;
        float r10527785 = -9.333333;
        float r10527786 = r10527769 * r10527785;
        float r10527787 = r10527784 + r10527786;
        float r10527788 = r10527783 * r10527787;
        float r10527789 = r10527787 * r10527787;
        float r10527790 = r10527788 * r10527789;
        float r10527791 = cbrt(r10527790);
        float r10527792 = r10527770 * r10527770;
        float r10527793 = 2.916667;
        float r10527794 = -0.466667;
        float r10527795 = r10527794 * r10527769;
        float r10527796 = r10527793 + r10527795;
        float r10527797 = r10527792 * r10527796;
        float r10527798 = r10527791 + r10527797;
        float r10527799 = -8.0;
        float r10527800 = r10527769 * r10527799;
        float r10527801 = 1.0;
        float r10527802 = r10527800 + r10527801;
        float r10527803 = r10527798 + r10527802;
        float r10527804 = r10527781 + r10527803;
        return r10527804;
}

double f_od(double x) {
        double r10527805 = x;
        double r10527806 = r10527805 * r10527805;
        double r10527807 = 3;
        double r10527808 = pow(r10527806, r10527807);
        double r10527809 = 2.5e-05;
        double r10527810 = r10527809 * r10527806;
        double r10527811 = r10527808 * r10527810;
        double r10527812 = -0.001587;
        double r10527813 = r10527812 * r10527805;
        double r10527814 = 0.038889;
        double r10527815 = r10527813 + r10527814;
        double r10527816 = r10527808 * r10527815;
        double r10527817 = r10527811 + r10527816;
        double r10527818 = pow(r10527805, r10527807);
        double r10527819 = r10527818 * r10527818;
        double r10527820 = 14.0;
        double r10527821 = -9.333333;
        double r10527822 = r10527805 * r10527821;
        double r10527823 = r10527820 + r10527822;
        double r10527824 = r10527819 * r10527823;
        double r10527825 = r10527823 * r10527823;
        double r10527826 = r10527824 * r10527825;
        double r10527827 = cbrt(r10527826);
        double r10527828 = r10527806 * r10527806;
        double r10527829 = 2.916667;
        double r10527830 = -0.466667;
        double r10527831 = r10527830 * r10527805;
        double r10527832 = r10527829 + r10527831;
        double r10527833 = r10527828 * r10527832;
        double r10527834 = r10527827 + r10527833;
        double r10527835 = -8.0;
        double r10527836 = r10527805 * r10527835;
        double r10527837 = 1.0;
        double r10527838 = r10527836 + r10527837;
        double r10527839 = r10527834 + r10527838;
        double r10527840 = r10527817 + r10527839;
        return r10527840;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10527841, r10527842, r10527843, r10527844, r10527845, r10527846, r10527847, r10527848, r10527849, r10527850, r10527851, r10527852, r10527853, r10527854, r10527855, r10527856, r10527857, r10527858, r10527859, r10527860, r10527861, r10527862, r10527863, r10527864, r10527865, r10527866, r10527867, r10527868, r10527869, r10527870, r10527871, r10527872, r10527873;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10527841, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527842, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10527843);
        mpfr_init(r10527844);
        mpfr_init(r10527845);
        mpfr_init_set_str(r10527846, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10527847);
        mpfr_init(r10527848);
        mpfr_init(r10527849);
        mpfr_init_set_str(r10527850, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10527851);
        mpfr_init(r10527852);
        mpfr_init(r10527853);
        mpfr_init_set_str(r10527854, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10527855);
        mpfr_init(r10527856);
        mpfr_init(r10527857);
        mpfr_init_set_str(r10527858, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10527859);
        mpfr_init(r10527860);
        mpfr_init(r10527861);
        mpfr_init_set_str(r10527862, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10527863);
        mpfr_init(r10527864);
        mpfr_init(r10527865);
        mpfr_init_set_str(r10527866, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10527867);
        mpfr_init(r10527868);
        mpfr_init(r10527869);
        mpfr_init_set_str(r10527870, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10527871);
        mpfr_init(r10527872);
        mpfr_init(r10527873);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10527843, x, MPFR_RNDN);
        mpfr_mul(r10527844, r10527842, r10527843, MPFR_RNDN);
        mpfr_add(r10527845, r10527841, r10527844, MPFR_RNDN);
        ;
        mpfr_mul(r10527847, r10527843, r10527843, MPFR_RNDN);
        mpfr_mul(r10527848, r10527846, r10527847, MPFR_RNDN);
        mpfr_add(r10527849, r10527845, r10527848, MPFR_RNDN);
        ;
        mpfr_mul(r10527851, r10527847, r10527843, MPFR_RNDN);
        mpfr_mul(r10527852, r10527850, r10527851, MPFR_RNDN);
        mpfr_add(r10527853, r10527849, r10527852, MPFR_RNDN);
        ;
        mpfr_mul(r10527855, r10527851, r10527843, MPFR_RNDN);
        mpfr_mul(r10527856, r10527854, r10527855, MPFR_RNDN);
        mpfr_add(r10527857, r10527853, r10527856, MPFR_RNDN);
        ;
        mpfr_mul(r10527859, r10527855, r10527843, MPFR_RNDN);
        mpfr_mul(r10527860, r10527858, r10527859, MPFR_RNDN);
        mpfr_add(r10527861, r10527857, r10527860, MPFR_RNDN);
        ;
        mpfr_mul(r10527863, r10527859, r10527843, MPFR_RNDN);
        mpfr_mul(r10527864, r10527862, r10527863, MPFR_RNDN);
        mpfr_add(r10527865, r10527861, r10527864, MPFR_RNDN);
        ;
        mpfr_mul(r10527867, r10527863, r10527843, MPFR_RNDN);
        mpfr_mul(r10527868, r10527866, r10527867, MPFR_RNDN);
        mpfr_add(r10527869, r10527865, r10527868, MPFR_RNDN);
        ;
        mpfr_mul(r10527871, r10527867, r10527843, MPFR_RNDN);
        mpfr_mul(r10527872, r10527870, r10527871, MPFR_RNDN);
        mpfr_add(r10527873, r10527869, r10527872, MPFR_RNDN);
        return mpfr_get_d(r10527873, MPFR_RNDN);
}

static mpfr_t r10527874, r10527875, r10527876, r10527877, r10527878, r10527879, r10527880, r10527881, r10527882, r10527883, r10527884, r10527885, r10527886, r10527887, r10527888, r10527889, r10527890, r10527891, r10527892, r10527893, r10527894, r10527895, r10527896, r10527897, r10527898, r10527899, r10527900, r10527901, r10527902, r10527903, r10527904, r10527905, r10527906, r10527907, r10527908, r10527909;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10527874);
        mpfr_init(r10527875);
        mpfr_init_set_str(r10527876, "3", 10, MPFR_RNDN);
        mpfr_init(r10527877);
        mpfr_init_set_str(r10527878, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10527879);
        mpfr_init(r10527880);
        mpfr_init_set_str(r10527881, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10527882);
        mpfr_init_set_str(r10527883, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10527884);
        mpfr_init(r10527885);
        mpfr_init(r10527886);
        mpfr_init(r10527887);
        mpfr_init(r10527888);
        mpfr_init_set_str(r10527889, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527890, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10527891);
        mpfr_init(r10527892);
        mpfr_init(r10527893);
        mpfr_init(r10527894);
        mpfr_init(r10527895);
        mpfr_init(r10527896);
        mpfr_init(r10527897);
        mpfr_init_set_str(r10527898, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527899, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10527900);
        mpfr_init(r10527901);
        mpfr_init(r10527902);
        mpfr_init(r10527903);
        mpfr_init_set_str(r10527904, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10527905);
        mpfr_init_set_str(r10527906, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10527907);
        mpfr_init(r10527908);
        mpfr_init(r10527909);
}

double f_fm(double x) {
        mpfr_set_d(r10527874, x, MPFR_RNDN);
        mpfr_mul(r10527875, r10527874, r10527874, MPFR_RNDN);
        ;
        mpfr_pow(r10527877, r10527875, r10527876, MPFR_RNDN);
        ;
        mpfr_mul(r10527879, r10527878, r10527875, MPFR_RNDN);
        mpfr_mul(r10527880, r10527877, r10527879, MPFR_RNDN);
        ;
        mpfr_mul(r10527882, r10527881, r10527874, MPFR_RNDN);
        ;
        mpfr_add(r10527884, r10527882, r10527883, MPFR_RNDN);
        mpfr_mul(r10527885, r10527877, r10527884, MPFR_RNDN);
        mpfr_add(r10527886, r10527880, r10527885, MPFR_RNDN);
        mpfr_pow(r10527887, r10527874, r10527876, MPFR_RNDN);
        mpfr_mul(r10527888, r10527887, r10527887, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10527891, r10527874, r10527890, MPFR_RNDN);
        mpfr_add(r10527892, r10527889, r10527891, MPFR_RNDN);
        mpfr_mul(r10527893, r10527888, r10527892, MPFR_RNDN);
        mpfr_mul(r10527894, r10527892, r10527892, MPFR_RNDN);
        mpfr_mul(r10527895, r10527893, r10527894, MPFR_RNDN);
        mpfr_cbrt(r10527896, r10527895, MPFR_RNDN);
        mpfr_mul(r10527897, r10527875, r10527875, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10527900, r10527899, r10527874, MPFR_RNDN);
        mpfr_add(r10527901, r10527898, r10527900, MPFR_RNDN);
        mpfr_mul(r10527902, r10527897, r10527901, MPFR_RNDN);
        mpfr_add(r10527903, r10527896, r10527902, MPFR_RNDN);
        ;
        mpfr_mul(r10527905, r10527874, r10527904, MPFR_RNDN);
        ;
        mpfr_add(r10527907, r10527905, r10527906, MPFR_RNDN);
        mpfr_add(r10527908, r10527903, r10527907, MPFR_RNDN);
        mpfr_add(r10527909, r10527886, r10527908, MPFR_RNDN);
        return mpfr_get_d(r10527909, MPFR_RNDN);
}

static mpfr_t r10527910, r10527911, r10527912, r10527913, r10527914, r10527915, r10527916, r10527917, r10527918, r10527919, r10527920, r10527921, r10527922, r10527923, r10527924, r10527925, r10527926, r10527927, r10527928, r10527929, r10527930, r10527931, r10527932, r10527933, r10527934, r10527935, r10527936, r10527937, r10527938, r10527939, r10527940, r10527941, r10527942, r10527943, r10527944, r10527945;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10527910);
        mpfr_init(r10527911);
        mpfr_init_set_str(r10527912, "3", 10, MPFR_RNDN);
        mpfr_init(r10527913);
        mpfr_init_set_str(r10527914, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10527915);
        mpfr_init(r10527916);
        mpfr_init_set_str(r10527917, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10527918);
        mpfr_init_set_str(r10527919, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10527920);
        mpfr_init(r10527921);
        mpfr_init(r10527922);
        mpfr_init(r10527923);
        mpfr_init(r10527924);
        mpfr_init_set_str(r10527925, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527926, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10527927);
        mpfr_init(r10527928);
        mpfr_init(r10527929);
        mpfr_init(r10527930);
        mpfr_init(r10527931);
        mpfr_init(r10527932);
        mpfr_init(r10527933);
        mpfr_init_set_str(r10527934, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527935, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10527936);
        mpfr_init(r10527937);
        mpfr_init(r10527938);
        mpfr_init(r10527939);
        mpfr_init_set_str(r10527940, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10527941);
        mpfr_init_set_str(r10527942, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10527943);
        mpfr_init(r10527944);
        mpfr_init(r10527945);
}

double f_dm(double x) {
        mpfr_set_d(r10527910, x, MPFR_RNDN);
        mpfr_mul(r10527911, r10527910, r10527910, MPFR_RNDN);
        ;
        mpfr_pow(r10527913, r10527911, r10527912, MPFR_RNDN);
        ;
        mpfr_mul(r10527915, r10527914, r10527911, MPFR_RNDN);
        mpfr_mul(r10527916, r10527913, r10527915, MPFR_RNDN);
        ;
        mpfr_mul(r10527918, r10527917, r10527910, MPFR_RNDN);
        ;
        mpfr_add(r10527920, r10527918, r10527919, MPFR_RNDN);
        mpfr_mul(r10527921, r10527913, r10527920, MPFR_RNDN);
        mpfr_add(r10527922, r10527916, r10527921, MPFR_RNDN);
        mpfr_pow(r10527923, r10527910, r10527912, MPFR_RNDN);
        mpfr_mul(r10527924, r10527923, r10527923, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10527927, r10527910, r10527926, MPFR_RNDN);
        mpfr_add(r10527928, r10527925, r10527927, MPFR_RNDN);
        mpfr_mul(r10527929, r10527924, r10527928, MPFR_RNDN);
        mpfr_mul(r10527930, r10527928, r10527928, MPFR_RNDN);
        mpfr_mul(r10527931, r10527929, r10527930, MPFR_RNDN);
        mpfr_cbrt(r10527932, r10527931, MPFR_RNDN);
        mpfr_mul(r10527933, r10527911, r10527911, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10527936, r10527935, r10527910, MPFR_RNDN);
        mpfr_add(r10527937, r10527934, r10527936, MPFR_RNDN);
        mpfr_mul(r10527938, r10527933, r10527937, MPFR_RNDN);
        mpfr_add(r10527939, r10527932, r10527938, MPFR_RNDN);
        ;
        mpfr_mul(r10527941, r10527910, r10527940, MPFR_RNDN);
        ;
        mpfr_add(r10527943, r10527941, r10527942, MPFR_RNDN);
        mpfr_add(r10527944, r10527939, r10527943, MPFR_RNDN);
        mpfr_add(r10527945, r10527922, r10527944, MPFR_RNDN);
        return mpfr_get_d(r10527945, MPFR_RNDN);
}

