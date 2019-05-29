#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r11586748 = 1.0;
        float r11586749 = -9.0;
        float r11586750 = x;
        float r11586751 = r11586749 * r11586750;
        float r11586752 = r11586748 + r11586751;
        float r11586753 = 18.0;
        float r11586754 = r11586750 * r11586750;
        float r11586755 = r11586753 * r11586754;
        float r11586756 = r11586752 + r11586755;
        float r11586757 = -14.0;
        float r11586758 = r11586754 * r11586750;
        float r11586759 = r11586757 * r11586758;
        float r11586760 = r11586756 + r11586759;
        float r11586761 = 5.25;
        float r11586762 = r11586758 * r11586750;
        float r11586763 = r11586761 * r11586762;
        float r11586764 = r11586760 + r11586763;
        float r11586765 = -1.05;
        float r11586766 = r11586762 * r11586750;
        float r11586767 = r11586765 * r11586766;
        float r11586768 = r11586764 + r11586767;
        float r11586769 = 0.116667;
        float r11586770 = r11586766 * r11586750;
        float r11586771 = r11586769 * r11586770;
        float r11586772 = r11586768 + r11586771;
        float r11586773 = -0.007143;
        float r11586774 = r11586770 * r11586750;
        float r11586775 = r11586773 * r11586774;
        float r11586776 = r11586772 + r11586775;
        float r11586777 = 0.000223;
        float r11586778 = r11586774 * r11586750;
        float r11586779 = r11586777 * r11586778;
        float r11586780 = r11586776 + r11586779;
        float r11586781 = -3e-06;
        float r11586782 = r11586778 * r11586750;
        float r11586783 = r11586781 * r11586782;
        float r11586784 = r11586780 + r11586783;
        return r11586784;
}

double f_id(double x) {
        double r11586785 = 1.0;
        double r11586786 = -9.0;
        double r11586787 = x;
        double r11586788 = r11586786 * r11586787;
        double r11586789 = r11586785 + r11586788;
        double r11586790 = 18.0;
        double r11586791 = r11586787 * r11586787;
        double r11586792 = r11586790 * r11586791;
        double r11586793 = r11586789 + r11586792;
        double r11586794 = -14.0;
        double r11586795 = r11586791 * r11586787;
        double r11586796 = r11586794 * r11586795;
        double r11586797 = r11586793 + r11586796;
        double r11586798 = 5.25;
        double r11586799 = r11586795 * r11586787;
        double r11586800 = r11586798 * r11586799;
        double r11586801 = r11586797 + r11586800;
        double r11586802 = -1.05;
        double r11586803 = r11586799 * r11586787;
        double r11586804 = r11586802 * r11586803;
        double r11586805 = r11586801 + r11586804;
        double r11586806 = 0.116667;
        double r11586807 = r11586803 * r11586787;
        double r11586808 = r11586806 * r11586807;
        double r11586809 = r11586805 + r11586808;
        double r11586810 = -0.007143;
        double r11586811 = r11586807 * r11586787;
        double r11586812 = r11586810 * r11586811;
        double r11586813 = r11586809 + r11586812;
        double r11586814 = 0.000223;
        double r11586815 = r11586811 * r11586787;
        double r11586816 = r11586814 * r11586815;
        double r11586817 = r11586813 + r11586816;
        double r11586818 = -3e-06;
        double r11586819 = r11586815 * r11586787;
        double r11586820 = r11586818 * r11586819;
        double r11586821 = r11586817 + r11586820;
        return r11586821;
}


double f_of(float x) {
        float r11586822 = x;
        float r11586823 = r11586822 * r11586822;
        float r11586824 = 18.0;
        float r11586825 = 14.0;
        float r11586826 = r11586825 * r11586822;
        float r11586827 = r11586824 - r11586826;
        float r11586828 = r11586823 * r11586827;
        float r11586829 = -9.0;
        float r11586830 = r11586829 * r11586822;
        float r11586831 = r11586828 + r11586830;
        float r11586832 = 1.0;
        float r11586833 = 3;
        float r11586834 = 1;
        float r11586835 = r11586833 + r11586834;
        float r11586836 = pow(r11586823, r11586835);
        float r11586837 = -3e-06;
        float r11586838 = r11586822 * r11586837;
        float r11586839 = 0.000223;
        float r11586840 = r11586838 + r11586839;
        float r11586841 = r11586836 * r11586840;
        float r11586842 = r11586832 + r11586841;
        float r11586843 = r11586831 + r11586842;
        float r11586844 = r11586823 * r11586823;
        float r11586845 = 0.116667;
        float r11586846 = r11586822 * r11586845;
        float r11586847 = r11586846 * r11586822;
        float r11586848 = 5.25;
        float r11586849 = -1.05;
        float r11586850 = r11586822 * r11586849;
        float r11586851 = r11586848 + r11586850;
        float r11586852 = r11586847 + r11586851;
        float r11586853 = -0.007143;
        float r11586854 = r11586853 * r11586822;
        float r11586855 = r11586823 * r11586854;
        float r11586856 = r11586852 + r11586855;
        float r11586857 = r11586844 * r11586856;
        float r11586858 = r11586843 + r11586857;
        return r11586858;
}

