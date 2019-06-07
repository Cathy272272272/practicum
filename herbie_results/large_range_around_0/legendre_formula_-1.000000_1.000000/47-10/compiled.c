#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10048963 = -0.246094;
        float r10048964 = 13.535156;
        float r10048965 = x;
        float r10048966 = r10048965 * r10048965;
        float r10048967 = r10048964 * r10048966;
        float r10048968 = r10048963 + r10048967;
        float r10048969 = -117.304688;
        float r10048970 = r10048966 * r10048965;
        float r10048971 = r10048970 * r10048965;
        float r10048972 = r10048969 * r10048971;
        float r10048973 = r10048968 + r10048972;
        float r10048974 = 351.914062;
        float r10048975 = r10048971 * r10048965;
        float r10048976 = r10048975 * r10048965;
        float r10048977 = r10048974 * r10048976;
        float r10048978 = r10048973 + r10048977;
        float r10048979 = -427.324219;
        float r10048980 = r10048976 * r10048965;
        float r10048981 = r10048980 * r10048965;
        float r10048982 = r10048979 * r10048981;
        float r10048983 = r10048978 + r10048982;
        float r10048984 = 180.425781;
        float r10048985 = r10048981 * r10048965;
        float r10048986 = r10048985 * r10048965;
        float r10048987 = r10048984 * r10048986;
        float r10048988 = r10048983 + r10048987;
        return r10048988;
}

double f_id(double x) {
        double r10048989 = -0.246094;
        double r10048990 = 13.535156;
        double r10048991 = x;
        double r10048992 = r10048991 * r10048991;
        double r10048993 = r10048990 * r10048992;
        double r10048994 = r10048989 + r10048993;
        double r10048995 = -117.304688;
        double r10048996 = r10048992 * r10048991;
        double r10048997 = r10048996 * r10048991;
        double r10048998 = r10048995 * r10048997;
        double r10048999 = r10048994 + r10048998;
        double r10049000 = 351.914062;
        double r10049001 = r10048997 * r10048991;
        double r10049002 = r10049001 * r10048991;
        double r10049003 = r10049000 * r10049002;
        double r10049004 = r10048999 + r10049003;
        double r10049005 = -427.324219;
        double r10049006 = r10049002 * r10048991;
        double r10049007 = r10049006 * r10048991;
        double r10049008 = r10049005 * r10049007;
        double r10049009 = r10049004 + r10049008;
        double r10049010 = 180.425781;
        double r10049011 = r10049007 * r10048991;
        double r10049012 = r10049011 * r10048991;
        double r10049013 = r10049010 * r10049012;
        double r10049014 = r10049009 + r10049013;
        return r10049014;
}


double f_of(float x) {
        float r10049015 = -0.246094;
        float r10049016 = x;
        float r10049017 = 4;
        float r10049018 = pow(r10049016, r10049017);
        float r10049019 = -117.304688;
        float r10049020 = r10049018 * r10049019;
        float r10049021 = 13.535156;
        float r10049022 = r10049016 * r10049021;
        float r10049023 = r10049016 * r10049022;
        float r10049024 = r10049020 + r10049023;
        float r10049025 = r10049015 + r10049024;
        float r10049026 = r10049016 * r10049016;
        float r10049027 = r10049026 * r10049026;
        float r10049028 = r10049027 * r10049027;
        float r10049029 = 180.425781;
        float r10049030 = r10049026 * r10049029;
        float r10049031 = -427.324219;
        float r10049032 = r10049030 + r10049031;
        float r10049033 = r10049028 * r10049032;
        float r10049034 = r10049025 + r10049033;
        float r10049035 = 351.914062;
        float r10049036 = r10049026 * r10049035;
        float r10049037 = r10049027 * r10049036;
        float r10049038 = r10049034 + r10049037;
        return r10049038;
}

