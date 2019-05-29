#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r9829216 = -2.0;
        float r9829217 = 4.0;
        float r9829218 = x;
        float r9829219 = r9829218 * r9829218;
        float r9829220 = r9829217 * r9829219;
        float r9829221 = r9829216 + r9829220;
        return r9829221;
}

double f_id(double x) {
        double r9829222 = -2.0;
        double r9829223 = 4.0;
        double r9829224 = x;
        double r9829225 = r9829224 * r9829224;
        double r9829226 = r9829223 * r9829225;
        double r9829227 = r9829222 + r9829226;
        return r9829227;
}


double f_of(float x) {
        float r9829228 = -2.0;
        float r9829229 = 4.0;
        float r9829230 = x;
        float r9829231 = r9829230 * r9829230;
        float r9829232 = r9829229 * r9829231;
        float r9829233 = r9829228 + r9829232;
        return r9829233;
}

double f_od(double x) {
        double r9829234 = -2.0;
        double r9829235 = 4.0;
        double r9829236 = x;
        double r9829237 = r9829236 * r9829236;
        double r9829238 = r9829235 * r9829237;
        double r9829239 = r9829234 + r9829238;
        return r9829239;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9829240, r9829241, r9829242, r9829243, r9829244, r9829245;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9829240, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829241, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9829242);
        mpfr_init(r9829243);
        mpfr_init(r9829244);
        mpfr_init(r9829245);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9829242, x, MPFR_RNDN);
        mpfr_mul(r9829243, r9829242, r9829242, MPFR_RNDN);
        mpfr_mul(r9829244, r9829241, r9829243, MPFR_RNDN);
        mpfr_add(r9829245, r9829240, r9829244, MPFR_RNDN);
        return mpfr_get_d(r9829245, MPFR_RNDN);
}

static mpfr_t r9829246, r9829247, r9829248, r9829249, r9829250, r9829251;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9829246, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829247, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9829248);
        mpfr_init(r9829249);
        mpfr_init(r9829250);
        mpfr_init(r9829251);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9829248, x, MPFR_RNDN);
        mpfr_mul(r9829249, r9829248, r9829248, MPFR_RNDN);
        mpfr_mul(r9829250, r9829247, r9829249, MPFR_RNDN);
        mpfr_add(r9829251, r9829246, r9829250, MPFR_RNDN);
        return mpfr_get_d(r9829251, MPFR_RNDN);
}

static mpfr_t r9829252, r9829253, r9829254, r9829255, r9829256, r9829257;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9829252, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9829253, "4.0", 10, MPFR_RNDN);
        mpfr_init(r9829254);
        mpfr_init(r9829255);
        mpfr_init(r9829256);
        mpfr_init(r9829257);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9829254, x, MPFR_RNDN);
        mpfr_mul(r9829255, r9829254, r9829254, MPFR_RNDN);
        mpfr_mul(r9829256, r9829253, r9829255, MPFR_RNDN);
        mpfr_add(r9829257, r9829252, r9829256, MPFR_RNDN);
        return mpfr_get_d(r9829257, MPFR_RNDN);
}

