#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9828734 = -1680.0;
        float r9828735 = x;
        float r9828736 = r9828734 * r9828735;
        float r9828737 = 3360.0;
        float r9828738 = r9828735 * r9828735;
        float r9828739 = r9828738 * r9828735;
        float r9828740 = r9828737 * r9828739;
        float r9828741 = r9828736 + r9828740;
        float r9828742 = -1344.0;
        float r9828743 = r9828739 * r9828735;
        float r9828744 = r9828743 * r9828735;
        float r9828745 = r9828742 * r9828744;
        float r9828746 = r9828741 + r9828745;
        float r9828747 = 128.0;
        float r9828748 = r9828744 * r9828735;
        float r9828749 = r9828748 * r9828735;
        float r9828750 = r9828747 * r9828749;
        float r9828751 = r9828746 + r9828750;
        return r9828751;
}

double f_id(double x) {
        double r9828752 = -1680.0;
        double r9828753 = x;
        double r9828754 = r9828752 * r9828753;
        double r9828755 = 3360.0;
        double r9828756 = r9828753 * r9828753;
        double r9828757 = r9828756 * r9828753;
        double r9828758 = r9828755 * r9828757;
        double r9828759 = r9828754 + r9828758;
        double r9828760 = -1344.0;
        double r9828761 = r9828757 * r9828753;
        double r9828762 = r9828761 * r9828753;
        double r9828763 = r9828760 * r9828762;
        double r9828764 = r9828759 + r9828763;
        double r9828765 = 128.0;
        double r9828766 = r9828762 * r9828753;
        double r9828767 = r9828766 * r9828753;
        double r9828768 = r9828765 * r9828767;
        double r9828769 = r9828764 + r9828768;
        return r9828769;
}


double f_of(float x) {
        float r9828770 = x;
        float r9828771 = r9828770 * r9828770;
        float r9828772 = r9828771 * r9828771;
        float r9828773 = 3;
        float r9828774 = pow(r9828770, r9828773);
        float r9828775 = r9828774 * r9828774;
        float r9828776 = 128.0;
        float r9828777 = r9828770 * r9828776;
        float r9828778 = pow(r9828777, r9828773);
        float r9828779 = r9828775 * r9828778;
        float r9828780 = cbrt(r9828779);
        float r9828781 = -1344.0;
        float r9828782 = r9828770 * r9828781;
        float r9828783 = r9828780 + r9828782;
        float r9828784 = r9828772 * r9828783;
        float r9828785 = -1680.0;
        float r9828786 = r9828785 * r9828770;
        float r9828787 = 3360.0;
        float r9828788 = r9828787 * r9828770;
        float r9828789 = r9828771 * r9828788;
        float r9828790 = r9828786 + r9828789;
        float r9828791 = r9828784 + r9828790;
        return r9828791;
}

double f_od(double x) {
        double r9828792 = x;
        double r9828793 = r9828792 * r9828792;
        double r9828794 = r9828793 * r9828793;
        double r9828795 = 3;
        double r9828796 = pow(r9828792, r9828795);
        double r9828797 = r9828796 * r9828796;
        double r9828798 = 128.0;
        double r9828799 = r9828792 * r9828798;
        double r9828800 = pow(r9828799, r9828795);
        double r9828801 = r9828797 * r9828800;
        double r9828802 = cbrt(r9828801);
        double r9828803 = -1344.0;
        double r9828804 = r9828792 * r9828803;
        double r9828805 = r9828802 + r9828804;
        double r9828806 = r9828794 * r9828805;
        double r9828807 = -1680.0;
        double r9828808 = r9828807 * r9828792;
        double r9828809 = 3360.0;
        double r9828810 = r9828809 * r9828792;
        double r9828811 = r9828793 * r9828810;
        double r9828812 = r9828808 + r9828811;
        double r9828813 = r9828806 + r9828812;
        return r9828813;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9828814, r9828815, r9828816, r9828817, r9828818, r9828819, r9828820, r9828821, r9828822, r9828823, r9828824, r9828825, r9828826, r9828827, r9828828, r9828829, r9828830, r9828831;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9828814, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9828815);
        mpfr_init(r9828816);
        mpfr_init_set_str(r9828817, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9828818);
        mpfr_init(r9828819);
        mpfr_init(r9828820);
        mpfr_init(r9828821);
        mpfr_init_set_str(r9828822, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9828823);
        mpfr_init(r9828824);
        mpfr_init(r9828825);
        mpfr_init(r9828826);
        mpfr_init_set_str(r9828827, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9828828);
        mpfr_init(r9828829);
        mpfr_init(r9828830);
        mpfr_init(r9828831);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9828815, x, MPFR_RNDN);
        mpfr_mul(r9828816, r9828814, r9828815, MPFR_RNDN);
        ;
        mpfr_mul(r9828818, r9828815, r9828815, MPFR_RNDN);
        mpfr_mul(r9828819, r9828818, r9828815, MPFR_RNDN);
        mpfr_mul(r9828820, r9828817, r9828819, MPFR_RNDN);
        mpfr_add(r9828821, r9828816, r9828820, MPFR_RNDN);
        ;
        mpfr_mul(r9828823, r9828819, r9828815, MPFR_RNDN);
        mpfr_mul(r9828824, r9828823, r9828815, MPFR_RNDN);
        mpfr_mul(r9828825, r9828822, r9828824, MPFR_RNDN);
        mpfr_add(r9828826, r9828821, r9828825, MPFR_RNDN);
        ;
        mpfr_mul(r9828828, r9828824, r9828815, MPFR_RNDN);
        mpfr_mul(r9828829, r9828828, r9828815, MPFR_RNDN);
        mpfr_mul(r9828830, r9828827, r9828829, MPFR_RNDN);
        mpfr_add(r9828831, r9828826, r9828830, MPFR_RNDN);
        return mpfr_get_d(r9828831, MPFR_RNDN);
}

