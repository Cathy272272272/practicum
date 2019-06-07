#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9852448 = 1.0;
        float r9852449 = -6.0;
        float r9852450 = x;
        float r9852451 = r9852449 * r9852450;
        float r9852452 = r9852448 + r9852451;
        float r9852453 = 7.5;
        float r9852454 = r9852450 * r9852450;
        float r9852455 = r9852453 * r9852454;
        float r9852456 = r9852452 + r9852455;
        float r9852457 = -3.333333;
        float r9852458 = r9852454 * r9852450;
        float r9852459 = r9852457 * r9852458;
        float r9852460 = r9852456 + r9852459;
        float r9852461 = 0.625;
        float r9852462 = r9852458 * r9852450;
        float r9852463 = r9852461 * r9852462;
        float r9852464 = r9852460 + r9852463;
        float r9852465 = -0.05;
        float r9852466 = r9852462 * r9852450;
        float r9852467 = r9852465 * r9852466;
        float r9852468 = r9852464 + r9852467;
        float r9852469 = 0.001389;
        float r9852470 = r9852466 * r9852450;
        float r9852471 = r9852469 * r9852470;
        float r9852472 = r9852468 + r9852471;
        return r9852472;
}

double f_id(double x) {
        double r9852473 = 1.0;
        double r9852474 = -6.0;
        double r9852475 = x;
        double r9852476 = r9852474 * r9852475;
        double r9852477 = r9852473 + r9852476;
        double r9852478 = 7.5;
        double r9852479 = r9852475 * r9852475;
        double r9852480 = r9852478 * r9852479;
        double r9852481 = r9852477 + r9852480;
        double r9852482 = -3.333333;
        double r9852483 = r9852479 * r9852475;
        double r9852484 = r9852482 * r9852483;
        double r9852485 = r9852481 + r9852484;
        double r9852486 = 0.625;
        double r9852487 = r9852483 * r9852475;
        double r9852488 = r9852486 * r9852487;
        double r9852489 = r9852485 + r9852488;
        double r9852490 = -0.05;
        double r9852491 = r9852487 * r9852475;
        double r9852492 = r9852490 * r9852491;
        double r9852493 = r9852489 + r9852492;
        double r9852494 = 0.001389;
        double r9852495 = r9852491 * r9852475;
        double r9852496 = r9852494 * r9852495;
        double r9852497 = r9852493 + r9852496;
        return r9852497;
}


double f_of(float x) {
        float r9852498 = x;
        float r9852499 = 0.001389;
        float r9852500 = r9852499 * r9852498;
        float r9852501 = r9852498 * r9852500;
        float r9852502 = 2;
        float r9852503 = r9852502 + r9852502;
        float r9852504 = pow(r9852498, r9852503);
        float r9852505 = r9852501 * r9852504;
        float r9852506 = -6.0;
        float r9852507 = r9852498 * r9852506;
        float r9852508 = 1.0;
        float r9852509 = r9852507 + r9852508;
        float r9852510 = r9852505 + r9852509;
        float r9852511 = r9852498 * r9852498;
        float r9852512 = r9852511 * r9852511;
        float r9852513 = 0.625;
        float r9852514 = -0.05;
        float r9852515 = r9852514 * r9852498;
        float r9852516 = r9852513 + r9852515;
        float r9852517 = r9852512 * r9852516;
        float r9852518 = -3.333333;
        float r9852519 = r9852518 * r9852498;
        float r9852520 = 7.5;
        float r9852521 = r9852519 + r9852520;
        float r9852522 = r9852511 * r9852521;
        float r9852523 = r9852517 + r9852522;
        float r9852524 = r9852510 + r9852523;
        return r9852524;
}

