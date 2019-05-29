#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r10923988 = 1.0;
        float r10923989 = -12.0;
        float r10923990 = x;
        float r10923991 = r10923989 * r10923990;
        float r10923992 = r10923988 + r10923991;
        float r10923993 = 33.0;
        float r10923994 = r10923990 * r10923990;
        float r10923995 = r10923993 * r10923994;
        float r10923996 = r10923992 + r10923995;
        float r10923997 = -36.666667;
        float r10923998 = r10923994 * r10923990;
        float r10923999 = r10923997 * r10923998;
        float r10924000 = r10923996 + r10923999;
        float r10924001 = 20.625;
        float r10924002 = r10923998 * r10923990;
        float r10924003 = r10924001 * r10924002;
        float r10924004 = r10924000 + r10924003;
        float r10924005 = -6.6;
        float r10924006 = r10924002 * r10923990;
        float r10924007 = r10924005 * r10924006;
        float r10924008 = r10924004 + r10924007;
        float r10924009 = 1.283333;
        float r10924010 = r10924006 * r10923990;
        float r10924011 = r10924009 * r10924010;
        float r10924012 = r10924008 + r10924011;
        float r10924013 = -0.157143;
        float r10924014 = r10924010 * r10923990;
        float r10924015 = r10924013 * r10924014;
        float r10924016 = r10924012 + r10924015;
        float r10924017 = 0.012277;
        float r10924018 = r10924014 * r10923990;
        float r10924019 = r10924017 * r10924018;
        float r10924020 = r10924016 + r10924019;
        float r10924021 = -0.000606;
        float r10924022 = r10924018 * r10923990;
        float r10924023 = r10924021 * r10924022;
        float r10924024 = r10924020 + r10924023;
        float r10924025 = 1.8e-05;
        float r10924026 = r10924022 * r10923990;
        float r10924027 = r10924025 * r10924026;
        float r10924028 = r10924024 + r10924027;
        return r10924028;
}

double f_id(double x) {
        double r10924029 = 1.0;
        double r10924030 = -12.0;
        double r10924031 = x;
        double r10924032 = r10924030 * r10924031;
        double r10924033 = r10924029 + r10924032;
        double r10924034 = 33.0;
        double r10924035 = r10924031 * r10924031;
        double r10924036 = r10924034 * r10924035;
        double r10924037 = r10924033 + r10924036;
        double r10924038 = -36.666667;
        double r10924039 = r10924035 * r10924031;
        double r10924040 = r10924038 * r10924039;
        double r10924041 = r10924037 + r10924040;
        double r10924042 = 20.625;
        double r10924043 = r10924039 * r10924031;
        double r10924044 = r10924042 * r10924043;
        double r10924045 = r10924041 + r10924044;
        double r10924046 = -6.6;
        double r10924047 = r10924043 * r10924031;
        double r10924048 = r10924046 * r10924047;
        double r10924049 = r10924045 + r10924048;
        double r10924050 = 1.283333;
        double r10924051 = r10924047 * r10924031;
        double r10924052 = r10924050 * r10924051;
        double r10924053 = r10924049 + r10924052;
        double r10924054 = -0.157143;
        double r10924055 = r10924051 * r10924031;
        double r10924056 = r10924054 * r10924055;
        double r10924057 = r10924053 + r10924056;
        double r10924058 = 0.012277;
        double r10924059 = r10924055 * r10924031;
        double r10924060 = r10924058 * r10924059;
        double r10924061 = r10924057 + r10924060;
        double r10924062 = -0.000606;
        double r10924063 = r10924059 * r10924031;
        double r10924064 = r10924062 * r10924063;
        double r10924065 = r10924061 + r10924064;
        double r10924066 = 1.8e-05;
        double r10924067 = r10924063 * r10924031;
        double r10924068 = r10924066 * r10924067;
        double r10924069 = r10924065 + r10924068;
        return r10924069;
}


