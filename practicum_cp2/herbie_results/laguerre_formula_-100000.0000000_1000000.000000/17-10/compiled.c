#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10219813 = 1.0;
        float r10219814 = -10.0;
        float r10219815 = x;
        float r10219816 = r10219814 * r10219815;
        float r10219817 = r10219813 + r10219816;
        float r10219818 = 22.5;
        float r10219819 = r10219815 * r10219815;
        float r10219820 = r10219818 * r10219819;
        float r10219821 = r10219817 + r10219820;
        float r10219822 = -20.0;
        float r10219823 = r10219819 * r10219815;
        float r10219824 = r10219822 * r10219823;
        float r10219825 = r10219821 + r10219824;
        float r10219826 = 8.75;
        float r10219827 = r10219823 * r10219815;
        float r10219828 = r10219826 * r10219827;
        float r10219829 = r10219825 + r10219828;
        float r10219830 = -2.1;
        float r10219831 = r10219827 * r10219815;
        float r10219832 = r10219830 * r10219831;
        float r10219833 = r10219829 + r10219832;
        float r10219834 = 0.291667;
        float r10219835 = r10219831 * r10219815;
        float r10219836 = r10219834 * r10219835;
        float r10219837 = r10219833 + r10219836;
        float r10219838 = -0.02381;
        float r10219839 = r10219835 * r10219815;
        float r10219840 = r10219838 * r10219839;
        float r10219841 = r10219837 + r10219840;
        float r10219842 = 0.001116;
        float r10219843 = r10219839 * r10219815;
        float r10219844 = r10219842 * r10219843;
        float r10219845 = r10219841 + r10219844;
        float r10219846 = -2.8e-05;
        float r10219847 = r10219843 * r10219815;
        float r10219848 = r10219846 * r10219847;
        float r10219849 = r10219845 + r10219848;
        return r10219849;
}

double f_id(double x) {
        double r10219850 = 1.0;
        double r10219851 = -10.0;
        double r10219852 = x;
        double r10219853 = r10219851 * r10219852;
        double r10219854 = r10219850 + r10219853;
        double r10219855 = 22.5;
        double r10219856 = r10219852 * r10219852;
        double r10219857 = r10219855 * r10219856;
        double r10219858 = r10219854 + r10219857;
        double r10219859 = -20.0;
        double r10219860 = r10219856 * r10219852;
        double r10219861 = r10219859 * r10219860;
        double r10219862 = r10219858 + r10219861;
        double r10219863 = 8.75;
        double r10219864 = r10219860 * r10219852;
        double r10219865 = r10219863 * r10219864;
        double r10219866 = r10219862 + r10219865;
        double r10219867 = -2.1;
        double r10219868 = r10219864 * r10219852;
        double r10219869 = r10219867 * r10219868;
        double r10219870 = r10219866 + r10219869;
        double r10219871 = 0.291667;
        double r10219872 = r10219868 * r10219852;
        double r10219873 = r10219871 * r10219872;
        double r10219874 = r10219870 + r10219873;
        double r10219875 = -0.02381;
        double r10219876 = r10219872 * r10219852;
        double r10219877 = r10219875 * r10219876;
        double r10219878 = r10219874 + r10219877;
        double r10219879 = 0.001116;
        double r10219880 = r10219876 * r10219852;
        double r10219881 = r10219879 * r10219880;
        double r10219882 = r10219878 + r10219881;
        double r10219883 = -2.8e-05;
        double r10219884 = r10219880 * r10219852;
        double r10219885 = r10219883 * r10219884;
        double r10219886 = r10219882 + r10219885;
        return r10219886;
}


double f_of(float x) {
        float r10219887 = x;
        float r10219888 = r10219887 * r10219887;
        float r10219889 = 22.5;
        float r10219890 = -20.0;
        float r10219891 = r10219890 * r10219887;
        float r10219892 = r10219889 + r10219891;
        float r10219893 = r10219888 * r10219892;
        float r10219894 = 1.0;
        float r10219895 = r10219893 + r10219894;
        float r10219896 = -10.0;
        float r10219897 = r10219896 * r10219887;
        float r10219898 = 3;
        float r10219899 = 1;
        float r10219900 = r10219898 + r10219899;
        float r10219901 = pow(r10219888, r10219900);
        float r10219902 = 0.001116;
        float r10219903 = -2.8e-05;
        float r10219904 = r10219903 * r10219887;
        float r10219905 = r10219902 + r10219904;
        float r10219906 = r10219901 * r10219905;
        float r10219907 = r10219897 + r10219906;
        float r10219908 = r10219895 + r10219907;
        float r10219909 = r10219888 * r10219888;
        float r10219910 = 0.291667;
        float r10219911 = r10219887 * r10219910;
        float r10219912 = r10219911 * r10219887;
        float r10219913 = 8.75;
        float r10219914 = -2.1;
        float r10219915 = r10219887 * r10219914;
        float r10219916 = r10219913 + r10219915;
        float r10219917 = r10219912 + r10219916;
        float r10219918 = -0.02381;
        float r10219919 = r10219887 * r10219918;
        float r10219920 = r10219919 * r10219888;
        float r10219921 = r10219917 + r10219920;
        float r10219922 = r10219909 * r10219921;
        float r10219923 = r10219908 + r10219922;
        return r10219923;
}

