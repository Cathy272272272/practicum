#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8953236 = 1680.0;
        float r8953237 = -13440.0;
        float r8953238 = x;
        float r8953239 = r8953238 * r8953238;
        float r8953240 = r8953237 * r8953239;
        float r8953241 = r8953236 + r8953240;
        float r8953242 = 13440.0;
        float r8953243 = r8953239 * r8953238;
        float r8953244 = r8953243 * r8953238;
        float r8953245 = r8953242 * r8953244;
        float r8953246 = r8953241 + r8953245;
        float r8953247 = -3584.0;
        float r8953248 = r8953244 * r8953238;
        float r8953249 = r8953248 * r8953238;
        float r8953250 = r8953247 * r8953249;
        float r8953251 = r8953246 + r8953250;
        float r8953252 = 256.0;
        float r8953253 = r8953249 * r8953238;
        float r8953254 = r8953253 * r8953238;
        float r8953255 = r8953252 * r8953254;
        float r8953256 = r8953251 + r8953255;
        return r8953256;
}

double f_id(double x) {
        double r8953257 = 1680.0;
        double r8953258 = -13440.0;
        double r8953259 = x;
        double r8953260 = r8953259 * r8953259;
        double r8953261 = r8953258 * r8953260;
        double r8953262 = r8953257 + r8953261;
        double r8953263 = 13440.0;
        double r8953264 = r8953260 * r8953259;
        double r8953265 = r8953264 * r8953259;
        double r8953266 = r8953263 * r8953265;
        double r8953267 = r8953262 + r8953266;
        double r8953268 = -3584.0;
        double r8953269 = r8953265 * r8953259;
        double r8953270 = r8953269 * r8953259;
        double r8953271 = r8953268 * r8953270;
        double r8953272 = r8953267 + r8953271;
        double r8953273 = 256.0;
        double r8953274 = r8953270 * r8953259;
        double r8953275 = r8953274 * r8953259;
        double r8953276 = r8953273 * r8953275;
        double r8953277 = r8953272 + r8953276;
        return r8953277;
}


double f_of(float x) {
        float r8953278 = x;
        float r8953279 = -13440.0;
        float r8953280 = r8953278 * r8953279;
        float r8953281 = r8953278 * r8953280;
        float r8953282 = -3584.0;
        float r8953283 = 6;
        float r8953284 = pow(r8953278, r8953283);
        float r8953285 = r8953282 * r8953284;
        float r8953286 = 1680.0;
        float r8953287 = r8953285 + r8953286;
        float r8953288 = r8953281 + r8953287;
        float r8953289 = r8953278 * r8953278;
        float r8953290 = r8953289 * r8953289;
        float r8953291 = 3;
        float r8953292 = pow(r8953278, r8953291);
        float r8953293 = 256.0;
        float r8953294 = r8953293 * r8953278;
        float r8953295 = r8953292 * r8953294;
        float r8953296 = r8953295 * r8953295;
        float r8953297 = 13440.0;
        float r8953298 = r8953297 * r8953297;
        float r8953299 = r8953296 - r8953298;
        float r8953300 = r8953290 * r8953299;
        float r8953301 = r8953295 - r8953297;
        float r8953302 = r8953300 / r8953301;
        float r8953303 = r8953288 + r8953302;
        return r8953303;
}

