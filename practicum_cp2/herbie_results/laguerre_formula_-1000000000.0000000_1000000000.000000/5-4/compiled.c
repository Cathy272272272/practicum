#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r13458002 = 1.0;
        float r13458003 = -4.0;
        float r13458004 = x;
        float r13458005 = r13458003 * r13458004;
        float r13458006 = r13458002 + r13458005;
        float r13458007 = 3.0;
        float r13458008 = r13458004 * r13458004;
        float r13458009 = r13458007 * r13458008;
        float r13458010 = r13458006 + r13458009;
        float r13458011 = -0.666667;
        float r13458012 = r13458008 * r13458004;
        float r13458013 = r13458011 * r13458012;
        float r13458014 = r13458010 + r13458013;
        float r13458015 = 0.041667;
        float r13458016 = r13458012 * r13458004;
        float r13458017 = r13458015 * r13458016;
        float r13458018 = r13458014 + r13458017;
        return r13458018;
}

double f_id(double x) {
        double r13458019 = 1.0;
        double r13458020 = -4.0;
        double r13458021 = x;
        double r13458022 = r13458020 * r13458021;
        double r13458023 = r13458019 + r13458022;
        double r13458024 = 3.0;
        double r13458025 = r13458021 * r13458021;
        double r13458026 = r13458024 * r13458025;
        double r13458027 = r13458023 + r13458026;
        double r13458028 = -0.666667;
        double r13458029 = r13458025 * r13458021;
        double r13458030 = r13458028 * r13458029;
        double r13458031 = r13458027 + r13458030;
        double r13458032 = 0.041667;
        double r13458033 = r13458029 * r13458021;
        double r13458034 = r13458032 * r13458033;
        double r13458035 = r13458031 + r13458034;
        return r13458035;
}


double f_of(float x) {
        float r13458036 = -0.666667;
        float r13458037 = 0.041667;
        float r13458038 = x;
        float r13458039 = r13458037 * r13458038;
        float r13458040 = r13458036 + r13458039;
        float r13458041 = 3;
        float r13458042 = pow(r13458038, r13458041);
        float r13458043 = pow(r13458042, r13458041);
        float r13458044 = r13458040 * r13458043;
        float r13458045 = r13458040 * r13458040;
        float r13458046 = r13458044 * r13458045;
        float r13458047 = cbrt(r13458046);
        float r13458048 = 3.0;
        float r13458049 = r13458038 * r13458048;
        float r13458050 = r13458049 * r13458038;
        float r13458051 = -4.0;
        float r13458052 = r13458038 * r13458051;
        float r13458053 = 1.0;
        float r13458054 = r13458052 + r13458053;
        float r13458055 = r13458050 + r13458054;
        float r13458056 = r13458047 + r13458055;
        return r13458056;
}

double f_od(double x) {
        double r13458057 = -0.666667;
        double r13458058 = 0.041667;
        double r13458059 = x;
        double r13458060 = r13458058 * r13458059;
        double r13458061 = r13458057 + r13458060;
        double r13458062 = 3;
        double r13458063 = pow(r13458059, r13458062);
        double r13458064 = pow(r13458063, r13458062);
        double r13458065 = r13458061 * r13458064;
        double r13458066 = r13458061 * r13458061;
        double r13458067 = r13458065 * r13458066;
        double r13458068 = cbrt(r13458067);
        double r13458069 = 3.0;
        double r13458070 = r13458059 * r13458069;
        double r13458071 = r13458070 * r13458059;
        double r13458072 = -4.0;
        double r13458073 = r13458059 * r13458072;
        double r13458074 = 1.0;
        double r13458075 = r13458073 + r13458074;
        double r13458076 = r13458071 + r13458075;
        double r13458077 = r13458068 + r13458076;
        return r13458077;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13458078, r13458079, r13458080, r13458081, r13458082, r13458083, r13458084, r13458085, r13458086, r13458087, r13458088, r13458089, r13458090, r13458091, r13458092, r13458093, r13458094;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13458078, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458079, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r13458080);
        mpfr_init(r13458081);
        mpfr_init(r13458082);
        mpfr_init_set_str(r13458083, "3.0", 10, MPFR_RNDN);
        mpfr_init(r13458084);
        mpfr_init(r13458085);
        mpfr_init(r13458086);
        mpfr_init_set_str(r13458087, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r13458088);
        mpfr_init(r13458089);
        mpfr_init(r13458090);
        mpfr_init_set_str(r13458091, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r13458092);
        mpfr_init(r13458093);
        mpfr_init(r13458094);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13458080, x, MPFR_RNDN);
        mpfr_mul(r13458081, r13458079, r13458080, MPFR_RNDN);
        mpfr_add(r13458082, r13458078, r13458081, MPFR_RNDN);
        ;
        mpfr_mul(r13458084, r13458080, r13458080, MPFR_RNDN);
        mpfr_mul(r13458085, r13458083, r13458084, MPFR_RNDN);
        mpfr_add(r13458086, r13458082, r13458085, MPFR_RNDN);
        ;
        mpfr_mul(r13458088, r13458084, r13458080, MPFR_RNDN);
        mpfr_mul(r13458089, r13458087, r13458088, MPFR_RNDN);
        mpfr_add(r13458090, r13458086, r13458089, MPFR_RNDN);
        ;
        mpfr_mul(r13458092, r13458088, r13458080, MPFR_RNDN);
        mpfr_mul(r13458093, r13458091, r13458092, MPFR_RNDN);
        mpfr_add(r13458094, r13458090, r13458093, MPFR_RNDN);
        return mpfr_get_d(r13458094, MPFR_RNDN);
}

