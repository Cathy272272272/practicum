#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r13457847 = 1.0;
        float r13457848 = -5.0;
        float r13457849 = x;
        float r13457850 = r13457848 * r13457849;
        float r13457851 = r13457847 + r13457850;
        float r13457852 = 5.0;
        float r13457853 = r13457849 * r13457849;
        float r13457854 = r13457852 * r13457853;
        float r13457855 = r13457851 + r13457854;
        float r13457856 = -1.666667;
        float r13457857 = r13457853 * r13457849;
        float r13457858 = r13457856 * r13457857;
        float r13457859 = r13457855 + r13457858;
        float r13457860 = 0.208333;
        float r13457861 = r13457857 * r13457849;
        float r13457862 = r13457860 * r13457861;
        float r13457863 = r13457859 + r13457862;
        float r13457864 = -0.008333;
        float r13457865 = r13457861 * r13457849;
        float r13457866 = r13457864 * r13457865;
        float r13457867 = r13457863 + r13457866;
        return r13457867;
}

double f_id(double x) {
        double r13457868 = 1.0;
        double r13457869 = -5.0;
        double r13457870 = x;
        double r13457871 = r13457869 * r13457870;
        double r13457872 = r13457868 + r13457871;
        double r13457873 = 5.0;
        double r13457874 = r13457870 * r13457870;
        double r13457875 = r13457873 * r13457874;
        double r13457876 = r13457872 + r13457875;
        double r13457877 = -1.666667;
        double r13457878 = r13457874 * r13457870;
        double r13457879 = r13457877 * r13457878;
        double r13457880 = r13457876 + r13457879;
        double r13457881 = 0.208333;
        double r13457882 = r13457878 * r13457870;
        double r13457883 = r13457881 * r13457882;
        double r13457884 = r13457880 + r13457883;
        double r13457885 = -0.008333;
        double r13457886 = r13457882 * r13457870;
        double r13457887 = r13457885 * r13457886;
        double r13457888 = r13457884 + r13457887;
        return r13457888;
}


double f_of(float x) {
        float r13457889 = x;
        float r13457890 = -5.0;
        float r13457891 = r13457889 * r13457890;
        float r13457892 = 1.0;
        float r13457893 = r13457891 + r13457892;
        float r13457894 = r13457889 * r13457889;
        float r13457895 = r13457894 * r13457894;
        float r13457896 = -0.008333;
        float r13457897 = r13457896 * r13457889;
        float r13457898 = r13457897 * r13457897;
        float r13457899 = 0.208333;
        float r13457900 = r13457899 * r13457899;
        float r13457901 = r13457898 - r13457900;
        float r13457902 = r13457895 * r13457901;
        float r13457903 = r13457897 - r13457899;
        float r13457904 = r13457902 / r13457903;
        float r13457905 = -1.666667;
        float r13457906 = r13457905 * r13457889;
        float r13457907 = 5.0;
        float r13457908 = r13457906 + r13457907;
        float r13457909 = r13457894 * r13457908;
        float r13457910 = r13457904 + r13457909;
        float r13457911 = r13457893 + r13457910;
        return r13457911;
}

