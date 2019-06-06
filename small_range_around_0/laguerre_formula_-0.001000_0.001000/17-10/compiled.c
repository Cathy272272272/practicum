#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r3752500 = 1.0;
        float r3752501 = -10.0;
        float r3752502 = x;
        float r3752503 = r3752501 * r3752502;
        float r3752504 = r3752500 + r3752503;
        float r3752505 = 22.5;
        float r3752506 = r3752502 * r3752502;
        float r3752507 = r3752505 * r3752506;
        float r3752508 = r3752504 + r3752507;
        float r3752509 = -20.0;
        float r3752510 = r3752506 * r3752502;
        float r3752511 = r3752509 * r3752510;
        float r3752512 = r3752508 + r3752511;
        float r3752513 = 8.75;
        float r3752514 = r3752510 * r3752502;
        float r3752515 = r3752513 * r3752514;
        float r3752516 = r3752512 + r3752515;
        float r3752517 = -2.1;
        float r3752518 = r3752514 * r3752502;
        float r3752519 = r3752517 * r3752518;
        float r3752520 = r3752516 + r3752519;
        float r3752521 = 0.291667;
        float r3752522 = r3752518 * r3752502;
        float r3752523 = r3752521 * r3752522;
        float r3752524 = r3752520 + r3752523;
        float r3752525 = -0.02381;
        float r3752526 = r3752522 * r3752502;
        float r3752527 = r3752525 * r3752526;
        float r3752528 = r3752524 + r3752527;
        float r3752529 = 0.001116;
        float r3752530 = r3752526 * r3752502;
        float r3752531 = r3752529 * r3752530;
        float r3752532 = r3752528 + r3752531;
        float r3752533 = -2.8e-05;
        float r3752534 = r3752530 * r3752502;
        float r3752535 = r3752533 * r3752534;
        float r3752536 = r3752532 + r3752535;
        return r3752536;
}

double f_id(double x) {
        double r3752537 = 1.0;
        double r3752538 = -10.0;
        double r3752539 = x;
        double r3752540 = r3752538 * r3752539;
        double r3752541 = r3752537 + r3752540;
        double r3752542 = 22.5;
        double r3752543 = r3752539 * r3752539;
        double r3752544 = r3752542 * r3752543;
        double r3752545 = r3752541 + r3752544;
        double r3752546 = -20.0;
        double r3752547 = r3752543 * r3752539;
        double r3752548 = r3752546 * r3752547;
        double r3752549 = r3752545 + r3752548;
        double r3752550 = 8.75;
        double r3752551 = r3752547 * r3752539;
        double r3752552 = r3752550 * r3752551;
        double r3752553 = r3752549 + r3752552;
        double r3752554 = -2.1;
        double r3752555 = r3752551 * r3752539;
        double r3752556 = r3752554 * r3752555;
        double r3752557 = r3752553 + r3752556;
        double r3752558 = 0.291667;
        double r3752559 = r3752555 * r3752539;
        double r3752560 = r3752558 * r3752559;
        double r3752561 = r3752557 + r3752560;
        double r3752562 = -0.02381;
        double r3752563 = r3752559 * r3752539;
        double r3752564 = r3752562 * r3752563;
        double r3752565 = r3752561 + r3752564;
        double r3752566 = 0.001116;
        double r3752567 = r3752563 * r3752539;
        double r3752568 = r3752566 * r3752567;
        double r3752569 = r3752565 + r3752568;
        double r3752570 = -2.8e-05;
        double r3752571 = r3752567 * r3752539;
        double r3752572 = r3752570 * r3752571;
        double r3752573 = r3752569 + r3752572;
        return r3752573;
}


double f_of(float x) {
        float r3752574 = x;
        float r3752575 = r3752574 * r3752574;
        float r3752576 = 0.291667;
        float r3752577 = r3752575 * r3752576;
        float r3752578 = r3752575 * r3752575;
        float r3752579 = r3752577 * r3752578;
        float r3752580 = -2.1;
        float r3752581 = r3752580 * r3752574;
        float r3752582 = 8.75;
        float r3752583 = r3752581 + r3752582;
        float r3752584 = r3752578 * r3752583;
        float r3752585 = r3752579 + r3752584;
        float r3752586 = -10.0;
        float r3752587 = r3752574 * r3752586;
        float r3752588 = 1.0;
        float r3752589 = r3752587 + r3752588;
        float r3752590 = -20.0;
        float r3752591 = r3752590 * r3752574;
        float r3752592 = 22.5;
        float r3752593 = r3752591 + r3752592;
        float r3752594 = r3752575 * r3752593;
        float r3752595 = r3752589 + r3752594;
        float r3752596 = r3752585 + r3752595;
        float r3752597 = -0.02381;
        float r3752598 = r3752597 * r3752574;
        float r3752599 = r3752598 * r3752575;
        float r3752600 = r3752599 * r3752578;
        float r3752601 = r3752578 * r3752578;
        float r3752602 = -2.8e-05;
        float r3752603 = r3752602 * r3752574;
        float r3752604 = 0.001116;
        float r3752605 = r3752603 + r3752604;
        float r3752606 = r3752601 * r3752605;
        float r3752607 = r3752600 + r3752606;
        float r3752608 = r3752596 + r3752607;
        return r3752608;
}

