#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6326374 = -1680.0;
        float r6326375 = x;
        float r6326376 = r6326374 * r6326375;
        float r6326377 = 3360.0;
        float r6326378 = r6326375 * r6326375;
        float r6326379 = r6326378 * r6326375;
        float r6326380 = r6326377 * r6326379;
        float r6326381 = r6326376 + r6326380;
        float r6326382 = -1344.0;
        float r6326383 = r6326379 * r6326375;
        float r6326384 = r6326383 * r6326375;
        float r6326385 = r6326382 * r6326384;
        float r6326386 = r6326381 + r6326385;
        float r6326387 = 128.0;
        float r6326388 = r6326384 * r6326375;
        float r6326389 = r6326388 * r6326375;
        float r6326390 = r6326387 * r6326389;
        float r6326391 = r6326386 + r6326390;
        return r6326391;
}

double f_id(double x) {
        double r6326392 = -1680.0;
        double r6326393 = x;
        double r6326394 = r6326392 * r6326393;
        double r6326395 = 3360.0;
        double r6326396 = r6326393 * r6326393;
        double r6326397 = r6326396 * r6326393;
        double r6326398 = r6326395 * r6326397;
        double r6326399 = r6326394 + r6326398;
        double r6326400 = -1344.0;
        double r6326401 = r6326397 * r6326393;
        double r6326402 = r6326401 * r6326393;
        double r6326403 = r6326400 * r6326402;
        double r6326404 = r6326399 + r6326403;
        double r6326405 = 128.0;
        double r6326406 = r6326402 * r6326393;
        double r6326407 = r6326406 * r6326393;
        double r6326408 = r6326405 * r6326407;
        double r6326409 = r6326404 + r6326408;
        return r6326409;
}


double f_of(float x) {
        float r6326410 = x;
        float r6326411 = r6326410 * r6326410;
        float r6326412 = r6326411 * r6326411;
        float r6326413 = 128.0;
        float r6326414 = r6326413 * r6326410;
        float r6326415 = r6326411 * r6326414;
        float r6326416 = -1344.0;
        float r6326417 = r6326410 * r6326416;
        float r6326418 = r6326415 + r6326417;
        float r6326419 = r6326412 * r6326418;
        float r6326420 = 3360.0;
        float r6326421 = r6326420 * r6326410;
        float r6326422 = r6326421 * r6326410;
        float r6326423 = -1680.0;
        float r6326424 = r6326422 + r6326423;
        float r6326425 = r6326410 * r6326424;
        float r6326426 = r6326419 + r6326425;
        return r6326426;
}

double f_od(double x) {
        double r6326427 = x;
        double r6326428 = r6326427 * r6326427;
        double r6326429 = r6326428 * r6326428;
        double r6326430 = 128.0;
        double r6326431 = r6326430 * r6326427;
        double r6326432 = r6326428 * r6326431;
        double r6326433 = -1344.0;
        double r6326434 = r6326427 * r6326433;
        double r6326435 = r6326432 + r6326434;
        double r6326436 = r6326429 * r6326435;
        double r6326437 = 3360.0;
        double r6326438 = r6326437 * r6326427;
        double r6326439 = r6326438 * r6326427;
        double r6326440 = -1680.0;
        double r6326441 = r6326439 + r6326440;
        double r6326442 = r6326427 * r6326441;
        double r6326443 = r6326436 + r6326442;
        return r6326443;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326444, r6326445, r6326446, r6326447, r6326448, r6326449, r6326450, r6326451, r6326452, r6326453, r6326454, r6326455, r6326456, r6326457, r6326458, r6326459, r6326460, r6326461;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(1872);
        mpfr_init_set_str(r6326444, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r6326445);
        mpfr_init(r6326446);
        mpfr_init_set_str(r6326447, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r6326448);
        mpfr_init(r6326449);
        mpfr_init(r6326450);
        mpfr_init(r6326451);
        mpfr_init_set_str(r6326452, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r6326453);
        mpfr_init(r6326454);
        mpfr_init(r6326455);
        mpfr_init(r6326456);
        mpfr_init_set_str(r6326457, "128.0", 10, MPFR_RNDN);
        mpfr_init(r6326458);
        mpfr_init(r6326459);
        mpfr_init(r6326460);
        mpfr_init(r6326461);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6326445, x, MPFR_RNDN);
        mpfr_mul(r6326446, r6326444, r6326445, MPFR_RNDN);
        ;
        mpfr_mul(r6326448, r6326445, r6326445, MPFR_RNDN);
        mpfr_mul(r6326449, r6326448, r6326445, MPFR_RNDN);
        mpfr_mul(r6326450, r6326447, r6326449, MPFR_RNDN);
        mpfr_add(r6326451, r6326446, r6326450, MPFR_RNDN);
        ;
        mpfr_mul(r6326453, r6326449, r6326445, MPFR_RNDN);
        mpfr_mul(r6326454, r6326453, r6326445, MPFR_RNDN);
        mpfr_mul(r6326455, r6326452, r6326454, MPFR_RNDN);
        mpfr_add(r6326456, r6326451, r6326455, MPFR_RNDN);
        ;
        mpfr_mul(r6326458, r6326454, r6326445, MPFR_RNDN);
        mpfr_mul(r6326459, r6326458, r6326445, MPFR_RNDN);
        mpfr_mul(r6326460, r6326457, r6326459, MPFR_RNDN);
        mpfr_add(r6326461, r6326456, r6326460, MPFR_RNDN);
        return mpfr_get_d(r6326461, MPFR_RNDN);
}

