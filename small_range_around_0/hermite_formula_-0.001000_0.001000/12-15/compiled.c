#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r3818590 = -518918400.0;
        float r3818591 = x;
        float r3818592 = r3818590 * r3818591;
        float r3818593 = 2421619200.0;
        float r3818594 = r3818591 * r3818591;
        float r3818595 = r3818594 * r3818591;
        float r3818596 = r3818593 * r3818595;
        float r3818597 = r3818592 + r3818596;
        float r3818598 = -2905943040.0;
        float r3818599 = r3818595 * r3818591;
        float r3818600 = r3818599 * r3818591;
        float r3818601 = r3818598 * r3818600;
        float r3818602 = r3818597 + r3818601;
        float r3818603 = 1383782400.0;
        float r3818604 = r3818600 * r3818591;
        float r3818605 = r3818604 * r3818591;
        float r3818606 = r3818603 * r3818605;
        float r3818607 = r3818602 + r3818606;
        float r3818608 = -307507200.0;
        float r3818609 = r3818605 * r3818591;
        float r3818610 = r3818609 * r3818591;
        float r3818611 = r3818608 * r3818610;
        float r3818612 = r3818607 + r3818611;
        float r3818613 = 33546240.0;
        float r3818614 = r3818610 * r3818591;
        float r3818615 = r3818614 * r3818591;
        float r3818616 = r3818613 * r3818615;
        float r3818617 = r3818612 + r3818616;
        float r3818618 = -1720320.0;
        float r3818619 = r3818615 * r3818591;
        float r3818620 = r3818619 * r3818591;
        float r3818621 = r3818618 * r3818620;
        float r3818622 = r3818617 + r3818621;
        float r3818623 = 32768.0;
        float r3818624 = r3818620 * r3818591;
        float r3818625 = r3818624 * r3818591;
        float r3818626 = r3818623 * r3818625;
        float r3818627 = r3818622 + r3818626;
        return r3818627;
}

double f_id(double x) {
        double r3818628 = -518918400.0;
        double r3818629 = x;
        double r3818630 = r3818628 * r3818629;
        double r3818631 = 2421619200.0;
        double r3818632 = r3818629 * r3818629;
        double r3818633 = r3818632 * r3818629;
        double r3818634 = r3818631 * r3818633;
        double r3818635 = r3818630 + r3818634;
        double r3818636 = -2905943040.0;
        double r3818637 = r3818633 * r3818629;
        double r3818638 = r3818637 * r3818629;
        double r3818639 = r3818636 * r3818638;
        double r3818640 = r3818635 + r3818639;
        double r3818641 = 1383782400.0;
        double r3818642 = r3818638 * r3818629;
        double r3818643 = r3818642 * r3818629;
        double r3818644 = r3818641 * r3818643;
        double r3818645 = r3818640 + r3818644;
        double r3818646 = -307507200.0;
        double r3818647 = r3818643 * r3818629;
        double r3818648 = r3818647 * r3818629;
        double r3818649 = r3818646 * r3818648;
        double r3818650 = r3818645 + r3818649;
        double r3818651 = 33546240.0;
        double r3818652 = r3818648 * r3818629;
        double r3818653 = r3818652 * r3818629;
        double r3818654 = r3818651 * r3818653;
        double r3818655 = r3818650 + r3818654;
        double r3818656 = -1720320.0;
        double r3818657 = r3818653 * r3818629;
        double r3818658 = r3818657 * r3818629;
        double r3818659 = r3818656 * r3818658;
        double r3818660 = r3818655 + r3818659;
        double r3818661 = 32768.0;
        double r3818662 = r3818658 * r3818629;
        double r3818663 = r3818662 * r3818629;
        double r3818664 = r3818661 * r3818663;
        double r3818665 = r3818660 + r3818664;
        return r3818665;
}


