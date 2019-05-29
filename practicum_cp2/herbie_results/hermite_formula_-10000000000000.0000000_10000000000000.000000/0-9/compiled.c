#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r5315760 = 30240.0;
        float r5315761 = x;
        float r5315762 = r5315760 * r5315761;
        float r5315763 = -80640.0;
        float r5315764 = r5315761 * r5315761;
        float r5315765 = r5315764 * r5315761;
        float r5315766 = r5315763 * r5315765;
        float r5315767 = r5315762 + r5315766;
        float r5315768 = 48384.0;
        float r5315769 = r5315765 * r5315761;
        float r5315770 = r5315769 * r5315761;
        float r5315771 = r5315768 * r5315770;
        float r5315772 = r5315767 + r5315771;
        float r5315773 = -9216.0;
        float r5315774 = r5315770 * r5315761;
        float r5315775 = r5315774 * r5315761;
        float r5315776 = r5315773 * r5315775;
        float r5315777 = r5315772 + r5315776;
        float r5315778 = 512.0;
        float r5315779 = r5315775 * r5315761;
        float r5315780 = r5315779 * r5315761;
        float r5315781 = r5315778 * r5315780;
        float r5315782 = r5315777 + r5315781;
        return r5315782;
}

double f_id(double x) {
        double r5315783 = 30240.0;
        double r5315784 = x;
        double r5315785 = r5315783 * r5315784;
        double r5315786 = -80640.0;
        double r5315787 = r5315784 * r5315784;
        double r5315788 = r5315787 * r5315784;
        double r5315789 = r5315786 * r5315788;
        double r5315790 = r5315785 + r5315789;
        double r5315791 = 48384.0;
        double r5315792 = r5315788 * r5315784;
        double r5315793 = r5315792 * r5315784;
        double r5315794 = r5315791 * r5315793;
        double r5315795 = r5315790 + r5315794;
        double r5315796 = -9216.0;
        double r5315797 = r5315793 * r5315784;
        double r5315798 = r5315797 * r5315784;
        double r5315799 = r5315796 * r5315798;
        double r5315800 = r5315795 + r5315799;
        double r5315801 = 512.0;
        double r5315802 = r5315798 * r5315784;
        double r5315803 = r5315802 * r5315784;
        double r5315804 = r5315801 * r5315803;
        double r5315805 = r5315800 + r5315804;
        return r5315805;
}


double f_of(float x) {
        float r5315806 = x;
        float r5315807 = r5315806 * r5315806;
        float r5315808 = 48384.0;
        float r5315809 = r5315806 * r5315808;
        float r5315810 = r5315807 * r5315809;
        float r5315811 = r5315807 * r5315810;
        float r5315812 = 30240.0;
        float r5315813 = r5315812 * r5315806;
        float r5315814 = -80640.0;
        float r5315815 = r5315814 * r5315806;
        float r5315816 = r5315815 * r5315807;
        float r5315817 = r5315813 + r5315816;
        float r5315818 = r5315811 + r5315817;
        float r5315819 = 3;
        float r5315820 = r5315819 + r5315819;
        float r5315821 = pow(r5315806, r5315820);
        float r5315822 = r5315821 * r5315806;
        float r5315823 = -9216.0;
        float r5315824 = 512.0;
        float r5315825 = r5315824 * r5315806;
        float r5315826 = r5315806 * r5315825;
        float r5315827 = r5315823 + r5315826;
        float r5315828 = r5315822 * r5315827;
        float r5315829 = r5315818 + r5315828;
        return r5315829;
}

