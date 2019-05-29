#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r11729848 = 1.0;
        float r11729849 = -5.0;
        float r11729850 = x;
        float r11729851 = r11729849 * r11729850;
        float r11729852 = r11729848 + r11729851;
        float r11729853 = 5.0;
        float r11729854 = r11729850 * r11729850;
        float r11729855 = r11729853 * r11729854;
        float r11729856 = r11729852 + r11729855;
        float r11729857 = -1.666667;
        float r11729858 = r11729854 * r11729850;
        float r11729859 = r11729857 * r11729858;
        float r11729860 = r11729856 + r11729859;
        float r11729861 = 0.208333;
        float r11729862 = r11729858 * r11729850;
        float r11729863 = r11729861 * r11729862;
        float r11729864 = r11729860 + r11729863;
        float r11729865 = -0.008333;
        float r11729866 = r11729862 * r11729850;
        float r11729867 = r11729865 * r11729866;
        float r11729868 = r11729864 + r11729867;
        return r11729868;
}

double f_id(double x) {
        double r11729869 = 1.0;
        double r11729870 = -5.0;
        double r11729871 = x;
        double r11729872 = r11729870 * r11729871;
        double r11729873 = r11729869 + r11729872;
        double r11729874 = 5.0;
        double r11729875 = r11729871 * r11729871;
        double r11729876 = r11729874 * r11729875;
        double r11729877 = r11729873 + r11729876;
        double r11729878 = -1.666667;
        double r11729879 = r11729875 * r11729871;
        double r11729880 = r11729878 * r11729879;
        double r11729881 = r11729877 + r11729880;
        double r11729882 = 0.208333;
        double r11729883 = r11729879 * r11729871;
        double r11729884 = r11729882 * r11729883;
        double r11729885 = r11729881 + r11729884;
        double r11729886 = -0.008333;
        double r11729887 = r11729883 * r11729871;
        double r11729888 = r11729886 * r11729887;
        double r11729889 = r11729885 + r11729888;
        return r11729889;
}


double f_of(float x) {
        float r11729890 = x;
        float r11729891 = -5.0;
        float r11729892 = r11729890 * r11729891;
        float r11729893 = 1.0;
        float r11729894 = r11729892 + r11729893;
        float r11729895 = r11729890 * r11729890;
        float r11729896 = r11729895 * r11729895;
        float r11729897 = -0.008333;
        float r11729898 = r11729897 * r11729890;
        float r11729899 = 0.208333;
        float r11729900 = r11729898 + r11729899;
        float r11729901 = r11729896 * r11729900;
        float r11729902 = -1.666667;
        float r11729903 = r11729902 * r11729890;
        float r11729904 = 5.0;
        float r11729905 = r11729903 + r11729904;
        float r11729906 = r11729895 * r11729905;
        float r11729907 = cbrt(r11729906);
        float r11729908 = r11729907 * r11729907;
        float r11729909 = r11729908 * r11729907;
        float r11729910 = r11729901 + r11729909;
        float r11729911 = r11729894 + r11729910;
        return r11729911;
}

double f_od(double x) {
        double r11729912 = x;
        double r11729913 = -5.0;
        double r11729914 = r11729912 * r11729913;
        double r11729915 = 1.0;
        double r11729916 = r11729914 + r11729915;
        double r11729917 = r11729912 * r11729912;
        double r11729918 = r11729917 * r11729917;
        double r11729919 = -0.008333;
        double r11729920 = r11729919 * r11729912;
        double r11729921 = 0.208333;
        double r11729922 = r11729920 + r11729921;
        double r11729923 = r11729918 * r11729922;
        double r11729924 = -1.666667;
        double r11729925 = r11729924 * r11729912;
        double r11729926 = 5.0;
        double r11729927 = r11729925 + r11729926;
        double r11729928 = r11729917 * r11729927;
        double r11729929 = cbrt(r11729928);
        double r11729930 = r11729929 * r11729929;
        double r11729931 = r11729930 * r11729929;
        double r11729932 = r11729923 + r11729931;
        double r11729933 = r11729916 + r11729932;
        return r11729933;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11729934, r11729935, r11729936, r11729937, r11729938, r11729939, r11729940, r11729941, r11729942, r11729943, r11729944, r11729945, r11729946, r11729947, r11729948, r11729949, r11729950, r11729951, r11729952, r11729953, r11729954;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11729934, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11729935, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11729936);
        mpfr_init(r11729937);
        mpfr_init(r11729938);
        mpfr_init_set_str(r11729939, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11729940);
        mpfr_init(r11729941);
        mpfr_init(r11729942);
        mpfr_init_set_str(r11729943, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11729944);
        mpfr_init(r11729945);
        mpfr_init(r11729946);
        mpfr_init_set_str(r11729947, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11729948);
        mpfr_init(r11729949);
        mpfr_init(r11729950);
        mpfr_init_set_str(r11729951, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11729952);
        mpfr_init(r11729953);
        mpfr_init(r11729954);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11729936, x, MPFR_RNDN);
        mpfr_mul(r11729937, r11729935, r11729936, MPFR_RNDN);
        mpfr_add(r11729938, r11729934, r11729937, MPFR_RNDN);
        ;
        mpfr_mul(r11729940, r11729936, r11729936, MPFR_RNDN);
        mpfr_mul(r11729941, r11729939, r11729940, MPFR_RNDN);
        mpfr_add(r11729942, r11729938, r11729941, MPFR_RNDN);
        ;
        mpfr_mul(r11729944, r11729940, r11729936, MPFR_RNDN);
        mpfr_mul(r11729945, r11729943, r11729944, MPFR_RNDN);
        mpfr_add(r11729946, r11729942, r11729945, MPFR_RNDN);
        ;
        mpfr_mul(r11729948, r11729944, r11729936, MPFR_RNDN);
        mpfr_mul(r11729949, r11729947, r11729948, MPFR_RNDN);
        mpfr_add(r11729950, r11729946, r11729949, MPFR_RNDN);
        ;
        mpfr_mul(r11729952, r11729948, r11729936, MPFR_RNDN);
        mpfr_mul(r11729953, r11729951, r11729952, MPFR_RNDN);
        mpfr_add(r11729954, r11729950, r11729953, MPFR_RNDN);
        return mpfr_get_d(r11729954, MPFR_RNDN);
}

