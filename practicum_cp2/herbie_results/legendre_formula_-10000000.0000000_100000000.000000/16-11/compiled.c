#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r5396086 = -2.707031;
        float r5396087 = x;
        float r5396088 = r5396086 * r5396087;
        float r5396089 = 58.652344;
        float r5396090 = r5396087 * r5396087;
        float r5396091 = r5396090 * r5396087;
        float r5396092 = r5396089 * r5396091;
        float r5396093 = r5396088 + r5396092;
        float r5396094 = -351.914062;
        float r5396095 = r5396091 * r5396087;
        float r5396096 = r5396095 * r5396087;
        float r5396097 = r5396094 * r5396096;
        float r5396098 = r5396093 + r5396097;
        float r5396099 = 854.648438;
        float r5396100 = r5396096 * r5396087;
        float r5396101 = r5396100 * r5396087;
        float r5396102 = r5396099 * r5396101;
        float r5396103 = r5396098 + r5396102;
        float r5396104 = -902.128906;
        float r5396105 = r5396101 * r5396087;
        float r5396106 = r5396105 * r5396087;
        float r5396107 = r5396104 * r5396106;
        float r5396108 = r5396103 + r5396107;
        float r5396109 = 344.449219;
        float r5396110 = r5396106 * r5396087;
        float r5396111 = r5396110 * r5396087;
        float r5396112 = r5396109 * r5396111;
        float r5396113 = r5396108 + r5396112;
        return r5396113;
}

double f_id(double x) {
        double r5396114 = -2.707031;
        double r5396115 = x;
        double r5396116 = r5396114 * r5396115;
        double r5396117 = 58.652344;
        double r5396118 = r5396115 * r5396115;
        double r5396119 = r5396118 * r5396115;
        double r5396120 = r5396117 * r5396119;
        double r5396121 = r5396116 + r5396120;
        double r5396122 = -351.914062;
        double r5396123 = r5396119 * r5396115;
        double r5396124 = r5396123 * r5396115;
        double r5396125 = r5396122 * r5396124;
        double r5396126 = r5396121 + r5396125;
        double r5396127 = 854.648438;
        double r5396128 = r5396124 * r5396115;
        double r5396129 = r5396128 * r5396115;
        double r5396130 = r5396127 * r5396129;
        double r5396131 = r5396126 + r5396130;
        double r5396132 = -902.128906;
        double r5396133 = r5396129 * r5396115;
        double r5396134 = r5396133 * r5396115;
        double r5396135 = r5396132 * r5396134;
        double r5396136 = r5396131 + r5396135;
        double r5396137 = 344.449219;
        double r5396138 = r5396134 * r5396115;
        double r5396139 = r5396138 * r5396115;
        double r5396140 = r5396137 * r5396139;
        double r5396141 = r5396136 + r5396140;
        return r5396141;
}


double f_of(float x) {
        float r5396142 = x;
        float r5396143 = 3;
        float r5396144 = pow(r5396142, r5396143);
        float r5396145 = r5396144 * r5396144;
        float r5396146 = r5396144 * r5396145;
        float r5396147 = 344.449219;
        float r5396148 = r5396142 * r5396147;
        float r5396149 = r5396142 * r5396148;
        float r5396150 = -902.128906;
        float r5396151 = r5396149 + r5396150;
        float r5396152 = r5396146 * r5396151;
        float r5396153 = 854.648438;
        float r5396154 = r5396153 * r5396142;
        float r5396155 = r5396142 * r5396142;
        float r5396156 = r5396154 * r5396155;
        float r5396157 = 1;
        float r5396158 = r5396143 + r5396157;
        float r5396159 = pow(r5396144, r5396158);
        float r5396160 = cbrt(r5396159);
        float r5396161 = r5396156 * r5396160;
        float r5396162 = -2.707031;
        float r5396163 = r5396162 * r5396142;
        float r5396164 = r5396161 + r5396163;
        float r5396165 = r5396152 + r5396164;
        float r5396166 = 58.652344;
        float r5396167 = r5396166 * r5396142;
        float r5396168 = -351.914062;
        float r5396169 = r5396142 * r5396168;
        float r5396170 = r5396169 * r5396155;
        float r5396171 = r5396167 + r5396170;
        float r5396172 = r5396155 * r5396171;
        float r5396173 = r5396165 + r5396172;
        return r5396173;
}

