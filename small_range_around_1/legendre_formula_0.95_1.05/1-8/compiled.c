#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r26948074 = 0.273438;
        float r26948075 = -9.84375;
        float r26948076 = x;
        float r26948077 = r26948076 * r26948076;
        float r26948078 = r26948075 * r26948077;
        float r26948079 = r26948074 + r26948078;
        float r26948080 = 54.140625;
        float r26948081 = r26948077 * r26948076;
        float r26948082 = r26948081 * r26948076;
        float r26948083 = r26948080 * r26948082;
        float r26948084 = r26948079 + r26948083;
        float r26948085 = -93.84375;
        float r26948086 = r26948082 * r26948076;
        float r26948087 = r26948086 * r26948076;
        float r26948088 = r26948085 * r26948087;
        float r26948089 = r26948084 + r26948088;
        float r26948090 = 50.273438;
        float r26948091 = r26948087 * r26948076;
        float r26948092 = r26948091 * r26948076;
        float r26948093 = r26948090 * r26948092;
        float r26948094 = r26948089 + r26948093;
        return r26948094;
}

double f_id(double x) {
        double r26948095 = 0.273438;
        double r26948096 = -9.84375;
        double r26948097 = x;
        double r26948098 = r26948097 * r26948097;
        double r26948099 = r26948096 * r26948098;
        double r26948100 = r26948095 + r26948099;
        double r26948101 = 54.140625;
        double r26948102 = r26948098 * r26948097;
        double r26948103 = r26948102 * r26948097;
        double r26948104 = r26948101 * r26948103;
        double r26948105 = r26948100 + r26948104;
        double r26948106 = -93.84375;
        double r26948107 = r26948103 * r26948097;
        double r26948108 = r26948107 * r26948097;
        double r26948109 = r26948106 * r26948108;
        double r26948110 = r26948105 + r26948109;
        double r26948111 = 50.273438;
        double r26948112 = r26948108 * r26948097;
        double r26948113 = r26948112 * r26948097;
        double r26948114 = r26948111 * r26948113;
        double r26948115 = r26948110 + r26948114;
        return r26948115;
}


double f_of(float x) {
        float r26948116 = x;
        float r26948117 = 54.140625;
        float r26948118 = r26948116 * r26948117;
        float r26948119 = 3;
        float r26948120 = pow(r26948116, r26948119);
        float r26948121 = r26948118 * r26948120;
        float r26948122 = -9.84375;
        float r26948123 = r26948116 * r26948122;
        float r26948124 = r26948116 * r26948123;
        float r26948125 = r26948121 + r26948124;
        float r26948126 = 0.273438;
        float r26948127 = r26948125 + r26948126;
        float r26948128 = r26948120 * r26948120;
        float r26948129 = -93.84375;
        float r26948130 = 50.273438;
        float r26948131 = r26948130 * r26948116;
        float r26948132 = r26948131 * r26948116;
        float r26948133 = r26948129 + r26948132;
        float r26948134 = r26948128 * r26948133;
        float r26948135 = r26948127 + r26948134;
        float r26948136 = cbrt(r26948135);
        float r26948137 = r26948136 * r26948136;
        float r26948138 = 4;
        float r26948139 = pow(r26948116, r26948138);
        float r26948140 = r26948117 * r26948139;
        float r26948141 = exp(r26948140);
        float r26948142 = 8;
        float r26948143 = pow(r26948116, r26948142);
        float r26948144 = r26948130 * r26948143;
        float r26948145 = r26948126 + r26948144;
        float r26948146 = exp(r26948145);
        float r26948147 = r26948141 * r26948146;
        float r26948148 = 9.84375;
        float r26948149 = 2;
        float r26948150 = pow(r26948116, r26948149);
        float r26948151 = r26948148 * r26948150;
        float r26948152 = exp(r26948151);
        float r26948153 = 93.84375;
        float r26948154 = exp(r26948153);
        float r26948155 = 6;
        float r26948156 = pow(r26948116, r26948155);
        float r26948157 = pow(r26948154, r26948156);
        float r26948158 = r26948152 * r26948157;
        float r26948159 = r26948147 / r26948158;
        float r26948160 = log(r26948159);
        float r26948161 = cbrt(r26948160);
        float r26948162 = r26948137 * r26948161;
        return r26948162;
}

