#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r4598722 = -2.1875;
        float r4598723 = x;
        float r4598724 = r4598722 * r4598723;
        float r4598725 = 19.6875;
        float r4598726 = r4598723 * r4598723;
        float r4598727 = r4598726 * r4598723;
        float r4598728 = r4598725 * r4598727;
        float r4598729 = r4598724 + r4598728;
        float r4598730 = -43.3125;
        float r4598731 = r4598727 * r4598723;
        float r4598732 = r4598731 * r4598723;
        float r4598733 = r4598730 * r4598732;
        float r4598734 = r4598729 + r4598733;
        float r4598735 = 26.8125;
        float r4598736 = r4598732 * r4598723;
        float r4598737 = r4598736 * r4598723;
        float r4598738 = r4598735 * r4598737;
        float r4598739 = r4598734 + r4598738;
        return r4598739;
}

double f_id(double x) {
        double r4598740 = -2.1875;
        double r4598741 = x;
        double r4598742 = r4598740 * r4598741;
        double r4598743 = 19.6875;
        double r4598744 = r4598741 * r4598741;
        double r4598745 = r4598744 * r4598741;
        double r4598746 = r4598743 * r4598745;
        double r4598747 = r4598742 + r4598746;
        double r4598748 = -43.3125;
        double r4598749 = r4598745 * r4598741;
        double r4598750 = r4598749 * r4598741;
        double r4598751 = r4598748 * r4598750;
        double r4598752 = r4598747 + r4598751;
        double r4598753 = 26.8125;
        double r4598754 = r4598750 * r4598741;
        double r4598755 = r4598754 * r4598741;
        double r4598756 = r4598753 * r4598755;
        double r4598757 = r4598752 + r4598756;
        return r4598757;
}


double f_of(float x) {
        float r4598758 = -2.1875;
        float r4598759 = x;
        float r4598760 = r4598758 * r4598759;
        float r4598761 = 19.6875;
        float r4598762 = r4598759 * r4598759;
        float r4598763 = r4598762 * r4598759;
        float r4598764 = r4598761 * r4598763;
        float r4598765 = r4598760 + r4598764;
        float r4598766 = -43.3125;
        float r4598767 = r4598763 * r4598759;
        float r4598768 = r4598767 * r4598759;
        float r4598769 = r4598766 * r4598768;
        float r4598770 = r4598765 + r4598769;
        float r4598771 = 26.8125;
        float r4598772 = r4598768 * r4598759;
        float r4598773 = r4598772 * r4598759;
        float r4598774 = r4598771 * r4598773;
        float r4598775 = r4598770 + r4598774;
        return r4598775;
}

double f_od(double x) {
        double r4598776 = -2.1875;
        double r4598777 = x;
        double r4598778 = r4598776 * r4598777;
        double r4598779 = 19.6875;
        double r4598780 = r4598777 * r4598777;
        double r4598781 = r4598780 * r4598777;
        double r4598782 = r4598779 * r4598781;
        double r4598783 = r4598778 + r4598782;
        double r4598784 = -43.3125;
        double r4598785 = r4598781 * r4598777;
        double r4598786 = r4598785 * r4598777;
        double r4598787 = r4598784 * r4598786;
        double r4598788 = r4598783 + r4598787;
        double r4598789 = 26.8125;
        double r4598790 = r4598786 * r4598777;
        double r4598791 = r4598790 * r4598777;
        double r4598792 = r4598789 * r4598791;
        double r4598793 = r4598788 + r4598792;
        return r4598793;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4598794, r4598795, r4598796, r4598797, r4598798, r4598799, r4598800, r4598801, r4598802, r4598803, r4598804, r4598805, r4598806, r4598807, r4598808, r4598809, r4598810, r4598811;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4598794, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4598795);
        mpfr_init(r4598796);
        mpfr_init_set_str(r4598797, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4598798);
        mpfr_init(r4598799);
        mpfr_init(r4598800);
        mpfr_init(r4598801);
        mpfr_init_set_str(r4598802, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4598803);
        mpfr_init(r4598804);
        mpfr_init(r4598805);
        mpfr_init(r4598806);
        mpfr_init_set_str(r4598807, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4598808);
        mpfr_init(r4598809);
        mpfr_init(r4598810);
        mpfr_init(r4598811);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4598795, x, MPFR_RNDN);
        mpfr_mul(r4598796, r4598794, r4598795, MPFR_RNDN);
        ;
        mpfr_mul(r4598798, r4598795, r4598795, MPFR_RNDN);
        mpfr_mul(r4598799, r4598798, r4598795, MPFR_RNDN);
        mpfr_mul(r4598800, r4598797, r4598799, MPFR_RNDN);
        mpfr_add(r4598801, r4598796, r4598800, MPFR_RNDN);
        ;
        mpfr_mul(r4598803, r4598799, r4598795, MPFR_RNDN);
        mpfr_mul(r4598804, r4598803, r4598795, MPFR_RNDN);
        mpfr_mul(r4598805, r4598802, r4598804, MPFR_RNDN);
        mpfr_add(r4598806, r4598801, r4598805, MPFR_RNDN);
        ;
        mpfr_mul(r4598808, r4598804, r4598795, MPFR_RNDN);
        mpfr_mul(r4598809, r4598808, r4598795, MPFR_RNDN);
        mpfr_mul(r4598810, r4598807, r4598809, MPFR_RNDN);
        mpfr_add(r4598811, r4598806, r4598810, MPFR_RNDN);
        return mpfr_get_d(r4598811, MPFR_RNDN);
}

