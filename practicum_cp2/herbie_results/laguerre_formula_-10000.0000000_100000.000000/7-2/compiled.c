#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10921504 = 1.0;
        float r10921505 = -2.0;
        float r10921506 = x;
        float r10921507 = r10921505 * r10921506;
        float r10921508 = r10921504 + r10921507;
        float r10921509 = 0.5;
        float r10921510 = r10921506 * r10921506;
        float r10921511 = r10921509 * r10921510;
        float r10921512 = r10921508 + r10921511;
        return r10921512;
}

double f_id(double x) {
        double r10921513 = 1.0;
        double r10921514 = -2.0;
        double r10921515 = x;
        double r10921516 = r10921514 * r10921515;
        double r10921517 = r10921513 + r10921516;
        double r10921518 = 0.5;
        double r10921519 = r10921515 * r10921515;
        double r10921520 = r10921518 * r10921519;
        double r10921521 = r10921517 + r10921520;
        return r10921521;
}


double f_of(float x) {
        float r10921522 = 1.0;
        float r10921523 = -2.0;
        float r10921524 = x;
        float r10921525 = r10921523 * r10921524;
        float r10921526 = r10921522 + r10921525;
        float r10921527 = 0.5;
        float r10921528 = r10921524 * r10921524;
        float r10921529 = r10921527 * r10921528;
        float r10921530 = r10921526 + r10921529;
        return r10921530;
}

double f_od(double x) {
        double r10921531 = 1.0;
        double r10921532 = -2.0;
        double r10921533 = x;
        double r10921534 = r10921532 * r10921533;
        double r10921535 = r10921531 + r10921534;
        double r10921536 = 0.5;
        double r10921537 = r10921533 * r10921533;
        double r10921538 = r10921536 * r10921537;
        double r10921539 = r10921535 + r10921538;
        return r10921539;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10921540, r10921541, r10921542, r10921543, r10921544, r10921545, r10921546, r10921547, r10921548;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921540, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921541, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10921542);
        mpfr_init(r10921543);
        mpfr_init(r10921544);
        mpfr_init_set_str(r10921545, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10921546);
        mpfr_init(r10921547);
        mpfr_init(r10921548);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10921542, x, MPFR_RNDN);
        mpfr_mul(r10921543, r10921541, r10921542, MPFR_RNDN);
        mpfr_add(r10921544, r10921540, r10921543, MPFR_RNDN);
        ;
        mpfr_mul(r10921546, r10921542, r10921542, MPFR_RNDN);
        mpfr_mul(r10921547, r10921545, r10921546, MPFR_RNDN);
        mpfr_add(r10921548, r10921544, r10921547, MPFR_RNDN);
        return mpfr_get_d(r10921548, MPFR_RNDN);
}

static mpfr_t r10921549, r10921550, r10921551, r10921552, r10921553, r10921554, r10921555, r10921556, r10921557;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921549, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921550, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10921551);
        mpfr_init(r10921552);
        mpfr_init(r10921553);
        mpfr_init_set_str(r10921554, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10921555);
        mpfr_init(r10921556);
        mpfr_init(r10921557);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10921551, x, MPFR_RNDN);
        mpfr_mul(r10921552, r10921550, r10921551, MPFR_RNDN);
        mpfr_add(r10921553, r10921549, r10921552, MPFR_RNDN);
        ;
        mpfr_mul(r10921555, r10921551, r10921551, MPFR_RNDN);
        mpfr_mul(r10921556, r10921554, r10921555, MPFR_RNDN);
        mpfr_add(r10921557, r10921553, r10921556, MPFR_RNDN);
        return mpfr_get_d(r10921557, MPFR_RNDN);
}

static mpfr_t r10921558, r10921559, r10921560, r10921561, r10921562, r10921563, r10921564, r10921565, r10921566;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10921558, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921559, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10921560);
        mpfr_init(r10921561);
        mpfr_init(r10921562);
        mpfr_init_set_str(r10921563, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10921564);
        mpfr_init(r10921565);
        mpfr_init(r10921566);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10921560, x, MPFR_RNDN);
        mpfr_mul(r10921561, r10921559, r10921560, MPFR_RNDN);
        mpfr_add(r10921562, r10921558, r10921561, MPFR_RNDN);
        ;
        mpfr_mul(r10921564, r10921560, r10921560, MPFR_RNDN);
        mpfr_mul(r10921565, r10921563, r10921564, MPFR_RNDN);
        mpfr_add(r10921566, r10921562, r10921565, MPFR_RNDN);
        return mpfr_get_d(r10921566, MPFR_RNDN);
}

