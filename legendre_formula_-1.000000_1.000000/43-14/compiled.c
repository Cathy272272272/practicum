#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r10048087 = -0.209473;
        float r10048088 = 21.994629;
        float r10048089 = x;
        float r10048090 = r10048089 * r10048089;
        float r10048091 = r10048088 * r10048090;
        float r10048092 = r10048087 + r10048091;
        float r10048093 = -373.908691;
        float r10048094 = r10048090 * r10048089;
        float r10048095 = r10048094 * r10048089;
        float r10048096 = r10048093 * r10048095;
        float r10048097 = r10048092 + r10048096;
        float r10048098 = 2368.088379;
        float r10048099 = r10048095 * r10048089;
        float r10048100 = r10048099 * r10048089;
        float r10048101 = r10048098 * r10048100;
        float r10048102 = r10048097 + r10048101;
        float r10048103 = -7104.265137;
        float r10048104 = r10048100 * r10048089;
        float r10048105 = r10048104 * r10048089;
        float r10048106 = r10048103 * r10048105;
        float r10048107 = r10048102 + r10048106;
        float r10048108 = 10893.206543;
        float r10048109 = r10048105 * r10048089;
        float r10048110 = r10048109 * r10048089;
        float r10048111 = r10048108 * r10048110;
        float r10048112 = r10048107 + r10048111;
        float r10048113 = -8252.429199;
        float r10048114 = r10048110 * r10048089;
        float r10048115 = r10048114 * r10048089;
        float r10048116 = r10048113 * r10048115;
        float r10048117 = r10048112 + r10048116;
        float r10048118 = 2448.522949;
        float r10048119 = r10048115 * r10048089;
        float r10048120 = r10048119 * r10048089;
        float r10048121 = r10048118 * r10048120;
        float r10048122 = r10048117 + r10048121;
        return r10048122;
}

double f_id(double x) {
        double r10048123 = -0.209473;
        double r10048124 = 21.994629;
        double r10048125 = x;
        double r10048126 = r10048125 * r10048125;
        double r10048127 = r10048124 * r10048126;
        double r10048128 = r10048123 + r10048127;
        double r10048129 = -373.908691;
        double r10048130 = r10048126 * r10048125;
        double r10048131 = r10048130 * r10048125;
        double r10048132 = r10048129 * r10048131;
        double r10048133 = r10048128 + r10048132;
        double r10048134 = 2368.088379;
        double r10048135 = r10048131 * r10048125;
        double r10048136 = r10048135 * r10048125;
        double r10048137 = r10048134 * r10048136;
        double r10048138 = r10048133 + r10048137;
        double r10048139 = -7104.265137;
        double r10048140 = r10048136 * r10048125;
        double r10048141 = r10048140 * r10048125;
        double r10048142 = r10048139 * r10048141;
        double r10048143 = r10048138 + r10048142;
        double r10048144 = 10893.206543;
        double r10048145 = r10048141 * r10048125;
        double r10048146 = r10048145 * r10048125;
        double r10048147 = r10048144 * r10048146;
        double r10048148 = r10048143 + r10048147;
        double r10048149 = -8252.429199;
        double r10048150 = r10048146 * r10048125;
        double r10048151 = r10048150 * r10048125;
        double r10048152 = r10048149 * r10048151;
        double r10048153 = r10048148 + r10048152;
        double r10048154 = 2448.522949;
        double r10048155 = r10048151 * r10048125;
        double r10048156 = r10048155 * r10048125;
        double r10048157 = r10048154 * r10048156;
        double r10048158 = r10048153 + r10048157;
        return r10048158;
}


double f_of(float x) {
        float r10048159 = x;
        float r10048160 = r10048159 * r10048159;
        float r10048161 = r10048160 * r10048160;
        float r10048162 = r10048161 * r10048161;
        float r10048163 = r10048161 * r10048162;
        float r10048164 = 2448.522949;
        float r10048165 = r10048159 * r10048164;
        float r10048166 = r10048159 * r10048165;
        float r10048167 = -8252.429199;
        float r10048168 = r10048166 + r10048167;
        float r10048169 = r10048163 * r10048168;
        float r10048170 = 21.994629;
        float r10048171 = r10048159 * r10048170;
        float r10048172 = r10048171 * r10048159;
        float r10048173 = -0.209473;
        float r10048174 = r10048172 + r10048173;
        float r10048175 = -373.908691;
        float r10048176 = 2368.088379;
        float r10048177 = r10048176 * r10048159;
        float r10048178 = r10048159 * r10048177;
        float r10048179 = r10048175 + r10048178;
        float r10048180 = r10048161 * r10048179;
        float r10048181 = r10048174 + r10048180;
        float r10048182 = r10048169 + r10048181;
        float r10048183 = 10893.206543;
        float r10048184 = r10048183 * r10048160;
        float r10048185 = -7104.265137;
        float r10048186 = r10048184 + r10048185;
        float r10048187 = r10048162 * r10048186;
        float r10048188 = r10048182 + r10048187;
        return r10048188;
}