double f_od(double x) {
        double r3752609 = x;
        double r3752610 = r3752609 * r3752609;
        double r3752611 = 0.291667;
        double r3752612 = r3752610 * r3752611;
        double r3752613 = r3752610 * r3752610;
        double r3752614 = r3752612 * r3752613;
        double r3752615 = -2.1;
        double r3752616 = r3752615 * r3752609;
        double r3752617 = 8.75;
        double r3752618 = r3752616 + r3752617;
        double r3752619 = r3752613 * r3752618;
        double r3752620 = r3752614 + r3752619;
        double r3752621 = -10.0;
        double r3752622 = r3752609 * r3752621;
        double r3752623 = 1.0;
        double r3752624 = r3752622 + r3752623;
        double r3752625 = -20.0;
        double r3752626 = r3752625 * r3752609;
        double r3752627 = 22.5;
        double r3752628 = r3752626 + r3752627;
        double r3752629 = r3752610 * r3752628;
        double r3752630 = r3752624 + r3752629;
        double r3752631 = r3752620 + r3752630;
        double r3752632 = -0.02381;
        double r3752633 = r3752632 * r3752609;
        double r3752634 = r3752633 * r3752610;
        double r3752635 = r3752634 * r3752613;
        double r3752636 = r3752613 * r3752613;
        double r3752637 = -2.8e-05;
        double r3752638 = r3752637 * r3752609;
        double r3752639 = 0.001116;
        double r3752640 = r3752638 + r3752639;
        double r3752641 = r3752636 * r3752640;
        double r3752642 = r3752635 + r3752641;
        double r3752643 = r3752631 + r3752642;
        return r3752643;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3752644, r3752645, r3752646, r3752647, r3752648, r3752649, r3752650, r3752651, r3752652, r3752653, r3752654, r3752655, r3752656, r3752657, r3752658, r3752659, r3752660, r3752661, r3752662, r3752663, r3752664, r3752665, r3752666, r3752667, r3752668, r3752669, r3752670, r3752671, r3752672, r3752673, r3752674, r3752675, r3752676, r3752677, r3752678, r3752679, r3752680;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752644, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752645, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r3752646);
        mpfr_init(r3752647);
        mpfr_init(r3752648);
        mpfr_init_set_str(r3752649, "22.5", 10, MPFR_RNDN);
        mpfr_init(r3752650);
        mpfr_init(r3752651);
        mpfr_init(r3752652);
        mpfr_init_set_str(r3752653, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r3752654);
        mpfr_init(r3752655);
        mpfr_init(r3752656);
        mpfr_init_set_str(r3752657, "8.75", 10, MPFR_RNDN);
        mpfr_init(r3752658);
        mpfr_init(r3752659);
        mpfr_init(r3752660);
        mpfr_init_set_str(r3752661, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r3752662);
        mpfr_init(r3752663);
        mpfr_init(r3752664);
        mpfr_init_set_str(r3752665, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r3752666);
        mpfr_init(r3752667);
        mpfr_init(r3752668);
        mpfr_init_set_str(r3752669, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r3752670);
        mpfr_init(r3752671);
        mpfr_init(r3752672);
        mpfr_init_set_str(r3752673, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r3752674);
        mpfr_init(r3752675);
        mpfr_init(r3752676);
        mpfr_init_set_str(r3752677, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3752678);
        mpfr_init(r3752679);
        mpfr_init(r3752680);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3752646, x, MPFR_RNDN);
        mpfr_mul(r3752647, r3752645, r3752646, MPFR_RNDN);
        mpfr_add(r3752648, r3752644, r3752647, MPFR_RNDN);
        ;
        mpfr_mul(r3752650, r3752646, r3752646, MPFR_RNDN);
        mpfr_mul(r3752651, r3752649, r3752650, MPFR_RNDN);
        mpfr_add(r3752652, r3752648, r3752651, MPFR_RNDN);
        ;
        mpfr_mul(r3752654, r3752650, r3752646, MPFR_RNDN);
        mpfr_mul(r3752655, r3752653, r3752654, MPFR_RNDN);
        mpfr_add(r3752656, r3752652, r3752655, MPFR_RNDN);
        ;
        mpfr_mul(r3752658, r3752654, r3752646, MPFR_RNDN);
        mpfr_mul(r3752659, r3752657, r3752658, MPFR_RNDN);
        mpfr_add(r3752660, r3752656, r3752659, MPFR_RNDN);
        ;
        mpfr_mul(r3752662, r3752658, r3752646, MPFR_RNDN);
        mpfr_mul(r3752663, r3752661, r3752662, MPFR_RNDN);
        mpfr_add(r3752664, r3752660, r3752663, MPFR_RNDN);
        ;
        mpfr_mul(r3752666, r3752662, r3752646, MPFR_RNDN);
        mpfr_mul(r3752667, r3752665, r3752666, MPFR_RNDN);
        mpfr_add(r3752668, r3752664, r3752667, MPFR_RNDN);
        ;
        mpfr_mul(r3752670, r3752666, r3752646, MPFR_RNDN);
        mpfr_mul(r3752671, r3752669, r3752670, MPFR_RNDN);
        mpfr_add(r3752672, r3752668, r3752671, MPFR_RNDN);
        ;
        mpfr_mul(r3752674, r3752670, r3752646, MPFR_RNDN);
        mpfr_mul(r3752675, r3752673, r3752674, MPFR_RNDN);
        mpfr_add(r3752676, r3752672, r3752675, MPFR_RNDN);
        ;
        mpfr_mul(r3752678, r3752674, r3752646, MPFR_RNDN);
        mpfr_mul(r3752679, r3752677, r3752678, MPFR_RNDN);
        mpfr_add(r3752680, r3752676, r3752679, MPFR_RNDN);
        return mpfr_get_d(r3752680, MPFR_RNDN);
}

