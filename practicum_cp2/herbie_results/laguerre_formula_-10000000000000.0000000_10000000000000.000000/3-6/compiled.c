#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r11587445 = 1.0;
        float r11587446 = -6.0;
        float r11587447 = x;
        float r11587448 = r11587446 * r11587447;
        float r11587449 = r11587445 + r11587448;
        float r11587450 = 7.5;
        float r11587451 = r11587447 * r11587447;
        float r11587452 = r11587450 * r11587451;
        float r11587453 = r11587449 + r11587452;
        float r11587454 = -3.333333;
        float r11587455 = r11587451 * r11587447;
        float r11587456 = r11587454 * r11587455;
        float r11587457 = r11587453 + r11587456;
        float r11587458 = 0.625;
        float r11587459 = r11587455 * r11587447;
        float r11587460 = r11587458 * r11587459;
        float r11587461 = r11587457 + r11587460;
        float r11587462 = -0.05;
        float r11587463 = r11587459 * r11587447;
        float r11587464 = r11587462 * r11587463;
        float r11587465 = r11587461 + r11587464;
        float r11587466 = 0.001389;
        float r11587467 = r11587463 * r11587447;
        float r11587468 = r11587466 * r11587467;
        float r11587469 = r11587465 + r11587468;
        return r11587469;
}

double f_id(double x) {
        double r11587470 = 1.0;
        double r11587471 = -6.0;
        double r11587472 = x;
        double r11587473 = r11587471 * r11587472;
        double r11587474 = r11587470 + r11587473;
        double r11587475 = 7.5;
        double r11587476 = r11587472 * r11587472;
        double r11587477 = r11587475 * r11587476;
        double r11587478 = r11587474 + r11587477;
        double r11587479 = -3.333333;
        double r11587480 = r11587476 * r11587472;
        double r11587481 = r11587479 * r11587480;
        double r11587482 = r11587478 + r11587481;
        double r11587483 = 0.625;
        double r11587484 = r11587480 * r11587472;
        double r11587485 = r11587483 * r11587484;
        double r11587486 = r11587482 + r11587485;
        double r11587487 = -0.05;
        double r11587488 = r11587484 * r11587472;
        double r11587489 = r11587487 * r11587488;
        double r11587490 = r11587486 + r11587489;
        double r11587491 = 0.001389;
        double r11587492 = r11587488 * r11587472;
        double r11587493 = r11587491 * r11587492;
        double r11587494 = r11587490 + r11587493;
        return r11587494;
}


double f_of(float x) {
        float r11587495 = x;
        float r11587496 = 0.001389;
        float r11587497 = r11587496 * r11587495;
        float r11587498 = r11587495 * r11587497;
        float r11587499 = r11587495 * r11587495;
        float r11587500 = r11587499 * r11587499;
        float r11587501 = r11587498 * r11587500;
        float r11587502 = -6.0;
        float r11587503 = r11587495 * r11587502;
        float r11587504 = 1.0;
        float r11587505 = r11587503 + r11587504;
        float r11587506 = r11587501 + r11587505;
        float r11587507 = 0.625;
        float r11587508 = -0.05;
        float r11587509 = r11587508 * r11587495;
        float r11587510 = r11587507 + r11587509;
        float r11587511 = r11587500 * r11587510;
        float r11587512 = -3.333333;
        float r11587513 = r11587512 * r11587495;
        float r11587514 = 7.5;
        float r11587515 = r11587513 + r11587514;
        float r11587516 = r11587499 * r11587515;
        float r11587517 = r11587511 + r11587516;
        float r11587518 = r11587506 + r11587517;
        return r11587518;
}

