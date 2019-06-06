#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r63170719 = 120.0;
        float r63170720 = x;
        float r63170721 = r63170719 * r63170720;
        float r63170722 = -160.0;
        float r63170723 = r63170720 * r63170720;
        float r63170724 = r63170723 * r63170720;
        float r63170725 = r63170722 * r63170724;
        float r63170726 = r63170721 + r63170725;
        float r63170727 = 32.0;
        float r63170728 = r63170724 * r63170720;
        float r63170729 = r63170728 * r63170720;
        float r63170730 = r63170727 * r63170729;
        float r63170731 = r63170726 + r63170730;
        return r63170731;
}

double f_id(double x) {
        double r63170732 = 120.0;
        double r63170733 = x;
        double r63170734 = r63170732 * r63170733;
        double r63170735 = -160.0;
        double r63170736 = r63170733 * r63170733;
        double r63170737 = r63170736 * r63170733;
        double r63170738 = r63170735 * r63170737;
        double r63170739 = r63170734 + r63170738;
        double r63170740 = 32.0;
        double r63170741 = r63170737 * r63170733;
        double r63170742 = r63170741 * r63170733;
        double r63170743 = r63170740 * r63170742;
        double r63170744 = r63170739 + r63170743;
        return r63170744;
}


double f_of(float x) {
        float r63170745 = 32.0;
        float r63170746 = exp(r63170745);
        float r63170747 = x;
        float r63170748 = 3;
        float r63170749 = pow(r63170747, r63170748);
        float r63170750 = pow(r63170749, r63170748);
        float r63170751 = r63170749 * r63170749;
        float r63170752 = r63170750 * r63170751;
        float r63170753 = cbrt(r63170752);
        float r63170754 = pow(r63170746, r63170753);
        float r63170755 = 120.0;
        float r63170756 = exp(r63170755);
        float r63170757 = pow(r63170756, r63170747);
        float r63170758 = -160.0;
        float r63170759 = exp(r63170758);
        float r63170760 = cbrt(r63170759);
        float r63170761 = r63170760 * r63170760;
        float r63170762 = pow(r63170761, r63170749);
        float r63170763 = pow(r63170760, r63170749);
        float r63170764 = r63170762 * r63170763;
        float r63170765 = r63170757 * r63170764;
        float r63170766 = r63170754 * r63170765;
        float r63170767 = log(r63170766);
        return r63170767;
}

double f_od(double x) {
        double r63170768 = 32.0;
        double r63170769 = exp(r63170768);
        double r63170770 = x;
        double r63170771 = 3;
        double r63170772 = pow(r63170770, r63170771);
        double r63170773 = pow(r63170772, r63170771);
        double r63170774 = r63170772 * r63170772;
        double r63170775 = r63170773 * r63170774;
        double r63170776 = cbrt(r63170775);
        double r63170777 = pow(r63170769, r63170776);
        double r63170778 = 120.0;
        double r63170779 = exp(r63170778);
        double r63170780 = pow(r63170779, r63170770);
        double r63170781 = -160.0;
        double r63170782 = exp(r63170781);
        double r63170783 = cbrt(r63170782);
        double r63170784 = r63170783 * r63170783;
        double r63170785 = pow(r63170784, r63170772);
        double r63170786 = pow(r63170783, r63170772);
        double r63170787 = r63170785 * r63170786;
        double r63170788 = r63170780 * r63170787;
        double r63170789 = r63170777 * r63170788;
        double r63170790 = log(r63170789);
        return r63170790;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63170791, r63170792, r63170793, r63170794, r63170795, r63170796, r63170797, r63170798, r63170799, r63170800, r63170801, r63170802, r63170803;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170791, "120.0", 10, MPFR_RNDN);
        mpfr_init(r63170792);
        mpfr_init(r63170793);
        mpfr_init_set_str(r63170794, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r63170795);
        mpfr_init(r63170796);
        mpfr_init(r63170797);
        mpfr_init(r63170798);
        mpfr_init_set_str(r63170799, "32.0", 10, MPFR_RNDN);
        mpfr_init(r63170800);
        mpfr_init(r63170801);
        mpfr_init(r63170802);
        mpfr_init(r63170803);
}

double f_im(double x) {
        ;
        mpfr_set_d(r63170792, x, MPFR_RNDN);
        mpfr_mul(r63170793, r63170791, r63170792, MPFR_RNDN);
        ;
        mpfr_mul(r63170795, r63170792, r63170792, MPFR_RNDN);
        mpfr_mul(r63170796, r63170795, r63170792, MPFR_RNDN);
        mpfr_mul(r63170797, r63170794, r63170796, MPFR_RNDN);
        mpfr_add(r63170798, r63170793, r63170797, MPFR_RNDN);
        ;
        mpfr_mul(r63170800, r63170796, r63170792, MPFR_RNDN);
        mpfr_mul(r63170801, r63170800, r63170792, MPFR_RNDN);
        mpfr_mul(r63170802, r63170799, r63170801, MPFR_RNDN);
        mpfr_add(r63170803, r63170798, r63170802, MPFR_RNDN);
        return mpfr_get_d(r63170803, MPFR_RNDN);
}

