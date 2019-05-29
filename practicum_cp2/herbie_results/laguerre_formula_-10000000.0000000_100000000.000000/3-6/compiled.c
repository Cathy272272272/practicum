#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r11729653 = 1.0;
        float r11729654 = -6.0;
        float r11729655 = x;
        float r11729656 = r11729654 * r11729655;
        float r11729657 = r11729653 + r11729656;
        float r11729658 = 7.5;
        float r11729659 = r11729655 * r11729655;
        float r11729660 = r11729658 * r11729659;
        float r11729661 = r11729657 + r11729660;
        float r11729662 = -3.333333;
        float r11729663 = r11729659 * r11729655;
        float r11729664 = r11729662 * r11729663;
        float r11729665 = r11729661 + r11729664;
        float r11729666 = 0.625;
        float r11729667 = r11729663 * r11729655;
        float r11729668 = r11729666 * r11729667;
        float r11729669 = r11729665 + r11729668;
        float r11729670 = -0.05;
        float r11729671 = r11729667 * r11729655;
        float r11729672 = r11729670 * r11729671;
        float r11729673 = r11729669 + r11729672;
        float r11729674 = 0.001389;
        float r11729675 = r11729671 * r11729655;
        float r11729676 = r11729674 * r11729675;
        float r11729677 = r11729673 + r11729676;
        return r11729677;
}

double f_id(double x) {
        double r11729678 = 1.0;
        double r11729679 = -6.0;
        double r11729680 = x;
        double r11729681 = r11729679 * r11729680;
        double r11729682 = r11729678 + r11729681;
        double r11729683 = 7.5;
        double r11729684 = r11729680 * r11729680;
        double r11729685 = r11729683 * r11729684;
        double r11729686 = r11729682 + r11729685;
        double r11729687 = -3.333333;
        double r11729688 = r11729684 * r11729680;
        double r11729689 = r11729687 * r11729688;
        double r11729690 = r11729686 + r11729689;
        double r11729691 = 0.625;
        double r11729692 = r11729688 * r11729680;
        double r11729693 = r11729691 * r11729692;
        double r11729694 = r11729690 + r11729693;
        double r11729695 = -0.05;
        double r11729696 = r11729692 * r11729680;
        double r11729697 = r11729695 * r11729696;
        double r11729698 = r11729694 + r11729697;
        double r11729699 = 0.001389;
        double r11729700 = r11729696 * r11729680;
        double r11729701 = r11729699 * r11729700;
        double r11729702 = r11729698 + r11729701;
        return r11729702;
}


double f_of(float x) {
        float r11729703 = x;
        float r11729704 = 0.001389;
        float r11729705 = r11729704 * r11729703;
        float r11729706 = r11729703 * r11729705;
        float r11729707 = 3;
        float r11729708 = pow(r11729703, r11729707);
        float r11729709 = 1;
        float r11729710 = r11729707 + r11729709;
        float r11729711 = pow(r11729708, r11729710);
        float r11729712 = cbrt(r11729711);
        float r11729713 = r11729706 * r11729712;
        float r11729714 = -6.0;
        float r11729715 = r11729703 * r11729714;
        float r11729716 = 1.0;
        float r11729717 = r11729715 + r11729716;
        float r11729718 = r11729713 + r11729717;
        float r11729719 = r11729703 * r11729703;
        float r11729720 = r11729719 * r11729719;
        float r11729721 = 0.625;
        float r11729722 = -0.05;
        float r11729723 = r11729722 * r11729703;
        float r11729724 = r11729721 + r11729723;
        float r11729725 = r11729720 * r11729724;
        float r11729726 = -3.333333;
        float r11729727 = r11729726 * r11729703;
        float r11729728 = 7.5;
        float r11729729 = r11729727 + r11729728;
        float r11729730 = r11729719 * r11729729;
        float r11729731 = r11729725 + r11729730;
        float r11729732 = r11729718 + r11729731;
        return r11729732;
}

