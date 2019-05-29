#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6177011 = -1.5;
        float r6177012 = x;
        float r6177013 = r6177011 * r6177012;
        float r6177014 = 2.5;
        float r6177015 = r6177012 * r6177012;
        float r6177016 = r6177015 * r6177012;
        float r6177017 = r6177014 * r6177016;
        float r6177018 = r6177013 + r6177017;
        return r6177018;
}

double f_id(double x) {
        double r6177019 = -1.5;
        double r6177020 = x;
        double r6177021 = r6177019 * r6177020;
        double r6177022 = 2.5;
        double r6177023 = r6177020 * r6177020;
        double r6177024 = r6177023 * r6177020;
        double r6177025 = r6177022 * r6177024;
        double r6177026 = r6177021 + r6177025;
        return r6177026;
}


double f_of(float x) {
        float r6177027 = -1.5;
        float r6177028 = x;
        float r6177029 = r6177027 * r6177028;
        float r6177030 = 2.5;
        float r6177031 = r6177028 * r6177028;
        float r6177032 = r6177031 * r6177028;
        float r6177033 = r6177030 * r6177032;
        float r6177034 = r6177029 + r6177033;
        return r6177034;
}

double f_od(double x) {
        double r6177035 = -1.5;
        double r6177036 = x;
        double r6177037 = r6177035 * r6177036;
        double r6177038 = 2.5;
        double r6177039 = r6177036 * r6177036;
        double r6177040 = r6177039 * r6177036;
        double r6177041 = r6177038 * r6177040;
        double r6177042 = r6177037 + r6177041;
        return r6177042;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6177043, r6177044, r6177045, r6177046, r6177047, r6177048, r6177049, r6177050;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6177043, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6177044);
        mpfr_init(r6177045);
        mpfr_init_set_str(r6177046, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6177047);
        mpfr_init(r6177048);
        mpfr_init(r6177049);
        mpfr_init(r6177050);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6177044, x, MPFR_RNDN);
        mpfr_mul(r6177045, r6177043, r6177044, MPFR_RNDN);
        ;
        mpfr_mul(r6177047, r6177044, r6177044, MPFR_RNDN);
        mpfr_mul(r6177048, r6177047, r6177044, MPFR_RNDN);
        mpfr_mul(r6177049, r6177046, r6177048, MPFR_RNDN);
        mpfr_add(r6177050, r6177045, r6177049, MPFR_RNDN);
        return mpfr_get_d(r6177050, MPFR_RNDN);
}

static mpfr_t r6177051, r6177052, r6177053, r6177054, r6177055, r6177056, r6177057, r6177058;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6177051, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6177052);
        mpfr_init(r6177053);
        mpfr_init_set_str(r6177054, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6177055);
        mpfr_init(r6177056);
        mpfr_init(r6177057);
        mpfr_init(r6177058);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6177052, x, MPFR_RNDN);
        mpfr_mul(r6177053, r6177051, r6177052, MPFR_RNDN);
        ;
        mpfr_mul(r6177055, r6177052, r6177052, MPFR_RNDN);
        mpfr_mul(r6177056, r6177055, r6177052, MPFR_RNDN);
        mpfr_mul(r6177057, r6177054, r6177056, MPFR_RNDN);
        mpfr_add(r6177058, r6177053, r6177057, MPFR_RNDN);
        return mpfr_get_d(r6177058, MPFR_RNDN);
}

static mpfr_t r6177059, r6177060, r6177061, r6177062, r6177063, r6177064, r6177065, r6177066;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6177059, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6177060);
        mpfr_init(r6177061);
        mpfr_init_set_str(r6177062, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6177063);
        mpfr_init(r6177064);
        mpfr_init(r6177065);
        mpfr_init(r6177066);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6177060, x, MPFR_RNDN);
        mpfr_mul(r6177061, r6177059, r6177060, MPFR_RNDN);
        ;
        mpfr_mul(r6177063, r6177060, r6177060, MPFR_RNDN);
        mpfr_mul(r6177064, r6177063, r6177060, MPFR_RNDN);
        mpfr_mul(r6177065, r6177062, r6177064, MPFR_RNDN);
        mpfr_add(r6177066, r6177061, r6177065, MPFR_RNDN);
        return mpfr_get_d(r6177066, MPFR_RNDN);
}

