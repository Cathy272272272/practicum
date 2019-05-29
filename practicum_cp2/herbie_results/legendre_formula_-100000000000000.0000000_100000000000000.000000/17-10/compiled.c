#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6435379 = -0.246094;
        float r6435380 = 13.535156;
        float r6435381 = x;
        float r6435382 = r6435381 * r6435381;
        float r6435383 = r6435380 * r6435382;
        float r6435384 = r6435379 + r6435383;
        float r6435385 = -117.304688;
        float r6435386 = r6435382 * r6435381;
        float r6435387 = r6435386 * r6435381;
        float r6435388 = r6435385 * r6435387;
        float r6435389 = r6435384 + r6435388;
        float r6435390 = 351.914062;
        float r6435391 = r6435387 * r6435381;
        float r6435392 = r6435391 * r6435381;
        float r6435393 = r6435390 * r6435392;
        float r6435394 = r6435389 + r6435393;
        float r6435395 = -427.324219;
        float r6435396 = r6435392 * r6435381;
        float r6435397 = r6435396 * r6435381;
        float r6435398 = r6435395 * r6435397;
        float r6435399 = r6435394 + r6435398;
        float r6435400 = 180.425781;
        float r6435401 = r6435397 * r6435381;
        float r6435402 = r6435401 * r6435381;
        float r6435403 = r6435400 * r6435402;
        float r6435404 = r6435399 + r6435403;
        return r6435404;
}

double f_id(double x) {
        double r6435405 = -0.246094;
        double r6435406 = 13.535156;
        double r6435407 = x;
        double r6435408 = r6435407 * r6435407;
        double r6435409 = r6435406 * r6435408;
        double r6435410 = r6435405 + r6435409;
        double r6435411 = -117.304688;
        double r6435412 = r6435408 * r6435407;
        double r6435413 = r6435412 * r6435407;
        double r6435414 = r6435411 * r6435413;
        double r6435415 = r6435410 + r6435414;
        double r6435416 = 351.914062;
        double r6435417 = r6435413 * r6435407;
        double r6435418 = r6435417 * r6435407;
        double r6435419 = r6435416 * r6435418;
        double r6435420 = r6435415 + r6435419;
        double r6435421 = -427.324219;
        double r6435422 = r6435418 * r6435407;
        double r6435423 = r6435422 * r6435407;
        double r6435424 = r6435421 * r6435423;
        double r6435425 = r6435420 + r6435424;
        double r6435426 = 180.425781;
        double r6435427 = r6435423 * r6435407;
        double r6435428 = r6435427 * r6435407;
        double r6435429 = r6435426 * r6435428;
        double r6435430 = r6435425 + r6435429;
        return r6435430;
}


double f_of(float x) {
        float r6435431 = -0.246094;
        float r6435432 = 13.535156;
        float r6435433 = x;
        float r6435434 = r6435433 * r6435433;
        float r6435435 = r6435432 * r6435434;
        float r6435436 = r6435431 + r6435435;
        float r6435437 = -117.304688;
        float r6435438 = r6435434 * r6435433;
        float r6435439 = r6435438 * r6435433;
        float r6435440 = r6435437 * r6435439;
        float r6435441 = r6435436 + r6435440;
        float r6435442 = 351.914062;
        float r6435443 = r6435439 * r6435433;
        float r6435444 = r6435443 * r6435433;
        float r6435445 = r6435442 * r6435444;
        float r6435446 = r6435441 + r6435445;
        float r6435447 = -427.324219;
        float r6435448 = r6435444 * r6435433;
        float r6435449 = r6435448 * r6435433;
        float r6435450 = r6435447 * r6435449;
        float r6435451 = r6435446 + r6435450;
        float r6435452 = 180.425781;
        float r6435453 = r6435449 * r6435433;
        float r6435454 = r6435453 * r6435433;
        float r6435455 = r6435452 * r6435454;
        float r6435456 = r6435451 + r6435455;
        return r6435456;
}

