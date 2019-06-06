#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r4677913 = 1.0;
        float r4677914 = -5.0;
        float r4677915 = x;
        float r4677916 = r4677914 * r4677915;
        float r4677917 = r4677913 + r4677916;
        float r4677918 = 5.0;
        float r4677919 = r4677915 * r4677915;
        float r4677920 = r4677918 * r4677919;
        float r4677921 = r4677917 + r4677920;
        float r4677922 = -1.666667;
        float r4677923 = r4677919 * r4677915;
        float r4677924 = r4677922 * r4677923;
        float r4677925 = r4677921 + r4677924;
        float r4677926 = 0.208333;
        float r4677927 = r4677923 * r4677915;
        float r4677928 = r4677926 * r4677927;
        float r4677929 = r4677925 + r4677928;
        float r4677930 = -0.008333;
        float r4677931 = r4677927 * r4677915;
        float r4677932 = r4677930 * r4677931;
        float r4677933 = r4677929 + r4677932;
        return r4677933;
}

double f_id(double x) {
        double r4677934 = 1.0;
        double r4677935 = -5.0;
        double r4677936 = x;
        double r4677937 = r4677935 * r4677936;
        double r4677938 = r4677934 + r4677937;
        double r4677939 = 5.0;
        double r4677940 = r4677936 * r4677936;
        double r4677941 = r4677939 * r4677940;
        double r4677942 = r4677938 + r4677941;
        double r4677943 = -1.666667;
        double r4677944 = r4677940 * r4677936;
        double r4677945 = r4677943 * r4677944;
        double r4677946 = r4677942 + r4677945;
        double r4677947 = 0.208333;
        double r4677948 = r4677944 * r4677936;
        double r4677949 = r4677947 * r4677948;
        double r4677950 = r4677946 + r4677949;
        double r4677951 = -0.008333;
        double r4677952 = r4677948 * r4677936;
        double r4677953 = r4677951 * r4677952;
        double r4677954 = r4677950 + r4677953;
        return r4677954;
}


double f_of(float x) {
        float r4677955 = x;
        float r4677956 = -5.0;
        float r4677957 = r4677955 * r4677956;
        float r4677958 = 1.0;
        float r4677959 = r4677957 + r4677958;
        float r4677960 = r4677955 * r4677955;
        float r4677961 = r4677960 * r4677960;
        float r4677962 = -0.008333;
        float r4677963 = r4677962 * r4677955;
        float r4677964 = 0.208333;
        float r4677965 = r4677963 + r4677964;
        float r4677966 = r4677961 * r4677965;
        float r4677967 = -1.666667;
        float r4677968 = r4677967 * r4677955;
        float r4677969 = 5.0;
        float r4677970 = r4677968 + r4677969;
        float r4677971 = r4677960 * r4677970;
        float r4677972 = r4677966 + r4677971;
        float r4677973 = r4677959 + r4677972;
        float r4677974 = sqrt(r4677973);
        float r4677975 = r4677974 * r4677974;
        return r4677975;
}

double f_od(double x) {
        double r4677976 = x;
        double r4677977 = -5.0;
        double r4677978 = r4677976 * r4677977;
        double r4677979 = 1.0;
        double r4677980 = r4677978 + r4677979;
        double r4677981 = r4677976 * r4677976;
        double r4677982 = r4677981 * r4677981;
        double r4677983 = -0.008333;
        double r4677984 = r4677983 * r4677976;
        double r4677985 = 0.208333;
        double r4677986 = r4677984 + r4677985;
        double r4677987 = r4677982 * r4677986;
        double r4677988 = -1.666667;
        double r4677989 = r4677988 * r4677976;
        double r4677990 = 5.0;
        double r4677991 = r4677989 + r4677990;
        double r4677992 = r4677981 * r4677991;
        double r4677993 = r4677987 + r4677992;
        double r4677994 = r4677980 + r4677993;
        double r4677995 = sqrt(r4677994);
        double r4677996 = r4677995 * r4677995;
        return r4677996;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4677997, r4677998, r4677999, r4678000, r4678001, r4678002, r4678003, r4678004, r4678005, r4678006, r4678007, r4678008, r4678009, r4678010, r4678011, r4678012, r4678013, r4678014, r4678015, r4678016, r4678017;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677997, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677998, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r4677999);
        mpfr_init(r4678000);
        mpfr_init(r4678001);
        mpfr_init_set_str(r4678002, "5.0", 10, MPFR_RNDN);
        mpfr_init(r4678003);
        mpfr_init(r4678004);
        mpfr_init(r4678005);
        mpfr_init_set_str(r4678006, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r4678007);
        mpfr_init(r4678008);
        mpfr_init(r4678009);
        mpfr_init_set_str(r4678010, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r4678011);
        mpfr_init(r4678012);
        mpfr_init(r4678013);
        mpfr_init_set_str(r4678014, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r4678015);
        mpfr_init(r4678016);
        mpfr_init(r4678017);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4677999, x, MPFR_RNDN);
        mpfr_mul(r4678000, r4677998, r4677999, MPFR_RNDN);
        mpfr_add(r4678001, r4677997, r4678000, MPFR_RNDN);
        ;
        mpfr_mul(r4678003, r4677999, r4677999, MPFR_RNDN);
        mpfr_mul(r4678004, r4678002, r4678003, MPFR_RNDN);
        mpfr_add(r4678005, r4678001, r4678004, MPFR_RNDN);
        ;
        mpfr_mul(r4678007, r4678003, r4677999, MPFR_RNDN);
        mpfr_mul(r4678008, r4678006, r4678007, MPFR_RNDN);
        mpfr_add(r4678009, r4678005, r4678008, MPFR_RNDN);
        ;
        mpfr_mul(r4678011, r4678007, r4677999, MPFR_RNDN);
        mpfr_mul(r4678012, r4678010, r4678011, MPFR_RNDN);
        mpfr_add(r4678013, r4678009, r4678012, MPFR_RNDN);
        ;
        mpfr_mul(r4678015, r4678011, r4677999, MPFR_RNDN);
        mpfr_mul(r4678016, r4678014, r4678015, MPFR_RNDN);
        mpfr_add(r4678017, r4678013, r4678016, MPFR_RNDN);
        return mpfr_get_d(r4678017, MPFR_RNDN);
}