double f_of(float x) {
        float r10924070 = x;
        float r10924071 = r10924070 * r10924070;
        float r10924072 = 3;
        float r10924073 = pow(r10924071, r10924072);
        float r10924074 = 1.283333;
        float r10924075 = -0.157143;
        float r10924076 = r10924075 * r10924070;
        float r10924077 = r10924074 + r10924076;
        float r10924078 = r10924073 * r10924077;
        float r10924079 = -12.0;
        float r10924080 = r10924070 * r10924079;
        float r10924081 = 1.0;
        float r10924082 = r10924080 + r10924081;
        float r10924083 = r10924078 + r10924082;
        float r10924084 = r10924071 * r10924071;
        float r10924085 = 20.625;
        float r10924086 = -6.6;
        float r10924087 = r10924070 * r10924086;
        float r10924088 = r10924085 + r10924087;
        float r10924089 = r10924084 * r10924088;
        float r10924090 = 33.0;
        float r10924091 = -36.666667;
        float r10924092 = r10924091 * r10924070;
        float r10924093 = r10924090 + r10924092;
        float r10924094 = r10924071 * r10924093;
        float r10924095 = r10924089 + r10924094;
        float r10924096 = r10924083 + r10924095;
        float r10924097 = r10924084 * r10924084;
        float r10924098 = 0.012277;
        float r10924099 = -0.000606;
        float r10924100 = r10924099 * r10924070;
        float r10924101 = r10924098 + r10924100;
        float r10924102 = r10924097 * r10924101;
        float r10924103 = 1.8e-05;
        float r10924104 = r10924103 * r10924070;
        float r10924105 = r10924070 * r10924104;
        float r10924106 = exp(r10924105);
        float r10924107 = log(r10924106);
        float r10924108 = r10924107 * r10924097;
        float r10924109 = r10924102 + r10924108;
        float r10924110 = r10924096 + r10924109;
        return r10924110;
}

