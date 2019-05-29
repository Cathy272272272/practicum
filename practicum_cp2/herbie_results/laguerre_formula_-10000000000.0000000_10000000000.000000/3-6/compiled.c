#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9373389 = 1.0;
        float r9373390 = -6.0;
        float r9373391 = x;
        float r9373392 = r9373390 * r9373391;
        float r9373393 = r9373389 + r9373392;
        float r9373394 = 7.5;
        float r9373395 = r9373391 * r9373391;
        float r9373396 = r9373394 * r9373395;
        float r9373397 = r9373393 + r9373396;
        float r9373398 = -3.333333;
        float r9373399 = r9373395 * r9373391;
        float r9373400 = r9373398 * r9373399;
        float r9373401 = r9373397 + r9373400;
        float r9373402 = 0.625;
        float r9373403 = r9373399 * r9373391;
        float r9373404 = r9373402 * r9373403;
        float r9373405 = r9373401 + r9373404;
        float r9373406 = -0.05;
        float r9373407 = r9373403 * r9373391;
        float r9373408 = r9373406 * r9373407;
        float r9373409 = r9373405 + r9373408;
        float r9373410 = 0.001389;
        float r9373411 = r9373407 * r9373391;
        float r9373412 = r9373410 * r9373411;
        float r9373413 = r9373409 + r9373412;
        return r9373413;
}

double f_id(double x) {
        double r9373414 = 1.0;
        double r9373415 = -6.0;
        double r9373416 = x;
        double r9373417 = r9373415 * r9373416;
        double r9373418 = r9373414 + r9373417;
        double r9373419 = 7.5;
        double r9373420 = r9373416 * r9373416;
        double r9373421 = r9373419 * r9373420;
        double r9373422 = r9373418 + r9373421;
        double r9373423 = -3.333333;
        double r9373424 = r9373420 * r9373416;
        double r9373425 = r9373423 * r9373424;
        double r9373426 = r9373422 + r9373425;
        double r9373427 = 0.625;
        double r9373428 = r9373424 * r9373416;
        double r9373429 = r9373427 * r9373428;
        double r9373430 = r9373426 + r9373429;
        double r9373431 = -0.05;
        double r9373432 = r9373428 * r9373416;
        double r9373433 = r9373431 * r9373432;
        double r9373434 = r9373430 + r9373433;
        double r9373435 = 0.001389;
        double r9373436 = r9373432 * r9373416;
        double r9373437 = r9373435 * r9373436;
        double r9373438 = r9373434 + r9373437;
        return r9373438;
}


double f_of(float x) {
        float r9373439 = x;
        float r9373440 = 0.001389;
        float r9373441 = r9373440 * r9373439;
        float r9373442 = r9373439 * r9373441;
        float r9373443 = 2;
        float r9373444 = r9373443 + r9373443;
        float r9373445 = pow(r9373439, r9373444);
        float r9373446 = r9373442 * r9373445;
        float r9373447 = -6.0;
        float r9373448 = r9373439 * r9373447;
        float r9373449 = 1.0;
        float r9373450 = r9373448 + r9373449;
        float r9373451 = r9373446 + r9373450;
        float r9373452 = r9373439 * r9373439;
        float r9373453 = r9373452 * r9373452;
        float r9373454 = 0.625;
        float r9373455 = -0.05;
        float r9373456 = r9373455 * r9373439;
        float r9373457 = r9373454 + r9373456;
        float r9373458 = r9373453 * r9373457;
        float r9373459 = -3.333333;
        float r9373460 = r9373459 * r9373439;
        float r9373461 = 7.5;
        float r9373462 = r9373460 + r9373461;
        float r9373463 = r9373452 * r9373462;
        float r9373464 = r9373458 + r9373463;
        float r9373465 = r9373451 + r9373464;
        return r9373465;
}

