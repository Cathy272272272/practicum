#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10001866 = 1.0;
        float r10001867 = -6.0;
        float r10001868 = x;
        float r10001869 = r10001867 * r10001868;
        float r10001870 = r10001866 + r10001869;
        float r10001871 = 7.5;
        float r10001872 = r10001868 * r10001868;
        float r10001873 = r10001871 * r10001872;
        float r10001874 = r10001870 + r10001873;
        float r10001875 = -3.333333;
        float r10001876 = r10001872 * r10001868;
        float r10001877 = r10001875 * r10001876;
        float r10001878 = r10001874 + r10001877;
        float r10001879 = 0.625;
        float r10001880 = r10001876 * r10001868;
        float r10001881 = r10001879 * r10001880;
        float r10001882 = r10001878 + r10001881;
        float r10001883 = -0.05;
        float r10001884 = r10001880 * r10001868;
        float r10001885 = r10001883 * r10001884;
        float r10001886 = r10001882 + r10001885;
        float r10001887 = 0.001389;
        float r10001888 = r10001884 * r10001868;
        float r10001889 = r10001887 * r10001888;
        float r10001890 = r10001886 + r10001889;
        return r10001890;
}

double f_id(double x) {
        double r10001891 = 1.0;
        double r10001892 = -6.0;
        double r10001893 = x;
        double r10001894 = r10001892 * r10001893;
        double r10001895 = r10001891 + r10001894;
        double r10001896 = 7.5;
        double r10001897 = r10001893 * r10001893;
        double r10001898 = r10001896 * r10001897;
        double r10001899 = r10001895 + r10001898;
        double r10001900 = -3.333333;
        double r10001901 = r10001897 * r10001893;
        double r10001902 = r10001900 * r10001901;
        double r10001903 = r10001899 + r10001902;
        double r10001904 = 0.625;
        double r10001905 = r10001901 * r10001893;
        double r10001906 = r10001904 * r10001905;
        double r10001907 = r10001903 + r10001906;
        double r10001908 = -0.05;
        double r10001909 = r10001905 * r10001893;
        double r10001910 = r10001908 * r10001909;
        double r10001911 = r10001907 + r10001910;
        double r10001912 = 0.001389;
        double r10001913 = r10001909 * r10001893;
        double r10001914 = r10001912 * r10001913;
        double r10001915 = r10001911 + r10001914;
        return r10001915;
}


double f_of(float x) {
        float r10001916 = 1.0;
        float r10001917 = -6.0;
        float r10001918 = x;
        float r10001919 = r10001917 * r10001918;
        float r10001920 = r10001916 + r10001919;
        float r10001921 = 7.5;
        float r10001922 = r10001918 * r10001918;
        float r10001923 = r10001921 * r10001922;
        float r10001924 = r10001920 + r10001923;
        float r10001925 = -3.333333;
        float r10001926 = r10001922 * r10001918;
        float r10001927 = r10001925 * r10001926;
        float r10001928 = r10001924 + r10001927;
        float r10001929 = 0.625;
        float r10001930 = r10001926 * r10001918;
        float r10001931 = r10001929 * r10001930;
        float r10001932 = r10001928 + r10001931;
        float r10001933 = -0.05;
        float r10001934 = r10001930 * r10001918;
        float r10001935 = r10001933 * r10001934;
        float r10001936 = r10001932 + r10001935;
        float r10001937 = 0.001389;
        float r10001938 = 3;
        float r10001939 = pow(r10001918, r10001938);
        float r10001940 = r10001939 * r10001918;
        float r10001941 = r10001940 * r10001918;
        float r10001942 = r10001941 * r10001918;
        float r10001943 = r10001937 * r10001942;
        float r10001944 = r10001936 + r10001943;
        return r10001944;
}

