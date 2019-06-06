#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r26948959 = -0.5;
        float r26948960 = 1.5;
        float r26948961 = x;
        float r26948962 = r26948961 * r26948961;
        float r26948963 = r26948960 * r26948962;
        float r26948964 = r26948959 + r26948963;
        return r26948964;
}

double f_id(double x) {
        double r26948965 = -0.5;
        double r26948966 = 1.5;
        double r26948967 = x;
        double r26948968 = r26948967 * r26948967;
        double r26948969 = r26948966 * r26948968;
        double r26948970 = r26948965 + r26948969;
        return r26948970;
}


double f_of(float x) {
        float r26948971 = x;
        float r26948972 = 1.5;
        float r26948973 = r26948971 * r26948972;
        float r26948974 = r26948971 * r26948973;
        float r26948975 = -0.5;
        float r26948976 = r26948974 + r26948975;
        float r26948977 = r26948976 * r26948976;
        float r26948978 = r26948971 * r26948971;
        float r26948979 = r26948978 * r26948972;
        float r26948980 = r26948979 + r26948975;
        float r26948981 = r26948977 * r26948980;
        float r26948982 = cbrt(r26948981);
        return r26948982;
}

double f_od(double x) {
        double r26948983 = x;
        double r26948984 = 1.5;
        double r26948985 = r26948983 * r26948984;
        double r26948986 = r26948983 * r26948985;
        double r26948987 = -0.5;
        double r26948988 = r26948986 + r26948987;
        double r26948989 = r26948988 * r26948988;
        double r26948990 = r26948983 * r26948983;
        double r26948991 = r26948990 * r26948984;
        double r26948992 = r26948991 + r26948987;
        double r26948993 = r26948989 * r26948992;
        double r26948994 = cbrt(r26948993);
        return r26948994;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948995, r26948996, r26948997, r26948998, r26948999, r26949000;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948995, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948996, "1.5", 10, MPFR_RNDN);
        mpfr_init(r26948997);
        mpfr_init(r26948998);
        mpfr_init(r26948999);
        mpfr_init(r26949000);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r26948997, x, MPFR_RNDN);
        mpfr_mul(r26948998, r26948997, r26948997, MPFR_RNDN);
        mpfr_mul(r26948999, r26948996, r26948998, MPFR_RNDN);
        mpfr_add(r26949000, r26948995, r26948999, MPFR_RNDN);
        return mpfr_get_d(r26949000, MPFR_RNDN);
}

static mpfr_t r26949001, r26949002, r26949003, r26949004, r26949005, r26949006, r26949007, r26949008, r26949009, r26949010, r26949011, r26949012;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26949001);
        mpfr_init_set_str(r26949002, "1.5", 10, MPFR_RNDN);
        mpfr_init(r26949003);
        mpfr_init(r26949004);
        mpfr_init_set_str(r26949005, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r26949006);
        mpfr_init(r26949007);
        mpfr_init(r26949008);
        mpfr_init(r26949009);
        mpfr_init(r26949010);
        mpfr_init(r26949011);
        mpfr_init(r26949012);
}

double f_fm(double x) {
        mpfr_set_d(r26949001, x, MPFR_RNDN);
        ;
        mpfr_mul(r26949003, r26949001, r26949002, MPFR_RNDN);
        mpfr_mul(r26949004, r26949001, r26949003, MPFR_RNDN);
        ;
        mpfr_add(r26949006, r26949004, r26949005, MPFR_RNDN);
        mpfr_mul(r26949007, r26949006, r26949006, MPFR_RNDN);
        mpfr_mul(r26949008, r26949001, r26949001, MPFR_RNDN);
        mpfr_mul(r26949009, r26949008, r26949002, MPFR_RNDN);
        mpfr_add(r26949010, r26949009, r26949005, MPFR_RNDN);
        mpfr_mul(r26949011, r26949007, r26949010, MPFR_RNDN);
        mpfr_cbrt(r26949012, r26949011, MPFR_RNDN);
        return mpfr_get_d(r26949012, MPFR_RNDN);
}

static mpfr_t r26949013, r26949014, r26949015, r26949016, r26949017, r26949018, r26949019, r26949020, r26949021, r26949022, r26949023, r26949024;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r26949013);
        mpfr_init_set_str(r26949014, "1.5", 10, MPFR_RNDN);
        mpfr_init(r26949015);
        mpfr_init(r26949016);
        mpfr_init_set_str(r26949017, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r26949018);
        mpfr_init(r26949019);
        mpfr_init(r26949020);
        mpfr_init(r26949021);
        mpfr_init(r26949022);
        mpfr_init(r26949023);
        mpfr_init(r26949024);
}

double f_dm(double x) {
        mpfr_set_d(r26949013, x, MPFR_RNDN);
        ;
        mpfr_mul(r26949015, r26949013, r26949014, MPFR_RNDN);
        mpfr_mul(r26949016, r26949013, r26949015, MPFR_RNDN);
        ;
        mpfr_add(r26949018, r26949016, r26949017, MPFR_RNDN);
        mpfr_mul(r26949019, r26949018, r26949018, MPFR_RNDN);
        mpfr_mul(r26949020, r26949013, r26949013, MPFR_RNDN);
        mpfr_mul(r26949021, r26949020, r26949014, MPFR_RNDN);
        mpfr_add(r26949022, r26949021, r26949017, MPFR_RNDN);
        mpfr_mul(r26949023, r26949019, r26949022, MPFR_RNDN);
        mpfr_cbrt(r26949024, r26949023, MPFR_RNDN);
        return mpfr_get_d(r26949024, MPFR_RNDN);
}

