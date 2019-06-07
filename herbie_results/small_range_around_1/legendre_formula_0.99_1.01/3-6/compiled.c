#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r49139612 = -0.3125;
        float r49139613 = 6.5625;
        float r49139614 = x;
        float r49139615 = r49139614 * r49139614;
        float r49139616 = r49139613 * r49139615;
        float r49139617 = r49139612 + r49139616;
        float r49139618 = -19.6875;
        float r49139619 = r49139615 * r49139614;
        float r49139620 = r49139619 * r49139614;
        float r49139621 = r49139618 * r49139620;
        float r49139622 = r49139617 + r49139621;
        float r49139623 = 14.4375;
        float r49139624 = r49139620 * r49139614;
        float r49139625 = r49139624 * r49139614;
        float r49139626 = r49139623 * r49139625;
        float r49139627 = r49139622 + r49139626;
        return r49139627;
}

double f_id(double x) {
        double r49139628 = -0.3125;
        double r49139629 = 6.5625;
        double r49139630 = x;
        double r49139631 = r49139630 * r49139630;
        double r49139632 = r49139629 * r49139631;
        double r49139633 = r49139628 + r49139632;
        double r49139634 = -19.6875;
        double r49139635 = r49139631 * r49139630;
        double r49139636 = r49139635 * r49139630;
        double r49139637 = r49139634 * r49139636;
        double r49139638 = r49139633 + r49139637;
        double r49139639 = 14.4375;
        double r49139640 = r49139636 * r49139630;
        double r49139641 = r49139640 * r49139630;
        double r49139642 = r49139639 * r49139641;
        double r49139643 = r49139638 + r49139642;
        return r49139643;
}


double f_of(float x) {
        float r49139644 = x;
        float r49139645 = 6.5625;
        float r49139646 = r49139644 * r49139645;
        float r49139647 = r49139646 * r49139644;
        float r49139648 = -0.3125;
        float r49139649 = r49139647 + r49139648;
        float r49139650 = 3;
        float r49139651 = pow(r49139649, r49139650);
        float r49139652 = pow(r49139651, r49139650);
        float r49139653 = log(r49139644);
        float r49139654 = r49139653 * r49139650;
        float r49139655 = 1;
        float r49139656 = r49139655 + r49139650;
        float r49139657 = r49139654 * r49139656;
        float r49139658 = exp(r49139657);
        float r49139659 = pow(r49139658, r49139650);
        float r49139660 = -19.6875;
        float r49139661 = r49139644 * r49139644;
        float r49139662 = 14.4375;
        float r49139663 = r49139661 * r49139662;
        float r49139664 = r49139660 + r49139663;
        float r49139665 = pow(r49139664, r49139650);
        float r49139666 = pow(r49139665, r49139650);
        float r49139667 = r49139659 * r49139666;
        float r49139668 = r49139652 + r49139667;
        float r49139669 = r49139661 * r49139661;
        float r49139670 = r49139662 * r49139644;
        float r49139671 = r49139670 * r49139644;
        float r49139672 = r49139660 + r49139671;
        float r49139673 = r49139669 * r49139672;
        float r49139674 = pow(r49139673, r49139650);
        float r49139675 = r49139644 * r49139646;
        float r49139676 = r49139675 + r49139648;
        float r49139677 = r49139676 * r49139676;
        float r49139678 = -r49139676;
        float r49139679 = r49139677 * r49139678;
        float r49139680 = r49139674 + r49139679;
        float r49139681 = r49139674 * r49139680;
        float r49139682 = pow(r49139676, r49139650);
        float r49139683 = r49139682 * r49139682;
        float r49139684 = r49139681 + r49139683;
        float r49139685 = r49139668 / r49139684;
        float r49139686 = r49139662 * r49139661;
        float r49139687 = r49139686 + r49139660;
        float r49139688 = r49139669 * r49139687;
        float r49139689 = r49139688 - r49139676;
        float r49139690 = r49139689 * r49139688;
        float r49139691 = r49139690 + r49139677;
        float r49139692 = r49139685 / r49139691;
        return r49139692;
}

