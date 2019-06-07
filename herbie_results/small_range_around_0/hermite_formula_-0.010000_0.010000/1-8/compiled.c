#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r4111896 = 1680.0;
        float r4111897 = -13440.0;
        float r4111898 = x;
        float r4111899 = r4111898 * r4111898;
        float r4111900 = r4111897 * r4111899;
        float r4111901 = r4111896 + r4111900;
        float r4111902 = 13440.0;
        float r4111903 = r4111899 * r4111898;
        float r4111904 = r4111903 * r4111898;
        float r4111905 = r4111902 * r4111904;
        float r4111906 = r4111901 + r4111905;
        float r4111907 = -3584.0;
        float r4111908 = r4111904 * r4111898;
        float r4111909 = r4111908 * r4111898;
        float r4111910 = r4111907 * r4111909;
        float r4111911 = r4111906 + r4111910;
        float r4111912 = 256.0;
        float r4111913 = r4111909 * r4111898;
        float r4111914 = r4111913 * r4111898;
        float r4111915 = r4111912 * r4111914;
        float r4111916 = r4111911 + r4111915;
        return r4111916;
}

double f_id(double x) {
        double r4111917 = 1680.0;
        double r4111918 = -13440.0;
        double r4111919 = x;
        double r4111920 = r4111919 * r4111919;
        double r4111921 = r4111918 * r4111920;
        double r4111922 = r4111917 + r4111921;
        double r4111923 = 13440.0;
        double r4111924 = r4111920 * r4111919;
        double r4111925 = r4111924 * r4111919;
        double r4111926 = r4111923 * r4111925;
        double r4111927 = r4111922 + r4111926;
        double r4111928 = -3584.0;
        double r4111929 = r4111925 * r4111919;
        double r4111930 = r4111929 * r4111919;
        double r4111931 = r4111928 * r4111930;
        double r4111932 = r4111927 + r4111931;
        double r4111933 = 256.0;
        double r4111934 = r4111930 * r4111919;
        double r4111935 = r4111934 * r4111919;
        double r4111936 = r4111933 * r4111935;
        double r4111937 = r4111932 + r4111936;
        return r4111937;
}


double f_of(float x) {
        float r4111938 = 1680.0;
        float r4111939 = -13440.0;
        float r4111940 = x;
        float r4111941 = r4111940 * r4111940;
        float r4111942 = r4111939 * r4111941;
        float r4111943 = r4111938 + r4111942;
        float r4111944 = 13440.0;
        float r4111945 = r4111941 * r4111940;
        float r4111946 = r4111945 * r4111940;
        float r4111947 = r4111944 * r4111946;
        float r4111948 = r4111943 + r4111947;
        float r4111949 = -3584.0;
        float r4111950 = r4111946 * r4111940;
        float r4111951 = r4111950 * r4111940;
        float r4111952 = r4111949 * r4111951;
        float r4111953 = r4111948 + r4111952;
        float r4111954 = 256.0;
        float r4111955 = r4111951 * r4111940;
        float r4111956 = r4111955 * r4111940;
        float r4111957 = r4111954 * r4111956;
        float r4111958 = r4111953 + r4111957;
        return r4111958;
}

double f_od(double x) {
        double r4111959 = 1680.0;
        double r4111960 = -13440.0;
        double r4111961 = x;
        double r4111962 = r4111961 * r4111961;
        double r4111963 = r4111960 * r4111962;
        double r4111964 = r4111959 + r4111963;
        double r4111965 = 13440.0;
        double r4111966 = r4111962 * r4111961;
        double r4111967 = r4111966 * r4111961;
        double r4111968 = r4111965 * r4111967;
        double r4111969 = r4111964 + r4111968;
        double r4111970 = -3584.0;
        double r4111971 = r4111967 * r4111961;
        double r4111972 = r4111971 * r4111961;
        double r4111973 = r4111970 * r4111972;
        double r4111974 = r4111969 + r4111973;
        double r4111975 = 256.0;
        double r4111976 = r4111972 * r4111961;
        double r4111977 = r4111976 * r4111961;
        double r4111978 = r4111975 * r4111977;
        double r4111979 = r4111974 + r4111978;
        return r4111979;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4111980, r4111981, r4111982, r4111983, r4111984, r4111985, r4111986, r4111987, r4111988, r4111989, r4111990, r4111991, r4111992, r4111993, r4111994, r4111995, r4111996, r4111997, r4111998, r4111999, r4112000;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4111980, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4111981, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r4111982);
        mpfr_init(r4111983);
        mpfr_init(r4111984);
        mpfr_init(r4111985);
        mpfr_init_set_str(r4111986, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r4111987);
        mpfr_init(r4111988);
        mpfr_init(r4111989);
        mpfr_init(r4111990);
        mpfr_init_set_str(r4111991, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r4111992);
        mpfr_init(r4111993);
        mpfr_init(r4111994);
        mpfr_init(r4111995);
        mpfr_init_set_str(r4111996, "256.0", 10, MPFR_RNDN);
        mpfr_init(r4111997);
        mpfr_init(r4111998);
        mpfr_init(r4111999);
        mpfr_init(r4112000);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4111982, x, MPFR_RNDN);
        mpfr_mul(r4111983, r4111982, r4111982, MPFR_RNDN);
        mpfr_mul(r4111984, r4111981, r4111983, MPFR_RNDN);
        mpfr_add(r4111985, r4111980, r4111984, MPFR_RNDN);
        ;
        mpfr_mul(r4111987, r4111983, r4111982, MPFR_RNDN);
        mpfr_mul(r4111988, r4111987, r4111982, MPFR_RNDN);
        mpfr_mul(r4111989, r4111986, r4111988, MPFR_RNDN);
        mpfr_add(r4111990, r4111985, r4111989, MPFR_RNDN);
        ;
        mpfr_mul(r4111992, r4111988, r4111982, MPFR_RNDN);
        mpfr_mul(r4111993, r4111992, r4111982, MPFR_RNDN);
        mpfr_mul(r4111994, r4111991, r4111993, MPFR_RNDN);
        mpfr_add(r4111995, r4111990, r4111994, MPFR_RNDN);
        ;
        mpfr_mul(r4111997, r4111993, r4111982, MPFR_RNDN);
        mpfr_mul(r4111998, r4111997, r4111982, MPFR_RNDN);
        mpfr_mul(r4111999, r4111996, r4111998, MPFR_RNDN);
        mpfr_add(r4112000, r4111995, r4111999, MPFR_RNDN);
        return mpfr_get_d(r4112000, MPFR_RNDN);
}

