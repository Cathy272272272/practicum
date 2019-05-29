#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r13459448 = 1.0;
        float r13459449 = -16.0;
        float r13459450 = x;
        float r13459451 = r13459449 * r13459450;
        float r13459452 = r13459448 + r13459451;
        float r13459453 = 60.0;
        float r13459454 = r13459450 * r13459450;
        float r13459455 = r13459453 * r13459454;
        float r13459456 = r13459452 + r13459455;
        float r13459457 = -93.333333;
        float r13459458 = r13459454 * r13459450;
        float r13459459 = r13459457 * r13459458;
        float r13459460 = r13459456 + r13459459;
        float r13459461 = 75.833333;
        float r13459462 = r13459458 * r13459450;
        float r13459463 = r13459461 * r13459462;
        float r13459464 = r13459460 + r13459463;
        float r13459465 = -36.4;
        float r13459466 = r13459462 * r13459450;
        float r13459467 = r13459465 * r13459466;
        float r13459468 = r13459464 + r13459467;
        float r13459469 = 11.122222;
        float r13459470 = r13459466 * r13459450;
        float r13459471 = r13459469 * r13459470;
        float r13459472 = r13459468 + r13459471;
        float r13459473 = -2.269841;
        float r13459474 = r13459470 * r13459450;
        float r13459475 = r13459473 * r13459474;
        float r13459476 = r13459472 + r13459475;
        float r13459477 = 0.319196;
        float r13459478 = r13459474 * r13459450;
        float r13459479 = r13459477 * r13459478;
        float r13459480 = r13459476 + r13459479;
        float r13459481 = -0.031526;
        float r13459482 = r13459478 * r13459450;
        float r13459483 = r13459481 * r13459482;
        float r13459484 = r13459480 + r13459483;
        float r13459485 = 0.002207;
        float r13459486 = r13459482 * r13459450;
        float r13459487 = r13459485 * r13459486;
        float r13459488 = r13459484 + r13459487;
        float r13459489 = -0.000109;
        float r13459490 = r13459486 * r13459450;
        float r13459491 = r13459489 * r13459490;
        float r13459492 = r13459488 + r13459491;
        float r13459493 = 4e-06;
        float r13459494 = r13459490 * r13459450;
        float r13459495 = r13459493 * r13459494;
        float r13459496 = r13459492 + r13459495;
        return r13459496;
}

double f_id(double x) {
        double r13459497 = 1.0;
        double r13459498 = -16.0;
        double r13459499 = x;
        double r13459500 = r13459498 * r13459499;
        double r13459501 = r13459497 + r13459500;
        double r13459502 = 60.0;
        double r13459503 = r13459499 * r13459499;
        double r13459504 = r13459502 * r13459503;
        double r13459505 = r13459501 + r13459504;
        double r13459506 = -93.333333;
        double r13459507 = r13459503 * r13459499;
        double r13459508 = r13459506 * r13459507;
        double r13459509 = r13459505 + r13459508;
        double r13459510 = 75.833333;
        double r13459511 = r13459507 * r13459499;
        double r13459512 = r13459510 * r13459511;
        double r13459513 = r13459509 + r13459512;
        double r13459514 = -36.4;
        double r13459515 = r13459511 * r13459499;
        double r13459516 = r13459514 * r13459515;
        double r13459517 = r13459513 + r13459516;
        double r13459518 = 11.122222;
        double r13459519 = r13459515 * r13459499;
        double r13459520 = r13459518 * r13459519;
        double r13459521 = r13459517 + r13459520;
        double r13459522 = -2.269841;
        double r13459523 = r13459519 * r13459499;
        double r13459524 = r13459522 * r13459523;
        double r13459525 = r13459521 + r13459524;
        double r13459526 = 0.319196;
        double r13459527 = r13459523 * r13459499;
        double r13459528 = r13459526 * r13459527;
        double r13459529 = r13459525 + r13459528;
        double r13459530 = -0.031526;
        double r13459531 = r13459527 * r13459499;
        double r13459532 = r13459530 * r13459531;
        double r13459533 = r13459529 + r13459532;
        double r13459534 = 0.002207;
        double r13459535 = r13459531 * r13459499;
        double r13459536 = r13459534 * r13459535;
        double r13459537 = r13459533 + r13459536;
        double r13459538 = -0.000109;
        double r13459539 = r13459535 * r13459499;
        double r13459540 = r13459538 * r13459539;
        double r13459541 = r13459537 + r13459540;
        double r13459542 = 4e-06;
        double r13459543 = r13459539 * r13459499;
        double r13459544 = r13459542 * r13459543;
        double r13459545 = r13459541 + r13459544;
        return r13459545;
}