double f_od(double x) {
        double r13457912 = x;
        double r13457913 = -5.0;
        double r13457914 = r13457912 * r13457913;
        double r13457915 = 1.0;
        double r13457916 = r13457914 + r13457915;
        double r13457917 = r13457912 * r13457912;
        double r13457918 = r13457917 * r13457917;
        double r13457919 = -0.008333;
        double r13457920 = r13457919 * r13457912;
        double r13457921 = r13457920 * r13457920;
        double r13457922 = 0.208333;
        double r13457923 = r13457922 * r13457922;
        double r13457924 = r13457921 - r13457923;
        double r13457925 = r13457918 * r13457924;
        double r13457926 = r13457920 - r13457922;
        double r13457927 = r13457925 / r13457926;
        double r13457928 = -1.666667;
        double r13457929 = r13457928 * r13457912;
        double r13457930 = 5.0;
        double r13457931 = r13457929 + r13457930;
        double r13457932 = r13457917 * r13457931;
        double r13457933 = r13457927 + r13457932;
        double r13457934 = r13457916 + r13457933;
        return r13457934;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13457935, r13457936, r13457937, r13457938, r13457939, r13457940, r13457941, r13457942, r13457943, r13457944, r13457945, r13457946, r13457947, r13457948, r13457949, r13457950, r13457951, r13457952, r13457953, r13457954, r13457955;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13457935, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13457936, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r13457937);
        mpfr_init(r13457938);
        mpfr_init(r13457939);
        mpfr_init_set_str(r13457940, "5.0", 10, MPFR_RNDN);
        mpfr_init(r13457941);
        mpfr_init(r13457942);
        mpfr_init(r13457943);
        mpfr_init_set_str(r13457944, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r13457945);
        mpfr_init(r13457946);
        mpfr_init(r13457947);
        mpfr_init_set_str(r13457948, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r13457949);
        mpfr_init(r13457950);
        mpfr_init(r13457951);
        mpfr_init_set_str(r13457952, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r13457953);
        mpfr_init(r13457954);
        mpfr_init(r13457955);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13457937, x, MPFR_RNDN);
        mpfr_mul(r13457938, r13457936, r13457937, MPFR_RNDN);
        mpfr_add(r13457939, r13457935, r13457938, MPFR_RNDN);
        ;
        mpfr_mul(r13457941, r13457937, r13457937, MPFR_RNDN);
        mpfr_mul(r13457942, r13457940, r13457941, MPFR_RNDN);
        mpfr_add(r13457943, r13457939, r13457942, MPFR_RNDN);
        ;
        mpfr_mul(r13457945, r13457941, r13457937, MPFR_RNDN);
        mpfr_mul(r13457946, r13457944, r13457945, MPFR_RNDN);
        mpfr_add(r13457947, r13457943, r13457946, MPFR_RNDN);
        ;
        mpfr_mul(r13457949, r13457945, r13457937, MPFR_RNDN);
        mpfr_mul(r13457950, r13457948, r13457949, MPFR_RNDN);
        mpfr_add(r13457951, r13457947, r13457950, MPFR_RNDN);
        ;
        mpfr_mul(r13457953, r13457949, r13457937, MPFR_RNDN);
        mpfr_mul(r13457954, r13457952, r13457953, MPFR_RNDN);
        mpfr_add(r13457955, r13457951, r13457954, MPFR_RNDN);
        return mpfr_get_d(r13457955, MPFR_RNDN);
}

static mpfr_t r13457956, r13457957, r13457958, r13457959, r13457960, r13457961, r13457962, r13457963, r13457964, r13457965, r13457966, r13457967, r13457968, r13457969, r13457970, r13457971, r13457972, r13457973, r13457974, r13457975, r13457976, r13457977, r13457978;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r13457956);
        mpfr_init_set_str(r13457957, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r13457958);
        mpfr_init_set_str(r13457959, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457960);
        mpfr_init(r13457961);
        mpfr_init(r13457962);
        mpfr_init_set_str(r13457963, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r13457964);
        mpfr_init(r13457965);
        mpfr_init_set_str(r13457966, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r13457967);
        mpfr_init(r13457968);
        mpfr_init(r13457969);
        mpfr_init(r13457970);
        mpfr_init(r13457971);
        mpfr_init_set_str(r13457972, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r13457973);
        mpfr_init_set_str(r13457974, "5.0", 10, MPFR_RNDN);
        mpfr_init(r13457975);
        mpfr_init(r13457976);
        mpfr_init(r13457977);
        mpfr_init(r13457978);
}

