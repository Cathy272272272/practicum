#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6903888 = 1.875;
        float r6903889 = x;
        float r6903890 = r6903888 * r6903889;
        float r6903891 = -8.75;
        float r6903892 = r6903889 * r6903889;
        float r6903893 = r6903892 * r6903889;
        float r6903894 = r6903891 * r6903893;
        float r6903895 = r6903890 + r6903894;
        float r6903896 = 7.875;
        float r6903897 = r6903893 * r6903889;
        float r6903898 = r6903897 * r6903889;
        float r6903899 = r6903896 * r6903898;
        float r6903900 = r6903895 + r6903899;
        return r6903900;
}

double f_id(double x) {
        double r6903901 = 1.875;
        double r6903902 = x;
        double r6903903 = r6903901 * r6903902;
        double r6903904 = -8.75;
        double r6903905 = r6903902 * r6903902;
        double r6903906 = r6903905 * r6903902;
        double r6903907 = r6903904 * r6903906;
        double r6903908 = r6903903 + r6903907;
        double r6903909 = 7.875;
        double r6903910 = r6903906 * r6903902;
        double r6903911 = r6903910 * r6903902;
        double r6903912 = r6903909 * r6903911;
        double r6903913 = r6903908 + r6903912;
        return r6903913;
}


double f_of(float x) {
        float r6903914 = x;
        float r6903915 = 5;
        float r6903916 = pow(r6903914, r6903915);
        float r6903917 = 7.875;
        float r6903918 = r6903916 * r6903917;
        float r6903919 = r6903914 * r6903914;
        float r6903920 = -8.75;
        float r6903921 = r6903920 * r6903914;
        float r6903922 = r6903919 * r6903921;
        float r6903923 = r6903918 + r6903922;
        float r6903924 = 1.875;
        float r6903925 = r6903924 * r6903914;
        float r6903926 = r6903923 + r6903925;
        return r6903926;
}

double f_od(double x) {
        double r6903927 = x;
        double r6903928 = 5;
        double r6903929 = pow(r6903927, r6903928);
        double r6903930 = 7.875;
        double r6903931 = r6903929 * r6903930;
        double r6903932 = r6903927 * r6903927;
        double r6903933 = -8.75;
        double r6903934 = r6903933 * r6903927;
        double r6903935 = r6903932 * r6903934;
        double r6903936 = r6903931 + r6903935;
        double r6903937 = 1.875;
        double r6903938 = r6903937 * r6903927;
        double r6903939 = r6903936 + r6903938;
        return r6903939;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6903940, r6903941, r6903942, r6903943, r6903944, r6903945, r6903946, r6903947, r6903948, r6903949, r6903950, r6903951, r6903952;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6903940, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6903941);
        mpfr_init(r6903942);
        mpfr_init_set_str(r6903943, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6903944);
        mpfr_init(r6903945);
        mpfr_init(r6903946);
        mpfr_init(r6903947);
        mpfr_init_set_str(r6903948, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6903949);
        mpfr_init(r6903950);
        mpfr_init(r6903951);
        mpfr_init(r6903952);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6903941, x, MPFR_RNDN);
        mpfr_mul(r6903942, r6903940, r6903941, MPFR_RNDN);
        ;
        mpfr_mul(r6903944, r6903941, r6903941, MPFR_RNDN);
        mpfr_mul(r6903945, r6903944, r6903941, MPFR_RNDN);
        mpfr_mul(r6903946, r6903943, r6903945, MPFR_RNDN);
        mpfr_add(r6903947, r6903942, r6903946, MPFR_RNDN);
        ;
        mpfr_mul(r6903949, r6903945, r6903941, MPFR_RNDN);
        mpfr_mul(r6903950, r6903949, r6903941, MPFR_RNDN);
        mpfr_mul(r6903951, r6903948, r6903950, MPFR_RNDN);
        mpfr_add(r6903952, r6903947, r6903951, MPFR_RNDN);
        return mpfr_get_d(r6903952, MPFR_RNDN);
}

static mpfr_t r6903953, r6903954, r6903955, r6903956, r6903957, r6903958, r6903959, r6903960, r6903961, r6903962, r6903963, r6903964, r6903965;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6903953);
        mpfr_init_set_str(r6903954, "5", 10, MPFR_RNDN);
        mpfr_init(r6903955);
        mpfr_init_set_str(r6903956, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6903957);
        mpfr_init(r6903958);
        mpfr_init_set_str(r6903959, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6903960);
        mpfr_init(r6903961);
        mpfr_init(r6903962);
        mpfr_init_set_str(r6903963, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6903964);
        mpfr_init(r6903965);
}

double f_fm(double x) {
        mpfr_set_d(r6903953, x, MPFR_RNDN);
        ;
        mpfr_pow(r6903955, r6903953, r6903954, MPFR_RNDN);
        ;
        mpfr_mul(r6903957, r6903955, r6903956, MPFR_RNDN);
        mpfr_mul(r6903958, r6903953, r6903953, MPFR_RNDN);
        ;
        mpfr_mul(r6903960, r6903959, r6903953, MPFR_RNDN);
        mpfr_mul(r6903961, r6903958, r6903960, MPFR_RNDN);
        mpfr_add(r6903962, r6903957, r6903961, MPFR_RNDN);
        ;
        mpfr_mul(r6903964, r6903963, r6903953, MPFR_RNDN);
        mpfr_add(r6903965, r6903962, r6903964, MPFR_RNDN);
        return mpfr_get_d(r6903965, MPFR_RNDN);
}

static mpfr_t r6903966, r6903967, r6903968, r6903969, r6903970, r6903971, r6903972, r6903973, r6903974, r6903975, r6903976, r6903977, r6903978;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6903966);
        mpfr_init_set_str(r6903967, "5", 10, MPFR_RNDN);
        mpfr_init(r6903968);
        mpfr_init_set_str(r6903969, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6903970);
        mpfr_init(r6903971);
        mpfr_init_set_str(r6903972, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6903973);
        mpfr_init(r6903974);
        mpfr_init(r6903975);
        mpfr_init_set_str(r6903976, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6903977);
        mpfr_init(r6903978);
}

double f_dm(double x) {
        mpfr_set_d(r6903966, x, MPFR_RNDN);
        ;
        mpfr_pow(r6903968, r6903966, r6903967, MPFR_RNDN);
        ;
        mpfr_mul(r6903970, r6903968, r6903969, MPFR_RNDN);
        mpfr_mul(r6903971, r6903966, r6903966, MPFR_RNDN);
        ;
        mpfr_mul(r6903973, r6903972, r6903966, MPFR_RNDN);
        mpfr_mul(r6903974, r6903971, r6903973, MPFR_RNDN);
        mpfr_add(r6903975, r6903970, r6903974, MPFR_RNDN);
        ;
        mpfr_mul(r6903977, r6903976, r6903966, MPFR_RNDN);
        mpfr_add(r6903978, r6903975, r6903977, MPFR_RNDN);
        return mpfr_get_d(r6903978, MPFR_RNDN);
}

