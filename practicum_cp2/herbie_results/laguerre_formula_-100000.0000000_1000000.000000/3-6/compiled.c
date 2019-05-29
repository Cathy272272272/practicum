#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10216187 = 1.0;
        float r10216188 = -6.0;
        float r10216189 = x;
        float r10216190 = r10216188 * r10216189;
        float r10216191 = r10216187 + r10216190;
        float r10216192 = 7.5;
        float r10216193 = r10216189 * r10216189;
        float r10216194 = r10216192 * r10216193;
        float r10216195 = r10216191 + r10216194;
        float r10216196 = -3.333333;
        float r10216197 = r10216193 * r10216189;
        float r10216198 = r10216196 * r10216197;
        float r10216199 = r10216195 + r10216198;
        float r10216200 = 0.625;
        float r10216201 = r10216197 * r10216189;
        float r10216202 = r10216200 * r10216201;
        float r10216203 = r10216199 + r10216202;
        float r10216204 = -0.05;
        float r10216205 = r10216201 * r10216189;
        float r10216206 = r10216204 * r10216205;
        float r10216207 = r10216203 + r10216206;
        float r10216208 = 0.001389;
        float r10216209 = r10216205 * r10216189;
        float r10216210 = r10216208 * r10216209;
        float r10216211 = r10216207 + r10216210;
        return r10216211;
}

double f_id(double x) {
        double r10216212 = 1.0;
        double r10216213 = -6.0;
        double r10216214 = x;
        double r10216215 = r10216213 * r10216214;
        double r10216216 = r10216212 + r10216215;
        double r10216217 = 7.5;
        double r10216218 = r10216214 * r10216214;
        double r10216219 = r10216217 * r10216218;
        double r10216220 = r10216216 + r10216219;
        double r10216221 = -3.333333;
        double r10216222 = r10216218 * r10216214;
        double r10216223 = r10216221 * r10216222;
        double r10216224 = r10216220 + r10216223;
        double r10216225 = 0.625;
        double r10216226 = r10216222 * r10216214;
        double r10216227 = r10216225 * r10216226;
        double r10216228 = r10216224 + r10216227;
        double r10216229 = -0.05;
        double r10216230 = r10216226 * r10216214;
        double r10216231 = r10216229 * r10216230;
        double r10216232 = r10216228 + r10216231;
        double r10216233 = 0.001389;
        double r10216234 = r10216230 * r10216214;
        double r10216235 = r10216233 * r10216234;
        double r10216236 = r10216232 + r10216235;
        return r10216236;
}


double f_of(float x) {
        float r10216237 = x;
        float r10216238 = r10216237 * r10216237;
        float r10216239 = r10216238 * r10216238;
        float r10216240 = 0.625;
        float r10216241 = -0.05;
        float r10216242 = r10216237 * r10216241;
        float r10216243 = r10216240 + r10216242;
        float r10216244 = r10216239 * r10216243;
        float r10216245 = cbrt(r10216239);
        float r10216246 = r10216245 * r10216245;
        float r10216247 = r10216246 * r10216245;
        float r10216248 = 0.001389;
        float r10216249 = r10216248 * r10216237;
        float r10216250 = r10216237 * r10216249;
        float r10216251 = r10216247 * r10216250;
        float r10216252 = r10216244 + r10216251;
        float r10216253 = 7.5;
        float r10216254 = -3.333333;
        float r10216255 = r10216237 * r10216254;
        float r10216256 = r10216253 + r10216255;
        float r10216257 = r10216238 * r10216256;
        float r10216258 = -6.0;
        float r10216259 = r10216237 * r10216258;
        float r10216260 = 1.0;
        float r10216261 = r10216259 + r10216260;
        float r10216262 = r10216257 + r10216261;
        float r10216263 = r10216252 + r10216262;
        return r10216263;
}

