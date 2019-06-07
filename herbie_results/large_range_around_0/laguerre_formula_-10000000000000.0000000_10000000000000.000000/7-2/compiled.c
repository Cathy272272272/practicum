#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r11587981 = 1.0;
        float r11587982 = -2.0;
        float r11587983 = x;
        float r11587984 = r11587982 * r11587983;
        float r11587985 = r11587981 + r11587984;
        float r11587986 = 0.5;
        float r11587987 = r11587983 * r11587983;
        float r11587988 = r11587986 * r11587987;
        float r11587989 = r11587985 + r11587988;
        return r11587989;
}

double f_id(double x) {
        double r11587990 = 1.0;
        double r11587991 = -2.0;
        double r11587992 = x;
        double r11587993 = r11587991 * r11587992;
        double r11587994 = r11587990 + r11587993;
        double r11587995 = 0.5;
        double r11587996 = r11587992 * r11587992;
        double r11587997 = r11587995 * r11587996;
        double r11587998 = r11587994 + r11587997;
        return r11587998;
}


double f_of(float x) {
        float r11587999 = 1.0;
        float r11588000 = -2.0;
        float r11588001 = x;
        float r11588002 = r11588000 * r11588001;
        float r11588003 = r11587999 + r11588002;
        float r11588004 = 0.5;
        float r11588005 = r11588001 * r11588001;
        float r11588006 = r11588004 * r11588005;
        float r11588007 = r11588003 + r11588006;
        return r11588007;
}

double f_od(double x) {
        double r11588008 = 1.0;
        double r11588009 = -2.0;
        double r11588010 = x;
        double r11588011 = r11588009 * r11588010;
        double r11588012 = r11588008 + r11588011;
        double r11588013 = 0.5;
        double r11588014 = r11588010 * r11588010;
        double r11588015 = r11588013 * r11588014;
        double r11588016 = r11588012 + r11588015;
        return r11588016;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11588017, r11588018, r11588019, r11588020, r11588021, r11588022, r11588023, r11588024, r11588025;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11588017, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11588018, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11588019);
        mpfr_init(r11588020);
        mpfr_init(r11588021);
        mpfr_init_set_str(r11588022, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11588023);
        mpfr_init(r11588024);
        mpfr_init(r11588025);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11588019, x, MPFR_RNDN);
        mpfr_mul(r11588020, r11588018, r11588019, MPFR_RNDN);
        mpfr_add(r11588021, r11588017, r11588020, MPFR_RNDN);
        ;
        mpfr_mul(r11588023, r11588019, r11588019, MPFR_RNDN);
        mpfr_mul(r11588024, r11588022, r11588023, MPFR_RNDN);
        mpfr_add(r11588025, r11588021, r11588024, MPFR_RNDN);
        return mpfr_get_d(r11588025, MPFR_RNDN);
}

static mpfr_t r11588026, r11588027, r11588028, r11588029, r11588030, r11588031, r11588032, r11588033, r11588034;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11588026, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11588027, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11588028);
        mpfr_init(r11588029);
        mpfr_init(r11588030);
        mpfr_init_set_str(r11588031, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11588032);
        mpfr_init(r11588033);
        mpfr_init(r11588034);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11588028, x, MPFR_RNDN);
        mpfr_mul(r11588029, r11588027, r11588028, MPFR_RNDN);
        mpfr_add(r11588030, r11588026, r11588029, MPFR_RNDN);
        ;
        mpfr_mul(r11588032, r11588028, r11588028, MPFR_RNDN);
        mpfr_mul(r11588033, r11588031, r11588032, MPFR_RNDN);
        mpfr_add(r11588034, r11588030, r11588033, MPFR_RNDN);
        return mpfr_get_d(r11588034, MPFR_RNDN);
}

static mpfr_t r11588035, r11588036, r11588037, r11588038, r11588039, r11588040, r11588041, r11588042, r11588043;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11588035, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11588036, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r11588037);
        mpfr_init(r11588038);
        mpfr_init(r11588039);
        mpfr_init_set_str(r11588040, "0.5", 10, MPFR_RNDN);
        mpfr_init(r11588041);
        mpfr_init(r11588042);
        mpfr_init(r11588043);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11588037, x, MPFR_RNDN);
        mpfr_mul(r11588038, r11588036, r11588037, MPFR_RNDN);
        mpfr_add(r11588039, r11588035, r11588038, MPFR_RNDN);
        ;
        mpfr_mul(r11588041, r11588037, r11588037, MPFR_RNDN);
        mpfr_mul(r11588042, r11588040, r11588041, MPFR_RNDN);
        mpfr_add(r11588043, r11588039, r11588042, MPFR_RNDN);
        return mpfr_get_d(r11588043, MPFR_RNDN);
}