double f_od(double x) {
        double r5315830 = x;
        double r5315831 = r5315830 * r5315830;
        double r5315832 = 48384.0;
        double r5315833 = r5315830 * r5315832;
        double r5315834 = r5315831 * r5315833;
        double r5315835 = r5315831 * r5315834;
        double r5315836 = 30240.0;
        double r5315837 = r5315836 * r5315830;
        double r5315838 = -80640.0;
        double r5315839 = r5315838 * r5315830;
        double r5315840 = r5315839 * r5315831;
        double r5315841 = r5315837 + r5315840;
        double r5315842 = r5315835 + r5315841;
        double r5315843 = 3;
        double r5315844 = r5315843 + r5315843;
        double r5315845 = pow(r5315830, r5315844);
        double r5315846 = r5315845 * r5315830;
        double r5315847 = -9216.0;
        double r5315848 = 512.0;
        double r5315849 = r5315848 * r5315830;
        double r5315850 = r5315830 * r5315849;
        double r5315851 = r5315847 + r5315850;
        double r5315852 = r5315846 * r5315851;
        double r5315853 = r5315842 + r5315852;
        return r5315853;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5315854, r5315855, r5315856, r5315857, r5315858, r5315859, r5315860, r5315861, r5315862, r5315863, r5315864, r5315865, r5315866, r5315867, r5315868, r5315869, r5315870, r5315871, r5315872, r5315873, r5315874, r5315875, r5315876;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(848);
        mpfr_init_set_str(r5315854, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r5315855);
        mpfr_init(r5315856);
        mpfr_init_set_str(r5315857, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r5315858);
        mpfr_init(r5315859);
        mpfr_init(r5315860);
        mpfr_init(r5315861);
        mpfr_init_set_str(r5315862, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r5315863);
        mpfr_init(r5315864);
        mpfr_init(r5315865);
        mpfr_init(r5315866);
        mpfr_init_set_str(r5315867, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r5315868);
        mpfr_init(r5315869);
        mpfr_init(r5315870);
        mpfr_init(r5315871);
        mpfr_init_set_str(r5315872, "512.0", 10, MPFR_RNDN);
        mpfr_init(r5315873);
        mpfr_init(r5315874);
        mpfr_init(r5315875);
        mpfr_init(r5315876);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5315855, x, MPFR_RNDN);
        mpfr_mul(r5315856, r5315854, r5315855, MPFR_RNDN);
        ;
        mpfr_mul(r5315858, r5315855, r5315855, MPFR_RNDN);
        mpfr_mul(r5315859, r5315858, r5315855, MPFR_RNDN);
        mpfr_mul(r5315860, r5315857, r5315859, MPFR_RNDN);
        mpfr_add(r5315861, r5315856, r5315860, MPFR_RNDN);
        ;
        mpfr_mul(r5315863, r5315859, r5315855, MPFR_RNDN);
        mpfr_mul(r5315864, r5315863, r5315855, MPFR_RNDN);
        mpfr_mul(r5315865, r5315862, r5315864, MPFR_RNDN);
        mpfr_add(r5315866, r5315861, r5315865, MPFR_RNDN);
        ;
        mpfr_mul(r5315868, r5315864, r5315855, MPFR_RNDN);
        mpfr_mul(r5315869, r5315868, r5315855, MPFR_RNDN);
        mpfr_mul(r5315870, r5315867, r5315869, MPFR_RNDN);
        mpfr_add(r5315871, r5315866, r5315870, MPFR_RNDN);
        ;
        mpfr_mul(r5315873, r5315869, r5315855, MPFR_RNDN);
        mpfr_mul(r5315874, r5315873, r5315855, MPFR_RNDN);
        mpfr_mul(r5315875, r5315872, r5315874, MPFR_RNDN);
        mpfr_add(r5315876, r5315871, r5315875, MPFR_RNDN);
        return mpfr_get_d(r5315876, MPFR_RNDN);
}

static mpfr_t r5315877, r5315878, r5315879, r5315880, r5315881, r5315882, r5315883, r5315884, r5315885, r5315886, r5315887, r5315888, r5315889, r5315890, r5315891, r5315892, r5315893, r5315894, r5315895, r5315896, r5315897, r5315898, r5315899, r5315900;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(848);
        mpfr_init(r5315877);
        mpfr_init(r5315878);
        mpfr_init_set_str(r5315879, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r5315880);
        mpfr_init(r5315881);
        mpfr_init(r5315882);
        mpfr_init_set_str(r5315883, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r5315884);
        mpfr_init_set_str(r5315885, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r5315886);
        mpfr_init(r5315887);
        mpfr_init(r5315888);
        mpfr_init(r5315889);
        mpfr_init_set_str(r5315890, "3", 10, MPFR_RNDN);
        mpfr_init(r5315891);
        mpfr_init(r5315892);
        mpfr_init(r5315893);
        mpfr_init_set_str(r5315894, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5315895, "512.0", 10, MPFR_RNDN);
        mpfr_init(r5315896);
        mpfr_init(r5315897);
        mpfr_init(r5315898);
        mpfr_init(r5315899);
        mpfr_init(r5315900);
}

