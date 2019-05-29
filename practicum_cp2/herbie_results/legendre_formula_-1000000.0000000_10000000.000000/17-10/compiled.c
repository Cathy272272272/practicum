#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6408897 = -0.246094;
        float r6408898 = 13.535156;
        float r6408899 = x;
        float r6408900 = r6408899 * r6408899;
        float r6408901 = r6408898 * r6408900;
        float r6408902 = r6408897 + r6408901;
        float r6408903 = -117.304688;
        float r6408904 = r6408900 * r6408899;
        float r6408905 = r6408904 * r6408899;
        float r6408906 = r6408903 * r6408905;
        float r6408907 = r6408902 + r6408906;
        float r6408908 = 351.914062;
        float r6408909 = r6408905 * r6408899;
        float r6408910 = r6408909 * r6408899;
        float r6408911 = r6408908 * r6408910;
        float r6408912 = r6408907 + r6408911;
        float r6408913 = -427.324219;
        float r6408914 = r6408910 * r6408899;
        float r6408915 = r6408914 * r6408899;
        float r6408916 = r6408913 * r6408915;
        float r6408917 = r6408912 + r6408916;
        float r6408918 = 180.425781;
        float r6408919 = r6408915 * r6408899;
        float r6408920 = r6408919 * r6408899;
        float r6408921 = r6408918 * r6408920;
        float r6408922 = r6408917 + r6408921;
        return r6408922;
}

double f_id(double x) {
        double r6408923 = -0.246094;
        double r6408924 = 13.535156;
        double r6408925 = x;
        double r6408926 = r6408925 * r6408925;
        double r6408927 = r6408924 * r6408926;
        double r6408928 = r6408923 + r6408927;
        double r6408929 = -117.304688;
        double r6408930 = r6408926 * r6408925;
        double r6408931 = r6408930 * r6408925;
        double r6408932 = r6408929 * r6408931;
        double r6408933 = r6408928 + r6408932;
        double r6408934 = 351.914062;
        double r6408935 = r6408931 * r6408925;
        double r6408936 = r6408935 * r6408925;
        double r6408937 = r6408934 * r6408936;
        double r6408938 = r6408933 + r6408937;
        double r6408939 = -427.324219;
        double r6408940 = r6408936 * r6408925;
        double r6408941 = r6408940 * r6408925;
        double r6408942 = r6408939 * r6408941;
        double r6408943 = r6408938 + r6408942;
        double r6408944 = 180.425781;
        double r6408945 = r6408941 * r6408925;
        double r6408946 = r6408945 * r6408925;
        double r6408947 = r6408944 * r6408946;
        double r6408948 = r6408943 + r6408947;
        return r6408948;
}


double f_of(float x) {
        float r6408949 = -0.246094;
        float r6408950 = x;
        float r6408951 = 4;
        float r6408952 = pow(r6408950, r6408951);
        float r6408953 = -117.304688;
        float r6408954 = r6408952 * r6408953;
        float r6408955 = 13.535156;
        float r6408956 = r6408950 * r6408955;
        float r6408957 = r6408950 * r6408956;
        float r6408958 = r6408954 + r6408957;
        float r6408959 = r6408949 + r6408958;
        float r6408960 = r6408950 * r6408950;
        float r6408961 = r6408960 * r6408960;
        float r6408962 = r6408961 * r6408961;
        float r6408963 = 180.425781;
        float r6408964 = r6408960 * r6408963;
        float r6408965 = -427.324219;
        float r6408966 = r6408964 + r6408965;
        float r6408967 = r6408962 * r6408966;
        float r6408968 = r6408959 + r6408967;
        float r6408969 = 351.914062;
        float r6408970 = r6408960 * r6408969;
        float r6408971 = r6408961 * r6408970;
        float r6408972 = r6408968 + r6408971;
        return r6408972;
}

