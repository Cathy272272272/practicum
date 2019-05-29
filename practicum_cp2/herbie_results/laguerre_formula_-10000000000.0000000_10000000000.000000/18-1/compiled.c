#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r9377274 = 1.0;
        float r9377275 = -1.0;
        float r9377276 = x;
        float r9377277 = r9377275 * r9377276;
        float r9377278 = r9377274 + r9377277;
        return r9377278;
}

double f_id(double x) {
        double r9377279 = 1.0;
        double r9377280 = -1.0;
        double r9377281 = x;
        double r9377282 = r9377280 * r9377281;
        double r9377283 = r9377279 + r9377282;
        return r9377283;
}


double f_of(float x) {
        float r9377284 = 1.0;
        float r9377285 = -1.0;
        float r9377286 = x;
        float r9377287 = r9377285 * r9377286;
        float r9377288 = r9377284 + r9377287;
        return r9377288;
}

double f_od(double x) {
        double r9377289 = 1.0;
        double r9377290 = -1.0;
        double r9377291 = x;
        double r9377292 = r9377290 * r9377291;
        double r9377293 = r9377289 + r9377292;
        return r9377293;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9377294, r9377295, r9377296, r9377297, r9377298;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9377294, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9377295, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9377296);
        mpfr_init(r9377297);
        mpfr_init(r9377298);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9377296, x, MPFR_RNDN);
        mpfr_mul(r9377297, r9377295, r9377296, MPFR_RNDN);
        mpfr_add(r9377298, r9377294, r9377297, MPFR_RNDN);
        return mpfr_get_d(r9377298, MPFR_RNDN);
}

static mpfr_t r9377299, r9377300, r9377301, r9377302, r9377303;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9377299, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9377300, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9377301);
        mpfr_init(r9377302);
        mpfr_init(r9377303);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9377301, x, MPFR_RNDN);
        mpfr_mul(r9377302, r9377300, r9377301, MPFR_RNDN);
        mpfr_add(r9377303, r9377299, r9377302, MPFR_RNDN);
        return mpfr_get_d(r9377303, MPFR_RNDN);
}

static mpfr_t r9377304, r9377305, r9377306, r9377307, r9377308;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9377304, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9377305, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r9377306);
        mpfr_init(r9377307);
        mpfr_init(r9377308);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9377306, x, MPFR_RNDN);
        mpfr_mul(r9377307, r9377305, r9377306, MPFR_RNDN);
        mpfr_add(r9377308, r9377304, r9377307, MPFR_RNDN);
        return mpfr_get_d(r9377308, MPFR_RNDN);
}

