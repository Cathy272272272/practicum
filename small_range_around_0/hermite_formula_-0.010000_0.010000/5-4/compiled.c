#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r4112372 = 12.0;
        float r4112373 = -48.0;
        float r4112374 = x;
        float r4112375 = r4112374 * r4112374;
        float r4112376 = r4112373 * r4112375;
        float r4112377 = r4112372 + r4112376;
        float r4112378 = 16.0;
        float r4112379 = r4112375 * r4112374;
        float r4112380 = r4112379 * r4112374;
        float r4112381 = r4112378 * r4112380;
        float r4112382 = r4112377 + r4112381;
        return r4112382;
}

double f_id(double x) {
        double r4112383 = 12.0;
        double r4112384 = -48.0;
        double r4112385 = x;
        double r4112386 = r4112385 * r4112385;
        double r4112387 = r4112384 * r4112386;
        double r4112388 = r4112383 + r4112387;
        double r4112389 = 16.0;
        double r4112390 = r4112386 * r4112385;
        double r4112391 = r4112390 * r4112385;
        double r4112392 = r4112389 * r4112391;
        double r4112393 = r4112388 + r4112392;
        return r4112393;
}


double f_of(float x) {
        float r4112394 = 12.0;
        float r4112395 = x;
        float r4112396 = 16.0;
        float r4112397 = r4112395 * r4112396;
        float r4112398 = 3;
        float r4112399 = pow(r4112395, r4112398);
        float r4112400 = r4112397 * r4112399;
        float r4112401 = -48.0;
        float r4112402 = r4112395 * r4112401;
        float r4112403 = r4112402 * r4112395;
        float r4112404 = r4112400 + r4112403;
        float r4112405 = r4112394 + r4112404;
        return r4112405;
}

double f_od(double x) {
        double r4112406 = 12.0;
        double r4112407 = x;
        double r4112408 = 16.0;
        double r4112409 = r4112407 * r4112408;
        double r4112410 = 3;
        double r4112411 = pow(r4112407, r4112410);
        double r4112412 = r4112409 * r4112411;
        double r4112413 = -48.0;
        double r4112414 = r4112407 * r4112413;
        double r4112415 = r4112414 * r4112407;
        double r4112416 = r4112412 + r4112415;
        double r4112417 = r4112406 + r4112416;
        return r4112417;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4112418, r4112419, r4112420, r4112421, r4112422, r4112423, r4112424, r4112425, r4112426, r4112427, r4112428;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112418, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112419, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r4112420);
        mpfr_init(r4112421);
        mpfr_init(r4112422);
        mpfr_init(r4112423);
        mpfr_init_set_str(r4112424, "16.0", 10, MPFR_RNDN);
        mpfr_init(r4112425);
        mpfr_init(r4112426);
        mpfr_init(r4112427);
        mpfr_init(r4112428);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4112420, x, MPFR_RNDN);
        mpfr_mul(r4112421, r4112420, r4112420, MPFR_RNDN);
        mpfr_mul(r4112422, r4112419, r4112421, MPFR_RNDN);
        mpfr_add(r4112423, r4112418, r4112422, MPFR_RNDN);
        ;
        mpfr_mul(r4112425, r4112421, r4112420, MPFR_RNDN);
        mpfr_mul(r4112426, r4112425, r4112420, MPFR_RNDN);
        mpfr_mul(r4112427, r4112424, r4112426, MPFR_RNDN);
        mpfr_add(r4112428, r4112423, r4112427, MPFR_RNDN);
        return mpfr_get_d(r4112428, MPFR_RNDN);
}

static mpfr_t r4112429, r4112430, r4112431, r4112432, r4112433, r4112434, r4112435, r4112436, r4112437, r4112438, r4112439, r4112440;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112429, "12.0", 10, MPFR_RNDN);
        mpfr_init(r4112430);
        mpfr_init_set_str(r4112431, "16.0", 10, MPFR_RNDN);
        mpfr_init(r4112432);
        mpfr_init_set_str(r4112433, "3", 10, MPFR_RNDN);
        mpfr_init(r4112434);
        mpfr_init(r4112435);
        mpfr_init_set_str(r4112436, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r4112437);
        mpfr_init(r4112438);
        mpfr_init(r4112439);
        mpfr_init(r4112440);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4112430, x, MPFR_RNDN);
        ;
        mpfr_mul(r4112432, r4112430, r4112431, MPFR_RNDN);
        ;
        mpfr_pow(r4112434, r4112430, r4112433, MPFR_RNDN);
        mpfr_mul(r4112435, r4112432, r4112434, MPFR_RNDN);
        ;
        mpfr_mul(r4112437, r4112430, r4112436, MPFR_RNDN);
        mpfr_mul(r4112438, r4112437, r4112430, MPFR_RNDN);
        mpfr_add(r4112439, r4112435, r4112438, MPFR_RNDN);
        mpfr_add(r4112440, r4112429, r4112439, MPFR_RNDN);
        return mpfr_get_d(r4112440, MPFR_RNDN);
}

static mpfr_t r4112441, r4112442, r4112443, r4112444, r4112445, r4112446, r4112447, r4112448, r4112449, r4112450, r4112451, r4112452;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112441, "12.0", 10, MPFR_RNDN);
        mpfr_init(r4112442);
        mpfr_init_set_str(r4112443, "16.0", 10, MPFR_RNDN);
        mpfr_init(r4112444);
        mpfr_init_set_str(r4112445, "3", 10, MPFR_RNDN);
        mpfr_init(r4112446);
        mpfr_init(r4112447);
        mpfr_init_set_str(r4112448, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r4112449);
        mpfr_init(r4112450);
        mpfr_init(r4112451);
        mpfr_init(r4112452);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4112442, x, MPFR_RNDN);
        ;
        mpfr_mul(r4112444, r4112442, r4112443, MPFR_RNDN);
        ;
        mpfr_pow(r4112446, r4112442, r4112445, MPFR_RNDN);
        mpfr_mul(r4112447, r4112444, r4112446, MPFR_RNDN);
        ;
        mpfr_mul(r4112449, r4112442, r4112448, MPFR_RNDN);
        mpfr_mul(r4112450, r4112449, r4112442, MPFR_RNDN);
        mpfr_add(r4112451, r4112447, r4112450, MPFR_RNDN);
        mpfr_add(r4112452, r4112441, r4112451, MPFR_RNDN);
        return mpfr_get_d(r4112452, MPFR_RNDN);
}

