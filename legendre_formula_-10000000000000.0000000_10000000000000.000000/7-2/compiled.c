#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7514695 = -0.5;
        float r7514696 = 1.5;
        float r7514697 = x;
        float r7514698 = r7514697 * r7514697;
        float r7514699 = r7514696 * r7514698;
        float r7514700 = r7514695 + r7514699;
        return r7514700;
}

double f_id(double x) {
        double r7514701 = -0.5;
        double r7514702 = 1.5;
        double r7514703 = x;
        double r7514704 = r7514703 * r7514703;
        double r7514705 = r7514702 * r7514704;
        double r7514706 = r7514701 + r7514705;
        return r7514706;
}


double f_of(float x) {
        float r7514707 = -0.5;
        float r7514708 = 1.5;
        float r7514709 = x;
        float r7514710 = r7514709 * r7514709;
        float r7514711 = r7514708 * r7514710;
        float r7514712 = r7514707 + r7514711;
        return r7514712;
}

double f_od(double x) {
        double r7514713 = -0.5;
        double r7514714 = 1.5;
        double r7514715 = x;
        double r7514716 = r7514715 * r7514715;
        double r7514717 = r7514714 * r7514716;
        double r7514718 = r7514713 + r7514717;
        return r7514718;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7514719, r7514720, r7514721, r7514722, r7514723, r7514724;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7514719, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514720, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7514721);
        mpfr_init(r7514722);
        mpfr_init(r7514723);
        mpfr_init(r7514724);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7514721, x, MPFR_RNDN);
        mpfr_mul(r7514722, r7514721, r7514721, MPFR_RNDN);
        mpfr_mul(r7514723, r7514720, r7514722, MPFR_RNDN);
        mpfr_add(r7514724, r7514719, r7514723, MPFR_RNDN);
        return mpfr_get_d(r7514724, MPFR_RNDN);
}

static mpfr_t r7514725, r7514726, r7514727, r7514728, r7514729, r7514730;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7514725, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514726, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7514727);
        mpfr_init(r7514728);
        mpfr_init(r7514729);
        mpfr_init(r7514730);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7514727, x, MPFR_RNDN);
        mpfr_mul(r7514728, r7514727, r7514727, MPFR_RNDN);
        mpfr_mul(r7514729, r7514726, r7514728, MPFR_RNDN);
        mpfr_add(r7514730, r7514725, r7514729, MPFR_RNDN);
        return mpfr_get_d(r7514730, MPFR_RNDN);
}

static mpfr_t r7514731, r7514732, r7514733, r7514734, r7514735, r7514736;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7514731, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514732, "1.5", 10, MPFR_RNDN);
        mpfr_init(r7514733);
        mpfr_init(r7514734);
        mpfr_init(r7514735);
        mpfr_init(r7514736);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7514733, x, MPFR_RNDN);
        mpfr_mul(r7514734, r7514733, r7514733, MPFR_RNDN);
        mpfr_mul(r7514735, r7514732, r7514734, MPFR_RNDN);
        mpfr_add(r7514736, r7514731, r7514735, MPFR_RNDN);
        return mpfr_get_d(r7514736, MPFR_RNDN);
}