double f_od(double x) {
        double r10048189 = x;
        double r10048190 = r10048189 * r10048189;
        double r10048191 = r10048190 * r10048190;
        double r10048192 = r10048191 * r10048191;
        double r10048193 = r10048191 * r10048192;
        double r10048194 = 2448.522949;
        double r10048195 = r10048189 * r10048194;
        double r10048196 = r10048189 * r10048195;
        double r10048197 = -8252.429199;
        double r10048198 = r10048196 + r10048197;
        double r10048199 = r10048193 * r10048198;
        double r10048200 = 21.994629;
        double r10048201 = r10048189 * r10048200;
        double r10048202 = r10048201 * r10048189;
        double r10048203 = -0.209473;
        double r10048204 = r10048202 + r10048203;
        double r10048205 = -373.908691;
        double r10048206 = 2368.088379;
        double r10048207 = r10048206 * r10048189;
        double r10048208 = r10048189 * r10048207;
        double r10048209 = r10048205 + r10048208;
        double r10048210 = r10048191 * r10048209;
        double r10048211 = r10048204 + r10048210;
        double r10048212 = r10048199 + r10048211;
        double r10048213 = 10893.206543;
        double r10048214 = r10048213 * r10048190;
        double r10048215 = -7104.265137;
        double r10048216 = r10048214 + r10048215;
        double r10048217 = r10048192 * r10048216;
        double r10048218 = r10048212 + r10048217;
        return r10048218;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10048219, r10048220, r10048221, r10048222, r10048223, r10048224, r10048225, r10048226, r10048227, r10048228, r10048229, r10048230, r10048231, r10048232, r10048233, r10048234, r10048235, r10048236, r10048237, r10048238, r10048239, r10048240, r10048241, r10048242, r10048243, r10048244, r10048245, r10048246, r10048247, r10048248, r10048249, r10048250, r10048251, r10048252, r10048253, r10048254;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10048219, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048220, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r10048221);
        mpfr_init(r10048222);
        mpfr_init(r10048223);
        mpfr_init(r10048224);
        mpfr_init_set_str(r10048225, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r10048226);
        mpfr_init(r10048227);
        mpfr_init(r10048228);
        mpfr_init(r10048229);
        mpfr_init_set_str(r10048230, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r10048231);
        mpfr_init(r10048232);
        mpfr_init(r10048233);
        mpfr_init(r10048234);
        mpfr_init_set_str(r10048235, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r10048236);
        mpfr_init(r10048237);
        mpfr_init(r10048238);
        mpfr_init(r10048239);
        mpfr_init_set_str(r10048240, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r10048241);
        mpfr_init(r10048242);
        mpfr_init(r10048243);
        mpfr_init(r10048244);
        mpfr_init_set_str(r10048245, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r10048246);
        mpfr_init(r10048247);
        mpfr_init(r10048248);
        mpfr_init(r10048249);
        mpfr_init_set_str(r10048250, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r10048251);
        mpfr_init(r10048252);
        mpfr_init(r10048253);
        mpfr_init(r10048254);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10048221, x, MPFR_RNDN);
        mpfr_mul(r10048222, r10048221, r10048221, MPFR_RNDN);
        mpfr_mul(r10048223, r10048220, r10048222, MPFR_RNDN);
        mpfr_add(r10048224, r10048219, r10048223, MPFR_RNDN);
        ;
        mpfr_mul(r10048226, r10048222, r10048221, MPFR_RNDN);
        mpfr_mul(r10048227, r10048226, r10048221, MPFR_RNDN);
        mpfr_mul(r10048228, r10048225, r10048227, MPFR_RNDN);
        mpfr_add(r10048229, r10048224, r10048228, MPFR_RNDN);
        ;
        mpfr_mul(r10048231, r10048227, r10048221, MPFR_RNDN);
        mpfr_mul(r10048232, r10048231, r10048221, MPFR_RNDN);
        mpfr_mul(r10048233, r10048230, r10048232, MPFR_RNDN);
        mpfr_add(r10048234, r10048229, r10048233, MPFR_RNDN);
        ;
        mpfr_mul(r10048236, r10048232, r10048221, MPFR_RNDN);
        mpfr_mul(r10048237, r10048236, r10048221, MPFR_RNDN);
        mpfr_mul(r10048238, r10048235, r10048237, MPFR_RNDN);
        mpfr_add(r10048239, r10048234, r10048238, MPFR_RNDN);
        ;
        mpfr_mul(r10048241, r10048237, r10048221, MPFR_RNDN);
        mpfr_mul(r10048242, r10048241, r10048221, MPFR_RNDN);
        mpfr_mul(r10048243, r10048240, r10048242, MPFR_RNDN);
        mpfr_add(r10048244, r10048239, r10048243, MPFR_RNDN);
        ;
        mpfr_mul(r10048246, r10048242, r10048221, MPFR_RNDN);
        mpfr_mul(r10048247, r10048246, r10048221, MPFR_RNDN);
        mpfr_mul(r10048248, r10048245, r10048247, MPFR_RNDN);
        mpfr_add(r10048249, r10048244, r10048248, MPFR_RNDN);
        ;
        mpfr_mul(r10048251, r10048247, r10048221, MPFR_RNDN);
        mpfr_mul(r10048252, r10048251, r10048221, MPFR_RNDN);
        mpfr_mul(r10048253, r10048250, r10048252, MPFR_RNDN);
        mpfr_add(r10048254, r10048249, r10048253, MPFR_RNDN);
        return mpfr_get_d(r10048254, MPFR_RNDN);
}

