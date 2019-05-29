#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6896208 = 1680.0;
        float r6896209 = -13440.0;
        float r6896210 = x;
        float r6896211 = r6896210 * r6896210;
        float r6896212 = r6896209 * r6896211;
        float r6896213 = r6896208 + r6896212;
        float r6896214 = 13440.0;
        float r6896215 = r6896211 * r6896210;
        float r6896216 = r6896215 * r6896210;
        float r6896217 = r6896214 * r6896216;
        float r6896218 = r6896213 + r6896217;
        float r6896219 = -3584.0;
        float r6896220 = r6896216 * r6896210;
        float r6896221 = r6896220 * r6896210;
        float r6896222 = r6896219 * r6896221;
        float r6896223 = r6896218 + r6896222;
        float r6896224 = 256.0;
        float r6896225 = r6896221 * r6896210;
        float r6896226 = r6896225 * r6896210;
        float r6896227 = r6896224 * r6896226;
        float r6896228 = r6896223 + r6896227;
        return r6896228;
}

double f_id(double x) {
        double r6896229 = 1680.0;
        double r6896230 = -13440.0;
        double r6896231 = x;
        double r6896232 = r6896231 * r6896231;
        double r6896233 = r6896230 * r6896232;
        double r6896234 = r6896229 + r6896233;
        double r6896235 = 13440.0;
        double r6896236 = r6896232 * r6896231;
        double r6896237 = r6896236 * r6896231;
        double r6896238 = r6896235 * r6896237;
        double r6896239 = r6896234 + r6896238;
        double r6896240 = -3584.0;
        double r6896241 = r6896237 * r6896231;
        double r6896242 = r6896241 * r6896231;
        double r6896243 = r6896240 * r6896242;
        double r6896244 = r6896239 + r6896243;
        double r6896245 = 256.0;
        double r6896246 = r6896242 * r6896231;
        double r6896247 = r6896246 * r6896231;
        double r6896248 = r6896245 * r6896247;
        double r6896249 = r6896244 + r6896248;
        return r6896249;
}


double f_of(float x) {
        float r6896250 = 1680.0;
        float r6896251 = -13440.0;
        float r6896252 = x;
        float r6896253 = r6896252 * r6896252;
        float r6896254 = r6896251 * r6896253;
        float r6896255 = r6896250 + r6896254;
        float r6896256 = 13440.0;
        float r6896257 = r6896253 * r6896252;
        float r6896258 = r6896257 * r6896252;
        float r6896259 = r6896256 * r6896258;
        float r6896260 = r6896255 + r6896259;
        float r6896261 = -3584.0;
        float r6896262 = r6896258 * r6896252;
        float r6896263 = r6896262 * r6896252;
        float r6896264 = r6896261 * r6896263;
        float r6896265 = r6896260 + r6896264;
        float r6896266 = 256.0;
        float r6896267 = 3;
        float r6896268 = pow(r6896252, r6896267);
        float r6896269 = r6896268 * r6896252;
        float r6896270 = r6896269 * r6896252;
        float r6896271 = r6896270 * r6896252;
        float r6896272 = r6896271 * r6896252;
        float r6896273 = r6896272 * r6896252;
        float r6896274 = r6896266 * r6896273;
        float r6896275 = r6896265 + r6896274;
        return r6896275;
}

