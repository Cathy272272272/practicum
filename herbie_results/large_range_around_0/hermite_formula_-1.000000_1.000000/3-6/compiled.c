#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7983003 = -120.0;
        float r7983004 = 720.0;
        float r7983005 = x;
        float r7983006 = r7983005 * r7983005;
        float r7983007 = r7983004 * r7983006;
        float r7983008 = r7983003 + r7983007;
        float r7983009 = -480.0;
        float r7983010 = r7983006 * r7983005;
        float r7983011 = r7983010 * r7983005;
        float r7983012 = r7983009 * r7983011;
        float r7983013 = r7983008 + r7983012;
        float r7983014 = 64.0;
        float r7983015 = r7983011 * r7983005;
        float r7983016 = r7983015 * r7983005;
        float r7983017 = r7983014 * r7983016;
        float r7983018 = r7983013 + r7983017;
        return r7983018;
}

double f_id(double x) {
        double r7983019 = -120.0;
        double r7983020 = 720.0;
        double r7983021 = x;
        double r7983022 = r7983021 * r7983021;
        double r7983023 = r7983020 * r7983022;
        double r7983024 = r7983019 + r7983023;
        double r7983025 = -480.0;
        double r7983026 = r7983022 * r7983021;
        double r7983027 = r7983026 * r7983021;
        double r7983028 = r7983025 * r7983027;
        double r7983029 = r7983024 + r7983028;
        double r7983030 = 64.0;
        double r7983031 = r7983027 * r7983021;
        double r7983032 = r7983031 * r7983021;
        double r7983033 = r7983030 * r7983032;
        double r7983034 = r7983029 + r7983033;
        return r7983034;
}


double f_of(float x) {
        float r7983035 = -120.0;
        float r7983036 = 720.0;
        float r7983037 = x;
        float r7983038 = r7983037 * r7983037;
        float r7983039 = r7983036 * r7983038;
        float r7983040 = r7983035 + r7983039;
        float r7983041 = -480.0;
        float r7983042 = r7983038 * r7983037;
        float r7983043 = r7983042 * r7983037;
        float r7983044 = r7983041 * r7983043;
        float r7983045 = r7983040 + r7983044;
        float r7983046 = 64.0;
        float r7983047 = r7983043 * r7983037;
        float r7983048 = r7983047 * r7983037;
        float r7983049 = r7983046 * r7983048;
        float r7983050 = r7983045 + r7983049;
        return r7983050;
}

double f_od(double x) {
        double r7983051 = -120.0;
        double r7983052 = 720.0;
        double r7983053 = x;
        double r7983054 = r7983053 * r7983053;
        double r7983055 = r7983052 * r7983054;
        double r7983056 = r7983051 + r7983055;
        double r7983057 = -480.0;
        double r7983058 = r7983054 * r7983053;
        double r7983059 = r7983058 * r7983053;
        double r7983060 = r7983057 * r7983059;
        double r7983061 = r7983056 + r7983060;
        double r7983062 = 64.0;
        double r7983063 = r7983059 * r7983053;
        double r7983064 = r7983063 * r7983053;
        double r7983065 = r7983062 * r7983064;
        double r7983066 = r7983061 + r7983065;
        return r7983066;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7983067, r7983068, r7983069, r7983070, r7983071, r7983072, r7983073, r7983074, r7983075, r7983076, r7983077, r7983078, r7983079, r7983080, r7983081, r7983082;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7983067, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7983068, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7983069);
        mpfr_init(r7983070);
        mpfr_init(r7983071);
        mpfr_init(r7983072);
        mpfr_init_set_str(r7983073, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7983074);
        mpfr_init(r7983075);
        mpfr_init(r7983076);
        mpfr_init(r7983077);
        mpfr_init_set_str(r7983078, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7983079);
        mpfr_init(r7983080);
        mpfr_init(r7983081);
        mpfr_init(r7983082);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7983069, x, MPFR_RNDN);
        mpfr_mul(r7983070, r7983069, r7983069, MPFR_RNDN);
        mpfr_mul(r7983071, r7983068, r7983070, MPFR_RNDN);
        mpfr_add(r7983072, r7983067, r7983071, MPFR_RNDN);
        ;
        mpfr_mul(r7983074, r7983070, r7983069, MPFR_RNDN);
        mpfr_mul(r7983075, r7983074, r7983069, MPFR_RNDN);
        mpfr_mul(r7983076, r7983073, r7983075, MPFR_RNDN);
        mpfr_add(r7983077, r7983072, r7983076, MPFR_RNDN);
        ;
        mpfr_mul(r7983079, r7983075, r7983069, MPFR_RNDN);
        mpfr_mul(r7983080, r7983079, r7983069, MPFR_RNDN);
        mpfr_mul(r7983081, r7983078, r7983080, MPFR_RNDN);
        mpfr_add(r7983082, r7983077, r7983081, MPFR_RNDN);
        return mpfr_get_d(r7983082, MPFR_RNDN);
}

