#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r11544297 = 1.0;
        float r11544298 = -7.0;
        float r11544299 = x;
        float r11544300 = r11544298 * r11544299;
        float r11544301 = r11544297 + r11544300;
        float r11544302 = 10.5;
        float r11544303 = r11544299 * r11544299;
        float r11544304 = r11544302 * r11544303;
        float r11544305 = r11544301 + r11544304;
        float r11544306 = -5.833333;
        float r11544307 = r11544303 * r11544299;
        float r11544308 = r11544306 * r11544307;
        float r11544309 = r11544305 + r11544308;
        float r11544310 = 1.458333;
        float r11544311 = r11544307 * r11544299;
        float r11544312 = r11544310 * r11544311;
        float r11544313 = r11544309 + r11544312;
        float r11544314 = -0.175;
        float r11544315 = r11544311 * r11544299;
        float r11544316 = r11544314 * r11544315;
        float r11544317 = r11544313 + r11544316;
        float r11544318 = 0.009722;
        float r11544319 = r11544315 * r11544299;
        float r11544320 = r11544318 * r11544319;
        float r11544321 = r11544317 + r11544320;
        float r11544322 = -0.000198;
        float r11544323 = r11544319 * r11544299;
        float r11544324 = r11544322 * r11544323;
        float r11544325 = r11544321 + r11544324;
        return r11544325;
}

double f_id(double x) {
        double r11544326 = 1.0;
        double r11544327 = -7.0;
        double r11544328 = x;
        double r11544329 = r11544327 * r11544328;
        double r11544330 = r11544326 + r11544329;
        double r11544331 = 10.5;
        double r11544332 = r11544328 * r11544328;
        double r11544333 = r11544331 * r11544332;
        double r11544334 = r11544330 + r11544333;
        double r11544335 = -5.833333;
        double r11544336 = r11544332 * r11544328;
        double r11544337 = r11544335 * r11544336;
        double r11544338 = r11544334 + r11544337;
        double r11544339 = 1.458333;
        double r11544340 = r11544336 * r11544328;
        double r11544341 = r11544339 * r11544340;
        double r11544342 = r11544338 + r11544341;
        double r11544343 = -0.175;
        double r11544344 = r11544340 * r11544328;
        double r11544345 = r11544343 * r11544344;
        double r11544346 = r11544342 + r11544345;
        double r11544347 = 0.009722;
        double r11544348 = r11544344 * r11544328;
        double r11544349 = r11544347 * r11544348;
        double r11544350 = r11544346 + r11544349;
        double r11544351 = -0.000198;
        double r11544352 = r11544348 * r11544328;
        double r11544353 = r11544351 * r11544352;
        double r11544354 = r11544350 + r11544353;
        return r11544354;
}


double f_of(float x) {
        float r11544355 = x;
        float r11544356 = r11544355 * r11544355;
        float r11544357 = 10.5;
        float r11544358 = r11544356 * r11544357;
        float r11544359 = exp(r11544358);
        float r11544360 = -5.833333;
        float r11544361 = r11544360 * r11544355;
        float r11544362 = r11544356 * r11544361;
        float r11544363 = exp(r11544362);
        float r11544364 = r11544359 * r11544363;
        float r11544365 = -7.0;
        float r11544366 = r11544355 * r11544365;
        float r11544367 = 1.0;
        float r11544368 = r11544366 + r11544367;
        float r11544369 = exp(r11544368);
        float r11544370 = r11544364 * r11544369;
        float r11544371 = log(r11544370);
        float r11544372 = 2;
        float r11544373 = r11544372 + r11544372;
        float r11544374 = pow(r11544355, r11544373);
        float r11544375 = 1.458333;
        float r11544376 = -0.175;
        float r11544377 = r11544376 * r11544355;
        float r11544378 = r11544375 + r11544377;
        float r11544379 = r11544374 * r11544378;
        float r11544380 = 3;
        float r11544381 = pow(r11544355, r11544380);
        float r11544382 = r11544381 * r11544381;
        float r11544383 = -0.000198;
        float r11544384 = r11544383 * r11544355;
        float r11544385 = 0.009722;
        float r11544386 = r11544384 + r11544385;
        float r11544387 = r11544382 * r11544386;
        float r11544388 = r11544379 + r11544387;
        float r11544389 = r11544371 + r11544388;
        return r11544389;
}

