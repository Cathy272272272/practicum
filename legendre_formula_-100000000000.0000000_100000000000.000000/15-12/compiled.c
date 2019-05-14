#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r6766954 = 0.225586;
        float r6766955 = -17.595703;
        float r6766956 = x;
        float r6766957 = r6766956 * r6766956;
        float r6766958 = r6766955 * r6766957;
        float r6766959 = r6766954 + r6766958;
        float r6766960 = 219.946289;
        float r6766961 = r6766957 * r6766956;
        float r6766962 = r6766961 * r6766956;
        float r6766963 = r6766960 * r6766962;
        float r6766964 = r6766959 + r6766963;
        float r6766965 = -997.089844;
        float r6766966 = r6766962 * r6766956;
        float r6766967 = r6766966 * r6766956;
        float r6766968 = r6766965 * r6766967;
        float r6766969 = r6766964 + r6766968;
        float r6766970 = 2029.790039;
        float r6766971 = r6766967 * r6766956;
        float r6766972 = r6766971 * r6766956;
        float r6766973 = r6766970 * r6766972;
        float r6766974 = r6766969 + r6766973;
        float r6766975 = -1894.470703;
        float r6766976 = r6766972 * r6766956;
        float r6766977 = r6766976 * r6766956;
        float r6766978 = r6766975 * r6766977;
        float r6766979 = r6766974 + r6766978;
        float r6766980 = 660.194336;
        float r6766981 = r6766977 * r6766956;
        float r6766982 = r6766981 * r6766956;
        float r6766983 = r6766980 * r6766982;
        float r6766984 = r6766979 + r6766983;
        return r6766984;
}

double f_id(double x) {
        double r6766985 = 0.225586;
        double r6766986 = -17.595703;
        double r6766987 = x;
        double r6766988 = r6766987 * r6766987;
        double r6766989 = r6766986 * r6766988;
        double r6766990 = r6766985 + r6766989;
        double r6766991 = 219.946289;
        double r6766992 = r6766988 * r6766987;
        double r6766993 = r6766992 * r6766987;
        double r6766994 = r6766991 * r6766993;
        double r6766995 = r6766990 + r6766994;
        double r6766996 = -997.089844;
        double r6766997 = r6766993 * r6766987;
        double r6766998 = r6766997 * r6766987;
        double r6766999 = r6766996 * r6766998;
        double r6767000 = r6766995 + r6766999;
        double r6767001 = 2029.790039;
        double r6767002 = r6766998 * r6766987;
        double r6767003 = r6767002 * r6766987;
        double r6767004 = r6767001 * r6767003;
        double r6767005 = r6767000 + r6767004;
        double r6767006 = -1894.470703;
        double r6767007 = r6767003 * r6766987;
        double r6767008 = r6767007 * r6766987;
        double r6767009 = r6767006 * r6767008;
        double r6767010 = r6767005 + r6767009;
        double r6767011 = 660.194336;
        double r6767012 = r6767008 * r6766987;
        double r6767013 = r6767012 * r6766987;
        double r6767014 = r6767011 * r6767013;
        double r6767015 = r6767010 + r6767014;
        return r6767015;
}


double f_of(float x) {
        float r6767016 = 2029.790039;
        float r6767017 = x;
        float r6767018 = r6767016 * r6767017;
        float r6767019 = r6767018 * r6767017;
        float r6767020 = r6767017 * r6767017;
        float r6767021 = 3;
        float r6767022 = pow(r6767020, r6767021);
        float r6767023 = r6767019 * r6767022;
        float r6767024 = 2;
        float r6767025 = r6767024 * r6767021;
        float r6767026 = pow(r6767017, r6767025);
        float r6767027 = r6767020 * r6767020;
        float r6767028 = r6767026 * r6767027;
        float r6767029 = 660.194336;
        float r6767030 = r6767029 * r6767017;
        float r6767031 = r6767017 * r6767030;
        float r6767032 = -1894.470703;
        float r6767033 = r6767031 + r6767032;
        float r6767034 = r6767028 * r6767033;
        float r6767035 = r6767023 + r6767034;
        float r6767036 = -997.089844;
        float r6767037 = r6767020 * r6767036;
        float r6767038 = 219.946289;
        float r6767039 = r6767037 + r6767038;
        float r6767040 = r6767027 * r6767039;
        float r6767041 = -17.595703;
        float r6767042 = r6767017 * r6767041;
        float r6767043 = r6767042 * r6767017;
        float r6767044 = 0.225586;
        float r6767045 = r6767043 + r6767044;
        float r6767046 = r6767040 + r6767045;
        float r6767047 = r6767035 + r6767046;
        return r6767047;
}

