#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r4114055 = -17297280.0;
        float r4114056 = 242161920.0;
        float r4114057 = x;
        float r4114058 = r4114057 * r4114057;
        float r4114059 = r4114056 * r4114058;
        float r4114060 = r4114055 + r4114059;
        float r4114061 = -484323840.0;
        float r4114062 = r4114058 * r4114057;
        float r4114063 = r4114062 * r4114057;
        float r4114064 = r4114061 * r4114063;
        float r4114065 = r4114060 + r4114064;
        float r4114066 = 322882560.0;
        float r4114067 = r4114063 * r4114057;
        float r4114068 = r4114067 * r4114057;
        float r4114069 = r4114066 * r4114068;
        float r4114070 = r4114065 + r4114069;
        float r4114071 = -92252160.0;
        float r4114072 = r4114068 * r4114057;
        float r4114073 = r4114072 * r4114057;
        float r4114074 = r4114071 * r4114073;
        float r4114075 = r4114070 + r4114074;
        float r4114076 = 12300288.0;
        float r4114077 = r4114073 * r4114057;
        float r4114078 = r4114077 * r4114057;
        float r4114079 = r4114076 * r4114078;
        float r4114080 = r4114075 + r4114079;
        float r4114081 = -745472.0;
        float r4114082 = r4114078 * r4114057;
        float r4114083 = r4114082 * r4114057;
        float r4114084 = r4114081 * r4114083;
        float r4114085 = r4114080 + r4114084;
        float r4114086 = 16384.0;
        float r4114087 = r4114083 * r4114057;
        float r4114088 = r4114087 * r4114057;
        float r4114089 = r4114086 * r4114088;
        float r4114090 = r4114085 + r4114089;
        return r4114090;
}

double f_id(double x) {
        double r4114091 = -17297280.0;
        double r4114092 = 242161920.0;
        double r4114093 = x;
        double r4114094 = r4114093 * r4114093;
        double r4114095 = r4114092 * r4114094;
        double r4114096 = r4114091 + r4114095;
        double r4114097 = -484323840.0;
        double r4114098 = r4114094 * r4114093;
        double r4114099 = r4114098 * r4114093;
        double r4114100 = r4114097 * r4114099;
        double r4114101 = r4114096 + r4114100;
        double r4114102 = 322882560.0;
        double r4114103 = r4114099 * r4114093;
        double r4114104 = r4114103 * r4114093;
        double r4114105 = r4114102 * r4114104;
        double r4114106 = r4114101 + r4114105;
        double r4114107 = -92252160.0;
        double r4114108 = r4114104 * r4114093;
        double r4114109 = r4114108 * r4114093;
        double r4114110 = r4114107 * r4114109;
        double r4114111 = r4114106 + r4114110;
        double r4114112 = 12300288.0;
        double r4114113 = r4114109 * r4114093;
        double r4114114 = r4114113 * r4114093;
        double r4114115 = r4114112 * r4114114;
        double r4114116 = r4114111 + r4114115;
        double r4114117 = -745472.0;
        double r4114118 = r4114114 * r4114093;
        double r4114119 = r4114118 * r4114093;
        double r4114120 = r4114117 * r4114119;
        double r4114121 = r4114116 + r4114120;
        double r4114122 = 16384.0;
        double r4114123 = r4114119 * r4114093;
        double r4114124 = r4114123 * r4114093;
        double r4114125 = r4114122 * r4114124;
        double r4114126 = r4114121 + r4114125;
        return r4114126;
}


double f_of(float x) {
        float r4114127 = x;
        float r4114128 = 4;
        float r4114129 = pow(r4114127, r4114128);
        float r4114130 = -484323840.0;
        float r4114131 = r4114129 * r4114130;
        float r4114132 = 242161920.0;
        float r4114133 = r4114127 * r4114132;
        float r4114134 = r4114127 * r4114133;
        float r4114135 = r4114131 + r4114134;
        float r4114136 = r4114127 * r4114127;
        float r4114137 = r4114136 * r4114136;
        float r4114138 = 322882560.0;
        float r4114139 = r4114136 * r4114138;
        float r4114140 = r4114137 * r4114139;
        float r4114141 = r4114135 + r4114140;
        float r4114142 = -17297280.0;
        float r4114143 = r4114141 + r4114142;
        float r4114144 = r4114137 * r4114137;
        float r4114145 = 12300288.0;
        float r4114146 = r4114136 * r4114145;
        float r4114147 = -92252160.0;
        float r4114148 = r4114146 + r4114147;
        float r4114149 = r4114144 * r4114148;
        float r4114150 = r4114144 * r4114137;
        float r4114151 = -745472.0;
        float r4114152 = 16384.0;
        float r4114153 = r4114152 * r4114136;
        float r4114154 = r4114151 + r4114153;
        float r4114155 = r4114150 * r4114154;
        float r4114156 = r4114149 + r4114155;
        float r4114157 = r4114143 + r4114156;
        return r4114157;
}

