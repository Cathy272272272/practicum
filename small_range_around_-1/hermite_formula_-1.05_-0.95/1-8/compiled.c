#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r60542796 = 1680.0;
        float r60542797 = -13440.0;
        float r60542798 = x;
        float r60542799 = r60542798 * r60542798;
        float r60542800 = r60542797 * r60542799;
        float r60542801 = r60542796 + r60542800;
        float r60542802 = 13440.0;
        float r60542803 = r60542799 * r60542798;
        float r60542804 = r60542803 * r60542798;
        float r60542805 = r60542802 * r60542804;
        float r60542806 = r60542801 + r60542805;
        float r60542807 = -3584.0;
        float r60542808 = r60542804 * r60542798;
        float r60542809 = r60542808 * r60542798;
        float r60542810 = r60542807 * r60542809;
        float r60542811 = r60542806 + r60542810;
        float r60542812 = 256.0;
        float r60542813 = r60542809 * r60542798;
        float r60542814 = r60542813 * r60542798;
        float r60542815 = r60542812 * r60542814;
        float r60542816 = r60542811 + r60542815;
        return r60542816;
}

double f_id(double x) {
        double r60542817 = 1680.0;
        double r60542818 = -13440.0;
        double r60542819 = x;
        double r60542820 = r60542819 * r60542819;
        double r60542821 = r60542818 * r60542820;
        double r60542822 = r60542817 + r60542821;
        double r60542823 = 13440.0;
        double r60542824 = r60542820 * r60542819;
        double r60542825 = r60542824 * r60542819;
        double r60542826 = r60542823 * r60542825;
        double r60542827 = r60542822 + r60542826;
        double r60542828 = -3584.0;
        double r60542829 = r60542825 * r60542819;
        double r60542830 = r60542829 * r60542819;
        double r60542831 = r60542828 * r60542830;
        double r60542832 = r60542827 + r60542831;
        double r60542833 = 256.0;
        double r60542834 = r60542830 * r60542819;
        double r60542835 = r60542834 * r60542819;
        double r60542836 = r60542833 * r60542835;
        double r60542837 = r60542832 + r60542836;
        return r60542837;
}


double f_of(float x) {
        float r60542838 = x;
        float r60542839 = 3;
        float r60542840 = pow(r60542838, r60542839);
        float r60542841 = r60542840 * r60542840;
        float r60542842 = 256.0;
        float r60542843 = r60542838 * r60542838;
        float r60542844 = r60542842 * r60542843;
        float r60542845 = 3584.0;
        float r60542846 = r60542844 - r60542845;
        float r60542847 = r60542841 * r60542846;
        float r60542848 = pow(r60542840, r60542839);
        float r60542849 = pow(r60542848, r60542839);
        float r60542850 = r60542849 - r60542848;
        float r60542851 = 1;
        float r60542852 = r60542839 + r60542851;
        float r60542853 = pow(r60542840, r60542852);
        float r60542854 = pow(r60542843, r60542839);
        float r60542855 = r60542853 + r60542854;
        float r60542856 = r60542848 * r60542848;
        float r60542857 = r60542855 + r60542856;
        float r60542858 = r60542850 / r60542857;
        float r60542859 = r60542840 * r60542838;
        float r60542860 = r60542843 + r60542859;
        float r60542861 = r60542841 + r60542860;
        float r60542862 = r60542858 / r60542861;
        float r60542863 = 13440.0;
        float r60542864 = r60542863 * r60542838;
        float r60542865 = r60542862 * r60542864;
        float r60542866 = 1680.0;
        float r60542867 = r60542865 + r60542866;
        float r60542868 = r60542847 + r60542867;
        return r60542868;
}

