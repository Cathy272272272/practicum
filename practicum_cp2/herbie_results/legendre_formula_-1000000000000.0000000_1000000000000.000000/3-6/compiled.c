#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7167470 = -0.3125;
        float r7167471 = 6.5625;
        float r7167472 = x;
        float r7167473 = r7167472 * r7167472;
        float r7167474 = r7167471 * r7167473;
        float r7167475 = r7167470 + r7167474;
        float r7167476 = -19.6875;
        float r7167477 = r7167473 * r7167472;
        float r7167478 = r7167477 * r7167472;
        float r7167479 = r7167476 * r7167478;
        float r7167480 = r7167475 + r7167479;
        float r7167481 = 14.4375;
        float r7167482 = r7167478 * r7167472;
        float r7167483 = r7167482 * r7167472;
        float r7167484 = r7167481 * r7167483;
        float r7167485 = r7167480 + r7167484;
        return r7167485;
}

double f_id(double x) {
        double r7167486 = -0.3125;
        double r7167487 = 6.5625;
        double r7167488 = x;
        double r7167489 = r7167488 * r7167488;
        double r7167490 = r7167487 * r7167489;
        double r7167491 = r7167486 + r7167490;
        double r7167492 = -19.6875;
        double r7167493 = r7167489 * r7167488;
        double r7167494 = r7167493 * r7167488;
        double r7167495 = r7167492 * r7167494;
        double r7167496 = r7167491 + r7167495;
        double r7167497 = 14.4375;
        double r7167498 = r7167494 * r7167488;
        double r7167499 = r7167498 * r7167488;
        double r7167500 = r7167497 * r7167499;
        double r7167501 = r7167496 + r7167500;
        return r7167501;
}


double f_of(float x) {
        float r7167502 = -0.3125;
        float r7167503 = 6.5625;
        float r7167504 = x;
        float r7167505 = r7167504 * r7167504;
        float r7167506 = r7167503 * r7167505;
        float r7167507 = r7167502 + r7167506;
        float r7167508 = -19.6875;
        float r7167509 = r7167505 * r7167504;
        float r7167510 = r7167509 * r7167504;
        float r7167511 = r7167508 * r7167510;
        float r7167512 = r7167507 + r7167511;
        float r7167513 = 14.4375;
        float r7167514 = 3;
        float r7167515 = pow(r7167504, r7167514);
        float r7167516 = r7167515 * r7167504;
        float r7167517 = r7167516 * r7167504;
        float r7167518 = r7167517 * r7167504;
        float r7167519 = r7167513 * r7167518;
        float r7167520 = r7167512 + r7167519;
        return r7167520;
}

double f_od(double x) {
        double r7167521 = -0.3125;
        double r7167522 = 6.5625;
        double r7167523 = x;
        double r7167524 = r7167523 * r7167523;
        double r7167525 = r7167522 * r7167524;
        double r7167526 = r7167521 + r7167525;
        double r7167527 = -19.6875;
        double r7167528 = r7167524 * r7167523;
        double r7167529 = r7167528 * r7167523;
        double r7167530 = r7167527 * r7167529;
        double r7167531 = r7167526 + r7167530;
        double r7167532 = 14.4375;
        double r7167533 = 3;
        double r7167534 = pow(r7167523, r7167533);
        double r7167535 = r7167534 * r7167523;
        double r7167536 = r7167535 * r7167523;
        double r7167537 = r7167536 * r7167523;
        double r7167538 = r7167532 * r7167537;
        double r7167539 = r7167531 + r7167538;
        return r7167539;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167540, r7167541, r7167542, r7167543, r7167544, r7167545, r7167546, r7167547, r7167548, r7167549, r7167550, r7167551, r7167552, r7167553, r7167554, r7167555;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167540, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167541, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7167542);
        mpfr_init(r7167543);
        mpfr_init(r7167544);
        mpfr_init(r7167545);
        mpfr_init_set_str(r7167546, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7167547);
        mpfr_init(r7167548);
        mpfr_init(r7167549);
        mpfr_init(r7167550);
        mpfr_init_set_str(r7167551, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7167552);
        mpfr_init(r7167553);
        mpfr_init(r7167554);
        mpfr_init(r7167555);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7167542, x, MPFR_RNDN);
        mpfr_mul(r7167543, r7167542, r7167542, MPFR_RNDN);
        mpfr_mul(r7167544, r7167541, r7167543, MPFR_RNDN);
        mpfr_add(r7167545, r7167540, r7167544, MPFR_RNDN);
        ;
        mpfr_mul(r7167547, r7167543, r7167542, MPFR_RNDN);
        mpfr_mul(r7167548, r7167547, r7167542, MPFR_RNDN);
        mpfr_mul(r7167549, r7167546, r7167548, MPFR_RNDN);
        mpfr_add(r7167550, r7167545, r7167549, MPFR_RNDN);
        ;
        mpfr_mul(r7167552, r7167548, r7167542, MPFR_RNDN);
        mpfr_mul(r7167553, r7167552, r7167542, MPFR_RNDN);
        mpfr_mul(r7167554, r7167551, r7167553, MPFR_RNDN);
        mpfr_add(r7167555, r7167550, r7167554, MPFR_RNDN);
        return mpfr_get_d(r7167555, MPFR_RNDN);
}

