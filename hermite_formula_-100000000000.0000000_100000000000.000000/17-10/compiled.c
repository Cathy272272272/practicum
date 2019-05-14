#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r11056443 = -30240.0;
        float r11056444 = 302400.0;
        float r11056445 = x;
        float r11056446 = r11056445 * r11056445;
        float r11056447 = r11056444 * r11056446;
        float r11056448 = r11056443 + r11056447;
        float r11056449 = -403200.0;
        float r11056450 = r11056446 * r11056445;
        float r11056451 = r11056450 * r11056445;
        float r11056452 = r11056449 * r11056451;
        float r11056453 = r11056448 + r11056452;
        float r11056454 = 161280.0;
        float r11056455 = r11056451 * r11056445;
        float r11056456 = r11056455 * r11056445;
        float r11056457 = r11056454 * r11056456;
        float r11056458 = r11056453 + r11056457;
        float r11056459 = -23040.0;
        float r11056460 = r11056456 * r11056445;
        float r11056461 = r11056460 * r11056445;
        float r11056462 = r11056459 * r11056461;
        float r11056463 = r11056458 + r11056462;
        float r11056464 = 1024.0;
        float r11056465 = r11056461 * r11056445;
        float r11056466 = r11056465 * r11056445;
        float r11056467 = r11056464 * r11056466;
        float r11056468 = r11056463 + r11056467;
        return r11056468;
}

double f_id(double x) {
        double r11056469 = -30240.0;
        double r11056470 = 302400.0;
        double r11056471 = x;
        double r11056472 = r11056471 * r11056471;
        double r11056473 = r11056470 * r11056472;
        double r11056474 = r11056469 + r11056473;
        double r11056475 = -403200.0;
        double r11056476 = r11056472 * r11056471;
        double r11056477 = r11056476 * r11056471;
        double r11056478 = r11056475 * r11056477;
        double r11056479 = r11056474 + r11056478;
        double r11056480 = 161280.0;
        double r11056481 = r11056477 * r11056471;
        double r11056482 = r11056481 * r11056471;
        double r11056483 = r11056480 * r11056482;
        double r11056484 = r11056479 + r11056483;
        double r11056485 = -23040.0;
        double r11056486 = r11056482 * r11056471;
        double r11056487 = r11056486 * r11056471;
        double r11056488 = r11056485 * r11056487;
        double r11056489 = r11056484 + r11056488;
        double r11056490 = 1024.0;
        double r11056491 = r11056487 * r11056471;
        double r11056492 = r11056491 * r11056471;
        double r11056493 = r11056490 * r11056492;
        double r11056494 = r11056489 + r11056493;
        return r11056494;
}


double f_of(float x) {
        float r11056495 = x;
        float r11056496 = r11056495 * r11056495;
        float r11056497 = r11056496 * r11056496;
        float r11056498 = -403200.0;
        float r11056499 = 161280.0;
        float r11056500 = r11056499 * r11056495;
        float r11056501 = r11056495 * r11056500;
        float r11056502 = r11056498 + r11056501;
        float r11056503 = r11056497 * r11056502;
        float r11056504 = 2;
        float r11056505 = r11056504 + r11056504;
        float r11056506 = pow(r11056495, r11056505);
        float r11056507 = r11056497 * r11056506;
        float r11056508 = 1024.0;
        float r11056509 = r11056508 * r11056496;
        float r11056510 = -23040.0;
        float r11056511 = r11056509 + r11056510;
        float r11056512 = r11056507 * r11056511;
        float r11056513 = r11056503 + r11056512;
        float r11056514 = 302400.0;
        float r11056515 = r11056495 * r11056514;
        float r11056516 = r11056495 * r11056515;
        float r11056517 = -30240.0;
        float r11056518 = r11056516 + r11056517;
        float r11056519 = r11056513 + r11056518;
        return r11056519;
}

