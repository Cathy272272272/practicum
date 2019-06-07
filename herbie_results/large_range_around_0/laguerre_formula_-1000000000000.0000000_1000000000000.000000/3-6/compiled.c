#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9581919 = 1.0;
        float r9581920 = -6.0;
        float r9581921 = x;
        float r9581922 = r9581920 * r9581921;
        float r9581923 = r9581919 + r9581922;
        float r9581924 = 7.5;
        float r9581925 = r9581921 * r9581921;
        float r9581926 = r9581924 * r9581925;
        float r9581927 = r9581923 + r9581926;
        float r9581928 = -3.333333;
        float r9581929 = r9581925 * r9581921;
        float r9581930 = r9581928 * r9581929;
        float r9581931 = r9581927 + r9581930;
        float r9581932 = 0.625;
        float r9581933 = r9581929 * r9581921;
        float r9581934 = r9581932 * r9581933;
        float r9581935 = r9581931 + r9581934;
        float r9581936 = -0.05;
        float r9581937 = r9581933 * r9581921;
        float r9581938 = r9581936 * r9581937;
        float r9581939 = r9581935 + r9581938;
        float r9581940 = 0.001389;
        float r9581941 = r9581937 * r9581921;
        float r9581942 = r9581940 * r9581941;
        float r9581943 = r9581939 + r9581942;
        return r9581943;
}

double f_id(double x) {
        double r9581944 = 1.0;
        double r9581945 = -6.0;
        double r9581946 = x;
        double r9581947 = r9581945 * r9581946;
        double r9581948 = r9581944 + r9581947;
        double r9581949 = 7.5;
        double r9581950 = r9581946 * r9581946;
        double r9581951 = r9581949 * r9581950;
        double r9581952 = r9581948 + r9581951;
        double r9581953 = -3.333333;
        double r9581954 = r9581950 * r9581946;
        double r9581955 = r9581953 * r9581954;
        double r9581956 = r9581952 + r9581955;
        double r9581957 = 0.625;
        double r9581958 = r9581954 * r9581946;
        double r9581959 = r9581957 * r9581958;
        double r9581960 = r9581956 + r9581959;
        double r9581961 = -0.05;
        double r9581962 = r9581958 * r9581946;
        double r9581963 = r9581961 * r9581962;
        double r9581964 = r9581960 + r9581963;
        double r9581965 = 0.001389;
        double r9581966 = r9581962 * r9581946;
        double r9581967 = r9581965 * r9581966;
        double r9581968 = r9581964 + r9581967;
        return r9581968;
}


double f_of(float x) {
        float r9581969 = x;
        float r9581970 = r9581969 * r9581969;
        float r9581971 = 7.5;
        float r9581972 = -3.333333;
        float r9581973 = r9581969 * r9581972;
        float r9581974 = r9581971 + r9581973;
        float r9581975 = r9581970 * r9581974;
        float r9581976 = 0.001389;
        float r9581977 = r9581969 * r9581976;
        float r9581978 = r9581969 * r9581977;
        float r9581979 = r9581970 * r9581970;
        float r9581980 = r9581978 * r9581979;
        float r9581981 = r9581975 + r9581980;
        float r9581982 = 4;
        float r9581983 = pow(r9581969, r9581982);
        float r9581984 = -0.05;
        float r9581985 = r9581969 * r9581984;
        float r9581986 = 0.625;
        float r9581987 = r9581985 + r9581986;
        float r9581988 = r9581983 * r9581987;
        float r9581989 = -6.0;
        float r9581990 = r9581989 * r9581969;
        float r9581991 = 1.0;
        float r9581992 = r9581990 + r9581991;
        float r9581993 = r9581988 + r9581992;
        float r9581994 = r9581981 + r9581993;
        return r9581994;
}

