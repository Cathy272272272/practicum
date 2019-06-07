#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8595872 = 1.0;
        float r8595873 = -5.0;
        float r8595874 = x;
        float r8595875 = r8595873 * r8595874;
        float r8595876 = r8595872 + r8595875;
        float r8595877 = 5.0;
        float r8595878 = r8595874 * r8595874;
        float r8595879 = r8595877 * r8595878;
        float r8595880 = r8595876 + r8595879;
        float r8595881 = -1.666667;
        float r8595882 = r8595878 * r8595874;
        float r8595883 = r8595881 * r8595882;
        float r8595884 = r8595880 + r8595883;
        float r8595885 = 0.208333;
        float r8595886 = r8595882 * r8595874;
        float r8595887 = r8595885 * r8595886;
        float r8595888 = r8595884 + r8595887;
        float r8595889 = -0.008333;
        float r8595890 = r8595886 * r8595874;
        float r8595891 = r8595889 * r8595890;
        float r8595892 = r8595888 + r8595891;
        return r8595892;
}

double f_id(double x) {
        double r8595893 = 1.0;
        double r8595894 = -5.0;
        double r8595895 = x;
        double r8595896 = r8595894 * r8595895;
        double r8595897 = r8595893 + r8595896;
        double r8595898 = 5.0;
        double r8595899 = r8595895 * r8595895;
        double r8595900 = r8595898 * r8595899;
        double r8595901 = r8595897 + r8595900;
        double r8595902 = -1.666667;
        double r8595903 = r8595899 * r8595895;
        double r8595904 = r8595902 * r8595903;
        double r8595905 = r8595901 + r8595904;
        double r8595906 = 0.208333;
        double r8595907 = r8595903 * r8595895;
        double r8595908 = r8595906 * r8595907;
        double r8595909 = r8595905 + r8595908;
        double r8595910 = -0.008333;
        double r8595911 = r8595907 * r8595895;
        double r8595912 = r8595910 * r8595911;
        double r8595913 = r8595909 + r8595912;
        return r8595913;
}


double f_of(float x) {
        float r8595914 = 1.0;
        float r8595915 = -5.0;
        float r8595916 = x;
        float r8595917 = r8595915 * r8595916;
        float r8595918 = r8595914 + r8595917;
        float r8595919 = 5.0;
        float r8595920 = r8595916 * r8595916;
        float r8595921 = r8595919 * r8595920;
        float r8595922 = r8595918 + r8595921;
        float r8595923 = -1.666667;
        float r8595924 = r8595920 * r8595916;
        float r8595925 = r8595923 * r8595924;
        float r8595926 = r8595922 + r8595925;
        float r8595927 = 0.208333;
        float r8595928 = r8595924 * r8595916;
        float r8595929 = r8595927 * r8595928;
        float r8595930 = r8595926 + r8595929;
        float r8595931 = -0.008333;
        float r8595932 = 3;
        float r8595933 = 1;
        float r8595934 = r8595932 + r8595933;
        float r8595935 = r8595934 + r8595933;
        float r8595936 = pow(r8595916, r8595935);
        float r8595937 = r8595931 * r8595936;
        float r8595938 = r8595930 + r8595937;
        return r8595938;
}