static mpfr_t r10048255, r10048256, r10048257, r10048258, r10048259, r10048260, r10048261, r10048262, r10048263, r10048264, r10048265, r10048266, r10048267, r10048268, r10048269, r10048270, r10048271, r10048272, r10048273, r10048274, r10048275, r10048276, r10048277, r10048278, r10048279, r10048280, r10048281, r10048282, r10048283, r10048284;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10048255);
        mpfr_init(r10048256);
        mpfr_init(r10048257);
        mpfr_init(r10048258);
        mpfr_init(r10048259);
        mpfr_init_set_str(r10048260, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r10048261);
        mpfr_init(r10048262);
        mpfr_init_set_str(r10048263, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r10048264);
        mpfr_init(r10048265);
        mpfr_init_set_str(r10048266, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r10048267);
        mpfr_init(r10048268);
        mpfr_init_set_str(r10048269, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r10048270);
        mpfr_init_set_str(r10048271, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048272, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r10048273);
        mpfr_init(r10048274);
        mpfr_init(r10048275);
        mpfr_init(r10048276);
        mpfr_init(r10048277);
        mpfr_init(r10048278);
        mpfr_init_set_str(r10048279, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r10048280);
        mpfr_init_set_str(r10048281, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r10048282);
        mpfr_init(r10048283);
        mpfr_init(r10048284);
}

double f_fm(double x) {
        mpfr_set_d(r10048255, x, MPFR_RNDN);
        mpfr_mul(r10048256, r10048255, r10048255, MPFR_RNDN);
        mpfr_mul(r10048257, r10048256, r10048256, MPFR_RNDN);
        mpfr_mul(r10048258, r10048257, r10048257, MPFR_RNDN);
        mpfr_mul(r10048259, r10048257, r10048258, MPFR_RNDN);
        ;
        mpfr_mul(r10048261, r10048255, r10048260, MPFR_RNDN);
        mpfr_mul(r10048262, r10048255, r10048261, MPFR_RNDN);
        ;
        mpfr_add(r10048264, r10048262, r10048263, MPFR_RNDN);
        mpfr_mul(r10048265, r10048259, r10048264, MPFR_RNDN);
        ;
        mpfr_mul(r10048267, r10048255, r10048266, MPFR_RNDN);
        mpfr_mul(r10048268, r10048267, r10048255, MPFR_RNDN);
        ;
        mpfr_add(r10048270, r10048268, r10048269, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10048273, r10048272, r10048255, MPFR_RNDN);
        mpfr_mul(r10048274, r10048255, r10048273, MPFR_RNDN);
        mpfr_add(r10048275, r10048271, r10048274, MPFR_RNDN);
        mpfr_mul(r10048276, r10048257, r10048275, MPFR_RNDN);
        mpfr_add(r10048277, r10048270, r10048276, MPFR_RNDN);
        mpfr_add(r10048278, r10048265, r10048277, MPFR_RNDN);
        ;
        mpfr_mul(r10048280, r10048279, r10048256, MPFR_RNDN);
        ;
        mpfr_add(r10048282, r10048280, r10048281, MPFR_RNDN);
        mpfr_mul(r10048283, r10048258, r10048282, MPFR_RNDN);
        mpfr_add(r10048284, r10048278, r10048283, MPFR_RNDN);
        return mpfr_get_d(r10048284, MPFR_RNDN);
}

