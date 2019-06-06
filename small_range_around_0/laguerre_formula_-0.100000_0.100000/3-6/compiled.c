#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r4677738 = 1.0;
        float r4677739 = -6.0;
        float r4677740 = x;
        float r4677741 = r4677739 * r4677740;
        float r4677742 = r4677738 + r4677741;
        float r4677743 = 7.5;
        float r4677744 = r4677740 * r4677740;
        float r4677745 = r4677743 * r4677744;
        float r4677746 = r4677742 + r4677745;
        float r4677747 = -3.333333;
        float r4677748 = r4677744 * r4677740;
        float r4677749 = r4677747 * r4677748;
        float r4677750 = r4677746 + r4677749;
        float r4677751 = 0.625;
        float r4677752 = r4677748 * r4677740;
        float r4677753 = r4677751 * r4677752;
        float r4677754 = r4677750 + r4677753;
        float r4677755 = -0.05;
        float r4677756 = r4677752 * r4677740;
        float r4677757 = r4677755 * r4677756;
        float r4677758 = r4677754 + r4677757;
        float r4677759 = 0.001389;
        float r4677760 = r4677756 * r4677740;
        float r4677761 = r4677759 * r4677760;
        float r4677762 = r4677758 + r4677761;
        return r4677762;
}

double f_id(double x) {
        double r4677763 = 1.0;
        double r4677764 = -6.0;
        double r4677765 = x;
        double r4677766 = r4677764 * r4677765;
        double r4677767 = r4677763 + r4677766;
        double r4677768 = 7.5;
        double r4677769 = r4677765 * r4677765;
        double r4677770 = r4677768 * r4677769;
        double r4677771 = r4677767 + r4677770;
        double r4677772 = -3.333333;
        double r4677773 = r4677769 * r4677765;
        double r4677774 = r4677772 * r4677773;
        double r4677775 = r4677771 + r4677774;
        double r4677776 = 0.625;
        double r4677777 = r4677773 * r4677765;
        double r4677778 = r4677776 * r4677777;
        double r4677779 = r4677775 + r4677778;
        double r4677780 = -0.05;
        double r4677781 = r4677777 * r4677765;
        double r4677782 = r4677780 * r4677781;
        double r4677783 = r4677779 + r4677782;
        double r4677784 = 0.001389;
        double r4677785 = r4677781 * r4677765;
        double r4677786 = r4677784 * r4677785;
        double r4677787 = r4677783 + r4677786;
        return r4677787;
}


double f_of(float x) {
        float r4677788 = 1.0;
        float r4677789 = -6.0;
        float r4677790 = x;
        float r4677791 = r4677789 * r4677790;
        float r4677792 = r4677788 + r4677791;
        float r4677793 = 7.5;
        float r4677794 = r4677790 * r4677790;
        float r4677795 = r4677793 * r4677794;
        float r4677796 = r4677792 + r4677795;
        float r4677797 = -3.333333;
        float r4677798 = r4677794 * r4677790;
        float r4677799 = r4677797 * r4677798;
        float r4677800 = r4677796 + r4677799;
        float r4677801 = 0.625;
        float r4677802 = r4677798 * r4677790;
        float r4677803 = r4677801 * r4677802;
        float r4677804 = r4677800 + r4677803;
        float r4677805 = -0.05;
        float r4677806 = r4677802 * r4677790;
        float r4677807 = r4677805 * r4677806;
        float r4677808 = r4677804 + r4677807;
        float r4677809 = 0.001389;
        float r4677810 = r4677806 * r4677790;
        float r4677811 = r4677809 * r4677810;
        float r4677812 = r4677808 + r4677811;
        return r4677812;
}

