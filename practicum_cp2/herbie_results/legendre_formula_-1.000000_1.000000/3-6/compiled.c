#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10035984 = -0.3125;
        float r10035985 = 6.5625;
        float r10035986 = x;
        float r10035987 = r10035986 * r10035986;
        float r10035988 = r10035985 * r10035987;
        float r10035989 = r10035984 + r10035988;
        float r10035990 = -19.6875;
        float r10035991 = r10035987 * r10035986;
        float r10035992 = r10035991 * r10035986;
        float r10035993 = r10035990 * r10035992;
        float r10035994 = r10035989 + r10035993;
        float r10035995 = 14.4375;
        float r10035996 = r10035992 * r10035986;
        float r10035997 = r10035996 * r10035986;
        float r10035998 = r10035995 * r10035997;
        float r10035999 = r10035994 + r10035998;
        return r10035999;
}

double f_id(double x) {
        double r10036000 = -0.3125;
        double r10036001 = 6.5625;
        double r10036002 = x;
        double r10036003 = r10036002 * r10036002;
        double r10036004 = r10036001 * r10036003;
        double r10036005 = r10036000 + r10036004;
        double r10036006 = -19.6875;
        double r10036007 = r10036003 * r10036002;
        double r10036008 = r10036007 * r10036002;
        double r10036009 = r10036006 * r10036008;
        double r10036010 = r10036005 + r10036009;
        double r10036011 = 14.4375;
        double r10036012 = r10036008 * r10036002;
        double r10036013 = r10036012 * r10036002;
        double r10036014 = r10036011 * r10036013;
        double r10036015 = r10036010 + r10036014;
        return r10036015;
}


double f_of(float x) {
        float r10036016 = -0.3125;
        float r10036017 = 6.5625;
        float r10036018 = x;
        float r10036019 = r10036018 * r10036018;
        float r10036020 = r10036017 * r10036019;
        float r10036021 = r10036016 + r10036020;
        float r10036022 = -19.6875;
        float r10036023 = r10036019 * r10036018;
        float r10036024 = r10036023 * r10036018;
        float r10036025 = r10036022 * r10036024;
        float r10036026 = r10036021 + r10036025;
        float r10036027 = 14.4375;
        float r10036028 = r10036024 * r10036018;
        float r10036029 = r10036028 * r10036018;
        float r10036030 = r10036027 * r10036029;
        float r10036031 = r10036026 + r10036030;
        return r10036031;
}

double f_od(double x) {
        double r10036032 = -0.3125;
        double r10036033 = 6.5625;
        double r10036034 = x;
        double r10036035 = r10036034 * r10036034;
        double r10036036 = r10036033 * r10036035;
        double r10036037 = r10036032 + r10036036;
        double r10036038 = -19.6875;
        double r10036039 = r10036035 * r10036034;
        double r10036040 = r10036039 * r10036034;
        double r10036041 = r10036038 * r10036040;
        double r10036042 = r10036037 + r10036041;
        double r10036043 = 14.4375;
        double r10036044 = r10036040 * r10036034;
        double r10036045 = r10036044 * r10036034;
        double r10036046 = r10036043 * r10036045;
        double r10036047 = r10036042 + r10036046;
        return r10036047;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10036048, r10036049, r10036050, r10036051, r10036052, r10036053, r10036054, r10036055, r10036056, r10036057, r10036058, r10036059, r10036060, r10036061, r10036062, r10036063;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10036048, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r10036049, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r10036050);
        mpfr_init(r10036051);
        mpfr_init(r10036052);
        mpfr_init(r10036053);
        mpfr_init_set_str(r10036054, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r10036055);
        mpfr_init(r10036056);
        mpfr_init(r10036057);
        mpfr_init(r10036058);
        mpfr_init_set_str(r10036059, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r10036060);
        mpfr_init(r10036061);
        mpfr_init(r10036062);
        mpfr_init(r10036063);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10036050, x, MPFR_RNDN);
        mpfr_mul(r10036051, r10036050, r10036050, MPFR_RNDN);
        mpfr_mul(r10036052, r10036049, r10036051, MPFR_RNDN);
        mpfr_add(r10036053, r10036048, r10036052, MPFR_RNDN);
        ;
        mpfr_mul(r10036055, r10036051, r10036050, MPFR_RNDN);
        mpfr_mul(r10036056, r10036055, r10036050, MPFR_RNDN);
        mpfr_mul(r10036057, r10036054, r10036056, MPFR_RNDN);
        mpfr_add(r10036058, r10036053, r10036057, MPFR_RNDN);
        ;
        mpfr_mul(r10036060, r10036056, r10036050, MPFR_RNDN);
        mpfr_mul(r10036061, r10036060, r10036050, MPFR_RNDN);
        mpfr_mul(r10036062, r10036059, r10036061, MPFR_RNDN);
        mpfr_add(r10036063, r10036058, r10036062, MPFR_RNDN);
        return mpfr_get_d(r10036063, MPFR_RNDN);
}

