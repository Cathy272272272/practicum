#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r60543416 = 12.0;
        float r60543417 = -48.0;
        float r60543418 = x;
        float r60543419 = r60543418 * r60543418;
        float r60543420 = r60543417 * r60543419;
        float r60543421 = r60543416 + r60543420;
        float r60543422 = 16.0;
        float r60543423 = r60543419 * r60543418;
        float r60543424 = r60543423 * r60543418;
        float r60543425 = r60543422 * r60543424;
        float r60543426 = r60543421 + r60543425;
        return r60543426;
}

double f_id(double x) {
        double r60543427 = 12.0;
        double r60543428 = -48.0;
        double r60543429 = x;
        double r60543430 = r60543429 * r60543429;
        double r60543431 = r60543428 * r60543430;
        double r60543432 = r60543427 + r60543431;
        double r60543433 = 16.0;
        double r60543434 = r60543430 * r60543429;
        double r60543435 = r60543434 * r60543429;
        double r60543436 = r60543433 * r60543435;
        double r60543437 = r60543432 + r60543436;
        return r60543437;
}


double f_of(float x) {
        float r60543438 = 12.0;
        float r60543439 = exp(r60543438);
        float r60543440 = -48.0;
        float r60543441 = exp(r60543440);
        float r60543442 = x;
        float r60543443 = r60543442 * r60543442;
        float r60543444 = pow(r60543441, r60543443);
        float r60543445 = r60543439 * r60543444;
        float r60543446 = 3;
        float r60543447 = pow(r60543445, r60543446);
        float r60543448 = cbrt(r60543447);
        float r60543449 = 16.0;
        float r60543450 = fabs(r60543443);
        float r60543451 = r60543450 * r60543450;
        float r60543452 = r60543449 * r60543451;
        float r60543453 = exp(r60543452);
        float r60543454 = r60543448 * r60543453;
        float r60543455 = log(r60543454);
        return r60543455;
}

double f_od(double x) {
        double r60543456 = 12.0;
        double r60543457 = exp(r60543456);
        double r60543458 = -48.0;
        double r60543459 = exp(r60543458);
        double r60543460 = x;
        double r60543461 = r60543460 * r60543460;
        double r60543462 = pow(r60543459, r60543461);
        double r60543463 = r60543457 * r60543462;
        double r60543464 = 3;
        double r60543465 = pow(r60543463, r60543464);
        double r60543466 = cbrt(r60543465);
        double r60543467 = 16.0;
        double r60543468 = fabs(r60543461);
        double r60543469 = r60543468 * r60543468;
        double r60543470 = r60543467 * r60543469;
        double r60543471 = exp(r60543470);
        double r60543472 = r60543466 * r60543471;
        double r60543473 = log(r60543472);
        return r60543473;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60543474, r60543475, r60543476, r60543477, r60543478, r60543479, r60543480, r60543481, r60543482, r60543483, r60543484;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543474, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60543475, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r60543476);
        mpfr_init(r60543477);
        mpfr_init(r60543478);
        mpfr_init(r60543479);
        mpfr_init_set_str(r60543480, "16.0", 10, MPFR_RNDN);
        mpfr_init(r60543481);
        mpfr_init(r60543482);
        mpfr_init(r60543483);
        mpfr_init(r60543484);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60543476, x, MPFR_RNDN);
        mpfr_mul(r60543477, r60543476, r60543476, MPFR_RNDN);
        mpfr_mul(r60543478, r60543475, r60543477, MPFR_RNDN);
        mpfr_add(r60543479, r60543474, r60543478, MPFR_RNDN);
        ;
        mpfr_mul(r60543481, r60543477, r60543476, MPFR_RNDN);
        mpfr_mul(r60543482, r60543481, r60543476, MPFR_RNDN);
        mpfr_mul(r60543483, r60543480, r60543482, MPFR_RNDN);
        mpfr_add(r60543484, r60543479, r60543483, MPFR_RNDN);
        return mpfr_get_d(r60543484, MPFR_RNDN);
}