double f_od(double x) {
        double r11586859 = x;
        double r11586860 = r11586859 * r11586859;
        double r11586861 = 18.0;
        double r11586862 = 14.0;
        double r11586863 = r11586862 * r11586859;
        double r11586864 = r11586861 - r11586863;
        double r11586865 = r11586860 * r11586864;
        double r11586866 = -9.0;
        double r11586867 = r11586866 * r11586859;
        double r11586868 = r11586865 + r11586867;
        double r11586869 = 1.0;
        double r11586870 = 3;
        double r11586871 = 1;
        double r11586872 = r11586870 + r11586871;
        double r11586873 = pow(r11586860, r11586872);
        double r11586874 = -3e-06;
        double r11586875 = r11586859 * r11586874;
        double r11586876 = 0.000223;
        double r11586877 = r11586875 + r11586876;
        double r11586878 = r11586873 * r11586877;
        double r11586879 = r11586869 + r11586878;
        double r11586880 = r11586868 + r11586879;
        double r11586881 = r11586860 * r11586860;
        double r11586882 = 0.116667;
        double r11586883 = r11586859 * r11586882;
        double r11586884 = r11586883 * r11586859;
        double r11586885 = 5.25;
        double r11586886 = -1.05;
        double r11586887 = r11586859 * r11586886;
        double r11586888 = r11586885 + r11586887;
        double r11586889 = r11586884 + r11586888;
        double r11586890 = -0.007143;
        double r11586891 = r11586890 * r11586859;
        double r11586892 = r11586860 * r11586891;
        double r11586893 = r11586889 + r11586892;
        double r11586894 = r11586881 * r11586893;
        double r11586895 = r11586880 + r11586894;
        return r11586895;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11586896, r11586897, r11586898, r11586899, r11586900, r11586901, r11586902, r11586903, r11586904, r11586905, r11586906, r11586907, r11586908, r11586909, r11586910, r11586911, r11586912, r11586913, r11586914, r11586915, r11586916, r11586917, r11586918, r11586919, r11586920, r11586921, r11586922, r11586923, r11586924, r11586925, r11586926, r11586927, r11586928, r11586929, r11586930, r11586931, r11586932;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11586896, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586897, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11586898);
        mpfr_init(r11586899);
        mpfr_init(r11586900);
        mpfr_init_set_str(r11586901, "18.0", 10, MPFR_RNDN);
        mpfr_init(r11586902);
        mpfr_init(r11586903);
        mpfr_init(r11586904);
        mpfr_init_set_str(r11586905, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11586906);
        mpfr_init(r11586907);
        mpfr_init(r11586908);
        mpfr_init_set_str(r11586909, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11586910);
        mpfr_init(r11586911);
        mpfr_init(r11586912);
        mpfr_init_set_str(r11586913, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11586914);
        mpfr_init(r11586915);
        mpfr_init(r11586916);
        mpfr_init_set_str(r11586917, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11586918);
        mpfr_init(r11586919);
        mpfr_init(r11586920);
        mpfr_init_set_str(r11586921, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11586922);
        mpfr_init(r11586923);
        mpfr_init(r11586924);
        mpfr_init_set_str(r11586925, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11586926);
        mpfr_init(r11586927);
        mpfr_init(r11586928);
        mpfr_init_set_str(r11586929, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11586930);
        mpfr_init(r11586931);
        mpfr_init(r11586932);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11586898, x, MPFR_RNDN);
        mpfr_mul(r11586899, r11586897, r11586898, MPFR_RNDN);
        mpfr_add(r11586900, r11586896, r11586899, MPFR_RNDN);
        ;
        mpfr_mul(r11586902, r11586898, r11586898, MPFR_RNDN);
        mpfr_mul(r11586903, r11586901, r11586902, MPFR_RNDN);
        mpfr_add(r11586904, r11586900, r11586903, MPFR_RNDN);
        ;
        mpfr_mul(r11586906, r11586902, r11586898, MPFR_RNDN);
        mpfr_mul(r11586907, r11586905, r11586906, MPFR_RNDN);
        mpfr_add(r11586908, r11586904, r11586907, MPFR_RNDN);
        ;
        mpfr_mul(r11586910, r11586906, r11586898, MPFR_RNDN);
        mpfr_mul(r11586911, r11586909, r11586910, MPFR_RNDN);
        mpfr_add(r11586912, r11586908, r11586911, MPFR_RNDN);
        ;
        mpfr_mul(r11586914, r11586910, r11586898, MPFR_RNDN);
        mpfr_mul(r11586915, r11586913, r11586914, MPFR_RNDN);
        mpfr_add(r11586916, r11586912, r11586915, MPFR_RNDN);
        ;
        mpfr_mul(r11586918, r11586914, r11586898, MPFR_RNDN);
        mpfr_mul(r11586919, r11586917, r11586918, MPFR_RNDN);
        mpfr_add(r11586920, r11586916, r11586919, MPFR_RNDN);
        ;
        mpfr_mul(r11586922, r11586918, r11586898, MPFR_RNDN);
        mpfr_mul(r11586923, r11586921, r11586922, MPFR_RNDN);
        mpfr_add(r11586924, r11586920, r11586923, MPFR_RNDN);
        ;
        mpfr_mul(r11586926, r11586922, r11586898, MPFR_RNDN);
        mpfr_mul(r11586927, r11586925, r11586926, MPFR_RNDN);
        mpfr_add(r11586928, r11586924, r11586927, MPFR_RNDN);
        ;
        mpfr_mul(r11586930, r11586926, r11586898, MPFR_RNDN);
        mpfr_mul(r11586931, r11586929, r11586930, MPFR_RNDN);
        mpfr_add(r11586932, r11586928, r11586931, MPFR_RNDN);
        return mpfr_get_d(r11586932, MPFR_RNDN);
}

