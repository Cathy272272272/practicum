#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r60543305 = 120.0;
        float r60543306 = x;
        float r60543307 = r60543305 * r60543306;
        float r60543308 = -160.0;
        float r60543309 = r60543306 * r60543306;
        float r60543310 = r60543309 * r60543306;
        float r60543311 = r60543308 * r60543310;
        float r60543312 = r60543307 + r60543311;
        float r60543313 = 32.0;
        float r60543314 = r60543310 * r60543306;
        float r60543315 = r60543314 * r60543306;
        float r60543316 = r60543313 * r60543315;
        float r60543317 = r60543312 + r60543316;
        return r60543317;
}

double f_id(double x) {
        double r60543318 = 120.0;
        double r60543319 = x;
        double r60543320 = r60543318 * r60543319;
        double r60543321 = -160.0;
        double r60543322 = r60543319 * r60543319;
        double r60543323 = r60543322 * r60543319;
        double r60543324 = r60543321 * r60543323;
        double r60543325 = r60543320 + r60543324;
        double r60543326 = 32.0;
        double r60543327 = r60543323 * r60543319;
        double r60543328 = r60543327 * r60543319;
        double r60543329 = r60543326 * r60543328;
        double r60543330 = r60543325 + r60543329;
        return r60543330;
}


double f_of(float x) {
        float r60543331 = 32.0;
        float r60543332 = exp(r60543331);
        float r60543333 = x;
        float r60543334 = 3;
        float r60543335 = pow(r60543333, r60543334);
        float r60543336 = pow(r60543332, r60543335);
        float r60543337 = r60543333 * r60543333;
        float r60543338 = pow(r60543336, r60543337);
        float r60543339 = 120.0;
        float r60543340 = exp(r60543339);
        float r60543341 = pow(r60543340, r60543333);
        float r60543342 = -160.0;
        float r60543343 = exp(r60543342);
        float r60543344 = pow(r60543343, r60543337);
        float r60543345 = pow(r60543344, r60543333);
        float r60543346 = r60543341 * r60543345;
        float r60543347 = r60543338 * r60543346;
        float r60543348 = log(r60543347);
        return r60543348;
}

double f_od(double x) {
        double r60543349 = 32.0;
        double r60543350 = exp(r60543349);
        double r60543351 = x;
        double r60543352 = 3;
        double r60543353 = pow(r60543351, r60543352);
        double r60543354 = pow(r60543350, r60543353);
        double r60543355 = r60543351 * r60543351;
        double r60543356 = pow(r60543354, r60543355);
        double r60543357 = 120.0;
        double r60543358 = exp(r60543357);
        double r60543359 = pow(r60543358, r60543351);
        double r60543360 = -160.0;
        double r60543361 = exp(r60543360);
        double r60543362 = pow(r60543361, r60543355);
        double r60543363 = pow(r60543362, r60543351);
        double r60543364 = r60543359 * r60543363;
        double r60543365 = r60543356 * r60543364;
        double r60543366 = log(r60543365);
        return r60543366;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60543367, r60543368, r60543369, r60543370, r60543371, r60543372, r60543373, r60543374, r60543375, r60543376, r60543377, r60543378, r60543379;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543367, "120.0", 10, MPFR_RNDN);
        mpfr_init(r60543368);
        mpfr_init(r60543369);
        mpfr_init_set_str(r60543370, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r60543371);
        mpfr_init(r60543372);
        mpfr_init(r60543373);
        mpfr_init(r60543374);
        mpfr_init_set_str(r60543375, "32.0", 10, MPFR_RNDN);
        mpfr_init(r60543376);
        mpfr_init(r60543377);
        mpfr_init(r60543378);
        mpfr_init(r60543379);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60543368, x, MPFR_RNDN);
        mpfr_mul(r60543369, r60543367, r60543368, MPFR_RNDN);
        ;
        mpfr_mul(r60543371, r60543368, r60543368, MPFR_RNDN);
        mpfr_mul(r60543372, r60543371, r60543368, MPFR_RNDN);
        mpfr_mul(r60543373, r60543370, r60543372, MPFR_RNDN);
        mpfr_add(r60543374, r60543369, r60543373, MPFR_RNDN);
        ;
        mpfr_mul(r60543376, r60543372, r60543368, MPFR_RNDN);
        mpfr_mul(r60543377, r60543376, r60543368, MPFR_RNDN);
        mpfr_mul(r60543378, r60543375, r60543377, MPFR_RNDN);
        mpfr_add(r60543379, r60543374, r60543378, MPFR_RNDN);
        return mpfr_get_d(r60543379, MPFR_RNDN);
}