double f_od(double x) {
        double r6408973 = -0.246094;
        double r6408974 = x;
        double r6408975 = 4;
        double r6408976 = pow(r6408974, r6408975);
        double r6408977 = -117.304688;
        double r6408978 = r6408976 * r6408977;
        double r6408979 = 13.535156;
        double r6408980 = r6408974 * r6408979;
        double r6408981 = r6408974 * r6408980;
        double r6408982 = r6408978 + r6408981;
        double r6408983 = r6408973 + r6408982;
        double r6408984 = r6408974 * r6408974;
        double r6408985 = r6408984 * r6408984;
        double r6408986 = r6408985 * r6408985;
        double r6408987 = 180.425781;
        double r6408988 = r6408984 * r6408987;
        double r6408989 = -427.324219;
        double r6408990 = r6408988 + r6408989;
        double r6408991 = r6408986 * r6408990;
        double r6408992 = r6408983 + r6408991;
        double r6408993 = 351.914062;
        double r6408994 = r6408984 * r6408993;
        double r6408995 = r6408985 * r6408994;
        double r6408996 = r6408992 + r6408995;
        return r6408996;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6408997, r6408998, r6408999, r6409000, r6409001, r6409002, r6409003, r6409004, r6409005, r6409006, r6409007, r6409008, r6409009, r6409010, r6409011, r6409012, r6409013, r6409014, r6409015, r6409016, r6409017, r6409018, r6409019, r6409020, r6409021, r6409022;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6408997, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408998, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6408999);
        mpfr_init(r6409000);
        mpfr_init(r6409001);
        mpfr_init(r6409002);
        mpfr_init_set_str(r6409003, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6409004);
        mpfr_init(r6409005);
        mpfr_init(r6409006);
        mpfr_init(r6409007);
        mpfr_init_set_str(r6409008, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6409009);
        mpfr_init(r6409010);
        mpfr_init(r6409011);
        mpfr_init(r6409012);
        mpfr_init_set_str(r6409013, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6409014);
        mpfr_init(r6409015);
        mpfr_init(r6409016);
        mpfr_init(r6409017);
        mpfr_init_set_str(r6409018, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6409019);
        mpfr_init(r6409020);
        mpfr_init(r6409021);
        mpfr_init(r6409022);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6408999, x, MPFR_RNDN);
        mpfr_mul(r6409000, r6408999, r6408999, MPFR_RNDN);
        mpfr_mul(r6409001, r6408998, r6409000, MPFR_RNDN);
        mpfr_add(r6409002, r6408997, r6409001, MPFR_RNDN);
        ;
        mpfr_mul(r6409004, r6409000, r6408999, MPFR_RNDN);
        mpfr_mul(r6409005, r6409004, r6408999, MPFR_RNDN);
        mpfr_mul(r6409006, r6409003, r6409005, MPFR_RNDN);
        mpfr_add(r6409007, r6409002, r6409006, MPFR_RNDN);
        ;
        mpfr_mul(r6409009, r6409005, r6408999, MPFR_RNDN);
        mpfr_mul(r6409010, r6409009, r6408999, MPFR_RNDN);
        mpfr_mul(r6409011, r6409008, r6409010, MPFR_RNDN);
        mpfr_add(r6409012, r6409007, r6409011, MPFR_RNDN);
        ;
        mpfr_mul(r6409014, r6409010, r6408999, MPFR_RNDN);
        mpfr_mul(r6409015, r6409014, r6408999, MPFR_RNDN);
        mpfr_mul(r6409016, r6409013, r6409015, MPFR_RNDN);
        mpfr_add(r6409017, r6409012, r6409016, MPFR_RNDN);
        ;
        mpfr_mul(r6409019, r6409015, r6408999, MPFR_RNDN);
        mpfr_mul(r6409020, r6409019, r6408999, MPFR_RNDN);
        mpfr_mul(r6409021, r6409018, r6409020, MPFR_RNDN);
        mpfr_add(r6409022, r6409017, r6409021, MPFR_RNDN);
        return mpfr_get_d(r6409022, MPFR_RNDN);
}

