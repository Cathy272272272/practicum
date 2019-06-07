#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r26948891 = -1.5;
        float r26948892 = x;
        float r26948893 = r26948891 * r26948892;
        float r26948894 = 2.5;
        float r26948895 = r26948892 * r26948892;
        float r26948896 = r26948895 * r26948892;
        float r26948897 = r26948894 * r26948896;
        float r26948898 = r26948893 + r26948897;
        return r26948898;
}

double f_id(double x) {
        double r26948899 = -1.5;
        double r26948900 = x;
        double r26948901 = r26948899 * r26948900;
        double r26948902 = 2.5;
        double r26948903 = r26948900 * r26948900;
        double r26948904 = r26948903 * r26948900;
        double r26948905 = r26948902 * r26948904;
        double r26948906 = r26948901 + r26948905;
        return r26948906;
}


double f_of(float x) {
        float r26948907 = -1.5;
        float r26948908 = x;
        float r26948909 = r26948907 * r26948908;
        float r26948910 = exp(r26948909);
        float r26948911 = 2.5;
        float r26948912 = exp(r26948911);
        float r26948913 = 3;
        float r26948914 = pow(r26948908, r26948913);
        float r26948915 = pow(r26948912, r26948914);
        float r26948916 = r26948910 * r26948915;
        float r26948917 = log(r26948916);
        return r26948917;
}

double f_od(double x) {
        double r26948918 = -1.5;
        double r26948919 = x;
        double r26948920 = r26948918 * r26948919;
        double r26948921 = exp(r26948920);
        double r26948922 = 2.5;
        double r26948923 = exp(r26948922);
        double r26948924 = 3;
        double r26948925 = pow(r26948919, r26948924);
        double r26948926 = pow(r26948923, r26948925);
        double r26948927 = r26948921 * r26948926;
        double r26948928 = log(r26948927);
        return r26948928;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948929, r26948930, r26948931, r26948932, r26948933, r26948934, r26948935, r26948936;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948929, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r26948930);
        mpfr_init(r26948931);
        mpfr_init_set_str(r26948932, "2.5", 10, MPFR_RNDN);
        mpfr_init(r26948933);
        mpfr_init(r26948934);
        mpfr_init(r26948935);
        mpfr_init(r26948936);
}

double f_im(double x) {
        ;
        mpfr_set_d(r26948930, x, MPFR_RNDN);
        mpfr_mul(r26948931, r26948929, r26948930, MPFR_RNDN);
        ;
        mpfr_mul(r26948933, r26948930, r26948930, MPFR_RNDN);
        mpfr_mul(r26948934, r26948933, r26948930, MPFR_RNDN);
        mpfr_mul(r26948935, r26948932, r26948934, MPFR_RNDN);
        mpfr_add(r26948936, r26948931, r26948935, MPFR_RNDN);
        return mpfr_get_d(r26948936, MPFR_RNDN);
}

static mpfr_t r26948937, r26948938, r26948939, r26948940, r26948941, r26948942, r26948943, r26948944, r26948945, r26948946, r26948947;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948937, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r26948938);
        mpfr_init(r26948939);
        mpfr_init(r26948940);
        mpfr_init_set_str(r26948941, "2.5", 10, MPFR_RNDN);
        mpfr_init(r26948942);
        mpfr_init_set_str(r26948943, "3", 10, MPFR_RNDN);
        mpfr_init(r26948944);
        mpfr_init(r26948945);
        mpfr_init(r26948946);
        mpfr_init(r26948947);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r26948938, x, MPFR_RNDN);
        mpfr_mul(r26948939, r26948937, r26948938, MPFR_RNDN);
        mpfr_exp(r26948940, r26948939, MPFR_RNDN);
        ;
        mpfr_exp(r26948942, r26948941, MPFR_RNDN);
        ;
        mpfr_pow(r26948944, r26948938, r26948943, MPFR_RNDN);
        mpfr_pow(r26948945, r26948942, r26948944, MPFR_RNDN);
        mpfr_mul(r26948946, r26948940, r26948945, MPFR_RNDN);
        mpfr_log(r26948947, r26948946, MPFR_RNDN);
        return mpfr_get_d(r26948947, MPFR_RNDN);
}

static mpfr_t r26948948, r26948949, r26948950, r26948951, r26948952, r26948953, r26948954, r26948955, r26948956, r26948957, r26948958;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948948, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r26948949);
        mpfr_init(r26948950);
        mpfr_init(r26948951);
        mpfr_init_set_str(r26948952, "2.5", 10, MPFR_RNDN);
        mpfr_init(r26948953);
        mpfr_init_set_str(r26948954, "3", 10, MPFR_RNDN);
        mpfr_init(r26948955);
        mpfr_init(r26948956);
        mpfr_init(r26948957);
        mpfr_init(r26948958);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r26948949, x, MPFR_RNDN);
        mpfr_mul(r26948950, r26948948, r26948949, MPFR_RNDN);
        mpfr_exp(r26948951, r26948950, MPFR_RNDN);
        ;
        mpfr_exp(r26948953, r26948952, MPFR_RNDN);
        ;
        mpfr_pow(r26948955, r26948949, r26948954, MPFR_RNDN);
        mpfr_pow(r26948956, r26948953, r26948955, MPFR_RNDN);
        mpfr_mul(r26948957, r26948951, r26948956, MPFR_RNDN);
        mpfr_log(r26948958, r26948957, MPFR_RNDN);
        return mpfr_get_d(r26948958, MPFR_RNDN);
}

