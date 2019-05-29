#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r11627871 = -518918400.0;
        float r11627872 = x;
        float r11627873 = r11627871 * r11627872;
        float r11627874 = 2421619200.0;
        float r11627875 = r11627872 * r11627872;
        float r11627876 = r11627875 * r11627872;
        float r11627877 = r11627874 * r11627876;
        float r11627878 = r11627873 + r11627877;
        float r11627879 = -2905943040.0;
        float r11627880 = r11627876 * r11627872;
        float r11627881 = r11627880 * r11627872;
        float r11627882 = r11627879 * r11627881;
        float r11627883 = r11627878 + r11627882;
        float r11627884 = 1383782400.0;
        float r11627885 = r11627881 * r11627872;
        float r11627886 = r11627885 * r11627872;
        float r11627887 = r11627884 * r11627886;
        float r11627888 = r11627883 + r11627887;
        float r11627889 = -307507200.0;
        float r11627890 = r11627886 * r11627872;
        float r11627891 = r11627890 * r11627872;
        float r11627892 = r11627889 * r11627891;
        float r11627893 = r11627888 + r11627892;
        float r11627894 = 33546240.0;
        float r11627895 = r11627891 * r11627872;
        float r11627896 = r11627895 * r11627872;
        float r11627897 = r11627894 * r11627896;
        float r11627898 = r11627893 + r11627897;
        float r11627899 = -1720320.0;
        float r11627900 = r11627896 * r11627872;
        float r11627901 = r11627900 * r11627872;
        float r11627902 = r11627899 * r11627901;
        float r11627903 = r11627898 + r11627902;
        float r11627904 = 32768.0;
        float r11627905 = r11627901 * r11627872;
        float r11627906 = r11627905 * r11627872;
        float r11627907 = r11627904 * r11627906;
        float r11627908 = r11627903 + r11627907;
        return r11627908;
}

double f_id(double x) {
        double r11627909 = -518918400.0;
        double r11627910 = x;
        double r11627911 = r11627909 * r11627910;
        double r11627912 = 2421619200.0;
        double r11627913 = r11627910 * r11627910;
        double r11627914 = r11627913 * r11627910;
        double r11627915 = r11627912 * r11627914;
        double r11627916 = r11627911 + r11627915;
        double r11627917 = -2905943040.0;
        double r11627918 = r11627914 * r11627910;
        double r11627919 = r11627918 * r11627910;
        double r11627920 = r11627917 * r11627919;
        double r11627921 = r11627916 + r11627920;
        double r11627922 = 1383782400.0;
        double r11627923 = r11627919 * r11627910;
        double r11627924 = r11627923 * r11627910;
        double r11627925 = r11627922 * r11627924;
        double r11627926 = r11627921 + r11627925;
        double r11627927 = -307507200.0;
        double r11627928 = r11627924 * r11627910;
        double r11627929 = r11627928 * r11627910;
        double r11627930 = r11627927 * r11627929;
        double r11627931 = r11627926 + r11627930;
        double r11627932 = 33546240.0;
        double r11627933 = r11627929 * r11627910;
        double r11627934 = r11627933 * r11627910;
        double r11627935 = r11627932 * r11627934;
        double r11627936 = r11627931 + r11627935;
        double r11627937 = -1720320.0;
        double r11627938 = r11627934 * r11627910;
        double r11627939 = r11627938 * r11627910;
        double r11627940 = r11627937 * r11627939;
        double r11627941 = r11627936 + r11627940;
        double r11627942 = 32768.0;
        double r11627943 = r11627939 * r11627910;
        double r11627944 = r11627943 * r11627910;
        double r11627945 = r11627942 * r11627944;
        double r11627946 = r11627941 + r11627945;
        return r11627946;
}


