#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r11728968 = 1.0;
        float r11728969 = -9.0;
        float r11728970 = x;
        float r11728971 = r11728969 * r11728970;
        float r11728972 = r11728968 + r11728971;
        float r11728973 = 18.0;
        float r11728974 = r11728970 * r11728970;
        float r11728975 = r11728973 * r11728974;
        float r11728976 = r11728972 + r11728975;
        float r11728977 = -14.0;
        float r11728978 = r11728974 * r11728970;
        float r11728979 = r11728977 * r11728978;
        float r11728980 = r11728976 + r11728979;
        float r11728981 = 5.25;
        float r11728982 = r11728978 * r11728970;
        float r11728983 = r11728981 * r11728982;
        float r11728984 = r11728980 + r11728983;
        float r11728985 = -1.05;
        float r11728986 = r11728982 * r11728970;
        float r11728987 = r11728985 * r11728986;
        float r11728988 = r11728984 + r11728987;
        float r11728989 = 0.116667;
        float r11728990 = r11728986 * r11728970;
        float r11728991 = r11728989 * r11728990;
        float r11728992 = r11728988 + r11728991;
        float r11728993 = -0.007143;
        float r11728994 = r11728990 * r11728970;
        float r11728995 = r11728993 * r11728994;
        float r11728996 = r11728992 + r11728995;
        float r11728997 = 0.000223;
        float r11728998 = r11728994 * r11728970;
        float r11728999 = r11728997 * r11728998;
        float r11729000 = r11728996 + r11728999;
        float r11729001 = -3e-06;
        float r11729002 = r11728998 * r11728970;
        float r11729003 = r11729001 * r11729002;
        float r11729004 = r11729000 + r11729003;
        return r11729004;
}

double f_id(double x) {
        double r11729005 = 1.0;
        double r11729006 = -9.0;
        double r11729007 = x;
        double r11729008 = r11729006 * r11729007;
        double r11729009 = r11729005 + r11729008;
        double r11729010 = 18.0;
        double r11729011 = r11729007 * r11729007;
        double r11729012 = r11729010 * r11729011;
        double r11729013 = r11729009 + r11729012;
        double r11729014 = -14.0;
        double r11729015 = r11729011 * r11729007;
        double r11729016 = r11729014 * r11729015;
        double r11729017 = r11729013 + r11729016;
        double r11729018 = 5.25;
        double r11729019 = r11729015 * r11729007;
        double r11729020 = r11729018 * r11729019;
        double r11729021 = r11729017 + r11729020;
        double r11729022 = -1.05;
        double r11729023 = r11729019 * r11729007;
        double r11729024 = r11729022 * r11729023;
        double r11729025 = r11729021 + r11729024;
        double r11729026 = 0.116667;
        double r11729027 = r11729023 * r11729007;
        double r11729028 = r11729026 * r11729027;
        double r11729029 = r11729025 + r11729028;
        double r11729030 = -0.007143;
        double r11729031 = r11729027 * r11729007;
        double r11729032 = r11729030 * r11729031;
        double r11729033 = r11729029 + r11729032;
        double r11729034 = 0.000223;
        double r11729035 = r11729031 * r11729007;
        double r11729036 = r11729034 * r11729035;
        double r11729037 = r11729033 + r11729036;
        double r11729038 = -3e-06;
        double r11729039 = r11729035 * r11729007;
        double r11729040 = r11729038 * r11729039;
        double r11729041 = r11729037 + r11729040;
        return r11729041;
}