double f_od(double x) {
        double r11056520 = x;
        double r11056521 = r11056520 * r11056520;
        double r11056522 = r11056521 * r11056521;
        double r11056523 = -403200.0;
        double r11056524 = 161280.0;
        double r11056525 = r11056524 * r11056520;
        double r11056526 = r11056520 * r11056525;
        double r11056527 = r11056523 + r11056526;
        double r11056528 = r11056522 * r11056527;
        double r11056529 = 2;
        double r11056530 = r11056529 + r11056529;
        double r11056531 = pow(r11056520, r11056530);
        double r11056532 = r11056522 * r11056531;
        double r11056533 = 1024.0;
        double r11056534 = r11056533 * r11056521;
        double r11056535 = -23040.0;
        double r11056536 = r11056534 + r11056535;
        double r11056537 = r11056532 * r11056536;
        double r11056538 = r11056528 + r11056537;
        double r11056539 = 302400.0;
        double r11056540 = r11056520 * r11056539;
        double r11056541 = r11056520 * r11056540;
        double r11056542 = -30240.0;
        double r11056543 = r11056541 + r11056542;
        double r11056544 = r11056538 + r11056543;
        return r11056544;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11056545, r11056546, r11056547, r11056548, r11056549, r11056550, r11056551, r11056552, r11056553, r11056554, r11056555, r11056556, r11056557, r11056558, r11056559, r11056560, r11056561, r11056562, r11056563, r11056564, r11056565, r11056566, r11056567, r11056568, r11056569, r11056570;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11056545, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11056546, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r11056547);
        mpfr_init(r11056548);
        mpfr_init(r11056549);
        mpfr_init(r11056550);
        mpfr_init_set_str(r11056551, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r11056552);
        mpfr_init(r11056553);
        mpfr_init(r11056554);
        mpfr_init(r11056555);
        mpfr_init_set_str(r11056556, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r11056557);
        mpfr_init(r11056558);
        mpfr_init(r11056559);
        mpfr_init(r11056560);
        mpfr_init_set_str(r11056561, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r11056562);
        mpfr_init(r11056563);
        mpfr_init(r11056564);
        mpfr_init(r11056565);
        mpfr_init_set_str(r11056566, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r11056567);
        mpfr_init(r11056568);
        mpfr_init(r11056569);
        mpfr_init(r11056570);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11056547, x, MPFR_RNDN);
        mpfr_mul(r11056548, r11056547, r11056547, MPFR_RNDN);
        mpfr_mul(r11056549, r11056546, r11056548, MPFR_RNDN);
        mpfr_add(r11056550, r11056545, r11056549, MPFR_RNDN);
        ;
        mpfr_mul(r11056552, r11056548, r11056547, MPFR_RNDN);
        mpfr_mul(r11056553, r11056552, r11056547, MPFR_RNDN);
        mpfr_mul(r11056554, r11056551, r11056553, MPFR_RNDN);
        mpfr_add(r11056555, r11056550, r11056554, MPFR_RNDN);
        ;
        mpfr_mul(r11056557, r11056553, r11056547, MPFR_RNDN);
        mpfr_mul(r11056558, r11056557, r11056547, MPFR_RNDN);
        mpfr_mul(r11056559, r11056556, r11056558, MPFR_RNDN);
        mpfr_add(r11056560, r11056555, r11056559, MPFR_RNDN);
        ;
        mpfr_mul(r11056562, r11056558, r11056547, MPFR_RNDN);
        mpfr_mul(r11056563, r11056562, r11056547, MPFR_RNDN);
        mpfr_mul(r11056564, r11056561, r11056563, MPFR_RNDN);
        mpfr_add(r11056565, r11056560, r11056564, MPFR_RNDN);
        ;
        mpfr_mul(r11056567, r11056563, r11056547, MPFR_RNDN);
        mpfr_mul(r11056568, r11056567, r11056547, MPFR_RNDN);
        mpfr_mul(r11056569, r11056566, r11056568, MPFR_RNDN);
        mpfr_add(r11056570, r11056565, r11056569, MPFR_RNDN);
        return mpfr_get_d(r11056570, MPFR_RNDN);
}

static mpfr_t r11056571, r11056572, r11056573, r11056574, r11056575, r11056576, r11056577, r11056578, r11056579, r11056580, r11056581, r11056582, r11056583, r11056584, r11056585, r11056586, r11056587, r11056588, r11056589, r11056590, r11056591, r11056592, r11056593, r11056594, r11056595;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11056571);
        mpfr_init(r11056572);
        mpfr_init(r11056573);
        mpfr_init_set_str(r11056574, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11056575, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r11056576);
        mpfr_init(r11056577);
        mpfr_init(r11056578);
        mpfr_init(r11056579);
        mpfr_init_set_str(r11056580, "2", 10, MPFR_RNDN);
        mpfr_init(r11056581);
        mpfr_init(r11056582);
        mpfr_init(r11056583);
        mpfr_init_set_str(r11056584, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r11056585);
        mpfr_init_set_str(r11056586, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r11056587);
        mpfr_init(r11056588);
        mpfr_init(r11056589);
        mpfr_init_set_str(r11056590, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r11056591);
        mpfr_init(r11056592);
        mpfr_init_set_str(r11056593, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r11056594);
        mpfr_init(r11056595);
}

