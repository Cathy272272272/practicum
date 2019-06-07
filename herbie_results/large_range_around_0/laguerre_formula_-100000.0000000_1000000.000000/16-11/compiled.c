#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r10219526 = 1.0;
        float r10219527 = -11.0;
        float r10219528 = x;
        float r10219529 = r10219527 * r10219528;
        float r10219530 = r10219526 + r10219529;
        float r10219531 = 27.5;
        float r10219532 = r10219528 * r10219528;
        float r10219533 = r10219531 * r10219532;
        float r10219534 = r10219530 + r10219533;
        float r10219535 = -27.5;
        float r10219536 = r10219532 * r10219528;
        float r10219537 = r10219535 * r10219536;
        float r10219538 = r10219534 + r10219537;
        float r10219539 = 13.75;
        float r10219540 = r10219536 * r10219528;
        float r10219541 = r10219539 * r10219540;
        float r10219542 = r10219538 + r10219541;
        float r10219543 = -3.85;
        float r10219544 = r10219540 * r10219528;
        float r10219545 = r10219543 * r10219544;
        float r10219546 = r10219542 + r10219545;
        float r10219547 = 0.641667;
        float r10219548 = r10219544 * r10219528;
        float r10219549 = r10219547 * r10219548;
        float r10219550 = r10219546 + r10219549;
        float r10219551 = -0.065476;
        float r10219552 = r10219548 * r10219528;
        float r10219553 = r10219551 * r10219552;
        float r10219554 = r10219550 + r10219553;
        float r10219555 = 0.004092;
        float r10219556 = r10219552 * r10219528;
        float r10219557 = r10219555 * r10219556;
        float r10219558 = r10219554 + r10219557;
        float r10219559 = -0.000152;
        float r10219560 = r10219556 * r10219528;
        float r10219561 = r10219559 * r10219560;
        float r10219562 = r10219558 + r10219561;
        float r10219563 = 3e-06;
        float r10219564 = r10219560 * r10219528;
        float r10219565 = r10219563 * r10219564;
        float r10219566 = r10219562 + r10219565;
        return r10219566;
}

double f_id(double x) {
        double r10219567 = 1.0;
        double r10219568 = -11.0;
        double r10219569 = x;
        double r10219570 = r10219568 * r10219569;
        double r10219571 = r10219567 + r10219570;
        double r10219572 = 27.5;
        double r10219573 = r10219569 * r10219569;
        double r10219574 = r10219572 * r10219573;
        double r10219575 = r10219571 + r10219574;
        double r10219576 = -27.5;
        double r10219577 = r10219573 * r10219569;
        double r10219578 = r10219576 * r10219577;
        double r10219579 = r10219575 + r10219578;
        double r10219580 = 13.75;
        double r10219581 = r10219577 * r10219569;
        double r10219582 = r10219580 * r10219581;
        double r10219583 = r10219579 + r10219582;
        double r10219584 = -3.85;
        double r10219585 = r10219581 * r10219569;
        double r10219586 = r10219584 * r10219585;
        double r10219587 = r10219583 + r10219586;
        double r10219588 = 0.641667;
        double r10219589 = r10219585 * r10219569;
        double r10219590 = r10219588 * r10219589;
        double r10219591 = r10219587 + r10219590;
        double r10219592 = -0.065476;
        double r10219593 = r10219589 * r10219569;
        double r10219594 = r10219592 * r10219593;
        double r10219595 = r10219591 + r10219594;
        double r10219596 = 0.004092;
        double r10219597 = r10219593 * r10219569;
        double r10219598 = r10219596 * r10219597;
        double r10219599 = r10219595 + r10219598;
        double r10219600 = -0.000152;
        double r10219601 = r10219597 * r10219569;
        double r10219602 = r10219600 * r10219601;
        double r10219603 = r10219599 + r10219602;
        double r10219604 = 3e-06;
        double r10219605 = r10219601 * r10219569;
        double r10219606 = r10219604 * r10219605;
        double r10219607 = r10219603 + r10219606;
        return r10219607;
}


