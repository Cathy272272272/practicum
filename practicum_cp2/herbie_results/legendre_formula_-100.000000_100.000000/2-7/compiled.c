#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6179371 = -2.1875;
        float r6179372 = x;
        float r6179373 = r6179371 * r6179372;
        float r6179374 = 19.6875;
        float r6179375 = r6179372 * r6179372;
        float r6179376 = r6179375 * r6179372;
        float r6179377 = r6179374 * r6179376;
        float r6179378 = r6179373 + r6179377;
        float r6179379 = -43.3125;
        float r6179380 = r6179376 * r6179372;
        float r6179381 = r6179380 * r6179372;
        float r6179382 = r6179379 * r6179381;
        float r6179383 = r6179378 + r6179382;
        float r6179384 = 26.8125;
        float r6179385 = r6179381 * r6179372;
        float r6179386 = r6179385 * r6179372;
        float r6179387 = r6179384 * r6179386;
        float r6179388 = r6179383 + r6179387;
        return r6179388;
}

double f_id(double x) {
        double r6179389 = -2.1875;
        double r6179390 = x;
        double r6179391 = r6179389 * r6179390;
        double r6179392 = 19.6875;
        double r6179393 = r6179390 * r6179390;
        double r6179394 = r6179393 * r6179390;
        double r6179395 = r6179392 * r6179394;
        double r6179396 = r6179391 + r6179395;
        double r6179397 = -43.3125;
        double r6179398 = r6179394 * r6179390;
        double r6179399 = r6179398 * r6179390;
        double r6179400 = r6179397 * r6179399;
        double r6179401 = r6179396 + r6179400;
        double r6179402 = 26.8125;
        double r6179403 = r6179399 * r6179390;
        double r6179404 = r6179403 * r6179390;
        double r6179405 = r6179402 * r6179404;
        double r6179406 = r6179401 + r6179405;
        return r6179406;
}


double f_of(float x) {
        float r6179407 = -2.1875;
        float r6179408 = x;
        float r6179409 = r6179407 * r6179408;
        float r6179410 = 19.6875;
        float r6179411 = r6179408 * r6179408;
        float r6179412 = r6179411 * r6179408;
        float r6179413 = r6179410 * r6179412;
        float r6179414 = r6179409 + r6179413;
        float r6179415 = -43.3125;
        float r6179416 = r6179412 * r6179408;
        float r6179417 = r6179416 * r6179408;
        float r6179418 = r6179415 * r6179417;
        float r6179419 = r6179414 + r6179418;
        float r6179420 = 26.8125;
        float r6179421 = r6179417 * r6179408;
        float r6179422 = r6179421 * r6179408;
        float r6179423 = r6179420 * r6179422;
        float r6179424 = r6179419 + r6179423;
        return r6179424;
}

double f_od(double x) {
        double r6179425 = -2.1875;
        double r6179426 = x;
        double r6179427 = r6179425 * r6179426;
        double r6179428 = 19.6875;
        double r6179429 = r6179426 * r6179426;
        double r6179430 = r6179429 * r6179426;
        double r6179431 = r6179428 * r6179430;
        double r6179432 = r6179427 + r6179431;
        double r6179433 = -43.3125;
        double r6179434 = r6179430 * r6179426;
        double r6179435 = r6179434 * r6179426;
        double r6179436 = r6179433 * r6179435;
        double r6179437 = r6179432 + r6179436;
        double r6179438 = 26.8125;
        double r6179439 = r6179435 * r6179426;
        double r6179440 = r6179439 * r6179426;
        double r6179441 = r6179438 * r6179440;
        double r6179442 = r6179437 + r6179441;
        return r6179442;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179443, r6179444, r6179445, r6179446, r6179447, r6179448, r6179449, r6179450, r6179451, r6179452, r6179453, r6179454, r6179455, r6179456, r6179457, r6179458, r6179459, r6179460;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179443, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6179444);
        mpfr_init(r6179445);
        mpfr_init_set_str(r6179446, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6179447);
        mpfr_init(r6179448);
        mpfr_init(r6179449);
        mpfr_init(r6179450);
        mpfr_init_set_str(r6179451, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6179452);
        mpfr_init(r6179453);
        mpfr_init(r6179454);
        mpfr_init(r6179455);
        mpfr_init_set_str(r6179456, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6179457);
        mpfr_init(r6179458);
        mpfr_init(r6179459);
        mpfr_init(r6179460);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6179444, x, MPFR_RNDN);
        mpfr_mul(r6179445, r6179443, r6179444, MPFR_RNDN);
        ;
        mpfr_mul(r6179447, r6179444, r6179444, MPFR_RNDN);
        mpfr_mul(r6179448, r6179447, r6179444, MPFR_RNDN);
        mpfr_mul(r6179449, r6179446, r6179448, MPFR_RNDN);
        mpfr_add(r6179450, r6179445, r6179449, MPFR_RNDN);
        ;
        mpfr_mul(r6179452, r6179448, r6179444, MPFR_RNDN);
        mpfr_mul(r6179453, r6179452, r6179444, MPFR_RNDN);
        mpfr_mul(r6179454, r6179451, r6179453, MPFR_RNDN);
        mpfr_add(r6179455, r6179450, r6179454, MPFR_RNDN);
        ;
        mpfr_mul(r6179457, r6179453, r6179444, MPFR_RNDN);
        mpfr_mul(r6179458, r6179457, r6179444, MPFR_RNDN);
        mpfr_mul(r6179459, r6179456, r6179458, MPFR_RNDN);
        mpfr_add(r6179460, r6179455, r6179459, MPFR_RNDN);
        return mpfr_get_d(r6179460, MPFR_RNDN);
}