double f_fm(double x) {
        mpfr_set_d(r13457956, x, MPFR_RNDN);
        ;
        mpfr_mul(r13457958, r13457956, r13457957, MPFR_RNDN);
        ;
        mpfr_add(r13457960, r13457958, r13457959, MPFR_RNDN);
        mpfr_mul(r13457961, r13457956, r13457956, MPFR_RNDN);
        mpfr_mul(r13457962, r13457961, r13457961, MPFR_RNDN);
        ;
        mpfr_mul(r13457964, r13457963, r13457956, MPFR_RNDN);
        mpfr_mul(r13457965, r13457964, r13457964, MPFR_RNDN);
        ;
        mpfr_mul(r13457967, r13457966, r13457966, MPFR_RNDN);
        mpfr_sub(r13457968, r13457965, r13457967, MPFR_RNDN);
        mpfr_mul(r13457969, r13457962, r13457968, MPFR_RNDN);
        mpfr_sub(r13457970, r13457964, r13457966, MPFR_RNDN);
        mpfr_div(r13457971, r13457969, r13457970, MPFR_RNDN);
        ;
        mpfr_mul(r13457973, r13457972, r13457956, MPFR_RNDN);
        ;
        mpfr_add(r13457975, r13457973, r13457974, MPFR_RNDN);
        mpfr_mul(r13457976, r13457961, r13457975, MPFR_RNDN);
        mpfr_add(r13457977, r13457971, r13457976, MPFR_RNDN);
        mpfr_add(r13457978, r13457960, r13457977, MPFR_RNDN);
        return mpfr_get_d(r13457978, MPFR_RNDN);
}

static mpfr_t r13457979, r13457980, r13457981, r13457982, r13457983, r13457984, r13457985, r13457986, r13457987, r13457988, r13457989, r13457990, r13457991, r13457992, r13457993, r13457994, r13457995, r13457996, r13457997, r13457998, r13457999, r13458000, r13458001;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r13457979);
        mpfr_init_set_str(r13457980, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r13457981);
        mpfr_init_set_str(r13457982, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13457983);
        mpfr_init(r13457984);
        mpfr_init(r13457985);
        mpfr_init_set_str(r13457986, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r13457987);
        mpfr_init(r13457988);
        mpfr_init_set_str(r13457989, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r13457990);
        mpfr_init(r13457991);
        mpfr_init(r13457992);
        mpfr_init(r13457993);
        mpfr_init(r13457994);
        mpfr_init_set_str(r13457995, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r13457996);
        mpfr_init_set_str(r13457997, "5.0", 10, MPFR_RNDN);
        mpfr_init(r13457998);
        mpfr_init(r13457999);
        mpfr_init(r13458000);
        mpfr_init(r13458001);
}

double f_dm(double x) {
        mpfr_set_d(r13457979, x, MPFR_RNDN);
        ;
        mpfr_mul(r13457981, r13457979, r13457980, MPFR_RNDN);
        ;
        mpfr_add(r13457983, r13457981, r13457982, MPFR_RNDN);
        mpfr_mul(r13457984, r13457979, r13457979, MPFR_RNDN);
        mpfr_mul(r13457985, r13457984, r13457984, MPFR_RNDN);
        ;
        mpfr_mul(r13457987, r13457986, r13457979, MPFR_RNDN);
        mpfr_mul(r13457988, r13457987, r13457987, MPFR_RNDN);
        ;
        mpfr_mul(r13457990, r13457989, r13457989, MPFR_RNDN);
        mpfr_sub(r13457991, r13457988, r13457990, MPFR_RNDN);
        mpfr_mul(r13457992, r13457985, r13457991, MPFR_RNDN);
        mpfr_sub(r13457993, r13457987, r13457989, MPFR_RNDN);
        mpfr_div(r13457994, r13457992, r13457993, MPFR_RNDN);
        ;
        mpfr_mul(r13457996, r13457995, r13457979, MPFR_RNDN);
        ;
        mpfr_add(r13457998, r13457996, r13457997, MPFR_RNDN);
        mpfr_mul(r13457999, r13457984, r13457998, MPFR_RNDN);
        mpfr_add(r13458000, r13457994, r13457999, MPFR_RNDN);
        mpfr_add(r13458001, r13457983, r13458000, MPFR_RNDN);
        return mpfr_get_d(r13458001, MPFR_RNDN);
}

