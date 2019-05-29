#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6512854 = 1.0;
        float r6512855 = -7.0;
        float r6512856 = x;
        float r6512857 = r6512855 * r6512856;
        float r6512858 = r6512854 + r6512857;
        float r6512859 = 10.5;
        float r6512860 = r6512856 * r6512856;
        float r6512861 = r6512859 * r6512860;
        float r6512862 = r6512858 + r6512861;
        float r6512863 = -5.833333;
        float r6512864 = r6512860 * r6512856;
        float r6512865 = r6512863 * r6512864;
        float r6512866 = r6512862 + r6512865;
        float r6512867 = 1.458333;
        float r6512868 = r6512864 * r6512856;
        float r6512869 = r6512867 * r6512868;
        float r6512870 = r6512866 + r6512869;
        float r6512871 = -0.175;
        float r6512872 = r6512868 * r6512856;
        float r6512873 = r6512871 * r6512872;
        float r6512874 = r6512870 + r6512873;
        float r6512875 = 0.009722;
        float r6512876 = r6512872 * r6512856;
        float r6512877 = r6512875 * r6512876;
        float r6512878 = r6512874 + r6512877;
        float r6512879 = -0.000198;
        float r6512880 = r6512876 * r6512856;
        float r6512881 = r6512879 * r6512880;
        float r6512882 = r6512878 + r6512881;
        return r6512882;
}

double f_id(double x) {
        double r6512883 = 1.0;
        double r6512884 = -7.0;
        double r6512885 = x;
        double r6512886 = r6512884 * r6512885;
        double r6512887 = r6512883 + r6512886;
        double r6512888 = 10.5;
        double r6512889 = r6512885 * r6512885;
        double r6512890 = r6512888 * r6512889;
        double r6512891 = r6512887 + r6512890;
        double r6512892 = -5.833333;
        double r6512893 = r6512889 * r6512885;
        double r6512894 = r6512892 * r6512893;
        double r6512895 = r6512891 + r6512894;
        double r6512896 = 1.458333;
        double r6512897 = r6512893 * r6512885;
        double r6512898 = r6512896 * r6512897;
        double r6512899 = r6512895 + r6512898;
        double r6512900 = -0.175;
        double r6512901 = r6512897 * r6512885;
        double r6512902 = r6512900 * r6512901;
        double r6512903 = r6512899 + r6512902;
        double r6512904 = 0.009722;
        double r6512905 = r6512901 * r6512885;
        double r6512906 = r6512904 * r6512905;
        double r6512907 = r6512903 + r6512906;
        double r6512908 = -0.000198;
        double r6512909 = r6512905 * r6512885;
        double r6512910 = r6512908 * r6512909;
        double r6512911 = r6512907 + r6512910;
        return r6512911;
}


double f_of(float x) {
        float r6512912 = 1.0;
        float r6512913 = -7.0;
        float r6512914 = x;
        float r6512915 = r6512913 * r6512914;
        float r6512916 = r6512912 + r6512915;
        float r6512917 = 10.5;
        float r6512918 = r6512914 * r6512914;
        float r6512919 = r6512917 * r6512918;
        float r6512920 = r6512916 + r6512919;
        float r6512921 = -5.833333;
        float r6512922 = r6512918 * r6512914;
        float r6512923 = r6512921 * r6512922;
        float r6512924 = r6512920 + r6512923;
        float r6512925 = 1.458333;
        float r6512926 = r6512922 * r6512914;
        float r6512927 = r6512925 * r6512926;
        float r6512928 = r6512924 + r6512927;
        float r6512929 = -0.175;
        float r6512930 = r6512926 * r6512914;
        float r6512931 = r6512929 * r6512930;
        float r6512932 = r6512928 + r6512931;
        float r6512933 = 0.009722;
        float r6512934 = r6512930 * r6512914;
        float r6512935 = r6512933 * r6512934;
        float r6512936 = r6512932 + r6512935;
        float r6512937 = -0.000198;
        float r6512938 = r6512934 * r6512914;
        float r6512939 = r6512937 * r6512938;
        float r6512940 = r6512936 + r6512939;
        return r6512940;
}