double f_od(double x) {
        double r8953304 = x;
        double r8953305 = -13440.0;
        double r8953306 = r8953304 * r8953305;
        double r8953307 = r8953304 * r8953306;
        double r8953308 = -3584.0;
        double r8953309 = 6;
        double r8953310 = pow(r8953304, r8953309);
        double r8953311 = r8953308 * r8953310;
        double r8953312 = 1680.0;
        double r8953313 = r8953311 + r8953312;
        double r8953314 = r8953307 + r8953313;
        double r8953315 = r8953304 * r8953304;
        double r8953316 = r8953315 * r8953315;
        double r8953317 = 3;
        double r8953318 = pow(r8953304, r8953317);
        double r8953319 = 256.0;
        double r8953320 = r8953319 * r8953304;
        double r8953321 = r8953318 * r8953320;
        double r8953322 = r8953321 * r8953321;
        double r8953323 = 13440.0;
        double r8953324 = r8953323 * r8953323;
        double r8953325 = r8953322 - r8953324;
        double r8953326 = r8953316 * r8953325;
        double r8953327 = r8953321 - r8953323;
        double r8953328 = r8953326 / r8953327;
        double r8953329 = r8953314 + r8953328;
        return r8953329;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953330, r8953331, r8953332, r8953333, r8953334, r8953335, r8953336, r8953337, r8953338, r8953339, r8953340, r8953341, r8953342, r8953343, r8953344, r8953345, r8953346, r8953347, r8953348, r8953349, r8953350;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8953330, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953331, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r8953332);
        mpfr_init(r8953333);
        mpfr_init(r8953334);
        mpfr_init(r8953335);
        mpfr_init_set_str(r8953336, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r8953337);
        mpfr_init(r8953338);
        mpfr_init(r8953339);
        mpfr_init(r8953340);
        mpfr_init_set_str(r8953341, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r8953342);
        mpfr_init(r8953343);
        mpfr_init(r8953344);
        mpfr_init(r8953345);
        mpfr_init_set_str(r8953346, "256.0", 10, MPFR_RNDN);
        mpfr_init(r8953347);
        mpfr_init(r8953348);
        mpfr_init(r8953349);
        mpfr_init(r8953350);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8953332, x, MPFR_RNDN);
        mpfr_mul(r8953333, r8953332, r8953332, MPFR_RNDN);
        mpfr_mul(r8953334, r8953331, r8953333, MPFR_RNDN);
        mpfr_add(r8953335, r8953330, r8953334, MPFR_RNDN);
        ;
        mpfr_mul(r8953337, r8953333, r8953332, MPFR_RNDN);
        mpfr_mul(r8953338, r8953337, r8953332, MPFR_RNDN);
        mpfr_mul(r8953339, r8953336, r8953338, MPFR_RNDN);
        mpfr_add(r8953340, r8953335, r8953339, MPFR_RNDN);
        ;
        mpfr_mul(r8953342, r8953338, r8953332, MPFR_RNDN);
        mpfr_mul(r8953343, r8953342, r8953332, MPFR_RNDN);
        mpfr_mul(r8953344, r8953341, r8953343, MPFR_RNDN);
        mpfr_add(r8953345, r8953340, r8953344, MPFR_RNDN);
        ;
        mpfr_mul(r8953347, r8953343, r8953332, MPFR_RNDN);
        mpfr_mul(r8953348, r8953347, r8953332, MPFR_RNDN);
        mpfr_mul(r8953349, r8953346, r8953348, MPFR_RNDN);
        mpfr_add(r8953350, r8953345, r8953349, MPFR_RNDN);
        return mpfr_get_d(r8953350, MPFR_RNDN);
}

static mpfr_t r8953351, r8953352, r8953353, r8953354, r8953355, r8953356, r8953357, r8953358, r8953359, r8953360, r8953361, r8953362, r8953363, r8953364, r8953365, r8953366, r8953367, r8953368, r8953369, r8953370, r8953371, r8953372, r8953373, r8953374, r8953375, r8953376;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8953351);
        mpfr_init_set_str(r8953352, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r8953353);
        mpfr_init(r8953354);
        mpfr_init_set_str(r8953355, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953356, "6", 10, MPFR_RNDN);
        mpfr_init(r8953357);
        mpfr_init(r8953358);
        mpfr_init_set_str(r8953359, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r8953360);
        mpfr_init(r8953361);
        mpfr_init(r8953362);
        mpfr_init(r8953363);
        mpfr_init_set_str(r8953364, "3", 10, MPFR_RNDN);
        mpfr_init(r8953365);
        mpfr_init_set_str(r8953366, "256.0", 10, MPFR_RNDN);
        mpfr_init(r8953367);
        mpfr_init(r8953368);
        mpfr_init(r8953369);
        mpfr_init_set_str(r8953370, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r8953371);
        mpfr_init(r8953372);
        mpfr_init(r8953373);
        mpfr_init(r8953374);
        mpfr_init(r8953375);
        mpfr_init(r8953376);
}