double f_od(double x) {
        double r11729733 = x;
        double r11729734 = 0.001389;
        double r11729735 = r11729734 * r11729733;
        double r11729736 = r11729733 * r11729735;
        double r11729737 = 3;
        double r11729738 = pow(r11729733, r11729737);
        double r11729739 = 1;
        double r11729740 = r11729737 + r11729739;
        double r11729741 = pow(r11729738, r11729740);
        double r11729742 = cbrt(r11729741);
        double r11729743 = r11729736 * r11729742;
        double r11729744 = -6.0;
        double r11729745 = r11729733 * r11729744;
        double r11729746 = 1.0;
        double r11729747 = r11729745 + r11729746;
        double r11729748 = r11729743 + r11729747;
        double r11729749 = r11729733 * r11729733;
        double r11729750 = r11729749 * r11729749;
        double r11729751 = 0.625;
        double r11729752 = -0.05;
        double r11729753 = r11729752 * r11729733;
        double r11729754 = r11729751 + r11729753;
        double r11729755 = r11729750 * r11729754;
        double r11729756 = -3.333333;
        double r11729757 = r11729756 * r11729733;
        double r11729758 = 7.5;
        double r11729759 = r11729757 + r11729758;
        double r11729760 = r11729749 * r11729759;
        double r11729761 = r11729755 + r11729760;
        double r11729762 = r11729748 + r11729761;
        return r11729762;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11729763, r11729764, r11729765, r11729766, r11729767, r11729768, r11729769, r11729770, r11729771, r11729772, r11729773, r11729774, r11729775, r11729776, r11729777, r11729778, r11729779, r11729780, r11729781, r11729782, r11729783, r11729784, r11729785, r11729786, r11729787;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11729763, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729764, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11729765);
        mpfr_init(r11729766);
        mpfr_init(r11729767);
        mpfr_init_set_str(r11729768, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11729769);
        mpfr_init(r11729770);
        mpfr_init(r11729771);
        mpfr_init_set_str(r11729772, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11729773);
        mpfr_init(r11729774);
        mpfr_init(r11729775);
        mpfr_init_set_str(r11729776, "0.625", 10, MPFR_RNDN);
        mpfr_init(r11729777);
        mpfr_init(r11729778);
        mpfr_init(r11729779);
        mpfr_init_set_str(r11729780, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11729781);
        mpfr_init(r11729782);
        mpfr_init(r11729783);
        mpfr_init_set_str(r11729784, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11729785);
        mpfr_init(r11729786);
        mpfr_init(r11729787);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11729765, x, MPFR_RNDN);
        mpfr_mul(r11729766, r11729764, r11729765, MPFR_RNDN);
        mpfr_add(r11729767, r11729763, r11729766, MPFR_RNDN);
        ;
        mpfr_mul(r11729769, r11729765, r11729765, MPFR_RNDN);
        mpfr_mul(r11729770, r11729768, r11729769, MPFR_RNDN);
        mpfr_add(r11729771, r11729767, r11729770, MPFR_RNDN);
        ;
        mpfr_mul(r11729773, r11729769, r11729765, MPFR_RNDN);
        mpfr_mul(r11729774, r11729772, r11729773, MPFR_RNDN);
        mpfr_add(r11729775, r11729771, r11729774, MPFR_RNDN);
        ;
        mpfr_mul(r11729777, r11729773, r11729765, MPFR_RNDN);
        mpfr_mul(r11729778, r11729776, r11729777, MPFR_RNDN);
        mpfr_add(r11729779, r11729775, r11729778, MPFR_RNDN);
        ;
        mpfr_mul(r11729781, r11729777, r11729765, MPFR_RNDN);
        mpfr_mul(r11729782, r11729780, r11729781, MPFR_RNDN);
        mpfr_add(r11729783, r11729779, r11729782, MPFR_RNDN);
        ;
        mpfr_mul(r11729785, r11729781, r11729765, MPFR_RNDN);
        mpfr_mul(r11729786, r11729784, r11729785, MPFR_RNDN);
        mpfr_add(r11729787, r11729783, r11729786, MPFR_RNDN);
        return mpfr_get_d(r11729787, MPFR_RNDN);
}

static mpfr_t r11729788, r11729789, r11729790, r11729791, r11729792, r11729793, r11729794, r11729795, r11729796, r11729797, r11729798, r11729799, r11729800, r11729801, r11729802, r11729803, r11729804, r11729805, r11729806, r11729807, r11729808, r11729809, r11729810, r11729811, r11729812, r11729813, r11729814, r11729815, r11729816, r11729817;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11729788);
        mpfr_init_set_str(r11729789, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11729790);
        mpfr_init(r11729791);
        mpfr_init_set_str(r11729792, "3", 10, MPFR_RNDN);
        mpfr_init(r11729793);
        mpfr_init_set_str(r11729794, "1", 10, MPFR_RNDN);
        mpfr_init(r11729795);
        mpfr_init(r11729796);
        mpfr_init(r11729797);
        mpfr_init(r11729798);
        mpfr_init_set_str(r11729799, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11729800);
        mpfr_init_set_str(r11729801, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729802);
        mpfr_init(r11729803);
        mpfr_init(r11729804);
        mpfr_init(r11729805);
        mpfr_init_set_str(r11729806, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729807, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11729808);
        mpfr_init(r11729809);
        mpfr_init(r11729810);
        mpfr_init_set_str(r11729811, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11729812);
        mpfr_init_set_str(r11729813, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11729814);
        mpfr_init(r11729815);
        mpfr_init(r11729816);
        mpfr_init(r11729817);
}