double f_od(double x) {
        double r26948163 = x;
        double r26948164 = 54.140625;
        double r26948165 = r26948163 * r26948164;
        double r26948166 = 3;
        double r26948167 = pow(r26948163, r26948166);
        double r26948168 = r26948165 * r26948167;
        double r26948169 = -9.84375;
        double r26948170 = r26948163 * r26948169;
        double r26948171 = r26948163 * r26948170;
        double r26948172 = r26948168 + r26948171;
        double r26948173 = 0.273438;
        double r26948174 = r26948172 + r26948173;
        double r26948175 = r26948167 * r26948167;
        double r26948176 = -93.84375;
        double r26948177 = 50.273438;
        double r26948178 = r26948177 * r26948163;
        double r26948179 = r26948178 * r26948163;
        double r26948180 = r26948176 + r26948179;
        double r26948181 = r26948175 * r26948180;
        double r26948182 = r26948174 + r26948181;
        double r26948183 = cbrt(r26948182);
        double r26948184 = r26948183 * r26948183;
        double r26948185 = 4;
        double r26948186 = pow(r26948163, r26948185);
        double r26948187 = r26948164 * r26948186;
        double r26948188 = exp(r26948187);
        double r26948189 = 8;
        double r26948190 = pow(r26948163, r26948189);
        double r26948191 = r26948177 * r26948190;
        double r26948192 = r26948173 + r26948191;
        double r26948193 = exp(r26948192);
        double r26948194 = r26948188 * r26948193;
        double r26948195 = 9.84375;
        double r26948196 = 2;
        double r26948197 = pow(r26948163, r26948196);
        double r26948198 = r26948195 * r26948197;
        double r26948199 = exp(r26948198);
        double r26948200 = 93.84375;
        double r26948201 = exp(r26948200);
        double r26948202 = 6;
        double r26948203 = pow(r26948163, r26948202);
        double r26948204 = pow(r26948201, r26948203);
        double r26948205 = r26948199 * r26948204;
        double r26948206 = r26948194 / r26948205;
        double r26948207 = log(r26948206);
        double r26948208 = cbrt(r26948207);
        double r26948209 = r26948184 * r26948208;
        return r26948209;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948210, r26948211, r26948212, r26948213, r26948214, r26948215, r26948216, r26948217, r26948218, r26948219, r26948220, r26948221, r26948222, r26948223, r26948224, r26948225, r26948226, r26948227, r26948228, r26948229, r26948230;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948210, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948211, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r26948212);
        mpfr_init(r26948213);
        mpfr_init(r26948214);
        mpfr_init(r26948215);
        mpfr_init_set_str(r26948216, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r26948217);
        mpfr_init(r26948218);
        mpfr_init(r26948219);
        mpfr_init(r26948220);
        mpfr_init_set_str(r26948221, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r26948222);
        mpfr_init(r26948223);
        mpfr_init(r26948224);
        mpfr_init(r26948225);
        mpfr_init_set_str(r26948226, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r26948227);
        mpfr_init(r26948228);
        mpfr_init(r26948229);
        mpfr_init(r26948230);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r26948212, x, MPFR_RNDN);
        mpfr_mul(r26948213, r26948212, r26948212, MPFR_RNDN);
        mpfr_mul(r26948214, r26948211, r26948213, MPFR_RNDN);
        mpfr_add(r26948215, r26948210, r26948214, MPFR_RNDN);
        ;
        mpfr_mul(r26948217, r26948213, r26948212, MPFR_RNDN);
        mpfr_mul(r26948218, r26948217, r26948212, MPFR_RNDN);
        mpfr_mul(r26948219, r26948216, r26948218, MPFR_RNDN);
        mpfr_add(r26948220, r26948215, r26948219, MPFR_RNDN);
        ;
        mpfr_mul(r26948222, r26948218, r26948212, MPFR_RNDN);
        mpfr_mul(r26948223, r26948222, r26948212, MPFR_RNDN);
        mpfr_mul(r26948224, r26948221, r26948223, MPFR_RNDN);
        mpfr_add(r26948225, r26948220, r26948224, MPFR_RNDN);
        ;
        mpfr_mul(r26948227, r26948223, r26948212, MPFR_RNDN);
        mpfr_mul(r26948228, r26948227, r26948212, MPFR_RNDN);
        mpfr_mul(r26948229, r26948226, r26948228, MPFR_RNDN);
        mpfr_add(r26948230, r26948225, r26948229, MPFR_RNDN);
        return mpfr_get_d(r26948230, MPFR_RNDN);
}

