#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r9828410 = 30240.0;
        float r9828411 = x;
        float r9828412 = r9828410 * r9828411;
        float r9828413 = -80640.0;
        float r9828414 = r9828411 * r9828411;
        float r9828415 = r9828414 * r9828411;
        float r9828416 = r9828413 * r9828415;
        float r9828417 = r9828412 + r9828416;
        float r9828418 = 48384.0;
        float r9828419 = r9828415 * r9828411;
        float r9828420 = r9828419 * r9828411;
        float r9828421 = r9828418 * r9828420;
        float r9828422 = r9828417 + r9828421;
        float r9828423 = -9216.0;
        float r9828424 = r9828420 * r9828411;
        float r9828425 = r9828424 * r9828411;
        float r9828426 = r9828423 * r9828425;
        float r9828427 = r9828422 + r9828426;
        float r9828428 = 512.0;
        float r9828429 = r9828425 * r9828411;
        float r9828430 = r9828429 * r9828411;
        float r9828431 = r9828428 * r9828430;
        float r9828432 = r9828427 + r9828431;
        return r9828432;
}

double f_id(double x) {
        double r9828433 = 30240.0;
        double r9828434 = x;
        double r9828435 = r9828433 * r9828434;
        double r9828436 = -80640.0;
        double r9828437 = r9828434 * r9828434;
        double r9828438 = r9828437 * r9828434;
        double r9828439 = r9828436 * r9828438;
        double r9828440 = r9828435 + r9828439;
        double r9828441 = 48384.0;
        double r9828442 = r9828438 * r9828434;
        double r9828443 = r9828442 * r9828434;
        double r9828444 = r9828441 * r9828443;
        double r9828445 = r9828440 + r9828444;
        double r9828446 = -9216.0;
        double r9828447 = r9828443 * r9828434;
        double r9828448 = r9828447 * r9828434;
        double r9828449 = r9828446 * r9828448;
        double r9828450 = r9828445 + r9828449;
        double r9828451 = 512.0;
        double r9828452 = r9828448 * r9828434;
        double r9828453 = r9828452 * r9828434;
        double r9828454 = r9828451 * r9828453;
        double r9828455 = r9828450 + r9828454;
        return r9828455;
}


double f_of(float x) {
        float r9828456 = x;
        float r9828457 = r9828456 * r9828456;
        float r9828458 = -80640.0;
        float r9828459 = r9828458 * r9828456;
        float r9828460 = 48384.0;
        float r9828461 = r9828456 * r9828460;
        float r9828462 = r9828457 * r9828461;
        float r9828463 = r9828459 + r9828462;
        float r9828464 = r9828457 * r9828463;
        float r9828465 = 7;
        float r9828466 = pow(r9828456, r9828465);
        float r9828467 = -9216.0;
        float r9828468 = r9828466 * r9828467;
        float r9828469 = 30240.0;
        float r9828470 = r9828469 * r9828456;
        float r9828471 = r9828468 + r9828470;
        float r9828472 = 512.0;
        float r9828473 = r9828472 * r9828456;
        float r9828474 = 1;
        float r9828475 = 3;
        float r9828476 = r9828474 + r9828475;
        float r9828477 = pow(r9828457, r9828476);
        float r9828478 = r9828473 * r9828477;
        float r9828479 = r9828471 + r9828478;
        float r9828480 = r9828464 + r9828479;
        return r9828480;
}