double f_od(double x) {
        double r6767048 = 2029.790039;
        double r6767049 = x;
        double r6767050 = r6767048 * r6767049;
        double r6767051 = r6767050 * r6767049;
        double r6767052 = r6767049 * r6767049;
        double r6767053 = 3;
        double r6767054 = pow(r6767052, r6767053);
        double r6767055 = r6767051 * r6767054;
        double r6767056 = 2;
        double r6767057 = r6767056 * r6767053;
        double r6767058 = pow(r6767049, r6767057);
        double r6767059 = r6767052 * r6767052;
        double r6767060 = r6767058 * r6767059;
        double r6767061 = 660.194336;
        double r6767062 = r6767061 * r6767049;
        double r6767063 = r6767049 * r6767062;
        double r6767064 = -1894.470703;
        double r6767065 = r6767063 + r6767064;
        double r6767066 = r6767060 * r6767065;
        double r6767067 = r6767055 + r6767066;
        double r6767068 = -997.089844;
        double r6767069 = r6767052 * r6767068;
        double r6767070 = 219.946289;
        double r6767071 = r6767069 + r6767070;
        double r6767072 = r6767059 * r6767071;
        double r6767073 = -17.595703;
        double r6767074 = r6767049 * r6767073;
        double r6767075 = r6767074 * r6767049;
        double r6767076 = 0.225586;
        double r6767077 = r6767075 + r6767076;
        double r6767078 = r6767072 + r6767077;
        double r6767079 = r6767067 + r6767078;
        return r6767079;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6767080, r6767081, r6767082, r6767083, r6767084, r6767085, r6767086, r6767087, r6767088, r6767089, r6767090, r6767091, r6767092, r6767093, r6767094, r6767095, r6767096, r6767097, r6767098, r6767099, r6767100, r6767101, r6767102, r6767103, r6767104, r6767105, r6767106, r6767107, r6767108, r6767109, r6767110;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6767080, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r6767081, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6767082);
        mpfr_init(r6767083);
        mpfr_init(r6767084);
        mpfr_init(r6767085);
        mpfr_init_set_str(r6767086, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6767087);
        mpfr_init(r6767088);
        mpfr_init(r6767089);
        mpfr_init(r6767090);
        mpfr_init_set_str(r6767091, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6767092);
        mpfr_init(r6767093);
        mpfr_init(r6767094);
        mpfr_init(r6767095);
        mpfr_init_set_str(r6767096, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6767097);
        mpfr_init(r6767098);
        mpfr_init(r6767099);
        mpfr_init(r6767100);
        mpfr_init_set_str(r6767101, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6767102);
        mpfr_init(r6767103);
        mpfr_init(r6767104);
        mpfr_init(r6767105);
        mpfr_init_set_str(r6767106, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6767107);
        mpfr_init(r6767108);
        mpfr_init(r6767109);
        mpfr_init(r6767110);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6767082, x, MPFR_RNDN);
        mpfr_mul(r6767083, r6767082, r6767082, MPFR_RNDN);
        mpfr_mul(r6767084, r6767081, r6767083, MPFR_RNDN);
        mpfr_add(r6767085, r6767080, r6767084, MPFR_RNDN);
        ;
        mpfr_mul(r6767087, r6767083, r6767082, MPFR_RNDN);
        mpfr_mul(r6767088, r6767087, r6767082, MPFR_RNDN);
        mpfr_mul(r6767089, r6767086, r6767088, MPFR_RNDN);
        mpfr_add(r6767090, r6767085, r6767089, MPFR_RNDN);
        ;
        mpfr_mul(r6767092, r6767088, r6767082, MPFR_RNDN);
        mpfr_mul(r6767093, r6767092, r6767082, MPFR_RNDN);
        mpfr_mul(r6767094, r6767091, r6767093, MPFR_RNDN);
        mpfr_add(r6767095, r6767090, r6767094, MPFR_RNDN);
        ;
        mpfr_mul(r6767097, r6767093, r6767082, MPFR_RNDN);
        mpfr_mul(r6767098, r6767097, r6767082, MPFR_RNDN);
        mpfr_mul(r6767099, r6767096, r6767098, MPFR_RNDN);
        mpfr_add(r6767100, r6767095, r6767099, MPFR_RNDN);
        ;
        mpfr_mul(r6767102, r6767098, r6767082, MPFR_RNDN);
        mpfr_mul(r6767103, r6767102, r6767082, MPFR_RNDN);
        mpfr_mul(r6767104, r6767101, r6767103, MPFR_RNDN);
        mpfr_add(r6767105, r6767100, r6767104, MPFR_RNDN);
        ;
        mpfr_mul(r6767107, r6767103, r6767082, MPFR_RNDN);
        mpfr_mul(r6767108, r6767107, r6767082, MPFR_RNDN);
        mpfr_mul(r6767109, r6767106, r6767108, MPFR_RNDN);
        mpfr_add(r6767110, r6767105, r6767109, MPFR_RNDN);
        return mpfr_get_d(r6767110, MPFR_RNDN);
}

