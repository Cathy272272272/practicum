#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6896869 = -2.0;
        float r6896870 = 4.0;
        float r6896871 = x;
        float r6896872 = r6896871 * r6896871;
        float r6896873 = r6896870 * r6896872;
        float r6896874 = r6896869 + r6896873;
        return r6896874;
}

double f_id(double x) {
        double r6896875 = -2.0;
        double r6896876 = 4.0;
        double r6896877 = x;
        double r6896878 = r6896877 * r6896877;
        double r6896879 = r6896876 * r6896878;
        double r6896880 = r6896875 + r6896879;
        return r6896880;
}


double f_of(float x) {
        float r6896881 = -2.0;
        float r6896882 = 4.0;
        float r6896883 = x;
        float r6896884 = r6896883 * r6896883;
        float r6896885 = r6896882 * r6896884;
        float r6896886 = r6896881 + r6896885;
        return r6896886;
}

double f_od(double x) {
        double r6896887 = -2.0;
        double r6896888 = 4.0;
        double r6896889 = x;
        double r6896890 = r6896889 * r6896889;
        double r6896891 = r6896888 * r6896890;
        double r6896892 = r6896887 + r6896891;
        return r6896892;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896893, r6896894, r6896895, r6896896, r6896897, r6896898;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896893, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896894, "4.0", 10, MPFR_RNDN);
        mpfr_init(r6896895);
        mpfr_init(r6896896);
        mpfr_init(r6896897);
        mpfr_init(r6896898);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6896895, x, MPFR_RNDN);
        mpfr_mul(r6896896, r6896895, r6896895, MPFR_RNDN);
        mpfr_mul(r6896897, r6896894, r6896896, MPFR_RNDN);
        mpfr_add(r6896898, r6896893, r6896897, MPFR_RNDN);
        return mpfr_get_d(r6896898, MPFR_RNDN);
}

static mpfr_t r6896899, r6896900, r6896901, r6896902, r6896903, r6896904;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896899, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896900, "4.0", 10, MPFR_RNDN);
        mpfr_init(r6896901);
        mpfr_init(r6896902);
        mpfr_init(r6896903);
        mpfr_init(r6896904);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6896901, x, MPFR_RNDN);
        mpfr_mul(r6896902, r6896901, r6896901, MPFR_RNDN);
        mpfr_mul(r6896903, r6896900, r6896902, MPFR_RNDN);
        mpfr_add(r6896904, r6896899, r6896903, MPFR_RNDN);
        return mpfr_get_d(r6896904, MPFR_RNDN);
}

static mpfr_t r6896905, r6896906, r6896907, r6896908, r6896909, r6896910;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896905, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896906, "4.0", 10, MPFR_RNDN);
        mpfr_init(r6896907);
        mpfr_init(r6896908);
        mpfr_init(r6896909);
        mpfr_init(r6896910);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6896907, x, MPFR_RNDN);
        mpfr_mul(r6896908, r6896907, r6896907, MPFR_RNDN);
        mpfr_mul(r6896909, r6896906, r6896908, MPFR_RNDN);
        mpfr_add(r6896910, r6896905, r6896909, MPFR_RNDN);
        return mpfr_get_d(r6896910, MPFR_RNDN);
}