static mpfr_t r4598812, r4598813, r4598814, r4598815, r4598816, r4598817, r4598818, r4598819, r4598820, r4598821, r4598822, r4598823, r4598824, r4598825, r4598826, r4598827, r4598828, r4598829;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4598812, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4598813);
        mpfr_init(r4598814);
        mpfr_init_set_str(r4598815, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4598816);
        mpfr_init(r4598817);
        mpfr_init(r4598818);
        mpfr_init(r4598819);
        mpfr_init_set_str(r4598820, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4598821);
        mpfr_init(r4598822);
        mpfr_init(r4598823);
        mpfr_init(r4598824);
        mpfr_init_set_str(r4598825, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4598826);
        mpfr_init(r4598827);
        mpfr_init(r4598828);
        mpfr_init(r4598829);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4598813, x, MPFR_RNDN);
        mpfr_mul(r4598814, r4598812, r4598813, MPFR_RNDN);
        ;
        mpfr_mul(r4598816, r4598813, r4598813, MPFR_RNDN);
        mpfr_mul(r4598817, r4598816, r4598813, MPFR_RNDN);
        mpfr_mul(r4598818, r4598815, r4598817, MPFR_RNDN);
        mpfr_add(r4598819, r4598814, r4598818, MPFR_RNDN);
        ;
        mpfr_mul(r4598821, r4598817, r4598813, MPFR_RNDN);
        mpfr_mul(r4598822, r4598821, r4598813, MPFR_RNDN);
        mpfr_mul(r4598823, r4598820, r4598822, MPFR_RNDN);
        mpfr_add(r4598824, r4598819, r4598823, MPFR_RNDN);
        ;
        mpfr_mul(r4598826, r4598822, r4598813, MPFR_RNDN);
        mpfr_mul(r4598827, r4598826, r4598813, MPFR_RNDN);
        mpfr_mul(r4598828, r4598825, r4598827, MPFR_RNDN);
        mpfr_add(r4598829, r4598824, r4598828, MPFR_RNDN);
        return mpfr_get_d(r4598829, MPFR_RNDN);
}

static mpfr_t r4598830, r4598831, r4598832, r4598833, r4598834, r4598835, r4598836, r4598837, r4598838, r4598839, r4598840, r4598841, r4598842, r4598843, r4598844, r4598845, r4598846, r4598847;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4598830, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4598831);
        mpfr_init(r4598832);
        mpfr_init_set_str(r4598833, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4598834);
        mpfr_init(r4598835);
        mpfr_init(r4598836);
        mpfr_init(r4598837);
        mpfr_init_set_str(r4598838, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4598839);
        mpfr_init(r4598840);
        mpfr_init(r4598841);
        mpfr_init(r4598842);
        mpfr_init_set_str(r4598843, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4598844);
        mpfr_init(r4598845);
        mpfr_init(r4598846);
        mpfr_init(r4598847);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4598831, x, MPFR_RNDN);
        mpfr_mul(r4598832, r4598830, r4598831, MPFR_RNDN);
        ;
        mpfr_mul(r4598834, r4598831, r4598831, MPFR_RNDN);
        mpfr_mul(r4598835, r4598834, r4598831, MPFR_RNDN);
        mpfr_mul(r4598836, r4598833, r4598835, MPFR_RNDN);
        mpfr_add(r4598837, r4598832, r4598836, MPFR_RNDN);
        ;
        mpfr_mul(r4598839, r4598835, r4598831, MPFR_RNDN);
        mpfr_mul(r4598840, r4598839, r4598831, MPFR_RNDN);
        mpfr_mul(r4598841, r4598838, r4598840, MPFR_RNDN);
        mpfr_add(r4598842, r4598837, r4598841, MPFR_RNDN);
        ;
        mpfr_mul(r4598844, r4598840, r4598831, MPFR_RNDN);
        mpfr_mul(r4598845, r4598844, r4598831, MPFR_RNDN);
        mpfr_mul(r4598846, r4598843, r4598845, MPFR_RNDN);
        mpfr_add(r4598847, r4598842, r4598846, MPFR_RNDN);
        return mpfr_get_d(r4598847, MPFR_RNDN);
}

