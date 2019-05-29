#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r11587775 = 1.0;
        float r11587776 = -4.0;
        float r11587777 = x;
        float r11587778 = r11587776 * r11587777;
        float r11587779 = r11587775 + r11587778;
        float r11587780 = 3.0;
        float r11587781 = r11587777 * r11587777;
        float r11587782 = r11587780 * r11587781;
        float r11587783 = r11587779 + r11587782;
        float r11587784 = -0.666667;
        float r11587785 = r11587781 * r11587777;
        float r11587786 = r11587784 * r11587785;
        float r11587787 = r11587783 + r11587786;
        float r11587788 = 0.041667;
        float r11587789 = r11587785 * r11587777;
        float r11587790 = r11587788 * r11587789;
        float r11587791 = r11587787 + r11587790;
        return r11587791;
}

double f_id(double x) {
        double r11587792 = 1.0;
        double r11587793 = -4.0;
        double r11587794 = x;
        double r11587795 = r11587793 * r11587794;
        double r11587796 = r11587792 + r11587795;
        double r11587797 = 3.0;
        double r11587798 = r11587794 * r11587794;
        double r11587799 = r11587797 * r11587798;
        double r11587800 = r11587796 + r11587799;
        double r11587801 = -0.666667;
        double r11587802 = r11587798 * r11587794;
        double r11587803 = r11587801 * r11587802;
        double r11587804 = r11587800 + r11587803;
        double r11587805 = 0.041667;
        double r11587806 = r11587802 * r11587794;
        double r11587807 = r11587805 * r11587806;
        double r11587808 = r11587804 + r11587807;
        return r11587808;
}


double f_of(float x) {
        float r11587809 = x;
        float r11587810 = 3;
        float r11587811 = pow(r11587809, r11587810);
        float r11587812 = 0.041667;
        float r11587813 = r11587812 * r11587809;
        float r11587814 = -0.666667;
        float r11587815 = r11587813 + r11587814;
        float r11587816 = r11587811 * r11587815;
        float r11587817 = 3.0;
        float r11587818 = r11587809 * r11587817;
        float r11587819 = r11587818 * r11587809;
        float r11587820 = -4.0;
        float r11587821 = r11587809 * r11587820;
        float r11587822 = 1.0;
        float r11587823 = r11587821 + r11587822;
        float r11587824 = r11587819 + r11587823;
        float r11587825 = r11587816 + r11587824;
        return r11587825;
}

double f_od(double x) {
        double r11587826 = x;
        double r11587827 = 3;
        double r11587828 = pow(r11587826, r11587827);
        double r11587829 = 0.041667;
        double r11587830 = r11587829 * r11587826;
        double r11587831 = -0.666667;
        double r11587832 = r11587830 + r11587831;
        double r11587833 = r11587828 * r11587832;
        double r11587834 = 3.0;
        double r11587835 = r11587826 * r11587834;
        double r11587836 = r11587835 * r11587826;
        double r11587837 = -4.0;
        double r11587838 = r11587826 * r11587837;
        double r11587839 = 1.0;
        double r11587840 = r11587838 + r11587839;
        double r11587841 = r11587836 + r11587840;
        double r11587842 = r11587833 + r11587841;
        return r11587842;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11587843, r11587844, r11587845, r11587846, r11587847, r11587848, r11587849, r11587850, r11587851, r11587852, r11587853, r11587854, r11587855, r11587856, r11587857, r11587858, r11587859;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11587843, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587844, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11587845);
        mpfr_init(r11587846);
        mpfr_init(r11587847);
        mpfr_init_set_str(r11587848, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11587849);
        mpfr_init(r11587850);
        mpfr_init(r11587851);
        mpfr_init_set_str(r11587852, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11587853);
        mpfr_init(r11587854);
        mpfr_init(r11587855);
        mpfr_init_set_str(r11587856, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11587857);
        mpfr_init(r11587858);
        mpfr_init(r11587859);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11587845, x, MPFR_RNDN);
        mpfr_mul(r11587846, r11587844, r11587845, MPFR_RNDN);
        mpfr_add(r11587847, r11587843, r11587846, MPFR_RNDN);
        ;
        mpfr_mul(r11587849, r11587845, r11587845, MPFR_RNDN);
        mpfr_mul(r11587850, r11587848, r11587849, MPFR_RNDN);
        mpfr_add(r11587851, r11587847, r11587850, MPFR_RNDN);
        ;
        mpfr_mul(r11587853, r11587849, r11587845, MPFR_RNDN);
        mpfr_mul(r11587854, r11587852, r11587853, MPFR_RNDN);
        mpfr_add(r11587855, r11587851, r11587854, MPFR_RNDN);
        ;
        mpfr_mul(r11587857, r11587853, r11587845, MPFR_RNDN);
        mpfr_mul(r11587858, r11587856, r11587857, MPFR_RNDN);
        mpfr_add(r11587859, r11587855, r11587858, MPFR_RNDN);
        return mpfr_get_d(r11587859, MPFR_RNDN);
}