double f_of(float x) {
        float r3818666 = -518918400.0;
        float r3818667 = x;
        float r3818668 = r3818666 * r3818667;
        float r3818669 = 2421619200.0;
        float r3818670 = r3818667 * r3818667;
        float r3818671 = r3818670 * r3818667;
        float r3818672 = r3818669 * r3818671;
        float r3818673 = r3818668 + r3818672;
        float r3818674 = -2905943040.0;
        float r3818675 = r3818671 * r3818667;
        float r3818676 = r3818675 * r3818667;
        float r3818677 = r3818674 * r3818676;
        float r3818678 = r3818673 + r3818677;
        float r3818679 = 1383782400.0;
        float r3818680 = r3818676 * r3818667;
        float r3818681 = r3818680 * r3818667;
        float r3818682 = r3818679 * r3818681;
        float r3818683 = r3818678 + r3818682;
        float r3818684 = -307507200.0;
        float r3818685 = r3818681 * r3818667;
        float r3818686 = r3818685 * r3818667;
        float r3818687 = r3818684 * r3818686;
        float r3818688 = r3818683 + r3818687;
        float r3818689 = 33546240.0;
        float r3818690 = r3818686 * r3818667;
        float r3818691 = r3818690 * r3818667;
        float r3818692 = r3818689 * r3818691;
        float r3818693 = r3818688 + r3818692;
        float r3818694 = -1720320.0;
        float r3818695 = r3818691 * r3818667;
        float r3818696 = r3818695 * r3818667;
        float r3818697 = r3818694 * r3818696;
        float r3818698 = r3818693 + r3818697;
        float r3818699 = 32768.0;
        float r3818700 = r3818696 * r3818667;
        float r3818701 = r3818700 * r3818667;
        float r3818702 = r3818699 * r3818701;
        float r3818703 = r3818698 + r3818702;
        return r3818703;
}

double f_od(double x) {
        double r3818704 = -518918400.0;
        double r3818705 = x;
        double r3818706 = r3818704 * r3818705;
        double r3818707 = 2421619200.0;
        double r3818708 = r3818705 * r3818705;
        double r3818709 = r3818708 * r3818705;
        double r3818710 = r3818707 * r3818709;
        double r3818711 = r3818706 + r3818710;
        double r3818712 = -2905943040.0;
        double r3818713 = r3818709 * r3818705;
        double r3818714 = r3818713 * r3818705;
        double r3818715 = r3818712 * r3818714;
        double r3818716 = r3818711 + r3818715;
        double r3818717 = 1383782400.0;
        double r3818718 = r3818714 * r3818705;
        double r3818719 = r3818718 * r3818705;
        double r3818720 = r3818717 * r3818719;
        double r3818721 = r3818716 + r3818720;
        double r3818722 = -307507200.0;
        double r3818723 = r3818719 * r3818705;
        double r3818724 = r3818723 * r3818705;
        double r3818725 = r3818722 * r3818724;
        double r3818726 = r3818721 + r3818725;
        double r3818727 = 33546240.0;
        double r3818728 = r3818724 * r3818705;
        double r3818729 = r3818728 * r3818705;
        double r3818730 = r3818727 * r3818729;
        double r3818731 = r3818726 + r3818730;
        double r3818732 = -1720320.0;
        double r3818733 = r3818729 * r3818705;
        double r3818734 = r3818733 * r3818705;
        double r3818735 = r3818732 * r3818734;
        double r3818736 = r3818731 + r3818735;
        double r3818737 = 32768.0;
        double r3818738 = r3818734 * r3818705;
        double r3818739 = r3818738 * r3818705;
        double r3818740 = r3818737 * r3818739;
        double r3818741 = r3818736 + r3818740;
        return r3818741;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3818742, r3818743, r3818744, r3818745, r3818746, r3818747, r3818748, r3818749, r3818750, r3818751, r3818752, r3818753, r3818754, r3818755, r3818756, r3818757, r3818758, r3818759, r3818760, r3818761, r3818762, r3818763, r3818764, r3818765, r3818766, r3818767, r3818768, r3818769, r3818770, r3818771, r3818772, r3818773, r3818774, r3818775, r3818776, r3818777, r3818778, r3818779;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r3818742, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r3818743);
        mpfr_init(r3818744);
        mpfr_init_set_str(r3818745, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r3818746);
        mpfr_init(r3818747);
        mpfr_init(r3818748);
        mpfr_init(r3818749);
        mpfr_init_set_str(r3818750, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r3818751);
        mpfr_init(r3818752);
        mpfr_init(r3818753);
        mpfr_init(r3818754);
        mpfr_init_set_str(r3818755, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r3818756);
        mpfr_init(r3818757);
        mpfr_init(r3818758);
        mpfr_init(r3818759);
        mpfr_init_set_str(r3818760, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r3818761);
        mpfr_init(r3818762);
        mpfr_init(r3818763);
        mpfr_init(r3818764);
        mpfr_init_set_str(r3818765, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r3818766);
        mpfr_init(r3818767);
        mpfr_init(r3818768);
        mpfr_init(r3818769);
        mpfr_init_set_str(r3818770, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r3818771);
        mpfr_init(r3818772);
        mpfr_init(r3818773);
        mpfr_init(r3818774);
        mpfr_init_set_str(r3818775, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r3818776);
        mpfr_init(r3818777);
        mpfr_init(r3818778);
        mpfr_init(r3818779);
}