double f_od(double x) {
        double r6896276 = 1680.0;
        double r6896277 = -13440.0;
        double r6896278 = x;
        double r6896279 = r6896278 * r6896278;
        double r6896280 = r6896277 * r6896279;
        double r6896281 = r6896276 + r6896280;
        double r6896282 = 13440.0;
        double r6896283 = r6896279 * r6896278;
        double r6896284 = r6896283 * r6896278;
        double r6896285 = r6896282 * r6896284;
        double r6896286 = r6896281 + r6896285;
        double r6896287 = -3584.0;
        double r6896288 = r6896284 * r6896278;
        double r6896289 = r6896288 * r6896278;
        double r6896290 = r6896287 * r6896289;
        double r6896291 = r6896286 + r6896290;
        double r6896292 = 256.0;
        double r6896293 = 3;
        double r6896294 = pow(r6896278, r6896293);
        double r6896295 = r6896294 * r6896278;
        double r6896296 = r6896295 * r6896278;
        double r6896297 = r6896296 * r6896278;
        double r6896298 = r6896297 * r6896278;
        double r6896299 = r6896298 * r6896278;
        double r6896300 = r6896292 * r6896299;
        double r6896301 = r6896291 + r6896300;
        return r6896301;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896302, r6896303, r6896304, r6896305, r6896306, r6896307, r6896308, r6896309, r6896310, r6896311, r6896312, r6896313, r6896314, r6896315, r6896316, r6896317, r6896318, r6896319, r6896320, r6896321, r6896322;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896302, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896303, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r6896304);
        mpfr_init(r6896305);
        mpfr_init(r6896306);
        mpfr_init(r6896307);
        mpfr_init_set_str(r6896308, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r6896309);
        mpfr_init(r6896310);
        mpfr_init(r6896311);
        mpfr_init(r6896312);
        mpfr_init_set_str(r6896313, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r6896314);
        mpfr_init(r6896315);
        mpfr_init(r6896316);
        mpfr_init(r6896317);
        mpfr_init_set_str(r6896318, "256.0", 10, MPFR_RNDN);
        mpfr_init(r6896319);
        mpfr_init(r6896320);
        mpfr_init(r6896321);
        mpfr_init(r6896322);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6896304, x, MPFR_RNDN);
        mpfr_mul(r6896305, r6896304, r6896304, MPFR_RNDN);
        mpfr_mul(r6896306, r6896303, r6896305, MPFR_RNDN);
        mpfr_add(r6896307, r6896302, r6896306, MPFR_RNDN);
        ;
        mpfr_mul(r6896309, r6896305, r6896304, MPFR_RNDN);
        mpfr_mul(r6896310, r6896309, r6896304, MPFR_RNDN);
        mpfr_mul(r6896311, r6896308, r6896310, MPFR_RNDN);
        mpfr_add(r6896312, r6896307, r6896311, MPFR_RNDN);
        ;
        mpfr_mul(r6896314, r6896310, r6896304, MPFR_RNDN);
        mpfr_mul(r6896315, r6896314, r6896304, MPFR_RNDN);
        mpfr_mul(r6896316, r6896313, r6896315, MPFR_RNDN);
        mpfr_add(r6896317, r6896312, r6896316, MPFR_RNDN);
        ;
        mpfr_mul(r6896319, r6896315, r6896304, MPFR_RNDN);
        mpfr_mul(r6896320, r6896319, r6896304, MPFR_RNDN);
        mpfr_mul(r6896321, r6896318, r6896320, MPFR_RNDN);
        mpfr_add(r6896322, r6896317, r6896321, MPFR_RNDN);
        return mpfr_get_d(r6896322, MPFR_RNDN);
}

static mpfr_t r6896323, r6896324, r6896325, r6896326, r6896327, r6896328, r6896329, r6896330, r6896331, r6896332, r6896333, r6896334, r6896335, r6896336, r6896337, r6896338, r6896339, r6896340, r6896341, r6896342, r6896343, r6896344, r6896345, r6896346, r6896347, r6896348;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896323, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896324, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r6896325);
        mpfr_init(r6896326);
        mpfr_init(r6896327);
        mpfr_init(r6896328);
        mpfr_init_set_str(r6896329, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r6896330);
        mpfr_init(r6896331);
        mpfr_init(r6896332);
        mpfr_init(r6896333);
        mpfr_init_set_str(r6896334, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r6896335);
        mpfr_init(r6896336);
        mpfr_init(r6896337);
        mpfr_init(r6896338);
        mpfr_init_set_str(r6896339, "256.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896340, "3", 10, MPFR_RNDN);
        mpfr_init(r6896341);
        mpfr_init(r6896342);
        mpfr_init(r6896343);
        mpfr_init(r6896344);
        mpfr_init(r6896345);
        mpfr_init(r6896346);
        mpfr_init(r6896347);
        mpfr_init(r6896348);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6896325, x, MPFR_RNDN);
        mpfr_mul(r6896326, r6896325, r6896325, MPFR_RNDN);
        mpfr_mul(r6896327, r6896324, r6896326, MPFR_RNDN);
        mpfr_add(r6896328, r6896323, r6896327, MPFR_RNDN);
        ;
        mpfr_mul(r6896330, r6896326, r6896325, MPFR_RNDN);
        mpfr_mul(r6896331, r6896330, r6896325, MPFR_RNDN);
        mpfr_mul(r6896332, r6896329, r6896331, MPFR_RNDN);
        mpfr_add(r6896333, r6896328, r6896332, MPFR_RNDN);
        ;
        mpfr_mul(r6896335, r6896331, r6896325, MPFR_RNDN);
        mpfr_mul(r6896336, r6896335, r6896325, MPFR_RNDN);
        mpfr_mul(r6896337, r6896334, r6896336, MPFR_RNDN);
        mpfr_add(r6896338, r6896333, r6896337, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896341, r6896325, r6896340, MPFR_RNDN);
        mpfr_mul(r6896342, r6896341, r6896325, MPFR_RNDN);
        mpfr_mul(r6896343, r6896342, r6896325, MPFR_RNDN);
        mpfr_mul(r6896344, r6896343, r6896325, MPFR_RNDN);
        mpfr_mul(r6896345, r6896344, r6896325, MPFR_RNDN);
        mpfr_mul(r6896346, r6896345, r6896325, MPFR_RNDN);
        mpfr_mul(r6896347, r6896339, r6896346, MPFR_RNDN);
        mpfr_add(r6896348, r6896338, r6896347, MPFR_RNDN);
        return mpfr_get_d(r6896348, MPFR_RNDN);
}