double f_od(double x) {
        double r8595939 = 1.0;
        double r8595940 = -5.0;
        double r8595941 = x;
        double r8595942 = r8595940 * r8595941;
        double r8595943 = r8595939 + r8595942;
        double r8595944 = 5.0;
        double r8595945 = r8595941 * r8595941;
        double r8595946 = r8595944 * r8595945;
        double r8595947 = r8595943 + r8595946;
        double r8595948 = -1.666667;
        double r8595949 = r8595945 * r8595941;
        double r8595950 = r8595948 * r8595949;
        double r8595951 = r8595947 + r8595950;
        double r8595952 = 0.208333;
        double r8595953 = r8595949 * r8595941;
        double r8595954 = r8595952 * r8595953;
        double r8595955 = r8595951 + r8595954;
        double r8595956 = -0.008333;
        double r8595957 = 3;
        double r8595958 = 1;
        double r8595959 = r8595957 + r8595958;
        double r8595960 = r8595959 + r8595958;
        double r8595961 = pow(r8595941, r8595960);
        double r8595962 = r8595956 * r8595961;
        double r8595963 = r8595955 + r8595962;
        return r8595963;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8595964, r8595965, r8595966, r8595967, r8595968, r8595969, r8595970, r8595971, r8595972, r8595973, r8595974, r8595975, r8595976, r8595977, r8595978, r8595979, r8595980, r8595981, r8595982, r8595983, r8595984;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8595964, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595965, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r8595966);
        mpfr_init(r8595967);
        mpfr_init(r8595968);
        mpfr_init_set_str(r8595969, "5.0", 10, MPFR_RNDN);
        mpfr_init(r8595970);
        mpfr_init(r8595971);
        mpfr_init(r8595972);
        mpfr_init_set_str(r8595973, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r8595974);
        mpfr_init(r8595975);
        mpfr_init(r8595976);
        mpfr_init_set_str(r8595977, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r8595978);
        mpfr_init(r8595979);
        mpfr_init(r8595980);
        mpfr_init_set_str(r8595981, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r8595982);
        mpfr_init(r8595983);
        mpfr_init(r8595984);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8595966, x, MPFR_RNDN);
        mpfr_mul(r8595967, r8595965, r8595966, MPFR_RNDN);
        mpfr_add(r8595968, r8595964, r8595967, MPFR_RNDN);
        ;
        mpfr_mul(r8595970, r8595966, r8595966, MPFR_RNDN);
        mpfr_mul(r8595971, r8595969, r8595970, MPFR_RNDN);
        mpfr_add(r8595972, r8595968, r8595971, MPFR_RNDN);
        ;
        mpfr_mul(r8595974, r8595970, r8595966, MPFR_RNDN);
        mpfr_mul(r8595975, r8595973, r8595974, MPFR_RNDN);
        mpfr_add(r8595976, r8595972, r8595975, MPFR_RNDN);
        ;
        mpfr_mul(r8595978, r8595974, r8595966, MPFR_RNDN);
        mpfr_mul(r8595979, r8595977, r8595978, MPFR_RNDN);
        mpfr_add(r8595980, r8595976, r8595979, MPFR_RNDN);
        ;
        mpfr_mul(r8595982, r8595978, r8595966, MPFR_RNDN);
        mpfr_mul(r8595983, r8595981, r8595982, MPFR_RNDN);
        mpfr_add(r8595984, r8595980, r8595983, MPFR_RNDN);
        return mpfr_get_d(r8595984, MPFR_RNDN);
}

static mpfr_t r8595985, r8595986, r8595987, r8595988, r8595989, r8595990, r8595991, r8595992, r8595993, r8595994, r8595995, r8595996, r8595997, r8595998, r8595999, r8596000, r8596001, r8596002, r8596003, r8596004, r8596005, r8596006, r8596007, r8596008, r8596009;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8595985, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595986, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r8595987);
        mpfr_init(r8595988);
        mpfr_init(r8595989);
        mpfr_init_set_str(r8595990, "5.0", 10, MPFR_RNDN);
        mpfr_init(r8595991);
        mpfr_init(r8595992);
        mpfr_init(r8595993);
        mpfr_init_set_str(r8595994, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r8595995);
        mpfr_init(r8595996);
        mpfr_init(r8595997);
        mpfr_init_set_str(r8595998, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r8595999);
        mpfr_init(r8596000);
        mpfr_init(r8596001);
        mpfr_init_set_str(r8596002, "-0.008333", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596003, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596004, "1", 10, MPFR_RNDN);
        mpfr_init(r8596005);
        mpfr_init(r8596006);
        mpfr_init(r8596007);
        mpfr_init(r8596008);
        mpfr_init(r8596009);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8595987, x, MPFR_RNDN);
        mpfr_mul(r8595988, r8595986, r8595987, MPFR_RNDN);
        mpfr_add(r8595989, r8595985, r8595988, MPFR_RNDN);
        ;
        mpfr_mul(r8595991, r8595987, r8595987, MPFR_RNDN);
        mpfr_mul(r8595992, r8595990, r8595991, MPFR_RNDN);
        mpfr_add(r8595993, r8595989, r8595992, MPFR_RNDN);
        ;
        mpfr_mul(r8595995, r8595991, r8595987, MPFR_RNDN);
        mpfr_mul(r8595996, r8595994, r8595995, MPFR_RNDN);
        mpfr_add(r8595997, r8595993, r8595996, MPFR_RNDN);
        ;
        mpfr_mul(r8595999, r8595995, r8595987, MPFR_RNDN);
        mpfr_mul(r8596000, r8595998, r8595999, MPFR_RNDN);
        mpfr_add(r8596001, r8595997, r8596000, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8596005, r8596003, r8596004, MPFR_RNDN);
        mpfr_add(r8596006, r8596005, r8596004, MPFR_RNDN);
        mpfr_pow(r8596007, r8595987, r8596006, MPFR_RNDN);
        mpfr_mul(r8596008, r8596002, r8596007, MPFR_RNDN);
        mpfr_add(r8596009, r8596001, r8596008, MPFR_RNDN);
        return mpfr_get_d(r8596009, MPFR_RNDN);
}

