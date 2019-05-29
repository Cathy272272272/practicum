#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r5316326 = 120.0;
        float r5316327 = x;
        float r5316328 = r5316326 * r5316327;
        float r5316329 = -160.0;
        float r5316330 = r5316327 * r5316327;
        float r5316331 = r5316330 * r5316327;
        float r5316332 = r5316329 * r5316331;
        float r5316333 = r5316328 + r5316332;
        float r5316334 = 32.0;
        float r5316335 = r5316331 * r5316327;
        float r5316336 = r5316335 * r5316327;
        float r5316337 = r5316334 * r5316336;
        float r5316338 = r5316333 + r5316337;
        return r5316338;
}

double f_id(double x) {
        double r5316339 = 120.0;
        double r5316340 = x;
        double r5316341 = r5316339 * r5316340;
        double r5316342 = -160.0;
        double r5316343 = r5316340 * r5316340;
        double r5316344 = r5316343 * r5316340;
        double r5316345 = r5316342 * r5316344;
        double r5316346 = r5316341 + r5316345;
        double r5316347 = 32.0;
        double r5316348 = r5316344 * r5316340;
        double r5316349 = r5316348 * r5316340;
        double r5316350 = r5316347 * r5316349;
        double r5316351 = r5316346 + r5316350;
        return r5316351;
}


double f_of(float x) {
        float r5316352 = 120.0;
        float r5316353 = x;
        float r5316354 = r5316352 * r5316353;
        float r5316355 = -160.0;
        float r5316356 = r5316353 * r5316353;
        float r5316357 = r5316356 * r5316353;
        float r5316358 = r5316355 * r5316357;
        float r5316359 = r5316354 + r5316358;
        float r5316360 = 32.0;
        float r5316361 = 3;
        float r5316362 = 1;
        float r5316363 = r5316361 + r5316362;
        float r5316364 = r5316363 + r5316362;
        float r5316365 = pow(r5316353, r5316364);
        float r5316366 = r5316360 * r5316365;
        float r5316367 = r5316359 + r5316366;
        return r5316367;
}

double f_od(double x) {
        double r5316368 = 120.0;
        double r5316369 = x;
        double r5316370 = r5316368 * r5316369;
        double r5316371 = -160.0;
        double r5316372 = r5316369 * r5316369;
        double r5316373 = r5316372 * r5316369;
        double r5316374 = r5316371 * r5316373;
        double r5316375 = r5316370 + r5316374;
        double r5316376 = 32.0;
        double r5316377 = 3;
        double r5316378 = 1;
        double r5316379 = r5316377 + r5316378;
        double r5316380 = r5316379 + r5316378;
        double r5316381 = pow(r5316369, r5316380);
        double r5316382 = r5316376 * r5316381;
        double r5316383 = r5316375 + r5316382;
        return r5316383;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5316384, r5316385, r5316386, r5316387, r5316388, r5316389, r5316390, r5316391, r5316392, r5316393, r5316394, r5316395, r5316396;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5316384, "120.0", 10, MPFR_RNDN);
        mpfr_init(r5316385);
        mpfr_init(r5316386);
        mpfr_init_set_str(r5316387, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r5316388);
        mpfr_init(r5316389);
        mpfr_init(r5316390);
        mpfr_init(r5316391);
        mpfr_init_set_str(r5316392, "32.0", 10, MPFR_RNDN);
        mpfr_init(r5316393);
        mpfr_init(r5316394);
        mpfr_init(r5316395);
        mpfr_init(r5316396);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5316385, x, MPFR_RNDN);
        mpfr_mul(r5316386, r5316384, r5316385, MPFR_RNDN);
        ;
        mpfr_mul(r5316388, r5316385, r5316385, MPFR_RNDN);
        mpfr_mul(r5316389, r5316388, r5316385, MPFR_RNDN);
        mpfr_mul(r5316390, r5316387, r5316389, MPFR_RNDN);
        mpfr_add(r5316391, r5316386, r5316390, MPFR_RNDN);
        ;
        mpfr_mul(r5316393, r5316389, r5316385, MPFR_RNDN);
        mpfr_mul(r5316394, r5316393, r5316385, MPFR_RNDN);
        mpfr_mul(r5316395, r5316392, r5316394, MPFR_RNDN);
        mpfr_add(r5316396, r5316391, r5316395, MPFR_RNDN);
        return mpfr_get_d(r5316396, MPFR_RNDN);
}

