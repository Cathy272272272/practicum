#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r5316429 = 12.0;
        float r5316430 = -48.0;
        float r5316431 = x;
        float r5316432 = r5316431 * r5316431;
        float r5316433 = r5316430 * r5316432;
        float r5316434 = r5316429 + r5316433;
        float r5316435 = 16.0;
        float r5316436 = r5316432 * r5316431;
        float r5316437 = r5316436 * r5316431;
        float r5316438 = r5316435 * r5316437;
        float r5316439 = r5316434 + r5316438;
        return r5316439;
}

double f_id(double x) {
        double r5316440 = 12.0;
        double r5316441 = -48.0;
        double r5316442 = x;
        double r5316443 = r5316442 * r5316442;
        double r5316444 = r5316441 * r5316443;
        double r5316445 = r5316440 + r5316444;
        double r5316446 = 16.0;
        double r5316447 = r5316443 * r5316442;
        double r5316448 = r5316447 * r5316442;
        double r5316449 = r5316446 * r5316448;
        double r5316450 = r5316445 + r5316449;
        return r5316450;
}


double f_of(float x) {
        float r5316451 = 12.0;
        float r5316452 = x;
        float r5316453 = 3;
        float r5316454 = pow(r5316452, r5316453);
        float r5316455 = pow(r5316454, r5316453);
        float r5316456 = 16.0;
        float r5316457 = r5316452 * r5316456;
        float r5316458 = pow(r5316457, r5316453);
        float r5316459 = r5316455 * r5316458;
        float r5316460 = cbrt(r5316459);
        float r5316461 = -48.0;
        float r5316462 = r5316452 * r5316461;
        float r5316463 = r5316462 * r5316452;
        float r5316464 = r5316460 + r5316463;
        float r5316465 = r5316451 + r5316464;
        return r5316465;
}

double f_od(double x) {
        double r5316466 = 12.0;
        double r5316467 = x;
        double r5316468 = 3;
        double r5316469 = pow(r5316467, r5316468);
        double r5316470 = pow(r5316469, r5316468);
        double r5316471 = 16.0;
        double r5316472 = r5316467 * r5316471;
        double r5316473 = pow(r5316472, r5316468);
        double r5316474 = r5316470 * r5316473;
        double r5316475 = cbrt(r5316474);
        double r5316476 = -48.0;
        double r5316477 = r5316467 * r5316476;
        double r5316478 = r5316477 * r5316467;
        double r5316479 = r5316475 + r5316478;
        double r5316480 = r5316466 + r5316479;
        return r5316480;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316481, r5316482, r5316483, r5316484, r5316485, r5316486, r5316487, r5316488, r5316489, r5316490, r5316491;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316481, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316482, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r5316483);
        mpfr_init(r5316484);
        mpfr_init(r5316485);
        mpfr_init(r5316486);
        mpfr_init_set_str(r5316487, "16.0", 10, MPFR_RNDN);
        mpfr_init(r5316488);
        mpfr_init(r5316489);
        mpfr_init(r5316490);
        mpfr_init(r5316491);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5316483, x, MPFR_RNDN);
        mpfr_mul(r5316484, r5316483, r5316483, MPFR_RNDN);
        mpfr_mul(r5316485, r5316482, r5316484, MPFR_RNDN);
        mpfr_add(r5316486, r5316481, r5316485, MPFR_RNDN);
        ;
        mpfr_mul(r5316488, r5316484, r5316483, MPFR_RNDN);
        mpfr_mul(r5316489, r5316488, r5316483, MPFR_RNDN);
        mpfr_mul(r5316490, r5316487, r5316489, MPFR_RNDN);
        mpfr_add(r5316491, r5316486, r5316490, MPFR_RNDN);
        return mpfr_get_d(r5316491, MPFR_RNDN);
}

static mpfr_t r5316492, r5316493, r5316494, r5316495, r5316496, r5316497, r5316498, r5316499, r5316500, r5316501, r5316502, r5316503, r5316504, r5316505, r5316506;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316492, "12.0", 10, MPFR_RNDN);
        mpfr_init(r5316493);
        mpfr_init_set_str(r5316494, "3", 10, MPFR_RNDN);
        mpfr_init(r5316495);
        mpfr_init(r5316496);
        mpfr_init_set_str(r5316497, "16.0", 10, MPFR_RNDN);
        mpfr_init(r5316498);
        mpfr_init(r5316499);
        mpfr_init(r5316500);
        mpfr_init(r5316501);
        mpfr_init_set_str(r5316502, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r5316503);
        mpfr_init(r5316504);
        mpfr_init(r5316505);
        mpfr_init(r5316506);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5316493, x, MPFR_RNDN);
        ;
        mpfr_pow(r5316495, r5316493, r5316494, MPFR_RNDN);
        mpfr_pow(r5316496, r5316495, r5316494, MPFR_RNDN);
        ;
        mpfr_mul(r5316498, r5316493, r5316497, MPFR_RNDN);
        mpfr_pow(r5316499, r5316498, r5316494, MPFR_RNDN);
        mpfr_mul(r5316500, r5316496, r5316499, MPFR_RNDN);
        mpfr_cbrt(r5316501, r5316500, MPFR_RNDN);
        ;
        mpfr_mul(r5316503, r5316493, r5316502, MPFR_RNDN);
        mpfr_mul(r5316504, r5316503, r5316493, MPFR_RNDN);
        mpfr_add(r5316505, r5316501, r5316504, MPFR_RNDN);
        mpfr_add(r5316506, r5316492, r5316505, MPFR_RNDN);
        return mpfr_get_d(r5316506, MPFR_RNDN);
}

static mpfr_t r5316507, r5316508, r5316509, r5316510, r5316511, r5316512, r5316513, r5316514, r5316515, r5316516, r5316517, r5316518, r5316519, r5316520, r5316521;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5316507, "12.0", 10, MPFR_RNDN);
        mpfr_init(r5316508);
        mpfr_init_set_str(r5316509, "3", 10, MPFR_RNDN);
        mpfr_init(r5316510);
        mpfr_init(r5316511);
        mpfr_init_set_str(r5316512, "16.0", 10, MPFR_RNDN);
        mpfr_init(r5316513);
        mpfr_init(r5316514);
        mpfr_init(r5316515);
        mpfr_init(r5316516);
        mpfr_init_set_str(r5316517, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r5316518);
        mpfr_init(r5316519);
        mpfr_init(r5316520);
        mpfr_init(r5316521);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5316508, x, MPFR_RNDN);
        ;
        mpfr_pow(r5316510, r5316508, r5316509, MPFR_RNDN);
        mpfr_pow(r5316511, r5316510, r5316509, MPFR_RNDN);
        ;
        mpfr_mul(r5316513, r5316508, r5316512, MPFR_RNDN);
        mpfr_pow(r5316514, r5316513, r5316509, MPFR_RNDN);
        mpfr_mul(r5316515, r5316511, r5316514, MPFR_RNDN);
        mpfr_cbrt(r5316516, r5316515, MPFR_RNDN);
        ;
        mpfr_mul(r5316518, r5316508, r5316517, MPFR_RNDN);
        mpfr_mul(r5316519, r5316518, r5316508, MPFR_RNDN);
        mpfr_add(r5316520, r5316516, r5316519, MPFR_RNDN);
        mpfr_add(r5316521, r5316507, r5316520, MPFR_RNDN);
        return mpfr_get_d(r5316521, MPFR_RNDN);
}