double f_od(double x) {
        double r9581995 = x;
        double r9581996 = r9581995 * r9581995;
        double r9581997 = 7.5;
        double r9581998 = -3.333333;
        double r9581999 = r9581995 * r9581998;
        double r9582000 = r9581997 + r9581999;
        double r9582001 = r9581996 * r9582000;
        double r9582002 = 0.001389;
        double r9582003 = r9581995 * r9582002;
        double r9582004 = r9581995 * r9582003;
        double r9582005 = r9581996 * r9581996;
        double r9582006 = r9582004 * r9582005;
        double r9582007 = r9582001 + r9582006;
        double r9582008 = 4;
        double r9582009 = pow(r9581995, r9582008);
        double r9582010 = -0.05;
        double r9582011 = r9581995 * r9582010;
        double r9582012 = 0.625;
        double r9582013 = r9582011 + r9582012;
        double r9582014 = r9582009 * r9582013;
        double r9582015 = -6.0;
        double r9582016 = r9582015 * r9581995;
        double r9582017 = 1.0;
        double r9582018 = r9582016 + r9582017;
        double r9582019 = r9582014 + r9582018;
        double r9582020 = r9582007 + r9582019;
        return r9582020;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9582021, r9582022, r9582023, r9582024, r9582025, r9582026, r9582027, r9582028, r9582029, r9582030, r9582031, r9582032, r9582033, r9582034, r9582035, r9582036, r9582037, r9582038, r9582039, r9582040, r9582041, r9582042, r9582043, r9582044, r9582045;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582021, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582022, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9582023);
        mpfr_init(r9582024);
        mpfr_init(r9582025);
        mpfr_init_set_str(r9582026, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9582027);
        mpfr_init(r9582028);
        mpfr_init(r9582029);
        mpfr_init_set_str(r9582030, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9582031);
        mpfr_init(r9582032);
        mpfr_init(r9582033);
        mpfr_init_set_str(r9582034, "0.625", 10, MPFR_RNDN);
        mpfr_init(r9582035);
        mpfr_init(r9582036);
        mpfr_init(r9582037);
        mpfr_init_set_str(r9582038, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9582039);
        mpfr_init(r9582040);
        mpfr_init(r9582041);
        mpfr_init_set_str(r9582042, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9582043);
        mpfr_init(r9582044);
        mpfr_init(r9582045);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9582023, x, MPFR_RNDN);
        mpfr_mul(r9582024, r9582022, r9582023, MPFR_RNDN);
        mpfr_add(r9582025, r9582021, r9582024, MPFR_RNDN);
        ;
        mpfr_mul(r9582027, r9582023, r9582023, MPFR_RNDN);
        mpfr_mul(r9582028, r9582026, r9582027, MPFR_RNDN);
        mpfr_add(r9582029, r9582025, r9582028, MPFR_RNDN);
        ;
        mpfr_mul(r9582031, r9582027, r9582023, MPFR_RNDN);
        mpfr_mul(r9582032, r9582030, r9582031, MPFR_RNDN);
        mpfr_add(r9582033, r9582029, r9582032, MPFR_RNDN);
        ;
        mpfr_mul(r9582035, r9582031, r9582023, MPFR_RNDN);
        mpfr_mul(r9582036, r9582034, r9582035, MPFR_RNDN);
        mpfr_add(r9582037, r9582033, r9582036, MPFR_RNDN);
        ;
        mpfr_mul(r9582039, r9582035, r9582023, MPFR_RNDN);
        mpfr_mul(r9582040, r9582038, r9582039, MPFR_RNDN);
        mpfr_add(r9582041, r9582037, r9582040, MPFR_RNDN);
        ;
        mpfr_mul(r9582043, r9582039, r9582023, MPFR_RNDN);
        mpfr_mul(r9582044, r9582042, r9582043, MPFR_RNDN);
        mpfr_add(r9582045, r9582041, r9582044, MPFR_RNDN);
        return mpfr_get_d(r9582045, MPFR_RNDN);
}

static mpfr_t r9582046, r9582047, r9582048, r9582049, r9582050, r9582051, r9582052, r9582053, r9582054, r9582055, r9582056, r9582057, r9582058, r9582059, r9582060, r9582061, r9582062, r9582063, r9582064, r9582065, r9582066, r9582067, r9582068, r9582069, r9582070, r9582071;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9582046);
        mpfr_init(r9582047);
        mpfr_init_set_str(r9582048, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582049, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9582050);
        mpfr_init(r9582051);
        mpfr_init(r9582052);
        mpfr_init_set_str(r9582053, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9582054);
        mpfr_init(r9582055);
        mpfr_init(r9582056);
        mpfr_init(r9582057);
        mpfr_init(r9582058);
        mpfr_init_set_str(r9582059, "4", 10, MPFR_RNDN);
        mpfr_init(r9582060);
        mpfr_init_set_str(r9582061, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9582062);
        mpfr_init_set_str(r9582063, "0.625", 10, MPFR_RNDN);
        mpfr_init(r9582064);
        mpfr_init(r9582065);
        mpfr_init_set_str(r9582066, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9582067);
        mpfr_init_set_str(r9582068, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9582069);
        mpfr_init(r9582070);
        mpfr_init(r9582071);
}

