#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10198141 = 1.0;
        float r10198142 = -7.0;
        float r10198143 = x;
        float r10198144 = r10198142 * r10198143;
        float r10198145 = r10198141 + r10198144;
        float r10198146 = 10.5;
        float r10198147 = r10198143 * r10198143;
        float r10198148 = r10198146 * r10198147;
        float r10198149 = r10198145 + r10198148;
        float r10198150 = -5.833333;
        float r10198151 = r10198147 * r10198143;
        float r10198152 = r10198150 * r10198151;
        float r10198153 = r10198149 + r10198152;
        float r10198154 = 1.458333;
        float r10198155 = r10198151 * r10198143;
        float r10198156 = r10198154 * r10198155;
        float r10198157 = r10198153 + r10198156;
        float r10198158 = -0.175;
        float r10198159 = r10198155 * r10198143;
        float r10198160 = r10198158 * r10198159;
        float r10198161 = r10198157 + r10198160;
        float r10198162 = 0.009722;
        float r10198163 = r10198159 * r10198143;
        float r10198164 = r10198162 * r10198163;
        float r10198165 = r10198161 + r10198164;
        float r10198166 = -0.000198;
        float r10198167 = r10198163 * r10198143;
        float r10198168 = r10198166 * r10198167;
        float r10198169 = r10198165 + r10198168;
        return r10198169;
}

double f_id(double x) {
        double r10198170 = 1.0;
        double r10198171 = -7.0;
        double r10198172 = x;
        double r10198173 = r10198171 * r10198172;
        double r10198174 = r10198170 + r10198173;
        double r10198175 = 10.5;
        double r10198176 = r10198172 * r10198172;
        double r10198177 = r10198175 * r10198176;
        double r10198178 = r10198174 + r10198177;
        double r10198179 = -5.833333;
        double r10198180 = r10198176 * r10198172;
        double r10198181 = r10198179 * r10198180;
        double r10198182 = r10198178 + r10198181;
        double r10198183 = 1.458333;
        double r10198184 = r10198180 * r10198172;
        double r10198185 = r10198183 * r10198184;
        double r10198186 = r10198182 + r10198185;
        double r10198187 = -0.175;
        double r10198188 = r10198184 * r10198172;
        double r10198189 = r10198187 * r10198188;
        double r10198190 = r10198186 + r10198189;
        double r10198191 = 0.009722;
        double r10198192 = r10198188 * r10198172;
        double r10198193 = r10198191 * r10198192;
        double r10198194 = r10198190 + r10198193;
        double r10198195 = -0.000198;
        double r10198196 = r10198192 * r10198172;
        double r10198197 = r10198195 * r10198196;
        double r10198198 = r10198194 + r10198197;
        return r10198198;
}


double f_of(float x) {
        float r10198199 = x;
        float r10198200 = r10198199 * r10198199;
        float r10198201 = 10.5;
        float r10198202 = -5.833333;
        float r10198203 = r10198202 * r10198199;
        float r10198204 = r10198201 + r10198203;
        float r10198205 = r10198200 * r10198204;
        float r10198206 = cbrt(r10198205);
        float r10198207 = r10198206 * r10198206;
        float r10198208 = r10198207 * r10198206;
        float r10198209 = -7.0;
        float r10198210 = r10198199 * r10198209;
        float r10198211 = 1.0;
        float r10198212 = r10198210 + r10198211;
        float r10198213 = r10198208 + r10198212;
        float r10198214 = r10198200 * r10198200;
        float r10198215 = 1.458333;
        float r10198216 = -0.175;
        float r10198217 = r10198216 * r10198199;
        float r10198218 = r10198215 + r10198217;
        float r10198219 = r10198214 * r10198218;
        float r10198220 = 3;
        float r10198221 = pow(r10198200, r10198220);
        float r10198222 = cbrt(r10198221);
        float r10198223 = r10198214 * r10198222;
        float r10198224 = -0.000198;
        float r10198225 = r10198224 * r10198199;
        float r10198226 = 0.009722;
        float r10198227 = r10198225 + r10198226;
        float r10198228 = r10198223 * r10198227;
        float r10198229 = r10198219 + r10198228;
        float r10198230 = r10198213 + r10198229;
        return r10198230;
}

