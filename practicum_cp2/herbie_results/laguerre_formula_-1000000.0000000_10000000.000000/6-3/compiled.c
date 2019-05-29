#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9852957 = 1.0;
        float r9852958 = -3.0;
        float r9852959 = x;
        float r9852960 = r9852958 * r9852959;
        float r9852961 = r9852957 + r9852960;
        float r9852962 = 1.5;
        float r9852963 = r9852959 * r9852959;
        float r9852964 = r9852962 * r9852963;
        float r9852965 = r9852961 + r9852964;
        float r9852966 = -0.166667;
        float r9852967 = r9852963 * r9852959;
        float r9852968 = r9852966 * r9852967;
        float r9852969 = r9852965 + r9852968;
        return r9852969;
}

double f_id(double x) {
        double r9852970 = 1.0;
        double r9852971 = -3.0;
        double r9852972 = x;
        double r9852973 = r9852971 * r9852972;
        double r9852974 = r9852970 + r9852973;
        double r9852975 = 1.5;
        double r9852976 = r9852972 * r9852972;
        double r9852977 = r9852975 * r9852976;
        double r9852978 = r9852974 + r9852977;
        double r9852979 = -0.166667;
        double r9852980 = r9852976 * r9852972;
        double r9852981 = r9852979 * r9852980;
        double r9852982 = r9852978 + r9852981;
        return r9852982;
}


double f_of(float x) {
        float r9852983 = 1.0;
        float r9852984 = -3.0;
        float r9852985 = x;
        float r9852986 = r9852984 * r9852985;
        float r9852987 = r9852983 + r9852986;
        float r9852988 = 1.5;
        float r9852989 = r9852985 * r9852985;
        float r9852990 = r9852988 * r9852989;
        float r9852991 = r9852987 + r9852990;
        float r9852992 = -0.166667;
        float r9852993 = 3;
        float r9852994 = pow(r9852985, r9852993);
        float r9852995 = r9852992 * r9852994;
        float r9852996 = r9852991 + r9852995;
        return r9852996;
}

double f_od(double x) {
        double r9852997 = 1.0;
        double r9852998 = -3.0;
        double r9852999 = x;
        double r9853000 = r9852998 * r9852999;
        double r9853001 = r9852997 + r9853000;
        double r9853002 = 1.5;
        double r9853003 = r9852999 * r9852999;
        double r9853004 = r9853002 * r9853003;
        double r9853005 = r9853001 + r9853004;
        double r9853006 = -0.166667;
        double r9853007 = 3;
        double r9853008 = pow(r9852999, r9853007);
        double r9853009 = r9853006 * r9853008;
        double r9853010 = r9853005 + r9853009;
        return r9853010;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9853011, r9853012, r9853013, r9853014, r9853015, r9853016, r9853017, r9853018, r9853019, r9853020, r9853021, r9853022, r9853023;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9853011, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853012, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9853013);
        mpfr_init(r9853014);
        mpfr_init(r9853015);
        mpfr_init_set_str(r9853016, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9853017);
        mpfr_init(r9853018);
        mpfr_init(r9853019);
        mpfr_init_set_str(r9853020, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r9853021);
        mpfr_init(r9853022);
        mpfr_init(r9853023);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9853013, x, MPFR_RNDN);
        mpfr_mul(r9853014, r9853012, r9853013, MPFR_RNDN);
        mpfr_add(r9853015, r9853011, r9853014, MPFR_RNDN);
        ;
        mpfr_mul(r9853017, r9853013, r9853013, MPFR_RNDN);
        mpfr_mul(r9853018, r9853016, r9853017, MPFR_RNDN);
        mpfr_add(r9853019, r9853015, r9853018, MPFR_RNDN);
        ;
        mpfr_mul(r9853021, r9853017, r9853013, MPFR_RNDN);
        mpfr_mul(r9853022, r9853020, r9853021, MPFR_RNDN);
        mpfr_add(r9853023, r9853019, r9853022, MPFR_RNDN);
        return mpfr_get_d(r9853023, MPFR_RNDN);
}

static mpfr_t r9853024, r9853025, r9853026, r9853027, r9853028, r9853029, r9853030, r9853031, r9853032, r9853033, r9853034, r9853035, r9853036, r9853037;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9853024, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853025, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9853026);
        mpfr_init(r9853027);
        mpfr_init(r9853028);
        mpfr_init_set_str(r9853029, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9853030);
        mpfr_init(r9853031);
        mpfr_init(r9853032);
        mpfr_init_set_str(r9853033, "-0.166667", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853034, "3", 10, MPFR_RNDN);
        mpfr_init(r9853035);
        mpfr_init(r9853036);
        mpfr_init(r9853037);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9853026, x, MPFR_RNDN);
        mpfr_mul(r9853027, r9853025, r9853026, MPFR_RNDN);
        mpfr_add(r9853028, r9853024, r9853027, MPFR_RNDN);
        ;
        mpfr_mul(r9853030, r9853026, r9853026, MPFR_RNDN);
        mpfr_mul(r9853031, r9853029, r9853030, MPFR_RNDN);
        mpfr_add(r9853032, r9853028, r9853031, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9853035, r9853026, r9853034, MPFR_RNDN);
        mpfr_mul(r9853036, r9853033, r9853035, MPFR_RNDN);
        mpfr_add(r9853037, r9853032, r9853036, MPFR_RNDN);
        return mpfr_get_d(r9853037, MPFR_RNDN);
}

static mpfr_t r9853038, r9853039, r9853040, r9853041, r9853042, r9853043, r9853044, r9853045, r9853046, r9853047, r9853048, r9853049, r9853050, r9853051;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9853038, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853039, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r9853040);
        mpfr_init(r9853041);
        mpfr_init(r9853042);
        mpfr_init_set_str(r9853043, "1.5", 10, MPFR_RNDN);
        mpfr_init(r9853044);
        mpfr_init(r9853045);
        mpfr_init(r9853046);
        mpfr_init_set_str(r9853047, "-0.166667", 10, MPFR_RNDN);
        mpfr_init_set_str(r9853048, "3", 10, MPFR_RNDN);
        mpfr_init(r9853049);
        mpfr_init(r9853050);
        mpfr_init(r9853051);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9853040, x, MPFR_RNDN);
        mpfr_mul(r9853041, r9853039, r9853040, MPFR_RNDN);
        mpfr_add(r9853042, r9853038, r9853041, MPFR_RNDN);
        ;
        mpfr_mul(r9853044, r9853040, r9853040, MPFR_RNDN);
        mpfr_mul(r9853045, r9853043, r9853044, MPFR_RNDN);
        mpfr_add(r9853046, r9853042, r9853045, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9853049, r9853040, r9853048, MPFR_RNDN);
        mpfr_mul(r9853050, r9853047, r9853049, MPFR_RNDN);
        mpfr_add(r9853051, r9853046, r9853050, MPFR_RNDN);
        return mpfr_get_d(r9853051, MPFR_RNDN);
}

