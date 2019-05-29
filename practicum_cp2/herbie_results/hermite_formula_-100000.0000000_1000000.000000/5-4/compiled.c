#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7639355 = 12.0;
        float r7639356 = -48.0;
        float r7639357 = x;
        float r7639358 = r7639357 * r7639357;
        float r7639359 = r7639356 * r7639358;
        float r7639360 = r7639355 + r7639359;
        float r7639361 = 16.0;
        float r7639362 = r7639358 * r7639357;
        float r7639363 = r7639362 * r7639357;
        float r7639364 = r7639361 * r7639363;
        float r7639365 = r7639360 + r7639364;
        return r7639365;
}

double f_id(double x) {
        double r7639366 = 12.0;
        double r7639367 = -48.0;
        double r7639368 = x;
        double r7639369 = r7639368 * r7639368;
        double r7639370 = r7639367 * r7639369;
        double r7639371 = r7639366 + r7639370;
        double r7639372 = 16.0;
        double r7639373 = r7639369 * r7639368;
        double r7639374 = r7639373 * r7639368;
        double r7639375 = r7639372 * r7639374;
        double r7639376 = r7639371 + r7639375;
        return r7639376;
}


double f_of(float x) {
        float r7639377 = 12.0;
        float r7639378 = x;
        float r7639379 = 16.0;
        float r7639380 = r7639378 * r7639379;
        float r7639381 = 3;
        float r7639382 = pow(r7639378, r7639381);
        float r7639383 = r7639380 * r7639382;
        float r7639384 = -48.0;
        float r7639385 = r7639378 * r7639384;
        float r7639386 = r7639385 * r7639378;
        float r7639387 = r7639383 + r7639386;
        float r7639388 = r7639377 + r7639387;
        return r7639388;
}

double f_od(double x) {
        double r7639389 = 12.0;
        double r7639390 = x;
        double r7639391 = 16.0;
        double r7639392 = r7639390 * r7639391;
        double r7639393 = 3;
        double r7639394 = pow(r7639390, r7639393);
        double r7639395 = r7639392 * r7639394;
        double r7639396 = -48.0;
        double r7639397 = r7639390 * r7639396;
        double r7639398 = r7639397 * r7639390;
        double r7639399 = r7639395 + r7639398;
        double r7639400 = r7639389 + r7639399;
        return r7639400;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7639401, r7639402, r7639403, r7639404, r7639405, r7639406, r7639407, r7639408, r7639409, r7639410, r7639411;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7639401, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639402, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7639403);
        mpfr_init(r7639404);
        mpfr_init(r7639405);
        mpfr_init(r7639406);
        mpfr_init_set_str(r7639407, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7639408);
        mpfr_init(r7639409);
        mpfr_init(r7639410);
        mpfr_init(r7639411);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7639403, x, MPFR_RNDN);
        mpfr_mul(r7639404, r7639403, r7639403, MPFR_RNDN);
        mpfr_mul(r7639405, r7639402, r7639404, MPFR_RNDN);
        mpfr_add(r7639406, r7639401, r7639405, MPFR_RNDN);
        ;
        mpfr_mul(r7639408, r7639404, r7639403, MPFR_RNDN);
        mpfr_mul(r7639409, r7639408, r7639403, MPFR_RNDN);
        mpfr_mul(r7639410, r7639407, r7639409, MPFR_RNDN);
        mpfr_add(r7639411, r7639406, r7639410, MPFR_RNDN);
        return mpfr_get_d(r7639411, MPFR_RNDN);
}

static mpfr_t r7639412, r7639413, r7639414, r7639415, r7639416, r7639417, r7639418, r7639419, r7639420, r7639421, r7639422, r7639423;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7639412, "12.0", 10, MPFR_RNDN);
        mpfr_init(r7639413);
        mpfr_init_set_str(r7639414, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7639415);
        mpfr_init_set_str(r7639416, "3", 10, MPFR_RNDN);
        mpfr_init(r7639417);
        mpfr_init(r7639418);
        mpfr_init_set_str(r7639419, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7639420);
        mpfr_init(r7639421);
        mpfr_init(r7639422);
        mpfr_init(r7639423);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7639413, x, MPFR_RNDN);
        ;
        mpfr_mul(r7639415, r7639413, r7639414, MPFR_RNDN);
        ;
        mpfr_pow(r7639417, r7639413, r7639416, MPFR_RNDN);
        mpfr_mul(r7639418, r7639415, r7639417, MPFR_RNDN);
        ;
        mpfr_mul(r7639420, r7639413, r7639419, MPFR_RNDN);
        mpfr_mul(r7639421, r7639420, r7639413, MPFR_RNDN);
        mpfr_add(r7639422, r7639418, r7639421, MPFR_RNDN);
        mpfr_add(r7639423, r7639412, r7639422, MPFR_RNDN);
        return mpfr_get_d(r7639423, MPFR_RNDN);
}

static mpfr_t r7639424, r7639425, r7639426, r7639427, r7639428, r7639429, r7639430, r7639431, r7639432, r7639433, r7639434, r7639435;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7639424, "12.0", 10, MPFR_RNDN);
        mpfr_init(r7639425);
        mpfr_init_set_str(r7639426, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7639427);
        mpfr_init_set_str(r7639428, "3", 10, MPFR_RNDN);
        mpfr_init(r7639429);
        mpfr_init(r7639430);
        mpfr_init_set_str(r7639431, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7639432);
        mpfr_init(r7639433);
        mpfr_init(r7639434);
        mpfr_init(r7639435);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7639425, x, MPFR_RNDN);
        ;
        mpfr_mul(r7639427, r7639425, r7639426, MPFR_RNDN);
        ;
        mpfr_pow(r7639429, r7639425, r7639428, MPFR_RNDN);
        mpfr_mul(r7639430, r7639427, r7639429, MPFR_RNDN);
        ;
        mpfr_mul(r7639432, r7639425, r7639431, MPFR_RNDN);
        mpfr_mul(r7639433, r7639432, r7639425, MPFR_RNDN);
        mpfr_add(r7639434, r7639430, r7639433, MPFR_RNDN);
        mpfr_add(r7639435, r7639424, r7639434, MPFR_RNDN);
        return mpfr_get_d(r7639435, MPFR_RNDN);
}

