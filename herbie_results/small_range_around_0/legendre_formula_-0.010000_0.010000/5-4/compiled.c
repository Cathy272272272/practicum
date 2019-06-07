#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r4485446 = 0.375;
        float r4485447 = -3.75;
        float r4485448 = x;
        float r4485449 = r4485448 * r4485448;
        float r4485450 = r4485447 * r4485449;
        float r4485451 = r4485446 + r4485450;
        float r4485452 = 4.375;
        float r4485453 = r4485449 * r4485448;
        float r4485454 = r4485453 * r4485448;
        float r4485455 = r4485452 * r4485454;
        float r4485456 = r4485451 + r4485455;
        return r4485456;
}

double f_id(double x) {
        double r4485457 = 0.375;
        double r4485458 = -3.75;
        double r4485459 = x;
        double r4485460 = r4485459 * r4485459;
        double r4485461 = r4485458 * r4485460;
        double r4485462 = r4485457 + r4485461;
        double r4485463 = 4.375;
        double r4485464 = r4485460 * r4485459;
        double r4485465 = r4485464 * r4485459;
        double r4485466 = r4485463 * r4485465;
        double r4485467 = r4485462 + r4485466;
        return r4485467;
}


double f_of(float x) {
        float r4485468 = 0.375;
        float r4485469 = x;
        float r4485470 = 4.375;
        float r4485471 = r4485469 * r4485470;
        float r4485472 = 3;
        float r4485473 = pow(r4485469, r4485472);
        float r4485474 = r4485471 * r4485473;
        float r4485475 = -3.75;
        float r4485476 = r4485469 * r4485475;
        float r4485477 = r4485476 * r4485469;
        float r4485478 = r4485474 + r4485477;
        float r4485479 = r4485468 + r4485478;
        return r4485479;
}

double f_od(double x) {
        double r4485480 = 0.375;
        double r4485481 = x;
        double r4485482 = 4.375;
        double r4485483 = r4485481 * r4485482;
        double r4485484 = 3;
        double r4485485 = pow(r4485481, r4485484);
        double r4485486 = r4485483 * r4485485;
        double r4485487 = -3.75;
        double r4485488 = r4485481 * r4485487;
        double r4485489 = r4485488 * r4485481;
        double r4485490 = r4485486 + r4485489;
        double r4485491 = r4485480 + r4485490;
        return r4485491;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485492, r4485493, r4485494, r4485495, r4485496, r4485497, r4485498, r4485499, r4485500, r4485501, r4485502;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485492, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4485493, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4485494);
        mpfr_init(r4485495);
        mpfr_init(r4485496);
        mpfr_init(r4485497);
        mpfr_init_set_str(r4485498, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4485499);
        mpfr_init(r4485500);
        mpfr_init(r4485501);
        mpfr_init(r4485502);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4485494, x, MPFR_RNDN);
        mpfr_mul(r4485495, r4485494, r4485494, MPFR_RNDN);
        mpfr_mul(r4485496, r4485493, r4485495, MPFR_RNDN);
        mpfr_add(r4485497, r4485492, r4485496, MPFR_RNDN);
        ;
        mpfr_mul(r4485499, r4485495, r4485494, MPFR_RNDN);
        mpfr_mul(r4485500, r4485499, r4485494, MPFR_RNDN);
        mpfr_mul(r4485501, r4485498, r4485500, MPFR_RNDN);
        mpfr_add(r4485502, r4485497, r4485501, MPFR_RNDN);
        return mpfr_get_d(r4485502, MPFR_RNDN);
}

static mpfr_t r4485503, r4485504, r4485505, r4485506, r4485507, r4485508, r4485509, r4485510, r4485511, r4485512, r4485513, r4485514;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485503, "0.375", 10, MPFR_RNDN);
        mpfr_init(r4485504);
        mpfr_init_set_str(r4485505, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4485506);
        mpfr_init_set_str(r4485507, "3", 10, MPFR_RNDN);
        mpfr_init(r4485508);
        mpfr_init(r4485509);
        mpfr_init_set_str(r4485510, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4485511);
        mpfr_init(r4485512);
        mpfr_init(r4485513);
        mpfr_init(r4485514);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4485504, x, MPFR_RNDN);
        ;
        mpfr_mul(r4485506, r4485504, r4485505, MPFR_RNDN);
        ;
        mpfr_pow(r4485508, r4485504, r4485507, MPFR_RNDN);
        mpfr_mul(r4485509, r4485506, r4485508, MPFR_RNDN);
        ;
        mpfr_mul(r4485511, r4485504, r4485510, MPFR_RNDN);
        mpfr_mul(r4485512, r4485511, r4485504, MPFR_RNDN);
        mpfr_add(r4485513, r4485509, r4485512, MPFR_RNDN);
        mpfr_add(r4485514, r4485503, r4485513, MPFR_RNDN);
        return mpfr_get_d(r4485514, MPFR_RNDN);
}

static mpfr_t r4485515, r4485516, r4485517, r4485518, r4485519, r4485520, r4485521, r4485522, r4485523, r4485524, r4485525, r4485526;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4485515, "0.375", 10, MPFR_RNDN);
        mpfr_init(r4485516);
        mpfr_init_set_str(r4485517, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4485518);
        mpfr_init_set_str(r4485519, "3", 10, MPFR_RNDN);
        mpfr_init(r4485520);
        mpfr_init(r4485521);
        mpfr_init_set_str(r4485522, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4485523);
        mpfr_init(r4485524);
        mpfr_init(r4485525);
        mpfr_init(r4485526);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4485516, x, MPFR_RNDN);
        ;
        mpfr_mul(r4485518, r4485516, r4485517, MPFR_RNDN);
        ;
        mpfr_pow(r4485520, r4485516, r4485519, MPFR_RNDN);
        mpfr_mul(r4485521, r4485518, r4485520, MPFR_RNDN);
        ;
        mpfr_mul(r4485523, r4485516, r4485522, MPFR_RNDN);
        mpfr_mul(r4485524, r4485523, r4485516, MPFR_RNDN);
        mpfr_add(r4485525, r4485521, r4485524, MPFR_RNDN);
        mpfr_add(r4485526, r4485515, r4485525, MPFR_RNDN);
        return mpfr_get_d(r4485526, MPFR_RNDN);
}

