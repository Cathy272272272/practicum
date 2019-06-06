#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r83943488 = 1.0;
        float r83943489 = -2.0;
        float r83943490 = x;
        float r83943491 = r83943489 * r83943490;
        float r83943492 = r83943488 + r83943491;
        float r83943493 = 0.5;
        float r83943494 = r83943490 * r83943490;
        float r83943495 = r83943493 * r83943494;
        float r83943496 = r83943492 + r83943495;
        return r83943496;
}

double f_id(double x) {
        double r83943497 = 1.0;
        double r83943498 = -2.0;
        double r83943499 = x;
        double r83943500 = r83943498 * r83943499;
        double r83943501 = r83943497 + r83943500;
        double r83943502 = 0.5;
        double r83943503 = r83943499 * r83943499;
        double r83943504 = r83943502 * r83943503;
        double r83943505 = r83943501 + r83943504;
        return r83943505;
}


double f_of(float x) {
        float r83943506 = 1.0;
        float r83943507 = -2.0;
        float r83943508 = x;
        float r83943509 = r83943507 * r83943508;
        float r83943510 = r83943506 + r83943509;
        float r83943511 = 0.5;
        float r83943512 = r83943508 * r83943508;
        float r83943513 = r83943511 * r83943512;
        float r83943514 = r83943510 + r83943513;
        return r83943514;
}

double f_od(double x) {
        double r83943515 = 1.0;
        double r83943516 = -2.0;
        double r83943517 = x;
        double r83943518 = r83943516 * r83943517;
        double r83943519 = r83943515 + r83943518;
        double r83943520 = 0.5;
        double r83943521 = r83943517 * r83943517;
        double r83943522 = r83943520 * r83943521;
        double r83943523 = r83943519 + r83943522;
        return r83943523;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83943524, r83943525, r83943526, r83943527, r83943528, r83943529, r83943530, r83943531, r83943532;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943524, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943525, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r83943526);
        mpfr_init(r83943527);
        mpfr_init(r83943528);
        mpfr_init_set_str(r83943529, "0.5", 10, MPFR_RNDN);
        mpfr_init(r83943530);
        mpfr_init(r83943531);
        mpfr_init(r83943532);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83943526, x, MPFR_RNDN);
        mpfr_mul(r83943527, r83943525, r83943526, MPFR_RNDN);
        mpfr_add(r83943528, r83943524, r83943527, MPFR_RNDN);
        ;
        mpfr_mul(r83943530, r83943526, r83943526, MPFR_RNDN);
        mpfr_mul(r83943531, r83943529, r83943530, MPFR_RNDN);
        mpfr_add(r83943532, r83943528, r83943531, MPFR_RNDN);
        return mpfr_get_d(r83943532, MPFR_RNDN);
}

static mpfr_t r83943533, r83943534, r83943535, r83943536, r83943537, r83943538, r83943539, r83943540, r83943541;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943533, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943534, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r83943535);
        mpfr_init(r83943536);
        mpfr_init(r83943537);
        mpfr_init_set_str(r83943538, "0.5", 10, MPFR_RNDN);
        mpfr_init(r83943539);
        mpfr_init(r83943540);
        mpfr_init(r83943541);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r83943535, x, MPFR_RNDN);
        mpfr_mul(r83943536, r83943534, r83943535, MPFR_RNDN);
        mpfr_add(r83943537, r83943533, r83943536, MPFR_RNDN);
        ;
        mpfr_mul(r83943539, r83943535, r83943535, MPFR_RNDN);
        mpfr_mul(r83943540, r83943538, r83943539, MPFR_RNDN);
        mpfr_add(r83943541, r83943537, r83943540, MPFR_RNDN);
        return mpfr_get_d(r83943541, MPFR_RNDN);
}

static mpfr_t r83943542, r83943543, r83943544, r83943545, r83943546, r83943547, r83943548, r83943549, r83943550;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83943542, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83943543, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r83943544);
        mpfr_init(r83943545);
        mpfr_init(r83943546);
        mpfr_init_set_str(r83943547, "0.5", 10, MPFR_RNDN);
        mpfr_init(r83943548);
        mpfr_init(r83943549);
        mpfr_init(r83943550);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r83943544, x, MPFR_RNDN);
        mpfr_mul(r83943545, r83943543, r83943544, MPFR_RNDN);
        mpfr_add(r83943546, r83943542, r83943545, MPFR_RNDN);
        ;
        mpfr_mul(r83943548, r83943544, r83943544, MPFR_RNDN);
        mpfr_mul(r83943549, r83943547, r83943548, MPFR_RNDN);
        mpfr_add(r83943550, r83943546, r83943549, MPFR_RNDN);
        return mpfr_get_d(r83943550, MPFR_RNDN);
}

