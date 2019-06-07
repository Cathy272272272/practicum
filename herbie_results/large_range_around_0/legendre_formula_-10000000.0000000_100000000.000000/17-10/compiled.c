#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r5396298 = -0.246094;
        float r5396299 = 13.535156;
        float r5396300 = x;
        float r5396301 = r5396300 * r5396300;
        float r5396302 = r5396299 * r5396301;
        float r5396303 = r5396298 + r5396302;
        float r5396304 = -117.304688;
        float r5396305 = r5396301 * r5396300;
        float r5396306 = r5396305 * r5396300;
        float r5396307 = r5396304 * r5396306;
        float r5396308 = r5396303 + r5396307;
        float r5396309 = 351.914062;
        float r5396310 = r5396306 * r5396300;
        float r5396311 = r5396310 * r5396300;
        float r5396312 = r5396309 * r5396311;
        float r5396313 = r5396308 + r5396312;
        float r5396314 = -427.324219;
        float r5396315 = r5396311 * r5396300;
        float r5396316 = r5396315 * r5396300;
        float r5396317 = r5396314 * r5396316;
        float r5396318 = r5396313 + r5396317;
        float r5396319 = 180.425781;
        float r5396320 = r5396316 * r5396300;
        float r5396321 = r5396320 * r5396300;
        float r5396322 = r5396319 * r5396321;
        float r5396323 = r5396318 + r5396322;
        return r5396323;
}

double f_id(double x) {
        double r5396324 = -0.246094;
        double r5396325 = 13.535156;
        double r5396326 = x;
        double r5396327 = r5396326 * r5396326;
        double r5396328 = r5396325 * r5396327;
        double r5396329 = r5396324 + r5396328;
        double r5396330 = -117.304688;
        double r5396331 = r5396327 * r5396326;
        double r5396332 = r5396331 * r5396326;
        double r5396333 = r5396330 * r5396332;
        double r5396334 = r5396329 + r5396333;
        double r5396335 = 351.914062;
        double r5396336 = r5396332 * r5396326;
        double r5396337 = r5396336 * r5396326;
        double r5396338 = r5396335 * r5396337;
        double r5396339 = r5396334 + r5396338;
        double r5396340 = -427.324219;
        double r5396341 = r5396337 * r5396326;
        double r5396342 = r5396341 * r5396326;
        double r5396343 = r5396340 * r5396342;
        double r5396344 = r5396339 + r5396343;
        double r5396345 = 180.425781;
        double r5396346 = r5396342 * r5396326;
        double r5396347 = r5396346 * r5396326;
        double r5396348 = r5396345 * r5396347;
        double r5396349 = r5396344 + r5396348;
        return r5396349;
}


double f_of(float x) {
        float r5396350 = -0.246094;
        float r5396351 = 13.535156;
        float r5396352 = x;
        float r5396353 = r5396352 * r5396352;
        float r5396354 = r5396351 * r5396353;
        float r5396355 = r5396350 + r5396354;
        float r5396356 = -117.304688;
        float r5396357 = r5396353 * r5396352;
        float r5396358 = r5396357 * r5396352;
        float r5396359 = r5396356 * r5396358;
        float r5396360 = r5396355 + r5396359;
        float r5396361 = 351.914062;
        float r5396362 = r5396358 * r5396352;
        float r5396363 = r5396362 * r5396352;
        float r5396364 = r5396361 * r5396363;
        float r5396365 = r5396360 + r5396364;
        float r5396366 = -427.324219;
        float r5396367 = r5396363 * r5396352;
        float r5396368 = r5396367 * r5396352;
        float r5396369 = r5396366 * r5396368;
        float r5396370 = r5396365 + r5396369;
        float r5396371 = 180.425781;
        float r5396372 = r5396368 * r5396352;
        float r5396373 = r5396372 * r5396352;
        float r5396374 = r5396371 * r5396373;
        float r5396375 = r5396370 + r5396374;
        return r5396375;
}