double f_od(double x) {
        double r49139693 = x;
        double r49139694 = 6.5625;
        double r49139695 = r49139693 * r49139694;
        double r49139696 = r49139695 * r49139693;
        double r49139697 = -0.3125;
        double r49139698 = r49139696 + r49139697;
        double r49139699 = 3;
        double r49139700 = pow(r49139698, r49139699);
        double r49139701 = pow(r49139700, r49139699);
        double r49139702 = log(r49139693);
        double r49139703 = r49139702 * r49139699;
        double r49139704 = 1;
        double r49139705 = r49139704 + r49139699;
        double r49139706 = r49139703 * r49139705;
        double r49139707 = exp(r49139706);
        double r49139708 = pow(r49139707, r49139699);
        double r49139709 = -19.6875;
        double r49139710 = r49139693 * r49139693;
        double r49139711 = 14.4375;
        double r49139712 = r49139710 * r49139711;
        double r49139713 = r49139709 + r49139712;
        double r49139714 = pow(r49139713, r49139699);
        double r49139715 = pow(r49139714, r49139699);
        double r49139716 = r49139708 * r49139715;
        double r49139717 = r49139701 + r49139716;
        double r49139718 = r49139710 * r49139710;
        double r49139719 = r49139711 * r49139693;
        double r49139720 = r49139719 * r49139693;
        double r49139721 = r49139709 + r49139720;
        double r49139722 = r49139718 * r49139721;
        double r49139723 = pow(r49139722, r49139699);
        double r49139724 = r49139693 * r49139695;
        double r49139725 = r49139724 + r49139697;
        double r49139726 = r49139725 * r49139725;
        double r49139727 = -r49139725;
        double r49139728 = r49139726 * r49139727;
        double r49139729 = r49139723 + r49139728;
        double r49139730 = r49139723 * r49139729;
        double r49139731 = pow(r49139725, r49139699);
        double r49139732 = r49139731 * r49139731;
        double r49139733 = r49139730 + r49139732;
        double r49139734 = r49139717 / r49139733;
        double r49139735 = r49139711 * r49139710;
        double r49139736 = r49139735 + r49139709;
        double r49139737 = r49139718 * r49139736;
        double r49139738 = r49139737 - r49139725;
        double r49139739 = r49139738 * r49139737;
        double r49139740 = r49139739 + r49139726;
        double r49139741 = r49139734 / r49139740;
        return r49139741;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49139742, r49139743, r49139744, r49139745, r49139746, r49139747, r49139748, r49139749, r49139750, r49139751, r49139752, r49139753, r49139754, r49139755, r49139756, r49139757;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49139742, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r49139743, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r49139744);
        mpfr_init(r49139745);
        mpfr_init(r49139746);
        mpfr_init(r49139747);
        mpfr_init_set_str(r49139748, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r49139749);
        mpfr_init(r49139750);
        mpfr_init(r49139751);
        mpfr_init(r49139752);
        mpfr_init_set_str(r49139753, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r49139754);
        mpfr_init(r49139755);
        mpfr_init(r49139756);
        mpfr_init(r49139757);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r49139744, x, MPFR_RNDN);
        mpfr_mul(r49139745, r49139744, r49139744, MPFR_RNDN);
        mpfr_mul(r49139746, r49139743, r49139745, MPFR_RNDN);
        mpfr_add(r49139747, r49139742, r49139746, MPFR_RNDN);
        ;
        mpfr_mul(r49139749, r49139745, r49139744, MPFR_RNDN);
        mpfr_mul(r49139750, r49139749, r49139744, MPFR_RNDN);
        mpfr_mul(r49139751, r49139748, r49139750, MPFR_RNDN);
        mpfr_add(r49139752, r49139747, r49139751, MPFR_RNDN);
        ;
        mpfr_mul(r49139754, r49139750, r49139744, MPFR_RNDN);
        mpfr_mul(r49139755, r49139754, r49139744, MPFR_RNDN);
        mpfr_mul(r49139756, r49139753, r49139755, MPFR_RNDN);
        mpfr_add(r49139757, r49139752, r49139756, MPFR_RNDN);
        return mpfr_get_d(r49139757, MPFR_RNDN);
}

