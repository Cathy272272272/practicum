#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r11544524 = 1.0;
        float r11544525 = -6.0;
        float r11544526 = x;
        float r11544527 = r11544525 * r11544526;
        float r11544528 = r11544524 + r11544527;
        float r11544529 = 7.5;
        float r11544530 = r11544526 * r11544526;
        float r11544531 = r11544529 * r11544530;
        float r11544532 = r11544528 + r11544531;
        float r11544533 = -3.333333;
        float r11544534 = r11544530 * r11544526;
        float r11544535 = r11544533 * r11544534;
        float r11544536 = r11544532 + r11544535;
        float r11544537 = 0.625;
        float r11544538 = r11544534 * r11544526;
        float r11544539 = r11544537 * r11544538;
        float r11544540 = r11544536 + r11544539;
        float r11544541 = -0.05;
        float r11544542 = r11544538 * r11544526;
        float r11544543 = r11544541 * r11544542;
        float r11544544 = r11544540 + r11544543;
        float r11544545 = 0.001389;
        float r11544546 = r11544542 * r11544526;
        float r11544547 = r11544545 * r11544546;
        float r11544548 = r11544544 + r11544547;
        return r11544548;
}

double f_id(double x) {
        double r11544549 = 1.0;
        double r11544550 = -6.0;
        double r11544551 = x;
        double r11544552 = r11544550 * r11544551;
        double r11544553 = r11544549 + r11544552;
        double r11544554 = 7.5;
        double r11544555 = r11544551 * r11544551;
        double r11544556 = r11544554 * r11544555;
        double r11544557 = r11544553 + r11544556;
        double r11544558 = -3.333333;
        double r11544559 = r11544555 * r11544551;
        double r11544560 = r11544558 * r11544559;
        double r11544561 = r11544557 + r11544560;
        double r11544562 = 0.625;
        double r11544563 = r11544559 * r11544551;
        double r11544564 = r11544562 * r11544563;
        double r11544565 = r11544561 + r11544564;
        double r11544566 = -0.05;
        double r11544567 = r11544563 * r11544551;
        double r11544568 = r11544566 * r11544567;
        double r11544569 = r11544565 + r11544568;
        double r11544570 = 0.001389;
        double r11544571 = r11544567 * r11544551;
        double r11544572 = r11544570 * r11544571;
        double r11544573 = r11544569 + r11544572;
        return r11544573;
}


double f_of(float x) {
        float r11544574 = x;
        float r11544575 = 0.001389;
        float r11544576 = r11544575 * r11544574;
        float r11544577 = r11544574 * r11544576;
        float r11544578 = r11544574 * r11544574;
        float r11544579 = r11544578 * r11544578;
        float r11544580 = r11544577 * r11544579;
        float r11544581 = -6.0;
        float r11544582 = r11544574 * r11544581;
        float r11544583 = 1.0;
        float r11544584 = r11544582 + r11544583;
        float r11544585 = r11544580 + r11544584;
        float r11544586 = 0.625;
        float r11544587 = -0.05;
        float r11544588 = r11544587 * r11544574;
        float r11544589 = r11544586 + r11544588;
        float r11544590 = r11544579 * r11544589;
        float r11544591 = -3.333333;
        float r11544592 = r11544591 * r11544574;
        float r11544593 = 7.5;
        float r11544594 = r11544592 + r11544593;
        float r11544595 = r11544574 * r11544594;
        float r11544596 = r11544574 * r11544595;
        float r11544597 = r11544590 + r11544596;
        float r11544598 = r11544585 + r11544597;
        return r11544598;
}

