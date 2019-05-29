#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9883340 = 12.0;
        float r9883341 = -48.0;
        float r9883342 = x;
        float r9883343 = r9883342 * r9883342;
        float r9883344 = r9883341 * r9883343;
        float r9883345 = r9883340 + r9883344;
        float r9883346 = 16.0;
        float r9883347 = r9883343 * r9883342;
        float r9883348 = r9883347 * r9883342;
        float r9883349 = r9883346 * r9883348;
        float r9883350 = r9883345 + r9883349;
        return r9883350;
}

double f_id(double x) {
        double r9883351 = 12.0;
        double r9883352 = -48.0;
        double r9883353 = x;
        double r9883354 = r9883353 * r9883353;
        double r9883355 = r9883352 * r9883354;
        double r9883356 = r9883351 + r9883355;
        double r9883357 = 16.0;
        double r9883358 = r9883354 * r9883353;
        double r9883359 = r9883358 * r9883353;
        double r9883360 = r9883357 * r9883359;
        double r9883361 = r9883356 + r9883360;
        return r9883361;
}


double f_of(float x) {
        float r9883362 = 12.0;
        float r9883363 = x;
        float r9883364 = 16.0;
        float r9883365 = r9883363 * r9883364;
        float r9883366 = 3;
        float r9883367 = pow(r9883363, r9883366);
        float r9883368 = r9883365 * r9883367;
        float r9883369 = -48.0;
        float r9883370 = r9883363 * r9883369;
        float r9883371 = r9883370 * r9883363;
        float r9883372 = r9883368 + r9883371;
        float r9883373 = r9883362 + r9883372;
        return r9883373;
}

double f_od(double x) {
        double r9883374 = 12.0;
        double r9883375 = x;
        double r9883376 = 16.0;
        double r9883377 = r9883375 * r9883376;
        double r9883378 = 3;
        double r9883379 = pow(r9883375, r9883378);
        double r9883380 = r9883377 * r9883379;
        double r9883381 = -48.0;
        double r9883382 = r9883375 * r9883381;
        double r9883383 = r9883382 * r9883375;
        double r9883384 = r9883380 + r9883383;
        double r9883385 = r9883374 + r9883384;
        return r9883385;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9883386, r9883387, r9883388, r9883389, r9883390, r9883391, r9883392, r9883393, r9883394, r9883395, r9883396;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9883386, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883387, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9883388);
        mpfr_init(r9883389);
        mpfr_init(r9883390);
        mpfr_init(r9883391);
        mpfr_init_set_str(r9883392, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9883393);
        mpfr_init(r9883394);
        mpfr_init(r9883395);
        mpfr_init(r9883396);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9883388, x, MPFR_RNDN);
        mpfr_mul(r9883389, r9883388, r9883388, MPFR_RNDN);
        mpfr_mul(r9883390, r9883387, r9883389, MPFR_RNDN);
        mpfr_add(r9883391, r9883386, r9883390, MPFR_RNDN);
        ;
        mpfr_mul(r9883393, r9883389, r9883388, MPFR_RNDN);
        mpfr_mul(r9883394, r9883393, r9883388, MPFR_RNDN);
        mpfr_mul(r9883395, r9883392, r9883394, MPFR_RNDN);
        mpfr_add(r9883396, r9883391, r9883395, MPFR_RNDN);
        return mpfr_get_d(r9883396, MPFR_RNDN);
}

static mpfr_t r9883397, r9883398, r9883399, r9883400, r9883401, r9883402, r9883403, r9883404, r9883405, r9883406, r9883407, r9883408;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9883397, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9883398);
        mpfr_init_set_str(r9883399, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9883400);
        mpfr_init_set_str(r9883401, "3", 10, MPFR_RNDN);
        mpfr_init(r9883402);
        mpfr_init(r9883403);
        mpfr_init_set_str(r9883404, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9883405);
        mpfr_init(r9883406);
        mpfr_init(r9883407);
        mpfr_init(r9883408);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9883398, x, MPFR_RNDN);
        ;
        mpfr_mul(r9883400, r9883398, r9883399, MPFR_RNDN);
        ;
        mpfr_pow(r9883402, r9883398, r9883401, MPFR_RNDN);
        mpfr_mul(r9883403, r9883400, r9883402, MPFR_RNDN);
        ;
        mpfr_mul(r9883405, r9883398, r9883404, MPFR_RNDN);
        mpfr_mul(r9883406, r9883405, r9883398, MPFR_RNDN);
        mpfr_add(r9883407, r9883403, r9883406, MPFR_RNDN);
        mpfr_add(r9883408, r9883397, r9883407, MPFR_RNDN);
        return mpfr_get_d(r9883408, MPFR_RNDN);
}

static mpfr_t r9883409, r9883410, r9883411, r9883412, r9883413, r9883414, r9883415, r9883416, r9883417, r9883418, r9883419, r9883420;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9883409, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9883410);
        mpfr_init_set_str(r9883411, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9883412);
        mpfr_init_set_str(r9883413, "3", 10, MPFR_RNDN);
        mpfr_init(r9883414);
        mpfr_init(r9883415);
        mpfr_init_set_str(r9883416, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9883417);
        mpfr_init(r9883418);
        mpfr_init(r9883419);
        mpfr_init(r9883420);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9883410, x, MPFR_RNDN);
        ;
        mpfr_mul(r9883412, r9883410, r9883411, MPFR_RNDN);
        ;
        mpfr_pow(r9883414, r9883410, r9883413, MPFR_RNDN);
        mpfr_mul(r9883415, r9883412, r9883414, MPFR_RNDN);
        ;
        mpfr_mul(r9883417, r9883410, r9883416, MPFR_RNDN);
        mpfr_mul(r9883418, r9883417, r9883410, MPFR_RNDN);
        mpfr_add(r9883419, r9883415, r9883418, MPFR_RNDN);
        mpfr_add(r9883420, r9883409, r9883419, MPFR_RNDN);
        return mpfr_get_d(r9883420, MPFR_RNDN);
}