double f_od(double x) {
        double r10924111 = x;
        double r10924112 = r10924111 * r10924111;
        double r10924113 = 3;
        double r10924114 = pow(r10924112, r10924113);
        double r10924115 = 1.283333;
        double r10924116 = -0.157143;
        double r10924117 = r10924116 * r10924111;
        double r10924118 = r10924115 + r10924117;
        double r10924119 = r10924114 * r10924118;
        double r10924120 = -12.0;
        double r10924121 = r10924111 * r10924120;
        double r10924122 = 1.0;
        double r10924123 = r10924121 + r10924122;
        double r10924124 = r10924119 + r10924123;
        double r10924125 = r10924112 * r10924112;
        double r10924126 = 20.625;
        double r10924127 = -6.6;
        double r10924128 = r10924111 * r10924127;
        double r10924129 = r10924126 + r10924128;
        double r10924130 = r10924125 * r10924129;
        double r10924131 = 33.0;
        double r10924132 = -36.666667;
        double r10924133 = r10924132 * r10924111;
        double r10924134 = r10924131 + r10924133;
        double r10924135 = r10924112 * r10924134;
        double r10924136 = r10924130 + r10924135;
        double r10924137 = r10924124 + r10924136;
        double r10924138 = r10924125 * r10924125;
        double r10924139 = 0.012277;
        double r10924140 = -0.000606;
        double r10924141 = r10924140 * r10924111;
        double r10924142 = r10924139 + r10924141;
        double r10924143 = r10924138 * r10924142;
        double r10924144 = 1.8e-05;
        double r10924145 = r10924144 * r10924111;
        double r10924146 = r10924111 * r10924145;
        double r10924147 = exp(r10924146);
        double r10924148 = log(r10924147);
        double r10924149 = r10924148 * r10924138;
        double r10924150 = r10924143 + r10924149;
        double r10924151 = r10924137 + r10924150;
        return r10924151;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10924152, r10924153, r10924154, r10924155, r10924156, r10924157, r10924158, r10924159, r10924160, r10924161, r10924162, r10924163, r10924164, r10924165, r10924166, r10924167, r10924168, r10924169, r10924170, r10924171, r10924172, r10924173, r10924174, r10924175, r10924176, r10924177, r10924178, r10924179, r10924180, r10924181, r10924182, r10924183, r10924184, r10924185, r10924186, r10924187, r10924188, r10924189, r10924190, r10924191, r10924192;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10924152, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924153, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r10924154);
        mpfr_init(r10924155);
        mpfr_init(r10924156);
        mpfr_init_set_str(r10924157, "33.0", 10, MPFR_RNDN);
        mpfr_init(r10924158);
        mpfr_init(r10924159);
        mpfr_init(r10924160);
        mpfr_init_set_str(r10924161, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r10924162);
        mpfr_init(r10924163);
        mpfr_init(r10924164);
        mpfr_init_set_str(r10924165, "20.625", 10, MPFR_RNDN);
        mpfr_init(r10924166);
        mpfr_init(r10924167);
        mpfr_init(r10924168);
        mpfr_init_set_str(r10924169, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r10924170);
        mpfr_init(r10924171);
        mpfr_init(r10924172);
        mpfr_init_set_str(r10924173, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r10924174);
        mpfr_init(r10924175);
        mpfr_init(r10924176);
        mpfr_init_set_str(r10924177, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r10924178);
        mpfr_init(r10924179);
        mpfr_init(r10924180);
        mpfr_init_set_str(r10924181, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r10924182);
        mpfr_init(r10924183);
        mpfr_init(r10924184);
        mpfr_init_set_str(r10924185, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r10924186);
        mpfr_init(r10924187);
        mpfr_init(r10924188);
        mpfr_init_set_str(r10924189, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10924190);
        mpfr_init(r10924191);
        mpfr_init(r10924192);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10924154, x, MPFR_RNDN);
        mpfr_mul(r10924155, r10924153, r10924154, MPFR_RNDN);
        mpfr_add(r10924156, r10924152, r10924155, MPFR_RNDN);
        ;
        mpfr_mul(r10924158, r10924154, r10924154, MPFR_RNDN);
        mpfr_mul(r10924159, r10924157, r10924158, MPFR_RNDN);
        mpfr_add(r10924160, r10924156, r10924159, MPFR_RNDN);
        ;
        mpfr_mul(r10924162, r10924158, r10924154, MPFR_RNDN);
        mpfr_mul(r10924163, r10924161, r10924162, MPFR_RNDN);
        mpfr_add(r10924164, r10924160, r10924163, MPFR_RNDN);
        ;
        mpfr_mul(r10924166, r10924162, r10924154, MPFR_RNDN);
        mpfr_mul(r10924167, r10924165, r10924166, MPFR_RNDN);
        mpfr_add(r10924168, r10924164, r10924167, MPFR_RNDN);
        ;
        mpfr_mul(r10924170, r10924166, r10924154, MPFR_RNDN);
        mpfr_mul(r10924171, r10924169, r10924170, MPFR_RNDN);
        mpfr_add(r10924172, r10924168, r10924171, MPFR_RNDN);
        ;
        mpfr_mul(r10924174, r10924170, r10924154, MPFR_RNDN);
        mpfr_mul(r10924175, r10924173, r10924174, MPFR_RNDN);
        mpfr_add(r10924176, r10924172, r10924175, MPFR_RNDN);
        ;
        mpfr_mul(r10924178, r10924174, r10924154, MPFR_RNDN);
        mpfr_mul(r10924179, r10924177, r10924178, MPFR_RNDN);
        mpfr_add(r10924180, r10924176, r10924179, MPFR_RNDN);
        ;
        mpfr_mul(r10924182, r10924178, r10924154, MPFR_RNDN);
        mpfr_mul(r10924183, r10924181, r10924182, MPFR_RNDN);
        mpfr_add(r10924184, r10924180, r10924183, MPFR_RNDN);
        ;
        mpfr_mul(r10924186, r10924182, r10924154, MPFR_RNDN);
        mpfr_mul(r10924187, r10924185, r10924186, MPFR_RNDN);
        mpfr_add(r10924188, r10924184, r10924187, MPFR_RNDN);
        ;
        mpfr_mul(r10924190, r10924186, r10924154, MPFR_RNDN);
        mpfr_mul(r10924191, r10924189, r10924190, MPFR_RNDN);
        mpfr_add(r10924192, r10924188, r10924191, MPFR_RNDN);
        return mpfr_get_d(r10924192, MPFR_RNDN);
}

