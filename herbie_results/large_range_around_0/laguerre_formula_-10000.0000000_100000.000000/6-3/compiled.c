#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10921401 = 1.0;
        float r10921402 = -3.0;
        float r10921403 = x;
        float r10921404 = r10921402 * r10921403;
        float r10921405 = r10921401 + r10921404;
        float r10921406 = 1.5;
        float r10921407 = r10921403 * r10921403;
        float r10921408 = r10921406 * r10921407;
        float r10921409 = r10921405 + r10921408;
        float r10921410 = -0.166667;
        float r10921411 = r10921407 * r10921403;
        float r10921412 = r10921410 * r10921411;
        float r10921413 = r10921409 + r10921412;
        return r10921413;
}

double f_id(double x) {
        double r10921414 = 1.0;
        double r10921415 = -3.0;
        double r10921416 = x;
        double r10921417 = r10921415 * r10921416;
        double r10921418 = r10921414 + r10921417;
        double r10921419 = 1.5;
        double r10921420 = r10921416 * r10921416;
        double r10921421 = r10921419 * r10921420;
        double r10921422 = r10921418 + r10921421;
        double r10921423 = -0.166667;
        double r10921424 = r10921420 * r10921416;
        double r10921425 = r10921423 * r10921424;
        double r10921426 = r10921422 + r10921425;
        return r10921426;
}


double f_of(float x) {
        float r10921427 = 1.0;
        float r10921428 = -3.0;
        float r10921429 = x;
        float r10921430 = r10921428 * r10921429;
        float r10921431 = r10921427 + r10921430;
        float r10921432 = 1.5;
        float r10921433 = r10921429 * r10921429;
        float r10921434 = r10921432 * r10921433;
        float r10921435 = r10921431 + r10921434;
        float r10921436 = cbrt(r10921435);
        float r10921437 = r10921436 * r10921436;
        float r10921438 = r10921437 * r10921436;
        float r10921439 = -0.166667;
        float r10921440 = r10921433 * r10921429;
        float r10921441 = r10921439 * r10921440;
        float r10921442 = r10921438 + r10921441;
        return r10921442;
}

double f_od(double x) {
        double r10921443 = 1.0;
        double r10921444 = -3.0;
        double r10921445 = x;
        double r10921446 = r10921444 * r10921445;
        double r10921447 = r10921443 + r10921446;
        double r10921448 = 1.5;
        double r10921449 = r10921445 * r10921445;
        double r10921450 = r10921448 * r10921449;
        double r10921451 = r10921447 + r10921450;
        double r10921452 = cbrt(r10921451);
        double r10921453 = r10921452 * r10921452;
        double r10921454 = r10921453 * r10921452;
        double r10921455 = -0.166667;
        double r10921456 = r10921449 * r10921445;
        double r10921457 = r10921455 * r10921456;
        double r10921458 = r10921454 + r10921457;
        return r10921458;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10921459, r10921460, r10921461, r10921462, r10921463, r10921464, r10921465, r10921466, r10921467, r10921468, r10921469, r10921470, r10921471;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10921459, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921460, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10921461);
        mpfr_init(r10921462);
        mpfr_init(r10921463);
        mpfr_init_set_str(r10921464, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10921465);
        mpfr_init(r10921466);
        mpfr_init(r10921467);
        mpfr_init_set_str(r10921468, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10921469);
        mpfr_init(r10921470);
        mpfr_init(r10921471);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10921461, x, MPFR_RNDN);
        mpfr_mul(r10921462, r10921460, r10921461, MPFR_RNDN);
        mpfr_add(r10921463, r10921459, r10921462, MPFR_RNDN);
        ;
        mpfr_mul(r10921465, r10921461, r10921461, MPFR_RNDN);
        mpfr_mul(r10921466, r10921464, r10921465, MPFR_RNDN);
        mpfr_add(r10921467, r10921463, r10921466, MPFR_RNDN);
        ;
        mpfr_mul(r10921469, r10921465, r10921461, MPFR_RNDN);
        mpfr_mul(r10921470, r10921468, r10921469, MPFR_RNDN);
        mpfr_add(r10921471, r10921467, r10921470, MPFR_RNDN);
        return mpfr_get_d(r10921471, MPFR_RNDN);
}