double f_fm(double x) {
        mpfr_set_d(r5315877, x, MPFR_RNDN);
        mpfr_mul(r5315878, r5315877, r5315877, MPFR_RNDN);
        ;
        mpfr_mul(r5315880, r5315877, r5315879, MPFR_RNDN);
        mpfr_mul(r5315881, r5315878, r5315880, MPFR_RNDN);
        mpfr_mul(r5315882, r5315878, r5315881, MPFR_RNDN);
        ;
        mpfr_mul(r5315884, r5315883, r5315877, MPFR_RNDN);
        ;
        mpfr_mul(r5315886, r5315885, r5315877, MPFR_RNDN);
        mpfr_mul(r5315887, r5315886, r5315878, MPFR_RNDN);
        mpfr_add(r5315888, r5315884, r5315887, MPFR_RNDN);
        mpfr_add(r5315889, r5315882, r5315888, MPFR_RNDN);
        ;
        mpfr_add(r5315891, r5315890, r5315890, MPFR_RNDN);
        mpfr_pow(r5315892, r5315877, r5315891, MPFR_RNDN);
        mpfr_mul(r5315893, r5315892, r5315877, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5315896, r5315895, r5315877, MPFR_RNDN);
        mpfr_mul(r5315897, r5315877, r5315896, MPFR_RNDN);
        mpfr_add(r5315898, r5315894, r5315897, MPFR_RNDN);
        mpfr_mul(r5315899, r5315893, r5315898, MPFR_RNDN);
        mpfr_add(r5315900, r5315889, r5315899, MPFR_RNDN);
        return mpfr_get_d(r5315900, MPFR_RNDN);
}

static mpfr_t r5315901, r5315902, r5315903, r5315904, r5315905, r5315906, r5315907, r5315908, r5315909, r5315910, r5315911, r5315912, r5315913, r5315914, r5315915, r5315916, r5315917, r5315918, r5315919, r5315920, r5315921, r5315922, r5315923, r5315924;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(848);
        mpfr_init(r5315901);
        mpfr_init(r5315902);
        mpfr_init_set_str(r5315903, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r5315904);
        mpfr_init(r5315905);
        mpfr_init(r5315906);
        mpfr_init_set_str(r5315907, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r5315908);
        mpfr_init_set_str(r5315909, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r5315910);
        mpfr_init(r5315911);
        mpfr_init(r5315912);
        mpfr_init(r5315913);
        mpfr_init_set_str(r5315914, "3", 10, MPFR_RNDN);
        mpfr_init(r5315915);
        mpfr_init(r5315916);
        mpfr_init(r5315917);
        mpfr_init_set_str(r5315918, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5315919, "512.0", 10, MPFR_RNDN);
        mpfr_init(r5315920);
        mpfr_init(r5315921);
        mpfr_init(r5315922);
        mpfr_init(r5315923);
        mpfr_init(r5315924);
}

double f_dm(double x) {
        mpfr_set_d(r5315901, x, MPFR_RNDN);
        mpfr_mul(r5315902, r5315901, r5315901, MPFR_RNDN);
        ;
        mpfr_mul(r5315904, r5315901, r5315903, MPFR_RNDN);
        mpfr_mul(r5315905, r5315902, r5315904, MPFR_RNDN);
        mpfr_mul(r5315906, r5315902, r5315905, MPFR_RNDN);
        ;
        mpfr_mul(r5315908, r5315907, r5315901, MPFR_RNDN);
        ;
        mpfr_mul(r5315910, r5315909, r5315901, MPFR_RNDN);
        mpfr_mul(r5315911, r5315910, r5315902, MPFR_RNDN);
        mpfr_add(r5315912, r5315908, r5315911, MPFR_RNDN);
        mpfr_add(r5315913, r5315906, r5315912, MPFR_RNDN);
        ;
        mpfr_add(r5315915, r5315914, r5315914, MPFR_RNDN);
        mpfr_pow(r5315916, r5315901, r5315915, MPFR_RNDN);
        mpfr_mul(r5315917, r5315916, r5315901, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5315920, r5315919, r5315901, MPFR_RNDN);
        mpfr_mul(r5315921, r5315901, r5315920, MPFR_RNDN);
        mpfr_add(r5315922, r5315918, r5315921, MPFR_RNDN);
        mpfr_mul(r5315923, r5315917, r5315922, MPFR_RNDN);
        mpfr_add(r5315924, r5315913, r5315923, MPFR_RNDN);
        return mpfr_get_d(r5315924, MPFR_RNDN);
}