static mpfr_t r11586933, r11586934, r11586935, r11586936, r11586937, r11586938, r11586939, r11586940, r11586941, r11586942, r11586943, r11586944, r11586945, r11586946, r11586947, r11586948, r11586949, r11586950, r11586951, r11586952, r11586953, r11586954, r11586955, r11586956, r11586957, r11586958, r11586959, r11586960, r11586961, r11586962, r11586963, r11586964, r11586965, r11586966, r11586967, r11586968, r11586969;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11586933);
        mpfr_init(r11586934);
        mpfr_init_set_str(r11586935, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586936, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11586937);
        mpfr_init(r11586938);
        mpfr_init(r11586939);
        mpfr_init_set_str(r11586940, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11586941);
        mpfr_init(r11586942);
        mpfr_init_set_str(r11586943, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586944, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586945, "1", 10, MPFR_RNDN);
        mpfr_init(r11586946);
        mpfr_init(r11586947);
        mpfr_init_set_str(r11586948, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11586949);
        mpfr_init_set_str(r11586950, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11586951);
        mpfr_init(r11586952);
        mpfr_init(r11586953);
        mpfr_init(r11586954);
        mpfr_init(r11586955);
        mpfr_init_set_str(r11586956, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11586957);
        mpfr_init(r11586958);
        mpfr_init_set_str(r11586959, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586960, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11586961);
        mpfr_init(r11586962);
        mpfr_init(r11586963);
        mpfr_init_set_str(r11586964, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11586965);
        mpfr_init(r11586966);
        mpfr_init(r11586967);
        mpfr_init(r11586968);
        mpfr_init(r11586969);
}

double f_fm(double x) {
        mpfr_set_d(r11586933, x, MPFR_RNDN);
        mpfr_mul(r11586934, r11586933, r11586933, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11586937, r11586936, r11586933, MPFR_RNDN);
        mpfr_sub(r11586938, r11586935, r11586937, MPFR_RNDN);
        mpfr_mul(r11586939, r11586934, r11586938, MPFR_RNDN);
        ;
        mpfr_mul(r11586941, r11586940, r11586933, MPFR_RNDN);
        mpfr_add(r11586942, r11586939, r11586941, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r11586946, r11586944, r11586945, MPFR_RNDN);
        mpfr_pow(r11586947, r11586934, r11586946, MPFR_RNDN);
        ;
        mpfr_mul(r11586949, r11586933, r11586948, MPFR_RNDN);
        ;
        mpfr_add(r11586951, r11586949, r11586950, MPFR_RNDN);
        mpfr_mul(r11586952, r11586947, r11586951, MPFR_RNDN);
        mpfr_add(r11586953, r11586943, r11586952, MPFR_RNDN);
        mpfr_add(r11586954, r11586942, r11586953, MPFR_RNDN);
        mpfr_mul(r11586955, r11586934, r11586934, MPFR_RNDN);
        ;
        mpfr_mul(r11586957, r11586933, r11586956, MPFR_RNDN);
        mpfr_mul(r11586958, r11586957, r11586933, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11586961, r11586933, r11586960, MPFR_RNDN);
        mpfr_add(r11586962, r11586959, r11586961, MPFR_RNDN);
        mpfr_add(r11586963, r11586958, r11586962, MPFR_RNDN);
        ;
        mpfr_mul(r11586965, r11586964, r11586933, MPFR_RNDN);
        mpfr_mul(r11586966, r11586934, r11586965, MPFR_RNDN);
        mpfr_add(r11586967, r11586963, r11586966, MPFR_RNDN);
        mpfr_mul(r11586968, r11586955, r11586967, MPFR_RNDN);
        mpfr_add(r11586969, r11586954, r11586968, MPFR_RNDN);
        return mpfr_get_d(r11586969, MPFR_RNDN);
}