static mpfr_t r6409023, r6409024, r6409025, r6409026, r6409027, r6409028, r6409029, r6409030, r6409031, r6409032, r6409033, r6409034, r6409035, r6409036, r6409037, r6409038, r6409039, r6409040, r6409041, r6409042, r6409043, r6409044, r6409045, r6409046;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6409023, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6409024);
        mpfr_init_set_str(r6409025, "4", 10, MPFR_RNDN);
        mpfr_init(r6409026);
        mpfr_init_set_str(r6409027, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6409028);
        mpfr_init_set_str(r6409029, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6409030);
        mpfr_init(r6409031);
        mpfr_init(r6409032);
        mpfr_init(r6409033);
        mpfr_init(r6409034);
        mpfr_init(r6409035);
        mpfr_init(r6409036);
        mpfr_init_set_str(r6409037, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6409038);
        mpfr_init_set_str(r6409039, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6409040);
        mpfr_init(r6409041);
        mpfr_init(r6409042);
        mpfr_init_set_str(r6409043, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6409044);
        mpfr_init(r6409045);
        mpfr_init(r6409046);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6409024, x, MPFR_RNDN);
        ;
        mpfr_pow(r6409026, r6409024, r6409025, MPFR_RNDN);
        ;
        mpfr_mul(r6409028, r6409026, r6409027, MPFR_RNDN);
        ;
        mpfr_mul(r6409030, r6409024, r6409029, MPFR_RNDN);
        mpfr_mul(r6409031, r6409024, r6409030, MPFR_RNDN);
        mpfr_add(r6409032, r6409028, r6409031, MPFR_RNDN);
        mpfr_add(r6409033, r6409023, r6409032, MPFR_RNDN);
        mpfr_mul(r6409034, r6409024, r6409024, MPFR_RNDN);
        mpfr_mul(r6409035, r6409034, r6409034, MPFR_RNDN);
        mpfr_mul(r6409036, r6409035, r6409035, MPFR_RNDN);
        ;
        mpfr_mul(r6409038, r6409034, r6409037, MPFR_RNDN);
        ;
        mpfr_add(r6409040, r6409038, r6409039, MPFR_RNDN);
        mpfr_mul(r6409041, r6409036, r6409040, MPFR_RNDN);
        mpfr_add(r6409042, r6409033, r6409041, MPFR_RNDN);
        ;
        mpfr_mul(r6409044, r6409034, r6409043, MPFR_RNDN);
        mpfr_mul(r6409045, r6409035, r6409044, MPFR_RNDN);
        mpfr_add(r6409046, r6409042, r6409045, MPFR_RNDN);
        return mpfr_get_d(r6409046, MPFR_RNDN);
}

static mpfr_t r6409047, r6409048, r6409049, r6409050, r6409051, r6409052, r6409053, r6409054, r6409055, r6409056, r6409057, r6409058, r6409059, r6409060, r6409061, r6409062, r6409063, r6409064, r6409065, r6409066, r6409067, r6409068, r6409069, r6409070;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6409047, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6409048);
        mpfr_init_set_str(r6409049, "4", 10, MPFR_RNDN);
        mpfr_init(r6409050);
        mpfr_init_set_str(r6409051, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6409052);
        mpfr_init_set_str(r6409053, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6409054);
        mpfr_init(r6409055);
        mpfr_init(r6409056);
        mpfr_init(r6409057);
        mpfr_init(r6409058);
        mpfr_init(r6409059);
        mpfr_init(r6409060);
        mpfr_init_set_str(r6409061, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6409062);
        mpfr_init_set_str(r6409063, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6409064);
        mpfr_init(r6409065);
        mpfr_init(r6409066);
        mpfr_init_set_str(r6409067, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6409068);
        mpfr_init(r6409069);
        mpfr_init(r6409070);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6409048, x, MPFR_RNDN);
        ;
        mpfr_pow(r6409050, r6409048, r6409049, MPFR_RNDN);
        ;
        mpfr_mul(r6409052, r6409050, r6409051, MPFR_RNDN);
        ;
        mpfr_mul(r6409054, r6409048, r6409053, MPFR_RNDN);
        mpfr_mul(r6409055, r6409048, r6409054, MPFR_RNDN);
        mpfr_add(r6409056, r6409052, r6409055, MPFR_RNDN);
        mpfr_add(r6409057, r6409047, r6409056, MPFR_RNDN);
        mpfr_mul(r6409058, r6409048, r6409048, MPFR_RNDN);
        mpfr_mul(r6409059, r6409058, r6409058, MPFR_RNDN);
        mpfr_mul(r6409060, r6409059, r6409059, MPFR_RNDN);
        ;
        mpfr_mul(r6409062, r6409058, r6409061, MPFR_RNDN);
        ;
        mpfr_add(r6409064, r6409062, r6409063, MPFR_RNDN);
        mpfr_mul(r6409065, r6409060, r6409064, MPFR_RNDN);
        mpfr_add(r6409066, r6409057, r6409065, MPFR_RNDN);
        ;
        mpfr_mul(r6409068, r6409058, r6409067, MPFR_RNDN);
        mpfr_mul(r6409069, r6409059, r6409068, MPFR_RNDN);
        mpfr_add(r6409070, r6409066, r6409069, MPFR_RNDN);
        return mpfr_get_d(r6409070, MPFR_RNDN);
}

