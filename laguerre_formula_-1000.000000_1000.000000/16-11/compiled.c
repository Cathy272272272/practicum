#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r6516460 = 1.0;
        float r6516461 = -11.0;
        float r6516462 = x;
        float r6516463 = r6516461 * r6516462;
        float r6516464 = r6516460 + r6516463;
        float r6516465 = 27.5;
        float r6516466 = r6516462 * r6516462;
        float r6516467 = r6516465 * r6516466;
        float r6516468 = r6516464 + r6516467;
        float r6516469 = -27.5;
        float r6516470 = r6516466 * r6516462;
        float r6516471 = r6516469 * r6516470;
        float r6516472 = r6516468 + r6516471;
        float r6516473 = 13.75;
        float r6516474 = r6516470 * r6516462;
        float r6516475 = r6516473 * r6516474;
        float r6516476 = r6516472 + r6516475;
        float r6516477 = -3.85;
        float r6516478 = r6516474 * r6516462;
        float r6516479 = r6516477 * r6516478;
        float r6516480 = r6516476 + r6516479;
        float r6516481 = 0.641667;
        float r6516482 = r6516478 * r6516462;
        float r6516483 = r6516481 * r6516482;
        float r6516484 = r6516480 + r6516483;
        float r6516485 = -0.065476;
        float r6516486 = r6516482 * r6516462;
        float r6516487 = r6516485 * r6516486;
        float r6516488 = r6516484 + r6516487;
        float r6516489 = 0.004092;
        float r6516490 = r6516486 * r6516462;
        float r6516491 = r6516489 * r6516490;
        float r6516492 = r6516488 + r6516491;
        float r6516493 = -0.000152;
        float r6516494 = r6516490 * r6516462;
        float r6516495 = r6516493 * r6516494;
        float r6516496 = r6516492 + r6516495;
        float r6516497 = 3e-06;
        float r6516498 = r6516494 * r6516462;
        float r6516499 = r6516497 * r6516498;
        float r6516500 = r6516496 + r6516499;
        return r6516500;
}

double f_id(double x) {
        double r6516501 = 1.0;
        double r6516502 = -11.0;
        double r6516503 = x;
        double r6516504 = r6516502 * r6516503;
        double r6516505 = r6516501 + r6516504;
        double r6516506 = 27.5;
        double r6516507 = r6516503 * r6516503;
        double r6516508 = r6516506 * r6516507;
        double r6516509 = r6516505 + r6516508;
        double r6516510 = -27.5;
        double r6516511 = r6516507 * r6516503;
        double r6516512 = r6516510 * r6516511;
        double r6516513 = r6516509 + r6516512;
        double r6516514 = 13.75;
        double r6516515 = r6516511 * r6516503;
        double r6516516 = r6516514 * r6516515;
        double r6516517 = r6516513 + r6516516;
        double r6516518 = -3.85;
        double r6516519 = r6516515 * r6516503;
        double r6516520 = r6516518 * r6516519;
        double r6516521 = r6516517 + r6516520;
        double r6516522 = 0.641667;
        double r6516523 = r6516519 * r6516503;
        double r6516524 = r6516522 * r6516523;
        double r6516525 = r6516521 + r6516524;
        double r6516526 = -0.065476;
        double r6516527 = r6516523 * r6516503;
        double r6516528 = r6516526 * r6516527;
        double r6516529 = r6516525 + r6516528;
        double r6516530 = 0.004092;
        double r6516531 = r6516527 * r6516503;
        double r6516532 = r6516530 * r6516531;
        double r6516533 = r6516529 + r6516532;
        double r6516534 = -0.000152;
        double r6516535 = r6516531 * r6516503;
        double r6516536 = r6516534 * r6516535;
        double r6516537 = r6516533 + r6516536;
        double r6516538 = 3e-06;
        double r6516539 = r6516535 * r6516503;
        double r6516540 = r6516538 * r6516539;
        double r6516541 = r6516537 + r6516540;
        return r6516541;
}


