#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6861002 = -1.5;
        float r6861003 = x;
        float r6861004 = r6861002 * r6861003;
        float r6861005 = 2.5;
        float r6861006 = r6861003 * r6861003;
        float r6861007 = r6861006 * r6861003;
        float r6861008 = r6861005 * r6861007;
        float r6861009 = r6861004 + r6861008;
        return r6861009;
}

double f_id(double x) {
        double r6861010 = -1.5;
        double r6861011 = x;
        double r6861012 = r6861010 * r6861011;
        double r6861013 = 2.5;
        double r6861014 = r6861011 * r6861011;
        double r6861015 = r6861014 * r6861011;
        double r6861016 = r6861013 * r6861015;
        double r6861017 = r6861012 + r6861016;
        return r6861017;
}


double f_of(float x) {
        float r6861018 = -1.5;
        float r6861019 = x;
        float r6861020 = r6861018 * r6861019;
        float r6861021 = 2.5;
        float r6861022 = r6861019 * r6861019;
        float r6861023 = r6861022 * r6861019;
        float r6861024 = r6861021 * r6861023;
        float r6861025 = r6861020 + r6861024;
        return r6861025;
}

double f_od(double x) {
        double r6861026 = -1.5;
        double r6861027 = x;
        double r6861028 = r6861026 * r6861027;
        double r6861029 = 2.5;
        double r6861030 = r6861027 * r6861027;
        double r6861031 = r6861030 * r6861027;
        double r6861032 = r6861029 * r6861031;
        double r6861033 = r6861028 + r6861032;
        return r6861033;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6861034, r6861035, r6861036, r6861037, r6861038, r6861039, r6861040, r6861041;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6861034, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6861035);
        mpfr_init(r6861036);
        mpfr_init_set_str(r6861037, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6861038);
        mpfr_init(r6861039);
        mpfr_init(r6861040);
        mpfr_init(r6861041);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6861035, x, MPFR_RNDN);
        mpfr_mul(r6861036, r6861034, r6861035, MPFR_RNDN);
        ;
        mpfr_mul(r6861038, r6861035, r6861035, MPFR_RNDN);
        mpfr_mul(r6861039, r6861038, r6861035, MPFR_RNDN);
        mpfr_mul(r6861040, r6861037, r6861039, MPFR_RNDN);
        mpfr_add(r6861041, r6861036, r6861040, MPFR_RNDN);
        return mpfr_get_d(r6861041, MPFR_RNDN);
}

static mpfr_t r6861042, r6861043, r6861044, r6861045, r6861046, r6861047, r6861048, r6861049;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6861042, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6861043);
        mpfr_init(r6861044);
        mpfr_init_set_str(r6861045, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6861046);
        mpfr_init(r6861047);
        mpfr_init(r6861048);
        mpfr_init(r6861049);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6861043, x, MPFR_RNDN);
        mpfr_mul(r6861044, r6861042, r6861043, MPFR_RNDN);
        ;
        mpfr_mul(r6861046, r6861043, r6861043, MPFR_RNDN);
        mpfr_mul(r6861047, r6861046, r6861043, MPFR_RNDN);
        mpfr_mul(r6861048, r6861045, r6861047, MPFR_RNDN);
        mpfr_add(r6861049, r6861044, r6861048, MPFR_RNDN);
        return mpfr_get_d(r6861049, MPFR_RNDN);
}

static mpfr_t r6861050, r6861051, r6861052, r6861053, r6861054, r6861055, r6861056, r6861057;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6861050, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6861051);
        mpfr_init(r6861052);
        mpfr_init_set_str(r6861053, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6861054);
        mpfr_init(r6861055);
        mpfr_init(r6861056);
        mpfr_init(r6861057);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6861051, x, MPFR_RNDN);
        mpfr_mul(r6861052, r6861050, r6861051, MPFR_RNDN);
        ;
        mpfr_mul(r6861054, r6861051, r6861051, MPFR_RNDN);
        mpfr_mul(r6861055, r6861054, r6861051, MPFR_RNDN);
        mpfr_mul(r6861056, r6861053, r6861055, MPFR_RNDN);
        mpfr_add(r6861057, r6861052, r6861056, MPFR_RNDN);
        return mpfr_get_d(r6861057, MPFR_RNDN);
}

