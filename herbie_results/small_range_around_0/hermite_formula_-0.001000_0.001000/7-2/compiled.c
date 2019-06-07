#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r3817330 = -2.0;
        float r3817331 = 4.0;
        float r3817332 = x;
        float r3817333 = r3817332 * r3817332;
        float r3817334 = r3817331 * r3817333;
        float r3817335 = r3817330 + r3817334;
        return r3817335;
}

double f_id(double x) {
        double r3817336 = -2.0;
        double r3817337 = 4.0;
        double r3817338 = x;
        double r3817339 = r3817338 * r3817338;
        double r3817340 = r3817337 * r3817339;
        double r3817341 = r3817336 + r3817340;
        return r3817341;
}


double f_of(float x) {
        float r3817342 = -2.0;
        float r3817343 = 4.0;
        float r3817344 = x;
        float r3817345 = r3817344 * r3817344;
        float r3817346 = r3817343 * r3817345;
        float r3817347 = r3817342 + r3817346;
        return r3817347;
}

double f_od(double x) {
        double r3817348 = -2.0;
        double r3817349 = 4.0;
        double r3817350 = x;
        double r3817351 = r3817350 * r3817350;
        double r3817352 = r3817349 * r3817351;
        double r3817353 = r3817348 + r3817352;
        return r3817353;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3817354, r3817355, r3817356, r3817357, r3817358, r3817359;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817354, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817355, "4.0", 10, MPFR_RNDN);
        mpfr_init(r3817356);
        mpfr_init(r3817357);
        mpfr_init(r3817358);
        mpfr_init(r3817359);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3817356, x, MPFR_RNDN);
        mpfr_mul(r3817357, r3817356, r3817356, MPFR_RNDN);
        mpfr_mul(r3817358, r3817355, r3817357, MPFR_RNDN);
        mpfr_add(r3817359, r3817354, r3817358, MPFR_RNDN);
        return mpfr_get_d(r3817359, MPFR_RNDN);
}

static mpfr_t r3817360, r3817361, r3817362, r3817363, r3817364, r3817365;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817360, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817361, "4.0", 10, MPFR_RNDN);
        mpfr_init(r3817362);
        mpfr_init(r3817363);
        mpfr_init(r3817364);
        mpfr_init(r3817365);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3817362, x, MPFR_RNDN);
        mpfr_mul(r3817363, r3817362, r3817362, MPFR_RNDN);
        mpfr_mul(r3817364, r3817361, r3817363, MPFR_RNDN);
        mpfr_add(r3817365, r3817360, r3817364, MPFR_RNDN);
        return mpfr_get_d(r3817365, MPFR_RNDN);
}

static mpfr_t r3817366, r3817367, r3817368, r3817369, r3817370, r3817371;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817366, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817367, "4.0", 10, MPFR_RNDN);
        mpfr_init(r3817368);
        mpfr_init(r3817369);
        mpfr_init(r3817370);
        mpfr_init(r3817371);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3817368, x, MPFR_RNDN);
        mpfr_mul(r3817369, r3817368, r3817368, MPFR_RNDN);
        mpfr_mul(r3817370, r3817367, r3817369, MPFR_RNDN);
        mpfr_add(r3817371, r3817366, r3817370, MPFR_RNDN);
        return mpfr_get_d(r3817371, MPFR_RNDN);
}