double f_of(float x) {
        float r10219608 = 1.0;
        float r10219609 = -11.0;
        float r10219610 = x;
        float r10219611 = r10219609 * r10219610;
        float r10219612 = r10219608 + r10219611;
        float r10219613 = 27.5;
        float r10219614 = r10219610 * r10219610;
        float r10219615 = r10219613 * r10219614;
        float r10219616 = r10219612 + r10219615;
        float r10219617 = -27.5;
        float r10219618 = r10219614 * r10219610;
        float r10219619 = r10219617 * r10219618;
        float r10219620 = r10219616 + r10219619;
        float r10219621 = 13.75;
        float r10219622 = r10219618 * r10219610;
        float r10219623 = r10219621 * r10219622;
        float r10219624 = r10219620 + r10219623;
        float r10219625 = -3.85;
        float r10219626 = r10219622 * r10219610;
        float r10219627 = r10219625 * r10219626;
        float r10219628 = r10219624 + r10219627;
        float r10219629 = 0.641667;
        float r10219630 = r10219626 * r10219610;
        float r10219631 = r10219629 * r10219630;
        float r10219632 = r10219628 + r10219631;
        float r10219633 = -0.065476;
        float r10219634 = r10219630 * r10219610;
        float r10219635 = r10219633 * r10219634;
        float r10219636 = r10219632 + r10219635;
        float r10219637 = 0.004092;
        float r10219638 = r10219634 * r10219610;
        float r10219639 = r10219637 * r10219638;
        float r10219640 = r10219636 + r10219639;
        float r10219641 = -0.000152;
        float r10219642 = r10219638 * r10219610;
        float r10219643 = r10219641 * r10219642;
        float r10219644 = r10219640 + r10219643;
        float r10219645 = 3e-06;
        float r10219646 = r10219642 * r10219610;
        float r10219647 = r10219645 * r10219646;
        float r10219648 = r10219644 + r10219647;
        return r10219648;
}

