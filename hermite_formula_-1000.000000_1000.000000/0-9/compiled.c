#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r12289427 = 30240.0;
        float r12289428 = x;
        float r12289429 = r12289427 * r12289428;
        float r12289430 = -80640.0;
        float r12289431 = r12289428 * r12289428;
        float r12289432 = r12289431 * r12289428;
        float r12289433 = r12289430 * r12289432;
        float r12289434 = r12289429 + r12289433;
        float r12289435 = 48384.0;
        float r12289436 = r12289432 * r12289428;
        float r12289437 = r12289436 * r12289428;
        float r12289438 = r12289435 * r12289437;
        float r12289439 = r12289434 + r12289438;
        float r12289440 = -9216.0;
        float r12289441 = r12289437 * r12289428;
        float r12289442 = r12289441 * r12289428;
        float r12289443 = r12289440 * r12289442;
        float r12289444 = r12289439 + r12289443;
        float r12289445 = 512.0;
        float r12289446 = r12289442 * r12289428;
        float r12289447 = r12289446 * r12289428;
        float r12289448 = r12289445 * r12289447;
        float r12289449 = r12289444 + r12289448;
        return r12289449;
}

double f_id(double x) {
        double r12289450 = 30240.0;
        double r12289451 = x;
        double r12289452 = r12289450 * r12289451;
        double r12289453 = -80640.0;
        double r12289454 = r12289451 * r12289451;
        double r12289455 = r12289454 * r12289451;
        double r12289456 = r12289453 * r12289455;
        double r12289457 = r12289452 + r12289456;
        double r12289458 = 48384.0;
        double r12289459 = r12289455 * r12289451;
        double r12289460 = r12289459 * r12289451;
        double r12289461 = r12289458 * r12289460;
        double r12289462 = r12289457 + r12289461;
        double r12289463 = -9216.0;
        double r12289464 = r12289460 * r12289451;
        double r12289465 = r12289464 * r12289451;
        double r12289466 = r12289463 * r12289465;
        double r12289467 = r12289462 + r12289466;
        double r12289468 = 512.0;
        double r12289469 = r12289465 * r12289451;
        double r12289470 = r12289469 * r12289451;
        double r12289471 = r12289468 * r12289470;
        double r12289472 = r12289467 + r12289471;
        return r12289472;
}


double f_of(float x) {
        float r12289473 = x;
        float r12289474 = r12289473 * r12289473;
        float r12289475 = 48384.0;
        float r12289476 = r12289473 * r12289475;
        float r12289477 = r12289474 * r12289476;
        float r12289478 = cbrt(r12289477);
        float r12289479 = r12289478 * r12289478;
        float r12289480 = r12289479 * r12289478;
        float r12289481 = r12289474 * r12289480;
        float r12289482 = 30240.0;
        float r12289483 = r12289482 * r12289473;
        float r12289484 = -80640.0;
        float r12289485 = r12289484 * r12289473;
        float r12289486 = r12289485 * r12289474;
        float r12289487 = r12289483 + r12289486;
        float r12289488 = r12289481 + r12289487;
        float r12289489 = 3;
        float r12289490 = pow(r12289473, r12289489);
        float r12289491 = r12289490 * r12289490;
        float r12289492 = r12289491 * r12289473;
        float r12289493 = -9216.0;
        float r12289494 = 512.0;
        float r12289495 = r12289494 * r12289473;
        float r12289496 = r12289473 * r12289495;
        float r12289497 = r12289493 + r12289496;
        float r12289498 = r12289492 * r12289497;
        float r12289499 = r12289488 + r12289498;
        return r12289499;
}