static mpfr_t r10048285, r10048286, r10048287, r10048288, r10048289, r10048290, r10048291, r10048292, r10048293, r10048294, r10048295, r10048296, r10048297, r10048298, r10048299, r10048300, r10048301, r10048302, r10048303, r10048304, r10048305, r10048306, r10048307, r10048308, r10048309, r10048310, r10048311, r10048312, r10048313, r10048314;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10048285);
        mpfr_init(r10048286);
        mpfr_init(r10048287);
        mpfr_init(r10048288);
        mpfr_init(r10048289);
        mpfr_init_set_str(r10048290, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r10048291);
        mpfr_init(r10048292);
        mpfr_init_set_str(r10048293, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r10048294);
        mpfr_init(r10048295);
        mpfr_init_set_str(r10048296, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r10048297);
        mpfr_init(r10048298);
        mpfr_init_set_str(r10048299, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r10048300);
        mpfr_init_set_str(r10048301, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048302, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r10048303);
        mpfr_init(r10048304);
        mpfr_init(r10048305);
        mpfr_init(r10048306);
        mpfr_init(r10048307);
        mpfr_init(r10048308);
        mpfr_init_set_str(r10048309, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r10048310);
        mpfr_init_set_str(r10048311, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r10048312);
        mpfr_init(r10048313);
        mpfr_init(r10048314);
}

double f_dm(double x) {
        mpfr_set_d(r10048285, x, MPFR_RNDN);
        mpfr_mul(r10048286, r10048285, r10048285, MPFR_RNDN);
        mpfr_mul(r10048287, r10048286, r10048286, MPFR_RNDN);
        mpfr_mul(r10048288, r10048287, r10048287, MPFR_RNDN);
        mpfr_mul(r10048289, r10048287, r10048288, MPFR_RNDN);
        ;
        mpfr_mul(r10048291, r10048285, r10048290, MPFR_RNDN);
        mpfr_mul(r10048292, r10048285, r10048291, MPFR_RNDN);
        ;
        mpfr_add(r10048294, r10048292, r10048293, MPFR_RNDN);
        mpfr_mul(r10048295, r10048289, r10048294, MPFR_RNDN);
        ;
        mpfr_mul(r10048297, r10048285, r10048296, MPFR_RNDN);
        mpfr_mul(r10048298, r10048297, r10048285, MPFR_RNDN);
        ;
        mpfr_add(r10048300, r10048298, r10048299, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10048303, r10048302, r10048285, MPFR_RNDN);
        mpfr_mul(r10048304, r10048285, r10048303, MPFR_RNDN);
        mpfr_add(r10048305, r10048301, r10048304, MPFR_RNDN);
        mpfr_mul(r10048306, r10048287, r10048305, MPFR_RNDN);
        mpfr_add(r10048307, r10048300, r10048306, MPFR_RNDN);
        mpfr_add(r10048308, r10048295, r10048307, MPFR_RNDN);
        ;
        mpfr_mul(r10048310, r10048309, r10048286, MPFR_RNDN);
        ;
        mpfr_add(r10048312, r10048310, r10048311, MPFR_RNDN);
        mpfr_mul(r10048313, r10048288, r10048312, MPFR_RNDN);
        mpfr_add(r10048314, r10048308, r10048313, MPFR_RNDN);
        return mpfr_get_d(r10048314, MPFR_RNDN);
}