double f_of(float x) {
        float r6516542 = x;
        float r6516543 = r6516542 * r6516542;
        float r6516544 = -27.5;
        float r6516545 = r6516544 * r6516542;
        float r6516546 = 27.5;
        float r6516547 = r6516545 + r6516546;
        float r6516548 = r6516543 * r6516547;
        float r6516549 = -11.0;
        float r6516550 = r6516542 * r6516549;
        float r6516551 = 1.0;
        float r6516552 = r6516550 + r6516551;
        float r6516553 = r6516548 + r6516552;
        float r6516554 = 3;
        float r6516555 = pow(r6516542, r6516554);
        float r6516556 = r6516555 * r6516555;
        float r6516557 = 0.641667;
        float r6516558 = -0.065476;
        float r6516559 = r6516558 * r6516542;
        float r6516560 = r6516557 + r6516559;
        float r6516561 = r6516556 * r6516560;
        float r6516562 = r6516543 * r6516543;
        float r6516563 = 13.75;
        float r6516564 = -3.85;
        float r6516565 = r6516564 * r6516542;
        float r6516566 = r6516563 + r6516565;
        float r6516567 = r6516562 * r6516566;
        float r6516568 = r6516561 + r6516567;
        float r6516569 = r6516553 + r6516568;
        float r6516570 = r6516562 * r6516562;
        float r6516571 = 3e-06;
        float r6516572 = r6516571 * r6516543;
        float r6516573 = r6516570 * r6516572;
        float r6516574 = -0.000152;
        float r6516575 = r6516574 * r6516542;
        float r6516576 = 0.004092;
        float r6516577 = r6516575 + r6516576;
        float r6516578 = r6516570 * r6516577;
        float r6516579 = r6516573 + r6516578;
        float r6516580 = r6516569 + r6516579;
        return r6516580;
}

