#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6176446 = 0.273438;
        float r6176447 = -9.84375;
        float r6176448 = x;
        float r6176449 = r6176448 * r6176448;
        float r6176450 = r6176447 * r6176449;
        float r6176451 = r6176446 + r6176450;
        float r6176452 = 54.140625;
        float r6176453 = r6176449 * r6176448;
        float r6176454 = r6176453 * r6176448;
        float r6176455 = r6176452 * r6176454;
        float r6176456 = r6176451 + r6176455;
        float r6176457 = -93.84375;
        float r6176458 = r6176454 * r6176448;
        float r6176459 = r6176458 * r6176448;
        float r6176460 = r6176457 * r6176459;
        float r6176461 = r6176456 + r6176460;
        float r6176462 = 50.273438;
        float r6176463 = r6176459 * r6176448;
        float r6176464 = r6176463 * r6176448;
        float r6176465 = r6176462 * r6176464;
        float r6176466 = r6176461 + r6176465;
        return r6176466;
}

double f_id(double x) {
        double r6176467 = 0.273438;
        double r6176468 = -9.84375;
        double r6176469 = x;
        double r6176470 = r6176469 * r6176469;
        double r6176471 = r6176468 * r6176470;
        double r6176472 = r6176467 + r6176471;
        double r6176473 = 54.140625;
        double r6176474 = r6176470 * r6176469;
        double r6176475 = r6176474 * r6176469;
        double r6176476 = r6176473 * r6176475;
        double r6176477 = r6176472 + r6176476;
        double r6176478 = -93.84375;
        double r6176479 = r6176475 * r6176469;
        double r6176480 = r6176479 * r6176469;
        double r6176481 = r6176478 * r6176480;
        double r6176482 = r6176477 + r6176481;
        double r6176483 = 50.273438;
        double r6176484 = r6176480 * r6176469;
        double r6176485 = r6176484 * r6176469;
        double r6176486 = r6176483 * r6176485;
        double r6176487 = r6176482 + r6176486;
        return r6176487;
}


double f_of(float x) {
        float r6176488 = x;
        float r6176489 = 54.140625;
        float r6176490 = r6176488 * r6176489;
        float r6176491 = 3;
        float r6176492 = pow(r6176488, r6176491);
        float r6176493 = r6176490 * r6176492;
        float r6176494 = -9.84375;
        float r6176495 = r6176488 * r6176494;
        float r6176496 = r6176488 * r6176495;
        float r6176497 = r6176493 + r6176496;
        float r6176498 = 0.273438;
        float r6176499 = r6176497 + r6176498;
        float r6176500 = r6176488 * r6176488;
        float r6176501 = pow(r6176500, r6176491);
        float r6176502 = 50.273438;
        float r6176503 = r6176502 * r6176488;
        float r6176504 = r6176488 * r6176503;
        float r6176505 = -93.84375;
        float r6176506 = r6176504 + r6176505;
        float r6176507 = r6176501 * r6176506;
        float r6176508 = 1;
        float r6176509 = pow(r6176507, r6176508);
        float r6176510 = r6176499 + r6176509;
        return r6176510;
}

