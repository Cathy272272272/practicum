#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r4438890 = -0.246094;
        float r4438891 = 13.535156;
        float r4438892 = x;
        float r4438893 = r4438892 * r4438892;
        float r4438894 = r4438891 * r4438893;
        float r4438895 = r4438890 + r4438894;
        float r4438896 = -117.304688;
        float r4438897 = r4438893 * r4438892;
        float r4438898 = r4438897 * r4438892;
        float r4438899 = r4438896 * r4438898;
        float r4438900 = r4438895 + r4438899;
        float r4438901 = 351.914062;
        float r4438902 = r4438898 * r4438892;
        float r4438903 = r4438902 * r4438892;
        float r4438904 = r4438901 * r4438903;
        float r4438905 = r4438900 + r4438904;
        float r4438906 = -427.324219;
        float r4438907 = r4438903 * r4438892;
        float r4438908 = r4438907 * r4438892;
        float r4438909 = r4438906 * r4438908;
        float r4438910 = r4438905 + r4438909;
        float r4438911 = 180.425781;
        float r4438912 = r4438908 * r4438892;
        float r4438913 = r4438912 * r4438892;
        float r4438914 = r4438911 * r4438913;
        float r4438915 = r4438910 + r4438914;
        return r4438915;
}

double f_id(double x) {
        double r4438916 = -0.246094;
        double r4438917 = 13.535156;
        double r4438918 = x;
        double r4438919 = r4438918 * r4438918;
        double r4438920 = r4438917 * r4438919;
        double r4438921 = r4438916 + r4438920;
        double r4438922 = -117.304688;
        double r4438923 = r4438919 * r4438918;
        double r4438924 = r4438923 * r4438918;
        double r4438925 = r4438922 * r4438924;
        double r4438926 = r4438921 + r4438925;
        double r4438927 = 351.914062;
        double r4438928 = r4438924 * r4438918;
        double r4438929 = r4438928 * r4438918;
        double r4438930 = r4438927 * r4438929;
        double r4438931 = r4438926 + r4438930;
        double r4438932 = -427.324219;
        double r4438933 = r4438929 * r4438918;
        double r4438934 = r4438933 * r4438918;
        double r4438935 = r4438932 * r4438934;
        double r4438936 = r4438931 + r4438935;
        double r4438937 = 180.425781;
        double r4438938 = r4438934 * r4438918;
        double r4438939 = r4438938 * r4438918;
        double r4438940 = r4438937 * r4438939;
        double r4438941 = r4438936 + r4438940;
        return r4438941;
}


double f_of(float x) {
        float r4438942 = -0.246094;
        float r4438943 = 13.535156;
        float r4438944 = x;
        float r4438945 = r4438944 * r4438944;
        float r4438946 = r4438943 * r4438945;
        float r4438947 = r4438942 + r4438946;
        float r4438948 = -117.304688;
        float r4438949 = r4438945 * r4438944;
        float r4438950 = r4438949 * r4438944;
        float r4438951 = r4438948 * r4438950;
        float r4438952 = exp(r4438951);
        float r4438953 = log(r4438952);
        float r4438954 = r4438947 + r4438953;
        float r4438955 = 351.914062;
        float r4438956 = r4438950 * r4438944;
        float r4438957 = r4438956 * r4438944;
        float r4438958 = r4438955 * r4438957;
        float r4438959 = r4438954 + r4438958;
        float r4438960 = -427.324219;
        float r4438961 = r4438957 * r4438944;
        float r4438962 = r4438961 * r4438944;
        float r4438963 = r4438960 * r4438962;
        float r4438964 = r4438959 + r4438963;
        float r4438965 = 180.425781;
        float r4438966 = r4438962 * r4438944;
        float r4438967 = r4438966 * r4438944;
        float r4438968 = r4438965 * r4438967;
        float r4438969 = r4438964 + r4438968;
        return r4438969;
}

