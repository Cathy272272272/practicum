#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r5394433 = -0.5;
        float r5394434 = 1.5;
        float r5394435 = x;
        float r5394436 = r5394435 * r5394435;
        float r5394437 = r5394434 * r5394436;
        float r5394438 = r5394433 + r5394437;
        return r5394438;
}

double f_id(double x) {
        double r5394439 = -0.5;
        double r5394440 = 1.5;
        double r5394441 = x;
        double r5394442 = r5394441 * r5394441;
        double r5394443 = r5394440 * r5394442;
        double r5394444 = r5394439 + r5394443;
        return r5394444;
}


double f_of(float x) {
        float r5394445 = -0.5;
        float r5394446 = 1.5;
        float r5394447 = x;
        float r5394448 = r5394446 * r5394447;
        float r5394449 = r5394448 * r5394447;
        float r5394450 = r5394445 + r5394449;
        return r5394450;
}

double f_od(double x) {
        double r5394451 = -0.5;
        double r5394452 = 1.5;
        double r5394453 = x;
        double r5394454 = r5394452 * r5394453;
        double r5394455 = r5394454 * r5394453;
        double r5394456 = r5394451 + r5394455;
        return r5394456;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5394457, r5394458, r5394459, r5394460, r5394461, r5394462;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394457, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394458, "1.5", 10, MPFR_RNDN);
        mpfr_init(r5394459);
        mpfr_init(r5394460);
        mpfr_init(r5394461);
        mpfr_init(r5394462);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5394459, x, MPFR_RNDN);
        mpfr_mul(r5394460, r5394459, r5394459, MPFR_RNDN);
        mpfr_mul(r5394461, r5394458, r5394460, MPFR_RNDN);
        mpfr_add(r5394462, r5394457, r5394461, MPFR_RNDN);
        return mpfr_get_d(r5394462, MPFR_RNDN);
}

static mpfr_t r5394463, r5394464, r5394465, r5394466, r5394467, r5394468;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394463, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394464, "1.5", 10, MPFR_RNDN);
        mpfr_init(r5394465);
        mpfr_init(r5394466);
        mpfr_init(r5394467);
        mpfr_init(r5394468);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5394465, x, MPFR_RNDN);
        mpfr_mul(r5394466, r5394464, r5394465, MPFR_RNDN);
        mpfr_mul(r5394467, r5394466, r5394465, MPFR_RNDN);
        mpfr_add(r5394468, r5394463, r5394467, MPFR_RNDN);
        return mpfr_get_d(r5394468, MPFR_RNDN);
}

static mpfr_t r5394469, r5394470, r5394471, r5394472, r5394473, r5394474;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394469, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394470, "1.5", 10, MPFR_RNDN);
        mpfr_init(r5394471);
        mpfr_init(r5394472);
        mpfr_init(r5394473);
        mpfr_init(r5394474);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5394471, x, MPFR_RNDN);
        mpfr_mul(r5394472, r5394470, r5394471, MPFR_RNDN);
        mpfr_mul(r5394473, r5394472, r5394471, MPFR_RNDN);
        mpfr_add(r5394474, r5394469, r5394473, MPFR_RNDN);
        return mpfr_get_d(r5394474, MPFR_RNDN);
}

