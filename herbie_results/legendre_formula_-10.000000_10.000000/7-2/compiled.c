#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r8100285 = -0.5;
        float r8100286 = 1.5;
        float r8100287 = x;
        float r8100288 = r8100287 * r8100287;
        float r8100289 = r8100286 * r8100288;
        float r8100290 = r8100285 + r8100289;
        return r8100290;
}

double f_id(double x) {
        double r8100291 = -0.5;
        double r8100292 = 1.5;
        double r8100293 = x;
        double r8100294 = r8100293 * r8100293;
        double r8100295 = r8100292 * r8100294;
        double r8100296 = r8100291 + r8100295;
        return r8100296;
}


double f_of(float x) {
        float r8100297 = -0.5;
        float r8100298 = 1.5;
        float r8100299 = x;
        float r8100300 = r8100299 * r8100299;
        float r8100301 = r8100298 * r8100300;
        float r8100302 = r8100297 + r8100301;
        return r8100302;
}

double f_od(double x) {
        double r8100303 = -0.5;
        double r8100304 = 1.5;
        double r8100305 = x;
        double r8100306 = r8100305 * r8100305;
        double r8100307 = r8100304 * r8100306;
        double r8100308 = r8100303 + r8100307;
        return r8100308;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8100309, r8100310, r8100311, r8100312, r8100313, r8100314;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100309, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100310, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8100311);
        mpfr_init(r8100312);
        mpfr_init(r8100313);
        mpfr_init(r8100314);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8100311, x, MPFR_RNDN);
        mpfr_mul(r8100312, r8100311, r8100311, MPFR_RNDN);
        mpfr_mul(r8100313, r8100310, r8100312, MPFR_RNDN);
        mpfr_add(r8100314, r8100309, r8100313, MPFR_RNDN);
        return mpfr_get_d(r8100314, MPFR_RNDN);
}

static mpfr_t r8100315, r8100316, r8100317, r8100318, r8100319, r8100320;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100315, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100316, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8100317);
        mpfr_init(r8100318);
        mpfr_init(r8100319);
        mpfr_init(r8100320);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8100317, x, MPFR_RNDN);
        mpfr_mul(r8100318, r8100317, r8100317, MPFR_RNDN);
        mpfr_mul(r8100319, r8100316, r8100318, MPFR_RNDN);
        mpfr_add(r8100320, r8100315, r8100319, MPFR_RNDN);
        return mpfr_get_d(r8100320, MPFR_RNDN);
}

static mpfr_t r8100321, r8100322, r8100323, r8100324, r8100325, r8100326;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100321, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100322, "1.5", 10, MPFR_RNDN);
        mpfr_init(r8100323);
        mpfr_init(r8100324);
        mpfr_init(r8100325);
        mpfr_init(r8100326);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8100323, x, MPFR_RNDN);
        mpfr_mul(r8100324, r8100323, r8100323, MPFR_RNDN);
        mpfr_mul(r8100325, r8100322, r8100324, MPFR_RNDN);
        mpfr_add(r8100326, r8100321, r8100325, MPFR_RNDN);
        return mpfr_get_d(r8100326, MPFR_RNDN);
}

