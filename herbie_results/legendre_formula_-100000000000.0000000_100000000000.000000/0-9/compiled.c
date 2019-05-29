#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6764163 = 2.460938;
        float r6764164 = x;
        float r6764165 = r6764163 * r6764164;
        float r6764166 = -36.09375;
        float r6764167 = r6764164 * r6764164;
        float r6764168 = r6764167 * r6764164;
        float r6764169 = r6764166 * r6764168;
        float r6764170 = r6764165 + r6764169;
        float r6764171 = 140.765625;
        float r6764172 = r6764168 * r6764164;
        float r6764173 = r6764172 * r6764164;
        float r6764174 = r6764171 * r6764173;
        float r6764175 = r6764170 + r6764174;
        float r6764176 = -201.09375;
        float r6764177 = r6764173 * r6764164;
        float r6764178 = r6764177 * r6764164;
        float r6764179 = r6764176 * r6764178;
        float r6764180 = r6764175 + r6764179;
        float r6764181 = 94.960938;
        float r6764182 = r6764178 * r6764164;
        float r6764183 = r6764182 * r6764164;
        float r6764184 = r6764181 * r6764183;
        float r6764185 = r6764180 + r6764184;
        return r6764185;
}

double f_id(double x) {
        double r6764186 = 2.460938;
        double r6764187 = x;
        double r6764188 = r6764186 * r6764187;
        double r6764189 = -36.09375;
        double r6764190 = r6764187 * r6764187;
        double r6764191 = r6764190 * r6764187;
        double r6764192 = r6764189 * r6764191;
        double r6764193 = r6764188 + r6764192;
        double r6764194 = 140.765625;
        double r6764195 = r6764191 * r6764187;
        double r6764196 = r6764195 * r6764187;
        double r6764197 = r6764194 * r6764196;
        double r6764198 = r6764193 + r6764197;
        double r6764199 = -201.09375;
        double r6764200 = r6764196 * r6764187;
        double r6764201 = r6764200 * r6764187;
        double r6764202 = r6764199 * r6764201;
        double r6764203 = r6764198 + r6764202;
        double r6764204 = 94.960938;
        double r6764205 = r6764201 * r6764187;
        double r6764206 = r6764205 * r6764187;
        double r6764207 = r6764204 * r6764206;
        double r6764208 = r6764203 + r6764207;
        return r6764208;
}


double f_of(float x) {
        float r6764209 = x;
        float r6764210 = r6764209 * r6764209;
        float r6764211 = 140.765625;
        float r6764212 = r6764209 * r6764211;
        float r6764213 = r6764210 * r6764212;
        float r6764214 = r6764210 * r6764213;
        float r6764215 = 2.460938;
        float r6764216 = r6764215 * r6764209;
        float r6764217 = -36.09375;
        float r6764218 = r6764217 * r6764209;
        float r6764219 = r6764218 * r6764210;
        float r6764220 = r6764216 + r6764219;
        float r6764221 = r6764214 + r6764220;
        float r6764222 = 3;
        float r6764223 = r6764222 + r6764222;
        float r6764224 = pow(r6764209, r6764223);
        float r6764225 = r6764224 * r6764209;
        float r6764226 = -201.09375;
        float r6764227 = 94.960938;
        float r6764228 = r6764227 * r6764209;
        float r6764229 = r6764209 * r6764228;
        float r6764230 = r6764226 + r6764229;
        float r6764231 = r6764225 * r6764230;
        float r6764232 = r6764221 + r6764231;
        return r6764232;
}

