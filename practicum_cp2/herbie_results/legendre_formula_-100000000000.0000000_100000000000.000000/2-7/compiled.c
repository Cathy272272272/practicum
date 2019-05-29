#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6764471 = -2.1875;
        float r6764472 = x;
        float r6764473 = r6764471 * r6764472;
        float r6764474 = 19.6875;
        float r6764475 = r6764472 * r6764472;
        float r6764476 = r6764475 * r6764472;
        float r6764477 = r6764474 * r6764476;
        float r6764478 = r6764473 + r6764477;
        float r6764479 = -43.3125;
        float r6764480 = r6764476 * r6764472;
        float r6764481 = r6764480 * r6764472;
        float r6764482 = r6764479 * r6764481;
        float r6764483 = r6764478 + r6764482;
        float r6764484 = 26.8125;
        float r6764485 = r6764481 * r6764472;
        float r6764486 = r6764485 * r6764472;
        float r6764487 = r6764484 * r6764486;
        float r6764488 = r6764483 + r6764487;
        return r6764488;
}

double f_id(double x) {
        double r6764489 = -2.1875;
        double r6764490 = x;
        double r6764491 = r6764489 * r6764490;
        double r6764492 = 19.6875;
        double r6764493 = r6764490 * r6764490;
        double r6764494 = r6764493 * r6764490;
        double r6764495 = r6764492 * r6764494;
        double r6764496 = r6764491 + r6764495;
        double r6764497 = -43.3125;
        double r6764498 = r6764494 * r6764490;
        double r6764499 = r6764498 * r6764490;
        double r6764500 = r6764497 * r6764499;
        double r6764501 = r6764496 + r6764500;
        double r6764502 = 26.8125;
        double r6764503 = r6764499 * r6764490;
        double r6764504 = r6764503 * r6764490;
        double r6764505 = r6764502 * r6764504;
        double r6764506 = r6764501 + r6764505;
        return r6764506;
}


double f_of(float x) {
        float r6764507 = -2.1875;
        float r6764508 = x;
        float r6764509 = r6764507 * r6764508;
        float r6764510 = 19.6875;
        float r6764511 = r6764508 * r6764508;
        float r6764512 = r6764511 * r6764508;
        float r6764513 = r6764510 * r6764512;
        float r6764514 = r6764509 + r6764513;
        float r6764515 = -43.3125;
        float r6764516 = r6764512 * r6764508;
        float r6764517 = r6764516 * r6764508;
        float r6764518 = r6764515 * r6764517;
        float r6764519 = r6764514 + r6764518;
        float r6764520 = 26.8125;
        float r6764521 = r6764517 * r6764508;
        float r6764522 = r6764521 * r6764508;
        float r6764523 = r6764520 * r6764522;
        float r6764524 = r6764519 + r6764523;
        return r6764524;
}

double f_od(double x) {
        double r6764525 = -2.1875;
        double r6764526 = x;
        double r6764527 = r6764525 * r6764526;
        double r6764528 = 19.6875;
        double r6764529 = r6764526 * r6764526;
        double r6764530 = r6764529 * r6764526;
        double r6764531 = r6764528 * r6764530;
        double r6764532 = r6764527 + r6764531;
        double r6764533 = -43.3125;
        double r6764534 = r6764530 * r6764526;
        double r6764535 = r6764534 * r6764526;
        double r6764536 = r6764533 * r6764535;
        double r6764537 = r6764532 + r6764536;
        double r6764538 = 26.8125;
        double r6764539 = r6764535 * r6764526;
        double r6764540 = r6764539 * r6764526;
        double r6764541 = r6764538 * r6764540;
        double r6764542 = r6764537 + r6764541;
        return r6764542;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764543, r6764544, r6764545, r6764546, r6764547, r6764548, r6764549, r6764550, r6764551, r6764552, r6764553, r6764554, r6764555, r6764556, r6764557, r6764558, r6764559, r6764560;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764543, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6764544);
        mpfr_init(r6764545);
        mpfr_init_set_str(r6764546, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6764547);
        mpfr_init(r6764548);
        mpfr_init(r6764549);
        mpfr_init(r6764550);
        mpfr_init_set_str(r6764551, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6764552);
        mpfr_init(r6764553);
        mpfr_init(r6764554);
        mpfr_init(r6764555);
        mpfr_init_set_str(r6764556, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6764557);
        mpfr_init(r6764558);
        mpfr_init(r6764559);
        mpfr_init(r6764560);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6764544, x, MPFR_RNDN);
        mpfr_mul(r6764545, r6764543, r6764544, MPFR_RNDN);
        ;
        mpfr_mul(r6764547, r6764544, r6764544, MPFR_RNDN);
        mpfr_mul(r6764548, r6764547, r6764544, MPFR_RNDN);
        mpfr_mul(r6764549, r6764546, r6764548, MPFR_RNDN);
        mpfr_add(r6764550, r6764545, r6764549, MPFR_RNDN);
        ;
        mpfr_mul(r6764552, r6764548, r6764544, MPFR_RNDN);
        mpfr_mul(r6764553, r6764552, r6764544, MPFR_RNDN);
        mpfr_mul(r6764554, r6764551, r6764553, MPFR_RNDN);
        mpfr_add(r6764555, r6764550, r6764554, MPFR_RNDN);
        ;
        mpfr_mul(r6764557, r6764553, r6764544, MPFR_RNDN);
        mpfr_mul(r6764558, r6764557, r6764544, MPFR_RNDN);
        mpfr_mul(r6764559, r6764556, r6764558, MPFR_RNDN);
        mpfr_add(r6764560, r6764555, r6764559, MPFR_RNDN);
        return mpfr_get_d(r6764560, MPFR_RNDN);
}

