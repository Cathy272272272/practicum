#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8924263 = 0.273438;
        float r8924264 = -9.84375;
        float r8924265 = x;
        float r8924266 = r8924265 * r8924265;
        float r8924267 = r8924264 * r8924266;
        float r8924268 = r8924263 + r8924267;
        float r8924269 = 54.140625;
        float r8924270 = r8924266 * r8924265;
        float r8924271 = r8924270 * r8924265;
        float r8924272 = r8924269 * r8924271;
        float r8924273 = r8924268 + r8924272;
        float r8924274 = -93.84375;
        float r8924275 = r8924271 * r8924265;
        float r8924276 = r8924275 * r8924265;
        float r8924277 = r8924274 * r8924276;
        float r8924278 = r8924273 + r8924277;
        float r8924279 = 50.273438;
        float r8924280 = r8924276 * r8924265;
        float r8924281 = r8924280 * r8924265;
        float r8924282 = r8924279 * r8924281;
        float r8924283 = r8924278 + r8924282;
        return r8924283;
}

double f_id(double x) {
        double r8924284 = 0.273438;
        double r8924285 = -9.84375;
        double r8924286 = x;
        double r8924287 = r8924286 * r8924286;
        double r8924288 = r8924285 * r8924287;
        double r8924289 = r8924284 + r8924288;
        double r8924290 = 54.140625;
        double r8924291 = r8924287 * r8924286;
        double r8924292 = r8924291 * r8924286;
        double r8924293 = r8924290 * r8924292;
        double r8924294 = r8924289 + r8924293;
        double r8924295 = -93.84375;
        double r8924296 = r8924292 * r8924286;
        double r8924297 = r8924296 * r8924286;
        double r8924298 = r8924295 * r8924297;
        double r8924299 = r8924294 + r8924298;
        double r8924300 = 50.273438;
        double r8924301 = r8924297 * r8924286;
        double r8924302 = r8924301 * r8924286;
        double r8924303 = r8924300 * r8924302;
        double r8924304 = r8924299 + r8924303;
        return r8924304;
}


double f_of(float x) {
        float r8924305 = x;
        float r8924306 = 54.140625;
        float r8924307 = r8924305 * r8924306;
        float r8924308 = 3;
        float r8924309 = pow(r8924305, r8924308);
        float r8924310 = r8924307 * r8924309;
        float r8924311 = -9.84375;
        float r8924312 = r8924305 * r8924311;
        float r8924313 = r8924305 * r8924312;
        float r8924314 = r8924310 + r8924313;
        float r8924315 = 0.273438;
        float r8924316 = r8924314 + r8924315;
        float r8924317 = r8924308 + r8924308;
        float r8924318 = pow(r8924305, r8924317);
        float r8924319 = -93.84375;
        float r8924320 = 50.273438;
        float r8924321 = r8924320 * r8924305;
        float r8924322 = r8924321 * r8924305;
        float r8924323 = r8924319 + r8924322;
        float r8924324 = r8924318 * r8924323;
        float r8924325 = r8924316 + r8924324;
        return r8924325;
}

double f_od(double x) {
        double r8924326 = x;
        double r8924327 = 54.140625;
        double r8924328 = r8924326 * r8924327;
        double r8924329 = 3;
        double r8924330 = pow(r8924326, r8924329);
        double r8924331 = r8924328 * r8924330;
        double r8924332 = -9.84375;
        double r8924333 = r8924326 * r8924332;
        double r8924334 = r8924326 * r8924333;
        double r8924335 = r8924331 + r8924334;
        double r8924336 = 0.273438;
        double r8924337 = r8924335 + r8924336;
        double r8924338 = r8924329 + r8924329;
        double r8924339 = pow(r8924326, r8924338);
        double r8924340 = -93.84375;
        double r8924341 = 50.273438;
        double r8924342 = r8924341 * r8924326;
        double r8924343 = r8924342 * r8924326;
        double r8924344 = r8924340 + r8924343;
        double r8924345 = r8924339 * r8924344;
        double r8924346 = r8924337 + r8924345;
        return r8924346;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924347, r8924348, r8924349, r8924350, r8924351, r8924352, r8924353, r8924354, r8924355, r8924356, r8924357, r8924358, r8924359, r8924360, r8924361, r8924362, r8924363, r8924364, r8924365, r8924366, r8924367;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8924347, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924348, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8924349);
        mpfr_init(r8924350);
        mpfr_init(r8924351);
        mpfr_init(r8924352);
        mpfr_init_set_str(r8924353, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8924354);
        mpfr_init(r8924355);
        mpfr_init(r8924356);
        mpfr_init(r8924357);
        mpfr_init_set_str(r8924358, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8924359);
        mpfr_init(r8924360);
        mpfr_init(r8924361);
        mpfr_init(r8924362);
        mpfr_init_set_str(r8924363, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8924364);
        mpfr_init(r8924365);
        mpfr_init(r8924366);
        mpfr_init(r8924367);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8924349, x, MPFR_RNDN);
        mpfr_mul(r8924350, r8924349, r8924349, MPFR_RNDN);
        mpfr_mul(r8924351, r8924348, r8924350, MPFR_RNDN);
        mpfr_add(r8924352, r8924347, r8924351, MPFR_RNDN);
        ;
        mpfr_mul(r8924354, r8924350, r8924349, MPFR_RNDN);
        mpfr_mul(r8924355, r8924354, r8924349, MPFR_RNDN);
        mpfr_mul(r8924356, r8924353, r8924355, MPFR_RNDN);
        mpfr_add(r8924357, r8924352, r8924356, MPFR_RNDN);
        ;
        mpfr_mul(r8924359, r8924355, r8924349, MPFR_RNDN);
        mpfr_mul(r8924360, r8924359, r8924349, MPFR_RNDN);
        mpfr_mul(r8924361, r8924358, r8924360, MPFR_RNDN);
        mpfr_add(r8924362, r8924357, r8924361, MPFR_RNDN);
        ;
        mpfr_mul(r8924364, r8924360, r8924349, MPFR_RNDN);
        mpfr_mul(r8924365, r8924364, r8924349, MPFR_RNDN);
        mpfr_mul(r8924366, r8924363, r8924365, MPFR_RNDN);
        mpfr_add(r8924367, r8924362, r8924366, MPFR_RNDN);
        return mpfr_get_d(r8924367, MPFR_RNDN);
}

