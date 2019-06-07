#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r3749434 = 1.0;
        float r3749435 = -2.0;
        float r3749436 = x;
        float r3749437 = r3749435 * r3749436;
        float r3749438 = r3749434 + r3749437;
        float r3749439 = 0.5;
        float r3749440 = r3749436 * r3749436;
        float r3749441 = r3749439 * r3749440;
        float r3749442 = r3749438 + r3749441;
        return r3749442;
}

double f_id(double x) {
        double r3749443 = 1.0;
        double r3749444 = -2.0;
        double r3749445 = x;
        double r3749446 = r3749444 * r3749445;
        double r3749447 = r3749443 + r3749446;
        double r3749448 = 0.5;
        double r3749449 = r3749445 * r3749445;
        double r3749450 = r3749448 * r3749449;
        double r3749451 = r3749447 + r3749450;
        return r3749451;
}


double f_of(float x) {
        float r3749452 = 1.0;
        float r3749453 = -2.0;
        float r3749454 = x;
        float r3749455 = r3749453 * r3749454;
        float r3749456 = r3749452 + r3749455;
        float r3749457 = 0.5;
        float r3749458 = r3749454 * r3749454;
        float r3749459 = r3749457 * r3749458;
        float r3749460 = r3749456 + r3749459;
        return r3749460;
}

double f_od(double x) {
        double r3749461 = 1.0;
        double r3749462 = -2.0;
        double r3749463 = x;
        double r3749464 = r3749462 * r3749463;
        double r3749465 = r3749461 + r3749464;
        double r3749466 = 0.5;
        double r3749467 = r3749463 * r3749463;
        double r3749468 = r3749466 * r3749467;
        double r3749469 = r3749465 + r3749468;
        return r3749469;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3749470, r3749471, r3749472, r3749473, r3749474, r3749475, r3749476, r3749477, r3749478;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749470, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749471, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r3749472);
        mpfr_init(r3749473);
        mpfr_init(r3749474);
        mpfr_init_set_str(r3749475, "0.5", 10, MPFR_RNDN);
        mpfr_init(r3749476);
        mpfr_init(r3749477);
        mpfr_init(r3749478);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3749472, x, MPFR_RNDN);
        mpfr_mul(r3749473, r3749471, r3749472, MPFR_RNDN);
        mpfr_add(r3749474, r3749470, r3749473, MPFR_RNDN);
        ;
        mpfr_mul(r3749476, r3749472, r3749472, MPFR_RNDN);
        mpfr_mul(r3749477, r3749475, r3749476, MPFR_RNDN);
        mpfr_add(r3749478, r3749474, r3749477, MPFR_RNDN);
        return mpfr_get_d(r3749478, MPFR_RNDN);
}

static mpfr_t r3749479, r3749480, r3749481, r3749482, r3749483, r3749484, r3749485, r3749486, r3749487;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749479, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749480, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r3749481);
        mpfr_init(r3749482);
        mpfr_init(r3749483);
        mpfr_init_set_str(r3749484, "0.5", 10, MPFR_RNDN);
        mpfr_init(r3749485);
        mpfr_init(r3749486);
        mpfr_init(r3749487);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3749481, x, MPFR_RNDN);
        mpfr_mul(r3749482, r3749480, r3749481, MPFR_RNDN);
        mpfr_add(r3749483, r3749479, r3749482, MPFR_RNDN);
        ;
        mpfr_mul(r3749485, r3749481, r3749481, MPFR_RNDN);
        mpfr_mul(r3749486, r3749484, r3749485, MPFR_RNDN);
        mpfr_add(r3749487, r3749483, r3749486, MPFR_RNDN);
        return mpfr_get_d(r3749487, MPFR_RNDN);
}

static mpfr_t r3749488, r3749489, r3749490, r3749491, r3749492, r3749493, r3749494, r3749495, r3749496;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749488, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749489, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r3749490);
        mpfr_init(r3749491);
        mpfr_init(r3749492);
        mpfr_init_set_str(r3749493, "0.5", 10, MPFR_RNDN);
        mpfr_init(r3749494);
        mpfr_init(r3749495);
        mpfr_init(r3749496);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3749490, x, MPFR_RNDN);
        mpfr_mul(r3749491, r3749489, r3749490, MPFR_RNDN);
        mpfr_add(r3749492, r3749488, r3749491, MPFR_RNDN);
        ;
        mpfr_mul(r3749494, r3749490, r3749490, MPFR_RNDN);
        mpfr_mul(r3749495, r3749493, r3749494, MPFR_RNDN);
        mpfr_add(r3749496, r3749492, r3749495, MPFR_RNDN);
        return mpfr_get_d(r3749496, MPFR_RNDN);
}

