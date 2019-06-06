#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r98658414 = 1.0;
        float r98658415 = -3.0;
        float r98658416 = x;
        float r98658417 = r98658415 * r98658416;
        float r98658418 = r98658414 + r98658417;
        float r98658419 = 1.5;
        float r98658420 = r98658416 * r98658416;
        float r98658421 = r98658419 * r98658420;
        float r98658422 = r98658418 + r98658421;
        float r98658423 = -0.166667;
        float r98658424 = r98658420 * r98658416;
        float r98658425 = r98658423 * r98658424;
        float r98658426 = r98658422 + r98658425;
        return r98658426;
}

double f_id(double x) {
        double r98658427 = 1.0;
        double r98658428 = -3.0;
        double r98658429 = x;
        double r98658430 = r98658428 * r98658429;
        double r98658431 = r98658427 + r98658430;
        double r98658432 = 1.5;
        double r98658433 = r98658429 * r98658429;
        double r98658434 = r98658432 * r98658433;
        double r98658435 = r98658431 + r98658434;
        double r98658436 = -0.166667;
        double r98658437 = r98658433 * r98658429;
        double r98658438 = r98658436 * r98658437;
        double r98658439 = r98658435 + r98658438;
        return r98658439;
}


double f_of(float x) {
        float r98658440 = 1.0;
        float r98658441 = -3.0;
        float r98658442 = 1.5;
        float r98658443 = x;
        float r98658444 = r98658442 * r98658443;
        float r98658445 = r98658441 + r98658444;
        float r98658446 = r98658445 * r98658443;
        float r98658447 = r98658440 + r98658446;
        float r98658448 = -0.166667;
        float r98658449 = r98658443 * r98658443;
        float r98658450 = r98658449 * r98658443;
        float r98658451 = r98658448 * r98658450;
        float r98658452 = cbrt(r98658451);
        float r98658453 = r98658452 * r98658452;
        float r98658454 = cbrt(r98658453);
        float r98658455 = r98658454 * r98658454;
        float r98658456 = r98658455 * r98658454;
        float r98658457 = r98658456 * r98658452;
        float r98658458 = r98658447 + r98658457;
        return r98658458;
}

double f_od(double x) {
        double r98658459 = 1.0;
        double r98658460 = -3.0;
        double r98658461 = 1.5;
        double r98658462 = x;
        double r98658463 = r98658461 * r98658462;
        double r98658464 = r98658460 + r98658463;
        double r98658465 = r98658464 * r98658462;
        double r98658466 = r98658459 + r98658465;
        double r98658467 = -0.166667;
        double r98658468 = r98658462 * r98658462;
        double r98658469 = r98658468 * r98658462;
        double r98658470 = r98658467 * r98658469;
        double r98658471 = cbrt(r98658470);
        double r98658472 = r98658471 * r98658471;
        double r98658473 = cbrt(r98658472);
        double r98658474 = r98658473 * r98658473;
        double r98658475 = r98658474 * r98658473;
        double r98658476 = r98658475 * r98658471;
        double r98658477 = r98658466 + r98658476;
        return r98658477;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658478, r98658479, r98658480, r98658481, r98658482, r98658483, r98658484, r98658485, r98658486, r98658487, r98658488, r98658489, r98658490;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658478, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658479, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r98658480);
        mpfr_init(r98658481);
        mpfr_init(r98658482);
        mpfr_init_set_str(r98658483, "1.5", 10, MPFR_RNDN);
        mpfr_init(r98658484);
        mpfr_init(r98658485);
        mpfr_init(r98658486);
        mpfr_init_set_str(r98658487, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r98658488);
        mpfr_init(r98658489);
        mpfr_init(r98658490);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98658480, x, MPFR_RNDN);
        mpfr_mul(r98658481, r98658479, r98658480, MPFR_RNDN);
        mpfr_add(r98658482, r98658478, r98658481, MPFR_RNDN);
        ;
        mpfr_mul(r98658484, r98658480, r98658480, MPFR_RNDN);
        mpfr_mul(r98658485, r98658483, r98658484, MPFR_RNDN);
        mpfr_add(r98658486, r98658482, r98658485, MPFR_RNDN);
        ;
        mpfr_mul(r98658488, r98658484, r98658480, MPFR_RNDN);
        mpfr_mul(r98658489, r98658487, r98658488, MPFR_RNDN);
        mpfr_add(r98658490, r98658486, r98658489, MPFR_RNDN);
        return mpfr_get_d(r98658490, MPFR_RNDN);
}