double f_od(double x) {
        double r10219924 = x;
        double r10219925 = r10219924 * r10219924;
        double r10219926 = 22.5;
        double r10219927 = -20.0;
        double r10219928 = r10219927 * r10219924;
        double r10219929 = r10219926 + r10219928;
        double r10219930 = r10219925 * r10219929;
        double r10219931 = 1.0;
        double r10219932 = r10219930 + r10219931;
        double r10219933 = -10.0;
        double r10219934 = r10219933 * r10219924;
        double r10219935 = 3;
        double r10219936 = 1;
        double r10219937 = r10219935 + r10219936;
        double r10219938 = pow(r10219925, r10219937);
        double r10219939 = 0.001116;
        double r10219940 = -2.8e-05;
        double r10219941 = r10219940 * r10219924;
        double r10219942 = r10219939 + r10219941;
        double r10219943 = r10219938 * r10219942;
        double r10219944 = r10219934 + r10219943;
        double r10219945 = r10219932 + r10219944;
        double r10219946 = r10219925 * r10219925;
        double r10219947 = 0.291667;
        double r10219948 = r10219924 * r10219947;
        double r10219949 = r10219948 * r10219924;
        double r10219950 = 8.75;
        double r10219951 = -2.1;
        double r10219952 = r10219924 * r10219951;
        double r10219953 = r10219950 + r10219952;
        double r10219954 = r10219949 + r10219953;
        double r10219955 = -0.02381;
        double r10219956 = r10219924 * r10219955;
        double r10219957 = r10219956 * r10219925;
        double r10219958 = r10219954 + r10219957;
        double r10219959 = r10219946 * r10219958;
        double r10219960 = r10219945 + r10219959;
        return r10219960;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10219961, r10219962, r10219963, r10219964, r10219965, r10219966, r10219967, r10219968, r10219969, r10219970, r10219971, r10219972, r10219973, r10219974, r10219975, r10219976, r10219977, r10219978, r10219979, r10219980, r10219981, r10219982, r10219983, r10219984, r10219985, r10219986, r10219987, r10219988, r10219989, r10219990, r10219991, r10219992, r10219993, r10219994, r10219995, r10219996, r10219997;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10219961, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219962, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10219963);
        mpfr_init(r10219964);
        mpfr_init(r10219965);
        mpfr_init_set_str(r10219966, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10219967);
        mpfr_init(r10219968);
        mpfr_init(r10219969);
        mpfr_init_set_str(r10219970, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10219971);
        mpfr_init(r10219972);
        mpfr_init(r10219973);
        mpfr_init_set_str(r10219974, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10219975);
        mpfr_init(r10219976);
        mpfr_init(r10219977);
        mpfr_init_set_str(r10219978, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10219979);
        mpfr_init(r10219980);
        mpfr_init(r10219981);
        mpfr_init_set_str(r10219982, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10219983);
        mpfr_init(r10219984);
        mpfr_init(r10219985);
        mpfr_init_set_str(r10219986, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10219987);
        mpfr_init(r10219988);
        mpfr_init(r10219989);
        mpfr_init_set_str(r10219990, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10219991);
        mpfr_init(r10219992);
        mpfr_init(r10219993);
        mpfr_init_set_str(r10219994, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10219995);
        mpfr_init(r10219996);
        mpfr_init(r10219997);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10219963, x, MPFR_RNDN);
        mpfr_mul(r10219964, r10219962, r10219963, MPFR_RNDN);
        mpfr_add(r10219965, r10219961, r10219964, MPFR_RNDN);
        ;
        mpfr_mul(r10219967, r10219963, r10219963, MPFR_RNDN);
        mpfr_mul(r10219968, r10219966, r10219967, MPFR_RNDN);
        mpfr_add(r10219969, r10219965, r10219968, MPFR_RNDN);
        ;
        mpfr_mul(r10219971, r10219967, r10219963, MPFR_RNDN);
        mpfr_mul(r10219972, r10219970, r10219971, MPFR_RNDN);
        mpfr_add(r10219973, r10219969, r10219972, MPFR_RNDN);
        ;
        mpfr_mul(r10219975, r10219971, r10219963, MPFR_RNDN);
        mpfr_mul(r10219976, r10219974, r10219975, MPFR_RNDN);
        mpfr_add(r10219977, r10219973, r10219976, MPFR_RNDN);
        ;
        mpfr_mul(r10219979, r10219975, r10219963, MPFR_RNDN);
        mpfr_mul(r10219980, r10219978, r10219979, MPFR_RNDN);
        mpfr_add(r10219981, r10219977, r10219980, MPFR_RNDN);
        ;
        mpfr_mul(r10219983, r10219979, r10219963, MPFR_RNDN);
        mpfr_mul(r10219984, r10219982, r10219983, MPFR_RNDN);
        mpfr_add(r10219985, r10219981, r10219984, MPFR_RNDN);
        ;
        mpfr_mul(r10219987, r10219983, r10219963, MPFR_RNDN);
        mpfr_mul(r10219988, r10219986, r10219987, MPFR_RNDN);
        mpfr_add(r10219989, r10219985, r10219988, MPFR_RNDN);
        ;
        mpfr_mul(r10219991, r10219987, r10219963, MPFR_RNDN);
        mpfr_mul(r10219992, r10219990, r10219991, MPFR_RNDN);
        mpfr_add(r10219993, r10219989, r10219992, MPFR_RNDN);
        ;
        mpfr_mul(r10219995, r10219991, r10219963, MPFR_RNDN);
        mpfr_mul(r10219996, r10219994, r10219995, MPFR_RNDN);
        mpfr_add(r10219997, r10219993, r10219996, MPFR_RNDN);
        return mpfr_get_d(r10219997, MPFR_RNDN);
}