double f_od(double x) {
        double r10216264 = x;
        double r10216265 = r10216264 * r10216264;
        double r10216266 = r10216265 * r10216265;
        double r10216267 = 0.625;
        double r10216268 = -0.05;
        double r10216269 = r10216264 * r10216268;
        double r10216270 = r10216267 + r10216269;
        double r10216271 = r10216266 * r10216270;
        double r10216272 = cbrt(r10216266);
        double r10216273 = r10216272 * r10216272;
        double r10216274 = r10216273 * r10216272;
        double r10216275 = 0.001389;
        double r10216276 = r10216275 * r10216264;
        double r10216277 = r10216264 * r10216276;
        double r10216278 = r10216274 * r10216277;
        double r10216279 = r10216271 + r10216278;
        double r10216280 = 7.5;
        double r10216281 = -3.333333;
        double r10216282 = r10216264 * r10216281;
        double r10216283 = r10216280 + r10216282;
        double r10216284 = r10216265 * r10216283;
        double r10216285 = -6.0;
        double r10216286 = r10216264 * r10216285;
        double r10216287 = 1.0;
        double r10216288 = r10216286 + r10216287;
        double r10216289 = r10216284 + r10216288;
        double r10216290 = r10216279 + r10216289;
        return r10216290;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10216291, r10216292, r10216293, r10216294, r10216295, r10216296, r10216297, r10216298, r10216299, r10216300, r10216301, r10216302, r10216303, r10216304, r10216305, r10216306, r10216307, r10216308, r10216309, r10216310, r10216311, r10216312, r10216313, r10216314, r10216315;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10216291, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216292, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10216293);
        mpfr_init(r10216294);
        mpfr_init(r10216295);
        mpfr_init_set_str(r10216296, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10216297);
        mpfr_init(r10216298);
        mpfr_init(r10216299);
        mpfr_init_set_str(r10216300, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10216301);
        mpfr_init(r10216302);
        mpfr_init(r10216303);
        mpfr_init_set_str(r10216304, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10216305);
        mpfr_init(r10216306);
        mpfr_init(r10216307);
        mpfr_init_set_str(r10216308, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10216309);
        mpfr_init(r10216310);
        mpfr_init(r10216311);
        mpfr_init_set_str(r10216312, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10216313);
        mpfr_init(r10216314);
        mpfr_init(r10216315);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10216293, x, MPFR_RNDN);
        mpfr_mul(r10216294, r10216292, r10216293, MPFR_RNDN);
        mpfr_add(r10216295, r10216291, r10216294, MPFR_RNDN);
        ;
        mpfr_mul(r10216297, r10216293, r10216293, MPFR_RNDN);
        mpfr_mul(r10216298, r10216296, r10216297, MPFR_RNDN);
        mpfr_add(r10216299, r10216295, r10216298, MPFR_RNDN);
        ;
        mpfr_mul(r10216301, r10216297, r10216293, MPFR_RNDN);
        mpfr_mul(r10216302, r10216300, r10216301, MPFR_RNDN);
        mpfr_add(r10216303, r10216299, r10216302, MPFR_RNDN);
        ;
        mpfr_mul(r10216305, r10216301, r10216293, MPFR_RNDN);
        mpfr_mul(r10216306, r10216304, r10216305, MPFR_RNDN);
        mpfr_add(r10216307, r10216303, r10216306, MPFR_RNDN);
        ;
        mpfr_mul(r10216309, r10216305, r10216293, MPFR_RNDN);
        mpfr_mul(r10216310, r10216308, r10216309, MPFR_RNDN);
        mpfr_add(r10216311, r10216307, r10216310, MPFR_RNDN);
        ;
        mpfr_mul(r10216313, r10216309, r10216293, MPFR_RNDN);
        mpfr_mul(r10216314, r10216312, r10216313, MPFR_RNDN);
        mpfr_add(r10216315, r10216311, r10216314, MPFR_RNDN);
        return mpfr_get_d(r10216315, MPFR_RNDN);
}

static mpfr_t r10216316, r10216317, r10216318, r10216319, r10216320, r10216321, r10216322, r10216323, r10216324, r10216325, r10216326, r10216327, r10216328, r10216329, r10216330, r10216331, r10216332, r10216333, r10216334, r10216335, r10216336, r10216337, r10216338, r10216339, r10216340, r10216341, r10216342;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10216316);
        mpfr_init(r10216317);
        mpfr_init(r10216318);
        mpfr_init_set_str(r10216319, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216320, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10216321);
        mpfr_init(r10216322);
        mpfr_init(r10216323);
        mpfr_init(r10216324);
        mpfr_init(r10216325);
        mpfr_init(r10216326);
        mpfr_init_set_str(r10216327, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10216328);
        mpfr_init(r10216329);
        mpfr_init(r10216330);
        mpfr_init(r10216331);
        mpfr_init_set_str(r10216332, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216333, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10216334);
        mpfr_init(r10216335);
        mpfr_init(r10216336);
        mpfr_init_set_str(r10216337, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10216338);
        mpfr_init_set_str(r10216339, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216340);
        mpfr_init(r10216341);
        mpfr_init(r10216342);
}

