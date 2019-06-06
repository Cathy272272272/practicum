#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r4599051 = 0.375;
        float r4599052 = -3.75;
        float r4599053 = x;
        float r4599054 = r4599053 * r4599053;
        float r4599055 = r4599052 * r4599054;
        float r4599056 = r4599051 + r4599055;
        float r4599057 = 4.375;
        float r4599058 = r4599054 * r4599053;
        float r4599059 = r4599058 * r4599053;
        float r4599060 = r4599057 * r4599059;
        float r4599061 = r4599056 + r4599060;
        return r4599061;
}

double f_id(double x) {
        double r4599062 = 0.375;
        double r4599063 = -3.75;
        double r4599064 = x;
        double r4599065 = r4599064 * r4599064;
        double r4599066 = r4599063 * r4599065;
        double r4599067 = r4599062 + r4599066;
        double r4599068 = 4.375;
        double r4599069 = r4599065 * r4599064;
        double r4599070 = r4599069 * r4599064;
        double r4599071 = r4599068 * r4599070;
        double r4599072 = r4599067 + r4599071;
        return r4599072;
}


double f_of(float x) {
        float r4599073 = 0.375;
        float r4599074 = x;
        float r4599075 = 4.375;
        float r4599076 = r4599074 * r4599075;
        float r4599077 = 3;
        float r4599078 = pow(r4599074, r4599077);
        float r4599079 = r4599076 * r4599078;
        float r4599080 = -3.75;
        float r4599081 = r4599074 * r4599080;
        float r4599082 = r4599081 * r4599074;
        float r4599083 = r4599079 + r4599082;
        float r4599084 = r4599073 + r4599083;
        return r4599084;
}

double f_od(double x) {
        double r4599085 = 0.375;
        double r4599086 = x;
        double r4599087 = 4.375;
        double r4599088 = r4599086 * r4599087;
        double r4599089 = 3;
        double r4599090 = pow(r4599086, r4599089);
        double r4599091 = r4599088 * r4599090;
        double r4599092 = -3.75;
        double r4599093 = r4599086 * r4599092;
        double r4599094 = r4599093 * r4599086;
        double r4599095 = r4599091 + r4599094;
        double r4599096 = r4599085 + r4599095;
        return r4599096;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4599097, r4599098, r4599099, r4599100, r4599101, r4599102, r4599103, r4599104, r4599105, r4599106, r4599107;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599097, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r4599098, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4599099);
        mpfr_init(r4599100);
        mpfr_init(r4599101);
        mpfr_init(r4599102);
        mpfr_init_set_str(r4599103, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4599104);
        mpfr_init(r4599105);
        mpfr_init(r4599106);
        mpfr_init(r4599107);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4599099, x, MPFR_RNDN);
        mpfr_mul(r4599100, r4599099, r4599099, MPFR_RNDN);
        mpfr_mul(r4599101, r4599098, r4599100, MPFR_RNDN);
        mpfr_add(r4599102, r4599097, r4599101, MPFR_RNDN);
        ;
        mpfr_mul(r4599104, r4599100, r4599099, MPFR_RNDN);
        mpfr_mul(r4599105, r4599104, r4599099, MPFR_RNDN);
        mpfr_mul(r4599106, r4599103, r4599105, MPFR_RNDN);
        mpfr_add(r4599107, r4599102, r4599106, MPFR_RNDN);
        return mpfr_get_d(r4599107, MPFR_RNDN);
}

static mpfr_t r4599108, r4599109, r4599110, r4599111, r4599112, r4599113, r4599114, r4599115, r4599116, r4599117, r4599118, r4599119;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599108, "0.375", 10, MPFR_RNDN);
        mpfr_init(r4599109);
        mpfr_init_set_str(r4599110, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4599111);
        mpfr_init_set_str(r4599112, "3", 10, MPFR_RNDN);
        mpfr_init(r4599113);
        mpfr_init(r4599114);
        mpfr_init_set_str(r4599115, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4599116);
        mpfr_init(r4599117);
        mpfr_init(r4599118);
        mpfr_init(r4599119);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4599109, x, MPFR_RNDN);
        ;
        mpfr_mul(r4599111, r4599109, r4599110, MPFR_RNDN);
        ;
        mpfr_pow(r4599113, r4599109, r4599112, MPFR_RNDN);
        mpfr_mul(r4599114, r4599111, r4599113, MPFR_RNDN);
        ;
        mpfr_mul(r4599116, r4599109, r4599115, MPFR_RNDN);
        mpfr_mul(r4599117, r4599116, r4599109, MPFR_RNDN);
        mpfr_add(r4599118, r4599114, r4599117, MPFR_RNDN);
        mpfr_add(r4599119, r4599108, r4599118, MPFR_RNDN);
        return mpfr_get_d(r4599119, MPFR_RNDN);
}

static mpfr_t r4599120, r4599121, r4599122, r4599123, r4599124, r4599125, r4599126, r4599127, r4599128, r4599129, r4599130, r4599131;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4599120, "0.375", 10, MPFR_RNDN);
        mpfr_init(r4599121);
        mpfr_init_set_str(r4599122, "4.375", 10, MPFR_RNDN);
        mpfr_init(r4599123);
        mpfr_init_set_str(r4599124, "3", 10, MPFR_RNDN);
        mpfr_init(r4599125);
        mpfr_init(r4599126);
        mpfr_init_set_str(r4599127, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r4599128);
        mpfr_init(r4599129);
        mpfr_init(r4599130);
        mpfr_init(r4599131);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4599121, x, MPFR_RNDN);
        ;
        mpfr_mul(r4599123, r4599121, r4599122, MPFR_RNDN);
        ;
        mpfr_pow(r4599125, r4599121, r4599124, MPFR_RNDN);
        mpfr_mul(r4599126, r4599123, r4599125, MPFR_RNDN);
        ;
        mpfr_mul(r4599128, r4599121, r4599127, MPFR_RNDN);
        mpfr_mul(r4599129, r4599128, r4599121, MPFR_RNDN);
        mpfr_add(r4599130, r4599126, r4599129, MPFR_RNDN);
        mpfr_add(r4599131, r4599120, r4599130, MPFR_RNDN);
        return mpfr_get_d(r4599131, MPFR_RNDN);
}

