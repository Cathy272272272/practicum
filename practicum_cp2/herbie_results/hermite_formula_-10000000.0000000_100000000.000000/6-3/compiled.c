#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9883421 = -12.0;
        float r9883422 = x;
        float r9883423 = r9883421 * r9883422;
        float r9883424 = 8.0;
        float r9883425 = r9883422 * r9883422;
        float r9883426 = r9883425 * r9883422;
        float r9883427 = r9883424 * r9883426;
        float r9883428 = r9883423 + r9883427;
        return r9883428;
}

double f_id(double x) {
        double r9883429 = -12.0;
        double r9883430 = x;
        double r9883431 = r9883429 * r9883430;
        double r9883432 = 8.0;
        double r9883433 = r9883430 * r9883430;
        double r9883434 = r9883433 * r9883430;
        double r9883435 = r9883432 * r9883434;
        double r9883436 = r9883431 + r9883435;
        return r9883436;
}


double f_of(float x) {
        float r9883437 = -12.0;
        float r9883438 = x;
        float r9883439 = r9883437 * r9883438;
        float r9883440 = 8.0;
        float r9883441 = r9883438 * r9883438;
        float r9883442 = r9883441 * r9883438;
        float r9883443 = r9883440 * r9883442;
        float r9883444 = r9883439 + r9883443;
        return r9883444;
}

double f_od(double x) {
        double r9883445 = -12.0;
        double r9883446 = x;
        double r9883447 = r9883445 * r9883446;
        double r9883448 = 8.0;
        double r9883449 = r9883446 * r9883446;
        double r9883450 = r9883449 * r9883446;
        double r9883451 = r9883448 * r9883450;
        double r9883452 = r9883447 + r9883451;
        return r9883452;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9883453, r9883454, r9883455, r9883456, r9883457, r9883458, r9883459, r9883460;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883453, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9883454);
        mpfr_init(r9883455);
        mpfr_init_set_str(r9883456, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9883457);
        mpfr_init(r9883458);
        mpfr_init(r9883459);
        mpfr_init(r9883460);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9883454, x, MPFR_RNDN);
        mpfr_mul(r9883455, r9883453, r9883454, MPFR_RNDN);
        ;
        mpfr_mul(r9883457, r9883454, r9883454, MPFR_RNDN);
        mpfr_mul(r9883458, r9883457, r9883454, MPFR_RNDN);
        mpfr_mul(r9883459, r9883456, r9883458, MPFR_RNDN);
        mpfr_add(r9883460, r9883455, r9883459, MPFR_RNDN);
        return mpfr_get_d(r9883460, MPFR_RNDN);
}

static mpfr_t r9883461, r9883462, r9883463, r9883464, r9883465, r9883466, r9883467, r9883468;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883461, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9883462);
        mpfr_init(r9883463);
        mpfr_init_set_str(r9883464, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9883465);
        mpfr_init(r9883466);
        mpfr_init(r9883467);
        mpfr_init(r9883468);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9883462, x, MPFR_RNDN);
        mpfr_mul(r9883463, r9883461, r9883462, MPFR_RNDN);
        ;
        mpfr_mul(r9883465, r9883462, r9883462, MPFR_RNDN);
        mpfr_mul(r9883466, r9883465, r9883462, MPFR_RNDN);
        mpfr_mul(r9883467, r9883464, r9883466, MPFR_RNDN);
        mpfr_add(r9883468, r9883463, r9883467, MPFR_RNDN);
        return mpfr_get_d(r9883468, MPFR_RNDN);
}

static mpfr_t r9883469, r9883470, r9883471, r9883472, r9883473, r9883474, r9883475, r9883476;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883469, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9883470);
        mpfr_init(r9883471);
        mpfr_init_set_str(r9883472, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9883473);
        mpfr_init(r9883474);
        mpfr_init(r9883475);
        mpfr_init(r9883476);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9883470, x, MPFR_RNDN);
        mpfr_mul(r9883471, r9883469, r9883470, MPFR_RNDN);
        ;
        mpfr_mul(r9883473, r9883470, r9883470, MPFR_RNDN);
        mpfr_mul(r9883474, r9883473, r9883470, MPFR_RNDN);
        mpfr_mul(r9883475, r9883472, r9883474, MPFR_RNDN);
        mpfr_add(r9883476, r9883471, r9883475, MPFR_RNDN);
        return mpfr_get_d(r9883476, MPFR_RNDN);
}

