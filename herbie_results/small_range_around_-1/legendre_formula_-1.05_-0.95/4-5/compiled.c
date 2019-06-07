#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r33707706 = 1.875;
        float r33707707 = x;
        float r33707708 = r33707706 * r33707707;
        float r33707709 = -8.75;
        float r33707710 = r33707707 * r33707707;
        float r33707711 = r33707710 * r33707707;
        float r33707712 = r33707709 * r33707711;
        float r33707713 = r33707708 + r33707712;
        float r33707714 = 7.875;
        float r33707715 = r33707711 * r33707707;
        float r33707716 = r33707715 * r33707707;
        float r33707717 = r33707714 * r33707716;
        float r33707718 = r33707713 + r33707717;
        return r33707718;
}

double f_id(double x) {
        double r33707719 = 1.875;
        double r33707720 = x;
        double r33707721 = r33707719 * r33707720;
        double r33707722 = -8.75;
        double r33707723 = r33707720 * r33707720;
        double r33707724 = r33707723 * r33707720;
        double r33707725 = r33707722 * r33707724;
        double r33707726 = r33707721 + r33707725;
        double r33707727 = 7.875;
        double r33707728 = r33707724 * r33707720;
        double r33707729 = r33707728 * r33707720;
        double r33707730 = r33707727 * r33707729;
        double r33707731 = r33707726 + r33707730;
        return r33707731;
}


double f_of(float x) {
        float r33707732 = 7.875;
        float r33707733 = exp(r33707732);
        float r33707734 = cbrt(r33707733);
        float r33707735 = r33707734 * r33707734;
        float r33707736 = x;
        float r33707737 = 3;
        float r33707738 = pow(r33707736, r33707737);
        float r33707739 = pow(r33707735, r33707738);
        float r33707740 = pow(r33707734, r33707738);
        float r33707741 = r33707739 * r33707740;
        float r33707742 = pow(r33707741, r33707736);
        float r33707743 = pow(r33707742, r33707736);
        float r33707744 = 1.875;
        float r33707745 = r33707744 * r33707736;
        float r33707746 = exp(r33707745);
        float r33707747 = -8.75;
        float r33707748 = exp(r33707747);
        float r33707749 = pow(r33707748, r33707738);
        float r33707750 = r33707746 * r33707749;
        float r33707751 = r33707743 * r33707750;
        float r33707752 = log(r33707751);
        return r33707752;
}

double f_od(double x) {
        double r33707753 = 7.875;
        double r33707754 = exp(r33707753);
        double r33707755 = cbrt(r33707754);
        double r33707756 = r33707755 * r33707755;
        double r33707757 = x;
        double r33707758 = 3;
        double r33707759 = pow(r33707757, r33707758);
        double r33707760 = pow(r33707756, r33707759);
        double r33707761 = pow(r33707755, r33707759);
        double r33707762 = r33707760 * r33707761;
        double r33707763 = pow(r33707762, r33707757);
        double r33707764 = pow(r33707763, r33707757);
        double r33707765 = 1.875;
        double r33707766 = r33707765 * r33707757;
        double r33707767 = exp(r33707766);
        double r33707768 = -8.75;
        double r33707769 = exp(r33707768);
        double r33707770 = pow(r33707769, r33707759);
        double r33707771 = r33707767 * r33707770;
        double r33707772 = r33707764 * r33707771;
        double r33707773 = log(r33707772);
        return r33707773;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707774, r33707775, r33707776, r33707777, r33707778, r33707779, r33707780, r33707781, r33707782, r33707783, r33707784, r33707785, r33707786;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707774, "1.875", 10, MPFR_RNDN);
        mpfr_init(r33707775);
        mpfr_init(r33707776);
        mpfr_init_set_str(r33707777, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r33707778);
        mpfr_init(r33707779);
        mpfr_init(r33707780);
        mpfr_init(r33707781);
        mpfr_init_set_str(r33707782, "7.875", 10, MPFR_RNDN);
        mpfr_init(r33707783);
        mpfr_init(r33707784);
        mpfr_init(r33707785);
        mpfr_init(r33707786);
}

double f_im(double x) {
        ;
        mpfr_set_d(r33707775, x, MPFR_RNDN);
        mpfr_mul(r33707776, r33707774, r33707775, MPFR_RNDN);
        ;
        mpfr_mul(r33707778, r33707775, r33707775, MPFR_RNDN);
        mpfr_mul(r33707779, r33707778, r33707775, MPFR_RNDN);
        mpfr_mul(r33707780, r33707777, r33707779, MPFR_RNDN);
        mpfr_add(r33707781, r33707776, r33707780, MPFR_RNDN);
        ;
        mpfr_mul(r33707783, r33707779, r33707775, MPFR_RNDN);
        mpfr_mul(r33707784, r33707783, r33707775, MPFR_RNDN);
        mpfr_mul(r33707785, r33707782, r33707784, MPFR_RNDN);
        mpfr_add(r33707786, r33707781, r33707785, MPFR_RNDN);
        return mpfr_get_d(r33707786, MPFR_RNDN);
}