static mpfr_t r60543380, r60543381, r60543382, r60543383, r60543384, r60543385, r60543386, r60543387, r60543388, r60543389, r60543390, r60543391, r60543392, r60543393, r60543394, r60543395, r60543396, r60543397;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543380, "32.0", 10, MPFR_RNDN);
        mpfr_init(r60543381);
        mpfr_init(r60543382);
        mpfr_init_set_str(r60543383, "3", 10, MPFR_RNDN);
        mpfr_init(r60543384);
        mpfr_init(r60543385);
        mpfr_init(r60543386);
        mpfr_init(r60543387);
        mpfr_init_set_str(r60543388, "120.0", 10, MPFR_RNDN);
        mpfr_init(r60543389);
        mpfr_init(r60543390);
        mpfr_init_set_str(r60543391, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r60543392);
        mpfr_init(r60543393);
        mpfr_init(r60543394);
        mpfr_init(r60543395);
        mpfr_init(r60543396);
        mpfr_init(r60543397);
}

double f_fm(double x) {
        ;
        mpfr_exp(r60543381, r60543380, MPFR_RNDN);
        mpfr_set_d(r60543382, x, MPFR_RNDN);
        ;
        mpfr_pow(r60543384, r60543382, r60543383, MPFR_RNDN);
        mpfr_pow(r60543385, r60543381, r60543384, MPFR_RNDN);
        mpfr_mul(r60543386, r60543382, r60543382, MPFR_RNDN);
        mpfr_pow(r60543387, r60543385, r60543386, MPFR_RNDN);
        ;
        mpfr_exp(r60543389, r60543388, MPFR_RNDN);
        mpfr_pow(r60543390, r60543389, r60543382, MPFR_RNDN);
        ;
        mpfr_exp(r60543392, r60543391, MPFR_RNDN);
        mpfr_pow(r60543393, r60543392, r60543386, MPFR_RNDN);
        mpfr_pow(r60543394, r60543393, r60543382, MPFR_RNDN);
        mpfr_mul(r60543395, r60543390, r60543394, MPFR_RNDN);
        mpfr_mul(r60543396, r60543387, r60543395, MPFR_RNDN);
        mpfr_log(r60543397, r60543396, MPFR_RNDN);
        return mpfr_get_d(r60543397, MPFR_RNDN);
}

static mpfr_t r60543398, r60543399, r60543400, r60543401, r60543402, r60543403, r60543404, r60543405, r60543406, r60543407, r60543408, r60543409, r60543410, r60543411, r60543412, r60543413, r60543414, r60543415;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60543398, "32.0", 10, MPFR_RNDN);
        mpfr_init(r60543399);
        mpfr_init(r60543400);
        mpfr_init_set_str(r60543401, "3", 10, MPFR_RNDN);
        mpfr_init(r60543402);
        mpfr_init(r60543403);
        mpfr_init(r60543404);
        mpfr_init(r60543405);
        mpfr_init_set_str(r60543406, "120.0", 10, MPFR_RNDN);
        mpfr_init(r60543407);
        mpfr_init(r60543408);
        mpfr_init_set_str(r60543409, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r60543410);
        mpfr_init(r60543411);
        mpfr_init(r60543412);
        mpfr_init(r60543413);
        mpfr_init(r60543414);
        mpfr_init(r60543415);
}

double f_dm(double x) {
        ;
        mpfr_exp(r60543399, r60543398, MPFR_RNDN);
        mpfr_set_d(r60543400, x, MPFR_RNDN);
        ;
        mpfr_pow(r60543402, r60543400, r60543401, MPFR_RNDN);
        mpfr_pow(r60543403, r60543399, r60543402, MPFR_RNDN);
        mpfr_mul(r60543404, r60543400, r60543400, MPFR_RNDN);
        mpfr_pow(r60543405, r60543403, r60543404, MPFR_RNDN);
        ;
        mpfr_exp(r60543407, r60543406, MPFR_RNDN);
        mpfr_pow(r60543408, r60543407, r60543400, MPFR_RNDN);
        ;
        mpfr_exp(r60543410, r60543409, MPFR_RNDN);
        mpfr_pow(r60543411, r60543410, r60543404, MPFR_RNDN);
        mpfr_pow(r60543412, r60543411, r60543400, MPFR_RNDN);
        mpfr_mul(r60543413, r60543408, r60543412, MPFR_RNDN);
        mpfr_mul(r60543414, r60543405, r60543413, MPFR_RNDN);
        mpfr_log(r60543415, r60543414, MPFR_RNDN);
        return mpfr_get_d(r60543415, MPFR_RNDN);
}