double f_od(double x) {
        double r10219649 = 1.0;
        double r10219650 = -11.0;
        double r10219651 = x;
        double r10219652 = r10219650 * r10219651;
        double r10219653 = r10219649 + r10219652;
        double r10219654 = 27.5;
        double r10219655 = r10219651 * r10219651;
        double r10219656 = r10219654 * r10219655;
        double r10219657 = r10219653 + r10219656;
        double r10219658 = -27.5;
        double r10219659 = r10219655 * r10219651;
        double r10219660 = r10219658 * r10219659;
        double r10219661 = r10219657 + r10219660;
        double r10219662 = 13.75;
        double r10219663 = r10219659 * r10219651;
        double r10219664 = r10219662 * r10219663;
        double r10219665 = r10219661 + r10219664;
        double r10219666 = -3.85;
        double r10219667 = r10219663 * r10219651;
        double r10219668 = r10219666 * r10219667;
        double r10219669 = r10219665 + r10219668;
        double r10219670 = 0.641667;
        double r10219671 = r10219667 * r10219651;
        double r10219672 = r10219670 * r10219671;
        double r10219673 = r10219669 + r10219672;
        double r10219674 = -0.065476;
        double r10219675 = r10219671 * r10219651;
        double r10219676 = r10219674 * r10219675;
        double r10219677 = r10219673 + r10219676;
        double r10219678 = 0.004092;
        double r10219679 = r10219675 * r10219651;
        double r10219680 = r10219678 * r10219679;
        double r10219681 = r10219677 + r10219680;
        double r10219682 = -0.000152;
        double r10219683 = r10219679 * r10219651;
        double r10219684 = r10219682 * r10219683;
        double r10219685 = r10219681 + r10219684;
        double r10219686 = 3e-06;
        double r10219687 = r10219683 * r10219651;
        double r10219688 = r10219686 * r10219687;
        double r10219689 = r10219685 + r10219688;
        return r10219689;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10219690, r10219691, r10219692, r10219693, r10219694, r10219695, r10219696, r10219697, r10219698, r10219699, r10219700, r10219701, r10219702, r10219703, r10219704, r10219705, r10219706, r10219707, r10219708, r10219709, r10219710, r10219711, r10219712, r10219713, r10219714, r10219715, r10219716, r10219717, r10219718, r10219719, r10219720, r10219721, r10219722, r10219723, r10219724, r10219725, r10219726, r10219727, r10219728, r10219729, r10219730;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10219690, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219691, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r10219692);
        mpfr_init(r10219693);
        mpfr_init(r10219694);
        mpfr_init_set_str(r10219695, "27.5", 10, MPFR_RNDN);
        mpfr_init(r10219696);
        mpfr_init(r10219697);
        mpfr_init(r10219698);
        mpfr_init_set_str(r10219699, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r10219700);
        mpfr_init(r10219701);
        mpfr_init(r10219702);
        mpfr_init_set_str(r10219703, "13.75", 10, MPFR_RNDN);
        mpfr_init(r10219704);
        mpfr_init(r10219705);
        mpfr_init(r10219706);
        mpfr_init_set_str(r10219707, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r10219708);
        mpfr_init(r10219709);
        mpfr_init(r10219710);
        mpfr_init_set_str(r10219711, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r10219712);
        mpfr_init(r10219713);
        mpfr_init(r10219714);
        mpfr_init_set_str(r10219715, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r10219716);
        mpfr_init(r10219717);
        mpfr_init(r10219718);
        mpfr_init_set_str(r10219719, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r10219720);
        mpfr_init(r10219721);
        mpfr_init(r10219722);
        mpfr_init_set_str(r10219723, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r10219724);
        mpfr_init(r10219725);
        mpfr_init(r10219726);
        mpfr_init_set_str(r10219727, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r10219728);
        mpfr_init(r10219729);
        mpfr_init(r10219730);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10219692, x, MPFR_RNDN);
        mpfr_mul(r10219693, r10219691, r10219692, MPFR_RNDN);
        mpfr_add(r10219694, r10219690, r10219693, MPFR_RNDN);
        ;
        mpfr_mul(r10219696, r10219692, r10219692, MPFR_RNDN);
        mpfr_mul(r10219697, r10219695, r10219696, MPFR_RNDN);
        mpfr_add(r10219698, r10219694, r10219697, MPFR_RNDN);
        ;
        mpfr_mul(r10219700, r10219696, r10219692, MPFR_RNDN);
        mpfr_mul(r10219701, r10219699, r10219700, MPFR_RNDN);
        mpfr_add(r10219702, r10219698, r10219701, MPFR_RNDN);
        ;
        mpfr_mul(r10219704, r10219700, r10219692, MPFR_RNDN);
        mpfr_mul(r10219705, r10219703, r10219704, MPFR_RNDN);
        mpfr_add(r10219706, r10219702, r10219705, MPFR_RNDN);
        ;
        mpfr_mul(r10219708, r10219704, r10219692, MPFR_RNDN);
        mpfr_mul(r10219709, r10219707, r10219708, MPFR_RNDN);
        mpfr_add(r10219710, r10219706, r10219709, MPFR_RNDN);
        ;
        mpfr_mul(r10219712, r10219708, r10219692, MPFR_RNDN);
        mpfr_mul(r10219713, r10219711, r10219712, MPFR_RNDN);
        mpfr_add(r10219714, r10219710, r10219713, MPFR_RNDN);
        ;
        mpfr_mul(r10219716, r10219712, r10219692, MPFR_RNDN);
        mpfr_mul(r10219717, r10219715, r10219716, MPFR_RNDN);
        mpfr_add(r10219718, r10219714, r10219717, MPFR_RNDN);
        ;
        mpfr_mul(r10219720, r10219716, r10219692, MPFR_RNDN);
        mpfr_mul(r10219721, r10219719, r10219720, MPFR_RNDN);
        mpfr_add(r10219722, r10219718, r10219721, MPFR_RNDN);
        ;
        mpfr_mul(r10219724, r10219720, r10219692, MPFR_RNDN);
        mpfr_mul(r10219725, r10219723, r10219724, MPFR_RNDN);
        mpfr_add(r10219726, r10219722, r10219725, MPFR_RNDN);
        ;
        mpfr_mul(r10219728, r10219724, r10219692, MPFR_RNDN);
        mpfr_mul(r10219729, r10219727, r10219728, MPFR_RNDN);
        mpfr_add(r10219730, r10219726, r10219729, MPFR_RNDN);
        return mpfr_get_d(r10219730, MPFR_RNDN);
}