double f_im(double x) {
        ;
        mpfr_set_d(r3818743, x, MPFR_RNDN);
        mpfr_mul(r3818744, r3818742, r3818743, MPFR_RNDN);
        ;
        mpfr_mul(r3818746, r3818743, r3818743, MPFR_RNDN);
        mpfr_mul(r3818747, r3818746, r3818743, MPFR_RNDN);
        mpfr_mul(r3818748, r3818745, r3818747, MPFR_RNDN);
        mpfr_add(r3818749, r3818744, r3818748, MPFR_RNDN);
        ;
        mpfr_mul(r3818751, r3818747, r3818743, MPFR_RNDN);
        mpfr_mul(r3818752, r3818751, r3818743, MPFR_RNDN);
        mpfr_mul(r3818753, r3818750, r3818752, MPFR_RNDN);
        mpfr_add(r3818754, r3818749, r3818753, MPFR_RNDN);
        ;
        mpfr_mul(r3818756, r3818752, r3818743, MPFR_RNDN);
        mpfr_mul(r3818757, r3818756, r3818743, MPFR_RNDN);
        mpfr_mul(r3818758, r3818755, r3818757, MPFR_RNDN);
        mpfr_add(r3818759, r3818754, r3818758, MPFR_RNDN);
        ;
        mpfr_mul(r3818761, r3818757, r3818743, MPFR_RNDN);
        mpfr_mul(r3818762, r3818761, r3818743, MPFR_RNDN);
        mpfr_mul(r3818763, r3818760, r3818762, MPFR_RNDN);
        mpfr_add(r3818764, r3818759, r3818763, MPFR_RNDN);
        ;
        mpfr_mul(r3818766, r3818762, r3818743, MPFR_RNDN);
        mpfr_mul(r3818767, r3818766, r3818743, MPFR_RNDN);
        mpfr_mul(r3818768, r3818765, r3818767, MPFR_RNDN);
        mpfr_add(r3818769, r3818764, r3818768, MPFR_RNDN);
        ;
        mpfr_mul(r3818771, r3818767, r3818743, MPFR_RNDN);
        mpfr_mul(r3818772, r3818771, r3818743, MPFR_RNDN);
        mpfr_mul(r3818773, r3818770, r3818772, MPFR_RNDN);
        mpfr_add(r3818774, r3818769, r3818773, MPFR_RNDN);
        ;
        mpfr_mul(r3818776, r3818772, r3818743, MPFR_RNDN);
        mpfr_mul(r3818777, r3818776, r3818743, MPFR_RNDN);
        mpfr_mul(r3818778, r3818775, r3818777, MPFR_RNDN);
        mpfr_add(r3818779, r3818774, r3818778, MPFR_RNDN);
        return mpfr_get_d(r3818779, MPFR_RNDN);
}