static mpfr_t r6326462, r6326463, r6326464, r6326465, r6326466, r6326467, r6326468, r6326469, r6326470, r6326471, r6326472, r6326473, r6326474, r6326475, r6326476, r6326477, r6326478;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(1872);
        mpfr_init(r6326462);
        mpfr_init(r6326463);
        mpfr_init(r6326464);
        mpfr_init_set_str(r6326465, "128.0", 10, MPFR_RNDN);
        mpfr_init(r6326466);
        mpfr_init(r6326467);
        mpfr_init_set_str(r6326468, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r6326469);
        mpfr_init(r6326470);
        mpfr_init(r6326471);
        mpfr_init_set_str(r6326472, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r6326473);
        mpfr_init(r6326474);
        mpfr_init_set_str(r6326475, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r6326476);
        mpfr_init(r6326477);
        mpfr_init(r6326478);
}

double f_fm(double x) {
        mpfr_set_d(r6326462, x, MPFR_RNDN);
        mpfr_mul(r6326463, r6326462, r6326462, MPFR_RNDN);
        mpfr_mul(r6326464, r6326463, r6326463, MPFR_RNDN);
        ;
        mpfr_mul(r6326466, r6326465, r6326462, MPFR_RNDN);
        mpfr_mul(r6326467, r6326463, r6326466, MPFR_RNDN);
        ;
        mpfr_mul(r6326469, r6326462, r6326468, MPFR_RNDN);
        mpfr_add(r6326470, r6326467, r6326469, MPFR_RNDN);
        mpfr_mul(r6326471, r6326464, r6326470, MPFR_RNDN);
        ;
        mpfr_mul(r6326473, r6326472, r6326462, MPFR_RNDN);
        mpfr_mul(r6326474, r6326473, r6326462, MPFR_RNDN);
        ;
        mpfr_add(r6326476, r6326474, r6326475, MPFR_RNDN);
        mpfr_mul(r6326477, r6326462, r6326476, MPFR_RNDN);
        mpfr_add(r6326478, r6326471, r6326477, MPFR_RNDN);
        return mpfr_get_d(r6326478, MPFR_RNDN);
}

static mpfr_t r6326479, r6326480, r6326481, r6326482, r6326483, r6326484, r6326485, r6326486, r6326487, r6326488, r6326489, r6326490, r6326491, r6326492, r6326493, r6326494, r6326495;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(1872);
        mpfr_init(r6326479);
        mpfr_init(r6326480);
        mpfr_init(r6326481);
        mpfr_init_set_str(r6326482, "128.0", 10, MPFR_RNDN);
        mpfr_init(r6326483);
        mpfr_init(r6326484);
        mpfr_init_set_str(r6326485, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r6326486);
        mpfr_init(r6326487);
        mpfr_init(r6326488);
        mpfr_init_set_str(r6326489, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r6326490);
        mpfr_init(r6326491);
        mpfr_init_set_str(r6326492, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r6326493);
        mpfr_init(r6326494);
        mpfr_init(r6326495);
}

double f_dm(double x) {
        mpfr_set_d(r6326479, x, MPFR_RNDN);
        mpfr_mul(r6326480, r6326479, r6326479, MPFR_RNDN);
        mpfr_mul(r6326481, r6326480, r6326480, MPFR_RNDN);
        ;
        mpfr_mul(r6326483, r6326482, r6326479, MPFR_RNDN);
        mpfr_mul(r6326484, r6326480, r6326483, MPFR_RNDN);
        ;
        mpfr_mul(r6326486, r6326479, r6326485, MPFR_RNDN);
        mpfr_add(r6326487, r6326484, r6326486, MPFR_RNDN);
        mpfr_mul(r6326488, r6326481, r6326487, MPFR_RNDN);
        ;
        mpfr_mul(r6326490, r6326489, r6326479, MPFR_RNDN);
        mpfr_mul(r6326491, r6326490, r6326479, MPFR_RNDN);
        ;
        mpfr_add(r6326493, r6326491, r6326492, MPFR_RNDN);
        mpfr_mul(r6326494, r6326479, r6326493, MPFR_RNDN);
        mpfr_add(r6326495, r6326488, r6326494, MPFR_RNDN);
        return mpfr_get_d(r6326495, MPFR_RNDN);
}