double f_od(double x) {
        double r5396376 = -0.246094;
        double r5396377 = 13.535156;
        double r5396378 = x;
        double r5396379 = r5396378 * r5396378;
        double r5396380 = r5396377 * r5396379;
        double r5396381 = r5396376 + r5396380;
        double r5396382 = -117.304688;
        double r5396383 = r5396379 * r5396378;
        double r5396384 = r5396383 * r5396378;
        double r5396385 = r5396382 * r5396384;
        double r5396386 = r5396381 + r5396385;
        double r5396387 = 351.914062;
        double r5396388 = r5396384 * r5396378;
        double r5396389 = r5396388 * r5396378;
        double r5396390 = r5396387 * r5396389;
        double r5396391 = r5396386 + r5396390;
        double r5396392 = -427.324219;
        double r5396393 = r5396389 * r5396378;
        double r5396394 = r5396393 * r5396378;
        double r5396395 = r5396392 * r5396394;
        double r5396396 = r5396391 + r5396395;
        double r5396397 = 180.425781;
        double r5396398 = r5396394 * r5396378;
        double r5396399 = r5396398 * r5396378;
        double r5396400 = r5396397 * r5396399;
        double r5396401 = r5396396 + r5396400;
        return r5396401;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5396402, r5396403, r5396404, r5396405, r5396406, r5396407, r5396408, r5396409, r5396410, r5396411, r5396412, r5396413, r5396414, r5396415, r5396416, r5396417, r5396418, r5396419, r5396420, r5396421, r5396422, r5396423, r5396424, r5396425, r5396426, r5396427;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5396402, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r5396403, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r5396404);
        mpfr_init(r5396405);
        mpfr_init(r5396406);
        mpfr_init(r5396407);
        mpfr_init_set_str(r5396408, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r5396409);
        mpfr_init(r5396410);
        mpfr_init(r5396411);
        mpfr_init(r5396412);
        mpfr_init_set_str(r5396413, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r5396414);
        mpfr_init(r5396415);
        mpfr_init(r5396416);
        mpfr_init(r5396417);
        mpfr_init_set_str(r5396418, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r5396419);
        mpfr_init(r5396420);
        mpfr_init(r5396421);
        mpfr_init(r5396422);
        mpfr_init_set_str(r5396423, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r5396424);
        mpfr_init(r5396425);
        mpfr_init(r5396426);
        mpfr_init(r5396427);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5396404, x, MPFR_RNDN);
        mpfr_mul(r5396405, r5396404, r5396404, MPFR_RNDN);
        mpfr_mul(r5396406, r5396403, r5396405, MPFR_RNDN);
        mpfr_add(r5396407, r5396402, r5396406, MPFR_RNDN);
        ;
        mpfr_mul(r5396409, r5396405, r5396404, MPFR_RNDN);
        mpfr_mul(r5396410, r5396409, r5396404, MPFR_RNDN);
        mpfr_mul(r5396411, r5396408, r5396410, MPFR_RNDN);
        mpfr_add(r5396412, r5396407, r5396411, MPFR_RNDN);
        ;
        mpfr_mul(r5396414, r5396410, r5396404, MPFR_RNDN);
        mpfr_mul(r5396415, r5396414, r5396404, MPFR_RNDN);
        mpfr_mul(r5396416, r5396413, r5396415, MPFR_RNDN);
        mpfr_add(r5396417, r5396412, r5396416, MPFR_RNDN);
        ;
        mpfr_mul(r5396419, r5396415, r5396404, MPFR_RNDN);
        mpfr_mul(r5396420, r5396419, r5396404, MPFR_RNDN);
        mpfr_mul(r5396421, r5396418, r5396420, MPFR_RNDN);
        mpfr_add(r5396422, r5396417, r5396421, MPFR_RNDN);
        ;
        mpfr_mul(r5396424, r5396420, r5396404, MPFR_RNDN);
        mpfr_mul(r5396425, r5396424, r5396404, MPFR_RNDN);
        mpfr_mul(r5396426, r5396423, r5396425, MPFR_RNDN);
        mpfr_add(r5396427, r5396422, r5396426, MPFR_RNDN);
        return mpfr_get_d(r5396427, MPFR_RNDN);
}