double f_od(double x) {
        double r4677813 = 1.0;
        double r4677814 = -6.0;
        double r4677815 = x;
        double r4677816 = r4677814 * r4677815;
        double r4677817 = r4677813 + r4677816;
        double r4677818 = 7.5;
        double r4677819 = r4677815 * r4677815;
        double r4677820 = r4677818 * r4677819;
        double r4677821 = r4677817 + r4677820;
        double r4677822 = -3.333333;
        double r4677823 = r4677819 * r4677815;
        double r4677824 = r4677822 * r4677823;
        double r4677825 = r4677821 + r4677824;
        double r4677826 = 0.625;
        double r4677827 = r4677823 * r4677815;
        double r4677828 = r4677826 * r4677827;
        double r4677829 = r4677825 + r4677828;
        double r4677830 = -0.05;
        double r4677831 = r4677827 * r4677815;
        double r4677832 = r4677830 * r4677831;
        double r4677833 = r4677829 + r4677832;
        double r4677834 = 0.001389;
        double r4677835 = r4677831 * r4677815;
        double r4677836 = r4677834 * r4677835;
        double r4677837 = r4677833 + r4677836;
        return r4677837;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4677838, r4677839, r4677840, r4677841, r4677842, r4677843, r4677844, r4677845, r4677846, r4677847, r4677848, r4677849, r4677850, r4677851, r4677852, r4677853, r4677854, r4677855, r4677856, r4677857, r4677858, r4677859, r4677860, r4677861, r4677862;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677838, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677839, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r4677840);
        mpfr_init(r4677841);
        mpfr_init(r4677842);
        mpfr_init_set_str(r4677843, "7.5", 10, MPFR_RNDN);
        mpfr_init(r4677844);
        mpfr_init(r4677845);
        mpfr_init(r4677846);
        mpfr_init_set_str(r4677847, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r4677848);
        mpfr_init(r4677849);
        mpfr_init(r4677850);
        mpfr_init_set_str(r4677851, "0.625", 10, MPFR_RNDN);
        mpfr_init(r4677852);
        mpfr_init(r4677853);
        mpfr_init(r4677854);
        mpfr_init_set_str(r4677855, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r4677856);
        mpfr_init(r4677857);
        mpfr_init(r4677858);
        mpfr_init_set_str(r4677859, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r4677860);
        mpfr_init(r4677861);
        mpfr_init(r4677862);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4677840, x, MPFR_RNDN);
        mpfr_mul(r4677841, r4677839, r4677840, MPFR_RNDN);
        mpfr_add(r4677842, r4677838, r4677841, MPFR_RNDN);
        ;
        mpfr_mul(r4677844, r4677840, r4677840, MPFR_RNDN);
        mpfr_mul(r4677845, r4677843, r4677844, MPFR_RNDN);
        mpfr_add(r4677846, r4677842, r4677845, MPFR_RNDN);
        ;
        mpfr_mul(r4677848, r4677844, r4677840, MPFR_RNDN);
        mpfr_mul(r4677849, r4677847, r4677848, MPFR_RNDN);
        mpfr_add(r4677850, r4677846, r4677849, MPFR_RNDN);
        ;
        mpfr_mul(r4677852, r4677848, r4677840, MPFR_RNDN);
        mpfr_mul(r4677853, r4677851, r4677852, MPFR_RNDN);
        mpfr_add(r4677854, r4677850, r4677853, MPFR_RNDN);
        ;
        mpfr_mul(r4677856, r4677852, r4677840, MPFR_RNDN);
        mpfr_mul(r4677857, r4677855, r4677856, MPFR_RNDN);
        mpfr_add(r4677858, r4677854, r4677857, MPFR_RNDN);
        ;
        mpfr_mul(r4677860, r4677856, r4677840, MPFR_RNDN);
        mpfr_mul(r4677861, r4677859, r4677860, MPFR_RNDN);
        mpfr_add(r4677862, r4677858, r4677861, MPFR_RNDN);
        return mpfr_get_d(r4677862, MPFR_RNDN);
}

