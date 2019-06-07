#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r4438270 = 2.932617;
        float r4438271 = x;
        float r4438272 = r4438270 * r4438271;
        float r4438273 = -87.978516;
        float r4438274 = r4438271 * r4438271;
        float r4438275 = r4438274 * r4438271;
        float r4438276 = r4438273 * r4438275;
        float r4438277 = r4438272 + r4438276;
        float r4438278 = 747.817383;
        float r4438279 = r4438275 * r4438271;
        float r4438280 = r4438279 * r4438271;
        float r4438281 = r4438278 * r4438280;
        float r4438282 = r4438277 + r4438281;
        float r4438283 = -2706.386719;
        float r4438284 = r4438280 * r4438271;
        float r4438285 = r4438284 * r4438271;
        float r4438286 = r4438283 * r4438285;
        float r4438287 = r4438282 + r4438286;
        float r4438288 = 4736.176758;
        float r4438289 = r4438285 * r4438271;
        float r4438290 = r4438289 * r4438271;
        float r4438291 = r4438288 * r4438290;
        float r4438292 = r4438287 + r4438291;
        float r4438293 = -3961.166016;
        float r4438294 = r4438290 * r4438271;
        float r4438295 = r4438294 * r4438271;
        float r4438296 = r4438293 * r4438295;
        float r4438297 = r4438292 + r4438296;
        float r4438298 = 1269.604492;
        float r4438299 = r4438295 * r4438271;
        float r4438300 = r4438299 * r4438271;
        float r4438301 = r4438298 * r4438300;
        float r4438302 = r4438297 + r4438301;
        return r4438302;
}

double f_id(double x) {
        double r4438303 = 2.932617;
        double r4438304 = x;
        double r4438305 = r4438303 * r4438304;
        double r4438306 = -87.978516;
        double r4438307 = r4438304 * r4438304;
        double r4438308 = r4438307 * r4438304;
        double r4438309 = r4438306 * r4438308;
        double r4438310 = r4438305 + r4438309;
        double r4438311 = 747.817383;
        double r4438312 = r4438308 * r4438304;
        double r4438313 = r4438312 * r4438304;
        double r4438314 = r4438311 * r4438313;
        double r4438315 = r4438310 + r4438314;
        double r4438316 = -2706.386719;
        double r4438317 = r4438313 * r4438304;
        double r4438318 = r4438317 * r4438304;
        double r4438319 = r4438316 * r4438318;
        double r4438320 = r4438315 + r4438319;
        double r4438321 = 4736.176758;
        double r4438322 = r4438318 * r4438304;
        double r4438323 = r4438322 * r4438304;
        double r4438324 = r4438321 * r4438323;
        double r4438325 = r4438320 + r4438324;
        double r4438326 = -3961.166016;
        double r4438327 = r4438323 * r4438304;
        double r4438328 = r4438327 * r4438304;
        double r4438329 = r4438326 * r4438328;
        double r4438330 = r4438325 + r4438329;
        double r4438331 = 1269.604492;
        double r4438332 = r4438328 * r4438304;
        double r4438333 = r4438332 * r4438304;
        double r4438334 = r4438331 * r4438333;
        double r4438335 = r4438330 + r4438334;
        return r4438335;
}


double f_of(float x) {
        float r4438336 = x;
        float r4438337 = r4438336 * r4438336;
        float r4438338 = 3;
        float r4438339 = pow(r4438336, r4438338);
        float r4438340 = r4438339 * r4438339;
        float r4438341 = r4438339 * r4438340;
        float r4438342 = r4438337 * r4438341;
        float r4438343 = -3961.166016;
        float r4438344 = 1269.604492;
        float r4438345 = r4438344 * r4438337;
        float r4438346 = r4438343 + r4438345;
        float r4438347 = r4438342 * r4438346;
        float r4438348 = 4736.176758;
        float r4438349 = r4438339 * r4438348;
        float r4438350 = r4438340 * r4438349;
        float r4438351 = 2.932617;
        float r4438352 = r4438351 * r4438336;
        float r4438353 = r4438350 + r4438352;
        float r4438354 = -87.978516;
        float r4438355 = r4438354 * r4438336;
        float r4438356 = 747.817383;
        float r4438357 = r4438336 * r4438356;
        float r4438358 = r4438357 * r4438337;
        float r4438359 = r4438355 + r4438358;
        float r4438360 = r4438337 * r4438359;
        float r4438361 = r4438353 + r4438360;
        float r4438362 = r4438347 + r4438361;
        return r4438362;
}

