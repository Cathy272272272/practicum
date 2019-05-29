#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7639436 = -12.0;
        float r7639437 = x;
        float r7639438 = r7639436 * r7639437;
        float r7639439 = 8.0;
        float r7639440 = r7639437 * r7639437;
        float r7639441 = r7639440 * r7639437;
        float r7639442 = r7639439 * r7639441;
        float r7639443 = r7639438 + r7639442;
        return r7639443;
}

double f_id(double x) {
        double r7639444 = -12.0;
        double r7639445 = x;
        double r7639446 = r7639444 * r7639445;
        double r7639447 = 8.0;
        double r7639448 = r7639445 * r7639445;
        double r7639449 = r7639448 * r7639445;
        double r7639450 = r7639447 * r7639449;
        double r7639451 = r7639446 + r7639450;
        return r7639451;
}


double f_of(float x) {
        float r7639452 = -12.0;
        float r7639453 = x;
        float r7639454 = r7639452 * r7639453;
        float r7639455 = 8.0;
        float r7639456 = 3;
        float r7639457 = pow(r7639453, r7639456);
        float r7639458 = r7639455 * r7639457;
        float r7639459 = r7639454 + r7639458;
        return r7639459;
}

double f_od(double x) {
        double r7639460 = -12.0;
        double r7639461 = x;
        double r7639462 = r7639460 * r7639461;
        double r7639463 = 8.0;
        double r7639464 = 3;
        double r7639465 = pow(r7639461, r7639464);
        double r7639466 = r7639463 * r7639465;
        double r7639467 = r7639462 + r7639466;
        return r7639467;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7639468, r7639469, r7639470, r7639471, r7639472, r7639473, r7639474, r7639475;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639468, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7639469);
        mpfr_init(r7639470);
        mpfr_init_set_str(r7639471, "8.0", 10, MPFR_RNDN);
        mpfr_init(r7639472);
        mpfr_init(r7639473);
        mpfr_init(r7639474);
        mpfr_init(r7639475);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7639469, x, MPFR_RNDN);
        mpfr_mul(r7639470, r7639468, r7639469, MPFR_RNDN);
        ;
        mpfr_mul(r7639472, r7639469, r7639469, MPFR_RNDN);
        mpfr_mul(r7639473, r7639472, r7639469, MPFR_RNDN);
        mpfr_mul(r7639474, r7639471, r7639473, MPFR_RNDN);
        mpfr_add(r7639475, r7639470, r7639474, MPFR_RNDN);
        return mpfr_get_d(r7639475, MPFR_RNDN);
}

static mpfr_t r7639476, r7639477, r7639478, r7639479, r7639480, r7639481, r7639482, r7639483;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639476, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7639477);
        mpfr_init(r7639478);
        mpfr_init_set_str(r7639479, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639480, "3", 10, MPFR_RNDN);
        mpfr_init(r7639481);
        mpfr_init(r7639482);
        mpfr_init(r7639483);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7639477, x, MPFR_RNDN);
        mpfr_mul(r7639478, r7639476, r7639477, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639481, r7639477, r7639480, MPFR_RNDN);
        mpfr_mul(r7639482, r7639479, r7639481, MPFR_RNDN);
        mpfr_add(r7639483, r7639478, r7639482, MPFR_RNDN);
        return mpfr_get_d(r7639483, MPFR_RNDN);
}

static mpfr_t r7639484, r7639485, r7639486, r7639487, r7639488, r7639489, r7639490, r7639491;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639484, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7639485);
        mpfr_init(r7639486);
        mpfr_init_set_str(r7639487, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639488, "3", 10, MPFR_RNDN);
        mpfr_init(r7639489);
        mpfr_init(r7639490);
        mpfr_init(r7639491);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7639485, x, MPFR_RNDN);
        mpfr_mul(r7639486, r7639484, r7639485, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639489, r7639485, r7639488, MPFR_RNDN);
        mpfr_mul(r7639490, r7639487, r7639489, MPFR_RNDN);
        mpfr_add(r7639491, r7639486, r7639490, MPFR_RNDN);
        return mpfr_get_d(r7639491, MPFR_RNDN);
}

