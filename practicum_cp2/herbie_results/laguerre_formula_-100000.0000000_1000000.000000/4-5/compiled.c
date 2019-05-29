#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10216370 = 1.0;
        float r10216371 = -5.0;
        float r10216372 = x;
        float r10216373 = r10216371 * r10216372;
        float r10216374 = r10216370 + r10216373;
        float r10216375 = 5.0;
        float r10216376 = r10216372 * r10216372;
        float r10216377 = r10216375 * r10216376;
        float r10216378 = r10216374 + r10216377;
        float r10216379 = -1.666667;
        float r10216380 = r10216376 * r10216372;
        float r10216381 = r10216379 * r10216380;
        float r10216382 = r10216378 + r10216381;
        float r10216383 = 0.208333;
        float r10216384 = r10216380 * r10216372;
        float r10216385 = r10216383 * r10216384;
        float r10216386 = r10216382 + r10216385;
        float r10216387 = -0.008333;
        float r10216388 = r10216384 * r10216372;
        float r10216389 = r10216387 * r10216388;
        float r10216390 = r10216386 + r10216389;
        return r10216390;
}

double f_id(double x) {
        double r10216391 = 1.0;
        double r10216392 = -5.0;
        double r10216393 = x;
        double r10216394 = r10216392 * r10216393;
        double r10216395 = r10216391 + r10216394;
        double r10216396 = 5.0;
        double r10216397 = r10216393 * r10216393;
        double r10216398 = r10216396 * r10216397;
        double r10216399 = r10216395 + r10216398;
        double r10216400 = -1.666667;
        double r10216401 = r10216397 * r10216393;
        double r10216402 = r10216400 * r10216401;
        double r10216403 = r10216399 + r10216402;
        double r10216404 = 0.208333;
        double r10216405 = r10216401 * r10216393;
        double r10216406 = r10216404 * r10216405;
        double r10216407 = r10216403 + r10216406;
        double r10216408 = -0.008333;
        double r10216409 = r10216405 * r10216393;
        double r10216410 = r10216408 * r10216409;
        double r10216411 = r10216407 + r10216410;
        return r10216411;
}


double f_of(float x) {
        float r10216412 = x;
        float r10216413 = -5.0;
        float r10216414 = r10216412 * r10216413;
        float r10216415 = 1.0;
        float r10216416 = r10216414 + r10216415;
        float r10216417 = r10216412 * r10216412;
        float r10216418 = r10216417 * r10216417;
        float r10216419 = -0.008333;
        float r10216420 = r10216419 * r10216412;
        float r10216421 = 0.208333;
        float r10216422 = r10216420 + r10216421;
        float r10216423 = r10216418 * r10216422;
        float r10216424 = 3;
        float r10216425 = pow(r10216412, r10216424);
        float r10216426 = r10216425 * r10216425;
        float r10216427 = 5.0;
        float r10216428 = -1.666667;
        float r10216429 = r10216412 * r10216428;
        float r10216430 = r10216427 + r10216429;
        float r10216431 = r10216426 * r10216430;
        float r10216432 = r10216430 * r10216430;
        float r10216433 = r10216431 * r10216432;
        float r10216434 = cbrt(r10216433);
        float r10216435 = r10216423 + r10216434;
        float r10216436 = r10216416 + r10216435;
        return r10216436;
}