double f_od(double x) {
        double r12289500 = x;
        double r12289501 = r12289500 * r12289500;
        double r12289502 = 48384.0;
        double r12289503 = r12289500 * r12289502;
        double r12289504 = r12289501 * r12289503;
        double r12289505 = cbrt(r12289504);
        double r12289506 = r12289505 * r12289505;
        double r12289507 = r12289506 * r12289505;
        double r12289508 = r12289501 * r12289507;
        double r12289509 = 30240.0;
        double r12289510 = r12289509 * r12289500;
        double r12289511 = -80640.0;
        double r12289512 = r12289511 * r12289500;
        double r12289513 = r12289512 * r12289501;
        double r12289514 = r12289510 + r12289513;
        double r12289515 = r12289508 + r12289514;
        double r12289516 = 3;
        double r12289517 = pow(r12289500, r12289516);
        double r12289518 = r12289517 * r12289517;
        double r12289519 = r12289518 * r12289500;
        double r12289520 = -9216.0;
        double r12289521 = 512.0;
        double r12289522 = r12289521 * r12289500;
        double r12289523 = r12289500 * r12289522;
        double r12289524 = r12289520 + r12289523;
        double r12289525 = r12289519 * r12289524;
        double r12289526 = r12289515 + r12289525;
        return r12289526;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12289527, r12289528, r12289529, r12289530, r12289531, r12289532, r12289533, r12289534, r12289535, r12289536, r12289537, r12289538, r12289539, r12289540, r12289541, r12289542, r12289543, r12289544, r12289545, r12289546, r12289547, r12289548, r12289549;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(1104);
        mpfr_init_set_str(r12289527, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r12289528);
        mpfr_init(r12289529);
        mpfr_init_set_str(r12289530, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r12289531);
        mpfr_init(r12289532);
        mpfr_init(r12289533);
        mpfr_init(r12289534);
        mpfr_init_set_str(r12289535, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r12289536);
        mpfr_init(r12289537);
        mpfr_init(r12289538);
        mpfr_init(r12289539);
        mpfr_init_set_str(r12289540, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r12289541);
        mpfr_init(r12289542);
        mpfr_init(r12289543);
        mpfr_init(r12289544);
        mpfr_init_set_str(r12289545, "512.0", 10, MPFR_RNDN);
        mpfr_init(r12289546);
        mpfr_init(r12289547);
        mpfr_init(r12289548);
        mpfr_init(r12289549);
}

double f_im(double x) {
        ;
        mpfr_set_d(r12289528, x, MPFR_RNDN);
        mpfr_mul(r12289529, r12289527, r12289528, MPFR_RNDN);
        ;
        mpfr_mul(r12289531, r12289528, r12289528, MPFR_RNDN);
        mpfr_mul(r12289532, r12289531, r12289528, MPFR_RNDN);
        mpfr_mul(r12289533, r12289530, r12289532, MPFR_RNDN);
        mpfr_add(r12289534, r12289529, r12289533, MPFR_RNDN);
        ;
        mpfr_mul(r12289536, r12289532, r12289528, MPFR_RNDN);
        mpfr_mul(r12289537, r12289536, r12289528, MPFR_RNDN);
        mpfr_mul(r12289538, r12289535, r12289537, MPFR_RNDN);
        mpfr_add(r12289539, r12289534, r12289538, MPFR_RNDN);
        ;
        mpfr_mul(r12289541, r12289537, r12289528, MPFR_RNDN);
        mpfr_mul(r12289542, r12289541, r12289528, MPFR_RNDN);
        mpfr_mul(r12289543, r12289540, r12289542, MPFR_RNDN);
        mpfr_add(r12289544, r12289539, r12289543, MPFR_RNDN);
        ;
        mpfr_mul(r12289546, r12289542, r12289528, MPFR_RNDN);
        mpfr_mul(r12289547, r12289546, r12289528, MPFR_RNDN);
        mpfr_mul(r12289548, r12289545, r12289547, MPFR_RNDN);
        mpfr_add(r12289549, r12289544, r12289548, MPFR_RNDN);
        return mpfr_get_d(r12289549, MPFR_RNDN);
}

static mpfr_t r12289550, r12289551, r12289552, r12289553, r12289554, r12289555, r12289556, r12289557, r12289558, r12289559, r12289560, r12289561, r12289562, r12289563, r12289564, r12289565, r12289566, r12289567, r12289568, r12289569, r12289570, r12289571, r12289572, r12289573, r12289574, r12289575, r12289576;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(1104);
        mpfr_init(r12289550);
        mpfr_init(r12289551);
        mpfr_init_set_str(r12289552, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r12289553);
        mpfr_init(r12289554);
        mpfr_init(r12289555);
        mpfr_init(r12289556);
        mpfr_init(r12289557);
        mpfr_init(r12289558);
        mpfr_init_set_str(r12289559, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r12289560);
        mpfr_init_set_str(r12289561, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r12289562);
        mpfr_init(r12289563);
        mpfr_init(r12289564);
        mpfr_init(r12289565);
        mpfr_init_set_str(r12289566, "3", 10, MPFR_RNDN);
        mpfr_init(r12289567);
        mpfr_init(r12289568);
        mpfr_init(r12289569);
        mpfr_init_set_str(r12289570, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289571, "512.0", 10, MPFR_RNDN);
        mpfr_init(r12289572);
        mpfr_init(r12289573);
        mpfr_init(r12289574);
        mpfr_init(r12289575);
        mpfr_init(r12289576);
}