static mpfr_t r11586970, r11586971, r11586972, r11586973, r11586974, r11586975, r11586976, r11586977, r11586978, r11586979, r11586980, r11586981, r11586982, r11586983, r11586984, r11586985, r11586986, r11586987, r11586988, r11586989, r11586990, r11586991, r11586992, r11586993, r11586994, r11586995, r11586996, r11586997, r11586998, r11586999, r11587000, r11587001, r11587002, r11587003, r11587004, r11587005, r11587006;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11586970);
        mpfr_init(r11586971);
        mpfr_init_set_str(r11586972, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586973, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11586974);
        mpfr_init(r11586975);
        mpfr_init(r11586976);
        mpfr_init_set_str(r11586977, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11586978);
        mpfr_init(r11586979);
        mpfr_init_set_str(r11586980, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586981, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586982, "1", 10, MPFR_RNDN);
        mpfr_init(r11586983);
        mpfr_init(r11586984);
        mpfr_init_set_str(r11586985, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11586986);
        mpfr_init_set_str(r11586987, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11586988);
        mpfr_init(r11586989);
        mpfr_init(r11586990);
        mpfr_init(r11586991);
        mpfr_init(r11586992);
        mpfr_init_set_str(r11586993, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11586994);
        mpfr_init(r11586995);
        mpfr_init_set_str(r11586996, "5.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r11586997, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11586998);
        mpfr_init(r11586999);
        mpfr_init(r11587000);
        mpfr_init_set_str(r11587001, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11587002);
        mpfr_init(r11587003);
        mpfr_init(r11587004);
        mpfr_init(r11587005);
        mpfr_init(r11587006);
}

double f_dm(double x) {
        mpfr_set_d(r11586970, x, MPFR_RNDN);
        mpfr_mul(r11586971, r11586970, r11586970, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11586974, r11586973, r11586970, MPFR_RNDN);
        mpfr_sub(r11586975, r11586972, r11586974, MPFR_RNDN);
        mpfr_mul(r11586976, r11586971, r11586975, MPFR_RNDN);
        ;
        mpfr_mul(r11586978, r11586977, r11586970, MPFR_RNDN);
        mpfr_add(r11586979, r11586976, r11586978, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r11586983, r11586981, r11586982, MPFR_RNDN);
        mpfr_pow(r11586984, r11586971, r11586983, MPFR_RNDN);
        ;
        mpfr_mul(r11586986, r11586970, r11586985, MPFR_RNDN);
        ;
        mpfr_add(r11586988, r11586986, r11586987, MPFR_RNDN);
        mpfr_mul(r11586989, r11586984, r11586988, MPFR_RNDN);
        mpfr_add(r11586990, r11586980, r11586989, MPFR_RNDN);
        mpfr_add(r11586991, r11586979, r11586990, MPFR_RNDN);
        mpfr_mul(r11586992, r11586971, r11586971, MPFR_RNDN);
        ;
        mpfr_mul(r11586994, r11586970, r11586993, MPFR_RNDN);
        mpfr_mul(r11586995, r11586994, r11586970, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11586998, r11586970, r11586997, MPFR_RNDN);
        mpfr_add(r11586999, r11586996, r11586998, MPFR_RNDN);
        mpfr_add(r11587000, r11586995, r11586999, MPFR_RNDN);
        ;
        mpfr_mul(r11587002, r11587001, r11586970, MPFR_RNDN);
        mpfr_mul(r11587003, r11586971, r11587002, MPFR_RNDN);
        mpfr_add(r11587004, r11587000, r11587003, MPFR_RNDN);
        mpfr_mul(r11587005, r11586992, r11587004, MPFR_RNDN);
        mpfr_add(r11587006, r11586991, r11587005, MPFR_RNDN);
        return mpfr_get_d(r11587006, MPFR_RNDN);
}

