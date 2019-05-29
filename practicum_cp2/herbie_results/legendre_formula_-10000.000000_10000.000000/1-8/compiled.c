#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6860445 = 0.273438;
        float r6860446 = -9.84375;
        float r6860447 = x;
        float r6860448 = r6860447 * r6860447;
        float r6860449 = r6860446 * r6860448;
        float r6860450 = r6860445 + r6860449;
        float r6860451 = 54.140625;
        float r6860452 = r6860448 * r6860447;
        float r6860453 = r6860452 * r6860447;
        float r6860454 = r6860451 * r6860453;
        float r6860455 = r6860450 + r6860454;
        float r6860456 = -93.84375;
        float r6860457 = r6860453 * r6860447;
        float r6860458 = r6860457 * r6860447;
        float r6860459 = r6860456 * r6860458;
        float r6860460 = r6860455 + r6860459;
        float r6860461 = 50.273438;
        float r6860462 = r6860458 * r6860447;
        float r6860463 = r6860462 * r6860447;
        float r6860464 = r6860461 * r6860463;
        float r6860465 = r6860460 + r6860464;
        return r6860465;
}

double f_id(double x) {
        double r6860466 = 0.273438;
        double r6860467 = -9.84375;
        double r6860468 = x;
        double r6860469 = r6860468 * r6860468;
        double r6860470 = r6860467 * r6860469;
        double r6860471 = r6860466 + r6860470;
        double r6860472 = 54.140625;
        double r6860473 = r6860469 * r6860468;
        double r6860474 = r6860473 * r6860468;
        double r6860475 = r6860472 * r6860474;
        double r6860476 = r6860471 + r6860475;
        double r6860477 = -93.84375;
        double r6860478 = r6860474 * r6860468;
        double r6860479 = r6860478 * r6860468;
        double r6860480 = r6860477 * r6860479;
        double r6860481 = r6860476 + r6860480;
        double r6860482 = 50.273438;
        double r6860483 = r6860479 * r6860468;
        double r6860484 = r6860483 * r6860468;
        double r6860485 = r6860482 * r6860484;
        double r6860486 = r6860481 + r6860485;
        return r6860486;
}


double f_of(float x) {
        float r6860487 = x;
        float r6860488 = r6860487 * r6860487;
        float r6860489 = r6860488 * r6860488;
        float r6860490 = -93.84375;
        float r6860491 = r6860488 * r6860490;
        float r6860492 = 54.140625;
        float r6860493 = r6860491 + r6860492;
        float r6860494 = r6860489 * r6860493;
        float r6860495 = 3;
        float r6860496 = 1;
        float r6860497 = r6860495 + r6860496;
        float r6860498 = pow(r6860488, r6860497);
        float r6860499 = 50.273438;
        float r6860500 = r6860498 * r6860499;
        float r6860501 = 0.273438;
        float r6860502 = -9.84375;
        float r6860503 = r6860487 * r6860502;
        float r6860504 = r6860487 * r6860503;
        float r6860505 = r6860501 + r6860504;
        float r6860506 = r6860500 + r6860505;
        float r6860507 = r6860494 + r6860506;
        return r6860507;
}

double f_od(double x) {
        double r6860508 = x;
        double r6860509 = r6860508 * r6860508;
        double r6860510 = r6860509 * r6860509;
        double r6860511 = -93.84375;
        double r6860512 = r6860509 * r6860511;
        double r6860513 = 54.140625;
        double r6860514 = r6860512 + r6860513;
        double r6860515 = r6860510 * r6860514;
        double r6860516 = 3;
        double r6860517 = 1;
        double r6860518 = r6860516 + r6860517;
        double r6860519 = pow(r6860509, r6860518);
        double r6860520 = 50.273438;
        double r6860521 = r6860519 * r6860520;
        double r6860522 = 0.273438;
        double r6860523 = -9.84375;
        double r6860524 = r6860508 * r6860523;
        double r6860525 = r6860508 * r6860524;
        double r6860526 = r6860522 + r6860525;
        double r6860527 = r6860521 + r6860526;
        double r6860528 = r6860515 + r6860527;
        return r6860528;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6860529, r6860530, r6860531, r6860532, r6860533, r6860534, r6860535, r6860536, r6860537, r6860538, r6860539, r6860540, r6860541, r6860542, r6860543, r6860544, r6860545, r6860546, r6860547, r6860548, r6860549;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6860529, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860530, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6860531);
        mpfr_init(r6860532);
        mpfr_init(r6860533);
        mpfr_init(r6860534);
        mpfr_init_set_str(r6860535, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6860536);
        mpfr_init(r6860537);
        mpfr_init(r6860538);
        mpfr_init(r6860539);
        mpfr_init_set_str(r6860540, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6860541);
        mpfr_init(r6860542);
        mpfr_init(r6860543);
        mpfr_init(r6860544);
        mpfr_init_set_str(r6860545, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6860546);
        mpfr_init(r6860547);
        mpfr_init(r6860548);
        mpfr_init(r6860549);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6860531, x, MPFR_RNDN);
        mpfr_mul(r6860532, r6860531, r6860531, MPFR_RNDN);
        mpfr_mul(r6860533, r6860530, r6860532, MPFR_RNDN);
        mpfr_add(r6860534, r6860529, r6860533, MPFR_RNDN);
        ;
        mpfr_mul(r6860536, r6860532, r6860531, MPFR_RNDN);
        mpfr_mul(r6860537, r6860536, r6860531, MPFR_RNDN);
        mpfr_mul(r6860538, r6860535, r6860537, MPFR_RNDN);
        mpfr_add(r6860539, r6860534, r6860538, MPFR_RNDN);
        ;
        mpfr_mul(r6860541, r6860537, r6860531, MPFR_RNDN);
        mpfr_mul(r6860542, r6860541, r6860531, MPFR_RNDN);
        mpfr_mul(r6860543, r6860540, r6860542, MPFR_RNDN);
        mpfr_add(r6860544, r6860539, r6860543, MPFR_RNDN);
        ;
        mpfr_mul(r6860546, r6860542, r6860531, MPFR_RNDN);
        mpfr_mul(r6860547, r6860546, r6860531, MPFR_RNDN);
        mpfr_mul(r6860548, r6860545, r6860547, MPFR_RNDN);
        mpfr_add(r6860549, r6860544, r6860548, MPFR_RNDN);
        return mpfr_get_d(r6860549, MPFR_RNDN);
}

