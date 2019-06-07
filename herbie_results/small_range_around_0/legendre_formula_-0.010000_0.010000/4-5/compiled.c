#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r4485343 = 1.875;
        float r4485344 = x;
        float r4485345 = r4485343 * r4485344;
        float r4485346 = -8.75;
        float r4485347 = r4485344 * r4485344;
        float r4485348 = r4485347 * r4485344;
        float r4485349 = r4485346 * r4485348;
        float r4485350 = r4485345 + r4485349;
        float r4485351 = 7.875;
        float r4485352 = r4485348 * r4485344;
        float r4485353 = r4485352 * r4485344;
        float r4485354 = r4485351 * r4485353;
        float r4485355 = r4485350 + r4485354;
        return r4485355;
}

double f_id(double x) {
        double r4485356 = 1.875;
        double r4485357 = x;
        double r4485358 = r4485356 * r4485357;
        double r4485359 = -8.75;
        double r4485360 = r4485357 * r4485357;
        double r4485361 = r4485360 * r4485357;
        double r4485362 = r4485359 * r4485361;
        double r4485363 = r4485358 + r4485362;
        double r4485364 = 7.875;
        double r4485365 = r4485361 * r4485357;
        double r4485366 = r4485365 * r4485357;
        double r4485367 = r4485364 * r4485366;
        double r4485368 = r4485363 + r4485367;
        return r4485368;
}


double f_of(float x) {
        float r4485369 = 1.875;
        float r4485370 = x;
        float r4485371 = r4485369 * r4485370;
        float r4485372 = -8.75;
        float r4485373 = r4485370 * r4485370;
        float r4485374 = r4485373 * r4485370;
        float r4485375 = r4485372 * r4485374;
        float r4485376 = r4485371 + r4485375;
        float r4485377 = 7.875;
        float r4485378 = exp(r4485377);
        float r4485379 = 3;
        float r4485380 = pow(r4485370, r4485379);
        float r4485381 = r4485373 * r4485380;
        float r4485382 = pow(r4485378, r4485381);
        float r4485383 = log(r4485382);
        float r4485384 = r4485376 + r4485383;
        return r4485384;
}

double f_od(double x) {
        double r4485385 = 1.875;
        double r4485386 = x;
        double r4485387 = r4485385 * r4485386;
        double r4485388 = -8.75;
        double r4485389 = r4485386 * r4485386;
        double r4485390 = r4485389 * r4485386;
        double r4485391 = r4485388 * r4485390;
        double r4485392 = r4485387 + r4485391;
        double r4485393 = 7.875;
        double r4485394 = exp(r4485393);
        double r4485395 = 3;
        double r4485396 = pow(r4485386, r4485395);
        double r4485397 = r4485389 * r4485396;
        double r4485398 = pow(r4485394, r4485397);
        double r4485399 = log(r4485398);
        double r4485400 = r4485392 + r4485399;
        return r4485400;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485401, r4485402, r4485403, r4485404, r4485405, r4485406, r4485407, r4485408, r4485409, r4485410, r4485411, r4485412, r4485413;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485401, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4485402);
        mpfr_init(r4485403);
        mpfr_init_set_str(r4485404, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4485405);
        mpfr_init(r4485406);
        mpfr_init(r4485407);
        mpfr_init(r4485408);
        mpfr_init_set_str(r4485409, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4485410);
        mpfr_init(r4485411);
        mpfr_init(r4485412);
        mpfr_init(r4485413);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4485402, x, MPFR_RNDN);
        mpfr_mul(r4485403, r4485401, r4485402, MPFR_RNDN);
        ;
        mpfr_mul(r4485405, r4485402, r4485402, MPFR_RNDN);
        mpfr_mul(r4485406, r4485405, r4485402, MPFR_RNDN);
        mpfr_mul(r4485407, r4485404, r4485406, MPFR_RNDN);
        mpfr_add(r4485408, r4485403, r4485407, MPFR_RNDN);
        ;
        mpfr_mul(r4485410, r4485406, r4485402, MPFR_RNDN);
        mpfr_mul(r4485411, r4485410, r4485402, MPFR_RNDN);
        mpfr_mul(r4485412, r4485409, r4485411, MPFR_RNDN);
        mpfr_add(r4485413, r4485408, r4485412, MPFR_RNDN);
        return mpfr_get_d(r4485413, MPFR_RNDN);
}

