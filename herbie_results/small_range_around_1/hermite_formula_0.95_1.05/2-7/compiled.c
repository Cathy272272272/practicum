#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r63170385 = -1680.0;
        float r63170386 = x;
        float r63170387 = r63170385 * r63170386;
        float r63170388 = 3360.0;
        float r63170389 = r63170386 * r63170386;
        float r63170390 = r63170389 * r63170386;
        float r63170391 = r63170388 * r63170390;
        float r63170392 = r63170387 + r63170391;
        float r63170393 = -1344.0;
        float r63170394 = r63170390 * r63170386;
        float r63170395 = r63170394 * r63170386;
        float r63170396 = r63170393 * r63170395;
        float r63170397 = r63170392 + r63170396;
        float r63170398 = 128.0;
        float r63170399 = r63170395 * r63170386;
        float r63170400 = r63170399 * r63170386;
        float r63170401 = r63170398 * r63170400;
        float r63170402 = r63170397 + r63170401;
        return r63170402;
}

double f_id(double x) {
        double r63170403 = -1680.0;
        double r63170404 = x;
        double r63170405 = r63170403 * r63170404;
        double r63170406 = 3360.0;
        double r63170407 = r63170404 * r63170404;
        double r63170408 = r63170407 * r63170404;
        double r63170409 = r63170406 * r63170408;
        double r63170410 = r63170405 + r63170409;
        double r63170411 = -1344.0;
        double r63170412 = r63170408 * r63170404;
        double r63170413 = r63170412 * r63170404;
        double r63170414 = r63170411 * r63170413;
        double r63170415 = r63170410 + r63170414;
        double r63170416 = 128.0;
        double r63170417 = r63170413 * r63170404;
        double r63170418 = r63170417 * r63170404;
        double r63170419 = r63170416 * r63170418;
        double r63170420 = r63170415 + r63170419;
        return r63170420;
}


double f_of(float x) {
        float r63170421 = -1680.0;
        float r63170422 = x;
        float r63170423 = r63170421 * r63170422;
        float r63170424 = -1344.0;
        float r63170425 = r63170424 * r63170422;
        float r63170426 = r63170422 * r63170422;
        float r63170427 = r63170425 * r63170426;
        float r63170428 = 3360.0;
        float r63170429 = r63170428 * r63170422;
        float r63170430 = r63170427 + r63170429;
        float r63170431 = r63170430 * r63170426;
        float r63170432 = r63170423 + r63170431;
        float r63170433 = sqrt(r63170432);
        float r63170434 = 3;
        float r63170435 = pow(r63170422, r63170434);
        float r63170436 = r63170428 * r63170435;
        float r63170437 = 1344.0;
        float r63170438 = 5;
        float r63170439 = pow(r63170422, r63170438);
        float r63170440 = r63170437 * r63170439;
        float r63170441 = 1680.0;
        float r63170442 = r63170441 * r63170422;
        float r63170443 = r63170440 + r63170442;
        float r63170444 = r63170436 - r63170443;
        float r63170445 = log(r63170444);
        float r63170446 = exp(r63170445);
        float r63170447 = sqrt(r63170446);
        float r63170448 = r63170433 * r63170447;
        float r63170449 = 128.0;
        float r63170450 = r63170426 * r63170422;
        float r63170451 = r63170450 * r63170422;
        float r63170452 = r63170451 * r63170422;
        float r63170453 = r63170452 * r63170422;
        float r63170454 = r63170453 * r63170422;
        float r63170455 = r63170449 * r63170454;
        float r63170456 = r63170448 + r63170455;
        return r63170456;
}

