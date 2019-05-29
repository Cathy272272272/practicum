#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r5020649 = 0.273438;
        float r5020650 = -9.84375;
        float r5020651 = x;
        float r5020652 = r5020651 * r5020651;
        float r5020653 = r5020650 * r5020652;
        float r5020654 = r5020649 + r5020653;
        float r5020655 = 54.140625;
        float r5020656 = r5020652 * r5020651;
        float r5020657 = r5020656 * r5020651;
        float r5020658 = r5020655 * r5020657;
        float r5020659 = r5020654 + r5020658;
        float r5020660 = -93.84375;
        float r5020661 = r5020657 * r5020651;
        float r5020662 = r5020661 * r5020651;
        float r5020663 = r5020660 * r5020662;
        float r5020664 = r5020659 + r5020663;
        float r5020665 = 50.273438;
        float r5020666 = r5020662 * r5020651;
        float r5020667 = r5020666 * r5020651;
        float r5020668 = r5020665 * r5020667;
        float r5020669 = r5020664 + r5020668;
        return r5020669;
}

double f_id(double x) {
        double r5020670 = 0.273438;
        double r5020671 = -9.84375;
        double r5020672 = x;
        double r5020673 = r5020672 * r5020672;
        double r5020674 = r5020671 * r5020673;
        double r5020675 = r5020670 + r5020674;
        double r5020676 = 54.140625;
        double r5020677 = r5020673 * r5020672;
        double r5020678 = r5020677 * r5020672;
        double r5020679 = r5020676 * r5020678;
        double r5020680 = r5020675 + r5020679;
        double r5020681 = -93.84375;
        double r5020682 = r5020678 * r5020672;
        double r5020683 = r5020682 * r5020672;
        double r5020684 = r5020681 * r5020683;
        double r5020685 = r5020680 + r5020684;
        double r5020686 = 50.273438;
        double r5020687 = r5020683 * r5020672;
        double r5020688 = r5020687 * r5020672;
        double r5020689 = r5020686 * r5020688;
        double r5020690 = r5020685 + r5020689;
        return r5020690;
}


double f_of(float x) {
        float r5020691 = 0.273438;
        float r5020692 = -9.84375;
        float r5020693 = x;
        float r5020694 = r5020693 * r5020693;
        float r5020695 = r5020692 * r5020694;
        float r5020696 = r5020691 + r5020695;
        float r5020697 = 54.140625;
        float r5020698 = r5020694 * r5020693;
        float r5020699 = r5020698 * r5020693;
        float r5020700 = r5020697 * r5020699;
        float r5020701 = r5020696 + r5020700;
        float r5020702 = -93.84375;
        float r5020703 = r5020699 * r5020693;
        float r5020704 = r5020703 * r5020693;
        float r5020705 = r5020702 * r5020704;
        float r5020706 = r5020701 + r5020705;
        float r5020707 = 50.273438;
        float r5020708 = r5020704 * r5020693;
        float r5020709 = r5020708 * r5020693;
        float r5020710 = r5020707 * r5020709;
        float r5020711 = r5020706 + r5020710;
        return r5020711;
}

double f_od(double x) {
        double r5020712 = 0.273438;
        double r5020713 = -9.84375;
        double r5020714 = x;
        double r5020715 = r5020714 * r5020714;
        double r5020716 = r5020713 * r5020715;
        double r5020717 = r5020712 + r5020716;
        double r5020718 = 54.140625;
        double r5020719 = r5020715 * r5020714;
        double r5020720 = r5020719 * r5020714;
        double r5020721 = r5020718 * r5020720;
        double r5020722 = r5020717 + r5020721;
        double r5020723 = -93.84375;
        double r5020724 = r5020720 * r5020714;
        double r5020725 = r5020724 * r5020714;
        double r5020726 = r5020723 * r5020725;
        double r5020727 = r5020722 + r5020726;
        double r5020728 = 50.273438;
        double r5020729 = r5020725 * r5020714;
        double r5020730 = r5020729 * r5020714;
        double r5020731 = r5020728 * r5020730;
        double r5020732 = r5020727 + r5020731;
        return r5020732;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5020733, r5020734, r5020735, r5020736, r5020737, r5020738, r5020739, r5020740, r5020741, r5020742, r5020743, r5020744, r5020745, r5020746, r5020747, r5020748, r5020749, r5020750, r5020751, r5020752, r5020753;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5020733, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020734, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r5020735);
        mpfr_init(r5020736);
        mpfr_init(r5020737);
        mpfr_init(r5020738);
        mpfr_init_set_str(r5020739, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r5020740);
        mpfr_init(r5020741);
        mpfr_init(r5020742);
        mpfr_init(r5020743);
        mpfr_init_set_str(r5020744, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r5020745);
        mpfr_init(r5020746);
        mpfr_init(r5020747);
        mpfr_init(r5020748);
        mpfr_init_set_str(r5020749, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r5020750);
        mpfr_init(r5020751);
        mpfr_init(r5020752);
        mpfr_init(r5020753);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5020735, x, MPFR_RNDN);
        mpfr_mul(r5020736, r5020735, r5020735, MPFR_RNDN);
        mpfr_mul(r5020737, r5020734, r5020736, MPFR_RNDN);
        mpfr_add(r5020738, r5020733, r5020737, MPFR_RNDN);
        ;
        mpfr_mul(r5020740, r5020736, r5020735, MPFR_RNDN);
        mpfr_mul(r5020741, r5020740, r5020735, MPFR_RNDN);
        mpfr_mul(r5020742, r5020739, r5020741, MPFR_RNDN);
        mpfr_add(r5020743, r5020738, r5020742, MPFR_RNDN);
        ;
        mpfr_mul(r5020745, r5020741, r5020735, MPFR_RNDN);
        mpfr_mul(r5020746, r5020745, r5020735, MPFR_RNDN);
        mpfr_mul(r5020747, r5020744, r5020746, MPFR_RNDN);
        mpfr_add(r5020748, r5020743, r5020747, MPFR_RNDN);
        ;
        mpfr_mul(r5020750, r5020746, r5020735, MPFR_RNDN);
        mpfr_mul(r5020751, r5020750, r5020735, MPFR_RNDN);
        mpfr_mul(r5020752, r5020749, r5020751, MPFR_RNDN);
        mpfr_add(r5020753, r5020748, r5020752, MPFR_RNDN);
        return mpfr_get_d(r5020753, MPFR_RNDN);
}