static mpfr_t r26948231, r26948232, r26948233, r26948234, r26948235, r26948236, r26948237, r26948238, r26948239, r26948240, r26948241, r26948242, r26948243, r26948244, r26948245, r26948246, r26948247, r26948248, r26948249, r26948250, r26948251, r26948252, r26948253, r26948254, r26948255, r26948256, r26948257, r26948258, r26948259, r26948260, r26948261, r26948262, r26948263, r26948264, r26948265, r26948266, r26948267, r26948268, r26948269, r26948270, r26948271, r26948272, r26948273, r26948274, r26948275, r26948276, r26948277;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948231);
        mpfr_init_set_str(r26948232, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r26948233);
        mpfr_init_set_str(r26948234, "3", 10, MPFR_RNDN);
        mpfr_init(r26948235);
        mpfr_init(r26948236);
        mpfr_init_set_str(r26948237, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r26948238);
        mpfr_init(r26948239);
        mpfr_init(r26948240);
        mpfr_init_set_str(r26948241, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r26948242);
        mpfr_init(r26948243);
        mpfr_init_set_str(r26948244, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948245, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r26948246);
        mpfr_init(r26948247);
        mpfr_init(r26948248);
        mpfr_init(r26948249);
        mpfr_init(r26948250);
        mpfr_init(r26948251);
        mpfr_init(r26948252);
        mpfr_init_set_str(r26948253, "4", 10, MPFR_RNDN);
        mpfr_init(r26948254);
        mpfr_init(r26948255);
        mpfr_init(r26948256);
        mpfr_init_set_str(r26948257, "8", 10, MPFR_RNDN);
        mpfr_init(r26948258);
        mpfr_init(r26948259);
        mpfr_init(r26948260);
        mpfr_init(r26948261);
        mpfr_init(r26948262);
        mpfr_init_set_str(r26948263, "9.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948264, "2", 10, MPFR_RNDN);
        mpfr_init(r26948265);
        mpfr_init(r26948266);
        mpfr_init(r26948267);
        mpfr_init_set_str(r26948268, "93.84375", 10, MPFR_RNDN);
        mpfr_init(r26948269);
        mpfr_init_set_str(r26948270, "6", 10, MPFR_RNDN);
        mpfr_init(r26948271);
        mpfr_init(r26948272);
        mpfr_init(r26948273);
        mpfr_init(r26948274);
        mpfr_init(r26948275);
        mpfr_init(r26948276);
        mpfr_init(r26948277);
}

