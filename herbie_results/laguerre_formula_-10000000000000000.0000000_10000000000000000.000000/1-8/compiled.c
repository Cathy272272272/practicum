#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10001416 = 1.0;
        float r10001417 = -8.0;
        float r10001418 = x;
        float r10001419 = r10001417 * r10001418;
        float r10001420 = r10001416 + r10001419;
        float r10001421 = 14.0;
        float r10001422 = r10001418 * r10001418;
        float r10001423 = r10001421 * r10001422;
        float r10001424 = r10001420 + r10001423;
        float r10001425 = -9.333333;
        float r10001426 = r10001422 * r10001418;
        float r10001427 = r10001425 * r10001426;
        float r10001428 = r10001424 + r10001427;
        float r10001429 = 2.916667;
        float r10001430 = r10001426 * r10001418;
        float r10001431 = r10001429 * r10001430;
        float r10001432 = r10001428 + r10001431;
        float r10001433 = -0.466667;
        float r10001434 = r10001430 * r10001418;
        float r10001435 = r10001433 * r10001434;
        float r10001436 = r10001432 + r10001435;
        float r10001437 = 0.038889;
        float r10001438 = r10001434 * r10001418;
        float r10001439 = r10001437 * r10001438;
        float r10001440 = r10001436 + r10001439;
        float r10001441 = -0.001587;
        float r10001442 = r10001438 * r10001418;
        float r10001443 = r10001441 * r10001442;
        float r10001444 = r10001440 + r10001443;
        float r10001445 = 2.5e-05;
        float r10001446 = r10001442 * r10001418;
        float r10001447 = r10001445 * r10001446;
        float r10001448 = r10001444 + r10001447;
        return r10001448;
}

double f_id(double x) {
        double r10001449 = 1.0;
        double r10001450 = -8.0;
        double r10001451 = x;
        double r10001452 = r10001450 * r10001451;
        double r10001453 = r10001449 + r10001452;
        double r10001454 = 14.0;
        double r10001455 = r10001451 * r10001451;
        double r10001456 = r10001454 * r10001455;
        double r10001457 = r10001453 + r10001456;
        double r10001458 = -9.333333;
        double r10001459 = r10001455 * r10001451;
        double r10001460 = r10001458 * r10001459;
        double r10001461 = r10001457 + r10001460;
        double r10001462 = 2.916667;
        double r10001463 = r10001459 * r10001451;
        double r10001464 = r10001462 * r10001463;
        double r10001465 = r10001461 + r10001464;
        double r10001466 = -0.466667;
        double r10001467 = r10001463 * r10001451;
        double r10001468 = r10001466 * r10001467;
        double r10001469 = r10001465 + r10001468;
        double r10001470 = 0.038889;
        double r10001471 = r10001467 * r10001451;
        double r10001472 = r10001470 * r10001471;
        double r10001473 = r10001469 + r10001472;
        double r10001474 = -0.001587;
        double r10001475 = r10001471 * r10001451;
        double r10001476 = r10001474 * r10001475;
        double r10001477 = r10001473 + r10001476;
        double r10001478 = 2.5e-05;
        double r10001479 = r10001475 * r10001451;
        double r10001480 = r10001478 * r10001479;
        double r10001481 = r10001477 + r10001480;
        return r10001481;
}


double f_of(float x) {
        float r10001482 = 1.0;
        float r10001483 = 0.038889;
        float r10001484 = x;
        float r10001485 = -0.001587;
        float r10001486 = r10001484 * r10001485;
        float r10001487 = r10001483 + r10001486;
        float r10001488 = 2.5e-05;
        float r10001489 = r10001484 * r10001484;
        float r10001490 = r10001488 * r10001489;
        float r10001491 = r10001487 + r10001490;
        float r10001492 = 3;
        float r10001493 = pow(r10001484, r10001492);
        float r10001494 = r10001493 * r10001493;
        float r10001495 = r10001491 * r10001494;
        float r10001496 = r10001482 + r10001495;
        float r10001497 = 14.0;
        float r10001498 = -9.333333;
        float r10001499 = r10001484 * r10001498;
        float r10001500 = r10001497 + r10001499;
        float r10001501 = r10001500 * r10001489;
        float r10001502 = r10001489 * r10001489;
        float r10001503 = -0.466667;
        float r10001504 = r10001503 * r10001484;
        float r10001505 = 2.916667;
        float r10001506 = r10001504 + r10001505;
        float r10001507 = r10001502 * r10001506;
        float r10001508 = r10001501 + r10001507;
        float r10001509 = -8.0;
        float r10001510 = r10001484 * r10001509;
        float r10001511 = r10001508 + r10001510;
        float r10001512 = r10001496 + r10001511;
        return r10001512;
}