double f_od(double x) {
        double r63170457 = -1680.0;
        double r63170458 = x;
        double r63170459 = r63170457 * r63170458;
        double r63170460 = -1344.0;
        double r63170461 = r63170460 * r63170458;
        double r63170462 = r63170458 * r63170458;
        double r63170463 = r63170461 * r63170462;
        double r63170464 = 3360.0;
        double r63170465 = r63170464 * r63170458;
        double r63170466 = r63170463 + r63170465;
        double r63170467 = r63170466 * r63170462;
        double r63170468 = r63170459 + r63170467;
        double r63170469 = sqrt(r63170468);
        double r63170470 = 3;
        double r63170471 = pow(r63170458, r63170470);
        double r63170472 = r63170464 * r63170471;
        double r63170473 = 1344.0;
        double r63170474 = 5;
        double r63170475 = pow(r63170458, r63170474);
        double r63170476 = r63170473 * r63170475;
        double r63170477 = 1680.0;
        double r63170478 = r63170477 * r63170458;
        double r63170479 = r63170476 + r63170478;
        double r63170480 = r63170472 - r63170479;
        double r63170481 = log(r63170480);
        double r63170482 = exp(r63170481);
        double r63170483 = sqrt(r63170482);
        double r63170484 = r63170469 * r63170483;
        double r63170485 = 128.0;
        double r63170486 = r63170462 * r63170458;
        double r63170487 = r63170486 * r63170458;
        double r63170488 = r63170487 * r63170458;
        double r63170489 = r63170488 * r63170458;
        double r63170490 = r63170489 * r63170458;
        double r63170491 = r63170485 * r63170490;
        double r63170492 = r63170484 + r63170491;
        return r63170492;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63170493, r63170494, r63170495, r63170496, r63170497, r63170498, r63170499, r63170500, r63170501, r63170502, r63170503, r63170504, r63170505, r63170506, r63170507, r63170508, r63170509, r63170510;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170493, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170494);
        mpfr_init(r63170495);
        mpfr_init_set_str(r63170496, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r63170497);
        mpfr_init(r63170498);
        mpfr_init(r63170499);
        mpfr_init(r63170500);
        mpfr_init_set_str(r63170501, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r63170502);
        mpfr_init(r63170503);
        mpfr_init(r63170504);
        mpfr_init(r63170505);
        mpfr_init_set_str(r63170506, "128.0", 10, MPFR_RNDN);
        mpfr_init(r63170507);
        mpfr_init(r63170508);
        mpfr_init(r63170509);
        mpfr_init(r63170510);
}

double f_im(double x) {
        ;
        mpfr_set_d(r63170494, x, MPFR_RNDN);
        mpfr_mul(r63170495, r63170493, r63170494, MPFR_RNDN);
        ;
        mpfr_mul(r63170497, r63170494, r63170494, MPFR_RNDN);
        mpfr_mul(r63170498, r63170497, r63170494, MPFR_RNDN);
        mpfr_mul(r63170499, r63170496, r63170498, MPFR_RNDN);
        mpfr_add(r63170500, r63170495, r63170499, MPFR_RNDN);
        ;
        mpfr_mul(r63170502, r63170498, r63170494, MPFR_RNDN);
        mpfr_mul(r63170503, r63170502, r63170494, MPFR_RNDN);
        mpfr_mul(r63170504, r63170501, r63170503, MPFR_RNDN);
        mpfr_add(r63170505, r63170500, r63170504, MPFR_RNDN);
        ;
        mpfr_mul(r63170507, r63170503, r63170494, MPFR_RNDN);
        mpfr_mul(r63170508, r63170507, r63170494, MPFR_RNDN);
        mpfr_mul(r63170509, r63170506, r63170508, MPFR_RNDN);
        mpfr_add(r63170510, r63170505, r63170509, MPFR_RNDN);
        return mpfr_get_d(r63170510, MPFR_RNDN);
}