double f_fm(double x) {
        mpfr_set_d(r9582046, x, MPFR_RNDN);
        mpfr_mul(r9582047, r9582046, r9582046, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9582050, r9582046, r9582049, MPFR_RNDN);
        mpfr_add(r9582051, r9582048, r9582050, MPFR_RNDN);
        mpfr_mul(r9582052, r9582047, r9582051, MPFR_RNDN);
        ;
        mpfr_mul(r9582054, r9582046, r9582053, MPFR_RNDN);
        mpfr_mul(r9582055, r9582046, r9582054, MPFR_RNDN);
        mpfr_mul(r9582056, r9582047, r9582047, MPFR_RNDN);
        mpfr_mul(r9582057, r9582055, r9582056, MPFR_RNDN);
        mpfr_add(r9582058, r9582052, r9582057, MPFR_RNDN);
        ;
        mpfr_pow(r9582060, r9582046, r9582059, MPFR_RNDN);
        ;
        mpfr_mul(r9582062, r9582046, r9582061, MPFR_RNDN);
        ;
        mpfr_add(r9582064, r9582062, r9582063, MPFR_RNDN);
        mpfr_mul(r9582065, r9582060, r9582064, MPFR_RNDN);
        ;
        mpfr_mul(r9582067, r9582066, r9582046, MPFR_RNDN);
        ;
        mpfr_add(r9582069, r9582067, r9582068, MPFR_RNDN);
        mpfr_add(r9582070, r9582065, r9582069, MPFR_RNDN);
        mpfr_add(r9582071, r9582058, r9582070, MPFR_RNDN);
        return mpfr_get_d(r9582071, MPFR_RNDN);
}

static mpfr_t r9582072, r9582073, r9582074, r9582075, r9582076, r9582077, r9582078, r9582079, r9582080, r9582081, r9582082, r9582083, r9582084, r9582085, r9582086, r9582087, r9582088, r9582089, r9582090, r9582091, r9582092, r9582093, r9582094, r9582095, r9582096, r9582097;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9582072);
        mpfr_init(r9582073);
        mpfr_init_set_str(r9582074, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582075, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9582076);
        mpfr_init(r9582077);
        mpfr_init(r9582078);
        mpfr_init_set_str(r9582079, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9582080);
        mpfr_init(r9582081);
        mpfr_init(r9582082);
        mpfr_init(r9582083);
        mpfr_init(r9582084);
        mpfr_init_set_str(r9582085, "4", 10, MPFR_RNDN);
        mpfr_init(r9582086);
        mpfr_init_set_str(r9582087, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9582088);
        mpfr_init_set_str(r9582089, "0.625", 10, MPFR_RNDN);
        mpfr_init(r9582090);
        mpfr_init(r9582091);
        mpfr_init_set_str(r9582092, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9582093);
        mpfr_init_set_str(r9582094, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9582095);
        mpfr_init(r9582096);
        mpfr_init(r9582097);
}

double f_dm(double x) {
        mpfr_set_d(r9582072, x, MPFR_RNDN);
        mpfr_mul(r9582073, r9582072, r9582072, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9582076, r9582072, r9582075, MPFR_RNDN);
        mpfr_add(r9582077, r9582074, r9582076, MPFR_RNDN);
        mpfr_mul(r9582078, r9582073, r9582077, MPFR_RNDN);
        ;
        mpfr_mul(r9582080, r9582072, r9582079, MPFR_RNDN);
        mpfr_mul(r9582081, r9582072, r9582080, MPFR_RNDN);
        mpfr_mul(r9582082, r9582073, r9582073, MPFR_RNDN);
        mpfr_mul(r9582083, r9582081, r9582082, MPFR_RNDN);
        mpfr_add(r9582084, r9582078, r9582083, MPFR_RNDN);
        ;
        mpfr_pow(r9582086, r9582072, r9582085, MPFR_RNDN);
        ;
        mpfr_mul(r9582088, r9582072, r9582087, MPFR_RNDN);
        ;
        mpfr_add(r9582090, r9582088, r9582089, MPFR_RNDN);
        mpfr_mul(r9582091, r9582086, r9582090, MPFR_RNDN);
        ;
        mpfr_mul(r9582093, r9582092, r9582072, MPFR_RNDN);
        ;
        mpfr_add(r9582095, r9582093, r9582094, MPFR_RNDN);
        mpfr_add(r9582096, r9582091, r9582095, MPFR_RNDN);
        mpfr_add(r9582097, r9582084, r9582096, MPFR_RNDN);
        return mpfr_get_d(r9582097, MPFR_RNDN);
}