static mpfr_t r10219731, r10219732, r10219733, r10219734, r10219735, r10219736, r10219737, r10219738, r10219739, r10219740, r10219741, r10219742, r10219743, r10219744, r10219745, r10219746, r10219747, r10219748, r10219749, r10219750, r10219751, r10219752, r10219753, r10219754, r10219755, r10219756, r10219757, r10219758, r10219759, r10219760, r10219761, r10219762, r10219763, r10219764, r10219765, r10219766, r10219767, r10219768, r10219769, r10219770, r10219771;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10219731, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219732, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r10219733);
        mpfr_init(r10219734);
        mpfr_init(r10219735);
        mpfr_init_set_str(r10219736, "27.5", 10, MPFR_RNDN);
        mpfr_init(r10219737);
        mpfr_init(r10219738);
        mpfr_init(r10219739);
        mpfr_init_set_str(r10219740, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r10219741);
        mpfr_init(r10219742);
        mpfr_init(r10219743);
        mpfr_init_set_str(r10219744, "13.75", 10, MPFR_RNDN);
        mpfr_init(r10219745);
        mpfr_init(r10219746);
        mpfr_init(r10219747);
        mpfr_init_set_str(r10219748, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r10219749);
        mpfr_init(r10219750);
        mpfr_init(r10219751);
        mpfr_init_set_str(r10219752, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r10219753);
        mpfr_init(r10219754);
        mpfr_init(r10219755);
        mpfr_init_set_str(r10219756, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r10219757);
        mpfr_init(r10219758);
        mpfr_init(r10219759);
        mpfr_init_set_str(r10219760, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r10219761);
        mpfr_init(r10219762);
        mpfr_init(r10219763);
        mpfr_init_set_str(r10219764, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r10219765);
        mpfr_init(r10219766);
        mpfr_init(r10219767);
        mpfr_init_set_str(r10219768, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r10219769);
        mpfr_init(r10219770);
        mpfr_init(r10219771);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10219733, x, MPFR_RNDN);
        mpfr_mul(r10219734, r10219732, r10219733, MPFR_RNDN);
        mpfr_add(r10219735, r10219731, r10219734, MPFR_RNDN);
        ;
        mpfr_mul(r10219737, r10219733, r10219733, MPFR_RNDN);
        mpfr_mul(r10219738, r10219736, r10219737, MPFR_RNDN);
        mpfr_add(r10219739, r10219735, r10219738, MPFR_RNDN);
        ;
        mpfr_mul(r10219741, r10219737, r10219733, MPFR_RNDN);
        mpfr_mul(r10219742, r10219740, r10219741, MPFR_RNDN);
        mpfr_add(r10219743, r10219739, r10219742, MPFR_RNDN);
        ;
        mpfr_mul(r10219745, r10219741, r10219733, MPFR_RNDN);
        mpfr_mul(r10219746, r10219744, r10219745, MPFR_RNDN);
        mpfr_add(r10219747, r10219743, r10219746, MPFR_RNDN);
        ;
        mpfr_mul(r10219749, r10219745, r10219733, MPFR_RNDN);
        mpfr_mul(r10219750, r10219748, r10219749, MPFR_RNDN);
        mpfr_add(r10219751, r10219747, r10219750, MPFR_RNDN);
        ;
        mpfr_mul(r10219753, r10219749, r10219733, MPFR_RNDN);
        mpfr_mul(r10219754, r10219752, r10219753, MPFR_RNDN);
        mpfr_add(r10219755, r10219751, r10219754, MPFR_RNDN);
        ;
        mpfr_mul(r10219757, r10219753, r10219733, MPFR_RNDN);
        mpfr_mul(r10219758, r10219756, r10219757, MPFR_RNDN);
        mpfr_add(r10219759, r10219755, r10219758, MPFR_RNDN);
        ;
        mpfr_mul(r10219761, r10219757, r10219733, MPFR_RNDN);
        mpfr_mul(r10219762, r10219760, r10219761, MPFR_RNDN);
        mpfr_add(r10219763, r10219759, r10219762, MPFR_RNDN);
        ;
        mpfr_mul(r10219765, r10219761, r10219733, MPFR_RNDN);
        mpfr_mul(r10219766, r10219764, r10219765, MPFR_RNDN);
        mpfr_add(r10219767, r10219763, r10219766, MPFR_RNDN);
        ;
        mpfr_mul(r10219769, r10219765, r10219733, MPFR_RNDN);
        mpfr_mul(r10219770, r10219768, r10219769, MPFR_RNDN);
        mpfr_add(r10219771, r10219767, r10219770, MPFR_RNDN);
        return mpfr_get_d(r10219771, MPFR_RNDN);
}

