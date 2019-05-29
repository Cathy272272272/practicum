#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r13457664 = 1.0;
        float r13457665 = -6.0;
        float r13457666 = x;
        float r13457667 = r13457665 * r13457666;
        float r13457668 = r13457664 + r13457667;
        float r13457669 = 7.5;
        float r13457670 = r13457666 * r13457666;
        float r13457671 = r13457669 * r13457670;
        float r13457672 = r13457668 + r13457671;
        float r13457673 = -3.333333;
        float r13457674 = r13457670 * r13457666;
        float r13457675 = r13457673 * r13457674;
        float r13457676 = r13457672 + r13457675;
        float r13457677 = 0.625;
        float r13457678 = r13457674 * r13457666;
        float r13457679 = r13457677 * r13457678;
        float r13457680 = r13457676 + r13457679;
        float r13457681 = -0.05;
        float r13457682 = r13457678 * r13457666;
        float r13457683 = r13457681 * r13457682;
        float r13457684 = r13457680 + r13457683;
        float r13457685 = 0.001389;
        float r13457686 = r13457682 * r13457666;
        float r13457687 = r13457685 * r13457686;
        float r13457688 = r13457684 + r13457687;
        return r13457688;
}

double f_id(double x) {
        double r13457689 = 1.0;
        double r13457690 = -6.0;
        double r13457691 = x;
        double r13457692 = r13457690 * r13457691;
        double r13457693 = r13457689 + r13457692;
        double r13457694 = 7.5;
        double r13457695 = r13457691 * r13457691;
        double r13457696 = r13457694 * r13457695;
        double r13457697 = r13457693 + r13457696;
        double r13457698 = -3.333333;
        double r13457699 = r13457695 * r13457691;
        double r13457700 = r13457698 * r13457699;
        double r13457701 = r13457697 + r13457700;
        double r13457702 = 0.625;
        double r13457703 = r13457699 * r13457691;
        double r13457704 = r13457702 * r13457703;
        double r13457705 = r13457701 + r13457704;
        double r13457706 = -0.05;
        double r13457707 = r13457703 * r13457691;
        double r13457708 = r13457706 * r13457707;
        double r13457709 = r13457705 + r13457708;
        double r13457710 = 0.001389;
        double r13457711 = r13457707 * r13457691;
        double r13457712 = r13457710 * r13457711;
        double r13457713 = r13457709 + r13457712;
        return r13457713;
}


double f_of(float x) {
        float r13457714 = x;
        float r13457715 = 0.001389;
        float r13457716 = r13457715 * r13457714;
        float r13457717 = 2;
        float r13457718 = r13457717 + r13457717;
        float r13457719 = pow(r13457714, r13457718);
        float r13457720 = r13457716 * r13457719;
        float r13457721 = r13457714 * r13457720;
        float r13457722 = -6.0;
        float r13457723 = r13457714 * r13457722;
        float r13457724 = 1.0;
        float r13457725 = r13457723 + r13457724;
        float r13457726 = r13457721 + r13457725;
        float r13457727 = r13457714 * r13457714;
        float r13457728 = r13457727 * r13457727;
        float r13457729 = 0.625;
        float r13457730 = -0.05;
        float r13457731 = r13457730 * r13457714;
        float r13457732 = r13457729 + r13457731;
        float r13457733 = r13457728 * r13457732;
        float r13457734 = -3.333333;
        float r13457735 = r13457734 * r13457714;
        float r13457736 = 7.5;
        float r13457737 = r13457735 + r13457736;
        float r13457738 = r13457727 * r13457737;
        float r13457739 = r13457733 + r13457738;
        float r13457740 = r13457726 + r13457739;
        return r13457740;
}

