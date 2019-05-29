#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r6862518 = 2.932617;
        float r6862519 = x;
        float r6862520 = r6862518 * r6862519;
        float r6862521 = -87.978516;
        float r6862522 = r6862519 * r6862519;
        float r6862523 = r6862522 * r6862519;
        float r6862524 = r6862521 * r6862523;
        float r6862525 = r6862520 + r6862524;
        float r6862526 = 747.817383;
        float r6862527 = r6862523 * r6862519;
        float r6862528 = r6862527 * r6862519;
        float r6862529 = r6862526 * r6862528;
        float r6862530 = r6862525 + r6862529;
        float r6862531 = -2706.386719;
        float r6862532 = r6862528 * r6862519;
        float r6862533 = r6862532 * r6862519;
        float r6862534 = r6862531 * r6862533;
        float r6862535 = r6862530 + r6862534;
        float r6862536 = 4736.176758;
        float r6862537 = r6862533 * r6862519;
        float r6862538 = r6862537 * r6862519;
        float r6862539 = r6862536 * r6862538;
        float r6862540 = r6862535 + r6862539;
        float r6862541 = -3961.166016;
        float r6862542 = r6862538 * r6862519;
        float r6862543 = r6862542 * r6862519;
        float r6862544 = r6862541 * r6862543;
        float r6862545 = r6862540 + r6862544;
        float r6862546 = 1269.604492;
        float r6862547 = r6862543 * r6862519;
        float r6862548 = r6862547 * r6862519;
        float r6862549 = r6862546 * r6862548;
        float r6862550 = r6862545 + r6862549;
        return r6862550;
}

double f_id(double x) {
        double r6862551 = 2.932617;
        double r6862552 = x;
        double r6862553 = r6862551 * r6862552;
        double r6862554 = -87.978516;
        double r6862555 = r6862552 * r6862552;
        double r6862556 = r6862555 * r6862552;
        double r6862557 = r6862554 * r6862556;
        double r6862558 = r6862553 + r6862557;
        double r6862559 = 747.817383;
        double r6862560 = r6862556 * r6862552;
        double r6862561 = r6862560 * r6862552;
        double r6862562 = r6862559 * r6862561;
        double r6862563 = r6862558 + r6862562;
        double r6862564 = -2706.386719;
        double r6862565 = r6862561 * r6862552;
        double r6862566 = r6862565 * r6862552;
        double r6862567 = r6862564 * r6862566;
        double r6862568 = r6862563 + r6862567;
        double r6862569 = 4736.176758;
        double r6862570 = r6862566 * r6862552;
        double r6862571 = r6862570 * r6862552;
        double r6862572 = r6862569 * r6862571;
        double r6862573 = r6862568 + r6862572;
        double r6862574 = -3961.166016;
        double r6862575 = r6862571 * r6862552;
        double r6862576 = r6862575 * r6862552;
        double r6862577 = r6862574 * r6862576;
        double r6862578 = r6862573 + r6862577;
        double r6862579 = 1269.604492;
        double r6862580 = r6862576 * r6862552;
        double r6862581 = r6862580 * r6862552;
        double r6862582 = r6862579 * r6862581;
        double r6862583 = r6862578 + r6862582;
        return r6862583;
}


double f_of(float x) {
        float r6862584 = x;
        float r6862585 = r6862584 * r6862584;
        float r6862586 = 3;
        float r6862587 = pow(r6862585, r6862586);
        float r6862588 = r6862584 * r6862587;
        float r6862589 = -2706.386719;
        float r6862590 = 4736.176758;
        float r6862591 = r6862585 * r6862590;
        float r6862592 = r6862589 + r6862591;
        float r6862593 = r6862588 * r6862592;
        float r6862594 = 747.817383;
        float r6862595 = r6862584 * r6862594;
        float r6862596 = r6862595 * r6862585;
        float r6862597 = -87.978516;
        float r6862598 = r6862597 * r6862584;
        float r6862599 = r6862596 + r6862598;
        float r6862600 = r6862585 * r6862599;
        float r6862601 = 2.932617;
        float r6862602 = r6862584 * r6862601;
        float r6862603 = 13;
        float r6862604 = pow(r6862584, r6862603);
        float r6862605 = 1269.604492;
        float r6862606 = r6862604 * r6862605;
        float r6862607 = 3961.166016;
        float r6862608 = 11;
        float r6862609 = pow(r6862584, r6862608);
        float r6862610 = r6862607 * r6862609;
        float r6862611 = r6862606 - r6862610;
        float r6862612 = r6862602 + r6862611;
        float r6862613 = r6862600 + r6862612;
        float r6862614 = r6862593 + r6862613;
        return r6862614;
}