static mpfr_t r11729955, r11729956, r11729957, r11729958, r11729959, r11729960, r11729961, r11729962, r11729963, r11729964, r11729965, r11729966, r11729967, r11729968, r11729969, r11729970, r11729971, r11729972, r11729973, r11729974, r11729975, r11729976;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11729955);
        mpfr_init_set_str(r11729956, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11729957);
        mpfr_init_set_str(r11729958, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729959);
        mpfr_init(r11729960);
        mpfr_init(r11729961);
        mpfr_init_set_str(r11729962, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11729963);
        mpfr_init_set_str(r11729964, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11729965);
        mpfr_init(r11729966);
        mpfr_init_set_str(r11729967, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11729968);
        mpfr_init_set_str(r11729969, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11729970);
        mpfr_init(r11729971);
        mpfr_init(r11729972);
        mpfr_init(r11729973);
        mpfr_init(r11729974);
        mpfr_init(r11729975);
        mpfr_init(r11729976);
}

double f_fm(double x) {
        mpfr_set_d(r11729955, x, MPFR_RNDN);
        ;
        mpfr_mul(r11729957, r11729955, r11729956, MPFR_RNDN);
        ;
        mpfr_add(r11729959, r11729957, r11729958, MPFR_RNDN);
        mpfr_mul(r11729960, r11729955, r11729955, MPFR_RNDN);
        mpfr_mul(r11729961, r11729960, r11729960, MPFR_RNDN);
        ;
        mpfr_mul(r11729963, r11729962, r11729955, MPFR_RNDN);
        ;
        mpfr_add(r11729965, r11729963, r11729964, MPFR_RNDN);
        mpfr_mul(r11729966, r11729961, r11729965, MPFR_RNDN);
        ;
        mpfr_mul(r11729968, r11729967, r11729955, MPFR_RNDN);
        ;
        mpfr_add(r11729970, r11729968, r11729969, MPFR_RNDN);
        mpfr_mul(r11729971, r11729960, r11729970, MPFR_RNDN);
        mpfr_cbrt(r11729972, r11729971, MPFR_RNDN);
        mpfr_mul(r11729973, r11729972, r11729972, MPFR_RNDN);
        mpfr_mul(r11729974, r11729973, r11729972, MPFR_RNDN);
        mpfr_add(r11729975, r11729966, r11729974, MPFR_RNDN);
        mpfr_add(r11729976, r11729959, r11729975, MPFR_RNDN);
        return mpfr_get_d(r11729976, MPFR_RNDN);
}

static mpfr_t r11729977, r11729978, r11729979, r11729980, r11729981, r11729982, r11729983, r11729984, r11729985, r11729986, r11729987, r11729988, r11729989, r11729990, r11729991, r11729992, r11729993, r11729994, r11729995, r11729996, r11729997, r11729998;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11729977);
        mpfr_init_set_str(r11729978, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11729979);
        mpfr_init_set_str(r11729980, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11729981);
        mpfr_init(r11729982);
        mpfr_init(r11729983);
        mpfr_init_set_str(r11729984, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11729985);
        mpfr_init_set_str(r11729986, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11729987);
        mpfr_init(r11729988);
        mpfr_init_set_str(r11729989, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11729990);
        mpfr_init_set_str(r11729991, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11729992);
        mpfr_init(r11729993);
        mpfr_init(r11729994);
        mpfr_init(r11729995);
        mpfr_init(r11729996);
        mpfr_init(r11729997);
        mpfr_init(r11729998);
}

double f_dm(double x) {
        mpfr_set_d(r11729977, x, MPFR_RNDN);
        ;
        mpfr_mul(r11729979, r11729977, r11729978, MPFR_RNDN);
        ;
        mpfr_add(r11729981, r11729979, r11729980, MPFR_RNDN);
        mpfr_mul(r11729982, r11729977, r11729977, MPFR_RNDN);
        mpfr_mul(r11729983, r11729982, r11729982, MPFR_RNDN);
        ;
        mpfr_mul(r11729985, r11729984, r11729977, MPFR_RNDN);
        ;
        mpfr_add(r11729987, r11729985, r11729986, MPFR_RNDN);
        mpfr_mul(r11729988, r11729983, r11729987, MPFR_RNDN);
        ;
        mpfr_mul(r11729990, r11729989, r11729977, MPFR_RNDN);
        ;
        mpfr_add(r11729992, r11729990, r11729991, MPFR_RNDN);
        mpfr_mul(r11729993, r11729982, r11729992, MPFR_RNDN);
        mpfr_cbrt(r11729994, r11729993, MPFR_RNDN);
        mpfr_mul(r11729995, r11729994, r11729994, MPFR_RNDN);
        mpfr_mul(r11729996, r11729995, r11729994, MPFR_RNDN);
        mpfr_add(r11729997, r11729988, r11729996, MPFR_RNDN);
        mpfr_add(r11729998, r11729981, r11729997, MPFR_RNDN);
        return mpfr_get_d(r11729998, MPFR_RNDN);
}

