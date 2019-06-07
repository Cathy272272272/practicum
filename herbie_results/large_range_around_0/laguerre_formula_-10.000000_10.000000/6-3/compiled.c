#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10584985 = 1.0;
        float r10584986 = -3.0;
        float r10584987 = x;
        float r10584988 = r10584986 * r10584987;
        float r10584989 = r10584985 + r10584988;
        float r10584990 = 1.5;
        float r10584991 = r10584987 * r10584987;
        float r10584992 = r10584990 * r10584991;
        float r10584993 = r10584989 + r10584992;
        float r10584994 = -0.166667;
        float r10584995 = r10584991 * r10584987;
        float r10584996 = r10584994 * r10584995;
        float r10584997 = r10584993 + r10584996;
        return r10584997;
}

double f_id(double x) {
        double r10584998 = 1.0;
        double r10584999 = -3.0;
        double r10585000 = x;
        double r10585001 = r10584999 * r10585000;
        double r10585002 = r10584998 + r10585001;
        double r10585003 = 1.5;
        double r10585004 = r10585000 * r10585000;
        double r10585005 = r10585003 * r10585004;
        double r10585006 = r10585002 + r10585005;
        double r10585007 = -0.166667;
        double r10585008 = r10585004 * r10585000;
        double r10585009 = r10585007 * r10585008;
        double r10585010 = r10585006 + r10585009;
        return r10585010;
}


double f_of(float x) {
        float r10585011 = 1.0;
        float r10585012 = -3.0;
        float r10585013 = x;
        float r10585014 = r10585012 * r10585013;
        float r10585015 = r10585011 + r10585014;
        float r10585016 = 1.5;
        float r10585017 = r10585013 * r10585013;
        float r10585018 = r10585016 * r10585017;
        float r10585019 = r10585015 + r10585018;
        float r10585020 = 3;
        float r10585021 = pow(r10585019, r10585020);
        float r10585022 = -0.166667;
        float r10585023 = r10585017 * r10585013;
        float r10585024 = r10585022 * r10585023;
        float r10585025 = pow(r10585024, r10585020);
        float r10585026 = r10585021 + r10585025;
        float r10585027 = r10585019 * r10585019;
        float r10585028 = r10585024 * r10585024;
        float r10585029 = r10585019 * r10585024;
        float r10585030 = r10585028 - r10585029;
        float r10585031 = r10585027 + r10585030;
        float r10585032 = r10585026 / r10585031;
        return r10585032;
}

double f_od(double x) {
        double r10585033 = 1.0;
        double r10585034 = -3.0;
        double r10585035 = x;
        double r10585036 = r10585034 * r10585035;
        double r10585037 = r10585033 + r10585036;
        double r10585038 = 1.5;
        double r10585039 = r10585035 * r10585035;
        double r10585040 = r10585038 * r10585039;
        double r10585041 = r10585037 + r10585040;
        double r10585042 = 3;
        double r10585043 = pow(r10585041, r10585042);
        double r10585044 = -0.166667;
        double r10585045 = r10585039 * r10585035;
        double r10585046 = r10585044 * r10585045;
        double r10585047 = pow(r10585046, r10585042);
        double r10585048 = r10585043 + r10585047;
        double r10585049 = r10585041 * r10585041;
        double r10585050 = r10585046 * r10585046;
        double r10585051 = r10585041 * r10585046;
        double r10585052 = r10585050 - r10585051;
        double r10585053 = r10585049 + r10585052;
        double r10585054 = r10585048 / r10585053;
        return r10585054;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10585055, r10585056, r10585057, r10585058, r10585059, r10585060, r10585061, r10585062, r10585063, r10585064, r10585065, r10585066, r10585067;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10585055, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585056, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10585057);
        mpfr_init(r10585058);
        mpfr_init(r10585059);
        mpfr_init_set_str(r10585060, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10585061);
        mpfr_init(r10585062);
        mpfr_init(r10585063);
        mpfr_init_set_str(r10585064, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10585065);
        mpfr_init(r10585066);
        mpfr_init(r10585067);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10585057, x, MPFR_RNDN);
        mpfr_mul(r10585058, r10585056, r10585057, MPFR_RNDN);
        mpfr_add(r10585059, r10585055, r10585058, MPFR_RNDN);
        ;
        mpfr_mul(r10585061, r10585057, r10585057, MPFR_RNDN);
        mpfr_mul(r10585062, r10585060, r10585061, MPFR_RNDN);
        mpfr_add(r10585063, r10585059, r10585062, MPFR_RNDN);
        ;
        mpfr_mul(r10585065, r10585061, r10585057, MPFR_RNDN);
        mpfr_mul(r10585066, r10585064, r10585065, MPFR_RNDN);
        mpfr_add(r10585067, r10585063, r10585066, MPFR_RNDN);
        return mpfr_get_d(r10585067, MPFR_RNDN);
}

