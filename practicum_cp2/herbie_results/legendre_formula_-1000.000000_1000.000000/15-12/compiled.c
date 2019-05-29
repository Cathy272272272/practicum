#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r7057691 = 0.225586;
        float r7057692 = -17.595703;
        float r7057693 = x;
        float r7057694 = r7057693 * r7057693;
        float r7057695 = r7057692 * r7057694;
        float r7057696 = r7057691 + r7057695;
        float r7057697 = 219.946289;
        float r7057698 = r7057694 * r7057693;
        float r7057699 = r7057698 * r7057693;
        float r7057700 = r7057697 * r7057699;
        float r7057701 = r7057696 + r7057700;
        float r7057702 = -997.089844;
        float r7057703 = r7057699 * r7057693;
        float r7057704 = r7057703 * r7057693;
        float r7057705 = r7057702 * r7057704;
        float r7057706 = r7057701 + r7057705;
        float r7057707 = 2029.790039;
        float r7057708 = r7057704 * r7057693;
        float r7057709 = r7057708 * r7057693;
        float r7057710 = r7057707 * r7057709;
        float r7057711 = r7057706 + r7057710;
        float r7057712 = -1894.470703;
        float r7057713 = r7057709 * r7057693;
        float r7057714 = r7057713 * r7057693;
        float r7057715 = r7057712 * r7057714;
        float r7057716 = r7057711 + r7057715;
        float r7057717 = 660.194336;
        float r7057718 = r7057714 * r7057693;
        float r7057719 = r7057718 * r7057693;
        float r7057720 = r7057717 * r7057719;
        float r7057721 = r7057716 + r7057720;
        return r7057721;
}

double f_id(double x) {
        double r7057722 = 0.225586;
        double r7057723 = -17.595703;
        double r7057724 = x;
        double r7057725 = r7057724 * r7057724;
        double r7057726 = r7057723 * r7057725;
        double r7057727 = r7057722 + r7057726;
        double r7057728 = 219.946289;
        double r7057729 = r7057725 * r7057724;
        double r7057730 = r7057729 * r7057724;
        double r7057731 = r7057728 * r7057730;
        double r7057732 = r7057727 + r7057731;
        double r7057733 = -997.089844;
        double r7057734 = r7057730 * r7057724;
        double r7057735 = r7057734 * r7057724;
        double r7057736 = r7057733 * r7057735;
        double r7057737 = r7057732 + r7057736;
        double r7057738 = 2029.790039;
        double r7057739 = r7057735 * r7057724;
        double r7057740 = r7057739 * r7057724;
        double r7057741 = r7057738 * r7057740;
        double r7057742 = r7057737 + r7057741;
        double r7057743 = -1894.470703;
        double r7057744 = r7057740 * r7057724;
        double r7057745 = r7057744 * r7057724;
        double r7057746 = r7057743 * r7057745;
        double r7057747 = r7057742 + r7057746;
        double r7057748 = 660.194336;
        double r7057749 = r7057745 * r7057724;
        double r7057750 = r7057749 * r7057724;
        double r7057751 = r7057748 * r7057750;
        double r7057752 = r7057747 + r7057751;
        return r7057752;
}


double f_of(float x) {
        float r7057753 = 2029.790039;
        float r7057754 = x;
        float r7057755 = r7057753 * r7057754;
        float r7057756 = r7057755 * r7057754;
        float r7057757 = r7057754 * r7057754;
        float r7057758 = 3;
        float r7057759 = pow(r7057757, r7057758);
        float r7057760 = r7057756 * r7057759;
        float r7057761 = 2;
        float r7057762 = r7057761 * r7057758;
        float r7057763 = pow(r7057754, r7057762);
        float r7057764 = r7057757 * r7057757;
        float r7057765 = r7057763 * r7057764;
        float r7057766 = 660.194336;
        float r7057767 = r7057766 * r7057754;
        float r7057768 = r7057754 * r7057767;
        float r7057769 = -1894.470703;
        float r7057770 = r7057768 + r7057769;
        float r7057771 = r7057765 * r7057770;
        float r7057772 = r7057760 + r7057771;
        float r7057773 = -997.089844;
        float r7057774 = r7057757 * r7057773;
        float r7057775 = 219.946289;
        float r7057776 = r7057774 + r7057775;
        float r7057777 = r7057764 * r7057776;
        float r7057778 = -17.595703;
        float r7057779 = r7057754 * r7057778;
        float r7057780 = r7057779 * r7057754;
        float r7057781 = 0.225586;
        float r7057782 = r7057780 + r7057781;
        float r7057783 = r7057777 + r7057782;
        float r7057784 = r7057772 + r7057783;
        return r7057784;
}