double f_od(double x) {
        double r9373466 = x;
        double r9373467 = 0.001389;
        double r9373468 = r9373467 * r9373466;
        double r9373469 = r9373466 * r9373468;
        double r9373470 = 2;
        double r9373471 = r9373470 + r9373470;
        double r9373472 = pow(r9373466, r9373471);
        double r9373473 = r9373469 * r9373472;
        double r9373474 = -6.0;
        double r9373475 = r9373466 * r9373474;
        double r9373476 = 1.0;
        double r9373477 = r9373475 + r9373476;
        double r9373478 = r9373473 + r9373477;
        double r9373479 = r9373466 * r9373466;
        double r9373480 = r9373479 * r9373479;
        double r9373481 = 0.625;
        double r9373482 = -0.05;
        double r9373483 = r9373482 * r9373466;
        double r9373484 = r9373481 + r9373483;
        double r9373485 = r9373480 * r9373484;
        double r9373486 = -3.333333;
        double r9373487 = r9373486 * r9373466;
        double r9373488 = 7.5;
        double r9373489 = r9373487 + r9373488;
        double r9373490 = r9373479 * r9373489;
        double r9373491 = r9373485 + r9373490;
        double r9373492 = r9373478 + r9373491;
        return r9373492;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373493, r9373494, r9373495, r9373496, r9373497, r9373498, r9373499, r9373500, r9373501, r9373502, r9373503, r9373504, r9373505, r9373506, r9373507, r9373508, r9373509, r9373510, r9373511, r9373512, r9373513, r9373514, r9373515, r9373516, r9373517;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9373493, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373494, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9373495);
        mpfr_init(r9373496);
        mpfr_init(r9373497);
        mpfr_init_set_str(r9373498, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9373499);
        mpfr_init(r9373500);
        mpfr_init(r9373501);
        mpfr_init_set_str(r9373502, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9373503);
        mpfr_init(r9373504);
        mpfr_init(r9373505);
        mpfr_init_set_str(r9373506, "0.625", 10, MPFR_RNDN);
        mpfr_init(r9373507);
        mpfr_init(r9373508);
        mpfr_init(r9373509);
        mpfr_init_set_str(r9373510, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9373511);
        mpfr_init(r9373512);
        mpfr_init(r9373513);
        mpfr_init_set_str(r9373514, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9373515);
        mpfr_init(r9373516);
        mpfr_init(r9373517);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373495, x, MPFR_RNDN);
        mpfr_mul(r9373496, r9373494, r9373495, MPFR_RNDN);
        mpfr_add(r9373497, r9373493, r9373496, MPFR_RNDN);
        ;
        mpfr_mul(r9373499, r9373495, r9373495, MPFR_RNDN);
        mpfr_mul(r9373500, r9373498, r9373499, MPFR_RNDN);
        mpfr_add(r9373501, r9373497, r9373500, MPFR_RNDN);
        ;
        mpfr_mul(r9373503, r9373499, r9373495, MPFR_RNDN);
        mpfr_mul(r9373504, r9373502, r9373503, MPFR_RNDN);
        mpfr_add(r9373505, r9373501, r9373504, MPFR_RNDN);
        ;
        mpfr_mul(r9373507, r9373503, r9373495, MPFR_RNDN);
        mpfr_mul(r9373508, r9373506, r9373507, MPFR_RNDN);
        mpfr_add(r9373509, r9373505, r9373508, MPFR_RNDN);
        ;
        mpfr_mul(r9373511, r9373507, r9373495, MPFR_RNDN);
        mpfr_mul(r9373512, r9373510, r9373511, MPFR_RNDN);
        mpfr_add(r9373513, r9373509, r9373512, MPFR_RNDN);
        ;
        mpfr_mul(r9373515, r9373511, r9373495, MPFR_RNDN);
        mpfr_mul(r9373516, r9373514, r9373515, MPFR_RNDN);
        mpfr_add(r9373517, r9373513, r9373516, MPFR_RNDN);
        return mpfr_get_d(r9373517, MPFR_RNDN);
}

static mpfr_t r9373518, r9373519, r9373520, r9373521, r9373522, r9373523, r9373524, r9373525, r9373526, r9373527, r9373528, r9373529, r9373530, r9373531, r9373532, r9373533, r9373534, r9373535, r9373536, r9373537, r9373538, r9373539, r9373540, r9373541, r9373542, r9373543, r9373544;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9373518);
        mpfr_init_set_str(r9373519, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9373520);
        mpfr_init(r9373521);
        mpfr_init_set_str(r9373522, "2", 10, MPFR_RNDN);
        mpfr_init(r9373523);
        mpfr_init(r9373524);
        mpfr_init(r9373525);
        mpfr_init_set_str(r9373526, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9373527);
        mpfr_init_set_str(r9373528, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9373529);
        mpfr_init(r9373530);
        mpfr_init(r9373531);
        mpfr_init(r9373532);
        mpfr_init_set_str(r9373533, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373534, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9373535);
        mpfr_init(r9373536);
        mpfr_init(r9373537);
        mpfr_init_set_str(r9373538, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9373539);
        mpfr_init_set_str(r9373540, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9373541);
        mpfr_init(r9373542);
        mpfr_init(r9373543);
        mpfr_init(r9373544);
}

