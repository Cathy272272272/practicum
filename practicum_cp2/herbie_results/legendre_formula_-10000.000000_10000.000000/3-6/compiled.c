#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6860722 = -0.3125;
        float r6860723 = 6.5625;
        float r6860724 = x;
        float r6860725 = r6860724 * r6860724;
        float r6860726 = r6860723 * r6860725;
        float r6860727 = r6860722 + r6860726;
        float r6860728 = -19.6875;
        float r6860729 = r6860725 * r6860724;
        float r6860730 = r6860729 * r6860724;
        float r6860731 = r6860728 * r6860730;
        float r6860732 = r6860727 + r6860731;
        float r6860733 = 14.4375;
        float r6860734 = r6860730 * r6860724;
        float r6860735 = r6860734 * r6860724;
        float r6860736 = r6860733 * r6860735;
        float r6860737 = r6860732 + r6860736;
        return r6860737;
}

double f_id(double x) {
        double r6860738 = -0.3125;
        double r6860739 = 6.5625;
        double r6860740 = x;
        double r6860741 = r6860740 * r6860740;
        double r6860742 = r6860739 * r6860741;
        double r6860743 = r6860738 + r6860742;
        double r6860744 = -19.6875;
        double r6860745 = r6860741 * r6860740;
        double r6860746 = r6860745 * r6860740;
        double r6860747 = r6860744 * r6860746;
        double r6860748 = r6860743 + r6860747;
        double r6860749 = 14.4375;
        double r6860750 = r6860746 * r6860740;
        double r6860751 = r6860750 * r6860740;
        double r6860752 = r6860749 * r6860751;
        double r6860753 = r6860748 + r6860752;
        return r6860753;
}


double f_of(float x) {
        float r6860754 = x;
        float r6860755 = 6.5625;
        float r6860756 = r6860754 * r6860755;
        float r6860757 = r6860756 * r6860754;
        float r6860758 = -0.3125;
        float r6860759 = r6860757 + r6860758;
        float r6860760 = 2;
        float r6860761 = r6860760 + r6860760;
        float r6860762 = pow(r6860754, r6860761);
        float r6860763 = -19.6875;
        float r6860764 = r6860754 * r6860754;
        float r6860765 = 14.4375;
        float r6860766 = r6860764 * r6860765;
        float r6860767 = r6860763 + r6860766;
        float r6860768 = r6860762 * r6860767;
        float r6860769 = r6860759 + r6860768;
        return r6860769;
}

double f_od(double x) {
        double r6860770 = x;
        double r6860771 = 6.5625;
        double r6860772 = r6860770 * r6860771;
        double r6860773 = r6860772 * r6860770;
        double r6860774 = -0.3125;
        double r6860775 = r6860773 + r6860774;
        double r6860776 = 2;
        double r6860777 = r6860776 + r6860776;
        double r6860778 = pow(r6860770, r6860777);
        double r6860779 = -19.6875;
        double r6860780 = r6860770 * r6860770;
        double r6860781 = 14.4375;
        double r6860782 = r6860780 * r6860781;
        double r6860783 = r6860779 + r6860782;
        double r6860784 = r6860778 * r6860783;
        double r6860785 = r6860775 + r6860784;
        return r6860785;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6860786, r6860787, r6860788, r6860789, r6860790, r6860791, r6860792, r6860793, r6860794, r6860795, r6860796, r6860797, r6860798, r6860799, r6860800, r6860801;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6860786, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860787, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6860788);
        mpfr_init(r6860789);
        mpfr_init(r6860790);
        mpfr_init(r6860791);
        mpfr_init_set_str(r6860792, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6860793);
        mpfr_init(r6860794);
        mpfr_init(r6860795);
        mpfr_init(r6860796);
        mpfr_init_set_str(r6860797, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6860798);
        mpfr_init(r6860799);
        mpfr_init(r6860800);
        mpfr_init(r6860801);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6860788, x, MPFR_RNDN);
        mpfr_mul(r6860789, r6860788, r6860788, MPFR_RNDN);
        mpfr_mul(r6860790, r6860787, r6860789, MPFR_RNDN);
        mpfr_add(r6860791, r6860786, r6860790, MPFR_RNDN);
        ;
        mpfr_mul(r6860793, r6860789, r6860788, MPFR_RNDN);
        mpfr_mul(r6860794, r6860793, r6860788, MPFR_RNDN);
        mpfr_mul(r6860795, r6860792, r6860794, MPFR_RNDN);
        mpfr_add(r6860796, r6860791, r6860795, MPFR_RNDN);
        ;
        mpfr_mul(r6860798, r6860794, r6860788, MPFR_RNDN);
        mpfr_mul(r6860799, r6860798, r6860788, MPFR_RNDN);
        mpfr_mul(r6860800, r6860797, r6860799, MPFR_RNDN);
        mpfr_add(r6860801, r6860796, r6860800, MPFR_RNDN);
        return mpfr_get_d(r6860801, MPFR_RNDN);
}

