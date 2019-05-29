#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7982734 = 1680.0;
        float r7982735 = -13440.0;
        float r7982736 = x;
        float r7982737 = r7982736 * r7982736;
        float r7982738 = r7982735 * r7982737;
        float r7982739 = r7982734 + r7982738;
        float r7982740 = 13440.0;
        float r7982741 = r7982737 * r7982736;
        float r7982742 = r7982741 * r7982736;
        float r7982743 = r7982740 * r7982742;
        float r7982744 = r7982739 + r7982743;
        float r7982745 = -3584.0;
        float r7982746 = r7982742 * r7982736;
        float r7982747 = r7982746 * r7982736;
        float r7982748 = r7982745 * r7982747;
        float r7982749 = r7982744 + r7982748;
        float r7982750 = 256.0;
        float r7982751 = r7982747 * r7982736;
        float r7982752 = r7982751 * r7982736;
        float r7982753 = r7982750 * r7982752;
        float r7982754 = r7982749 + r7982753;
        return r7982754;
}

double f_id(double x) {
        double r7982755 = 1680.0;
        double r7982756 = -13440.0;
        double r7982757 = x;
        double r7982758 = r7982757 * r7982757;
        double r7982759 = r7982756 * r7982758;
        double r7982760 = r7982755 + r7982759;
        double r7982761 = 13440.0;
        double r7982762 = r7982758 * r7982757;
        double r7982763 = r7982762 * r7982757;
        double r7982764 = r7982761 * r7982763;
        double r7982765 = r7982760 + r7982764;
        double r7982766 = -3584.0;
        double r7982767 = r7982763 * r7982757;
        double r7982768 = r7982767 * r7982757;
        double r7982769 = r7982766 * r7982768;
        double r7982770 = r7982765 + r7982769;
        double r7982771 = 256.0;
        double r7982772 = r7982768 * r7982757;
        double r7982773 = r7982772 * r7982757;
        double r7982774 = r7982771 * r7982773;
        double r7982775 = r7982770 + r7982774;
        return r7982775;
}


double f_of(float x) {
        float r7982776 = 1680.0;
        float r7982777 = -13440.0;
        float r7982778 = x;
        float r7982779 = r7982778 * r7982778;
        float r7982780 = r7982777 * r7982779;
        float r7982781 = r7982776 + r7982780;
        float r7982782 = 13440.0;
        float r7982783 = r7982779 * r7982778;
        float r7982784 = r7982783 * r7982778;
        float r7982785 = r7982782 * r7982784;
        float r7982786 = r7982781 + r7982785;
        float r7982787 = -3584.0;
        float r7982788 = r7982784 * r7982778;
        float r7982789 = r7982788 * r7982778;
        float r7982790 = r7982787 * r7982789;
        float r7982791 = r7982786 + r7982790;
        float r7982792 = 256.0;
        float r7982793 = r7982789 * r7982778;
        float r7982794 = r7982793 * r7982778;
        float r7982795 = r7982792 * r7982794;
        float r7982796 = r7982791 + r7982795;
        return r7982796;
}

double f_od(double x) {
        double r7982797 = 1680.0;
        double r7982798 = -13440.0;
        double r7982799 = x;
        double r7982800 = r7982799 * r7982799;
        double r7982801 = r7982798 * r7982800;
        double r7982802 = r7982797 + r7982801;
        double r7982803 = 13440.0;
        double r7982804 = r7982800 * r7982799;
        double r7982805 = r7982804 * r7982799;
        double r7982806 = r7982803 * r7982805;
        double r7982807 = r7982802 + r7982806;
        double r7982808 = -3584.0;
        double r7982809 = r7982805 * r7982799;
        double r7982810 = r7982809 * r7982799;
        double r7982811 = r7982808 * r7982810;
        double r7982812 = r7982807 + r7982811;
        double r7982813 = 256.0;
        double r7982814 = r7982810 * r7982799;
        double r7982815 = r7982814 * r7982799;
        double r7982816 = r7982813 * r7982815;
        double r7982817 = r7982812 + r7982816;
        return r7982817;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7982818, r7982819, r7982820, r7982821, r7982822, r7982823, r7982824, r7982825, r7982826, r7982827, r7982828, r7982829, r7982830, r7982831, r7982832, r7982833, r7982834, r7982835, r7982836, r7982837, r7982838;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7982818, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7982819, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7982820);
        mpfr_init(r7982821);
        mpfr_init(r7982822);
        mpfr_init(r7982823);
        mpfr_init_set_str(r7982824, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7982825);
        mpfr_init(r7982826);
        mpfr_init(r7982827);
        mpfr_init(r7982828);
        mpfr_init_set_str(r7982829, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7982830);
        mpfr_init(r7982831);
        mpfr_init(r7982832);
        mpfr_init(r7982833);
        mpfr_init_set_str(r7982834, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7982835);
        mpfr_init(r7982836);
        mpfr_init(r7982837);
        mpfr_init(r7982838);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7982820, x, MPFR_RNDN);
        mpfr_mul(r7982821, r7982820, r7982820, MPFR_RNDN);
        mpfr_mul(r7982822, r7982819, r7982821, MPFR_RNDN);
        mpfr_add(r7982823, r7982818, r7982822, MPFR_RNDN);
        ;
        mpfr_mul(r7982825, r7982821, r7982820, MPFR_RNDN);
        mpfr_mul(r7982826, r7982825, r7982820, MPFR_RNDN);
        mpfr_mul(r7982827, r7982824, r7982826, MPFR_RNDN);
        mpfr_add(r7982828, r7982823, r7982827, MPFR_RNDN);
        ;
        mpfr_mul(r7982830, r7982826, r7982820, MPFR_RNDN);
        mpfr_mul(r7982831, r7982830, r7982820, MPFR_RNDN);
        mpfr_mul(r7982832, r7982829, r7982831, MPFR_RNDN);
        mpfr_add(r7982833, r7982828, r7982832, MPFR_RNDN);
        ;
        mpfr_mul(r7982835, r7982831, r7982820, MPFR_RNDN);
        mpfr_mul(r7982836, r7982835, r7982820, MPFR_RNDN);
        mpfr_mul(r7982837, r7982834, r7982836, MPFR_RNDN);
        mpfr_add(r7982838, r7982833, r7982837, MPFR_RNDN);
        return mpfr_get_d(r7982838, MPFR_RNDN);
}

