#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r83943051 = 1.0;
        float r83943052 = -6.0;
        float r83943053 = x;
        float r83943054 = r83943052 * r83943053;
        float r83943055 = r83943051 + r83943054;
        float r83943056 = 7.5;
        float r83943057 = r83943053 * r83943053;
        float r83943058 = r83943056 * r83943057;
        float r83943059 = r83943055 + r83943058;
        float r83943060 = -3.333333;
        float r83943061 = r83943057 * r83943053;
        float r83943062 = r83943060 * r83943061;
        float r83943063 = r83943059 + r83943062;
        float r83943064 = 0.625;
        float r83943065 = r83943061 * r83943053;
        float r83943066 = r83943064 * r83943065;
        float r83943067 = r83943063 + r83943066;
        float r83943068 = -0.05;
        float r83943069 = r83943065 * r83943053;
        float r83943070 = r83943068 * r83943069;
        float r83943071 = r83943067 + r83943070;
        float r83943072 = 0.001389;
        float r83943073 = r83943069 * r83943053;
        float r83943074 = r83943072 * r83943073;
        float r83943075 = r83943071 + r83943074;
        return r83943075;
}

double f_id(double x) {
        double r83943076 = 1.0;
        double r83943077 = -6.0;
        double r83943078 = x;
        double r83943079 = r83943077 * r83943078;
        double r83943080 = r83943076 + r83943079;
        double r83943081 = 7.5;
        double r83943082 = r83943078 * r83943078;
        double r83943083 = r83943081 * r83943082;
        double r83943084 = r83943080 + r83943083;
        double r83943085 = -3.333333;
        double r83943086 = r83943082 * r83943078;
        double r83943087 = r83943085 * r83943086;
        double r83943088 = r83943084 + r83943087;
        double r83943089 = 0.625;
        double r83943090 = r83943086 * r83943078;
        double r83943091 = r83943089 * r83943090;
        double r83943092 = r83943088 + r83943091;
        double r83943093 = -0.05;
        double r83943094 = r83943090 * r83943078;
        double r83943095 = r83943093 * r83943094;
        double r83943096 = r83943092 + r83943095;
        double r83943097 = 0.001389;
        double r83943098 = r83943094 * r83943078;
        double r83943099 = r83943097 * r83943098;
        double r83943100 = r83943096 + r83943099;
        return r83943100;
}


double f_of(float x) {
        float r83943101 = 1.0;
        float r83943102 = -6.0;
        float r83943103 = 7.5;
        float r83943104 = x;
        float r83943105 = r83943103 * r83943104;
        float r83943106 = r83943102 + r83943105;
        float r83943107 = r83943106 * r83943104;
        float r83943108 = 3;
        float r83943109 = pow(r83943104, r83943108);
        float r83943110 = 0.625;
        float r83943111 = r83943110 * r83943104;
        float r83943112 = -3.333333;
        float r83943113 = r83943111 + r83943112;
        float r83943114 = r83943109 * r83943113;
        float r83943115 = r83943107 + r83943114;
        float r83943116 = r83943101 + r83943115;
        float r83943117 = cbrt(r83943116);
        float r83943118 = r83943117 * r83943117;
        float r83943119 = r83943118 * r83943117;
        float r83943120 = -0.05;
        float r83943121 = r83943104 * r83943104;
        float r83943122 = r83943121 * r83943104;
        float r83943123 = r83943122 * r83943104;
        float r83943124 = r83943123 * r83943104;
        float r83943125 = r83943120 * r83943124;
        float r83943126 = r83943119 + r83943125;
        float r83943127 = 0.001389;
        float r83943128 = r83943124 * r83943104;
        float r83943129 = r83943127 * r83943128;
        float r83943130 = r83943126 + r83943129;
        return r83943130;
}

