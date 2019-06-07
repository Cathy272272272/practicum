#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r48608392 = -2.1875;
        float r48608393 = x;
        float r48608394 = r48608392 * r48608393;
        float r48608395 = 19.6875;
        float r48608396 = r48608393 * r48608393;
        float r48608397 = r48608396 * r48608393;
        float r48608398 = r48608395 * r48608397;
        float r48608399 = r48608394 + r48608398;
        float r48608400 = -43.3125;
        float r48608401 = r48608397 * r48608393;
        float r48608402 = r48608401 * r48608393;
        float r48608403 = r48608400 * r48608402;
        float r48608404 = r48608399 + r48608403;
        float r48608405 = 26.8125;
        float r48608406 = r48608402 * r48608393;
        float r48608407 = r48608406 * r48608393;
        float r48608408 = r48608405 * r48608407;
        float r48608409 = r48608404 + r48608408;
        return r48608409;
}

double f_id(double x) {
        double r48608410 = -2.1875;
        double r48608411 = x;
        double r48608412 = r48608410 * r48608411;
        double r48608413 = 19.6875;
        double r48608414 = r48608411 * r48608411;
        double r48608415 = r48608414 * r48608411;
        double r48608416 = r48608413 * r48608415;
        double r48608417 = r48608412 + r48608416;
        double r48608418 = -43.3125;
        double r48608419 = r48608415 * r48608411;
        double r48608420 = r48608419 * r48608411;
        double r48608421 = r48608418 * r48608420;
        double r48608422 = r48608417 + r48608421;
        double r48608423 = 26.8125;
        double r48608424 = r48608420 * r48608411;
        double r48608425 = r48608424 * r48608411;
        double r48608426 = r48608423 * r48608425;
        double r48608427 = r48608422 + r48608426;
        return r48608427;
}


double f_of(float x) {
        float r48608428 = x;
        float r48608429 = exp(r48608428);
        float r48608430 = r48608428 * r48608428;
        float r48608431 = r48608430 * r48608430;
        float r48608432 = pow(r48608429, r48608431);
        float r48608433 = 26.8125;
        float r48608434 = r48608433 * r48608428;
        float r48608435 = r48608428 * r48608434;
        float r48608436 = -43.3125;
        float r48608437 = r48608435 + r48608436;
        float r48608438 = pow(r48608432, r48608437);
        float r48608439 = -2.1875;
        float r48608440 = exp(r48608439);
        float r48608441 = 19.6875;
        float r48608442 = exp(r48608441);
        float r48608443 = pow(r48608442, r48608430);
        float r48608444 = r48608440 * r48608443;
        float r48608445 = r48608428 + r48608428;
        float r48608446 = r48608428 + r48608445;
        float r48608447 = pow(r48608444, r48608446);
        float r48608448 = sqrt(r48608447);
        float r48608449 = pow(r48608444, r48608428);
        float r48608450 = pow(r48608444, r48608445);
        float r48608451 = r48608449 * r48608450;
        float r48608452 = sqrt(r48608451);
        float r48608453 = r48608448 * r48608452;
        float r48608454 = cbrt(r48608453);
        float r48608455 = r48608438 * r48608454;
        float r48608456 = log(r48608455);
        return r48608456;
}

double f_od(double x) {
        double r48608457 = x;
        double r48608458 = exp(r48608457);
        double r48608459 = r48608457 * r48608457;
        double r48608460 = r48608459 * r48608459;
        double r48608461 = pow(r48608458, r48608460);
        double r48608462 = 26.8125;
        double r48608463 = r48608462 * r48608457;
        double r48608464 = r48608457 * r48608463;
        double r48608465 = -43.3125;
        double r48608466 = r48608464 + r48608465;
        double r48608467 = pow(r48608461, r48608466);
        double r48608468 = -2.1875;
        double r48608469 = exp(r48608468);
        double r48608470 = 19.6875;
        double r48608471 = exp(r48608470);
        double r48608472 = pow(r48608471, r48608459);
        double r48608473 = r48608469 * r48608472;
        double r48608474 = r48608457 + r48608457;
        double r48608475 = r48608457 + r48608474;
        double r48608476 = pow(r48608473, r48608475);
        double r48608477 = sqrt(r48608476);
        double r48608478 = pow(r48608473, r48608457);
        double r48608479 = pow(r48608473, r48608474);
        double r48608480 = r48608478 * r48608479;
        double r48608481 = sqrt(r48608480);
        double r48608482 = r48608477 * r48608481;
        double r48608483 = cbrt(r48608482);
        double r48608484 = r48608467 * r48608483;
        double r48608485 = log(r48608484);
        return r48608485;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48608486, r48608487, r48608488, r48608489, r48608490, r48608491, r48608492, r48608493, r48608494, r48608495, r48608496, r48608497, r48608498, r48608499, r48608500, r48608501, r48608502, r48608503;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608486, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r48608487);
        mpfr_init(r48608488);
        mpfr_init_set_str(r48608489, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r48608490);
        mpfr_init(r48608491);
        mpfr_init(r48608492);
        mpfr_init(r48608493);
        mpfr_init_set_str(r48608494, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r48608495);
        mpfr_init(r48608496);
        mpfr_init(r48608497);
        mpfr_init(r48608498);
        mpfr_init_set_str(r48608499, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r48608500);
        mpfr_init(r48608501);
        mpfr_init(r48608502);
        mpfr_init(r48608503);
}