double f_od(double x) {
        double r10216437 = x;
        double r10216438 = -5.0;
        double r10216439 = r10216437 * r10216438;
        double r10216440 = 1.0;
        double r10216441 = r10216439 + r10216440;
        double r10216442 = r10216437 * r10216437;
        double r10216443 = r10216442 * r10216442;
        double r10216444 = -0.008333;
        double r10216445 = r10216444 * r10216437;
        double r10216446 = 0.208333;
        double r10216447 = r10216445 + r10216446;
        double r10216448 = r10216443 * r10216447;
        double r10216449 = 3;
        double r10216450 = pow(r10216437, r10216449);
        double r10216451 = r10216450 * r10216450;
        double r10216452 = 5.0;
        double r10216453 = -1.666667;
        double r10216454 = r10216437 * r10216453;
        double r10216455 = r10216452 + r10216454;
        double r10216456 = r10216451 * r10216455;
        double r10216457 = r10216455 * r10216455;
        double r10216458 = r10216456 * r10216457;
        double r10216459 = cbrt(r10216458);
        double r10216460 = r10216448 + r10216459;
        double r10216461 = r10216441 + r10216460;
        return r10216461;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10216462, r10216463, r10216464, r10216465, r10216466, r10216467, r10216468, r10216469, r10216470, r10216471, r10216472, r10216473, r10216474, r10216475, r10216476, r10216477, r10216478, r10216479, r10216480, r10216481, r10216482;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10216462, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216463, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10216464);
        mpfr_init(r10216465);
        mpfr_init(r10216466);
        mpfr_init_set_str(r10216467, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10216468);
        mpfr_init(r10216469);
        mpfr_init(r10216470);
        mpfr_init_set_str(r10216471, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10216472);
        mpfr_init(r10216473);
        mpfr_init(r10216474);
        mpfr_init_set_str(r10216475, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10216476);
        mpfr_init(r10216477);
        mpfr_init(r10216478);
        mpfr_init_set_str(r10216479, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10216480);
        mpfr_init(r10216481);
        mpfr_init(r10216482);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10216464, x, MPFR_RNDN);
        mpfr_mul(r10216465, r10216463, r10216464, MPFR_RNDN);
        mpfr_add(r10216466, r10216462, r10216465, MPFR_RNDN);
        ;
        mpfr_mul(r10216468, r10216464, r10216464, MPFR_RNDN);
        mpfr_mul(r10216469, r10216467, r10216468, MPFR_RNDN);
        mpfr_add(r10216470, r10216466, r10216469, MPFR_RNDN);
        ;
        mpfr_mul(r10216472, r10216468, r10216464, MPFR_RNDN);
        mpfr_mul(r10216473, r10216471, r10216472, MPFR_RNDN);
        mpfr_add(r10216474, r10216470, r10216473, MPFR_RNDN);
        ;
        mpfr_mul(r10216476, r10216472, r10216464, MPFR_RNDN);
        mpfr_mul(r10216477, r10216475, r10216476, MPFR_RNDN);
        mpfr_add(r10216478, r10216474, r10216477, MPFR_RNDN);
        ;
        mpfr_mul(r10216480, r10216476, r10216464, MPFR_RNDN);
        mpfr_mul(r10216481, r10216479, r10216480, MPFR_RNDN);
        mpfr_add(r10216482, r10216478, r10216481, MPFR_RNDN);
        return mpfr_get_d(r10216482, MPFR_RNDN);
}

static mpfr_t r10216483, r10216484, r10216485, r10216486, r10216487, r10216488, r10216489, r10216490, r10216491, r10216492, r10216493, r10216494, r10216495, r10216496, r10216497, r10216498, r10216499, r10216500, r10216501, r10216502, r10216503, r10216504, r10216505, r10216506, r10216507;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10216483);
        mpfr_init_set_str(r10216484, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10216485);
        mpfr_init_set_str(r10216486, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216487);
        mpfr_init(r10216488);
        mpfr_init(r10216489);
        mpfr_init_set_str(r10216490, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10216491);
        mpfr_init_set_str(r10216492, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10216493);
        mpfr_init(r10216494);
        mpfr_init_set_str(r10216495, "3", 10, MPFR_RNDN);
        mpfr_init(r10216496);
        mpfr_init(r10216497);
        mpfr_init_set_str(r10216498, "5.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216499, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10216500);
        mpfr_init(r10216501);
        mpfr_init(r10216502);
        mpfr_init(r10216503);
        mpfr_init(r10216504);
        mpfr_init(r10216505);
        mpfr_init(r10216506);
        mpfr_init(r10216507);
}