double f_od(double x) {
        double r10001513 = 1.0;
        double r10001514 = 0.038889;
        double r10001515 = x;
        double r10001516 = -0.001587;
        double r10001517 = r10001515 * r10001516;
        double r10001518 = r10001514 + r10001517;
        double r10001519 = 2.5e-05;
        double r10001520 = r10001515 * r10001515;
        double r10001521 = r10001519 * r10001520;
        double r10001522 = r10001518 + r10001521;
        double r10001523 = 3;
        double r10001524 = pow(r10001515, r10001523);
        double r10001525 = r10001524 * r10001524;
        double r10001526 = r10001522 * r10001525;
        double r10001527 = r10001513 + r10001526;
        double r10001528 = 14.0;
        double r10001529 = -9.333333;
        double r10001530 = r10001515 * r10001529;
        double r10001531 = r10001528 + r10001530;
        double r10001532 = r10001531 * r10001520;
        double r10001533 = r10001520 * r10001520;
        double r10001534 = -0.466667;
        double r10001535 = r10001534 * r10001515;
        double r10001536 = 2.916667;
        double r10001537 = r10001535 + r10001536;
        double r10001538 = r10001533 * r10001537;
        double r10001539 = r10001532 + r10001538;
        double r10001540 = -8.0;
        double r10001541 = r10001515 * r10001540;
        double r10001542 = r10001539 + r10001541;
        double r10001543 = r10001527 + r10001542;
        return r10001543;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10001544, r10001545, r10001546, r10001547, r10001548, r10001549, r10001550, r10001551, r10001552, r10001553, r10001554, r10001555, r10001556, r10001557, r10001558, r10001559, r10001560, r10001561, r10001562, r10001563, r10001564, r10001565, r10001566, r10001567, r10001568, r10001569, r10001570, r10001571, r10001572, r10001573, r10001574, r10001575, r10001576;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001544, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001545, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10001546);
        mpfr_init(r10001547);
        mpfr_init(r10001548);
        mpfr_init_set_str(r10001549, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10001550);
        mpfr_init(r10001551);
        mpfr_init(r10001552);
        mpfr_init_set_str(r10001553, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10001554);
        mpfr_init(r10001555);
        mpfr_init(r10001556);
        mpfr_init_set_str(r10001557, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10001558);
        mpfr_init(r10001559);
        mpfr_init(r10001560);
        mpfr_init_set_str(r10001561, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10001562);
        mpfr_init(r10001563);
        mpfr_init(r10001564);
        mpfr_init_set_str(r10001565, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10001566);
        mpfr_init(r10001567);
        mpfr_init(r10001568);
        mpfr_init_set_str(r10001569, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10001570);
        mpfr_init(r10001571);
        mpfr_init(r10001572);
        mpfr_init_set_str(r10001573, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10001574);
        mpfr_init(r10001575);
        mpfr_init(r10001576);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10001546, x, MPFR_RNDN);
        mpfr_mul(r10001547, r10001545, r10001546, MPFR_RNDN);
        mpfr_add(r10001548, r10001544, r10001547, MPFR_RNDN);
        ;
        mpfr_mul(r10001550, r10001546, r10001546, MPFR_RNDN);
        mpfr_mul(r10001551, r10001549, r10001550, MPFR_RNDN);
        mpfr_add(r10001552, r10001548, r10001551, MPFR_RNDN);
        ;
        mpfr_mul(r10001554, r10001550, r10001546, MPFR_RNDN);
        mpfr_mul(r10001555, r10001553, r10001554, MPFR_RNDN);
        mpfr_add(r10001556, r10001552, r10001555, MPFR_RNDN);
        ;
        mpfr_mul(r10001558, r10001554, r10001546, MPFR_RNDN);
        mpfr_mul(r10001559, r10001557, r10001558, MPFR_RNDN);
        mpfr_add(r10001560, r10001556, r10001559, MPFR_RNDN);
        ;
        mpfr_mul(r10001562, r10001558, r10001546, MPFR_RNDN);
        mpfr_mul(r10001563, r10001561, r10001562, MPFR_RNDN);
        mpfr_add(r10001564, r10001560, r10001563, MPFR_RNDN);
        ;
        mpfr_mul(r10001566, r10001562, r10001546, MPFR_RNDN);
        mpfr_mul(r10001567, r10001565, r10001566, MPFR_RNDN);
        mpfr_add(r10001568, r10001564, r10001567, MPFR_RNDN);
        ;
        mpfr_mul(r10001570, r10001566, r10001546, MPFR_RNDN);
        mpfr_mul(r10001571, r10001569, r10001570, MPFR_RNDN);
        mpfr_add(r10001572, r10001568, r10001571, MPFR_RNDN);
        ;
        mpfr_mul(r10001574, r10001570, r10001546, MPFR_RNDN);
        mpfr_mul(r10001575, r10001573, r10001574, MPFR_RNDN);
        mpfr_add(r10001576, r10001572, r10001575, MPFR_RNDN);
        return mpfr_get_d(r10001576, MPFR_RNDN);
}

