#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r26948325 = -2.1875;
        float r26948326 = x;
        float r26948327 = r26948325 * r26948326;
        float r26948328 = 19.6875;
        float r26948329 = r26948326 * r26948326;
        float r26948330 = r26948329 * r26948326;
        float r26948331 = r26948328 * r26948330;
        float r26948332 = r26948327 + r26948331;
        float r26948333 = -43.3125;
        float r26948334 = r26948330 * r26948326;
        float r26948335 = r26948334 * r26948326;
        float r26948336 = r26948333 * r26948335;
        float r26948337 = r26948332 + r26948336;
        float r26948338 = 26.8125;
        float r26948339 = r26948335 * r26948326;
        float r26948340 = r26948339 * r26948326;
        float r26948341 = r26948338 * r26948340;
        float r26948342 = r26948337 + r26948341;
        return r26948342;
}

double f_id(double x) {
        double r26948343 = -2.1875;
        double r26948344 = x;
        double r26948345 = r26948343 * r26948344;
        double r26948346 = 19.6875;
        double r26948347 = r26948344 * r26948344;
        double r26948348 = r26948347 * r26948344;
        double r26948349 = r26948346 * r26948348;
        double r26948350 = r26948345 + r26948349;
        double r26948351 = -43.3125;
        double r26948352 = r26948348 * r26948344;
        double r26948353 = r26948352 * r26948344;
        double r26948354 = r26948351 * r26948353;
        double r26948355 = r26948350 + r26948354;
        double r26948356 = 26.8125;
        double r26948357 = r26948353 * r26948344;
        double r26948358 = r26948357 * r26948344;
        double r26948359 = r26948356 * r26948358;
        double r26948360 = r26948355 + r26948359;
        return r26948360;
}


double f_of(float x) {
        float r26948361 = x;
        float r26948362 = exp(r26948361);
        float r26948363 = r26948361 * r26948361;
        float r26948364 = r26948363 * r26948363;
        float r26948365 = 26.8125;
        float r26948366 = r26948365 * r26948361;
        float r26948367 = r26948361 * r26948366;
        float r26948368 = -43.3125;
        float r26948369 = r26948367 + r26948368;
        float r26948370 = r26948364 * r26948369;
        float r26948371 = pow(r26948362, r26948370);
        float r26948372 = -2.1875;
        float r26948373 = exp(r26948372);
        float r26948374 = 19.6875;
        float r26948375 = exp(r26948374);
        float r26948376 = sqrt(r26948375);
        float r26948377 = pow(r26948376, r26948363);
        float r26948378 = r26948377 * r26948377;
        float r26948379 = r26948373 * r26948378;
        float r26948380 = r26948361 + r26948361;
        float r26948381 = r26948361 + r26948380;
        float r26948382 = pow(r26948379, r26948381);
        float r26948383 = cbrt(r26948382);
        float r26948384 = r26948371 * r26948383;
        float r26948385 = log(r26948384);
        return r26948385;
}

double f_od(double x) {
        double r26948386 = x;
        double r26948387 = exp(r26948386);
        double r26948388 = r26948386 * r26948386;
        double r26948389 = r26948388 * r26948388;
        double r26948390 = 26.8125;
        double r26948391 = r26948390 * r26948386;
        double r26948392 = r26948386 * r26948391;
        double r26948393 = -43.3125;
        double r26948394 = r26948392 + r26948393;
        double r26948395 = r26948389 * r26948394;
        double r26948396 = pow(r26948387, r26948395);
        double r26948397 = -2.1875;
        double r26948398 = exp(r26948397);
        double r26948399 = 19.6875;
        double r26948400 = exp(r26948399);
        double r26948401 = sqrt(r26948400);
        double r26948402 = pow(r26948401, r26948388);
        double r26948403 = r26948402 * r26948402;
        double r26948404 = r26948398 * r26948403;
        double r26948405 = r26948386 + r26948386;
        double r26948406 = r26948386 + r26948405;
        double r26948407 = pow(r26948404, r26948406);
        double r26948408 = cbrt(r26948407);
        double r26948409 = r26948396 * r26948408;
        double r26948410 = log(r26948409);
        return r26948410;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948411, r26948412, r26948413, r26948414, r26948415, r26948416, r26948417, r26948418, r26948419, r26948420, r26948421, r26948422, r26948423, r26948424, r26948425, r26948426, r26948427, r26948428;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948411, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r26948412);
        mpfr_init(r26948413);
        mpfr_init_set_str(r26948414, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r26948415);
        mpfr_init(r26948416);
        mpfr_init(r26948417);
        mpfr_init(r26948418);
        mpfr_init_set_str(r26948419, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r26948420);
        mpfr_init(r26948421);
        mpfr_init(r26948422);
        mpfr_init(r26948423);
        mpfr_init_set_str(r26948424, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r26948425);
        mpfr_init(r26948426);
        mpfr_init(r26948427);
        mpfr_init(r26948428);
}

