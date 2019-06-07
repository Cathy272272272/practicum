#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r8203387 = 30240.0;
        float r8203388 = x;
        float r8203389 = r8203387 * r8203388;
        float r8203390 = -80640.0;
        float r8203391 = r8203388 * r8203388;
        float r8203392 = r8203391 * r8203388;
        float r8203393 = r8203390 * r8203392;
        float r8203394 = r8203389 + r8203393;
        float r8203395 = 48384.0;
        float r8203396 = r8203392 * r8203388;
        float r8203397 = r8203396 * r8203388;
        float r8203398 = r8203395 * r8203397;
        float r8203399 = r8203394 + r8203398;
        float r8203400 = -9216.0;
        float r8203401 = r8203397 * r8203388;
        float r8203402 = r8203401 * r8203388;
        float r8203403 = r8203400 * r8203402;
        float r8203404 = r8203399 + r8203403;
        float r8203405 = 512.0;
        float r8203406 = r8203402 * r8203388;
        float r8203407 = r8203406 * r8203388;
        float r8203408 = r8203405 * r8203407;
        float r8203409 = r8203404 + r8203408;
        return r8203409;
}

double f_id(double x) {
        double r8203410 = 30240.0;
        double r8203411 = x;
        double r8203412 = r8203410 * r8203411;
        double r8203413 = -80640.0;
        double r8203414 = r8203411 * r8203411;
        double r8203415 = r8203414 * r8203411;
        double r8203416 = r8203413 * r8203415;
        double r8203417 = r8203412 + r8203416;
        double r8203418 = 48384.0;
        double r8203419 = r8203415 * r8203411;
        double r8203420 = r8203419 * r8203411;
        double r8203421 = r8203418 * r8203420;
        double r8203422 = r8203417 + r8203421;
        double r8203423 = -9216.0;
        double r8203424 = r8203420 * r8203411;
        double r8203425 = r8203424 * r8203411;
        double r8203426 = r8203423 * r8203425;
        double r8203427 = r8203422 + r8203426;
        double r8203428 = 512.0;
        double r8203429 = r8203425 * r8203411;
        double r8203430 = r8203429 * r8203411;
        double r8203431 = r8203428 * r8203430;
        double r8203432 = r8203427 + r8203431;
        return r8203432;
}


double f_of(float x) {
        float r8203433 = 30240.0;
        float r8203434 = x;
        float r8203435 = r8203433 * r8203434;
        float r8203436 = -80640.0;
        float r8203437 = r8203434 * r8203434;
        float r8203438 = r8203437 * r8203434;
        float r8203439 = r8203436 * r8203438;
        float r8203440 = r8203435 + r8203439;
        float r8203441 = 48384.0;
        float r8203442 = r8203438 * r8203434;
        float r8203443 = r8203442 * r8203434;
        float r8203444 = r8203441 * r8203443;
        float r8203445 = r8203440 + r8203444;
        float r8203446 = -9216.0;
        float r8203447 = r8203443 * r8203434;
        float r8203448 = r8203446 * r8203447;
        float r8203449 = r8203448 * r8203434;
        float r8203450 = r8203445 + r8203449;
        float r8203451 = 512.0;
        float r8203452 = r8203447 * r8203434;
        float r8203453 = r8203452 * r8203434;
        float r8203454 = r8203453 * r8203434;
        float r8203455 = r8203451 * r8203454;
        float r8203456 = r8203450 + r8203455;
        return r8203456;
}

