#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r61032697 = -1680.0;
        float r61032698 = x;
        float r61032699 = r61032697 * r61032698;
        float r61032700 = 3360.0;
        float r61032701 = r61032698 * r61032698;
        float r61032702 = r61032701 * r61032698;
        float r61032703 = r61032700 * r61032702;
        float r61032704 = r61032699 + r61032703;
        float r61032705 = -1344.0;
        float r61032706 = r61032702 * r61032698;
        float r61032707 = r61032706 * r61032698;
        float r61032708 = r61032705 * r61032707;
        float r61032709 = r61032704 + r61032708;
        float r61032710 = 128.0;
        float r61032711 = r61032707 * r61032698;
        float r61032712 = r61032711 * r61032698;
        float r61032713 = r61032710 * r61032712;
        float r61032714 = r61032709 + r61032713;
        return r61032714;
}

double f_id(double x) {
        double r61032715 = -1680.0;
        double r61032716 = x;
        double r61032717 = r61032715 * r61032716;
        double r61032718 = 3360.0;
        double r61032719 = r61032716 * r61032716;
        double r61032720 = r61032719 * r61032716;
        double r61032721 = r61032718 * r61032720;
        double r61032722 = r61032717 + r61032721;
        double r61032723 = -1344.0;
        double r61032724 = r61032720 * r61032716;
        double r61032725 = r61032724 * r61032716;
        double r61032726 = r61032723 * r61032725;
        double r61032727 = r61032722 + r61032726;
        double r61032728 = 128.0;
        double r61032729 = r61032725 * r61032716;
        double r61032730 = r61032729 * r61032716;
        double r61032731 = r61032728 * r61032730;
        double r61032732 = r61032727 + r61032731;
        return r61032732;
}


double f_of(float x) {
        float r61032733 = -1680.0;
        float r61032734 = x;
        float r61032735 = r61032733 * r61032734;
        float r61032736 = r61032735 * r61032735;
        float r61032737 = -1344.0;
        float r61032738 = r61032737 * r61032734;
        float r61032739 = r61032734 * r61032734;
        float r61032740 = r61032738 * r61032739;
        float r61032741 = 3360.0;
        float r61032742 = r61032741 * r61032734;
        float r61032743 = r61032740 + r61032742;
        float r61032744 = r61032743 * r61032739;
        float r61032745 = r61032744 * r61032744;
        float r61032746 = r61032736 - r61032745;
        float r61032747 = r61032735 - r61032744;
        float r61032748 = r61032746 / r61032747;
        float r61032749 = 128.0;
        float r61032750 = r61032739 * r61032734;
        float r61032751 = r61032750 * r61032734;
        float r61032752 = r61032751 * r61032734;
        float r61032753 = r61032752 * r61032734;
        float r61032754 = r61032753 * r61032734;
        float r61032755 = r61032749 * r61032754;
        float r61032756 = r61032748 + r61032755;
        return r61032756;
}

double f_od(double x) {
        double r61032757 = -1680.0;
        double r61032758 = x;
        double r61032759 = r61032757 * r61032758;
        double r61032760 = r61032759 * r61032759;
        double r61032761 = -1344.0;
        double r61032762 = r61032761 * r61032758;
        double r61032763 = r61032758 * r61032758;
        double r61032764 = r61032762 * r61032763;
        double r61032765 = 3360.0;
        double r61032766 = r61032765 * r61032758;
        double r61032767 = r61032764 + r61032766;
        double r61032768 = r61032767 * r61032763;
        double r61032769 = r61032768 * r61032768;
        double r61032770 = r61032760 - r61032769;
        double r61032771 = r61032759 - r61032768;
        double r61032772 = r61032770 / r61032771;
        double r61032773 = 128.0;
        double r61032774 = r61032763 * r61032758;
        double r61032775 = r61032774 * r61032758;
        double r61032776 = r61032775 * r61032758;
        double r61032777 = r61032776 * r61032758;
        double r61032778 = r61032777 * r61032758;
        double r61032779 = r61032773 * r61032778;
        double r61032780 = r61032772 + r61032779;
        return r61032780;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61032781, r61032782, r61032783, r61032784, r61032785, r61032786, r61032787, r61032788, r61032789, r61032790, r61032791, r61032792, r61032793, r61032794, r61032795, r61032796, r61032797, r61032798;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032781, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r61032782);
        mpfr_init(r61032783);
        mpfr_init_set_str(r61032784, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r61032785);
        mpfr_init(r61032786);
        mpfr_init(r61032787);
        mpfr_init(r61032788);
        mpfr_init_set_str(r61032789, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r61032790);
        mpfr_init(r61032791);
        mpfr_init(r61032792);
        mpfr_init(r61032793);
        mpfr_init_set_str(r61032794, "128.0", 10, MPFR_RNDN);
        mpfr_init(r61032795);
        mpfr_init(r61032796);
        mpfr_init(r61032797);
        mpfr_init(r61032798);
}

