#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r3749343 = 1.0;
        float r3749344 = -3.0;
        float r3749345 = x;
        float r3749346 = r3749344 * r3749345;
        float r3749347 = r3749343 + r3749346;
        float r3749348 = 1.5;
        float r3749349 = r3749345 * r3749345;
        float r3749350 = r3749348 * r3749349;
        float r3749351 = r3749347 + r3749350;
        float r3749352 = -0.166667;
        float r3749353 = r3749349 * r3749345;
        float r3749354 = r3749352 * r3749353;
        float r3749355 = r3749351 + r3749354;
        return r3749355;
}

double f_id(double x) {
        double r3749356 = 1.0;
        double r3749357 = -3.0;
        double r3749358 = x;
        double r3749359 = r3749357 * r3749358;
        double r3749360 = r3749356 + r3749359;
        double r3749361 = 1.5;
        double r3749362 = r3749358 * r3749358;
        double r3749363 = r3749361 * r3749362;
        double r3749364 = r3749360 + r3749363;
        double r3749365 = -0.166667;
        double r3749366 = r3749362 * r3749358;
        double r3749367 = r3749365 * r3749366;
        double r3749368 = r3749364 + r3749367;
        return r3749368;
}


double f_of(float x) {
        float r3749369 = 1.0;
        float r3749370 = -3.0;
        float r3749371 = x;
        float r3749372 = r3749370 * r3749371;
        float r3749373 = r3749369 + r3749372;
        float r3749374 = 1.5;
        float r3749375 = r3749371 * r3749371;
        float r3749376 = r3749374 * r3749375;
        float r3749377 = r3749373 + r3749376;
        float r3749378 = -0.166667;
        float r3749379 = r3749375 * r3749371;
        float r3749380 = r3749378 * r3749379;
        float r3749381 = r3749377 + r3749380;
        return r3749381;
}

double f_od(double x) {
        double r3749382 = 1.0;
        double r3749383 = -3.0;
        double r3749384 = x;
        double r3749385 = r3749383 * r3749384;
        double r3749386 = r3749382 + r3749385;
        double r3749387 = 1.5;
        double r3749388 = r3749384 * r3749384;
        double r3749389 = r3749387 * r3749388;
        double r3749390 = r3749386 + r3749389;
        double r3749391 = -0.166667;
        double r3749392 = r3749388 * r3749384;
        double r3749393 = r3749391 * r3749392;
        double r3749394 = r3749390 + r3749393;
        return r3749394;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3749395, r3749396, r3749397, r3749398, r3749399, r3749400, r3749401, r3749402, r3749403, r3749404, r3749405, r3749406, r3749407;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749395, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749396, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r3749397);
        mpfr_init(r3749398);
        mpfr_init(r3749399);
        mpfr_init_set_str(r3749400, "1.5", 10, MPFR_RNDN);
        mpfr_init(r3749401);
        mpfr_init(r3749402);
        mpfr_init(r3749403);
        mpfr_init_set_str(r3749404, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r3749405);
        mpfr_init(r3749406);
        mpfr_init(r3749407);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3749397, x, MPFR_RNDN);
        mpfr_mul(r3749398, r3749396, r3749397, MPFR_RNDN);
        mpfr_add(r3749399, r3749395, r3749398, MPFR_RNDN);
        ;
        mpfr_mul(r3749401, r3749397, r3749397, MPFR_RNDN);
        mpfr_mul(r3749402, r3749400, r3749401, MPFR_RNDN);
        mpfr_add(r3749403, r3749399, r3749402, MPFR_RNDN);
        ;
        mpfr_mul(r3749405, r3749401, r3749397, MPFR_RNDN);
        mpfr_mul(r3749406, r3749404, r3749405, MPFR_RNDN);
        mpfr_add(r3749407, r3749403, r3749406, MPFR_RNDN);
        return mpfr_get_d(r3749407, MPFR_RNDN);
}

static mpfr_t r3749408, r3749409, r3749410, r3749411, r3749412, r3749413, r3749414, r3749415, r3749416, r3749417, r3749418, r3749419, r3749420;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749408, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749409, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r3749410);
        mpfr_init(r3749411);
        mpfr_init(r3749412);
        mpfr_init_set_str(r3749413, "1.5", 10, MPFR_RNDN);
        mpfr_init(r3749414);
        mpfr_init(r3749415);
        mpfr_init(r3749416);
        mpfr_init_set_str(r3749417, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r3749418);
        mpfr_init(r3749419);
        mpfr_init(r3749420);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3749410, x, MPFR_RNDN);
        mpfr_mul(r3749411, r3749409, r3749410, MPFR_RNDN);
        mpfr_add(r3749412, r3749408, r3749411, MPFR_RNDN);
        ;
        mpfr_mul(r3749414, r3749410, r3749410, MPFR_RNDN);
        mpfr_mul(r3749415, r3749413, r3749414, MPFR_RNDN);
        mpfr_add(r3749416, r3749412, r3749415, MPFR_RNDN);
        ;
        mpfr_mul(r3749418, r3749414, r3749410, MPFR_RNDN);
        mpfr_mul(r3749419, r3749417, r3749418, MPFR_RNDN);
        mpfr_add(r3749420, r3749416, r3749419, MPFR_RNDN);
        return mpfr_get_d(r3749420, MPFR_RNDN);
}

static mpfr_t r3749421, r3749422, r3749423, r3749424, r3749425, r3749426, r3749427, r3749428, r3749429, r3749430, r3749431, r3749432, r3749433;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3749421, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3749422, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r3749423);
        mpfr_init(r3749424);
        mpfr_init(r3749425);
        mpfr_init_set_str(r3749426, "1.5", 10, MPFR_RNDN);
        mpfr_init(r3749427);
        mpfr_init(r3749428);
        mpfr_init(r3749429);
        mpfr_init_set_str(r3749430, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r3749431);
        mpfr_init(r3749432);
        mpfr_init(r3749433);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3749423, x, MPFR_RNDN);
        mpfr_mul(r3749424, r3749422, r3749423, MPFR_RNDN);
        mpfr_add(r3749425, r3749421, r3749424, MPFR_RNDN);
        ;
        mpfr_mul(r3749427, r3749423, r3749423, MPFR_RNDN);
        mpfr_mul(r3749428, r3749426, r3749427, MPFR_RNDN);
        mpfr_add(r3749429, r3749425, r3749428, MPFR_RNDN);
        ;
        mpfr_mul(r3749431, r3749427, r3749423, MPFR_RNDN);
        mpfr_mul(r3749432, r3749430, r3749431, MPFR_RNDN);
        mpfr_add(r3749433, r3749429, r3749432, MPFR_RNDN);
        return mpfr_get_d(r3749433, MPFR_RNDN);
}