double f_od(double x) {
        double r6176511 = x;
        double r6176512 = 54.140625;
        double r6176513 = r6176511 * r6176512;
        double r6176514 = 3;
        double r6176515 = pow(r6176511, r6176514);
        double r6176516 = r6176513 * r6176515;
        double r6176517 = -9.84375;
        double r6176518 = r6176511 * r6176517;
        double r6176519 = r6176511 * r6176518;
        double r6176520 = r6176516 + r6176519;
        double r6176521 = 0.273438;
        double r6176522 = r6176520 + r6176521;
        double r6176523 = r6176511 * r6176511;
        double r6176524 = pow(r6176523, r6176514);
        double r6176525 = 50.273438;
        double r6176526 = r6176525 * r6176511;
        double r6176527 = r6176511 * r6176526;
        double r6176528 = -93.84375;
        double r6176529 = r6176527 + r6176528;
        double r6176530 = r6176524 * r6176529;
        double r6176531 = 1;
        double r6176532 = pow(r6176530, r6176531);
        double r6176533 = r6176522 + r6176532;
        return r6176533;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6176534, r6176535, r6176536, r6176537, r6176538, r6176539, r6176540, r6176541, r6176542, r6176543, r6176544, r6176545, r6176546, r6176547, r6176548, r6176549, r6176550, r6176551, r6176552, r6176553, r6176554;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6176534, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176535, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6176536);
        mpfr_init(r6176537);
        mpfr_init(r6176538);
        mpfr_init(r6176539);
        mpfr_init_set_str(r6176540, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6176541);
        mpfr_init(r6176542);
        mpfr_init(r6176543);
        mpfr_init(r6176544);
        mpfr_init_set_str(r6176545, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6176546);
        mpfr_init(r6176547);
        mpfr_init(r6176548);
        mpfr_init(r6176549);
        mpfr_init_set_str(r6176550, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6176551);
        mpfr_init(r6176552);
        mpfr_init(r6176553);
        mpfr_init(r6176554);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6176536, x, MPFR_RNDN);
        mpfr_mul(r6176537, r6176536, r6176536, MPFR_RNDN);
        mpfr_mul(r6176538, r6176535, r6176537, MPFR_RNDN);
        mpfr_add(r6176539, r6176534, r6176538, MPFR_RNDN);
        ;
        mpfr_mul(r6176541, r6176537, r6176536, MPFR_RNDN);
        mpfr_mul(r6176542, r6176541, r6176536, MPFR_RNDN);
        mpfr_mul(r6176543, r6176540, r6176542, MPFR_RNDN);
        mpfr_add(r6176544, r6176539, r6176543, MPFR_RNDN);
        ;
        mpfr_mul(r6176546, r6176542, r6176536, MPFR_RNDN);
        mpfr_mul(r6176547, r6176546, r6176536, MPFR_RNDN);
        mpfr_mul(r6176548, r6176545, r6176547, MPFR_RNDN);
        mpfr_add(r6176549, r6176544, r6176548, MPFR_RNDN);
        ;
        mpfr_mul(r6176551, r6176547, r6176536, MPFR_RNDN);
        mpfr_mul(r6176552, r6176551, r6176536, MPFR_RNDN);
        mpfr_mul(r6176553, r6176550, r6176552, MPFR_RNDN);
        mpfr_add(r6176554, r6176549, r6176553, MPFR_RNDN);
        return mpfr_get_d(r6176554, MPFR_RNDN);
}

static mpfr_t r6176555, r6176556, r6176557, r6176558, r6176559, r6176560, r6176561, r6176562, r6176563, r6176564, r6176565, r6176566, r6176567, r6176568, r6176569, r6176570, r6176571, r6176572, r6176573, r6176574, r6176575, r6176576, r6176577;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6176555);
        mpfr_init_set_str(r6176556, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6176557);
        mpfr_init_set_str(r6176558, "3", 10, MPFR_RNDN);
        mpfr_init(r6176559);
        mpfr_init(r6176560);
        mpfr_init_set_str(r6176561, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6176562);
        mpfr_init(r6176563);
        mpfr_init(r6176564);
        mpfr_init_set_str(r6176565, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6176566);
        mpfr_init(r6176567);
        mpfr_init(r6176568);
        mpfr_init_set_str(r6176569, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6176570);
        mpfr_init(r6176571);
        mpfr_init_set_str(r6176572, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6176573);
        mpfr_init(r6176574);
        mpfr_init_set_str(r6176575, "1", 10, MPFR_RNDN);
        mpfr_init(r6176576);
        mpfr_init(r6176577);
}

