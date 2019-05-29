#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r6293876 = 1.0;
        float r6293877 = -3.0;
        float r6293878 = x;
        float r6293879 = r6293877 * r6293878;
        float r6293880 = r6293876 + r6293879;
        float r6293881 = 1.5;
        float r6293882 = r6293878 * r6293878;
        float r6293883 = r6293881 * r6293882;
        float r6293884 = r6293880 + r6293883;
        float r6293885 = -0.166667;
        float r6293886 = r6293882 * r6293878;
        float r6293887 = r6293885 * r6293886;
        float r6293888 = r6293884 + r6293887;
        return r6293888;
}

double f_id(double x) {
        double r6293889 = 1.0;
        double r6293890 = -3.0;
        double r6293891 = x;
        double r6293892 = r6293890 * r6293891;
        double r6293893 = r6293889 + r6293892;
        double r6293894 = 1.5;
        double r6293895 = r6293891 * r6293891;
        double r6293896 = r6293894 * r6293895;
        double r6293897 = r6293893 + r6293896;
        double r6293898 = -0.166667;
        double r6293899 = r6293895 * r6293891;
        double r6293900 = r6293898 * r6293899;
        double r6293901 = r6293897 + r6293900;
        return r6293901;
}


double f_of(float x) {
        float r6293902 = 1.0;
        float r6293903 = -3.0;
        float r6293904 = x;
        float r6293905 = r6293903 * r6293904;
        float r6293906 = r6293902 + r6293905;
        float r6293907 = 1.5;
        float r6293908 = r6293904 * r6293904;
        float r6293909 = r6293907 * r6293908;
        float r6293910 = r6293906 + r6293909;
        float r6293911 = -0.166667;
        float r6293912 = r6293908 * r6293904;
        float r6293913 = r6293911 * r6293912;
        float r6293914 = r6293910 + r6293913;
        return r6293914;
}

double f_od(double x) {
        double r6293915 = 1.0;
        double r6293916 = -3.0;
        double r6293917 = x;
        double r6293918 = r6293916 * r6293917;
        double r6293919 = r6293915 + r6293918;
        double r6293920 = 1.5;
        double r6293921 = r6293917 * r6293917;
        double r6293922 = r6293920 * r6293921;
        double r6293923 = r6293919 + r6293922;
        double r6293924 = -0.166667;
        double r6293925 = r6293921 * r6293917;
        double r6293926 = r6293924 * r6293925;
        double r6293927 = r6293923 + r6293926;
        return r6293927;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6293928, r6293929, r6293930, r6293931, r6293932, r6293933, r6293934, r6293935, r6293936, r6293937, r6293938, r6293939, r6293940;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6293928, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293929, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r6293930);
        mpfr_init(r6293931);
        mpfr_init(r6293932);
        mpfr_init_set_str(r6293933, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6293934);
        mpfr_init(r6293935);
        mpfr_init(r6293936);
        mpfr_init_set_str(r6293937, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r6293938);
        mpfr_init(r6293939);
        mpfr_init(r6293940);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6293930, x, MPFR_RNDN);
        mpfr_mul(r6293931, r6293929, r6293930, MPFR_RNDN);
        mpfr_add(r6293932, r6293928, r6293931, MPFR_RNDN);
        ;
        mpfr_mul(r6293934, r6293930, r6293930, MPFR_RNDN);
        mpfr_mul(r6293935, r6293933, r6293934, MPFR_RNDN);
        mpfr_add(r6293936, r6293932, r6293935, MPFR_RNDN);
        ;
        mpfr_mul(r6293938, r6293934, r6293930, MPFR_RNDN);
        mpfr_mul(r6293939, r6293937, r6293938, MPFR_RNDN);
        mpfr_add(r6293940, r6293936, r6293939, MPFR_RNDN);
        return mpfr_get_d(r6293940, MPFR_RNDN);
}

static mpfr_t r6293941, r6293942, r6293943, r6293944, r6293945, r6293946, r6293947, r6293948, r6293949, r6293950, r6293951, r6293952, r6293953;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6293941, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293942, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r6293943);
        mpfr_init(r6293944);
        mpfr_init(r6293945);
        mpfr_init_set_str(r6293946, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6293947);
        mpfr_init(r6293948);
        mpfr_init(r6293949);
        mpfr_init_set_str(r6293950, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r6293951);
        mpfr_init(r6293952);
        mpfr_init(r6293953);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6293943, x, MPFR_RNDN);
        mpfr_mul(r6293944, r6293942, r6293943, MPFR_RNDN);
        mpfr_add(r6293945, r6293941, r6293944, MPFR_RNDN);
        ;
        mpfr_mul(r6293947, r6293943, r6293943, MPFR_RNDN);
        mpfr_mul(r6293948, r6293946, r6293947, MPFR_RNDN);
        mpfr_add(r6293949, r6293945, r6293948, MPFR_RNDN);
        ;
        mpfr_mul(r6293951, r6293947, r6293943, MPFR_RNDN);
        mpfr_mul(r6293952, r6293950, r6293951, MPFR_RNDN);
        mpfr_add(r6293953, r6293949, r6293952, MPFR_RNDN);
        return mpfr_get_d(r6293953, MPFR_RNDN);
}

static mpfr_t r6293954, r6293955, r6293956, r6293957, r6293958, r6293959, r6293960, r6293961, r6293962, r6293963, r6293964, r6293965, r6293966;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6293954, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6293955, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r6293956);
        mpfr_init(r6293957);
        mpfr_init(r6293958);
        mpfr_init_set_str(r6293959, "1.5", 10, MPFR_RNDN);
        mpfr_init(r6293960);
        mpfr_init(r6293961);
        mpfr_init(r6293962);
        mpfr_init_set_str(r6293963, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r6293964);
        mpfr_init(r6293965);
        mpfr_init(r6293966);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6293956, x, MPFR_RNDN);
        mpfr_mul(r6293957, r6293955, r6293956, MPFR_RNDN);
        mpfr_add(r6293958, r6293954, r6293957, MPFR_RNDN);
        ;
        mpfr_mul(r6293960, r6293956, r6293956, MPFR_RNDN);
        mpfr_mul(r6293961, r6293959, r6293960, MPFR_RNDN);
        mpfr_add(r6293962, r6293958, r6293961, MPFR_RNDN);
        ;
        mpfr_mul(r6293964, r6293960, r6293956, MPFR_RNDN);
        mpfr_mul(r6293965, r6293963, r6293964, MPFR_RNDN);
        mpfr_add(r6293966, r6293962, r6293965, MPFR_RNDN);
        return mpfr_get_d(r6293966, MPFR_RNDN);
}

