#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r6898888 = 2.0;
        float r6898889 = x;
        float r6898890 = r6898888 * r6898889;
        return r6898890;
}

double f_id(double x) {
        double r6898891 = 2.0;
        double r6898892 = x;
        double r6898893 = r6898891 * r6898892;
        return r6898893;
}


double f_of(float x) {
        float r6898894 = 2.0;
        float r6898895 = x;
        float r6898896 = r6898894 * r6898895;
        return r6898896;
}

double f_od(double x) {
        double r6898897 = 2.0;
        double r6898898 = x;
        double r6898899 = r6898897 * r6898898;
        return r6898899;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6898900, r6898901, r6898902;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6898900, "2.0", 10, MPFR_RNDN);
        mpfr_init(r6898901);
        mpfr_init(r6898902);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6898901, x, MPFR_RNDN);
        mpfr_mul(r6898902, r6898900, r6898901, MPFR_RNDN);
        return mpfr_get_d(r6898902, MPFR_RNDN);
}

static mpfr_t r6898903, r6898904, r6898905;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6898903, "2.0", 10, MPFR_RNDN);
        mpfr_init(r6898904);
        mpfr_init(r6898905);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6898904, x, MPFR_RNDN);
        mpfr_mul(r6898905, r6898903, r6898904, MPFR_RNDN);
        return mpfr_get_d(r6898905, MPFR_RNDN);
}

static mpfr_t r6898906, r6898907, r6898908;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6898906, "2.0", 10, MPFR_RNDN);
        mpfr_init(r6898907);
        mpfr_init(r6898908);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6898907, x, MPFR_RNDN);
        mpfr_mul(r6898908, r6898906, r6898907, MPFR_RNDN);
        return mpfr_get_d(r6898908, MPFR_RNDN);
}

