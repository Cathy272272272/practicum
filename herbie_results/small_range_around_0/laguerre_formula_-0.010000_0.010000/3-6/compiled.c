#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r3277957 = 1.0;
        float r3277958 = -6.0;
        float r3277959 = x;
        float r3277960 = r3277958 * r3277959;
        float r3277961 = r3277957 + r3277960;
        float r3277962 = 7.5;
        float r3277963 = r3277959 * r3277959;
        float r3277964 = r3277962 * r3277963;
        float r3277965 = r3277961 + r3277964;
        float r3277966 = -3.333333;
        float r3277967 = r3277963 * r3277959;
        float r3277968 = r3277966 * r3277967;
        float r3277969 = r3277965 + r3277968;
        float r3277970 = 0.625;
        float r3277971 = r3277967 * r3277959;
        float r3277972 = r3277970 * r3277971;
        float r3277973 = r3277969 + r3277972;
        float r3277974 = -0.05;
        float r3277975 = r3277971 * r3277959;
        float r3277976 = r3277974 * r3277975;
        float r3277977 = r3277973 + r3277976;
        float r3277978 = 0.001389;
        float r3277979 = r3277975 * r3277959;
        float r3277980 = r3277978 * r3277979;
        float r3277981 = r3277977 + r3277980;
        return r3277981;
}

double f_id(double x) {
        double r3277982 = 1.0;
        double r3277983 = -6.0;
        double r3277984 = x;
        double r3277985 = r3277983 * r3277984;
        double r3277986 = r3277982 + r3277985;
        double r3277987 = 7.5;
        double r3277988 = r3277984 * r3277984;
        double r3277989 = r3277987 * r3277988;
        double r3277990 = r3277986 + r3277989;
        double r3277991 = -3.333333;
        double r3277992 = r3277988 * r3277984;
        double r3277993 = r3277991 * r3277992;
        double r3277994 = r3277990 + r3277993;
        double r3277995 = 0.625;
        double r3277996 = r3277992 * r3277984;
        double r3277997 = r3277995 * r3277996;
        double r3277998 = r3277994 + r3277997;
        double r3277999 = -0.05;
        double r3278000 = r3277996 * r3277984;
        double r3278001 = r3277999 * r3278000;
        double r3278002 = r3277998 + r3278001;
        double r3278003 = 0.001389;
        double r3278004 = r3278000 * r3277984;
        double r3278005 = r3278003 * r3278004;
        double r3278006 = r3278002 + r3278005;
        return r3278006;
}


double f_of(float x) {
        float r3278007 = x;
        float r3278008 = 0.001389;
        float r3278009 = r3278008 * r3278007;
        float r3278010 = r3278007 * r3278009;
        float r3278011 = r3278007 * r3278007;
        float r3278012 = r3278011 * r3278011;
        float r3278013 = r3278010 * r3278012;
        float r3278014 = -6.0;
        float r3278015 = r3278007 * r3278014;
        float r3278016 = 1.0;
        float r3278017 = r3278015 + r3278016;
        float r3278018 = r3278013 + r3278017;
        float r3278019 = 0.625;
        float r3278020 = -0.05;
        float r3278021 = r3278020 * r3278007;
        float r3278022 = r3278019 + r3278021;
        float r3278023 = r3278012 * r3278022;
        float r3278024 = -3.333333;
        float r3278025 = r3278024 * r3278007;
        float r3278026 = 7.5;
        float r3278027 = r3278025 + r3278026;
        float r3278028 = r3278011 * r3278027;
        float r3278029 = r3278023 + r3278028;
        float r3278030 = r3278018 + r3278029;
        return r3278030;
}