double f_od(double x) {
        double r6516581 = x;
        double r6516582 = r6516581 * r6516581;
        double r6516583 = -27.5;
        double r6516584 = r6516583 * r6516581;
        double r6516585 = 27.5;
        double r6516586 = r6516584 + r6516585;
        double r6516587 = r6516582 * r6516586;
        double r6516588 = -11.0;
        double r6516589 = r6516581 * r6516588;
        double r6516590 = 1.0;
        double r6516591 = r6516589 + r6516590;
        double r6516592 = r6516587 + r6516591;
        double r6516593 = 3;
        double r6516594 = pow(r6516581, r6516593);
        double r6516595 = r6516594 * r6516594;
        double r6516596 = 0.641667;
        double r6516597 = -0.065476;
        double r6516598 = r6516597 * r6516581;
        double r6516599 = r6516596 + r6516598;
        double r6516600 = r6516595 * r6516599;
        double r6516601 = r6516582 * r6516582;
        double r6516602 = 13.75;
        double r6516603 = -3.85;
        double r6516604 = r6516603 * r6516581;
        double r6516605 = r6516602 + r6516604;
        double r6516606 = r6516601 * r6516605;
        double r6516607 = r6516600 + r6516606;
        double r6516608 = r6516592 + r6516607;
        double r6516609 = r6516601 * r6516601;
        double r6516610 = 3e-06;
        double r6516611 = r6516610 * r6516582;
        double r6516612 = r6516609 * r6516611;
        double r6516613 = -0.000152;
        double r6516614 = r6516613 * r6516581;
        double r6516615 = 0.004092;
        double r6516616 = r6516614 + r6516615;
        double r6516617 = r6516609 * r6516616;
        double r6516618 = r6516612 + r6516617;
        double r6516619 = r6516608 + r6516618;
        return r6516619;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6516620, r6516621, r6516622, r6516623, r6516624, r6516625, r6516626, r6516627, r6516628, r6516629, r6516630, r6516631, r6516632, r6516633, r6516634, r6516635, r6516636, r6516637, r6516638, r6516639, r6516640, r6516641, r6516642, r6516643, r6516644, r6516645, r6516646, r6516647, r6516648, r6516649, r6516650, r6516651, r6516652, r6516653, r6516654, r6516655, r6516656, r6516657, r6516658, r6516659, r6516660;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6516620, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516621, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r6516622);
        mpfr_init(r6516623);
        mpfr_init(r6516624);
        mpfr_init_set_str(r6516625, "27.5", 10, MPFR_RNDN);
        mpfr_init(r6516626);
        mpfr_init(r6516627);
        mpfr_init(r6516628);
        mpfr_init_set_str(r6516629, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r6516630);
        mpfr_init(r6516631);
        mpfr_init(r6516632);
        mpfr_init_set_str(r6516633, "13.75", 10, MPFR_RNDN);
        mpfr_init(r6516634);
        mpfr_init(r6516635);
        mpfr_init(r6516636);
        mpfr_init_set_str(r6516637, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r6516638);
        mpfr_init(r6516639);
        mpfr_init(r6516640);
        mpfr_init_set_str(r6516641, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r6516642);
        mpfr_init(r6516643);
        mpfr_init(r6516644);
        mpfr_init_set_str(r6516645, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r6516646);
        mpfr_init(r6516647);
        mpfr_init(r6516648);
        mpfr_init_set_str(r6516649, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r6516650);
        mpfr_init(r6516651);
        mpfr_init(r6516652);
        mpfr_init_set_str(r6516653, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r6516654);
        mpfr_init(r6516655);
        mpfr_init(r6516656);
        mpfr_init_set_str(r6516657, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r6516658);
        mpfr_init(r6516659);
        mpfr_init(r6516660);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6516622, x, MPFR_RNDN);
        mpfr_mul(r6516623, r6516621, r6516622, MPFR_RNDN);
        mpfr_add(r6516624, r6516620, r6516623, MPFR_RNDN);
        ;
        mpfr_mul(r6516626, r6516622, r6516622, MPFR_RNDN);
        mpfr_mul(r6516627, r6516625, r6516626, MPFR_RNDN);
        mpfr_add(r6516628, r6516624, r6516627, MPFR_RNDN);
        ;
        mpfr_mul(r6516630, r6516626, r6516622, MPFR_RNDN);
        mpfr_mul(r6516631, r6516629, r6516630, MPFR_RNDN);
        mpfr_add(r6516632, r6516628, r6516631, MPFR_RNDN);
        ;
        mpfr_mul(r6516634, r6516630, r6516622, MPFR_RNDN);
        mpfr_mul(r6516635, r6516633, r6516634, MPFR_RNDN);
        mpfr_add(r6516636, r6516632, r6516635, MPFR_RNDN);
        ;
        mpfr_mul(r6516638, r6516634, r6516622, MPFR_RNDN);
        mpfr_mul(r6516639, r6516637, r6516638, MPFR_RNDN);
        mpfr_add(r6516640, r6516636, r6516639, MPFR_RNDN);
        ;
        mpfr_mul(r6516642, r6516638, r6516622, MPFR_RNDN);
        mpfr_mul(r6516643, r6516641, r6516642, MPFR_RNDN);
        mpfr_add(r6516644, r6516640, r6516643, MPFR_RNDN);
        ;
        mpfr_mul(r6516646, r6516642, r6516622, MPFR_RNDN);
        mpfr_mul(r6516647, r6516645, r6516646, MPFR_RNDN);
        mpfr_add(r6516648, r6516644, r6516647, MPFR_RNDN);
        ;
        mpfr_mul(r6516650, r6516646, r6516622, MPFR_RNDN);
        mpfr_mul(r6516651, r6516649, r6516650, MPFR_RNDN);
        mpfr_add(r6516652, r6516648, r6516651, MPFR_RNDN);
        ;
        mpfr_mul(r6516654, r6516650, r6516622, MPFR_RNDN);
        mpfr_mul(r6516655, r6516653, r6516654, MPFR_RNDN);
        mpfr_add(r6516656, r6516652, r6516655, MPFR_RNDN);
        ;
        mpfr_mul(r6516658, r6516654, r6516622, MPFR_RNDN);
        mpfr_mul(r6516659, r6516657, r6516658, MPFR_RNDN);
        mpfr_add(r6516660, r6516656, r6516659, MPFR_RNDN);
        return mpfr_get_d(r6516660, MPFR_RNDN);
}

