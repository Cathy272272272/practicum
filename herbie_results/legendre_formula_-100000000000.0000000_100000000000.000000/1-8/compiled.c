#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6764328 = 0.273438;
        float r6764329 = -9.84375;
        float r6764330 = x;
        float r6764331 = r6764330 * r6764330;
        float r6764332 = r6764329 * r6764331;
        float r6764333 = r6764328 + r6764332;
        float r6764334 = 54.140625;
        float r6764335 = r6764331 * r6764330;
        float r6764336 = r6764335 * r6764330;
        float r6764337 = r6764334 * r6764336;
        float r6764338 = r6764333 + r6764337;
        float r6764339 = -93.84375;
        float r6764340 = r6764336 * r6764330;
        float r6764341 = r6764340 * r6764330;
        float r6764342 = r6764339 * r6764341;
        float r6764343 = r6764338 + r6764342;
        float r6764344 = 50.273438;
        float r6764345 = r6764341 * r6764330;
        float r6764346 = r6764345 * r6764330;
        float r6764347 = r6764344 * r6764346;
        float r6764348 = r6764343 + r6764347;
        return r6764348;
}

double f_id(double x) {
        double r6764349 = 0.273438;
        double r6764350 = -9.84375;
        double r6764351 = x;
        double r6764352 = r6764351 * r6764351;
        double r6764353 = r6764350 * r6764352;
        double r6764354 = r6764349 + r6764353;
        double r6764355 = 54.140625;
        double r6764356 = r6764352 * r6764351;
        double r6764357 = r6764356 * r6764351;
        double r6764358 = r6764355 * r6764357;
        double r6764359 = r6764354 + r6764358;
        double r6764360 = -93.84375;
        double r6764361 = r6764357 * r6764351;
        double r6764362 = r6764361 * r6764351;
        double r6764363 = r6764360 * r6764362;
        double r6764364 = r6764359 + r6764363;
        double r6764365 = 50.273438;
        double r6764366 = r6764362 * r6764351;
        double r6764367 = r6764366 * r6764351;
        double r6764368 = r6764365 * r6764367;
        double r6764369 = r6764364 + r6764368;
        return r6764369;
}


double f_of(float x) {
        float r6764370 = x;
        float r6764371 = 54.140625;
        float r6764372 = r6764370 * r6764371;
        float r6764373 = 3;
        float r6764374 = pow(r6764370, r6764373);
        float r6764375 = r6764372 * r6764374;
        float r6764376 = -9.84375;
        float r6764377 = r6764370 * r6764376;
        float r6764378 = r6764370 * r6764377;
        float r6764379 = r6764375 + r6764378;
        float r6764380 = 0.273438;
        float r6764381 = r6764379 + r6764380;
        float r6764382 = r6764374 * r6764374;
        float r6764383 = -93.84375;
        float r6764384 = 50.273438;
        float r6764385 = r6764384 * r6764370;
        float r6764386 = r6764385 * r6764370;
        float r6764387 = r6764383 + r6764386;
        float r6764388 = r6764382 * r6764387;
        float r6764389 = r6764381 + r6764388;
        return r6764389;
}

double f_od(double x) {
        double r6764390 = x;
        double r6764391 = 54.140625;
        double r6764392 = r6764390 * r6764391;
        double r6764393 = 3;
        double r6764394 = pow(r6764390, r6764393);
        double r6764395 = r6764392 * r6764394;
        double r6764396 = -9.84375;
        double r6764397 = r6764390 * r6764396;
        double r6764398 = r6764390 * r6764397;
        double r6764399 = r6764395 + r6764398;
        double r6764400 = 0.273438;
        double r6764401 = r6764399 + r6764400;
        double r6764402 = r6764394 * r6764394;
        double r6764403 = -93.84375;
        double r6764404 = 50.273438;
        double r6764405 = r6764404 * r6764390;
        double r6764406 = r6764405 * r6764390;
        double r6764407 = r6764403 + r6764406;
        double r6764408 = r6764402 * r6764407;
        double r6764409 = r6764401 + r6764408;
        return r6764409;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764410, r6764411, r6764412, r6764413, r6764414, r6764415, r6764416, r6764417, r6764418, r6764419, r6764420, r6764421, r6764422, r6764423, r6764424, r6764425, r6764426, r6764427, r6764428, r6764429, r6764430;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6764410, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764411, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6764412);
        mpfr_init(r6764413);
        mpfr_init(r6764414);
        mpfr_init(r6764415);
        mpfr_init_set_str(r6764416, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6764417);
        mpfr_init(r6764418);
        mpfr_init(r6764419);
        mpfr_init(r6764420);
        mpfr_init_set_str(r6764421, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6764422);
        mpfr_init(r6764423);
        mpfr_init(r6764424);
        mpfr_init(r6764425);
        mpfr_init_set_str(r6764426, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6764427);
        mpfr_init(r6764428);
        mpfr_init(r6764429);
        mpfr_init(r6764430);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6764412, x, MPFR_RNDN);
        mpfr_mul(r6764413, r6764412, r6764412, MPFR_RNDN);
        mpfr_mul(r6764414, r6764411, r6764413, MPFR_RNDN);
        mpfr_add(r6764415, r6764410, r6764414, MPFR_RNDN);
        ;
        mpfr_mul(r6764417, r6764413, r6764412, MPFR_RNDN);
        mpfr_mul(r6764418, r6764417, r6764412, MPFR_RNDN);
        mpfr_mul(r6764419, r6764416, r6764418, MPFR_RNDN);
        mpfr_add(r6764420, r6764415, r6764419, MPFR_RNDN);
        ;
        mpfr_mul(r6764422, r6764418, r6764412, MPFR_RNDN);
        mpfr_mul(r6764423, r6764422, r6764412, MPFR_RNDN);
        mpfr_mul(r6764424, r6764421, r6764423, MPFR_RNDN);
        mpfr_add(r6764425, r6764420, r6764424, MPFR_RNDN);
        ;
        mpfr_mul(r6764427, r6764423, r6764412, MPFR_RNDN);
        mpfr_mul(r6764428, r6764427, r6764412, MPFR_RNDN);
        mpfr_mul(r6764429, r6764426, r6764428, MPFR_RNDN);
        mpfr_add(r6764430, r6764425, r6764429, MPFR_RNDN);
        return mpfr_get_d(r6764430, MPFR_RNDN);
}