double f_of(float x) {
        float r13459546 = 1.0;
        float r13459547 = -16.0;
        float r13459548 = x;
        float r13459549 = r13459547 * r13459548;
        float r13459550 = r13459546 + r13459549;
        float r13459551 = 60.0;
        float r13459552 = r13459548 * r13459548;
        float r13459553 = r13459551 * r13459552;
        float r13459554 = r13459550 + r13459553;
        float r13459555 = -93.333333;
        float r13459556 = r13459555 * r13459552;
        float r13459557 = r13459556 * r13459548;
        float r13459558 = r13459554 + r13459557;
        float r13459559 = 75.833333;
        float r13459560 = r13459552 * r13459548;
        float r13459561 = r13459560 * r13459548;
        float r13459562 = r13459559 * r13459561;
        float r13459563 = r13459558 + r13459562;
        float r13459564 = -36.4;
        float r13459565 = r13459561 * r13459548;
        float r13459566 = r13459564 * r13459565;
        float r13459567 = r13459563 + r13459566;
        float r13459568 = 11.122222;
        float r13459569 = r13459565 * r13459548;
        float r13459570 = r13459568 * r13459569;
        float r13459571 = r13459567 + r13459570;
        float r13459572 = -2.269841;
        float r13459573 = r13459569 * r13459548;
        float r13459574 = r13459572 * r13459573;
        float r13459575 = r13459571 + r13459574;
        float r13459576 = 0.319196;
        float r13459577 = r13459573 * r13459548;
        float r13459578 = r13459576 * r13459577;
        float r13459579 = r13459575 + r13459578;
        float r13459580 = -0.031526;
        float r13459581 = r13459577 * r13459548;
        float r13459582 = r13459580 * r13459581;
        float r13459583 = r13459579 + r13459582;
        float r13459584 = 0.002207;
        float r13459585 = r13459581 * r13459548;
        float r13459586 = r13459584 * r13459585;
        float r13459587 = r13459583 + r13459586;
        float r13459588 = -0.000109;
        float r13459589 = r13459585 * r13459548;
        float r13459590 = r13459588 * r13459589;
        float r13459591 = r13459587 + r13459590;
        float r13459592 = 4e-06;
        float r13459593 = r13459589 * r13459548;
        float r13459594 = r13459592 * r13459593;
        float r13459595 = r13459591 + r13459594;
        return r13459595;
}