double f_of(float x) {
        float r11627947 = x;
        float r11627948 = 3;
        float r11627949 = pow(r11627947, r11627948);
        float r11627950 = pow(r11627949, r11627948);
        float r11627951 = 33546240.0;
        float r11627952 = r11627947 * r11627947;
        float r11627953 = r11627951 * r11627952;
        float r11627954 = -307507200.0;
        float r11627955 = r11627953 + r11627954;
        float r11627956 = r11627950 * r11627955;
        float r11627957 = 15;
        float r11627958 = pow(r11627947, r11627957);
        float r11627959 = 32768.0;
        float r11627960 = r11627958 * r11627959;
        float r11627961 = 1720320.0;
        float r11627962 = 13;
        float r11627963 = pow(r11627947, r11627962);
        float r11627964 = r11627961 * r11627963;
        float r11627965 = 2421619200.0;
        float r11627966 = r11627947 * r11627965;
        float r11627967 = r11627952 * r11627966;
        float r11627968 = r11627964 - r11627967;
        float r11627969 = r11627960 - r11627968;
        float r11627970 = r11627956 + r11627969;
        float r11627971 = -518918400.0;
        float r11627972 = r11627947 * r11627971;
        float r11627973 = r11627952 * r11627952;
        float r11627974 = 1383782400.0;
        float r11627975 = r11627974 * r11627947;
        float r11627976 = r11627952 * r11627975;
        float r11627977 = -2905943040.0;
        float r11627978 = r11627977 * r11627947;
        float r11627979 = r11627976 + r11627978;
        float r11627980 = r11627973 * r11627979;
        float r11627981 = r11627972 + r11627980;
        float r11627982 = r11627970 + r11627981;
        return r11627982;
}