static mpfr_t r8596010, r8596011, r8596012, r8596013, r8596014, r8596015, r8596016, r8596017, r8596018, r8596019, r8596020, r8596021, r8596022, r8596023, r8596024, r8596025, r8596026, r8596027, r8596028, r8596029, r8596030, r8596031, r8596032, r8596033, r8596034;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8596010, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596011, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r8596012);
        mpfr_init(r8596013);
        mpfr_init(r8596014);
        mpfr_init_set_str(r8596015, "5.0", 10, MPFR_RNDN);
        mpfr_init(r8596016);
        mpfr_init(r8596017);
        mpfr_init(r8596018);
        mpfr_init_set_str(r8596019, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r8596020);
        mpfr_init(r8596021);
        mpfr_init(r8596022);
        mpfr_init_set_str(r8596023, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r8596024);
        mpfr_init(r8596025);
        mpfr_init(r8596026);
        mpfr_init_set_str(r8596027, "-0.008333", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596028, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8596029, "1", 10, MPFR_RNDN);
        mpfr_init(r8596030);
        mpfr_init(r8596031);
        mpfr_init(r8596032);
        mpfr_init(r8596033);
        mpfr_init(r8596034);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8596012, x, MPFR_RNDN);
        mpfr_mul(r8596013, r8596011, r8596012, MPFR_RNDN);
        mpfr_add(r8596014, r8596010, r8596013, MPFR_RNDN);
        ;
        mpfr_mul(r8596016, r8596012, r8596012, MPFR_RNDN);
        mpfr_mul(r8596017, r8596015, r8596016, MPFR_RNDN);
        mpfr_add(r8596018, r8596014, r8596017, MPFR_RNDN);
        ;
        mpfr_mul(r8596020, r8596016, r8596012, MPFR_RNDN);
        mpfr_mul(r8596021, r8596019, r8596020, MPFR_RNDN);
        mpfr_add(r8596022, r8596018, r8596021, MPFR_RNDN);
        ;
        mpfr_mul(r8596024, r8596020, r8596012, MPFR_RNDN);
        mpfr_mul(r8596025, r8596023, r8596024, MPFR_RNDN);
        mpfr_add(r8596026, r8596022, r8596025, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8596030, r8596028, r8596029, MPFR_RNDN);
        mpfr_add(r8596031, r8596030, r8596029, MPFR_RNDN);
        mpfr_pow(r8596032, r8596012, r8596031, MPFR_RNDN);
        mpfr_mul(r8596033, r8596027, r8596032, MPFR_RNDN);
        mpfr_add(r8596034, r8596026, r8596033, MPFR_RNDN);
        return mpfr_get_d(r8596034, MPFR_RNDN);
}