static mpfr_t r49139758, r49139759, r49139760, r49139761, r49139762, r49139763, r49139764, r49139765, r49139766, r49139767, r49139768, r49139769, r49139770, r49139771, r49139772, r49139773, r49139774, r49139775, r49139776, r49139777, r49139778, r49139779, r49139780, r49139781, r49139782, r49139783, r49139784, r49139785, r49139786, r49139787, r49139788, r49139789, r49139790, r49139791, r49139792, r49139793, r49139794, r49139795, r49139796, r49139797, r49139798, r49139799, r49139800, r49139801, r49139802, r49139803, r49139804, r49139805, r49139806;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49139758);
        mpfr_init_set_str(r49139759, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r49139760);
        mpfr_init(r49139761);
        mpfr_init_set_str(r49139762, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r49139763);
        mpfr_init_set_str(r49139764, "3", 10, MPFR_RNDN);
        mpfr_init(r49139765);
        mpfr_init(r49139766);
        mpfr_init(r49139767);
        mpfr_init(r49139768);
        mpfr_init_set_str(r49139769, "1", 10, MPFR_RNDN);
        mpfr_init(r49139770);
        mpfr_init(r49139771);
        mpfr_init(r49139772);
        mpfr_init(r49139773);
        mpfr_init_set_str(r49139774, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r49139775);
        mpfr_init_set_str(r49139776, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r49139777);
        mpfr_init(r49139778);
        mpfr_init(r49139779);
        mpfr_init(r49139780);
        mpfr_init(r49139781);
        mpfr_init(r49139782);
        mpfr_init(r49139783);
        mpfr_init(r49139784);
        mpfr_init(r49139785);
        mpfr_init(r49139786);
        mpfr_init(r49139787);
        mpfr_init(r49139788);
        mpfr_init(r49139789);
        mpfr_init(r49139790);
        mpfr_init(r49139791);
        mpfr_init(r49139792);
        mpfr_init(r49139793);
        mpfr_init(r49139794);
        mpfr_init(r49139795);
        mpfr_init(r49139796);
        mpfr_init(r49139797);
        mpfr_init(r49139798);
        mpfr_init(r49139799);
        mpfr_init(r49139800);
        mpfr_init(r49139801);
        mpfr_init(r49139802);
        mpfr_init(r49139803);
        mpfr_init(r49139804);
        mpfr_init(r49139805);
        mpfr_init(r49139806);
}