static mpfr_t r6179461, r6179462, r6179463, r6179464, r6179465, r6179466, r6179467, r6179468, r6179469, r6179470, r6179471, r6179472, r6179473, r6179474, r6179475, r6179476, r6179477, r6179478;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179461, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6179462);
        mpfr_init(r6179463);
        mpfr_init_set_str(r6179464, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6179465);
        mpfr_init(r6179466);
        mpfr_init(r6179467);
        mpfr_init(r6179468);
        mpfr_init_set_str(r6179469, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6179470);
        mpfr_init(r6179471);
        mpfr_init(r6179472);
        mpfr_init(r6179473);
        mpfr_init_set_str(r6179474, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6179475);
        mpfr_init(r6179476);
        mpfr_init(r6179477);
        mpfr_init(r6179478);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6179462, x, MPFR_RNDN);
        mpfr_mul(r6179463, r6179461, r6179462, MPFR_RNDN);
        ;
        mpfr_mul(r6179465, r6179462, r6179462, MPFR_RNDN);
        mpfr_mul(r6179466, r6179465, r6179462, MPFR_RNDN);
        mpfr_mul(r6179467, r6179464, r6179466, MPFR_RNDN);
        mpfr_add(r6179468, r6179463, r6179467, MPFR_RNDN);
        ;
        mpfr_mul(r6179470, r6179466, r6179462, MPFR_RNDN);
        mpfr_mul(r6179471, r6179470, r6179462, MPFR_RNDN);
        mpfr_mul(r6179472, r6179469, r6179471, MPFR_RNDN);
        mpfr_add(r6179473, r6179468, r6179472, MPFR_RNDN);
        ;
        mpfr_mul(r6179475, r6179471, r6179462, MPFR_RNDN);
        mpfr_mul(r6179476, r6179475, r6179462, MPFR_RNDN);
        mpfr_mul(r6179477, r6179474, r6179476, MPFR_RNDN);
        mpfr_add(r6179478, r6179473, r6179477, MPFR_RNDN);
        return mpfr_get_d(r6179478, MPFR_RNDN);
}

static mpfr_t r6179479, r6179480, r6179481, r6179482, r6179483, r6179484, r6179485, r6179486, r6179487, r6179488, r6179489, r6179490, r6179491, r6179492, r6179493, r6179494, r6179495, r6179496;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179479, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6179480);
        mpfr_init(r6179481);
        mpfr_init_set_str(r6179482, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6179483);
        mpfr_init(r6179484);
        mpfr_init(r6179485);
        mpfr_init(r6179486);
        mpfr_init_set_str(r6179487, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6179488);
        mpfr_init(r6179489);
        mpfr_init(r6179490);
        mpfr_init(r6179491);
        mpfr_init_set_str(r6179492, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6179493);
        mpfr_init(r6179494);
        mpfr_init(r6179495);
        mpfr_init(r6179496);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6179480, x, MPFR_RNDN);
        mpfr_mul(r6179481, r6179479, r6179480, MPFR_RNDN);
        ;
        mpfr_mul(r6179483, r6179480, r6179480, MPFR_RNDN);
        mpfr_mul(r6179484, r6179483, r6179480, MPFR_RNDN);
        mpfr_mul(r6179485, r6179482, r6179484, MPFR_RNDN);
        mpfr_add(r6179486, r6179481, r6179485, MPFR_RNDN);
        ;
        mpfr_mul(r6179488, r6179484, r6179480, MPFR_RNDN);
        mpfr_mul(r6179489, r6179488, r6179480, MPFR_RNDN);
        mpfr_mul(r6179490, r6179487, r6179489, MPFR_RNDN);
        mpfr_add(r6179491, r6179486, r6179490, MPFR_RNDN);
        ;
        mpfr_mul(r6179493, r6179489, r6179480, MPFR_RNDN);
        mpfr_mul(r6179494, r6179493, r6179480, MPFR_RNDN);
        mpfr_mul(r6179495, r6179492, r6179494, MPFR_RNDN);
        mpfr_add(r6179496, r6179491, r6179495, MPFR_RNDN);
        return mpfr_get_d(r6179496, MPFR_RNDN);
}