double f_od(double x) {
        double r11587519 = x;
        double r11587520 = 0.001389;
        double r11587521 = r11587520 * r11587519;
        double r11587522 = r11587519 * r11587521;
        double r11587523 = r11587519 * r11587519;
        double r11587524 = r11587523 * r11587523;
        double r11587525 = r11587522 * r11587524;
        double r11587526 = -6.0;
        double r11587527 = r11587519 * r11587526;
        double r11587528 = 1.0;
        double r11587529 = r11587527 + r11587528;
        double r11587530 = r11587525 + r11587529;
        double r11587531 = 0.625;
        double r11587532 = -0.05;
        double r11587533 = r11587532 * r11587519;
        double r11587534 = r11587531 + r11587533;
        double r11587535 = r11587524 * r11587534;
        double r11587536 = -3.333333;
        double r11587537 = r11587536 * r11587519;
        double r11587538 = 7.5;
        double r11587539 = r11587537 + r11587538;
        double r11587540 = r11587523 * r11587539;
        double r11587541 = r11587535 + r11587540;
        double r11587542 = r11587530 + r11587541;
        return r11587542;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11587543, r11587544, r11587545, r11587546, r11587547, r11587548, r11587549, r11587550, r11587551, r11587552, r11587553, r11587554, r11587555, r11587556, r11587557, r11587558, r11587559, r11587560, r11587561, r11587562, r11587563, r11587564, r11587565, r11587566, r11587567;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11587543, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587544, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11587545);
        mpfr_init(r11587546);
        mpfr_init(r11587547);
        mpfr_init_set_str(r11587548, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11587549);
        mpfr_init(r11587550);
        mpfr_init(r11587551);
        mpfr_init_set_str(r11587552, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11587553);
        mpfr_init(r11587554);
        mpfr_init(r11587555);
        mpfr_init_set_str(r11587556, "0.625", 10, MPFR_RNDN);
        mpfr_init(r11587557);
        mpfr_init(r11587558);
        mpfr_init(r11587559);
        mpfr_init_set_str(r11587560, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11587561);
        mpfr_init(r11587562);
        mpfr_init(r11587563);
        mpfr_init_set_str(r11587564, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11587565);
        mpfr_init(r11587566);
        mpfr_init(r11587567);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11587545, x, MPFR_RNDN);
        mpfr_mul(r11587546, r11587544, r11587545, MPFR_RNDN);
        mpfr_add(r11587547, r11587543, r11587546, MPFR_RNDN);
        ;
        mpfr_mul(r11587549, r11587545, r11587545, MPFR_RNDN);
        mpfr_mul(r11587550, r11587548, r11587549, MPFR_RNDN);
        mpfr_add(r11587551, r11587547, r11587550, MPFR_RNDN);
        ;
        mpfr_mul(r11587553, r11587549, r11587545, MPFR_RNDN);
        mpfr_mul(r11587554, r11587552, r11587553, MPFR_RNDN);
        mpfr_add(r11587555, r11587551, r11587554, MPFR_RNDN);
        ;
        mpfr_mul(r11587557, r11587553, r11587545, MPFR_RNDN);
        mpfr_mul(r11587558, r11587556, r11587557, MPFR_RNDN);
        mpfr_add(r11587559, r11587555, r11587558, MPFR_RNDN);
        ;
        mpfr_mul(r11587561, r11587557, r11587545, MPFR_RNDN);
        mpfr_mul(r11587562, r11587560, r11587561, MPFR_RNDN);
        mpfr_add(r11587563, r11587559, r11587562, MPFR_RNDN);
        ;
        mpfr_mul(r11587565, r11587561, r11587545, MPFR_RNDN);
        mpfr_mul(r11587566, r11587564, r11587565, MPFR_RNDN);
        mpfr_add(r11587567, r11587563, r11587566, MPFR_RNDN);
        return mpfr_get_d(r11587567, MPFR_RNDN);
}

static mpfr_t r11587568, r11587569, r11587570, r11587571, r11587572, r11587573, r11587574, r11587575, r11587576, r11587577, r11587578, r11587579, r11587580, r11587581, r11587582, r11587583, r11587584, r11587585, r11587586, r11587587, r11587588, r11587589, r11587590, r11587591;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11587568);
        mpfr_init_set_str(r11587569, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11587570);
        mpfr_init(r11587571);
        mpfr_init(r11587572);
        mpfr_init(r11587573);
        mpfr_init(r11587574);
        mpfr_init_set_str(r11587575, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11587576);
        mpfr_init_set_str(r11587577, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587578);
        mpfr_init(r11587579);
        mpfr_init_set_str(r11587580, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587581, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11587582);
        mpfr_init(r11587583);
        mpfr_init(r11587584);
        mpfr_init_set_str(r11587585, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11587586);
        mpfr_init_set_str(r11587587, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11587588);
        mpfr_init(r11587589);
        mpfr_init(r11587590);
        mpfr_init(r11587591);
}

