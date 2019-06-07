#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r4436464 = -0.5;
        float r4436465 = 1.5;
        float r4436466 = x;
        float r4436467 = r4436466 * r4436466;
        float r4436468 = r4436465 * r4436467;
        float r4436469 = r4436464 + r4436468;
        return r4436469;
}

double f_id(double x) {
        double r4436470 = -0.5;
        double r4436471 = 1.5;
        double r4436472 = x;
        double r4436473 = r4436472 * r4436472;
        double r4436474 = r4436471 * r4436473;
        double r4436475 = r4436470 + r4436474;
        return r4436475;
}


double f_of(float x) {
        float r4436476 = -0.5;
        float r4436477 = 1.5;
        float r4436478 = x;
        float r4436479 = r4436478 * r4436478;
        float r4436480 = r4436477 * r4436479;
        float r4436481 = r4436476 + r4436480;
        return r4436481;
}

double f_od(double x) {
        double r4436482 = -0.5;
        double r4436483 = 1.5;
        double r4436484 = x;
        double r4436485 = r4436484 * r4436484;
        double r4436486 = r4436483 * r4436485;
        double r4436487 = r4436482 + r4436486;
        return r4436487;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4436488, r4436489, r4436490, r4436491, r4436492, r4436493;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436488, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436489, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4436490);
        mpfr_init(r4436491);
        mpfr_init(r4436492);
        mpfr_init(r4436493);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4436490, x, MPFR_RNDN);
        mpfr_mul(r4436491, r4436490, r4436490, MPFR_RNDN);
        mpfr_mul(r4436492, r4436489, r4436491, MPFR_RNDN);
        mpfr_add(r4436493, r4436488, r4436492, MPFR_RNDN);
        return mpfr_get_d(r4436493, MPFR_RNDN);
}

static mpfr_t r4436494, r4436495, r4436496, r4436497, r4436498, r4436499;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436494, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436495, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4436496);
        mpfr_init(r4436497);
        mpfr_init(r4436498);
        mpfr_init(r4436499);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4436496, x, MPFR_RNDN);
        mpfr_mul(r4436497, r4436496, r4436496, MPFR_RNDN);
        mpfr_mul(r4436498, r4436495, r4436497, MPFR_RNDN);
        mpfr_add(r4436499, r4436494, r4436498, MPFR_RNDN);
        return mpfr_get_d(r4436499, MPFR_RNDN);
}

static mpfr_t r4436500, r4436501, r4436502, r4436503, r4436504, r4436505;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436500, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436501, "1.5", 10, MPFR_RNDN);
        mpfr_init(r4436502);
        mpfr_init(r4436503);
        mpfr_init(r4436504);
        mpfr_init(r4436505);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4436502, x, MPFR_RNDN);
        mpfr_mul(r4436503, r4436502, r4436502, MPFR_RNDN);
        mpfr_mul(r4436504, r4436501, r4436503, MPFR_RNDN);
        mpfr_add(r4436505, r4436500, r4436504, MPFR_RNDN);
        return mpfr_get_d(r4436505, MPFR_RNDN);
}