double f_od(double x) {
        double r10198231 = x;
        double r10198232 = r10198231 * r10198231;
        double r10198233 = 10.5;
        double r10198234 = -5.833333;
        double r10198235 = r10198234 * r10198231;
        double r10198236 = r10198233 + r10198235;
        double r10198237 = r10198232 * r10198236;
        double r10198238 = cbrt(r10198237);
        double r10198239 = r10198238 * r10198238;
        double r10198240 = r10198239 * r10198238;
        double r10198241 = -7.0;
        double r10198242 = r10198231 * r10198241;
        double r10198243 = 1.0;
        double r10198244 = r10198242 + r10198243;
        double r10198245 = r10198240 + r10198244;
        double r10198246 = r10198232 * r10198232;
        double r10198247 = 1.458333;
        double r10198248 = -0.175;
        double r10198249 = r10198248 * r10198231;
        double r10198250 = r10198247 + r10198249;
        double r10198251 = r10198246 * r10198250;
        double r10198252 = 3;
        double r10198253 = pow(r10198232, r10198252);
        double r10198254 = cbrt(r10198253);
        double r10198255 = r10198246 * r10198254;
        double r10198256 = -0.000198;
        double r10198257 = r10198256 * r10198231;
        double r10198258 = 0.009722;
        double r10198259 = r10198257 + r10198258;
        double r10198260 = r10198255 * r10198259;
        double r10198261 = r10198251 + r10198260;
        double r10198262 = r10198245 + r10198261;
        return r10198262;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198263, r10198264, r10198265, r10198266, r10198267, r10198268, r10198269, r10198270, r10198271, r10198272, r10198273, r10198274, r10198275, r10198276, r10198277, r10198278, r10198279, r10198280, r10198281, r10198282, r10198283, r10198284, r10198285, r10198286, r10198287, r10198288, r10198289, r10198290, r10198291;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10198263, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198264, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10198265);
        mpfr_init(r10198266);
        mpfr_init(r10198267);
        mpfr_init_set_str(r10198268, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10198269);
        mpfr_init(r10198270);
        mpfr_init(r10198271);
        mpfr_init_set_str(r10198272, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10198273);
        mpfr_init(r10198274);
        mpfr_init(r10198275);
        mpfr_init_set_str(r10198276, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10198277);
        mpfr_init(r10198278);
        mpfr_init(r10198279);
        mpfr_init_set_str(r10198280, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10198281);
        mpfr_init(r10198282);
        mpfr_init(r10198283);
        mpfr_init_set_str(r10198284, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10198285);
        mpfr_init(r10198286);
        mpfr_init(r10198287);
        mpfr_init_set_str(r10198288, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10198289);
        mpfr_init(r10198290);
        mpfr_init(r10198291);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198265, x, MPFR_RNDN);
        mpfr_mul(r10198266, r10198264, r10198265, MPFR_RNDN);
        mpfr_add(r10198267, r10198263, r10198266, MPFR_RNDN);
        ;
        mpfr_mul(r10198269, r10198265, r10198265, MPFR_RNDN);
        mpfr_mul(r10198270, r10198268, r10198269, MPFR_RNDN);
        mpfr_add(r10198271, r10198267, r10198270, MPFR_RNDN);
        ;
        mpfr_mul(r10198273, r10198269, r10198265, MPFR_RNDN);
        mpfr_mul(r10198274, r10198272, r10198273, MPFR_RNDN);
        mpfr_add(r10198275, r10198271, r10198274, MPFR_RNDN);
        ;
        mpfr_mul(r10198277, r10198273, r10198265, MPFR_RNDN);
        mpfr_mul(r10198278, r10198276, r10198277, MPFR_RNDN);
        mpfr_add(r10198279, r10198275, r10198278, MPFR_RNDN);
        ;
        mpfr_mul(r10198281, r10198277, r10198265, MPFR_RNDN);
        mpfr_mul(r10198282, r10198280, r10198281, MPFR_RNDN);
        mpfr_add(r10198283, r10198279, r10198282, MPFR_RNDN);
        ;
        mpfr_mul(r10198285, r10198281, r10198265, MPFR_RNDN);
        mpfr_mul(r10198286, r10198284, r10198285, MPFR_RNDN);
        mpfr_add(r10198287, r10198283, r10198286, MPFR_RNDN);
        ;
        mpfr_mul(r10198289, r10198285, r10198265, MPFR_RNDN);
        mpfr_mul(r10198290, r10198288, r10198289, MPFR_RNDN);
        mpfr_add(r10198291, r10198287, r10198290, MPFR_RNDN);
        return mpfr_get_d(r10198291, MPFR_RNDN);
}