double f_od(double x) {
        double r3278031 = x;
        double r3278032 = 0.001389;
        double r3278033 = r3278032 * r3278031;
        double r3278034 = r3278031 * r3278033;
        double r3278035 = r3278031 * r3278031;
        double r3278036 = r3278035 * r3278035;
        double r3278037 = r3278034 * r3278036;
        double r3278038 = -6.0;
        double r3278039 = r3278031 * r3278038;
        double r3278040 = 1.0;
        double r3278041 = r3278039 + r3278040;
        double r3278042 = r3278037 + r3278041;
        double r3278043 = 0.625;
        double r3278044 = -0.05;
        double r3278045 = r3278044 * r3278031;
        double r3278046 = r3278043 + r3278045;
        double r3278047 = r3278036 * r3278046;
        double r3278048 = -3.333333;
        double r3278049 = r3278048 * r3278031;
        double r3278050 = 7.5;
        double r3278051 = r3278049 + r3278050;
        double r3278052 = r3278035 * r3278051;
        double r3278053 = r3278047 + r3278052;
        double r3278054 = r3278042 + r3278053;
        return r3278054;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3278055, r3278056, r3278057, r3278058, r3278059, r3278060, r3278061, r3278062, r3278063, r3278064, r3278065, r3278066, r3278067, r3278068, r3278069, r3278070, r3278071, r3278072, r3278073, r3278074, r3278075, r3278076, r3278077, r3278078, r3278079;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278055, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278056, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r3278057);
        mpfr_init(r3278058);
        mpfr_init(r3278059);
        mpfr_init_set_str(r3278060, "7.5", 10, MPFR_RNDN);
        mpfr_init(r3278061);
        mpfr_init(r3278062);
        mpfr_init(r3278063);
        mpfr_init_set_str(r3278064, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r3278065);
        mpfr_init(r3278066);
        mpfr_init(r3278067);
        mpfr_init_set_str(r3278068, "0.625", 10, MPFR_RNDN);
        mpfr_init(r3278069);
        mpfr_init(r3278070);
        mpfr_init(r3278071);
        mpfr_init_set_str(r3278072, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r3278073);
        mpfr_init(r3278074);
        mpfr_init(r3278075);
        mpfr_init_set_str(r3278076, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r3278077);
        mpfr_init(r3278078);
        mpfr_init(r3278079);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3278057, x, MPFR_RNDN);
        mpfr_mul(r3278058, r3278056, r3278057, MPFR_RNDN);
        mpfr_add(r3278059, r3278055, r3278058, MPFR_RNDN);
        ;
        mpfr_mul(r3278061, r3278057, r3278057, MPFR_RNDN);
        mpfr_mul(r3278062, r3278060, r3278061, MPFR_RNDN);
        mpfr_add(r3278063, r3278059, r3278062, MPFR_RNDN);
        ;
        mpfr_mul(r3278065, r3278061, r3278057, MPFR_RNDN);
        mpfr_mul(r3278066, r3278064, r3278065, MPFR_RNDN);
        mpfr_add(r3278067, r3278063, r3278066, MPFR_RNDN);
        ;
        mpfr_mul(r3278069, r3278065, r3278057, MPFR_RNDN);
        mpfr_mul(r3278070, r3278068, r3278069, MPFR_RNDN);
        mpfr_add(r3278071, r3278067, r3278070, MPFR_RNDN);
        ;
        mpfr_mul(r3278073, r3278069, r3278057, MPFR_RNDN);
        mpfr_mul(r3278074, r3278072, r3278073, MPFR_RNDN);
        mpfr_add(r3278075, r3278071, r3278074, MPFR_RNDN);
        ;
        mpfr_mul(r3278077, r3278073, r3278057, MPFR_RNDN);
        mpfr_mul(r3278078, r3278076, r3278077, MPFR_RNDN);
        mpfr_add(r3278079, r3278075, r3278078, MPFR_RNDN);
        return mpfr_get_d(r3278079, MPFR_RNDN);
}

static mpfr_t r3278080, r3278081, r3278082, r3278083, r3278084, r3278085, r3278086, r3278087, r3278088, r3278089, r3278090, r3278091, r3278092, r3278093, r3278094, r3278095, r3278096, r3278097, r3278098, r3278099, r3278100, r3278101, r3278102, r3278103;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3278080);
        mpfr_init_set_str(r3278081, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r3278082);
        mpfr_init(r3278083);
        mpfr_init(r3278084);
        mpfr_init(r3278085);
        mpfr_init(r3278086);
        mpfr_init_set_str(r3278087, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r3278088);
        mpfr_init_set_str(r3278089, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3278090);
        mpfr_init(r3278091);
        mpfr_init_set_str(r3278092, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278093, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r3278094);
        mpfr_init(r3278095);
        mpfr_init(r3278096);
        mpfr_init_set_str(r3278097, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r3278098);
        mpfr_init_set_str(r3278099, "7.5", 10, MPFR_RNDN);
        mpfr_init(r3278100);
        mpfr_init(r3278101);
        mpfr_init(r3278102);
        mpfr_init(r3278103);
}