double f_of(float x) {
        float r11729042 = 1.0;
        float r11729043 = -9.0;
        float r11729044 = x;
        float r11729045 = r11729043 * r11729044;
        float r11729046 = r11729042 + r11729045;
        float r11729047 = 18.0;
        float r11729048 = r11729044 * r11729044;
        float r11729049 = r11729047 * r11729048;
        float r11729050 = r11729046 + r11729049;
        float r11729051 = -14.0;
        float r11729052 = r11729048 * r11729044;
        float r11729053 = r11729051 * r11729052;
        float r11729054 = r11729050 + r11729053;
        float r11729055 = 5.25;
        float r11729056 = r11729052 * r11729044;
        float r11729057 = r11729055 * r11729056;
        float r11729058 = r11729054 + r11729057;
        float r11729059 = -1.05;
        float r11729060 = r11729056 * r11729044;
        float r11729061 = r11729059 * r11729060;
        float r11729062 = r11729058 + r11729061;
        float r11729063 = 0.116667;
        float r11729064 = r11729060 * r11729044;
        float r11729065 = r11729063 * r11729064;
        float r11729066 = r11729062 + r11729065;
        float r11729067 = -0.007143;
        float r11729068 = r11729064 * r11729044;
        float r11729069 = r11729067 * r11729068;
        float r11729070 = r11729066 + r11729069;
        float r11729071 = 0.000223;
        float r11729072 = r11729068 * r11729044;
        float r11729073 = r11729071 * r11729072;
        float r11729074 = r11729070 + r11729073;
        float r11729075 = -3e-06;
        float r11729076 = r11729072 * r11729044;
        float r11729077 = r11729075 * r11729076;
        float r11729078 = r11729074 + r11729077;
        return r11729078;
}