double f_od(double x) {
        double r13457741 = x;
        double r13457742 = 0.001389;
        double r13457743 = r13457742 * r13457741;
        double r13457744 = 2;
        double r13457745 = r13457744 + r13457744;
        double r13457746 = pow(r13457741, r13457745);
        double r13457747 = r13457743 * r13457746;
        double r13457748 = r13457741 * r13457747;
        double r13457749 = -6.0;
        double r13457750 = r13457741 * r13457749;
        double r13457751 = 1.0;
        double r13457752 = r13457750 + r13457751;
        double r13457753 = r13457748 + r13457752;
        double r13457754 = r13457741 * r13457741;
        double r13457755 = r13457754 * r13457754;
        double r13457756 = 0.625;
        double r13457757 = -0.05;
        double r13457758 = r13457757 * r13457741;
        double r13457759 = r13457756 + r13457758;
        double r13457760 = r13457755 * r13457759;
        double r13457761 = -3.333333;
        double r13457762 = r13457761 * r13457741;
        double r13457763 = 7.5;
        double r13457764 = r13457762 + r13457763;
        double r13457765 = r13457754 * r13457764;
        double r13457766 = r13457760 + r13457765;
        double r13457767 = r13457753 + r13457766;
        return r13457767;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13457768, r13457769, r13457770, r13457771, r13457772, r13457773, r13457774, r13457775, r13457776, r13457777, r13457778, r13457779, r13457780, r13457781, r13457782, r13457783, r13457784, r13457785, r13457786, r13457787, r13457788, r13457789, r13457790, r13457791, r13457792;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13457768, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457769, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r13457770);
        mpfr_init(r13457771);
        mpfr_init(r13457772);
        mpfr_init_set_str(r13457773, "7.5", 10, MPFR_RNDN);
        mpfr_init(r13457774);
        mpfr_init(r13457775);
        mpfr_init(r13457776);
        mpfr_init_set_str(r13457777, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r13457778);
        mpfr_init(r13457779);
        mpfr_init(r13457780);
        mpfr_init_set_str(r13457781, "0.625", 10, MPFR_RNDN);
        mpfr_init(r13457782);
        mpfr_init(r13457783);
        mpfr_init(r13457784);
        mpfr_init_set_str(r13457785, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r13457786);
        mpfr_init(r13457787);
        mpfr_init(r13457788);
        mpfr_init_set_str(r13457789, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r13457790);
        mpfr_init(r13457791);
        mpfr_init(r13457792);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13457770, x, MPFR_RNDN);
        mpfr_mul(r13457771, r13457769, r13457770, MPFR_RNDN);
        mpfr_add(r13457772, r13457768, r13457771, MPFR_RNDN);
        ;
        mpfr_mul(r13457774, r13457770, r13457770, MPFR_RNDN);
        mpfr_mul(r13457775, r13457773, r13457774, MPFR_RNDN);
        mpfr_add(r13457776, r13457772, r13457775, MPFR_RNDN);
        ;
        mpfr_mul(r13457778, r13457774, r13457770, MPFR_RNDN);
        mpfr_mul(r13457779, r13457777, r13457778, MPFR_RNDN);
        mpfr_add(r13457780, r13457776, r13457779, MPFR_RNDN);
        ;
        mpfr_mul(r13457782, r13457778, r13457770, MPFR_RNDN);
        mpfr_mul(r13457783, r13457781, r13457782, MPFR_RNDN);
        mpfr_add(r13457784, r13457780, r13457783, MPFR_RNDN);
        ;
        mpfr_mul(r13457786, r13457782, r13457770, MPFR_RNDN);
        mpfr_mul(r13457787, r13457785, r13457786, MPFR_RNDN);
        mpfr_add(r13457788, r13457784, r13457787, MPFR_RNDN);
        ;
        mpfr_mul(r13457790, r13457786, r13457770, MPFR_RNDN);
        mpfr_mul(r13457791, r13457789, r13457790, MPFR_RNDN);
        mpfr_add(r13457792, r13457788, r13457791, MPFR_RNDN);
        return mpfr_get_d(r13457792, MPFR_RNDN);
}

static mpfr_t r13457793, r13457794, r13457795, r13457796, r13457797, r13457798, r13457799, r13457800, r13457801, r13457802, r13457803, r13457804, r13457805, r13457806, r13457807, r13457808, r13457809, r13457810, r13457811, r13457812, r13457813, r13457814, r13457815, r13457816, r13457817, r13457818, r13457819;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r13457793);
        mpfr_init_set_str(r13457794, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r13457795);
        mpfr_init_set_str(r13457796, "2", 10, MPFR_RNDN);
        mpfr_init(r13457797);
        mpfr_init(r13457798);
        mpfr_init(r13457799);
        mpfr_init(r13457800);
        mpfr_init_set_str(r13457801, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r13457802);
        mpfr_init_set_str(r13457803, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457804);
        mpfr_init(r13457805);
        mpfr_init(r13457806);
        mpfr_init(r13457807);
        mpfr_init_set_str(r13457808, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457809, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r13457810);
        mpfr_init(r13457811);
        mpfr_init(r13457812);
        mpfr_init_set_str(r13457813, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r13457814);
        mpfr_init_set_str(r13457815, "7.5", 10, MPFR_RNDN);
        mpfr_init(r13457816);
        mpfr_init(r13457817);
        mpfr_init(r13457818);
        mpfr_init(r13457819);
}

