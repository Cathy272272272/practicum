#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7514443 = 1.875;
        float r7514444 = x;
        float r7514445 = r7514443 * r7514444;
        float r7514446 = -8.75;
        float r7514447 = r7514444 * r7514444;
        float r7514448 = r7514447 * r7514444;
        float r7514449 = r7514446 * r7514448;
        float r7514450 = r7514445 + r7514449;
        float r7514451 = 7.875;
        float r7514452 = r7514448 * r7514444;
        float r7514453 = r7514452 * r7514444;
        float r7514454 = r7514451 * r7514453;
        float r7514455 = r7514450 + r7514454;
        return r7514455;
}

double f_id(double x) {
        double r7514456 = 1.875;
        double r7514457 = x;
        double r7514458 = r7514456 * r7514457;
        double r7514459 = -8.75;
        double r7514460 = r7514457 * r7514457;
        double r7514461 = r7514460 * r7514457;
        double r7514462 = r7514459 * r7514461;
        double r7514463 = r7514458 + r7514462;
        double r7514464 = 7.875;
        double r7514465 = r7514461 * r7514457;
        double r7514466 = r7514465 * r7514457;
        double r7514467 = r7514464 * r7514466;
        double r7514468 = r7514463 + r7514467;
        return r7514468;
}


double f_of(float x) {
        float r7514469 = 1.875;
        float r7514470 = x;
        float r7514471 = r7514469 * r7514470;
        float r7514472 = -8.75;
        float r7514473 = r7514470 * r7514470;
        float r7514474 = r7514473 * r7514470;
        float r7514475 = r7514472 * r7514474;
        float r7514476 = r7514471 + r7514475;
        float r7514477 = 7.875;
        float r7514478 = 4;
        float r7514479 = pow(r7514470, r7514478);
        float r7514480 = r7514477 * r7514479;
        float r7514481 = r7514480 * r7514470;
        float r7514482 = r7514476 + r7514481;
        return r7514482;
}

double f_od(double x) {
        double r7514483 = 1.875;
        double r7514484 = x;
        double r7514485 = r7514483 * r7514484;
        double r7514486 = -8.75;
        double r7514487 = r7514484 * r7514484;
        double r7514488 = r7514487 * r7514484;
        double r7514489 = r7514486 * r7514488;
        double r7514490 = r7514485 + r7514489;
        double r7514491 = 7.875;
        double r7514492 = 4;
        double r7514493 = pow(r7514484, r7514492);
        double r7514494 = r7514491 * r7514493;
        double r7514495 = r7514494 * r7514484;
        double r7514496 = r7514490 + r7514495;
        return r7514496;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514497, r7514498, r7514499, r7514500, r7514501, r7514502, r7514503, r7514504, r7514505, r7514506, r7514507, r7514508, r7514509;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514497, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7514498);
        mpfr_init(r7514499);
        mpfr_init_set_str(r7514500, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7514501);
        mpfr_init(r7514502);
        mpfr_init(r7514503);
        mpfr_init(r7514504);
        mpfr_init_set_str(r7514505, "7.875", 10, MPFR_RNDN);
        mpfr_init(r7514506);
        mpfr_init(r7514507);
        mpfr_init(r7514508);
        mpfr_init(r7514509);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7514498, x, MPFR_RNDN);
        mpfr_mul(r7514499, r7514497, r7514498, MPFR_RNDN);
        ;
        mpfr_mul(r7514501, r7514498, r7514498, MPFR_RNDN);
        mpfr_mul(r7514502, r7514501, r7514498, MPFR_RNDN);
        mpfr_mul(r7514503, r7514500, r7514502, MPFR_RNDN);
        mpfr_add(r7514504, r7514499, r7514503, MPFR_RNDN);
        ;
        mpfr_mul(r7514506, r7514502, r7514498, MPFR_RNDN);
        mpfr_mul(r7514507, r7514506, r7514498, MPFR_RNDN);
        mpfr_mul(r7514508, r7514505, r7514507, MPFR_RNDN);
        mpfr_add(r7514509, r7514504, r7514508, MPFR_RNDN);
        return mpfr_get_d(r7514509, MPFR_RNDN);
}

static mpfr_t r7514510, r7514511, r7514512, r7514513, r7514514, r7514515, r7514516, r7514517, r7514518, r7514519, r7514520, r7514521, r7514522, r7514523;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514510, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7514511);
        mpfr_init(r7514512);
        mpfr_init_set_str(r7514513, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7514514);
        mpfr_init(r7514515);
        mpfr_init(r7514516);
        mpfr_init(r7514517);
        mpfr_init_set_str(r7514518, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514519, "4", 10, MPFR_RNDN);
        mpfr_init(r7514520);
        mpfr_init(r7514521);
        mpfr_init(r7514522);
        mpfr_init(r7514523);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7514511, x, MPFR_RNDN);
        mpfr_mul(r7514512, r7514510, r7514511, MPFR_RNDN);
        ;
        mpfr_mul(r7514514, r7514511, r7514511, MPFR_RNDN);
        mpfr_mul(r7514515, r7514514, r7514511, MPFR_RNDN);
        mpfr_mul(r7514516, r7514513, r7514515, MPFR_RNDN);
        mpfr_add(r7514517, r7514512, r7514516, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7514520, r7514511, r7514519, MPFR_RNDN);
        mpfr_mul(r7514521, r7514518, r7514520, MPFR_RNDN);
        mpfr_mul(r7514522, r7514521, r7514511, MPFR_RNDN);
        mpfr_add(r7514523, r7514517, r7514522, MPFR_RNDN);
        return mpfr_get_d(r7514523, MPFR_RNDN);
}

static mpfr_t r7514524, r7514525, r7514526, r7514527, r7514528, r7514529, r7514530, r7514531, r7514532, r7514533, r7514534, r7514535, r7514536, r7514537;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7514524, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7514525);
        mpfr_init(r7514526);
        mpfr_init_set_str(r7514527, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7514528);
        mpfr_init(r7514529);
        mpfr_init(r7514530);
        mpfr_init(r7514531);
        mpfr_init_set_str(r7514532, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514533, "4", 10, MPFR_RNDN);
        mpfr_init(r7514534);
        mpfr_init(r7514535);
        mpfr_init(r7514536);
        mpfr_init(r7514537);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7514525, x, MPFR_RNDN);
        mpfr_mul(r7514526, r7514524, r7514525, MPFR_RNDN);
        ;
        mpfr_mul(r7514528, r7514525, r7514525, MPFR_RNDN);
        mpfr_mul(r7514529, r7514528, r7514525, MPFR_RNDN);
        mpfr_mul(r7514530, r7514527, r7514529, MPFR_RNDN);
        mpfr_add(r7514531, r7514526, r7514530, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7514534, r7514525, r7514533, MPFR_RNDN);
        mpfr_mul(r7514535, r7514532, r7514534, MPFR_RNDN);
        mpfr_mul(r7514536, r7514535, r7514525, MPFR_RNDN);
        mpfr_add(r7514537, r7514531, r7514536, MPFR_RNDN);
        return mpfr_get_d(r7514537, MPFR_RNDN);
}

