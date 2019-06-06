#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r60479889 = -12.0;
        float r60479890 = x;
        float r60479891 = r60479889 * r60479890;
        float r60479892 = 8.0;
        float r60479893 = r60479890 * r60479890;
        float r60479894 = r60479893 * r60479890;
        float r60479895 = r60479892 * r60479894;
        float r60479896 = r60479891 + r60479895;
        return r60479896;
}

double f_id(double x) {
        double r60479897 = -12.0;
        double r60479898 = x;
        double r60479899 = r60479897 * r60479898;
        double r60479900 = 8.0;
        double r60479901 = r60479898 * r60479898;
        double r60479902 = r60479901 * r60479898;
        double r60479903 = r60479900 * r60479902;
        double r60479904 = r60479899 + r60479903;
        return r60479904;
}


double f_of(float x) {
        float r60479905 = -12.0;
        float r60479906 = exp(r60479905);
        float r60479907 = x;
        float r60479908 = pow(r60479906, r60479907);
        float r60479909 = 8.0;
        float r60479910 = exp(r60479909);
        float r60479911 = sqrt(r60479910);
        float r60479912 = 3;
        float r60479913 = pow(r60479907, r60479912);
        float r60479914 = pow(r60479911, r60479913);
        float r60479915 = r60479914 * r60479914;
        float r60479916 = r60479908 * r60479915;
        float r60479917 = log(r60479916);
        return r60479917;
}

double f_od(double x) {
        double r60479918 = -12.0;
        double r60479919 = exp(r60479918);
        double r60479920 = x;
        double r60479921 = pow(r60479919, r60479920);
        double r60479922 = 8.0;
        double r60479923 = exp(r60479922);
        double r60479924 = sqrt(r60479923);
        double r60479925 = 3;
        double r60479926 = pow(r60479920, r60479925);
        double r60479927 = pow(r60479924, r60479926);
        double r60479928 = r60479927 * r60479927;
        double r60479929 = r60479921 * r60479928;
        double r60479930 = log(r60479929);
        return r60479930;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479931, r60479932, r60479933, r60479934, r60479935, r60479936, r60479937, r60479938;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479931, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r60479932);
        mpfr_init(r60479933);
        mpfr_init_set_str(r60479934, "8.0", 10, MPFR_RNDN);
        mpfr_init(r60479935);
        mpfr_init(r60479936);
        mpfr_init(r60479937);
        mpfr_init(r60479938);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60479932, x, MPFR_RNDN);
        mpfr_mul(r60479933, r60479931, r60479932, MPFR_RNDN);
        ;
        mpfr_mul(r60479935, r60479932, r60479932, MPFR_RNDN);
        mpfr_mul(r60479936, r60479935, r60479932, MPFR_RNDN);
        mpfr_mul(r60479937, r60479934, r60479936, MPFR_RNDN);
        mpfr_add(r60479938, r60479933, r60479937, MPFR_RNDN);
        return mpfr_get_d(r60479938, MPFR_RNDN);
}

static mpfr_t r60479939, r60479940, r60479941, r60479942, r60479943, r60479944, r60479945, r60479946, r60479947, r60479948, r60479949, r60479950, r60479951;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479939, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r60479940);
        mpfr_init(r60479941);
        mpfr_init(r60479942);
        mpfr_init_set_str(r60479943, "8.0", 10, MPFR_RNDN);
        mpfr_init(r60479944);
        mpfr_init(r60479945);
        mpfr_init_set_str(r60479946, "3", 10, MPFR_RNDN);
        mpfr_init(r60479947);
        mpfr_init(r60479948);
        mpfr_init(r60479949);
        mpfr_init(r60479950);
        mpfr_init(r60479951);
}

double f_fm(double x) {
        ;
        mpfr_exp(r60479940, r60479939, MPFR_RNDN);
        mpfr_set_d(r60479941, x, MPFR_RNDN);
        mpfr_pow(r60479942, r60479940, r60479941, MPFR_RNDN);
        ;
        mpfr_exp(r60479944, r60479943, MPFR_RNDN);
        mpfr_sqrt(r60479945, r60479944, MPFR_RNDN);
        ;
        mpfr_pow(r60479947, r60479941, r60479946, MPFR_RNDN);
        mpfr_pow(r60479948, r60479945, r60479947, MPFR_RNDN);
        mpfr_mul(r60479949, r60479948, r60479948, MPFR_RNDN);
        mpfr_mul(r60479950, r60479942, r60479949, MPFR_RNDN);
        mpfr_log(r60479951, r60479950, MPFR_RNDN);
        return mpfr_get_d(r60479951, MPFR_RNDN);
}

static mpfr_t r60479952, r60479953, r60479954, r60479955, r60479956, r60479957, r60479958, r60479959, r60479960, r60479961, r60479962, r60479963, r60479964;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479952, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r60479953);
        mpfr_init(r60479954);
        mpfr_init(r60479955);
        mpfr_init_set_str(r60479956, "8.0", 10, MPFR_RNDN);
        mpfr_init(r60479957);
        mpfr_init(r60479958);
        mpfr_init_set_str(r60479959, "3", 10, MPFR_RNDN);
        mpfr_init(r60479960);
        mpfr_init(r60479961);
        mpfr_init(r60479962);
        mpfr_init(r60479963);
        mpfr_init(r60479964);
}

double f_dm(double x) {
        ;
        mpfr_exp(r60479953, r60479952, MPFR_RNDN);
        mpfr_set_d(r60479954, x, MPFR_RNDN);
        mpfr_pow(r60479955, r60479953, r60479954, MPFR_RNDN);
        ;
        mpfr_exp(r60479957, r60479956, MPFR_RNDN);
        mpfr_sqrt(r60479958, r60479957, MPFR_RNDN);
        ;
        mpfr_pow(r60479960, r60479954, r60479959, MPFR_RNDN);
        mpfr_pow(r60479961, r60479958, r60479960, MPFR_RNDN);
        mpfr_mul(r60479962, r60479961, r60479961, MPFR_RNDN);
        mpfr_mul(r60479963, r60479955, r60479962, MPFR_RNDN);
        mpfr_log(r60479964, r60479963, MPFR_RNDN);
        return mpfr_get_d(r60479964, MPFR_RNDN);
}