static mpfr_t r8924368, r8924369, r8924370, r8924371, r8924372, r8924373, r8924374, r8924375, r8924376, r8924377, r8924378, r8924379, r8924380, r8924381, r8924382, r8924383, r8924384, r8924385, r8924386, r8924387, r8924388;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8924368);
        mpfr_init_set_str(r8924369, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8924370);
        mpfr_init_set_str(r8924371, "3", 10, MPFR_RNDN);
        mpfr_init(r8924372);
        mpfr_init(r8924373);
        mpfr_init_set_str(r8924374, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8924375);
        mpfr_init(r8924376);
        mpfr_init(r8924377);
        mpfr_init_set_str(r8924378, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r8924379);
        mpfr_init(r8924380);
        mpfr_init(r8924381);
        mpfr_init_set_str(r8924382, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924383, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8924384);
        mpfr_init(r8924385);
        mpfr_init(r8924386);
        mpfr_init(r8924387);
        mpfr_init(r8924388);
}

double f_fm(double x) {
        mpfr_set_d(r8924368, x, MPFR_RNDN);
        ;
        mpfr_mul(r8924370, r8924368, r8924369, MPFR_RNDN);
        ;
        mpfr_pow(r8924372, r8924368, r8924371, MPFR_RNDN);
        mpfr_mul(r8924373, r8924370, r8924372, MPFR_RNDN);
        ;
        mpfr_mul(r8924375, r8924368, r8924374, MPFR_RNDN);
        mpfr_mul(r8924376, r8924368, r8924375, MPFR_RNDN);
        mpfr_add(r8924377, r8924373, r8924376, MPFR_RNDN);
        ;
        mpfr_add(r8924379, r8924377, r8924378, MPFR_RNDN);
        mpfr_add(r8924380, r8924371, r8924371, MPFR_RNDN);
        mpfr_pow(r8924381, r8924368, r8924380, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8924384, r8924383, r8924368, MPFR_RNDN);
        mpfr_mul(r8924385, r8924384, r8924368, MPFR_RNDN);
        mpfr_add(r8924386, r8924382, r8924385, MPFR_RNDN);
        mpfr_mul(r8924387, r8924381, r8924386, MPFR_RNDN);
        mpfr_add(r8924388, r8924379, r8924387, MPFR_RNDN);
        return mpfr_get_d(r8924388, MPFR_RNDN);
}

static mpfr_t r8924389, r8924390, r8924391, r8924392, r8924393, r8924394, r8924395, r8924396, r8924397, r8924398, r8924399, r8924400, r8924401, r8924402, r8924403, r8924404, r8924405, r8924406, r8924407, r8924408, r8924409;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8924389);
        mpfr_init_set_str(r8924390, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8924391);
        mpfr_init_set_str(r8924392, "3", 10, MPFR_RNDN);
        mpfr_init(r8924393);
        mpfr_init(r8924394);
        mpfr_init_set_str(r8924395, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8924396);
        mpfr_init(r8924397);
        mpfr_init(r8924398);
        mpfr_init_set_str(r8924399, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r8924400);
        mpfr_init(r8924401);
        mpfr_init(r8924402);
        mpfr_init_set_str(r8924403, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924404, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8924405);
        mpfr_init(r8924406);
        mpfr_init(r8924407);
        mpfr_init(r8924408);
        mpfr_init(r8924409);
}

double f_dm(double x) {
        mpfr_set_d(r8924389, x, MPFR_RNDN);
        ;
        mpfr_mul(r8924391, r8924389, r8924390, MPFR_RNDN);
        ;
        mpfr_pow(r8924393, r8924389, r8924392, MPFR_RNDN);
        mpfr_mul(r8924394, r8924391, r8924393, MPFR_RNDN);
        ;
        mpfr_mul(r8924396, r8924389, r8924395, MPFR_RNDN);
        mpfr_mul(r8924397, r8924389, r8924396, MPFR_RNDN);
        mpfr_add(r8924398, r8924394, r8924397, MPFR_RNDN);
        ;
        mpfr_add(r8924400, r8924398, r8924399, MPFR_RNDN);
        mpfr_add(r8924401, r8924392, r8924392, MPFR_RNDN);
        mpfr_pow(r8924402, r8924389, r8924401, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8924405, r8924404, r8924389, MPFR_RNDN);
        mpfr_mul(r8924406, r8924405, r8924389, MPFR_RNDN);
        mpfr_add(r8924407, r8924403, r8924406, MPFR_RNDN);
        mpfr_mul(r8924408, r8924402, r8924407, MPFR_RNDN);
        mpfr_add(r8924409, r8924400, r8924408, MPFR_RNDN);
        return mpfr_get_d(r8924409, MPFR_RNDN);
}