double f_od(double x) {
        double r4438363 = x;
        double r4438364 = r4438363 * r4438363;
        double r4438365 = 3;
        double r4438366 = pow(r4438363, r4438365);
        double r4438367 = r4438366 * r4438366;
        double r4438368 = r4438366 * r4438367;
        double r4438369 = r4438364 * r4438368;
        double r4438370 = -3961.166016;
        double r4438371 = 1269.604492;
        double r4438372 = r4438371 * r4438364;
        double r4438373 = r4438370 + r4438372;
        double r4438374 = r4438369 * r4438373;
        double r4438375 = 4736.176758;
        double r4438376 = r4438366 * r4438375;
        double r4438377 = r4438367 * r4438376;
        double r4438378 = 2.932617;
        double r4438379 = r4438378 * r4438363;
        double r4438380 = r4438377 + r4438379;
        double r4438381 = -87.978516;
        double r4438382 = r4438381 * r4438363;
        double r4438383 = 747.817383;
        double r4438384 = r4438363 * r4438383;
        double r4438385 = r4438384 * r4438364;
        double r4438386 = r4438382 + r4438385;
        double r4438387 = r4438364 * r4438386;
        double r4438388 = r4438380 + r4438387;
        double r4438389 = r4438374 + r4438388;
        return r4438389;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4438390, r4438391, r4438392, r4438393, r4438394, r4438395, r4438396, r4438397, r4438398, r4438399, r4438400, r4438401, r4438402, r4438403, r4438404, r4438405, r4438406, r4438407, r4438408, r4438409, r4438410, r4438411, r4438412, r4438413, r4438414, r4438415, r4438416, r4438417, r4438418, r4438419, r4438420, r4438421, r4438422;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4438390, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r4438391);
        mpfr_init(r4438392);
        mpfr_init_set_str(r4438393, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r4438394);
        mpfr_init(r4438395);
        mpfr_init(r4438396);
        mpfr_init(r4438397);
        mpfr_init_set_str(r4438398, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r4438399);
        mpfr_init(r4438400);
        mpfr_init(r4438401);
        mpfr_init(r4438402);
        mpfr_init_set_str(r4438403, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r4438404);
        mpfr_init(r4438405);
        mpfr_init(r4438406);
        mpfr_init(r4438407);
        mpfr_init_set_str(r4438408, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r4438409);
        mpfr_init(r4438410);
        mpfr_init(r4438411);
        mpfr_init(r4438412);
        mpfr_init_set_str(r4438413, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r4438414);
        mpfr_init(r4438415);
        mpfr_init(r4438416);
        mpfr_init(r4438417);
        mpfr_init_set_str(r4438418, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r4438419);
        mpfr_init(r4438420);
        mpfr_init(r4438421);
        mpfr_init(r4438422);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4438391, x, MPFR_RNDN);
        mpfr_mul(r4438392, r4438390, r4438391, MPFR_RNDN);
        ;
        mpfr_mul(r4438394, r4438391, r4438391, MPFR_RNDN);
        mpfr_mul(r4438395, r4438394, r4438391, MPFR_RNDN);
        mpfr_mul(r4438396, r4438393, r4438395, MPFR_RNDN);
        mpfr_add(r4438397, r4438392, r4438396, MPFR_RNDN);
        ;
        mpfr_mul(r4438399, r4438395, r4438391, MPFR_RNDN);
        mpfr_mul(r4438400, r4438399, r4438391, MPFR_RNDN);
        mpfr_mul(r4438401, r4438398, r4438400, MPFR_RNDN);
        mpfr_add(r4438402, r4438397, r4438401, MPFR_RNDN);
        ;
        mpfr_mul(r4438404, r4438400, r4438391, MPFR_RNDN);
        mpfr_mul(r4438405, r4438404, r4438391, MPFR_RNDN);
        mpfr_mul(r4438406, r4438403, r4438405, MPFR_RNDN);
        mpfr_add(r4438407, r4438402, r4438406, MPFR_RNDN);
        ;
        mpfr_mul(r4438409, r4438405, r4438391, MPFR_RNDN);
        mpfr_mul(r4438410, r4438409, r4438391, MPFR_RNDN);
        mpfr_mul(r4438411, r4438408, r4438410, MPFR_RNDN);
        mpfr_add(r4438412, r4438407, r4438411, MPFR_RNDN);
        ;
        mpfr_mul(r4438414, r4438410, r4438391, MPFR_RNDN);
        mpfr_mul(r4438415, r4438414, r4438391, MPFR_RNDN);
        mpfr_mul(r4438416, r4438413, r4438415, MPFR_RNDN);
        mpfr_add(r4438417, r4438412, r4438416, MPFR_RNDN);
        ;
        mpfr_mul(r4438419, r4438415, r4438391, MPFR_RNDN);
        mpfr_mul(r4438420, r4438419, r4438391, MPFR_RNDN);
        mpfr_mul(r4438421, r4438418, r4438420, MPFR_RNDN);
        mpfr_add(r4438422, r4438417, r4438421, MPFR_RNDN);
        return mpfr_get_d(r4438422, MPFR_RNDN);
}