double f_fm(double x) {
        mpfr_set_d(r12289550, x, MPFR_RNDN);
        mpfr_mul(r12289551, r12289550, r12289550, MPFR_RNDN);
        ;
        mpfr_mul(r12289553, r12289550, r12289552, MPFR_RNDN);
        mpfr_mul(r12289554, r12289551, r12289553, MPFR_RNDN);
        mpfr_cbrt(r12289555, r12289554, MPFR_RNDN);
        mpfr_mul(r12289556, r12289555, r12289555, MPFR_RNDN);
        mpfr_mul(r12289557, r12289556, r12289555, MPFR_RNDN);
        mpfr_mul(r12289558, r12289551, r12289557, MPFR_RNDN);
        ;
        mpfr_mul(r12289560, r12289559, r12289550, MPFR_RNDN);
        ;
        mpfr_mul(r12289562, r12289561, r12289550, MPFR_RNDN);
        mpfr_mul(r12289563, r12289562, r12289551, MPFR_RNDN);
        mpfr_add(r12289564, r12289560, r12289563, MPFR_RNDN);
        mpfr_add(r12289565, r12289558, r12289564, MPFR_RNDN);
        ;
        mpfr_pow(r12289567, r12289550, r12289566, MPFR_RNDN);
        mpfr_mul(r12289568, r12289567, r12289567, MPFR_RNDN);
        mpfr_mul(r12289569, r12289568, r12289550, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12289572, r12289571, r12289550, MPFR_RNDN);
        mpfr_mul(r12289573, r12289550, r12289572, MPFR_RNDN);
        mpfr_add(r12289574, r12289570, r12289573, MPFR_RNDN);
        mpfr_mul(r12289575, r12289569, r12289574, MPFR_RNDN);
        mpfr_add(r12289576, r12289565, r12289575, MPFR_RNDN);
        return mpfr_get_d(r12289576, MPFR_RNDN);
}

static mpfr_t r12289577, r12289578, r12289579, r12289580, r12289581, r12289582, r12289583, r12289584, r12289585, r12289586, r12289587, r12289588, r12289589, r12289590, r12289591, r12289592, r12289593, r12289594, r12289595, r12289596, r12289597, r12289598, r12289599, r12289600, r12289601, r12289602, r12289603;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(1104);
        mpfr_init(r12289577);
        mpfr_init(r12289578);
        mpfr_init_set_str(r12289579, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r12289580);
        mpfr_init(r12289581);
        mpfr_init(r12289582);
        mpfr_init(r12289583);
        mpfr_init(r12289584);
        mpfr_init(r12289585);
        mpfr_init_set_str(r12289586, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r12289587);
        mpfr_init_set_str(r12289588, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r12289589);
        mpfr_init(r12289590);
        mpfr_init(r12289591);
        mpfr_init(r12289592);
        mpfr_init_set_str(r12289593, "3", 10, MPFR_RNDN);
        mpfr_init(r12289594);
        mpfr_init(r12289595);
        mpfr_init(r12289596);
        mpfr_init_set_str(r12289597, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12289598, "512.0", 10, MPFR_RNDN);
        mpfr_init(r12289599);
        mpfr_init(r12289600);
        mpfr_init(r12289601);
        mpfr_init(r12289602);
        mpfr_init(r12289603);
}

double f_dm(double x) {
        mpfr_set_d(r12289577, x, MPFR_RNDN);
        mpfr_mul(r12289578, r12289577, r12289577, MPFR_RNDN);
        ;
        mpfr_mul(r12289580, r12289577, r12289579, MPFR_RNDN);
        mpfr_mul(r12289581, r12289578, r12289580, MPFR_RNDN);
        mpfr_cbrt(r12289582, r12289581, MPFR_RNDN);
        mpfr_mul(r12289583, r12289582, r12289582, MPFR_RNDN);
        mpfr_mul(r12289584, r12289583, r12289582, MPFR_RNDN);
        mpfr_mul(r12289585, r12289578, r12289584, MPFR_RNDN);
        ;
        mpfr_mul(r12289587, r12289586, r12289577, MPFR_RNDN);
        ;
        mpfr_mul(r12289589, r12289588, r12289577, MPFR_RNDN);
        mpfr_mul(r12289590, r12289589, r12289578, MPFR_RNDN);
        mpfr_add(r12289591, r12289587, r12289590, MPFR_RNDN);
        mpfr_add(r12289592, r12289585, r12289591, MPFR_RNDN);
        ;
        mpfr_pow(r12289594, r12289577, r12289593, MPFR_RNDN);
        mpfr_mul(r12289595, r12289594, r12289594, MPFR_RNDN);
        mpfr_mul(r12289596, r12289595, r12289577, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r12289599, r12289598, r12289577, MPFR_RNDN);
        mpfr_mul(r12289600, r12289577, r12289599, MPFR_RNDN);
        mpfr_add(r12289601, r12289597, r12289600, MPFR_RNDN);
        mpfr_mul(r12289602, r12289596, r12289601, MPFR_RNDN);
        mpfr_add(r12289603, r12289592, r12289602, MPFR_RNDN);
        return mpfr_get_d(r12289603, MPFR_RNDN);
}