double f_od(double x) {
        double r4438970 = -0.246094;
        double r4438971 = 13.535156;
        double r4438972 = x;
        double r4438973 = r4438972 * r4438972;
        double r4438974 = r4438971 * r4438973;
        double r4438975 = r4438970 + r4438974;
        double r4438976 = -117.304688;
        double r4438977 = r4438973 * r4438972;
        double r4438978 = r4438977 * r4438972;
        double r4438979 = r4438976 * r4438978;
        double r4438980 = exp(r4438979);
        double r4438981 = log(r4438980);
        double r4438982 = r4438975 + r4438981;
        double r4438983 = 351.914062;
        double r4438984 = r4438978 * r4438972;
        double r4438985 = r4438984 * r4438972;
        double r4438986 = r4438983 * r4438985;
        double r4438987 = r4438982 + r4438986;
        double r4438988 = -427.324219;
        double r4438989 = r4438985 * r4438972;
        double r4438990 = r4438989 * r4438972;
        double r4438991 = r4438988 * r4438990;
        double r4438992 = r4438987 + r4438991;
        double r4438993 = 180.425781;
        double r4438994 = r4438990 * r4438972;
        double r4438995 = r4438994 * r4438972;
        double r4438996 = r4438993 * r4438995;
        double r4438997 = r4438992 + r4438996;
        return r4438997;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4438998, r4438999, r4439000, r4439001, r4439002, r4439003, r4439004, r4439005, r4439006, r4439007, r4439008, r4439009, r4439010, r4439011, r4439012, r4439013, r4439014, r4439015, r4439016, r4439017, r4439018, r4439019, r4439020, r4439021, r4439022, r4439023;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438998, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438999, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4439000);
        mpfr_init(r4439001);
        mpfr_init(r4439002);
        mpfr_init(r4439003);
        mpfr_init_set_str(r4439004, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4439005);
        mpfr_init(r4439006);
        mpfr_init(r4439007);
        mpfr_init(r4439008);
        mpfr_init_set_str(r4439009, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4439010);
        mpfr_init(r4439011);
        mpfr_init(r4439012);
        mpfr_init(r4439013);
        mpfr_init_set_str(r4439014, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4439015);
        mpfr_init(r4439016);
        mpfr_init(r4439017);
        mpfr_init(r4439018);
        mpfr_init_set_str(r4439019, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4439020);
        mpfr_init(r4439021);
        mpfr_init(r4439022);
        mpfr_init(r4439023);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4439000, x, MPFR_RNDN);
        mpfr_mul(r4439001, r4439000, r4439000, MPFR_RNDN);
        mpfr_mul(r4439002, r4438999, r4439001, MPFR_RNDN);
        mpfr_add(r4439003, r4438998, r4439002, MPFR_RNDN);
        ;
        mpfr_mul(r4439005, r4439001, r4439000, MPFR_RNDN);
        mpfr_mul(r4439006, r4439005, r4439000, MPFR_RNDN);
        mpfr_mul(r4439007, r4439004, r4439006, MPFR_RNDN);
        mpfr_add(r4439008, r4439003, r4439007, MPFR_RNDN);
        ;
        mpfr_mul(r4439010, r4439006, r4439000, MPFR_RNDN);
        mpfr_mul(r4439011, r4439010, r4439000, MPFR_RNDN);
        mpfr_mul(r4439012, r4439009, r4439011, MPFR_RNDN);
        mpfr_add(r4439013, r4439008, r4439012, MPFR_RNDN);
        ;
        mpfr_mul(r4439015, r4439011, r4439000, MPFR_RNDN);
        mpfr_mul(r4439016, r4439015, r4439000, MPFR_RNDN);
        mpfr_mul(r4439017, r4439014, r4439016, MPFR_RNDN);
        mpfr_add(r4439018, r4439013, r4439017, MPFR_RNDN);
        ;
        mpfr_mul(r4439020, r4439016, r4439000, MPFR_RNDN);
        mpfr_mul(r4439021, r4439020, r4439000, MPFR_RNDN);
        mpfr_mul(r4439022, r4439019, r4439021, MPFR_RNDN);
        mpfr_add(r4439023, r4439018, r4439022, MPFR_RNDN);
        return mpfr_get_d(r4439023, MPFR_RNDN);
}