double f_od(double x) {
        double r11729079 = 1.0;
        double r11729080 = -9.0;
        double r11729081 = x;
        double r11729082 = r11729080 * r11729081;
        double r11729083 = r11729079 + r11729082;
        double r11729084 = 18.0;
        double r11729085 = r11729081 * r11729081;
        double r11729086 = r11729084 * r11729085;
        double r11729087 = r11729083 + r11729086;
        double r11729088 = -14.0;
        double r11729089 = r11729085 * r11729081;
        double r11729090 = r11729088 * r11729089;
        double r11729091 = r11729087 + r11729090;
        double r11729092 = 5.25;
        double r11729093 = r11729089 * r11729081;
        double r11729094 = r11729092 * r11729093;
        double r11729095 = r11729091 + r11729094;
        double r11729096 = -1.05;
        double r11729097 = r11729093 * r11729081;
        double r11729098 = r11729096 * r11729097;
        double r11729099 = r11729095 + r11729098;
        double r11729100 = 0.116667;
        double r11729101 = r11729097 * r11729081;
        double r11729102 = r11729100 * r11729101;
        double r11729103 = r11729099 + r11729102;
        double r11729104 = -0.007143;
        double r11729105 = r11729101 * r11729081;
        double r11729106 = r11729104 * r11729105;
        double r11729107 = r11729103 + r11729106;
        double r11729108 = 0.000223;
        double r11729109 = r11729105 * r11729081;
        double r11729110 = r11729108 * r11729109;
        double r11729111 = r11729107 + r11729110;
        double r11729112 = -3e-06;
        double r11729113 = r11729109 * r11729081;
        double r11729114 = r11729112 * r11729113;
        double r11729115 = r11729111 + r11729114;
        return r11729115;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11729116, r11729117, r11729118, r11729119, r11729120, r11729121, r11729122, r11729123, r11729124, r11729125, r11729126, r11729127, r11729128, r11729129, r11729130, r11729131, r11729132, r11729133, r11729134, r11729135, r11729136, r11729137, r11729138, r11729139, r11729140, r11729141, r11729142, r11729143, r11729144, r11729145, r11729146, r11729147, r11729148, r11729149, r11729150, r11729151, r11729152;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11729116, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729117, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11729118);
        mpfr_init(r11729119);
        mpfr_init(r11729120);
        mpfr_init_set_str(r11729121, "18.0", 10, MPFR_RNDN);
        mpfr_init(r11729122);
        mpfr_init(r11729123);
        mpfr_init(r11729124);
        mpfr_init_set_str(r11729125, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11729126);
        mpfr_init(r11729127);
        mpfr_init(r11729128);
        mpfr_init_set_str(r11729129, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11729130);
        mpfr_init(r11729131);
        mpfr_init(r11729132);
        mpfr_init_set_str(r11729133, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11729134);
        mpfr_init(r11729135);
        mpfr_init(r11729136);
        mpfr_init_set_str(r11729137, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11729138);
        mpfr_init(r11729139);
        mpfr_init(r11729140);
        mpfr_init_set_str(r11729141, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11729142);
        mpfr_init(r11729143);
        mpfr_init(r11729144);
        mpfr_init_set_str(r11729145, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11729146);
        mpfr_init(r11729147);
        mpfr_init(r11729148);
        mpfr_init_set_str(r11729149, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11729150);
        mpfr_init(r11729151);
        mpfr_init(r11729152);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11729118, x, MPFR_RNDN);
        mpfr_mul(r11729119, r11729117, r11729118, MPFR_RNDN);
        mpfr_add(r11729120, r11729116, r11729119, MPFR_RNDN);
        ;
        mpfr_mul(r11729122, r11729118, r11729118, MPFR_RNDN);
        mpfr_mul(r11729123, r11729121, r11729122, MPFR_RNDN);
        mpfr_add(r11729124, r11729120, r11729123, MPFR_RNDN);
        ;
        mpfr_mul(r11729126, r11729122, r11729118, MPFR_RNDN);
        mpfr_mul(r11729127, r11729125, r11729126, MPFR_RNDN);
        mpfr_add(r11729128, r11729124, r11729127, MPFR_RNDN);
        ;
        mpfr_mul(r11729130, r11729126, r11729118, MPFR_RNDN);
        mpfr_mul(r11729131, r11729129, r11729130, MPFR_RNDN);
        mpfr_add(r11729132, r11729128, r11729131, MPFR_RNDN);
        ;
        mpfr_mul(r11729134, r11729130, r11729118, MPFR_RNDN);
        mpfr_mul(r11729135, r11729133, r11729134, MPFR_RNDN);
        mpfr_add(r11729136, r11729132, r11729135, MPFR_RNDN);
        ;
        mpfr_mul(r11729138, r11729134, r11729118, MPFR_RNDN);
        mpfr_mul(r11729139, r11729137, r11729138, MPFR_RNDN);
        mpfr_add(r11729140, r11729136, r11729139, MPFR_RNDN);
        ;
        mpfr_mul(r11729142, r11729138, r11729118, MPFR_RNDN);
        mpfr_mul(r11729143, r11729141, r11729142, MPFR_RNDN);
        mpfr_add(r11729144, r11729140, r11729143, MPFR_RNDN);
        ;
        mpfr_mul(r11729146, r11729142, r11729118, MPFR_RNDN);
        mpfr_mul(r11729147, r11729145, r11729146, MPFR_RNDN);
        mpfr_add(r11729148, r11729144, r11729147, MPFR_RNDN);
        ;
        mpfr_mul(r11729150, r11729146, r11729118, MPFR_RNDN);
        mpfr_mul(r11729151, r11729149, r11729150, MPFR_RNDN);
        mpfr_add(r11729152, r11729148, r11729151, MPFR_RNDN);
        return mpfr_get_d(r11729152, MPFR_RNDN);
}