double f_im(double x) {
        ;
        mpfr_set_d(r48608487, x, MPFR_RNDN);
        mpfr_mul(r48608488, r48608486, r48608487, MPFR_RNDN);
        ;
        mpfr_mul(r48608490, r48608487, r48608487, MPFR_RNDN);
        mpfr_mul(r48608491, r48608490, r48608487, MPFR_RNDN);
        mpfr_mul(r48608492, r48608489, r48608491, MPFR_RNDN);
        mpfr_add(r48608493, r48608488, r48608492, MPFR_RNDN);
        ;
        mpfr_mul(r48608495, r48608491, r48608487, MPFR_RNDN);
        mpfr_mul(r48608496, r48608495, r48608487, MPFR_RNDN);
        mpfr_mul(r48608497, r48608494, r48608496, MPFR_RNDN);
        mpfr_add(r48608498, r48608493, r48608497, MPFR_RNDN);
        ;
        mpfr_mul(r48608500, r48608496, r48608487, MPFR_RNDN);
        mpfr_mul(r48608501, r48608500, r48608487, MPFR_RNDN);
        mpfr_mul(r48608502, r48608499, r48608501, MPFR_RNDN);
        mpfr_add(r48608503, r48608498, r48608502, MPFR_RNDN);
        return mpfr_get_d(r48608503, MPFR_RNDN);
}

static mpfr_t r48608504, r48608505, r48608506, r48608507, r48608508, r48608509, r48608510, r48608511, r48608512, r48608513, r48608514, r48608515, r48608516, r48608517, r48608518, r48608519, r48608520, r48608521, r48608522, r48608523, r48608524, r48608525, r48608526, r48608527, r48608528, r48608529, r48608530, r48608531, r48608532;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48608504);
        mpfr_init(r48608505);
        mpfr_init(r48608506);
        mpfr_init(r48608507);
        mpfr_init(r48608508);
        mpfr_init_set_str(r48608509, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r48608510);
        mpfr_init(r48608511);
        mpfr_init_set_str(r48608512, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r48608513);
        mpfr_init(r48608514);
        mpfr_init_set_str(r48608515, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r48608516);
        mpfr_init_set_str(r48608517, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r48608518);
        mpfr_init(r48608519);
        mpfr_init(r48608520);
        mpfr_init(r48608521);
        mpfr_init(r48608522);
        mpfr_init(r48608523);
        mpfr_init(r48608524);
        mpfr_init(r48608525);
        mpfr_init(r48608526);
        mpfr_init(r48608527);
        mpfr_init(r48608528);
        mpfr_init(r48608529);
        mpfr_init(r48608530);
        mpfr_init(r48608531);
        mpfr_init(r48608532);
}

double f_fm(double x) {
        mpfr_set_d(r48608504, x, MPFR_RNDN);
        mpfr_exp(r48608505, r48608504, MPFR_RNDN);
        mpfr_mul(r48608506, r48608504, r48608504, MPFR_RNDN);
        mpfr_mul(r48608507, r48608506, r48608506, MPFR_RNDN);
        mpfr_pow(r48608508, r48608505, r48608507, MPFR_RNDN);
        ;
        mpfr_mul(r48608510, r48608509, r48608504, MPFR_RNDN);
        mpfr_mul(r48608511, r48608504, r48608510, MPFR_RNDN);
        ;
        mpfr_add(r48608513, r48608511, r48608512, MPFR_RNDN);
        mpfr_pow(r48608514, r48608508, r48608513, MPFR_RNDN);
        ;
        mpfr_exp(r48608516, r48608515, MPFR_RNDN);
        ;
        mpfr_exp(r48608518, r48608517, MPFR_RNDN);
        mpfr_pow(r48608519, r48608518, r48608506, MPFR_RNDN);
        mpfr_mul(r48608520, r48608516, r48608519, MPFR_RNDN);
        mpfr_add(r48608521, r48608504, r48608504, MPFR_RNDN);
        mpfr_add(r48608522, r48608504, r48608521, MPFR_RNDN);
        mpfr_pow(r48608523, r48608520, r48608522, MPFR_RNDN);
        mpfr_sqrt(r48608524, r48608523, MPFR_RNDN);
        mpfr_pow(r48608525, r48608520, r48608504, MPFR_RNDN);
        mpfr_pow(r48608526, r48608520, r48608521, MPFR_RNDN);
        mpfr_mul(r48608527, r48608525, r48608526, MPFR_RNDN);
        mpfr_sqrt(r48608528, r48608527, MPFR_RNDN);
        mpfr_mul(r48608529, r48608524, r48608528, MPFR_RNDN);
        mpfr_cbrt(r48608530, r48608529, MPFR_RNDN);
        mpfr_mul(r48608531, r48608514, r48608530, MPFR_RNDN);
        mpfr_log(r48608532, r48608531, MPFR_RNDN);
        return mpfr_get_d(r48608532, MPFR_RNDN);
}

