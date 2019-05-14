#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9959997 = 12.0;
        float r9959998 = -48.0;
        float r9959999 = x;
        float r9960000 = r9959999 * r9959999;
        float r9960001 = r9959998 * r9960000;
        float r9960002 = r9959997 + r9960001;
        float r9960003 = 16.0;
        float r9960004 = r9960000 * r9959999;
        float r9960005 = r9960004 * r9959999;
        float r9960006 = r9960003 * r9960005;
        float r9960007 = r9960002 + r9960006;
        return r9960007;
}

double f_id(double x) {
        double r9960008 = 12.0;
        double r9960009 = -48.0;
        double r9960010 = x;
        double r9960011 = r9960010 * r9960010;
        double r9960012 = r9960009 * r9960011;
        double r9960013 = r9960008 + r9960012;
        double r9960014 = 16.0;
        double r9960015 = r9960011 * r9960010;
        double r9960016 = r9960015 * r9960010;
        double r9960017 = r9960014 * r9960016;
        double r9960018 = r9960013 + r9960017;
        return r9960018;
}


double f_of(float x) {
        float r9960019 = 12.0;
        float r9960020 = x;
        float r9960021 = 16.0;
        float r9960022 = r9960020 * r9960021;
        float r9960023 = r9960022 * r9960020;
        float r9960024 = r9960020 * r9960020;
        float r9960025 = r9960023 * r9960024;
        float r9960026 = -48.0;
        float r9960027 = r9960020 * r9960026;
        float r9960028 = r9960027 * r9960020;
        float r9960029 = r9960025 + r9960028;
        float r9960030 = r9960019 + r9960029;
        return r9960030;
}

double f_od(double x) {
        double r9960031 = 12.0;
        double r9960032 = x;
        double r9960033 = 16.0;
        double r9960034 = r9960032 * r9960033;
        double r9960035 = r9960034 * r9960032;
        double r9960036 = r9960032 * r9960032;
        double r9960037 = r9960035 * r9960036;
        double r9960038 = -48.0;
        double r9960039 = r9960032 * r9960038;
        double r9960040 = r9960039 * r9960032;
        double r9960041 = r9960037 + r9960040;
        double r9960042 = r9960031 + r9960041;
        return r9960042;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9960043, r9960044, r9960045, r9960046, r9960047, r9960048, r9960049, r9960050, r9960051, r9960052, r9960053;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9960043, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9960044, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9960045);
        mpfr_init(r9960046);
        mpfr_init(r9960047);
        mpfr_init(r9960048);
        mpfr_init_set_str(r9960049, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9960050);
        mpfr_init(r9960051);
        mpfr_init(r9960052);
        mpfr_init(r9960053);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9960045, x, MPFR_RNDN);
        mpfr_mul(r9960046, r9960045, r9960045, MPFR_RNDN);
        mpfr_mul(r9960047, r9960044, r9960046, MPFR_RNDN);
        mpfr_add(r9960048, r9960043, r9960047, MPFR_RNDN);
        ;
        mpfr_mul(r9960050, r9960046, r9960045, MPFR_RNDN);
        mpfr_mul(r9960051, r9960050, r9960045, MPFR_RNDN);
        mpfr_mul(r9960052, r9960049, r9960051, MPFR_RNDN);
        mpfr_add(r9960053, r9960048, r9960052, MPFR_RNDN);
        return mpfr_get_d(r9960053, MPFR_RNDN);
}

static mpfr_t r9960054, r9960055, r9960056, r9960057, r9960058, r9960059, r9960060, r9960061, r9960062, r9960063, r9960064, r9960065;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9960054, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9960055);
        mpfr_init_set_str(r9960056, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9960057);
        mpfr_init(r9960058);
        mpfr_init(r9960059);
        mpfr_init(r9960060);
        mpfr_init_set_str(r9960061, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9960062);
        mpfr_init(r9960063);
        mpfr_init(r9960064);
        mpfr_init(r9960065);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9960055, x, MPFR_RNDN);
        ;
        mpfr_mul(r9960057, r9960055, r9960056, MPFR_RNDN);
        mpfr_mul(r9960058, r9960057, r9960055, MPFR_RNDN);
        mpfr_mul(r9960059, r9960055, r9960055, MPFR_RNDN);
        mpfr_mul(r9960060, r9960058, r9960059, MPFR_RNDN);
        ;
        mpfr_mul(r9960062, r9960055, r9960061, MPFR_RNDN);
        mpfr_mul(r9960063, r9960062, r9960055, MPFR_RNDN);
        mpfr_add(r9960064, r9960060, r9960063, MPFR_RNDN);
        mpfr_add(r9960065, r9960054, r9960064, MPFR_RNDN);
        return mpfr_get_d(r9960065, MPFR_RNDN);
}

static mpfr_t r9960066, r9960067, r9960068, r9960069, r9960070, r9960071, r9960072, r9960073, r9960074, r9960075, r9960076, r9960077;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9960066, "12.0", 10, MPFR_RNDN);
        mpfr_init(r9960067);
        mpfr_init_set_str(r9960068, "16.0", 10, MPFR_RNDN);
        mpfr_init(r9960069);
        mpfr_init(r9960070);
        mpfr_init(r9960071);
        mpfr_init(r9960072);
        mpfr_init_set_str(r9960073, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r9960074);
        mpfr_init(r9960075);
        mpfr_init(r9960076);
        mpfr_init(r9960077);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9960067, x, MPFR_RNDN);
        ;
        mpfr_mul(r9960069, r9960067, r9960068, MPFR_RNDN);
        mpfr_mul(r9960070, r9960069, r9960067, MPFR_RNDN);
        mpfr_mul(r9960071, r9960067, r9960067, MPFR_RNDN);
        mpfr_mul(r9960072, r9960070, r9960071, MPFR_RNDN);
        ;
        mpfr_mul(r9960074, r9960067, r9960073, MPFR_RNDN);
        mpfr_mul(r9960075, r9960074, r9960067, MPFR_RNDN);
        mpfr_add(r9960076, r9960072, r9960075, MPFR_RNDN);
        mpfr_add(r9960077, r9960066, r9960076, MPFR_RNDN);
        return mpfr_get_d(r9960077, MPFR_RNDN);
}