static mpfr_t r11729153, r11729154, r11729155, r11729156, r11729157, r11729158, r11729159, r11729160, r11729161, r11729162, r11729163, r11729164, r11729165, r11729166, r11729167, r11729168, r11729169, r11729170, r11729171, r11729172, r11729173, r11729174, r11729175, r11729176, r11729177, r11729178, r11729179, r11729180, r11729181, r11729182, r11729183, r11729184, r11729185, r11729186, r11729187, r11729188, r11729189;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11729153, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729154, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11729155);
        mpfr_init(r11729156);
        mpfr_init(r11729157);
        mpfr_init_set_str(r11729158, "18.0", 10, MPFR_RNDN);
        mpfr_init(r11729159);
        mpfr_init(r11729160);
        mpfr_init(r11729161);
        mpfr_init_set_str(r11729162, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11729163);
        mpfr_init(r11729164);
        mpfr_init(r11729165);
        mpfr_init_set_str(r11729166, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11729167);
        mpfr_init(r11729168);
        mpfr_init(r11729169);
        mpfr_init_set_str(r11729170, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11729171);
        mpfr_init(r11729172);
        mpfr_init(r11729173);
        mpfr_init_set_str(r11729174, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11729175);
        mpfr_init(r11729176);
        mpfr_init(r11729177);
        mpfr_init_set_str(r11729178, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11729179);
        mpfr_init(r11729180);
        mpfr_init(r11729181);
        mpfr_init_set_str(r11729182, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11729183);
        mpfr_init(r11729184);
        mpfr_init(r11729185);
        mpfr_init_set_str(r11729186, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11729187);
        mpfr_init(r11729188);
        mpfr_init(r11729189);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11729155, x, MPFR_RNDN);
        mpfr_mul(r11729156, r11729154, r11729155, MPFR_RNDN);
        mpfr_add(r11729157, r11729153, r11729156, MPFR_RNDN);
        ;
        mpfr_mul(r11729159, r11729155, r11729155, MPFR_RNDN);
        mpfr_mul(r11729160, r11729158, r11729159, MPFR_RNDN);
        mpfr_add(r11729161, r11729157, r11729160, MPFR_RNDN);
        ;
        mpfr_mul(r11729163, r11729159, r11729155, MPFR_RNDN);
        mpfr_mul(r11729164, r11729162, r11729163, MPFR_RNDN);
        mpfr_add(r11729165, r11729161, r11729164, MPFR_RNDN);
        ;
        mpfr_mul(r11729167, r11729163, r11729155, MPFR_RNDN);
        mpfr_mul(r11729168, r11729166, r11729167, MPFR_RNDN);
        mpfr_add(r11729169, r11729165, r11729168, MPFR_RNDN);
        ;
        mpfr_mul(r11729171, r11729167, r11729155, MPFR_RNDN);
        mpfr_mul(r11729172, r11729170, r11729171, MPFR_RNDN);
        mpfr_add(r11729173, r11729169, r11729172, MPFR_RNDN);
        ;
        mpfr_mul(r11729175, r11729171, r11729155, MPFR_RNDN);
        mpfr_mul(r11729176, r11729174, r11729175, MPFR_RNDN);
        mpfr_add(r11729177, r11729173, r11729176, MPFR_RNDN);
        ;
        mpfr_mul(r11729179, r11729175, r11729155, MPFR_RNDN);
        mpfr_mul(r11729180, r11729178, r11729179, MPFR_RNDN);
        mpfr_add(r11729181, r11729177, r11729180, MPFR_RNDN);
        ;
        mpfr_mul(r11729183, r11729179, r11729155, MPFR_RNDN);
        mpfr_mul(r11729184, r11729182, r11729183, MPFR_RNDN);
        mpfr_add(r11729185, r11729181, r11729184, MPFR_RNDN);
        ;
        mpfr_mul(r11729187, r11729183, r11729155, MPFR_RNDN);
        mpfr_mul(r11729188, r11729186, r11729187, MPFR_RNDN);
        mpfr_add(r11729189, r11729185, r11729188, MPFR_RNDN);
        return mpfr_get_d(r11729189, MPFR_RNDN);
}

