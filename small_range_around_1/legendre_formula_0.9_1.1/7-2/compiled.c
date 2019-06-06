#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r31481418 = -0.5;
        float r31481419 = 1.5;
        float r31481420 = x;
        float r31481421 = r31481420 * r31481420;
        float r31481422 = r31481419 * r31481421;
        float r31481423 = r31481418 + r31481422;
        return r31481423;
}

double f_id(double x) {
        double r31481424 = -0.5;
        double r31481425 = 1.5;
        double r31481426 = x;
        double r31481427 = r31481426 * r31481426;
        double r31481428 = r31481425 * r31481427;
        double r31481429 = r31481424 + r31481428;
        return r31481429;
}


double f_of(float x) {
        float r31481430 = x;
        float r31481431 = 4;
        float r31481432 = pow(r31481430, r31481431);
        float r31481433 = 2.25;
        float r31481434 = r31481432 * r31481433;
        float r31481435 = 0.25;
        float r31481436 = 1.5;
        float r31481437 = r31481436 * r31481430;
        float r31481438 = r31481437 * r31481430;
        float r31481439 = r31481435 - r31481438;
        float r31481440 = r31481434 + r31481439;
        float r31481441 = 3;
        float r31481442 = pow(r31481440, r31481441);
        float r31481443 = cbrt(r31481442);
        float r31481444 = r31481430 * r31481430;
        float r31481445 = r31481444 * r31481436;
        float r31481446 = -0.5;
        float r31481447 = r31481445 + r31481446;
        float r31481448 = r31481443 * r31481447;
        float r31481449 = cbrt(r31481448);
        return r31481449;
}

double f_od(double x) {
        double r31481450 = x;
        double r31481451 = 4;
        double r31481452 = pow(r31481450, r31481451);
        double r31481453 = 2.25;
        double r31481454 = r31481452 * r31481453;
        double r31481455 = 0.25;
        double r31481456 = 1.5;
        double r31481457 = r31481456 * r31481450;
        double r31481458 = r31481457 * r31481450;
        double r31481459 = r31481455 - r31481458;
        double r31481460 = r31481454 + r31481459;
        double r31481461 = 3;
        double r31481462 = pow(r31481460, r31481461);
        double r31481463 = cbrt(r31481462);
        double r31481464 = r31481450 * r31481450;
        double r31481465 = r31481464 * r31481456;
        double r31481466 = -0.5;
        double r31481467 = r31481465 + r31481466;
        double r31481468 = r31481463 * r31481467;
        double r31481469 = cbrt(r31481468);
        return r31481469;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31481470, r31481471, r31481472, r31481473, r31481474, r31481475;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31481470, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481471, "1.5", 10, MPFR_RNDN);
        mpfr_init(r31481472);
        mpfr_init(r31481473);
        mpfr_init(r31481474);
        mpfr_init(r31481475);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r31481472, x, MPFR_RNDN);
        mpfr_mul(r31481473, r31481472, r31481472, MPFR_RNDN);
        mpfr_mul(r31481474, r31481471, r31481473, MPFR_RNDN);
        mpfr_add(r31481475, r31481470, r31481474, MPFR_RNDN);
        return mpfr_get_d(r31481475, MPFR_RNDN);
}

static mpfr_t r31481476, r31481477, r31481478, r31481479, r31481480, r31481481, r31481482, r31481483, r31481484, r31481485, r31481486, r31481487, r31481488, r31481489, r31481490, r31481491, r31481492, r31481493, r31481494, r31481495;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31481476);
        mpfr_init_set_str(r31481477, "4", 10, MPFR_RNDN);
        mpfr_init(r31481478);
        mpfr_init_set_str(r31481479, "2.25", 10, MPFR_RNDN);
        mpfr_init(r31481480);
        mpfr_init_set_str(r31481481, "0.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481482, "1.5", 10, MPFR_RNDN);
        mpfr_init(r31481483);
        mpfr_init(r31481484);
        mpfr_init(r31481485);
        mpfr_init(r31481486);
        mpfr_init_set_str(r31481487, "3", 10, MPFR_RNDN);
        mpfr_init(r31481488);
        mpfr_init(r31481489);
        mpfr_init(r31481490);
        mpfr_init(r31481491);
        mpfr_init_set_str(r31481492, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r31481493);
        mpfr_init(r31481494);
        mpfr_init(r31481495);
}

