#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8830421 = 1.0;
        float r8830422 = -3.0;
        float r8830423 = x;
        float r8830424 = r8830422 * r8830423;
        float r8830425 = r8830421 + r8830424;
        float r8830426 = 1.5;
        float r8830427 = r8830423 * r8830423;
        float r8830428 = r8830426 * r8830427;
        float r8830429 = r8830425 + r8830428;
        float r8830430 = -0.166667;
        float r8830431 = r8830427 * r8830423;
        float r8830432 = r8830430 * r8830431;
        float r8830433 = r8830429 + r8830432;
        return r8830433;
}

double f_id(double x) {
        double r8830434 = 1.0;
        double r8830435 = -3.0;
        double r8830436 = x;
        double r8830437 = r8830435 * r8830436;
        double r8830438 = r8830434 + r8830437;
        double r8830439 = 1.5;
        double r8830440 = r8830436 * r8830436;
        double r8830441 = r8830439 * r8830440;
        double r8830442 = r8830438 + r8830441;
        double r8830443 = -0.166667;
        double r8830444 = r8830440 * r8830436;
        double r8830445 = r8830443 * r8830444;
        double r8830446 = r8830442 + r8830445;
        return r8830446;
}


double f_of(float x) {
        float r8830447 = x;
        float r8830448 = -3.0;
        float r8830449 = r8830447 * r8830448;
        float r8830450 = 1.0;
        float r8830451 = r8830449 + r8830450;
        float r8830452 = 1.5;
        float r8830453 = -0.166667;
        float r8830454 = r8830453 * r8830447;
        float r8830455 = r8830452 + r8830454;
        float r8830456 = r8830455 * r8830447;
        float r8830457 = r8830456 * r8830447;
        float r8830458 = r8830451 + r8830457;
        return r8830458;
}

double f_od(double x) {
        double r8830459 = x;
        double r8830460 = -3.0;
        double r8830461 = r8830459 * r8830460;
        double r8830462 = 1.0;
        double r8830463 = r8830461 + r8830462;
        double r8830464 = 1.5;
        double r8830465 = -0.166667;
        double r8830466 = r8830465 * r8830459;
        double r8830467 = r8830464 + r8830466;
        double r8830468 = r8830467 * r8830459;
        double r8830469 = r8830468 * r8830459;
        double r8830470 = r8830463 + r8830469;
        return r8830470;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8830471, r8830472, r8830473, r8830474, r8830475, r8830476, r8830477, r8830478, r8830479, r8830480, r8830481, r8830482, r8830483;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8830471, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830472, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r8830473);
        mpfr_init(r8830474);
        mpfr_init(r8830475);
        mpfr_init_set_str(r8830476, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8830477);
        mpfr_init(r8830478);
        mpfr_init(r8830479);
        mpfr_init_set_str(r8830480, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r8830481);
        mpfr_init(r8830482);
        mpfr_init(r8830483);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8830473, x, MPFR_RNDN);
        mpfr_mul(r8830474, r8830472, r8830473, MPFR_RNDN);
        mpfr_add(r8830475, r8830471, r8830474, MPFR_RNDN);
        ;
        mpfr_mul(r8830477, r8830473, r8830473, MPFR_RNDN);
        mpfr_mul(r8830478, r8830476, r8830477, MPFR_RNDN);
        mpfr_add(r8830479, r8830475, r8830478, MPFR_RNDN);
        ;
        mpfr_mul(r8830481, r8830477, r8830473, MPFR_RNDN);
        mpfr_mul(r8830482, r8830480, r8830481, MPFR_RNDN);
        mpfr_add(r8830483, r8830479, r8830482, MPFR_RNDN);
        return mpfr_get_d(r8830483, MPFR_RNDN);
}

static mpfr_t r8830484, r8830485, r8830486, r8830487, r8830488, r8830489, r8830490, r8830491, r8830492, r8830493, r8830494, r8830495;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8830484);
        mpfr_init_set_str(r8830485, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r8830486);
        mpfr_init_set_str(r8830487, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8830488);
        mpfr_init_set_str(r8830489, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830490, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r8830491);
        mpfr_init(r8830492);
        mpfr_init(r8830493);
        mpfr_init(r8830494);
        mpfr_init(r8830495);
}

double f_fm(double x) {
        mpfr_set_d(r8830484, x, MPFR_RNDN);
        ;
        mpfr_mul(r8830486, r8830484, r8830485, MPFR_RNDN);
        ;
        mpfr_add(r8830488, r8830486, r8830487, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8830491, r8830490, r8830484, MPFR_RNDN);
        mpfr_add(r8830492, r8830489, r8830491, MPFR_RNDN);
        mpfr_mul(r8830493, r8830492, r8830484, MPFR_RNDN);
        mpfr_mul(r8830494, r8830493, r8830484, MPFR_RNDN);
        mpfr_add(r8830495, r8830488, r8830494, MPFR_RNDN);
        return mpfr_get_d(r8830495, MPFR_RNDN);
}

static mpfr_t r8830496, r8830497, r8830498, r8830499, r8830500, r8830501, r8830502, r8830503, r8830504, r8830505, r8830506, r8830507;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8830496);
        mpfr_init_set_str(r8830497, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r8830498);
        mpfr_init_set_str(r8830499, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8830500);
        mpfr_init_set_str(r8830501, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830502, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r8830503);
        mpfr_init(r8830504);
        mpfr_init(r8830505);
        mpfr_init(r8830506);
        mpfr_init(r8830507);
}

double f_dm(double x) {
        mpfr_set_d(r8830496, x, MPFR_RNDN);
        ;
        mpfr_mul(r8830498, r8830496, r8830497, MPFR_RNDN);
        ;
        mpfr_add(r8830500, r8830498, r8830499, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8830503, r8830502, r8830496, MPFR_RNDN);
        mpfr_add(r8830504, r8830501, r8830503, MPFR_RNDN);
        mpfr_mul(r8830505, r8830504, r8830496, MPFR_RNDN);
        mpfr_mul(r8830506, r8830505, r8830496, MPFR_RNDN);
        mpfr_add(r8830507, r8830500, r8830506, MPFR_RNDN);
        return mpfr_get_d(r8830507, MPFR_RNDN);
}