double f_od(double x) {
        double r5396174 = x;
        double r5396175 = 3;
        double r5396176 = pow(r5396174, r5396175);
        double r5396177 = r5396176 * r5396176;
        double r5396178 = r5396176 * r5396177;
        double r5396179 = 344.449219;
        double r5396180 = r5396174 * r5396179;
        double r5396181 = r5396174 * r5396180;
        double r5396182 = -902.128906;
        double r5396183 = r5396181 + r5396182;
        double r5396184 = r5396178 * r5396183;
        double r5396185 = 854.648438;
        double r5396186 = r5396185 * r5396174;
        double r5396187 = r5396174 * r5396174;
        double r5396188 = r5396186 * r5396187;
        double r5396189 = 1;
        double r5396190 = r5396175 + r5396189;
        double r5396191 = pow(r5396176, r5396190);
        double r5396192 = cbrt(r5396191);
        double r5396193 = r5396188 * r5396192;
        double r5396194 = -2.707031;
        double r5396195 = r5396194 * r5396174;
        double r5396196 = r5396193 + r5396195;
        double r5396197 = r5396184 + r5396196;
        double r5396198 = 58.652344;
        double r5396199 = r5396198 * r5396174;
        double r5396200 = -351.914062;
        double r5396201 = r5396174 * r5396200;
        double r5396202 = r5396201 * r5396187;
        double r5396203 = r5396199 + r5396202;
        double r5396204 = r5396187 * r5396203;
        double r5396205 = r5396197 + r5396204;
        return r5396205;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5396206, r5396207, r5396208, r5396209, r5396210, r5396211, r5396212, r5396213, r5396214, r5396215, r5396216, r5396217, r5396218, r5396219, r5396220, r5396221, r5396222, r5396223, r5396224, r5396225, r5396226, r5396227, r5396228, r5396229, r5396230, r5396231, r5396232, r5396233;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5396206, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r5396207);
        mpfr_init(r5396208);
        mpfr_init_set_str(r5396209, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r5396210);
        mpfr_init(r5396211);
        mpfr_init(r5396212);
        mpfr_init(r5396213);
        mpfr_init_set_str(r5396214, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r5396215);
        mpfr_init(r5396216);
        mpfr_init(r5396217);
        mpfr_init(r5396218);
        mpfr_init_set_str(r5396219, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r5396220);
        mpfr_init(r5396221);
        mpfr_init(r5396222);
        mpfr_init(r5396223);
        mpfr_init_set_str(r5396224, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r5396225);
        mpfr_init(r5396226);
        mpfr_init(r5396227);
        mpfr_init(r5396228);
        mpfr_init_set_str(r5396229, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r5396230);
        mpfr_init(r5396231);
        mpfr_init(r5396232);
        mpfr_init(r5396233);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5396207, x, MPFR_RNDN);
        mpfr_mul(r5396208, r5396206, r5396207, MPFR_RNDN);
        ;
        mpfr_mul(r5396210, r5396207, r5396207, MPFR_RNDN);
        mpfr_mul(r5396211, r5396210, r5396207, MPFR_RNDN);
        mpfr_mul(r5396212, r5396209, r5396211, MPFR_RNDN);
        mpfr_add(r5396213, r5396208, r5396212, MPFR_RNDN);
        ;
        mpfr_mul(r5396215, r5396211, r5396207, MPFR_RNDN);
        mpfr_mul(r5396216, r5396215, r5396207, MPFR_RNDN);
        mpfr_mul(r5396217, r5396214, r5396216, MPFR_RNDN);
        mpfr_add(r5396218, r5396213, r5396217, MPFR_RNDN);
        ;
        mpfr_mul(r5396220, r5396216, r5396207, MPFR_RNDN);
        mpfr_mul(r5396221, r5396220, r5396207, MPFR_RNDN);
        mpfr_mul(r5396222, r5396219, r5396221, MPFR_RNDN);
        mpfr_add(r5396223, r5396218, r5396222, MPFR_RNDN);
        ;
        mpfr_mul(r5396225, r5396221, r5396207, MPFR_RNDN);
        mpfr_mul(r5396226, r5396225, r5396207, MPFR_RNDN);
        mpfr_mul(r5396227, r5396224, r5396226, MPFR_RNDN);
        mpfr_add(r5396228, r5396223, r5396227, MPFR_RNDN);
        ;
        mpfr_mul(r5396230, r5396226, r5396207, MPFR_RNDN);
        mpfr_mul(r5396231, r5396230, r5396207, MPFR_RNDN);
        mpfr_mul(r5396232, r5396229, r5396231, MPFR_RNDN);
        mpfr_add(r5396233, r5396228, r5396232, MPFR_RNDN);
        return mpfr_get_d(r5396233, MPFR_RNDN);
}