double f_od(double x) {
        double r7057785 = 2029.790039;
        double r7057786 = x;
        double r7057787 = r7057785 * r7057786;
        double r7057788 = r7057787 * r7057786;
        double r7057789 = r7057786 * r7057786;
        double r7057790 = 3;
        double r7057791 = pow(r7057789, r7057790);
        double r7057792 = r7057788 * r7057791;
        double r7057793 = 2;
        double r7057794 = r7057793 * r7057790;
        double r7057795 = pow(r7057786, r7057794);
        double r7057796 = r7057789 * r7057789;
        double r7057797 = r7057795 * r7057796;
        double r7057798 = 660.194336;
        double r7057799 = r7057798 * r7057786;
        double r7057800 = r7057786 * r7057799;
        double r7057801 = -1894.470703;
        double r7057802 = r7057800 + r7057801;
        double r7057803 = r7057797 * r7057802;
        double r7057804 = r7057792 + r7057803;
        double r7057805 = -997.089844;
        double r7057806 = r7057789 * r7057805;
        double r7057807 = 219.946289;
        double r7057808 = r7057806 + r7057807;
        double r7057809 = r7057796 * r7057808;
        double r7057810 = -17.595703;
        double r7057811 = r7057786 * r7057810;
        double r7057812 = r7057811 * r7057786;
        double r7057813 = 0.225586;
        double r7057814 = r7057812 + r7057813;
        double r7057815 = r7057809 + r7057814;
        double r7057816 = r7057804 + r7057815;
        return r7057816;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7057817, r7057818, r7057819, r7057820, r7057821, r7057822, r7057823, r7057824, r7057825, r7057826, r7057827, r7057828, r7057829, r7057830, r7057831, r7057832, r7057833, r7057834, r7057835, r7057836, r7057837, r7057838, r7057839, r7057840, r7057841, r7057842, r7057843, r7057844, r7057845, r7057846, r7057847;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7057817, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7057818, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7057819);
        mpfr_init(r7057820);
        mpfr_init(r7057821);
        mpfr_init(r7057822);
        mpfr_init_set_str(r7057823, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7057824);
        mpfr_init(r7057825);
        mpfr_init(r7057826);
        mpfr_init(r7057827);
        mpfr_init_set_str(r7057828, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7057829);
        mpfr_init(r7057830);
        mpfr_init(r7057831);
        mpfr_init(r7057832);
        mpfr_init_set_str(r7057833, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7057834);
        mpfr_init(r7057835);
        mpfr_init(r7057836);
        mpfr_init(r7057837);
        mpfr_init_set_str(r7057838, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7057839);
        mpfr_init(r7057840);
        mpfr_init(r7057841);
        mpfr_init(r7057842);
        mpfr_init_set_str(r7057843, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7057844);
        mpfr_init(r7057845);
        mpfr_init(r7057846);
        mpfr_init(r7057847);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7057819, x, MPFR_RNDN);
        mpfr_mul(r7057820, r7057819, r7057819, MPFR_RNDN);
        mpfr_mul(r7057821, r7057818, r7057820, MPFR_RNDN);
        mpfr_add(r7057822, r7057817, r7057821, MPFR_RNDN);
        ;
        mpfr_mul(r7057824, r7057820, r7057819, MPFR_RNDN);
        mpfr_mul(r7057825, r7057824, r7057819, MPFR_RNDN);
        mpfr_mul(r7057826, r7057823, r7057825, MPFR_RNDN);
        mpfr_add(r7057827, r7057822, r7057826, MPFR_RNDN);
        ;
        mpfr_mul(r7057829, r7057825, r7057819, MPFR_RNDN);
        mpfr_mul(r7057830, r7057829, r7057819, MPFR_RNDN);
        mpfr_mul(r7057831, r7057828, r7057830, MPFR_RNDN);
        mpfr_add(r7057832, r7057827, r7057831, MPFR_RNDN);
        ;
        mpfr_mul(r7057834, r7057830, r7057819, MPFR_RNDN);
        mpfr_mul(r7057835, r7057834, r7057819, MPFR_RNDN);
        mpfr_mul(r7057836, r7057833, r7057835, MPFR_RNDN);
        mpfr_add(r7057837, r7057832, r7057836, MPFR_RNDN);
        ;
        mpfr_mul(r7057839, r7057835, r7057819, MPFR_RNDN);
        mpfr_mul(r7057840, r7057839, r7057819, MPFR_RNDN);
        mpfr_mul(r7057841, r7057838, r7057840, MPFR_RNDN);
        mpfr_add(r7057842, r7057837, r7057841, MPFR_RNDN);
        ;
        mpfr_mul(r7057844, r7057840, r7057819, MPFR_RNDN);
        mpfr_mul(r7057845, r7057844, r7057819, MPFR_RNDN);
        mpfr_mul(r7057846, r7057843, r7057845, MPFR_RNDN);
        mpfr_add(r7057847, r7057842, r7057846, MPFR_RNDN);
        return mpfr_get_d(r7057847, MPFR_RNDN);
}