double f_od(double x) {
        double r11544599 = x;
        double r11544600 = 0.001389;
        double r11544601 = r11544600 * r11544599;
        double r11544602 = r11544599 * r11544601;
        double r11544603 = r11544599 * r11544599;
        double r11544604 = r11544603 * r11544603;
        double r11544605 = r11544602 * r11544604;
        double r11544606 = -6.0;
        double r11544607 = r11544599 * r11544606;
        double r11544608 = 1.0;
        double r11544609 = r11544607 + r11544608;
        double r11544610 = r11544605 + r11544609;
        double r11544611 = 0.625;
        double r11544612 = -0.05;
        double r11544613 = r11544612 * r11544599;
        double r11544614 = r11544611 + r11544613;
        double r11544615 = r11544604 * r11544614;
        double r11544616 = -3.333333;
        double r11544617 = r11544616 * r11544599;
        double r11544618 = 7.5;
        double r11544619 = r11544617 + r11544618;
        double r11544620 = r11544599 * r11544619;
        double r11544621 = r11544599 * r11544620;
        double r11544622 = r11544615 + r11544621;
        double r11544623 = r11544610 + r11544622;
        return r11544623;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11544624, r11544625, r11544626, r11544627, r11544628, r11544629, r11544630, r11544631, r11544632, r11544633, r11544634, r11544635, r11544636, r11544637, r11544638, r11544639, r11544640, r11544641, r11544642, r11544643, r11544644, r11544645, r11544646, r11544647, r11544648;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11544624, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544625, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11544626);
        mpfr_init(r11544627);
        mpfr_init(r11544628);
        mpfr_init_set_str(r11544629, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11544630);
        mpfr_init(r11544631);
        mpfr_init(r11544632);
        mpfr_init_set_str(r11544633, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11544634);
        mpfr_init(r11544635);
        mpfr_init(r11544636);
        mpfr_init_set_str(r11544637, "0.625", 10, MPFR_RNDN);
        mpfr_init(r11544638);
        mpfr_init(r11544639);
        mpfr_init(r11544640);
        mpfr_init_set_str(r11544641, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11544642);
        mpfr_init(r11544643);
        mpfr_init(r11544644);
        mpfr_init_set_str(r11544645, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11544646);
        mpfr_init(r11544647);
        mpfr_init(r11544648);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11544626, x, MPFR_RNDN);
        mpfr_mul(r11544627, r11544625, r11544626, MPFR_RNDN);
        mpfr_add(r11544628, r11544624, r11544627, MPFR_RNDN);
        ;
        mpfr_mul(r11544630, r11544626, r11544626, MPFR_RNDN);
        mpfr_mul(r11544631, r11544629, r11544630, MPFR_RNDN);
        mpfr_add(r11544632, r11544628, r11544631, MPFR_RNDN);
        ;
        mpfr_mul(r11544634, r11544630, r11544626, MPFR_RNDN);
        mpfr_mul(r11544635, r11544633, r11544634, MPFR_RNDN);
        mpfr_add(r11544636, r11544632, r11544635, MPFR_RNDN);
        ;
        mpfr_mul(r11544638, r11544634, r11544626, MPFR_RNDN);
        mpfr_mul(r11544639, r11544637, r11544638, MPFR_RNDN);
        mpfr_add(r11544640, r11544636, r11544639, MPFR_RNDN);
        ;
        mpfr_mul(r11544642, r11544638, r11544626, MPFR_RNDN);
        mpfr_mul(r11544643, r11544641, r11544642, MPFR_RNDN);
        mpfr_add(r11544644, r11544640, r11544643, MPFR_RNDN);
        ;
        mpfr_mul(r11544646, r11544642, r11544626, MPFR_RNDN);
        mpfr_mul(r11544647, r11544645, r11544646, MPFR_RNDN);
        mpfr_add(r11544648, r11544644, r11544647, MPFR_RNDN);
        return mpfr_get_d(r11544648, MPFR_RNDN);
}

static mpfr_t r11544649, r11544650, r11544651, r11544652, r11544653, r11544654, r11544655, r11544656, r11544657, r11544658, r11544659, r11544660, r11544661, r11544662, r11544663, r11544664, r11544665, r11544666, r11544667, r11544668, r11544669, r11544670, r11544671, r11544672, r11544673;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544649);
        mpfr_init_set_str(r11544650, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11544651);
        mpfr_init(r11544652);
        mpfr_init(r11544653);
        mpfr_init(r11544654);
        mpfr_init(r11544655);
        mpfr_init_set_str(r11544656, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11544657);
        mpfr_init_set_str(r11544658, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544659);
        mpfr_init(r11544660);
        mpfr_init_set_str(r11544661, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544662, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11544663);
        mpfr_init(r11544664);
        mpfr_init(r11544665);
        mpfr_init_set_str(r11544666, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11544667);
        mpfr_init_set_str(r11544668, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11544669);
        mpfr_init(r11544670);
        mpfr_init(r11544671);
        mpfr_init(r11544672);
        mpfr_init(r11544673);
}