static mpfr_t r33707787, r33707788, r33707789, r33707790, r33707791, r33707792, r33707793, r33707794, r33707795, r33707796, r33707797, r33707798, r33707799, r33707800, r33707801, r33707802, r33707803, r33707804, r33707805, r33707806, r33707807;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707787, "7.875", 10, MPFR_RNDN);
        mpfr_init(r33707788);
        mpfr_init(r33707789);
        mpfr_init(r33707790);
        mpfr_init(r33707791);
        mpfr_init_set_str(r33707792, "3", 10, MPFR_RNDN);
        mpfr_init(r33707793);
        mpfr_init(r33707794);
        mpfr_init(r33707795);
        mpfr_init(r33707796);
        mpfr_init(r33707797);
        mpfr_init(r33707798);
        mpfr_init_set_str(r33707799, "1.875", 10, MPFR_RNDN);
        mpfr_init(r33707800);
        mpfr_init(r33707801);
        mpfr_init_set_str(r33707802, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r33707803);
        mpfr_init(r33707804);
        mpfr_init(r33707805);
        mpfr_init(r33707806);
        mpfr_init(r33707807);
}

double f_fm(double x) {
        ;
        mpfr_exp(r33707788, r33707787, MPFR_RNDN);
        mpfr_cbrt(r33707789, r33707788, MPFR_RNDN);
        mpfr_mul(r33707790, r33707789, r33707789, MPFR_RNDN);
        mpfr_set_d(r33707791, x, MPFR_RNDN);
        ;
        mpfr_pow(r33707793, r33707791, r33707792, MPFR_RNDN);
        mpfr_pow(r33707794, r33707790, r33707793, MPFR_RNDN);
        mpfr_pow(r33707795, r33707789, r33707793, MPFR_RNDN);
        mpfr_mul(r33707796, r33707794, r33707795, MPFR_RNDN);
        mpfr_pow(r33707797, r33707796, r33707791, MPFR_RNDN);
        mpfr_pow(r33707798, r33707797, r33707791, MPFR_RNDN);
        ;
        mpfr_mul(r33707800, r33707799, r33707791, MPFR_RNDN);
        mpfr_exp(r33707801, r33707800, MPFR_RNDN);
        ;
        mpfr_exp(r33707803, r33707802, MPFR_RNDN);
        mpfr_pow(r33707804, r33707803, r33707793, MPFR_RNDN);
        mpfr_mul(r33707805, r33707801, r33707804, MPFR_RNDN);
        mpfr_mul(r33707806, r33707798, r33707805, MPFR_RNDN);
        mpfr_log(r33707807, r33707806, MPFR_RNDN);
        return mpfr_get_d(r33707807, MPFR_RNDN);
}

static mpfr_t r33707808, r33707809, r33707810, r33707811, r33707812, r33707813, r33707814, r33707815, r33707816, r33707817, r33707818, r33707819, r33707820, r33707821, r33707822, r33707823, r33707824, r33707825, r33707826, r33707827, r33707828;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707808, "7.875", 10, MPFR_RNDN);
        mpfr_init(r33707809);
        mpfr_init(r33707810);
        mpfr_init(r33707811);
        mpfr_init(r33707812);
        mpfr_init_set_str(r33707813, "3", 10, MPFR_RNDN);
        mpfr_init(r33707814);
        mpfr_init(r33707815);
        mpfr_init(r33707816);
        mpfr_init(r33707817);
        mpfr_init(r33707818);
        mpfr_init(r33707819);
        mpfr_init_set_str(r33707820, "1.875", 10, MPFR_RNDN);
        mpfr_init(r33707821);
        mpfr_init(r33707822);
        mpfr_init_set_str(r33707823, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r33707824);
        mpfr_init(r33707825);
        mpfr_init(r33707826);
        mpfr_init(r33707827);
        mpfr_init(r33707828);
}

double f_dm(double x) {
        ;
        mpfr_exp(r33707809, r33707808, MPFR_RNDN);
        mpfr_cbrt(r33707810, r33707809, MPFR_RNDN);
        mpfr_mul(r33707811, r33707810, r33707810, MPFR_RNDN);
        mpfr_set_d(r33707812, x, MPFR_RNDN);
        ;
        mpfr_pow(r33707814, r33707812, r33707813, MPFR_RNDN);
        mpfr_pow(r33707815, r33707811, r33707814, MPFR_RNDN);
        mpfr_pow(r33707816, r33707810, r33707814, MPFR_RNDN);
        mpfr_mul(r33707817, r33707815, r33707816, MPFR_RNDN);
        mpfr_pow(r33707818, r33707817, r33707812, MPFR_RNDN);
        mpfr_pow(r33707819, r33707818, r33707812, MPFR_RNDN);
        ;
        mpfr_mul(r33707821, r33707820, r33707812, MPFR_RNDN);
        mpfr_exp(r33707822, r33707821, MPFR_RNDN);
        ;
        mpfr_exp(r33707824, r33707823, MPFR_RNDN);
        mpfr_pow(r33707825, r33707824, r33707814, MPFR_RNDN);
        mpfr_mul(r33707826, r33707822, r33707825, MPFR_RNDN);
        mpfr_mul(r33707827, r33707819, r33707826, MPFR_RNDN);
        mpfr_log(r33707828, r33707827, MPFR_RNDN);
        return mpfr_get_d(r33707828, MPFR_RNDN);
}