double f_od(double x) {
        double r60542869 = x;
        double r60542870 = 3;
        double r60542871 = pow(r60542869, r60542870);
        double r60542872 = r60542871 * r60542871;
        double r60542873 = 256.0;
        double r60542874 = r60542869 * r60542869;
        double r60542875 = r60542873 * r60542874;
        double r60542876 = 3584.0;
        double r60542877 = r60542875 - r60542876;
        double r60542878 = r60542872 * r60542877;
        double r60542879 = pow(r60542871, r60542870);
        double r60542880 = pow(r60542879, r60542870);
        double r60542881 = r60542880 - r60542879;
        double r60542882 = 1;
        double r60542883 = r60542870 + r60542882;
        double r60542884 = pow(r60542871, r60542883);
        double r60542885 = pow(r60542874, r60542870);
        double r60542886 = r60542884 + r60542885;
        double r60542887 = r60542879 * r60542879;
        double r60542888 = r60542886 + r60542887;
        double r60542889 = r60542881 / r60542888;
        double r60542890 = r60542871 * r60542869;
        double r60542891 = r60542874 + r60542890;
        double r60542892 = r60542872 + r60542891;
        double r60542893 = r60542889 / r60542892;
        double r60542894 = 13440.0;
        double r60542895 = r60542894 * r60542869;
        double r60542896 = r60542893 * r60542895;
        double r60542897 = 1680.0;
        double r60542898 = r60542896 + r60542897;
        double r60542899 = r60542878 + r60542898;
        return r60542899;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60542900, r60542901, r60542902, r60542903, r60542904, r60542905, r60542906, r60542907, r60542908, r60542909, r60542910, r60542911, r60542912, r60542913, r60542914, r60542915, r60542916, r60542917, r60542918, r60542919, r60542920;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60542900, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60542901, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r60542902);
        mpfr_init(r60542903);
        mpfr_init(r60542904);
        mpfr_init(r60542905);
        mpfr_init_set_str(r60542906, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r60542907);
        mpfr_init(r60542908);
        mpfr_init(r60542909);
        mpfr_init(r60542910);
        mpfr_init_set_str(r60542911, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r60542912);
        mpfr_init(r60542913);
        mpfr_init(r60542914);
        mpfr_init(r60542915);
        mpfr_init_set_str(r60542916, "256.0", 10, MPFR_RNDN);
        mpfr_init(r60542917);
        mpfr_init(r60542918);
        mpfr_init(r60542919);
        mpfr_init(r60542920);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60542902, x, MPFR_RNDN);
        mpfr_mul(r60542903, r60542902, r60542902, MPFR_RNDN);
        mpfr_mul(r60542904, r60542901, r60542903, MPFR_RNDN);
        mpfr_add(r60542905, r60542900, r60542904, MPFR_RNDN);
        ;
        mpfr_mul(r60542907, r60542903, r60542902, MPFR_RNDN);
        mpfr_mul(r60542908, r60542907, r60542902, MPFR_RNDN);
        mpfr_mul(r60542909, r60542906, r60542908, MPFR_RNDN);
        mpfr_add(r60542910, r60542905, r60542909, MPFR_RNDN);
        ;
        mpfr_mul(r60542912, r60542908, r60542902, MPFR_RNDN);
        mpfr_mul(r60542913, r60542912, r60542902, MPFR_RNDN);
        mpfr_mul(r60542914, r60542911, r60542913, MPFR_RNDN);
        mpfr_add(r60542915, r60542910, r60542914, MPFR_RNDN);
        ;
        mpfr_mul(r60542917, r60542913, r60542902, MPFR_RNDN);
        mpfr_mul(r60542918, r60542917, r60542902, MPFR_RNDN);
        mpfr_mul(r60542919, r60542916, r60542918, MPFR_RNDN);
        mpfr_add(r60542920, r60542915, r60542919, MPFR_RNDN);
        return mpfr_get_d(r60542920, MPFR_RNDN);
}