double f_od(double x) {
        double r4114158 = x;
        double r4114159 = 4;
        double r4114160 = pow(r4114158, r4114159);
        double r4114161 = -484323840.0;
        double r4114162 = r4114160 * r4114161;
        double r4114163 = 242161920.0;
        double r4114164 = r4114158 * r4114163;
        double r4114165 = r4114158 * r4114164;
        double r4114166 = r4114162 + r4114165;
        double r4114167 = r4114158 * r4114158;
        double r4114168 = r4114167 * r4114167;
        double r4114169 = 322882560.0;
        double r4114170 = r4114167 * r4114169;
        double r4114171 = r4114168 * r4114170;
        double r4114172 = r4114166 + r4114171;
        double r4114173 = -17297280.0;
        double r4114174 = r4114172 + r4114173;
        double r4114175 = r4114168 * r4114168;
        double r4114176 = 12300288.0;
        double r4114177 = r4114167 * r4114176;
        double r4114178 = -92252160.0;
        double r4114179 = r4114177 + r4114178;
        double r4114180 = r4114175 * r4114179;
        double r4114181 = r4114175 * r4114168;
        double r4114182 = -745472.0;
        double r4114183 = 16384.0;
        double r4114184 = r4114183 * r4114167;
        double r4114185 = r4114182 + r4114184;
        double r4114186 = r4114181 * r4114185;
        double r4114187 = r4114180 + r4114186;
        double r4114188 = r4114174 + r4114187;
        return r4114188;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4114189, r4114190, r4114191, r4114192, r4114193, r4114194, r4114195, r4114196, r4114197, r4114198, r4114199, r4114200, r4114201, r4114202, r4114203, r4114204, r4114205, r4114206, r4114207, r4114208, r4114209, r4114210, r4114211, r4114212, r4114213, r4114214, r4114215, r4114216, r4114217, r4114218, r4114219, r4114220, r4114221, r4114222, r4114223, r4114224;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4114189, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4114190, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r4114191);
        mpfr_init(r4114192);
        mpfr_init(r4114193);
        mpfr_init(r4114194);
        mpfr_init_set_str(r4114195, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r4114196);
        mpfr_init(r4114197);
        mpfr_init(r4114198);
        mpfr_init(r4114199);
        mpfr_init_set_str(r4114200, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r4114201);
        mpfr_init(r4114202);
        mpfr_init(r4114203);
        mpfr_init(r4114204);
        mpfr_init_set_str(r4114205, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r4114206);
        mpfr_init(r4114207);
        mpfr_init(r4114208);
        mpfr_init(r4114209);
        mpfr_init_set_str(r4114210, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r4114211);
        mpfr_init(r4114212);
        mpfr_init(r4114213);
        mpfr_init(r4114214);
        mpfr_init_set_str(r4114215, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r4114216);
        mpfr_init(r4114217);
        mpfr_init(r4114218);
        mpfr_init(r4114219);
        mpfr_init_set_str(r4114220, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r4114221);
        mpfr_init(r4114222);
        mpfr_init(r4114223);
        mpfr_init(r4114224);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4114191, x, MPFR_RNDN);
        mpfr_mul(r4114192, r4114191, r4114191, MPFR_RNDN);
        mpfr_mul(r4114193, r4114190, r4114192, MPFR_RNDN);
        mpfr_add(r4114194, r4114189, r4114193, MPFR_RNDN);
        ;
        mpfr_mul(r4114196, r4114192, r4114191, MPFR_RNDN);
        mpfr_mul(r4114197, r4114196, r4114191, MPFR_RNDN);
        mpfr_mul(r4114198, r4114195, r4114197, MPFR_RNDN);
        mpfr_add(r4114199, r4114194, r4114198, MPFR_RNDN);
        ;
        mpfr_mul(r4114201, r4114197, r4114191, MPFR_RNDN);
        mpfr_mul(r4114202, r4114201, r4114191, MPFR_RNDN);
        mpfr_mul(r4114203, r4114200, r4114202, MPFR_RNDN);
        mpfr_add(r4114204, r4114199, r4114203, MPFR_RNDN);
        ;
        mpfr_mul(r4114206, r4114202, r4114191, MPFR_RNDN);
        mpfr_mul(r4114207, r4114206, r4114191, MPFR_RNDN);
        mpfr_mul(r4114208, r4114205, r4114207, MPFR_RNDN);
        mpfr_add(r4114209, r4114204, r4114208, MPFR_RNDN);
        ;
        mpfr_mul(r4114211, r4114207, r4114191, MPFR_RNDN);
        mpfr_mul(r4114212, r4114211, r4114191, MPFR_RNDN);
        mpfr_mul(r4114213, r4114210, r4114212, MPFR_RNDN);
        mpfr_add(r4114214, r4114209, r4114213, MPFR_RNDN);
        ;
        mpfr_mul(r4114216, r4114212, r4114191, MPFR_RNDN);
        mpfr_mul(r4114217, r4114216, r4114191, MPFR_RNDN);
        mpfr_mul(r4114218, r4114215, r4114217, MPFR_RNDN);
        mpfr_add(r4114219, r4114214, r4114218, MPFR_RNDN);
        ;
        mpfr_mul(r4114221, r4114217, r4114191, MPFR_RNDN);
        mpfr_mul(r4114222, r4114221, r4114191, MPFR_RNDN);
        mpfr_mul(r4114223, r4114220, r4114222, MPFR_RNDN);
        mpfr_add(r4114224, r4114219, r4114223, MPFR_RNDN);
        return mpfr_get_d(r4114224, MPFR_RNDN);
}