static mpfr_t r10036064, r10036065, r10036066, r10036067, r10036068, r10036069, r10036070, r10036071, r10036072, r10036073, r10036074, r10036075, r10036076, r10036077, r10036078, r10036079;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10036064, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r10036065, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r10036066);
        mpfr_init(r10036067);
        mpfr_init(r10036068);
        mpfr_init(r10036069);
        mpfr_init_set_str(r10036070, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r10036071);
        mpfr_init(r10036072);
        mpfr_init(r10036073);
        mpfr_init(r10036074);
        mpfr_init_set_str(r10036075, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r10036076);
        mpfr_init(r10036077);
        mpfr_init(r10036078);
        mpfr_init(r10036079);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10036066, x, MPFR_RNDN);
        mpfr_mul(r10036067, r10036066, r10036066, MPFR_RNDN);
        mpfr_mul(r10036068, r10036065, r10036067, MPFR_RNDN);
        mpfr_add(r10036069, r10036064, r10036068, MPFR_RNDN);
        ;
        mpfr_mul(r10036071, r10036067, r10036066, MPFR_RNDN);
        mpfr_mul(r10036072, r10036071, r10036066, MPFR_RNDN);
        mpfr_mul(r10036073, r10036070, r10036072, MPFR_RNDN);
        mpfr_add(r10036074, r10036069, r10036073, MPFR_RNDN);
        ;
        mpfr_mul(r10036076, r10036072, r10036066, MPFR_RNDN);
        mpfr_mul(r10036077, r10036076, r10036066, MPFR_RNDN);
        mpfr_mul(r10036078, r10036075, r10036077, MPFR_RNDN);
        mpfr_add(r10036079, r10036074, r10036078, MPFR_RNDN);
        return mpfr_get_d(r10036079, MPFR_RNDN);
}

static mpfr_t r10036080, r10036081, r10036082, r10036083, r10036084, r10036085, r10036086, r10036087, r10036088, r10036089, r10036090, r10036091, r10036092, r10036093, r10036094, r10036095;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10036080, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r10036081, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r10036082);
        mpfr_init(r10036083);
        mpfr_init(r10036084);
        mpfr_init(r10036085);
        mpfr_init_set_str(r10036086, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r10036087);
        mpfr_init(r10036088);
        mpfr_init(r10036089);
        mpfr_init(r10036090);
        mpfr_init_set_str(r10036091, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r10036092);
        mpfr_init(r10036093);
        mpfr_init(r10036094);
        mpfr_init(r10036095);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10036082, x, MPFR_RNDN);
        mpfr_mul(r10036083, r10036082, r10036082, MPFR_RNDN);
        mpfr_mul(r10036084, r10036081, r10036083, MPFR_RNDN);
        mpfr_add(r10036085, r10036080, r10036084, MPFR_RNDN);
        ;
        mpfr_mul(r10036087, r10036083, r10036082, MPFR_RNDN);
        mpfr_mul(r10036088, r10036087, r10036082, MPFR_RNDN);
        mpfr_mul(r10036089, r10036086, r10036088, MPFR_RNDN);
        mpfr_add(r10036090, r10036085, r10036089, MPFR_RNDN);
        ;
        mpfr_mul(r10036092, r10036088, r10036082, MPFR_RNDN);
        mpfr_mul(r10036093, r10036092, r10036082, MPFR_RNDN);
        mpfr_mul(r10036094, r10036091, r10036093, MPFR_RNDN);
        mpfr_add(r10036095, r10036090, r10036094, MPFR_RNDN);
        return mpfr_get_d(r10036095, MPFR_RNDN);
}