static mpfr_t r6764431, r6764432, r6764433, r6764434, r6764435, r6764436, r6764437, r6764438, r6764439, r6764440, r6764441, r6764442, r6764443, r6764444, r6764445, r6764446, r6764447, r6764448, r6764449, r6764450;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6764431);
        mpfr_init_set_str(r6764432, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6764433);
        mpfr_init_set_str(r6764434, "3", 10, MPFR_RNDN);
        mpfr_init(r6764435);
        mpfr_init(r6764436);
        mpfr_init_set_str(r6764437, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6764438);
        mpfr_init(r6764439);
        mpfr_init(r6764440);
        mpfr_init_set_str(r6764441, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6764442);
        mpfr_init(r6764443);
        mpfr_init_set_str(r6764444, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764445, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6764446);
        mpfr_init(r6764447);
        mpfr_init(r6764448);
        mpfr_init(r6764449);
        mpfr_init(r6764450);
}

double f_fm(double x) {
        mpfr_set_d(r6764431, x, MPFR_RNDN);
        ;
        mpfr_mul(r6764433, r6764431, r6764432, MPFR_RNDN);
        ;
        mpfr_pow(r6764435, r6764431, r6764434, MPFR_RNDN);
        mpfr_mul(r6764436, r6764433, r6764435, MPFR_RNDN);
        ;
        mpfr_mul(r6764438, r6764431, r6764437, MPFR_RNDN);
        mpfr_mul(r6764439, r6764431, r6764438, MPFR_RNDN);
        mpfr_add(r6764440, r6764436, r6764439, MPFR_RNDN);
        ;
        mpfr_add(r6764442, r6764440, r6764441, MPFR_RNDN);
        mpfr_mul(r6764443, r6764435, r6764435, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6764446, r6764445, r6764431, MPFR_RNDN);
        mpfr_mul(r6764447, r6764446, r6764431, MPFR_RNDN);
        mpfr_add(r6764448, r6764444, r6764447, MPFR_RNDN);
        mpfr_mul(r6764449, r6764443, r6764448, MPFR_RNDN);
        mpfr_add(r6764450, r6764442, r6764449, MPFR_RNDN);
        return mpfr_get_d(r6764450, MPFR_RNDN);
}

static mpfr_t r6764451, r6764452, r6764453, r6764454, r6764455, r6764456, r6764457, r6764458, r6764459, r6764460, r6764461, r6764462, r6764463, r6764464, r6764465, r6764466, r6764467, r6764468, r6764469, r6764470;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6764451);
        mpfr_init_set_str(r6764452, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6764453);
        mpfr_init_set_str(r6764454, "3", 10, MPFR_RNDN);
        mpfr_init(r6764455);
        mpfr_init(r6764456);
        mpfr_init_set_str(r6764457, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6764458);
        mpfr_init(r6764459);
        mpfr_init(r6764460);
        mpfr_init_set_str(r6764461, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6764462);
        mpfr_init(r6764463);
        mpfr_init_set_str(r6764464, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6764465, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6764466);
        mpfr_init(r6764467);
        mpfr_init(r6764468);
        mpfr_init(r6764469);
        mpfr_init(r6764470);
}

double f_dm(double x) {
        mpfr_set_d(r6764451, x, MPFR_RNDN);
        ;
        mpfr_mul(r6764453, r6764451, r6764452, MPFR_RNDN);
        ;
        mpfr_pow(r6764455, r6764451, r6764454, MPFR_RNDN);
        mpfr_mul(r6764456, r6764453, r6764455, MPFR_RNDN);
        ;
        mpfr_mul(r6764458, r6764451, r6764457, MPFR_RNDN);
        mpfr_mul(r6764459, r6764451, r6764458, MPFR_RNDN);
        mpfr_add(r6764460, r6764456, r6764459, MPFR_RNDN);
        ;
        mpfr_add(r6764462, r6764460, r6764461, MPFR_RNDN);
        mpfr_mul(r6764463, r6764455, r6764455, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6764466, r6764465, r6764451, MPFR_RNDN);
        mpfr_mul(r6764467, r6764466, r6764451, MPFR_RNDN);
        mpfr_add(r6764468, r6764464, r6764467, MPFR_RNDN);
        mpfr_mul(r6764469, r6764463, r6764468, MPFR_RNDN);
        mpfr_add(r6764470, r6764462, r6764469, MPFR_RNDN);
        return mpfr_get_d(r6764470, MPFR_RNDN);
}