static mpfr_t r4114225, r4114226, r4114227, r4114228, r4114229, r4114230, r4114231, r4114232, r4114233, r4114234, r4114235, r4114236, r4114237, r4114238, r4114239, r4114240, r4114241, r4114242, r4114243, r4114244, r4114245, r4114246, r4114247, r4114248, r4114249, r4114250, r4114251, r4114252, r4114253, r4114254, r4114255;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4114225);
        mpfr_init_set_str(r4114226, "4", 10, MPFR_RNDN);
        mpfr_init(r4114227);
        mpfr_init_set_str(r4114228, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r4114229);
        mpfr_init_set_str(r4114230, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r4114231);
        mpfr_init(r4114232);
        mpfr_init(r4114233);
        mpfr_init(r4114234);
        mpfr_init(r4114235);
        mpfr_init_set_str(r4114236, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r4114237);
        mpfr_init(r4114238);
        mpfr_init(r4114239);
        mpfr_init_set_str(r4114240, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r4114241);
        mpfr_init(r4114242);
        mpfr_init_set_str(r4114243, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r4114244);
        mpfr_init_set_str(r4114245, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r4114246);
        mpfr_init(r4114247);
        mpfr_init(r4114248);
        mpfr_init_set_str(r4114249, "-745472.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4114250, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r4114251);
        mpfr_init(r4114252);
        mpfr_init(r4114253);
        mpfr_init(r4114254);
        mpfr_init(r4114255);
}

double f_fm(double x) {
        mpfr_set_d(r4114225, x, MPFR_RNDN);
        ;
        mpfr_pow(r4114227, r4114225, r4114226, MPFR_RNDN);
        ;
        mpfr_mul(r4114229, r4114227, r4114228, MPFR_RNDN);
        ;
        mpfr_mul(r4114231, r4114225, r4114230, MPFR_RNDN);
        mpfr_mul(r4114232, r4114225, r4114231, MPFR_RNDN);
        mpfr_add(r4114233, r4114229, r4114232, MPFR_RNDN);
        mpfr_mul(r4114234, r4114225, r4114225, MPFR_RNDN);
        mpfr_mul(r4114235, r4114234, r4114234, MPFR_RNDN);
        ;
        mpfr_mul(r4114237, r4114234, r4114236, MPFR_RNDN);
        mpfr_mul(r4114238, r4114235, r4114237, MPFR_RNDN);
        mpfr_add(r4114239, r4114233, r4114238, MPFR_RNDN);
        ;
        mpfr_add(r4114241, r4114239, r4114240, MPFR_RNDN);
        mpfr_mul(r4114242, r4114235, r4114235, MPFR_RNDN);
        ;
        mpfr_mul(r4114244, r4114234, r4114243, MPFR_RNDN);
        ;
        mpfr_add(r4114246, r4114244, r4114245, MPFR_RNDN);
        mpfr_mul(r4114247, r4114242, r4114246, MPFR_RNDN);
        mpfr_mul(r4114248, r4114242, r4114235, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4114251, r4114250, r4114234, MPFR_RNDN);
        mpfr_add(r4114252, r4114249, r4114251, MPFR_RNDN);
        mpfr_mul(r4114253, r4114248, r4114252, MPFR_RNDN);
        mpfr_add(r4114254, r4114247, r4114253, MPFR_RNDN);
        mpfr_add(r4114255, r4114241, r4114254, MPFR_RNDN);
        return mpfr_get_d(r4114255, MPFR_RNDN);
}