static mpfr_t r63170511, r63170512, r63170513, r63170514, r63170515, r63170516, r63170517, r63170518, r63170519, r63170520, r63170521, r63170522, r63170523, r63170524, r63170525, r63170526, r63170527, r63170528, r63170529, r63170530, r63170531, r63170532, r63170533, r63170534, r63170535, r63170536, r63170537, r63170538, r63170539, r63170540, r63170541, r63170542, r63170543, r63170544, r63170545, r63170546;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170511, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170512);
        mpfr_init(r63170513);
        mpfr_init_set_str(r63170514, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r63170515);
        mpfr_init(r63170516);
        mpfr_init(r63170517);
        mpfr_init_set_str(r63170518, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r63170519);
        mpfr_init(r63170520);
        mpfr_init(r63170521);
        mpfr_init(r63170522);
        mpfr_init(r63170523);
        mpfr_init_set_str(r63170524, "3", 10, MPFR_RNDN);
        mpfr_init(r63170525);
        mpfr_init(r63170526);
        mpfr_init_set_str(r63170527, "1344.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170528, "5", 10, MPFR_RNDN);
        mpfr_init(r63170529);
        mpfr_init(r63170530);
        mpfr_init_set_str(r63170531, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170532);
        mpfr_init(r63170533);
        mpfr_init(r63170534);
        mpfr_init(r63170535);
        mpfr_init(r63170536);
        mpfr_init(r63170537);
        mpfr_init(r63170538);
        mpfr_init_set_str(r63170539, "128.0", 10, MPFR_RNDN);
        mpfr_init(r63170540);
        mpfr_init(r63170541);
        mpfr_init(r63170542);
        mpfr_init(r63170543);
        mpfr_init(r63170544);
        mpfr_init(r63170545);
        mpfr_init(r63170546);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r63170512, x, MPFR_RNDN);
        mpfr_mul(r63170513, r63170511, r63170512, MPFR_RNDN);
        ;
        mpfr_mul(r63170515, r63170514, r63170512, MPFR_RNDN);
        mpfr_mul(r63170516, r63170512, r63170512, MPFR_RNDN);
        mpfr_mul(r63170517, r63170515, r63170516, MPFR_RNDN);
        ;
        mpfr_mul(r63170519, r63170518, r63170512, MPFR_RNDN);
        mpfr_add(r63170520, r63170517, r63170519, MPFR_RNDN);
        mpfr_mul(r63170521, r63170520, r63170516, MPFR_RNDN);
        mpfr_add(r63170522, r63170513, r63170521, MPFR_RNDN);
        mpfr_sqrt(r63170523, r63170522, MPFR_RNDN);
        ;
        mpfr_pow(r63170525, r63170512, r63170524, MPFR_RNDN);
        mpfr_mul(r63170526, r63170518, r63170525, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r63170529, r63170512, r63170528, MPFR_RNDN);
        mpfr_mul(r63170530, r63170527, r63170529, MPFR_RNDN);
        ;
        mpfr_mul(r63170532, r63170531, r63170512, MPFR_RNDN);
        mpfr_add(r63170533, r63170530, r63170532, MPFR_RNDN);
        mpfr_sub(r63170534, r63170526, r63170533, MPFR_RNDN);
        mpfr_log(r63170535, r63170534, MPFR_RNDN);
        mpfr_exp(r63170536, r63170535, MPFR_RNDN);
        mpfr_sqrt(r63170537, r63170536, MPFR_RNDN);
        mpfr_mul(r63170538, r63170523, r63170537, MPFR_RNDN);
        ;
        mpfr_mul(r63170540, r63170516, r63170512, MPFR_RNDN);
        mpfr_mul(r63170541, r63170540, r63170512, MPFR_RNDN);
        mpfr_mul(r63170542, r63170541, r63170512, MPFR_RNDN);
        mpfr_mul(r63170543, r63170542, r63170512, MPFR_RNDN);
        mpfr_mul(r63170544, r63170543, r63170512, MPFR_RNDN);
        mpfr_mul(r63170545, r63170539, r63170544, MPFR_RNDN);
        mpfr_add(r63170546, r63170538, r63170545, MPFR_RNDN);
        return mpfr_get_d(r63170546, MPFR_RNDN);
}