double f_od(double x) {
        double r6862615 = x;
        double r6862616 = r6862615 * r6862615;
        double r6862617 = 3;
        double r6862618 = pow(r6862616, r6862617);
        double r6862619 = r6862615 * r6862618;
        double r6862620 = -2706.386719;
        double r6862621 = 4736.176758;
        double r6862622 = r6862616 * r6862621;
        double r6862623 = r6862620 + r6862622;
        double r6862624 = r6862619 * r6862623;
        double r6862625 = 747.817383;
        double r6862626 = r6862615 * r6862625;
        double r6862627 = r6862626 * r6862616;
        double r6862628 = -87.978516;
        double r6862629 = r6862628 * r6862615;
        double r6862630 = r6862627 + r6862629;
        double r6862631 = r6862616 * r6862630;
        double r6862632 = 2.932617;
        double r6862633 = r6862615 * r6862632;
        double r6862634 = 13;
        double r6862635 = pow(r6862615, r6862634);
        double r6862636 = 1269.604492;
        double r6862637 = r6862635 * r6862636;
        double r6862638 = 3961.166016;
        double r6862639 = 11;
        double r6862640 = pow(r6862615, r6862639);
        double r6862641 = r6862638 * r6862640;
        double r6862642 = r6862637 - r6862641;
        double r6862643 = r6862633 + r6862642;
        double r6862644 = r6862631 + r6862643;
        double r6862645 = r6862624 + r6862644;
        return r6862645;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6862646, r6862647, r6862648, r6862649, r6862650, r6862651, r6862652, r6862653, r6862654, r6862655, r6862656, r6862657, r6862658, r6862659, r6862660, r6862661, r6862662, r6862663, r6862664, r6862665, r6862666, r6862667, r6862668, r6862669, r6862670, r6862671, r6862672, r6862673, r6862674, r6862675, r6862676, r6862677, r6862678;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6862646, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6862647);
        mpfr_init(r6862648);
        mpfr_init_set_str(r6862649, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6862650);
        mpfr_init(r6862651);
        mpfr_init(r6862652);
        mpfr_init(r6862653);
        mpfr_init_set_str(r6862654, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6862655);
        mpfr_init(r6862656);
        mpfr_init(r6862657);
        mpfr_init(r6862658);
        mpfr_init_set_str(r6862659, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r6862660);
        mpfr_init(r6862661);
        mpfr_init(r6862662);
        mpfr_init(r6862663);
        mpfr_init_set_str(r6862664, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6862665);
        mpfr_init(r6862666);
        mpfr_init(r6862667);
        mpfr_init(r6862668);
        mpfr_init_set_str(r6862669, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6862670);
        mpfr_init(r6862671);
        mpfr_init(r6862672);
        mpfr_init(r6862673);
        mpfr_init_set_str(r6862674, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6862675);
        mpfr_init(r6862676);
        mpfr_init(r6862677);
        mpfr_init(r6862678);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6862647, x, MPFR_RNDN);
        mpfr_mul(r6862648, r6862646, r6862647, MPFR_RNDN);
        ;
        mpfr_mul(r6862650, r6862647, r6862647, MPFR_RNDN);
        mpfr_mul(r6862651, r6862650, r6862647, MPFR_RNDN);
        mpfr_mul(r6862652, r6862649, r6862651, MPFR_RNDN);
        mpfr_add(r6862653, r6862648, r6862652, MPFR_RNDN);
        ;
        mpfr_mul(r6862655, r6862651, r6862647, MPFR_RNDN);
        mpfr_mul(r6862656, r6862655, r6862647, MPFR_RNDN);
        mpfr_mul(r6862657, r6862654, r6862656, MPFR_RNDN);
        mpfr_add(r6862658, r6862653, r6862657, MPFR_RNDN);
        ;
        mpfr_mul(r6862660, r6862656, r6862647, MPFR_RNDN);
        mpfr_mul(r6862661, r6862660, r6862647, MPFR_RNDN);
        mpfr_mul(r6862662, r6862659, r6862661, MPFR_RNDN);
        mpfr_add(r6862663, r6862658, r6862662, MPFR_RNDN);
        ;
        mpfr_mul(r6862665, r6862661, r6862647, MPFR_RNDN);
        mpfr_mul(r6862666, r6862665, r6862647, MPFR_RNDN);
        mpfr_mul(r6862667, r6862664, r6862666, MPFR_RNDN);
        mpfr_add(r6862668, r6862663, r6862667, MPFR_RNDN);
        ;
        mpfr_mul(r6862670, r6862666, r6862647, MPFR_RNDN);
        mpfr_mul(r6862671, r6862670, r6862647, MPFR_RNDN);
        mpfr_mul(r6862672, r6862669, r6862671, MPFR_RNDN);
        mpfr_add(r6862673, r6862668, r6862672, MPFR_RNDN);
        ;
        mpfr_mul(r6862675, r6862671, r6862647, MPFR_RNDN);
        mpfr_mul(r6862676, r6862675, r6862647, MPFR_RNDN);
        mpfr_mul(r6862677, r6862674, r6862676, MPFR_RNDN);
        mpfr_add(r6862678, r6862673, r6862677, MPFR_RNDN);
        return mpfr_get_d(r6862678, MPFR_RNDN);
}