double f_fm(double x) {
        mpfr_set_d(r49139758, x, MPFR_RNDN);
        ;
        mpfr_mul(r49139760, r49139758, r49139759, MPFR_RNDN);
        mpfr_mul(r49139761, r49139760, r49139758, MPFR_RNDN);
        ;
        mpfr_add(r49139763, r49139761, r49139762, MPFR_RNDN);
        ;
        mpfr_pow(r49139765, r49139763, r49139764, MPFR_RNDN);
        mpfr_pow(r49139766, r49139765, r49139764, MPFR_RNDN);
        mpfr_log(r49139767, r49139758, MPFR_RNDN);
        mpfr_mul(r49139768, r49139767, r49139764, MPFR_RNDN);
        ;
        mpfr_add(r49139770, r49139769, r49139764, MPFR_RNDN);
        mpfr_mul(r49139771, r49139768, r49139770, MPFR_RNDN);
        mpfr_exp(r49139772, r49139771, MPFR_RNDN);
        mpfr_pow(r49139773, r49139772, r49139764, MPFR_RNDN);
        ;
        mpfr_mul(r49139775, r49139758, r49139758, MPFR_RNDN);
        ;
        mpfr_mul(r49139777, r49139775, r49139776, MPFR_RNDN);
        mpfr_add(r49139778, r49139774, r49139777, MPFR_RNDN);
        mpfr_pow(r49139779, r49139778, r49139764, MPFR_RNDN);
        mpfr_pow(r49139780, r49139779, r49139764, MPFR_RNDN);
        mpfr_mul(r49139781, r49139773, r49139780, MPFR_RNDN);
        mpfr_add(r49139782, r49139766, r49139781, MPFR_RNDN);
        mpfr_mul(r49139783, r49139775, r49139775, MPFR_RNDN);
        mpfr_mul(r49139784, r49139776, r49139758, MPFR_RNDN);
        mpfr_mul(r49139785, r49139784, r49139758, MPFR_RNDN);
        mpfr_add(r49139786, r49139774, r49139785, MPFR_RNDN);
        mpfr_mul(r49139787, r49139783, r49139786, MPFR_RNDN);
        mpfr_pow(r49139788, r49139787, r49139764, MPFR_RNDN);
        mpfr_mul(r49139789, r49139758, r49139760, MPFR_RNDN);
        mpfr_add(r49139790, r49139789, r49139762, MPFR_RNDN);
        mpfr_mul(r49139791, r49139790, r49139790, MPFR_RNDN);
        mpfr_neg(r49139792, r49139790, MPFR_RNDN);
        mpfr_mul(r49139793, r49139791, r49139792, MPFR_RNDN);
        mpfr_add(r49139794, r49139788, r49139793, MPFR_RNDN);
        mpfr_mul(r49139795, r49139788, r49139794, MPFR_RNDN);
        mpfr_pow(r49139796, r49139790, r49139764, MPFR_RNDN);
        mpfr_mul(r49139797, r49139796, r49139796, MPFR_RNDN);
        mpfr_add(r49139798, r49139795, r49139797, MPFR_RNDN);
        mpfr_div(r49139799, r49139782, r49139798, MPFR_RNDN);
        mpfr_mul(r49139800, r49139776, r49139775, MPFR_RNDN);
        mpfr_add(r49139801, r49139800, r49139774, MPFR_RNDN);
        mpfr_mul(r49139802, r49139783, r49139801, MPFR_RNDN);
        mpfr_sub(r49139803, r49139802, r49139790, MPFR_RNDN);
        mpfr_mul(r49139804, r49139803, r49139802, MPFR_RNDN);
        mpfr_add(r49139805, r49139804, r49139791, MPFR_RNDN);
        mpfr_div(r49139806, r49139799, r49139805, MPFR_RNDN);
        return mpfr_get_d(r49139806, MPFR_RNDN);
}

static mpfr_t r49139807, r49139808, r49139809, r49139810, r49139811, r49139812, r49139813, r49139814, r49139815, r49139816, r49139817, r49139818, r49139819, r49139820, r49139821, r49139822, r49139823, r49139824, r49139825, r49139826, r49139827, r49139828, r49139829, r49139830, r49139831, r49139832, r49139833, r49139834, r49139835, r49139836, r49139837, r49139838, r49139839, r49139840, r49139841, r49139842, r49139843, r49139844, r49139845, r49139846, r49139847, r49139848, r49139849, r49139850, r49139851, r49139852, r49139853, r49139854, r49139855;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49139807);
        mpfr_init_set_str(r49139808, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r49139809);
        mpfr_init(r49139810);
        mpfr_init_set_str(r49139811, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r49139812);
        mpfr_init_set_str(r49139813, "3", 10, MPFR_RNDN);
        mpfr_init(r49139814);
        mpfr_init(r49139815);
        mpfr_init(r49139816);
        mpfr_init(r49139817);
        mpfr_init_set_str(r49139818, "1", 10, MPFR_RNDN);
        mpfr_init(r49139819);
        mpfr_init(r49139820);
        mpfr_init(r49139821);
        mpfr_init(r49139822);
        mpfr_init_set_str(r49139823, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r49139824);
        mpfr_init_set_str(r49139825, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r49139826);
        mpfr_init(r49139827);
        mpfr_init(r49139828);
        mpfr_init(r49139829);
        mpfr_init(r49139830);
        mpfr_init(r49139831);
        mpfr_init(r49139832);
        mpfr_init(r49139833);
        mpfr_init(r49139834);
        mpfr_init(r49139835);
        mpfr_init(r49139836);
        mpfr_init(r49139837);
        mpfr_init(r49139838);
        mpfr_init(r49139839);
        mpfr_init(r49139840);
        mpfr_init(r49139841);
        mpfr_init(r49139842);
        mpfr_init(r49139843);
        mpfr_init(r49139844);
        mpfr_init(r49139845);
        mpfr_init(r49139846);
        mpfr_init(r49139847);
        mpfr_init(r49139848);
        mpfr_init(r49139849);
        mpfr_init(r49139850);
        mpfr_init(r49139851);
        mpfr_init(r49139852);
        mpfr_init(r49139853);
        mpfr_init(r49139854);
        mpfr_init(r49139855);
}