static mpfr_t r63170547, r63170548, r63170549, r63170550, r63170551, r63170552, r63170553, r63170554, r63170555, r63170556, r63170557, r63170558, r63170559, r63170560, r63170561, r63170562, r63170563, r63170564, r63170565, r63170566, r63170567, r63170568, r63170569, r63170570, r63170571, r63170572, r63170573, r63170574, r63170575, r63170576, r63170577, r63170578, r63170579, r63170580, r63170581, r63170582;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170547, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170548);
        mpfr_init(r63170549);
        mpfr_init_set_str(r63170550, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r63170551);
        mpfr_init(r63170552);
        mpfr_init(r63170553);
        mpfr_init_set_str(r63170554, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r63170555);
        mpfr_init(r63170556);
        mpfr_init(r63170557);
        mpfr_init(r63170558);
        mpfr_init(r63170559);
        mpfr_init_set_str(r63170560, "3", 10, MPFR_RNDN);
        mpfr_init(r63170561);
        mpfr_init(r63170562);
        mpfr_init_set_str(r63170563, "1344.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63170564, "5", 10, MPFR_RNDN);
        mpfr_init(r63170565);
        mpfr_init(r63170566);
        mpfr_init_set_str(r63170567, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r63170568);
        mpfr_init(r63170569);
        mpfr_init(r63170570);
        mpfr_init(r63170571);
        mpfr_init(r63170572);
        mpfr_init(r63170573);
        mpfr_init(r63170574);
        mpfr_init_set_str(r63170575, "128.0", 10, MPFR_RNDN);
        mpfr_init(r63170576);
        mpfr_init(r63170577);
        mpfr_init(r63170578);
        mpfr_init(r63170579);
        mpfr_init(r63170580);
        mpfr_init(r63170581);
        mpfr_init(r63170582);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r63170548, x, MPFR_RNDN);
        mpfr_mul(r63170549, r63170547, r63170548, MPFR_RNDN);
        ;
        mpfr_mul(r63170551, r63170550, r63170548, MPFR_RNDN);
        mpfr_mul(r63170552, r63170548, r63170548, MPFR_RNDN);
        mpfr_mul(r63170553, r63170551, r63170552, MPFR_RNDN);
        ;
        mpfr_mul(r63170555, r63170554, r63170548, MPFR_RNDN);
        mpfr_add(r63170556, r63170553, r63170555, MPFR_RNDN);
        mpfr_mul(r63170557, r63170556, r63170552, MPFR_RNDN);
        mpfr_add(r63170558, r63170549, r63170557, MPFR_RNDN);
        mpfr_sqrt(r63170559, r63170558, MPFR_RNDN);
        ;
        mpfr_pow(r63170561, r63170548, r63170560, MPFR_RNDN);
        mpfr_mul(r63170562, r63170554, r63170561, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r63170565, r63170548, r63170564, MPFR_RNDN);
        mpfr_mul(r63170566, r63170563, r63170565, MPFR_RNDN);
        ;
        mpfr_mul(r63170568, r63170567, r63170548, MPFR_RNDN);
        mpfr_add(r63170569, r63170566, r63170568, MPFR_RNDN);
        mpfr_sub(r63170570, r63170562, r63170569, MPFR_RNDN);
        mpfr_log(r63170571, r63170570, MPFR_RNDN);
        mpfr_exp(r63170572, r63170571, MPFR_RNDN);
        mpfr_sqrt(r63170573, r63170572, MPFR_RNDN);
        mpfr_mul(r63170574, r63170559, r63170573, MPFR_RNDN);
        ;
        mpfr_mul(r63170576, r63170552, r63170548, MPFR_RNDN);
        mpfr_mul(r63170577, r63170576, r63170548, MPFR_RNDN);
        mpfr_mul(r63170578, r63170577, r63170548, MPFR_RNDN);
        mpfr_mul(r63170579, r63170578, r63170548, MPFR_RNDN);
        mpfr_mul(r63170580, r63170579, r63170548, MPFR_RNDN);
        mpfr_mul(r63170581, r63170575, r63170580, MPFR_RNDN);
        mpfr_add(r63170582, r63170574, r63170581, MPFR_RNDN);
        return mpfr_get_d(r63170582, MPFR_RNDN);
}