static mpfr_t r7057848, r7057849, r7057850, r7057851, r7057852, r7057853, r7057854, r7057855, r7057856, r7057857, r7057858, r7057859, r7057860, r7057861, r7057862, r7057863, r7057864, r7057865, r7057866, r7057867, r7057868, r7057869, r7057870, r7057871, r7057872, r7057873, r7057874, r7057875, r7057876, r7057877, r7057878, r7057879;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7057848, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7057849);
        mpfr_init(r7057850);
        mpfr_init(r7057851);
        mpfr_init(r7057852);
        mpfr_init_set_str(r7057853, "3", 10, MPFR_RNDN);
        mpfr_init(r7057854);
        mpfr_init(r7057855);
        mpfr_init_set_str(r7057856, "2", 10, MPFR_RNDN);
        mpfr_init(r7057857);
        mpfr_init(r7057858);
        mpfr_init(r7057859);
        mpfr_init(r7057860);
        mpfr_init_set_str(r7057861, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7057862);
        mpfr_init(r7057863);
        mpfr_init_set_str(r7057864, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7057865);
        mpfr_init(r7057866);
        mpfr_init(r7057867);
        mpfr_init_set_str(r7057868, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7057869);
        mpfr_init_set_str(r7057870, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7057871);
        mpfr_init(r7057872);
        mpfr_init_set_str(r7057873, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7057874);
        mpfr_init(r7057875);
        mpfr_init_set_str(r7057876, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r7057877);
        mpfr_init(r7057878);
        mpfr_init(r7057879);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7057849, x, MPFR_RNDN);
        mpfr_mul(r7057850, r7057848, r7057849, MPFR_RNDN);
        mpfr_mul(r7057851, r7057850, r7057849, MPFR_RNDN);
        mpfr_mul(r7057852, r7057849, r7057849, MPFR_RNDN);
        ;
        mpfr_pow(r7057854, r7057852, r7057853, MPFR_RNDN);
        mpfr_mul(r7057855, r7057851, r7057854, MPFR_RNDN);
        ;
        mpfr_mul(r7057857, r7057856, r7057853, MPFR_RNDN);
        mpfr_pow(r7057858, r7057849, r7057857, MPFR_RNDN);
        mpfr_mul(r7057859, r7057852, r7057852, MPFR_RNDN);
        mpfr_mul(r7057860, r7057858, r7057859, MPFR_RNDN);
        ;
        mpfr_mul(r7057862, r7057861, r7057849, MPFR_RNDN);
        mpfr_mul(r7057863, r7057849, r7057862, MPFR_RNDN);
        ;
        mpfr_add(r7057865, r7057863, r7057864, MPFR_RNDN);
        mpfr_mul(r7057866, r7057860, r7057865, MPFR_RNDN);
        mpfr_add(r7057867, r7057855, r7057866, MPFR_RNDN);
        ;
        mpfr_mul(r7057869, r7057852, r7057868, MPFR_RNDN);
        ;
        mpfr_add(r7057871, r7057869, r7057870, MPFR_RNDN);
        mpfr_mul(r7057872, r7057859, r7057871, MPFR_RNDN);
        ;
        mpfr_mul(r7057874, r7057849, r7057873, MPFR_RNDN);
        mpfr_mul(r7057875, r7057874, r7057849, MPFR_RNDN);
        ;
        mpfr_add(r7057877, r7057875, r7057876, MPFR_RNDN);
        mpfr_add(r7057878, r7057872, r7057877, MPFR_RNDN);
        mpfr_add(r7057879, r7057867, r7057878, MPFR_RNDN);
        return mpfr_get_d(r7057879, MPFR_RNDN);
}