static mpfr_t r6862679, r6862680, r6862681, r6862682, r6862683, r6862684, r6862685, r6862686, r6862687, r6862688, r6862689, r6862690, r6862691, r6862692, r6862693, r6862694, r6862695, r6862696, r6862697, r6862698, r6862699, r6862700, r6862701, r6862702, r6862703, r6862704, r6862705, r6862706, r6862707, r6862708, r6862709;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6862679);
        mpfr_init(r6862680);
        mpfr_init_set_str(r6862681, "3", 10, MPFR_RNDN);
        mpfr_init(r6862682);
        mpfr_init(r6862683);
        mpfr_init_set_str(r6862684, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862685, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6862686);
        mpfr_init(r6862687);
        mpfr_init(r6862688);
        mpfr_init_set_str(r6862689, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6862690);
        mpfr_init(r6862691);
        mpfr_init_set_str(r6862692, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6862693);
        mpfr_init(r6862694);
        mpfr_init(r6862695);
        mpfr_init_set_str(r6862696, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6862697);
        mpfr_init_set_str(r6862698, "13", 10, MPFR_RNDN);
        mpfr_init(r6862699);
        mpfr_init_set_str(r6862700, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6862701);
        mpfr_init_set_str(r6862702, "3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862703, "11", 10, MPFR_RNDN);
        mpfr_init(r6862704);
        mpfr_init(r6862705);
        mpfr_init(r6862706);
        mpfr_init(r6862707);
        mpfr_init(r6862708);
        mpfr_init(r6862709);
}

double f_fm(double x) {
        mpfr_set_d(r6862679, x, MPFR_RNDN);
        mpfr_mul(r6862680, r6862679, r6862679, MPFR_RNDN);
        ;
        mpfr_pow(r6862682, r6862680, r6862681, MPFR_RNDN);
        mpfr_mul(r6862683, r6862679, r6862682, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6862686, r6862680, r6862685, MPFR_RNDN);
        mpfr_add(r6862687, r6862684, r6862686, MPFR_RNDN);
        mpfr_mul(r6862688, r6862683, r6862687, MPFR_RNDN);
        ;
        mpfr_mul(r6862690, r6862679, r6862689, MPFR_RNDN);
        mpfr_mul(r6862691, r6862690, r6862680, MPFR_RNDN);
        ;
        mpfr_mul(r6862693, r6862692, r6862679, MPFR_RNDN);
        mpfr_add(r6862694, r6862691, r6862693, MPFR_RNDN);
        mpfr_mul(r6862695, r6862680, r6862694, MPFR_RNDN);
        ;
        mpfr_mul(r6862697, r6862679, r6862696, MPFR_RNDN);
        ;
        mpfr_pow(r6862699, r6862679, r6862698, MPFR_RNDN);
        ;
        mpfr_mul(r6862701, r6862699, r6862700, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6862704, r6862679, r6862703, MPFR_RNDN);
        mpfr_mul(r6862705, r6862702, r6862704, MPFR_RNDN);
        mpfr_sub(r6862706, r6862701, r6862705, MPFR_RNDN);
        mpfr_add(r6862707, r6862697, r6862706, MPFR_RNDN);
        mpfr_add(r6862708, r6862695, r6862707, MPFR_RNDN);
        mpfr_add(r6862709, r6862688, r6862708, MPFR_RNDN);
        return mpfr_get_d(r6862709, MPFR_RNDN);
}