double f_od(double x) {
        double r11544390 = x;
        double r11544391 = r11544390 * r11544390;
        double r11544392 = 10.5;
        double r11544393 = r11544391 * r11544392;
        double r11544394 = exp(r11544393);
        double r11544395 = -5.833333;
        double r11544396 = r11544395 * r11544390;
        double r11544397 = r11544391 * r11544396;
        double r11544398 = exp(r11544397);
        double r11544399 = r11544394 * r11544398;
        double r11544400 = -7.0;
        double r11544401 = r11544390 * r11544400;
        double r11544402 = 1.0;
        double r11544403 = r11544401 + r11544402;
        double r11544404 = exp(r11544403);
        double r11544405 = r11544399 * r11544404;
        double r11544406 = log(r11544405);
        double r11544407 = 2;
        double r11544408 = r11544407 + r11544407;
        double r11544409 = pow(r11544390, r11544408);
        double r11544410 = 1.458333;
        double r11544411 = -0.175;
        double r11544412 = r11544411 * r11544390;
        double r11544413 = r11544410 + r11544412;
        double r11544414 = r11544409 * r11544413;
        double r11544415 = 3;
        double r11544416 = pow(r11544390, r11544415);
        double r11544417 = r11544416 * r11544416;
        double r11544418 = -0.000198;
        double r11544419 = r11544418 * r11544390;
        double r11544420 = 0.009722;
        double r11544421 = r11544419 + r11544420;
        double r11544422 = r11544417 * r11544421;
        double r11544423 = r11544414 + r11544422;
        double r11544424 = r11544406 + r11544423;
        return r11544424;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11544425, r11544426, r11544427, r11544428, r11544429, r11544430, r11544431, r11544432, r11544433, r11544434, r11544435, r11544436, r11544437, r11544438, r11544439, r11544440, r11544441, r11544442, r11544443, r11544444, r11544445, r11544446, r11544447, r11544448, r11544449, r11544450, r11544451, r11544452, r11544453;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11544425, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544426, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11544427);
        mpfr_init(r11544428);
        mpfr_init(r11544429);
        mpfr_init_set_str(r11544430, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11544431);
        mpfr_init(r11544432);
        mpfr_init(r11544433);
        mpfr_init_set_str(r11544434, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11544435);
        mpfr_init(r11544436);
        mpfr_init(r11544437);
        mpfr_init_set_str(r11544438, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r11544439);
        mpfr_init(r11544440);
        mpfr_init(r11544441);
        mpfr_init_set_str(r11544442, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11544443);
        mpfr_init(r11544444);
        mpfr_init(r11544445);
        mpfr_init_set_str(r11544446, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r11544447);
        mpfr_init(r11544448);
        mpfr_init(r11544449);
        mpfr_init_set_str(r11544450, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11544451);
        mpfr_init(r11544452);
        mpfr_init(r11544453);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11544427, x, MPFR_RNDN);
        mpfr_mul(r11544428, r11544426, r11544427, MPFR_RNDN);
        mpfr_add(r11544429, r11544425, r11544428, MPFR_RNDN);
        ;
        mpfr_mul(r11544431, r11544427, r11544427, MPFR_RNDN);
        mpfr_mul(r11544432, r11544430, r11544431, MPFR_RNDN);
        mpfr_add(r11544433, r11544429, r11544432, MPFR_RNDN);
        ;
        mpfr_mul(r11544435, r11544431, r11544427, MPFR_RNDN);
        mpfr_mul(r11544436, r11544434, r11544435, MPFR_RNDN);
        mpfr_add(r11544437, r11544433, r11544436, MPFR_RNDN);
        ;
        mpfr_mul(r11544439, r11544435, r11544427, MPFR_RNDN);
        mpfr_mul(r11544440, r11544438, r11544439, MPFR_RNDN);
        mpfr_add(r11544441, r11544437, r11544440, MPFR_RNDN);
        ;
        mpfr_mul(r11544443, r11544439, r11544427, MPFR_RNDN);
        mpfr_mul(r11544444, r11544442, r11544443, MPFR_RNDN);
        mpfr_add(r11544445, r11544441, r11544444, MPFR_RNDN);
        ;
        mpfr_mul(r11544447, r11544443, r11544427, MPFR_RNDN);
        mpfr_mul(r11544448, r11544446, r11544447, MPFR_RNDN);
        mpfr_add(r11544449, r11544445, r11544448, MPFR_RNDN);
        ;
        mpfr_mul(r11544451, r11544447, r11544427, MPFR_RNDN);
        mpfr_mul(r11544452, r11544450, r11544451, MPFR_RNDN);
        mpfr_add(r11544453, r11544449, r11544452, MPFR_RNDN);
        return mpfr_get_d(r11544453, MPFR_RNDN);
}