static mpfr_t r6516661, r6516662, r6516663, r6516664, r6516665, r6516666, r6516667, r6516668, r6516669, r6516670, r6516671, r6516672, r6516673, r6516674, r6516675, r6516676, r6516677, r6516678, r6516679, r6516680, r6516681, r6516682, r6516683, r6516684, r6516685, r6516686, r6516687, r6516688, r6516689, r6516690, r6516691, r6516692, r6516693, r6516694, r6516695, r6516696, r6516697, r6516698, r6516699;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6516661);
        mpfr_init(r6516662);
        mpfr_init_set_str(r6516663, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r6516664);
        mpfr_init_set_str(r6516665, "27.5", 10, MPFR_RNDN);
        mpfr_init(r6516666);
        mpfr_init(r6516667);
        mpfr_init_set_str(r6516668, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r6516669);
        mpfr_init_set_str(r6516670, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6516671);
        mpfr_init(r6516672);
        mpfr_init_set_str(r6516673, "3", 10, MPFR_RNDN);
        mpfr_init(r6516674);
        mpfr_init(r6516675);
        mpfr_init_set_str(r6516676, "0.641667", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516677, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r6516678);
        mpfr_init(r6516679);
        mpfr_init(r6516680);
        mpfr_init(r6516681);
        mpfr_init_set_str(r6516682, "13.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516683, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r6516684);
        mpfr_init(r6516685);
        mpfr_init(r6516686);
        mpfr_init(r6516687);
        mpfr_init(r6516688);
        mpfr_init(r6516689);
        mpfr_init_set_str(r6516690, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r6516691);
        mpfr_init(r6516692);
        mpfr_init_set_str(r6516693, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r6516694);
        mpfr_init_set_str(r6516695, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r6516696);
        mpfr_init(r6516697);
        mpfr_init(r6516698);
        mpfr_init(r6516699);
}

double f_fm(double x) {
        mpfr_set_d(r6516661, x, MPFR_RNDN);
        mpfr_mul(r6516662, r6516661, r6516661, MPFR_RNDN);
        ;
        mpfr_mul(r6516664, r6516663, r6516661, MPFR_RNDN);
        ;
        mpfr_add(r6516666, r6516664, r6516665, MPFR_RNDN);
        mpfr_mul(r6516667, r6516662, r6516666, MPFR_RNDN);
        ;
        mpfr_mul(r6516669, r6516661, r6516668, MPFR_RNDN);
        ;
        mpfr_add(r6516671, r6516669, r6516670, MPFR_RNDN);
        mpfr_add(r6516672, r6516667, r6516671, MPFR_RNDN);
        ;
        mpfr_pow(r6516674, r6516661, r6516673, MPFR_RNDN);
        mpfr_mul(r6516675, r6516674, r6516674, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516678, r6516677, r6516661, MPFR_RNDN);
        mpfr_add(r6516679, r6516676, r6516678, MPFR_RNDN);
        mpfr_mul(r6516680, r6516675, r6516679, MPFR_RNDN);
        mpfr_mul(r6516681, r6516662, r6516662, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516684, r6516683, r6516661, MPFR_RNDN);
        mpfr_add(r6516685, r6516682, r6516684, MPFR_RNDN);
        mpfr_mul(r6516686, r6516681, r6516685, MPFR_RNDN);
        mpfr_add(r6516687, r6516680, r6516686, MPFR_RNDN);
        mpfr_add(r6516688, r6516672, r6516687, MPFR_RNDN);
        mpfr_mul(r6516689, r6516681, r6516681, MPFR_RNDN);
        ;
        mpfr_mul(r6516691, r6516690, r6516662, MPFR_RNDN);
        mpfr_mul(r6516692, r6516689, r6516691, MPFR_RNDN);
        ;
        mpfr_mul(r6516694, r6516693, r6516661, MPFR_RNDN);
        ;
        mpfr_add(r6516696, r6516694, r6516695, MPFR_RNDN);
        mpfr_mul(r6516697, r6516689, r6516696, MPFR_RNDN);
        mpfr_add(r6516698, r6516692, r6516697, MPFR_RNDN);
        mpfr_add(r6516699, r6516688, r6516698, MPFR_RNDN);
        return mpfr_get_d(r6516699, MPFR_RNDN);
}