double f_od(double x) {
        double r83943131 = 1.0;
        double r83943132 = -6.0;
        double r83943133 = 7.5;
        double r83943134 = x;
        double r83943135 = r83943133 * r83943134;
        double r83943136 = r83943132 + r83943135;
        double r83943137 = r83943136 * r83943134;
        double r83943138 = 3;
        double r83943139 = pow(r83943134, r83943138);
        double r83943140 = 0.625;
        double r83943141 = r83943140 * r83943134;
        double r83943142 = -3.333333;
        double r83943143 = r83943141 + r83943142;
        double r83943144 = r83943139 * r83943143;
        double r83943145 = r83943137 + r83943144;
        double r83943146 = r83943131 + r83943145;
        double r83943147 = cbrt(r83943146);
        double r83943148 = r83943147 * r83943147;
        double r83943149 = r83943148 * r83943147;
        double r83943150 = -0.05;
        double r83943151 = r83943134 * r83943134;
        double r83943152 = r83943151 * r83943134;
        double r83943153 = r83943152 * r83943134;
        double r83943154 = r83943153 * r83943134;
        double r83943155 = r83943150 * r83943154;
        double r83943156 = r83943149 + r83943155;
        double r83943157 = 0.001389;
        double r83943158 = r83943154 * r83943134;
        double r83943159 = r83943157 * r83943158;
        double r83943160 = r83943156 + r83943159;
        return r83943160;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83943161, r83943162, r83943163, r83943164, r83943165, r83943166, r83943167, r83943168, r83943169, r83943170, r83943171, r83943172, r83943173, r83943174, r83943175, r83943176, r83943177, r83943178, r83943179, r83943180, r83943181, r83943182, r83943183, r83943184, r83943185;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943161, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943162, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r83943163);
        mpfr_init(r83943164);
        mpfr_init(r83943165);
        mpfr_init_set_str(r83943166, "7.5", 10, MPFR_RNDN);
        mpfr_init(r83943167);
        mpfr_init(r83943168);
        mpfr_init(r83943169);
        mpfr_init_set_str(r83943170, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r83943171);
        mpfr_init(r83943172);
        mpfr_init(r83943173);
        mpfr_init_set_str(r83943174, "0.625", 10, MPFR_RNDN);
        mpfr_init(r83943175);
        mpfr_init(r83943176);
        mpfr_init(r83943177);
        mpfr_init_set_str(r83943178, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r83943179);
        mpfr_init(r83943180);
        mpfr_init(r83943181);
        mpfr_init_set_str(r83943182, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r83943183);
        mpfr_init(r83943184);
        mpfr_init(r83943185);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83943163, x, MPFR_RNDN);
        mpfr_mul(r83943164, r83943162, r83943163, MPFR_RNDN);
        mpfr_add(r83943165, r83943161, r83943164, MPFR_RNDN);
        ;
        mpfr_mul(r83943167, r83943163, r83943163, MPFR_RNDN);
        mpfr_mul(r83943168, r83943166, r83943167, MPFR_RNDN);
        mpfr_add(r83943169, r83943165, r83943168, MPFR_RNDN);
        ;
        mpfr_mul(r83943171, r83943167, r83943163, MPFR_RNDN);
        mpfr_mul(r83943172, r83943170, r83943171, MPFR_RNDN);
        mpfr_add(r83943173, r83943169, r83943172, MPFR_RNDN);
        ;
        mpfr_mul(r83943175, r83943171, r83943163, MPFR_RNDN);
        mpfr_mul(r83943176, r83943174, r83943175, MPFR_RNDN);
        mpfr_add(r83943177, r83943173, r83943176, MPFR_RNDN);
        ;
        mpfr_mul(r83943179, r83943175, r83943163, MPFR_RNDN);
        mpfr_mul(r83943180, r83943178, r83943179, MPFR_RNDN);
        mpfr_add(r83943181, r83943177, r83943180, MPFR_RNDN);
        ;
        mpfr_mul(r83943183, r83943179, r83943163, MPFR_RNDN);
        mpfr_mul(r83943184, r83943182, r83943183, MPFR_RNDN);
        mpfr_add(r83943185, r83943181, r83943184, MPFR_RNDN);
        return mpfr_get_d(r83943185, MPFR_RNDN);
}

static mpfr_t r83943186, r83943187, r83943188, r83943189, r83943190, r83943191, r83943192, r83943193, r83943194, r83943195, r83943196, r83943197, r83943198, r83943199, r83943200, r83943201, r83943202, r83943203, r83943204, r83943205, r83943206, r83943207, r83943208, r83943209, r83943210, r83943211, r83943212, r83943213, r83943214, r83943215;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943186, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943187, "-6.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943188, "7.5", 10, MPFR_RNDN);
        mpfr_init(r83943189);
        mpfr_init(r83943190);
        mpfr_init(r83943191);
        mpfr_init(r83943192);
        mpfr_init_set_str(r83943193, "3", 10, MPFR_RNDN);
        mpfr_init(r83943194);
        mpfr_init_set_str(r83943195, "0.625", 10, MPFR_RNDN);
        mpfr_init(r83943196);
        mpfr_init_set_str(r83943197, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r83943198);
        mpfr_init(r83943199);
        mpfr_init(r83943200);
        mpfr_init(r83943201);
        mpfr_init(r83943202);
        mpfr_init(r83943203);
        mpfr_init(r83943204);
        mpfr_init_set_str(r83943205, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r83943206);
        mpfr_init(r83943207);
        mpfr_init(r83943208);
        mpfr_init(r83943209);
        mpfr_init(r83943210);
        mpfr_init(r83943211);
        mpfr_init_set_str(r83943212, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r83943213);
        mpfr_init(r83943214);
        mpfr_init(r83943215);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r83943189, x, MPFR_RNDN);
        mpfr_mul(r83943190, r83943188, r83943189, MPFR_RNDN);
        mpfr_add(r83943191, r83943187, r83943190, MPFR_RNDN);
        mpfr_mul(r83943192, r83943191, r83943189, MPFR_RNDN);
        ;
        mpfr_pow(r83943194, r83943189, r83943193, MPFR_RNDN);
        ;
        mpfr_mul(r83943196, r83943195, r83943189, MPFR_RNDN);
        ;
        mpfr_add(r83943198, r83943196, r83943197, MPFR_RNDN);
        mpfr_mul(r83943199, r83943194, r83943198, MPFR_RNDN);
        mpfr_add(r83943200, r83943192, r83943199, MPFR_RNDN);
        mpfr_add(r83943201, r83943186, r83943200, MPFR_RNDN);
        mpfr_cbrt(r83943202, r83943201, MPFR_RNDN);
        mpfr_mul(r83943203, r83943202, r83943202, MPFR_RNDN);
        mpfr_mul(r83943204, r83943203, r83943202, MPFR_RNDN);
        ;
        mpfr_mul(r83943206, r83943189, r83943189, MPFR_RNDN);
        mpfr_mul(r83943207, r83943206, r83943189, MPFR_RNDN);
        mpfr_mul(r83943208, r83943207, r83943189, MPFR_RNDN);
        mpfr_mul(r83943209, r83943208, r83943189, MPFR_RNDN);
        mpfr_mul(r83943210, r83943205, r83943209, MPFR_RNDN);
        mpfr_add(r83943211, r83943204, r83943210, MPFR_RNDN);
        ;
        mpfr_mul(r83943213, r83943209, r83943189, MPFR_RNDN);
        mpfr_mul(r83943214, r83943212, r83943213, MPFR_RNDN);
        mpfr_add(r83943215, r83943211, r83943214, MPFR_RNDN);
        return mpfr_get_d(r83943215, MPFR_RNDN);
}

