#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6326227 = 1680.0;
        float r6326228 = -13440.0;
        float r6326229 = x;
        float r6326230 = r6326229 * r6326229;
        float r6326231 = r6326228 * r6326230;
        float r6326232 = r6326227 + r6326231;
        float r6326233 = 13440.0;
        float r6326234 = r6326230 * r6326229;
        float r6326235 = r6326234 * r6326229;
        float r6326236 = r6326233 * r6326235;
        float r6326237 = r6326232 + r6326236;
        float r6326238 = -3584.0;
        float r6326239 = r6326235 * r6326229;
        float r6326240 = r6326239 * r6326229;
        float r6326241 = r6326238 * r6326240;
        float r6326242 = r6326237 + r6326241;
        float r6326243 = 256.0;
        float r6326244 = r6326240 * r6326229;
        float r6326245 = r6326244 * r6326229;
        float r6326246 = r6326243 * r6326245;
        float r6326247 = r6326242 + r6326246;
        return r6326247;
}

double f_id(double x) {
        double r6326248 = 1680.0;
        double r6326249 = -13440.0;
        double r6326250 = x;
        double r6326251 = r6326250 * r6326250;
        double r6326252 = r6326249 * r6326251;
        double r6326253 = r6326248 + r6326252;
        double r6326254 = 13440.0;
        double r6326255 = r6326251 * r6326250;
        double r6326256 = r6326255 * r6326250;
        double r6326257 = r6326254 * r6326256;
        double r6326258 = r6326253 + r6326257;
        double r6326259 = -3584.0;
        double r6326260 = r6326256 * r6326250;
        double r6326261 = r6326260 * r6326250;
        double r6326262 = r6326259 * r6326261;
        double r6326263 = r6326258 + r6326262;
        double r6326264 = 256.0;
        double r6326265 = r6326261 * r6326250;
        double r6326266 = r6326265 * r6326250;
        double r6326267 = r6326264 * r6326266;
        double r6326268 = r6326263 + r6326267;
        return r6326268;
}


double f_of(float x) {
        float r6326269 = 1680.0;
        float r6326270 = -13440.0;
        float r6326271 = x;
        float r6326272 = r6326271 * r6326271;
        float r6326273 = r6326270 * r6326272;
        float r6326274 = r6326269 + r6326273;
        float r6326275 = 13440.0;
        float r6326276 = r6326272 * r6326271;
        float r6326277 = r6326276 * r6326271;
        float r6326278 = r6326275 * r6326277;
        float r6326279 = r6326274 + r6326278;
        float r6326280 = -3584.0;
        float r6326281 = r6326277 * r6326271;
        float r6326282 = r6326281 * r6326271;
        float r6326283 = r6326280 * r6326282;
        float r6326284 = r6326279 + r6326283;
        float r6326285 = 256.0;
        float r6326286 = r6326282 * r6326271;
        float r6326287 = r6326286 * r6326271;
        float r6326288 = r6326285 * r6326287;
        float r6326289 = r6326284 + r6326288;
        return r6326289;
}

double f_od(double x) {
        double r6326290 = 1680.0;
        double r6326291 = -13440.0;
        double r6326292 = x;
        double r6326293 = r6326292 * r6326292;
        double r6326294 = r6326291 * r6326293;
        double r6326295 = r6326290 + r6326294;
        double r6326296 = 13440.0;
        double r6326297 = r6326293 * r6326292;
        double r6326298 = r6326297 * r6326292;
        double r6326299 = r6326296 * r6326298;
        double r6326300 = r6326295 + r6326299;
        double r6326301 = -3584.0;
        double r6326302 = r6326298 * r6326292;
        double r6326303 = r6326302 * r6326292;
        double r6326304 = r6326301 * r6326303;
        double r6326305 = r6326300 + r6326304;
        double r6326306 = 256.0;
        double r6326307 = r6326303 * r6326292;
        double r6326308 = r6326307 * r6326292;
        double r6326309 = r6326306 * r6326308;
        double r6326310 = r6326305 + r6326309;
        return r6326310;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326311, r6326312, r6326313, r6326314, r6326315, r6326316, r6326317, r6326318, r6326319, r6326320, r6326321, r6326322, r6326323, r6326324, r6326325, r6326326, r6326327, r6326328, r6326329, r6326330, r6326331;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6326311, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326312, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r6326313);
        mpfr_init(r6326314);
        mpfr_init(r6326315);
        mpfr_init(r6326316);
        mpfr_init_set_str(r6326317, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r6326318);
        mpfr_init(r6326319);
        mpfr_init(r6326320);
        mpfr_init(r6326321);
        mpfr_init_set_str(r6326322, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r6326323);
        mpfr_init(r6326324);
        mpfr_init(r6326325);
        mpfr_init(r6326326);
        mpfr_init_set_str(r6326327, "256.0", 10, MPFR_RNDN);
        mpfr_init(r6326328);
        mpfr_init(r6326329);
        mpfr_init(r6326330);
        mpfr_init(r6326331);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6326313, x, MPFR_RNDN);
        mpfr_mul(r6326314, r6326313, r6326313, MPFR_RNDN);
        mpfr_mul(r6326315, r6326312, r6326314, MPFR_RNDN);
        mpfr_add(r6326316, r6326311, r6326315, MPFR_RNDN);
        ;
        mpfr_mul(r6326318, r6326314, r6326313, MPFR_RNDN);
        mpfr_mul(r6326319, r6326318, r6326313, MPFR_RNDN);
        mpfr_mul(r6326320, r6326317, r6326319, MPFR_RNDN);
        mpfr_add(r6326321, r6326316, r6326320, MPFR_RNDN);
        ;
        mpfr_mul(r6326323, r6326319, r6326313, MPFR_RNDN);
        mpfr_mul(r6326324, r6326323, r6326313, MPFR_RNDN);
        mpfr_mul(r6326325, r6326322, r6326324, MPFR_RNDN);
        mpfr_add(r6326326, r6326321, r6326325, MPFR_RNDN);
        ;
        mpfr_mul(r6326328, r6326324, r6326313, MPFR_RNDN);
        mpfr_mul(r6326329, r6326328, r6326313, MPFR_RNDN);
        mpfr_mul(r6326330, r6326327, r6326329, MPFR_RNDN);
        mpfr_add(r6326331, r6326326, r6326330, MPFR_RNDN);
        return mpfr_get_d(r6326331, MPFR_RNDN);
}

