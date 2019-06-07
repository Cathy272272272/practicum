#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r4438477 = 0.225586;
        float r4438478 = -17.595703;
        float r4438479 = x;
        float r4438480 = r4438479 * r4438479;
        float r4438481 = r4438478 * r4438480;
        float r4438482 = r4438477 + r4438481;
        float r4438483 = 219.946289;
        float r4438484 = r4438480 * r4438479;
        float r4438485 = r4438484 * r4438479;
        float r4438486 = r4438483 * r4438485;
        float r4438487 = r4438482 + r4438486;
        float r4438488 = -997.089844;
        float r4438489 = r4438485 * r4438479;
        float r4438490 = r4438489 * r4438479;
        float r4438491 = r4438488 * r4438490;
        float r4438492 = r4438487 + r4438491;
        float r4438493 = 2029.790039;
        float r4438494 = r4438490 * r4438479;
        float r4438495 = r4438494 * r4438479;
        float r4438496 = r4438493 * r4438495;
        float r4438497 = r4438492 + r4438496;
        float r4438498 = -1894.470703;
        float r4438499 = r4438495 * r4438479;
        float r4438500 = r4438499 * r4438479;
        float r4438501 = r4438498 * r4438500;
        float r4438502 = r4438497 + r4438501;
        float r4438503 = 660.194336;
        float r4438504 = r4438500 * r4438479;
        float r4438505 = r4438504 * r4438479;
        float r4438506 = r4438503 * r4438505;
        float r4438507 = r4438502 + r4438506;
        return r4438507;
}

double f_id(double x) {
        double r4438508 = 0.225586;
        double r4438509 = -17.595703;
        double r4438510 = x;
        double r4438511 = r4438510 * r4438510;
        double r4438512 = r4438509 * r4438511;
        double r4438513 = r4438508 + r4438512;
        double r4438514 = 219.946289;
        double r4438515 = r4438511 * r4438510;
        double r4438516 = r4438515 * r4438510;
        double r4438517 = r4438514 * r4438516;
        double r4438518 = r4438513 + r4438517;
        double r4438519 = -997.089844;
        double r4438520 = r4438516 * r4438510;
        double r4438521 = r4438520 * r4438510;
        double r4438522 = r4438519 * r4438521;
        double r4438523 = r4438518 + r4438522;
        double r4438524 = 2029.790039;
        double r4438525 = r4438521 * r4438510;
        double r4438526 = r4438525 * r4438510;
        double r4438527 = r4438524 * r4438526;
        double r4438528 = r4438523 + r4438527;
        double r4438529 = -1894.470703;
        double r4438530 = r4438526 * r4438510;
        double r4438531 = r4438530 * r4438510;
        double r4438532 = r4438529 * r4438531;
        double r4438533 = r4438528 + r4438532;
        double r4438534 = 660.194336;
        double r4438535 = r4438531 * r4438510;
        double r4438536 = r4438535 * r4438510;
        double r4438537 = r4438534 * r4438536;
        double r4438538 = r4438533 + r4438537;
        return r4438538;
}


double f_of(float x) {
        float r4438539 = 0.225586;
        float r4438540 = -17.595703;
        float r4438541 = x;
        float r4438542 = r4438541 * r4438541;
        float r4438543 = r4438540 * r4438542;
        float r4438544 = r4438539 + r4438543;
        float r4438545 = 219.946289;
        float r4438546 = r4438542 * r4438541;
        float r4438547 = r4438546 * r4438541;
        float r4438548 = r4438545 * r4438547;
        float r4438549 = r4438544 + r4438548;
        float r4438550 = -997.089844;
        float r4438551 = r4438547 * r4438541;
        float r4438552 = r4438551 * r4438541;
        float r4438553 = r4438550 * r4438552;
        float r4438554 = r4438549 + r4438553;
        float r4438555 = 2029.790039;
        float r4438556 = r4438552 * r4438541;
        float r4438557 = r4438556 * r4438541;
        float r4438558 = r4438555 * r4438557;
        float r4438559 = r4438554 + r4438558;
        float r4438560 = -1894.470703;
        float r4438561 = r4438557 * r4438541;
        float r4438562 = r4438561 * r4438541;
        float r4438563 = r4438560 * r4438562;
        float r4438564 = r4438559 + r4438563;
        float r4438565 = 660.194336;
        float r4438566 = r4438562 * r4438541;
        float r4438567 = r4438566 * r4438541;
        float r4438568 = r4438565 * r4438567;
        float r4438569 = r4438564 + r4438568;
        return r4438569;
}