double f_fm(double x) {
        mpfr_set_d(r8953351, x, MPFR_RNDN);
        ;
        mpfr_mul(r8953353, r8953351, r8953352, MPFR_RNDN);
        mpfr_mul(r8953354, r8953351, r8953353, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8953357, r8953351, r8953356, MPFR_RNDN);
        mpfr_mul(r8953358, r8953355, r8953357, MPFR_RNDN);
        ;
        mpfr_add(r8953360, r8953358, r8953359, MPFR_RNDN);
        mpfr_add(r8953361, r8953354, r8953360, MPFR_RNDN);
        mpfr_mul(r8953362, r8953351, r8953351, MPFR_RNDN);
        mpfr_mul(r8953363, r8953362, r8953362, MPFR_RNDN);
        ;
        mpfr_pow(r8953365, r8953351, r8953364, MPFR_RNDN);
        ;
        mpfr_mul(r8953367, r8953366, r8953351, MPFR_RNDN);
        mpfr_mul(r8953368, r8953365, r8953367, MPFR_RNDN);
        mpfr_mul(r8953369, r8953368, r8953368, MPFR_RNDN);
        ;
        mpfr_mul(r8953371, r8953370, r8953370, MPFR_RNDN);
        mpfr_sub(r8953372, r8953369, r8953371, MPFR_RNDN);
        mpfr_mul(r8953373, r8953363, r8953372, MPFR_RNDN);
        mpfr_sub(r8953374, r8953368, r8953370, MPFR_RNDN);
        mpfr_div(r8953375, r8953373, r8953374, MPFR_RNDN);
        mpfr_add(r8953376, r8953361, r8953375, MPFR_RNDN);
        return mpfr_get_d(r8953376, MPFR_RNDN);
}

static mpfr_t r8953377, r8953378, r8953379, r8953380, r8953381, r8953382, r8953383, r8953384, r8953385, r8953386, r8953387, r8953388, r8953389, r8953390, r8953391, r8953392, r8953393, r8953394, r8953395, r8953396, r8953397, r8953398, r8953399, r8953400, r8953401, r8953402;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8953377);
        mpfr_init_set_str(r8953378, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r8953379);
        mpfr_init(r8953380);
        mpfr_init_set_str(r8953381, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953382, "6", 10, MPFR_RNDN);
        mpfr_init(r8953383);
        mpfr_init(r8953384);
        mpfr_init_set_str(r8953385, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r8953386);
        mpfr_init(r8953387);
        mpfr_init(r8953388);
        mpfr_init(r8953389);
        mpfr_init_set_str(r8953390, "3", 10, MPFR_RNDN);
        mpfr_init(r8953391);
        mpfr_init_set_str(r8953392, "256.0", 10, MPFR_RNDN);
        mpfr_init(r8953393);
        mpfr_init(r8953394);
        mpfr_init(r8953395);
        mpfr_init_set_str(r8953396, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r8953397);
        mpfr_init(r8953398);
        mpfr_init(r8953399);
        mpfr_init(r8953400);
        mpfr_init(r8953401);
        mpfr_init(r8953402);
}

double f_dm(double x) {
        mpfr_set_d(r8953377, x, MPFR_RNDN);
        ;
        mpfr_mul(r8953379, r8953377, r8953378, MPFR_RNDN);
        mpfr_mul(r8953380, r8953377, r8953379, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8953383, r8953377, r8953382, MPFR_RNDN);
        mpfr_mul(r8953384, r8953381, r8953383, MPFR_RNDN);
        ;
        mpfr_add(r8953386, r8953384, r8953385, MPFR_RNDN);
        mpfr_add(r8953387, r8953380, r8953386, MPFR_RNDN);
        mpfr_mul(r8953388, r8953377, r8953377, MPFR_RNDN);
        mpfr_mul(r8953389, r8953388, r8953388, MPFR_RNDN);
        ;
        mpfr_pow(r8953391, r8953377, r8953390, MPFR_RNDN);
        ;
        mpfr_mul(r8953393, r8953392, r8953377, MPFR_RNDN);
        mpfr_mul(r8953394, r8953391, r8953393, MPFR_RNDN);
        mpfr_mul(r8953395, r8953394, r8953394, MPFR_RNDN);
        ;
        mpfr_mul(r8953397, r8953396, r8953396, MPFR_RNDN);
        mpfr_sub(r8953398, r8953395, r8953397, MPFR_RNDN);
        mpfr_mul(r8953399, r8953389, r8953398, MPFR_RNDN);
        mpfr_sub(r8953400, r8953394, r8953396, MPFR_RNDN);
        mpfr_div(r8953401, r8953399, r8953400, MPFR_RNDN);
        mpfr_add(r8953402, r8953387, r8953401, MPFR_RNDN);
        return mpfr_get_d(r8953402, MPFR_RNDN);
}

