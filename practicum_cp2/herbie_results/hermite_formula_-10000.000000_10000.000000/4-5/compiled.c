#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r11626343 = 120.0;
        float r11626344 = x;
        float r11626345 = r11626343 * r11626344;
        float r11626346 = -160.0;
        float r11626347 = r11626344 * r11626344;
        float r11626348 = r11626347 * r11626344;
        float r11626349 = r11626346 * r11626348;
        float r11626350 = r11626345 + r11626349;
        float r11626351 = 32.0;
        float r11626352 = r11626348 * r11626344;
        float r11626353 = r11626352 * r11626344;
        float r11626354 = r11626351 * r11626353;
        float r11626355 = r11626350 + r11626354;
        return r11626355;
}

double f_id(double x) {
        double r11626356 = 120.0;
        double r11626357 = x;
        double r11626358 = r11626356 * r11626357;
        double r11626359 = -160.0;
        double r11626360 = r11626357 * r11626357;
        double r11626361 = r11626360 * r11626357;
        double r11626362 = r11626359 * r11626361;
        double r11626363 = r11626358 + r11626362;
        double r11626364 = 32.0;
        double r11626365 = r11626361 * r11626357;
        double r11626366 = r11626365 * r11626357;
        double r11626367 = r11626364 * r11626366;
        double r11626368 = r11626363 + r11626367;
        return r11626368;
}


double f_of(float x) {
        float r11626369 = x;
        float r11626370 = 3;
        float r11626371 = 1;
        float r11626372 = r11626370 + r11626371;
        float r11626373 = pow(r11626369, r11626372);
        float r11626374 = r11626373 * r11626369;
        float r11626375 = cbrt(r11626374);
        float r11626376 = cbrt(r11626369);
        float r11626377 = 4;
        float r11626378 = r11626371 + r11626377;
        float r11626379 = pow(r11626376, r11626378);
        float r11626380 = r11626375 * r11626379;
        float r11626381 = 32.0;
        float r11626382 = r11626375 * r11626381;
        float r11626383 = r11626380 * r11626382;
        float r11626384 = 120.0;
        float r11626385 = r11626384 * r11626369;
        float r11626386 = r11626369 * r11626369;
        float r11626387 = -160.0;
        float r11626388 = r11626387 * r11626369;
        float r11626389 = r11626386 * r11626388;
        float r11626390 = r11626385 + r11626389;
        float r11626391 = r11626383 + r11626390;
        return r11626391;
}

double f_od(double x) {
        double r11626392 = x;
        double r11626393 = 3;
        double r11626394 = 1;
        double r11626395 = r11626393 + r11626394;
        double r11626396 = pow(r11626392, r11626395);
        double r11626397 = r11626396 * r11626392;
        double r11626398 = cbrt(r11626397);
        double r11626399 = cbrt(r11626392);
        double r11626400 = 4;
        double r11626401 = r11626394 + r11626400;
        double r11626402 = pow(r11626399, r11626401);
        double r11626403 = r11626398 * r11626402;
        double r11626404 = 32.0;
        double r11626405 = r11626398 * r11626404;
        double r11626406 = r11626403 * r11626405;
        double r11626407 = 120.0;
        double r11626408 = r11626407 * r11626392;
        double r11626409 = r11626392 * r11626392;
        double r11626410 = -160.0;
        double r11626411 = r11626410 * r11626392;
        double r11626412 = r11626409 * r11626411;
        double r11626413 = r11626408 + r11626412;
        double r11626414 = r11626406 + r11626413;
        return r11626414;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626415, r11626416, r11626417, r11626418, r11626419, r11626420, r11626421, r11626422, r11626423, r11626424, r11626425, r11626426, r11626427;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11626415, "120.0", 10, MPFR_RNDN);
        mpfr_init(r11626416);
        mpfr_init(r11626417);
        mpfr_init_set_str(r11626418, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r11626419);
        mpfr_init(r11626420);
        mpfr_init(r11626421);
        mpfr_init(r11626422);
        mpfr_init_set_str(r11626423, "32.0", 10, MPFR_RNDN);
        mpfr_init(r11626424);
        mpfr_init(r11626425);
        mpfr_init(r11626426);
        mpfr_init(r11626427);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11626416, x, MPFR_RNDN);
        mpfr_mul(r11626417, r11626415, r11626416, MPFR_RNDN);
        ;
        mpfr_mul(r11626419, r11626416, r11626416, MPFR_RNDN);
        mpfr_mul(r11626420, r11626419, r11626416, MPFR_RNDN);
        mpfr_mul(r11626421, r11626418, r11626420, MPFR_RNDN);
        mpfr_add(r11626422, r11626417, r11626421, MPFR_RNDN);
        ;
        mpfr_mul(r11626424, r11626420, r11626416, MPFR_RNDN);
        mpfr_mul(r11626425, r11626424, r11626416, MPFR_RNDN);
        mpfr_mul(r11626426, r11626423, r11626425, MPFR_RNDN);
        mpfr_add(r11626427, r11626422, r11626426, MPFR_RNDN);
        return mpfr_get_d(r11626427, MPFR_RNDN);
}

