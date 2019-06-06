#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r33707930 = -1.5;
        float r33707931 = x;
        float r33707932 = r33707930 * r33707931;
        float r33707933 = 2.5;
        float r33707934 = r33707931 * r33707931;
        float r33707935 = r33707934 * r33707931;
        float r33707936 = r33707933 * r33707935;
        float r33707937 = r33707932 + r33707936;
        return r33707937;
}

double f_id(double x) {
        double r33707938 = -1.5;
        double r33707939 = x;
        double r33707940 = r33707938 * r33707939;
        double r33707941 = 2.5;
        double r33707942 = r33707939 * r33707939;
        double r33707943 = r33707942 * r33707939;
        double r33707944 = r33707941 * r33707943;
        double r33707945 = r33707940 + r33707944;
        return r33707945;
}


double f_of(float x) {
        float r33707946 = -1.5;
        float r33707947 = exp(r33707946);
        float r33707948 = 2.5;
        float r33707949 = exp(r33707948);
        float r33707950 = x;
        float r33707951 = pow(r33707949, r33707950);
        float r33707952 = pow(r33707951, r33707950);
        float r33707953 = r33707947 * r33707952;
        float r33707954 = pow(r33707953, r33707950);
        float r33707955 = log(r33707954);
        return r33707955;
}

double f_od(double x) {
        double r33707956 = -1.5;
        double r33707957 = exp(r33707956);
        double r33707958 = 2.5;
        double r33707959 = exp(r33707958);
        double r33707960 = x;
        double r33707961 = pow(r33707959, r33707960);
        double r33707962 = pow(r33707961, r33707960);
        double r33707963 = r33707957 * r33707962;
        double r33707964 = pow(r33707963, r33707960);
        double r33707965 = log(r33707964);
        return r33707965;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707966, r33707967, r33707968, r33707969, r33707970, r33707971, r33707972, r33707973;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707966, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r33707967);
        mpfr_init(r33707968);
        mpfr_init_set_str(r33707969, "2.5", 10, MPFR_RNDN);
        mpfr_init(r33707970);
        mpfr_init(r33707971);
        mpfr_init(r33707972);
        mpfr_init(r33707973);
}

double f_im(double x) {
        ;
        mpfr_set_d(r33707967, x, MPFR_RNDN);
        mpfr_mul(r33707968, r33707966, r33707967, MPFR_RNDN);
        ;
        mpfr_mul(r33707970, r33707967, r33707967, MPFR_RNDN);
        mpfr_mul(r33707971, r33707970, r33707967, MPFR_RNDN);
        mpfr_mul(r33707972, r33707969, r33707971, MPFR_RNDN);
        mpfr_add(r33707973, r33707968, r33707972, MPFR_RNDN);
        return mpfr_get_d(r33707973, MPFR_RNDN);
}

static mpfr_t r33707974, r33707975, r33707976, r33707977, r33707978, r33707979, r33707980, r33707981, r33707982, r33707983;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707974, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r33707975);
        mpfr_init_set_str(r33707976, "2.5", 10, MPFR_RNDN);
        mpfr_init(r33707977);
        mpfr_init(r33707978);
        mpfr_init(r33707979);
        mpfr_init(r33707980);
        mpfr_init(r33707981);
        mpfr_init(r33707982);
        mpfr_init(r33707983);
}

double f_fm(double x) {
        ;
        mpfr_exp(r33707975, r33707974, MPFR_RNDN);
        ;
        mpfr_exp(r33707977, r33707976, MPFR_RNDN);
        mpfr_set_d(r33707978, x, MPFR_RNDN);
        mpfr_pow(r33707979, r33707977, r33707978, MPFR_RNDN);
        mpfr_pow(r33707980, r33707979, r33707978, MPFR_RNDN);
        mpfr_mul(r33707981, r33707975, r33707980, MPFR_RNDN);
        mpfr_pow(r33707982, r33707981, r33707978, MPFR_RNDN);
        mpfr_log(r33707983, r33707982, MPFR_RNDN);
        return mpfr_get_d(r33707983, MPFR_RNDN);
}

static mpfr_t r33707984, r33707985, r33707986, r33707987, r33707988, r33707989, r33707990, r33707991, r33707992, r33707993;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707984, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r33707985);
        mpfr_init_set_str(r33707986, "2.5", 10, MPFR_RNDN);
        mpfr_init(r33707987);
        mpfr_init(r33707988);
        mpfr_init(r33707989);
        mpfr_init(r33707990);
        mpfr_init(r33707991);
        mpfr_init(r33707992);
        mpfr_init(r33707993);
}

double f_dm(double x) {
        ;
        mpfr_exp(r33707985, r33707984, MPFR_RNDN);
        ;
        mpfr_exp(r33707987, r33707986, MPFR_RNDN);
        mpfr_set_d(r33707988, x, MPFR_RNDN);
        mpfr_pow(r33707989, r33707987, r33707988, MPFR_RNDN);
        mpfr_pow(r33707990, r33707989, r33707988, MPFR_RNDN);
        mpfr_mul(r33707991, r33707985, r33707990, MPFR_RNDN);
        mpfr_pow(r33707992, r33707991, r33707988, MPFR_RNDN);
        mpfr_log(r33707993, r33707992, MPFR_RNDN);
        return mpfr_get_d(r33707993, MPFR_RNDN);
}