static mpfr_t r5396234, r5396235, r5396236, r5396237, r5396238, r5396239, r5396240, r5396241, r5396242, r5396243, r5396244, r5396245, r5396246, r5396247, r5396248, r5396249, r5396250, r5396251, r5396252, r5396253, r5396254, r5396255, r5396256, r5396257, r5396258, r5396259, r5396260, r5396261, r5396262, r5396263, r5396264, r5396265;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5396234);
        mpfr_init_set_str(r5396235, "3", 10, MPFR_RNDN);
        mpfr_init(r5396236);
        mpfr_init(r5396237);
        mpfr_init(r5396238);
        mpfr_init_set_str(r5396239, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r5396240);
        mpfr_init(r5396241);
        mpfr_init_set_str(r5396242, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r5396243);
        mpfr_init(r5396244);
        mpfr_init_set_str(r5396245, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r5396246);
        mpfr_init(r5396247);
        mpfr_init(r5396248);
        mpfr_init_set_str(r5396249, "1", 10, MPFR_RNDN);
        mpfr_init(r5396250);
        mpfr_init(r5396251);
        mpfr_init(r5396252);
        mpfr_init(r5396253);
        mpfr_init_set_str(r5396254, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r5396255);
        mpfr_init(r5396256);
        mpfr_init(r5396257);
        mpfr_init_set_str(r5396258, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r5396259);
        mpfr_init_set_str(r5396260, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r5396261);
        mpfr_init(r5396262);
        mpfr_init(r5396263);
        mpfr_init(r5396264);
        mpfr_init(r5396265);
}

double f_fm(double x) {
        mpfr_set_d(r5396234, x, MPFR_RNDN);
        ;
        mpfr_pow(r5396236, r5396234, r5396235, MPFR_RNDN);
        mpfr_mul(r5396237, r5396236, r5396236, MPFR_RNDN);
        mpfr_mul(r5396238, r5396236, r5396237, MPFR_RNDN);
        ;
        mpfr_mul(r5396240, r5396234, r5396239, MPFR_RNDN);
        mpfr_mul(r5396241, r5396234, r5396240, MPFR_RNDN);
        ;
        mpfr_add(r5396243, r5396241, r5396242, MPFR_RNDN);
        mpfr_mul(r5396244, r5396238, r5396243, MPFR_RNDN);
        ;
        mpfr_mul(r5396246, r5396245, r5396234, MPFR_RNDN);
        mpfr_mul(r5396247, r5396234, r5396234, MPFR_RNDN);
        mpfr_mul(r5396248, r5396246, r5396247, MPFR_RNDN);
        ;
        mpfr_add(r5396250, r5396235, r5396249, MPFR_RNDN);
        mpfr_pow(r5396251, r5396236, r5396250, MPFR_RNDN);
        mpfr_cbrt(r5396252, r5396251, MPFR_RNDN);
        mpfr_mul(r5396253, r5396248, r5396252, MPFR_RNDN);
        ;
        mpfr_mul(r5396255, r5396254, r5396234, MPFR_RNDN);
        mpfr_add(r5396256, r5396253, r5396255, MPFR_RNDN);
        mpfr_add(r5396257, r5396244, r5396256, MPFR_RNDN);
        ;
        mpfr_mul(r5396259, r5396258, r5396234, MPFR_RNDN);
        ;
        mpfr_mul(r5396261, r5396234, r5396260, MPFR_RNDN);
        mpfr_mul(r5396262, r5396261, r5396247, MPFR_RNDN);
        mpfr_add(r5396263, r5396259, r5396262, MPFR_RNDN);
        mpfr_mul(r5396264, r5396247, r5396263, MPFR_RNDN);
        mpfr_add(r5396265, r5396257, r5396264, MPFR_RNDN);
        return mpfr_get_d(r5396265, MPFR_RNDN);
}

