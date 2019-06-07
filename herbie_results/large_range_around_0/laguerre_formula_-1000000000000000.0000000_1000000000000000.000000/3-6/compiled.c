#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10198356 = 1.0;
        float r10198357 = -6.0;
        float r10198358 = x;
        float r10198359 = r10198357 * r10198358;
        float r10198360 = r10198356 + r10198359;
        float r10198361 = 7.5;
        float r10198362 = r10198358 * r10198358;
        float r10198363 = r10198361 * r10198362;
        float r10198364 = r10198360 + r10198363;
        float r10198365 = -3.333333;
        float r10198366 = r10198362 * r10198358;
        float r10198367 = r10198365 * r10198366;
        float r10198368 = r10198364 + r10198367;
        float r10198369 = 0.625;
        float r10198370 = r10198366 * r10198358;
        float r10198371 = r10198369 * r10198370;
        float r10198372 = r10198368 + r10198371;
        float r10198373 = -0.05;
        float r10198374 = r10198370 * r10198358;
        float r10198375 = r10198373 * r10198374;
        float r10198376 = r10198372 + r10198375;
        float r10198377 = 0.001389;
        float r10198378 = r10198374 * r10198358;
        float r10198379 = r10198377 * r10198378;
        float r10198380 = r10198376 + r10198379;
        return r10198380;
}

double f_id(double x) {
        double r10198381 = 1.0;
        double r10198382 = -6.0;
        double r10198383 = x;
        double r10198384 = r10198382 * r10198383;
        double r10198385 = r10198381 + r10198384;
        double r10198386 = 7.5;
        double r10198387 = r10198383 * r10198383;
        double r10198388 = r10198386 * r10198387;
        double r10198389 = r10198385 + r10198388;
        double r10198390 = -3.333333;
        double r10198391 = r10198387 * r10198383;
        double r10198392 = r10198390 * r10198391;
        double r10198393 = r10198389 + r10198392;
        double r10198394 = 0.625;
        double r10198395 = r10198391 * r10198383;
        double r10198396 = r10198394 * r10198395;
        double r10198397 = r10198393 + r10198396;
        double r10198398 = -0.05;
        double r10198399 = r10198395 * r10198383;
        double r10198400 = r10198398 * r10198399;
        double r10198401 = r10198397 + r10198400;
        double r10198402 = 0.001389;
        double r10198403 = r10198399 * r10198383;
        double r10198404 = r10198402 * r10198403;
        double r10198405 = r10198401 + r10198404;
        return r10198405;
}


double f_of(float x) {
        float r10198406 = x;
        float r10198407 = 0.001389;
        float r10198408 = r10198407 * r10198406;
        float r10198409 = r10198406 * r10198408;
        float r10198410 = r10198406 * r10198406;
        float r10198411 = r10198410 * r10198410;
        float r10198412 = r10198409 * r10198411;
        float r10198413 = -6.0;
        float r10198414 = r10198406 * r10198413;
        float r10198415 = 1.0;
        float r10198416 = r10198414 + r10198415;
        float r10198417 = r10198412 + r10198416;
        float r10198418 = 2;
        float r10198419 = r10198418 + r10198418;
        float r10198420 = pow(r10198406, r10198419);
        float r10198421 = 0.625;
        float r10198422 = -0.05;
        float r10198423 = r10198422 * r10198406;
        float r10198424 = r10198421 + r10198423;
        float r10198425 = r10198420 * r10198424;
        float r10198426 = -3.333333;
        float r10198427 = r10198426 * r10198406;
        float r10198428 = 7.5;
        float r10198429 = r10198427 + r10198428;
        float r10198430 = r10198410 * r10198429;
        float r10198431 = r10198425 + r10198430;
        float r10198432 = r10198417 + r10198431;
        return r10198432;
}