static mpfr_t r5396428, r5396429, r5396430, r5396431, r5396432, r5396433, r5396434, r5396435, r5396436, r5396437, r5396438, r5396439, r5396440, r5396441, r5396442, r5396443, r5396444, r5396445, r5396446, r5396447, r5396448, r5396449, r5396450, r5396451, r5396452, r5396453;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5396428, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r5396429, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r5396430);
        mpfr_init(r5396431);
        mpfr_init(r5396432);
        mpfr_init(r5396433);
        mpfr_init_set_str(r5396434, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r5396435);
        mpfr_init(r5396436);
        mpfr_init(r5396437);
        mpfr_init(r5396438);
        mpfr_init_set_str(r5396439, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r5396440);
        mpfr_init(r5396441);
        mpfr_init(r5396442);
        mpfr_init(r5396443);
        mpfr_init_set_str(r5396444, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r5396445);
        mpfr_init(r5396446);
        mpfr_init(r5396447);
        mpfr_init(r5396448);
        mpfr_init_set_str(r5396449, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r5396450);
        mpfr_init(r5396451);
        mpfr_init(r5396452);
        mpfr_init(r5396453);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5396430, x, MPFR_RNDN);
        mpfr_mul(r5396431, r5396430, r5396430, MPFR_RNDN);
        mpfr_mul(r5396432, r5396429, r5396431, MPFR_RNDN);
        mpfr_add(r5396433, r5396428, r5396432, MPFR_RNDN);
        ;
        mpfr_mul(r5396435, r5396431, r5396430, MPFR_RNDN);
        mpfr_mul(r5396436, r5396435, r5396430, MPFR_RNDN);
        mpfr_mul(r5396437, r5396434, r5396436, MPFR_RNDN);
        mpfr_add(r5396438, r5396433, r5396437, MPFR_RNDN);
        ;
        mpfr_mul(r5396440, r5396436, r5396430, MPFR_RNDN);
        mpfr_mul(r5396441, r5396440, r5396430, MPFR_RNDN);
        mpfr_mul(r5396442, r5396439, r5396441, MPFR_RNDN);
        mpfr_add(r5396443, r5396438, r5396442, MPFR_RNDN);
        ;
        mpfr_mul(r5396445, r5396441, r5396430, MPFR_RNDN);
        mpfr_mul(r5396446, r5396445, r5396430, MPFR_RNDN);
        mpfr_mul(r5396447, r5396444, r5396446, MPFR_RNDN);
        mpfr_add(r5396448, r5396443, r5396447, MPFR_RNDN);
        ;
        mpfr_mul(r5396450, r5396446, r5396430, MPFR_RNDN);
        mpfr_mul(r5396451, r5396450, r5396430, MPFR_RNDN);
        mpfr_mul(r5396452, r5396449, r5396451, MPFR_RNDN);
        mpfr_add(r5396453, r5396448, r5396452, MPFR_RNDN);
        return mpfr_get_d(r5396453, MPFR_RNDN);
}

static mpfr_t r5396454, r5396455, r5396456, r5396457, r5396458, r5396459, r5396460, r5396461, r5396462, r5396463, r5396464, r5396465, r5396466, r5396467, r5396468, r5396469, r5396470, r5396471, r5396472, r5396473, r5396474, r5396475, r5396476, r5396477, r5396478, r5396479;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5396454, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r5396455, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r5396456);
        mpfr_init(r5396457);
        mpfr_init(r5396458);
        mpfr_init(r5396459);
        mpfr_init_set_str(r5396460, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r5396461);
        mpfr_init(r5396462);
        mpfr_init(r5396463);
        mpfr_init(r5396464);
        mpfr_init_set_str(r5396465, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r5396466);
        mpfr_init(r5396467);
        mpfr_init(r5396468);
        mpfr_init(r5396469);
        mpfr_init_set_str(r5396470, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r5396471);
        mpfr_init(r5396472);
        mpfr_init(r5396473);
        mpfr_init(r5396474);
        mpfr_init_set_str(r5396475, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r5396476);
        mpfr_init(r5396477);
        mpfr_init(r5396478);
        mpfr_init(r5396479);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5396456, x, MPFR_RNDN);
        mpfr_mul(r5396457, r5396456, r5396456, MPFR_RNDN);
        mpfr_mul(r5396458, r5396455, r5396457, MPFR_RNDN);
        mpfr_add(r5396459, r5396454, r5396458, MPFR_RNDN);
        ;
        mpfr_mul(r5396461, r5396457, r5396456, MPFR_RNDN);
        mpfr_mul(r5396462, r5396461, r5396456, MPFR_RNDN);
        mpfr_mul(r5396463, r5396460, r5396462, MPFR_RNDN);
        mpfr_add(r5396464, r5396459, r5396463, MPFR_RNDN);
        ;
        mpfr_mul(r5396466, r5396462, r5396456, MPFR_RNDN);
        mpfr_mul(r5396467, r5396466, r5396456, MPFR_RNDN);
        mpfr_mul(r5396468, r5396465, r5396467, MPFR_RNDN);
        mpfr_add(r5396469, r5396464, r5396468, MPFR_RNDN);
        ;
        mpfr_mul(r5396471, r5396467, r5396456, MPFR_RNDN);
        mpfr_mul(r5396472, r5396471, r5396456, MPFR_RNDN);
        mpfr_mul(r5396473, r5396470, r5396472, MPFR_RNDN);
        mpfr_add(r5396474, r5396469, r5396473, MPFR_RNDN);
        ;
        mpfr_mul(r5396476, r5396472, r5396456, MPFR_RNDN);
        mpfr_mul(r5396477, r5396476, r5396456, MPFR_RNDN);
        mpfr_mul(r5396478, r5396475, r5396477, MPFR_RNDN);
        mpfr_add(r5396479, r5396474, r5396478, MPFR_RNDN);
        return mpfr_get_d(r5396479, MPFR_RNDN);
}