double f_fm(double x) {
        mpfr_set_d(r11729788, x, MPFR_RNDN);
        ;
        mpfr_mul(r11729790, r11729789, r11729788, MPFR_RNDN);
        mpfr_mul(r11729791, r11729788, r11729790, MPFR_RNDN);
        ;
        mpfr_pow(r11729793, r11729788, r11729792, MPFR_RNDN);
        ;
        mpfr_add(r11729795, r11729792, r11729794, MPFR_RNDN);
        mpfr_pow(r11729796, r11729793, r11729795, MPFR_RNDN);
        mpfr_cbrt(r11729797, r11729796, MPFR_RNDN);
        mpfr_mul(r11729798, r11729791, r11729797, MPFR_RNDN);
        ;
        mpfr_mul(r11729800, r11729788, r11729799, MPFR_RNDN);
        ;
        mpfr_add(r11729802, r11729800, r11729801, MPFR_RNDN);
        mpfr_add(r11729803, r11729798, r11729802, MPFR_RNDN);
        mpfr_mul(r11729804, r11729788, r11729788, MPFR_RNDN);
        mpfr_mul(r11729805, r11729804, r11729804, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11729808, r11729807, r11729788, MPFR_RNDN);
        mpfr_add(r11729809, r11729806, r11729808, MPFR_RNDN);
        mpfr_mul(r11729810, r11729805, r11729809, MPFR_RNDN);
        ;
        mpfr_mul(r11729812, r11729811, r11729788, MPFR_RNDN);
        ;
        mpfr_add(r11729814, r11729812, r11729813, MPFR_RNDN);
        mpfr_mul(r11729815, r11729804, r11729814, MPFR_RNDN);
        mpfr_add(r11729816, r11729810, r11729815, MPFR_RNDN);
        mpfr_add(r11729817, r11729803, r11729816, MPFR_RNDN);
        return mpfr_get_d(r11729817, MPFR_RNDN);
}

static mpfr_t r11729818, r11729819, r11729820, r11729821, r11729822, r11729823, r11729824, r11729825, r11729826, r11729827, r11729828, r11729829, r11729830, r11729831, r11729832, r11729833, r11729834, r11729835, r11729836, r11729837, r11729838, r11729839, r11729840, r11729841, r11729842, r11729843, r11729844, r11729845, r11729846, r11729847;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11729818);
        mpfr_init_set_str(r11729819, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r11729820);
        mpfr_init(r11729821);
        mpfr_init_set_str(r11729822, "3", 10, MPFR_RNDN);
        mpfr_init(r11729823);
        mpfr_init_set_str(r11729824, "1", 10, MPFR_RNDN);
        mpfr_init(r11729825);
        mpfr_init(r11729826);
        mpfr_init(r11729827);
        mpfr_init(r11729828);
        mpfr_init_set_str(r11729829, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r11729830);
        mpfr_init_set_str(r11729831, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729832);
        mpfr_init(r11729833);
        mpfr_init(r11729834);
        mpfr_init(r11729835);
        mpfr_init_set_str(r11729836, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729837, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r11729838);
        mpfr_init(r11729839);
        mpfr_init(r11729840);
        mpfr_init_set_str(r11729841, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r11729842);
        mpfr_init_set_str(r11729843, "7.5", 10, MPFR_RNDN);
        mpfr_init(r11729844);
        mpfr_init(r11729845);
        mpfr_init(r11729846);
        mpfr_init(r11729847);
}

double f_dm(double x) {
        mpfr_set_d(r11729818, x, MPFR_RNDN);
        ;
        mpfr_mul(r11729820, r11729819, r11729818, MPFR_RNDN);
        mpfr_mul(r11729821, r11729818, r11729820, MPFR_RNDN);
        ;
        mpfr_pow(r11729823, r11729818, r11729822, MPFR_RNDN);
        ;
        mpfr_add(r11729825, r11729822, r11729824, MPFR_RNDN);
        mpfr_pow(r11729826, r11729823, r11729825, MPFR_RNDN);
        mpfr_cbrt(r11729827, r11729826, MPFR_RNDN);
        mpfr_mul(r11729828, r11729821, r11729827, MPFR_RNDN);
        ;
        mpfr_mul(r11729830, r11729818, r11729829, MPFR_RNDN);
        ;
        mpfr_add(r11729832, r11729830, r11729831, MPFR_RNDN);
        mpfr_add(r11729833, r11729828, r11729832, MPFR_RNDN);
        mpfr_mul(r11729834, r11729818, r11729818, MPFR_RNDN);
        mpfr_mul(r11729835, r11729834, r11729834, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11729838, r11729837, r11729818, MPFR_RNDN);
        mpfr_add(r11729839, r11729836, r11729838, MPFR_RNDN);
        mpfr_mul(r11729840, r11729835, r11729839, MPFR_RNDN);
        ;
        mpfr_mul(r11729842, r11729841, r11729818, MPFR_RNDN);
        ;
        mpfr_add(r11729844, r11729842, r11729843, MPFR_RNDN);
        mpfr_mul(r11729845, r11729834, r11729844, MPFR_RNDN);
        mpfr_add(r11729846, r11729840, r11729845, MPFR_RNDN);
        mpfr_add(r11729847, r11729833, r11729846, MPFR_RNDN);
        return mpfr_get_d(r11729847, MPFR_RNDN);
}