static mpfr_t r6862710, r6862711, r6862712, r6862713, r6862714, r6862715, r6862716, r6862717, r6862718, r6862719, r6862720, r6862721, r6862722, r6862723, r6862724, r6862725, r6862726, r6862727, r6862728, r6862729, r6862730, r6862731, r6862732, r6862733, r6862734, r6862735, r6862736, r6862737, r6862738, r6862739, r6862740;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6862710);
        mpfr_init(r6862711);
        mpfr_init_set_str(r6862712, "3", 10, MPFR_RNDN);
        mpfr_init(r6862713);
        mpfr_init(r6862714);
        mpfr_init_set_str(r6862715, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862716, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6862717);
        mpfr_init(r6862718);
        mpfr_init(r6862719);
        mpfr_init_set_str(r6862720, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6862721);
        mpfr_init(r6862722);
        mpfr_init_set_str(r6862723, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6862724);
        mpfr_init(r6862725);
        mpfr_init(r6862726);
        mpfr_init_set_str(r6862727, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6862728);
        mpfr_init_set_str(r6862729, "13", 10, MPFR_RNDN);
        mpfr_init(r6862730);
        mpfr_init_set_str(r6862731, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6862732);
        mpfr_init_set_str(r6862733, "3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r6862734, "11", 10, MPFR_RNDN);
        mpfr_init(r6862735);
        mpfr_init(r6862736);
        mpfr_init(r6862737);
        mpfr_init(r6862738);
        mpfr_init(r6862739);
        mpfr_init(r6862740);
}

double f_dm(double x) {
        mpfr_set_d(r6862710, x, MPFR_RNDN);
        mpfr_mul(r6862711, r6862710, r6862710, MPFR_RNDN);
        ;
        mpfr_pow(r6862713, r6862711, r6862712, MPFR_RNDN);
        mpfr_mul(r6862714, r6862710, r6862713, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6862717, r6862711, r6862716, MPFR_RNDN);
        mpfr_add(r6862718, r6862715, r6862717, MPFR_RNDN);
        mpfr_mul(r6862719, r6862714, r6862718, MPFR_RNDN);
        ;
        mpfr_mul(r6862721, r6862710, r6862720, MPFR_RNDN);
        mpfr_mul(r6862722, r6862721, r6862711, MPFR_RNDN);
        ;
        mpfr_mul(r6862724, r6862723, r6862710, MPFR_RNDN);
        mpfr_add(r6862725, r6862722, r6862724, MPFR_RNDN);
        mpfr_mul(r6862726, r6862711, r6862725, MPFR_RNDN);
        ;
        mpfr_mul(r6862728, r6862710, r6862727, MPFR_RNDN);
        ;
        mpfr_pow(r6862730, r6862710, r6862729, MPFR_RNDN);
        ;
        mpfr_mul(r6862732, r6862730, r6862731, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6862735, r6862710, r6862734, MPFR_RNDN);
        mpfr_mul(r6862736, r6862733, r6862735, MPFR_RNDN);
        mpfr_sub(r6862737, r6862732, r6862736, MPFR_RNDN);
        mpfr_add(r6862738, r6862728, r6862737, MPFR_RNDN);
        mpfr_add(r6862739, r6862726, r6862738, MPFR_RNDN);
        mpfr_add(r6862740, r6862719, r6862739, MPFR_RNDN);
        return mpfr_get_d(r6862740, MPFR_RNDN);
}

