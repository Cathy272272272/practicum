#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6406435 = -0.5;
        float r6406436 = 1.5;
        float r6406437 = x;
        float r6406438 = r6406437 * r6406437;
        float r6406439 = r6406436 * r6406438;
        float r6406440 = r6406435 + r6406439;
        return r6406440;
}

double f_id(double x) {
        double r6406441 = -0.5;
        double r6406442 = 1.5;
        double r6406443 = x;
        double r6406444 = r6406443 * r6406443;
        double r6406445 = r6406442 * r6406444;
        double r6406446 = r6406441 + r6406445;
        return r6406446;
}


double f_of(float x) {
        float r6406447 = -0.5;
        float r6406448 = 1.5;
        float r6406449 = x;
        float r6406450 = r6406449 * r6406449;
        float r6406451 = r6406448 * r6406450;
        float r6406452 = r6406447 + r6406451;
        return r6406452;
}

double f_od(double x) {
        double r6406453 = -0.5;
        double r6406454 = 1.5;
        double r6406455 = x;
        double r6406456 = r6406455 * r6406455;
        double r6406457 = r6406454 * r6406456;
        double r6406458 = r6406453 + r6406457;
        return r6406458;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6406459, r6406460, r6406461, r6406462, r6406463, r6406464;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6406459, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406460, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6406461);
        mpfr_init(r6406462);
        mpfr_init(r6406463);
        mpfr_init(r6406464);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6406461, x, MPFR_RNDN);
        mpfr_mul(r6406462, r6406461, r6406461, MPFR_RNDN);
        mpfr_mul(r6406463, r6406460, r6406462, MPFR_RNDN);
        mpfr_add(r6406464, r6406459, r6406463, MPFR_RNDN);
        return mpfr_get_d(r6406464, MPFR_RNDN);
}

static mpfr_t r6406465, r6406466, r6406467, r6406468, r6406469, r6406470;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6406465, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406466, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6406467);
        mpfr_init(r6406468);
        mpfr_init(r6406469);
        mpfr_init(r6406470);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6406467, x, MPFR_RNDN);
        mpfr_mul(r6406468, r6406467, r6406467, MPFR_RNDN);
        mpfr_mul(r6406469, r6406466, r6406468, MPFR_RNDN);
        mpfr_add(r6406470, r6406465, r6406469, MPFR_RNDN);
        return mpfr_get_d(r6406470, MPFR_RNDN);
}

static mpfr_t r6406471, r6406472, r6406473, r6406474, r6406475, r6406476;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6406471, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6406472, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6406473);
        mpfr_init(r6406474);
        mpfr_init(r6406475);
        mpfr_init(r6406476);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6406473, x, MPFR_RNDN);
        mpfr_mul(r6406474, r6406473, r6406473, MPFR_RNDN);
        mpfr_mul(r6406475, r6406472, r6406474, MPFR_RNDN);
        mpfr_add(r6406476, r6406471, r6406475, MPFR_RNDN);
        return mpfr_get_d(r6406476, MPFR_RNDN);
}