double f_od(double x) {
        double r10001945 = 1.0;
        double r10001946 = -6.0;
        double r10001947 = x;
        double r10001948 = r10001946 * r10001947;
        double r10001949 = r10001945 + r10001948;
        double r10001950 = 7.5;
        double r10001951 = r10001947 * r10001947;
        double r10001952 = r10001950 * r10001951;
        double r10001953 = r10001949 + r10001952;
        double r10001954 = -3.333333;
        double r10001955 = r10001951 * r10001947;
        double r10001956 = r10001954 * r10001955;
        double r10001957 = r10001953 + r10001956;
        double r10001958 = 0.625;
        double r10001959 = r10001955 * r10001947;
        double r10001960 = r10001958 * r10001959;
        double r10001961 = r10001957 + r10001960;
        double r10001962 = -0.05;
        double r10001963 = r10001959 * r10001947;
        double r10001964 = r10001962 * r10001963;
        double r10001965 = r10001961 + r10001964;
        double r10001966 = 0.001389;
        double r10001967 = 3;
        double r10001968 = pow(r10001947, r10001967);
        double r10001969 = r10001968 * r10001947;
        double r10001970 = r10001969 * r10001947;
        double r10001971 = r10001970 * r10001947;
        double r10001972 = r10001966 * r10001971;
        double r10001973 = r10001965 + r10001972;
        return r10001973;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10001974, r10001975, r10001976, r10001977, r10001978, r10001979, r10001980, r10001981, r10001982, r10001983, r10001984, r10001985, r10001986, r10001987, r10001988, r10001989, r10001990, r10001991, r10001992, r10001993, r10001994, r10001995, r10001996, r10001997, r10001998;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001974, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10001975, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10001976);
        mpfr_init(r10001977);
        mpfr_init(r10001978);
        mpfr_init_set_str(r10001979, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10001980);
        mpfr_init(r10001981);
        mpfr_init(r10001982);
        mpfr_init_set_str(r10001983, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10001984);
        mpfr_init(r10001985);
        mpfr_init(r10001986);
        mpfr_init_set_str(r10001987, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10001988);
        mpfr_init(r10001989);
        mpfr_init(r10001990);
        mpfr_init_set_str(r10001991, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10001992);
        mpfr_init(r10001993);
        mpfr_init(r10001994);
        mpfr_init_set_str(r10001995, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10001996);
        mpfr_init(r10001997);
        mpfr_init(r10001998);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10001976, x, MPFR_RNDN);
        mpfr_mul(r10001977, r10001975, r10001976, MPFR_RNDN);
        mpfr_add(r10001978, r10001974, r10001977, MPFR_RNDN);
        ;
        mpfr_mul(r10001980, r10001976, r10001976, MPFR_RNDN);
        mpfr_mul(r10001981, r10001979, r10001980, MPFR_RNDN);
        mpfr_add(r10001982, r10001978, r10001981, MPFR_RNDN);
        ;
        mpfr_mul(r10001984, r10001980, r10001976, MPFR_RNDN);
        mpfr_mul(r10001985, r10001983, r10001984, MPFR_RNDN);
        mpfr_add(r10001986, r10001982, r10001985, MPFR_RNDN);
        ;
        mpfr_mul(r10001988, r10001984, r10001976, MPFR_RNDN);
        mpfr_mul(r10001989, r10001987, r10001988, MPFR_RNDN);
        mpfr_add(r10001990, r10001986, r10001989, MPFR_RNDN);
        ;
        mpfr_mul(r10001992, r10001988, r10001976, MPFR_RNDN);
        mpfr_mul(r10001993, r10001991, r10001992, MPFR_RNDN);
        mpfr_add(r10001994, r10001990, r10001993, MPFR_RNDN);
        ;
        mpfr_mul(r10001996, r10001992, r10001976, MPFR_RNDN);
        mpfr_mul(r10001997, r10001995, r10001996, MPFR_RNDN);
        mpfr_add(r10001998, r10001994, r10001997, MPFR_RNDN);
        return mpfr_get_d(r10001998, MPFR_RNDN);
}

static mpfr_t r10001999, r10002000, r10002001, r10002002, r10002003, r10002004, r10002005, r10002006, r10002007, r10002008, r10002009, r10002010, r10002011, r10002012, r10002013, r10002014, r10002015, r10002016, r10002017, r10002018, r10002019, r10002020, r10002021, r10002022, r10002023, r10002024, r10002025, r10002026, r10002027;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10001999, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002000, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10002001);
        mpfr_init(r10002002);
        mpfr_init(r10002003);
        mpfr_init_set_str(r10002004, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10002005);
        mpfr_init(r10002006);
        mpfr_init(r10002007);
        mpfr_init_set_str(r10002008, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10002009);
        mpfr_init(r10002010);
        mpfr_init(r10002011);
        mpfr_init_set_str(r10002012, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10002013);
        mpfr_init(r10002014);
        mpfr_init(r10002015);
        mpfr_init_set_str(r10002016, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10002017);
        mpfr_init(r10002018);
        mpfr_init(r10002019);
        mpfr_init_set_str(r10002020, "0.001389", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002021, "3", 10, MPFR_RNDN);
        mpfr_init(r10002022);
        mpfr_init(r10002023);
        mpfr_init(r10002024);
        mpfr_init(r10002025);
        mpfr_init(r10002026);
        mpfr_init(r10002027);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10002001, x, MPFR_RNDN);
        mpfr_mul(r10002002, r10002000, r10002001, MPFR_RNDN);
        mpfr_add(r10002003, r10001999, r10002002, MPFR_RNDN);
        ;
        mpfr_mul(r10002005, r10002001, r10002001, MPFR_RNDN);
        mpfr_mul(r10002006, r10002004, r10002005, MPFR_RNDN);
        mpfr_add(r10002007, r10002003, r10002006, MPFR_RNDN);
        ;
        mpfr_mul(r10002009, r10002005, r10002001, MPFR_RNDN);
        mpfr_mul(r10002010, r10002008, r10002009, MPFR_RNDN);
        mpfr_add(r10002011, r10002007, r10002010, MPFR_RNDN);
        ;
        mpfr_mul(r10002013, r10002009, r10002001, MPFR_RNDN);
        mpfr_mul(r10002014, r10002012, r10002013, MPFR_RNDN);
        mpfr_add(r10002015, r10002011, r10002014, MPFR_RNDN);
        ;
        mpfr_mul(r10002017, r10002013, r10002001, MPFR_RNDN);
        mpfr_mul(r10002018, r10002016, r10002017, MPFR_RNDN);
        mpfr_add(r10002019, r10002015, r10002018, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10002022, r10002001, r10002021, MPFR_RNDN);
        mpfr_mul(r10002023, r10002022, r10002001, MPFR_RNDN);
        mpfr_mul(r10002024, r10002023, r10002001, MPFR_RNDN);
        mpfr_mul(r10002025, r10002024, r10002001, MPFR_RNDN);
        mpfr_mul(r10002026, r10002020, r10002025, MPFR_RNDN);
        mpfr_add(r10002027, r10002019, r10002026, MPFR_RNDN);
        return mpfr_get_d(r10002027, MPFR_RNDN);
}

