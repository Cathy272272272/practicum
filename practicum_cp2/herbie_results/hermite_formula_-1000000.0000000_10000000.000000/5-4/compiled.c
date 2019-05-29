#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8204088 = 12.0;
        float r8204089 = -48.0;
        float r8204090 = x;
        float r8204091 = r8204090 * r8204090;
        float r8204092 = r8204089 * r8204091;
        float r8204093 = r8204088 + r8204092;
        float r8204094 = 16.0;
        float r8204095 = r8204091 * r8204090;
        float r8204096 = r8204095 * r8204090;
        float r8204097 = r8204094 * r8204096;
        float r8204098 = r8204093 + r8204097;
        return r8204098;
}

double f_id(double x) {
        double r8204099 = 12.0;
        double r8204100 = -48.0;
        double r8204101 = x;
        double r8204102 = r8204101 * r8204101;
        double r8204103 = r8204100 * r8204102;
        double r8204104 = r8204099 + r8204103;
        double r8204105 = 16.0;
        double r8204106 = r8204102 * r8204101;
        double r8204107 = r8204106 * r8204101;
        double r8204108 = r8204105 * r8204107;
        double r8204109 = r8204104 + r8204108;
        return r8204109;
}


double f_of(float x) {
        float r8204110 = 12.0;
        float r8204111 = -48.0;
        float r8204112 = x;
        float r8204113 = r8204111 * r8204112;
        float r8204114 = r8204113 * r8204112;
        float r8204115 = r8204110 + r8204114;
        float r8204116 = 16.0;
        float r8204117 = r8204112 * r8204112;
        float r8204118 = r8204117 * r8204112;
        float r8204119 = r8204118 * r8204112;
        float r8204120 = r8204116 * r8204119;
        float r8204121 = r8204115 + r8204120;
        return r8204121;
}

double f_od(double x) {
        double r8204122 = 12.0;
        double r8204123 = -48.0;
        double r8204124 = x;
        double r8204125 = r8204123 * r8204124;
        double r8204126 = r8204125 * r8204124;
        double r8204127 = r8204122 + r8204126;
        double r8204128 = 16.0;
        double r8204129 = r8204124 * r8204124;
        double r8204130 = r8204129 * r8204124;
        double r8204131 = r8204130 * r8204124;
        double r8204132 = r8204128 * r8204131;
        double r8204133 = r8204127 + r8204132;
        return r8204133;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8204134, r8204135, r8204136, r8204137, r8204138, r8204139, r8204140, r8204141, r8204142, r8204143, r8204144;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8204134, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204135, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r8204136);
        mpfr_init(r8204137);
        mpfr_init(r8204138);
        mpfr_init(r8204139);
        mpfr_init_set_str(r8204140, "16.0", 10, MPFR_RNDN);
        mpfr_init(r8204141);
        mpfr_init(r8204142);
        mpfr_init(r8204143);
        mpfr_init(r8204144);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8204136, x, MPFR_RNDN);
        mpfr_mul(r8204137, r8204136, r8204136, MPFR_RNDN);
        mpfr_mul(r8204138, r8204135, r8204137, MPFR_RNDN);
        mpfr_add(r8204139, r8204134, r8204138, MPFR_RNDN);
        ;
        mpfr_mul(r8204141, r8204137, r8204136, MPFR_RNDN);
        mpfr_mul(r8204142, r8204141, r8204136, MPFR_RNDN);
        mpfr_mul(r8204143, r8204140, r8204142, MPFR_RNDN);
        mpfr_add(r8204144, r8204139, r8204143, MPFR_RNDN);
        return mpfr_get_d(r8204144, MPFR_RNDN);
}

static mpfr_t r8204145, r8204146, r8204147, r8204148, r8204149, r8204150, r8204151, r8204152, r8204153, r8204154, r8204155, r8204156;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8204145, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204146, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r8204147);
        mpfr_init(r8204148);
        mpfr_init(r8204149);
        mpfr_init(r8204150);
        mpfr_init_set_str(r8204151, "16.0", 10, MPFR_RNDN);
        mpfr_init(r8204152);
        mpfr_init(r8204153);
        mpfr_init(r8204154);
        mpfr_init(r8204155);
        mpfr_init(r8204156);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8204147, x, MPFR_RNDN);
        mpfr_mul(r8204148, r8204146, r8204147, MPFR_RNDN);
        mpfr_mul(r8204149, r8204148, r8204147, MPFR_RNDN);
        mpfr_add(r8204150, r8204145, r8204149, MPFR_RNDN);
        ;
        mpfr_mul(r8204152, r8204147, r8204147, MPFR_RNDN);
        mpfr_mul(r8204153, r8204152, r8204147, MPFR_RNDN);
        mpfr_mul(r8204154, r8204153, r8204147, MPFR_RNDN);
        mpfr_mul(r8204155, r8204151, r8204154, MPFR_RNDN);
        mpfr_add(r8204156, r8204150, r8204155, MPFR_RNDN);
        return mpfr_get_d(r8204156, MPFR_RNDN);
}

static mpfr_t r8204157, r8204158, r8204159, r8204160, r8204161, r8204162, r8204163, r8204164, r8204165, r8204166, r8204167, r8204168;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8204157, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8204158, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r8204159);
        mpfr_init(r8204160);
        mpfr_init(r8204161);
        mpfr_init(r8204162);
        mpfr_init_set_str(r8204163, "16.0", 10, MPFR_RNDN);
        mpfr_init(r8204164);
        mpfr_init(r8204165);
        mpfr_init(r8204166);
        mpfr_init(r8204167);
        mpfr_init(r8204168);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8204159, x, MPFR_RNDN);
        mpfr_mul(r8204160, r8204158, r8204159, MPFR_RNDN);
        mpfr_mul(r8204161, r8204160, r8204159, MPFR_RNDN);
        mpfr_add(r8204162, r8204157, r8204161, MPFR_RNDN);
        ;
        mpfr_mul(r8204164, r8204159, r8204159, MPFR_RNDN);
        mpfr_mul(r8204165, r8204164, r8204159, MPFR_RNDN);
        mpfr_mul(r8204166, r8204165, r8204159, MPFR_RNDN);
        mpfr_mul(r8204167, r8204163, r8204166, MPFR_RNDN);
        mpfr_add(r8204168, r8204162, r8204167, MPFR_RNDN);
        return mpfr_get_d(r8204168, MPFR_RNDN);
}

