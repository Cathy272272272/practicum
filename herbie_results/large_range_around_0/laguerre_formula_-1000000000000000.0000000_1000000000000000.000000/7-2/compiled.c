#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r10198904 = 1.0;
        float r10198905 = -2.0;
        float r10198906 = x;
        float r10198907 = r10198905 * r10198906;
        float r10198908 = r10198904 + r10198907;
        float r10198909 = 0.5;
        float r10198910 = r10198906 * r10198906;
        float r10198911 = r10198909 * r10198910;
        float r10198912 = r10198908 + r10198911;
        return r10198912;
}

double f_id(double x) {
        double r10198913 = 1.0;
        double r10198914 = -2.0;
        double r10198915 = x;
        double r10198916 = r10198914 * r10198915;
        double r10198917 = r10198913 + r10198916;
        double r10198918 = 0.5;
        double r10198919 = r10198915 * r10198915;
        double r10198920 = r10198918 * r10198919;
        double r10198921 = r10198917 + r10198920;
        return r10198921;
}


double f_of(float x) {
        float r10198922 = 1.0;
        float r10198923 = -2.0;
        float r10198924 = 0.5;
        float r10198925 = x;
        float r10198926 = r10198924 * r10198925;
        float r10198927 = r10198923 + r10198926;
        float r10198928 = r10198927 * r10198925;
        float r10198929 = r10198922 + r10198928;
        return r10198929;
}

double f_od(double x) {
        double r10198930 = 1.0;
        double r10198931 = -2.0;
        double r10198932 = 0.5;
        double r10198933 = x;
        double r10198934 = r10198932 * r10198933;
        double r10198935 = r10198931 + r10198934;
        double r10198936 = r10198935 * r10198933;
        double r10198937 = r10198930 + r10198936;
        return r10198937;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198938, r10198939, r10198940, r10198941, r10198942, r10198943, r10198944, r10198945, r10198946;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198938, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198939, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r10198940);
        mpfr_init(r10198941);
        mpfr_init(r10198942);
        mpfr_init_set_str(r10198943, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10198944);
        mpfr_init(r10198945);
        mpfr_init(r10198946);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198940, x, MPFR_RNDN);
        mpfr_mul(r10198941, r10198939, r10198940, MPFR_RNDN);
        mpfr_add(r10198942, r10198938, r10198941, MPFR_RNDN);
        ;
        mpfr_mul(r10198944, r10198940, r10198940, MPFR_RNDN);
        mpfr_mul(r10198945, r10198943, r10198944, MPFR_RNDN);
        mpfr_add(r10198946, r10198942, r10198945, MPFR_RNDN);
        return mpfr_get_d(r10198946, MPFR_RNDN);
}

static mpfr_t r10198947, r10198948, r10198949, r10198950, r10198951, r10198952, r10198953, r10198954;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198947, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198948, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198949, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10198950);
        mpfr_init(r10198951);
        mpfr_init(r10198952);
        mpfr_init(r10198953);
        mpfr_init(r10198954);
}

double f_fm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10198950, x, MPFR_RNDN);
        mpfr_mul(r10198951, r10198949, r10198950, MPFR_RNDN);
        mpfr_add(r10198952, r10198948, r10198951, MPFR_RNDN);
        mpfr_mul(r10198953, r10198952, r10198950, MPFR_RNDN);
        mpfr_add(r10198954, r10198947, r10198953, MPFR_RNDN);
        return mpfr_get_d(r10198954, MPFR_RNDN);
}

static mpfr_t r10198955, r10198956, r10198957, r10198958, r10198959, r10198960, r10198961, r10198962;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198955, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198956, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198957, "0.5", 10, MPFR_RNDN);
        mpfr_init(r10198958);
        mpfr_init(r10198959);
        mpfr_init(r10198960);
        mpfr_init(r10198961);
        mpfr_init(r10198962);
}

double f_dm(double x) {
        ;
        ;
        ;
        mpfr_set_d(r10198958, x, MPFR_RNDN);
        mpfr_mul(r10198959, r10198957, r10198958, MPFR_RNDN);
        mpfr_add(r10198960, r10198956, r10198959, MPFR_RNDN);
        mpfr_mul(r10198961, r10198960, r10198958, MPFR_RNDN);
        mpfr_add(r10198962, r10198955, r10198961, MPFR_RNDN);
        return mpfr_get_d(r10198962, MPFR_RNDN);
}

