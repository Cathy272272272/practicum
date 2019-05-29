#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6903491 = 0.273438;
        float r6903492 = -9.84375;
        float r6903493 = x;
        float r6903494 = r6903493 * r6903493;
        float r6903495 = r6903492 * r6903494;
        float r6903496 = r6903491 + r6903495;
        float r6903497 = 54.140625;
        float r6903498 = r6903494 * r6903493;
        float r6903499 = r6903498 * r6903493;
        float r6903500 = r6903497 * r6903499;
        float r6903501 = r6903496 + r6903500;
        float r6903502 = -93.84375;
        float r6903503 = r6903499 * r6903493;
        float r6903504 = r6903503 * r6903493;
        float r6903505 = r6903502 * r6903504;
        float r6903506 = r6903501 + r6903505;
        float r6903507 = 50.273438;
        float r6903508 = r6903504 * r6903493;
        float r6903509 = r6903508 * r6903493;
        float r6903510 = r6903507 * r6903509;
        float r6903511 = r6903506 + r6903510;
        return r6903511;
}

double f_id(double x) {
        double r6903512 = 0.273438;
        double r6903513 = -9.84375;
        double r6903514 = x;
        double r6903515 = r6903514 * r6903514;
        double r6903516 = r6903513 * r6903515;
        double r6903517 = r6903512 + r6903516;
        double r6903518 = 54.140625;
        double r6903519 = r6903515 * r6903514;
        double r6903520 = r6903519 * r6903514;
        double r6903521 = r6903518 * r6903520;
        double r6903522 = r6903517 + r6903521;
        double r6903523 = -93.84375;
        double r6903524 = r6903520 * r6903514;
        double r6903525 = r6903524 * r6903514;
        double r6903526 = r6903523 * r6903525;
        double r6903527 = r6903522 + r6903526;
        double r6903528 = 50.273438;
        double r6903529 = r6903525 * r6903514;
        double r6903530 = r6903529 * r6903514;
        double r6903531 = r6903528 * r6903530;
        double r6903532 = r6903527 + r6903531;
        return r6903532;
}


double f_of(float x) {
        float r6903533 = 50.273438;
        float r6903534 = x;
        float r6903535 = 8;
        float r6903536 = pow(r6903534, r6903535);
        float r6903537 = r6903533 * r6903536;
        float r6903538 = 0.273438;
        float r6903539 = 93.84375;
        float r6903540 = 6;
        float r6903541 = pow(r6903534, r6903540);
        float r6903542 = r6903539 * r6903541;
        float r6903543 = r6903538 - r6903542;
        float r6903544 = r6903537 + r6903543;
        float r6903545 = r6903534 * r6903534;
        float r6903546 = -r6903545;
        float r6903547 = 54.140625;
        float r6903548 = r6903545 * r6903547;
        float r6903549 = -9.84375;
        float r6903550 = r6903548 + r6903549;
        float r6903551 = r6903546 * r6903550;
        float r6903552 = r6903544 - r6903551;
        return r6903552;
}

double f_od(double x) {
        double r6903553 = 50.273438;
        double r6903554 = x;
        double r6903555 = 8;
        double r6903556 = pow(r6903554, r6903555);
        double r6903557 = r6903553 * r6903556;
        double r6903558 = 0.273438;
        double r6903559 = 93.84375;
        double r6903560 = 6;
        double r6903561 = pow(r6903554, r6903560);
        double r6903562 = r6903559 * r6903561;
        double r6903563 = r6903558 - r6903562;
        double r6903564 = r6903557 + r6903563;
        double r6903565 = r6903554 * r6903554;
        double r6903566 = -r6903565;
        double r6903567 = 54.140625;
        double r6903568 = r6903565 * r6903567;
        double r6903569 = -9.84375;
        double r6903570 = r6903568 + r6903569;
        double r6903571 = r6903566 * r6903570;
        double r6903572 = r6903564 - r6903571;
        return r6903572;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6903573, r6903574, r6903575, r6903576, r6903577, r6903578, r6903579, r6903580, r6903581, r6903582, r6903583, r6903584, r6903585, r6903586, r6903587, r6903588, r6903589, r6903590, r6903591, r6903592, r6903593;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6903573, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903574, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6903575);
        mpfr_init(r6903576);
        mpfr_init(r6903577);
        mpfr_init(r6903578);
        mpfr_init_set_str(r6903579, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6903580);
        mpfr_init(r6903581);
        mpfr_init(r6903582);
        mpfr_init(r6903583);
        mpfr_init_set_str(r6903584, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6903585);
        mpfr_init(r6903586);
        mpfr_init(r6903587);
        mpfr_init(r6903588);
        mpfr_init_set_str(r6903589, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6903590);
        mpfr_init(r6903591);
        mpfr_init(r6903592);
        mpfr_init(r6903593);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6903575, x, MPFR_RNDN);
        mpfr_mul(r6903576, r6903575, r6903575, MPFR_RNDN);
        mpfr_mul(r6903577, r6903574, r6903576, MPFR_RNDN);
        mpfr_add(r6903578, r6903573, r6903577, MPFR_RNDN);
        ;
        mpfr_mul(r6903580, r6903576, r6903575, MPFR_RNDN);
        mpfr_mul(r6903581, r6903580, r6903575, MPFR_RNDN);
        mpfr_mul(r6903582, r6903579, r6903581, MPFR_RNDN);
        mpfr_add(r6903583, r6903578, r6903582, MPFR_RNDN);
        ;
        mpfr_mul(r6903585, r6903581, r6903575, MPFR_RNDN);
        mpfr_mul(r6903586, r6903585, r6903575, MPFR_RNDN);
        mpfr_mul(r6903587, r6903584, r6903586, MPFR_RNDN);
        mpfr_add(r6903588, r6903583, r6903587, MPFR_RNDN);
        ;
        mpfr_mul(r6903590, r6903586, r6903575, MPFR_RNDN);
        mpfr_mul(r6903591, r6903590, r6903575, MPFR_RNDN);
        mpfr_mul(r6903592, r6903589, r6903591, MPFR_RNDN);
        mpfr_add(r6903593, r6903588, r6903592, MPFR_RNDN);
        return mpfr_get_d(r6903593, MPFR_RNDN);
}

