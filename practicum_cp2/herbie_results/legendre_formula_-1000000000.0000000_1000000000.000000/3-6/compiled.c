#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r5020922 = -0.3125;
        float r5020923 = 6.5625;
        float r5020924 = x;
        float r5020925 = r5020924 * r5020924;
        float r5020926 = r5020923 * r5020925;
        float r5020927 = r5020922 + r5020926;
        float r5020928 = -19.6875;
        float r5020929 = r5020925 * r5020924;
        float r5020930 = r5020929 * r5020924;
        float r5020931 = r5020928 * r5020930;
        float r5020932 = r5020927 + r5020931;
        float r5020933 = 14.4375;
        float r5020934 = r5020930 * r5020924;
        float r5020935 = r5020934 * r5020924;
        float r5020936 = r5020933 * r5020935;
        float r5020937 = r5020932 + r5020936;
        return r5020937;
}

double f_id(double x) {
        double r5020938 = -0.3125;
        double r5020939 = 6.5625;
        double r5020940 = x;
        double r5020941 = r5020940 * r5020940;
        double r5020942 = r5020939 * r5020941;
        double r5020943 = r5020938 + r5020942;
        double r5020944 = -19.6875;
        double r5020945 = r5020941 * r5020940;
        double r5020946 = r5020945 * r5020940;
        double r5020947 = r5020944 * r5020946;
        double r5020948 = r5020943 + r5020947;
        double r5020949 = 14.4375;
        double r5020950 = r5020946 * r5020940;
        double r5020951 = r5020950 * r5020940;
        double r5020952 = r5020949 * r5020951;
        double r5020953 = r5020948 + r5020952;
        return r5020953;
}


double f_of(float x) {
        float r5020954 = x;
        float r5020955 = 6.5625;
        float r5020956 = r5020954 * r5020955;
        float r5020957 = r5020956 * r5020954;
        float r5020958 = -0.3125;
        float r5020959 = r5020957 + r5020958;
        float r5020960 = r5020954 * r5020954;
        float r5020961 = r5020960 * r5020960;
        float r5020962 = -19.6875;
        float r5020963 = 14.4375;
        float r5020964 = r5020954 * r5020963;
        float r5020965 = r5020954 * r5020964;
        float r5020966 = r5020962 + r5020965;
        float r5020967 = r5020961 * r5020966;
        float r5020968 = r5020959 + r5020967;
        return r5020968;
}

double f_od(double x) {
        double r5020969 = x;
        double r5020970 = 6.5625;
        double r5020971 = r5020969 * r5020970;
        double r5020972 = r5020971 * r5020969;
        double r5020973 = -0.3125;
        double r5020974 = r5020972 + r5020973;
        double r5020975 = r5020969 * r5020969;
        double r5020976 = r5020975 * r5020975;
        double r5020977 = -19.6875;
        double r5020978 = 14.4375;
        double r5020979 = r5020969 * r5020978;
        double r5020980 = r5020969 * r5020979;
        double r5020981 = r5020977 + r5020980;
        double r5020982 = r5020976 * r5020981;
        double r5020983 = r5020974 + r5020982;
        return r5020983;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5020984, r5020985, r5020986, r5020987, r5020988, r5020989, r5020990, r5020991, r5020992, r5020993, r5020994, r5020995, r5020996, r5020997, r5020998, r5020999;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r5020984, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020985, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r5020986);
        mpfr_init(r5020987);
        mpfr_init(r5020988);
        mpfr_init(r5020989);
        mpfr_init_set_str(r5020990, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r5020991);
        mpfr_init(r5020992);
        mpfr_init(r5020993);
        mpfr_init(r5020994);
        mpfr_init_set_str(r5020995, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r5020996);
        mpfr_init(r5020997);
        mpfr_init(r5020998);
        mpfr_init(r5020999);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5020986, x, MPFR_RNDN);
        mpfr_mul(r5020987, r5020986, r5020986, MPFR_RNDN);
        mpfr_mul(r5020988, r5020985, r5020987, MPFR_RNDN);
        mpfr_add(r5020989, r5020984, r5020988, MPFR_RNDN);
        ;
        mpfr_mul(r5020991, r5020987, r5020986, MPFR_RNDN);
        mpfr_mul(r5020992, r5020991, r5020986, MPFR_RNDN);
        mpfr_mul(r5020993, r5020990, r5020992, MPFR_RNDN);
        mpfr_add(r5020994, r5020989, r5020993, MPFR_RNDN);
        ;
        mpfr_mul(r5020996, r5020992, r5020986, MPFR_RNDN);
        mpfr_mul(r5020997, r5020996, r5020986, MPFR_RNDN);
        mpfr_mul(r5020998, r5020995, r5020997, MPFR_RNDN);
        mpfr_add(r5020999, r5020994, r5020998, MPFR_RNDN);
        return mpfr_get_d(r5020999, MPFR_RNDN);
}