double f_od(double x) {
        double r8203457 = 30240.0;
        double r8203458 = x;
        double r8203459 = r8203457 * r8203458;
        double r8203460 = -80640.0;
        double r8203461 = r8203458 * r8203458;
        double r8203462 = r8203461 * r8203458;
        double r8203463 = r8203460 * r8203462;
        double r8203464 = r8203459 + r8203463;
        double r8203465 = 48384.0;
        double r8203466 = r8203462 * r8203458;
        double r8203467 = r8203466 * r8203458;
        double r8203468 = r8203465 * r8203467;
        double r8203469 = r8203464 + r8203468;
        double r8203470 = -9216.0;
        double r8203471 = r8203467 * r8203458;
        double r8203472 = r8203470 * r8203471;
        double r8203473 = r8203472 * r8203458;
        double r8203474 = r8203469 + r8203473;
        double r8203475 = 512.0;
        double r8203476 = r8203471 * r8203458;
        double r8203477 = r8203476 * r8203458;
        double r8203478 = r8203477 * r8203458;
        double r8203479 = r8203475 * r8203478;
        double r8203480 = r8203474 + r8203479;
        return r8203480;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8203481, r8203482, r8203483, r8203484, r8203485, r8203486, r8203487, r8203488, r8203489, r8203490, r8203491, r8203492, r8203493, r8203494, r8203495, r8203496, r8203497, r8203498, r8203499, r8203500, r8203501, r8203502, r8203503;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8203481, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r8203482);
        mpfr_init(r8203483);
        mpfr_init_set_str(r8203484, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r8203485);
        mpfr_init(r8203486);
        mpfr_init(r8203487);
        mpfr_init(r8203488);
        mpfr_init_set_str(r8203489, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r8203490);
        mpfr_init(r8203491);
        mpfr_init(r8203492);
        mpfr_init(r8203493);
        mpfr_init_set_str(r8203494, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r8203495);
        mpfr_init(r8203496);
        mpfr_init(r8203497);
        mpfr_init(r8203498);
        mpfr_init_set_str(r8203499, "512.0", 10, MPFR_RNDN);
        mpfr_init(r8203500);
        mpfr_init(r8203501);
        mpfr_init(r8203502);
        mpfr_init(r8203503);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8203482, x, MPFR_RNDN);
        mpfr_mul(r8203483, r8203481, r8203482, MPFR_RNDN);
        ;
        mpfr_mul(r8203485, r8203482, r8203482, MPFR_RNDN);
        mpfr_mul(r8203486, r8203485, r8203482, MPFR_RNDN);
        mpfr_mul(r8203487, r8203484, r8203486, MPFR_RNDN);
        mpfr_add(r8203488, r8203483, r8203487, MPFR_RNDN);
        ;
        mpfr_mul(r8203490, r8203486, r8203482, MPFR_RNDN);
        mpfr_mul(r8203491, r8203490, r8203482, MPFR_RNDN);
        mpfr_mul(r8203492, r8203489, r8203491, MPFR_RNDN);
        mpfr_add(r8203493, r8203488, r8203492, MPFR_RNDN);
        ;
        mpfr_mul(r8203495, r8203491, r8203482, MPFR_RNDN);
        mpfr_mul(r8203496, r8203495, r8203482, MPFR_RNDN);
        mpfr_mul(r8203497, r8203494, r8203496, MPFR_RNDN);
        mpfr_add(r8203498, r8203493, r8203497, MPFR_RNDN);
        ;
        mpfr_mul(r8203500, r8203496, r8203482, MPFR_RNDN);
        mpfr_mul(r8203501, r8203500, r8203482, MPFR_RNDN);
        mpfr_mul(r8203502, r8203499, r8203501, MPFR_RNDN);
        mpfr_add(r8203503, r8203498, r8203502, MPFR_RNDN);
        return mpfr_get_d(r8203503, MPFR_RNDN);
}

