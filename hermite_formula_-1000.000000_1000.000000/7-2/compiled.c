#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r12290217 = -2.0;
        float r12290218 = 4.0;
        float r12290219 = x;
        float r12290220 = r12290219 * r12290219;
        float r12290221 = r12290218 * r12290220;
        float r12290222 = r12290217 + r12290221;
        return r12290222;
}

double f_id(double x) {
        double r12290223 = -2.0;
        double r12290224 = 4.0;
        double r12290225 = x;
        double r12290226 = r12290225 * r12290225;
        double r12290227 = r12290224 * r12290226;
        double r12290228 = r12290223 + r12290227;
        return r12290228;
}


double f_of(float x) {
        float r12290229 = -2.0;
        float r12290230 = 4.0;
        float r12290231 = x;
        float r12290232 = r12290231 * r12290231;
        float r12290233 = r12290230 * r12290232;
        float r12290234 = r12290229 + r12290233;
        return r12290234;
}

double f_od(double x) {
        double r12290235 = -2.0;
        double r12290236 = 4.0;
        double r12290237 = x;
        double r12290238 = r12290237 * r12290237;
        double r12290239 = r12290236 * r12290238;
        double r12290240 = r12290235 + r12290239;
        return r12290240;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12290241, r12290242, r12290243, r12290244, r12290245, r12290246;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12290241, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290242, "4.0", 10, MPFR_RNDN);
        mpfr_init(r12290243);
        mpfr_init(r12290244);
        mpfr_init(r12290245);
        mpfr_init(r12290246);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r12290243, x, MPFR_RNDN);
        mpfr_mul(r12290244, r12290243, r12290243, MPFR_RNDN);
        mpfr_mul(r12290245, r12290242, r12290244, MPFR_RNDN);
        mpfr_add(r12290246, r12290241, r12290245, MPFR_RNDN);
        return mpfr_get_d(r12290246, MPFR_RNDN);
}

static mpfr_t r12290247, r12290248, r12290249, r12290250, r12290251, r12290252;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12290247, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290248, "4.0", 10, MPFR_RNDN);
        mpfr_init(r12290249);
        mpfr_init(r12290250);
        mpfr_init(r12290251);
        mpfr_init(r12290252);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r12290249, x, MPFR_RNDN);
        mpfr_mul(r12290250, r12290249, r12290249, MPFR_RNDN);
        mpfr_mul(r12290251, r12290248, r12290250, MPFR_RNDN);
        mpfr_add(r12290252, r12290247, r12290251, MPFR_RNDN);
        return mpfr_get_d(r12290252, MPFR_RNDN);
}

static mpfr_t r12290253, r12290254, r12290255, r12290256, r12290257, r12290258;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12290253, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290254, "4.0", 10, MPFR_RNDN);
        mpfr_init(r12290255);
        mpfr_init(r12290256);
        mpfr_init(r12290257);
        mpfr_init(r12290258);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r12290255, x, MPFR_RNDN);
        mpfr_mul(r12290256, r12290255, r12290255, MPFR_RNDN);
        mpfr_mul(r12290257, r12290254, r12290256, MPFR_RNDN);
        mpfr_add(r12290258, r12290253, r12290257, MPFR_RNDN);
        return mpfr_get_d(r12290258, MPFR_RNDN);
}

