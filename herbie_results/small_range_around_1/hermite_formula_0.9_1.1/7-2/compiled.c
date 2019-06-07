#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r46349415 = -2.0;
        float r46349416 = 4.0;
        float r46349417 = x;
        float r46349418 = r46349417 * r46349417;
        float r46349419 = r46349416 * r46349418;
        float r46349420 = r46349415 + r46349419;
        return r46349420;
}

double f_id(double x) {
        double r46349421 = -2.0;
        double r46349422 = 4.0;
        double r46349423 = x;
        double r46349424 = r46349423 * r46349423;
        double r46349425 = r46349422 * r46349424;
        double r46349426 = r46349421 + r46349425;
        return r46349426;
}


double f_of(float x) {
        float r46349427 = 4.0;
        float r46349428 = x;
        float r46349429 = r46349427 * r46349428;
        float r46349430 = r46349429 * r46349428;
        float r46349431 = 4;
        float r46349432 = exp(r46349431);
        float r46349433 = log(r46349428);
        float r46349434 = pow(r46349432, r46349433);
        float r46349435 = r46349430 / r46349434;
        float r46349436 = 0.125;
        float r46349437 = 2.0;
        float r46349438 = r46349427 * r46349427;
        float r46349439 = r46349437 / r46349438;
        float r46349440 = r46349436 - r46349439;
        float r46349441 = r46349435 * r46349440;
        float r46349442 = 1;
        float r46349443 = 0.5;
        float r46349444 = r46349443 / r46349428;
        float r46349445 = r46349444 / r46349428;
        float r46349446 = r46349442 - r46349445;
        float r46349447 = r46349428 * r46349427;
        float r46349448 = r46349428 * r46349447;
        float r46349449 = r46349446 * r46349448;
        float r46349450 = r46349441 + r46349449;
        return r46349450;
}

double f_od(double x) {
        double r46349451 = 4.0;
        double r46349452 = x;
        double r46349453 = r46349451 * r46349452;
        double r46349454 = r46349453 * r46349452;
        double r46349455 = 4;
        double r46349456 = exp(r46349455);
        double r46349457 = log(r46349452);
        double r46349458 = pow(r46349456, r46349457);
        double r46349459 = r46349454 / r46349458;
        double r46349460 = 0.125;
        double r46349461 = 2.0;
        double r46349462 = r46349451 * r46349451;
        double r46349463 = r46349461 / r46349462;
        double r46349464 = r46349460 - r46349463;
        double r46349465 = r46349459 * r46349464;
        double r46349466 = 1;
        double r46349467 = 0.5;
        double r46349468 = r46349467 / r46349452;
        double r46349469 = r46349468 / r46349452;
        double r46349470 = r46349466 - r46349469;
        double r46349471 = r46349452 * r46349451;
        double r46349472 = r46349452 * r46349471;
        double r46349473 = r46349470 * r46349472;
        double r46349474 = r46349465 + r46349473;
        return r46349474;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46349475, r46349476, r46349477, r46349478, r46349479, r46349480;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349475, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349476, "4.0", 10, MPFR_RNDN);
        mpfr_init(r46349477);
        mpfr_init(r46349478);
        mpfr_init(r46349479);
        mpfr_init(r46349480);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r46349477, x, MPFR_RNDN);
        mpfr_mul(r46349478, r46349477, r46349477, MPFR_RNDN);
        mpfr_mul(r46349479, r46349476, r46349478, MPFR_RNDN);
        mpfr_add(r46349480, r46349475, r46349479, MPFR_RNDN);
        return mpfr_get_d(r46349480, MPFR_RNDN);
}