static mpfr_t r10585068, r10585069, r10585070, r10585071, r10585072, r10585073, r10585074, r10585075, r10585076, r10585077, r10585078, r10585079, r10585080, r10585081, r10585082, r10585083, r10585084, r10585085, r10585086, r10585087, r10585088, r10585089;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10585068, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585069, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10585070);
        mpfr_init(r10585071);
        mpfr_init(r10585072);
        mpfr_init_set_str(r10585073, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10585074);
        mpfr_init(r10585075);
        mpfr_init(r10585076);
        mpfr_init_set_str(r10585077, "3", 10, MPFR_RNDN);
        mpfr_init(r10585078);
        mpfr_init_set_str(r10585079, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10585080);
        mpfr_init(r10585081);
        mpfr_init(r10585082);
        mpfr_init(r10585083);
        mpfr_init(r10585084);
        mpfr_init(r10585085);
        mpfr_init(r10585086);
        mpfr_init(r10585087);
        mpfr_init(r10585088);
        mpfr_init(r10585089);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10585070, x, MPFR_RNDN);
        mpfr_mul(r10585071, r10585069, r10585070, MPFR_RNDN);
        mpfr_add(r10585072, r10585068, r10585071, MPFR_RNDN);
        ;
        mpfr_mul(r10585074, r10585070, r10585070, MPFR_RNDN);
        mpfr_mul(r10585075, r10585073, r10585074, MPFR_RNDN);
        mpfr_add(r10585076, r10585072, r10585075, MPFR_RNDN);
        ;
        mpfr_pow(r10585078, r10585076, r10585077, MPFR_RNDN);
        ;
        mpfr_mul(r10585080, r10585074, r10585070, MPFR_RNDN);
        mpfr_mul(r10585081, r10585079, r10585080, MPFR_RNDN);
        mpfr_pow(r10585082, r10585081, r10585077, MPFR_RNDN);
        mpfr_add(r10585083, r10585078, r10585082, MPFR_RNDN);
        mpfr_mul(r10585084, r10585076, r10585076, MPFR_RNDN);
        mpfr_mul(r10585085, r10585081, r10585081, MPFR_RNDN);
        mpfr_mul(r10585086, r10585076, r10585081, MPFR_RNDN);
        mpfr_sub(r10585087, r10585085, r10585086, MPFR_RNDN);
        mpfr_add(r10585088, r10585084, r10585087, MPFR_RNDN);
        mpfr_div(r10585089, r10585083, r10585088, MPFR_RNDN);
        return mpfr_get_d(r10585089, MPFR_RNDN);
}

static mpfr_t r10585090, r10585091, r10585092, r10585093, r10585094, r10585095, r10585096, r10585097, r10585098, r10585099, r10585100, r10585101, r10585102, r10585103, r10585104, r10585105, r10585106, r10585107, r10585108, r10585109, r10585110, r10585111;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10585090, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10585091, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10585092);
        mpfr_init(r10585093);
        mpfr_init(r10585094);
        mpfr_init_set_str(r10585095, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10585096);
        mpfr_init(r10585097);
        mpfr_init(r10585098);
        mpfr_init_set_str(r10585099, "3", 10, MPFR_RNDN);
        mpfr_init(r10585100);
        mpfr_init_set_str(r10585101, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10585102);
        mpfr_init(r10585103);
        mpfr_init(r10585104);
        mpfr_init(r10585105);
        mpfr_init(r10585106);
        mpfr_init(r10585107);
        mpfr_init(r10585108);
        mpfr_init(r10585109);
        mpfr_init(r10585110);
        mpfr_init(r10585111);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10585092, x, MPFR_RNDN);
        mpfr_mul(r10585093, r10585091, r10585092, MPFR_RNDN);
        mpfr_add(r10585094, r10585090, r10585093, MPFR_RNDN);
        ;
        mpfr_mul(r10585096, r10585092, r10585092, MPFR_RNDN);
        mpfr_mul(r10585097, r10585095, r10585096, MPFR_RNDN);
        mpfr_add(r10585098, r10585094, r10585097, MPFR_RNDN);
        ;
        mpfr_pow(r10585100, r10585098, r10585099, MPFR_RNDN);
        ;
        mpfr_mul(r10585102, r10585096, r10585092, MPFR_RNDN);
        mpfr_mul(r10585103, r10585101, r10585102, MPFR_RNDN);
        mpfr_pow(r10585104, r10585103, r10585099, MPFR_RNDN);
        mpfr_add(r10585105, r10585100, r10585104, MPFR_RNDN);
        mpfr_mul(r10585106, r10585098, r10585098, MPFR_RNDN);
        mpfr_mul(r10585107, r10585103, r10585103, MPFR_RNDN);
        mpfr_mul(r10585108, r10585098, r10585103, MPFR_RNDN);
        mpfr_sub(r10585109, r10585107, r10585108, MPFR_RNDN);
        mpfr_add(r10585110, r10585106, r10585109, MPFR_RNDN);
        mpfr_div(r10585111, r10585105, r10585110, MPFR_RNDN);
        return mpfr_get_d(r10585111, MPFR_RNDN);
}

