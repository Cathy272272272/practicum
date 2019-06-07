#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7514050 = 0.273438;
        float r7514051 = -9.84375;
        float r7514052 = x;
        float r7514053 = r7514052 * r7514052;
        float r7514054 = r7514051 * r7514053;
        float r7514055 = r7514050 + r7514054;
        float r7514056 = 54.140625;
        float r7514057 = r7514053 * r7514052;
        float r7514058 = r7514057 * r7514052;
        float r7514059 = r7514056 * r7514058;
        float r7514060 = r7514055 + r7514059;
        float r7514061 = -93.84375;
        float r7514062 = r7514058 * r7514052;
        float r7514063 = r7514062 * r7514052;
        float r7514064 = r7514061 * r7514063;
        float r7514065 = r7514060 + r7514064;
        float r7514066 = 50.273438;
        float r7514067 = r7514063 * r7514052;
        float r7514068 = r7514067 * r7514052;
        float r7514069 = r7514066 * r7514068;
        float r7514070 = r7514065 + r7514069;
        return r7514070;
}

double f_id(double x) {
        double r7514071 = 0.273438;
        double r7514072 = -9.84375;
        double r7514073 = x;
        double r7514074 = r7514073 * r7514073;
        double r7514075 = r7514072 * r7514074;
        double r7514076 = r7514071 + r7514075;
        double r7514077 = 54.140625;
        double r7514078 = r7514074 * r7514073;
        double r7514079 = r7514078 * r7514073;
        double r7514080 = r7514077 * r7514079;
        double r7514081 = r7514076 + r7514080;
        double r7514082 = -93.84375;
        double r7514083 = r7514079 * r7514073;
        double r7514084 = r7514083 * r7514073;
        double r7514085 = r7514082 * r7514084;
        double r7514086 = r7514081 + r7514085;
        double r7514087 = 50.273438;
        double r7514088 = r7514084 * r7514073;
        double r7514089 = r7514088 * r7514073;
        double r7514090 = r7514087 * r7514089;
        double r7514091 = r7514086 + r7514090;
        return r7514091;
}


double f_of(float x) {
        float r7514092 = 50.273438;
        float r7514093 = x;
        float r7514094 = 8;
        float r7514095 = pow(r7514093, r7514094);
        float r7514096 = r7514092 * r7514095;
        float r7514097 = 0.273438;
        float r7514098 = 93.84375;
        float r7514099 = 6;
        float r7514100 = pow(r7514093, r7514099);
        float r7514101 = r7514098 * r7514100;
        float r7514102 = r7514097 - r7514101;
        float r7514103 = r7514096 + r7514102;
        float r7514104 = r7514093 * r7514093;
        float r7514105 = -r7514104;
        float r7514106 = 54.140625;
        float r7514107 = r7514104 * r7514106;
        float r7514108 = -9.84375;
        float r7514109 = r7514107 + r7514108;
        float r7514110 = r7514105 * r7514109;
        float r7514111 = r7514103 - r7514110;
        return r7514111;
}

double f_od(double x) {
        double r7514112 = 50.273438;
        double r7514113 = x;
        double r7514114 = 8;
        double r7514115 = pow(r7514113, r7514114);
        double r7514116 = r7514112 * r7514115;
        double r7514117 = 0.273438;
        double r7514118 = 93.84375;
        double r7514119 = 6;
        double r7514120 = pow(r7514113, r7514119);
        double r7514121 = r7514118 * r7514120;
        double r7514122 = r7514117 - r7514121;
        double r7514123 = r7514116 + r7514122;
        double r7514124 = r7514113 * r7514113;
        double r7514125 = -r7514124;
        double r7514126 = 54.140625;
        double r7514127 = r7514124 * r7514126;
        double r7514128 = -9.84375;
        double r7514129 = r7514127 + r7514128;
        double r7514130 = r7514125 * r7514129;
        double r7514131 = r7514123 - r7514130;
        return r7514131;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514132, r7514133, r7514134, r7514135, r7514136, r7514137, r7514138, r7514139, r7514140, r7514141, r7514142, r7514143, r7514144, r7514145, r7514146, r7514147, r7514148, r7514149, r7514150, r7514151, r7514152;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7514132, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514133, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7514134);
        mpfr_init(r7514135);
        mpfr_init(r7514136);
        mpfr_init(r7514137);
        mpfr_init_set_str(r7514138, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7514139);
        mpfr_init(r7514140);
        mpfr_init(r7514141);
        mpfr_init(r7514142);
        mpfr_init_set_str(r7514143, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r7514144);
        mpfr_init(r7514145);
        mpfr_init(r7514146);
        mpfr_init(r7514147);
        mpfr_init_set_str(r7514148, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7514149);
        mpfr_init(r7514150);
        mpfr_init(r7514151);
        mpfr_init(r7514152);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7514134, x, MPFR_RNDN);
        mpfr_mul(r7514135, r7514134, r7514134, MPFR_RNDN);
        mpfr_mul(r7514136, r7514133, r7514135, MPFR_RNDN);
        mpfr_add(r7514137, r7514132, r7514136, MPFR_RNDN);
        ;
        mpfr_mul(r7514139, r7514135, r7514134, MPFR_RNDN);
        mpfr_mul(r7514140, r7514139, r7514134, MPFR_RNDN);
        mpfr_mul(r7514141, r7514138, r7514140, MPFR_RNDN);
        mpfr_add(r7514142, r7514137, r7514141, MPFR_RNDN);
        ;
        mpfr_mul(r7514144, r7514140, r7514134, MPFR_RNDN);
        mpfr_mul(r7514145, r7514144, r7514134, MPFR_RNDN);
        mpfr_mul(r7514146, r7514143, r7514145, MPFR_RNDN);
        mpfr_add(r7514147, r7514142, r7514146, MPFR_RNDN);
        ;
        mpfr_mul(r7514149, r7514145, r7514134, MPFR_RNDN);
        mpfr_mul(r7514150, r7514149, r7514134, MPFR_RNDN);
        mpfr_mul(r7514151, r7514148, r7514150, MPFR_RNDN);
        mpfr_add(r7514152, r7514147, r7514151, MPFR_RNDN);
        return mpfr_get_d(r7514152, MPFR_RNDN);
}