static mpfr_t r7983083, r7983084, r7983085, r7983086, r7983087, r7983088, r7983089, r7983090, r7983091, r7983092, r7983093, r7983094, r7983095, r7983096, r7983097, r7983098;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7983083, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7983084, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7983085);
        mpfr_init(r7983086);
        mpfr_init(r7983087);
        mpfr_init(r7983088);
        mpfr_init_set_str(r7983089, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7983090);
        mpfr_init(r7983091);
        mpfr_init(r7983092);
        mpfr_init(r7983093);
        mpfr_init_set_str(r7983094, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7983095);
        mpfr_init(r7983096);
        mpfr_init(r7983097);
        mpfr_init(r7983098);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7983085, x, MPFR_RNDN);
        mpfr_mul(r7983086, r7983085, r7983085, MPFR_RNDN);
        mpfr_mul(r7983087, r7983084, r7983086, MPFR_RNDN);
        mpfr_add(r7983088, r7983083, r7983087, MPFR_RNDN);
        ;
        mpfr_mul(r7983090, r7983086, r7983085, MPFR_RNDN);
        mpfr_mul(r7983091, r7983090, r7983085, MPFR_RNDN);
        mpfr_mul(r7983092, r7983089, r7983091, MPFR_RNDN);
        mpfr_add(r7983093, r7983088, r7983092, MPFR_RNDN);
        ;
        mpfr_mul(r7983095, r7983091, r7983085, MPFR_RNDN);
        mpfr_mul(r7983096, r7983095, r7983085, MPFR_RNDN);
        mpfr_mul(r7983097, r7983094, r7983096, MPFR_RNDN);
        mpfr_add(r7983098, r7983093, r7983097, MPFR_RNDN);
        return mpfr_get_d(r7983098, MPFR_RNDN);
}

static mpfr_t r7983099, r7983100, r7983101, r7983102, r7983103, r7983104, r7983105, r7983106, r7983107, r7983108, r7983109, r7983110, r7983111, r7983112, r7983113, r7983114;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7983099, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7983100, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7983101);
        mpfr_init(r7983102);
        mpfr_init(r7983103);
        mpfr_init(r7983104);
        mpfr_init_set_str(r7983105, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7983106);
        mpfr_init(r7983107);
        mpfr_init(r7983108);
        mpfr_init(r7983109);
        mpfr_init_set_str(r7983110, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7983111);
        mpfr_init(r7983112);
        mpfr_init(r7983113);
        mpfr_init(r7983114);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7983101, x, MPFR_RNDN);
        mpfr_mul(r7983102, r7983101, r7983101, MPFR_RNDN);
        mpfr_mul(r7983103, r7983100, r7983102, MPFR_RNDN);
        mpfr_add(r7983104, r7983099, r7983103, MPFR_RNDN);
        ;
        mpfr_mul(r7983106, r7983102, r7983101, MPFR_RNDN);
        mpfr_mul(r7983107, r7983106, r7983101, MPFR_RNDN);
        mpfr_mul(r7983108, r7983105, r7983107, MPFR_RNDN);
        mpfr_add(r7983109, r7983104, r7983108, MPFR_RNDN);
        ;
        mpfr_mul(r7983111, r7983107, r7983101, MPFR_RNDN);
        mpfr_mul(r7983112, r7983111, r7983101, MPFR_RNDN);
        mpfr_mul(r7983113, r7983110, r7983112, MPFR_RNDN);
        mpfr_add(r7983114, r7983109, r7983113, MPFR_RNDN);
        return mpfr_get_d(r7983114, MPFR_RNDN);
}

