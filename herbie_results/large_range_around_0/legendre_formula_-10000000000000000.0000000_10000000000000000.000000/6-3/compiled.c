#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6904060 = -1.5;
        float r6904061 = x;
        float r6904062 = r6904060 * r6904061;
        float r6904063 = 2.5;
        float r6904064 = r6904061 * r6904061;
        float r6904065 = r6904064 * r6904061;
        float r6904066 = r6904063 * r6904065;
        float r6904067 = r6904062 + r6904066;
        return r6904067;
}

double f_id(double x) {
        double r6904068 = -1.5;
        double r6904069 = x;
        double r6904070 = r6904068 * r6904069;
        double r6904071 = 2.5;
        double r6904072 = r6904069 * r6904069;
        double r6904073 = r6904072 * r6904069;
        double r6904074 = r6904071 * r6904073;
        double r6904075 = r6904070 + r6904074;
        return r6904075;
}


double f_of(float x) {
        float r6904076 = -1.5;
        float r6904077 = x;
        float r6904078 = r6904076 * r6904077;
        float r6904079 = 2.5;
        float r6904080 = 3;
        float r6904081 = pow(r6904077, r6904080);
        float r6904082 = r6904079 * r6904081;
        float r6904083 = r6904078 + r6904082;
        return r6904083;
}

double f_od(double x) {
        double r6904084 = -1.5;
        double r6904085 = x;
        double r6904086 = r6904084 * r6904085;
        double r6904087 = 2.5;
        double r6904088 = 3;
        double r6904089 = pow(r6904085, r6904088);
        double r6904090 = r6904087 * r6904089;
        double r6904091 = r6904086 + r6904090;
        return r6904091;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6904092, r6904093, r6904094, r6904095, r6904096, r6904097, r6904098, r6904099;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6904092, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6904093);
        mpfr_init(r6904094);
        mpfr_init_set_str(r6904095, "2.5", 10, MPFR_RNDN);
        mpfr_init(r6904096);
        mpfr_init(r6904097);
        mpfr_init(r6904098);
        mpfr_init(r6904099);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6904093, x, MPFR_RNDN);
        mpfr_mul(r6904094, r6904092, r6904093, MPFR_RNDN);
        ;
        mpfr_mul(r6904096, r6904093, r6904093, MPFR_RNDN);
        mpfr_mul(r6904097, r6904096, r6904093, MPFR_RNDN);
        mpfr_mul(r6904098, r6904095, r6904097, MPFR_RNDN);
        mpfr_add(r6904099, r6904094, r6904098, MPFR_RNDN);
        return mpfr_get_d(r6904099, MPFR_RNDN);
}

static mpfr_t r6904100, r6904101, r6904102, r6904103, r6904104, r6904105, r6904106, r6904107;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6904100, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6904101);
        mpfr_init(r6904102);
        mpfr_init_set_str(r6904103, "2.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6904104, "3", 10, MPFR_RNDN);
        mpfr_init(r6904105);
        mpfr_init(r6904106);
        mpfr_init(r6904107);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6904101, x, MPFR_RNDN);
        mpfr_mul(r6904102, r6904100, r6904101, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6904105, r6904101, r6904104, MPFR_RNDN);
        mpfr_mul(r6904106, r6904103, r6904105, MPFR_RNDN);
        mpfr_add(r6904107, r6904102, r6904106, MPFR_RNDN);
        return mpfr_get_d(r6904107, MPFR_RNDN);
}

static mpfr_t r6904108, r6904109, r6904110, r6904111, r6904112, r6904113, r6904114, r6904115;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6904108, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r6904109);
        mpfr_init(r6904110);
        mpfr_init_set_str(r6904111, "2.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6904112, "3", 10, MPFR_RNDN);
        mpfr_init(r6904113);
        mpfr_init(r6904114);
        mpfr_init(r6904115);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6904109, x, MPFR_RNDN);
        mpfr_mul(r6904110, r6904108, r6904109, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6904113, r6904109, r6904112, MPFR_RNDN);
        mpfr_mul(r6904114, r6904111, r6904113, MPFR_RNDN);
        mpfr_add(r6904115, r6904110, r6904114, MPFR_RNDN);
        return mpfr_get_d(r6904115, MPFR_RNDN);
}

