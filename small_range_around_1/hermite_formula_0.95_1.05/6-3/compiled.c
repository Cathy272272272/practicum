#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r63170963 = -12.0;
        float r63170964 = x;
        float r63170965 = r63170963 * r63170964;
        float r63170966 = 8.0;
        float r63170967 = r63170964 * r63170964;
        float r63170968 = r63170967 * r63170964;
        float r63170969 = r63170966 * r63170968;
        float r63170970 = r63170965 + r63170969;
        return r63170970;
}

double f_id(double x) {
        double r63170971 = -12.0;
        double r63170972 = x;
        double r63170973 = r63170971 * r63170972;
        double r63170974 = 8.0;
        double r63170975 = r63170972 * r63170972;
        double r63170976 = r63170975 * r63170972;
        double r63170977 = r63170974 * r63170976;
        double r63170978 = r63170973 + r63170977;
        return r63170978;
}


double f_of(float x) {
        float r63170979 = -12.0;
        float r63170980 = exp(r63170979);
        float r63170981 = x;
        float r63170982 = pow(r63170980, r63170981);
        float r63170983 = 8.0;
        float r63170984 = exp(r63170983);
        float r63170985 = 3;
        float r63170986 = pow(r63170981, r63170985);
        float r63170987 = pow(r63170984, r63170986);
        float r63170988 = r63170982 * r63170987;
        float r63170989 = sqrt(r63170988);
        float r63170990 = r63170981 * r63170981;
        float r63170991 = pow(r63170984, r63170990);
        float r63170992 = pow(r63170991, r63170981);
        float r63170993 = r63170982 * r63170992;
        float r63170994 = sqrt(r63170993);
        float r63170995 = r63170989 * r63170994;
        float r63170996 = log(r63170995);
        return r63170996;
}

double f_od(double x) {
        double r63170997 = -12.0;
        double r63170998 = exp(r63170997);
        double r63170999 = x;
        double r63171000 = pow(r63170998, r63170999);
        double r63171001 = 8.0;
        double r63171002 = exp(r63171001);
        double r63171003 = 3;
        double r63171004 = pow(r63170999, r63171003);
        double r63171005 = pow(r63171002, r63171004);
        double r63171006 = r63171000 * r63171005;
        double r63171007 = sqrt(r63171006);
        double r63171008 = r63170999 * r63170999;
        double r63171009 = pow(r63171002, r63171008);
        double r63171010 = pow(r63171009, r63170999);
        double r63171011 = r63171000 * r63171010;
        double r63171012 = sqrt(r63171011);
        double r63171013 = r63171007 * r63171012;
        double r63171014 = log(r63171013);
        return r63171014;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63171015, r63171016, r63171017, r63171018, r63171019, r63171020, r63171021, r63171022;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63171015, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r63171016);
        mpfr_init(r63171017);
        mpfr_init_set_str(r63171018, "8.0", 10, MPFR_RNDN);
        mpfr_init(r63171019);
        mpfr_init(r63171020);
        mpfr_init(r63171021);
        mpfr_init(r63171022);
}

double f_im(double x) {
        ;
        mpfr_set_d(r63171016, x, MPFR_RNDN);
        mpfr_mul(r63171017, r63171015, r63171016, MPFR_RNDN);
        ;
        mpfr_mul(r63171019, r63171016, r63171016, MPFR_RNDN);
        mpfr_mul(r63171020, r63171019, r63171016, MPFR_RNDN);
        mpfr_mul(r63171021, r63171018, r63171020, MPFR_RNDN);
        mpfr_add(r63171022, r63171017, r63171021, MPFR_RNDN);
        return mpfr_get_d(r63171022, MPFR_RNDN);
}

static mpfr_t r63171023, r63171024, r63171025, r63171026, r63171027, r63171028, r63171029, r63171030, r63171031, r63171032, r63171033, r63171034, r63171035, r63171036, r63171037, r63171038, r63171039, r63171040;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63171023, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r63171024);
        mpfr_init(r63171025);
        mpfr_init(r63171026);
        mpfr_init_set_str(r63171027, "8.0", 10, MPFR_RNDN);
        mpfr_init(r63171028);
        mpfr_init_set_str(r63171029, "3", 10, MPFR_RNDN);
        mpfr_init(r63171030);
        mpfr_init(r63171031);
        mpfr_init(r63171032);
        mpfr_init(r63171033);
        mpfr_init(r63171034);
        mpfr_init(r63171035);
        mpfr_init(r63171036);
        mpfr_init(r63171037);
        mpfr_init(r63171038);
        mpfr_init(r63171039);
        mpfr_init(r63171040);
}

