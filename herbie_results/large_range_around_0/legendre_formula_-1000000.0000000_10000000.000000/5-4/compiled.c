#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6406290 = 0.375;
        float r6406291 = -3.75;
        float r6406292 = x;
        float r6406293 = r6406292 * r6406292;
        float r6406294 = r6406291 * r6406293;
        float r6406295 = r6406290 + r6406294;
        float r6406296 = 4.375;
        float r6406297 = r6406293 * r6406292;
        float r6406298 = r6406297 * r6406292;
        float r6406299 = r6406296 * r6406298;
        float r6406300 = r6406295 + r6406299;
        return r6406300;
}

double f_id(double x) {
        double r6406301 = 0.375;
        double r6406302 = -3.75;
        double r6406303 = x;
        double r6406304 = r6406303 * r6406303;
        double r6406305 = r6406302 * r6406304;
        double r6406306 = r6406301 + r6406305;
        double r6406307 = 4.375;
        double r6406308 = r6406304 * r6406303;
        double r6406309 = r6406308 * r6406303;
        double r6406310 = r6406307 * r6406309;
        double r6406311 = r6406306 + r6406310;
        return r6406311;
}


double f_of(float x) {
        float r6406312 = 0.375;
        float r6406313 = x;
        float r6406314 = 4.375;
        float r6406315 = r6406313 * r6406314;
        float r6406316 = 3;
        float r6406317 = pow(r6406313, r6406316);
        float r6406318 = r6406315 * r6406317;
        float r6406319 = sqrt(r6406318);
        float r6406320 = r6406319 * r6406319;
        float r6406321 = -3.75;
        float r6406322 = r6406313 * r6406321;
        float r6406323 = r6406322 * r6406313;
        float r6406324 = r6406320 + r6406323;
        float r6406325 = r6406312 + r6406324;
        return r6406325;
}

double f_od(double x) {
        double r6406326 = 0.375;
        double r6406327 = x;
        double r6406328 = 4.375;
        double r6406329 = r6406327 * r6406328;
        double r6406330 = 3;
        double r6406331 = pow(r6406327, r6406330);
        double r6406332 = r6406329 * r6406331;
        double r6406333 = sqrt(r6406332);
        double r6406334 = r6406333 * r6406333;
        double r6406335 = -3.75;
        double r6406336 = r6406327 * r6406335;
        double r6406337 = r6406336 * r6406327;
        double r6406338 = r6406334 + r6406337;
        double r6406339 = r6406326 + r6406338;
        return r6406339;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6406340, r6406341, r6406342, r6406343, r6406344, r6406345, r6406346, r6406347, r6406348, r6406349, r6406350;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6406340, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406341, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6406342);
        mpfr_init(r6406343);
        mpfr_init(r6406344);
        mpfr_init(r6406345);
        mpfr_init_set_str(r6406346, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6406347);
        mpfr_init(r6406348);
        mpfr_init(r6406349);
        mpfr_init(r6406350);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6406342, x, MPFR_RNDN);
        mpfr_mul(r6406343, r6406342, r6406342, MPFR_RNDN);
        mpfr_mul(r6406344, r6406341, r6406343, MPFR_RNDN);
        mpfr_add(r6406345, r6406340, r6406344, MPFR_RNDN);
        ;
        mpfr_mul(r6406347, r6406343, r6406342, MPFR_RNDN);
        mpfr_mul(r6406348, r6406347, r6406342, MPFR_RNDN);
        mpfr_mul(r6406349, r6406346, r6406348, MPFR_RNDN);
        mpfr_add(r6406350, r6406345, r6406349, MPFR_RNDN);
        return mpfr_get_d(r6406350, MPFR_RNDN);
}

static mpfr_t r6406351, r6406352, r6406353, r6406354, r6406355, r6406356, r6406357, r6406358, r6406359, r6406360, r6406361, r6406362, r6406363, r6406364;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6406351, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6406352);
        mpfr_init_set_str(r6406353, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6406354);
        mpfr_init_set_str(r6406355, "3", 10, MPFR_RNDN);
        mpfr_init(r6406356);
        mpfr_init(r6406357);
        mpfr_init(r6406358);
        mpfr_init(r6406359);
        mpfr_init_set_str(r6406360, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6406361);
        mpfr_init(r6406362);
        mpfr_init(r6406363);
        mpfr_init(r6406364);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6406352, x, MPFR_RNDN);
        ;
        mpfr_mul(r6406354, r6406352, r6406353, MPFR_RNDN);
        ;
        mpfr_pow(r6406356, r6406352, r6406355, MPFR_RNDN);
        mpfr_mul(r6406357, r6406354, r6406356, MPFR_RNDN);
        mpfr_sqrt(r6406358, r6406357, MPFR_RNDN);
        mpfr_mul(r6406359, r6406358, r6406358, MPFR_RNDN);
        ;
        mpfr_mul(r6406361, r6406352, r6406360, MPFR_RNDN);
        mpfr_mul(r6406362, r6406361, r6406352, MPFR_RNDN);
        mpfr_add(r6406363, r6406359, r6406362, MPFR_RNDN);
        mpfr_add(r6406364, r6406351, r6406363, MPFR_RNDN);
        return mpfr_get_d(r6406364, MPFR_RNDN);
}

static mpfr_t r6406365, r6406366, r6406367, r6406368, r6406369, r6406370, r6406371, r6406372, r6406373, r6406374, r6406375, r6406376, r6406377, r6406378;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6406365, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6406366);
        mpfr_init_set_str(r6406367, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6406368);
        mpfr_init_set_str(r6406369, "3", 10, MPFR_RNDN);
        mpfr_init(r6406370);
        mpfr_init(r6406371);
        mpfr_init(r6406372);
        mpfr_init(r6406373);
        mpfr_init_set_str(r6406374, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6406375);
        mpfr_init(r6406376);
        mpfr_init(r6406377);
        mpfr_init(r6406378);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6406366, x, MPFR_RNDN);
        ;
        mpfr_mul(r6406368, r6406366, r6406367, MPFR_RNDN);
        ;
        mpfr_pow(r6406370, r6406366, r6406369, MPFR_RNDN);
        mpfr_mul(r6406371, r6406368, r6406370, MPFR_RNDN);
        mpfr_sqrt(r6406372, r6406371, MPFR_RNDN);
        mpfr_mul(r6406373, r6406372, r6406372, MPFR_RNDN);
        ;
        mpfr_mul(r6406375, r6406366, r6406374, MPFR_RNDN);
        mpfr_mul(r6406376, r6406375, r6406366, MPFR_RNDN);
        mpfr_add(r6406377, r6406373, r6406376, MPFR_RNDN);
        mpfr_add(r6406378, r6406365, r6406377, MPFR_RNDN);
        return mpfr_get_d(r6406378, MPFR_RNDN);
}

