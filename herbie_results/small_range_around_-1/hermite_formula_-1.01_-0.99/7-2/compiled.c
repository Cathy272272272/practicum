#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r60479965 = -2.0;
        float r60479966 = 4.0;
        float r60479967 = x;
        float r60479968 = r60479967 * r60479967;
        float r60479969 = r60479966 * r60479968;
        float r60479970 = r60479965 + r60479969;
        return r60479970;
}

double f_id(double x) {
        double r60479971 = -2.0;
        double r60479972 = 4.0;
        double r60479973 = x;
        double r60479974 = r60479973 * r60479973;
        double r60479975 = r60479972 * r60479974;
        double r60479976 = r60479971 + r60479975;
        return r60479976;
}


double f_of(float x) {
        float r60479977 = -2.0;
        float r60479978 = 4.0;
        float r60479979 = x;
        float r60479980 = r60479979 * r60479979;
        float r60479981 = r60479978 * r60479980;
        float r60479982 = r60479977 + r60479981;
        return r60479982;
}

double f_od(double x) {
        double r60479983 = -2.0;
        double r60479984 = 4.0;
        double r60479985 = x;
        double r60479986 = r60479985 * r60479985;
        double r60479987 = r60479984 * r60479986;
        double r60479988 = r60479983 + r60479987;
        return r60479988;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479989, r60479990, r60479991, r60479992, r60479993, r60479994;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479989, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479990, "4.0", 10, MPFR_RNDN);
        mpfr_init(r60479991);
        mpfr_init(r60479992);
        mpfr_init(r60479993);
        mpfr_init(r60479994);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60479991, x, MPFR_RNDN);
        mpfr_mul(r60479992, r60479991, r60479991, MPFR_RNDN);
        mpfr_mul(r60479993, r60479990, r60479992, MPFR_RNDN);
        mpfr_add(r60479994, r60479989, r60479993, MPFR_RNDN);
        return mpfr_get_d(r60479994, MPFR_RNDN);
}

static mpfr_t r60479995, r60479996, r60479997, r60479998, r60479999, r60480000;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479995, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479996, "4.0", 10, MPFR_RNDN);
        mpfr_init(r60479997);
        mpfr_init(r60479998);
        mpfr_init(r60479999);
        mpfr_init(r60480000);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r60479997, x, MPFR_RNDN);
        mpfr_mul(r60479998, r60479997, r60479997, MPFR_RNDN);
        mpfr_mul(r60479999, r60479996, r60479998, MPFR_RNDN);
        mpfr_add(r60480000, r60479995, r60479999, MPFR_RNDN);
        return mpfr_get_d(r60480000, MPFR_RNDN);
}

static mpfr_t r60480001, r60480002, r60480003, r60480004, r60480005, r60480006;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60480001, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60480002, "4.0", 10, MPFR_RNDN);
        mpfr_init(r60480003);
        mpfr_init(r60480004);
        mpfr_init(r60480005);
        mpfr_init(r60480006);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r60480003, x, MPFR_RNDN);
        mpfr_mul(r60480004, r60480003, r60480003, MPFR_RNDN);
        mpfr_mul(r60480005, r60480002, r60480004, MPFR_RNDN);
        mpfr_add(r60480006, r60480001, r60480005, MPFR_RNDN);
        return mpfr_get_d(r60480006, MPFR_RNDN);
}