static mpfr_t r10219772, r10219773, r10219774, r10219775, r10219776, r10219777, r10219778, r10219779, r10219780, r10219781, r10219782, r10219783, r10219784, r10219785, r10219786, r10219787, r10219788, r10219789, r10219790, r10219791, r10219792, r10219793, r10219794, r10219795, r10219796, r10219797, r10219798, r10219799, r10219800, r10219801, r10219802, r10219803, r10219804, r10219805, r10219806, r10219807, r10219808, r10219809, r10219810, r10219811, r10219812;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10219772, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10219773, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r10219774);
        mpfr_init(r10219775);
        mpfr_init(r10219776);
        mpfr_init_set_str(r10219777, "27.5", 10, MPFR_RNDN);
        mpfr_init(r10219778);
        mpfr_init(r10219779);
        mpfr_init(r10219780);
        mpfr_init_set_str(r10219781, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r10219782);
        mpfr_init(r10219783);
        mpfr_init(r10219784);
        mpfr_init_set_str(r10219785, "13.75", 10, MPFR_RNDN);
        mpfr_init(r10219786);
        mpfr_init(r10219787);
        mpfr_init(r10219788);
        mpfr_init_set_str(r10219789, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r10219790);
        mpfr_init(r10219791);
        mpfr_init(r10219792);
        mpfr_init_set_str(r10219793, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r10219794);
        mpfr_init(r10219795);
        mpfr_init(r10219796);
        mpfr_init_set_str(r10219797, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r10219798);
        mpfr_init(r10219799);
        mpfr_init(r10219800);
        mpfr_init_set_str(r10219801, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r10219802);
        mpfr_init(r10219803);
        mpfr_init(r10219804);
        mpfr_init_set_str(r10219805, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r10219806);
        mpfr_init(r10219807);
        mpfr_init(r10219808);
        mpfr_init_set_str(r10219809, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r10219810);
        mpfr_init(r10219811);
        mpfr_init(r10219812);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10219774, x, MPFR_RNDN);
        mpfr_mul(r10219775, r10219773, r10219774, MPFR_RNDN);
        mpfr_add(r10219776, r10219772, r10219775, MPFR_RNDN);
        ;
        mpfr_mul(r10219778, r10219774, r10219774, MPFR_RNDN);
        mpfr_mul(r10219779, r10219777, r10219778, MPFR_RNDN);
        mpfr_add(r10219780, r10219776, r10219779, MPFR_RNDN);
        ;
        mpfr_mul(r10219782, r10219778, r10219774, MPFR_RNDN);
        mpfr_mul(r10219783, r10219781, r10219782, MPFR_RNDN);
        mpfr_add(r10219784, r10219780, r10219783, MPFR_RNDN);
        ;
        mpfr_mul(r10219786, r10219782, r10219774, MPFR_RNDN);
        mpfr_mul(r10219787, r10219785, r10219786, MPFR_RNDN);
        mpfr_add(r10219788, r10219784, r10219787, MPFR_RNDN);
        ;
        mpfr_mul(r10219790, r10219786, r10219774, MPFR_RNDN);
        mpfr_mul(r10219791, r10219789, r10219790, MPFR_RNDN);
        mpfr_add(r10219792, r10219788, r10219791, MPFR_RNDN);
        ;
        mpfr_mul(r10219794, r10219790, r10219774, MPFR_RNDN);
        mpfr_mul(r10219795, r10219793, r10219794, MPFR_RNDN);
        mpfr_add(r10219796, r10219792, r10219795, MPFR_RNDN);
        ;
        mpfr_mul(r10219798, r10219794, r10219774, MPFR_RNDN);
        mpfr_mul(r10219799, r10219797, r10219798, MPFR_RNDN);
        mpfr_add(r10219800, r10219796, r10219799, MPFR_RNDN);
        ;
        mpfr_mul(r10219802, r10219798, r10219774, MPFR_RNDN);
        mpfr_mul(r10219803, r10219801, r10219802, MPFR_RNDN);
        mpfr_add(r10219804, r10219800, r10219803, MPFR_RNDN);
        ;
        mpfr_mul(r10219806, r10219802, r10219774, MPFR_RNDN);
        mpfr_mul(r10219807, r10219805, r10219806, MPFR_RNDN);
        mpfr_add(r10219808, r10219804, r10219807, MPFR_RNDN);
        ;
        mpfr_mul(r10219810, r10219806, r10219774, MPFR_RNDN);
        mpfr_mul(r10219811, r10219809, r10219810, MPFR_RNDN);
        mpfr_add(r10219812, r10219808, r10219811, MPFR_RNDN);
        return mpfr_get_d(r10219812, MPFR_RNDN);
}