double f_fm(double x) {
        mpfr_set_d(r10216483, x, MPFR_RNDN);
        ;
        mpfr_mul(r10216485, r10216483, r10216484, MPFR_RNDN);
        ;
        mpfr_add(r10216487, r10216485, r10216486, MPFR_RNDN);
        mpfr_mul(r10216488, r10216483, r10216483, MPFR_RNDN);
        mpfr_mul(r10216489, r10216488, r10216488, MPFR_RNDN);
        ;
        mpfr_mul(r10216491, r10216490, r10216483, MPFR_RNDN);
        ;
        mpfr_add(r10216493, r10216491, r10216492, MPFR_RNDN);
        mpfr_mul(r10216494, r10216489, r10216493, MPFR_RNDN);
        ;
        mpfr_pow(r10216496, r10216483, r10216495, MPFR_RNDN);
        mpfr_mul(r10216497, r10216496, r10216496, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216500, r10216483, r10216499, MPFR_RNDN);
        mpfr_add(r10216501, r10216498, r10216500, MPFR_RNDN);
        mpfr_mul(r10216502, r10216497, r10216501, MPFR_RNDN);
        mpfr_mul(r10216503, r10216501, r10216501, MPFR_RNDN);
        mpfr_mul(r10216504, r10216502, r10216503, MPFR_RNDN);
        mpfr_cbrt(r10216505, r10216504, MPFR_RNDN);
        mpfr_add(r10216506, r10216494, r10216505, MPFR_RNDN);
        mpfr_add(r10216507, r10216487, r10216506, MPFR_RNDN);
        return mpfr_get_d(r10216507, MPFR_RNDN);
}

static mpfr_t r10216508, r10216509, r10216510, r10216511, r10216512, r10216513, r10216514, r10216515, r10216516, r10216517, r10216518, r10216519, r10216520, r10216521, r10216522, r10216523, r10216524, r10216525, r10216526, r10216527, r10216528, r10216529, r10216530, r10216531, r10216532;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10216508);
        mpfr_init_set_str(r10216509, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10216510);
        mpfr_init_set_str(r10216511, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216512);
        mpfr_init(r10216513);
        mpfr_init(r10216514);
        mpfr_init_set_str(r10216515, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10216516);
        mpfr_init_set_str(r10216517, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10216518);
        mpfr_init(r10216519);
        mpfr_init_set_str(r10216520, "3", 10, MPFR_RNDN);
        mpfr_init(r10216521);
        mpfr_init(r10216522);
        mpfr_init_set_str(r10216523, "5.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216524, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10216525);
        mpfr_init(r10216526);
        mpfr_init(r10216527);
        mpfr_init(r10216528);
        mpfr_init(r10216529);
        mpfr_init(r10216530);
        mpfr_init(r10216531);
        mpfr_init(r10216532);
}

double f_dm(double x) {
        mpfr_set_d(r10216508, x, MPFR_RNDN);
        ;
        mpfr_mul(r10216510, r10216508, r10216509, MPFR_RNDN);
        ;
        mpfr_add(r10216512, r10216510, r10216511, MPFR_RNDN);
        mpfr_mul(r10216513, r10216508, r10216508, MPFR_RNDN);
        mpfr_mul(r10216514, r10216513, r10216513, MPFR_RNDN);
        ;
        mpfr_mul(r10216516, r10216515, r10216508, MPFR_RNDN);
        ;
        mpfr_add(r10216518, r10216516, r10216517, MPFR_RNDN);
        mpfr_mul(r10216519, r10216514, r10216518, MPFR_RNDN);
        ;
        mpfr_pow(r10216521, r10216508, r10216520, MPFR_RNDN);
        mpfr_mul(r10216522, r10216521, r10216521, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216525, r10216508, r10216524, MPFR_RNDN);
        mpfr_add(r10216526, r10216523, r10216525, MPFR_RNDN);
        mpfr_mul(r10216527, r10216522, r10216526, MPFR_RNDN);
        mpfr_mul(r10216528, r10216526, r10216526, MPFR_RNDN);
        mpfr_mul(r10216529, r10216527, r10216528, MPFR_RNDN);
        mpfr_cbrt(r10216530, r10216529, MPFR_RNDN);
        mpfr_add(r10216531, r10216519, r10216530, MPFR_RNDN);
        mpfr_add(r10216532, r10216512, r10216531, MPFR_RNDN);
        return mpfr_get_d(r10216532, MPFR_RNDN);
}