double f_im(double x) {
        ;
        mpfr_set_d(r61032782, x, MPFR_RNDN);
        mpfr_mul(r61032783, r61032781, r61032782, MPFR_RNDN);
        ;
        mpfr_mul(r61032785, r61032782, r61032782, MPFR_RNDN);
        mpfr_mul(r61032786, r61032785, r61032782, MPFR_RNDN);
        mpfr_mul(r61032787, r61032784, r61032786, MPFR_RNDN);
        mpfr_add(r61032788, r61032783, r61032787, MPFR_RNDN);
        ;
        mpfr_mul(r61032790, r61032786, r61032782, MPFR_RNDN);
        mpfr_mul(r61032791, r61032790, r61032782, MPFR_RNDN);
        mpfr_mul(r61032792, r61032789, r61032791, MPFR_RNDN);
        mpfr_add(r61032793, r61032788, r61032792, MPFR_RNDN);
        ;
        mpfr_mul(r61032795, r61032791, r61032782, MPFR_RNDN);
        mpfr_mul(r61032796, r61032795, r61032782, MPFR_RNDN);
        mpfr_mul(r61032797, r61032794, r61032796, MPFR_RNDN);
        mpfr_add(r61032798, r61032793, r61032797, MPFR_RNDN);
        return mpfr_get_d(r61032798, MPFR_RNDN);
}

static mpfr_t r61032799, r61032800, r61032801, r61032802, r61032803, r61032804, r61032805, r61032806, r61032807, r61032808, r61032809, r61032810, r61032811, r61032812, r61032813, r61032814, r61032815, r61032816, r61032817, r61032818, r61032819, r61032820, r61032821, r61032822;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032799, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r61032800);
        mpfr_init(r61032801);
        mpfr_init(r61032802);
        mpfr_init_set_str(r61032803, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r61032804);
        mpfr_init(r61032805);
        mpfr_init(r61032806);
        mpfr_init_set_str(r61032807, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r61032808);
        mpfr_init(r61032809);
        mpfr_init(r61032810);
        mpfr_init(r61032811);
        mpfr_init(r61032812);
        mpfr_init(r61032813);
        mpfr_init(r61032814);
        mpfr_init_set_str(r61032815, "128.0", 10, MPFR_RNDN);
        mpfr_init(r61032816);
        mpfr_init(r61032817);
        mpfr_init(r61032818);
        mpfr_init(r61032819);
        mpfr_init(r61032820);
        mpfr_init(r61032821);
        mpfr_init(r61032822);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r61032800, x, MPFR_RNDN);
        mpfr_mul(r61032801, r61032799, r61032800, MPFR_RNDN);
        mpfr_mul(r61032802, r61032801, r61032801, MPFR_RNDN);
        ;
        mpfr_mul(r61032804, r61032803, r61032800, MPFR_RNDN);
        mpfr_mul(r61032805, r61032800, r61032800, MPFR_RNDN);
        mpfr_mul(r61032806, r61032804, r61032805, MPFR_RNDN);
        ;
        mpfr_mul(r61032808, r61032807, r61032800, MPFR_RNDN);
        mpfr_add(r61032809, r61032806, r61032808, MPFR_RNDN);
        mpfr_mul(r61032810, r61032809, r61032805, MPFR_RNDN);
        mpfr_mul(r61032811, r61032810, r61032810, MPFR_RNDN);
        mpfr_sub(r61032812, r61032802, r61032811, MPFR_RNDN);
        mpfr_sub(r61032813, r61032801, r61032810, MPFR_RNDN);
        mpfr_div(r61032814, r61032812, r61032813, MPFR_RNDN);
        ;
        mpfr_mul(r61032816, r61032805, r61032800, MPFR_RNDN);
        mpfr_mul(r61032817, r61032816, r61032800, MPFR_RNDN);
        mpfr_mul(r61032818, r61032817, r61032800, MPFR_RNDN);
        mpfr_mul(r61032819, r61032818, r61032800, MPFR_RNDN);
        mpfr_mul(r61032820, r61032819, r61032800, MPFR_RNDN);
        mpfr_mul(r61032821, r61032815, r61032820, MPFR_RNDN);
        mpfr_add(r61032822, r61032814, r61032821, MPFR_RNDN);
        return mpfr_get_d(r61032822, MPFR_RNDN);
}