static mpfr_t r10001577, r10001578, r10001579, r10001580, r10001581, r10001582, r10001583, r10001584, r10001585, r10001586, r10001587, r10001588, r10001589, r10001590, r10001591, r10001592, r10001593, r10001594, r10001595, r10001596, r10001597, r10001598, r10001599, r10001600, r10001601, r10001602, r10001603, r10001604, r10001605, r10001606, r10001607;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001577, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001578, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10001579);
        mpfr_init_set_str(r10001580, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10001581);
        mpfr_init(r10001582);
        mpfr_init_set_str(r10001583, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10001584);
        mpfr_init(r10001585);
        mpfr_init(r10001586);
        mpfr_init_set_str(r10001587, "3", 10, MPFR_RNDN);
        mpfr_init(r10001588);
        mpfr_init(r10001589);
        mpfr_init(r10001590);
        mpfr_init(r10001591);
        mpfr_init_set_str(r10001592, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001593, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10001594);
        mpfr_init(r10001595);
        mpfr_init(r10001596);
        mpfr_init(r10001597);
        mpfr_init_set_str(r10001598, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10001599);
        mpfr_init_set_str(r10001600, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10001601);
        mpfr_init(r10001602);
        mpfr_init(r10001603);
        mpfr_init_set_str(r10001604, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10001605);
        mpfr_init(r10001606);
        mpfr_init(r10001607);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10001579, x, MPFR_RNDN);
        ;
        mpfr_mul(r10001581, r10001579, r10001580, MPFR_RNDN);
        mpfr_add(r10001582, r10001578, r10001581, MPFR_RNDN);
        ;
        mpfr_mul(r10001584, r10001579, r10001579, MPFR_RNDN);
        mpfr_mul(r10001585, r10001583, r10001584, MPFR_RNDN);
        mpfr_add(r10001586, r10001582, r10001585, MPFR_RNDN);
        ;
        mpfr_pow(r10001588, r10001579, r10001587, MPFR_RNDN);
        mpfr_mul(r10001589, r10001588, r10001588, MPFR_RNDN);
        mpfr_mul(r10001590, r10001586, r10001589, MPFR_RNDN);
        mpfr_add(r10001591, r10001577, r10001590, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10001594, r10001579, r10001593, MPFR_RNDN);
        mpfr_add(r10001595, r10001592, r10001594, MPFR_RNDN);
        mpfr_mul(r10001596, r10001595, r10001584, MPFR_RNDN);
        mpfr_mul(r10001597, r10001584, r10001584, MPFR_RNDN);
        ;
        mpfr_mul(r10001599, r10001598, r10001579, MPFR_RNDN);
        ;
        mpfr_add(r10001601, r10001599, r10001600, MPFR_RNDN);
        mpfr_mul(r10001602, r10001597, r10001601, MPFR_RNDN);
        mpfr_add(r10001603, r10001596, r10001602, MPFR_RNDN);
        ;
        mpfr_mul(r10001605, r10001579, r10001604, MPFR_RNDN);
        mpfr_add(r10001606, r10001603, r10001605, MPFR_RNDN);
        mpfr_add(r10001607, r10001591, r10001606, MPFR_RNDN);
        return mpfr_get_d(r10001607, MPFR_RNDN);
}

