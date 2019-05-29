#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r7405679 = 1.0;
        float r7405680 = x;
        float r7405681 = r7405679 * r7405680;
        return r7405681;
}

double f_id(double x) {
        double r7405682 = 1.0;
        double r7405683 = x;
        double r7405684 = r7405682 * r7405683;
        return r7405684;
}


double f_of(float x) {
        float r7405685 = 1.0;
        float r7405686 = x;
        float r7405687 = r7405685 * r7405686;
        return r7405687;
}

double f_od(double x) {
        double r7405688 = 1.0;
        double r7405689 = x;
        double r7405690 = r7405688 * r7405689;
        return r7405690;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7405691, r7405692, r7405693;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7405691, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7405692);
        mpfr_init(r7405693);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7405692, x, MPFR_RNDN);
        mpfr_mul(r7405693, r7405691, r7405692, MPFR_RNDN);
        return mpfr_get_d(r7405693, MPFR_RNDN);
}

static mpfr_t r7405694, r7405695, r7405696;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7405694, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7405695);
        mpfr_init(r7405696);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7405695, x, MPFR_RNDN);
        mpfr_mul(r7405696, r7405694, r7405695, MPFR_RNDN);
        return mpfr_get_d(r7405696, MPFR_RNDN);
}

static mpfr_t r7405697, r7405698, r7405699;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7405697, "1.0", 10, MPFR_RNDN);
        mpfr_init(r7405698);
        mpfr_init(r7405699);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7405698, x, MPFR_RNDN);
        mpfr_mul(r7405699, r7405697, r7405698, MPFR_RNDN);
        return mpfr_get_d(r7405699, MPFR_RNDN);
}