static mpfr_t r10002028, r10002029, r10002030, r10002031, r10002032, r10002033, r10002034, r10002035, r10002036, r10002037, r10002038, r10002039, r10002040, r10002041, r10002042, r10002043, r10002044, r10002045, r10002046, r10002047, r10002048, r10002049, r10002050, r10002051, r10002052, r10002053, r10002054, r10002055, r10002056;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10002028, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002029, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10002030);
        mpfr_init(r10002031);
        mpfr_init(r10002032);
        mpfr_init_set_str(r10002033, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10002034);
        mpfr_init(r10002035);
        mpfr_init(r10002036);
        mpfr_init_set_str(r10002037, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10002038);
        mpfr_init(r10002039);
        mpfr_init(r10002040);
        mpfr_init_set_str(r10002041, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10002042);
        mpfr_init(r10002043);
        mpfr_init(r10002044);
        mpfr_init_set_str(r10002045, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10002046);
        mpfr_init(r10002047);
        mpfr_init(r10002048);
        mpfr_init_set_str(r10002049, "0.001389", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002050, "3", 10, MPFR_RNDN);
        mpfr_init(r10002051);
        mpfr_init(r10002052);
        mpfr_init(r10002053);
        mpfr_init(r10002054);
        mpfr_init(r10002055);
        mpfr_init(r10002056);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10002030, x, MPFR_RNDN);
        mpfr_mul(r10002031, r10002029, r10002030, MPFR_RNDN);
        mpfr_add(r10002032, r10002028, r10002031, MPFR_RNDN);
        ;
        mpfr_mul(r10002034, r10002030, r10002030, MPFR_RNDN);
        mpfr_mul(r10002035, r10002033, r10002034, MPFR_RNDN);
        mpfr_add(r10002036, r10002032, r10002035, MPFR_RNDN);
        ;
        mpfr_mul(r10002038, r10002034, r10002030, MPFR_RNDN);
        mpfr_mul(r10002039, r10002037, r10002038, MPFR_RNDN);
        mpfr_add(r10002040, r10002036, r10002039, MPFR_RNDN);
        ;
        mpfr_mul(r10002042, r10002038, r10002030, MPFR_RNDN);
        mpfr_mul(r10002043, r10002041, r10002042, MPFR_RNDN);
        mpfr_add(r10002044, r10002040, r10002043, MPFR_RNDN);
        ;
        mpfr_mul(r10002046, r10002042, r10002030, MPFR_RNDN);
        mpfr_mul(r10002047, r10002045, r10002046, MPFR_RNDN);
        mpfr_add(r10002048, r10002044, r10002047, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10002051, r10002030, r10002050, MPFR_RNDN);
        mpfr_mul(r10002052, r10002051, r10002030, MPFR_RNDN);
        mpfr_mul(r10002053, r10002052, r10002030, MPFR_RNDN);
        mpfr_mul(r10002054, r10002053, r10002030, MPFR_RNDN);
        mpfr_mul(r10002055, r10002049, r10002054, MPFR_RNDN);
        mpfr_add(r10002056, r10002048, r10002055, MPFR_RNDN);
        return mpfr_get_d(r10002056, MPFR_RNDN);
}

