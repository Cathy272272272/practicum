#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r4112509 = -2.0;
        float r4112510 = 4.0;
        float r4112511 = x;
        float r4112512 = r4112511 * r4112511;
        float r4112513 = r4112510 * r4112512;
        float r4112514 = r4112509 + r4112513;
        return r4112514;
}

double f_id(double x) {
        double r4112515 = -2.0;
        double r4112516 = 4.0;
        double r4112517 = x;
        double r4112518 = r4112517 * r4112517;
        double r4112519 = r4112516 * r4112518;
        double r4112520 = r4112515 + r4112519;
        return r4112520;
}


double f_of(float x) {
        float r4112521 = -2.0;
        float r4112522 = 4.0;
        float r4112523 = x;
        float r4112524 = r4112523 * r4112523;
        float r4112525 = r4112522 * r4112524;
        float r4112526 = r4112521 + r4112525;
        return r4112526;
}

double f_od(double x) {
        double r4112527 = -2.0;
        double r4112528 = 4.0;
        double r4112529 = x;
        double r4112530 = r4112529 * r4112529;
        double r4112531 = r4112528 * r4112530;
        double r4112532 = r4112527 + r4112531;
        return r4112532;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4112533, r4112534, r4112535, r4112536, r4112537, r4112538;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112533, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112534, "4.0", 10, MPFR_RNDN);
        mpfr_init(r4112535);
        mpfr_init(r4112536);
        mpfr_init(r4112537);
        mpfr_init(r4112538);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4112535, x, MPFR_RNDN);
        mpfr_mul(r4112536, r4112535, r4112535, MPFR_RNDN);
        mpfr_mul(r4112537, r4112534, r4112536, MPFR_RNDN);
        mpfr_add(r4112538, r4112533, r4112537, MPFR_RNDN);
        return mpfr_get_d(r4112538, MPFR_RNDN);
}

static mpfr_t r4112539, r4112540, r4112541, r4112542, r4112543, r4112544;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112539, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112540, "4.0", 10, MPFR_RNDN);
        mpfr_init(r4112541);
        mpfr_init(r4112542);
        mpfr_init(r4112543);
        mpfr_init(r4112544);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4112541, x, MPFR_RNDN);
        mpfr_mul(r4112542, r4112541, r4112541, MPFR_RNDN);
        mpfr_mul(r4112543, r4112540, r4112542, MPFR_RNDN);
        mpfr_add(r4112544, r4112539, r4112543, MPFR_RNDN);
        return mpfr_get_d(r4112544, MPFR_RNDN);
}

static mpfr_t r4112545, r4112546, r4112547, r4112548, r4112549, r4112550;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112545, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112546, "4.0", 10, MPFR_RNDN);
        mpfr_init(r4112547);
        mpfr_init(r4112548);
        mpfr_init(r4112549);
        mpfr_init(r4112550);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4112547, x, MPFR_RNDN);
        mpfr_mul(r4112548, r4112547, r4112547, MPFR_RNDN);
        mpfr_mul(r4112549, r4112546, r4112548, MPFR_RNDN);
        mpfr_add(r4112550, r4112545, r4112549, MPFR_RNDN);
        return mpfr_get_d(r4112550, MPFR_RNDN);
}