double f_od(double x) {
        double r9828481 = x;
        double r9828482 = r9828481 * r9828481;
        double r9828483 = -80640.0;
        double r9828484 = r9828483 * r9828481;
        double r9828485 = 48384.0;
        double r9828486 = r9828481 * r9828485;
        double r9828487 = r9828482 * r9828486;
        double r9828488 = r9828484 + r9828487;
        double r9828489 = r9828482 * r9828488;
        double r9828490 = 7;
        double r9828491 = pow(r9828481, r9828490);
        double r9828492 = -9216.0;
        double r9828493 = r9828491 * r9828492;
        double r9828494 = 30240.0;
        double r9828495 = r9828494 * r9828481;
        double r9828496 = r9828493 + r9828495;
        double r9828497 = 512.0;
        double r9828498 = r9828497 * r9828481;
        double r9828499 = 1;
        double r9828500 = 3;
        double r9828501 = r9828499 + r9828500;
        double r9828502 = pow(r9828482, r9828501);
        double r9828503 = r9828498 * r9828502;
        double r9828504 = r9828496 + r9828503;
        double r9828505 = r9828489 + r9828504;
        return r9828505;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9828506, r9828507, r9828508, r9828509, r9828510, r9828511, r9828512, r9828513, r9828514, r9828515, r9828516, r9828517, r9828518, r9828519, r9828520, r9828521, r9828522, r9828523, r9828524, r9828525, r9828526, r9828527, r9828528;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9828506, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9828507);
        mpfr_init(r9828508);
        mpfr_init_set_str(r9828509, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9828510);
        mpfr_init(r9828511);
        mpfr_init(r9828512);
        mpfr_init(r9828513);
        mpfr_init_set_str(r9828514, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9828515);
        mpfr_init(r9828516);
        mpfr_init(r9828517);
        mpfr_init(r9828518);
        mpfr_init_set_str(r9828519, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9828520);
        mpfr_init(r9828521);
        mpfr_init(r9828522);
        mpfr_init(r9828523);
        mpfr_init_set_str(r9828524, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9828525);
        mpfr_init(r9828526);
        mpfr_init(r9828527);
        mpfr_init(r9828528);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9828507, x, MPFR_RNDN);
        mpfr_mul(r9828508, r9828506, r9828507, MPFR_RNDN);
        ;
        mpfr_mul(r9828510, r9828507, r9828507, MPFR_RNDN);
        mpfr_mul(r9828511, r9828510, r9828507, MPFR_RNDN);
        mpfr_mul(r9828512, r9828509, r9828511, MPFR_RNDN);
        mpfr_add(r9828513, r9828508, r9828512, MPFR_RNDN);
        ;
        mpfr_mul(r9828515, r9828511, r9828507, MPFR_RNDN);
        mpfr_mul(r9828516, r9828515, r9828507, MPFR_RNDN);
        mpfr_mul(r9828517, r9828514, r9828516, MPFR_RNDN);
        mpfr_add(r9828518, r9828513, r9828517, MPFR_RNDN);
        ;
        mpfr_mul(r9828520, r9828516, r9828507, MPFR_RNDN);
        mpfr_mul(r9828521, r9828520, r9828507, MPFR_RNDN);
        mpfr_mul(r9828522, r9828519, r9828521, MPFR_RNDN);
        mpfr_add(r9828523, r9828518, r9828522, MPFR_RNDN);
        ;
        mpfr_mul(r9828525, r9828521, r9828507, MPFR_RNDN);
        mpfr_mul(r9828526, r9828525, r9828507, MPFR_RNDN);
        mpfr_mul(r9828527, r9828524, r9828526, MPFR_RNDN);
        mpfr_add(r9828528, r9828523, r9828527, MPFR_RNDN);
        return mpfr_get_d(r9828528, MPFR_RNDN);
}

static mpfr_t r9828529, r9828530, r9828531, r9828532, r9828533, r9828534, r9828535, r9828536, r9828537, r9828538, r9828539, r9828540, r9828541, r9828542, r9828543, r9828544, r9828545, r9828546, r9828547, r9828548, r9828549, r9828550, r9828551, r9828552, r9828553;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9828529);
        mpfr_init(r9828530);
        mpfr_init_set_str(r9828531, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9828532);
        mpfr_init_set_str(r9828533, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9828534);
        mpfr_init(r9828535);
        mpfr_init(r9828536);
        mpfr_init(r9828537);
        mpfr_init_set_str(r9828538, "7", 10, MPFR_RNDN);
        mpfr_init(r9828539);
        mpfr_init_set_str(r9828540, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9828541);
        mpfr_init_set_str(r9828542, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9828543);
        mpfr_init(r9828544);
        mpfr_init_set_str(r9828545, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9828546);
        mpfr_init_set_str(r9828547, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828548, "3", 10, MPFR_RNDN);
        mpfr_init(r9828549);
        mpfr_init(r9828550);
        mpfr_init(r9828551);
        mpfr_init(r9828552);
        mpfr_init(r9828553);
}

