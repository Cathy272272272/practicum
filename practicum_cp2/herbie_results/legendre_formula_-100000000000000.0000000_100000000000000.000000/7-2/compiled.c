#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6432929 = -0.5;
        float r6432930 = 1.5;
        float r6432931 = x;
        float r6432932 = r6432931 * r6432931;
        float r6432933 = r6432930 * r6432932;
        float r6432934 = r6432929 + r6432933;
        return r6432934;
}

double f_id(double x) {
        double r6432935 = -0.5;
        double r6432936 = 1.5;
        double r6432937 = x;
        double r6432938 = r6432937 * r6432937;
        double r6432939 = r6432936 * r6432938;
        double r6432940 = r6432935 + r6432939;
        return r6432940;
}


double f_of(float x) {
        float r6432941 = -0.5;
        float r6432942 = 1.5;
        float r6432943 = x;
        float r6432944 = r6432943 * r6432943;
        float r6432945 = r6432942 * r6432944;
        float r6432946 = r6432941 + r6432945;
        return r6432946;
}

double f_od(double x) {
        double r6432947 = -0.5;
        double r6432948 = 1.5;
        double r6432949 = x;
        double r6432950 = r6432949 * r6432949;
        double r6432951 = r6432948 * r6432950;
        double r6432952 = r6432947 + r6432951;
        return r6432952;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432953, r6432954, r6432955, r6432956, r6432957, r6432958;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432953, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432954, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6432955);
        mpfr_init(r6432956);
        mpfr_init(r6432957);
        mpfr_init(r6432958);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6432955, x, MPFR_RNDN);
        mpfr_mul(r6432956, r6432955, r6432955, MPFR_RNDN);
        mpfr_mul(r6432957, r6432954, r6432956, MPFR_RNDN);
        mpfr_add(r6432958, r6432953, r6432957, MPFR_RNDN);
        return mpfr_get_d(r6432958, MPFR_RNDN);
}

static mpfr_t r6432959, r6432960, r6432961, r6432962, r6432963, r6432964;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432959, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432960, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6432961);
        mpfr_init(r6432962);
        mpfr_init(r6432963);
        mpfr_init(r6432964);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6432961, x, MPFR_RNDN);
        mpfr_mul(r6432962, r6432961, r6432961, MPFR_RNDN);
        mpfr_mul(r6432963, r6432960, r6432962, MPFR_RNDN);
        mpfr_add(r6432964, r6432959, r6432963, MPFR_RNDN);
        return mpfr_get_d(r6432964, MPFR_RNDN);
}

static mpfr_t r6432965, r6432966, r6432967, r6432968, r6432969, r6432970;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6432965, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432966, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6432967);
        mpfr_init(r6432968);
        mpfr_init(r6432969);
        mpfr_init(r6432970);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6432967, x, MPFR_RNDN);
        mpfr_mul(r6432968, r6432967, r6432967, MPFR_RNDN);
        mpfr_mul(r6432969, r6432966, r6432968, MPFR_RNDN);
        mpfr_add(r6432970, r6432965, r6432969, MPFR_RNDN);
        return mpfr_get_d(r6432970, MPFR_RNDN);
}