static mpfr_t r10198292, r10198293, r10198294, r10198295, r10198296, r10198297, r10198298, r10198299, r10198300, r10198301, r10198302, r10198303, r10198304, r10198305, r10198306, r10198307, r10198308, r10198309, r10198310, r10198311, r10198312, r10198313, r10198314, r10198315, r10198316, r10198317, r10198318, r10198319, r10198320, r10198321, r10198322, r10198323;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198292);
        mpfr_init(r10198293);
        mpfr_init_set_str(r10198294, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198295, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10198296);
        mpfr_init(r10198297);
        mpfr_init(r10198298);
        mpfr_init(r10198299);
        mpfr_init(r10198300);
        mpfr_init(r10198301);
        mpfr_init_set_str(r10198302, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10198303);
        mpfr_init_set_str(r10198304, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198305);
        mpfr_init(r10198306);
        mpfr_init(r10198307);
        mpfr_init_set_str(r10198308, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198309, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10198310);
        mpfr_init(r10198311);
        mpfr_init(r10198312);
        mpfr_init_set_str(r10198313, "3", 10, MPFR_RNDN);
        mpfr_init(r10198314);
        mpfr_init(r10198315);
        mpfr_init(r10198316);
        mpfr_init_set_str(r10198317, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10198318);
        mpfr_init_set_str(r10198319, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10198320);
        mpfr_init(r10198321);
        mpfr_init(r10198322);
        mpfr_init(r10198323);
}

double f_fm(double x) {
        mpfr_set_d(r10198292, x, MPFR_RNDN);
        mpfr_mul(r10198293, r10198292, r10198292, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198296, r10198295, r10198292, MPFR_RNDN);
        mpfr_add(r10198297, r10198294, r10198296, MPFR_RNDN);
        mpfr_mul(r10198298, r10198293, r10198297, MPFR_RNDN);
        mpfr_cbrt(r10198299, r10198298, MPFR_RNDN);
        mpfr_mul(r10198300, r10198299, r10198299, MPFR_RNDN);
        mpfr_mul(r10198301, r10198300, r10198299, MPFR_RNDN);
        ;
        mpfr_mul(r10198303, r10198292, r10198302, MPFR_RNDN);
        ;
        mpfr_add(r10198305, r10198303, r10198304, MPFR_RNDN);
        mpfr_add(r10198306, r10198301, r10198305, MPFR_RNDN);
        mpfr_mul(r10198307, r10198293, r10198293, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198310, r10198309, r10198292, MPFR_RNDN);
        mpfr_add(r10198311, r10198308, r10198310, MPFR_RNDN);
        mpfr_mul(r10198312, r10198307, r10198311, MPFR_RNDN);
        ;
        mpfr_pow(r10198314, r10198293, r10198313, MPFR_RNDN);
        mpfr_cbrt(r10198315, r10198314, MPFR_RNDN);
        mpfr_mul(r10198316, r10198307, r10198315, MPFR_RNDN);
        ;
        mpfr_mul(r10198318, r10198317, r10198292, MPFR_RNDN);
        ;
        mpfr_add(r10198320, r10198318, r10198319, MPFR_RNDN);
        mpfr_mul(r10198321, r10198316, r10198320, MPFR_RNDN);
        mpfr_add(r10198322, r10198312, r10198321, MPFR_RNDN);
        mpfr_add(r10198323, r10198306, r10198322, MPFR_RNDN);
        return mpfr_get_d(r10198323, MPFR_RNDN);
}