double f_im(double x) {
        ;
        mpfr_set_d(r26948412, x, MPFR_RNDN);
        mpfr_mul(r26948413, r26948411, r26948412, MPFR_RNDN);
        ;
        mpfr_mul(r26948415, r26948412, r26948412, MPFR_RNDN);
        mpfr_mul(r26948416, r26948415, r26948412, MPFR_RNDN);
        mpfr_mul(r26948417, r26948414, r26948416, MPFR_RNDN);
        mpfr_add(r26948418, r26948413, r26948417, MPFR_RNDN);
        ;
        mpfr_mul(r26948420, r26948416, r26948412, MPFR_RNDN);
        mpfr_mul(r26948421, r26948420, r26948412, MPFR_RNDN);
        mpfr_mul(r26948422, r26948419, r26948421, MPFR_RNDN);
        mpfr_add(r26948423, r26948418, r26948422, MPFR_RNDN);
        ;
        mpfr_mul(r26948425, r26948421, r26948412, MPFR_RNDN);
        mpfr_mul(r26948426, r26948425, r26948412, MPFR_RNDN);
        mpfr_mul(r26948427, r26948424, r26948426, MPFR_RNDN);
        mpfr_add(r26948428, r26948423, r26948427, MPFR_RNDN);
        return mpfr_get_d(r26948428, MPFR_RNDN);
}

static mpfr_t r26948429, r26948430, r26948431, r26948432, r26948433, r26948434, r26948435, r26948436, r26948437, r26948438, r26948439, r26948440, r26948441, r26948442, r26948443, r26948444, r26948445, r26948446, r26948447, r26948448, r26948449, r26948450, r26948451, r26948452, r26948453;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948429);
        mpfr_init(r26948430);
        mpfr_init(r26948431);
        mpfr_init(r26948432);
        mpfr_init_set_str(r26948433, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r26948434);
        mpfr_init(r26948435);
        mpfr_init_set_str(r26948436, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r26948437);
        mpfr_init(r26948438);
        mpfr_init(r26948439);
        mpfr_init_set_str(r26948440, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r26948441);
        mpfr_init_set_str(r26948442, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r26948443);
        mpfr_init(r26948444);
        mpfr_init(r26948445);
        mpfr_init(r26948446);
        mpfr_init(r26948447);
        mpfr_init(r26948448);
        mpfr_init(r26948449);
        mpfr_init(r26948450);
        mpfr_init(r26948451);
        mpfr_init(r26948452);
        mpfr_init(r26948453);
}

