#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r4112453 = -12.0;
        float r4112454 = x;
        float r4112455 = r4112453 * r4112454;
        float r4112456 = 8.0;
        float r4112457 = r4112454 * r4112454;
        float r4112458 = r4112457 * r4112454;
        float r4112459 = r4112456 * r4112458;
        float r4112460 = r4112455 + r4112459;
        return r4112460;
}

double f_id(double x) {
        double r4112461 = -12.0;
        double r4112462 = x;
        double r4112463 = r4112461 * r4112462;
        double r4112464 = 8.0;
        double r4112465 = r4112462 * r4112462;
        double r4112466 = r4112465 * r4112462;
        double r4112467 = r4112464 * r4112466;
        double r4112468 = r4112463 + r4112467;
        return r4112468;
}


double f_of(float x) {
        float r4112469 = -12.0;
        float r4112470 = x;
        float r4112471 = r4112469 * r4112470;
        float r4112472 = 8.0;
        float r4112473 = r4112470 * r4112470;
        float r4112474 = r4112473 * r4112470;
        float r4112475 = r4112472 * r4112474;
        float r4112476 = r4112471 + r4112475;
        return r4112476;
}

double f_od(double x) {
        double r4112477 = -12.0;
        double r4112478 = x;
        double r4112479 = r4112477 * r4112478;
        double r4112480 = 8.0;
        double r4112481 = r4112478 * r4112478;
        double r4112482 = r4112481 * r4112478;
        double r4112483 = r4112480 * r4112482;
        double r4112484 = r4112479 + r4112483;
        return r4112484;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4112485, r4112486, r4112487, r4112488, r4112489, r4112490, r4112491, r4112492;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112485, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r4112486);
        mpfr_init(r4112487);
        mpfr_init_set_str(r4112488, "8.0", 10, MPFR_RNDN);
        mpfr_init(r4112489);
        mpfr_init(r4112490);
        mpfr_init(r4112491);
        mpfr_init(r4112492);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4112486, x, MPFR_RNDN);
        mpfr_mul(r4112487, r4112485, r4112486, MPFR_RNDN);
        ;
        mpfr_mul(r4112489, r4112486, r4112486, MPFR_RNDN);
        mpfr_mul(r4112490, r4112489, r4112486, MPFR_RNDN);
        mpfr_mul(r4112491, r4112488, r4112490, MPFR_RNDN);
        mpfr_add(r4112492, r4112487, r4112491, MPFR_RNDN);
        return mpfr_get_d(r4112492, MPFR_RNDN);
}

static mpfr_t r4112493, r4112494, r4112495, r4112496, r4112497, r4112498, r4112499, r4112500;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112493, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r4112494);
        mpfr_init(r4112495);
        mpfr_init_set_str(r4112496, "8.0", 10, MPFR_RNDN);
        mpfr_init(r4112497);
        mpfr_init(r4112498);
        mpfr_init(r4112499);
        mpfr_init(r4112500);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4112494, x, MPFR_RNDN);
        mpfr_mul(r4112495, r4112493, r4112494, MPFR_RNDN);
        ;
        mpfr_mul(r4112497, r4112494, r4112494, MPFR_RNDN);
        mpfr_mul(r4112498, r4112497, r4112494, MPFR_RNDN);
        mpfr_mul(r4112499, r4112496, r4112498, MPFR_RNDN);
        mpfr_add(r4112500, r4112495, r4112499, MPFR_RNDN);
        return mpfr_get_d(r4112500, MPFR_RNDN);
}

static mpfr_t r4112501, r4112502, r4112503, r4112504, r4112505, r4112506, r4112507, r4112508;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4112501, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r4112502);
        mpfr_init(r4112503);
        mpfr_init_set_str(r4112504, "8.0", 10, MPFR_RNDN);
        mpfr_init(r4112505);
        mpfr_init(r4112506);
        mpfr_init(r4112507);
        mpfr_init(r4112508);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4112502, x, MPFR_RNDN);
        mpfr_mul(r4112503, r4112501, r4112502, MPFR_RNDN);
        ;
        mpfr_mul(r4112505, r4112502, r4112502, MPFR_RNDN);
        mpfr_mul(r4112506, r4112505, r4112502, MPFR_RNDN);
        mpfr_mul(r4112507, r4112504, r4112506, MPFR_RNDN);
        mpfr_add(r4112508, r4112503, r4112507, MPFR_RNDN);
        return mpfr_get_d(r4112508, MPFR_RNDN);
}