static mpfr_t r11626428, r11626429, r11626430, r11626431, r11626432, r11626433, r11626434, r11626435, r11626436, r11626437, r11626438, r11626439, r11626440, r11626441, r11626442, r11626443, r11626444, r11626445, r11626446, r11626447, r11626448, r11626449, r11626450;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r11626428);
        mpfr_init_set_str(r11626429, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626430, "1", 10, MPFR_RNDN);
        mpfr_init(r11626431);
        mpfr_init(r11626432);
        mpfr_init(r11626433);
        mpfr_init(r11626434);
        mpfr_init(r11626435);
        mpfr_init_set_str(r11626436, "4", 10, MPFR_RNDN);
        mpfr_init(r11626437);
        mpfr_init(r11626438);
        mpfr_init(r11626439);
        mpfr_init_set_str(r11626440, "32.0", 10, MPFR_RNDN);
        mpfr_init(r11626441);
        mpfr_init(r11626442);
        mpfr_init_set_str(r11626443, "120.0", 10, MPFR_RNDN);
        mpfr_init(r11626444);
        mpfr_init(r11626445);
        mpfr_init_set_str(r11626446, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r11626447);
        mpfr_init(r11626448);
        mpfr_init(r11626449);
        mpfr_init(r11626450);
}

double f_fm(double x) {
        mpfr_set_d(r11626428, x, MPFR_RNDN);
        ;
        ;
        mpfr_add(r11626431, r11626429, r11626430, MPFR_RNDN);
        mpfr_pow(r11626432, r11626428, r11626431, MPFR_RNDN);
        mpfr_mul(r11626433, r11626432, r11626428, MPFR_RNDN);
        mpfr_cbrt(r11626434, r11626433, MPFR_RNDN);
        mpfr_cbrt(r11626435, r11626428, MPFR_RNDN);
        ;
        mpfr_add(r11626437, r11626430, r11626436, MPFR_RNDN);
        mpfr_pow(r11626438, r11626435, r11626437, MPFR_RNDN);
        mpfr_mul(r11626439, r11626434, r11626438, MPFR_RNDN);
        ;
        mpfr_mul(r11626441, r11626434, r11626440, MPFR_RNDN);
        mpfr_mul(r11626442, r11626439, r11626441, MPFR_RNDN);
        ;
        mpfr_mul(r11626444, r11626443, r11626428, MPFR_RNDN);
        mpfr_mul(r11626445, r11626428, r11626428, MPFR_RNDN);
        ;
        mpfr_mul(r11626447, r11626446, r11626428, MPFR_RNDN);
        mpfr_mul(r11626448, r11626445, r11626447, MPFR_RNDN);
        mpfr_add(r11626449, r11626444, r11626448, MPFR_RNDN);
        mpfr_add(r11626450, r11626442, r11626449, MPFR_RNDN);
        return mpfr_get_d(r11626450, MPFR_RNDN);
}

static mpfr_t r11626451, r11626452, r11626453, r11626454, r11626455, r11626456, r11626457, r11626458, r11626459, r11626460, r11626461, r11626462, r11626463, r11626464, r11626465, r11626466, r11626467, r11626468, r11626469, r11626470, r11626471, r11626472, r11626473;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r11626451);
        mpfr_init_set_str(r11626452, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11626453, "1", 10, MPFR_RNDN);
        mpfr_init(r11626454);
        mpfr_init(r11626455);
        mpfr_init(r11626456);
        mpfr_init(r11626457);
        mpfr_init(r11626458);
        mpfr_init_set_str(r11626459, "4", 10, MPFR_RNDN);
        mpfr_init(r11626460);
        mpfr_init(r11626461);
        mpfr_init(r11626462);
        mpfr_init_set_str(r11626463, "32.0", 10, MPFR_RNDN);
        mpfr_init(r11626464);
        mpfr_init(r11626465);
        mpfr_init_set_str(r11626466, "120.0", 10, MPFR_RNDN);
        mpfr_init(r11626467);
        mpfr_init(r11626468);
        mpfr_init_set_str(r11626469, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r11626470);
        mpfr_init(r11626471);
        mpfr_init(r11626472);
        mpfr_init(r11626473);
}

double f_dm(double x) {
        mpfr_set_d(r11626451, x, MPFR_RNDN);
        ;
        ;
        mpfr_add(r11626454, r11626452, r11626453, MPFR_RNDN);
        mpfr_pow(r11626455, r11626451, r11626454, MPFR_RNDN);
        mpfr_mul(r11626456, r11626455, r11626451, MPFR_RNDN);
        mpfr_cbrt(r11626457, r11626456, MPFR_RNDN);
        mpfr_cbrt(r11626458, r11626451, MPFR_RNDN);
        ;
        mpfr_add(r11626460, r11626453, r11626459, MPFR_RNDN);
        mpfr_pow(r11626461, r11626458, r11626460, MPFR_RNDN);
        mpfr_mul(r11626462, r11626457, r11626461, MPFR_RNDN);
        ;
        mpfr_mul(r11626464, r11626457, r11626463, MPFR_RNDN);
        mpfr_mul(r11626465, r11626462, r11626464, MPFR_RNDN);
        ;
        mpfr_mul(r11626467, r11626466, r11626451, MPFR_RNDN);
        mpfr_mul(r11626468, r11626451, r11626451, MPFR_RNDN);
        ;
        mpfr_mul(r11626470, r11626469, r11626451, MPFR_RNDN);
        mpfr_mul(r11626471, r11626468, r11626470, MPFR_RNDN);
        mpfr_add(r11626472, r11626467, r11626471, MPFR_RNDN);
        mpfr_add(r11626473, r11626465, r11626472, MPFR_RNDN);
        return mpfr_get_d(r11626473, MPFR_RNDN);
}

