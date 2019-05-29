#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7514193 = -2.1875;
        float r7514194 = x;
        float r7514195 = r7514193 * r7514194;
        float r7514196 = 19.6875;
        float r7514197 = r7514194 * r7514194;
        float r7514198 = r7514197 * r7514194;
        float r7514199 = r7514196 * r7514198;
        float r7514200 = r7514195 + r7514199;
        float r7514201 = -43.3125;
        float r7514202 = r7514198 * r7514194;
        float r7514203 = r7514202 * r7514194;
        float r7514204 = r7514201 * r7514203;
        float r7514205 = r7514200 + r7514204;
        float r7514206 = 26.8125;
        float r7514207 = r7514203 * r7514194;
        float r7514208 = r7514207 * r7514194;
        float r7514209 = r7514206 * r7514208;
        float r7514210 = r7514205 + r7514209;
        return r7514210;
}

double f_id(double x) {
        double r7514211 = -2.1875;
        double r7514212 = x;
        double r7514213 = r7514211 * r7514212;
        double r7514214 = 19.6875;
        double r7514215 = r7514212 * r7514212;
        double r7514216 = r7514215 * r7514212;
        double r7514217 = r7514214 * r7514216;
        double r7514218 = r7514213 + r7514217;
        double r7514219 = -43.3125;
        double r7514220 = r7514216 * r7514212;
        double r7514221 = r7514220 * r7514212;
        double r7514222 = r7514219 * r7514221;
        double r7514223 = r7514218 + r7514222;
        double r7514224 = 26.8125;
        double r7514225 = r7514221 * r7514212;
        double r7514226 = r7514225 * r7514212;
        double r7514227 = r7514224 * r7514226;
        double r7514228 = r7514223 + r7514227;
        return r7514228;
}


double f_of(float x) {
        float r7514229 = x;
        float r7514230 = r7514229 * r7514229;
        float r7514231 = r7514230 * r7514230;
        float r7514232 = 26.8125;
        float r7514233 = r7514232 * r7514229;
        float r7514234 = r7514230 * r7514233;
        float r7514235 = -43.3125;
        float r7514236 = r7514229 * r7514235;
        float r7514237 = r7514234 + r7514236;
        float r7514238 = r7514231 * r7514237;
        float r7514239 = cbrt(r7514238);
        float r7514240 = r7514239 * r7514239;
        float r7514241 = r7514240 * r7514239;
        float r7514242 = -2.1875;
        float r7514243 = r7514242 * r7514229;
        float r7514244 = 19.6875;
        float r7514245 = r7514244 * r7514229;
        float r7514246 = r7514230 * r7514245;
        float r7514247 = r7514243 + r7514246;
        float r7514248 = r7514241 + r7514247;
        return r7514248;
}

double f_od(double x) {
        double r7514249 = x;
        double r7514250 = r7514249 * r7514249;
        double r7514251 = r7514250 * r7514250;
        double r7514252 = 26.8125;
        double r7514253 = r7514252 * r7514249;
        double r7514254 = r7514250 * r7514253;
        double r7514255 = -43.3125;
        double r7514256 = r7514249 * r7514255;
        double r7514257 = r7514254 + r7514256;
        double r7514258 = r7514251 * r7514257;
        double r7514259 = cbrt(r7514258);
        double r7514260 = r7514259 * r7514259;
        double r7514261 = r7514260 * r7514259;
        double r7514262 = -2.1875;
        double r7514263 = r7514262 * r7514249;
        double r7514264 = 19.6875;
        double r7514265 = r7514264 * r7514249;
        double r7514266 = r7514250 * r7514265;
        double r7514267 = r7514263 + r7514266;
        double r7514268 = r7514261 + r7514267;
        return r7514268;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514269, r7514270, r7514271, r7514272, r7514273, r7514274, r7514275, r7514276, r7514277, r7514278, r7514279, r7514280, r7514281, r7514282, r7514283, r7514284, r7514285, r7514286;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514269, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7514270);
        mpfr_init(r7514271);
        mpfr_init_set_str(r7514272, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7514273);
        mpfr_init(r7514274);
        mpfr_init(r7514275);
        mpfr_init(r7514276);
        mpfr_init_set_str(r7514277, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7514278);
        mpfr_init(r7514279);
        mpfr_init(r7514280);
        mpfr_init(r7514281);
        mpfr_init_set_str(r7514282, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7514283);
        mpfr_init(r7514284);
        mpfr_init(r7514285);
        mpfr_init(r7514286);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7514270, x, MPFR_RNDN);
        mpfr_mul(r7514271, r7514269, r7514270, MPFR_RNDN);
        ;
        mpfr_mul(r7514273, r7514270, r7514270, MPFR_RNDN);
        mpfr_mul(r7514274, r7514273, r7514270, MPFR_RNDN);
        mpfr_mul(r7514275, r7514272, r7514274, MPFR_RNDN);
        mpfr_add(r7514276, r7514271, r7514275, MPFR_RNDN);
        ;
        mpfr_mul(r7514278, r7514274, r7514270, MPFR_RNDN);
        mpfr_mul(r7514279, r7514278, r7514270, MPFR_RNDN);
        mpfr_mul(r7514280, r7514277, r7514279, MPFR_RNDN);
        mpfr_add(r7514281, r7514276, r7514280, MPFR_RNDN);
        ;
        mpfr_mul(r7514283, r7514279, r7514270, MPFR_RNDN);
        mpfr_mul(r7514284, r7514283, r7514270, MPFR_RNDN);
        mpfr_mul(r7514285, r7514282, r7514284, MPFR_RNDN);
        mpfr_add(r7514286, r7514281, r7514285, MPFR_RNDN);
        return mpfr_get_d(r7514286, MPFR_RNDN);
}