static mpfr_t r13458095, r13458096, r13458097, r13458098, r13458099, r13458100, r13458101, r13458102, r13458103, r13458104, r13458105, r13458106, r13458107, r13458108, r13458109, r13458110, r13458111, r13458112, r13458113, r13458114, r13458115;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13458095, "-0.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458096, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r13458097);
        mpfr_init(r13458098);
        mpfr_init(r13458099);
        mpfr_init_set_str(r13458100, "3", 10, MPFR_RNDN);
        mpfr_init(r13458101);
        mpfr_init(r13458102);
        mpfr_init(r13458103);
        mpfr_init(r13458104);
        mpfr_init(r13458105);
        mpfr_init(r13458106);
        mpfr_init_set_str(r13458107, "3.0", 10, MPFR_RNDN);
        mpfr_init(r13458108);
        mpfr_init(r13458109);
        mpfr_init_set_str(r13458110, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r13458111);
        mpfr_init_set_str(r13458112, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13458113);
        mpfr_init(r13458114);
        mpfr_init(r13458115);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r13458097, x, MPFR_RNDN);
        mpfr_mul(r13458098, r13458096, r13458097, MPFR_RNDN);
        mpfr_add(r13458099, r13458095, r13458098, MPFR_RNDN);
        ;
        mpfr_pow(r13458101, r13458097, r13458100, MPFR_RNDN);
        mpfr_pow(r13458102, r13458101, r13458100, MPFR_RNDN);
        mpfr_mul(r13458103, r13458099, r13458102, MPFR_RNDN);
        mpfr_mul(r13458104, r13458099, r13458099, MPFR_RNDN);
        mpfr_mul(r13458105, r13458103, r13458104, MPFR_RNDN);
        mpfr_cbrt(r13458106, r13458105, MPFR_RNDN);
        ;
        mpfr_mul(r13458108, r13458097, r13458107, MPFR_RNDN);
        mpfr_mul(r13458109, r13458108, r13458097, MPFR_RNDN);
        ;
        mpfr_mul(r13458111, r13458097, r13458110, MPFR_RNDN);
        ;
        mpfr_add(r13458113, r13458111, r13458112, MPFR_RNDN);
        mpfr_add(r13458114, r13458109, r13458113, MPFR_RNDN);
        mpfr_add(r13458115, r13458106, r13458114, MPFR_RNDN);
        return mpfr_get_d(r13458115, MPFR_RNDN);
}

static mpfr_t r13458116, r13458117, r13458118, r13458119, r13458120, r13458121, r13458122, r13458123, r13458124, r13458125, r13458126, r13458127, r13458128, r13458129, r13458130, r13458131, r13458132, r13458133, r13458134, r13458135, r13458136;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r13458116, "-0.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r13458117, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r13458118);
        mpfr_init(r13458119);
        mpfr_init(r13458120);
        mpfr_init_set_str(r13458121, "3", 10, MPFR_RNDN);
        mpfr_init(r13458122);
        mpfr_init(r13458123);
        mpfr_init(r13458124);
        mpfr_init(r13458125);
        mpfr_init(r13458126);
        mpfr_init(r13458127);
        mpfr_init_set_str(r13458128, "3.0", 10, MPFR_RNDN);
        mpfr_init(r13458129);
        mpfr_init(r13458130);
        mpfr_init_set_str(r13458131, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r13458132);
        mpfr_init_set_str(r13458133, "1.0", 10, MPFR_RNDN);
        mpfr_init(r13458134);
        mpfr_init(r13458135);
        mpfr_init(r13458136);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r13458118, x, MPFR_RNDN);
        mpfr_mul(r13458119, r13458117, r13458118, MPFR_RNDN);
        mpfr_add(r13458120, r13458116, r13458119, MPFR_RNDN);
        ;
        mpfr_pow(r13458122, r13458118, r13458121, MPFR_RNDN);
        mpfr_pow(r13458123, r13458122, r13458121, MPFR_RNDN);
        mpfr_mul(r13458124, r13458120, r13458123, MPFR_RNDN);
        mpfr_mul(r13458125, r13458120, r13458120, MPFR_RNDN);
        mpfr_mul(r13458126, r13458124, r13458125, MPFR_RNDN);
        mpfr_cbrt(r13458127, r13458126, MPFR_RNDN);
        ;
        mpfr_mul(r13458129, r13458118, r13458128, MPFR_RNDN);
        mpfr_mul(r13458130, r13458129, r13458118, MPFR_RNDN);
        ;
        mpfr_mul(r13458132, r13458118, r13458131, MPFR_RNDN);
        ;
        mpfr_add(r13458134, r13458132, r13458133, MPFR_RNDN);
        mpfr_add(r13458135, r13458130, r13458134, MPFR_RNDN);
        mpfr_add(r13458136, r13458127, r13458135, MPFR_RNDN);
        return mpfr_get_d(r13458136, MPFR_RNDN);
}