static mpfr_t r11544454, r11544455, r11544456, r11544457, r11544458, r11544459, r11544460, r11544461, r11544462, r11544463, r11544464, r11544465, r11544466, r11544467, r11544468, r11544469, r11544470, r11544471, r11544472, r11544473, r11544474, r11544475, r11544476, r11544477, r11544478, r11544479, r11544480, r11544481, r11544482, r11544483, r11544484, r11544485, r11544486, r11544487, r11544488;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544454);
        mpfr_init(r11544455);
        mpfr_init_set_str(r11544456, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11544457);
        mpfr_init(r11544458);
        mpfr_init_set_str(r11544459, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11544460);
        mpfr_init(r11544461);
        mpfr_init(r11544462);
        mpfr_init(r11544463);
        mpfr_init_set_str(r11544464, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11544465);
        mpfr_init_set_str(r11544466, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544467);
        mpfr_init(r11544468);
        mpfr_init(r11544469);
        mpfr_init(r11544470);
        mpfr_init_set_str(r11544471, "2", 10, MPFR_RNDN);
        mpfr_init(r11544472);
        mpfr_init(r11544473);
        mpfr_init_set_str(r11544474, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544475, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11544476);
        mpfr_init(r11544477);
        mpfr_init(r11544478);
        mpfr_init_set_str(r11544479, "3", 10, MPFR_RNDN);
        mpfr_init(r11544480);
        mpfr_init(r11544481);
        mpfr_init_set_str(r11544482, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11544483);
        mpfr_init_set_str(r11544484, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r11544485);
        mpfr_init(r11544486);
        mpfr_init(r11544487);
        mpfr_init(r11544488);
}

double f_fm(double x) {
        mpfr_set_d(r11544454, x, MPFR_RNDN);
        mpfr_mul(r11544455, r11544454, r11544454, MPFR_RNDN);
        ;
        mpfr_mul(r11544457, r11544455, r11544456, MPFR_RNDN);
        mpfr_exp(r11544458, r11544457, MPFR_RNDN);
        ;
        mpfr_mul(r11544460, r11544459, r11544454, MPFR_RNDN);
        mpfr_mul(r11544461, r11544455, r11544460, MPFR_RNDN);
        mpfr_exp(r11544462, r11544461, MPFR_RNDN);
        mpfr_mul(r11544463, r11544458, r11544462, MPFR_RNDN);
        ;
        mpfr_mul(r11544465, r11544454, r11544464, MPFR_RNDN);
        ;
        mpfr_add(r11544467, r11544465, r11544466, MPFR_RNDN);
        mpfr_exp(r11544468, r11544467, MPFR_RNDN);
        mpfr_mul(r11544469, r11544463, r11544468, MPFR_RNDN);
        mpfr_log(r11544470, r11544469, MPFR_RNDN);
        ;
        mpfr_add(r11544472, r11544471, r11544471, MPFR_RNDN);
        mpfr_pow(r11544473, r11544454, r11544472, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544476, r11544475, r11544454, MPFR_RNDN);
        mpfr_add(r11544477, r11544474, r11544476, MPFR_RNDN);
        mpfr_mul(r11544478, r11544473, r11544477, MPFR_RNDN);
        ;
        mpfr_pow(r11544480, r11544454, r11544479, MPFR_RNDN);
        mpfr_mul(r11544481, r11544480, r11544480, MPFR_RNDN);
        ;
        mpfr_mul(r11544483, r11544482, r11544454, MPFR_RNDN);
        ;
        mpfr_add(r11544485, r11544483, r11544484, MPFR_RNDN);
        mpfr_mul(r11544486, r11544481, r11544485, MPFR_RNDN);
        mpfr_add(r11544487, r11544478, r11544486, MPFR_RNDN);
        mpfr_add(r11544488, r11544470, r11544487, MPFR_RNDN);
        return mpfr_get_d(r11544488, MPFR_RNDN);
}

