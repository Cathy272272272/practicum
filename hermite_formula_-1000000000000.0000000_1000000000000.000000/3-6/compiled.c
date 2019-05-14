#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7603435 = -120.0;
        float r7603436 = 720.0;
        float r7603437 = x;
        float r7603438 = r7603437 * r7603437;
        float r7603439 = r7603436 * r7603438;
        float r7603440 = r7603435 + r7603439;
        float r7603441 = -480.0;
        float r7603442 = r7603438 * r7603437;
        float r7603443 = r7603442 * r7603437;
        float r7603444 = r7603441 * r7603443;
        float r7603445 = r7603440 + r7603444;
        float r7603446 = 64.0;
        float r7603447 = r7603443 * r7603437;
        float r7603448 = r7603447 * r7603437;
        float r7603449 = r7603446 * r7603448;
        float r7603450 = r7603445 + r7603449;
        return r7603450;
}

double f_id(double x) {
        double r7603451 = -120.0;
        double r7603452 = 720.0;
        double r7603453 = x;
        double r7603454 = r7603453 * r7603453;
        double r7603455 = r7603452 * r7603454;
        double r7603456 = r7603451 + r7603455;
        double r7603457 = -480.0;
        double r7603458 = r7603454 * r7603453;
        double r7603459 = r7603458 * r7603453;
        double r7603460 = r7603457 * r7603459;
        double r7603461 = r7603456 + r7603460;
        double r7603462 = 64.0;
        double r7603463 = r7603459 * r7603453;
        double r7603464 = r7603463 * r7603453;
        double r7603465 = r7603462 * r7603464;
        double r7603466 = r7603461 + r7603465;
        return r7603466;
}


double f_of(float x) {
        float r7603467 = -120.0;
        float r7603468 = 720.0;
        float r7603469 = x;
        float r7603470 = r7603469 * r7603469;
        float r7603471 = r7603468 * r7603470;
        float r7603472 = r7603467 + r7603471;
        float r7603473 = -480.0;
        float r7603474 = 4;
        float r7603475 = pow(r7603469, r7603474);
        float r7603476 = r7603473 * r7603475;
        float r7603477 = r7603472 + r7603476;
        float r7603478 = 64.0;
        float r7603479 = r7603470 * r7603469;
        float r7603480 = r7603479 * r7603469;
        float r7603481 = r7603480 * r7603469;
        float r7603482 = r7603481 * r7603469;
        float r7603483 = r7603478 * r7603482;
        float r7603484 = r7603477 + r7603483;
        return r7603484;
}

double f_od(double x) {
        double r7603485 = -120.0;
        double r7603486 = 720.0;
        double r7603487 = x;
        double r7603488 = r7603487 * r7603487;
        double r7603489 = r7603486 * r7603488;
        double r7603490 = r7603485 + r7603489;
        double r7603491 = -480.0;
        double r7603492 = 4;
        double r7603493 = pow(r7603487, r7603492);
        double r7603494 = r7603491 * r7603493;
        double r7603495 = r7603490 + r7603494;
        double r7603496 = 64.0;
        double r7603497 = r7603488 * r7603487;
        double r7603498 = r7603497 * r7603487;
        double r7603499 = r7603498 * r7603487;
        double r7603500 = r7603499 * r7603487;
        double r7603501 = r7603496 * r7603500;
        double r7603502 = r7603495 + r7603501;
        return r7603502;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603503, r7603504, r7603505, r7603506, r7603507, r7603508, r7603509, r7603510, r7603511, r7603512, r7603513, r7603514, r7603515, r7603516, r7603517, r7603518;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603503, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603504, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7603505);
        mpfr_init(r7603506);
        mpfr_init(r7603507);
        mpfr_init(r7603508);
        mpfr_init_set_str(r7603509, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7603510);
        mpfr_init(r7603511);
        mpfr_init(r7603512);
        mpfr_init(r7603513);
        mpfr_init_set_str(r7603514, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7603515);
        mpfr_init(r7603516);
        mpfr_init(r7603517);
        mpfr_init(r7603518);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7603505, x, MPFR_RNDN);
        mpfr_mul(r7603506, r7603505, r7603505, MPFR_RNDN);
        mpfr_mul(r7603507, r7603504, r7603506, MPFR_RNDN);
        mpfr_add(r7603508, r7603503, r7603507, MPFR_RNDN);
        ;
        mpfr_mul(r7603510, r7603506, r7603505, MPFR_RNDN);
        mpfr_mul(r7603511, r7603510, r7603505, MPFR_RNDN);
        mpfr_mul(r7603512, r7603509, r7603511, MPFR_RNDN);
        mpfr_add(r7603513, r7603508, r7603512, MPFR_RNDN);
        ;
        mpfr_mul(r7603515, r7603511, r7603505, MPFR_RNDN);
        mpfr_mul(r7603516, r7603515, r7603505, MPFR_RNDN);
        mpfr_mul(r7603517, r7603514, r7603516, MPFR_RNDN);
        mpfr_add(r7603518, r7603513, r7603517, MPFR_RNDN);
        return mpfr_get_d(r7603518, MPFR_RNDN);
}