static mpfr_t r60542921, r60542922, r60542923, r60542924, r60542925, r60542926, r60542927, r60542928, r60542929, r60542930, r60542931, r60542932, r60542933, r60542934, r60542935, r60542936, r60542937, r60542938, r60542939, r60542940, r60542941, r60542942, r60542943, r60542944, r60542945, r60542946, r60542947, r60542948, r60542949, r60542950, r60542951;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60542921);
        mpfr_init_set_str(r60542922, "3", 10, MPFR_RNDN);
        mpfr_init(r60542923);
        mpfr_init(r60542924);
        mpfr_init_set_str(r60542925, "256.0", 10, MPFR_RNDN);
        mpfr_init(r60542926);
        mpfr_init(r60542927);
        mpfr_init_set_str(r60542928, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r60542929);
        mpfr_init(r60542930);
        mpfr_init(r60542931);
        mpfr_init(r60542932);
        mpfr_init(r60542933);
        mpfr_init_set_str(r60542934, "1", 10, MPFR_RNDN);
        mpfr_init(r60542935);
        mpfr_init(r60542936);
        mpfr_init(r60542937);
        mpfr_init(r60542938);
        mpfr_init(r60542939);
        mpfr_init(r60542940);
        mpfr_init(r60542941);
        mpfr_init(r60542942);
        mpfr_init(r60542943);
        mpfr_init(r60542944);
        mpfr_init(r60542945);
        mpfr_init_set_str(r60542946, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r60542947);
        mpfr_init(r60542948);
        mpfr_init_set_str(r60542949, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r60542950);
        mpfr_init(r60542951);
}

double f_fm(double x) {
        mpfr_set_d(r60542921, x, MPFR_RNDN);
        ;
        mpfr_pow(r60542923, r60542921, r60542922, MPFR_RNDN);
        mpfr_mul(r60542924, r60542923, r60542923, MPFR_RNDN);
        ;
        mpfr_mul(r60542926, r60542921, r60542921, MPFR_RNDN);
        mpfr_mul(r60542927, r60542925, r60542926, MPFR_RNDN);
        ;
        mpfr_sub(r60542929, r60542927, r60542928, MPFR_RNDN);
        mpfr_mul(r60542930, r60542924, r60542929, MPFR_RNDN);
        mpfr_pow(r60542931, r60542923, r60542922, MPFR_RNDN);
        mpfr_pow(r60542932, r60542931, r60542922, MPFR_RNDN);
        mpfr_sub(r60542933, r60542932, r60542931, MPFR_RNDN);
        ;
        mpfr_add(r60542935, r60542922, r60542934, MPFR_RNDN);
        mpfr_pow(r60542936, r60542923, r60542935, MPFR_RNDN);
        mpfr_pow(r60542937, r60542926, r60542922, MPFR_RNDN);
        mpfr_add(r60542938, r60542936, r60542937, MPFR_RNDN);
        mpfr_mul(r60542939, r60542931, r60542931, MPFR_RNDN);
        mpfr_add(r60542940, r60542938, r60542939, MPFR_RNDN);
        mpfr_div(r60542941, r60542933, r60542940, MPFR_RNDN);
        mpfr_mul(r60542942, r60542923, r60542921, MPFR_RNDN);
        mpfr_add(r60542943, r60542926, r60542942, MPFR_RNDN);
        mpfr_add(r60542944, r60542924, r60542943, MPFR_RNDN);
        mpfr_div(r60542945, r60542941, r60542944, MPFR_RNDN);
        ;
        mpfr_mul(r60542947, r60542946, r60542921, MPFR_RNDN);
        mpfr_mul(r60542948, r60542945, r60542947, MPFR_RNDN);
        ;
        mpfr_add(r60542950, r60542948, r60542949, MPFR_RNDN);
        mpfr_add(r60542951, r60542930, r60542950, MPFR_RNDN);
        return mpfr_get_d(r60542951, MPFR_RNDN);
}