double f_od(double x) {
        double r4438570 = 0.225586;
        double r4438571 = -17.595703;
        double r4438572 = x;
        double r4438573 = r4438572 * r4438572;
        double r4438574 = r4438571 * r4438573;
        double r4438575 = r4438570 + r4438574;
        double r4438576 = 219.946289;
        double r4438577 = r4438573 * r4438572;
        double r4438578 = r4438577 * r4438572;
        double r4438579 = r4438576 * r4438578;
        double r4438580 = r4438575 + r4438579;
        double r4438581 = -997.089844;
        double r4438582 = r4438578 * r4438572;
        double r4438583 = r4438582 * r4438572;
        double r4438584 = r4438581 * r4438583;
        double r4438585 = r4438580 + r4438584;
        double r4438586 = 2029.790039;
        double r4438587 = r4438583 * r4438572;
        double r4438588 = r4438587 * r4438572;
        double r4438589 = r4438586 * r4438588;
        double r4438590 = r4438585 + r4438589;
        double r4438591 = -1894.470703;
        double r4438592 = r4438588 * r4438572;
        double r4438593 = r4438592 * r4438572;
        double r4438594 = r4438591 * r4438593;
        double r4438595 = r4438590 + r4438594;
        double r4438596 = 660.194336;
        double r4438597 = r4438593 * r4438572;
        double r4438598 = r4438597 * r4438572;
        double r4438599 = r4438596 * r4438598;
        double r4438600 = r4438595 + r4438599;
        return r4438600;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4438601, r4438602, r4438603, r4438604, r4438605, r4438606, r4438607, r4438608, r4438609, r4438610, r4438611, r4438612, r4438613, r4438614, r4438615, r4438616, r4438617, r4438618, r4438619, r4438620, r4438621, r4438622, r4438623, r4438624, r4438625, r4438626, r4438627, r4438628, r4438629, r4438630, r4438631;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438601, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438602, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4438603);
        mpfr_init(r4438604);
        mpfr_init(r4438605);
        mpfr_init(r4438606);
        mpfr_init_set_str(r4438607, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4438608);
        mpfr_init(r4438609);
        mpfr_init(r4438610);
        mpfr_init(r4438611);
        mpfr_init_set_str(r4438612, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4438613);
        mpfr_init(r4438614);
        mpfr_init(r4438615);
        mpfr_init(r4438616);
        mpfr_init_set_str(r4438617, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4438618);
        mpfr_init(r4438619);
        mpfr_init(r4438620);
        mpfr_init(r4438621);
        mpfr_init_set_str(r4438622, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4438623);
        mpfr_init(r4438624);
        mpfr_init(r4438625);
        mpfr_init(r4438626);
        mpfr_init_set_str(r4438627, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4438628);
        mpfr_init(r4438629);
        mpfr_init(r4438630);
        mpfr_init(r4438631);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4438603, x, MPFR_RNDN);
        mpfr_mul(r4438604, r4438603, r4438603, MPFR_RNDN);
        mpfr_mul(r4438605, r4438602, r4438604, MPFR_RNDN);
        mpfr_add(r4438606, r4438601, r4438605, MPFR_RNDN);
        ;
        mpfr_mul(r4438608, r4438604, r4438603, MPFR_RNDN);
        mpfr_mul(r4438609, r4438608, r4438603, MPFR_RNDN);
        mpfr_mul(r4438610, r4438607, r4438609, MPFR_RNDN);
        mpfr_add(r4438611, r4438606, r4438610, MPFR_RNDN);
        ;
        mpfr_mul(r4438613, r4438609, r4438603, MPFR_RNDN);
        mpfr_mul(r4438614, r4438613, r4438603, MPFR_RNDN);
        mpfr_mul(r4438615, r4438612, r4438614, MPFR_RNDN);
        mpfr_add(r4438616, r4438611, r4438615, MPFR_RNDN);
        ;
        mpfr_mul(r4438618, r4438614, r4438603, MPFR_RNDN);
        mpfr_mul(r4438619, r4438618, r4438603, MPFR_RNDN);
        mpfr_mul(r4438620, r4438617, r4438619, MPFR_RNDN);
        mpfr_add(r4438621, r4438616, r4438620, MPFR_RNDN);
        ;
        mpfr_mul(r4438623, r4438619, r4438603, MPFR_RNDN);
        mpfr_mul(r4438624, r4438623, r4438603, MPFR_RNDN);
        mpfr_mul(r4438625, r4438622, r4438624, MPFR_RNDN);
        mpfr_add(r4438626, r4438621, r4438625, MPFR_RNDN);
        ;
        mpfr_mul(r4438628, r4438624, r4438603, MPFR_RNDN);
        mpfr_mul(r4438629, r4438628, r4438603, MPFR_RNDN);
        mpfr_mul(r4438630, r4438627, r4438629, MPFR_RNDN);
        mpfr_add(r4438631, r4438626, r4438630, MPFR_RNDN);
        return mpfr_get_d(r4438631, MPFR_RNDN);
}