static mpfr_t r7167556, r7167557, r7167558, r7167559, r7167560, r7167561, r7167562, r7167563, r7167564, r7167565, r7167566, r7167567, r7167568, r7167569, r7167570, r7167571, r7167572, r7167573, r7167574;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167556, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167557, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7167558);
        mpfr_init(r7167559);
        mpfr_init(r7167560);
        mpfr_init(r7167561);
        mpfr_init_set_str(r7167562, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7167563);
        mpfr_init(r7167564);
        mpfr_init(r7167565);
        mpfr_init(r7167566);
        mpfr_init_set_str(r7167567, "14.4375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167568, "3", 10, MPFR_RNDN);
        mpfr_init(r7167569);
        mpfr_init(r7167570);
        mpfr_init(r7167571);
        mpfr_init(r7167572);
        mpfr_init(r7167573);
        mpfr_init(r7167574);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7167558, x, MPFR_RNDN);
        mpfr_mul(r7167559, r7167558, r7167558, MPFR_RNDN);
        mpfr_mul(r7167560, r7167557, r7167559, MPFR_RNDN);
        mpfr_add(r7167561, r7167556, r7167560, MPFR_RNDN);
        ;
        mpfr_mul(r7167563, r7167559, r7167558, MPFR_RNDN);
        mpfr_mul(r7167564, r7167563, r7167558, MPFR_RNDN);
        mpfr_mul(r7167565, r7167562, r7167564, MPFR_RNDN);
        mpfr_add(r7167566, r7167561, r7167565, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7167569, r7167558, r7167568, MPFR_RNDN);
        mpfr_mul(r7167570, r7167569, r7167558, MPFR_RNDN);
        mpfr_mul(r7167571, r7167570, r7167558, MPFR_RNDN);
        mpfr_mul(r7167572, r7167571, r7167558, MPFR_RNDN);
        mpfr_mul(r7167573, r7167567, r7167572, MPFR_RNDN);
        mpfr_add(r7167574, r7167566, r7167573, MPFR_RNDN);
        return mpfr_get_d(r7167574, MPFR_RNDN);
}

static mpfr_t r7167575, r7167576, r7167577, r7167578, r7167579, r7167580, r7167581, r7167582, r7167583, r7167584, r7167585, r7167586, r7167587, r7167588, r7167589, r7167590, r7167591, r7167592, r7167593;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167575, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167576, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7167577);
        mpfr_init(r7167578);
        mpfr_init(r7167579);
        mpfr_init(r7167580);
        mpfr_init_set_str(r7167581, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7167582);
        mpfr_init(r7167583);
        mpfr_init(r7167584);
        mpfr_init(r7167585);
        mpfr_init_set_str(r7167586, "14.4375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167587, "3", 10, MPFR_RNDN);
        mpfr_init(r7167588);
        mpfr_init(r7167589);
        mpfr_init(r7167590);
        mpfr_init(r7167591);
        mpfr_init(r7167592);
        mpfr_init(r7167593);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7167577, x, MPFR_RNDN);
        mpfr_mul(r7167578, r7167577, r7167577, MPFR_RNDN);
        mpfr_mul(r7167579, r7167576, r7167578, MPFR_RNDN);
        mpfr_add(r7167580, r7167575, r7167579, MPFR_RNDN);
        ;
        mpfr_mul(r7167582, r7167578, r7167577, MPFR_RNDN);
        mpfr_mul(r7167583, r7167582, r7167577, MPFR_RNDN);
        mpfr_mul(r7167584, r7167581, r7167583, MPFR_RNDN);
        mpfr_add(r7167585, r7167580, r7167584, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7167588, r7167577, r7167587, MPFR_RNDN);
        mpfr_mul(r7167589, r7167588, r7167577, MPFR_RNDN);
        mpfr_mul(r7167590, r7167589, r7167577, MPFR_RNDN);
        mpfr_mul(r7167591, r7167590, r7167577, MPFR_RNDN);
        mpfr_mul(r7167592, r7167586, r7167591, MPFR_RNDN);
        mpfr_add(r7167593, r7167585, r7167592, MPFR_RNDN);
        return mpfr_get_d(r7167593, MPFR_RNDN);
}