static mpfr_t r6326332, r6326333, r6326334, r6326335, r6326336, r6326337, r6326338, r6326339, r6326340, r6326341, r6326342, r6326343, r6326344, r6326345, r6326346, r6326347, r6326348, r6326349, r6326350, r6326351, r6326352;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6326332, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326333, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r6326334);
        mpfr_init(r6326335);
        mpfr_init(r6326336);
        mpfr_init(r6326337);
        mpfr_init_set_str(r6326338, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r6326339);
        mpfr_init(r6326340);
        mpfr_init(r6326341);
        mpfr_init(r6326342);
        mpfr_init_set_str(r6326343, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r6326344);
        mpfr_init(r6326345);
        mpfr_init(r6326346);
        mpfr_init(r6326347);
        mpfr_init_set_str(r6326348, "256.0", 10, MPFR_RNDN);
        mpfr_init(r6326349);
        mpfr_init(r6326350);
        mpfr_init(r6326351);
        mpfr_init(r6326352);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6326334, x, MPFR_RNDN);
        mpfr_mul(r6326335, r6326334, r6326334, MPFR_RNDN);
        mpfr_mul(r6326336, r6326333, r6326335, MPFR_RNDN);
        mpfr_add(r6326337, r6326332, r6326336, MPFR_RNDN);
        ;
        mpfr_mul(r6326339, r6326335, r6326334, MPFR_RNDN);
        mpfr_mul(r6326340, r6326339, r6326334, MPFR_RNDN);
        mpfr_mul(r6326341, r6326338, r6326340, MPFR_RNDN);
        mpfr_add(r6326342, r6326337, r6326341, MPFR_RNDN);
        ;
        mpfr_mul(r6326344, r6326340, r6326334, MPFR_RNDN);
        mpfr_mul(r6326345, r6326344, r6326334, MPFR_RNDN);
        mpfr_mul(r6326346, r6326343, r6326345, MPFR_RNDN);
        mpfr_add(r6326347, r6326342, r6326346, MPFR_RNDN);
        ;
        mpfr_mul(r6326349, r6326345, r6326334, MPFR_RNDN);
        mpfr_mul(r6326350, r6326349, r6326334, MPFR_RNDN);
        mpfr_mul(r6326351, r6326348, r6326350, MPFR_RNDN);
        mpfr_add(r6326352, r6326347, r6326351, MPFR_RNDN);
        return mpfr_get_d(r6326352, MPFR_RNDN);
}

static mpfr_t r6326353, r6326354, r6326355, r6326356, r6326357, r6326358, r6326359, r6326360, r6326361, r6326362, r6326363, r6326364, r6326365, r6326366, r6326367, r6326368, r6326369, r6326370, r6326371, r6326372, r6326373;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6326353, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326354, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r6326355);
        mpfr_init(r6326356);
        mpfr_init(r6326357);
        mpfr_init(r6326358);
        mpfr_init_set_str(r6326359, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r6326360);
        mpfr_init(r6326361);
        mpfr_init(r6326362);
        mpfr_init(r6326363);
        mpfr_init_set_str(r6326364, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r6326365);
        mpfr_init(r6326366);
        mpfr_init(r6326367);
        mpfr_init(r6326368);
        mpfr_init_set_str(r6326369, "256.0", 10, MPFR_RNDN);
        mpfr_init(r6326370);
        mpfr_init(r6326371);
        mpfr_init(r6326372);
        mpfr_init(r6326373);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6326355, x, MPFR_RNDN);
        mpfr_mul(r6326356, r6326355, r6326355, MPFR_RNDN);
        mpfr_mul(r6326357, r6326354, r6326356, MPFR_RNDN);
        mpfr_add(r6326358, r6326353, r6326357, MPFR_RNDN);
        ;
        mpfr_mul(r6326360, r6326356, r6326355, MPFR_RNDN);
        mpfr_mul(r6326361, r6326360, r6326355, MPFR_RNDN);
        mpfr_mul(r6326362, r6326359, r6326361, MPFR_RNDN);
        mpfr_add(r6326363, r6326358, r6326362, MPFR_RNDN);
        ;
        mpfr_mul(r6326365, r6326361, r6326355, MPFR_RNDN);
        mpfr_mul(r6326366, r6326365, r6326355, MPFR_RNDN);
        mpfr_mul(r6326367, r6326364, r6326366, MPFR_RNDN);
        mpfr_add(r6326368, r6326363, r6326367, MPFR_RNDN);
        ;
        mpfr_mul(r6326370, r6326366, r6326355, MPFR_RNDN);
        mpfr_mul(r6326371, r6326370, r6326355, MPFR_RNDN);
        mpfr_mul(r6326372, r6326369, r6326371, MPFR_RNDN);
        mpfr_add(r6326373, r6326368, r6326372, MPFR_RNDN);
        return mpfr_get_d(r6326373, MPFR_RNDN);
}