static mpfr_t r4438423, r4438424, r4438425, r4438426, r4438427, r4438428, r4438429, r4438430, r4438431, r4438432, r4438433, r4438434, r4438435, r4438436, r4438437, r4438438, r4438439, r4438440, r4438441, r4438442, r4438443, r4438444, r4438445, r4438446, r4438447, r4438448, r4438449;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4438423);
        mpfr_init(r4438424);
        mpfr_init_set_str(r4438425, "3", 10, MPFR_RNDN);
        mpfr_init(r4438426);
        mpfr_init(r4438427);
        mpfr_init(r4438428);
        mpfr_init(r4438429);
        mpfr_init_set_str(r4438430, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438431, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r4438432);
        mpfr_init(r4438433);
        mpfr_init(r4438434);
        mpfr_init_set_str(r4438435, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r4438436);
        mpfr_init(r4438437);
        mpfr_init_set_str(r4438438, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r4438439);
        mpfr_init(r4438440);
        mpfr_init_set_str(r4438441, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r4438442);
        mpfr_init_set_str(r4438443, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r4438444);
        mpfr_init(r4438445);
        mpfr_init(r4438446);
        mpfr_init(r4438447);
        mpfr_init(r4438448);
        mpfr_init(r4438449);
}

double f_fm(double x) {
        mpfr_set_d(r4438423, x, MPFR_RNDN);
        mpfr_mul(r4438424, r4438423, r4438423, MPFR_RNDN);
        ;
        mpfr_pow(r4438426, r4438423, r4438425, MPFR_RNDN);
        mpfr_mul(r4438427, r4438426, r4438426, MPFR_RNDN);
        mpfr_mul(r4438428, r4438426, r4438427, MPFR_RNDN);
        mpfr_mul(r4438429, r4438424, r4438428, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4438432, r4438431, r4438424, MPFR_RNDN);
        mpfr_add(r4438433, r4438430, r4438432, MPFR_RNDN);
        mpfr_mul(r4438434, r4438429, r4438433, MPFR_RNDN);
        ;
        mpfr_mul(r4438436, r4438426, r4438435, MPFR_RNDN);
        mpfr_mul(r4438437, r4438427, r4438436, MPFR_RNDN);
        ;
        mpfr_mul(r4438439, r4438438, r4438423, MPFR_RNDN);
        mpfr_add(r4438440, r4438437, r4438439, MPFR_RNDN);
        ;
        mpfr_mul(r4438442, r4438441, r4438423, MPFR_RNDN);
        ;
        mpfr_mul(r4438444, r4438423, r4438443, MPFR_RNDN);
        mpfr_mul(r4438445, r4438444, r4438424, MPFR_RNDN);
        mpfr_add(r4438446, r4438442, r4438445, MPFR_RNDN);
        mpfr_mul(r4438447, r4438424, r4438446, MPFR_RNDN);
        mpfr_add(r4438448, r4438440, r4438447, MPFR_RNDN);
        mpfr_add(r4438449, r4438434, r4438448, MPFR_RNDN);
        return mpfr_get_d(r4438449, MPFR_RNDN);
}