double f_od(double x) {
        double r11627983 = x;
        double r11627984 = 3;
        double r11627985 = pow(r11627983, r11627984);
        double r11627986 = pow(r11627985, r11627984);
        double r11627987 = 33546240.0;
        double r11627988 = r11627983 * r11627983;
        double r11627989 = r11627987 * r11627988;
        double r11627990 = -307507200.0;
        double r11627991 = r11627989 + r11627990;
        double r11627992 = r11627986 * r11627991;
        double r11627993 = 15;
        double r11627994 = pow(r11627983, r11627993);
        double r11627995 = 32768.0;
        double r11627996 = r11627994 * r11627995;
        double r11627997 = 1720320.0;
        double r11627998 = 13;
        double r11627999 = pow(r11627983, r11627998);
        double r11628000 = r11627997 * r11627999;
        double r11628001 = 2421619200.0;
        double r11628002 = r11627983 * r11628001;
        double r11628003 = r11627988 * r11628002;
        double r11628004 = r11628000 - r11628003;
        double r11628005 = r11627996 - r11628004;
        double r11628006 = r11627992 + r11628005;
        double r11628007 = -518918400.0;
        double r11628008 = r11627983 * r11628007;
        double r11628009 = r11627988 * r11627988;
        double r11628010 = 1383782400.0;
        double r11628011 = r11628010 * r11627983;
        double r11628012 = r11627988 * r11628011;
        double r11628013 = -2905943040.0;
        double r11628014 = r11628013 * r11627983;
        double r11628015 = r11628012 + r11628014;
        double r11628016 = r11628009 * r11628015;
        double r11628017 = r11628008 + r11628016;
        double r11628018 = r11628006 + r11628017;
        return r11628018;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11628019, r11628020, r11628021, r11628022, r11628023, r11628024, r11628025, r11628026, r11628027, r11628028, r11628029, r11628030, r11628031, r11628032, r11628033, r11628034, r11628035, r11628036, r11628037, r11628038, r11628039, r11628040, r11628041, r11628042, r11628043, r11628044, r11628045, r11628046, r11628047, r11628048, r11628049, r11628050, r11628051, r11628052, r11628053, r11628054, r11628055, r11628056;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11628019, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r11628020);
        mpfr_init(r11628021);
        mpfr_init_set_str(r11628022, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r11628023);
        mpfr_init(r11628024);
        mpfr_init(r11628025);
        mpfr_init(r11628026);
        mpfr_init_set_str(r11628027, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r11628028);
        mpfr_init(r11628029);
        mpfr_init(r11628030);
        mpfr_init(r11628031);
        mpfr_init_set_str(r11628032, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r11628033);
        mpfr_init(r11628034);
        mpfr_init(r11628035);
        mpfr_init(r11628036);
        mpfr_init_set_str(r11628037, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r11628038);
        mpfr_init(r11628039);
        mpfr_init(r11628040);
        mpfr_init(r11628041);
        mpfr_init_set_str(r11628042, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r11628043);
        mpfr_init(r11628044);
        mpfr_init(r11628045);
        mpfr_init(r11628046);
        mpfr_init_set_str(r11628047, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r11628048);
        mpfr_init(r11628049);
        mpfr_init(r11628050);
        mpfr_init(r11628051);
        mpfr_init_set_str(r11628052, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r11628053);
        mpfr_init(r11628054);
        mpfr_init(r11628055);
        mpfr_init(r11628056);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11628020, x, MPFR_RNDN);
        mpfr_mul(r11628021, r11628019, r11628020, MPFR_RNDN);
        ;
        mpfr_mul(r11628023, r11628020, r11628020, MPFR_RNDN);
        mpfr_mul(r11628024, r11628023, r11628020, MPFR_RNDN);
        mpfr_mul(r11628025, r11628022, r11628024, MPFR_RNDN);
        mpfr_add(r11628026, r11628021, r11628025, MPFR_RNDN);
        ;
        mpfr_mul(r11628028, r11628024, r11628020, MPFR_RNDN);
        mpfr_mul(r11628029, r11628028, r11628020, MPFR_RNDN);
        mpfr_mul(r11628030, r11628027, r11628029, MPFR_RNDN);
        mpfr_add(r11628031, r11628026, r11628030, MPFR_RNDN);
        ;
        mpfr_mul(r11628033, r11628029, r11628020, MPFR_RNDN);
        mpfr_mul(r11628034, r11628033, r11628020, MPFR_RNDN);
        mpfr_mul(r11628035, r11628032, r11628034, MPFR_RNDN);
        mpfr_add(r11628036, r11628031, r11628035, MPFR_RNDN);
        ;
        mpfr_mul(r11628038, r11628034, r11628020, MPFR_RNDN);
        mpfr_mul(r11628039, r11628038, r11628020, MPFR_RNDN);
        mpfr_mul(r11628040, r11628037, r11628039, MPFR_RNDN);
        mpfr_add(r11628041, r11628036, r11628040, MPFR_RNDN);
        ;
        mpfr_mul(r11628043, r11628039, r11628020, MPFR_RNDN);
        mpfr_mul(r11628044, r11628043, r11628020, MPFR_RNDN);
        mpfr_mul(r11628045, r11628042, r11628044, MPFR_RNDN);
        mpfr_add(r11628046, r11628041, r11628045, MPFR_RNDN);
        ;
        mpfr_mul(r11628048, r11628044, r11628020, MPFR_RNDN);
        mpfr_mul(r11628049, r11628048, r11628020, MPFR_RNDN);
        mpfr_mul(r11628050, r11628047, r11628049, MPFR_RNDN);
        mpfr_add(r11628051, r11628046, r11628050, MPFR_RNDN);
        ;
        mpfr_mul(r11628053, r11628049, r11628020, MPFR_RNDN);
        mpfr_mul(r11628054, r11628053, r11628020, MPFR_RNDN);
        mpfr_mul(r11628055, r11628052, r11628054, MPFR_RNDN);
        mpfr_add(r11628056, r11628051, r11628055, MPFR_RNDN);
        return mpfr_get_d(r11628056, MPFR_RNDN);
}

