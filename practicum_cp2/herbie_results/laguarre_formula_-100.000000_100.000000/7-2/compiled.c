#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r6293967 = 1.0;
        float r6293968 = -2.0;
        float r6293969 = x;
        float r6293970 = r6293968 * r6293969;
        float r6293971 = r6293967 + r6293970;
        float r6293972 = 0.5;
        float r6293973 = r6293969 * r6293969;
        float r6293974 = r6293972 * r6293973;
        float r6293975 = r6293971 + r6293974;
        return r6293975;
}

double f_id(double x) {
        double r6293976 = 1.0;
        double r6293977 = -2.0;
        double r6293978 = x;
        double r6293979 = r6293977 * r6293978;
        double r6293980 = r6293976 + r6293979;
        double r6293981 = 0.5;
        double r6293982 = r6293978 * r6293978;
        double r6293983 = r6293981 * r6293982;
        double r6293984 = r6293980 + r6293983;
        return r6293984;
}


double f_of(float x) {
        float r6293985 = 1.0;
        float r6293986 = -2.0;
        float r6293987 = x;
        float r6293988 = r6293986 * r6293987;
        float r6293989 = r6293985 + r6293988;
        float r6293990 = 0.5;
        float r6293991 = r6293987 * r6293987;
        float r6293992 = r6293990 * r6293991;
        float r6293993 = sqrt(r6293992);
        float r6293994 = r6293993 * r6293993;
        float r6293995 = r6293989 + r6293994;
        return r6293995;
}

double f_od(double x) {
        double r6293996 = 1.0;
        double r6293997 = -2.0;
        double r6293998 = x;
        double r6293999 = r6293997 * r6293998;
        double r6294000 = r6293996 + r6293999;
        double r6294001 = 0.5;
        double r6294002 = r6293998 * r6293998;
        double r6294003 = r6294001 * r6294002;
        double r6294004 = sqrt(r6294003);
        double r6294005 = r6294004 * r6294004;
        double r6294006 = r6294000 + r6294005;
        return r6294006;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6294007, r6294008, r6294009, r6294010, r6294011, r6294012, r6294013, r6294014, r6294015;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6294007, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6294008, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r6294009);
        mpfr_init(r6294010);
        mpfr_init(r6294011);
        mpfr_init_set_str(r6294012, "0.5", 10, MPFR_RNDN);
        mpfr_init(r6294013);
        mpfr_init(r6294014);
        mpfr_init(r6294015);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6294009, x, MPFR_RNDN);
        mpfr_mul(r6294010, r6294008, r6294009, MPFR_RNDN);
        mpfr_add(r6294011, r6294007, r6294010, MPFR_RNDN);
        ;
        mpfr_mul(r6294013, r6294009, r6294009, MPFR_RNDN);
        mpfr_mul(r6294014, r6294012, r6294013, MPFR_RNDN);
        mpfr_add(r6294015, r6294011, r6294014, MPFR_RNDN);
        return mpfr_get_d(r6294015, MPFR_RNDN);
}

static mpfr_t r6294016, r6294017, r6294018, r6294019, r6294020, r6294021, r6294022, r6294023, r6294024, r6294025, r6294026;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6294016, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6294017, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r6294018);
        mpfr_init(r6294019);
        mpfr_init(r6294020);
        mpfr_init_set_str(r6294021, "0.5", 10, MPFR_RNDN);
        mpfr_init(r6294022);
        mpfr_init(r6294023);
        mpfr_init(r6294024);
        mpfr_init(r6294025);
        mpfr_init(r6294026);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6294018, x, MPFR_RNDN);
        mpfr_mul(r6294019, r6294017, r6294018, MPFR_RNDN);
        mpfr_add(r6294020, r6294016, r6294019, MPFR_RNDN);
        ;
        mpfr_mul(r6294022, r6294018, r6294018, MPFR_RNDN);
        mpfr_mul(r6294023, r6294021, r6294022, MPFR_RNDN);
        mpfr_sqrt(r6294024, r6294023, MPFR_RNDN);
        mpfr_mul(r6294025, r6294024, r6294024, MPFR_RNDN);
        mpfr_add(r6294026, r6294020, r6294025, MPFR_RNDN);
        return mpfr_get_d(r6294026, MPFR_RNDN);
}

static mpfr_t r6294027, r6294028, r6294029, r6294030, r6294031, r6294032, r6294033, r6294034, r6294035, r6294036, r6294037;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6294027, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6294028, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r6294029);
        mpfr_init(r6294030);
        mpfr_init(r6294031);
        mpfr_init_set_str(r6294032, "0.5", 10, MPFR_RNDN);
        mpfr_init(r6294033);
        mpfr_init(r6294034);
        mpfr_init(r6294035);
        mpfr_init(r6294036);
        mpfr_init(r6294037);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6294029, x, MPFR_RNDN);
        mpfr_mul(r6294030, r6294028, r6294029, MPFR_RNDN);
        mpfr_add(r6294031, r6294027, r6294030, MPFR_RNDN);
        ;
        mpfr_mul(r6294033, r6294029, r6294029, MPFR_RNDN);
        mpfr_mul(r6294034, r6294032, r6294033, MPFR_RNDN);
        mpfr_sqrt(r6294035, r6294034, MPFR_RNDN);
        mpfr_mul(r6294036, r6294035, r6294035, MPFR_RNDN);
        mpfr_add(r6294037, r6294031, r6294036, MPFR_RNDN);
        return mpfr_get_d(r6294037, MPFR_RNDN);
}