double f_od(double x) {
        double r10049039 = -0.246094;
        double r10049040 = x;
        double r10049041 = 4;
        double r10049042 = pow(r10049040, r10049041);
        double r10049043 = -117.304688;
        double r10049044 = r10049042 * r10049043;
        double r10049045 = 13.535156;
        double r10049046 = r10049040 * r10049045;
        double r10049047 = r10049040 * r10049046;
        double r10049048 = r10049044 + r10049047;
        double r10049049 = r10049039 + r10049048;
        double r10049050 = r10049040 * r10049040;
        double r10049051 = r10049050 * r10049050;
        double r10049052 = r10049051 * r10049051;
        double r10049053 = 180.425781;
        double r10049054 = r10049050 * r10049053;
        double r10049055 = -427.324219;
        double r10049056 = r10049054 + r10049055;
        double r10049057 = r10049052 * r10049056;
        double r10049058 = r10049049 + r10049057;
        double r10049059 = 351.914062;
        double r10049060 = r10049050 * r10049059;
        double r10049061 = r10049051 * r10049060;
        double r10049062 = r10049058 + r10049061;
        return r10049062;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10049063, r10049064, r10049065, r10049066, r10049067, r10049068, r10049069, r10049070, r10049071, r10049072, r10049073, r10049074, r10049075, r10049076, r10049077, r10049078, r10049079, r10049080, r10049081, r10049082, r10049083, r10049084, r10049085, r10049086, r10049087, r10049088;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10049063, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r10049064, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r10049065);
        mpfr_init(r10049066);
        mpfr_init(r10049067);
        mpfr_init(r10049068);
        mpfr_init_set_str(r10049069, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r10049070);
        mpfr_init(r10049071);
        mpfr_init(r10049072);
        mpfr_init(r10049073);
        mpfr_init_set_str(r10049074, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r10049075);
        mpfr_init(r10049076);
        mpfr_init(r10049077);
        mpfr_init(r10049078);
        mpfr_init_set_str(r10049079, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r10049080);
        mpfr_init(r10049081);
        mpfr_init(r10049082);
        mpfr_init(r10049083);
        mpfr_init_set_str(r10049084, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r10049085);
        mpfr_init(r10049086);
        mpfr_init(r10049087);
        mpfr_init(r10049088);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10049065, x, MPFR_RNDN);
        mpfr_mul(r10049066, r10049065, r10049065, MPFR_RNDN);
        mpfr_mul(r10049067, r10049064, r10049066, MPFR_RNDN);
        mpfr_add(r10049068, r10049063, r10049067, MPFR_RNDN);
        ;
        mpfr_mul(r10049070, r10049066, r10049065, MPFR_RNDN);
        mpfr_mul(r10049071, r10049070, r10049065, MPFR_RNDN);
        mpfr_mul(r10049072, r10049069, r10049071, MPFR_RNDN);
        mpfr_add(r10049073, r10049068, r10049072, MPFR_RNDN);
        ;
        mpfr_mul(r10049075, r10049071, r10049065, MPFR_RNDN);
        mpfr_mul(r10049076, r10049075, r10049065, MPFR_RNDN);
        mpfr_mul(r10049077, r10049074, r10049076, MPFR_RNDN);
        mpfr_add(r10049078, r10049073, r10049077, MPFR_RNDN);
        ;
        mpfr_mul(r10049080, r10049076, r10049065, MPFR_RNDN);
        mpfr_mul(r10049081, r10049080, r10049065, MPFR_RNDN);
        mpfr_mul(r10049082, r10049079, r10049081, MPFR_RNDN);
        mpfr_add(r10049083, r10049078, r10049082, MPFR_RNDN);
        ;
        mpfr_mul(r10049085, r10049081, r10049065, MPFR_RNDN);
        mpfr_mul(r10049086, r10049085, r10049065, MPFR_RNDN);
        mpfr_mul(r10049087, r10049084, r10049086, MPFR_RNDN);
        mpfr_add(r10049088, r10049083, r10049087, MPFR_RNDN);
        return mpfr_get_d(r10049088, MPFR_RNDN);
}

