#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r48609074 = -0.5;
        float r48609075 = 1.5;
        float r48609076 = x;
        float r48609077 = r48609076 * r48609076;
        float r48609078 = r48609075 * r48609077;
        float r48609079 = r48609074 + r48609078;
        return r48609079;
}

double f_id(double x) {
        double r48609080 = -0.5;
        double r48609081 = 1.5;
        double r48609082 = x;
        double r48609083 = r48609082 * r48609082;
        double r48609084 = r48609081 * r48609083;
        double r48609085 = r48609080 + r48609084;
        return r48609085;
}


double f_of(float x) {
        float r48609086 = 1.5;
        float r48609087 = x;
        float r48609088 = r48609086 * r48609087;
        float r48609089 = r48609088 * r48609087;
        float r48609090 = r48609089 * r48609089;
        float r48609091 = -0.5;
        float r48609092 = r48609087 * r48609091;
        float r48609093 = r48609092 * r48609088;
        float r48609094 = r48609091 * r48609091;
        float r48609095 = r48609093 - r48609094;
        float r48609096 = r48609090 - r48609095;
        float r48609097 = r48609087 * r48609087;
        float r48609098 = r48609086 * r48609097;
        float r48609099 = r48609091 + r48609098;
        float r48609100 = r48609098 * r48609098;
        float r48609101 = r48609091 * r48609098;
        float r48609102 = r48609100 - r48609101;
        float r48609103 = r48609094 + r48609102;
        float r48609104 = r48609099 / r48609103;
        float r48609105 = r48609096 * r48609104;
        return r48609105;
}

double f_od(double x) {
        double r48609106 = 1.5;
        double r48609107 = x;
        double r48609108 = r48609106 * r48609107;
        double r48609109 = r48609108 * r48609107;
        double r48609110 = r48609109 * r48609109;
        double r48609111 = -0.5;
        double r48609112 = r48609107 * r48609111;
        double r48609113 = r48609112 * r48609108;
        double r48609114 = r48609111 * r48609111;
        double r48609115 = r48609113 - r48609114;
        double r48609116 = r48609110 - r48609115;
        double r48609117 = r48609107 * r48609107;
        double r48609118 = r48609106 * r48609117;
        double r48609119 = r48609111 + r48609118;
        double r48609120 = r48609118 * r48609118;
        double r48609121 = r48609111 * r48609118;
        double r48609122 = r48609120 - r48609121;
        double r48609123 = r48609114 + r48609122;
        double r48609124 = r48609119 / r48609123;
        double r48609125 = r48609116 * r48609124;
        return r48609125;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48609126, r48609127, r48609128, r48609129, r48609130, r48609131;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609126, "-0.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r48609127, "1.5", 10, MPFR_RNDN);
        mpfr_init(r48609128);
        mpfr_init(r48609129);
        mpfr_init(r48609130);
        mpfr_init(r48609131);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r48609128, x, MPFR_RNDN);
        mpfr_mul(r48609129, r48609128, r48609128, MPFR_RNDN);
        mpfr_mul(r48609130, r48609127, r48609129, MPFR_RNDN);
        mpfr_add(r48609131, r48609126, r48609130, MPFR_RNDN);
        return mpfr_get_d(r48609131, MPFR_RNDN);
}