double f_fm(double x) {
        mpfr_set_d(r11056571, x, MPFR_RNDN);
        mpfr_mul(r11056572, r11056571, r11056571, MPFR_RNDN);
        mpfr_mul(r11056573, r11056572, r11056572, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11056576, r11056575, r11056571, MPFR_RNDN);
        mpfr_mul(r11056577, r11056571, r11056576, MPFR_RNDN);
        mpfr_add(r11056578, r11056574, r11056577, MPFR_RNDN);
        mpfr_mul(r11056579, r11056573, r11056578, MPFR_RNDN);
        ;
        mpfr_add(r11056581, r11056580, r11056580, MPFR_RNDN);
        mpfr_pow(r11056582, r11056571, r11056581, MPFR_RNDN);
        mpfr_mul(r11056583, r11056573, r11056582, MPFR_RNDN);
        ;
        mpfr_mul(r11056585, r11056584, r11056572, MPFR_RNDN);
        ;
        mpfr_add(r11056587, r11056585, r11056586, MPFR_RNDN);
        mpfr_mul(r11056588, r11056583, r11056587, MPFR_RNDN);
        mpfr_add(r11056589, r11056579, r11056588, MPFR_RNDN);
        ;
        mpfr_mul(r11056591, r11056571, r11056590, MPFR_RNDN);
        mpfr_mul(r11056592, r11056571, r11056591, MPFR_RNDN);
        ;
        mpfr_add(r11056594, r11056592, r11056593, MPFR_RNDN);
        mpfr_add(r11056595, r11056589, r11056594, MPFR_RNDN);
        return mpfr_get_d(r11056595, MPFR_RNDN);
}

static mpfr_t r11056596, r11056597, r11056598, r11056599, r11056600, r11056601, r11056602, r11056603, r11056604, r11056605, r11056606, r11056607, r11056608, r11056609, r11056610, r11056611, r11056612, r11056613, r11056614, r11056615, r11056616, r11056617, r11056618, r11056619, r11056620;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11056596);
        mpfr_init(r11056597);
        mpfr_init(r11056598);
        mpfr_init_set_str(r11056599, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11056600, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r11056601);
        mpfr_init(r11056602);
        mpfr_init(r11056603);
        mpfr_init(r11056604);
        mpfr_init_set_str(r11056605, "2", 10, MPFR_RNDN);
        mpfr_init(r11056606);
        mpfr_init(r11056607);
        mpfr_init(r11056608);
        mpfr_init_set_str(r11056609, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r11056610);
        mpfr_init_set_str(r11056611, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r11056612);
        mpfr_init(r11056613);
        mpfr_init(r11056614);
        mpfr_init_set_str(r11056615, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r11056616);
        mpfr_init(r11056617);
        mpfr_init_set_str(r11056618, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r11056619);
        mpfr_init(r11056620);
}

double f_dm(double x) {
        mpfr_set_d(r11056596, x, MPFR_RNDN);
        mpfr_mul(r11056597, r11056596, r11056596, MPFR_RNDN);
        mpfr_mul(r11056598, r11056597, r11056597, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11056601, r11056600, r11056596, MPFR_RNDN);
        mpfr_mul(r11056602, r11056596, r11056601, MPFR_RNDN);
        mpfr_add(r11056603, r11056599, r11056602, MPFR_RNDN);
        mpfr_mul(r11056604, r11056598, r11056603, MPFR_RNDN);
        ;
        mpfr_add(r11056606, r11056605, r11056605, MPFR_RNDN);
        mpfr_pow(r11056607, r11056596, r11056606, MPFR_RNDN);
        mpfr_mul(r11056608, r11056598, r11056607, MPFR_RNDN);
        ;
        mpfr_mul(r11056610, r11056609, r11056597, MPFR_RNDN);
        ;
        mpfr_add(r11056612, r11056610, r11056611, MPFR_RNDN);
        mpfr_mul(r11056613, r11056608, r11056612, MPFR_RNDN);
        mpfr_add(r11056614, r11056604, r11056613, MPFR_RNDN);
        ;
        mpfr_mul(r11056616, r11056596, r11056615, MPFR_RNDN);
        mpfr_mul(r11056617, r11056596, r11056616, MPFR_RNDN);
        ;
        mpfr_add(r11056619, r11056617, r11056618, MPFR_RNDN);
        mpfr_add(r11056620, r11056614, r11056619, MPFR_RNDN);
        return mpfr_get_d(r11056620, MPFR_RNDN);
}