static mpfr_t r6860550, r6860551, r6860552, r6860553, r6860554, r6860555, r6860556, r6860557, r6860558, r6860559, r6860560, r6860561, r6860562, r6860563, r6860564, r6860565, r6860566, r6860567, r6860568, r6860569, r6860570;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6860550);
        mpfr_init(r6860551);
        mpfr_init(r6860552);
        mpfr_init_set_str(r6860553, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6860554);
        mpfr_init_set_str(r6860555, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6860556);
        mpfr_init(r6860557);
        mpfr_init_set_str(r6860558, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860559, "1", 10, MPFR_RNDN);
        mpfr_init(r6860560);
        mpfr_init(r6860561);
        mpfr_init_set_str(r6860562, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6860563);
        mpfr_init_set_str(r6860564, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860565, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6860566);
        mpfr_init(r6860567);
        mpfr_init(r6860568);
        mpfr_init(r6860569);
        mpfr_init(r6860570);
}

double f_fm(double x) {
        mpfr_set_d(r6860550, x, MPFR_RNDN);
        mpfr_mul(r6860551, r6860550, r6860550, MPFR_RNDN);
        mpfr_mul(r6860552, r6860551, r6860551, MPFR_RNDN);
        ;
        mpfr_mul(r6860554, r6860551, r6860553, MPFR_RNDN);
        ;
        mpfr_add(r6860556, r6860554, r6860555, MPFR_RNDN);
        mpfr_mul(r6860557, r6860552, r6860556, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6860560, r6860558, r6860559, MPFR_RNDN);
        mpfr_pow(r6860561, r6860551, r6860560, MPFR_RNDN);
        ;
        mpfr_mul(r6860563, r6860561, r6860562, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6860566, r6860550, r6860565, MPFR_RNDN);
        mpfr_mul(r6860567, r6860550, r6860566, MPFR_RNDN);
        mpfr_add(r6860568, r6860564, r6860567, MPFR_RNDN);
        mpfr_add(r6860569, r6860563, r6860568, MPFR_RNDN);
        mpfr_add(r6860570, r6860557, r6860569, MPFR_RNDN);
        return mpfr_get_d(r6860570, MPFR_RNDN);
}

static mpfr_t r6860571, r6860572, r6860573, r6860574, r6860575, r6860576, r6860577, r6860578, r6860579, r6860580, r6860581, r6860582, r6860583, r6860584, r6860585, r6860586, r6860587, r6860588, r6860589, r6860590, r6860591;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6860571);
        mpfr_init(r6860572);
        mpfr_init(r6860573);
        mpfr_init_set_str(r6860574, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6860575);
        mpfr_init_set_str(r6860576, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6860577);
        mpfr_init(r6860578);
        mpfr_init_set_str(r6860579, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860580, "1", 10, MPFR_RNDN);
        mpfr_init(r6860581);
        mpfr_init(r6860582);
        mpfr_init_set_str(r6860583, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6860584);
        mpfr_init_set_str(r6860585, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860586, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6860587);
        mpfr_init(r6860588);
        mpfr_init(r6860589);
        mpfr_init(r6860590);
        mpfr_init(r6860591);
}

double f_dm(double x) {
        mpfr_set_d(r6860571, x, MPFR_RNDN);
        mpfr_mul(r6860572, r6860571, r6860571, MPFR_RNDN);
        mpfr_mul(r6860573, r6860572, r6860572, MPFR_RNDN);
        ;
        mpfr_mul(r6860575, r6860572, r6860574, MPFR_RNDN);
        ;
        mpfr_add(r6860577, r6860575, r6860576, MPFR_RNDN);
        mpfr_mul(r6860578, r6860573, r6860577, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6860581, r6860579, r6860580, MPFR_RNDN);
        mpfr_pow(r6860582, r6860572, r6860581, MPFR_RNDN);
        ;
        mpfr_mul(r6860584, r6860582, r6860583, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6860587, r6860571, r6860586, MPFR_RNDN);
        mpfr_mul(r6860588, r6860571, r6860587, MPFR_RNDN);
        mpfr_add(r6860589, r6860585, r6860588, MPFR_RNDN);
        mpfr_add(r6860590, r6860584, r6860589, MPFR_RNDN);
        mpfr_add(r6860591, r6860578, r6860590, MPFR_RNDN);
        return mpfr_get_d(r6860591, MPFR_RNDN);
}