static mpfr_t r10219998, r10219999, r10220000, r10220001, r10220002, r10220003, r10220004, r10220005, r10220006, r10220007, r10220008, r10220009, r10220010, r10220011, r10220012, r10220013, r10220014, r10220015, r10220016, r10220017, r10220018, r10220019, r10220020, r10220021, r10220022, r10220023, r10220024, r10220025, r10220026, r10220027, r10220028, r10220029, r10220030, r10220031, r10220032, r10220033, r10220034;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10219998);
        mpfr_init(r10219999);
        mpfr_init_set_str(r10220000, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220001, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10220002);
        mpfr_init(r10220003);
        mpfr_init(r10220004);
        mpfr_init_set_str(r10220005, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10220006);
        mpfr_init_set_str(r10220007, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10220008);
        mpfr_init_set_str(r10220009, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220010, "1", 10, MPFR_RNDN);
        mpfr_init(r10220011);
        mpfr_init(r10220012);
        mpfr_init_set_str(r10220013, "0.001116", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220014, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10220015);
        mpfr_init(r10220016);
        mpfr_init(r10220017);
        mpfr_init(r10220018);
        mpfr_init(r10220019);
        mpfr_init(r10220020);
        mpfr_init_set_str(r10220021, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10220022);
        mpfr_init(r10220023);
        mpfr_init_set_str(r10220024, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220025, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10220026);
        mpfr_init(r10220027);
        mpfr_init(r10220028);
        mpfr_init_set_str(r10220029, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10220030);
        mpfr_init(r10220031);
        mpfr_init(r10220032);
        mpfr_init(r10220033);
        mpfr_init(r10220034);
}

double f_fm(double x) {
        mpfr_set_d(r10219998, x, MPFR_RNDN);
        mpfr_mul(r10219999, r10219998, r10219998, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10220002, r10220001, r10219998, MPFR_RNDN);
        mpfr_add(r10220003, r10220000, r10220002, MPFR_RNDN);
        mpfr_mul(r10220004, r10219999, r10220003, MPFR_RNDN);
        ;
        mpfr_add(r10220006, r10220004, r10220005, MPFR_RNDN);
        ;
        mpfr_mul(r10220008, r10220007, r10219998, MPFR_RNDN);
        ;
        ;
        mpfr_add(r10220011, r10220009, r10220010, MPFR_RNDN);
        mpfr_pow(r10220012, r10219999, r10220011, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10220015, r10220014, r10219998, MPFR_RNDN);
        mpfr_add(r10220016, r10220013, r10220015, MPFR_RNDN);
        mpfr_mul(r10220017, r10220012, r10220016, MPFR_RNDN);
        mpfr_add(r10220018, r10220008, r10220017, MPFR_RNDN);
        mpfr_add(r10220019, r10220006, r10220018, MPFR_RNDN);
        mpfr_mul(r10220020, r10219999, r10219999, MPFR_RNDN);
        ;
        mpfr_mul(r10220022, r10219998, r10220021, MPFR_RNDN);
        mpfr_mul(r10220023, r10220022, r10219998, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10220026, r10219998, r10220025, MPFR_RNDN);
        mpfr_add(r10220027, r10220024, r10220026, MPFR_RNDN);
        mpfr_add(r10220028, r10220023, r10220027, MPFR_RNDN);
        ;
        mpfr_mul(r10220030, r10219998, r10220029, MPFR_RNDN);
        mpfr_mul(r10220031, r10220030, r10219999, MPFR_RNDN);
        mpfr_add(r10220032, r10220028, r10220031, MPFR_RNDN);
        mpfr_mul(r10220033, r10220020, r10220032, MPFR_RNDN);
        mpfr_add(r10220034, r10220019, r10220033, MPFR_RNDN);
        return mpfr_get_d(r10220034, MPFR_RNDN);
}