double f_od(double x) {
        double r6512941 = 1.0;
        double r6512942 = -7.0;
        double r6512943 = x;
        double r6512944 = r6512942 * r6512943;
        double r6512945 = r6512941 + r6512944;
        double r6512946 = 10.5;
        double r6512947 = r6512943 * r6512943;
        double r6512948 = r6512946 * r6512947;
        double r6512949 = r6512945 + r6512948;
        double r6512950 = -5.833333;
        double r6512951 = r6512947 * r6512943;
        double r6512952 = r6512950 * r6512951;
        double r6512953 = r6512949 + r6512952;
        double r6512954 = 1.458333;
        double r6512955 = r6512951 * r6512943;
        double r6512956 = r6512954 * r6512955;
        double r6512957 = r6512953 + r6512956;
        double r6512958 = -0.175;
        double r6512959 = r6512955 * r6512943;
        double r6512960 = r6512958 * r6512959;
        double r6512961 = r6512957 + r6512960;
        double r6512962 = 0.009722;
        double r6512963 = r6512959 * r6512943;
        double r6512964 = r6512962 * r6512963;
        double r6512965 = r6512961 + r6512964;
        double r6512966 = -0.000198;
        double r6512967 = r6512963 * r6512943;
        double r6512968 = r6512966 * r6512967;
        double r6512969 = r6512965 + r6512968;
        return r6512969;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6512970, r6512971, r6512972, r6512973, r6512974, r6512975, r6512976, r6512977, r6512978, r6512979, r6512980, r6512981, r6512982, r6512983, r6512984, r6512985, r6512986, r6512987, r6512988, r6512989, r6512990, r6512991, r6512992, r6512993, r6512994, r6512995, r6512996, r6512997, r6512998;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6512970, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6512971, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r6512972);
        mpfr_init(r6512973);
        mpfr_init(r6512974);
        mpfr_init_set_str(r6512975, "10.5", 10, MPFR_RNDN);
        mpfr_init(r6512976);
        mpfr_init(r6512977);
        mpfr_init(r6512978);
        mpfr_init_set_str(r6512979, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r6512980);
        mpfr_init(r6512981);
        mpfr_init(r6512982);
        mpfr_init_set_str(r6512983, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r6512984);
        mpfr_init(r6512985);
        mpfr_init(r6512986);
        mpfr_init_set_str(r6512987, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r6512988);
        mpfr_init(r6512989);
        mpfr_init(r6512990);
        mpfr_init_set_str(r6512991, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r6512992);
        mpfr_init(r6512993);
        mpfr_init(r6512994);
        mpfr_init_set_str(r6512995, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r6512996);
        mpfr_init(r6512997);
        mpfr_init(r6512998);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6512972, x, MPFR_RNDN);
        mpfr_mul(r6512973, r6512971, r6512972, MPFR_RNDN);
        mpfr_add(r6512974, r6512970, r6512973, MPFR_RNDN);
        ;
        mpfr_mul(r6512976, r6512972, r6512972, MPFR_RNDN);
        mpfr_mul(r6512977, r6512975, r6512976, MPFR_RNDN);
        mpfr_add(r6512978, r6512974, r6512977, MPFR_RNDN);
        ;
        mpfr_mul(r6512980, r6512976, r6512972, MPFR_RNDN);
        mpfr_mul(r6512981, r6512979, r6512980, MPFR_RNDN);
        mpfr_add(r6512982, r6512978, r6512981, MPFR_RNDN);
        ;
        mpfr_mul(r6512984, r6512980, r6512972, MPFR_RNDN);
        mpfr_mul(r6512985, r6512983, r6512984, MPFR_RNDN);
        mpfr_add(r6512986, r6512982, r6512985, MPFR_RNDN);
        ;
        mpfr_mul(r6512988, r6512984, r6512972, MPFR_RNDN);
        mpfr_mul(r6512989, r6512987, r6512988, MPFR_RNDN);
        mpfr_add(r6512990, r6512986, r6512989, MPFR_RNDN);
        ;
        mpfr_mul(r6512992, r6512988, r6512972, MPFR_RNDN);
        mpfr_mul(r6512993, r6512991, r6512992, MPFR_RNDN);
        mpfr_add(r6512994, r6512990, r6512993, MPFR_RNDN);
        ;
        mpfr_mul(r6512996, r6512992, r6512972, MPFR_RNDN);
        mpfr_mul(r6512997, r6512995, r6512996, MPFR_RNDN);
        mpfr_add(r6512998, r6512994, r6512997, MPFR_RNDN);
        return mpfr_get_d(r6512998, MPFR_RNDN);
}