static mpfr_t r10001608, r10001609, r10001610, r10001611, r10001612, r10001613, r10001614, r10001615, r10001616, r10001617, r10001618, r10001619, r10001620, r10001621, r10001622, r10001623, r10001624, r10001625, r10001626, r10001627, r10001628, r10001629, r10001630, r10001631, r10001632, r10001633, r10001634, r10001635, r10001636, r10001637, r10001638;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001608, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001609, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10001610);
        mpfr_init_set_str(r10001611, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10001612);
        mpfr_init(r10001613);
        mpfr_init_set_str(r10001614, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10001615);
        mpfr_init(r10001616);
        mpfr_init(r10001617);
        mpfr_init_set_str(r10001618, "3", 10, MPFR_RNDN);
        mpfr_init(r10001619);
        mpfr_init(r10001620);
        mpfr_init(r10001621);
        mpfr_init(r10001622);
        mpfr_init_set_str(r10001623, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001624, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10001625);
        mpfr_init(r10001626);
        mpfr_init(r10001627);
        mpfr_init(r10001628);
        mpfr_init_set_str(r10001629, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10001630);
        mpfr_init_set_str(r10001631, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10001632);
        mpfr_init(r10001633);
        mpfr_init(r10001634);
        mpfr_init_set_str(r10001635, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10001636);
        mpfr_init(r10001637);
        mpfr_init(r10001638);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10001610, x, MPFR_RNDN);
        ;
        mpfr_mul(r10001612, r10001610, r10001611, MPFR_RNDN);
        mpfr_add(r10001613, r10001609, r10001612, MPFR_RNDN);
        ;
        mpfr_mul(r10001615, r10001610, r10001610, MPFR_RNDN);
        mpfr_mul(r10001616, r10001614, r10001615, MPFR_RNDN);
        mpfr_add(r10001617, r10001613, r10001616, MPFR_RNDN);
        ;
        mpfr_pow(r10001619, r10001610, r10001618, MPFR_RNDN);
        mpfr_mul(r10001620, r10001619, r10001619, MPFR_RNDN);
        mpfr_mul(r10001621, r10001617, r10001620, MPFR_RNDN);
        mpfr_add(r10001622, r10001608, r10001621, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10001625, r10001610, r10001624, MPFR_RNDN);
        mpfr_add(r10001626, r10001623, r10001625, MPFR_RNDN);
        mpfr_mul(r10001627, r10001626, r10001615, MPFR_RNDN);
        mpfr_mul(r10001628, r10001615, r10001615, MPFR_RNDN);
        ;
        mpfr_mul(r10001630, r10001629, r10001610, MPFR_RNDN);
        ;
        mpfr_add(r10001632, r10001630, r10001631, MPFR_RNDN);
        mpfr_mul(r10001633, r10001628, r10001632, MPFR_RNDN);
        mpfr_add(r10001634, r10001627, r10001633, MPFR_RNDN);
        ;
        mpfr_mul(r10001636, r10001610, r10001635, MPFR_RNDN);
        mpfr_add(r10001637, r10001634, r10001636, MPFR_RNDN);
        mpfr_add(r10001638, r10001622, r10001637, MPFR_RNDN);
        return mpfr_get_d(r10001638, MPFR_RNDN);
}