static mpfr_t r10921472, r10921473, r10921474, r10921475, r10921476, r10921477, r10921478, r10921479, r10921480, r10921481, r10921482, r10921483, r10921484, r10921485, r10921486, r10921487;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10921472, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921473, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10921474);
        mpfr_init(r10921475);
        mpfr_init(r10921476);
        mpfr_init_set_str(r10921477, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10921478);
        mpfr_init(r10921479);
        mpfr_init(r10921480);
        mpfr_init(r10921481);
        mpfr_init(r10921482);
        mpfr_init(r10921483);
        mpfr_init_set_str(r10921484, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10921485);
        mpfr_init(r10921486);
        mpfr_init(r10921487);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10921474, x, MPFR_RNDN);
        mpfr_mul(r10921475, r10921473, r10921474, MPFR_RNDN);
        mpfr_add(r10921476, r10921472, r10921475, MPFR_RNDN);
        ;
        mpfr_mul(r10921478, r10921474, r10921474, MPFR_RNDN);
        mpfr_mul(r10921479, r10921477, r10921478, MPFR_RNDN);
        mpfr_add(r10921480, r10921476, r10921479, MPFR_RNDN);
        mpfr_cbrt(r10921481, r10921480, MPFR_RNDN);
        mpfr_mul(r10921482, r10921481, r10921481, MPFR_RNDN);
        mpfr_mul(r10921483, r10921482, r10921481, MPFR_RNDN);
        ;
        mpfr_mul(r10921485, r10921478, r10921474, MPFR_RNDN);
        mpfr_mul(r10921486, r10921484, r10921485, MPFR_RNDN);
        mpfr_add(r10921487, r10921483, r10921486, MPFR_RNDN);
        return mpfr_get_d(r10921487, MPFR_RNDN);
}

static mpfr_t r10921488, r10921489, r10921490, r10921491, r10921492, r10921493, r10921494, r10921495, r10921496, r10921497, r10921498, r10921499, r10921500, r10921501, r10921502, r10921503;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10921488, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10921489, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10921490);
        mpfr_init(r10921491);
        mpfr_init(r10921492);
        mpfr_init_set_str(r10921493, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10921494);
        mpfr_init(r10921495);
        mpfr_init(r10921496);
        mpfr_init(r10921497);
        mpfr_init(r10921498);
        mpfr_init(r10921499);
        mpfr_init_set_str(r10921500, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10921501);
        mpfr_init(r10921502);
        mpfr_init(r10921503);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10921490, x, MPFR_RNDN);
        mpfr_mul(r10921491, r10921489, r10921490, MPFR_RNDN);
        mpfr_add(r10921492, r10921488, r10921491, MPFR_RNDN);
        ;
        mpfr_mul(r10921494, r10921490, r10921490, MPFR_RNDN);
        mpfr_mul(r10921495, r10921493, r10921494, MPFR_RNDN);
        mpfr_add(r10921496, r10921492, r10921495, MPFR_RNDN);
        mpfr_cbrt(r10921497, r10921496, MPFR_RNDN);
        mpfr_mul(r10921498, r10921497, r10921497, MPFR_RNDN);
        mpfr_mul(r10921499, r10921498, r10921497, MPFR_RNDN);
        ;
        mpfr_mul(r10921501, r10921494, r10921490, MPFR_RNDN);
        mpfr_mul(r10921502, r10921500, r10921501, MPFR_RNDN);
        mpfr_add(r10921503, r10921499, r10921502, MPFR_RNDN);
        return mpfr_get_d(r10921503, MPFR_RNDN);
}