static mpfr_t r6896349, r6896350, r6896351, r6896352, r6896353, r6896354, r6896355, r6896356, r6896357, r6896358, r6896359, r6896360, r6896361, r6896362, r6896363, r6896364, r6896365, r6896366, r6896367, r6896368, r6896369, r6896370, r6896371, r6896372, r6896373, r6896374;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896349, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896350, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r6896351);
        mpfr_init(r6896352);
        mpfr_init(r6896353);
        mpfr_init(r6896354);
        mpfr_init_set_str(r6896355, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r6896356);
        mpfr_init(r6896357);
        mpfr_init(r6896358);
        mpfr_init(r6896359);
        mpfr_init_set_str(r6896360, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r6896361);
        mpfr_init(r6896362);
        mpfr_init(r6896363);
        mpfr_init(r6896364);
        mpfr_init_set_str(r6896365, "256.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896366, "3", 10, MPFR_RNDN);
        mpfr_init(r6896367);
        mpfr_init(r6896368);
        mpfr_init(r6896369);
        mpfr_init(r6896370);
        mpfr_init(r6896371);
        mpfr_init(r6896372);
        mpfr_init(r6896373);
        mpfr_init(r6896374);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6896351, x, MPFR_RNDN);
        mpfr_mul(r6896352, r6896351, r6896351, MPFR_RNDN);
        mpfr_mul(r6896353, r6896350, r6896352, MPFR_RNDN);
        mpfr_add(r6896354, r6896349, r6896353, MPFR_RNDN);
        ;
        mpfr_mul(r6896356, r6896352, r6896351, MPFR_RNDN);
        mpfr_mul(r6896357, r6896356, r6896351, MPFR_RNDN);
        mpfr_mul(r6896358, r6896355, r6896357, MPFR_RNDN);
        mpfr_add(r6896359, r6896354, r6896358, MPFR_RNDN);
        ;
        mpfr_mul(r6896361, r6896357, r6896351, MPFR_RNDN);
        mpfr_mul(r6896362, r6896361, r6896351, MPFR_RNDN);
        mpfr_mul(r6896363, r6896360, r6896362, MPFR_RNDN);
        mpfr_add(r6896364, r6896359, r6896363, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896367, r6896351, r6896366, MPFR_RNDN);
        mpfr_mul(r6896368, r6896367, r6896351, MPFR_RNDN);
        mpfr_mul(r6896369, r6896368, r6896351, MPFR_RNDN);
        mpfr_mul(r6896370, r6896369, r6896351, MPFR_RNDN);
        mpfr_mul(r6896371, r6896370, r6896351, MPFR_RNDN);
        mpfr_mul(r6896372, r6896371, r6896351, MPFR_RNDN);
        mpfr_mul(r6896373, r6896365, r6896372, MPFR_RNDN);
        mpfr_add(r6896374, r6896364, r6896373, MPFR_RNDN);
        return mpfr_get_d(r6896374, MPFR_RNDN);
}