static mpfr_t r4438450, r4438451, r4438452, r4438453, r4438454, r4438455, r4438456, r4438457, r4438458, r4438459, r4438460, r4438461, r4438462, r4438463, r4438464, r4438465, r4438466, r4438467, r4438468, r4438469, r4438470, r4438471, r4438472, r4438473, r4438474, r4438475, r4438476;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r4438450);
        mpfr_init(r4438451);
        mpfr_init_set_str(r4438452, "3", 10, MPFR_RNDN);
        mpfr_init(r4438453);
        mpfr_init(r4438454);
        mpfr_init(r4438455);
        mpfr_init(r4438456);
        mpfr_init_set_str(r4438457, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438458, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r4438459);
        mpfr_init(r4438460);
        mpfr_init(r4438461);
        mpfr_init_set_str(r4438462, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r4438463);
        mpfr_init(r4438464);
        mpfr_init_set_str(r4438465, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r4438466);
        mpfr_init(r4438467);
        mpfr_init_set_str(r4438468, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r4438469);
        mpfr_init_set_str(r4438470, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r4438471);
        mpfr_init(r4438472);
        mpfr_init(r4438473);
        mpfr_init(r4438474);
        mpfr_init(r4438475);
        mpfr_init(r4438476);
}

double f_dm(double x) {
        mpfr_set_d(r4438450, x, MPFR_RNDN);
        mpfr_mul(r4438451, r4438450, r4438450, MPFR_RNDN);
        ;
        mpfr_pow(r4438453, r4438450, r4438452, MPFR_RNDN);
        mpfr_mul(r4438454, r4438453, r4438453, MPFR_RNDN);
        mpfr_mul(r4438455, r4438453, r4438454, MPFR_RNDN);
        mpfr_mul(r4438456, r4438451, r4438455, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4438459, r4438458, r4438451, MPFR_RNDN);
        mpfr_add(r4438460, r4438457, r4438459, MPFR_RNDN);
        mpfr_mul(r4438461, r4438456, r4438460, MPFR_RNDN);
        ;
        mpfr_mul(r4438463, r4438453, r4438462, MPFR_RNDN);
        mpfr_mul(r4438464, r4438454, r4438463, MPFR_RNDN);
        ;
        mpfr_mul(r4438466, r4438465, r4438450, MPFR_RNDN);
        mpfr_add(r4438467, r4438464, r4438466, MPFR_RNDN);
        ;
        mpfr_mul(r4438469, r4438468, r4438450, MPFR_RNDN);
        ;
        mpfr_mul(r4438471, r4438450, r4438470, MPFR_RNDN);
        mpfr_mul(r4438472, r4438471, r4438451, MPFR_RNDN);
        mpfr_add(r4438473, r4438469, r4438472, MPFR_RNDN);
        mpfr_mul(r4438474, r4438451, r4438473, MPFR_RNDN);
        mpfr_add(r4438475, r4438467, r4438474, MPFR_RNDN);
        mpfr_add(r4438476, r4438461, r4438475, MPFR_RNDN);
        return mpfr_get_d(r4438476, MPFR_RNDN);
}