static mpfr_t r6860802, r6860803, r6860804, r6860805, r6860806, r6860807, r6860808, r6860809, r6860810, r6860811, r6860812, r6860813, r6860814, r6860815, r6860816, r6860817;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6860802);
        mpfr_init_set_str(r6860803, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6860804);
        mpfr_init(r6860805);
        mpfr_init_set_str(r6860806, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6860807);
        mpfr_init_set_str(r6860808, "2", 10, MPFR_RNDN);
        mpfr_init(r6860809);
        mpfr_init(r6860810);
        mpfr_init_set_str(r6860811, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6860812);
        mpfr_init_set_str(r6860813, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6860814);
        mpfr_init(r6860815);
        mpfr_init(r6860816);
        mpfr_init(r6860817);
}

double f_fm(double x) {
        mpfr_set_d(r6860802, x, MPFR_RNDN);
        ;
        mpfr_mul(r6860804, r6860802, r6860803, MPFR_RNDN);
        mpfr_mul(r6860805, r6860804, r6860802, MPFR_RNDN);
        ;
        mpfr_add(r6860807, r6860805, r6860806, MPFR_RNDN);
        ;
        mpfr_add(r6860809, r6860808, r6860808, MPFR_RNDN);
        mpfr_pow(r6860810, r6860802, r6860809, MPFR_RNDN);
        ;
        mpfr_mul(r6860812, r6860802, r6860802, MPFR_RNDN);
        ;
        mpfr_mul(r6860814, r6860812, r6860813, MPFR_RNDN);
        mpfr_add(r6860815, r6860811, r6860814, MPFR_RNDN);
        mpfr_mul(r6860816, r6860810, r6860815, MPFR_RNDN);
        mpfr_add(r6860817, r6860807, r6860816, MPFR_RNDN);
        return mpfr_get_d(r6860817, MPFR_RNDN);
}

static mpfr_t r6860818, r6860819, r6860820, r6860821, r6860822, r6860823, r6860824, r6860825, r6860826, r6860827, r6860828, r6860829, r6860830, r6860831, r6860832, r6860833;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6860818);
        mpfr_init_set_str(r6860819, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r6860820);
        mpfr_init(r6860821);
        mpfr_init_set_str(r6860822, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r6860823);
        mpfr_init_set_str(r6860824, "2", 10, MPFR_RNDN);
        mpfr_init(r6860825);
        mpfr_init(r6860826);
        mpfr_init_set_str(r6860827, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r6860828);
        mpfr_init_set_str(r6860829, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r6860830);
        mpfr_init(r6860831);
        mpfr_init(r6860832);
        mpfr_init(r6860833);
}

double f_dm(double x) {
        mpfr_set_d(r6860818, x, MPFR_RNDN);
        ;
        mpfr_mul(r6860820, r6860818, r6860819, MPFR_RNDN);
        mpfr_mul(r6860821, r6860820, r6860818, MPFR_RNDN);
        ;
        mpfr_add(r6860823, r6860821, r6860822, MPFR_RNDN);
        ;
        mpfr_add(r6860825, r6860824, r6860824, MPFR_RNDN);
        mpfr_pow(r6860826, r6860818, r6860825, MPFR_RNDN);
        ;
        mpfr_mul(r6860828, r6860818, r6860818, MPFR_RNDN);
        ;
        mpfr_mul(r6860830, r6860828, r6860829, MPFR_RNDN);
        mpfr_add(r6860831, r6860827, r6860830, MPFR_RNDN);
        mpfr_mul(r6860832, r6860826, r6860831, MPFR_RNDN);
        mpfr_add(r6860833, r6860823, r6860832, MPFR_RNDN);
        return mpfr_get_d(r6860833, MPFR_RNDN);
}