static mpfr_t r5396266, r5396267, r5396268, r5396269, r5396270, r5396271, r5396272, r5396273, r5396274, r5396275, r5396276, r5396277, r5396278, r5396279, r5396280, r5396281, r5396282, r5396283, r5396284, r5396285, r5396286, r5396287, r5396288, r5396289, r5396290, r5396291, r5396292, r5396293, r5396294, r5396295, r5396296, r5396297;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5396266);
        mpfr_init_set_str(r5396267, "3", 10, MPFR_RNDN);
        mpfr_init(r5396268);
        mpfr_init(r5396269);
        mpfr_init(r5396270);
        mpfr_init_set_str(r5396271, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r5396272);
        mpfr_init(r5396273);
        mpfr_init_set_str(r5396274, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r5396275);
        mpfr_init(r5396276);
        mpfr_init_set_str(r5396277, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r5396278);
        mpfr_init(r5396279);
        mpfr_init(r5396280);
        mpfr_init_set_str(r5396281, "1", 10, MPFR_RNDN);
        mpfr_init(r5396282);
        mpfr_init(r5396283);
        mpfr_init(r5396284);
        mpfr_init(r5396285);
        mpfr_init_set_str(r5396286, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r5396287);
        mpfr_init(r5396288);
        mpfr_init(r5396289);
        mpfr_init_set_str(r5396290, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r5396291);
        mpfr_init_set_str(r5396292, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r5396293);
        mpfr_init(r5396294);
        mpfr_init(r5396295);
        mpfr_init(r5396296);
        mpfr_init(r5396297);
}

double f_dm(double x) {
        mpfr_set_d(r5396266, x, MPFR_RNDN);
        ;
        mpfr_pow(r5396268, r5396266, r5396267, MPFR_RNDN);
        mpfr_mul(r5396269, r5396268, r5396268, MPFR_RNDN);
        mpfr_mul(r5396270, r5396268, r5396269, MPFR_RNDN);
        ;
        mpfr_mul(r5396272, r5396266, r5396271, MPFR_RNDN);
        mpfr_mul(r5396273, r5396266, r5396272, MPFR_RNDN);
        ;
        mpfr_add(r5396275, r5396273, r5396274, MPFR_RNDN);
        mpfr_mul(r5396276, r5396270, r5396275, MPFR_RNDN);
        ;
        mpfr_mul(r5396278, r5396277, r5396266, MPFR_RNDN);
        mpfr_mul(r5396279, r5396266, r5396266, MPFR_RNDN);
        mpfr_mul(r5396280, r5396278, r5396279, MPFR_RNDN);
        ;
        mpfr_add(r5396282, r5396267, r5396281, MPFR_RNDN);
        mpfr_pow(r5396283, r5396268, r5396282, MPFR_RNDN);
        mpfr_cbrt(r5396284, r5396283, MPFR_RNDN);
        mpfr_mul(r5396285, r5396280, r5396284, MPFR_RNDN);
        ;
        mpfr_mul(r5396287, r5396286, r5396266, MPFR_RNDN);
        mpfr_add(r5396288, r5396285, r5396287, MPFR_RNDN);
        mpfr_add(r5396289, r5396276, r5396288, MPFR_RNDN);
        ;
        mpfr_mul(r5396291, r5396290, r5396266, MPFR_RNDN);
        ;
        mpfr_mul(r5396293, r5396266, r5396292, MPFR_RNDN);
        mpfr_mul(r5396294, r5396293, r5396279, MPFR_RNDN);
        mpfr_add(r5396295, r5396291, r5396294, MPFR_RNDN);
        mpfr_mul(r5396296, r5396279, r5396295, MPFR_RNDN);
        mpfr_add(r5396297, r5396289, r5396296, MPFR_RNDN);
        return mpfr_get_d(r5396297, MPFR_RNDN);
}