double f_fm(double x) {
        ;
        mpfr_exp(r63171024, r63171023, MPFR_RNDN);
        mpfr_set_d(r63171025, x, MPFR_RNDN);
        mpfr_pow(r63171026, r63171024, r63171025, MPFR_RNDN);
        ;
        mpfr_exp(r63171028, r63171027, MPFR_RNDN);
        ;
        mpfr_pow(r63171030, r63171025, r63171029, MPFR_RNDN);
        mpfr_pow(r63171031, r63171028, r63171030, MPFR_RNDN);
        mpfr_mul(r63171032, r63171026, r63171031, MPFR_RNDN);
        mpfr_sqrt(r63171033, r63171032, MPFR_RNDN);
        mpfr_mul(r63171034, r63171025, r63171025, MPFR_RNDN);
        mpfr_pow(r63171035, r63171028, r63171034, MPFR_RNDN);
        mpfr_pow(r63171036, r63171035, r63171025, MPFR_RNDN);
        mpfr_mul(r63171037, r63171026, r63171036, MPFR_RNDN);
        mpfr_sqrt(r63171038, r63171037, MPFR_RNDN);
        mpfr_mul(r63171039, r63171033, r63171038, MPFR_RNDN);
        mpfr_log(r63171040, r63171039, MPFR_RNDN);
        return mpfr_get_d(r63171040, MPFR_RNDN);
}

static mpfr_t r63171041, r63171042, r63171043, r63171044, r63171045, r63171046, r63171047, r63171048, r63171049, r63171050, r63171051, r63171052, r63171053, r63171054, r63171055, r63171056, r63171057, r63171058;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63171041, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r63171042);
        mpfr_init(r63171043);
        mpfr_init(r63171044);
        mpfr_init_set_str(r63171045, "8.0", 10, MPFR_RNDN);
        mpfr_init(r63171046);
        mpfr_init_set_str(r63171047, "3", 10, MPFR_RNDN);
        mpfr_init(r63171048);
        mpfr_init(r63171049);
        mpfr_init(r63171050);
        mpfr_init(r63171051);
        mpfr_init(r63171052);
        mpfr_init(r63171053);
        mpfr_init(r63171054);
        mpfr_init(r63171055);
        mpfr_init(r63171056);
        mpfr_init(r63171057);
        mpfr_init(r63171058);
}

double f_dm(double x) {
        ;
        mpfr_exp(r63171042, r63171041, MPFR_RNDN);
        mpfr_set_d(r63171043, x, MPFR_RNDN);
        mpfr_pow(r63171044, r63171042, r63171043, MPFR_RNDN);
        ;
        mpfr_exp(r63171046, r63171045, MPFR_RNDN);
        ;
        mpfr_pow(r63171048, r63171043, r63171047, MPFR_RNDN);
        mpfr_pow(r63171049, r63171046, r63171048, MPFR_RNDN);
        mpfr_mul(r63171050, r63171044, r63171049, MPFR_RNDN);
        mpfr_sqrt(r63171051, r63171050, MPFR_RNDN);
        mpfr_mul(r63171052, r63171043, r63171043, MPFR_RNDN);
        mpfr_pow(r63171053, r63171046, r63171052, MPFR_RNDN);
        mpfr_pow(r63171054, r63171053, r63171043, MPFR_RNDN);
        mpfr_mul(r63171055, r63171044, r63171054, MPFR_RNDN);
        mpfr_sqrt(r63171056, r63171055, MPFR_RNDN);
        mpfr_mul(r63171057, r63171051, r63171056, MPFR_RNDN);
        mpfr_log(r63171058, r63171057, MPFR_RNDN);
        return mpfr_get_d(r63171058, MPFR_RNDN);
}