double f_fm(double x) {
        mpfr_set_d(r11587568, x, MPFR_RNDN);
        ;
        mpfr_mul(r11587570, r11587569, r11587568, MPFR_RNDN);
        mpfr_mul(r11587571, r11587568, r11587570, MPFR_RNDN);
        mpfr_mul(r11587572, r11587568, r11587568, MPFR_RNDN);
        mpfr_mul(r11587573, r11587572, r11587572, MPFR_RNDN);
        mpfr_mul(r11587574, r11587571, r11587573, MPFR_RNDN);
        ;
        mpfr_mul(r11587576, r11587568, r11587575, MPFR_RNDN);
        ;
        mpfr_add(r11587578, r11587576, r11587577, MPFR_RNDN);
        mpfr_add(r11587579, r11587574, r11587578, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587582, r11587581, r11587568, MPFR_RNDN);
        mpfr_add(r11587583, r11587580, r11587582, MPFR_RNDN);
        mpfr_mul(r11587584, r11587573, r11587583, MPFR_RNDN);
        ;
        mpfr_mul(r11587586, r11587585, r11587568, MPFR_RNDN);
        ;
        mpfr_add(r11587588, r11587586, r11587587, MPFR_RNDN);
        mpfr_mul(r11587589, r11587572, r11587588, MPFR_RNDN);
        mpfr_add(r11587590, r11587584, r11587589, MPFR_RNDN);
        mpfr_add(r11587591, r11587579, r11587590, MPFR_RNDN);
        return mpfr_get_d(r11587591, MPFR_RNDN);
}

static mpfr_t r11587592, r11587593, r11587594, r11587595, r11587596, r11587597, r11587598, r11587599, r11587600, r11587601, r11587602, r11587603, r11587604, r11587605, r11587606, r11587607, r11587608, r11587609, r11587610, r11587611, r11587612, r11587613, r11587614, r11587615;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11587592);
        mpfr_init_set_str(r11587593, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11587594);
        mpfr_init(r11587595);
        mpfr_init(r11587596);
        mpfr_init(r11587597);
        mpfr_init(r11587598);
        mpfr_init_set_str(r11587599, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11587600);
        mpfr_init_set_str(r11587601, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587602);
        mpfr_init(r11587603);
        mpfr_init_set_str(r11587604, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587605, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11587606);
        mpfr_init(r11587607);
        mpfr_init(r11587608);
        mpfr_init_set_str(r11587609, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11587610);
        mpfr_init_set_str(r11587611, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11587612);
        mpfr_init(r11587613);
        mpfr_init(r11587614);
        mpfr_init(r11587615);
}

double f_dm(double x) {
        mpfr_set_d(r11587592, x, MPFR_RNDN);
        ;
        mpfr_mul(r11587594, r11587593, r11587592, MPFR_RNDN);
        mpfr_mul(r11587595, r11587592, r11587594, MPFR_RNDN);
        mpfr_mul(r11587596, r11587592, r11587592, MPFR_RNDN);
        mpfr_mul(r11587597, r11587596, r11587596, MPFR_RNDN);
        mpfr_mul(r11587598, r11587595, r11587597, MPFR_RNDN);
        ;
        mpfr_mul(r11587600, r11587592, r11587599, MPFR_RNDN);
        ;
        mpfr_add(r11587602, r11587600, r11587601, MPFR_RNDN);
        mpfr_add(r11587603, r11587598, r11587602, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587606, r11587605, r11587592, MPFR_RNDN);
        mpfr_add(r11587607, r11587604, r11587606, MPFR_RNDN);
        mpfr_mul(r11587608, r11587597, r11587607, MPFR_RNDN);
        ;
        mpfr_mul(r11587610, r11587609, r11587592, MPFR_RNDN);
        ;
        mpfr_add(r11587612, r11587610, r11587611, MPFR_RNDN);
        mpfr_mul(r11587613, r11587596, r11587612, MPFR_RNDN);
        mpfr_add(r11587614, r11587608, r11587613, MPFR_RNDN);
        mpfr_add(r11587615, r11587603, r11587614, MPFR_RNDN);
        return mpfr_get_d(r11587615, MPFR_RNDN);
}