double f_od(double x) {
        double r10198433 = x;
        double r10198434 = 0.001389;
        double r10198435 = r10198434 * r10198433;
        double r10198436 = r10198433 * r10198435;
        double r10198437 = r10198433 * r10198433;
        double r10198438 = r10198437 * r10198437;
        double r10198439 = r10198436 * r10198438;
        double r10198440 = -6.0;
        double r10198441 = r10198433 * r10198440;
        double r10198442 = 1.0;
        double r10198443 = r10198441 + r10198442;
        double r10198444 = r10198439 + r10198443;
        double r10198445 = 2;
        double r10198446 = r10198445 + r10198445;
        double r10198447 = pow(r10198433, r10198446);
        double r10198448 = 0.625;
        double r10198449 = -0.05;
        double r10198450 = r10198449 * r10198433;
        double r10198451 = r10198448 + r10198450;
        double r10198452 = r10198447 * r10198451;
        double r10198453 = -3.333333;
        double r10198454 = r10198453 * r10198433;
        double r10198455 = 7.5;
        double r10198456 = r10198454 + r10198455;
        double r10198457 = r10198437 * r10198456;
        double r10198458 = r10198452 + r10198457;
        double r10198459 = r10198444 + r10198458;
        return r10198459;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198460, r10198461, r10198462, r10198463, r10198464, r10198465, r10198466, r10198467, r10198468, r10198469, r10198470, r10198471, r10198472, r10198473, r10198474, r10198475, r10198476, r10198477, r10198478, r10198479, r10198480, r10198481, r10198482, r10198483, r10198484;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10198460, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198461, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10198462);
        mpfr_init(r10198463);
        mpfr_init(r10198464);
        mpfr_init_set_str(r10198465, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10198466);
        mpfr_init(r10198467);
        mpfr_init(r10198468);
        mpfr_init_set_str(r10198469, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10198470);
        mpfr_init(r10198471);
        mpfr_init(r10198472);
        mpfr_init_set_str(r10198473, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10198474);
        mpfr_init(r10198475);
        mpfr_init(r10198476);
        mpfr_init_set_str(r10198477, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10198478);
        mpfr_init(r10198479);
        mpfr_init(r10198480);
        mpfr_init_set_str(r10198481, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10198482);
        mpfr_init(r10198483);
        mpfr_init(r10198484);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198462, x, MPFR_RNDN);
        mpfr_mul(r10198463, r10198461, r10198462, MPFR_RNDN);
        mpfr_add(r10198464, r10198460, r10198463, MPFR_RNDN);
        ;
        mpfr_mul(r10198466, r10198462, r10198462, MPFR_RNDN);
        mpfr_mul(r10198467, r10198465, r10198466, MPFR_RNDN);
        mpfr_add(r10198468, r10198464, r10198467, MPFR_RNDN);
        ;
        mpfr_mul(r10198470, r10198466, r10198462, MPFR_RNDN);
        mpfr_mul(r10198471, r10198469, r10198470, MPFR_RNDN);
        mpfr_add(r10198472, r10198468, r10198471, MPFR_RNDN);
        ;
        mpfr_mul(r10198474, r10198470, r10198462, MPFR_RNDN);
        mpfr_mul(r10198475, r10198473, r10198474, MPFR_RNDN);
        mpfr_add(r10198476, r10198472, r10198475, MPFR_RNDN);
        ;
        mpfr_mul(r10198478, r10198474, r10198462, MPFR_RNDN);
        mpfr_mul(r10198479, r10198477, r10198478, MPFR_RNDN);
        mpfr_add(r10198480, r10198476, r10198479, MPFR_RNDN);
        ;
        mpfr_mul(r10198482, r10198478, r10198462, MPFR_RNDN);
        mpfr_mul(r10198483, r10198481, r10198482, MPFR_RNDN);
        mpfr_add(r10198484, r10198480, r10198483, MPFR_RNDN);
        return mpfr_get_d(r10198484, MPFR_RNDN);
}

static mpfr_t r10198485, r10198486, r10198487, r10198488, r10198489, r10198490, r10198491, r10198492, r10198493, r10198494, r10198495, r10198496, r10198497, r10198498, r10198499, r10198500, r10198501, r10198502, r10198503, r10198504, r10198505, r10198506, r10198507, r10198508, r10198509, r10198510, r10198511;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198485);
        mpfr_init_set_str(r10198486, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10198487);
        mpfr_init(r10198488);
        mpfr_init(r10198489);
        mpfr_init(r10198490);
        mpfr_init(r10198491);
        mpfr_init_set_str(r10198492, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10198493);
        mpfr_init_set_str(r10198494, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198495);
        mpfr_init(r10198496);
        mpfr_init_set_str(r10198497, "2", 10, MPFR_RNDN);
        mpfr_init(r10198498);
        mpfr_init(r10198499);
        mpfr_init_set_str(r10198500, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198501, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10198502);
        mpfr_init(r10198503);
        mpfr_init(r10198504);
        mpfr_init_set_str(r10198505, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10198506);
        mpfr_init_set_str(r10198507, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10198508);
        mpfr_init(r10198509);
        mpfr_init(r10198510);
        mpfr_init(r10198511);
}