static mpfr_t r4677863, r4677864, r4677865, r4677866, r4677867, r4677868, r4677869, r4677870, r4677871, r4677872, r4677873, r4677874, r4677875, r4677876, r4677877, r4677878, r4677879, r4677880, r4677881, r4677882, r4677883, r4677884, r4677885, r4677886, r4677887;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677863, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677864, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r4677865);
        mpfr_init(r4677866);
        mpfr_init(r4677867);
        mpfr_init_set_str(r4677868, "7.5", 10, MPFR_RNDN);
        mpfr_init(r4677869);
        mpfr_init(r4677870);
        mpfr_init(r4677871);
        mpfr_init_set_str(r4677872, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r4677873);
        mpfr_init(r4677874);
        mpfr_init(r4677875);
        mpfr_init_set_str(r4677876, "0.625", 10, MPFR_RNDN);
        mpfr_init(r4677877);
        mpfr_init(r4677878);
        mpfr_init(r4677879);
        mpfr_init_set_str(r4677880, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r4677881);
        mpfr_init(r4677882);
        mpfr_init(r4677883);
        mpfr_init_set_str(r4677884, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r4677885);
        mpfr_init(r4677886);
        mpfr_init(r4677887);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4677865, x, MPFR_RNDN);
        mpfr_mul(r4677866, r4677864, r4677865, MPFR_RNDN);
        mpfr_add(r4677867, r4677863, r4677866, MPFR_RNDN);
        ;
        mpfr_mul(r4677869, r4677865, r4677865, MPFR_RNDN);
        mpfr_mul(r4677870, r4677868, r4677869, MPFR_RNDN);
        mpfr_add(r4677871, r4677867, r4677870, MPFR_RNDN);
        ;
        mpfr_mul(r4677873, r4677869, r4677865, MPFR_RNDN);
        mpfr_mul(r4677874, r4677872, r4677873, MPFR_RNDN);
        mpfr_add(r4677875, r4677871, r4677874, MPFR_RNDN);
        ;
        mpfr_mul(r4677877, r4677873, r4677865, MPFR_RNDN);
        mpfr_mul(r4677878, r4677876, r4677877, MPFR_RNDN);
        mpfr_add(r4677879, r4677875, r4677878, MPFR_RNDN);
        ;
        mpfr_mul(r4677881, r4677877, r4677865, MPFR_RNDN);
        mpfr_mul(r4677882, r4677880, r4677881, MPFR_RNDN);
        mpfr_add(r4677883, r4677879, r4677882, MPFR_RNDN);
        ;
        mpfr_mul(r4677885, r4677881, r4677865, MPFR_RNDN);
        mpfr_mul(r4677886, r4677884, r4677885, MPFR_RNDN);
        mpfr_add(r4677887, r4677883, r4677886, MPFR_RNDN);
        return mpfr_get_d(r4677887, MPFR_RNDN);
}

static mpfr_t r4677888, r4677889, r4677890, r4677891, r4677892, r4677893, r4677894, r4677895, r4677896, r4677897, r4677898, r4677899, r4677900, r4677901, r4677902, r4677903, r4677904, r4677905, r4677906, r4677907, r4677908, r4677909, r4677910, r4677911, r4677912;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677888, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677889, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r4677890);
        mpfr_init(r4677891);
        mpfr_init(r4677892);
        mpfr_init_set_str(r4677893, "7.5", 10, MPFR_RNDN);
        mpfr_init(r4677894);
        mpfr_init(r4677895);
        mpfr_init(r4677896);
        mpfr_init_set_str(r4677897, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r4677898);
        mpfr_init(r4677899);
        mpfr_init(r4677900);
        mpfr_init_set_str(r4677901, "0.625", 10, MPFR_RNDN);
        mpfr_init(r4677902);
        mpfr_init(r4677903);
        mpfr_init(r4677904);
        mpfr_init_set_str(r4677905, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r4677906);
        mpfr_init(r4677907);
        mpfr_init(r4677908);
        mpfr_init_set_str(r4677909, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r4677910);
        mpfr_init(r4677911);
        mpfr_init(r4677912);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4677890, x, MPFR_RNDN);
        mpfr_mul(r4677891, r4677889, r4677890, MPFR_RNDN);
        mpfr_add(r4677892, r4677888, r4677891, MPFR_RNDN);
        ;
        mpfr_mul(r4677894, r4677890, r4677890, MPFR_RNDN);
        mpfr_mul(r4677895, r4677893, r4677894, MPFR_RNDN);
        mpfr_add(r4677896, r4677892, r4677895, MPFR_RNDN);
        ;
        mpfr_mul(r4677898, r4677894, r4677890, MPFR_RNDN);
        mpfr_mul(r4677899, r4677897, r4677898, MPFR_RNDN);
        mpfr_add(r4677900, r4677896, r4677899, MPFR_RNDN);
        ;
        mpfr_mul(r4677902, r4677898, r4677890, MPFR_RNDN);
        mpfr_mul(r4677903, r4677901, r4677902, MPFR_RNDN);
        mpfr_add(r4677904, r4677900, r4677903, MPFR_RNDN);
        ;
        mpfr_mul(r4677906, r4677902, r4677890, MPFR_RNDN);
        mpfr_mul(r4677907, r4677905, r4677906, MPFR_RNDN);
        mpfr_add(r4677908, r4677904, r4677907, MPFR_RNDN);
        ;
        mpfr_mul(r4677910, r4677906, r4677890, MPFR_RNDN);
        mpfr_mul(r4677911, r4677909, r4677910, MPFR_RNDN);
        mpfr_add(r4677912, r4677908, r4677911, MPFR_RNDN);
        return mpfr_get_d(r4677912, MPFR_RNDN);
}

