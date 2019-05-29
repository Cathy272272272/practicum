#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r11626567 = -12.0;
        float r11626568 = x;
        float r11626569 = r11626567 * r11626568;
        float r11626570 = 8.0;
        float r11626571 = r11626568 * r11626568;
        float r11626572 = r11626571 * r11626568;
        float r11626573 = r11626570 * r11626572;
        float r11626574 = r11626569 + r11626573;
        return r11626574;
}

double f_id(double x) {
        double r11626575 = -12.0;
        double r11626576 = x;
        double r11626577 = r11626575 * r11626576;
        double r11626578 = 8.0;
        double r11626579 = r11626576 * r11626576;
        double r11626580 = r11626579 * r11626576;
        double r11626581 = r11626578 * r11626580;
        double r11626582 = r11626577 + r11626581;
        return r11626582;
}


double f_of(float x) {
        float r11626583 = -12.0;
        float r11626584 = x;
        float r11626585 = r11626583 * r11626584;
        float r11626586 = 8.0;
        float r11626587 = r11626584 * r11626584;
        float r11626588 = r11626587 * r11626584;
        float r11626589 = r11626586 * r11626588;
        float r11626590 = r11626585 + r11626589;
        return r11626590;
}

double f_od(double x) {
        double r11626591 = -12.0;
        double r11626592 = x;
        double r11626593 = r11626591 * r11626592;
        double r11626594 = 8.0;
        double r11626595 = r11626592 * r11626592;
        double r11626596 = r11626595 * r11626592;
        double r11626597 = r11626594 * r11626596;
        double r11626598 = r11626593 + r11626597;
        return r11626598;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626599, r11626600, r11626601, r11626602, r11626603, r11626604, r11626605, r11626606;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11626599, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r11626600);
        mpfr_init(r11626601);
        mpfr_init_set_str(r11626602, "8.0", 10, MPFR_RNDN);
        mpfr_init(r11626603);
        mpfr_init(r11626604);
        mpfr_init(r11626605);
        mpfr_init(r11626606);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11626600, x, MPFR_RNDN);
        mpfr_mul(r11626601, r11626599, r11626600, MPFR_RNDN);
        ;
        mpfr_mul(r11626603, r11626600, r11626600, MPFR_RNDN);
        mpfr_mul(r11626604, r11626603, r11626600, MPFR_RNDN);
        mpfr_mul(r11626605, r11626602, r11626604, MPFR_RNDN);
        mpfr_add(r11626606, r11626601, r11626605, MPFR_RNDN);
        return mpfr_get_d(r11626606, MPFR_RNDN);
}

static mpfr_t r11626607, r11626608, r11626609, r11626610, r11626611, r11626612, r11626613, r11626614;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11626607, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r11626608);
        mpfr_init(r11626609);
        mpfr_init_set_str(r11626610, "8.0", 10, MPFR_RNDN);
        mpfr_init(r11626611);
        mpfr_init(r11626612);
        mpfr_init(r11626613);
        mpfr_init(r11626614);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r11626608, x, MPFR_RNDN);
        mpfr_mul(r11626609, r11626607, r11626608, MPFR_RNDN);
        ;
        mpfr_mul(r11626611, r11626608, r11626608, MPFR_RNDN);
        mpfr_mul(r11626612, r11626611, r11626608, MPFR_RNDN);
        mpfr_mul(r11626613, r11626610, r11626612, MPFR_RNDN);
        mpfr_add(r11626614, r11626609, r11626613, MPFR_RNDN);
        return mpfr_get_d(r11626614, MPFR_RNDN);
}

static mpfr_t r11626615, r11626616, r11626617, r11626618, r11626619, r11626620, r11626621, r11626622;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11626615, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r11626616);
        mpfr_init(r11626617);
        mpfr_init_set_str(r11626618, "8.0", 10, MPFR_RNDN);
        mpfr_init(r11626619);
        mpfr_init(r11626620);
        mpfr_init(r11626621);
        mpfr_init(r11626622);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r11626616, x, MPFR_RNDN);
        mpfr_mul(r11626617, r11626615, r11626616, MPFR_RNDN);
        ;
        mpfr_mul(r11626619, r11626616, r11626616, MPFR_RNDN);
        mpfr_mul(r11626620, r11626619, r11626616, MPFR_RNDN);
        mpfr_mul(r11626621, r11626618, r11626620, MPFR_RNDN);
        mpfr_add(r11626622, r11626617, r11626621, MPFR_RNDN);
        return mpfr_get_d(r11626622, MPFR_RNDN);
}