static mpfr_t r10220035, r10220036, r10220037, r10220038, r10220039, r10220040, r10220041, r10220042, r10220043, r10220044, r10220045, r10220046, r10220047, r10220048, r10220049, r10220050, r10220051, r10220052, r10220053, r10220054, r10220055, r10220056, r10220057, r10220058, r10220059, r10220060, r10220061, r10220062, r10220063, r10220064, r10220065, r10220066, r10220067, r10220068, r10220069, r10220070, r10220071;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10220035);
        mpfr_init(r10220036);
        mpfr_init_set_str(r10220037, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220038, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10220039);
        mpfr_init(r10220040);
        mpfr_init(r10220041);
        mpfr_init_set_str(r10220042, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10220043);
        mpfr_init_set_str(r10220044, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10220045);
        mpfr_init_set_str(r10220046, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220047, "1", 10, MPFR_RNDN);
        mpfr_init(r10220048);
        mpfr_init(r10220049);
        mpfr_init_set_str(r10220050, "0.001116", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220051, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10220052);
        mpfr_init(r10220053);
        mpfr_init(r10220054);
        mpfr_init(r10220055);
        mpfr_init(r10220056);
        mpfr_init(r10220057);
        mpfr_init_set_str(r10220058, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10220059);
        mpfr_init(r10220060);
        mpfr_init_set_str(r10220061, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r10220062, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10220063);
        mpfr_init(r10220064);
        mpfr_init(r10220065);
        mpfr_init_set_str(r10220066, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10220067);
        mpfr_init(r10220068);
        mpfr_init(r10220069);
        mpfr_init(r10220070);
        mpfr_init(r10220071);
}

double f_dm(double x) {
        mpfr_set_d(r10220035, x, MPFR_RNDN);
        mpfr_mul(r10220036, r10220035, r10220035, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10220039, r10220038, r10220035, MPFR_RNDN);
        mpfr_add(r10220040, r10220037, r10220039, MPFR_RNDN);
        mpfr_mul(r10220041, r10220036, r10220040, MPFR_RNDN);
        ;
        mpfr_add(r10220043, r10220041, r10220042, MPFR_RNDN);
        ;
        mpfr_mul(r10220045, r10220044, r10220035, MPFR_RNDN);
        ;
        ;
        mpfr_add(r10220048, r10220046, r10220047, MPFR_RNDN);
        mpfr_pow(r10220049, r10220036, r10220048, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10220052, r10220051, r10220035, MPFR_RNDN);
        mpfr_add(r10220053, r10220050, r10220052, MPFR_RNDN);
        mpfr_mul(r10220054, r10220049, r10220053, MPFR_RNDN);
        mpfr_add(r10220055, r10220045, r10220054, MPFR_RNDN);
        mpfr_add(r10220056, r10220043, r10220055, MPFR_RNDN);
        mpfr_mul(r10220057, r10220036, r10220036, MPFR_RNDN);
        ;
        mpfr_mul(r10220059, r10220035, r10220058, MPFR_RNDN);
        mpfr_mul(r10220060, r10220059, r10220035, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10220063, r10220035, r10220062, MPFR_RNDN);
        mpfr_add(r10220064, r10220061, r10220063, MPFR_RNDN);
        mpfr_add(r10220065, r10220060, r10220064, MPFR_RNDN);
        ;
        mpfr_mul(r10220067, r10220035, r10220066, MPFR_RNDN);
        mpfr_mul(r10220068, r10220067, r10220036, MPFR_RNDN);
        mpfr_add(r10220069, r10220065, r10220068, MPFR_RNDN);
        mpfr_mul(r10220070, r10220057, r10220069, MPFR_RNDN);
        mpfr_add(r10220071, r10220056, r10220070, MPFR_RNDN);
        return mpfr_get_d(r10220071, MPFR_RNDN);
}