double f_fm(double x) {
        mpfr_set_d(r9373518, x, MPFR_RNDN);
        ;
        mpfr_mul(r9373520, r9373519, r9373518, MPFR_RNDN);
        mpfr_mul(r9373521, r9373518, r9373520, MPFR_RNDN);
        ;
        mpfr_add(r9373523, r9373522, r9373522, MPFR_RNDN);
        mpfr_pow(r9373524, r9373518, r9373523, MPFR_RNDN);
        mpfr_mul(r9373525, r9373521, r9373524, MPFR_RNDN);
        ;
        mpfr_mul(r9373527, r9373518, r9373526, MPFR_RNDN);
        ;
        mpfr_add(r9373529, r9373527, r9373528, MPFR_RNDN);
        mpfr_add(r9373530, r9373525, r9373529, MPFR_RNDN);
        mpfr_mul(r9373531, r9373518, r9373518, MPFR_RNDN);
        mpfr_mul(r9373532, r9373531, r9373531, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9373535, r9373534, r9373518, MPFR_RNDN);
        mpfr_add(r9373536, r9373533, r9373535, MPFR_RNDN);
        mpfr_mul(r9373537, r9373532, r9373536, MPFR_RNDN);
        ;
        mpfr_mul(r9373539, r9373538, r9373518, MPFR_RNDN);
        ;
        mpfr_add(r9373541, r9373539, r9373540, MPFR_RNDN);
        mpfr_mul(r9373542, r9373531, r9373541, MPFR_RNDN);
        mpfr_add(r9373543, r9373537, r9373542, MPFR_RNDN);
        mpfr_add(r9373544, r9373530, r9373543, MPFR_RNDN);
        return mpfr_get_d(r9373544, MPFR_RNDN);
}

static mpfr_t r9373545, r9373546, r9373547, r9373548, r9373549, r9373550, r9373551, r9373552, r9373553, r9373554, r9373555, r9373556, r9373557, r9373558, r9373559, r9373560, r9373561, r9373562, r9373563, r9373564, r9373565, r9373566, r9373567, r9373568, r9373569, r9373570, r9373571;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9373545);
        mpfr_init_set_str(r9373546, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9373547);
        mpfr_init(r9373548);
        mpfr_init_set_str(r9373549, "2", 10, MPFR_RNDN);
        mpfr_init(r9373550);
        mpfr_init(r9373551);
        mpfr_init(r9373552);
        mpfr_init_set_str(r9373553, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9373554);
        mpfr_init_set_str(r9373555, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9373556);
        mpfr_init(r9373557);
        mpfr_init(r9373558);
        mpfr_init(r9373559);
        mpfr_init_set_str(r9373560, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373561, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9373562);
        mpfr_init(r9373563);
        mpfr_init(r9373564);
        mpfr_init_set_str(r9373565, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9373566);
        mpfr_init_set_str(r9373567, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9373568);
        mpfr_init(r9373569);
        mpfr_init(r9373570);
        mpfr_init(r9373571);
}

double f_dm(double x) {
        mpfr_set_d(r9373545, x, MPFR_RNDN);
        ;
        mpfr_mul(r9373547, r9373546, r9373545, MPFR_RNDN);
        mpfr_mul(r9373548, r9373545, r9373547, MPFR_RNDN);
        ;
        mpfr_add(r9373550, r9373549, r9373549, MPFR_RNDN);
        mpfr_pow(r9373551, r9373545, r9373550, MPFR_RNDN);
        mpfr_mul(r9373552, r9373548, r9373551, MPFR_RNDN);
        ;
        mpfr_mul(r9373554, r9373545, r9373553, MPFR_RNDN);
        ;
        mpfr_add(r9373556, r9373554, r9373555, MPFR_RNDN);
        mpfr_add(r9373557, r9373552, r9373556, MPFR_RNDN);
        mpfr_mul(r9373558, r9373545, r9373545, MPFR_RNDN);
        mpfr_mul(r9373559, r9373558, r9373558, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9373562, r9373561, r9373545, MPFR_RNDN);
        mpfr_add(r9373563, r9373560, r9373562, MPFR_RNDN);
        mpfr_mul(r9373564, r9373559, r9373563, MPFR_RNDN);
        ;
        mpfr_mul(r9373566, r9373565, r9373545, MPFR_RNDN);
        ;
        mpfr_add(r9373568, r9373566, r9373567, MPFR_RNDN);
        mpfr_mul(r9373569, r9373558, r9373568, MPFR_RNDN);
        mpfr_add(r9373570, r9373564, r9373569, MPFR_RNDN);
        mpfr_add(r9373571, r9373557, r9373570, MPFR_RNDN);
        return mpfr_get_d(r9373571, MPFR_RNDN);
}