static mpfr_t r60543485, r60543486, r60543487, r60543488, r60543489, r60543490, r60543491, r60543492, r60543493, r60543494, r60543495, r60543496, r60543497, r60543498, r60543499, r60543500, r60543501, r60543502;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543485, "12.0", 10, MPFR_RNDN);
        mpfr_init(r60543486);
        mpfr_init_set_str(r60543487, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r60543488);
        mpfr_init(r60543489);
        mpfr_init(r60543490);
        mpfr_init(r60543491);
        mpfr_init(r60543492);
        mpfr_init_set_str(r60543493, "3", 10, MPFR_RNDN);
        mpfr_init(r60543494);
        mpfr_init(r60543495);
        mpfr_init_set_str(r60543496, "16.0", 10, MPFR_RNDN);
        mpfr_init(r60543497);
        mpfr_init(r60543498);
        mpfr_init(r60543499);
        mpfr_init(r60543500);
        mpfr_init(r60543501);
        mpfr_init(r60543502);
}

double f_fm(double x) {
        ;
        mpfr_exp(r60543486, r60543485, MPFR_RNDN);
        ;
        mpfr_exp(r60543488, r60543487, MPFR_RNDN);
        mpfr_set_d(r60543489, x, MPFR_RNDN);
        mpfr_mul(r60543490, r60543489, r60543489, MPFR_RNDN);
        mpfr_pow(r60543491, r60543488, r60543490, MPFR_RNDN);
        mpfr_mul(r60543492, r60543486, r60543491, MPFR_RNDN);
        ;
        mpfr_pow(r60543494, r60543492, r60543493, MPFR_RNDN);
        mpfr_cbrt(r60543495, r60543494, MPFR_RNDN);
        ;
        mpfr_abs(r60543497, r60543490, MPFR_RNDN);
        mpfr_mul(r60543498, r60543497, r60543497, MPFR_RNDN);
        mpfr_mul(r60543499, r60543496, r60543498, MPFR_RNDN);
        mpfr_exp(r60543500, r60543499, MPFR_RNDN);
        mpfr_mul(r60543501, r60543495, r60543500, MPFR_RNDN);
        mpfr_log(r60543502, r60543501, MPFR_RNDN);
        return mpfr_get_d(r60543502, MPFR_RNDN);
}

static mpfr_t r60543503, r60543504, r60543505, r60543506, r60543507, r60543508, r60543509, r60543510, r60543511, r60543512, r60543513, r60543514, r60543515, r60543516, r60543517, r60543518, r60543519, r60543520;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543503, "12.0", 10, MPFR_RNDN);
        mpfr_init(r60543504);
        mpfr_init_set_str(r60543505, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r60543506);
        mpfr_init(r60543507);
        mpfr_init(r60543508);
        mpfr_init(r60543509);
        mpfr_init(r60543510);
        mpfr_init_set_str(r60543511, "3", 10, MPFR_RNDN);
        mpfr_init(r60543512);
        mpfr_init(r60543513);
        mpfr_init_set_str(r60543514, "16.0", 10, MPFR_RNDN);
        mpfr_init(r60543515);
        mpfr_init(r60543516);
        mpfr_init(r60543517);
        mpfr_init(r60543518);
        mpfr_init(r60543519);
        mpfr_init(r60543520);
}

double f_dm(double x) {
        ;
        mpfr_exp(r60543504, r60543503, MPFR_RNDN);
        ;
        mpfr_exp(r60543506, r60543505, MPFR_RNDN);
        mpfr_set_d(r60543507, x, MPFR_RNDN);
        mpfr_mul(r60543508, r60543507, r60543507, MPFR_RNDN);
        mpfr_pow(r60543509, r60543506, r60543508, MPFR_RNDN);
        mpfr_mul(r60543510, r60543504, r60543509, MPFR_RNDN);
        ;
        mpfr_pow(r60543512, r60543510, r60543511, MPFR_RNDN);
        mpfr_cbrt(r60543513, r60543512, MPFR_RNDN);
        ;
        mpfr_abs(r60543515, r60543508, MPFR_RNDN);
        mpfr_mul(r60543516, r60543515, r60543515, MPFR_RNDN);
        mpfr_mul(r60543517, r60543514, r60543516, MPFR_RNDN);
        mpfr_exp(r60543518, r60543517, MPFR_RNDN);
        mpfr_mul(r60543519, r60543513, r60543518, MPFR_RNDN);
        mpfr_log(r60543520, r60543519, MPFR_RNDN);
        return mpfr_get_d(r60543520, MPFR_RNDN);
}