static mpfr_t r10198324, r10198325, r10198326, r10198327, r10198328, r10198329, r10198330, r10198331, r10198332, r10198333, r10198334, r10198335, r10198336, r10198337, r10198338, r10198339, r10198340, r10198341, r10198342, r10198343, r10198344, r10198345, r10198346, r10198347, r10198348, r10198349, r10198350, r10198351, r10198352, r10198353, r10198354, r10198355;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198324);
        mpfr_init(r10198325);
        mpfr_init_set_str(r10198326, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198327, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10198328);
        mpfr_init(r10198329);
        mpfr_init(r10198330);
        mpfr_init(r10198331);
        mpfr_init(r10198332);
        mpfr_init(r10198333);
        mpfr_init_set_str(r10198334, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10198335);
        mpfr_init_set_str(r10198336, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198337);
        mpfr_init(r10198338);
        mpfr_init(r10198339);
        mpfr_init_set_str(r10198340, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198341, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10198342);
        mpfr_init(r10198343);
        mpfr_init(r10198344);
        mpfr_init_set_str(r10198345, "3", 10, MPFR_RNDN);
        mpfr_init(r10198346);
        mpfr_init(r10198347);
        mpfr_init(r10198348);
        mpfr_init_set_str(r10198349, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10198350);
        mpfr_init_set_str(r10198351, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10198352);
        mpfr_init(r10198353);
        mpfr_init(r10198354);
        mpfr_init(r10198355);
}

double f_dm(double x) {
        mpfr_set_d(r10198324, x, MPFR_RNDN);
        mpfr_mul(r10198325, r10198324, r10198324, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198328, r10198327, r10198324, MPFR_RNDN);
        mpfr_add(r10198329, r10198326, r10198328, MPFR_RNDN);
        mpfr_mul(r10198330, r10198325, r10198329, MPFR_RNDN);
        mpfr_cbrt(r10198331, r10198330, MPFR_RNDN);
        mpfr_mul(r10198332, r10198331, r10198331, MPFR_RNDN);
        mpfr_mul(r10198333, r10198332, r10198331, MPFR_RNDN);
        ;
        mpfr_mul(r10198335, r10198324, r10198334, MPFR_RNDN);
        ;
        mpfr_add(r10198337, r10198335, r10198336, MPFR_RNDN);
        mpfr_add(r10198338, r10198333, r10198337, MPFR_RNDN);
        mpfr_mul(r10198339, r10198325, r10198325, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198342, r10198341, r10198324, MPFR_RNDN);
        mpfr_add(r10198343, r10198340, r10198342, MPFR_RNDN);
        mpfr_mul(r10198344, r10198339, r10198343, MPFR_RNDN);
        ;
        mpfr_pow(r10198346, r10198325, r10198345, MPFR_RNDN);
        mpfr_cbrt(r10198347, r10198346, MPFR_RNDN);
        mpfr_mul(r10198348, r10198339, r10198347, MPFR_RNDN);
        ;
        mpfr_mul(r10198350, r10198349, r10198324, MPFR_RNDN);
        ;
        mpfr_add(r10198352, r10198350, r10198351, MPFR_RNDN);
        mpfr_mul(r10198353, r10198348, r10198352, MPFR_RNDN);
        mpfr_add(r10198354, r10198344, r10198353, MPFR_RNDN);
        mpfr_add(r10198355, r10198338, r10198354, MPFR_RNDN);
        return mpfr_get_d(r10198355, MPFR_RNDN);
}

