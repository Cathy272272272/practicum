#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r5316522 = -12.0;
        float r5316523 = x;
        float r5316524 = r5316522 * r5316523;
        float r5316525 = 8.0;
        float r5316526 = r5316523 * r5316523;
        float r5316527 = r5316526 * r5316523;
        float r5316528 = r5316525 * r5316527;
        float r5316529 = r5316524 + r5316528;
        return r5316529;
}

double f_id(double x) {
        double r5316530 = -12.0;
        double r5316531 = x;
        double r5316532 = r5316530 * r5316531;
        double r5316533 = 8.0;
        double r5316534 = r5316531 * r5316531;
        double r5316535 = r5316534 * r5316531;
        double r5316536 = r5316533 * r5316535;
        double r5316537 = r5316532 + r5316536;
        return r5316537;
}


double f_of(float x) {
        float r5316538 = -12.0;
        float r5316539 = x;
        float r5316540 = r5316538 * r5316539;
        float r5316541 = 8.0;
        float r5316542 = 3;
        float r5316543 = pow(r5316539, r5316542);
        float r5316544 = r5316541 * r5316543;
        float r5316545 = r5316540 + r5316544;
        return r5316545;
}

double f_od(double x) {
        double r5316546 = -12.0;
        double r5316547 = x;
        double r5316548 = r5316546 * r5316547;
        double r5316549 = 8.0;
        double r5316550 = 3;
        double r5316551 = pow(r5316547, r5316550);
        double r5316552 = r5316549 * r5316551;
        double r5316553 = r5316548 + r5316552;
        return r5316553;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316554, r5316555, r5316556, r5316557, r5316558, r5316559, r5316560, r5316561;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5316554, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r5316555);
        mpfr_init(r5316556);
        mpfr_init_set_str(r5316557, "8.0", 10, MPFR_RNDN);
        mpfr_init(r5316558);
        mpfr_init(r5316559);
        mpfr_init(r5316560);
        mpfr_init(r5316561);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5316555, x, MPFR_RNDN);
        mpfr_mul(r5316556, r5316554, r5316555, MPFR_RNDN);
        ;
        mpfr_mul(r5316558, r5316555, r5316555, MPFR_RNDN);
        mpfr_mul(r5316559, r5316558, r5316555, MPFR_RNDN);
        mpfr_mul(r5316560, r5316557, r5316559, MPFR_RNDN);
        mpfr_add(r5316561, r5316556, r5316560, MPFR_RNDN);
        return mpfr_get_d(r5316561, MPFR_RNDN);
}

static mpfr_t r5316562, r5316563, r5316564, r5316565, r5316566, r5316567, r5316568, r5316569;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5316562, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r5316563);
        mpfr_init(r5316564);
        mpfr_init_set_str(r5316565, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316566, "3", 10, MPFR_RNDN);
        mpfr_init(r5316567);
        mpfr_init(r5316568);
        mpfr_init(r5316569);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5316563, x, MPFR_RNDN);
        mpfr_mul(r5316564, r5316562, r5316563, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5316567, r5316563, r5316566, MPFR_RNDN);
        mpfr_mul(r5316568, r5316565, r5316567, MPFR_RNDN);
        mpfr_add(r5316569, r5316564, r5316568, MPFR_RNDN);
        return mpfr_get_d(r5316569, MPFR_RNDN);
}

static mpfr_t r5316570, r5316571, r5316572, r5316573, r5316574, r5316575, r5316576, r5316577;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5316570, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r5316571);
        mpfr_init(r5316572);
        mpfr_init_set_str(r5316573, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316574, "3", 10, MPFR_RNDN);
        mpfr_init(r5316575);
        mpfr_init(r5316576);
        mpfr_init(r5316577);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5316571, x, MPFR_RNDN);
        mpfr_mul(r5316572, r5316570, r5316571, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r5316575, r5316571, r5316574, MPFR_RNDN);
        mpfr_mul(r5316576, r5316573, r5316575, MPFR_RNDN);
        mpfr_add(r5316577, r5316572, r5316576, MPFR_RNDN);
        return mpfr_get_d(r5316577, MPFR_RNDN);
}