static mpfr_t r6767111, r6767112, r6767113, r6767114, r6767115, r6767116, r6767117, r6767118, r6767119, r6767120, r6767121, r6767122, r6767123, r6767124, r6767125, r6767126, r6767127, r6767128, r6767129, r6767130, r6767131, r6767132, r6767133, r6767134, r6767135, r6767136, r6767137, r6767138, r6767139, r6767140, r6767141, r6767142;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6767111, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6767112);
        mpfr_init(r6767113);
        mpfr_init(r6767114);
        mpfr_init(r6767115);
        mpfr_init_set_str(r6767116, "3", 10, MPFR_RNDN);
        mpfr_init(r6767117);
        mpfr_init(r6767118);
        mpfr_init_set_str(r6767119, "2", 10, MPFR_RNDN);
        mpfr_init(r6767120);
        mpfr_init(r6767121);
        mpfr_init(r6767122);
        mpfr_init(r6767123);
        mpfr_init_set_str(r6767124, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6767125);
        mpfr_init(r6767126);
        mpfr_init_set_str(r6767127, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6767128);
        mpfr_init(r6767129);
        mpfr_init(r6767130);
        mpfr_init_set_str(r6767131, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6767132);
        mpfr_init_set_str(r6767133, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6767134);
        mpfr_init(r6767135);
        mpfr_init_set_str(r6767136, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6767137);
        mpfr_init(r6767138);
        mpfr_init_set_str(r6767139, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r6767140);
        mpfr_init(r6767141);
        mpfr_init(r6767142);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6767112, x, MPFR_RNDN);
        mpfr_mul(r6767113, r6767111, r6767112, MPFR_RNDN);
        mpfr_mul(r6767114, r6767113, r6767112, MPFR_RNDN);
        mpfr_mul(r6767115, r6767112, r6767112, MPFR_RNDN);
        ;
        mpfr_pow(r6767117, r6767115, r6767116, MPFR_RNDN);
        mpfr_mul(r6767118, r6767114, r6767117, MPFR_RNDN);
        ;
        mpfr_mul(r6767120, r6767119, r6767116, MPFR_RNDN);
        mpfr_pow(r6767121, r6767112, r6767120, MPFR_RNDN);
        mpfr_mul(r6767122, r6767115, r6767115, MPFR_RNDN);
        mpfr_mul(r6767123, r6767121, r6767122, MPFR_RNDN);
        ;
        mpfr_mul(r6767125, r6767124, r6767112, MPFR_RNDN);
        mpfr_mul(r6767126, r6767112, r6767125, MPFR_RNDN);
        ;
        mpfr_add(r6767128, r6767126, r6767127, MPFR_RNDN);
        mpfr_mul(r6767129, r6767123, r6767128, MPFR_RNDN);
        mpfr_add(r6767130, r6767118, r6767129, MPFR_RNDN);
        ;
        mpfr_mul(r6767132, r6767115, r6767131, MPFR_RNDN);
        ;
        mpfr_add(r6767134, r6767132, r6767133, MPFR_RNDN);
        mpfr_mul(r6767135, r6767122, r6767134, MPFR_RNDN);
        ;
        mpfr_mul(r6767137, r6767112, r6767136, MPFR_RNDN);
        mpfr_mul(r6767138, r6767137, r6767112, MPFR_RNDN);
        ;
        mpfr_add(r6767140, r6767138, r6767139, MPFR_RNDN);
        mpfr_add(r6767141, r6767135, r6767140, MPFR_RNDN);
        mpfr_add(r6767142, r6767130, r6767141, MPFR_RNDN);
        return mpfr_get_d(r6767142, MPFR_RNDN);
}