static mpfr_t r83943216, r83943217, r83943218, r83943219, r83943220, r83943221, r83943222, r83943223, r83943224, r83943225, r83943226, r83943227, r83943228, r83943229, r83943230, r83943231, r83943232, r83943233, r83943234, r83943235, r83943236, r83943237, r83943238, r83943239, r83943240, r83943241, r83943242, r83943243, r83943244, r83943245;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943216, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943217, "-6.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943218, "7.5", 10, MPFR_RNDN);
        mpfr_init(r83943219);
        mpfr_init(r83943220);
        mpfr_init(r83943221);
        mpfr_init(r83943222);
        mpfr_init_set_str(r83943223, "3", 10, MPFR_RNDN);
        mpfr_init(r83943224);
        mpfr_init_set_str(r83943225, "0.625", 10, MPFR_RNDN);
        mpfr_init(r83943226);
        mpfr_init_set_str(r83943227, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r83943228);
        mpfr_init(r83943229);
        mpfr_init(r83943230);
        mpfr_init(r83943231);
        mpfr_init(r83943232);
        mpfr_init(r83943233);
        mpfr_init(r83943234);
        mpfr_init_set_str(r83943235, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r83943236);
        mpfr_init(r83943237);
        mpfr_init(r83943238);
        mpfr_init(r83943239);
        mpfr_init(r83943240);
        mpfr_init(r83943241);
        mpfr_init_set_str(r83943242, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r83943243);
        mpfr_init(r83943244);
        mpfr_init(r83943245);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r83943219, x, MPFR_RNDN);
        mpfr_mul(r83943220, r83943218, r83943219, MPFR_RNDN);
        mpfr_add(r83943221, r83943217, r83943220, MPFR_RNDN);
        mpfr_mul(r83943222, r83943221, r83943219, MPFR_RNDN);
        ;
        mpfr_pow(r83943224, r83943219, r83943223, MPFR_RNDN);
        ;
        mpfr_mul(r83943226, r83943225, r83943219, MPFR_RNDN);
        ;
        mpfr_add(r83943228, r83943226, r83943227, MPFR_RNDN);
        mpfr_mul(r83943229, r83943224, r83943228, MPFR_RNDN);
        mpfr_add(r83943230, r83943222, r83943229, MPFR_RNDN);
        mpfr_add(r83943231, r83943216, r83943230, MPFR_RNDN);
        mpfr_cbrt(r83943232, r83943231, MPFR_RNDN);
        mpfr_mul(r83943233, r83943232, r83943232, MPFR_RNDN);
        mpfr_mul(r83943234, r83943233, r83943232, MPFR_RNDN);
        ;
        mpfr_mul(r83943236, r83943219, r83943219, MPFR_RNDN);
        mpfr_mul(r83943237, r83943236, r83943219, MPFR_RNDN);
        mpfr_mul(r83943238, r83943237, r83943219, MPFR_RNDN);
        mpfr_mul(r83943239, r83943238, r83943219, MPFR_RNDN);
        mpfr_mul(r83943240, r83943235, r83943239, MPFR_RNDN);
        mpfr_add(r83943241, r83943234, r83943240, MPFR_RNDN);
        ;
        mpfr_mul(r83943243, r83943239, r83943219, MPFR_RNDN);
        mpfr_mul(r83943244, r83943242, r83943243, MPFR_RNDN);
        mpfr_add(r83943245, r83943241, r83943244, MPFR_RNDN);
        return mpfr_get_d(r83943245, MPFR_RNDN);
}