static mpfr_t r8203504, r8203505, r8203506, r8203507, r8203508, r8203509, r8203510, r8203511, r8203512, r8203513, r8203514, r8203515, r8203516, r8203517, r8203518, r8203519, r8203520, r8203521, r8203522, r8203523, r8203524, r8203525, r8203526, r8203527;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8203504, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r8203505);
        mpfr_init(r8203506);
        mpfr_init_set_str(r8203507, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r8203508);
        mpfr_init(r8203509);
        mpfr_init(r8203510);
        mpfr_init(r8203511);
        mpfr_init_set_str(r8203512, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r8203513);
        mpfr_init(r8203514);
        mpfr_init(r8203515);
        mpfr_init(r8203516);
        mpfr_init_set_str(r8203517, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r8203518);
        mpfr_init(r8203519);
        mpfr_init(r8203520);
        mpfr_init(r8203521);
        mpfr_init_set_str(r8203522, "512.0", 10, MPFR_RNDN);
        mpfr_init(r8203523);
        mpfr_init(r8203524);
        mpfr_init(r8203525);
        mpfr_init(r8203526);
        mpfr_init(r8203527);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8203505, x, MPFR_RNDN);
        mpfr_mul(r8203506, r8203504, r8203505, MPFR_RNDN);
        ;
        mpfr_mul(r8203508, r8203505, r8203505, MPFR_RNDN);
        mpfr_mul(r8203509, r8203508, r8203505, MPFR_RNDN);
        mpfr_mul(r8203510, r8203507, r8203509, MPFR_RNDN);
        mpfr_add(r8203511, r8203506, r8203510, MPFR_RNDN);
        ;
        mpfr_mul(r8203513, r8203509, r8203505, MPFR_RNDN);
        mpfr_mul(r8203514, r8203513, r8203505, MPFR_RNDN);
        mpfr_mul(r8203515, r8203512, r8203514, MPFR_RNDN);
        mpfr_add(r8203516, r8203511, r8203515, MPFR_RNDN);
        ;
        mpfr_mul(r8203518, r8203514, r8203505, MPFR_RNDN);
        mpfr_mul(r8203519, r8203517, r8203518, MPFR_RNDN);
        mpfr_mul(r8203520, r8203519, r8203505, MPFR_RNDN);
        mpfr_add(r8203521, r8203516, r8203520, MPFR_RNDN);
        ;
        mpfr_mul(r8203523, r8203518, r8203505, MPFR_RNDN);
        mpfr_mul(r8203524, r8203523, r8203505, MPFR_RNDN);
        mpfr_mul(r8203525, r8203524, r8203505, MPFR_RNDN);
        mpfr_mul(r8203526, r8203522, r8203525, MPFR_RNDN);
        mpfr_add(r8203527, r8203521, r8203526, MPFR_RNDN);
        return mpfr_get_d(r8203527, MPFR_RNDN);
}

static mpfr_t r8203528, r8203529, r8203530, r8203531, r8203532, r8203533, r8203534, r8203535, r8203536, r8203537, r8203538, r8203539, r8203540, r8203541, r8203542, r8203543, r8203544, r8203545, r8203546, r8203547, r8203548, r8203549, r8203550, r8203551;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8203528, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r8203529);
        mpfr_init(r8203530);
        mpfr_init_set_str(r8203531, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r8203532);
        mpfr_init(r8203533);
        mpfr_init(r8203534);
        mpfr_init(r8203535);
        mpfr_init_set_str(r8203536, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r8203537);
        mpfr_init(r8203538);
        mpfr_init(r8203539);
        mpfr_init(r8203540);
        mpfr_init_set_str(r8203541, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r8203542);
        mpfr_init(r8203543);
        mpfr_init(r8203544);
        mpfr_init(r8203545);
        mpfr_init_set_str(r8203546, "512.0", 10, MPFR_RNDN);
        mpfr_init(r8203547);
        mpfr_init(r8203548);
        mpfr_init(r8203549);
        mpfr_init(r8203550);
        mpfr_init(r8203551);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8203529, x, MPFR_RNDN);
        mpfr_mul(r8203530, r8203528, r8203529, MPFR_RNDN);
        ;
        mpfr_mul(r8203532, r8203529, r8203529, MPFR_RNDN);
        mpfr_mul(r8203533, r8203532, r8203529, MPFR_RNDN);
        mpfr_mul(r8203534, r8203531, r8203533, MPFR_RNDN);
        mpfr_add(r8203535, r8203530, r8203534, MPFR_RNDN);
        ;
        mpfr_mul(r8203537, r8203533, r8203529, MPFR_RNDN);
        mpfr_mul(r8203538, r8203537, r8203529, MPFR_RNDN);
        mpfr_mul(r8203539, r8203536, r8203538, MPFR_RNDN);
        mpfr_add(r8203540, r8203535, r8203539, MPFR_RNDN);
        ;
        mpfr_mul(r8203542, r8203538, r8203529, MPFR_RNDN);
        mpfr_mul(r8203543, r8203541, r8203542, MPFR_RNDN);
        mpfr_mul(r8203544, r8203543, r8203529, MPFR_RNDN);
        mpfr_add(r8203545, r8203540, r8203544, MPFR_RNDN);
        ;
        mpfr_mul(r8203547, r8203542, r8203529, MPFR_RNDN);
        mpfr_mul(r8203548, r8203547, r8203529, MPFR_RNDN);
        mpfr_mul(r8203549, r8203548, r8203529, MPFR_RNDN);
        mpfr_mul(r8203550, r8203546, r8203549, MPFR_RNDN);
        mpfr_add(r8203551, r8203545, r8203550, MPFR_RNDN);
        return mpfr_get_d(r8203551, MPFR_RNDN);
}