static mpfr_t r11587860, r11587861, r11587862, r11587863, r11587864, r11587865, r11587866, r11587867, r11587868, r11587869, r11587870, r11587871, r11587872, r11587873, r11587874, r11587875, r11587876;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11587860);
        mpfr_init_set_str(r11587861, "3", 10, MPFR_RNDN);
        mpfr_init(r11587862);
        mpfr_init_set_str(r11587863, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11587864);
        mpfr_init_set_str(r11587865, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11587866);
        mpfr_init(r11587867);
        mpfr_init_set_str(r11587868, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11587869);
        mpfr_init(r11587870);
        mpfr_init_set_str(r11587871, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11587872);
        mpfr_init_set_str(r11587873, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587874);
        mpfr_init(r11587875);
        mpfr_init(r11587876);
}

double f_fm(double x) {
        mpfr_set_d(r11587860, x, MPFR_RNDN);
        ;
        mpfr_pow(r11587862, r11587860, r11587861, MPFR_RNDN);
        ;
        mpfr_mul(r11587864, r11587863, r11587860, MPFR_RNDN);
        ;
        mpfr_add(r11587866, r11587864, r11587865, MPFR_RNDN);
        mpfr_mul(r11587867, r11587862, r11587866, MPFR_RNDN);
        ;
        mpfr_mul(r11587869, r11587860, r11587868, MPFR_RNDN);
        mpfr_mul(r11587870, r11587869, r11587860, MPFR_RNDN);
        ;
        mpfr_mul(r11587872, r11587860, r11587871, MPFR_RNDN);
        ;
        mpfr_add(r11587874, r11587872, r11587873, MPFR_RNDN);
        mpfr_add(r11587875, r11587870, r11587874, MPFR_RNDN);
        mpfr_add(r11587876, r11587867, r11587875, MPFR_RNDN);
        return mpfr_get_d(r11587876, MPFR_RNDN);
}

static mpfr_t r11587877, r11587878, r11587879, r11587880, r11587881, r11587882, r11587883, r11587884, r11587885, r11587886, r11587887, r11587888, r11587889, r11587890, r11587891, r11587892, r11587893;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11587877);
        mpfr_init_set_str(r11587878, "3", 10, MPFR_RNDN);
        mpfr_init(r11587879);
        mpfr_init_set_str(r11587880, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11587881);
        mpfr_init_set_str(r11587882, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11587883);
        mpfr_init(r11587884);
        mpfr_init_set_str(r11587885, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11587886);
        mpfr_init(r11587887);
        mpfr_init_set_str(r11587888, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11587889);
        mpfr_init_set_str(r11587890, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587891);
        mpfr_init(r11587892);
        mpfr_init(r11587893);
}

double f_dm(double x) {
        mpfr_set_d(r11587877, x, MPFR_RNDN);
        ;
        mpfr_pow(r11587879, r11587877, r11587878, MPFR_RNDN);
        ;
        mpfr_mul(r11587881, r11587880, r11587877, MPFR_RNDN);
        ;
        mpfr_add(r11587883, r11587881, r11587882, MPFR_RNDN);
        mpfr_mul(r11587884, r11587879, r11587883, MPFR_RNDN);
        ;
        mpfr_mul(r11587886, r11587877, r11587885, MPFR_RNDN);
        mpfr_mul(r11587887, r11587886, r11587877, MPFR_RNDN);
        ;
        mpfr_mul(r11587889, r11587877, r11587888, MPFR_RNDN);
        ;
        mpfr_add(r11587891, r11587889, r11587890, MPFR_RNDN);
        mpfr_add(r11587892, r11587887, r11587891, MPFR_RNDN);
        mpfr_add(r11587893, r11587884, r11587892, MPFR_RNDN);
        return mpfr_get_d(r11587893, MPFR_RNDN);
}