static mpfr_t r3752681, r3752682, r3752683, r3752684, r3752685, r3752686, r3752687, r3752688, r3752689, r3752690, r3752691, r3752692, r3752693, r3752694, r3752695, r3752696, r3752697, r3752698, r3752699, r3752700, r3752701, r3752702, r3752703, r3752704, r3752705, r3752706, r3752707, r3752708, r3752709, r3752710, r3752711, r3752712, r3752713, r3752714, r3752715;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3752681);
        mpfr_init(r3752682);
        mpfr_init_set_str(r3752683, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r3752684);
        mpfr_init(r3752685);
        mpfr_init(r3752686);
        mpfr_init_set_str(r3752687, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r3752688);
        mpfr_init_set_str(r3752689, "8.75", 10, MPFR_RNDN);
        mpfr_init(r3752690);
        mpfr_init(r3752691);
        mpfr_init(r3752692);
        mpfr_init_set_str(r3752693, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r3752694);
        mpfr_init_set_str(r3752695, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3752696);
        mpfr_init_set_str(r3752697, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r3752698);
        mpfr_init_set_str(r3752699, "22.5", 10, MPFR_RNDN);
        mpfr_init(r3752700);
        mpfr_init(r3752701);
        mpfr_init(r3752702);
        mpfr_init(r3752703);
        mpfr_init_set_str(r3752704, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r3752705);
        mpfr_init(r3752706);
        mpfr_init(r3752707);
        mpfr_init(r3752708);
        mpfr_init_set_str(r3752709, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3752710);
        mpfr_init_set_str(r3752711, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r3752712);
        mpfr_init(r3752713);
        mpfr_init(r3752714);
        mpfr_init(r3752715);
}

double f_fm(double x) {
        mpfr_set_d(r3752681, x, MPFR_RNDN);
        mpfr_mul(r3752682, r3752681, r3752681, MPFR_RNDN);
        ;
        mpfr_mul(r3752684, r3752682, r3752683, MPFR_RNDN);
        mpfr_mul(r3752685, r3752682, r3752682, MPFR_RNDN);
        mpfr_mul(r3752686, r3752684, r3752685, MPFR_RNDN);
        ;
        mpfr_mul(r3752688, r3752687, r3752681, MPFR_RNDN);
        ;
        mpfr_add(r3752690, r3752688, r3752689, MPFR_RNDN);
        mpfr_mul(r3752691, r3752685, r3752690, MPFR_RNDN);
        mpfr_add(r3752692, r3752686, r3752691, MPFR_RNDN);
        ;
        mpfr_mul(r3752694, r3752681, r3752693, MPFR_RNDN);
        ;
        mpfr_add(r3752696, r3752694, r3752695, MPFR_RNDN);
        ;
        mpfr_mul(r3752698, r3752697, r3752681, MPFR_RNDN);
        ;
        mpfr_add(r3752700, r3752698, r3752699, MPFR_RNDN);
        mpfr_mul(r3752701, r3752682, r3752700, MPFR_RNDN);
        mpfr_add(r3752702, r3752696, r3752701, MPFR_RNDN);
        mpfr_add(r3752703, r3752692, r3752702, MPFR_RNDN);
        ;
        mpfr_mul(r3752705, r3752704, r3752681, MPFR_RNDN);
        mpfr_mul(r3752706, r3752705, r3752682, MPFR_RNDN);
        mpfr_mul(r3752707, r3752706, r3752685, MPFR_RNDN);
        mpfr_mul(r3752708, r3752685, r3752685, MPFR_RNDN);
        ;
        mpfr_mul(r3752710, r3752709, r3752681, MPFR_RNDN);
        ;
        mpfr_add(r3752712, r3752710, r3752711, MPFR_RNDN);
        mpfr_mul(r3752713, r3752708, r3752712, MPFR_RNDN);
        mpfr_add(r3752714, r3752707, r3752713, MPFR_RNDN);
        mpfr_add(r3752715, r3752703, r3752714, MPFR_RNDN);
        return mpfr_get_d(r3752715, MPFR_RNDN);
}