double f_dm(double x) {
        mpfr_set_d(r49139807, x, MPFR_RNDN);
        ;
        mpfr_mul(r49139809, r49139807, r49139808, MPFR_RNDN);
        mpfr_mul(r49139810, r49139809, r49139807, MPFR_RNDN);
        ;
        mpfr_add(r49139812, r49139810, r49139811, MPFR_RNDN);
        ;
        mpfr_pow(r49139814, r49139812, r49139813, MPFR_RNDN);
        mpfr_pow(r49139815, r49139814, r49139813, MPFR_RNDN);
        mpfr_log(r49139816, r49139807, MPFR_RNDN);
        mpfr_mul(r49139817, r49139816, r49139813, MPFR_RNDN);
        ;
        mpfr_add(r49139819, r49139818, r49139813, MPFR_RNDN);
        mpfr_mul(r49139820, r49139817, r49139819, MPFR_RNDN);
        mpfr_exp(r49139821, r49139820, MPFR_RNDN);
        mpfr_pow(r49139822, r49139821, r49139813, MPFR_RNDN);
        ;
        mpfr_mul(r49139824, r49139807, r49139807, MPFR_RNDN);
        ;
        mpfr_mul(r49139826, r49139824, r49139825, MPFR_RNDN);
        mpfr_add(r49139827, r49139823, r49139826, MPFR_RNDN);
        mpfr_pow(r49139828, r49139827, r49139813, MPFR_RNDN);
        mpfr_pow(r49139829, r49139828, r49139813, MPFR_RNDN);
        mpfr_mul(r49139830, r49139822, r49139829, MPFR_RNDN);
        mpfr_add(r49139831, r49139815, r49139830, MPFR_RNDN);
        mpfr_mul(r49139832, r49139824, r49139824, MPFR_RNDN);
        mpfr_mul(r49139833, r49139825, r49139807, MPFR_RNDN);
        mpfr_mul(r49139834, r49139833, r49139807, MPFR_RNDN);
        mpfr_add(r49139835, r49139823, r49139834, MPFR_RNDN);
        mpfr_mul(r49139836, r49139832, r49139835, MPFR_RNDN);
        mpfr_pow(r49139837, r49139836, r49139813, MPFR_RNDN);
        mpfr_mul(r49139838, r49139807, r49139809, MPFR_RNDN);
        mpfr_add(r49139839, r49139838, r49139811, MPFR_RNDN);
        mpfr_mul(r49139840, r49139839, r49139839, MPFR_RNDN);
        mpfr_neg(r49139841, r49139839, MPFR_RNDN);
        mpfr_mul(r49139842, r49139840, r49139841, MPFR_RNDN);
        mpfr_add(r49139843, r49139837, r49139842, MPFR_RNDN);
        mpfr_mul(r49139844, r49139837, r49139843, MPFR_RNDN);
        mpfr_pow(r49139845, r49139839, r49139813, MPFR_RNDN);
        mpfr_mul(r49139846, r49139845, r49139845, MPFR_RNDN);
        mpfr_add(r49139847, r49139844, r49139846, MPFR_RNDN);
        mpfr_div(r49139848, r49139831, r49139847, MPFR_RNDN);
        mpfr_mul(r49139849, r49139825, r49139824, MPFR_RNDN);
        mpfr_add(r49139850, r49139849, r49139823, MPFR_RNDN);
        mpfr_mul(r49139851, r49139832, r49139850, MPFR_RNDN);
        mpfr_sub(r49139852, r49139851, r49139839, MPFR_RNDN);
        mpfr_mul(r49139853, r49139852, r49139851, MPFR_RNDN);
        mpfr_add(r49139854, r49139853, r49139840, MPFR_RNDN);
        mpfr_div(r49139855, r49139848, r49139854, MPFR_RNDN);
        return mpfr_get_d(r49139855, MPFR_RNDN);
}