double f_fm(double x) {
        mpfr_set_d(r10216316, x, MPFR_RNDN);
        mpfr_mul(r10216317, r10216316, r10216316, MPFR_RNDN);
        mpfr_mul(r10216318, r10216317, r10216317, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216321, r10216316, r10216320, MPFR_RNDN);
        mpfr_add(r10216322, r10216319, r10216321, MPFR_RNDN);
        mpfr_mul(r10216323, r10216318, r10216322, MPFR_RNDN);
        mpfr_cbrt(r10216324, r10216318, MPFR_RNDN);
        mpfr_mul(r10216325, r10216324, r10216324, MPFR_RNDN);
        mpfr_mul(r10216326, r10216325, r10216324, MPFR_RNDN);
        ;
        mpfr_mul(r10216328, r10216327, r10216316, MPFR_RNDN);
        mpfr_mul(r10216329, r10216316, r10216328, MPFR_RNDN);
        mpfr_mul(r10216330, r10216326, r10216329, MPFR_RNDN);
        mpfr_add(r10216331, r10216323, r10216330, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216334, r10216316, r10216333, MPFR_RNDN);
        mpfr_add(r10216335, r10216332, r10216334, MPFR_RNDN);
        mpfr_mul(r10216336, r10216317, r10216335, MPFR_RNDN);
        ;
        mpfr_mul(r10216338, r10216316, r10216337, MPFR_RNDN);
        ;
        mpfr_add(r10216340, r10216338, r10216339, MPFR_RNDN);
        mpfr_add(r10216341, r10216336, r10216340, MPFR_RNDN);
        mpfr_add(r10216342, r10216331, r10216341, MPFR_RNDN);
        return mpfr_get_d(r10216342, MPFR_RNDN);
}

static mpfr_t r10216343, r10216344, r10216345, r10216346, r10216347, r10216348, r10216349, r10216350, r10216351, r10216352, r10216353, r10216354, r10216355, r10216356, r10216357, r10216358, r10216359, r10216360, r10216361, r10216362, r10216363, r10216364, r10216365, r10216366, r10216367, r10216368, r10216369;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10216343);
        mpfr_init(r10216344);
        mpfr_init(r10216345);
        mpfr_init_set_str(r10216346, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216347, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10216348);
        mpfr_init(r10216349);
        mpfr_init(r10216350);
        mpfr_init(r10216351);
        mpfr_init(r10216352);
        mpfr_init(r10216353);
        mpfr_init_set_str(r10216354, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10216355);
        mpfr_init(r10216356);
        mpfr_init(r10216357);
        mpfr_init(r10216358);
        mpfr_init_set_str(r10216359, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216360, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10216361);
        mpfr_init(r10216362);
        mpfr_init(r10216363);
        mpfr_init_set_str(r10216364, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10216365);
        mpfr_init_set_str(r10216366, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216367);
        mpfr_init(r10216368);
        mpfr_init(r10216369);
}

double f_dm(double x) {
        mpfr_set_d(r10216343, x, MPFR_RNDN);
        mpfr_mul(r10216344, r10216343, r10216343, MPFR_RNDN);
        mpfr_mul(r10216345, r10216344, r10216344, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216348, r10216343, r10216347, MPFR_RNDN);
        mpfr_add(r10216349, r10216346, r10216348, MPFR_RNDN);
        mpfr_mul(r10216350, r10216345, r10216349, MPFR_RNDN);
        mpfr_cbrt(r10216351, r10216345, MPFR_RNDN);
        mpfr_mul(r10216352, r10216351, r10216351, MPFR_RNDN);
        mpfr_mul(r10216353, r10216352, r10216351, MPFR_RNDN);
        ;
        mpfr_mul(r10216355, r10216354, r10216343, MPFR_RNDN);
        mpfr_mul(r10216356, r10216343, r10216355, MPFR_RNDN);
        mpfr_mul(r10216357, r10216353, r10216356, MPFR_RNDN);
        mpfr_add(r10216358, r10216350, r10216357, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216361, r10216343, r10216360, MPFR_RNDN);
        mpfr_add(r10216362, r10216359, r10216361, MPFR_RNDN);
        mpfr_mul(r10216363, r10216344, r10216362, MPFR_RNDN);
        ;
        mpfr_mul(r10216365, r10216343, r10216364, MPFR_RNDN);
        ;
        mpfr_add(r10216367, r10216365, r10216366, MPFR_RNDN);
        mpfr_add(r10216368, r10216363, r10216367, MPFR_RNDN);
        mpfr_add(r10216369, r10216358, r10216368, MPFR_RNDN);
        return mpfr_get_d(r10216369, MPFR_RNDN);
}