double f_od(double x) {
        double r9852525 = x;
        double r9852526 = 0.001389;
        double r9852527 = r9852526 * r9852525;
        double r9852528 = r9852525 * r9852527;
        double r9852529 = 2;
        double r9852530 = r9852529 + r9852529;
        double r9852531 = pow(r9852525, r9852530);
        double r9852532 = r9852528 * r9852531;
        double r9852533 = -6.0;
        double r9852534 = r9852525 * r9852533;
        double r9852535 = 1.0;
        double r9852536 = r9852534 + r9852535;
        double r9852537 = r9852532 + r9852536;
        double r9852538 = r9852525 * r9852525;
        double r9852539 = r9852538 * r9852538;
        double r9852540 = 0.625;
        double r9852541 = -0.05;
        double r9852542 = r9852541 * r9852525;
        double r9852543 = r9852540 + r9852542;
        double r9852544 = r9852539 * r9852543;
        double r9852545 = -3.333333;
        double r9852546 = r9852545 * r9852525;
        double r9852547 = 7.5;
        double r9852548 = r9852546 + r9852547;
        double r9852549 = r9852538 * r9852548;
        double r9852550 = r9852544 + r9852549;
        double r9852551 = r9852537 + r9852550;
        return r9852551;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9852552, r9852553, r9852554, r9852555, r9852556, r9852557, r9852558, r9852559, r9852560, r9852561, r9852562, r9852563, r9852564, r9852565, r9852566, r9852567, r9852568, r9852569, r9852570, r9852571, r9852572, r9852573, r9852574, r9852575, r9852576;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852552, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852553, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9852554);
        mpfr_init(r9852555);
        mpfr_init(r9852556);
        mpfr_init_set_str(r9852557, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9852558);
        mpfr_init(r9852559);
        mpfr_init(r9852560);
        mpfr_init_set_str(r9852561, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9852562);
        mpfr_init(r9852563);
        mpfr_init(r9852564);
        mpfr_init_set_str(r9852565, "0.625", 10, MPFR_RNDN);
        mpfr_init(r9852566);
        mpfr_init(r9852567);
        mpfr_init(r9852568);
        mpfr_init_set_str(r9852569, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9852570);
        mpfr_init(r9852571);
        mpfr_init(r9852572);
        mpfr_init_set_str(r9852573, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9852574);
        mpfr_init(r9852575);
        mpfr_init(r9852576);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9852554, x, MPFR_RNDN);
        mpfr_mul(r9852555, r9852553, r9852554, MPFR_RNDN);
        mpfr_add(r9852556, r9852552, r9852555, MPFR_RNDN);
        ;
        mpfr_mul(r9852558, r9852554, r9852554, MPFR_RNDN);
        mpfr_mul(r9852559, r9852557, r9852558, MPFR_RNDN);
        mpfr_add(r9852560, r9852556, r9852559, MPFR_RNDN);
        ;
        mpfr_mul(r9852562, r9852558, r9852554, MPFR_RNDN);
        mpfr_mul(r9852563, r9852561, r9852562, MPFR_RNDN);
        mpfr_add(r9852564, r9852560, r9852563, MPFR_RNDN);
        ;
        mpfr_mul(r9852566, r9852562, r9852554, MPFR_RNDN);
        mpfr_mul(r9852567, r9852565, r9852566, MPFR_RNDN);
        mpfr_add(r9852568, r9852564, r9852567, MPFR_RNDN);
        ;
        mpfr_mul(r9852570, r9852566, r9852554, MPFR_RNDN);
        mpfr_mul(r9852571, r9852569, r9852570, MPFR_RNDN);
        mpfr_add(r9852572, r9852568, r9852571, MPFR_RNDN);
        ;
        mpfr_mul(r9852574, r9852570, r9852554, MPFR_RNDN);
        mpfr_mul(r9852575, r9852573, r9852574, MPFR_RNDN);
        mpfr_add(r9852576, r9852572, r9852575, MPFR_RNDN);
        return mpfr_get_d(r9852576, MPFR_RNDN);
}

static mpfr_t r9852577, r9852578, r9852579, r9852580, r9852581, r9852582, r9852583, r9852584, r9852585, r9852586, r9852587, r9852588, r9852589, r9852590, r9852591, r9852592, r9852593, r9852594, r9852595, r9852596, r9852597, r9852598, r9852599, r9852600, r9852601, r9852602, r9852603;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9852577);
        mpfr_init_set_str(r9852578, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9852579);
        mpfr_init(r9852580);
        mpfr_init_set_str(r9852581, "2", 10, MPFR_RNDN);
        mpfr_init(r9852582);
        mpfr_init(r9852583);
        mpfr_init(r9852584);
        mpfr_init_set_str(r9852585, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9852586);
        mpfr_init_set_str(r9852587, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9852588);
        mpfr_init(r9852589);
        mpfr_init(r9852590);
        mpfr_init(r9852591);
        mpfr_init_set_str(r9852592, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852593, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9852594);
        mpfr_init(r9852595);
        mpfr_init(r9852596);
        mpfr_init_set_str(r9852597, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9852598);
        mpfr_init_set_str(r9852599, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9852600);
        mpfr_init(r9852601);
        mpfr_init(r9852602);
        mpfr_init(r9852603);
}