double f_fm(double x) {
        mpfr_set_d(r26948429, x, MPFR_RNDN);
        mpfr_exp(r26948430, r26948429, MPFR_RNDN);
        mpfr_mul(r26948431, r26948429, r26948429, MPFR_RNDN);
        mpfr_mul(r26948432, r26948431, r26948431, MPFR_RNDN);
        ;
        mpfr_mul(r26948434, r26948433, r26948429, MPFR_RNDN);
        mpfr_mul(r26948435, r26948429, r26948434, MPFR_RNDN);
        ;
        mpfr_add(r26948437, r26948435, r26948436, MPFR_RNDN);
        mpfr_mul(r26948438, r26948432, r26948437, MPFR_RNDN);
        mpfr_pow(r26948439, r26948430, r26948438, MPFR_RNDN);
        ;
        mpfr_exp(r26948441, r26948440, MPFR_RNDN);
        ;
        mpfr_exp(r26948443, r26948442, MPFR_RNDN);
        mpfr_sqrt(r26948444, r26948443, MPFR_RNDN);
        mpfr_pow(r26948445, r26948444, r26948431, MPFR_RNDN);
        mpfr_mul(r26948446, r26948445, r26948445, MPFR_RNDN);
        mpfr_mul(r26948447, r26948441, r26948446, MPFR_RNDN);
        mpfr_add(r26948448, r26948429, r26948429, MPFR_RNDN);
        mpfr_add(r26948449, r26948429, r26948448, MPFR_RNDN);
        mpfr_pow(r26948450, r26948447, r26948449, MPFR_RNDN);
        mpfr_cbrt(r26948451, r26948450, MPFR_RNDN);
        mpfr_mul(r26948452, r26948439, r26948451, MPFR_RNDN);
        mpfr_log(r26948453, r26948452, MPFR_RNDN);
        return mpfr_get_d(r26948453, MPFR_RNDN);
}

static mpfr_t r26948454, r26948455, r26948456, r26948457, r26948458, r26948459, r26948460, r26948461, r26948462, r26948463, r26948464, r26948465, r26948466, r26948467, r26948468, r26948469, r26948470, r26948471, r26948472, r26948473, r26948474, r26948475, r26948476, r26948477, r26948478;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26948454);
        mpfr_init(r26948455);
        mpfr_init(r26948456);
        mpfr_init(r26948457);
        mpfr_init_set_str(r26948458, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r26948459);
        mpfr_init(r26948460);
        mpfr_init_set_str(r26948461, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r26948462);
        mpfr_init(r26948463);
        mpfr_init(r26948464);
        mpfr_init_set_str(r26948465, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r26948466);
        mpfr_init_set_str(r26948467, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r26948468);
        mpfr_init(r26948469);
        mpfr_init(r26948470);
        mpfr_init(r26948471);
        mpfr_init(r26948472);
        mpfr_init(r26948473);
        mpfr_init(r26948474);
        mpfr_init(r26948475);
        mpfr_init(r26948476);
        mpfr_init(r26948477);
        mpfr_init(r26948478);
}

double f_dm(double x) {
        mpfr_set_d(r26948454, x, MPFR_RNDN);
        mpfr_exp(r26948455, r26948454, MPFR_RNDN);
        mpfr_mul(r26948456, r26948454, r26948454, MPFR_RNDN);
        mpfr_mul(r26948457, r26948456, r26948456, MPFR_RNDN);
        ;
        mpfr_mul(r26948459, r26948458, r26948454, MPFR_RNDN);
        mpfr_mul(r26948460, r26948454, r26948459, MPFR_RNDN);
        ;
        mpfr_add(r26948462, r26948460, r26948461, MPFR_RNDN);
        mpfr_mul(r26948463, r26948457, r26948462, MPFR_RNDN);
        mpfr_pow(r26948464, r26948455, r26948463, MPFR_RNDN);
        ;
        mpfr_exp(r26948466, r26948465, MPFR_RNDN);
        ;
        mpfr_exp(r26948468, r26948467, MPFR_RNDN);
        mpfr_sqrt(r26948469, r26948468, MPFR_RNDN);
        mpfr_pow(r26948470, r26948469, r26948456, MPFR_RNDN);
        mpfr_mul(r26948471, r26948470, r26948470, MPFR_RNDN);
        mpfr_mul(r26948472, r26948466, r26948471, MPFR_RNDN);
        mpfr_add(r26948473, r26948454, r26948454, MPFR_RNDN);
        mpfr_add(r26948474, r26948454, r26948473, MPFR_RNDN);
        mpfr_pow(r26948475, r26948472, r26948474, MPFR_RNDN);
        mpfr_cbrt(r26948476, r26948475, MPFR_RNDN);
        mpfr_mul(r26948477, r26948464, r26948476, MPFR_RNDN);
        mpfr_log(r26948478, r26948477, MPFR_RNDN);
        return mpfr_get_d(r26948478, MPFR_RNDN);
}

