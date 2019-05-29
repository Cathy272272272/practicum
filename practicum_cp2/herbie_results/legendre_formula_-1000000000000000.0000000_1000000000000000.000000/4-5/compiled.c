#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8031975 = 1.875;
        float r8031976 = x;
        float r8031977 = r8031975 * r8031976;
        float r8031978 = -8.75;
        float r8031979 = r8031976 * r8031976;
        float r8031980 = r8031979 * r8031976;
        float r8031981 = r8031978 * r8031980;
        float r8031982 = r8031977 + r8031981;
        float r8031983 = 7.875;
        float r8031984 = r8031980 * r8031976;
        float r8031985 = r8031984 * r8031976;
        float r8031986 = r8031983 * r8031985;
        float r8031987 = r8031982 + r8031986;
        return r8031987;
}

double f_id(double x) {
        double r8031988 = 1.875;
        double r8031989 = x;
        double r8031990 = r8031988 * r8031989;
        double r8031991 = -8.75;
        double r8031992 = r8031989 * r8031989;
        double r8031993 = r8031992 * r8031989;
        double r8031994 = r8031991 * r8031993;
        double r8031995 = r8031990 + r8031994;
        double r8031996 = 7.875;
        double r8031997 = r8031993 * r8031989;
        double r8031998 = r8031997 * r8031989;
        double r8031999 = r8031996 * r8031998;
        double r8032000 = r8031995 + r8031999;
        return r8032000;
}


double f_of(float x) {
        float r8032001 = 1.875;
        float r8032002 = x;
        float r8032003 = r8032001 * r8032002;
        float r8032004 = -8.75;
        float r8032005 = r8032002 * r8032002;
        float r8032006 = r8032005 * r8032002;
        float r8032007 = r8032004 * r8032006;
        float r8032008 = r8032003 + r8032007;
        float r8032009 = 7.875;
        float r8032010 = 3;
        float r8032011 = 1;
        float r8032012 = r8032010 + r8032011;
        float r8032013 = pow(r8032002, r8032012);
        float r8032014 = r8032013 * r8032002;
        float r8032015 = r8032009 * r8032014;
        float r8032016 = r8032008 + r8032015;
        return r8032016;
}

double f_od(double x) {
        double r8032017 = 1.875;
        double r8032018 = x;
        double r8032019 = r8032017 * r8032018;
        double r8032020 = -8.75;
        double r8032021 = r8032018 * r8032018;
        double r8032022 = r8032021 * r8032018;
        double r8032023 = r8032020 * r8032022;
        double r8032024 = r8032019 + r8032023;
        double r8032025 = 7.875;
        double r8032026 = 3;
        double r8032027 = 1;
        double r8032028 = r8032026 + r8032027;
        double r8032029 = pow(r8032018, r8032028);
        double r8032030 = r8032029 * r8032018;
        double r8032031 = r8032025 * r8032030;
        double r8032032 = r8032024 + r8032031;
        return r8032032;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8032033, r8032034, r8032035, r8032036, r8032037, r8032038, r8032039, r8032040, r8032041, r8032042, r8032043, r8032044, r8032045;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8032033, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8032034);
        mpfr_init(r8032035);
        mpfr_init_set_str(r8032036, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8032037);
        mpfr_init(r8032038);
        mpfr_init(r8032039);
        mpfr_init(r8032040);
        mpfr_init_set_str(r8032041, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8032042);
        mpfr_init(r8032043);
        mpfr_init(r8032044);
        mpfr_init(r8032045);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8032034, x, MPFR_RNDN);
        mpfr_mul(r8032035, r8032033, r8032034, MPFR_RNDN);
        ;
        mpfr_mul(r8032037, r8032034, r8032034, MPFR_RNDN);
        mpfr_mul(r8032038, r8032037, r8032034, MPFR_RNDN);
        mpfr_mul(r8032039, r8032036, r8032038, MPFR_RNDN);
        mpfr_add(r8032040, r8032035, r8032039, MPFR_RNDN);
        ;
        mpfr_mul(r8032042, r8032038, r8032034, MPFR_RNDN);
        mpfr_mul(r8032043, r8032042, r8032034, MPFR_RNDN);
        mpfr_mul(r8032044, r8032041, r8032043, MPFR_RNDN);
        mpfr_add(r8032045, r8032040, r8032044, MPFR_RNDN);
        return mpfr_get_d(r8032045, MPFR_RNDN);
}