static mpfr_t r10049089, r10049090, r10049091, r10049092, r10049093, r10049094, r10049095, r10049096, r10049097, r10049098, r10049099, r10049100, r10049101, r10049102, r10049103, r10049104, r10049105, r10049106, r10049107, r10049108, r10049109, r10049110, r10049111, r10049112;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10049089, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r10049090);
        mpfr_init_set_str(r10049091, "4", 10, MPFR_RNDN);
        mpfr_init(r10049092);
        mpfr_init_set_str(r10049093, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r10049094);
        mpfr_init_set_str(r10049095, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r10049096);
        mpfr_init(r10049097);
        mpfr_init(r10049098);
        mpfr_init(r10049099);
        mpfr_init(r10049100);
        mpfr_init(r10049101);
        mpfr_init(r10049102);
        mpfr_init_set_str(r10049103, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r10049104);
        mpfr_init_set_str(r10049105, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r10049106);
        mpfr_init(r10049107);
        mpfr_init(r10049108);
        mpfr_init_set_str(r10049109, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r10049110);
        mpfr_init(r10049111);
        mpfr_init(r10049112);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10049090, x, MPFR_RNDN);
        ;
        mpfr_pow(r10049092, r10049090, r10049091, MPFR_RNDN);
        ;
        mpfr_mul(r10049094, r10049092, r10049093, MPFR_RNDN);
        ;
        mpfr_mul(r10049096, r10049090, r10049095, MPFR_RNDN);
        mpfr_mul(r10049097, r10049090, r10049096, MPFR_RNDN);
        mpfr_add(r10049098, r10049094, r10049097, MPFR_RNDN);
        mpfr_add(r10049099, r10049089, r10049098, MPFR_RNDN);
        mpfr_mul(r10049100, r10049090, r10049090, MPFR_RNDN);
        mpfr_mul(r10049101, r10049100, r10049100, MPFR_RNDN);
        mpfr_mul(r10049102, r10049101, r10049101, MPFR_RNDN);
        ;
        mpfr_mul(r10049104, r10049100, r10049103, MPFR_RNDN);
        ;
        mpfr_add(r10049106, r10049104, r10049105, MPFR_RNDN);
        mpfr_mul(r10049107, r10049102, r10049106, MPFR_RNDN);
        mpfr_add(r10049108, r10049099, r10049107, MPFR_RNDN);
        ;
        mpfr_mul(r10049110, r10049100, r10049109, MPFR_RNDN);
        mpfr_mul(r10049111, r10049101, r10049110, MPFR_RNDN);
        mpfr_add(r10049112, r10049108, r10049111, MPFR_RNDN);
        return mpfr_get_d(r10049112, MPFR_RNDN);
}

static mpfr_t r10049113, r10049114, r10049115, r10049116, r10049117, r10049118, r10049119, r10049120, r10049121, r10049122, r10049123, r10049124, r10049125, r10049126, r10049127, r10049128, r10049129, r10049130, r10049131, r10049132, r10049133, r10049134, r10049135, r10049136;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10049113, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r10049114);
        mpfr_init_set_str(r10049115, "4", 10, MPFR_RNDN);
        mpfr_init(r10049116);
        mpfr_init_set_str(r10049117, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r10049118);
        mpfr_init_set_str(r10049119, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r10049120);
        mpfr_init(r10049121);
        mpfr_init(r10049122);
        mpfr_init(r10049123);
        mpfr_init(r10049124);
        mpfr_init(r10049125);
        mpfr_init(r10049126);
        mpfr_init_set_str(r10049127, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r10049128);
        mpfr_init_set_str(r10049129, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r10049130);
        mpfr_init(r10049131);
        mpfr_init(r10049132);
        mpfr_init_set_str(r10049133, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r10049134);
        mpfr_init(r10049135);
        mpfr_init(r10049136);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10049114, x, MPFR_RNDN);
        ;
        mpfr_pow(r10049116, r10049114, r10049115, MPFR_RNDN);
        ;
        mpfr_mul(r10049118, r10049116, r10049117, MPFR_RNDN);
        ;
        mpfr_mul(r10049120, r10049114, r10049119, MPFR_RNDN);
        mpfr_mul(r10049121, r10049114, r10049120, MPFR_RNDN);
        mpfr_add(r10049122, r10049118, r10049121, MPFR_RNDN);
        mpfr_add(r10049123, r10049113, r10049122, MPFR_RNDN);
        mpfr_mul(r10049124, r10049114, r10049114, MPFR_RNDN);
        mpfr_mul(r10049125, r10049124, r10049124, MPFR_RNDN);
        mpfr_mul(r10049126, r10049125, r10049125, MPFR_RNDN);
        ;
        mpfr_mul(r10049128, r10049124, r10049127, MPFR_RNDN);
        ;
        mpfr_add(r10049130, r10049128, r10049129, MPFR_RNDN);
        mpfr_mul(r10049131, r10049126, r10049130, MPFR_RNDN);
        mpfr_add(r10049132, r10049123, r10049131, MPFR_RNDN);
        ;
        mpfr_mul(r10049134, r10049124, r10049133, MPFR_RNDN);
        mpfr_mul(r10049135, r10049125, r10049134, MPFR_RNDN);
        mpfr_add(r10049136, r10049132, r10049135, MPFR_RNDN);
        return mpfr_get_d(r10049136, MPFR_RNDN);
}

