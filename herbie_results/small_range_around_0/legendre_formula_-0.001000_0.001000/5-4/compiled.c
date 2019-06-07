#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r4436331 = 0.375;
        float r4436332 = -3.75;
        float r4436333 = x;
        float r4436334 = r4436333 * r4436333;
        float r4436335 = r4436332 * r4436334;
        float r4436336 = r4436331 + r4436335;
        float r4436337 = 4.375;
        float r4436338 = r4436334 * r4436333;
        float r4436339 = r4436338 * r4436333;
        float r4436340 = r4436337 * r4436339;
        float r4436341 = r4436336 + r4436340;
        return r4436341;
}

double f_id(double x) {
        double r4436342 = 0.375;
        double r4436343 = -3.75;
        double r4436344 = x;
        double r4436345 = r4436344 * r4436344;
        double r4436346 = r4436343 * r4436345;
        double r4436347 = r4436342 + r4436346;
        double r4436348 = 4.375;
        double r4436349 = r4436345 * r4436344;
        double r4436350 = r4436349 * r4436344;
        double r4436351 = r4436348 * r4436350;
        double r4436352 = r4436347 + r4436351;
        return r4436352;
}


double f_of(float x) {
        float r4436353 = 0.375;
        float r4436354 = -3.75;
        float r4436355 = x;
        float r4436356 = r4436355 * r4436355;
        float r4436357 = r4436354 * r4436356;
        float r4436358 = r4436353 + r4436357;
        float r4436359 = 4.375;
        float r4436360 = r4436356 * r4436355;
        float r4436361 = r4436360 * r4436355;
        float r4436362 = r4436359 * r4436361;
        float r4436363 = r4436358 + r4436362;
        return r4436363;
}

double f_od(double x) {
        double r4436364 = 0.375;
        double r4436365 = -3.75;
        double r4436366 = x;
        double r4436367 = r4436366 * r4436366;
        double r4436368 = r4436365 * r4436367;
        double r4436369 = r4436364 + r4436368;
        double r4436370 = 4.375;
        double r4436371 = r4436367 * r4436366;
        double r4436372 = r4436371 * r4436366;
        double r4436373 = r4436370 * r4436372;
        double r4436374 = r4436369 + r4436373;
        return r4436374;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4436375, r4436376, r4436377, r4436378, r4436379, r4436380, r4436381, r4436382, r4436383, r4436384, r4436385;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436375, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436376, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4436377);
        mpfr_init(r4436378);
        mpfr_init(r4436379);
        mpfr_init(r4436380);
        mpfr_init_set_str(r4436381, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4436382);
        mpfr_init(r4436383);
        mpfr_init(r4436384);
        mpfr_init(r4436385);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4436377, x, MPFR_RNDN);
        mpfr_mul(r4436378, r4436377, r4436377, MPFR_RNDN);
        mpfr_mul(r4436379, r4436376, r4436378, MPFR_RNDN);
        mpfr_add(r4436380, r4436375, r4436379, MPFR_RNDN);
        ;
        mpfr_mul(r4436382, r4436378, r4436377, MPFR_RNDN);
        mpfr_mul(r4436383, r4436382, r4436377, MPFR_RNDN);
        mpfr_mul(r4436384, r4436381, r4436383, MPFR_RNDN);
        mpfr_add(r4436385, r4436380, r4436384, MPFR_RNDN);
        return mpfr_get_d(r4436385, MPFR_RNDN);
}

static mpfr_t r4436386, r4436387, r4436388, r4436389, r4436390, r4436391, r4436392, r4436393, r4436394, r4436395, r4436396;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436386, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436387, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4436388);
        mpfr_init(r4436389);
        mpfr_init(r4436390);
        mpfr_init(r4436391);
        mpfr_init_set_str(r4436392, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4436393);
        mpfr_init(r4436394);
        mpfr_init(r4436395);
        mpfr_init(r4436396);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4436388, x, MPFR_RNDN);
        mpfr_mul(r4436389, r4436388, r4436388, MPFR_RNDN);
        mpfr_mul(r4436390, r4436387, r4436389, MPFR_RNDN);
        mpfr_add(r4436391, r4436386, r4436390, MPFR_RNDN);
        ;
        mpfr_mul(r4436393, r4436389, r4436388, MPFR_RNDN);
        mpfr_mul(r4436394, r4436393, r4436388, MPFR_RNDN);
        mpfr_mul(r4436395, r4436392, r4436394, MPFR_RNDN);
        mpfr_add(r4436396, r4436391, r4436395, MPFR_RNDN);
        return mpfr_get_d(r4436396, MPFR_RNDN);
}

static mpfr_t r4436397, r4436398, r4436399, r4436400, r4436401, r4436402, r4436403, r4436404, r4436405, r4436406, r4436407;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436397, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436398, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4436399);
        mpfr_init(r4436400);
        mpfr_init(r4436401);
        mpfr_init(r4436402);
        mpfr_init_set_str(r4436403, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4436404);
        mpfr_init(r4436405);
        mpfr_init(r4436406);
        mpfr_init(r4436407);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4436399, x, MPFR_RNDN);
        mpfr_mul(r4436400, r4436399, r4436399, MPFR_RNDN);
        mpfr_mul(r4436401, r4436398, r4436400, MPFR_RNDN);
        mpfr_add(r4436402, r4436397, r4436401, MPFR_RNDN);
        ;
        mpfr_mul(r4436404, r4436400, r4436399, MPFR_RNDN);
        mpfr_mul(r4436405, r4436404, r4436399, MPFR_RNDN);
        mpfr_mul(r4436406, r4436403, r4436405, MPFR_RNDN);
        mpfr_add(r4436407, r4436402, r4436406, MPFR_RNDN);
        return mpfr_get_d(r4436407, MPFR_RNDN);
}