static mpfr_t r6516700, r6516701, r6516702, r6516703, r6516704, r6516705, r6516706, r6516707, r6516708, r6516709, r6516710, r6516711, r6516712, r6516713, r6516714, r6516715, r6516716, r6516717, r6516718, r6516719, r6516720, r6516721, r6516722, r6516723, r6516724, r6516725, r6516726, r6516727, r6516728, r6516729, r6516730, r6516731, r6516732, r6516733, r6516734, r6516735, r6516736, r6516737, r6516738;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6516700);
        mpfr_init(r6516701);
        mpfr_init_set_str(r6516702, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r6516703);
        mpfr_init_set_str(r6516704, "27.5", 10, MPFR_RNDN);
        mpfr_init(r6516705);
        mpfr_init(r6516706);
        mpfr_init_set_str(r6516707, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r6516708);
        mpfr_init_set_str(r6516709, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6516710);
        mpfr_init(r6516711);
        mpfr_init_set_str(r6516712, "3", 10, MPFR_RNDN);
        mpfr_init(r6516713);
        mpfr_init(r6516714);
        mpfr_init_set_str(r6516715, "0.641667", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516716, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r6516717);
        mpfr_init(r6516718);
        mpfr_init(r6516719);
        mpfr_init(r6516720);
        mpfr_init_set_str(r6516721, "13.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516722, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r6516723);
        mpfr_init(r6516724);
        mpfr_init(r6516725);
        mpfr_init(r6516726);
        mpfr_init(r6516727);
        mpfr_init(r6516728);
        mpfr_init_set_str(r6516729, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r6516730);
        mpfr_init(r6516731);
        mpfr_init_set_str(r6516732, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r6516733);
        mpfr_init_set_str(r6516734, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r6516735);
        mpfr_init(r6516736);
        mpfr_init(r6516737);
        mpfr_init(r6516738);
}

double f_dm(double x) {
        mpfr_set_d(r6516700, x, MPFR_RNDN);
        mpfr_mul(r6516701, r6516700, r6516700, MPFR_RNDN);
        ;
        mpfr_mul(r6516703, r6516702, r6516700, MPFR_RNDN);
        ;
        mpfr_add(r6516705, r6516703, r6516704, MPFR_RNDN);
        mpfr_mul(r6516706, r6516701, r6516705, MPFR_RNDN);
        ;
        mpfr_mul(r6516708, r6516700, r6516707, MPFR_RNDN);
        ;
        mpfr_add(r6516710, r6516708, r6516709, MPFR_RNDN);
        mpfr_add(r6516711, r6516706, r6516710, MPFR_RNDN);
        ;
        mpfr_pow(r6516713, r6516700, r6516712, MPFR_RNDN);
        mpfr_mul(r6516714, r6516713, r6516713, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516717, r6516716, r6516700, MPFR_RNDN);
        mpfr_add(r6516718, r6516715, r6516717, MPFR_RNDN);
        mpfr_mul(r6516719, r6516714, r6516718, MPFR_RNDN);
        mpfr_mul(r6516720, r6516701, r6516701, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516723, r6516722, r6516700, MPFR_RNDN);
        mpfr_add(r6516724, r6516721, r6516723, MPFR_RNDN);
        mpfr_mul(r6516725, r6516720, r6516724, MPFR_RNDN);
        mpfr_add(r6516726, r6516719, r6516725, MPFR_RNDN);
        mpfr_add(r6516727, r6516711, r6516726, MPFR_RNDN);
        mpfr_mul(r6516728, r6516720, r6516720, MPFR_RNDN);
        ;
        mpfr_mul(r6516730, r6516729, r6516701, MPFR_RNDN);
        mpfr_mul(r6516731, r6516728, r6516730, MPFR_RNDN);
        ;
        mpfr_mul(r6516733, r6516732, r6516700, MPFR_RNDN);
        ;
        mpfr_add(r6516735, r6516733, r6516734, MPFR_RNDN);
        mpfr_mul(r6516736, r6516728, r6516735, MPFR_RNDN);
        mpfr_add(r6516737, r6516731, r6516736, MPFR_RNDN);
        mpfr_add(r6516738, r6516727, r6516737, MPFR_RNDN);
        return mpfr_get_d(r6516738, MPFR_RNDN);
}