double f_fm(double x) {
        mpfr_set_d(r31481476, x, MPFR_RNDN);
        ;
        mpfr_pow(r31481478, r31481476, r31481477, MPFR_RNDN);
        ;
        mpfr_mul(r31481480, r31481478, r31481479, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r31481483, r31481482, r31481476, MPFR_RNDN);
        mpfr_mul(r31481484, r31481483, r31481476, MPFR_RNDN);
        mpfr_sub(r31481485, r31481481, r31481484, MPFR_RNDN);
        mpfr_add(r31481486, r31481480, r31481485, MPFR_RNDN);
        ;
        mpfr_pow(r31481488, r31481486, r31481487, MPFR_RNDN);
        mpfr_cbrt(r31481489, r31481488, MPFR_RNDN);
        mpfr_mul(r31481490, r31481476, r31481476, MPFR_RNDN);
        mpfr_mul(r31481491, r31481490, r31481482, MPFR_RNDN);
        ;
        mpfr_add(r31481493, r31481491, r31481492, MPFR_RNDN);
        mpfr_mul(r31481494, r31481489, r31481493, MPFR_RNDN);
        mpfr_cbrt(r31481495, r31481494, MPFR_RNDN);
        return mpfr_get_d(r31481495, MPFR_RNDN);
}

static mpfr_t r31481496, r31481497, r31481498, r31481499, r31481500, r31481501, r31481502, r31481503, r31481504, r31481505, r31481506, r31481507, r31481508, r31481509, r31481510, r31481511, r31481512, r31481513, r31481514, r31481515;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31481496);
        mpfr_init_set_str(r31481497, "4", 10, MPFR_RNDN);
        mpfr_init(r31481498);
        mpfr_init_set_str(r31481499, "2.25", 10, MPFR_RNDN);
        mpfr_init(r31481500);
        mpfr_init_set_str(r31481501, "0.25", 10, MPFR_RNDN);
        mpfr_init_set_str(r31481502, "1.5", 10, MPFR_RNDN);
        mpfr_init(r31481503);
        mpfr_init(r31481504);
        mpfr_init(r31481505);
        mpfr_init(r31481506);
        mpfr_init_set_str(r31481507, "3", 10, MPFR_RNDN);
        mpfr_init(r31481508);
        mpfr_init(r31481509);
        mpfr_init(r31481510);
        mpfr_init(r31481511);
        mpfr_init_set_str(r31481512, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r31481513);
        mpfr_init(r31481514);
        mpfr_init(r31481515);
}

double f_dm(double x) {
        mpfr_set_d(r31481496, x, MPFR_RNDN);
        ;
        mpfr_pow(r31481498, r31481496, r31481497, MPFR_RNDN);
        ;
        mpfr_mul(r31481500, r31481498, r31481499, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r31481503, r31481502, r31481496, MPFR_RNDN);
        mpfr_mul(r31481504, r31481503, r31481496, MPFR_RNDN);
        mpfr_sub(r31481505, r31481501, r31481504, MPFR_RNDN);
        mpfr_add(r31481506, r31481500, r31481505, MPFR_RNDN);
        ;
        mpfr_pow(r31481508, r31481506, r31481507, MPFR_RNDN);
        mpfr_cbrt(r31481509, r31481508, MPFR_RNDN);
        mpfr_mul(r31481510, r31481496, r31481496, MPFR_RNDN);
        mpfr_mul(r31481511, r31481510, r31481502, MPFR_RNDN);
        ;
        mpfr_add(r31481513, r31481511, r31481512, MPFR_RNDN);
        mpfr_mul(r31481514, r31481509, r31481513, MPFR_RNDN);
        mpfr_cbrt(r31481515, r31481514, MPFR_RNDN);
        return mpfr_get_d(r31481515, MPFR_RNDN);
}