static mpfr_t r11628057, r11628058, r11628059, r11628060, r11628061, r11628062, r11628063, r11628064, r11628065, r11628066, r11628067, r11628068, r11628069, r11628070, r11628071, r11628072, r11628073, r11628074, r11628075, r11628076, r11628077, r11628078, r11628079, r11628080, r11628081, r11628082, r11628083, r11628084, r11628085, r11628086, r11628087, r11628088, r11628089, r11628090, r11628091, r11628092;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11628057);
        mpfr_init_set_str(r11628058, "3", 10, MPFR_RNDN);
        mpfr_init(r11628059);
        mpfr_init(r11628060);
        mpfr_init_set_str(r11628061, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r11628062);
        mpfr_init(r11628063);
        mpfr_init_set_str(r11628064, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r11628065);
        mpfr_init(r11628066);
        mpfr_init_set_str(r11628067, "15", 10, MPFR_RNDN);
        mpfr_init(r11628068);
        mpfr_init_set_str(r11628069, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r11628070);
        mpfr_init_set_str(r11628071, "1720320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11628072, "13", 10, MPFR_RNDN);
        mpfr_init(r11628073);
        mpfr_init(r11628074);
        mpfr_init_set_str(r11628075, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r11628076);
        mpfr_init(r11628077);
        mpfr_init(r11628078);
        mpfr_init(r11628079);
        mpfr_init(r11628080);
        mpfr_init_set_str(r11628081, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r11628082);
        mpfr_init(r11628083);
        mpfr_init_set_str(r11628084, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r11628085);
        mpfr_init(r11628086);
        mpfr_init_set_str(r11628087, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r11628088);
        mpfr_init(r11628089);
        mpfr_init(r11628090);
        mpfr_init(r11628091);
        mpfr_init(r11628092);
}

double f_fm(double x) {
        mpfr_set_d(r11628057, x, MPFR_RNDN);
        ;
        mpfr_pow(r11628059, r11628057, r11628058, MPFR_RNDN);
        mpfr_pow(r11628060, r11628059, r11628058, MPFR_RNDN);
        ;
        mpfr_mul(r11628062, r11628057, r11628057, MPFR_RNDN);
        mpfr_mul(r11628063, r11628061, r11628062, MPFR_RNDN);
        ;
        mpfr_add(r11628065, r11628063, r11628064, MPFR_RNDN);
        mpfr_mul(r11628066, r11628060, r11628065, MPFR_RNDN);
        ;
        mpfr_pow(r11628068, r11628057, r11628067, MPFR_RNDN);
        ;
        mpfr_mul(r11628070, r11628068, r11628069, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r11628073, r11628057, r11628072, MPFR_RNDN);
        mpfr_mul(r11628074, r11628071, r11628073, MPFR_RNDN);
        ;
        mpfr_mul(r11628076, r11628057, r11628075, MPFR_RNDN);
        mpfr_mul(r11628077, r11628062, r11628076, MPFR_RNDN);
        mpfr_sub(r11628078, r11628074, r11628077, MPFR_RNDN);
        mpfr_sub(r11628079, r11628070, r11628078, MPFR_RNDN);
        mpfr_add(r11628080, r11628066, r11628079, MPFR_RNDN);
        ;
        mpfr_mul(r11628082, r11628057, r11628081, MPFR_RNDN);
        mpfr_mul(r11628083, r11628062, r11628062, MPFR_RNDN);
        ;
        mpfr_mul(r11628085, r11628084, r11628057, MPFR_RNDN);
        mpfr_mul(r11628086, r11628062, r11628085, MPFR_RNDN);
        ;
        mpfr_mul(r11628088, r11628087, r11628057, MPFR_RNDN);
        mpfr_add(r11628089, r11628086, r11628088, MPFR_RNDN);
        mpfr_mul(r11628090, r11628083, r11628089, MPFR_RNDN);
        mpfr_add(r11628091, r11628082, r11628090, MPFR_RNDN);
        mpfr_add(r11628092, r11628080, r11628091, MPFR_RNDN);
        return mpfr_get_d(r11628092, MPFR_RNDN);
}