static mpfr_t r5021000, r5021001, r5021002, r5021003, r5021004, r5021005, r5021006, r5021007, r5021008, r5021009, r5021010, r5021011, r5021012, r5021013, r5021014;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5021000);
        mpfr_init_set_str(r5021001, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r5021002);
        mpfr_init(r5021003);
        mpfr_init_set_str(r5021004, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r5021005);
        mpfr_init(r5021006);
        mpfr_init(r5021007);
        mpfr_init_set_str(r5021008, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021009, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r5021010);
        mpfr_init(r5021011);
        mpfr_init(r5021012);
        mpfr_init(r5021013);
        mpfr_init(r5021014);
}

double f_fm(double x) {
        mpfr_set_d(r5021000, x, MPFR_RNDN);
        ;
        mpfr_mul(r5021002, r5021000, r5021001, MPFR_RNDN);
        mpfr_mul(r5021003, r5021002, r5021000, MPFR_RNDN);
        ;
        mpfr_add(r5021005, r5021003, r5021004, MPFR_RNDN);
        mpfr_mul(r5021006, r5021000, r5021000, MPFR_RNDN);
        mpfr_mul(r5021007, r5021006, r5021006, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5021010, r5021000, r5021009, MPFR_RNDN);
        mpfr_mul(r5021011, r5021000, r5021010, MPFR_RNDN);
        mpfr_add(r5021012, r5021008, r5021011, MPFR_RNDN);
        mpfr_mul(r5021013, r5021007, r5021012, MPFR_RNDN);
        mpfr_add(r5021014, r5021005, r5021013, MPFR_RNDN);
        return mpfr_get_d(r5021014, MPFR_RNDN);
}

static mpfr_t r5021015, r5021016, r5021017, r5021018, r5021019, r5021020, r5021021, r5021022, r5021023, r5021024, r5021025, r5021026, r5021027, r5021028, r5021029;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r5021015);
        mpfr_init_set_str(r5021016, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r5021017);
        mpfr_init(r5021018);
        mpfr_init_set_str(r5021019, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r5021020);
        mpfr_init(r5021021);
        mpfr_init(r5021022);
        mpfr_init_set_str(r5021023, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r5021024, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r5021025);
        mpfr_init(r5021026);
        mpfr_init(r5021027);
        mpfr_init(r5021028);
        mpfr_init(r5021029);
}

double f_dm(double x) {
        mpfr_set_d(r5021015, x, MPFR_RNDN);
        ;
        mpfr_mul(r5021017, r5021015, r5021016, MPFR_RNDN);
        mpfr_mul(r5021018, r5021017, r5021015, MPFR_RNDN);
        ;
        mpfr_add(r5021020, r5021018, r5021019, MPFR_RNDN);
        mpfr_mul(r5021021, r5021015, r5021015, MPFR_RNDN);
        mpfr_mul(r5021022, r5021021, r5021021, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5021025, r5021015, r5021024, MPFR_RNDN);
        mpfr_mul(r5021026, r5021015, r5021025, MPFR_RNDN);
        mpfr_add(r5021027, r5021023, r5021026, MPFR_RNDN);
        mpfr_mul(r5021028, r5021022, r5021027, MPFR_RNDN);
        mpfr_add(r5021029, r5021020, r5021028, MPFR_RNDN);
        return mpfr_get_d(r5021029, MPFR_RNDN);
}

