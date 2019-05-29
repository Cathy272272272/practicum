#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6513375 = 1.0;
        float r6513376 = -4.0;
        float r6513377 = x;
        float r6513378 = r6513376 * r6513377;
        float r6513379 = r6513375 + r6513378;
        float r6513380 = 3.0;
        float r6513381 = r6513377 * r6513377;
        float r6513382 = r6513380 * r6513381;
        float r6513383 = r6513379 + r6513382;
        float r6513384 = -0.666667;
        float r6513385 = r6513381 * r6513377;
        float r6513386 = r6513384 * r6513385;
        float r6513387 = r6513383 + r6513386;
        float r6513388 = 0.041667;
        float r6513389 = r6513385 * r6513377;
        float r6513390 = r6513388 * r6513389;
        float r6513391 = r6513387 + r6513390;
        return r6513391;
}

double f_id(double x) {
        double r6513392 = 1.0;
        double r6513393 = -4.0;
        double r6513394 = x;
        double r6513395 = r6513393 * r6513394;
        double r6513396 = r6513392 + r6513395;
        double r6513397 = 3.0;
        double r6513398 = r6513394 * r6513394;
        double r6513399 = r6513397 * r6513398;
        double r6513400 = r6513396 + r6513399;
        double r6513401 = -0.666667;
        double r6513402 = r6513398 * r6513394;
        double r6513403 = r6513401 * r6513402;
        double r6513404 = r6513400 + r6513403;
        double r6513405 = 0.041667;
        double r6513406 = r6513402 * r6513394;
        double r6513407 = r6513405 * r6513406;
        double r6513408 = r6513404 + r6513407;
        return r6513408;
}


double f_of(float x) {
        float r6513409 = x;
        float r6513410 = -4.0;
        float r6513411 = 3.0;
        float r6513412 = r6513409 * r6513411;
        float r6513413 = r6513410 + r6513412;
        float r6513414 = 0.041667;
        float r6513415 = r6513414 * r6513409;
        float r6513416 = r6513409 * r6513409;
        float r6513417 = r6513415 * r6513416;
        float r6513418 = r6513413 + r6513417;
        float r6513419 = r6513409 * r6513418;
        float r6513420 = 1;
        float r6513421 = r6513420 / r6513409;
        float r6513422 = -3;
        float r6513423 = pow(r6513421, r6513422);
        float r6513424 = -0.666667;
        float r6513425 = r6513423 * r6513424;
        float r6513426 = 1.0;
        float r6513427 = r6513425 + r6513426;
        float r6513428 = r6513419 + r6513427;
        return r6513428;
}

double f_od(double x) {
        double r6513429 = x;
        double r6513430 = -4.0;
        double r6513431 = 3.0;
        double r6513432 = r6513429 * r6513431;
        double r6513433 = r6513430 + r6513432;
        double r6513434 = 0.041667;
        double r6513435 = r6513434 * r6513429;
        double r6513436 = r6513429 * r6513429;
        double r6513437 = r6513435 * r6513436;
        double r6513438 = r6513433 + r6513437;
        double r6513439 = r6513429 * r6513438;
        double r6513440 = 1;
        double r6513441 = r6513440 / r6513429;
        double r6513442 = -3;
        double r6513443 = pow(r6513441, r6513442);
        double r6513444 = -0.666667;
        double r6513445 = r6513443 * r6513444;
        double r6513446 = 1.0;
        double r6513447 = r6513445 + r6513446;
        double r6513448 = r6513439 + r6513447;
        return r6513448;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6513449, r6513450, r6513451, r6513452, r6513453, r6513454, r6513455, r6513456, r6513457, r6513458, r6513459, r6513460, r6513461, r6513462, r6513463, r6513464, r6513465;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6513449, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513450, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r6513451);
        mpfr_init(r6513452);
        mpfr_init(r6513453);
        mpfr_init_set_str(r6513454, "3.0", 10, MPFR_RNDN);
        mpfr_init(r6513455);
        mpfr_init(r6513456);
        mpfr_init(r6513457);
        mpfr_init_set_str(r6513458, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r6513459);
        mpfr_init(r6513460);
        mpfr_init(r6513461);
        mpfr_init_set_str(r6513462, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r6513463);
        mpfr_init(r6513464);
        mpfr_init(r6513465);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6513451, x, MPFR_RNDN);
        mpfr_mul(r6513452, r6513450, r6513451, MPFR_RNDN);
        mpfr_add(r6513453, r6513449, r6513452, MPFR_RNDN);
        ;
        mpfr_mul(r6513455, r6513451, r6513451, MPFR_RNDN);
        mpfr_mul(r6513456, r6513454, r6513455, MPFR_RNDN);
        mpfr_add(r6513457, r6513453, r6513456, MPFR_RNDN);
        ;
        mpfr_mul(r6513459, r6513455, r6513451, MPFR_RNDN);
        mpfr_mul(r6513460, r6513458, r6513459, MPFR_RNDN);
        mpfr_add(r6513461, r6513457, r6513460, MPFR_RNDN);
        ;
        mpfr_mul(r6513463, r6513459, r6513451, MPFR_RNDN);
        mpfr_mul(r6513464, r6513462, r6513463, MPFR_RNDN);
        mpfr_add(r6513465, r6513461, r6513464, MPFR_RNDN);
        return mpfr_get_d(r6513465, MPFR_RNDN);
}