static mpfr_t r63170804, r63170805, r63170806, r63170807, r63170808, r63170809, r63170810, r63170811, r63170812, r63170813, r63170814, r63170815, r63170816, r63170817, r63170818, r63170819, r63170820, r63170821, r63170822, r63170823, r63170824, r63170825, r63170826;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170804, "32.0", 10, MPFR_RNDN);
        mpfr_init(r63170805);
        mpfr_init(r63170806);
        mpfr_init_set_str(r63170807, "3", 10, MPFR_RNDN);
        mpfr_init(r63170808);
        mpfr_init(r63170809);
        mpfr_init(r63170810);
        mpfr_init(r63170811);
        mpfr_init(r63170812);
        mpfr_init(r63170813);
        mpfr_init_set_str(r63170814, "120.0", 10, MPFR_RNDN);
        mpfr_init(r63170815);
        mpfr_init(r63170816);
        mpfr_init_set_str(r63170817, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r63170818);
        mpfr_init(r63170819);
        mpfr_init(r63170820);
        mpfr_init(r63170821);
        mpfr_init(r63170822);
        mpfr_init(r63170823);
        mpfr_init(r63170824);
        mpfr_init(r63170825);
        mpfr_init(r63170826);
}

double f_fm(double x) {
        ;
        mpfr_exp(r63170805, r63170804, MPFR_RNDN);
        mpfr_set_d(r63170806, x, MPFR_RNDN);
        ;
        mpfr_pow(r63170808, r63170806, r63170807, MPFR_RNDN);
        mpfr_pow(r63170809, r63170808, r63170807, MPFR_RNDN);
        mpfr_mul(r63170810, r63170808, r63170808, MPFR_RNDN);
        mpfr_mul(r63170811, r63170809, r63170810, MPFR_RNDN);
        mpfr_cbrt(r63170812, r63170811, MPFR_RNDN);
        mpfr_pow(r63170813, r63170805, r63170812, MPFR_RNDN);
        ;
        mpfr_exp(r63170815, r63170814, MPFR_RNDN);
        mpfr_pow(r63170816, r63170815, r63170806, MPFR_RNDN);
        ;
        mpfr_exp(r63170818, r63170817, MPFR_RNDN);
        mpfr_cbrt(r63170819, r63170818, MPFR_RNDN);
        mpfr_mul(r63170820, r63170819, r63170819, MPFR_RNDN);
        mpfr_pow(r63170821, r63170820, r63170808, MPFR_RNDN);
        mpfr_pow(r63170822, r63170819, r63170808, MPFR_RNDN);
        mpfr_mul(r63170823, r63170821, r63170822, MPFR_RNDN);
        mpfr_mul(r63170824, r63170816, r63170823, MPFR_RNDN);
        mpfr_mul(r63170825, r63170813, r63170824, MPFR_RNDN);
        mpfr_log(r63170826, r63170825, MPFR_RNDN);
        return mpfr_get_d(r63170826, MPFR_RNDN);
}

static mpfr_t r63170827, r63170828, r63170829, r63170830, r63170831, r63170832, r63170833, r63170834, r63170835, r63170836, r63170837, r63170838, r63170839, r63170840, r63170841, r63170842, r63170843, r63170844, r63170845, r63170846, r63170847, r63170848, r63170849;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63170827, "32.0", 10, MPFR_RNDN);
        mpfr_init(r63170828);
        mpfr_init(r63170829);
        mpfr_init_set_str(r63170830, "3", 10, MPFR_RNDN);
        mpfr_init(r63170831);
        mpfr_init(r63170832);
        mpfr_init(r63170833);
        mpfr_init(r63170834);
        mpfr_init(r63170835);
        mpfr_init(r63170836);
        mpfr_init_set_str(r63170837, "120.0", 10, MPFR_RNDN);
        mpfr_init(r63170838);
        mpfr_init(r63170839);
        mpfr_init_set_str(r63170840, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r63170841);
        mpfr_init(r63170842);
        mpfr_init(r63170843);
        mpfr_init(r63170844);
        mpfr_init(r63170845);
        mpfr_init(r63170846);
        mpfr_init(r63170847);
        mpfr_init(r63170848);
        mpfr_init(r63170849);
}

double f_dm(double x) {
        ;
        mpfr_exp(r63170828, r63170827, MPFR_RNDN);
        mpfr_set_d(r63170829, x, MPFR_RNDN);
        ;
        mpfr_pow(r63170831, r63170829, r63170830, MPFR_RNDN);
        mpfr_pow(r63170832, r63170831, r63170830, MPFR_RNDN);
        mpfr_mul(r63170833, r63170831, r63170831, MPFR_RNDN);
        mpfr_mul(r63170834, r63170832, r63170833, MPFR_RNDN);
        mpfr_cbrt(r63170835, r63170834, MPFR_RNDN);
        mpfr_pow(r63170836, r63170828, r63170835, MPFR_RNDN);
        ;
        mpfr_exp(r63170838, r63170837, MPFR_RNDN);
        mpfr_pow(r63170839, r63170838, r63170829, MPFR_RNDN);
        ;
        mpfr_exp(r63170841, r63170840, MPFR_RNDN);
        mpfr_cbrt(r63170842, r63170841, MPFR_RNDN);
        mpfr_mul(r63170843, r63170842, r63170842, MPFR_RNDN);
        mpfr_pow(r63170844, r63170843, r63170831, MPFR_RNDN);
        mpfr_pow(r63170845, r63170842, r63170831, MPFR_RNDN);
        mpfr_mul(r63170846, r63170844, r63170845, MPFR_RNDN);
        mpfr_mul(r63170847, r63170839, r63170846, MPFR_RNDN);
        mpfr_mul(r63170848, r63170836, r63170847, MPFR_RNDN);
        mpfr_log(r63170849, r63170848, MPFR_RNDN);
        return mpfr_get_d(r63170849, MPFR_RNDN);
}