static mpfr_t r9828832, r9828833, r9828834, r9828835, r9828836, r9828837, r9828838, r9828839, r9828840, r9828841, r9828842, r9828843, r9828844, r9828845, r9828846, r9828847, r9828848, r9828849, r9828850, r9828851, r9828852, r9828853;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r9828832);
        mpfr_init(r9828833);
        mpfr_init(r9828834);
        mpfr_init_set_str(r9828835, "3", 10, MPFR_RNDN);
        mpfr_init(r9828836);
        mpfr_init(r9828837);
        mpfr_init_set_str(r9828838, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9828839);
        mpfr_init(r9828840);
        mpfr_init(r9828841);
        mpfr_init(r9828842);
        mpfr_init_set_str(r9828843, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9828844);
        mpfr_init(r9828845);
        mpfr_init(r9828846);
        mpfr_init_set_str(r9828847, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9828848);
        mpfr_init_set_str(r9828849, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9828850);
        mpfr_init(r9828851);
        mpfr_init(r9828852);
        mpfr_init(r9828853);
}

double f_fm(double x) {
        mpfr_set_d(r9828832, x, MPFR_RNDN);
        mpfr_mul(r9828833, r9828832, r9828832, MPFR_RNDN);
        mpfr_mul(r9828834, r9828833, r9828833, MPFR_RNDN);
        ;
        mpfr_pow(r9828836, r9828832, r9828835, MPFR_RNDN);
        mpfr_mul(r9828837, r9828836, r9828836, MPFR_RNDN);
        ;
        mpfr_mul(r9828839, r9828832, r9828838, MPFR_RNDN);
        mpfr_pow(r9828840, r9828839, r9828835, MPFR_RNDN);
        mpfr_mul(r9828841, r9828837, r9828840, MPFR_RNDN);
        mpfr_cbrt(r9828842, r9828841, MPFR_RNDN);
        ;
        mpfr_mul(r9828844, r9828832, r9828843, MPFR_RNDN);
        mpfr_add(r9828845, r9828842, r9828844, MPFR_RNDN);
        mpfr_mul(r9828846, r9828834, r9828845, MPFR_RNDN);
        ;
        mpfr_mul(r9828848, r9828847, r9828832, MPFR_RNDN);
        ;
        mpfr_mul(r9828850, r9828849, r9828832, MPFR_RNDN);
        mpfr_mul(r9828851, r9828833, r9828850, MPFR_RNDN);
        mpfr_add(r9828852, r9828848, r9828851, MPFR_RNDN);
        mpfr_add(r9828853, r9828846, r9828852, MPFR_RNDN);
        return mpfr_get_d(r9828853, MPFR_RNDN);
}

static mpfr_t r9828854, r9828855, r9828856, r9828857, r9828858, r9828859, r9828860, r9828861, r9828862, r9828863, r9828864, r9828865, r9828866, r9828867, r9828868, r9828869, r9828870, r9828871, r9828872, r9828873, r9828874, r9828875;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r9828854);
        mpfr_init(r9828855);
        mpfr_init(r9828856);
        mpfr_init_set_str(r9828857, "3", 10, MPFR_RNDN);
        mpfr_init(r9828858);
        mpfr_init(r9828859);
        mpfr_init_set_str(r9828860, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9828861);
        mpfr_init(r9828862);
        mpfr_init(r9828863);
        mpfr_init(r9828864);
        mpfr_init_set_str(r9828865, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9828866);
        mpfr_init(r9828867);
        mpfr_init(r9828868);
        mpfr_init_set_str(r9828869, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9828870);
        mpfr_init_set_str(r9828871, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9828872);
        mpfr_init(r9828873);
        mpfr_init(r9828874);
        mpfr_init(r9828875);
}

double f_dm(double x) {
        mpfr_set_d(r9828854, x, MPFR_RNDN);
        mpfr_mul(r9828855, r9828854, r9828854, MPFR_RNDN);
        mpfr_mul(r9828856, r9828855, r9828855, MPFR_RNDN);
        ;
        mpfr_pow(r9828858, r9828854, r9828857, MPFR_RNDN);
        mpfr_mul(r9828859, r9828858, r9828858, MPFR_RNDN);
        ;
        mpfr_mul(r9828861, r9828854, r9828860, MPFR_RNDN);
        mpfr_pow(r9828862, r9828861, r9828857, MPFR_RNDN);
        mpfr_mul(r9828863, r9828859, r9828862, MPFR_RNDN);
        mpfr_cbrt(r9828864, r9828863, MPFR_RNDN);
        ;
        mpfr_mul(r9828866, r9828854, r9828865, MPFR_RNDN);
        mpfr_add(r9828867, r9828864, r9828866, MPFR_RNDN);
        mpfr_mul(r9828868, r9828856, r9828867, MPFR_RNDN);
        ;
        mpfr_mul(r9828870, r9828869, r9828854, MPFR_RNDN);
        ;
        mpfr_mul(r9828872, r9828871, r9828854, MPFR_RNDN);
        mpfr_mul(r9828873, r9828855, r9828872, MPFR_RNDN);
        mpfr_add(r9828874, r9828870, r9828873, MPFR_RNDN);
        mpfr_add(r9828875, r9828868, r9828874, MPFR_RNDN);
        return mpfr_get_d(r9828875, MPFR_RNDN);
}