static mpfr_t r6903594, r6903595, r6903596, r6903597, r6903598, r6903599, r6903600, r6903601, r6903602, r6903603, r6903604, r6903605, r6903606, r6903607, r6903608, r6903609, r6903610, r6903611, r6903612, r6903613;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6903594, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6903595);
        mpfr_init_set_str(r6903596, "8", 10, MPFR_RNDN);
        mpfr_init(r6903597);
        mpfr_init(r6903598);
        mpfr_init_set_str(r6903599, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903600, "93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903601, "6", 10, MPFR_RNDN);
        mpfr_init(r6903602);
        mpfr_init(r6903603);
        mpfr_init(r6903604);
        mpfr_init(r6903605);
        mpfr_init(r6903606);
        mpfr_init(r6903607);
        mpfr_init_set_str(r6903608, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6903609);
        mpfr_init_set_str(r6903610, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6903611);
        mpfr_init(r6903612);
        mpfr_init(r6903613);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6903595, x, MPFR_RNDN);
        ;
        mpfr_pow(r6903597, r6903595, r6903596, MPFR_RNDN);
        mpfr_mul(r6903598, r6903594, r6903597, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r6903602, r6903595, r6903601, MPFR_RNDN);
        mpfr_mul(r6903603, r6903600, r6903602, MPFR_RNDN);
        mpfr_sub(r6903604, r6903599, r6903603, MPFR_RNDN);
        mpfr_add(r6903605, r6903598, r6903604, MPFR_RNDN);
        mpfr_mul(r6903606, r6903595, r6903595, MPFR_RNDN);
        mpfr_neg(r6903607, r6903606, MPFR_RNDN);
        ;
        mpfr_mul(r6903609, r6903606, r6903608, MPFR_RNDN);
        ;
        mpfr_add(r6903611, r6903609, r6903610, MPFR_RNDN);
        mpfr_mul(r6903612, r6903607, r6903611, MPFR_RNDN);
        mpfr_sub(r6903613, r6903605, r6903612, MPFR_RNDN);
        return mpfr_get_d(r6903613, MPFR_RNDN);
}

static mpfr_t r6903614, r6903615, r6903616, r6903617, r6903618, r6903619, r6903620, r6903621, r6903622, r6903623, r6903624, r6903625, r6903626, r6903627, r6903628, r6903629, r6903630, r6903631, r6903632, r6903633;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6903614, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6903615);
        mpfr_init_set_str(r6903616, "8", 10, MPFR_RNDN);
        mpfr_init(r6903617);
        mpfr_init(r6903618);
        mpfr_init_set_str(r6903619, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903620, "93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6903621, "6", 10, MPFR_RNDN);
        mpfr_init(r6903622);
        mpfr_init(r6903623);
        mpfr_init(r6903624);
        mpfr_init(r6903625);
        mpfr_init(r6903626);
        mpfr_init(r6903627);
        mpfr_init_set_str(r6903628, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6903629);
        mpfr_init_set_str(r6903630, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6903631);
        mpfr_init(r6903632);
        mpfr_init(r6903633);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6903615, x, MPFR_RNDN);
        ;
        mpfr_pow(r6903617, r6903615, r6903616, MPFR_RNDN);
        mpfr_mul(r6903618, r6903614, r6903617, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r6903622, r6903615, r6903621, MPFR_RNDN);
        mpfr_mul(r6903623, r6903620, r6903622, MPFR_RNDN);
        mpfr_sub(r6903624, r6903619, r6903623, MPFR_RNDN);
        mpfr_add(r6903625, r6903618, r6903624, MPFR_RNDN);
        mpfr_mul(r6903626, r6903615, r6903615, MPFR_RNDN);
        mpfr_neg(r6903627, r6903626, MPFR_RNDN);
        ;
        mpfr_mul(r6903629, r6903626, r6903628, MPFR_RNDN);
        ;
        mpfr_add(r6903631, r6903629, r6903630, MPFR_RNDN);
        mpfr_mul(r6903632, r6903627, r6903631, MPFR_RNDN);
        mpfr_sub(r6903633, r6903625, r6903632, MPFR_RNDN);
        return mpfr_get_d(r6903633, MPFR_RNDN);
}

