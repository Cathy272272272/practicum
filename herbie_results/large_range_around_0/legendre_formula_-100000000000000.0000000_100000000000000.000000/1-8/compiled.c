#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6432280 = 0.273438;
        float r6432281 = -9.84375;
        float r6432282 = x;
        float r6432283 = r6432282 * r6432282;
        float r6432284 = r6432281 * r6432283;
        float r6432285 = r6432280 + r6432284;
        float r6432286 = 54.140625;
        float r6432287 = r6432283 * r6432282;
        float r6432288 = r6432287 * r6432282;
        float r6432289 = r6432286 * r6432288;
        float r6432290 = r6432285 + r6432289;
        float r6432291 = -93.84375;
        float r6432292 = r6432288 * r6432282;
        float r6432293 = r6432292 * r6432282;
        float r6432294 = r6432291 * r6432293;
        float r6432295 = r6432290 + r6432294;
        float r6432296 = 50.273438;
        float r6432297 = r6432293 * r6432282;
        float r6432298 = r6432297 * r6432282;
        float r6432299 = r6432296 * r6432298;
        float r6432300 = r6432295 + r6432299;
        return r6432300;
}

double f_id(double x) {
        double r6432301 = 0.273438;
        double r6432302 = -9.84375;
        double r6432303 = x;
        double r6432304 = r6432303 * r6432303;
        double r6432305 = r6432302 * r6432304;
        double r6432306 = r6432301 + r6432305;
        double r6432307 = 54.140625;
        double r6432308 = r6432304 * r6432303;
        double r6432309 = r6432308 * r6432303;
        double r6432310 = r6432307 * r6432309;
        double r6432311 = r6432306 + r6432310;
        double r6432312 = -93.84375;
        double r6432313 = r6432309 * r6432303;
        double r6432314 = r6432313 * r6432303;
        double r6432315 = r6432312 * r6432314;
        double r6432316 = r6432311 + r6432315;
        double r6432317 = 50.273438;
        double r6432318 = r6432314 * r6432303;
        double r6432319 = r6432318 * r6432303;
        double r6432320 = r6432317 * r6432319;
        double r6432321 = r6432316 + r6432320;
        return r6432321;
}


double f_of(float x) {
        float r6432322 = x;
        float r6432323 = 54.140625;
        float r6432324 = r6432322 * r6432323;
        float r6432325 = 3;
        float r6432326 = pow(r6432322, r6432325);
        float r6432327 = r6432324 * r6432326;
        float r6432328 = -9.84375;
        float r6432329 = r6432322 * r6432328;
        float r6432330 = r6432322 * r6432329;
        float r6432331 = r6432327 + r6432330;
        float r6432332 = 0.273438;
        float r6432333 = r6432331 + r6432332;
        float r6432334 = r6432326 * r6432326;
        float r6432335 = -93.84375;
        float r6432336 = 50.273438;
        float r6432337 = r6432322 * r6432322;
        float r6432338 = r6432336 * r6432337;
        float r6432339 = r6432335 + r6432338;
        float r6432340 = r6432334 * r6432339;
        float r6432341 = r6432333 + r6432340;
        return r6432341;
}

double f_od(double x) {
        double r6432342 = x;
        double r6432343 = 54.140625;
        double r6432344 = r6432342 * r6432343;
        double r6432345 = 3;
        double r6432346 = pow(r6432342, r6432345);
        double r6432347 = r6432344 * r6432346;
        double r6432348 = -9.84375;
        double r6432349 = r6432342 * r6432348;
        double r6432350 = r6432342 * r6432349;
        double r6432351 = r6432347 + r6432350;
        double r6432352 = 0.273438;
        double r6432353 = r6432351 + r6432352;
        double r6432354 = r6432346 * r6432346;
        double r6432355 = -93.84375;
        double r6432356 = 50.273438;
        double r6432357 = r6432342 * r6432342;
        double r6432358 = r6432356 * r6432357;
        double r6432359 = r6432355 + r6432358;
        double r6432360 = r6432354 * r6432359;
        double r6432361 = r6432353 + r6432360;
        return r6432361;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432362, r6432363, r6432364, r6432365, r6432366, r6432367, r6432368, r6432369, r6432370, r6432371, r6432372, r6432373, r6432374, r6432375, r6432376, r6432377, r6432378, r6432379, r6432380, r6432381, r6432382;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6432362, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432363, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6432364);
        mpfr_init(r6432365);
        mpfr_init(r6432366);
        mpfr_init(r6432367);
        mpfr_init_set_str(r6432368, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6432369);
        mpfr_init(r6432370);
        mpfr_init(r6432371);
        mpfr_init(r6432372);
        mpfr_init_set_str(r6432373, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6432374);
        mpfr_init(r6432375);
        mpfr_init(r6432376);
        mpfr_init(r6432377);
        mpfr_init_set_str(r6432378, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6432379);
        mpfr_init(r6432380);
        mpfr_init(r6432381);
        mpfr_init(r6432382);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6432364, x, MPFR_RNDN);
        mpfr_mul(r6432365, r6432364, r6432364, MPFR_RNDN);
        mpfr_mul(r6432366, r6432363, r6432365, MPFR_RNDN);
        mpfr_add(r6432367, r6432362, r6432366, MPFR_RNDN);
        ;
        mpfr_mul(r6432369, r6432365, r6432364, MPFR_RNDN);
        mpfr_mul(r6432370, r6432369, r6432364, MPFR_RNDN);
        mpfr_mul(r6432371, r6432368, r6432370, MPFR_RNDN);
        mpfr_add(r6432372, r6432367, r6432371, MPFR_RNDN);
        ;
        mpfr_mul(r6432374, r6432370, r6432364, MPFR_RNDN);
        mpfr_mul(r6432375, r6432374, r6432364, MPFR_RNDN);
        mpfr_mul(r6432376, r6432373, r6432375, MPFR_RNDN);
        mpfr_add(r6432377, r6432372, r6432376, MPFR_RNDN);
        ;
        mpfr_mul(r6432379, r6432375, r6432364, MPFR_RNDN);
        mpfr_mul(r6432380, r6432379, r6432364, MPFR_RNDN);
        mpfr_mul(r6432381, r6432378, r6432380, MPFR_RNDN);
        mpfr_add(r6432382, r6432377, r6432381, MPFR_RNDN);
        return mpfr_get_d(r6432382, MPFR_RNDN);
}