static mpfr_t r3752716, r3752717, r3752718, r3752719, r3752720, r3752721, r3752722, r3752723, r3752724, r3752725, r3752726, r3752727, r3752728, r3752729, r3752730, r3752731, r3752732, r3752733, r3752734, r3752735, r3752736, r3752737, r3752738, r3752739, r3752740, r3752741, r3752742, r3752743, r3752744, r3752745, r3752746, r3752747, r3752748, r3752749, r3752750;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3752716);
        mpfr_init(r3752717);
        mpfr_init_set_str(r3752718, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r3752719);
        mpfr_init(r3752720);
        mpfr_init(r3752721);
        mpfr_init_set_str(r3752722, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r3752723);
        mpfr_init_set_str(r3752724, "8.75", 10, MPFR_RNDN);
        mpfr_init(r3752725);
        mpfr_init(r3752726);
        mpfr_init(r3752727);
        mpfr_init_set_str(r3752728, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r3752729);
        mpfr_init_set_str(r3752730, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3752731);
        mpfr_init_set_str(r3752732, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r3752733);
        mpfr_init_set_str(r3752734, "22.5", 10, MPFR_RNDN);
        mpfr_init(r3752735);
        mpfr_init(r3752736);
        mpfr_init(r3752737);
        mpfr_init(r3752738);
        mpfr_init_set_str(r3752739, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r3752740);
        mpfr_init(r3752741);
        mpfr_init(r3752742);
        mpfr_init(r3752743);
        mpfr_init_set_str(r3752744, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3752745);
        mpfr_init_set_str(r3752746, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r3752747);
        mpfr_init(r3752748);
        mpfr_init(r3752749);
        mpfr_init(r3752750);
}

double f_dm(double x) {
        mpfr_set_d(r3752716, x, MPFR_RNDN);
        mpfr_mul(r3752717, r3752716, r3752716, MPFR_RNDN);
        ;
        mpfr_mul(r3752719, r3752717, r3752718, MPFR_RNDN);
        mpfr_mul(r3752720, r3752717, r3752717, MPFR_RNDN);
        mpfr_mul(r3752721, r3752719, r3752720, MPFR_RNDN);
        ;
        mpfr_mul(r3752723, r3752722, r3752716, MPFR_RNDN);
        ;
        mpfr_add(r3752725, r3752723, r3752724, MPFR_RNDN);
        mpfr_mul(r3752726, r3752720, r3752725, MPFR_RNDN);
        mpfr_add(r3752727, r3752721, r3752726, MPFR_RNDN);
        ;
        mpfr_mul(r3752729, r3752716, r3752728, MPFR_RNDN);
        ;
        mpfr_add(r3752731, r3752729, r3752730, MPFR_RNDN);
        ;
        mpfr_mul(r3752733, r3752732, r3752716, MPFR_RNDN);
        ;
        mpfr_add(r3752735, r3752733, r3752734, MPFR_RNDN);
        mpfr_mul(r3752736, r3752717, r3752735, MPFR_RNDN);
        mpfr_add(r3752737, r3752731, r3752736, MPFR_RNDN);
        mpfr_add(r3752738, r3752727, r3752737, MPFR_RNDN);
        ;
        mpfr_mul(r3752740, r3752739, r3752716, MPFR_RNDN);
        mpfr_mul(r3752741, r3752740, r3752717, MPFR_RNDN);
        mpfr_mul(r3752742, r3752741, r3752720, MPFR_RNDN);
        mpfr_mul(r3752743, r3752720, r3752720, MPFR_RNDN);
        ;
        mpfr_mul(r3752745, r3752744, r3752716, MPFR_RNDN);
        ;
        mpfr_add(r3752747, r3752745, r3752746, MPFR_RNDN);
        mpfr_mul(r3752748, r3752743, r3752747, MPFR_RNDN);
        mpfr_add(r3752749, r3752742, r3752748, MPFR_RNDN);
        mpfr_add(r3752750, r3752738, r3752749, MPFR_RNDN);
        return mpfr_get_d(r3752750, MPFR_RNDN);
}