static mpfr_t r11544489, r11544490, r11544491, r11544492, r11544493, r11544494, r11544495, r11544496, r11544497, r11544498, r11544499, r11544500, r11544501, r11544502, r11544503, r11544504, r11544505, r11544506, r11544507, r11544508, r11544509, r11544510, r11544511, r11544512, r11544513, r11544514, r11544515, r11544516, r11544517, r11544518, r11544519, r11544520, r11544521, r11544522, r11544523;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544489);
        mpfr_init(r11544490);
        mpfr_init_set_str(r11544491, "10.5", 10, MPFR_RNDN);
        mpfr_init(r11544492);
        mpfr_init(r11544493);
        mpfr_init_set_str(r11544494, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r11544495);
        mpfr_init(r11544496);
        mpfr_init(r11544497);
        mpfr_init(r11544498);
        mpfr_init_set_str(r11544499, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r11544500);
        mpfr_init_set_str(r11544501, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544502);
        mpfr_init(r11544503);
        mpfr_init(r11544504);
        mpfr_init(r11544505);
        mpfr_init_set_str(r11544506, "2", 10, MPFR_RNDN);
        mpfr_init(r11544507);
        mpfr_init(r11544508);
        mpfr_init_set_str(r11544509, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544510, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r11544511);
        mpfr_init(r11544512);
        mpfr_init(r11544513);
        mpfr_init_set_str(r11544514, "3", 10, MPFR_RNDN);
        mpfr_init(r11544515);
        mpfr_init(r11544516);
        mpfr_init_set_str(r11544517, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r11544518);
        mpfr_init_set_str(r11544519, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r11544520);
        mpfr_init(r11544521);
        mpfr_init(r11544522);
        mpfr_init(r11544523);
}

double f_dm(double x) {
        mpfr_set_d(r11544489, x, MPFR_RNDN);
        mpfr_mul(r11544490, r11544489, r11544489, MPFR_RNDN);
        ;
        mpfr_mul(r11544492, r11544490, r11544491, MPFR_RNDN);
        mpfr_exp(r11544493, r11544492, MPFR_RNDN);
        ;
        mpfr_mul(r11544495, r11544494, r11544489, MPFR_RNDN);
        mpfr_mul(r11544496, r11544490, r11544495, MPFR_RNDN);
        mpfr_exp(r11544497, r11544496, MPFR_RNDN);
        mpfr_mul(r11544498, r11544493, r11544497, MPFR_RNDN);
        ;
        mpfr_mul(r11544500, r11544489, r11544499, MPFR_RNDN);
        ;
        mpfr_add(r11544502, r11544500, r11544501, MPFR_RNDN);
        mpfr_exp(r11544503, r11544502, MPFR_RNDN);
        mpfr_mul(r11544504, r11544498, r11544503, MPFR_RNDN);
        mpfr_log(r11544505, r11544504, MPFR_RNDN);
        ;
        mpfr_add(r11544507, r11544506, r11544506, MPFR_RNDN);
        mpfr_pow(r11544508, r11544489, r11544507, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544511, r11544510, r11544489, MPFR_RNDN);
        mpfr_add(r11544512, r11544509, r11544511, MPFR_RNDN);
        mpfr_mul(r11544513, r11544508, r11544512, MPFR_RNDN);
        ;
        mpfr_pow(r11544515, r11544489, r11544514, MPFR_RNDN);
        mpfr_mul(r11544516, r11544515, r11544515, MPFR_RNDN);
        ;
        mpfr_mul(r11544518, r11544517, r11544489, MPFR_RNDN);
        ;
        mpfr_add(r11544520, r11544518, r11544519, MPFR_RNDN);
        mpfr_mul(r11544521, r11544516, r11544520, MPFR_RNDN);
        mpfr_add(r11544522, r11544513, r11544521, MPFR_RNDN);
        mpfr_add(r11544523, r11544505, r11544522, MPFR_RNDN);
        return mpfr_get_d(r11544523, MPFR_RNDN);
}