double f_fm(double x) {
        mpfr_set_d(r26948231, x, MPFR_RNDN);
        ;
        mpfr_mul(r26948233, r26948231, r26948232, MPFR_RNDN);
        ;
        mpfr_pow(r26948235, r26948231, r26948234, MPFR_RNDN);
        mpfr_mul(r26948236, r26948233, r26948235, MPFR_RNDN);
        ;
        mpfr_mul(r26948238, r26948231, r26948237, MPFR_RNDN);
        mpfr_mul(r26948239, r26948231, r26948238, MPFR_RNDN);
        mpfr_add(r26948240, r26948236, r26948239, MPFR_RNDN);
        ;
        mpfr_add(r26948242, r26948240, r26948241, MPFR_RNDN);
        mpfr_mul(r26948243, r26948235, r26948235, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26948246, r26948245, r26948231, MPFR_RNDN);
        mpfr_mul(r26948247, r26948246, r26948231, MPFR_RNDN);
        mpfr_add(r26948248, r26948244, r26948247, MPFR_RNDN);
        mpfr_mul(r26948249, r26948243, r26948248, MPFR_RNDN);
        mpfr_add(r26948250, r26948242, r26948249, MPFR_RNDN);
        mpfr_cbrt(r26948251, r26948250, MPFR_RNDN);
        mpfr_mul(r26948252, r26948251, r26948251, MPFR_RNDN);
        ;
        mpfr_pow(r26948254, r26948231, r26948253, MPFR_RNDN);
        mpfr_mul(r26948255, r26948232, r26948254, MPFR_RNDN);
        mpfr_exp(r26948256, r26948255, MPFR_RNDN);
        ;
        mpfr_pow(r26948258, r26948231, r26948257, MPFR_RNDN);
        mpfr_mul(r26948259, r26948245, r26948258, MPFR_RNDN);
        mpfr_add(r26948260, r26948241, r26948259, MPFR_RNDN);
        mpfr_exp(r26948261, r26948260, MPFR_RNDN);
        mpfr_mul(r26948262, r26948256, r26948261, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r26948265, r26948231, r26948264, MPFR_RNDN);
        mpfr_mul(r26948266, r26948263, r26948265, MPFR_RNDN);
        mpfr_exp(r26948267, r26948266, MPFR_RNDN);
        ;
        mpfr_exp(r26948269, r26948268, MPFR_RNDN);
        ;
        mpfr_pow(r26948271, r26948231, r26948270, MPFR_RNDN);
        mpfr_pow(r26948272, r26948269, r26948271, MPFR_RNDN);
        mpfr_mul(r26948273, r26948267, r26948272, MPFR_RNDN);
        mpfr_div(r26948274, r26948262, r26948273, MPFR_RNDN);
        mpfr_log(r26948275, r26948274, MPFR_RNDN);
        mpfr_cbrt(r26948276, r26948275, MPFR_RNDN);
        mpfr_mul(r26948277, r26948252, r26948276, MPFR_RNDN);
        return mpfr_get_d(r26948277, MPFR_RNDN);
}

static mpfr_t r26948278, r26948279, r26948280, r26948281, r26948282, r26948283, r26948284, r26948285, r26948286, r26948287, r26948288, r26948289, r26948290, r26948291, r26948292, r26948293, r26948294, r26948295, r26948296, r26948297, r26948298, r26948299, r26948300, r26948301, r26948302, r26948303, r26948304, r26948305, r26948306, r26948307, r26948308, r26948309, r26948310, r26948311, r26948312, r26948313, r26948314, r26948315, r26948316, r26948317, r26948318, r26948319, r26948320, r26948321, r26948322, r26948323, r26948324;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948278);
        mpfr_init_set_str(r26948279, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r26948280);
        mpfr_init_set_str(r26948281, "3", 10, MPFR_RNDN);
        mpfr_init(r26948282);
        mpfr_init(r26948283);
        mpfr_init_set_str(r26948284, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r26948285);
        mpfr_init(r26948286);
        mpfr_init(r26948287);
        mpfr_init_set_str(r26948288, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r26948289);
        mpfr_init(r26948290);
        mpfr_init_set_str(r26948291, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948292, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r26948293);
        mpfr_init(r26948294);
        mpfr_init(r26948295);
        mpfr_init(r26948296);
        mpfr_init(r26948297);
        mpfr_init(r26948298);
        mpfr_init(r26948299);
        mpfr_init_set_str(r26948300, "4", 10, MPFR_RNDN);
        mpfr_init(r26948301);
        mpfr_init(r26948302);
        mpfr_init(r26948303);
        mpfr_init_set_str(r26948304, "8", 10, MPFR_RNDN);
        mpfr_init(r26948305);
        mpfr_init(r26948306);
        mpfr_init(r26948307);
        mpfr_init(r26948308);
        mpfr_init(r26948309);
        mpfr_init_set_str(r26948310, "9.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948311, "2", 10, MPFR_RNDN);
        mpfr_init(r26948312);
        mpfr_init(r26948313);
        mpfr_init(r26948314);
        mpfr_init_set_str(r26948315, "93.84375", 10, MPFR_RNDN);
        mpfr_init(r26948316);
        mpfr_init_set_str(r26948317, "6", 10, MPFR_RNDN);
        mpfr_init(r26948318);
        mpfr_init(r26948319);
        mpfr_init(r26948320);
        mpfr_init(r26948321);
        mpfr_init(r26948322);
        mpfr_init(r26948323);
        mpfr_init(r26948324);
}

