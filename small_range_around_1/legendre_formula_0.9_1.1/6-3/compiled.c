#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r31481350 = -1.5;
        float r31481351 = x;
        float r31481352 = r31481350 * r31481351;
        float r31481353 = 2.5;
        float r31481354 = r31481351 * r31481351;
        float r31481355 = r31481354 * r31481351;
        float r31481356 = r31481353 * r31481355;
        float r31481357 = r31481352 + r31481356;
        return r31481357;
}

double f_id(double x) {
        double r31481358 = -1.5;
        double r31481359 = x;
        double r31481360 = r31481358 * r31481359;
        double r31481361 = 2.5;
        double r31481362 = r31481359 * r31481359;
        double r31481363 = r31481362 * r31481359;
        double r31481364 = r31481361 * r31481363;
        double r31481365 = r31481360 + r31481364;
        return r31481365;
}


double f_of(float x) {
        float r31481366 = -1.5;
        float r31481367 = exp(r31481366);
        float r31481368 = x;
        float r31481369 = pow(r31481367, r31481368);
        float r31481370 = 2.5;
        float r31481371 = exp(r31481370);
        float r31481372 = r31481368 * r31481368;
        float r31481373 = pow(r31481371, r31481372);
        float r31481374 = pow(r31481373, r31481368);
        float r31481375 = r31481369 * r31481374;
        float r31481376 = log(r31481375);
        return r31481376;
}

double f_od(double x) {
        double r31481377 = -1.5;
        double r31481378 = exp(r31481377);
        double r31481379 = x;
        double r31481380 = pow(r31481378, r31481379);
        double r31481381 = 2.5;
        double r31481382 = exp(r31481381);
        double r31481383 = r31481379 * r31481379;
        double r31481384 = pow(r31481382, r31481383);
        double r31481385 = pow(r31481384, r31481379);
        double r31481386 = r31481380 * r31481385;
        double r31481387 = log(r31481386);
        return r31481387;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31481388, r31481389, r31481390, r31481391, r31481392, r31481393, r31481394, r31481395;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481388, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r31481389);
        mpfr_init(r31481390);
        mpfr_init_set_str(r31481391, "2.5", 10, MPFR_RNDN);
        mpfr_init(r31481392);
        mpfr_init(r31481393);
        mpfr_init(r31481394);
        mpfr_init(r31481395);
}

double f_im(double x) {
        ;
        mpfr_set_d(r31481389, x, MPFR_RNDN);
        mpfr_mul(r31481390, r31481388, r31481389, MPFR_RNDN);
        ;
        mpfr_mul(r31481392, r31481389, r31481389, MPFR_RNDN);
        mpfr_mul(r31481393, r31481392, r31481389, MPFR_RNDN);
        mpfr_mul(r31481394, r31481391, r31481393, MPFR_RNDN);
        mpfr_add(r31481395, r31481390, r31481394, MPFR_RNDN);
        return mpfr_get_d(r31481395, MPFR_RNDN);
}

static mpfr_t r31481396, r31481397, r31481398, r31481399, r31481400, r31481401, r31481402, r31481403, r31481404, r31481405, r31481406;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481396, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r31481397);
        mpfr_init(r31481398);
        mpfr_init(r31481399);
        mpfr_init_set_str(r31481400, "2.5", 10, MPFR_RNDN);
        mpfr_init(r31481401);
        mpfr_init(r31481402);
        mpfr_init(r31481403);
        mpfr_init(r31481404);
        mpfr_init(r31481405);
        mpfr_init(r31481406);
}

double f_fm(double x) {
        ;
        mpfr_exp(r31481397, r31481396, MPFR_RNDN);
        mpfr_set_d(r31481398, x, MPFR_RNDN);
        mpfr_pow(r31481399, r31481397, r31481398, MPFR_RNDN);
        ;
        mpfr_exp(r31481401, r31481400, MPFR_RNDN);
        mpfr_mul(r31481402, r31481398, r31481398, MPFR_RNDN);
        mpfr_pow(r31481403, r31481401, r31481402, MPFR_RNDN);
        mpfr_pow(r31481404, r31481403, r31481398, MPFR_RNDN);
        mpfr_mul(r31481405, r31481399, r31481404, MPFR_RNDN);
        mpfr_log(r31481406, r31481405, MPFR_RNDN);
        return mpfr_get_d(r31481406, MPFR_RNDN);
}

static mpfr_t r31481407, r31481408, r31481409, r31481410, r31481411, r31481412, r31481413, r31481414, r31481415, r31481416, r31481417;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481407, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r31481408);
        mpfr_init(r31481409);
        mpfr_init(r31481410);
        mpfr_init_set_str(r31481411, "2.5", 10, MPFR_RNDN);
        mpfr_init(r31481412);
        mpfr_init(r31481413);
        mpfr_init(r31481414);
        mpfr_init(r31481415);
        mpfr_init(r31481416);
        mpfr_init(r31481417);
}

double f_dm(double x) {
        ;
        mpfr_exp(r31481408, r31481407, MPFR_RNDN);
        mpfr_set_d(r31481409, x, MPFR_RNDN);
        mpfr_pow(r31481410, r31481408, r31481409, MPFR_RNDN);
        ;
        mpfr_exp(r31481412, r31481411, MPFR_RNDN);
        mpfr_mul(r31481413, r31481409, r31481409, MPFR_RNDN);
        mpfr_pow(r31481414, r31481412, r31481413, MPFR_RNDN);
        mpfr_pow(r31481415, r31481414, r31481409, MPFR_RNDN);
        mpfr_mul(r31481416, r31481410, r31481415, MPFR_RNDN);
        mpfr_log(r31481417, r31481416, MPFR_RNDN);
        return mpfr_get_d(r31481417, MPFR_RNDN);
}