static mpfr_t r7603519, r7603520, r7603521, r7603522, r7603523, r7603524, r7603525, r7603526, r7603527, r7603528, r7603529, r7603530, r7603531, r7603532, r7603533, r7603534, r7603535, r7603536;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603519, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603520, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7603521);
        mpfr_init(r7603522);
        mpfr_init(r7603523);
        mpfr_init(r7603524);
        mpfr_init_set_str(r7603525, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603526, "4", 10, MPFR_RNDN);
        mpfr_init(r7603527);
        mpfr_init(r7603528);
        mpfr_init(r7603529);
        mpfr_init_set_str(r7603530, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7603531);
        mpfr_init(r7603532);
        mpfr_init(r7603533);
        mpfr_init(r7603534);
        mpfr_init(r7603535);
        mpfr_init(r7603536);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7603521, x, MPFR_RNDN);
        mpfr_mul(r7603522, r7603521, r7603521, MPFR_RNDN);
        mpfr_mul(r7603523, r7603520, r7603522, MPFR_RNDN);
        mpfr_add(r7603524, r7603519, r7603523, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7603527, r7603521, r7603526, MPFR_RNDN);
        mpfr_mul(r7603528, r7603525, r7603527, MPFR_RNDN);
        mpfr_add(r7603529, r7603524, r7603528, MPFR_RNDN);
        ;
        mpfr_mul(r7603531, r7603522, r7603521, MPFR_RNDN);
        mpfr_mul(r7603532, r7603531, r7603521, MPFR_RNDN);
        mpfr_mul(r7603533, r7603532, r7603521, MPFR_RNDN);
        mpfr_mul(r7603534, r7603533, r7603521, MPFR_RNDN);
        mpfr_mul(r7603535, r7603530, r7603534, MPFR_RNDN);
        mpfr_add(r7603536, r7603529, r7603535, MPFR_RNDN);
        return mpfr_get_d(r7603536, MPFR_RNDN);
}

static mpfr_t r7603537, r7603538, r7603539, r7603540, r7603541, r7603542, r7603543, r7603544, r7603545, r7603546, r7603547, r7603548, r7603549, r7603550, r7603551, r7603552, r7603553, r7603554;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603537, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603538, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7603539);
        mpfr_init(r7603540);
        mpfr_init(r7603541);
        mpfr_init(r7603542);
        mpfr_init_set_str(r7603543, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603544, "4", 10, MPFR_RNDN);
        mpfr_init(r7603545);
        mpfr_init(r7603546);
        mpfr_init(r7603547);
        mpfr_init_set_str(r7603548, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7603549);
        mpfr_init(r7603550);
        mpfr_init(r7603551);
        mpfr_init(r7603552);
        mpfr_init(r7603553);
        mpfr_init(r7603554);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7603539, x, MPFR_RNDN);
        mpfr_mul(r7603540, r7603539, r7603539, MPFR_RNDN);
        mpfr_mul(r7603541, r7603538, r7603540, MPFR_RNDN);
        mpfr_add(r7603542, r7603537, r7603541, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7603545, r7603539, r7603544, MPFR_RNDN);
        mpfr_mul(r7603546, r7603543, r7603545, MPFR_RNDN);
        mpfr_add(r7603547, r7603542, r7603546, MPFR_RNDN);
        ;
        mpfr_mul(r7603549, r7603540, r7603539, MPFR_RNDN);
        mpfr_mul(r7603550, r7603549, r7603539, MPFR_RNDN);
        mpfr_mul(r7603551, r7603550, r7603539, MPFR_RNDN);
        mpfr_mul(r7603552, r7603551, r7603539, MPFR_RNDN);
        mpfr_mul(r7603553, r7603548, r7603552, MPFR_RNDN);
        mpfr_add(r7603554, r7603547, r7603553, MPFR_RNDN);
        return mpfr_get_d(r7603554, MPFR_RNDN);
}