double f_fm(double x) {
        mpfr_set_d(r13457793, x, MPFR_RNDN);
        ;
        mpfr_mul(r13457795, r13457794, r13457793, MPFR_RNDN);
        ;
        mpfr_add(r13457797, r13457796, r13457796, MPFR_RNDN);
        mpfr_pow(r13457798, r13457793, r13457797, MPFR_RNDN);
        mpfr_mul(r13457799, r13457795, r13457798, MPFR_RNDN);
        mpfr_mul(r13457800, r13457793, r13457799, MPFR_RNDN);
        ;
        mpfr_mul(r13457802, r13457793, r13457801, MPFR_RNDN);
        ;
        mpfr_add(r13457804, r13457802, r13457803, MPFR_RNDN);
        mpfr_add(r13457805, r13457800, r13457804, MPFR_RNDN);
        mpfr_mul(r13457806, r13457793, r13457793, MPFR_RNDN);
        mpfr_mul(r13457807, r13457806, r13457806, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457810, r13457809, r13457793, MPFR_RNDN);
        mpfr_add(r13457811, r13457808, r13457810, MPFR_RNDN);
        mpfr_mul(r13457812, r13457807, r13457811, MPFR_RNDN);
        ;
        mpfr_mul(r13457814, r13457813, r13457793, MPFR_RNDN);
        ;
        mpfr_add(r13457816, r13457814, r13457815, MPFR_RNDN);
        mpfr_mul(r13457817, r13457806, r13457816, MPFR_RNDN);
        mpfr_add(r13457818, r13457812, r13457817, MPFR_RNDN);
        mpfr_add(r13457819, r13457805, r13457818, MPFR_RNDN);
        return mpfr_get_d(r13457819, MPFR_RNDN);
}

static mpfr_t r13457820, r13457821, r13457822, r13457823, r13457824, r13457825, r13457826, r13457827, r13457828, r13457829, r13457830, r13457831, r13457832, r13457833, r13457834, r13457835, r13457836, r13457837, r13457838, r13457839, r13457840, r13457841, r13457842, r13457843, r13457844, r13457845, r13457846;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r13457820);
        mpfr_init_set_str(r13457821, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r13457822);
        mpfr_init_set_str(r13457823, "2", 10, MPFR_RNDN);
        mpfr_init(r13457824);
        mpfr_init(r13457825);
        mpfr_init(r13457826);
        mpfr_init(r13457827);
        mpfr_init_set_str(r13457828, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r13457829);
        mpfr_init_set_str(r13457830, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457831);
        mpfr_init(r13457832);
        mpfr_init(r13457833);
        mpfr_init(r13457834);
        mpfr_init_set_str(r13457835, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457836, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r13457837);
        mpfr_init(r13457838);
        mpfr_init(r13457839);
        mpfr_init_set_str(r13457840, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r13457841);
        mpfr_init_set_str(r13457842, "7.5", 10, MPFR_RNDN);
        mpfr_init(r13457843);
        mpfr_init(r13457844);
        mpfr_init(r13457845);
        mpfr_init(r13457846);
}

double f_dm(double x) {
        mpfr_set_d(r13457820, x, MPFR_RNDN);
        ;
        mpfr_mul(r13457822, r13457821, r13457820, MPFR_RNDN);
        ;
        mpfr_add(r13457824, r13457823, r13457823, MPFR_RNDN);
        mpfr_pow(r13457825, r13457820, r13457824, MPFR_RNDN);
        mpfr_mul(r13457826, r13457822, r13457825, MPFR_RNDN);
        mpfr_mul(r13457827, r13457820, r13457826, MPFR_RNDN);
        ;
        mpfr_mul(r13457829, r13457820, r13457828, MPFR_RNDN);
        ;
        mpfr_add(r13457831, r13457829, r13457830, MPFR_RNDN);
        mpfr_add(r13457832, r13457827, r13457831, MPFR_RNDN);
        mpfr_mul(r13457833, r13457820, r13457820, MPFR_RNDN);
        mpfr_mul(r13457834, r13457833, r13457833, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r13457837, r13457836, r13457820, MPFR_RNDN);
        mpfr_add(r13457838, r13457835, r13457837, MPFR_RNDN);
        mpfr_mul(r13457839, r13457834, r13457838, MPFR_RNDN);
        ;
        mpfr_mul(r13457841, r13457840, r13457820, MPFR_RNDN);
        ;
        mpfr_add(r13457843, r13457841, r13457842, MPFR_RNDN);
        mpfr_mul(r13457844, r13457833, r13457843, MPFR_RNDN);
        mpfr_add(r13457845, r13457839, r13457844, MPFR_RNDN);
        mpfr_add(r13457846, r13457832, r13457845, MPFR_RNDN);
        return mpfr_get_d(r13457846, MPFR_RNDN);
}