double f_fm(double x) {
        mpfr_set_d(r9828529, x, MPFR_RNDN);
        mpfr_mul(r9828530, r9828529, r9828529, MPFR_RNDN);
        ;
        mpfr_mul(r9828532, r9828531, r9828529, MPFR_RNDN);
        ;
        mpfr_mul(r9828534, r9828529, r9828533, MPFR_RNDN);
        mpfr_mul(r9828535, r9828530, r9828534, MPFR_RNDN);
        mpfr_add(r9828536, r9828532, r9828535, MPFR_RNDN);
        mpfr_mul(r9828537, r9828530, r9828536, MPFR_RNDN);
        ;
        mpfr_pow(r9828539, r9828529, r9828538, MPFR_RNDN);
        ;
        mpfr_mul(r9828541, r9828539, r9828540, MPFR_RNDN);
        ;
        mpfr_mul(r9828543, r9828542, r9828529, MPFR_RNDN);
        mpfr_add(r9828544, r9828541, r9828543, MPFR_RNDN);
        ;
        mpfr_mul(r9828546, r9828545, r9828529, MPFR_RNDN);
        ;
        ;
        mpfr_add(r9828549, r9828547, r9828548, MPFR_RNDN);
        mpfr_pow(r9828550, r9828530, r9828549, MPFR_RNDN);
        mpfr_mul(r9828551, r9828546, r9828550, MPFR_RNDN);
        mpfr_add(r9828552, r9828544, r9828551, MPFR_RNDN);
        mpfr_add(r9828553, r9828537, r9828552, MPFR_RNDN);
        return mpfr_get_d(r9828553, MPFR_RNDN);
}

static mpfr_t r9828554, r9828555, r9828556, r9828557, r9828558, r9828559, r9828560, r9828561, r9828562, r9828563, r9828564, r9828565, r9828566, r9828567, r9828568, r9828569, r9828570, r9828571, r9828572, r9828573, r9828574, r9828575, r9828576, r9828577, r9828578;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9828554);
        mpfr_init(r9828555);
        mpfr_init_set_str(r9828556, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9828557);
        mpfr_init_set_str(r9828558, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9828559);
        mpfr_init(r9828560);
        mpfr_init(r9828561);
        mpfr_init(r9828562);
        mpfr_init_set_str(r9828563, "7", 10, MPFR_RNDN);
        mpfr_init(r9828564);
        mpfr_init_set_str(r9828565, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9828566);
        mpfr_init_set_str(r9828567, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9828568);
        mpfr_init(r9828569);
        mpfr_init_set_str(r9828570, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9828571);
        mpfr_init_set_str(r9828572, "1", 10, MPFR_RNDN);
        mpfr_init_set_str(r9828573, "3", 10, MPFR_RNDN);
        mpfr_init(r9828574);
        mpfr_init(r9828575);
        mpfr_init(r9828576);
        mpfr_init(r9828577);
        mpfr_init(r9828578);
}

double f_dm(double x) {
        mpfr_set_d(r9828554, x, MPFR_RNDN);
        mpfr_mul(r9828555, r9828554, r9828554, MPFR_RNDN);
        ;
        mpfr_mul(r9828557, r9828556, r9828554, MPFR_RNDN);
        ;
        mpfr_mul(r9828559, r9828554, r9828558, MPFR_RNDN);
        mpfr_mul(r9828560, r9828555, r9828559, MPFR_RNDN);
        mpfr_add(r9828561, r9828557, r9828560, MPFR_RNDN);
        mpfr_mul(r9828562, r9828555, r9828561, MPFR_RNDN);
        ;
        mpfr_pow(r9828564, r9828554, r9828563, MPFR_RNDN);
        ;
        mpfr_mul(r9828566, r9828564, r9828565, MPFR_RNDN);
        ;
        mpfr_mul(r9828568, r9828567, r9828554, MPFR_RNDN);
        mpfr_add(r9828569, r9828566, r9828568, MPFR_RNDN);
        ;
        mpfr_mul(r9828571, r9828570, r9828554, MPFR_RNDN);
        ;
        ;
        mpfr_add(r9828574, r9828572, r9828573, MPFR_RNDN);
        mpfr_pow(r9828575, r9828555, r9828574, MPFR_RNDN);
        mpfr_mul(r9828576, r9828571, r9828575, MPFR_RNDN);
        mpfr_add(r9828577, r9828569, r9828576, MPFR_RNDN);
        mpfr_add(r9828578, r9828562, r9828577, MPFR_RNDN);
        return mpfr_get_d(r9828578, MPFR_RNDN);
}

