#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r8924410 = -2.1875;
        float r8924411 = x;
        float r8924412 = r8924410 * r8924411;
        float r8924413 = 19.6875;
        float r8924414 = r8924411 * r8924411;
        float r8924415 = r8924414 * r8924411;
        float r8924416 = r8924413 * r8924415;
        float r8924417 = r8924412 + r8924416;
        float r8924418 = -43.3125;
        float r8924419 = r8924415 * r8924411;
        float r8924420 = r8924419 * r8924411;
        float r8924421 = r8924418 * r8924420;
        float r8924422 = r8924417 + r8924421;
        float r8924423 = 26.8125;
        float r8924424 = r8924420 * r8924411;
        float r8924425 = r8924424 * r8924411;
        float r8924426 = r8924423 * r8924425;
        float r8924427 = r8924422 + r8924426;
        return r8924427;
}

double f_id(double x) {
        double r8924428 = -2.1875;
        double r8924429 = x;
        double r8924430 = r8924428 * r8924429;
        double r8924431 = 19.6875;
        double r8924432 = r8924429 * r8924429;
        double r8924433 = r8924432 * r8924429;
        double r8924434 = r8924431 * r8924433;
        double r8924435 = r8924430 + r8924434;
        double r8924436 = -43.3125;
        double r8924437 = r8924433 * r8924429;
        double r8924438 = r8924437 * r8924429;
        double r8924439 = r8924436 * r8924438;
        double r8924440 = r8924435 + r8924439;
        double r8924441 = 26.8125;
        double r8924442 = r8924438 * r8924429;
        double r8924443 = r8924442 * r8924429;
        double r8924444 = r8924441 * r8924443;
        double r8924445 = r8924440 + r8924444;
        return r8924445;
}


double f_of(float x) {
        float r8924446 = x;
        float r8924447 = 4;
        float r8924448 = pow(r8924446, r8924447);
        float r8924449 = r8924446 * r8924448;
        float r8924450 = -43.3125;
        float r8924451 = 26.8125;
        float r8924452 = r8924446 * r8924451;
        float r8924453 = r8924452 * r8924446;
        float r8924454 = r8924450 + r8924453;
        float r8924455 = r8924449 * r8924454;
        float r8924456 = -2.1875;
        float r8924457 = r8924446 * r8924456;
        float r8924458 = r8924446 * r8924446;
        float r8924459 = 19.6875;
        float r8924460 = r8924459 * r8924446;
        float r8924461 = r8924458 * r8924460;
        float r8924462 = r8924457 + r8924461;
        float r8924463 = r8924455 + r8924462;
        return r8924463;
}

double f_od(double x) {
        double r8924464 = x;
        double r8924465 = 4;
        double r8924466 = pow(r8924464, r8924465);
        double r8924467 = r8924464 * r8924466;
        double r8924468 = -43.3125;
        double r8924469 = 26.8125;
        double r8924470 = r8924464 * r8924469;
        double r8924471 = r8924470 * r8924464;
        double r8924472 = r8924468 + r8924471;
        double r8924473 = r8924467 * r8924472;
        double r8924474 = -2.1875;
        double r8924475 = r8924464 * r8924474;
        double r8924476 = r8924464 * r8924464;
        double r8924477 = 19.6875;
        double r8924478 = r8924477 * r8924464;
        double r8924479 = r8924476 * r8924478;
        double r8924480 = r8924475 + r8924479;
        double r8924481 = r8924473 + r8924480;
        return r8924481;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924482, r8924483, r8924484, r8924485, r8924486, r8924487, r8924488, r8924489, r8924490, r8924491, r8924492, r8924493, r8924494, r8924495, r8924496, r8924497, r8924498, r8924499;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924482, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8924483);
        mpfr_init(r8924484);
        mpfr_init_set_str(r8924485, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8924486);
        mpfr_init(r8924487);
        mpfr_init(r8924488);
        mpfr_init(r8924489);
        mpfr_init_set_str(r8924490, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8924491);
        mpfr_init(r8924492);
        mpfr_init(r8924493);
        mpfr_init(r8924494);
        mpfr_init_set_str(r8924495, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8924496);
        mpfr_init(r8924497);
        mpfr_init(r8924498);
        mpfr_init(r8924499);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8924483, x, MPFR_RNDN);
        mpfr_mul(r8924484, r8924482, r8924483, MPFR_RNDN);
        ;
        mpfr_mul(r8924486, r8924483, r8924483, MPFR_RNDN);
        mpfr_mul(r8924487, r8924486, r8924483, MPFR_RNDN);
        mpfr_mul(r8924488, r8924485, r8924487, MPFR_RNDN);
        mpfr_add(r8924489, r8924484, r8924488, MPFR_RNDN);
        ;
        mpfr_mul(r8924491, r8924487, r8924483, MPFR_RNDN);
        mpfr_mul(r8924492, r8924491, r8924483, MPFR_RNDN);
        mpfr_mul(r8924493, r8924490, r8924492, MPFR_RNDN);
        mpfr_add(r8924494, r8924489, r8924493, MPFR_RNDN);
        ;
        mpfr_mul(r8924496, r8924492, r8924483, MPFR_RNDN);
        mpfr_mul(r8924497, r8924496, r8924483, MPFR_RNDN);
        mpfr_mul(r8924498, r8924495, r8924497, MPFR_RNDN);
        mpfr_add(r8924499, r8924494, r8924498, MPFR_RNDN);
        return mpfr_get_d(r8924499, MPFR_RNDN);
}

