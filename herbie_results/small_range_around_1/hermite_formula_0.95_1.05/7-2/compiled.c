#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r63171059 = -2.0;
        float r63171060 = 4.0;
        float r63171061 = x;
        float r63171062 = r63171061 * r63171061;
        float r63171063 = r63171060 * r63171062;
        float r63171064 = r63171059 + r63171063;
        return r63171064;
}

double f_id(double x) {
        double r63171065 = -2.0;
        double r63171066 = 4.0;
        double r63171067 = x;
        double r63171068 = r63171067 * r63171067;
        double r63171069 = r63171066 * r63171068;
        double r63171070 = r63171065 + r63171069;
        return r63171070;
}


double f_of(float x) {
        float r63171071 = -2.0;
        float r63171072 = r63171071 * r63171071;
        float r63171073 = 4.0;
        float r63171074 = x;
        float r63171075 = 3;
        float r63171076 = pow(r63171074, r63171075);
        float r63171077 = r63171074 * r63171073;
        float r63171078 = r63171076 * r63171077;
        float r63171079 = r63171073 * r63171078;
        float r63171080 = r63171072 - r63171079;
        float r63171081 = r63171074 * r63171074;
        float r63171082 = r63171073 * r63171081;
        float r63171083 = r63171071 - r63171082;
        float r63171084 = r63171080 / r63171083;
        return r63171084;
}

double f_od(double x) {
        double r63171085 = -2.0;
        double r63171086 = r63171085 * r63171085;
        double r63171087 = 4.0;
        double r63171088 = x;
        double r63171089 = 3;
        double r63171090 = pow(r63171088, r63171089);
        double r63171091 = r63171088 * r63171087;
        double r63171092 = r63171090 * r63171091;
        double r63171093 = r63171087 * r63171092;
        double r63171094 = r63171086 - r63171093;
        double r63171095 = r63171088 * r63171088;
        double r63171096 = r63171087 * r63171095;
        double r63171097 = r63171085 - r63171096;
        double r63171098 = r63171094 / r63171097;
        return r63171098;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63171099, r63171100, r63171101, r63171102, r63171103, r63171104;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63171099, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63171100, "4.0", 10, MPFR_RNDN);
        mpfr_init(r63171101);
        mpfr_init(r63171102);
        mpfr_init(r63171103);
        mpfr_init(r63171104);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r63171101, x, MPFR_RNDN);
        mpfr_mul(r63171102, r63171101, r63171101, MPFR_RNDN);
        mpfr_mul(r63171103, r63171100, r63171102, MPFR_RNDN);
        mpfr_add(r63171104, r63171099, r63171103, MPFR_RNDN);
        return mpfr_get_d(r63171104, MPFR_RNDN);
}

static mpfr_t r63171105, r63171106, r63171107, r63171108, r63171109, r63171110, r63171111, r63171112, r63171113, r63171114, r63171115, r63171116, r63171117, r63171118;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63171105, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r63171106);
        mpfr_init_set_str(r63171107, "4.0", 10, MPFR_RNDN);
        mpfr_init(r63171108);
        mpfr_init_set_str(r63171109, "3", 10, MPFR_RNDN);
        mpfr_init(r63171110);
        mpfr_init(r63171111);
        mpfr_init(r63171112);
        mpfr_init(r63171113);
        mpfr_init(r63171114);
        mpfr_init(r63171115);
        mpfr_init(r63171116);
        mpfr_init(r63171117);
        mpfr_init(r63171118);
}

double f_fm(double x) {
        ;
        mpfr_mul(r63171106, r63171105, r63171105, MPFR_RNDN);
        ;
        mpfr_set_d(r63171108, x, MPFR_RNDN);
        ;
        mpfr_pow(r63171110, r63171108, r63171109, MPFR_RNDN);
        mpfr_mul(r63171111, r63171108, r63171107, MPFR_RNDN);
        mpfr_mul(r63171112, r63171110, r63171111, MPFR_RNDN);
        mpfr_mul(r63171113, r63171107, r63171112, MPFR_RNDN);
        mpfr_sub(r63171114, r63171106, r63171113, MPFR_RNDN);
        mpfr_mul(r63171115, r63171108, r63171108, MPFR_RNDN);
        mpfr_mul(r63171116, r63171107, r63171115, MPFR_RNDN);
        mpfr_sub(r63171117, r63171105, r63171116, MPFR_RNDN);
        mpfr_div(r63171118, r63171114, r63171117, MPFR_RNDN);
        return mpfr_get_d(r63171118, MPFR_RNDN);
}

static mpfr_t r63171119, r63171120, r63171121, r63171122, r63171123, r63171124, r63171125, r63171126, r63171127, r63171128, r63171129, r63171130, r63171131, r63171132;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63171119, "-2.0", 10, MPFR_RNDN);
        mpfr_init(r63171120);
        mpfr_init_set_str(r63171121, "4.0", 10, MPFR_RNDN);
        mpfr_init(r63171122);
        mpfr_init_set_str(r63171123, "3", 10, MPFR_RNDN);
        mpfr_init(r63171124);
        mpfr_init(r63171125);
        mpfr_init(r63171126);
        mpfr_init(r63171127);
        mpfr_init(r63171128);
        mpfr_init(r63171129);
        mpfr_init(r63171130);
        mpfr_init(r63171131);
        mpfr_init(r63171132);
}

double f_dm(double x) {
        ;
        mpfr_mul(r63171120, r63171119, r63171119, MPFR_RNDN);
        ;
        mpfr_set_d(r63171122, x, MPFR_RNDN);
        ;
        mpfr_pow(r63171124, r63171122, r63171123, MPFR_RNDN);
        mpfr_mul(r63171125, r63171122, r63171121, MPFR_RNDN);
        mpfr_mul(r63171126, r63171124, r63171125, MPFR_RNDN);
        mpfr_mul(r63171127, r63171121, r63171126, MPFR_RNDN);
        mpfr_sub(r63171128, r63171120, r63171127, MPFR_RNDN);
        mpfr_mul(r63171129, r63171122, r63171122, MPFR_RNDN);
        mpfr_mul(r63171130, r63171121, r63171129, MPFR_RNDN);
        mpfr_sub(r63171131, r63171119, r63171130, MPFR_RNDN);
        mpfr_div(r63171132, r63171128, r63171131, MPFR_RNDN);
        return mpfr_get_d(r63171132, MPFR_RNDN);
}