double f_od(double x) {
        double r6764233 = x;
        double r6764234 = r6764233 * r6764233;
        double r6764235 = 140.765625;
        double r6764236 = r6764233 * r6764235;
        double r6764237 = r6764234 * r6764236;
        double r6764238 = r6764234 * r6764237;
        double r6764239 = 2.460938;
        double r6764240 = r6764239 * r6764233;
        double r6764241 = -36.09375;
        double r6764242 = r6764241 * r6764233;
        double r6764243 = r6764242 * r6764234;
        double r6764244 = r6764240 + r6764243;
        double r6764245 = r6764238 + r6764244;
        double r6764246 = 3;
        double r6764247 = r6764246 + r6764246;
        double r6764248 = pow(r6764233, r6764247);
        double r6764249 = r6764248 * r6764233;
        double r6764250 = -201.09375;
        double r6764251 = 94.960938;
        double r6764252 = r6764251 * r6764233;
        double r6764253 = r6764233 * r6764252;
        double r6764254 = r6764250 + r6764253;
        double r6764255 = r6764249 * r6764254;
        double r6764256 = r6764245 + r6764255;
        return r6764256;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764257, r6764258, r6764259, r6764260, r6764261, r6764262, r6764263, r6764264, r6764265, r6764266, r6764267, r6764268, r6764269, r6764270, r6764271, r6764272, r6764273, r6764274, r6764275, r6764276, r6764277, r6764278, r6764279;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6764257, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6764258);
        mpfr_init(r6764259);
        mpfr_init_set_str(r6764260, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6764261);
        mpfr_init(r6764262);
        mpfr_init(r6764263);
        mpfr_init(r6764264);
        mpfr_init_set_str(r6764265, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6764266);
        mpfr_init(r6764267);
        mpfr_init(r6764268);
        mpfr_init(r6764269);
        mpfr_init_set_str(r6764270, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6764271);
        mpfr_init(r6764272);
        mpfr_init(r6764273);
        mpfr_init(r6764274);
        mpfr_init_set_str(r6764275, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6764276);
        mpfr_init(r6764277);
        mpfr_init(r6764278);
        mpfr_init(r6764279);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6764258, x, MPFR_RNDN);
        mpfr_mul(r6764259, r6764257, r6764258, MPFR_RNDN);
        ;
        mpfr_mul(r6764261, r6764258, r6764258, MPFR_RNDN);
        mpfr_mul(r6764262, r6764261, r6764258, MPFR_RNDN);
        mpfr_mul(r6764263, r6764260, r6764262, MPFR_RNDN);
        mpfr_add(r6764264, r6764259, r6764263, MPFR_RNDN);
        ;
        mpfr_mul(r6764266, r6764262, r6764258, MPFR_RNDN);
        mpfr_mul(r6764267, r6764266, r6764258, MPFR_RNDN);
        mpfr_mul(r6764268, r6764265, r6764267, MPFR_RNDN);
        mpfr_add(r6764269, r6764264, r6764268, MPFR_RNDN);
        ;
        mpfr_mul(r6764271, r6764267, r6764258, MPFR_RNDN);
        mpfr_mul(r6764272, r6764271, r6764258, MPFR_RNDN);
        mpfr_mul(r6764273, r6764270, r6764272, MPFR_RNDN);
        mpfr_add(r6764274, r6764269, r6764273, MPFR_RNDN);
        ;
        mpfr_mul(r6764276, r6764272, r6764258, MPFR_RNDN);
        mpfr_mul(r6764277, r6764276, r6764258, MPFR_RNDN);
        mpfr_mul(r6764278, r6764275, r6764277, MPFR_RNDN);
        mpfr_add(r6764279, r6764274, r6764278, MPFR_RNDN);
        return mpfr_get_d(r6764279, MPFR_RNDN);
}

static mpfr_t r6764280, r6764281, r6764282, r6764283, r6764284, r6764285, r6764286, r6764287, r6764288, r6764289, r6764290, r6764291, r6764292, r6764293, r6764294, r6764295, r6764296, r6764297, r6764298, r6764299, r6764300, r6764301, r6764302, r6764303;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6764280);
        mpfr_init(r6764281);
        mpfr_init_set_str(r6764282, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6764283);
        mpfr_init(r6764284);
        mpfr_init(r6764285);
        mpfr_init_set_str(r6764286, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6764287);
        mpfr_init_set_str(r6764288, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6764289);
        mpfr_init(r6764290);
        mpfr_init(r6764291);
        mpfr_init(r6764292);
        mpfr_init_set_str(r6764293, "3", 10, MPFR_RNDN);
        mpfr_init(r6764294);
        mpfr_init(r6764295);
        mpfr_init(r6764296);
        mpfr_init_set_str(r6764297, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764298, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6764299);
        mpfr_init(r6764300);
        mpfr_init(r6764301);
        mpfr_init(r6764302);
        mpfr_init(r6764303);
}