static mpfr_t r8924500, r8924501, r8924502, r8924503, r8924504, r8924505, r8924506, r8924507, r8924508, r8924509, r8924510, r8924511, r8924512, r8924513, r8924514, r8924515, r8924516, r8924517;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8924500);
        mpfr_init_set_str(r8924501, "4", 10, MPFR_RNDN);
        mpfr_init(r8924502);
        mpfr_init(r8924503);
        mpfr_init_set_str(r8924504, "-43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924505, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8924506);
        mpfr_init(r8924507);
        mpfr_init(r8924508);
        mpfr_init(r8924509);
        mpfr_init_set_str(r8924510, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8924511);
        mpfr_init(r8924512);
        mpfr_init_set_str(r8924513, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8924514);
        mpfr_init(r8924515);
        mpfr_init(r8924516);
        mpfr_init(r8924517);
}

double f_fm(double x) {
        mpfr_set_d(r8924500, x, MPFR_RNDN);
        ;
        mpfr_pow(r8924502, r8924500, r8924501, MPFR_RNDN);
        mpfr_mul(r8924503, r8924500, r8924502, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8924506, r8924500, r8924505, MPFR_RNDN);
        mpfr_mul(r8924507, r8924506, r8924500, MPFR_RNDN);
        mpfr_add(r8924508, r8924504, r8924507, MPFR_RNDN);
        mpfr_mul(r8924509, r8924503, r8924508, MPFR_RNDN);
        ;
        mpfr_mul(r8924511, r8924500, r8924510, MPFR_RNDN);
        mpfr_mul(r8924512, r8924500, r8924500, MPFR_RNDN);
        ;
        mpfr_mul(r8924514, r8924513, r8924500, MPFR_RNDN);
        mpfr_mul(r8924515, r8924512, r8924514, MPFR_RNDN);
        mpfr_add(r8924516, r8924511, r8924515, MPFR_RNDN);
        mpfr_add(r8924517, r8924509, r8924516, MPFR_RNDN);
        return mpfr_get_d(r8924517, MPFR_RNDN);
}

static mpfr_t r8924518, r8924519, r8924520, r8924521, r8924522, r8924523, r8924524, r8924525, r8924526, r8924527, r8924528, r8924529, r8924530, r8924531, r8924532, r8924533, r8924534, r8924535;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8924518);
        mpfr_init_set_str(r8924519, "4", 10, MPFR_RNDN);
        mpfr_init(r8924520);
        mpfr_init(r8924521);
        mpfr_init_set_str(r8924522, "-43.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924523, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8924524);
        mpfr_init(r8924525);
        mpfr_init(r8924526);
        mpfr_init(r8924527);
        mpfr_init_set_str(r8924528, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8924529);
        mpfr_init(r8924530);
        mpfr_init_set_str(r8924531, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8924532);
        mpfr_init(r8924533);
        mpfr_init(r8924534);
        mpfr_init(r8924535);
}

double f_dm(double x) {
        mpfr_set_d(r8924518, x, MPFR_RNDN);
        ;
        mpfr_pow(r8924520, r8924518, r8924519, MPFR_RNDN);
        mpfr_mul(r8924521, r8924518, r8924520, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8924524, r8924518, r8924523, MPFR_RNDN);
        mpfr_mul(r8924525, r8924524, r8924518, MPFR_RNDN);
        mpfr_add(r8924526, r8924522, r8924525, MPFR_RNDN);
        mpfr_mul(r8924527, r8924521, r8924526, MPFR_RNDN);
        ;
        mpfr_mul(r8924529, r8924518, r8924528, MPFR_RNDN);
        mpfr_mul(r8924530, r8924518, r8924518, MPFR_RNDN);
        ;
        mpfr_mul(r8924532, r8924531, r8924518, MPFR_RNDN);
        mpfr_mul(r8924533, r8924530, r8924532, MPFR_RNDN);
        mpfr_add(r8924534, r8924529, r8924533, MPFR_RNDN);
        mpfr_add(r8924535, r8924527, r8924534, MPFR_RNDN);
        return mpfr_get_d(r8924535, MPFR_RNDN);
}