static mpfr_t r4439024, r4439025, r4439026, r4439027, r4439028, r4439029, r4439030, r4439031, r4439032, r4439033, r4439034, r4439035, r4439036, r4439037, r4439038, r4439039, r4439040, r4439041, r4439042, r4439043, r4439044, r4439045, r4439046, r4439047, r4439048, r4439049, r4439050, r4439051;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439024, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r4439025, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4439026);
        mpfr_init(r4439027);
        mpfr_init(r4439028);
        mpfr_init(r4439029);
        mpfr_init_set_str(r4439030, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4439031);
        mpfr_init(r4439032);
        mpfr_init(r4439033);
        mpfr_init(r4439034);
        mpfr_init(r4439035);
        mpfr_init(r4439036);
        mpfr_init_set_str(r4439037, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4439038);
        mpfr_init(r4439039);
        mpfr_init(r4439040);
        mpfr_init(r4439041);
        mpfr_init_set_str(r4439042, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4439043);
        mpfr_init(r4439044);
        mpfr_init(r4439045);
        mpfr_init(r4439046);
        mpfr_init_set_str(r4439047, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4439048);
        mpfr_init(r4439049);
        mpfr_init(r4439050);
        mpfr_init(r4439051);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4439026, x, MPFR_RNDN);
        mpfr_mul(r4439027, r4439026, r4439026, MPFR_RNDN);
        mpfr_mul(r4439028, r4439025, r4439027, MPFR_RNDN);
        mpfr_add(r4439029, r4439024, r4439028, MPFR_RNDN);
        ;
        mpfr_mul(r4439031, r4439027, r4439026, MPFR_RNDN);
        mpfr_mul(r4439032, r4439031, r4439026, MPFR_RNDN);
        mpfr_mul(r4439033, r4439030, r4439032, MPFR_RNDN);
        mpfr_exp(r4439034, r4439033, MPFR_RNDN);
        mpfr_log(r4439035, r4439034, MPFR_RNDN);
        mpfr_add(r4439036, r4439029, r4439035, MPFR_RNDN);
        ;
        mpfr_mul(r4439038, r4439032, r4439026, MPFR_RNDN);
        mpfr_mul(r4439039, r4439038, r4439026, MPFR_RNDN);
        mpfr_mul(r4439040, r4439037, r4439039, MPFR_RNDN);
        mpfr_add(r4439041, r4439036, r4439040, MPFR_RNDN);
        ;
        mpfr_mul(r4439043, r4439039, r4439026, MPFR_RNDN);
        mpfr_mul(r4439044, r4439043, r4439026, MPFR_RNDN);
        mpfr_mul(r4439045, r4439042, r4439044, MPFR_RNDN);
        mpfr_add(r4439046, r4439041, r4439045, MPFR_RNDN);
        ;
        mpfr_mul(r4439048, r4439044, r4439026, MPFR_RNDN);
        mpfr_mul(r4439049, r4439048, r4439026, MPFR_RNDN);
        mpfr_mul(r4439050, r4439047, r4439049, MPFR_RNDN);
        mpfr_add(r4439051, r4439046, r4439050, MPFR_RNDN);
        return mpfr_get_d(r4439051, MPFR_RNDN);
}

static mpfr_t r4439052, r4439053, r4439054, r4439055, r4439056, r4439057, r4439058, r4439059, r4439060, r4439061, r4439062, r4439063, r4439064, r4439065, r4439066, r4439067, r4439068, r4439069, r4439070, r4439071, r4439072, r4439073, r4439074, r4439075, r4439076, r4439077, r4439078, r4439079;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4439052, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r4439053, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4439054);
        mpfr_init(r4439055);
        mpfr_init(r4439056);
        mpfr_init(r4439057);
        mpfr_init_set_str(r4439058, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4439059);
        mpfr_init(r4439060);
        mpfr_init(r4439061);
        mpfr_init(r4439062);
        mpfr_init(r4439063);
        mpfr_init(r4439064);
        mpfr_init_set_str(r4439065, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4439066);
        mpfr_init(r4439067);
        mpfr_init(r4439068);
        mpfr_init(r4439069);
        mpfr_init_set_str(r4439070, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4439071);
        mpfr_init(r4439072);
        mpfr_init(r4439073);
        mpfr_init(r4439074);
        mpfr_init_set_str(r4439075, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4439076);
        mpfr_init(r4439077);
        mpfr_init(r4439078);
        mpfr_init(r4439079);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4439054, x, MPFR_RNDN);
        mpfr_mul(r4439055, r4439054, r4439054, MPFR_RNDN);
        mpfr_mul(r4439056, r4439053, r4439055, MPFR_RNDN);
        mpfr_add(r4439057, r4439052, r4439056, MPFR_RNDN);
        ;
        mpfr_mul(r4439059, r4439055, r4439054, MPFR_RNDN);
        mpfr_mul(r4439060, r4439059, r4439054, MPFR_RNDN);
        mpfr_mul(r4439061, r4439058, r4439060, MPFR_RNDN);
        mpfr_exp(r4439062, r4439061, MPFR_RNDN);
        mpfr_log(r4439063, r4439062, MPFR_RNDN);
        mpfr_add(r4439064, r4439057, r4439063, MPFR_RNDN);
        ;
        mpfr_mul(r4439066, r4439060, r4439054, MPFR_RNDN);
        mpfr_mul(r4439067, r4439066, r4439054, MPFR_RNDN);
        mpfr_mul(r4439068, r4439065, r4439067, MPFR_RNDN);
        mpfr_add(r4439069, r4439064, r4439068, MPFR_RNDN);
        ;
        mpfr_mul(r4439071, r4439067, r4439054, MPFR_RNDN);
        mpfr_mul(r4439072, r4439071, r4439054, MPFR_RNDN);
        mpfr_mul(r4439073, r4439070, r4439072, MPFR_RNDN);
        mpfr_add(r4439074, r4439069, r4439073, MPFR_RNDN);
        ;
        mpfr_mul(r4439076, r4439072, r4439054, MPFR_RNDN);
        mpfr_mul(r4439077, r4439076, r4439054, MPFR_RNDN);
        mpfr_mul(r4439078, r4439075, r4439077, MPFR_RNDN);
        mpfr_add(r4439079, r4439074, r4439078, MPFR_RNDN);
        return mpfr_get_d(r4439079, MPFR_RNDN);
}