static mpfr_t r7982839, r7982840, r7982841, r7982842, r7982843, r7982844, r7982845, r7982846, r7982847, r7982848, r7982849, r7982850, r7982851, r7982852, r7982853, r7982854, r7982855, r7982856, r7982857, r7982858, r7982859;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7982839, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7982840, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7982841);
        mpfr_init(r7982842);
        mpfr_init(r7982843);
        mpfr_init(r7982844);
        mpfr_init_set_str(r7982845, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7982846);
        mpfr_init(r7982847);
        mpfr_init(r7982848);
        mpfr_init(r7982849);
        mpfr_init_set_str(r7982850, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7982851);
        mpfr_init(r7982852);
        mpfr_init(r7982853);
        mpfr_init(r7982854);
        mpfr_init_set_str(r7982855, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7982856);
        mpfr_init(r7982857);
        mpfr_init(r7982858);
        mpfr_init(r7982859);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7982841, x, MPFR_RNDN);
        mpfr_mul(r7982842, r7982841, r7982841, MPFR_RNDN);
        mpfr_mul(r7982843, r7982840, r7982842, MPFR_RNDN);
        mpfr_add(r7982844, r7982839, r7982843, MPFR_RNDN);
        ;
        mpfr_mul(r7982846, r7982842, r7982841, MPFR_RNDN);
        mpfr_mul(r7982847, r7982846, r7982841, MPFR_RNDN);
        mpfr_mul(r7982848, r7982845, r7982847, MPFR_RNDN);
        mpfr_add(r7982849, r7982844, r7982848, MPFR_RNDN);
        ;
        mpfr_mul(r7982851, r7982847, r7982841, MPFR_RNDN);
        mpfr_mul(r7982852, r7982851, r7982841, MPFR_RNDN);
        mpfr_mul(r7982853, r7982850, r7982852, MPFR_RNDN);
        mpfr_add(r7982854, r7982849, r7982853, MPFR_RNDN);
        ;
        mpfr_mul(r7982856, r7982852, r7982841, MPFR_RNDN);
        mpfr_mul(r7982857, r7982856, r7982841, MPFR_RNDN);
        mpfr_mul(r7982858, r7982855, r7982857, MPFR_RNDN);
        mpfr_add(r7982859, r7982854, r7982858, MPFR_RNDN);
        return mpfr_get_d(r7982859, MPFR_RNDN);
}

static mpfr_t r7982860, r7982861, r7982862, r7982863, r7982864, r7982865, r7982866, r7982867, r7982868, r7982869, r7982870, r7982871, r7982872, r7982873, r7982874, r7982875, r7982876, r7982877, r7982878, r7982879, r7982880;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7982860, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7982861, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7982862);
        mpfr_init(r7982863);
        mpfr_init(r7982864);
        mpfr_init(r7982865);
        mpfr_init_set_str(r7982866, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7982867);
        mpfr_init(r7982868);
        mpfr_init(r7982869);
        mpfr_init(r7982870);
        mpfr_init_set_str(r7982871, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7982872);
        mpfr_init(r7982873);
        mpfr_init(r7982874);
        mpfr_init(r7982875);
        mpfr_init_set_str(r7982876, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7982877);
        mpfr_init(r7982878);
        mpfr_init(r7982879);
        mpfr_init(r7982880);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7982862, x, MPFR_RNDN);
        mpfr_mul(r7982863, r7982862, r7982862, MPFR_RNDN);
        mpfr_mul(r7982864, r7982861, r7982863, MPFR_RNDN);
        mpfr_add(r7982865, r7982860, r7982864, MPFR_RNDN);
        ;
        mpfr_mul(r7982867, r7982863, r7982862, MPFR_RNDN);
        mpfr_mul(r7982868, r7982867, r7982862, MPFR_RNDN);
        mpfr_mul(r7982869, r7982866, r7982868, MPFR_RNDN);
        mpfr_add(r7982870, r7982865, r7982869, MPFR_RNDN);
        ;
        mpfr_mul(r7982872, r7982868, r7982862, MPFR_RNDN);
        mpfr_mul(r7982873, r7982872, r7982862, MPFR_RNDN);
        mpfr_mul(r7982874, r7982871, r7982873, MPFR_RNDN);
        mpfr_add(r7982875, r7982870, r7982874, MPFR_RNDN);
        ;
        mpfr_mul(r7982877, r7982873, r7982862, MPFR_RNDN);
        mpfr_mul(r7982878, r7982877, r7982862, MPFR_RNDN);
        mpfr_mul(r7982879, r7982876, r7982878, MPFR_RNDN);
        mpfr_add(r7982880, r7982875, r7982879, MPFR_RNDN);
        return mpfr_get_d(r7982880, MPFR_RNDN);
}