static mpfr_t r11729190, r11729191, r11729192, r11729193, r11729194, r11729195, r11729196, r11729197, r11729198, r11729199, r11729200, r11729201, r11729202, r11729203, r11729204, r11729205, r11729206, r11729207, r11729208, r11729209, r11729210, r11729211, r11729212, r11729213, r11729214, r11729215, r11729216, r11729217, r11729218, r11729219, r11729220, r11729221, r11729222, r11729223, r11729224, r11729225, r11729226;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11729190, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729191, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11729192);
        mpfr_init(r11729193);
        mpfr_init(r11729194);
        mpfr_init_set_str(r11729195, "18.0", 10, MPFR_RNDN);
        mpfr_init(r11729196);
        mpfr_init(r11729197);
        mpfr_init(r11729198);
        mpfr_init_set_str(r11729199, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11729200);
        mpfr_init(r11729201);
        mpfr_init(r11729202);
        mpfr_init_set_str(r11729203, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11729204);
        mpfr_init(r11729205);
        mpfr_init(r11729206);
        mpfr_init_set_str(r11729207, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11729208);
        mpfr_init(r11729209);
        mpfr_init(r11729210);
        mpfr_init_set_str(r11729211, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11729212);
        mpfr_init(r11729213);
        mpfr_init(r11729214);
        mpfr_init_set_str(r11729215, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11729216);
        mpfr_init(r11729217);
        mpfr_init(r11729218);
        mpfr_init_set_str(r11729219, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11729220);
        mpfr_init(r11729221);
        mpfr_init(r11729222);
        mpfr_init_set_str(r11729223, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11729224);
        mpfr_init(r11729225);
        mpfr_init(r11729226);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11729192, x, MPFR_RNDN);
        mpfr_mul(r11729193, r11729191, r11729192, MPFR_RNDN);
        mpfr_add(r11729194, r11729190, r11729193, MPFR_RNDN);
        ;
        mpfr_mul(r11729196, r11729192, r11729192, MPFR_RNDN);
        mpfr_mul(r11729197, r11729195, r11729196, MPFR_RNDN);
        mpfr_add(r11729198, r11729194, r11729197, MPFR_RNDN);
        ;
        mpfr_mul(r11729200, r11729196, r11729192, MPFR_RNDN);
        mpfr_mul(r11729201, r11729199, r11729200, MPFR_RNDN);
        mpfr_add(r11729202, r11729198, r11729201, MPFR_RNDN);
        ;
        mpfr_mul(r11729204, r11729200, r11729192, MPFR_RNDN);
        mpfr_mul(r11729205, r11729203, r11729204, MPFR_RNDN);
        mpfr_add(r11729206, r11729202, r11729205, MPFR_RNDN);
        ;
        mpfr_mul(r11729208, r11729204, r11729192, MPFR_RNDN);
        mpfr_mul(r11729209, r11729207, r11729208, MPFR_RNDN);
        mpfr_add(r11729210, r11729206, r11729209, MPFR_RNDN);
        ;
        mpfr_mul(r11729212, r11729208, r11729192, MPFR_RNDN);
        mpfr_mul(r11729213, r11729211, r11729212, MPFR_RNDN);
        mpfr_add(r11729214, r11729210, r11729213, MPFR_RNDN);
        ;
        mpfr_mul(r11729216, r11729212, r11729192, MPFR_RNDN);
        mpfr_mul(r11729217, r11729215, r11729216, MPFR_RNDN);
        mpfr_add(r11729218, r11729214, r11729217, MPFR_RNDN);
        ;
        mpfr_mul(r11729220, r11729216, r11729192, MPFR_RNDN);
        mpfr_mul(r11729221, r11729219, r11729220, MPFR_RNDN);
        mpfr_add(r11729222, r11729218, r11729221, MPFR_RNDN);
        ;
        mpfr_mul(r11729224, r11729220, r11729192, MPFR_RNDN);
        mpfr_mul(r11729225, r11729223, r11729224, MPFR_RNDN);
        mpfr_add(r11729226, r11729222, r11729225, MPFR_RNDN);
        return mpfr_get_d(r11729226, MPFR_RNDN);
}