static mpfr_t r60542952, r60542953, r60542954, r60542955, r60542956, r60542957, r60542958, r60542959, r60542960, r60542961, r60542962, r60542963, r60542964, r60542965, r60542966, r60542967, r60542968, r60542969, r60542970, r60542971, r60542972, r60542973, r60542974, r60542975, r60542976, r60542977, r60542978, r60542979, r60542980, r60542981, r60542982;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60542952);
        mpfr_init_set_str(r60542953, "3", 10, MPFR_RNDN);
        mpfr_init(r60542954);
        mpfr_init(r60542955);
        mpfr_init_set_str(r60542956, "256.0", 10, MPFR_RNDN);
        mpfr_init(r60542957);
        mpfr_init(r60542958);
        mpfr_init_set_str(r60542959, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r60542960);
        mpfr_init(r60542961);
        mpfr_init(r60542962);
        mpfr_init(r60542963);
        mpfr_init(r60542964);
        mpfr_init_set_str(r60542965, "1", 10, MPFR_RNDN);
        mpfr_init(r60542966);
        mpfr_init(r60542967);
        mpfr_init(r60542968);
        mpfr_init(r60542969);
        mpfr_init(r60542970);
        mpfr_init(r60542971);
        mpfr_init(r60542972);
        mpfr_init(r60542973);
        mpfr_init(r60542974);
        mpfr_init(r60542975);
        mpfr_init(r60542976);
        mpfr_init_set_str(r60542977, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r60542978);
        mpfr_init(r60542979);
        mpfr_init_set_str(r60542980, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r60542981);
        mpfr_init(r60542982);
}

double f_dm(double x) {
        mpfr_set_d(r60542952, x, MPFR_RNDN);
        ;
        mpfr_pow(r60542954, r60542952, r60542953, MPFR_RNDN);
        mpfr_mul(r60542955, r60542954, r60542954, MPFR_RNDN);
        ;
        mpfr_mul(r60542957, r60542952, r60542952, MPFR_RNDN);
        mpfr_mul(r60542958, r60542956, r60542957, MPFR_RNDN);
        ;
        mpfr_sub(r60542960, r60542958, r60542959, MPFR_RNDN);
        mpfr_mul(r60542961, r60542955, r60542960, MPFR_RNDN);
        mpfr_pow(r60542962, r60542954, r60542953, MPFR_RNDN);
        mpfr_pow(r60542963, r60542962, r60542953, MPFR_RNDN);
        mpfr_sub(r60542964, r60542963, r60542962, MPFR_RNDN);
        ;
        mpfr_add(r60542966, r60542953, r60542965, MPFR_RNDN);
        mpfr_pow(r60542967, r60542954, r60542966, MPFR_RNDN);
        mpfr_pow(r60542968, r60542957, r60542953, MPFR_RNDN);
        mpfr_add(r60542969, r60542967, r60542968, MPFR_RNDN);
        mpfr_mul(r60542970, r60542962, r60542962, MPFR_RNDN);
        mpfr_add(r60542971, r60542969, r60542970, MPFR_RNDN);
        mpfr_div(r60542972, r60542964, r60542971, MPFR_RNDN);
        mpfr_mul(r60542973, r60542954, r60542952, MPFR_RNDN);
        mpfr_add(r60542974, r60542957, r60542973, MPFR_RNDN);
        mpfr_add(r60542975, r60542955, r60542974, MPFR_RNDN);
        mpfr_div(r60542976, r60542972, r60542975, MPFR_RNDN);
        ;
        mpfr_mul(r60542978, r60542977, r60542952, MPFR_RNDN);
        mpfr_mul(r60542979, r60542976, r60542978, MPFR_RNDN);
        ;
        mpfr_add(r60542981, r60542979, r60542980, MPFR_RNDN);
        mpfr_add(r60542982, r60542961, r60542981, MPFR_RNDN);
        return mpfr_get_d(r60542982, MPFR_RNDN);
}