static mpfr_t r4678018, r4678019, r4678020, r4678021, r4678022, r4678023, r4678024, r4678025, r4678026, r4678027, r4678028, r4678029, r4678030, r4678031, r4678032, r4678033, r4678034, r4678035, r4678036, r4678037, r4678038;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4678018);
        mpfr_init_set_str(r4678019, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r4678020);
        mpfr_init_set_str(r4678021, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4678022);
        mpfr_init(r4678023);
        mpfr_init(r4678024);
        mpfr_init_set_str(r4678025, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r4678026);
        mpfr_init_set_str(r4678027, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r4678028);
        mpfr_init(r4678029);
        mpfr_init_set_str(r4678030, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r4678031);
        mpfr_init_set_str(r4678032, "5.0", 10, MPFR_RNDN);
        mpfr_init(r4678033);
        mpfr_init(r4678034);
        mpfr_init(r4678035);
        mpfr_init(r4678036);
        mpfr_init(r4678037);
        mpfr_init(r4678038);
}

double f_fm(double x) {
        mpfr_set_d(r4678018, x, MPFR_RNDN);
        ;
        mpfr_mul(r4678020, r4678018, r4678019, MPFR_RNDN);
        ;
        mpfr_add(r4678022, r4678020, r4678021, MPFR_RNDN);
        mpfr_mul(r4678023, r4678018, r4678018, MPFR_RNDN);
        mpfr_mul(r4678024, r4678023, r4678023, MPFR_RNDN);
        ;
        mpfr_mul(r4678026, r4678025, r4678018, MPFR_RNDN);
        ;
        mpfr_add(r4678028, r4678026, r4678027, MPFR_RNDN);
        mpfr_mul(r4678029, r4678024, r4678028, MPFR_RNDN);
        ;
        mpfr_mul(r4678031, r4678030, r4678018, MPFR_RNDN);
        ;
        mpfr_add(r4678033, r4678031, r4678032, MPFR_RNDN);
        mpfr_mul(r4678034, r4678023, r4678033, MPFR_RNDN);
        mpfr_add(r4678035, r4678029, r4678034, MPFR_RNDN);
        mpfr_add(r4678036, r4678022, r4678035, MPFR_RNDN);
        mpfr_sqrt(r4678037, r4678036, MPFR_RNDN);
        mpfr_mul(r4678038, r4678037, r4678037, MPFR_RNDN);
        return mpfr_get_d(r4678038, MPFR_RNDN);
}

static mpfr_t r4678039, r4678040, r4678041, r4678042, r4678043, r4678044, r4678045, r4678046, r4678047, r4678048, r4678049, r4678050, r4678051, r4678052, r4678053, r4678054, r4678055, r4678056, r4678057, r4678058, r4678059;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4678039);
        mpfr_init_set_str(r4678040, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r4678041);
        mpfr_init_set_str(r4678042, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4678043);
        mpfr_init(r4678044);
        mpfr_init(r4678045);
        mpfr_init_set_str(r4678046, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r4678047);
        mpfr_init_set_str(r4678048, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r4678049);
        mpfr_init(r4678050);
        mpfr_init_set_str(r4678051, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r4678052);
        mpfr_init_set_str(r4678053, "5.0", 10, MPFR_RNDN);
        mpfr_init(r4678054);
        mpfr_init(r4678055);
        mpfr_init(r4678056);
        mpfr_init(r4678057);
        mpfr_init(r4678058);
        mpfr_init(r4678059);
}

double f_dm(double x) {
        mpfr_set_d(r4678039, x, MPFR_RNDN);
        ;
        mpfr_mul(r4678041, r4678039, r4678040, MPFR_RNDN);
        ;
        mpfr_add(r4678043, r4678041, r4678042, MPFR_RNDN);
        mpfr_mul(r4678044, r4678039, r4678039, MPFR_RNDN);
        mpfr_mul(r4678045, r4678044, r4678044, MPFR_RNDN);
        ;
        mpfr_mul(r4678047, r4678046, r4678039, MPFR_RNDN);
        ;
        mpfr_add(r4678049, r4678047, r4678048, MPFR_RNDN);
        mpfr_mul(r4678050, r4678045, r4678049, MPFR_RNDN);
        ;
        mpfr_mul(r4678052, r4678051, r4678039, MPFR_RNDN);
        ;
        mpfr_add(r4678054, r4678052, r4678053, MPFR_RNDN);
        mpfr_mul(r4678055, r4678044, r4678054, MPFR_RNDN);
        mpfr_add(r4678056, r4678050, r4678055, MPFR_RNDN);
        mpfr_add(r4678057, r4678043, r4678056, MPFR_RNDN);
        mpfr_sqrt(r4678058, r4678057, MPFR_RNDN);
        mpfr_mul(r4678059, r4678058, r4678058, MPFR_RNDN);
        return mpfr_get_d(r4678059, MPFR_RNDN);
}

