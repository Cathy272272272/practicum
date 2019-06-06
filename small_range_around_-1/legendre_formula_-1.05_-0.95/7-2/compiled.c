#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r33707994 = -0.5;
        float r33707995 = 1.5;
        float r33707996 = x;
        float r33707997 = r33707996 * r33707996;
        float r33707998 = r33707995 * r33707997;
        float r33707999 = r33707994 + r33707998;
        return r33707999;
}

double f_id(double x) {
        double r33708000 = -0.5;
        double r33708001 = 1.5;
        double r33708002 = x;
        double r33708003 = r33708002 * r33708002;
        double r33708004 = r33708001 * r33708003;
        double r33708005 = r33708000 + r33708004;
        return r33708005;
}


double f_of(float x) {
        float r33708006 = x;
        float r33708007 = 1.5;
        float r33708008 = r33708006 * r33708007;
        float r33708009 = r33708008 * r33708006;
        float r33708010 = -0.5;
        float r33708011 = r33708009 + r33708010;
        float r33708012 = 3;
        float r33708013 = pow(r33708011, r33708012);
        float r33708014 = sqrt(r33708013);
        float r33708015 = r33708014 * r33708014;
        float r33708016 = cbrt(r33708015);
        return r33708016;
}

double f_od(double x) {
        double r33708017 = x;
        double r33708018 = 1.5;
        double r33708019 = r33708017 * r33708018;
        double r33708020 = r33708019 * r33708017;
        double r33708021 = -0.5;
        double r33708022 = r33708020 + r33708021;
        double r33708023 = 3;
        double r33708024 = pow(r33708022, r33708023);
        double r33708025 = sqrt(r33708024);
        double r33708026 = r33708025 * r33708025;
        double r33708027 = cbrt(r33708026);
        return r33708027;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33708028, r33708029, r33708030, r33708031, r33708032, r33708033;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33708028, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r33708029, "1.5", 10, MPFR_RNDN);
        mpfr_init(r33708030);
        mpfr_init(r33708031);
        mpfr_init(r33708032);
        mpfr_init(r33708033);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r33708030, x, MPFR_RNDN);
        mpfr_mul(r33708031, r33708030, r33708030, MPFR_RNDN);
        mpfr_mul(r33708032, r33708029, r33708031, MPFR_RNDN);
        mpfr_add(r33708033, r33708028, r33708032, MPFR_RNDN);
        return mpfr_get_d(r33708033, MPFR_RNDN);
}

static mpfr_t r33708034, r33708035, r33708036, r33708037, r33708038, r33708039, r33708040, r33708041, r33708042, r33708043, r33708044;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33708034);
        mpfr_init_set_str(r33708035, "1.5", 10, MPFR_RNDN);
        mpfr_init(r33708036);
        mpfr_init(r33708037);
        mpfr_init_set_str(r33708038, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r33708039);
        mpfr_init_set_str(r33708040, "3", 10, MPFR_RNDN);
        mpfr_init(r33708041);
        mpfr_init(r33708042);
        mpfr_init(r33708043);
        mpfr_init(r33708044);
}

double f_fm(double x) {
        mpfr_set_d(r33708034, x, MPFR_RNDN);
        ;
        mpfr_mul(r33708036, r33708034, r33708035, MPFR_RNDN);
        mpfr_mul(r33708037, r33708036, r33708034, MPFR_RNDN);
        ;
        mpfr_add(r33708039, r33708037, r33708038, MPFR_RNDN);
        ;
        mpfr_pow(r33708041, r33708039, r33708040, MPFR_RNDN);
        mpfr_sqrt(r33708042, r33708041, MPFR_RNDN);
        mpfr_mul(r33708043, r33708042, r33708042, MPFR_RNDN);
        mpfr_cbrt(r33708044, r33708043, MPFR_RNDN);
        return mpfr_get_d(r33708044, MPFR_RNDN);
}

static mpfr_t r33708045, r33708046, r33708047, r33708048, r33708049, r33708050, r33708051, r33708052, r33708053, r33708054, r33708055;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33708045);
        mpfr_init_set_str(r33708046, "1.5", 10, MPFR_RNDN);
        mpfr_init(r33708047);
        mpfr_init(r33708048);
        mpfr_init_set_str(r33708049, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r33708050);
        mpfr_init_set_str(r33708051, "3", 10, MPFR_RNDN);
        mpfr_init(r33708052);
        mpfr_init(r33708053);
        mpfr_init(r33708054);
        mpfr_init(r33708055);
}

double f_dm(double x) {
        mpfr_set_d(r33708045, x, MPFR_RNDN);
        ;
        mpfr_mul(r33708047, r33708045, r33708046, MPFR_RNDN);
        mpfr_mul(r33708048, r33708047, r33708045, MPFR_RNDN);
        ;
        mpfr_add(r33708050, r33708048, r33708049, MPFR_RNDN);
        ;
        mpfr_pow(r33708052, r33708050, r33708051, MPFR_RNDN);
        mpfr_sqrt(r33708053, r33708052, MPFR_RNDN);
        mpfr_mul(r33708054, r33708053, r33708053, MPFR_RNDN);
        mpfr_cbrt(r33708055, r33708054, MPFR_RNDN);
        return mpfr_get_d(r33708055, MPFR_RNDN);
}