static mpfr_t r6764561, r6764562, r6764563, r6764564, r6764565, r6764566, r6764567, r6764568, r6764569, r6764570, r6764571, r6764572, r6764573, r6764574, r6764575, r6764576, r6764577, r6764578;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764561, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6764562);
        mpfr_init(r6764563);
        mpfr_init_set_str(r6764564, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6764565);
        mpfr_init(r6764566);
        mpfr_init(r6764567);
        mpfr_init(r6764568);
        mpfr_init_set_str(r6764569, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6764570);
        mpfr_init(r6764571);
        mpfr_init(r6764572);
        mpfr_init(r6764573);
        mpfr_init_set_str(r6764574, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6764575);
        mpfr_init(r6764576);
        mpfr_init(r6764577);
        mpfr_init(r6764578);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6764562, x, MPFR_RNDN);
        mpfr_mul(r6764563, r6764561, r6764562, MPFR_RNDN);
        ;
        mpfr_mul(r6764565, r6764562, r6764562, MPFR_RNDN);
        mpfr_mul(r6764566, r6764565, r6764562, MPFR_RNDN);
        mpfr_mul(r6764567, r6764564, r6764566, MPFR_RNDN);
        mpfr_add(r6764568, r6764563, r6764567, MPFR_RNDN);
        ;
        mpfr_mul(r6764570, r6764566, r6764562, MPFR_RNDN);
        mpfr_mul(r6764571, r6764570, r6764562, MPFR_RNDN);
        mpfr_mul(r6764572, r6764569, r6764571, MPFR_RNDN);
        mpfr_add(r6764573, r6764568, r6764572, MPFR_RNDN);
        ;
        mpfr_mul(r6764575, r6764571, r6764562, MPFR_RNDN);
        mpfr_mul(r6764576, r6764575, r6764562, MPFR_RNDN);
        mpfr_mul(r6764577, r6764574, r6764576, MPFR_RNDN);
        mpfr_add(r6764578, r6764573, r6764577, MPFR_RNDN);
        return mpfr_get_d(r6764578, MPFR_RNDN);
}

static mpfr_t r6764579, r6764580, r6764581, r6764582, r6764583, r6764584, r6764585, r6764586, r6764587, r6764588, r6764589, r6764590, r6764591, r6764592, r6764593, r6764594, r6764595, r6764596;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764579, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6764580);
        mpfr_init(r6764581);
        mpfr_init_set_str(r6764582, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6764583);
        mpfr_init(r6764584);
        mpfr_init(r6764585);
        mpfr_init(r6764586);
        mpfr_init_set_str(r6764587, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6764588);
        mpfr_init(r6764589);
        mpfr_init(r6764590);
        mpfr_init(r6764591);
        mpfr_init_set_str(r6764592, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6764593);
        mpfr_init(r6764594);
        mpfr_init(r6764595);
        mpfr_init(r6764596);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6764580, x, MPFR_RNDN);
        mpfr_mul(r6764581, r6764579, r6764580, MPFR_RNDN);
        ;
        mpfr_mul(r6764583, r6764580, r6764580, MPFR_RNDN);
        mpfr_mul(r6764584, r6764583, r6764580, MPFR_RNDN);
        mpfr_mul(r6764585, r6764582, r6764584, MPFR_RNDN);
        mpfr_add(r6764586, r6764581, r6764585, MPFR_RNDN);
        ;
        mpfr_mul(r6764588, r6764584, r6764580, MPFR_RNDN);
        mpfr_mul(r6764589, r6764588, r6764580, MPFR_RNDN);
        mpfr_mul(r6764590, r6764587, r6764589, MPFR_RNDN);
        mpfr_add(r6764591, r6764586, r6764590, MPFR_RNDN);
        ;
        mpfr_mul(r6764593, r6764589, r6764580, MPFR_RNDN);
        mpfr_mul(r6764594, r6764593, r6764580, MPFR_RNDN);
        mpfr_mul(r6764595, r6764592, r6764594, MPFR_RNDN);
        mpfr_add(r6764596, r6764591, r6764595, MPFR_RNDN);
        return mpfr_get_d(r6764596, MPFR_RNDN);
}