static mpfr_t r46349481, r46349482, r46349483, r46349484, r46349485, r46349486, r46349487, r46349488, r46349489, r46349490, r46349491, r46349492, r46349493, r46349494, r46349495, r46349496, r46349497, r46349498, r46349499, r46349500, r46349501, r46349502, r46349503, r46349504;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349481, "4.0", 10, MPFR_RNDN);
        mpfr_init(r46349482);
        mpfr_init(r46349483);
        mpfr_init(r46349484);
        mpfr_init_set_str(r46349485, "4", 10, MPFR_RNDN);
        mpfr_init(r46349486);
        mpfr_init(r46349487);
        mpfr_init(r46349488);
        mpfr_init(r46349489);
        mpfr_init_set_str(r46349490, "0.125", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349491, "2.0", 10, MPFR_RNDN);
        mpfr_init(r46349492);
        mpfr_init(r46349493);
        mpfr_init(r46349494);
        mpfr_init(r46349495);
        mpfr_init_set_str(r46349496, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349497, "0.5", 10, MPFR_RNDN);
        mpfr_init(r46349498);
        mpfr_init(r46349499);
        mpfr_init(r46349500);
        mpfr_init(r46349501);
        mpfr_init(r46349502);
        mpfr_init(r46349503);
        mpfr_init(r46349504);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r46349482, x, MPFR_RNDN);
        mpfr_mul(r46349483, r46349481, r46349482, MPFR_RNDN);
        mpfr_mul(r46349484, r46349483, r46349482, MPFR_RNDN);
        ;
        mpfr_exp(r46349486, r46349485, MPFR_RNDN);
        mpfr_log(r46349487, r46349482, MPFR_RNDN);
        mpfr_pow(r46349488, r46349486, r46349487, MPFR_RNDN);
        mpfr_div(r46349489, r46349484, r46349488, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r46349492, r46349481, r46349481, MPFR_RNDN);
        mpfr_div(r46349493, r46349491, r46349492, MPFR_RNDN);
        mpfr_sub(r46349494, r46349490, r46349493, MPFR_RNDN);
        mpfr_mul(r46349495, r46349489, r46349494, MPFR_RNDN);
        ;
        ;
        mpfr_div(r46349498, r46349497, r46349482, MPFR_RNDN);
        mpfr_div(r46349499, r46349498, r46349482, MPFR_RNDN);
        mpfr_sub(r46349500, r46349496, r46349499, MPFR_RNDN);
        mpfr_mul(r46349501, r46349482, r46349481, MPFR_RNDN);
        mpfr_mul(r46349502, r46349482, r46349501, MPFR_RNDN);
        mpfr_mul(r46349503, r46349500, r46349502, MPFR_RNDN);
        mpfr_add(r46349504, r46349495, r46349503, MPFR_RNDN);
        return mpfr_get_d(r46349504, MPFR_RNDN);
}

static mpfr_t r46349505, r46349506, r46349507, r46349508, r46349509, r46349510, r46349511, r46349512, r46349513, r46349514, r46349515, r46349516, r46349517, r46349518, r46349519, r46349520, r46349521, r46349522, r46349523, r46349524, r46349525, r46349526, r46349527, r46349528;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46349505, "4.0", 10, MPFR_RNDN);
        mpfr_init(r46349506);
        mpfr_init(r46349507);
        mpfr_init(r46349508);
        mpfr_init_set_str(r46349509, "4", 10, MPFR_RNDN);
        mpfr_init(r46349510);
        mpfr_init(r46349511);
        mpfr_init(r46349512);
        mpfr_init(r46349513);
        mpfr_init_set_str(r46349514, "0.125", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349515, "2.0", 10, MPFR_RNDN);
        mpfr_init(r46349516);
        mpfr_init(r46349517);
        mpfr_init(r46349518);
        mpfr_init(r46349519);
        mpfr_init_set_str(r46349520, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r46349521, "0.5", 10, MPFR_RNDN);
        mpfr_init(r46349522);
        mpfr_init(r46349523);
        mpfr_init(r46349524);
        mpfr_init(r46349525);
        mpfr_init(r46349526);
        mpfr_init(r46349527);
        mpfr_init(r46349528);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r46349506, x, MPFR_RNDN);
        mpfr_mul(r46349507, r46349505, r46349506, MPFR_RNDN);
        mpfr_mul(r46349508, r46349507, r46349506, MPFR_RNDN);
        ;
        mpfr_exp(r46349510, r46349509, MPFR_RNDN);
        mpfr_log(r46349511, r46349506, MPFR_RNDN);
        mpfr_pow(r46349512, r46349510, r46349511, MPFR_RNDN);
        mpfr_div(r46349513, r46349508, r46349512, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r46349516, r46349505, r46349505, MPFR_RNDN);
        mpfr_div(r46349517, r46349515, r46349516, MPFR_RNDN);
        mpfr_sub(r46349518, r46349514, r46349517, MPFR_RNDN);
        mpfr_mul(r46349519, r46349513, r46349518, MPFR_RNDN);
        ;
        ;
        mpfr_div(r46349522, r46349521, r46349506, MPFR_RNDN);
        mpfr_div(r46349523, r46349522, r46349506, MPFR_RNDN);
        mpfr_sub(r46349524, r46349520, r46349523, MPFR_RNDN);
        mpfr_mul(r46349525, r46349506, r46349505, MPFR_RNDN);
        mpfr_mul(r46349526, r46349506, r46349525, MPFR_RNDN);
        mpfr_mul(r46349527, r46349524, r46349526, MPFR_RNDN);
        mpfr_add(r46349528, r46349519, r46349527, MPFR_RNDN);
        return mpfr_get_d(r46349528, MPFR_RNDN);
}