static mpfr_t r11628093, r11628094, r11628095, r11628096, r11628097, r11628098, r11628099, r11628100, r11628101, r11628102, r11628103, r11628104, r11628105, r11628106, r11628107, r11628108, r11628109, r11628110, r11628111, r11628112, r11628113, r11628114, r11628115, r11628116, r11628117, r11628118, r11628119, r11628120, r11628121, r11628122, r11628123, r11628124, r11628125, r11628126, r11628127, r11628128;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11628093);
        mpfr_init_set_str(r11628094, "3", 10, MPFR_RNDN);
        mpfr_init(r11628095);
        mpfr_init(r11628096);
        mpfr_init_set_str(r11628097, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r11628098);
        mpfr_init(r11628099);
        mpfr_init_set_str(r11628100, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r11628101);
        mpfr_init(r11628102);
        mpfr_init_set_str(r11628103, "15", 10, MPFR_RNDN);
        mpfr_init(r11628104);
        mpfr_init_set_str(r11628105, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r11628106);
        mpfr_init_set_str(r11628107, "1720320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11628108, "13", 10, MPFR_RNDN);
        mpfr_init(r11628109);
        mpfr_init(r11628110);
        mpfr_init_set_str(r11628111, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r11628112);
        mpfr_init(r11628113);
        mpfr_init(r11628114);
        mpfr_init(r11628115);
        mpfr_init(r11628116);
        mpfr_init_set_str(r11628117, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r11628118);
        mpfr_init(r11628119);
        mpfr_init_set_str(r11628120, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r11628121);
        mpfr_init(r11628122);
        mpfr_init_set_str(r11628123, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r11628124);
        mpfr_init(r11628125);
        mpfr_init(r11628126);
        mpfr_init(r11628127);
        mpfr_init(r11628128);
}

double f_dm(double x) {
        mpfr_set_d(r11628093, x, MPFR_RNDN);
        ;
        mpfr_pow(r11628095, r11628093, r11628094, MPFR_RNDN);
        mpfr_pow(r11628096, r11628095, r11628094, MPFR_RNDN);
        ;
        mpfr_mul(r11628098, r11628093, r11628093, MPFR_RNDN);
        mpfr_mul(r11628099, r11628097, r11628098, MPFR_RNDN);
        ;
        mpfr_add(r11628101, r11628099, r11628100, MPFR_RNDN);
        mpfr_mul(r11628102, r11628096, r11628101, MPFR_RNDN);
        ;
        mpfr_pow(r11628104, r11628093, r11628103, MPFR_RNDN);
        ;
        mpfr_mul(r11628106, r11628104, r11628105, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r11628109, r11628093, r11628108, MPFR_RNDN);
        mpfr_mul(r11628110, r11628107, r11628109, MPFR_RNDN);
        ;
        mpfr_mul(r11628112, r11628093, r11628111, MPFR_RNDN);
        mpfr_mul(r11628113, r11628098, r11628112, MPFR_RNDN);
        mpfr_sub(r11628114, r11628110, r11628113, MPFR_RNDN);
        mpfr_sub(r11628115, r11628106, r11628114, MPFR_RNDN);
        mpfr_add(r11628116, r11628102, r11628115, MPFR_RNDN);
        ;
        mpfr_mul(r11628118, r11628093, r11628117, MPFR_RNDN);
        mpfr_mul(r11628119, r11628098, r11628098, MPFR_RNDN);
        ;
        mpfr_mul(r11628121, r11628120, r11628093, MPFR_RNDN);
        mpfr_mul(r11628122, r11628098, r11628121, MPFR_RNDN);
        ;
        mpfr_mul(r11628124, r11628123, r11628093, MPFR_RNDN);
        mpfr_add(r11628125, r11628122, r11628124, MPFR_RNDN);
        mpfr_mul(r11628126, r11628119, r11628125, MPFR_RNDN);
        mpfr_add(r11628127, r11628118, r11628126, MPFR_RNDN);
        mpfr_add(r11628128, r11628116, r11628127, MPFR_RNDN);
        return mpfr_get_d(r11628128, MPFR_RNDN);
}