static mpfr_t r6513466, r6513467, r6513468, r6513469, r6513470, r6513471, r6513472, r6513473, r6513474, r6513475, r6513476, r6513477, r6513478, r6513479, r6513480, r6513481, r6513482, r6513483, r6513484, r6513485;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6513466);
        mpfr_init_set_str(r6513467, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513468, "3.0", 10, MPFR_RNDN);
        mpfr_init(r6513469);
        mpfr_init(r6513470);
        mpfr_init_set_str(r6513471, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r6513472);
        mpfr_init(r6513473);
        mpfr_init(r6513474);
        mpfr_init(r6513475);
        mpfr_init(r6513476);
        mpfr_init_set_str(r6513477, "1", 10, MPFR_RNDN);
        mpfr_init(r6513478);
        mpfr_init_set_str(r6513479, "-3", 10, MPFR_RNDN);
        mpfr_init(r6513480);
        mpfr_init_set_str(r6513481, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r6513482);
        mpfr_init_set_str(r6513483, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6513484);
        mpfr_init(r6513485);
}

double f_fm(double x) {
        mpfr_set_d(r6513466, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6513469, r6513466, r6513468, MPFR_RNDN);
        mpfr_add(r6513470, r6513467, r6513469, MPFR_RNDN);
        ;
        mpfr_mul(r6513472, r6513471, r6513466, MPFR_RNDN);
        mpfr_mul(r6513473, r6513466, r6513466, MPFR_RNDN);
        mpfr_mul(r6513474, r6513472, r6513473, MPFR_RNDN);
        mpfr_add(r6513475, r6513470, r6513474, MPFR_RNDN);
        mpfr_mul(r6513476, r6513466, r6513475, MPFR_RNDN);
        ;
        mpfr_div(r6513478, r6513477, r6513466, MPFR_RNDN);
        ;
        mpfr_pow(r6513480, r6513478, r6513479, MPFR_RNDN);
        ;
        mpfr_mul(r6513482, r6513480, r6513481, MPFR_RNDN);
        ;
        mpfr_add(r6513484, r6513482, r6513483, MPFR_RNDN);
        mpfr_add(r6513485, r6513476, r6513484, MPFR_RNDN);
        return mpfr_get_d(r6513485, MPFR_RNDN);
}

static mpfr_t r6513486, r6513487, r6513488, r6513489, r6513490, r6513491, r6513492, r6513493, r6513494, r6513495, r6513496, r6513497, r6513498, r6513499, r6513500, r6513501, r6513502, r6513503, r6513504, r6513505;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6513486);
        mpfr_init_set_str(r6513487, "-4.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513488, "3.0", 10, MPFR_RNDN);
        mpfr_init(r6513489);
        mpfr_init(r6513490);
        mpfr_init_set_str(r6513491, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r6513492);
        mpfr_init(r6513493);
        mpfr_init(r6513494);
        mpfr_init(r6513495);
        mpfr_init(r6513496);
        mpfr_init_set_str(r6513497, "1", 10, MPFR_RNDN);
        mpfr_init(r6513498);
        mpfr_init_set_str(r6513499, "-3", 10, MPFR_RNDN);
        mpfr_init(r6513500);
        mpfr_init_set_str(r6513501, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r6513502);
        mpfr_init_set_str(r6513503, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6513504);
        mpfr_init(r6513505);
}

double f_dm(double x) {
        mpfr_set_d(r6513486, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6513489, r6513486, r6513488, MPFR_RNDN);
        mpfr_add(r6513490, r6513487, r6513489, MPFR_RNDN);
        ;
        mpfr_mul(r6513492, r6513491, r6513486, MPFR_RNDN);
        mpfr_mul(r6513493, r6513486, r6513486, MPFR_RNDN);
        mpfr_mul(r6513494, r6513492, r6513493, MPFR_RNDN);
        mpfr_add(r6513495, r6513490, r6513494, MPFR_RNDN);
        mpfr_mul(r6513496, r6513486, r6513495, MPFR_RNDN);
        ;
        mpfr_div(r6513498, r6513497, r6513486, MPFR_RNDN);
        ;
        mpfr_pow(r6513500, r6513498, r6513499, MPFR_RNDN);
        ;
        mpfr_mul(r6513502, r6513500, r6513501, MPFR_RNDN);
        ;
        mpfr_add(r6513504, r6513502, r6513503, MPFR_RNDN);
        mpfr_add(r6513505, r6513496, r6513504, MPFR_RNDN);
        return mpfr_get_d(r6513505, MPFR_RNDN);
}

