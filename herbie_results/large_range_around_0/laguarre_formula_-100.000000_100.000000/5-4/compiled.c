#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6293749 = 1.0;
        float r6293750 = -4.0;
        float r6293751 = x;
        float r6293752 = r6293750 * r6293751;
        float r6293753 = r6293749 + r6293752;
        float r6293754 = 3.0;
        float r6293755 = r6293751 * r6293751;
        float r6293756 = r6293754 * r6293755;
        float r6293757 = r6293753 + r6293756;
        float r6293758 = -0.666667;
        float r6293759 = r6293755 * r6293751;
        float r6293760 = r6293758 * r6293759;
        float r6293761 = r6293757 + r6293760;
        float r6293762 = 0.041667;
        float r6293763 = r6293759 * r6293751;
        float r6293764 = r6293762 * r6293763;
        float r6293765 = r6293761 + r6293764;
        return r6293765;
}

double f_id(double x) {
        double r6293766 = 1.0;
        double r6293767 = -4.0;
        double r6293768 = x;
        double r6293769 = r6293767 * r6293768;
        double r6293770 = r6293766 + r6293769;
        double r6293771 = 3.0;
        double r6293772 = r6293768 * r6293768;
        double r6293773 = r6293771 * r6293772;
        double r6293774 = r6293770 + r6293773;
        double r6293775 = -0.666667;
        double r6293776 = r6293772 * r6293768;
        double r6293777 = r6293775 * r6293776;
        double r6293778 = r6293774 + r6293777;
        double r6293779 = 0.041667;
        double r6293780 = r6293776 * r6293768;
        double r6293781 = r6293779 * r6293780;
        double r6293782 = r6293778 + r6293781;
        return r6293782;
}


double f_of(float x) {
        float r6293783 = 1.0;
        float r6293784 = -4.0;
        float r6293785 = x;
        float r6293786 = r6293784 * r6293785;
        float r6293787 = r6293783 + r6293786;
        float r6293788 = 3.0;
        float r6293789 = r6293785 * r6293785;
        float r6293790 = r6293788 * r6293789;
        float r6293791 = exp(r6293790);
        float r6293792 = log(r6293791);
        float r6293793 = r6293787 + r6293792;
        float r6293794 = -0.666667;
        float r6293795 = r6293789 * r6293785;
        float r6293796 = r6293794 * r6293795;
        float r6293797 = r6293793 + r6293796;
        float r6293798 = 0.041667;
        float r6293799 = r6293795 * r6293785;
        float r6293800 = r6293798 * r6293799;
        float r6293801 = r6293797 + r6293800;
        return r6293801;
}

double f_od(double x) {
        double r6293802 = 1.0;
        double r6293803 = -4.0;
        double r6293804 = x;
        double r6293805 = r6293803 * r6293804;
        double r6293806 = r6293802 + r6293805;
        double r6293807 = 3.0;
        double r6293808 = r6293804 * r6293804;
        double r6293809 = r6293807 * r6293808;
        double r6293810 = exp(r6293809);
        double r6293811 = log(r6293810);
        double r6293812 = r6293806 + r6293811;
        double r6293813 = -0.666667;
        double r6293814 = r6293808 * r6293804;
        double r6293815 = r6293813 * r6293814;
        double r6293816 = r6293812 + r6293815;
        double r6293817 = 0.041667;
        double r6293818 = r6293814 * r6293804;
        double r6293819 = r6293817 * r6293818;
        double r6293820 = r6293816 + r6293819;
        return r6293820;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6293821, r6293822, r6293823, r6293824, r6293825, r6293826, r6293827, r6293828, r6293829, r6293830, r6293831, r6293832, r6293833, r6293834, r6293835, r6293836, r6293837;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293821, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293822, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r6293823);
        mpfr_init(r6293824);
        mpfr_init(r6293825);
        mpfr_init_set_str(r6293826, "3.0", 10, MPFR_RNDN);
        mpfr_init(r6293827);
        mpfr_init(r6293828);
        mpfr_init(r6293829);
        mpfr_init_set_str(r6293830, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r6293831);
        mpfr_init(r6293832);
        mpfr_init(r6293833);
        mpfr_init_set_str(r6293834, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r6293835);
        mpfr_init(r6293836);
        mpfr_init(r6293837);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6293823, x, MPFR_RNDN);
        mpfr_mul(r6293824, r6293822, r6293823, MPFR_RNDN);
        mpfr_add(r6293825, r6293821, r6293824, MPFR_RNDN);
        ;
        mpfr_mul(r6293827, r6293823, r6293823, MPFR_RNDN);
        mpfr_mul(r6293828, r6293826, r6293827, MPFR_RNDN);
        mpfr_add(r6293829, r6293825, r6293828, MPFR_RNDN);
        ;
        mpfr_mul(r6293831, r6293827, r6293823, MPFR_RNDN);
        mpfr_mul(r6293832, r6293830, r6293831, MPFR_RNDN);
        mpfr_add(r6293833, r6293829, r6293832, MPFR_RNDN);
        ;
        mpfr_mul(r6293835, r6293831, r6293823, MPFR_RNDN);
        mpfr_mul(r6293836, r6293834, r6293835, MPFR_RNDN);
        mpfr_add(r6293837, r6293833, r6293836, MPFR_RNDN);
        return mpfr_get_d(r6293837, MPFR_RNDN);
}