static mpfr_t r5020754, r5020755, r5020756, r5020757, r5020758, r5020759, r5020760, r5020761, r5020762, r5020763, r5020764, r5020765, r5020766, r5020767, r5020768, r5020769, r5020770, r5020771, r5020772, r5020773, r5020774;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5020754, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020755, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r5020756);
        mpfr_init(r5020757);
        mpfr_init(r5020758);
        mpfr_init(r5020759);
        mpfr_init_set_str(r5020760, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r5020761);
        mpfr_init(r5020762);
        mpfr_init(r5020763);
        mpfr_init(r5020764);
        mpfr_init_set_str(r5020765, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r5020766);
        mpfr_init(r5020767);
        mpfr_init(r5020768);
        mpfr_init(r5020769);
        mpfr_init_set_str(r5020770, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r5020771);
        mpfr_init(r5020772);
        mpfr_init(r5020773);
        mpfr_init(r5020774);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5020756, x, MPFR_RNDN);
        mpfr_mul(r5020757, r5020756, r5020756, MPFR_RNDN);
        mpfr_mul(r5020758, r5020755, r5020757, MPFR_RNDN);
        mpfr_add(r5020759, r5020754, r5020758, MPFR_RNDN);
        ;
        mpfr_mul(r5020761, r5020757, r5020756, MPFR_RNDN);
        mpfr_mul(r5020762, r5020761, r5020756, MPFR_RNDN);
        mpfr_mul(r5020763, r5020760, r5020762, MPFR_RNDN);
        mpfr_add(r5020764, r5020759, r5020763, MPFR_RNDN);
        ;
        mpfr_mul(r5020766, r5020762, r5020756, MPFR_RNDN);
        mpfr_mul(r5020767, r5020766, r5020756, MPFR_RNDN);
        mpfr_mul(r5020768, r5020765, r5020767, MPFR_RNDN);
        mpfr_add(r5020769, r5020764, r5020768, MPFR_RNDN);
        ;
        mpfr_mul(r5020771, r5020767, r5020756, MPFR_RNDN);
        mpfr_mul(r5020772, r5020771, r5020756, MPFR_RNDN);
        mpfr_mul(r5020773, r5020770, r5020772, MPFR_RNDN);
        mpfr_add(r5020774, r5020769, r5020773, MPFR_RNDN);
        return mpfr_get_d(r5020774, MPFR_RNDN);
}

static mpfr_t r5020775, r5020776, r5020777, r5020778, r5020779, r5020780, r5020781, r5020782, r5020783, r5020784, r5020785, r5020786, r5020787, r5020788, r5020789, r5020790, r5020791, r5020792, r5020793, r5020794, r5020795;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5020775, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020776, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r5020777);
        mpfr_init(r5020778);
        mpfr_init(r5020779);
        mpfr_init(r5020780);
        mpfr_init_set_str(r5020781, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r5020782);
        mpfr_init(r5020783);
        mpfr_init(r5020784);
        mpfr_init(r5020785);
        mpfr_init_set_str(r5020786, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r5020787);
        mpfr_init(r5020788);
        mpfr_init(r5020789);
        mpfr_init(r5020790);
        mpfr_init_set_str(r5020791, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r5020792);
        mpfr_init(r5020793);
        mpfr_init(r5020794);
        mpfr_init(r5020795);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5020777, x, MPFR_RNDN);
        mpfr_mul(r5020778, r5020777, r5020777, MPFR_RNDN);
        mpfr_mul(r5020779, r5020776, r5020778, MPFR_RNDN);
        mpfr_add(r5020780, r5020775, r5020779, MPFR_RNDN);
        ;
        mpfr_mul(r5020782, r5020778, r5020777, MPFR_RNDN);
        mpfr_mul(r5020783, r5020782, r5020777, MPFR_RNDN);
        mpfr_mul(r5020784, r5020781, r5020783, MPFR_RNDN);
        mpfr_add(r5020785, r5020780, r5020784, MPFR_RNDN);
        ;
        mpfr_mul(r5020787, r5020783, r5020777, MPFR_RNDN);
        mpfr_mul(r5020788, r5020787, r5020777, MPFR_RNDN);
        mpfr_mul(r5020789, r5020786, r5020788, MPFR_RNDN);
        mpfr_add(r5020790, r5020785, r5020789, MPFR_RNDN);
        ;
        mpfr_mul(r5020792, r5020788, r5020777, MPFR_RNDN);
        mpfr_mul(r5020793, r5020792, r5020777, MPFR_RNDN);
        mpfr_mul(r5020794, r5020791, r5020793, MPFR_RNDN);
        mpfr_add(r5020795, r5020790, r5020794, MPFR_RNDN);
        return mpfr_get_d(r5020795, MPFR_RNDN);
}