double f_fm(double x) {
        mpfr_set_d(r3278080, x, MPFR_RNDN);
        ;
        mpfr_mul(r3278082, r3278081, r3278080, MPFR_RNDN);
        mpfr_mul(r3278083, r3278080, r3278082, MPFR_RNDN);
        mpfr_mul(r3278084, r3278080, r3278080, MPFR_RNDN);
        mpfr_mul(r3278085, r3278084, r3278084, MPFR_RNDN);
        mpfr_mul(r3278086, r3278083, r3278085, MPFR_RNDN);
        ;
        mpfr_mul(r3278088, r3278080, r3278087, MPFR_RNDN);
        ;
        mpfr_add(r3278090, r3278088, r3278089, MPFR_RNDN);
        mpfr_add(r3278091, r3278086, r3278090, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3278094, r3278093, r3278080, MPFR_RNDN);
        mpfr_add(r3278095, r3278092, r3278094, MPFR_RNDN);
        mpfr_mul(r3278096, r3278085, r3278095, MPFR_RNDN);
        ;
        mpfr_mul(r3278098, r3278097, r3278080, MPFR_RNDN);
        ;
        mpfr_add(r3278100, r3278098, r3278099, MPFR_RNDN);
        mpfr_mul(r3278101, r3278084, r3278100, MPFR_RNDN);
        mpfr_add(r3278102, r3278096, r3278101, MPFR_RNDN);
        mpfr_add(r3278103, r3278091, r3278102, MPFR_RNDN);
        return mpfr_get_d(r3278103, MPFR_RNDN);
}

static mpfr_t r3278104, r3278105, r3278106, r3278107, r3278108, r3278109, r3278110, r3278111, r3278112, r3278113, r3278114, r3278115, r3278116, r3278117, r3278118, r3278119, r3278120, r3278121, r3278122, r3278123, r3278124, r3278125, r3278126, r3278127;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3278104);
        mpfr_init_set_str(r3278105, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r3278106);
        mpfr_init(r3278107);
        mpfr_init(r3278108);
        mpfr_init(r3278109);
        mpfr_init(r3278110);
        mpfr_init_set_str(r3278111, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r3278112);
        mpfr_init_set_str(r3278113, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3278114);
        mpfr_init(r3278115);
        mpfr_init_set_str(r3278116, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278117, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r3278118);
        mpfr_init(r3278119);
        mpfr_init(r3278120);
        mpfr_init_set_str(r3278121, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r3278122);
        mpfr_init_set_str(r3278123, "7.5", 10, MPFR_RNDN);
        mpfr_init(r3278124);
        mpfr_init(r3278125);
        mpfr_init(r3278126);
        mpfr_init(r3278127);
}

double f_dm(double x) {
        mpfr_set_d(r3278104, x, MPFR_RNDN);
        ;
        mpfr_mul(r3278106, r3278105, r3278104, MPFR_RNDN);
        mpfr_mul(r3278107, r3278104, r3278106, MPFR_RNDN);
        mpfr_mul(r3278108, r3278104, r3278104, MPFR_RNDN);
        mpfr_mul(r3278109, r3278108, r3278108, MPFR_RNDN);
        mpfr_mul(r3278110, r3278107, r3278109, MPFR_RNDN);
        ;
        mpfr_mul(r3278112, r3278104, r3278111, MPFR_RNDN);
        ;
        mpfr_add(r3278114, r3278112, r3278113, MPFR_RNDN);
        mpfr_add(r3278115, r3278110, r3278114, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3278118, r3278117, r3278104, MPFR_RNDN);
        mpfr_add(r3278119, r3278116, r3278118, MPFR_RNDN);
        mpfr_mul(r3278120, r3278109, r3278119, MPFR_RNDN);
        ;
        mpfr_mul(r3278122, r3278121, r3278104, MPFR_RNDN);
        ;
        mpfr_add(r3278124, r3278122, r3278123, MPFR_RNDN);
        mpfr_mul(r3278125, r3278108, r3278124, MPFR_RNDN);
        mpfr_add(r3278126, r3278120, r3278125, MPFR_RNDN);
        mpfr_add(r3278127, r3278115, r3278126, MPFR_RNDN);
        return mpfr_get_d(r3278127, MPFR_RNDN);
}