static mpfr_t r7514153, r7514154, r7514155, r7514156, r7514157, r7514158, r7514159, r7514160, r7514161, r7514162, r7514163, r7514164, r7514165, r7514166, r7514167, r7514168, r7514169, r7514170, r7514171, r7514172;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7514153, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7514154);
        mpfr_init_set_str(r7514155, "8", 10, MPFR_RNDN);
        mpfr_init(r7514156);
        mpfr_init(r7514157);
        mpfr_init_set_str(r7514158, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514159, "93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514160, "6", 10, MPFR_RNDN);
        mpfr_init(r7514161);
        mpfr_init(r7514162);
        mpfr_init(r7514163);
        mpfr_init(r7514164);
        mpfr_init(r7514165);
        mpfr_init(r7514166);
        mpfr_init_set_str(r7514167, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7514168);
        mpfr_init_set_str(r7514169, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7514170);
        mpfr_init(r7514171);
        mpfr_init(r7514172);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7514154, x, MPFR_RNDN);
        ;
        mpfr_pow(r7514156, r7514154, r7514155, MPFR_RNDN);
        mpfr_mul(r7514157, r7514153, r7514156, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r7514161, r7514154, r7514160, MPFR_RNDN);
        mpfr_mul(r7514162, r7514159, r7514161, MPFR_RNDN);
        mpfr_sub(r7514163, r7514158, r7514162, MPFR_RNDN);
        mpfr_add(r7514164, r7514157, r7514163, MPFR_RNDN);
        mpfr_mul(r7514165, r7514154, r7514154, MPFR_RNDN);
        mpfr_neg(r7514166, r7514165, MPFR_RNDN);
        ;
        mpfr_mul(r7514168, r7514165, r7514167, MPFR_RNDN);
        ;
        mpfr_add(r7514170, r7514168, r7514169, MPFR_RNDN);
        mpfr_mul(r7514171, r7514166, r7514170, MPFR_RNDN);
        mpfr_sub(r7514172, r7514164, r7514171, MPFR_RNDN);
        return mpfr_get_d(r7514172, MPFR_RNDN);
}

static mpfr_t r7514173, r7514174, r7514175, r7514176, r7514177, r7514178, r7514179, r7514180, r7514181, r7514182, r7514183, r7514184, r7514185, r7514186, r7514187, r7514188, r7514189, r7514190, r7514191, r7514192;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7514173, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7514174);
        mpfr_init_set_str(r7514175, "8", 10, MPFR_RNDN);
        mpfr_init(r7514176);
        mpfr_init(r7514177);
        mpfr_init_set_str(r7514178, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514179, "93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514180, "6", 10, MPFR_RNDN);
        mpfr_init(r7514181);
        mpfr_init(r7514182);
        mpfr_init(r7514183);
        mpfr_init(r7514184);
        mpfr_init(r7514185);
        mpfr_init(r7514186);
        mpfr_init_set_str(r7514187, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7514188);
        mpfr_init_set_str(r7514189, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7514190);
        mpfr_init(r7514191);
        mpfr_init(r7514192);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7514174, x, MPFR_RNDN);
        ;
        mpfr_pow(r7514176, r7514174, r7514175, MPFR_RNDN);
        mpfr_mul(r7514177, r7514173, r7514176, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r7514181, r7514174, r7514180, MPFR_RNDN);
        mpfr_mul(r7514182, r7514179, r7514181, MPFR_RNDN);
        mpfr_sub(r7514183, r7514178, r7514182, MPFR_RNDN);
        mpfr_add(r7514184, r7514177, r7514183, MPFR_RNDN);
        mpfr_mul(r7514185, r7514174, r7514174, MPFR_RNDN);
        mpfr_neg(r7514186, r7514185, MPFR_RNDN);
        ;
        mpfr_mul(r7514188, r7514185, r7514187, MPFR_RNDN);
        ;
        mpfr_add(r7514190, r7514188, r7514189, MPFR_RNDN);
        mpfr_mul(r7514191, r7514186, r7514190, MPFR_RNDN);
        mpfr_sub(r7514192, r7514184, r7514191, MPFR_RNDN);
        return mpfr_get_d(r7514192, MPFR_RNDN);
}

