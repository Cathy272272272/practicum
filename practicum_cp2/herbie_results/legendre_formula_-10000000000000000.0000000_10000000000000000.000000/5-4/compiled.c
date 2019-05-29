#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6903979 = 0.375;
        float r6903980 = -3.75;
        float r6903981 = x;
        float r6903982 = r6903981 * r6903981;
        float r6903983 = r6903980 * r6903982;
        float r6903984 = r6903979 + r6903983;
        float r6903985 = 4.375;
        float r6903986 = r6903982 * r6903981;
        float r6903987 = r6903986 * r6903981;
        float r6903988 = r6903985 * r6903987;
        float r6903989 = r6903984 + r6903988;
        return r6903989;
}

double f_id(double x) {
        double r6903990 = 0.375;
        double r6903991 = -3.75;
        double r6903992 = x;
        double r6903993 = r6903992 * r6903992;
        double r6903994 = r6903991 * r6903993;
        double r6903995 = r6903990 + r6903994;
        double r6903996 = 4.375;
        double r6903997 = r6903993 * r6903992;
        double r6903998 = r6903997 * r6903992;
        double r6903999 = r6903996 * r6903998;
        double r6904000 = r6903995 + r6903999;
        return r6904000;
}


double f_of(float x) {
        float r6904001 = 0.375;
        float r6904002 = x;
        float r6904003 = 4.375;
        float r6904004 = r6904002 * r6904003;
        float r6904005 = r6904004 * r6904002;
        float r6904006 = r6904002 * r6904002;
        float r6904007 = r6904005 * r6904006;
        float r6904008 = -3.75;
        float r6904009 = r6904002 * r6904008;
        float r6904010 = r6904009 * r6904002;
        float r6904011 = r6904007 + r6904010;
        float r6904012 = r6904001 + r6904011;
        return r6904012;
}

double f_od(double x) {
        double r6904013 = 0.375;
        double r6904014 = x;
        double r6904015 = 4.375;
        double r6904016 = r6904014 * r6904015;
        double r6904017 = r6904016 * r6904014;
        double r6904018 = r6904014 * r6904014;
        double r6904019 = r6904017 * r6904018;
        double r6904020 = -3.75;
        double r6904021 = r6904014 * r6904020;
        double r6904022 = r6904021 * r6904014;
        double r6904023 = r6904019 + r6904022;
        double r6904024 = r6904013 + r6904023;
        return r6904024;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6904025, r6904026, r6904027, r6904028, r6904029, r6904030, r6904031, r6904032, r6904033, r6904034, r6904035;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6904025, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6904026, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6904027);
        mpfr_init(r6904028);
        mpfr_init(r6904029);
        mpfr_init(r6904030);
        mpfr_init_set_str(r6904031, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6904032);
        mpfr_init(r6904033);
        mpfr_init(r6904034);
        mpfr_init(r6904035);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6904027, x, MPFR_RNDN);
        mpfr_mul(r6904028, r6904027, r6904027, MPFR_RNDN);
        mpfr_mul(r6904029, r6904026, r6904028, MPFR_RNDN);
        mpfr_add(r6904030, r6904025, r6904029, MPFR_RNDN);
        ;
        mpfr_mul(r6904032, r6904028, r6904027, MPFR_RNDN);
        mpfr_mul(r6904033, r6904032, r6904027, MPFR_RNDN);
        mpfr_mul(r6904034, r6904031, r6904033, MPFR_RNDN);
        mpfr_add(r6904035, r6904030, r6904034, MPFR_RNDN);
        return mpfr_get_d(r6904035, MPFR_RNDN);
}

static mpfr_t r6904036, r6904037, r6904038, r6904039, r6904040, r6904041, r6904042, r6904043, r6904044, r6904045, r6904046, r6904047;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6904036, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6904037);
        mpfr_init_set_str(r6904038, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6904039);
        mpfr_init(r6904040);
        mpfr_init(r6904041);
        mpfr_init(r6904042);
        mpfr_init_set_str(r6904043, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6904044);
        mpfr_init(r6904045);
        mpfr_init(r6904046);
        mpfr_init(r6904047);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6904037, x, MPFR_RNDN);
        ;
        mpfr_mul(r6904039, r6904037, r6904038, MPFR_RNDN);
        mpfr_mul(r6904040, r6904039, r6904037, MPFR_RNDN);
        mpfr_mul(r6904041, r6904037, r6904037, MPFR_RNDN);
        mpfr_mul(r6904042, r6904040, r6904041, MPFR_RNDN);
        ;
        mpfr_mul(r6904044, r6904037, r6904043, MPFR_RNDN);
        mpfr_mul(r6904045, r6904044, r6904037, MPFR_RNDN);
        mpfr_add(r6904046, r6904042, r6904045, MPFR_RNDN);
        mpfr_add(r6904047, r6904036, r6904046, MPFR_RNDN);
        return mpfr_get_d(r6904047, MPFR_RNDN);
}

static mpfr_t r6904048, r6904049, r6904050, r6904051, r6904052, r6904053, r6904054, r6904055, r6904056, r6904057, r6904058, r6904059;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6904048, "0.375", 10, MPFR_RNDN);
        mpfr_init(r6904049);
        mpfr_init_set_str(r6904050, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6904051);
        mpfr_init(r6904052);
        mpfr_init(r6904053);
        mpfr_init(r6904054);
        mpfr_init_set_str(r6904055, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6904056);
        mpfr_init(r6904057);
        mpfr_init(r6904058);
        mpfr_init(r6904059);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6904049, x, MPFR_RNDN);
        ;
        mpfr_mul(r6904051, r6904049, r6904050, MPFR_RNDN);
        mpfr_mul(r6904052, r6904051, r6904049, MPFR_RNDN);
        mpfr_mul(r6904053, r6904049, r6904049, MPFR_RNDN);
        mpfr_mul(r6904054, r6904052, r6904053, MPFR_RNDN);
        ;
        mpfr_mul(r6904056, r6904049, r6904055, MPFR_RNDN);
        mpfr_mul(r6904057, r6904056, r6904049, MPFR_RNDN);
        mpfr_add(r6904058, r6904054, r6904057, MPFR_RNDN);
        mpfr_add(r6904059, r6904048, r6904058, MPFR_RNDN);
        return mpfr_get_d(r6904059, MPFR_RNDN);
}