static mpfr_t r4438632, r4438633, r4438634, r4438635, r4438636, r4438637, r4438638, r4438639, r4438640, r4438641, r4438642, r4438643, r4438644, r4438645, r4438646, r4438647, r4438648, r4438649, r4438650, r4438651, r4438652, r4438653, r4438654, r4438655, r4438656, r4438657, r4438658, r4438659, r4438660, r4438661, r4438662;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438632, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438633, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4438634);
        mpfr_init(r4438635);
        mpfr_init(r4438636);
        mpfr_init(r4438637);
        mpfr_init_set_str(r4438638, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4438639);
        mpfr_init(r4438640);
        mpfr_init(r4438641);
        mpfr_init(r4438642);
        mpfr_init_set_str(r4438643, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4438644);
        mpfr_init(r4438645);
        mpfr_init(r4438646);
        mpfr_init(r4438647);
        mpfr_init_set_str(r4438648, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4438649);
        mpfr_init(r4438650);
        mpfr_init(r4438651);
        mpfr_init(r4438652);
        mpfr_init_set_str(r4438653, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4438654);
        mpfr_init(r4438655);
        mpfr_init(r4438656);
        mpfr_init(r4438657);
        mpfr_init_set_str(r4438658, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4438659);
        mpfr_init(r4438660);
        mpfr_init(r4438661);
        mpfr_init(r4438662);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4438634, x, MPFR_RNDN);
        mpfr_mul(r4438635, r4438634, r4438634, MPFR_RNDN);
        mpfr_mul(r4438636, r4438633, r4438635, MPFR_RNDN);
        mpfr_add(r4438637, r4438632, r4438636, MPFR_RNDN);
        ;
        mpfr_mul(r4438639, r4438635, r4438634, MPFR_RNDN);
        mpfr_mul(r4438640, r4438639, r4438634, MPFR_RNDN);
        mpfr_mul(r4438641, r4438638, r4438640, MPFR_RNDN);
        mpfr_add(r4438642, r4438637, r4438641, MPFR_RNDN);
        ;
        mpfr_mul(r4438644, r4438640, r4438634, MPFR_RNDN);
        mpfr_mul(r4438645, r4438644, r4438634, MPFR_RNDN);
        mpfr_mul(r4438646, r4438643, r4438645, MPFR_RNDN);
        mpfr_add(r4438647, r4438642, r4438646, MPFR_RNDN);
        ;
        mpfr_mul(r4438649, r4438645, r4438634, MPFR_RNDN);
        mpfr_mul(r4438650, r4438649, r4438634, MPFR_RNDN);
        mpfr_mul(r4438651, r4438648, r4438650, MPFR_RNDN);
        mpfr_add(r4438652, r4438647, r4438651, MPFR_RNDN);
        ;
        mpfr_mul(r4438654, r4438650, r4438634, MPFR_RNDN);
        mpfr_mul(r4438655, r4438654, r4438634, MPFR_RNDN);
        mpfr_mul(r4438656, r4438653, r4438655, MPFR_RNDN);
        mpfr_add(r4438657, r4438652, r4438656, MPFR_RNDN);
        ;
        mpfr_mul(r4438659, r4438655, r4438634, MPFR_RNDN);
        mpfr_mul(r4438660, r4438659, r4438634, MPFR_RNDN);
        mpfr_mul(r4438661, r4438658, r4438660, MPFR_RNDN);
        mpfr_add(r4438662, r4438657, r4438661, MPFR_RNDN);
        return mpfr_get_d(r4438662, MPFR_RNDN);
}