double f_fm(double x) {
        mpfr_set_d(r11544649, x, MPFR_RNDN);
        ;
        mpfr_mul(r11544651, r11544650, r11544649, MPFR_RNDN);
        mpfr_mul(r11544652, r11544649, r11544651, MPFR_RNDN);
        mpfr_mul(r11544653, r11544649, r11544649, MPFR_RNDN);
        mpfr_mul(r11544654, r11544653, r11544653, MPFR_RNDN);
        mpfr_mul(r11544655, r11544652, r11544654, MPFR_RNDN);
        ;
        mpfr_mul(r11544657, r11544649, r11544656, MPFR_RNDN);
        ;
        mpfr_add(r11544659, r11544657, r11544658, MPFR_RNDN);
        mpfr_add(r11544660, r11544655, r11544659, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544663, r11544662, r11544649, MPFR_RNDN);
        mpfr_add(r11544664, r11544661, r11544663, MPFR_RNDN);
        mpfr_mul(r11544665, r11544654, r11544664, MPFR_RNDN);
        ;
        mpfr_mul(r11544667, r11544666, r11544649, MPFR_RNDN);
        ;
        mpfr_add(r11544669, r11544667, r11544668, MPFR_RNDN);
        mpfr_mul(r11544670, r11544649, r11544669, MPFR_RNDN);
        mpfr_mul(r11544671, r11544649, r11544670, MPFR_RNDN);
        mpfr_add(r11544672, r11544665, r11544671, MPFR_RNDN);
        mpfr_add(r11544673, r11544660, r11544672, MPFR_RNDN);
        return mpfr_get_d(r11544673, MPFR_RNDN);
}

static mpfr_t r11544674, r11544675, r11544676, r11544677, r11544678, r11544679, r11544680, r11544681, r11544682, r11544683, r11544684, r11544685, r11544686, r11544687, r11544688, r11544689, r11544690, r11544691, r11544692, r11544693, r11544694, r11544695, r11544696, r11544697, r11544698;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11544674);
        mpfr_init_set_str(r11544675, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11544676);
        mpfr_init(r11544677);
        mpfr_init(r11544678);
        mpfr_init(r11544679);
        mpfr_init(r11544680);
        mpfr_init_set_str(r11544681, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11544682);
        mpfr_init_set_str(r11544683, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544684);
        mpfr_init(r11544685);
        mpfr_init_set_str(r11544686, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544687, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11544688);
        mpfr_init(r11544689);
        mpfr_init(r11544690);
        mpfr_init_set_str(r11544691, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11544692);
        mpfr_init_set_str(r11544693, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11544694);
        mpfr_init(r11544695);
        mpfr_init(r11544696);
        mpfr_init(r11544697);
        mpfr_init(r11544698);
}

double f_dm(double x) {
        mpfr_set_d(r11544674, x, MPFR_RNDN);
        ;
        mpfr_mul(r11544676, r11544675, r11544674, MPFR_RNDN);
        mpfr_mul(r11544677, r11544674, r11544676, MPFR_RNDN);
        mpfr_mul(r11544678, r11544674, r11544674, MPFR_RNDN);
        mpfr_mul(r11544679, r11544678, r11544678, MPFR_RNDN);
        mpfr_mul(r11544680, r11544677, r11544679, MPFR_RNDN);
        ;
        mpfr_mul(r11544682, r11544674, r11544681, MPFR_RNDN);
        ;
        mpfr_add(r11544684, r11544682, r11544683, MPFR_RNDN);
        mpfr_add(r11544685, r11544680, r11544684, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544688, r11544687, r11544674, MPFR_RNDN);
        mpfr_add(r11544689, r11544686, r11544688, MPFR_RNDN);
        mpfr_mul(r11544690, r11544679, r11544689, MPFR_RNDN);
        ;
        mpfr_mul(r11544692, r11544691, r11544674, MPFR_RNDN);
        ;
        mpfr_add(r11544694, r11544692, r11544693, MPFR_RNDN);
        mpfr_mul(r11544695, r11544674, r11544694, MPFR_RNDN);
        mpfr_mul(r11544696, r11544674, r11544695, MPFR_RNDN);
        mpfr_add(r11544697, r11544690, r11544696, MPFR_RNDN);
        mpfr_add(r11544698, r11544685, r11544697, MPFR_RNDN);
        return mpfr_get_d(r11544698, MPFR_RNDN);
}

