#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r11545064 = 1.0;
        float r11545065 = -2.0;
        float r11545066 = x;
        float r11545067 = r11545065 * r11545066;
        float r11545068 = r11545064 + r11545067;
        float r11545069 = 0.5;
        float r11545070 = r11545066 * r11545066;
        float r11545071 = r11545069 * r11545070;
        float r11545072 = r11545068 + r11545071;
        return r11545072;
}

double f_id(double x) {
        double r11545073 = 1.0;
        double r11545074 = -2.0;
        double r11545075 = x;
        double r11545076 = r11545074 * r11545075;
        double r11545077 = r11545073 + r11545076;
        double r11545078 = 0.5;
        double r11545079 = r11545075 * r11545075;
        double r11545080 = r11545078 * r11545079;
        double r11545081 = r11545077 + r11545080;
        return r11545081;
}


double f_of(float x) {
        float r11545082 = 1.0;
        float r11545083 = -2.0;
        float r11545084 = x;
        float r11545085 = r11545083 * r11545084;
        float r11545086 = r11545082 + r11545085;
        float r11545087 = 0.5;
        float r11545088 = r11545084 * r11545084;
        float r11545089 = r11545087 * r11545088;
        float r11545090 = r11545086 + r11545089;
        return r11545090;
}

double f_od(double x) {
        double r11545091 = 1.0;
        double r11545092 = -2.0;
        double r11545093 = x;
        double r11545094 = r11545092 * r11545093;
        double r11545095 = r11545091 + r11545094;
        double r11545096 = 0.5;
        double r11545097 = r11545093 * r11545093;
        double r11545098 = r11545096 * r11545097;
        double r11545099 = r11545095 + r11545098;
        return r11545099;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11545100, r11545101, r11545102, r11545103, r11545104, r11545105, r11545106, r11545107, r11545108;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11545100, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11545101, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11545102);
        mpfr_init(r11545103);
        mpfr_init(r11545104);
        mpfr_init_set_str(r11545105, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11545106);
        mpfr_init(r11545107);
        mpfr_init(r11545108);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11545102, x, MPFR_RNDN);
        mpfr_mul(r11545103, r11545101, r11545102, MPFR_RNDN);
        mpfr_add(r11545104, r11545100, r11545103, MPFR_RNDN);
        ;
        mpfr_mul(r11545106, r11545102, r11545102, MPFR_RNDN);
        mpfr_mul(r11545107, r11545105, r11545106, MPFR_RNDN);
        mpfr_add(r11545108, r11545104, r11545107, MPFR_RNDN);
        return mpfr_get_d(r11545108, MPFR_RNDN);
}

static mpfr_t r11545109, r11545110, r11545111, r11545112, r11545113, r11545114, r11545115, r11545116, r11545117;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11545109, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11545110, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11545111);
        mpfr_init(r11545112);
        mpfr_init(r11545113);
        mpfr_init_set_str(r11545114, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11545115);
        mpfr_init(r11545116);
        mpfr_init(r11545117);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11545111, x, MPFR_RNDN);
        mpfr_mul(r11545112, r11545110, r11545111, MPFR_RNDN);
        mpfr_add(r11545113, r11545109, r11545112, MPFR_RNDN);
        ;
        mpfr_mul(r11545115, r11545111, r11545111, MPFR_RNDN);
        mpfr_mul(r11545116, r11545114, r11545115, MPFR_RNDN);
        mpfr_add(r11545117, r11545113, r11545116, MPFR_RNDN);
        return mpfr_get_d(r11545117, MPFR_RNDN);
}

static mpfr_t r11545118, r11545119, r11545120, r11545121, r11545122, r11545123, r11545124, r11545125, r11545126;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11545118, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11545119, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11545120);
        mpfr_init(r11545121);
        mpfr_init(r11545122);
        mpfr_init_set_str(r11545123, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11545124);
        mpfr_init(r11545125);
        mpfr_init(r11545126);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11545120, x, MPFR_RNDN);
        mpfr_mul(r11545121, r11545119, r11545120, MPFR_RNDN);
        mpfr_add(r11545122, r11545118, r11545121, MPFR_RNDN);
        ;
        mpfr_mul(r11545124, r11545120, r11545120, MPFR_RNDN);
        mpfr_mul(r11545125, r11545123, r11545124, MPFR_RNDN);
        mpfr_add(r11545126, r11545122, r11545125, MPFR_RNDN);
        return mpfr_get_d(r11545126, MPFR_RNDN);
}