double f_fm(double x) {
        mpfr_set_d(r9852577, x, MPFR_RNDN);
        ;
        mpfr_mul(r9852579, r9852578, r9852577, MPFR_RNDN);
        mpfr_mul(r9852580, r9852577, r9852579, MPFR_RNDN);
        ;
        mpfr_add(r9852582, r9852581, r9852581, MPFR_RNDN);
        mpfr_pow(r9852583, r9852577, r9852582, MPFR_RNDN);
        mpfr_mul(r9852584, r9852580, r9852583, MPFR_RNDN);
        ;
        mpfr_mul(r9852586, r9852577, r9852585, MPFR_RNDN);
        ;
        mpfr_add(r9852588, r9852586, r9852587, MPFR_RNDN);
        mpfr_add(r9852589, r9852584, r9852588, MPFR_RNDN);
        mpfr_mul(r9852590, r9852577, r9852577, MPFR_RNDN);
        mpfr_mul(r9852591, r9852590, r9852590, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9852594, r9852593, r9852577, MPFR_RNDN);
        mpfr_add(r9852595, r9852592, r9852594, MPFR_RNDN);
        mpfr_mul(r9852596, r9852591, r9852595, MPFR_RNDN);
        ;
        mpfr_mul(r9852598, r9852597, r9852577, MPFR_RNDN);
        ;
        mpfr_add(r9852600, r9852598, r9852599, MPFR_RNDN);
        mpfr_mul(r9852601, r9852590, r9852600, MPFR_RNDN);
        mpfr_add(r9852602, r9852596, r9852601, MPFR_RNDN);
        mpfr_add(r9852603, r9852589, r9852602, MPFR_RNDN);
        return mpfr_get_d(r9852603, MPFR_RNDN);
}

static mpfr_t r9852604, r9852605, r9852606, r9852607, r9852608, r9852609, r9852610, r9852611, r9852612, r9852613, r9852614, r9852615, r9852616, r9852617, r9852618, r9852619, r9852620, r9852621, r9852622, r9852623, r9852624, r9852625, r9852626, r9852627, r9852628, r9852629, r9852630;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9852604);
        mpfr_init_set_str(r9852605, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r9852606);
        mpfr_init(r9852607);
        mpfr_init_set_str(r9852608, "2", 10, MPFR_RNDN);
        mpfr_init(r9852609);
        mpfr_init(r9852610);
        mpfr_init(r9852611);
        mpfr_init_set_str(r9852612, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r9852613);
        mpfr_init_set_str(r9852614, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9852615);
        mpfr_init(r9852616);
        mpfr_init(r9852617);
        mpfr_init(r9852618);
        mpfr_init_set_str(r9852619, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852620, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r9852621);
        mpfr_init(r9852622);
        mpfr_init(r9852623);
        mpfr_init_set_str(r9852624, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r9852625);
        mpfr_init_set_str(r9852626, "7.5", 10, MPFR_RNDN);
        mpfr_init(r9852627);
        mpfr_init(r9852628);
        mpfr_init(r9852629);
        mpfr_init(r9852630);
}

double f_dm(double x) {
        mpfr_set_d(r9852604, x, MPFR_RNDN);
        ;
        mpfr_mul(r9852606, r9852605, r9852604, MPFR_RNDN);
        mpfr_mul(r9852607, r9852604, r9852606, MPFR_RNDN);
        ;
        mpfr_add(r9852609, r9852608, r9852608, MPFR_RNDN);
        mpfr_pow(r9852610, r9852604, r9852609, MPFR_RNDN);
        mpfr_mul(r9852611, r9852607, r9852610, MPFR_RNDN);
        ;
        mpfr_mul(r9852613, r9852604, r9852612, MPFR_RNDN);
        ;
        mpfr_add(r9852615, r9852613, r9852614, MPFR_RNDN);
        mpfr_add(r9852616, r9852611, r9852615, MPFR_RNDN);
        mpfr_mul(r9852617, r9852604, r9852604, MPFR_RNDN);
        mpfr_mul(r9852618, r9852617, r9852617, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9852621, r9852620, r9852604, MPFR_RNDN);
        mpfr_add(r9852622, r9852619, r9852621, MPFR_RNDN);
        mpfr_mul(r9852623, r9852618, r9852622, MPFR_RNDN);
        ;
        mpfr_mul(r9852625, r9852624, r9852604, MPFR_RNDN);
        ;
        mpfr_add(r9852627, r9852625, r9852626, MPFR_RNDN);
        mpfr_mul(r9852628, r9852617, r9852627, MPFR_RNDN);
        mpfr_add(r9852629, r9852623, r9852628, MPFR_RNDN);
        mpfr_add(r9852630, r9852616, r9852629, MPFR_RNDN);
        return mpfr_get_d(r9852630, MPFR_RNDN);
}