static mpfr_t r48608533, r48608534, r48608535, r48608536, r48608537, r48608538, r48608539, r48608540, r48608541, r48608542, r48608543, r48608544, r48608545, r48608546, r48608547, r48608548, r48608549, r48608550, r48608551, r48608552, r48608553, r48608554, r48608555, r48608556, r48608557, r48608558, r48608559, r48608560, r48608561;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48608533);
        mpfr_init(r48608534);
        mpfr_init(r48608535);
        mpfr_init(r48608536);
        mpfr_init(r48608537);
        mpfr_init_set_str(r48608538, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r48608539);
        mpfr_init(r48608540);
        mpfr_init_set_str(r48608541, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r48608542);
        mpfr_init(r48608543);
        mpfr_init_set_str(r48608544, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r48608545);
        mpfr_init_set_str(r48608546, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r48608547);
        mpfr_init(r48608548);
        mpfr_init(r48608549);
        mpfr_init(r48608550);
        mpfr_init(r48608551);
        mpfr_init(r48608552);
        mpfr_init(r48608553);
        mpfr_init(r48608554);
        mpfr_init(r48608555);
        mpfr_init(r48608556);
        mpfr_init(r48608557);
        mpfr_init(r48608558);
        mpfr_init(r48608559);
        mpfr_init(r48608560);
        mpfr_init(r48608561);
}

double f_dm(double x) {
        mpfr_set_d(r48608533, x, MPFR_RNDN);
        mpfr_exp(r48608534, r48608533, MPFR_RNDN);
        mpfr_mul(r48608535, r48608533, r48608533, MPFR_RNDN);
        mpfr_mul(r48608536, r48608535, r48608535, MPFR_RNDN);
        mpfr_pow(r48608537, r48608534, r48608536, MPFR_RNDN);
        ;
        mpfr_mul(r48608539, r48608538, r48608533, MPFR_RNDN);
        mpfr_mul(r48608540, r48608533, r48608539, MPFR_RNDN);
        ;
        mpfr_add(r48608542, r48608540, r48608541, MPFR_RNDN);
        mpfr_pow(r48608543, r48608537, r48608542, MPFR_RNDN);
        ;
        mpfr_exp(r48608545, r48608544, MPFR_RNDN);
        ;
        mpfr_exp(r48608547, r48608546, MPFR_RNDN);
        mpfr_pow(r48608548, r48608547, r48608535, MPFR_RNDN);
        mpfr_mul(r48608549, r48608545, r48608548, MPFR_RNDN);
        mpfr_add(r48608550, r48608533, r48608533, MPFR_RNDN);
        mpfr_add(r48608551, r48608533, r48608550, MPFR_RNDN);
        mpfr_pow(r48608552, r48608549, r48608551, MPFR_RNDN);
        mpfr_sqrt(r48608553, r48608552, MPFR_RNDN);
        mpfr_pow(r48608554, r48608549, r48608533, MPFR_RNDN);
        mpfr_pow(r48608555, r48608549, r48608550, MPFR_RNDN);
        mpfr_mul(r48608556, r48608554, r48608555, MPFR_RNDN);
        mpfr_sqrt(r48608557, r48608556, MPFR_RNDN);
        mpfr_mul(r48608558, r48608553, r48608557, MPFR_RNDN);
        mpfr_cbrt(r48608559, r48608558, MPFR_RNDN);
        mpfr_mul(r48608560, r48608543, r48608559, MPFR_RNDN);
        mpfr_log(r48608561, r48608560, MPFR_RNDN);
        return mpfr_get_d(r48608561, MPFR_RNDN);
}

