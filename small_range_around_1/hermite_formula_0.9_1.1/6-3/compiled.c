#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r46349327 = -12.0;
        float r46349328 = x;
        float r46349329 = r46349327 * r46349328;
        float r46349330 = 8.0;
        float r46349331 = r46349328 * r46349328;
        float r46349332 = r46349331 * r46349328;
        float r46349333 = r46349330 * r46349332;
        float r46349334 = r46349329 + r46349333;
        return r46349334;
}

double f_id(double x) {
        double r46349335 = -12.0;
        double r46349336 = x;
        double r46349337 = r46349335 * r46349336;
        double r46349338 = 8.0;
        double r46349339 = r46349336 * r46349336;
        double r46349340 = r46349339 * r46349336;
        double r46349341 = r46349338 * r46349340;
        double r46349342 = r46349337 + r46349341;
        return r46349342;
}


double f_of(float x) {
        float r46349343 = -12.0;
        float r46349344 = x;
        float r46349345 = r46349343 * r46349344;
        float r46349346 = 8.0;
        float r46349347 = 3;
        float r46349348 = log(r46349344);
        float r46349349 = r46349347 * r46349348;
        float r46349350 = cbrt(r46349349);
        float r46349351 = cbrt(r46349350);
        float r46349352 = r46349351 * r46349351;
        float r46349353 = r46349350 * r46349352;
        float r46349354 = r46349353 * r46349351;
        float r46349355 = r46349354 * r46349350;
        float r46349356 = exp(r46349355);
        float r46349357 = r46349346 * r46349356;
        float r46349358 = r46349345 + r46349357;
        return r46349358;
}

double f_od(double x) {
        double r46349359 = -12.0;
        double r46349360 = x;
        double r46349361 = r46349359 * r46349360;
        double r46349362 = 8.0;
        double r46349363 = 3;
        double r46349364 = log(r46349360);
        double r46349365 = r46349363 * r46349364;
        double r46349366 = cbrt(r46349365);
        double r46349367 = cbrt(r46349366);
        double r46349368 = r46349367 * r46349367;
        double r46349369 = r46349366 * r46349368;
        double r46349370 = r46349369 * r46349367;
        double r46349371 = r46349370 * r46349366;
        double r46349372 = exp(r46349371);
        double r46349373 = r46349362 * r46349372;
        double r46349374 = r46349361 + r46349373;
        return r46349374;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46349375, r46349376, r46349377, r46349378, r46349379, r46349380, r46349381, r46349382;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349375, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r46349376);
        mpfr_init(r46349377);
        mpfr_init_set_str(r46349378, "8.0", 10, MPFR_RNDN);
        mpfr_init(r46349379);
        mpfr_init(r46349380);
        mpfr_init(r46349381);
        mpfr_init(r46349382);
}

double f_im(double x) {
        ;
        mpfr_set_d(r46349376, x, MPFR_RNDN);
        mpfr_mul(r46349377, r46349375, r46349376, MPFR_RNDN);
        ;
        mpfr_mul(r46349379, r46349376, r46349376, MPFR_RNDN);
        mpfr_mul(r46349380, r46349379, r46349376, MPFR_RNDN);
        mpfr_mul(r46349381, r46349378, r46349380, MPFR_RNDN);
        mpfr_add(r46349382, r46349377, r46349381, MPFR_RNDN);
        return mpfr_get_d(r46349382, MPFR_RNDN);
}

static mpfr_t r46349383, r46349384, r46349385, r46349386, r46349387, r46349388, r46349389, r46349390, r46349391, r46349392, r46349393, r46349394, r46349395, r46349396, r46349397, r46349398;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349383, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r46349384);
        mpfr_init(r46349385);
        mpfr_init_set_str(r46349386, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349387, "3", 10, MPFR_RNDN);
        mpfr_init(r46349388);
        mpfr_init(r46349389);
        mpfr_init(r46349390);
        mpfr_init(r46349391);
        mpfr_init(r46349392);
        mpfr_init(r46349393);
        mpfr_init(r46349394);
        mpfr_init(r46349395);
        mpfr_init(r46349396);
        mpfr_init(r46349397);
        mpfr_init(r46349398);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r46349384, x, MPFR_RNDN);
        mpfr_mul(r46349385, r46349383, r46349384, MPFR_RNDN);
        ;
        ;
        mpfr_log(r46349388, r46349384, MPFR_RNDN);
        mpfr_mul(r46349389, r46349387, r46349388, MPFR_RNDN);
        mpfr_cbrt(r46349390, r46349389, MPFR_RNDN);
        mpfr_cbrt(r46349391, r46349390, MPFR_RNDN);
        mpfr_mul(r46349392, r46349391, r46349391, MPFR_RNDN);
        mpfr_mul(r46349393, r46349390, r46349392, MPFR_RNDN);
        mpfr_mul(r46349394, r46349393, r46349391, MPFR_RNDN);
        mpfr_mul(r46349395, r46349394, r46349390, MPFR_RNDN);
        mpfr_exp(r46349396, r46349395, MPFR_RNDN);
        mpfr_mul(r46349397, r46349386, r46349396, MPFR_RNDN);
        mpfr_add(r46349398, r46349385, r46349397, MPFR_RNDN);
        return mpfr_get_d(r46349398, MPFR_RNDN);
}

static mpfr_t r46349399, r46349400, r46349401, r46349402, r46349403, r46349404, r46349405, r46349406, r46349407, r46349408, r46349409, r46349410, r46349411, r46349412, r46349413, r46349414;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349399, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r46349400);
        mpfr_init(r46349401);
        mpfr_init_set_str(r46349402, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349403, "3", 10, MPFR_RNDN);
        mpfr_init(r46349404);
        mpfr_init(r46349405);
        mpfr_init(r46349406);
        mpfr_init(r46349407);
        mpfr_init(r46349408);
        mpfr_init(r46349409);
        mpfr_init(r46349410);
        mpfr_init(r46349411);
        mpfr_init(r46349412);
        mpfr_init(r46349413);
        mpfr_init(r46349414);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r46349400, x, MPFR_RNDN);
        mpfr_mul(r46349401, r46349399, r46349400, MPFR_RNDN);
        ;
        ;
        mpfr_log(r46349404, r46349400, MPFR_RNDN);
        mpfr_mul(r46349405, r46349403, r46349404, MPFR_RNDN);
        mpfr_cbrt(r46349406, r46349405, MPFR_RNDN);
        mpfr_cbrt(r46349407, r46349406, MPFR_RNDN);
        mpfr_mul(r46349408, r46349407, r46349407, MPFR_RNDN);
        mpfr_mul(r46349409, r46349406, r46349408, MPFR_RNDN);
        mpfr_mul(r46349410, r46349409, r46349407, MPFR_RNDN);
        mpfr_mul(r46349411, r46349410, r46349406, MPFR_RNDN);
        mpfr_exp(r46349412, r46349411, MPFR_RNDN);
        mpfr_mul(r46349413, r46349402, r46349412, MPFR_RNDN);
        mpfr_add(r46349414, r46349401, r46349413, MPFR_RNDN);
        return mpfr_get_d(r46349414, MPFR_RNDN);
}