static mpfr_t r4114256, r4114257, r4114258, r4114259, r4114260, r4114261, r4114262, r4114263, r4114264, r4114265, r4114266, r4114267, r4114268, r4114269, r4114270, r4114271, r4114272, r4114273, r4114274, r4114275, r4114276, r4114277, r4114278, r4114279, r4114280, r4114281, r4114282, r4114283, r4114284, r4114285, r4114286;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4114256);
        mpfr_init_set_str(r4114257, "4", 10, MPFR_RNDN);
        mpfr_init(r4114258);
        mpfr_init_set_str(r4114259, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r4114260);
        mpfr_init_set_str(r4114261, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r4114262);
        mpfr_init(r4114263);
        mpfr_init(r4114264);
        mpfr_init(r4114265);
        mpfr_init(r4114266);
        mpfr_init_set_str(r4114267, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r4114268);
        mpfr_init(r4114269);
        mpfr_init(r4114270);
        mpfr_init_set_str(r4114271, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r4114272);
        mpfr_init(r4114273);
        mpfr_init_set_str(r4114274, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r4114275);
        mpfr_init_set_str(r4114276, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r4114277);
        mpfr_init(r4114278);
        mpfr_init(r4114279);
        mpfr_init_set_str(r4114280, "-745472.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4114281, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r4114282);
        mpfr_init(r4114283);
        mpfr_init(r4114284);
        mpfr_init(r4114285);
        mpfr_init(r4114286);
}

double f_dm(double x) {
        mpfr_set_d(r4114256, x, MPFR_RNDN);
        ;
        mpfr_pow(r4114258, r4114256, r4114257, MPFR_RNDN);
        ;
        mpfr_mul(r4114260, r4114258, r4114259, MPFR_RNDN);
        ;
        mpfr_mul(r4114262, r4114256, r4114261, MPFR_RNDN);
        mpfr_mul(r4114263, r4114256, r4114262, MPFR_RNDN);
        mpfr_add(r4114264, r4114260, r4114263, MPFR_RNDN);
        mpfr_mul(r4114265, r4114256, r4114256, MPFR_RNDN);
        mpfr_mul(r4114266, r4114265, r4114265, MPFR_RNDN);
        ;
        mpfr_mul(r4114268, r4114265, r4114267, MPFR_RNDN);
        mpfr_mul(r4114269, r4114266, r4114268, MPFR_RNDN);
        mpfr_add(r4114270, r4114264, r4114269, MPFR_RNDN);
        ;
        mpfr_add(r4114272, r4114270, r4114271, MPFR_RNDN);
        mpfr_mul(r4114273, r4114266, r4114266, MPFR_RNDN);
        ;
        mpfr_mul(r4114275, r4114265, r4114274, MPFR_RNDN);
        ;
        mpfr_add(r4114277, r4114275, r4114276, MPFR_RNDN);
        mpfr_mul(r4114278, r4114273, r4114277, MPFR_RNDN);
        mpfr_mul(r4114279, r4114273, r4114266, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4114282, r4114281, r4114265, MPFR_RNDN);
        mpfr_add(r4114283, r4114280, r4114282, MPFR_RNDN);
        mpfr_mul(r4114284, r4114279, r4114283, MPFR_RNDN);
        mpfr_add(r4114285, r4114278, r4114284, MPFR_RNDN);
        mpfr_add(r4114286, r4114272, r4114285, MPFR_RNDN);
        return mpfr_get_d(r4114286, MPFR_RNDN);
}