static mpfr_t r10924193, r10924194, r10924195, r10924196, r10924197, r10924198, r10924199, r10924200, r10924201, r10924202, r10924203, r10924204, r10924205, r10924206, r10924207, r10924208, r10924209, r10924210, r10924211, r10924212, r10924213, r10924214, r10924215, r10924216, r10924217, r10924218, r10924219, r10924220, r10924221, r10924222, r10924223, r10924224, r10924225, r10924226, r10924227, r10924228, r10924229, r10924230, r10924231, r10924232, r10924233;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10924193);
        mpfr_init(r10924194);
        mpfr_init_set_str(r10924195, "3", 10, MPFR_RNDN);
        mpfr_init(r10924196);
        mpfr_init_set_str(r10924197, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924198, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r10924199);
        mpfr_init(r10924200);
        mpfr_init(r10924201);
        mpfr_init_set_str(r10924202, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r10924203);
        mpfr_init_set_str(r10924204, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10924205);
        mpfr_init(r10924206);
        mpfr_init(r10924207);
        mpfr_init_set_str(r10924208, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924209, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r10924210);
        mpfr_init(r10924211);
        mpfr_init(r10924212);
        mpfr_init_set_str(r10924213, "33.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924214, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r10924215);
        mpfr_init(r10924216);
        mpfr_init(r10924217);
        mpfr_init(r10924218);
        mpfr_init(r10924219);
        mpfr_init(r10924220);
        mpfr_init_set_str(r10924221, "0.012277", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924222, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r10924223);
        mpfr_init(r10924224);
        mpfr_init(r10924225);
        mpfr_init_set_str(r10924226, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10924227);
        mpfr_init(r10924228);
        mpfr_init(r10924229);
        mpfr_init(r10924230);
        mpfr_init(r10924231);
        mpfr_init(r10924232);
        mpfr_init(r10924233);
}

double f_fm(double x) {
        mpfr_set_d(r10924193, x, MPFR_RNDN);
        mpfr_mul(r10924194, r10924193, r10924193, MPFR_RNDN);
        ;
        mpfr_pow(r10924196, r10924194, r10924195, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924199, r10924198, r10924193, MPFR_RNDN);
        mpfr_add(r10924200, r10924197, r10924199, MPFR_RNDN);
        mpfr_mul(r10924201, r10924196, r10924200, MPFR_RNDN);
        ;
        mpfr_mul(r10924203, r10924193, r10924202, MPFR_RNDN);
        ;
        mpfr_add(r10924205, r10924203, r10924204, MPFR_RNDN);
        mpfr_add(r10924206, r10924201, r10924205, MPFR_RNDN);
        mpfr_mul(r10924207, r10924194, r10924194, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924210, r10924193, r10924209, MPFR_RNDN);
        mpfr_add(r10924211, r10924208, r10924210, MPFR_RNDN);
        mpfr_mul(r10924212, r10924207, r10924211, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924215, r10924214, r10924193, MPFR_RNDN);
        mpfr_add(r10924216, r10924213, r10924215, MPFR_RNDN);
        mpfr_mul(r10924217, r10924194, r10924216, MPFR_RNDN);
        mpfr_add(r10924218, r10924212, r10924217, MPFR_RNDN);
        mpfr_add(r10924219, r10924206, r10924218, MPFR_RNDN);
        mpfr_mul(r10924220, r10924207, r10924207, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924223, r10924222, r10924193, MPFR_RNDN);
        mpfr_add(r10924224, r10924221, r10924223, MPFR_RNDN);
        mpfr_mul(r10924225, r10924220, r10924224, MPFR_RNDN);
        ;
        mpfr_mul(r10924227, r10924226, r10924193, MPFR_RNDN);
        mpfr_mul(r10924228, r10924193, r10924227, MPFR_RNDN);
        mpfr_exp(r10924229, r10924228, MPFR_RNDN);
        mpfr_log(r10924230, r10924229, MPFR_RNDN);
        mpfr_mul(r10924231, r10924230, r10924220, MPFR_RNDN);
        mpfr_add(r10924232, r10924225, r10924231, MPFR_RNDN);
        mpfr_add(r10924233, r10924219, r10924232, MPFR_RNDN);
        return mpfr_get_d(r10924233, MPFR_RNDN);
}