static mpfr_t r3818780, r3818781, r3818782, r3818783, r3818784, r3818785, r3818786, r3818787, r3818788, r3818789, r3818790, r3818791, r3818792, r3818793, r3818794, r3818795, r3818796, r3818797, r3818798, r3818799, r3818800, r3818801, r3818802, r3818803, r3818804, r3818805, r3818806, r3818807, r3818808, r3818809, r3818810, r3818811, r3818812, r3818813, r3818814, r3818815, r3818816, r3818817;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r3818780, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r3818781);
        mpfr_init(r3818782);
        mpfr_init_set_str(r3818783, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r3818784);
        mpfr_init(r3818785);
        mpfr_init(r3818786);
        mpfr_init(r3818787);
        mpfr_init_set_str(r3818788, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r3818789);
        mpfr_init(r3818790);
        mpfr_init(r3818791);
        mpfr_init(r3818792);
        mpfr_init_set_str(r3818793, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r3818794);
        mpfr_init(r3818795);
        mpfr_init(r3818796);
        mpfr_init(r3818797);
        mpfr_init_set_str(r3818798, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r3818799);
        mpfr_init(r3818800);
        mpfr_init(r3818801);
        mpfr_init(r3818802);
        mpfr_init_set_str(r3818803, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r3818804);
        mpfr_init(r3818805);
        mpfr_init(r3818806);
        mpfr_init(r3818807);
        mpfr_init_set_str(r3818808, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r3818809);
        mpfr_init(r3818810);
        mpfr_init(r3818811);
        mpfr_init(r3818812);
        mpfr_init_set_str(r3818813, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r3818814);
        mpfr_init(r3818815);
        mpfr_init(r3818816);
        mpfr_init(r3818817);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3818781, x, MPFR_RNDN);
        mpfr_mul(r3818782, r3818780, r3818781, MPFR_RNDN);
        ;
        mpfr_mul(r3818784, r3818781, r3818781, MPFR_RNDN);
        mpfr_mul(r3818785, r3818784, r3818781, MPFR_RNDN);
        mpfr_mul(r3818786, r3818783, r3818785, MPFR_RNDN);
        mpfr_add(r3818787, r3818782, r3818786, MPFR_RNDN);
        ;
        mpfr_mul(r3818789, r3818785, r3818781, MPFR_RNDN);
        mpfr_mul(r3818790, r3818789, r3818781, MPFR_RNDN);
        mpfr_mul(r3818791, r3818788, r3818790, MPFR_RNDN);
        mpfr_add(r3818792, r3818787, r3818791, MPFR_RNDN);
        ;
        mpfr_mul(r3818794, r3818790, r3818781, MPFR_RNDN);
        mpfr_mul(r3818795, r3818794, r3818781, MPFR_RNDN);
        mpfr_mul(r3818796, r3818793, r3818795, MPFR_RNDN);
        mpfr_add(r3818797, r3818792, r3818796, MPFR_RNDN);
        ;
        mpfr_mul(r3818799, r3818795, r3818781, MPFR_RNDN);
        mpfr_mul(r3818800, r3818799, r3818781, MPFR_RNDN);
        mpfr_mul(r3818801, r3818798, r3818800, MPFR_RNDN);
        mpfr_add(r3818802, r3818797, r3818801, MPFR_RNDN);
        ;
        mpfr_mul(r3818804, r3818800, r3818781, MPFR_RNDN);
        mpfr_mul(r3818805, r3818804, r3818781, MPFR_RNDN);
        mpfr_mul(r3818806, r3818803, r3818805, MPFR_RNDN);
        mpfr_add(r3818807, r3818802, r3818806, MPFR_RNDN);
        ;
        mpfr_mul(r3818809, r3818805, r3818781, MPFR_RNDN);
        mpfr_mul(r3818810, r3818809, r3818781, MPFR_RNDN);
        mpfr_mul(r3818811, r3818808, r3818810, MPFR_RNDN);
        mpfr_add(r3818812, r3818807, r3818811, MPFR_RNDN);
        ;
        mpfr_mul(r3818814, r3818810, r3818781, MPFR_RNDN);
        mpfr_mul(r3818815, r3818814, r3818781, MPFR_RNDN);
        mpfr_mul(r3818816, r3818813, r3818815, MPFR_RNDN);
        mpfr_add(r3818817, r3818812, r3818816, MPFR_RNDN);
        return mpfr_get_d(r3818817, MPFR_RNDN);
}