double f_fm(double x) {
        mpfr_set_d(r6176555, x, MPFR_RNDN);
        ;
        mpfr_mul(r6176557, r6176555, r6176556, MPFR_RNDN);
        ;
        mpfr_pow(r6176559, r6176555, r6176558, MPFR_RNDN);
        mpfr_mul(r6176560, r6176557, r6176559, MPFR_RNDN);
        ;
        mpfr_mul(r6176562, r6176555, r6176561, MPFR_RNDN);
        mpfr_mul(r6176563, r6176555, r6176562, MPFR_RNDN);
        mpfr_add(r6176564, r6176560, r6176563, MPFR_RNDN);
        ;
        mpfr_add(r6176566, r6176564, r6176565, MPFR_RNDN);
        mpfr_mul(r6176567, r6176555, r6176555, MPFR_RNDN);
        mpfr_pow(r6176568, r6176567, r6176558, MPFR_RNDN);
        ;
        mpfr_mul(r6176570, r6176569, r6176555, MPFR_RNDN);
        mpfr_mul(r6176571, r6176555, r6176570, MPFR_RNDN);
        ;
        mpfr_add(r6176573, r6176571, r6176572, MPFR_RNDN);
        mpfr_mul(r6176574, r6176568, r6176573, MPFR_RNDN);
        ;
        mpfr_pow(r6176576, r6176574, r6176575, MPFR_RNDN);
        mpfr_add(r6176577, r6176566, r6176576, MPFR_RNDN);
        return mpfr_get_d(r6176577, MPFR_RNDN);
}

static mpfr_t r6176578, r6176579, r6176580, r6176581, r6176582, r6176583, r6176584, r6176585, r6176586, r6176587, r6176588, r6176589, r6176590, r6176591, r6176592, r6176593, r6176594, r6176595, r6176596, r6176597, r6176598, r6176599, r6176600;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6176578);
        mpfr_init_set_str(r6176579, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6176580);
        mpfr_init_set_str(r6176581, "3", 10, MPFR_RNDN);
        mpfr_init(r6176582);
        mpfr_init(r6176583);
        mpfr_init_set_str(r6176584, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6176585);
        mpfr_init(r6176586);
        mpfr_init(r6176587);
        mpfr_init_set_str(r6176588, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6176589);
        mpfr_init(r6176590);
        mpfr_init(r6176591);
        mpfr_init_set_str(r6176592, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6176593);
        mpfr_init(r6176594);
        mpfr_init_set_str(r6176595, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6176596);
        mpfr_init(r6176597);
        mpfr_init_set_str(r6176598, "1", 10, MPFR_RNDN);
        mpfr_init(r6176599);
        mpfr_init(r6176600);
}

double f_dm(double x) {
        mpfr_set_d(r6176578, x, MPFR_RNDN);
        ;
        mpfr_mul(r6176580, r6176578, r6176579, MPFR_RNDN);
        ;
        mpfr_pow(r6176582, r6176578, r6176581, MPFR_RNDN);
        mpfr_mul(r6176583, r6176580, r6176582, MPFR_RNDN);
        ;
        mpfr_mul(r6176585, r6176578, r6176584, MPFR_RNDN);
        mpfr_mul(r6176586, r6176578, r6176585, MPFR_RNDN);
        mpfr_add(r6176587, r6176583, r6176586, MPFR_RNDN);
        ;
        mpfr_add(r6176589, r6176587, r6176588, MPFR_RNDN);
        mpfr_mul(r6176590, r6176578, r6176578, MPFR_RNDN);
        mpfr_pow(r6176591, r6176590, r6176581, MPFR_RNDN);
        ;
        mpfr_mul(r6176593, r6176592, r6176578, MPFR_RNDN);
        mpfr_mul(r6176594, r6176578, r6176593, MPFR_RNDN);
        ;
        mpfr_add(r6176596, r6176594, r6176595, MPFR_RNDN);
        mpfr_mul(r6176597, r6176591, r6176596, MPFR_RNDN);
        ;
        mpfr_pow(r6176599, r6176597, r6176598, MPFR_RNDN);
        mpfr_add(r6176600, r6176589, r6176599, MPFR_RNDN);
        return mpfr_get_d(r6176600, MPFR_RNDN);
}