static mpfr_t r6767143, r6767144, r6767145, r6767146, r6767147, r6767148, r6767149, r6767150, r6767151, r6767152, r6767153, r6767154, r6767155, r6767156, r6767157, r6767158, r6767159, r6767160, r6767161, r6767162, r6767163, r6767164, r6767165, r6767166, r6767167, r6767168, r6767169, r6767170, r6767171, r6767172, r6767173, r6767174;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6767143, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r6767144);
        mpfr_init(r6767145);
        mpfr_init(r6767146);
        mpfr_init(r6767147);
        mpfr_init_set_str(r6767148, "3", 10, MPFR_RNDN);
        mpfr_init(r6767149);
        mpfr_init(r6767150);
        mpfr_init_set_str(r6767151, "2", 10, MPFR_RNDN);
        mpfr_init(r6767152);
        mpfr_init(r6767153);
        mpfr_init(r6767154);
        mpfr_init(r6767155);
        mpfr_init_set_str(r6767156, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r6767157);
        mpfr_init(r6767158);
        mpfr_init_set_str(r6767159, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r6767160);
        mpfr_init(r6767161);
        mpfr_init(r6767162);
        mpfr_init_set_str(r6767163, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r6767164);
        mpfr_init_set_str(r6767165, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r6767166);
        mpfr_init(r6767167);
        mpfr_init_set_str(r6767168, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r6767169);
        mpfr_init(r6767170);
        mpfr_init_set_str(r6767171, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r6767172);
        mpfr_init(r6767173);
        mpfr_init(r6767174);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6767144, x, MPFR_RNDN);
        mpfr_mul(r6767145, r6767143, r6767144, MPFR_RNDN);
        mpfr_mul(r6767146, r6767145, r6767144, MPFR_RNDN);
        mpfr_mul(r6767147, r6767144, r6767144, MPFR_RNDN);
        ;
        mpfr_pow(r6767149, r6767147, r6767148, MPFR_RNDN);
        mpfr_mul(r6767150, r6767146, r6767149, MPFR_RNDN);
        ;
        mpfr_mul(r6767152, r6767151, r6767148, MPFR_RNDN);
        mpfr_pow(r6767153, r6767144, r6767152, MPFR_RNDN);
        mpfr_mul(r6767154, r6767147, r6767147, MPFR_RNDN);
        mpfr_mul(r6767155, r6767153, r6767154, MPFR_RNDN);
        ;
        mpfr_mul(r6767157, r6767156, r6767144, MPFR_RNDN);
        mpfr_mul(r6767158, r6767144, r6767157, MPFR_RNDN);
        ;
        mpfr_add(r6767160, r6767158, r6767159, MPFR_RNDN);
        mpfr_mul(r6767161, r6767155, r6767160, MPFR_RNDN);
        mpfr_add(r6767162, r6767150, r6767161, MPFR_RNDN);
        ;
        mpfr_mul(r6767164, r6767147, r6767163, MPFR_RNDN);
        ;
        mpfr_add(r6767166, r6767164, r6767165, MPFR_RNDN);
        mpfr_mul(r6767167, r6767154, r6767166, MPFR_RNDN);
        ;
        mpfr_mul(r6767169, r6767144, r6767168, MPFR_RNDN);
        mpfr_mul(r6767170, r6767169, r6767144, MPFR_RNDN);
        ;
        mpfr_add(r6767172, r6767170, r6767171, MPFR_RNDN);
        mpfr_add(r6767173, r6767167, r6767172, MPFR_RNDN);
        mpfr_add(r6767174, r6767162, r6767173, MPFR_RNDN);
        return mpfr_get_d(r6767174, MPFR_RNDN);
}