static mpfr_t r6432383, r6432384, r6432385, r6432386, r6432387, r6432388, r6432389, r6432390, r6432391, r6432392, r6432393, r6432394, r6432395, r6432396, r6432397, r6432398, r6432399, r6432400, r6432401, r6432402;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6432383);
        mpfr_init_set_str(r6432384, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6432385);
        mpfr_init_set_str(r6432386, "3", 10, MPFR_RNDN);
        mpfr_init(r6432387);
        mpfr_init(r6432388);
        mpfr_init_set_str(r6432389, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6432390);
        mpfr_init(r6432391);
        mpfr_init(r6432392);
        mpfr_init_set_str(r6432393, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6432394);
        mpfr_init(r6432395);
        mpfr_init_set_str(r6432396, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432397, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6432398);
        mpfr_init(r6432399);
        mpfr_init(r6432400);
        mpfr_init(r6432401);
        mpfr_init(r6432402);
}

double f_fm(double x) {
        mpfr_set_d(r6432383, x, MPFR_RNDN);
        ;
        mpfr_mul(r6432385, r6432383, r6432384, MPFR_RNDN);
        ;
        mpfr_pow(r6432387, r6432383, r6432386, MPFR_RNDN);
        mpfr_mul(r6432388, r6432385, r6432387, MPFR_RNDN);
        ;
        mpfr_mul(r6432390, r6432383, r6432389, MPFR_RNDN);
        mpfr_mul(r6432391, r6432383, r6432390, MPFR_RNDN);
        mpfr_add(r6432392, r6432388, r6432391, MPFR_RNDN);
        ;
        mpfr_add(r6432394, r6432392, r6432393, MPFR_RNDN);
        mpfr_mul(r6432395, r6432387, r6432387, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6432398, r6432383, r6432383, MPFR_RNDN);
        mpfr_mul(r6432399, r6432397, r6432398, MPFR_RNDN);
        mpfr_add(r6432400, r6432396, r6432399, MPFR_RNDN);
        mpfr_mul(r6432401, r6432395, r6432400, MPFR_RNDN);
        mpfr_add(r6432402, r6432394, r6432401, MPFR_RNDN);
        return mpfr_get_d(r6432402, MPFR_RNDN);
}

static mpfr_t r6432403, r6432404, r6432405, r6432406, r6432407, r6432408, r6432409, r6432410, r6432411, r6432412, r6432413, r6432414, r6432415, r6432416, r6432417, r6432418, r6432419, r6432420, r6432421, r6432422;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6432403);
        mpfr_init_set_str(r6432404, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6432405);
        mpfr_init_set_str(r6432406, "3", 10, MPFR_RNDN);
        mpfr_init(r6432407);
        mpfr_init(r6432408);
        mpfr_init_set_str(r6432409, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6432410);
        mpfr_init(r6432411);
        mpfr_init(r6432412);
        mpfr_init_set_str(r6432413, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6432414);
        mpfr_init(r6432415);
        mpfr_init_set_str(r6432416, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432417, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6432418);
        mpfr_init(r6432419);
        mpfr_init(r6432420);
        mpfr_init(r6432421);
        mpfr_init(r6432422);
}

double f_dm(double x) {
        mpfr_set_d(r6432403, x, MPFR_RNDN);
        ;
        mpfr_mul(r6432405, r6432403, r6432404, MPFR_RNDN);
        ;
        mpfr_pow(r6432407, r6432403, r6432406, MPFR_RNDN);
        mpfr_mul(r6432408, r6432405, r6432407, MPFR_RNDN);
        ;
        mpfr_mul(r6432410, r6432403, r6432409, MPFR_RNDN);
        mpfr_mul(r6432411, r6432403, r6432410, MPFR_RNDN);
        mpfr_add(r6432412, r6432408, r6432411, MPFR_RNDN);
        ;
        mpfr_add(r6432414, r6432412, r6432413, MPFR_RNDN);
        mpfr_mul(r6432415, r6432407, r6432407, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6432418, r6432403, r6432403, MPFR_RNDN);
        mpfr_mul(r6432419, r6432417, r6432418, MPFR_RNDN);
        mpfr_add(r6432420, r6432416, r6432419, MPFR_RNDN);
        mpfr_mul(r6432421, r6432415, r6432420, MPFR_RNDN);
        mpfr_add(r6432422, r6432414, r6432421, MPFR_RNDN);
        return mpfr_get_d(r6432422, MPFR_RNDN);
}