static mpfr_t r48609132, r48609133, r48609134, r48609135, r48609136, r48609137, r48609138, r48609139, r48609140, r48609141, r48609142, r48609143, r48609144, r48609145, r48609146, r48609147, r48609148, r48609149, r48609150, r48609151;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609132, "1.5", 10, MPFR_RNDN);
        mpfr_init(r48609133);
        mpfr_init(r48609134);
        mpfr_init(r48609135);
        mpfr_init(r48609136);
        mpfr_init_set_str(r48609137, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r48609138);
        mpfr_init(r48609139);
        mpfr_init(r48609140);
        mpfr_init(r48609141);
        mpfr_init(r48609142);
        mpfr_init(r48609143);
        mpfr_init(r48609144);
        mpfr_init(r48609145);
        mpfr_init(r48609146);
        mpfr_init(r48609147);
        mpfr_init(r48609148);
        mpfr_init(r48609149);
        mpfr_init(r48609150);
        mpfr_init(r48609151);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r48609133, x, MPFR_RNDN);
        mpfr_mul(r48609134, r48609132, r48609133, MPFR_RNDN);
        mpfr_mul(r48609135, r48609134, r48609133, MPFR_RNDN);
        mpfr_mul(r48609136, r48609135, r48609135, MPFR_RNDN);
        ;
        mpfr_mul(r48609138, r48609133, r48609137, MPFR_RNDN);
        mpfr_mul(r48609139, r48609138, r48609134, MPFR_RNDN);
        mpfr_mul(r48609140, r48609137, r48609137, MPFR_RNDN);
        mpfr_sub(r48609141, r48609139, r48609140, MPFR_RNDN);
        mpfr_sub(r48609142, r48609136, r48609141, MPFR_RNDN);
        mpfr_mul(r48609143, r48609133, r48609133, MPFR_RNDN);
        mpfr_mul(r48609144, r48609132, r48609143, MPFR_RNDN);
        mpfr_add(r48609145, r48609137, r48609144, MPFR_RNDN);
        mpfr_mul(r48609146, r48609144, r48609144, MPFR_RNDN);
        mpfr_mul(r48609147, r48609137, r48609144, MPFR_RNDN);
        mpfr_sub(r48609148, r48609146, r48609147, MPFR_RNDN);
        mpfr_add(r48609149, r48609140, r48609148, MPFR_RNDN);
        mpfr_div(r48609150, r48609145, r48609149, MPFR_RNDN);
        mpfr_mul(r48609151, r48609142, r48609150, MPFR_RNDN);
        return mpfr_get_d(r48609151, MPFR_RNDN);
}

static mpfr_t r48609152, r48609153, r48609154, r48609155, r48609156, r48609157, r48609158, r48609159, r48609160, r48609161, r48609162, r48609163, r48609164, r48609165, r48609166, r48609167, r48609168, r48609169, r48609170, r48609171;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48609152, "1.5", 10, MPFR_RNDN);
        mpfr_init(r48609153);
        mpfr_init(r48609154);
        mpfr_init(r48609155);
        mpfr_init(r48609156);
        mpfr_init_set_str(r48609157, "-0.5", 10, MPFR_RNDN);
        mpfr_init(r48609158);
        mpfr_init(r48609159);
        mpfr_init(r48609160);
        mpfr_init(r48609161);
        mpfr_init(r48609162);
        mpfr_init(r48609163);
        mpfr_init(r48609164);
        mpfr_init(r48609165);
        mpfr_init(r48609166);
        mpfr_init(r48609167);
        mpfr_init(r48609168);
        mpfr_init(r48609169);
        mpfr_init(r48609170);
        mpfr_init(r48609171);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r48609153, x, MPFR_RNDN);
        mpfr_mul(r48609154, r48609152, r48609153, MPFR_RNDN);
        mpfr_mul(r48609155, r48609154, r48609153, MPFR_RNDN);
        mpfr_mul(r48609156, r48609155, r48609155, MPFR_RNDN);
        ;
        mpfr_mul(r48609158, r48609153, r48609157, MPFR_RNDN);
        mpfr_mul(r48609159, r48609158, r48609154, MPFR_RNDN);
        mpfr_mul(r48609160, r48609157, r48609157, MPFR_RNDN);
        mpfr_sub(r48609161, r48609159, r48609160, MPFR_RNDN);
        mpfr_sub(r48609162, r48609156, r48609161, MPFR_RNDN);
        mpfr_mul(r48609163, r48609153, r48609153, MPFR_RNDN);
        mpfr_mul(r48609164, r48609152, r48609163, MPFR_RNDN);
        mpfr_add(r48609165, r48609157, r48609164, MPFR_RNDN);
        mpfr_mul(r48609166, r48609164, r48609164, MPFR_RNDN);
        mpfr_mul(r48609167, r48609157, r48609164, MPFR_RNDN);
        mpfr_sub(r48609168, r48609166, r48609167, MPFR_RNDN);
        mpfr_add(r48609169, r48609160, r48609168, MPFR_RNDN);
        mpfr_div(r48609170, r48609165, r48609169, MPFR_RNDN);
        mpfr_mul(r48609171, r48609162, r48609170, MPFR_RNDN);
        return mpfr_get_d(r48609171, MPFR_RNDN);
}