static mpfr_t r61032823, r61032824, r61032825, r61032826, r61032827, r61032828, r61032829, r61032830, r61032831, r61032832, r61032833, r61032834, r61032835, r61032836, r61032837, r61032838, r61032839, r61032840, r61032841, r61032842, r61032843, r61032844, r61032845, r61032846;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032823, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r61032824);
        mpfr_init(r61032825);
        mpfr_init(r61032826);
        mpfr_init_set_str(r61032827, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r61032828);
        mpfr_init(r61032829);
        mpfr_init(r61032830);
        mpfr_init_set_str(r61032831, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r61032832);
        mpfr_init(r61032833);
        mpfr_init(r61032834);
        mpfr_init(r61032835);
        mpfr_init(r61032836);
        mpfr_init(r61032837);
        mpfr_init(r61032838);
        mpfr_init_set_str(r61032839, "128.0", 10, MPFR_RNDN);
        mpfr_init(r61032840);
        mpfr_init(r61032841);
        mpfr_init(r61032842);
        mpfr_init(r61032843);
        mpfr_init(r61032844);
        mpfr_init(r61032845);
        mpfr_init(r61032846);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r61032824, x, MPFR_RNDN);
        mpfr_mul(r61032825, r61032823, r61032824, MPFR_RNDN);
        mpfr_mul(r61032826, r61032825, r61032825, MPFR_RNDN);
        ;
        mpfr_mul(r61032828, r61032827, r61032824, MPFR_RNDN);
        mpfr_mul(r61032829, r61032824, r61032824, MPFR_RNDN);
        mpfr_mul(r61032830, r61032828, r61032829, MPFR_RNDN);
        ;
        mpfr_mul(r61032832, r61032831, r61032824, MPFR_RNDN);
        mpfr_add(r61032833, r61032830, r61032832, MPFR_RNDN);
        mpfr_mul(r61032834, r61032833, r61032829, MPFR_RNDN);
        mpfr_mul(r61032835, r61032834, r61032834, MPFR_RNDN);
        mpfr_sub(r61032836, r61032826, r61032835, MPFR_RNDN);
        mpfr_sub(r61032837, r61032825, r61032834, MPFR_RNDN);
        mpfr_div(r61032838, r61032836, r61032837, MPFR_RNDN);
        ;
        mpfr_mul(r61032840, r61032829, r61032824, MPFR_RNDN);
        mpfr_mul(r61032841, r61032840, r61032824, MPFR_RNDN);
        mpfr_mul(r61032842, r61032841, r61032824, MPFR_RNDN);
        mpfr_mul(r61032843, r61032842, r61032824, MPFR_RNDN);
        mpfr_mul(r61032844, r61032843, r61032824, MPFR_RNDN);
        mpfr_mul(r61032845, r61032839, r61032844, MPFR_RNDN);
        mpfr_add(r61032846, r61032838, r61032845, MPFR_RNDN);
        return mpfr_get_d(r61032846, MPFR_RNDN);
}