static mpfr_t r4438663, r4438664, r4438665, r4438666, r4438667, r4438668, r4438669, r4438670, r4438671, r4438672, r4438673, r4438674, r4438675, r4438676, r4438677, r4438678, r4438679, r4438680, r4438681, r4438682, r4438683, r4438684, r4438685, r4438686, r4438687, r4438688, r4438689, r4438690, r4438691, r4438692, r4438693;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438663, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438664, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r4438665);
        mpfr_init(r4438666);
        mpfr_init(r4438667);
        mpfr_init(r4438668);
        mpfr_init_set_str(r4438669, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r4438670);
        mpfr_init(r4438671);
        mpfr_init(r4438672);
        mpfr_init(r4438673);
        mpfr_init_set_str(r4438674, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r4438675);
        mpfr_init(r4438676);
        mpfr_init(r4438677);
        mpfr_init(r4438678);
        mpfr_init_set_str(r4438679, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r4438680);
        mpfr_init(r4438681);
        mpfr_init(r4438682);
        mpfr_init(r4438683);
        mpfr_init_set_str(r4438684, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r4438685);
        mpfr_init(r4438686);
        mpfr_init(r4438687);
        mpfr_init(r4438688);
        mpfr_init_set_str(r4438689, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r4438690);
        mpfr_init(r4438691);
        mpfr_init(r4438692);
        mpfr_init(r4438693);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4438665, x, MPFR_RNDN);
        mpfr_mul(r4438666, r4438665, r4438665, MPFR_RNDN);
        mpfr_mul(r4438667, r4438664, r4438666, MPFR_RNDN);
        mpfr_add(r4438668, r4438663, r4438667, MPFR_RNDN);
        ;
        mpfr_mul(r4438670, r4438666, r4438665, MPFR_RNDN);
        mpfr_mul(r4438671, r4438670, r4438665, MPFR_RNDN);
        mpfr_mul(r4438672, r4438669, r4438671, MPFR_RNDN);
        mpfr_add(r4438673, r4438668, r4438672, MPFR_RNDN);
        ;
        mpfr_mul(r4438675, r4438671, r4438665, MPFR_RNDN);
        mpfr_mul(r4438676, r4438675, r4438665, MPFR_RNDN);
        mpfr_mul(r4438677, r4438674, r4438676, MPFR_RNDN);
        mpfr_add(r4438678, r4438673, r4438677, MPFR_RNDN);
        ;
        mpfr_mul(r4438680, r4438676, r4438665, MPFR_RNDN);
        mpfr_mul(r4438681, r4438680, r4438665, MPFR_RNDN);
        mpfr_mul(r4438682, r4438679, r4438681, MPFR_RNDN);
        mpfr_add(r4438683, r4438678, r4438682, MPFR_RNDN);
        ;
        mpfr_mul(r4438685, r4438681, r4438665, MPFR_RNDN);
        mpfr_mul(r4438686, r4438685, r4438665, MPFR_RNDN);
        mpfr_mul(r4438687, r4438684, r4438686, MPFR_RNDN);
        mpfr_add(r4438688, r4438683, r4438687, MPFR_RNDN);
        ;
        mpfr_mul(r4438690, r4438686, r4438665, MPFR_RNDN);
        mpfr_mul(r4438691, r4438690, r4438665, MPFR_RNDN);
        mpfr_mul(r4438692, r4438689, r4438691, MPFR_RNDN);
        mpfr_add(r4438693, r4438688, r4438692, MPFR_RNDN);
        return mpfr_get_d(r4438693, MPFR_RNDN);
}