double f_od(double x) {
        double r13459596 = 1.0;
        double r13459597 = -16.0;
        double r13459598 = x;
        double r13459599 = r13459597 * r13459598;
        double r13459600 = r13459596 + r13459599;
        double r13459601 = 60.0;
        double r13459602 = r13459598 * r13459598;
        double r13459603 = r13459601 * r13459602;
        double r13459604 = r13459600 + r13459603;
        double r13459605 = -93.333333;
        double r13459606 = r13459605 * r13459602;
        double r13459607 = r13459606 * r13459598;
        double r13459608 = r13459604 + r13459607;
        double r13459609 = 75.833333;
        double r13459610 = r13459602 * r13459598;
        double r13459611 = r13459610 * r13459598;
        double r13459612 = r13459609 * r13459611;
        double r13459613 = r13459608 + r13459612;
        double r13459614 = -36.4;
        double r13459615 = r13459611 * r13459598;
        double r13459616 = r13459614 * r13459615;
        double r13459617 = r13459613 + r13459616;
        double r13459618 = 11.122222;
        double r13459619 = r13459615 * r13459598;
        double r13459620 = r13459618 * r13459619;
        double r13459621 = r13459617 + r13459620;
        double r13459622 = -2.269841;
        double r13459623 = r13459619 * r13459598;
        double r13459624 = r13459622 * r13459623;
        double r13459625 = r13459621 + r13459624;
        double r13459626 = 0.319196;
        double r13459627 = r13459623 * r13459598;
        double r13459628 = r13459626 * r13459627;
        double r13459629 = r13459625 + r13459628;
        double r13459630 = -0.031526;
        double r13459631 = r13459627 * r13459598;
        double r13459632 = r13459630 * r13459631;
        double r13459633 = r13459629 + r13459632;
        double r13459634 = 0.002207;
        double r13459635 = r13459631 * r13459598;
        double r13459636 = r13459634 * r13459635;
        double r13459637 = r13459633 + r13459636;
        double r13459638 = -0.000109;
        double r13459639 = r13459635 * r13459598;
        double r13459640 = r13459638 * r13459639;
        double r13459641 = r13459637 + r13459640;
        double r13459642 = 4e-06;
        double r13459643 = r13459639 * r13459598;
        double r13459644 = r13459642 * r13459643;
        double r13459645 = r13459641 + r13459644;
        return r13459645;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13459646, r13459647, r13459648, r13459649, r13459650, r13459651, r13459652, r13459653, r13459654, r13459655, r13459656, r13459657, r13459658, r13459659, r13459660, r13459661, r13459662, r13459663, r13459664, r13459665, r13459666, r13459667, r13459668, r13459669, r13459670, r13459671, r13459672, r13459673, r13459674, r13459675, r13459676, r13459677, r13459678, r13459679, r13459680, r13459681, r13459682, r13459683, r13459684, r13459685, r13459686, r13459687, r13459688, r13459689, r13459690, r13459691, r13459692, r13459693, r13459694;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13459646, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13459647, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r13459648);
        mpfr_init(r13459649);
        mpfr_init(r13459650);
        mpfr_init_set_str(r13459651, "60.0", 10, MPFR_RNDN);
        mpfr_init(r13459652);
        mpfr_init(r13459653);
        mpfr_init(r13459654);
        mpfr_init_set_str(r13459655, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r13459656);
        mpfr_init(r13459657);
        mpfr_init(r13459658);
        mpfr_init_set_str(r13459659, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r13459660);
        mpfr_init(r13459661);
        mpfr_init(r13459662);
        mpfr_init_set_str(r13459663, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r13459664);
        mpfr_init(r13459665);
        mpfr_init(r13459666);
        mpfr_init_set_str(r13459667, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r13459668);
        mpfr_init(r13459669);
        mpfr_init(r13459670);
        mpfr_init_set_str(r13459671, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r13459672);
        mpfr_init(r13459673);
        mpfr_init(r13459674);
        mpfr_init_set_str(r13459675, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r13459676);
        mpfr_init(r13459677);
        mpfr_init(r13459678);
        mpfr_init_set_str(r13459679, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r13459680);
        mpfr_init(r13459681);
        mpfr_init(r13459682);
        mpfr_init_set_str(r13459683, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r13459684);
        mpfr_init(r13459685);
        mpfr_init(r13459686);
        mpfr_init_set_str(r13459687, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r13459688);
        mpfr_init(r13459689);
        mpfr_init(r13459690);
        mpfr_init_set_str(r13459691, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r13459692);
        mpfr_init(r13459693);
        mpfr_init(r13459694);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13459648, x, MPFR_RNDN);
        mpfr_mul(r13459649, r13459647, r13459648, MPFR_RNDN);
        mpfr_add(r13459650, r13459646, r13459649, MPFR_RNDN);
        ;
        mpfr_mul(r13459652, r13459648, r13459648, MPFR_RNDN);
        mpfr_mul(r13459653, r13459651, r13459652, MPFR_RNDN);
        mpfr_add(r13459654, r13459650, r13459653, MPFR_RNDN);
        ;
        mpfr_mul(r13459656, r13459652, r13459648, MPFR_RNDN);
        mpfr_mul(r13459657, r13459655, r13459656, MPFR_RNDN);
        mpfr_add(r13459658, r13459654, r13459657, MPFR_RNDN);
        ;
        mpfr_mul(r13459660, r13459656, r13459648, MPFR_RNDN);
        mpfr_mul(r13459661, r13459659, r13459660, MPFR_RNDN);
        mpfr_add(r13459662, r13459658, r13459661, MPFR_RNDN);
        ;
        mpfr_mul(r13459664, r13459660, r13459648, MPFR_RNDN);
        mpfr_mul(r13459665, r13459663, r13459664, MPFR_RNDN);
        mpfr_add(r13459666, r13459662, r13459665, MPFR_RNDN);
        ;
        mpfr_mul(r13459668, r13459664, r13459648, MPFR_RNDN);
        mpfr_mul(r13459669, r13459667, r13459668, MPFR_RNDN);
        mpfr_add(r13459670, r13459666, r13459669, MPFR_RNDN);
        ;
        mpfr_mul(r13459672, r13459668, r13459648, MPFR_RNDN);
        mpfr_mul(r13459673, r13459671, r13459672, MPFR_RNDN);
        mpfr_add(r13459674, r13459670, r13459673, MPFR_RNDN);
        ;
        mpfr_mul(r13459676, r13459672, r13459648, MPFR_RNDN);
        mpfr_mul(r13459677, r13459675, r13459676, MPFR_RNDN);
        mpfr_add(r13459678, r13459674, r13459677, MPFR_RNDN);
        ;
        mpfr_mul(r13459680, r13459676, r13459648, MPFR_RNDN);
        mpfr_mul(r13459681, r13459679, r13459680, MPFR_RNDN);
        mpfr_add(r13459682, r13459678, r13459681, MPFR_RNDN);
        ;
        mpfr_mul(r13459684, r13459680, r13459648, MPFR_RNDN);
        mpfr_mul(r13459685, r13459683, r13459684, MPFR_RNDN);
        mpfr_add(r13459686, r13459682, r13459685, MPFR_RNDN);
        ;
        mpfr_mul(r13459688, r13459684, r13459648, MPFR_RNDN);
        mpfr_mul(r13459689, r13459687, r13459688, MPFR_RNDN);
        mpfr_add(r13459690, r13459686, r13459689, MPFR_RNDN);
        ;
        mpfr_mul(r13459692, r13459688, r13459648, MPFR_RNDN);
        mpfr_mul(r13459693, r13459691, r13459692, MPFR_RNDN);
        mpfr_add(r13459694, r13459690, r13459693, MPFR_RNDN);
        return mpfr_get_d(r13459694, MPFR_RNDN);
}

