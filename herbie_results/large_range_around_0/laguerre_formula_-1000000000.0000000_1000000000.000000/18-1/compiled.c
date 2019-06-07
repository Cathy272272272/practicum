#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r13461701 = 1.0;
        float r13461702 = -1.0;
        float r13461703 = x;
        float r13461704 = r13461702 * r13461703;
        float r13461705 = r13461701 + r13461704;
        return r13461705;
}

double f_id(double x) {
        double r13461706 = 1.0;
        double r13461707 = -1.0;
        double r13461708 = x;
        double r13461709 = r13461707 * r13461708;
        double r13461710 = r13461706 + r13461709;
        return r13461710;
}


double f_of(float x) {
        float r13461711 = 1.0;
        float r13461712 = -1.0;
        float r13461713 = x;
        float r13461714 = r13461712 * r13461713;
        float r13461715 = r13461711 + r13461714;
        return r13461715;
}

double f_od(double x) {
        double r13461716 = 1.0;
        double r13461717 = -1.0;
        double r13461718 = x;
        double r13461719 = r13461717 * r13461718;
        double r13461720 = r13461716 + r13461719;
        return r13461720;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r13461721, r13461722, r13461723, r13461724, r13461725;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13461721, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461722, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r13461723);
        mpfr_init(r13461724);
        mpfr_init(r13461725);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r13461723, x, MPFR_RNDN);
        mpfr_mul(r13461724, r13461722, r13461723, MPFR_RNDN);
        mpfr_add(r13461725, r13461721, r13461724, MPFR_RNDN);
        return mpfr_get_d(r13461725, MPFR_RNDN);
}

static mpfr_t r13461726, r13461727, r13461728, r13461729, r13461730;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13461726, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461727, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r13461728);
        mpfr_init(r13461729);
        mpfr_init(r13461730);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r13461728, x, MPFR_RNDN);
        mpfr_mul(r13461729, r13461727, r13461728, MPFR_RNDN);
        mpfr_add(r13461730, r13461726, r13461729, MPFR_RNDN);
        return mpfr_get_d(r13461730, MPFR_RNDN);
}

static mpfr_t r13461731, r13461732, r13461733, r13461734, r13461735;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r13461731, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r13461732, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r13461733);
        mpfr_init(r13461734);
        mpfr_init(r13461735);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r13461733, x, MPFR_RNDN);
        mpfr_mul(r13461734, r13461732, r13461733, MPFR_RNDN);
        mpfr_add(r13461735, r13461731, r13461734, MPFR_RNDN);
        return mpfr_get_d(r13461735, MPFR_RNDN);
}