double f_fm(double x) {
        mpfr_set_d(r10198485, x, MPFR_RNDN);
        ;
        mpfr_mul(r10198487, r10198486, r10198485, MPFR_RNDN);
        mpfr_mul(r10198488, r10198485, r10198487, MPFR_RNDN);
        mpfr_mul(r10198489, r10198485, r10198485, MPFR_RNDN);
        mpfr_mul(r10198490, r10198489, r10198489, MPFR_RNDN);
        mpfr_mul(r10198491, r10198488, r10198490, MPFR_RNDN);
        ;
        mpfr_mul(r10198493, r10198485, r10198492, MPFR_RNDN);
        ;
        mpfr_add(r10198495, r10198493, r10198494, MPFR_RNDN);
        mpfr_add(r10198496, r10198491, r10198495, MPFR_RNDN);
        ;
        mpfr_add(r10198498, r10198497, r10198497, MPFR_RNDN);
        mpfr_pow(r10198499, r10198485, r10198498, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198502, r10198501, r10198485, MPFR_RNDN);
        mpfr_add(r10198503, r10198500, r10198502, MPFR_RNDN);
        mpfr_mul(r10198504, r10198499, r10198503, MPFR_RNDN);
        ;
        mpfr_mul(r10198506, r10198505, r10198485, MPFR_RNDN);
        ;
        mpfr_add(r10198508, r10198506, r10198507, MPFR_RNDN);
        mpfr_mul(r10198509, r10198489, r10198508, MPFR_RNDN);
        mpfr_add(r10198510, r10198504, r10198509, MPFR_RNDN);
        mpfr_add(r10198511, r10198496, r10198510, MPFR_RNDN);
        return mpfr_get_d(r10198511, MPFR_RNDN);
}

static mpfr_t r10198512, r10198513, r10198514, r10198515, r10198516, r10198517, r10198518, r10198519, r10198520, r10198521, r10198522, r10198523, r10198524, r10198525, r10198526, r10198527, r10198528, r10198529, r10198530, r10198531, r10198532, r10198533, r10198534, r10198535, r10198536, r10198537, r10198538;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10198512);
        mpfr_init_set_str(r10198513, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10198514);
        mpfr_init(r10198515);
        mpfr_init(r10198516);
        mpfr_init(r10198517);
        mpfr_init(r10198518);
        mpfr_init_set_str(r10198519, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10198520);
        mpfr_init_set_str(r10198521, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10198522);
        mpfr_init(r10198523);
        mpfr_init_set_str(r10198524, "2", 10, MPFR_RNDN);
        mpfr_init(r10198525);
        mpfr_init(r10198526);
        mpfr_init_set_str(r10198527, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198528, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10198529);
        mpfr_init(r10198530);
        mpfr_init(r10198531);
        mpfr_init_set_str(r10198532, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10198533);
        mpfr_init_set_str(r10198534, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10198535);
        mpfr_init(r10198536);
        mpfr_init(r10198537);
        mpfr_init(r10198538);
}

double f_dm(double x) {
        mpfr_set_d(r10198512, x, MPFR_RNDN);
        ;
        mpfr_mul(r10198514, r10198513, r10198512, MPFR_RNDN);
        mpfr_mul(r10198515, r10198512, r10198514, MPFR_RNDN);
        mpfr_mul(r10198516, r10198512, r10198512, MPFR_RNDN);
        mpfr_mul(r10198517, r10198516, r10198516, MPFR_RNDN);
        mpfr_mul(r10198518, r10198515, r10198517, MPFR_RNDN);
        ;
        mpfr_mul(r10198520, r10198512, r10198519, MPFR_RNDN);
        ;
        mpfr_add(r10198522, r10198520, r10198521, MPFR_RNDN);
        mpfr_add(r10198523, r10198518, r10198522, MPFR_RNDN);
        ;
        mpfr_add(r10198525, r10198524, r10198524, MPFR_RNDN);
        mpfr_pow(r10198526, r10198512, r10198525, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10198529, r10198528, r10198512, MPFR_RNDN);
        mpfr_add(r10198530, r10198527, r10198529, MPFR_RNDN);
        mpfr_mul(r10198531, r10198526, r10198530, MPFR_RNDN);
        ;
        mpfr_mul(r10198533, r10198532, r10198512, MPFR_RNDN);
        ;
        mpfr_add(r10198535, r10198533, r10198534, MPFR_RNDN);
        mpfr_mul(r10198536, r10198516, r10198535, MPFR_RNDN);
        mpfr_add(r10198537, r10198531, r10198536, MPFR_RNDN);
        mpfr_add(r10198538, r10198523, r10198537, MPFR_RNDN);
        return mpfr_get_d(r10198538, MPFR_RNDN);
}

