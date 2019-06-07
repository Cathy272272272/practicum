#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r48609006 = -1.5;
        float r48609007 = x;
        float r48609008 = r48609006 * r48609007;
        float r48609009 = 2.5;
        float r48609010 = r48609007 * r48609007;
        float r48609011 = r48609010 * r48609007;
        float r48609012 = r48609009 * r48609011;
        float r48609013 = r48609008 + r48609012;
        return r48609013;
}

double f_id(double x) {
        double r48609014 = -1.5;
        double r48609015 = x;
        double r48609016 = r48609014 * r48609015;
        double r48609017 = 2.5;
        double r48609018 = r48609015 * r48609015;
        double r48609019 = r48609018 * r48609015;
        double r48609020 = r48609017 * r48609019;
        double r48609021 = r48609016 + r48609020;
        return r48609021;
}


double f_of(float x) {
        float r48609022 = -1.5;
        float r48609023 = exp(r48609022);
        float r48609024 = x;
        float r48609025 = pow(r48609023, r48609024);
        float r48609026 = 2.5;
        float r48609027 = exp(r48609026);
        float r48609028 = pow(r48609027, r48609024);
        float r48609029 = pow(r48609028, r48609024);
        float r48609030 = pow(r48609029, r48609024);
        float r48609031 = r48609025 * r48609030;
        float r48609032 = log(r48609031);
        return r48609032;
}

double f_od(double x) {
        double r48609033 = -1.5;
        double r48609034 = exp(r48609033);
        double r48609035 = x;
        double r48609036 = pow(r48609034, r48609035);
        double r48609037 = 2.5;
        double r48609038 = exp(r48609037);
        double r48609039 = pow(r48609038, r48609035);
        double r48609040 = pow(r48609039, r48609035);
        double r48609041 = pow(r48609040, r48609035);
        double r48609042 = r48609036 * r48609041;
        double r48609043 = log(r48609042);
        return r48609043;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48609044, r48609045, r48609046, r48609047, r48609048, r48609049, r48609050, r48609051;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609044, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r48609045);
        mpfr_init(r48609046);
        mpfr_init_set_str(r48609047, "2.5", 10, MPFR_RNDN);
        mpfr_init(r48609048);
        mpfr_init(r48609049);
        mpfr_init(r48609050);
        mpfr_init(r48609051);
}

double f_im(double x) {
        ;
        mpfr_set_d(r48609045, x, MPFR_RNDN);
        mpfr_mul(r48609046, r48609044, r48609045, MPFR_RNDN);
        ;
        mpfr_mul(r48609048, r48609045, r48609045, MPFR_RNDN);
        mpfr_mul(r48609049, r48609048, r48609045, MPFR_RNDN);
        mpfr_mul(r48609050, r48609047, r48609049, MPFR_RNDN);
        mpfr_add(r48609051, r48609046, r48609050, MPFR_RNDN);
        return mpfr_get_d(r48609051, MPFR_RNDN);
}

static mpfr_t r48609052, r48609053, r48609054, r48609055, r48609056, r48609057, r48609058, r48609059, r48609060, r48609061, r48609062;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609052, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r48609053);
        mpfr_init(r48609054);
        mpfr_init(r48609055);
        mpfr_init_set_str(r48609056, "2.5", 10, MPFR_RNDN);
        mpfr_init(r48609057);
        mpfr_init(r48609058);
        mpfr_init(r48609059);
        mpfr_init(r48609060);
        mpfr_init(r48609061);
        mpfr_init(r48609062);
}

double f_fm(double x) {
        ;
        mpfr_exp(r48609053, r48609052, MPFR_RNDN);
        mpfr_set_d(r48609054, x, MPFR_RNDN);
        mpfr_pow(r48609055, r48609053, r48609054, MPFR_RNDN);
        ;
        mpfr_exp(r48609057, r48609056, MPFR_RNDN);
        mpfr_pow(r48609058, r48609057, r48609054, MPFR_RNDN);
        mpfr_pow(r48609059, r48609058, r48609054, MPFR_RNDN);
        mpfr_pow(r48609060, r48609059, r48609054, MPFR_RNDN);
        mpfr_mul(r48609061, r48609055, r48609060, MPFR_RNDN);
        mpfr_log(r48609062, r48609061, MPFR_RNDN);
        return mpfr_get_d(r48609062, MPFR_RNDN);
}

static mpfr_t r48609063, r48609064, r48609065, r48609066, r48609067, r48609068, r48609069, r48609070, r48609071, r48609072, r48609073;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609063, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r48609064);
        mpfr_init(r48609065);
        mpfr_init(r48609066);
        mpfr_init_set_str(r48609067, "2.5", 10, MPFR_RNDN);
        mpfr_init(r48609068);
        mpfr_init(r48609069);
        mpfr_init(r48609070);
        mpfr_init(r48609071);
        mpfr_init(r48609072);
        mpfr_init(r48609073);
}

double f_dm(double x) {
        ;
        mpfr_exp(r48609064, r48609063, MPFR_RNDN);
        mpfr_set_d(r48609065, x, MPFR_RNDN);
        mpfr_pow(r48609066, r48609064, r48609065, MPFR_RNDN);
        ;
        mpfr_exp(r48609068, r48609067, MPFR_RNDN);
        mpfr_pow(r48609069, r48609068, r48609065, MPFR_RNDN);
        mpfr_pow(r48609070, r48609069, r48609065, MPFR_RNDN);
        mpfr_pow(r48609071, r48609070, r48609065, MPFR_RNDN);
        mpfr_mul(r48609072, r48609066, r48609071, MPFR_RNDN);
        mpfr_log(r48609073, r48609072, MPFR_RNDN);
        return mpfr_get_d(r48609073, MPFR_RNDN);
}