static mpfr_t r7514287, r7514288, r7514289, r7514290, r7514291, r7514292, r7514293, r7514294, r7514295, r7514296, r7514297, r7514298, r7514299, r7514300, r7514301, r7514302, r7514303, r7514304, r7514305, r7514306;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7514287);
        mpfr_init(r7514288);
        mpfr_init(r7514289);
        mpfr_init_set_str(r7514290, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7514291);
        mpfr_init(r7514292);
        mpfr_init_set_str(r7514293, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7514294);
        mpfr_init(r7514295);
        mpfr_init(r7514296);
        mpfr_init(r7514297);
        mpfr_init(r7514298);
        mpfr_init(r7514299);
        mpfr_init_set_str(r7514300, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7514301);
        mpfr_init_set_str(r7514302, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7514303);
        mpfr_init(r7514304);
        mpfr_init(r7514305);
        mpfr_init(r7514306);
}

double f_fm(double x) {
        mpfr_set_d(r7514287, x, MPFR_RNDN);
        mpfr_mul(r7514288, r7514287, r7514287, MPFR_RNDN);
        mpfr_mul(r7514289, r7514288, r7514288, MPFR_RNDN);
        ;
        mpfr_mul(r7514291, r7514290, r7514287, MPFR_RNDN);
        mpfr_mul(r7514292, r7514288, r7514291, MPFR_RNDN);
        ;
        mpfr_mul(r7514294, r7514287, r7514293, MPFR_RNDN);
        mpfr_add(r7514295, r7514292, r7514294, MPFR_RNDN);
        mpfr_mul(r7514296, r7514289, r7514295, MPFR_RNDN);
        mpfr_cbrt(r7514297, r7514296, MPFR_RNDN);
        mpfr_mul(r7514298, r7514297, r7514297, MPFR_RNDN);
        mpfr_mul(r7514299, r7514298, r7514297, MPFR_RNDN);
        ;
        mpfr_mul(r7514301, r7514300, r7514287, MPFR_RNDN);
        ;
        mpfr_mul(r7514303, r7514302, r7514287, MPFR_RNDN);
        mpfr_mul(r7514304, r7514288, r7514303, MPFR_RNDN);
        mpfr_add(r7514305, r7514301, r7514304, MPFR_RNDN);
        mpfr_add(r7514306, r7514299, r7514305, MPFR_RNDN);
        return mpfr_get_d(r7514306, MPFR_RNDN);
}

static mpfr_t r7514307, r7514308, r7514309, r7514310, r7514311, r7514312, r7514313, r7514314, r7514315, r7514316, r7514317, r7514318, r7514319, r7514320, r7514321, r7514322, r7514323, r7514324, r7514325, r7514326;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7514307);
        mpfr_init(r7514308);
        mpfr_init(r7514309);
        mpfr_init_set_str(r7514310, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7514311);
        mpfr_init(r7514312);
        mpfr_init_set_str(r7514313, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7514314);
        mpfr_init(r7514315);
        mpfr_init(r7514316);
        mpfr_init(r7514317);
        mpfr_init(r7514318);
        mpfr_init(r7514319);
        mpfr_init_set_str(r7514320, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7514321);
        mpfr_init_set_str(r7514322, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7514323);
        mpfr_init(r7514324);
        mpfr_init(r7514325);
        mpfr_init(r7514326);
}

double f_dm(double x) {
        mpfr_set_d(r7514307, x, MPFR_RNDN);
        mpfr_mul(r7514308, r7514307, r7514307, MPFR_RNDN);
        mpfr_mul(r7514309, r7514308, r7514308, MPFR_RNDN);
        ;
        mpfr_mul(r7514311, r7514310, r7514307, MPFR_RNDN);
        mpfr_mul(r7514312, r7514308, r7514311, MPFR_RNDN);
        ;
        mpfr_mul(r7514314, r7514307, r7514313, MPFR_RNDN);
        mpfr_add(r7514315, r7514312, r7514314, MPFR_RNDN);
        mpfr_mul(r7514316, r7514309, r7514315, MPFR_RNDN);
        mpfr_cbrt(r7514317, r7514316, MPFR_RNDN);
        mpfr_mul(r7514318, r7514317, r7514317, MPFR_RNDN);
        mpfr_mul(r7514319, r7514318, r7514317, MPFR_RNDN);
        ;
        mpfr_mul(r7514321, r7514320, r7514307, MPFR_RNDN);
        ;
        mpfr_mul(r7514323, r7514322, r7514307, MPFR_RNDN);
        mpfr_mul(r7514324, r7514308, r7514323, MPFR_RNDN);
        mpfr_add(r7514325, r7514321, r7514324, MPFR_RNDN);
        mpfr_add(r7514326, r7514319, r7514325, MPFR_RNDN);
        return mpfr_get_d(r7514326, MPFR_RNDN);
}