static mpfr_t r7057880, r7057881, r7057882, r7057883, r7057884, r7057885, r7057886, r7057887, r7057888, r7057889, r7057890, r7057891, r7057892, r7057893, r7057894, r7057895, r7057896, r7057897, r7057898, r7057899, r7057900, r7057901, r7057902, r7057903, r7057904, r7057905, r7057906, r7057907, r7057908, r7057909, r7057910, r7057911;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7057880, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7057881);
        mpfr_init(r7057882);
        mpfr_init(r7057883);
        mpfr_init(r7057884);
        mpfr_init_set_str(r7057885, "3", 10, MPFR_RNDN);
        mpfr_init(r7057886);
        mpfr_init(r7057887);
        mpfr_init_set_str(r7057888, "2", 10, MPFR_RNDN);
        mpfr_init(r7057889);
        mpfr_init(r7057890);
        mpfr_init(r7057891);
        mpfr_init(r7057892);
        mpfr_init_set_str(r7057893, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7057894);
        mpfr_init(r7057895);
        mpfr_init_set_str(r7057896, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7057897);
        mpfr_init(r7057898);
        mpfr_init(r7057899);
        mpfr_init_set_str(r7057900, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7057901);
        mpfr_init_set_str(r7057902, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7057903);
        mpfr_init(r7057904);
        mpfr_init_set_str(r7057905, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7057906);
        mpfr_init(r7057907);
        mpfr_init_set_str(r7057908, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r7057909);
        mpfr_init(r7057910);
        mpfr_init(r7057911);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7057881, x, MPFR_RNDN);
        mpfr_mul(r7057882, r7057880, r7057881, MPFR_RNDN);
        mpfr_mul(r7057883, r7057882, r7057881, MPFR_RNDN);
        mpfr_mul(r7057884, r7057881, r7057881, MPFR_RNDN);
        ;
        mpfr_pow(r7057886, r7057884, r7057885, MPFR_RNDN);
        mpfr_mul(r7057887, r7057883, r7057886, MPFR_RNDN);
        ;
        mpfr_mul(r7057889, r7057888, r7057885, MPFR_RNDN);
        mpfr_pow(r7057890, r7057881, r7057889, MPFR_RNDN);
        mpfr_mul(r7057891, r7057884, r7057884, MPFR_RNDN);
        mpfr_mul(r7057892, r7057890, r7057891, MPFR_RNDN);
        ;
        mpfr_mul(r7057894, r7057893, r7057881, MPFR_RNDN);
        mpfr_mul(r7057895, r7057881, r7057894, MPFR_RNDN);
        ;
        mpfr_add(r7057897, r7057895, r7057896, MPFR_RNDN);
        mpfr_mul(r7057898, r7057892, r7057897, MPFR_RNDN);
        mpfr_add(r7057899, r7057887, r7057898, MPFR_RNDN);
        ;
        mpfr_mul(r7057901, r7057884, r7057900, MPFR_RNDN);
        ;
        mpfr_add(r7057903, r7057901, r7057902, MPFR_RNDN);
        mpfr_mul(r7057904, r7057891, r7057903, MPFR_RNDN);
        ;
        mpfr_mul(r7057906, r7057881, r7057905, MPFR_RNDN);
        mpfr_mul(r7057907, r7057906, r7057881, MPFR_RNDN);
        ;
        mpfr_add(r7057909, r7057907, r7057908, MPFR_RNDN);
        mpfr_add(r7057910, r7057904, r7057909, MPFR_RNDN);
        mpfr_add(r7057911, r7057899, r7057910, MPFR_RNDN);
        return mpfr_get_d(r7057911, MPFR_RNDN);
}