static mpfr_t r13459695, r13459696, r13459697, r13459698, r13459699, r13459700, r13459701, r13459702, r13459703, r13459704, r13459705, r13459706, r13459707, r13459708, r13459709, r13459710, r13459711, r13459712, r13459713, r13459714, r13459715, r13459716, r13459717, r13459718, r13459719, r13459720, r13459721, r13459722, r13459723, r13459724, r13459725, r13459726, r13459727, r13459728, r13459729, r13459730, r13459731, r13459732, r13459733, r13459734, r13459735, r13459736, r13459737, r13459738, r13459739, r13459740, r13459741, r13459742, r13459743, r13459744;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13459695, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13459696, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r13459697);
        mpfr_init(r13459698);
        mpfr_init(r13459699);
        mpfr_init_set_str(r13459700, "60.0", 10, MPFR_RNDN);
        mpfr_init(r13459701);
        mpfr_init(r13459702);
        mpfr_init(r13459703);
        mpfr_init_set_str(r13459704, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r13459705);
        mpfr_init(r13459706);
        mpfr_init(r13459707);
        mpfr_init_set_str(r13459708, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r13459709);
        mpfr_init(r13459710);
        mpfr_init(r13459711);
        mpfr_init(r13459712);
        mpfr_init_set_str(r13459713, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r13459714);
        mpfr_init(r13459715);
        mpfr_init(r13459716);
        mpfr_init_set_str(r13459717, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r13459718);
        mpfr_init(r13459719);
        mpfr_init(r13459720);
        mpfr_init_set_str(r13459721, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r13459722);
        mpfr_init(r13459723);
        mpfr_init(r13459724);
        mpfr_init_set_str(r13459725, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r13459726);
        mpfr_init(r13459727);
        mpfr_init(r13459728);
        mpfr_init_set_str(r13459729, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r13459730);
        mpfr_init(r13459731);
        mpfr_init(r13459732);
        mpfr_init_set_str(r13459733, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r13459734);
        mpfr_init(r13459735);
        mpfr_init(r13459736);
        mpfr_init_set_str(r13459737, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r13459738);
        mpfr_init(r13459739);
        mpfr_init(r13459740);
        mpfr_init_set_str(r13459741, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r13459742);
        mpfr_init(r13459743);
        mpfr_init(r13459744);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r13459697, x, MPFR_RNDN);
        mpfr_mul(r13459698, r13459696, r13459697, MPFR_RNDN);
        mpfr_add(r13459699, r13459695, r13459698, MPFR_RNDN);
        ;
        mpfr_mul(r13459701, r13459697, r13459697, MPFR_RNDN);
        mpfr_mul(r13459702, r13459700, r13459701, MPFR_RNDN);
        mpfr_add(r13459703, r13459699, r13459702, MPFR_RNDN);
        ;
        mpfr_mul(r13459705, r13459704, r13459701, MPFR_RNDN);
        mpfr_mul(r13459706, r13459705, r13459697, MPFR_RNDN);
        mpfr_add(r13459707, r13459703, r13459706, MPFR_RNDN);
        ;
        mpfr_mul(r13459709, r13459701, r13459697, MPFR_RNDN);
        mpfr_mul(r13459710, r13459709, r13459697, MPFR_RNDN);
        mpfr_mul(r13459711, r13459708, r13459710, MPFR_RNDN);
        mpfr_add(r13459712, r13459707, r13459711, MPFR_RNDN);
        ;
        mpfr_mul(r13459714, r13459710, r13459697, MPFR_RNDN);
        mpfr_mul(r13459715, r13459713, r13459714, MPFR_RNDN);
        mpfr_add(r13459716, r13459712, r13459715, MPFR_RNDN);
        ;
        mpfr_mul(r13459718, r13459714, r13459697, MPFR_RNDN);
        mpfr_mul(r13459719, r13459717, r13459718, MPFR_RNDN);
        mpfr_add(r13459720, r13459716, r13459719, MPFR_RNDN);
        ;
        mpfr_mul(r13459722, r13459718, r13459697, MPFR_RNDN);
        mpfr_mul(r13459723, r13459721, r13459722, MPFR_RNDN);
        mpfr_add(r13459724, r13459720, r13459723, MPFR_RNDN);
        ;
        mpfr_mul(r13459726, r13459722, r13459697, MPFR_RNDN);
        mpfr_mul(r13459727, r13459725, r13459726, MPFR_RNDN);
        mpfr_add(r13459728, r13459724, r13459727, MPFR_RNDN);
        ;
        mpfr_mul(r13459730, r13459726, r13459697, MPFR_RNDN);
        mpfr_mul(r13459731, r13459729, r13459730, MPFR_RNDN);
        mpfr_add(r13459732, r13459728, r13459731, MPFR_RNDN);
        ;
        mpfr_mul(r13459734, r13459730, r13459697, MPFR_RNDN);
        mpfr_mul(r13459735, r13459733, r13459734, MPFR_RNDN);
        mpfr_add(r13459736, r13459732, r13459735, MPFR_RNDN);
        ;
        mpfr_mul(r13459738, r13459734, r13459697, MPFR_RNDN);
        mpfr_mul(r13459739, r13459737, r13459738, MPFR_RNDN);
        mpfr_add(r13459740, r13459736, r13459739, MPFR_RNDN);
        ;
        mpfr_mul(r13459742, r13459738, r13459697, MPFR_RNDN);
        mpfr_mul(r13459743, r13459741, r13459742, MPFR_RNDN);
        mpfr_add(r13459744, r13459740, r13459743, MPFR_RNDN);
        return mpfr_get_d(r13459744, MPFR_RNDN);
}