double f_dm(double x) {
        mpfr_set_d(r26948278, x, MPFR_RNDN);
        ;
        mpfr_mul(r26948280, r26948278, r26948279, MPFR_RNDN);
        ;
        mpfr_pow(r26948282, r26948278, r26948281, MPFR_RNDN);
        mpfr_mul(r26948283, r26948280, r26948282, MPFR_RNDN);
        ;
        mpfr_mul(r26948285, r26948278, r26948284, MPFR_RNDN);
        mpfr_mul(r26948286, r26948278, r26948285, MPFR_RNDN);
        mpfr_add(r26948287, r26948283, r26948286, MPFR_RNDN);
        ;
        mpfr_add(r26948289, r26948287, r26948288, MPFR_RNDN);
        mpfr_mul(r26948290, r26948282, r26948282, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r26948293, r26948292, r26948278, MPFR_RNDN);
        mpfr_mul(r26948294, r26948293, r26948278, MPFR_RNDN);
        mpfr_add(r26948295, r26948291, r26948294, MPFR_RNDN);
        mpfr_mul(r26948296, r26948290, r26948295, MPFR_RNDN);
        mpfr_add(r26948297, r26948289, r26948296, MPFR_RNDN);
        mpfr_cbrt(r26948298, r26948297, MPFR_RNDN);
        mpfr_mul(r26948299, r26948298, r26948298, MPFR_RNDN);
        ;
        mpfr_pow(r26948301, r26948278, r26948300, MPFR_RNDN);
        mpfr_mul(r26948302, r26948279, r26948301, MPFR_RNDN);
        mpfr_exp(r26948303, r26948302, MPFR_RNDN);
        ;
        mpfr_pow(r26948305, r26948278, r26948304, MPFR_RNDN);
        mpfr_mul(r26948306, r26948292, r26948305, MPFR_RNDN);
        mpfr_add(r26948307, r26948288, r26948306, MPFR_RNDN);
        mpfr_exp(r26948308, r26948307, MPFR_RNDN);
        mpfr_mul(r26948309, r26948303, r26948308, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r26948312, r26948278, r26948311, MPFR_RNDN);
        mpfr_mul(r26948313, r26948310, r26948312, MPFR_RNDN);
        mpfr_exp(r26948314, r26948313, MPFR_RNDN);
        ;
        mpfr_exp(r26948316, r26948315, MPFR_RNDN);
        ;
        mpfr_pow(r26948318, r26948278, r26948317, MPFR_RNDN);
        mpfr_pow(r26948319, r26948316, r26948318, MPFR_RNDN);
        mpfr_mul(r26948320, r26948314, r26948319, MPFR_RNDN);
        mpfr_div(r26948321, r26948309, r26948320, MPFR_RNDN);
        mpfr_log(r26948322, r26948321, MPFR_RNDN);
        mpfr_cbrt(r26948323, r26948322, MPFR_RNDN);
        mpfr_mul(r26948324, r26948299, r26948323, MPFR_RNDN);
        return mpfr_get_d(r26948324, MPFR_RNDN);
}