double f_od(double x) {
        double r6435457 = -0.246094;
        double r6435458 = 13.535156;
        double r6435459 = x;
        double r6435460 = r6435459 * r6435459;
        double r6435461 = r6435458 * r6435460;
        double r6435462 = r6435457 + r6435461;
        double r6435463 = -117.304688;
        double r6435464 = r6435460 * r6435459;
        double r6435465 = r6435464 * r6435459;
        double r6435466 = r6435463 * r6435465;
        double r6435467 = r6435462 + r6435466;
        double r6435468 = 351.914062;
        double r6435469 = r6435465 * r6435459;
        double r6435470 = r6435469 * r6435459;
        double r6435471 = r6435468 * r6435470;
        double r6435472 = r6435467 + r6435471;
        double r6435473 = -427.324219;
        double r6435474 = r6435470 * r6435459;
        double r6435475 = r6435474 * r6435459;
        double r6435476 = r6435473 * r6435475;
        double r6435477 = r6435472 + r6435476;
        double r6435478 = 180.425781;
        double r6435479 = r6435475 * r6435459;
        double r6435480 = r6435479 * r6435459;
        double r6435481 = r6435478 * r6435480;
        double r6435482 = r6435477 + r6435481;
        return r6435482;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6435483, r6435484, r6435485, r6435486, r6435487, r6435488, r6435489, r6435490, r6435491, r6435492, r6435493, r6435494, r6435495, r6435496, r6435497, r6435498, r6435499, r6435500, r6435501, r6435502, r6435503, r6435504, r6435505, r6435506, r6435507, r6435508;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435483, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6435484, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6435485);
        mpfr_init(r6435486);
        mpfr_init(r6435487);
        mpfr_init(r6435488);
        mpfr_init_set_str(r6435489, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6435490);
        mpfr_init(r6435491);
        mpfr_init(r6435492);
        mpfr_init(r6435493);
        mpfr_init_set_str(r6435494, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6435495);
        mpfr_init(r6435496);
        mpfr_init(r6435497);
        mpfr_init(r6435498);
        mpfr_init_set_str(r6435499, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6435500);
        mpfr_init(r6435501);
        mpfr_init(r6435502);
        mpfr_init(r6435503);
        mpfr_init_set_str(r6435504, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6435505);
        mpfr_init(r6435506);
        mpfr_init(r6435507);
        mpfr_init(r6435508);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6435485, x, MPFR_RNDN);
        mpfr_mul(r6435486, r6435485, r6435485, MPFR_RNDN);
        mpfr_mul(r6435487, r6435484, r6435486, MPFR_RNDN);
        mpfr_add(r6435488, r6435483, r6435487, MPFR_RNDN);
        ;
        mpfr_mul(r6435490, r6435486, r6435485, MPFR_RNDN);
        mpfr_mul(r6435491, r6435490, r6435485, MPFR_RNDN);
        mpfr_mul(r6435492, r6435489, r6435491, MPFR_RNDN);
        mpfr_add(r6435493, r6435488, r6435492, MPFR_RNDN);
        ;
        mpfr_mul(r6435495, r6435491, r6435485, MPFR_RNDN);
        mpfr_mul(r6435496, r6435495, r6435485, MPFR_RNDN);
        mpfr_mul(r6435497, r6435494, r6435496, MPFR_RNDN);
        mpfr_add(r6435498, r6435493, r6435497, MPFR_RNDN);
        ;
        mpfr_mul(r6435500, r6435496, r6435485, MPFR_RNDN);
        mpfr_mul(r6435501, r6435500, r6435485, MPFR_RNDN);
        mpfr_mul(r6435502, r6435499, r6435501, MPFR_RNDN);
        mpfr_add(r6435503, r6435498, r6435502, MPFR_RNDN);
        ;
        mpfr_mul(r6435505, r6435501, r6435485, MPFR_RNDN);
        mpfr_mul(r6435506, r6435505, r6435485, MPFR_RNDN);
        mpfr_mul(r6435507, r6435504, r6435506, MPFR_RNDN);
        mpfr_add(r6435508, r6435503, r6435507, MPFR_RNDN);
        return mpfr_get_d(r6435508, MPFR_RNDN);
}