static mpfr_t r13459745, r13459746, r13459747, r13459748, r13459749, r13459750, r13459751, r13459752, r13459753, r13459754, r13459755, r13459756, r13459757, r13459758, r13459759, r13459760, r13459761, r13459762, r13459763, r13459764, r13459765, r13459766, r13459767, r13459768, r13459769, r13459770, r13459771, r13459772, r13459773, r13459774, r13459775, r13459776, r13459777, r13459778, r13459779, r13459780, r13459781, r13459782, r13459783, r13459784, r13459785, r13459786, r13459787, r13459788, r13459789, r13459790, r13459791, r13459792, r13459793, r13459794;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13459745, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13459746, "-16.0", 10, MPFR_RNDN);
        mpfr_init(r13459747);
        mpfr_init(r13459748);
        mpfr_init(r13459749);
        mpfr_init_set_str(r13459750, "60.0", 10, MPFR_RNDN);
        mpfr_init(r13459751);
        mpfr_init(r13459752);
        mpfr_init(r13459753);
        mpfr_init_set_str(r13459754, "-93.333333", 10, MPFR_RNDN);
        mpfr_init(r13459755);
        mpfr_init(r13459756);
        mpfr_init(r13459757);
        mpfr_init_set_str(r13459758, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r13459759);
        mpfr_init(r13459760);
        mpfr_init(r13459761);
        mpfr_init(r13459762);
        mpfr_init_set_str(r13459763, "-36.4", 10, MPFR_RNDN);
        mpfr_init(r13459764);
        mpfr_init(r13459765);
        mpfr_init(r13459766);
        mpfr_init_set_str(r13459767, "11.122222", 10, MPFR_RNDN);
        mpfr_init(r13459768);
        mpfr_init(r13459769);
        mpfr_init(r13459770);
        mpfr_init_set_str(r13459771, "-2.269841", 10, MPFR_RNDN);
        mpfr_init(r13459772);
        mpfr_init(r13459773);
        mpfr_init(r13459774);
        mpfr_init_set_str(r13459775, "0.319196", 10, MPFR_RNDN);
        mpfr_init(r13459776);
        mpfr_init(r13459777);
        mpfr_init(r13459778);
        mpfr_init_set_str(r13459779, "-0.031526", 10, MPFR_RNDN);
        mpfr_init(r13459780);
        mpfr_init(r13459781);
        mpfr_init(r13459782);
        mpfr_init_set_str(r13459783, "0.002207", 10, MPFR_RNDN);
        mpfr_init(r13459784);
        mpfr_init(r13459785);
        mpfr_init(r13459786);
        mpfr_init_set_str(r13459787, "-0.000109", 10, MPFR_RNDN);
        mpfr_init(r13459788);
        mpfr_init(r13459789);
        mpfr_init(r13459790);
        mpfr_init_set_str(r13459791, "4e-06", 10, MPFR_RNDN);
        mpfr_init(r13459792);
        mpfr_init(r13459793);
        mpfr_init(r13459794);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r13459747, x, MPFR_RNDN);
        mpfr_mul(r13459748, r13459746, r13459747, MPFR_RNDN);
        mpfr_add(r13459749, r13459745, r13459748, MPFR_RNDN);
        ;
        mpfr_mul(r13459751, r13459747, r13459747, MPFR_RNDN);
        mpfr_mul(r13459752, r13459750, r13459751, MPFR_RNDN);
        mpfr_add(r13459753, r13459749, r13459752, MPFR_RNDN);
        ;
        mpfr_mul(r13459755, r13459754, r13459751, MPFR_RNDN);
        mpfr_mul(r13459756, r13459755, r13459747, MPFR_RNDN);
        mpfr_add(r13459757, r13459753, r13459756, MPFR_RNDN);
        ;
        mpfr_mul(r13459759, r13459751, r13459747, MPFR_RNDN);
        mpfr_mul(r13459760, r13459759, r13459747, MPFR_RNDN);
        mpfr_mul(r13459761, r13459758, r13459760, MPFR_RNDN);
        mpfr_add(r13459762, r13459757, r13459761, MPFR_RNDN);
        ;
        mpfr_mul(r13459764, r13459760, r13459747, MPFR_RNDN);
        mpfr_mul(r13459765, r13459763, r13459764, MPFR_RNDN);
        mpfr_add(r13459766, r13459762, r13459765, MPFR_RNDN);
        ;
        mpfr_mul(r13459768, r13459764, r13459747, MPFR_RNDN);
        mpfr_mul(r13459769, r13459767, r13459768, MPFR_RNDN);
        mpfr_add(r13459770, r13459766, r13459769, MPFR_RNDN);
        ;
        mpfr_mul(r13459772, r13459768, r13459747, MPFR_RNDN);
        mpfr_mul(r13459773, r13459771, r13459772, MPFR_RNDN);
        mpfr_add(r13459774, r13459770, r13459773, MPFR_RNDN);
        ;
        mpfr_mul(r13459776, r13459772, r13459747, MPFR_RNDN);
        mpfr_mul(r13459777, r13459775, r13459776, MPFR_RNDN);
        mpfr_add(r13459778, r13459774, r13459777, MPFR_RNDN);
        ;
        mpfr_mul(r13459780, r13459776, r13459747, MPFR_RNDN);
        mpfr_mul(r13459781, r13459779, r13459780, MPFR_RNDN);
        mpfr_add(r13459782, r13459778, r13459781, MPFR_RNDN);
        ;
        mpfr_mul(r13459784, r13459780, r13459747, MPFR_RNDN);
        mpfr_mul(r13459785, r13459783, r13459784, MPFR_RNDN);
        mpfr_add(r13459786, r13459782, r13459785, MPFR_RNDN);
        ;
        mpfr_mul(r13459788, r13459784, r13459747, MPFR_RNDN);
        mpfr_mul(r13459789, r13459787, r13459788, MPFR_RNDN);
        mpfr_add(r13459790, r13459786, r13459789, MPFR_RNDN);
        ;
        mpfr_mul(r13459792, r13459788, r13459747, MPFR_RNDN);
        mpfr_mul(r13459793, r13459791, r13459792, MPFR_RNDN);
        mpfr_add(r13459794, r13459790, r13459793, MPFR_RNDN);
        return mpfr_get_d(r13459794, MPFR_RNDN);
}