static mpfr_t r8032046, r8032047, r8032048, r8032049, r8032050, r8032051, r8032052, r8032053, r8032054, r8032055, r8032056, r8032057, r8032058, r8032059, r8032060, r8032061;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8032046, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8032047);
        mpfr_init(r8032048);
        mpfr_init_set_str(r8032049, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8032050);
        mpfr_init(r8032051);
        mpfr_init(r8032052);
        mpfr_init(r8032053);
        mpfr_init_set_str(r8032054, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r8032055, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8032056, "1", 10, MPFR_RNDN);
        mpfr_init(r8032057);
        mpfr_init(r8032058);
        mpfr_init(r8032059);
        mpfr_init(r8032060);
        mpfr_init(r8032061);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8032047, x, MPFR_RNDN);
        mpfr_mul(r8032048, r8032046, r8032047, MPFR_RNDN);
        ;
        mpfr_mul(r8032050, r8032047, r8032047, MPFR_RNDN);
        mpfr_mul(r8032051, r8032050, r8032047, MPFR_RNDN);
        mpfr_mul(r8032052, r8032049, r8032051, MPFR_RNDN);
        mpfr_add(r8032053, r8032048, r8032052, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8032057, r8032055, r8032056, MPFR_RNDN);
        mpfr_pow(r8032058, r8032047, r8032057, MPFR_RNDN);
        mpfr_mul(r8032059, r8032058, r8032047, MPFR_RNDN);
        mpfr_mul(r8032060, r8032054, r8032059, MPFR_RNDN);
        mpfr_add(r8032061, r8032053, r8032060, MPFR_RNDN);
        return mpfr_get_d(r8032061, MPFR_RNDN);
}

static mpfr_t r8032062, r8032063, r8032064, r8032065, r8032066, r8032067, r8032068, r8032069, r8032070, r8032071, r8032072, r8032073, r8032074, r8032075, r8032076, r8032077;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8032062, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8032063);
        mpfr_init(r8032064);
        mpfr_init_set_str(r8032065, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8032066);
        mpfr_init(r8032067);
        mpfr_init(r8032068);
        mpfr_init(r8032069);
        mpfr_init_set_str(r8032070, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r8032071, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8032072, "1", 10, MPFR_RNDN);
        mpfr_init(r8032073);
        mpfr_init(r8032074);
        mpfr_init(r8032075);
        mpfr_init(r8032076);
        mpfr_init(r8032077);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8032063, x, MPFR_RNDN);
        mpfr_mul(r8032064, r8032062, r8032063, MPFR_RNDN);
        ;
        mpfr_mul(r8032066, r8032063, r8032063, MPFR_RNDN);
        mpfr_mul(r8032067, r8032066, r8032063, MPFR_RNDN);
        mpfr_mul(r8032068, r8032065, r8032067, MPFR_RNDN);
        mpfr_add(r8032069, r8032064, r8032068, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8032073, r8032071, r8032072, MPFR_RNDN);
        mpfr_pow(r8032074, r8032063, r8032073, MPFR_RNDN);
        mpfr_mul(r8032075, r8032074, r8032063, MPFR_RNDN);
        mpfr_mul(r8032076, r8032070, r8032075, MPFR_RNDN);
        mpfr_add(r8032077, r8032069, r8032076, MPFR_RNDN);
        return mpfr_get_d(r8032077, MPFR_RNDN);
}