double f_fm(double x) {
        mpfr_set_d(r6764280, x, MPFR_RNDN);
        mpfr_mul(r6764281, r6764280, r6764280, MPFR_RNDN);
        ;
        mpfr_mul(r6764283, r6764280, r6764282, MPFR_RNDN);
        mpfr_mul(r6764284, r6764281, r6764283, MPFR_RNDN);
        mpfr_mul(r6764285, r6764281, r6764284, MPFR_RNDN);
        ;
        mpfr_mul(r6764287, r6764286, r6764280, MPFR_RNDN);
        ;
        mpfr_mul(r6764289, r6764288, r6764280, MPFR_RNDN);
        mpfr_mul(r6764290, r6764289, r6764281, MPFR_RNDN);
        mpfr_add(r6764291, r6764287, r6764290, MPFR_RNDN);
        mpfr_add(r6764292, r6764285, r6764291, MPFR_RNDN);
        ;
        mpfr_add(r6764294, r6764293, r6764293, MPFR_RNDN);
        mpfr_pow(r6764295, r6764280, r6764294, MPFR_RNDN);
        mpfr_mul(r6764296, r6764295, r6764280, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6764299, r6764298, r6764280, MPFR_RNDN);
        mpfr_mul(r6764300, r6764280, r6764299, MPFR_RNDN);
        mpfr_add(r6764301, r6764297, r6764300, MPFR_RNDN);
        mpfr_mul(r6764302, r6764296, r6764301, MPFR_RNDN);
        mpfr_add(r6764303, r6764292, r6764302, MPFR_RNDN);
        return mpfr_get_d(r6764303, MPFR_RNDN);
}

static mpfr_t r6764304, r6764305, r6764306, r6764307, r6764308, r6764309, r6764310, r6764311, r6764312, r6764313, r6764314, r6764315, r6764316, r6764317, r6764318, r6764319, r6764320, r6764321, r6764322, r6764323, r6764324, r6764325, r6764326, r6764327;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6764304);
        mpfr_init(r6764305);
        mpfr_init_set_str(r6764306, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6764307);
        mpfr_init(r6764308);
        mpfr_init(r6764309);
        mpfr_init_set_str(r6764310, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6764311);
        mpfr_init_set_str(r6764312, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6764313);
        mpfr_init(r6764314);
        mpfr_init(r6764315);
        mpfr_init(r6764316);
        mpfr_init_set_str(r6764317, "3", 10, MPFR_RNDN);
        mpfr_init(r6764318);
        mpfr_init(r6764319);
        mpfr_init(r6764320);
        mpfr_init_set_str(r6764321, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764322, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6764323);
        mpfr_init(r6764324);
        mpfr_init(r6764325);
        mpfr_init(r6764326);
        mpfr_init(r6764327);
}

double f_dm(double x) {
        mpfr_set_d(r6764304, x, MPFR_RNDN);
        mpfr_mul(r6764305, r6764304, r6764304, MPFR_RNDN);
        ;
        mpfr_mul(r6764307, r6764304, r6764306, MPFR_RNDN);
        mpfr_mul(r6764308, r6764305, r6764307, MPFR_RNDN);
        mpfr_mul(r6764309, r6764305, r6764308, MPFR_RNDN);
        ;
        mpfr_mul(r6764311, r6764310, r6764304, MPFR_RNDN);
        ;
        mpfr_mul(r6764313, r6764312, r6764304, MPFR_RNDN);
        mpfr_mul(r6764314, r6764313, r6764305, MPFR_RNDN);
        mpfr_add(r6764315, r6764311, r6764314, MPFR_RNDN);
        mpfr_add(r6764316, r6764309, r6764315, MPFR_RNDN);
        ;
        mpfr_add(r6764318, r6764317, r6764317, MPFR_RNDN);
        mpfr_pow(r6764319, r6764304, r6764318, MPFR_RNDN);
        mpfr_mul(r6764320, r6764319, r6764304, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6764323, r6764322, r6764304, MPFR_RNDN);
        mpfr_mul(r6764324, r6764304, r6764323, MPFR_RNDN);
        mpfr_add(r6764325, r6764321, r6764324, MPFR_RNDN);
        mpfr_mul(r6764326, r6764320, r6764325, MPFR_RNDN);
        mpfr_add(r6764327, r6764316, r6764326, MPFR_RNDN);
        return mpfr_get_d(r6764327, MPFR_RNDN);
}