static mpfr_t r6435509, r6435510, r6435511, r6435512, r6435513, r6435514, r6435515, r6435516, r6435517, r6435518, r6435519, r6435520, r6435521, r6435522, r6435523, r6435524, r6435525, r6435526, r6435527, r6435528, r6435529, r6435530, r6435531, r6435532, r6435533, r6435534;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435509, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6435510, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6435511);
        mpfr_init(r6435512);
        mpfr_init(r6435513);
        mpfr_init(r6435514);
        mpfr_init_set_str(r6435515, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6435516);
        mpfr_init(r6435517);
        mpfr_init(r6435518);
        mpfr_init(r6435519);
        mpfr_init_set_str(r6435520, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6435521);
        mpfr_init(r6435522);
        mpfr_init(r6435523);
        mpfr_init(r6435524);
        mpfr_init_set_str(r6435525, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6435526);
        mpfr_init(r6435527);
        mpfr_init(r6435528);
        mpfr_init(r6435529);
        mpfr_init_set_str(r6435530, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6435531);
        mpfr_init(r6435532);
        mpfr_init(r6435533);
        mpfr_init(r6435534);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6435511, x, MPFR_RNDN);
        mpfr_mul(r6435512, r6435511, r6435511, MPFR_RNDN);
        mpfr_mul(r6435513, r6435510, r6435512, MPFR_RNDN);
        mpfr_add(r6435514, r6435509, r6435513, MPFR_RNDN);
        ;
        mpfr_mul(r6435516, r6435512, r6435511, MPFR_RNDN);
        mpfr_mul(r6435517, r6435516, r6435511, MPFR_RNDN);
        mpfr_mul(r6435518, r6435515, r6435517, MPFR_RNDN);
        mpfr_add(r6435519, r6435514, r6435518, MPFR_RNDN);
        ;
        mpfr_mul(r6435521, r6435517, r6435511, MPFR_RNDN);
        mpfr_mul(r6435522, r6435521, r6435511, MPFR_RNDN);
        mpfr_mul(r6435523, r6435520, r6435522, MPFR_RNDN);
        mpfr_add(r6435524, r6435519, r6435523, MPFR_RNDN);
        ;
        mpfr_mul(r6435526, r6435522, r6435511, MPFR_RNDN);
        mpfr_mul(r6435527, r6435526, r6435511, MPFR_RNDN);
        mpfr_mul(r6435528, r6435525, r6435527, MPFR_RNDN);
        mpfr_add(r6435529, r6435524, r6435528, MPFR_RNDN);
        ;
        mpfr_mul(r6435531, r6435527, r6435511, MPFR_RNDN);
        mpfr_mul(r6435532, r6435531, r6435511, MPFR_RNDN);
        mpfr_mul(r6435533, r6435530, r6435532, MPFR_RNDN);
        mpfr_add(r6435534, r6435529, r6435533, MPFR_RNDN);
        return mpfr_get_d(r6435534, MPFR_RNDN);
}

static mpfr_t r6435535, r6435536, r6435537, r6435538, r6435539, r6435540, r6435541, r6435542, r6435543, r6435544, r6435545, r6435546, r6435547, r6435548, r6435549, r6435550, r6435551, r6435552, r6435553, r6435554, r6435555, r6435556, r6435557, r6435558, r6435559, r6435560;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6435535, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6435536, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6435537);
        mpfr_init(r6435538);
        mpfr_init(r6435539);
        mpfr_init(r6435540);
        mpfr_init_set_str(r6435541, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6435542);
        mpfr_init(r6435543);
        mpfr_init(r6435544);
        mpfr_init(r6435545);
        mpfr_init_set_str(r6435546, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6435547);
        mpfr_init(r6435548);
        mpfr_init(r6435549);
        mpfr_init(r6435550);
        mpfr_init_set_str(r6435551, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6435552);
        mpfr_init(r6435553);
        mpfr_init(r6435554);
        mpfr_init(r6435555);
        mpfr_init_set_str(r6435556, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6435557);
        mpfr_init(r6435558);
        mpfr_init(r6435559);
        mpfr_init(r6435560);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6435537, x, MPFR_RNDN);
        mpfr_mul(r6435538, r6435537, r6435537, MPFR_RNDN);
        mpfr_mul(r6435539, r6435536, r6435538, MPFR_RNDN);
        mpfr_add(r6435540, r6435535, r6435539, MPFR_RNDN);
        ;
        mpfr_mul(r6435542, r6435538, r6435537, MPFR_RNDN);
        mpfr_mul(r6435543, r6435542, r6435537, MPFR_RNDN);
        mpfr_mul(r6435544, r6435541, r6435543, MPFR_RNDN);
        mpfr_add(r6435545, r6435540, r6435544, MPFR_RNDN);
        ;
        mpfr_mul(r6435547, r6435543, r6435537, MPFR_RNDN);
        mpfr_mul(r6435548, r6435547, r6435537, MPFR_RNDN);
        mpfr_mul(r6435549, r6435546, r6435548, MPFR_RNDN);
        mpfr_add(r6435550, r6435545, r6435549, MPFR_RNDN);
        ;
        mpfr_mul(r6435552, r6435548, r6435537, MPFR_RNDN);
        mpfr_mul(r6435553, r6435552, r6435537, MPFR_RNDN);
        mpfr_mul(r6435554, r6435551, r6435553, MPFR_RNDN);
        mpfr_add(r6435555, r6435550, r6435554, MPFR_RNDN);
        ;
        mpfr_mul(r6435557, r6435553, r6435537, MPFR_RNDN);
        mpfr_mul(r6435558, r6435557, r6435537, MPFR_RNDN);
        mpfr_mul(r6435559, r6435556, r6435558, MPFR_RNDN);
        mpfr_add(r6435560, r6435555, r6435559, MPFR_RNDN);
        return mpfr_get_d(r6435560, MPFR_RNDN);
}