static mpfr_t r3818818, r3818819, r3818820, r3818821, r3818822, r3818823, r3818824, r3818825, r3818826, r3818827, r3818828, r3818829, r3818830, r3818831, r3818832, r3818833, r3818834, r3818835, r3818836, r3818837, r3818838, r3818839, r3818840, r3818841, r3818842, r3818843, r3818844, r3818845, r3818846, r3818847, r3818848, r3818849, r3818850, r3818851, r3818852, r3818853, r3818854, r3818855;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r3818818, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r3818819);
        mpfr_init(r3818820);
        mpfr_init_set_str(r3818821, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r3818822);
        mpfr_init(r3818823);
        mpfr_init(r3818824);
        mpfr_init(r3818825);
        mpfr_init_set_str(r3818826, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r3818827);
        mpfr_init(r3818828);
        mpfr_init(r3818829);
        mpfr_init(r3818830);
        mpfr_init_set_str(r3818831, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r3818832);
        mpfr_init(r3818833);
        mpfr_init(r3818834);
        mpfr_init(r3818835);
        mpfr_init_set_str(r3818836, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r3818837);
        mpfr_init(r3818838);
        mpfr_init(r3818839);
        mpfr_init(r3818840);
        mpfr_init_set_str(r3818841, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r3818842);
        mpfr_init(r3818843);
        mpfr_init(r3818844);
        mpfr_init(r3818845);
        mpfr_init_set_str(r3818846, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r3818847);
        mpfr_init(r3818848);
        mpfr_init(r3818849);
        mpfr_init(r3818850);
        mpfr_init_set_str(r3818851, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r3818852);
        mpfr_init(r3818853);
        mpfr_init(r3818854);
        mpfr_init(r3818855);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3818819, x, MPFR_RNDN);
        mpfr_mul(r3818820, r3818818, r3818819, MPFR_RNDN);
        ;
        mpfr_mul(r3818822, r3818819, r3818819, MPFR_RNDN);
        mpfr_mul(r3818823, r3818822, r3818819, MPFR_RNDN);
        mpfr_mul(r3818824, r3818821, r3818823, MPFR_RNDN);
        mpfr_add(r3818825, r3818820, r3818824, MPFR_RNDN);
        ;
        mpfr_mul(r3818827, r3818823, r3818819, MPFR_RNDN);
        mpfr_mul(r3818828, r3818827, r3818819, MPFR_RNDN);
        mpfr_mul(r3818829, r3818826, r3818828, MPFR_RNDN);
        mpfr_add(r3818830, r3818825, r3818829, MPFR_RNDN);
        ;
        mpfr_mul(r3818832, r3818828, r3818819, MPFR_RNDN);
        mpfr_mul(r3818833, r3818832, r3818819, MPFR_RNDN);
        mpfr_mul(r3818834, r3818831, r3818833, MPFR_RNDN);
        mpfr_add(r3818835, r3818830, r3818834, MPFR_RNDN);
        ;
        mpfr_mul(r3818837, r3818833, r3818819, MPFR_RNDN);
        mpfr_mul(r3818838, r3818837, r3818819, MPFR_RNDN);
        mpfr_mul(r3818839, r3818836, r3818838, MPFR_RNDN);
        mpfr_add(r3818840, r3818835, r3818839, MPFR_RNDN);
        ;
        mpfr_mul(r3818842, r3818838, r3818819, MPFR_RNDN);
        mpfr_mul(r3818843, r3818842, r3818819, MPFR_RNDN);
        mpfr_mul(r3818844, r3818841, r3818843, MPFR_RNDN);
        mpfr_add(r3818845, r3818840, r3818844, MPFR_RNDN);
        ;
        mpfr_mul(r3818847, r3818843, r3818819, MPFR_RNDN);
        mpfr_mul(r3818848, r3818847, r3818819, MPFR_RNDN);
        mpfr_mul(r3818849, r3818846, r3818848, MPFR_RNDN);
        mpfr_add(r3818850, r3818845, r3818849, MPFR_RNDN);
        ;
        mpfr_mul(r3818852, r3818848, r3818819, MPFR_RNDN);
        mpfr_mul(r3818853, r3818852, r3818819, MPFR_RNDN);
        mpfr_mul(r3818854, r3818851, r3818853, MPFR_RNDN);
        mpfr_add(r3818855, r3818850, r3818854, MPFR_RNDN);
        return mpfr_get_d(r3818855, MPFR_RNDN);
}