static mpfr_t r4112001, r4112002, r4112003, r4112004, r4112005, r4112006, r4112007, r4112008, r4112009, r4112010, r4112011, r4112012, r4112013, r4112014, r4112015, r4112016, r4112017, r4112018, r4112019, r4112020, r4112021;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112001, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112002, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r4112003);
        mpfr_init(r4112004);
        mpfr_init(r4112005);
        mpfr_init(r4112006);
        mpfr_init_set_str(r4112007, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r4112008);
        mpfr_init(r4112009);
        mpfr_init(r4112010);
        mpfr_init(r4112011);
        mpfr_init_set_str(r4112012, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r4112013);
        mpfr_init(r4112014);
        mpfr_init(r4112015);
        mpfr_init(r4112016);
        mpfr_init_set_str(r4112017, "256.0", 10, MPFR_RNDN);
        mpfr_init(r4112018);
        mpfr_init(r4112019);
        mpfr_init(r4112020);
        mpfr_init(r4112021);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4112003, x, MPFR_RNDN);
        mpfr_mul(r4112004, r4112003, r4112003, MPFR_RNDN);
        mpfr_mul(r4112005, r4112002, r4112004, MPFR_RNDN);
        mpfr_add(r4112006, r4112001, r4112005, MPFR_RNDN);
        ;
        mpfr_mul(r4112008, r4112004, r4112003, MPFR_RNDN);
        mpfr_mul(r4112009, r4112008, r4112003, MPFR_RNDN);
        mpfr_mul(r4112010, r4112007, r4112009, MPFR_RNDN);
        mpfr_add(r4112011, r4112006, r4112010, MPFR_RNDN);
        ;
        mpfr_mul(r4112013, r4112009, r4112003, MPFR_RNDN);
        mpfr_mul(r4112014, r4112013, r4112003, MPFR_RNDN);
        mpfr_mul(r4112015, r4112012, r4112014, MPFR_RNDN);
        mpfr_add(r4112016, r4112011, r4112015, MPFR_RNDN);
        ;
        mpfr_mul(r4112018, r4112014, r4112003, MPFR_RNDN);
        mpfr_mul(r4112019, r4112018, r4112003, MPFR_RNDN);
        mpfr_mul(r4112020, r4112017, r4112019, MPFR_RNDN);
        mpfr_add(r4112021, r4112016, r4112020, MPFR_RNDN);
        return mpfr_get_d(r4112021, MPFR_RNDN);
}

static mpfr_t r4112022, r4112023, r4112024, r4112025, r4112026, r4112027, r4112028, r4112029, r4112030, r4112031, r4112032, r4112033, r4112034, r4112035, r4112036, r4112037, r4112038, r4112039, r4112040, r4112041, r4112042;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4112022, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4112023, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r4112024);
        mpfr_init(r4112025);
        mpfr_init(r4112026);
        mpfr_init(r4112027);
        mpfr_init_set_str(r4112028, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r4112029);
        mpfr_init(r4112030);
        mpfr_init(r4112031);
        mpfr_init(r4112032);
        mpfr_init_set_str(r4112033, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r4112034);
        mpfr_init(r4112035);
        mpfr_init(r4112036);
        mpfr_init(r4112037);
        mpfr_init_set_str(r4112038, "256.0", 10, MPFR_RNDN);
        mpfr_init(r4112039);
        mpfr_init(r4112040);
        mpfr_init(r4112041);
        mpfr_init(r4112042);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4112024, x, MPFR_RNDN);
        mpfr_mul(r4112025, r4112024, r4112024, MPFR_RNDN);
        mpfr_mul(r4112026, r4112023, r4112025, MPFR_RNDN);
        mpfr_add(r4112027, r4112022, r4112026, MPFR_RNDN);
        ;
        mpfr_mul(r4112029, r4112025, r4112024, MPFR_RNDN);
        mpfr_mul(r4112030, r4112029, r4112024, MPFR_RNDN);
        mpfr_mul(r4112031, r4112028, r4112030, MPFR_RNDN);
        mpfr_add(r4112032, r4112027, r4112031, MPFR_RNDN);
        ;
        mpfr_mul(r4112034, r4112030, r4112024, MPFR_RNDN);
        mpfr_mul(r4112035, r4112034, r4112024, MPFR_RNDN);
        mpfr_mul(r4112036, r4112033, r4112035, MPFR_RNDN);
        mpfr_add(r4112037, r4112032, r4112036, MPFR_RNDN);
        ;
        mpfr_mul(r4112039, r4112035, r4112024, MPFR_RNDN);
        mpfr_mul(r4112040, r4112039, r4112024, MPFR_RNDN);
        mpfr_mul(r4112041, r4112038, r4112040, MPFR_RNDN);
        mpfr_add(r4112042, r4112037, r4112041, MPFR_RNDN);
        return mpfr_get_d(r4112042, MPFR_RNDN);
}

