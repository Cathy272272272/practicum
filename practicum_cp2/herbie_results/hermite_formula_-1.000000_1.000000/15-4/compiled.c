#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7990363 = 12.0;
        float r7990364 = -48.0;
        float r7990365 = x;
        float r7990366 = r7990365 * r7990365;
        float r7990367 = r7990364 * r7990366;
        float r7990368 = r7990363 + r7990367;
        float r7990369 = 16.0;
        float r7990370 = r7990366 * r7990365;
        float r7990371 = r7990370 * r7990365;
        float r7990372 = r7990369 * r7990371;
        float r7990373 = r7990368 + r7990372;
        return r7990373;
}

double f_id(double x) {
        double r7990374 = 12.0;
        double r7990375 = -48.0;
        double r7990376 = x;
        double r7990377 = r7990376 * r7990376;
        double r7990378 = r7990375 * r7990377;
        double r7990379 = r7990374 + r7990378;
        double r7990380 = 16.0;
        double r7990381 = r7990377 * r7990376;
        double r7990382 = r7990381 * r7990376;
        double r7990383 = r7990380 * r7990382;
        double r7990384 = r7990379 + r7990383;
        return r7990384;
}


double f_of(float x) {
        float r7990385 = 12.0;
        float r7990386 = x;
        float r7990387 = 16.0;
        float r7990388 = r7990386 * r7990387;
        float r7990389 = 3;
        float r7990390 = pow(r7990386, r7990389);
        float r7990391 = r7990388 * r7990390;
        float r7990392 = -48.0;
        float r7990393 = r7990386 * r7990392;
        float r7990394 = r7990393 * r7990386;
        float r7990395 = r7990391 + r7990394;
        float r7990396 = r7990385 + r7990395;
        return r7990396;
}

double f_od(double x) {
        double r7990397 = 12.0;
        double r7990398 = x;
        double r7990399 = 16.0;
        double r7990400 = r7990398 * r7990399;
        double r7990401 = 3;
        double r7990402 = pow(r7990398, r7990401);
        double r7990403 = r7990400 * r7990402;
        double r7990404 = -48.0;
        double r7990405 = r7990398 * r7990404;
        double r7990406 = r7990405 * r7990398;
        double r7990407 = r7990403 + r7990406;
        double r7990408 = r7990397 + r7990407;
        return r7990408;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7990409, r7990410, r7990411, r7990412, r7990413, r7990414, r7990415, r7990416, r7990417, r7990418, r7990419;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7990409, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7990410, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7990411);
        mpfr_init(r7990412);
        mpfr_init(r7990413);
        mpfr_init(r7990414);
        mpfr_init_set_str(r7990415, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7990416);
        mpfr_init(r7990417);
        mpfr_init(r7990418);
        mpfr_init(r7990419);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7990411, x, MPFR_RNDN);
        mpfr_mul(r7990412, r7990411, r7990411, MPFR_RNDN);
        mpfr_mul(r7990413, r7990410, r7990412, MPFR_RNDN);
        mpfr_add(r7990414, r7990409, r7990413, MPFR_RNDN);
        ;
        mpfr_mul(r7990416, r7990412, r7990411, MPFR_RNDN);
        mpfr_mul(r7990417, r7990416, r7990411, MPFR_RNDN);
        mpfr_mul(r7990418, r7990415, r7990417, MPFR_RNDN);
        mpfr_add(r7990419, r7990414, r7990418, MPFR_RNDN);
        return mpfr_get_d(r7990419, MPFR_RNDN);
}

static mpfr_t r7990420, r7990421, r7990422, r7990423, r7990424, r7990425, r7990426, r7990427, r7990428, r7990429, r7990430, r7990431;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7990420, "12.0", 10, MPFR_RNDN);
        mpfr_init(r7990421);
        mpfr_init_set_str(r7990422, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7990423);
        mpfr_init_set_str(r7990424, "3", 10, MPFR_RNDN);
        mpfr_init(r7990425);
        mpfr_init(r7990426);
        mpfr_init_set_str(r7990427, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7990428);
        mpfr_init(r7990429);
        mpfr_init(r7990430);
        mpfr_init(r7990431);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7990421, x, MPFR_RNDN);
        ;
        mpfr_mul(r7990423, r7990421, r7990422, MPFR_RNDN);
        ;
        mpfr_pow(r7990425, r7990421, r7990424, MPFR_RNDN);
        mpfr_mul(r7990426, r7990423, r7990425, MPFR_RNDN);
        ;
        mpfr_mul(r7990428, r7990421, r7990427, MPFR_RNDN);
        mpfr_mul(r7990429, r7990428, r7990421, MPFR_RNDN);
        mpfr_add(r7990430, r7990426, r7990429, MPFR_RNDN);
        mpfr_add(r7990431, r7990420, r7990430, MPFR_RNDN);
        return mpfr_get_d(r7990431, MPFR_RNDN);
}

static mpfr_t r7990432, r7990433, r7990434, r7990435, r7990436, r7990437, r7990438, r7990439, r7990440, r7990441, r7990442, r7990443;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7990432, "12.0", 10, MPFR_RNDN);
        mpfr_init(r7990433);
        mpfr_init_set_str(r7990434, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7990435);
        mpfr_init_set_str(r7990436, "3", 10, MPFR_RNDN);
        mpfr_init(r7990437);
        mpfr_init(r7990438);
        mpfr_init_set_str(r7990439, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7990440);
        mpfr_init(r7990441);
        mpfr_init(r7990442);
        mpfr_init(r7990443);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7990433, x, MPFR_RNDN);
        ;
        mpfr_mul(r7990435, r7990433, r7990434, MPFR_RNDN);
        ;
        mpfr_pow(r7990437, r7990433, r7990436, MPFR_RNDN);
        mpfr_mul(r7990438, r7990435, r7990437, MPFR_RNDN);
        ;
        mpfr_mul(r7990440, r7990433, r7990439, MPFR_RNDN);
        mpfr_mul(r7990441, r7990440, r7990433, MPFR_RNDN);
        mpfr_add(r7990442, r7990438, r7990441, MPFR_RNDN);
        mpfr_add(r7990443, r7990432, r7990442, MPFR_RNDN);
        return mpfr_get_d(r7990443, MPFR_RNDN);
}