static mpfr_t r5316397, r5316398, r5316399, r5316400, r5316401, r5316402, r5316403, r5316404, r5316405, r5316406, r5316407, r5316408, r5316409, r5316410, r5316411, r5316412;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5316397, "120.0", 10, MPFR_RNDN);
        mpfr_init(r5316398);
        mpfr_init(r5316399);
        mpfr_init_set_str(r5316400, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r5316401);
        mpfr_init(r5316402);
        mpfr_init(r5316403);
        mpfr_init(r5316404);
        mpfr_init_set_str(r5316405, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316406, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316407, "1", 10, MPFR_RNDN);
        mpfr_init(r5316408);
        mpfr_init(r5316409);
        mpfr_init(r5316410);
        mpfr_init(r5316411);
        mpfr_init(r5316412);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5316398, x, MPFR_RNDN);
        mpfr_mul(r5316399, r5316397, r5316398, MPFR_RNDN);
        ;
        mpfr_mul(r5316401, r5316398, r5316398, MPFR_RNDN);
        mpfr_mul(r5316402, r5316401, r5316398, MPFR_RNDN);
        mpfr_mul(r5316403, r5316400, r5316402, MPFR_RNDN);
        mpfr_add(r5316404, r5316399, r5316403, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r5316408, r5316406, r5316407, MPFR_RNDN);
        mpfr_add(r5316409, r5316408, r5316407, MPFR_RNDN);
        mpfr_pow(r5316410, r5316398, r5316409, MPFR_RNDN);
        mpfr_mul(r5316411, r5316405, r5316410, MPFR_RNDN);
        mpfr_add(r5316412, r5316404, r5316411, MPFR_RNDN);
        return mpfr_get_d(r5316412, MPFR_RNDN);
}

static mpfr_t r5316413, r5316414, r5316415, r5316416, r5316417, r5316418, r5316419, r5316420, r5316421, r5316422, r5316423, r5316424, r5316425, r5316426, r5316427, r5316428;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5316413, "120.0", 10, MPFR_RNDN);
        mpfr_init(r5316414);
        mpfr_init(r5316415);
        mpfr_init_set_str(r5316416, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r5316417);
        mpfr_init(r5316418);
        mpfr_init(r5316419);
        mpfr_init(r5316420);
        mpfr_init_set_str(r5316421, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316422, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r5316423, "1", 10, MPFR_RNDN);
        mpfr_init(r5316424);
        mpfr_init(r5316425);
        mpfr_init(r5316426);
        mpfr_init(r5316427);
        mpfr_init(r5316428);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5316414, x, MPFR_RNDN);
        mpfr_mul(r5316415, r5316413, r5316414, MPFR_RNDN);
        ;
        mpfr_mul(r5316417, r5316414, r5316414, MPFR_RNDN);
        mpfr_mul(r5316418, r5316417, r5316414, MPFR_RNDN);
        mpfr_mul(r5316419, r5316416, r5316418, MPFR_RNDN);
        mpfr_add(r5316420, r5316415, r5316419, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r5316424, r5316422, r5316423, MPFR_RNDN);
        mpfr_add(r5316425, r5316424, r5316423, MPFR_RNDN);
        mpfr_pow(r5316426, r5316414, r5316425, MPFR_RNDN);
        mpfr_mul(r5316427, r5316421, r5316426, MPFR_RNDN);
        mpfr_add(r5316428, r5316420, r5316427, MPFR_RNDN);
        return mpfr_get_d(r5316428, MPFR_RNDN);
}