static mpfr_t r4485414, r4485415, r4485416, r4485417, r4485418, r4485419, r4485420, r4485421, r4485422, r4485423, r4485424, r4485425, r4485426, r4485427, r4485428, r4485429;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485414, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4485415);
        mpfr_init(r4485416);
        mpfr_init_set_str(r4485417, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4485418);
        mpfr_init(r4485419);
        mpfr_init(r4485420);
        mpfr_init(r4485421);
        mpfr_init_set_str(r4485422, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4485423);
        mpfr_init_set_str(r4485424, "3", 10, MPFR_RNDN);
        mpfr_init(r4485425);
        mpfr_init(r4485426);
        mpfr_init(r4485427);
        mpfr_init(r4485428);
        mpfr_init(r4485429);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4485415, x, MPFR_RNDN);
        mpfr_mul(r4485416, r4485414, r4485415, MPFR_RNDN);
        ;
        mpfr_mul(r4485418, r4485415, r4485415, MPFR_RNDN);
        mpfr_mul(r4485419, r4485418, r4485415, MPFR_RNDN);
        mpfr_mul(r4485420, r4485417, r4485419, MPFR_RNDN);
        mpfr_add(r4485421, r4485416, r4485420, MPFR_RNDN);
        ;
        mpfr_exp(r4485423, r4485422, MPFR_RNDN);
        ;
        mpfr_pow(r4485425, r4485415, r4485424, MPFR_RNDN);
        mpfr_mul(r4485426, r4485418, r4485425, MPFR_RNDN);
        mpfr_pow(r4485427, r4485423, r4485426, MPFR_RNDN);
        mpfr_log(r4485428, r4485427, MPFR_RNDN);
        mpfr_add(r4485429, r4485421, r4485428, MPFR_RNDN);
        return mpfr_get_d(r4485429, MPFR_RNDN);
}

static mpfr_t r4485430, r4485431, r4485432, r4485433, r4485434, r4485435, r4485436, r4485437, r4485438, r4485439, r4485440, r4485441, r4485442, r4485443, r4485444, r4485445;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485430, "1.875", 10, MPFR_RNDN);
        mpfr_init(r4485431);
        mpfr_init(r4485432);
        mpfr_init_set_str(r4485433, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r4485434);
        mpfr_init(r4485435);
        mpfr_init(r4485436);
        mpfr_init(r4485437);
        mpfr_init_set_str(r4485438, "7.875", 10, MPFR_RNDN);
        mpfr_init(r4485439);
        mpfr_init_set_str(r4485440, "3", 10, MPFR_RNDN);
        mpfr_init(r4485441);
        mpfr_init(r4485442);
        mpfr_init(r4485443);
        mpfr_init(r4485444);
        mpfr_init(r4485445);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4485431, x, MPFR_RNDN);
        mpfr_mul(r4485432, r4485430, r4485431, MPFR_RNDN);
        ;
        mpfr_mul(r4485434, r4485431, r4485431, MPFR_RNDN);
        mpfr_mul(r4485435, r4485434, r4485431, MPFR_RNDN);
        mpfr_mul(r4485436, r4485433, r4485435, MPFR_RNDN);
        mpfr_add(r4485437, r4485432, r4485436, MPFR_RNDN);
        ;
        mpfr_exp(r4485439, r4485438, MPFR_RNDN);
        ;
        mpfr_pow(r4485441, r4485431, r4485440, MPFR_RNDN);
        mpfr_mul(r4485442, r4485434, r4485441, MPFR_RNDN);
        mpfr_pow(r4485443, r4485439, r4485442, MPFR_RNDN);
        mpfr_log(r4485444, r4485443, MPFR_RNDN);
        mpfr_add(r4485445, r4485437, r4485444, MPFR_RNDN);
        return mpfr_get_d(r4485445, MPFR_RNDN);
}