static mpfr_t r98658491, r98658492, r98658493, r98658494, r98658495, r98658496, r98658497, r98658498, r98658499, r98658500, r98658501, r98658502, r98658503, r98658504, r98658505, r98658506, r98658507, r98658508, r98658509;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658491, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658492, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658493, "1.5", 10, MPFR_RNDN);
        mpfr_init(r98658494);
        mpfr_init(r98658495);
        mpfr_init(r98658496);
        mpfr_init(r98658497);
        mpfr_init(r98658498);
        mpfr_init_set_str(r98658499, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r98658500);
        mpfr_init(r98658501);
        mpfr_init(r98658502);
        mpfr_init(r98658503);
        mpfr_init(r98658504);
        mpfr_init(r98658505);
        mpfr_init(r98658506);
        mpfr_init(r98658507);
        mpfr_init(r98658508);
        mpfr_init(r98658509);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r98658494, x, MPFR_RNDN);
        mpfr_mul(r98658495, r98658493, r98658494, MPFR_RNDN);
        mpfr_add(r98658496, r98658492, r98658495, MPFR_RNDN);
        mpfr_mul(r98658497, r98658496, r98658494, MPFR_RNDN);
        mpfr_add(r98658498, r98658491, r98658497, MPFR_RNDN);
        ;
        mpfr_mul(r98658500, r98658494, r98658494, MPFR_RNDN);
        mpfr_mul(r98658501, r98658500, r98658494, MPFR_RNDN);
        mpfr_mul(r98658502, r98658499, r98658501, MPFR_RNDN);
        mpfr_cbrt(r98658503, r98658502, MPFR_RNDN);
        mpfr_mul(r98658504, r98658503, r98658503, MPFR_RNDN);
        mpfr_cbrt(r98658505, r98658504, MPFR_RNDN);
        mpfr_mul(r98658506, r98658505, r98658505, MPFR_RNDN);
        mpfr_mul(r98658507, r98658506, r98658505, MPFR_RNDN);
        mpfr_mul(r98658508, r98658507, r98658503, MPFR_RNDN);
        mpfr_add(r98658509, r98658498, r98658508, MPFR_RNDN);
        return mpfr_get_d(r98658509, MPFR_RNDN);
}

static mpfr_t r98658510, r98658511, r98658512, r98658513, r98658514, r98658515, r98658516, r98658517, r98658518, r98658519, r98658520, r98658521, r98658522, r98658523, r98658524, r98658525, r98658526, r98658527, r98658528;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658510, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658511, "-3.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658512, "1.5", 10, MPFR_RNDN);
        mpfr_init(r98658513);
        mpfr_init(r98658514);
        mpfr_init(r98658515);
        mpfr_init(r98658516);
        mpfr_init(r98658517);
        mpfr_init_set_str(r98658518, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r98658519);
        mpfr_init(r98658520);
        mpfr_init(r98658521);
        mpfr_init(r98658522);
        mpfr_init(r98658523);
        mpfr_init(r98658524);
        mpfr_init(r98658525);
        mpfr_init(r98658526);
        mpfr_init(r98658527);
        mpfr_init(r98658528);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r98658513, x, MPFR_RNDN);
        mpfr_mul(r98658514, r98658512, r98658513, MPFR_RNDN);
        mpfr_add(r98658515, r98658511, r98658514, MPFR_RNDN);
        mpfr_mul(r98658516, r98658515, r98658513, MPFR_RNDN);
        mpfr_add(r98658517, r98658510, r98658516, MPFR_RNDN);
        ;
        mpfr_mul(r98658519, r98658513, r98658513, MPFR_RNDN);
        mpfr_mul(r98658520, r98658519, r98658513, MPFR_RNDN);
        mpfr_mul(r98658521, r98658518, r98658520, MPFR_RNDN);
        mpfr_cbrt(r98658522, r98658521, MPFR_RNDN);
        mpfr_mul(r98658523, r98658522, r98658522, MPFR_RNDN);
        mpfr_cbrt(r98658524, r98658523, MPFR_RNDN);
        mpfr_mul(r98658525, r98658524, r98658524, MPFR_RNDN);
        mpfr_mul(r98658526, r98658525, r98658524, MPFR_RNDN);
        mpfr_mul(r98658527, r98658526, r98658522, MPFR_RNDN);
        mpfr_add(r98658528, r98658517, r98658527, MPFR_RNDN);
        return mpfr_get_d(r98658528, MPFR_RNDN);
}