static mpfr_t r6512999, r6513000, r6513001, r6513002, r6513003, r6513004, r6513005, r6513006, r6513007, r6513008, r6513009, r6513010, r6513011, r6513012, r6513013, r6513014, r6513015, r6513016, r6513017, r6513018, r6513019, r6513020, r6513021, r6513022, r6513023, r6513024, r6513025, r6513026, r6513027;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6512999, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513000, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r6513001);
        mpfr_init(r6513002);
        mpfr_init(r6513003);
        mpfr_init_set_str(r6513004, "10.5", 10, MPFR_RNDN);
        mpfr_init(r6513005);
        mpfr_init(r6513006);
        mpfr_init(r6513007);
        mpfr_init_set_str(r6513008, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r6513009);
        mpfr_init(r6513010);
        mpfr_init(r6513011);
        mpfr_init_set_str(r6513012, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r6513013);
        mpfr_init(r6513014);
        mpfr_init(r6513015);
        mpfr_init_set_str(r6513016, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r6513017);
        mpfr_init(r6513018);
        mpfr_init(r6513019);
        mpfr_init_set_str(r6513020, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r6513021);
        mpfr_init(r6513022);
        mpfr_init(r6513023);
        mpfr_init_set_str(r6513024, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r6513025);
        mpfr_init(r6513026);
        mpfr_init(r6513027);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6513001, x, MPFR_RNDN);
        mpfr_mul(r6513002, r6513000, r6513001, MPFR_RNDN);
        mpfr_add(r6513003, r6512999, r6513002, MPFR_RNDN);
        ;
        mpfr_mul(r6513005, r6513001, r6513001, MPFR_RNDN);
        mpfr_mul(r6513006, r6513004, r6513005, MPFR_RNDN);
        mpfr_add(r6513007, r6513003, r6513006, MPFR_RNDN);
        ;
        mpfr_mul(r6513009, r6513005, r6513001, MPFR_RNDN);
        mpfr_mul(r6513010, r6513008, r6513009, MPFR_RNDN);
        mpfr_add(r6513011, r6513007, r6513010, MPFR_RNDN);
        ;
        mpfr_mul(r6513013, r6513009, r6513001, MPFR_RNDN);
        mpfr_mul(r6513014, r6513012, r6513013, MPFR_RNDN);
        mpfr_add(r6513015, r6513011, r6513014, MPFR_RNDN);
        ;
        mpfr_mul(r6513017, r6513013, r6513001, MPFR_RNDN);
        mpfr_mul(r6513018, r6513016, r6513017, MPFR_RNDN);
        mpfr_add(r6513019, r6513015, r6513018, MPFR_RNDN);
        ;
        mpfr_mul(r6513021, r6513017, r6513001, MPFR_RNDN);
        mpfr_mul(r6513022, r6513020, r6513021, MPFR_RNDN);
        mpfr_add(r6513023, r6513019, r6513022, MPFR_RNDN);
        ;
        mpfr_mul(r6513025, r6513021, r6513001, MPFR_RNDN);
        mpfr_mul(r6513026, r6513024, r6513025, MPFR_RNDN);
        mpfr_add(r6513027, r6513023, r6513026, MPFR_RNDN);
        return mpfr_get_d(r6513027, MPFR_RNDN);
}

static mpfr_t r6513028, r6513029, r6513030, r6513031, r6513032, r6513033, r6513034, r6513035, r6513036, r6513037, r6513038, r6513039, r6513040, r6513041, r6513042, r6513043, r6513044, r6513045, r6513046, r6513047, r6513048, r6513049, r6513050, r6513051, r6513052, r6513053, r6513054, r6513055, r6513056;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513028, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513029, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r6513030);
        mpfr_init(r6513031);
        mpfr_init(r6513032);
        mpfr_init_set_str(r6513033, "10.5", 10, MPFR_RNDN);
        mpfr_init(r6513034);
        mpfr_init(r6513035);
        mpfr_init(r6513036);
        mpfr_init_set_str(r6513037, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r6513038);
        mpfr_init(r6513039);
        mpfr_init(r6513040);
        mpfr_init_set_str(r6513041, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r6513042);
        mpfr_init(r6513043);
        mpfr_init(r6513044);
        mpfr_init_set_str(r6513045, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r6513046);
        mpfr_init(r6513047);
        mpfr_init(r6513048);
        mpfr_init_set_str(r6513049, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r6513050);
        mpfr_init(r6513051);
        mpfr_init(r6513052);
        mpfr_init_set_str(r6513053, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r6513054);
        mpfr_init(r6513055);
        mpfr_init(r6513056);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6513030, x, MPFR_RNDN);
        mpfr_mul(r6513031, r6513029, r6513030, MPFR_RNDN);
        mpfr_add(r6513032, r6513028, r6513031, MPFR_RNDN);
        ;
        mpfr_mul(r6513034, r6513030, r6513030, MPFR_RNDN);
        mpfr_mul(r6513035, r6513033, r6513034, MPFR_RNDN);
        mpfr_add(r6513036, r6513032, r6513035, MPFR_RNDN);
        ;
        mpfr_mul(r6513038, r6513034, r6513030, MPFR_RNDN);
        mpfr_mul(r6513039, r6513037, r6513038, MPFR_RNDN);
        mpfr_add(r6513040, r6513036, r6513039, MPFR_RNDN);
        ;
        mpfr_mul(r6513042, r6513038, r6513030, MPFR_RNDN);
        mpfr_mul(r6513043, r6513041, r6513042, MPFR_RNDN);
        mpfr_add(r6513044, r6513040, r6513043, MPFR_RNDN);
        ;
        mpfr_mul(r6513046, r6513042, r6513030, MPFR_RNDN);
        mpfr_mul(r6513047, r6513045, r6513046, MPFR_RNDN);
        mpfr_add(r6513048, r6513044, r6513047, MPFR_RNDN);
        ;
        mpfr_mul(r6513050, r6513046, r6513030, MPFR_RNDN);
        mpfr_mul(r6513051, r6513049, r6513050, MPFR_RNDN);
        mpfr_add(r6513052, r6513048, r6513051, MPFR_RNDN);
        ;
        mpfr_mul(r6513054, r6513050, r6513030, MPFR_RNDN);
        mpfr_mul(r6513055, r6513053, r6513054, MPFR_RNDN);
        mpfr_add(r6513056, r6513052, r6513055, MPFR_RNDN);
        return mpfr_get_d(r6513056, MPFR_RNDN);
}

