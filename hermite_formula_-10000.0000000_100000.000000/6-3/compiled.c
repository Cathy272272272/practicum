#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r4211201 = -12.0;
        float r4211202 = x;
        float r4211203 = r4211201 * r4211202;
        float r4211204 = 8.0;
        float r4211205 = r4211202 * r4211202;
        float r4211206 = r4211205 * r4211202;
        float r4211207 = r4211204 * r4211206;
        float r4211208 = r4211203 + r4211207;
        return r4211208;
}

double f_id(double x) {
        double r4211209 = -12.0;
        double r4211210 = x;
        double r4211211 = r4211209 * r4211210;
        double r4211212 = 8.0;
        double r4211213 = r4211210 * r4211210;
        double r4211214 = r4211213 * r4211210;
        double r4211215 = r4211212 * r4211214;
        double r4211216 = r4211211 + r4211215;
        return r4211216;
}


double f_of(float x) {
        float r4211217 = -12.0;
        float r4211218 = x;
        float r4211219 = r4211217 * r4211218;
        float r4211220 = 8.0;
        float r4211221 = 3;
        float r4211222 = pow(r4211218, r4211221);
        float r4211223 = r4211220 * r4211222;
        float r4211224 = r4211219 + r4211223;
        return r4211224;
}

double f_od(double x) {
        double r4211225 = -12.0;
        double r4211226 = x;
        double r4211227 = r4211225 * r4211226;
        double r4211228 = 8.0;
        double r4211229 = 3;
        double r4211230 = pow(r4211226, r4211229);
        double r4211231 = r4211228 * r4211230;
        double r4211232 = r4211227 + r4211231;
        return r4211232;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4211233, r4211234, r4211235, r4211236, r4211237, r4211238, r4211239, r4211240;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4211233, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r4211234);
        mpfr_init(r4211235);
        mpfr_init_set_str(r4211236, "8.0", 10, MPFR_RNDN);
        mpfr_init(r4211237);
        mpfr_init(r4211238);
        mpfr_init(r4211239);
        mpfr_init(r4211240);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4211234, x, MPFR_RNDN);
        mpfr_mul(r4211235, r4211233, r4211234, MPFR_RNDN);
        ;
        mpfr_mul(r4211237, r4211234, r4211234, MPFR_RNDN);
        mpfr_mul(r4211238, r4211237, r4211234, MPFR_RNDN);
        mpfr_mul(r4211239, r4211236, r4211238, MPFR_RNDN);
        mpfr_add(r4211240, r4211235, r4211239, MPFR_RNDN);
        return mpfr_get_d(r4211240, MPFR_RNDN);
}

static mpfr_t r4211241, r4211242, r4211243, r4211244, r4211245, r4211246, r4211247, r4211248;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4211241, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r4211242);
        mpfr_init(r4211243);
        mpfr_init_set_str(r4211244, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211245, "3", 10, MPFR_RNDN);
        mpfr_init(r4211246);
        mpfr_init(r4211247);
        mpfr_init(r4211248);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4211242, x, MPFR_RNDN);
        mpfr_mul(r4211243, r4211241, r4211242, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r4211246, r4211242, r4211245, MPFR_RNDN);
        mpfr_mul(r4211247, r4211244, r4211246, MPFR_RNDN);
        mpfr_add(r4211248, r4211243, r4211247, MPFR_RNDN);
        return mpfr_get_d(r4211248, MPFR_RNDN);
}

static mpfr_t r4211249, r4211250, r4211251, r4211252, r4211253, r4211254, r4211255, r4211256;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4211249, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r4211250);
        mpfr_init(r4211251);
        mpfr_init_set_str(r4211252, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211253, "3", 10, MPFR_RNDN);
        mpfr_init(r4211254);
        mpfr_init(r4211255);
        mpfr_init(r4211256);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4211250, x, MPFR_RNDN);
        mpfr_mul(r4211251, r4211249, r4211250, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r4211254, r4211250, r4211253, MPFR_RNDN);
        mpfr_mul(r4211255, r4211252, r4211254, MPFR_RNDN);
        mpfr_add(r4211256, r4211251, r4211255, MPFR_RNDN);
        return mpfr_get_d(r4211256, MPFR_RNDN);
}