static mpfr_t r6293838, r6293839, r6293840, r6293841, r6293842, r6293843, r6293844, r6293845, r6293846, r6293847, r6293848, r6293849, r6293850, r6293851, r6293852, r6293853, r6293854, r6293855, r6293856;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293838, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293839, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r6293840);
        mpfr_init(r6293841);
        mpfr_init(r6293842);
        mpfr_init_set_str(r6293843, "3.0", 10, MPFR_RNDN);
        mpfr_init(r6293844);
        mpfr_init(r6293845);
        mpfr_init(r6293846);
        mpfr_init(r6293847);
        mpfr_init(r6293848);
        mpfr_init_set_str(r6293849, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r6293850);
        mpfr_init(r6293851);
        mpfr_init(r6293852);
        mpfr_init_set_str(r6293853, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r6293854);
        mpfr_init(r6293855);
        mpfr_init(r6293856);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6293840, x, MPFR_RNDN);
        mpfr_mul(r6293841, r6293839, r6293840, MPFR_RNDN);
        mpfr_add(r6293842, r6293838, r6293841, MPFR_RNDN);
        ;
        mpfr_mul(r6293844, r6293840, r6293840, MPFR_RNDN);
        mpfr_mul(r6293845, r6293843, r6293844, MPFR_RNDN);
        mpfr_exp(r6293846, r6293845, MPFR_RNDN);
        mpfr_log(r6293847, r6293846, MPFR_RNDN);
        mpfr_add(r6293848, r6293842, r6293847, MPFR_RNDN);
        ;
        mpfr_mul(r6293850, r6293844, r6293840, MPFR_RNDN);
        mpfr_mul(r6293851, r6293849, r6293850, MPFR_RNDN);
        mpfr_add(r6293852, r6293848, r6293851, MPFR_RNDN);
        ;
        mpfr_mul(r6293854, r6293850, r6293840, MPFR_RNDN);
        mpfr_mul(r6293855, r6293853, r6293854, MPFR_RNDN);
        mpfr_add(r6293856, r6293852, r6293855, MPFR_RNDN);
        return mpfr_get_d(r6293856, MPFR_RNDN);
}

static mpfr_t r6293857, r6293858, r6293859, r6293860, r6293861, r6293862, r6293863, r6293864, r6293865, r6293866, r6293867, r6293868, r6293869, r6293870, r6293871, r6293872, r6293873, r6293874, r6293875;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6293857, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293858, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r6293859);
        mpfr_init(r6293860);
        mpfr_init(r6293861);
        mpfr_init_set_str(r6293862, "3.0", 10, MPFR_RNDN);
        mpfr_init(r6293863);
        mpfr_init(r6293864);
        mpfr_init(r6293865);
        mpfr_init(r6293866);
        mpfr_init(r6293867);
        mpfr_init_set_str(r6293868, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r6293869);
        mpfr_init(r6293870);
        mpfr_init(r6293871);
        mpfr_init_set_str(r6293872, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r6293873);
        mpfr_init(r6293874);
        mpfr_init(r6293875);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6293859, x, MPFR_RNDN);
        mpfr_mul(r6293860, r6293858, r6293859, MPFR_RNDN);
        mpfr_add(r6293861, r6293857, r6293860, MPFR_RNDN);
        ;
        mpfr_mul(r6293863, r6293859, r6293859, MPFR_RNDN);
        mpfr_mul(r6293864, r6293862, r6293863, MPFR_RNDN);
        mpfr_exp(r6293865, r6293864, MPFR_RNDN);
        mpfr_log(r6293866, r6293865, MPFR_RNDN);
        mpfr_add(r6293867, r6293861, r6293866, MPFR_RNDN);
        ;
        mpfr_mul(r6293869, r6293863, r6293859, MPFR_RNDN);
        mpfr_mul(r6293870, r6293868, r6293869, MPFR_RNDN);
        mpfr_add(r6293871, r6293867, r6293870, MPFR_RNDN);
        ;
        mpfr_mul(r6293873, r6293869, r6293859, MPFR_RNDN);
        mpfr_mul(r6293874, r6293872, r6293873, MPFR_RNDN);
        mpfr_add(r6293875, r6293871, r6293874, MPFR_RNDN);
        return mpfr_get_d(r6293875, MPFR_RNDN);
}