static mpfr_t r10924234, r10924235, r10924236, r10924237, r10924238, r10924239, r10924240, r10924241, r10924242, r10924243, r10924244, r10924245, r10924246, r10924247, r10924248, r10924249, r10924250, r10924251, r10924252, r10924253, r10924254, r10924255, r10924256, r10924257, r10924258, r10924259, r10924260, r10924261, r10924262, r10924263, r10924264, r10924265, r10924266, r10924267, r10924268, r10924269, r10924270, r10924271, r10924272, r10924273, r10924274;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10924234);
        mpfr_init(r10924235);
        mpfr_init_set_str(r10924236, "3", 10, MPFR_RNDN);
        mpfr_init(r10924237);
        mpfr_init_set_str(r10924238, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924239, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r10924240);
        mpfr_init(r10924241);
        mpfr_init(r10924242);
        mpfr_init_set_str(r10924243, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r10924244);
        mpfr_init_set_str(r10924245, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10924246);
        mpfr_init(r10924247);
        mpfr_init(r10924248);
        mpfr_init_set_str(r10924249, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924250, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r10924251);
        mpfr_init(r10924252);
        mpfr_init(r10924253);
        mpfr_init_set_str(r10924254, "33.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924255, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r10924256);
        mpfr_init(r10924257);
        mpfr_init(r10924258);
        mpfr_init(r10924259);
        mpfr_init(r10924260);
        mpfr_init(r10924261);
        mpfr_init_set_str(r10924262, "0.012277", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924263, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r10924264);
        mpfr_init(r10924265);
        mpfr_init(r10924266);
        mpfr_init_set_str(r10924267, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10924268);
        mpfr_init(r10924269);
        mpfr_init(r10924270);
        mpfr_init(r10924271);
        mpfr_init(r10924272);
        mpfr_init(r10924273);
        mpfr_init(r10924274);
}

double f_dm(double x) {
        mpfr_set_d(r10924234, x, MPFR_RNDN);
        mpfr_mul(r10924235, r10924234, r10924234, MPFR_RNDN);
        ;
        mpfr_pow(r10924237, r10924235, r10924236, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924240, r10924239, r10924234, MPFR_RNDN);
        mpfr_add(r10924241, r10924238, r10924240, MPFR_RNDN);
        mpfr_mul(r10924242, r10924237, r10924241, MPFR_RNDN);
        ;
        mpfr_mul(r10924244, r10924234, r10924243, MPFR_RNDN);
        ;
        mpfr_add(r10924246, r10924244, r10924245, MPFR_RNDN);
        mpfr_add(r10924247, r10924242, r10924246, MPFR_RNDN);
        mpfr_mul(r10924248, r10924235, r10924235, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924251, r10924234, r10924250, MPFR_RNDN);
        mpfr_add(r10924252, r10924249, r10924251, MPFR_RNDN);
        mpfr_mul(r10924253, r10924248, r10924252, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924256, r10924255, r10924234, MPFR_RNDN);
        mpfr_add(r10924257, r10924254, r10924256, MPFR_RNDN);
        mpfr_mul(r10924258, r10924235, r10924257, MPFR_RNDN);
        mpfr_add(r10924259, r10924253, r10924258, MPFR_RNDN);
        mpfr_add(r10924260, r10924247, r10924259, MPFR_RNDN);
        mpfr_mul(r10924261, r10924248, r10924248, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10924264, r10924263, r10924234, MPFR_RNDN);
        mpfr_add(r10924265, r10924262, r10924264, MPFR_RNDN);
        mpfr_mul(r10924266, r10924261, r10924265, MPFR_RNDN);
        ;
        mpfr_mul(r10924268, r10924267, r10924234, MPFR_RNDN);
        mpfr_mul(r10924269, r10924234, r10924268, MPFR_RNDN);
        mpfr_exp(r10924270, r10924269, MPFR_RNDN);
        mpfr_log(r10924271, r10924270, MPFR_RNDN);
        mpfr_mul(r10924272, r10924271, r10924261, MPFR_RNDN);
        mpfr_add(r10924273, r10924266, r10924272, MPFR_RNDN);
        mpfr_add(r10924274, r10924260, r10924273, MPFR_RNDN);
        return mpfr_get_d(r10924274, MPFR_RNDN);
}
