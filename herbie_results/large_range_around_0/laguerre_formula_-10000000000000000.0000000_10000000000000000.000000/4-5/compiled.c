#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10002057 = 1.0;
        float r10002058 = -5.0;
        float r10002059 = x;
        float r10002060 = r10002058 * r10002059;
        float r10002061 = r10002057 + r10002060;
        float r10002062 = 5.0;
        float r10002063 = r10002059 * r10002059;
        float r10002064 = r10002062 * r10002063;
        float r10002065 = r10002061 + r10002064;
        float r10002066 = -1.666667;
        float r10002067 = r10002063 * r10002059;
        float r10002068 = r10002066 * r10002067;
        float r10002069 = r10002065 + r10002068;
        float r10002070 = 0.208333;
        float r10002071 = r10002067 * r10002059;
        float r10002072 = r10002070 * r10002071;
        float r10002073 = r10002069 + r10002072;
        float r10002074 = -0.008333;
        float r10002075 = r10002071 * r10002059;
        float r10002076 = r10002074 * r10002075;
        float r10002077 = r10002073 + r10002076;
        return r10002077;
}

double f_id(double x) {
        double r10002078 = 1.0;
        double r10002079 = -5.0;
        double r10002080 = x;
        double r10002081 = r10002079 * r10002080;
        double r10002082 = r10002078 + r10002081;
        double r10002083 = 5.0;
        double r10002084 = r10002080 * r10002080;
        double r10002085 = r10002083 * r10002084;
        double r10002086 = r10002082 + r10002085;
        double r10002087 = -1.666667;
        double r10002088 = r10002084 * r10002080;
        double r10002089 = r10002087 * r10002088;
        double r10002090 = r10002086 + r10002089;
        double r10002091 = 0.208333;
        double r10002092 = r10002088 * r10002080;
        double r10002093 = r10002091 * r10002092;
        double r10002094 = r10002090 + r10002093;
        double r10002095 = -0.008333;
        double r10002096 = r10002092 * r10002080;
        double r10002097 = r10002095 * r10002096;
        double r10002098 = r10002094 + r10002097;
        return r10002098;
}


double f_of(float x) {
        float r10002099 = x;
        float r10002100 = -5.0;
        float r10002101 = r10002099 * r10002100;
        float r10002102 = 1.0;
        float r10002103 = r10002101 + r10002102;
        float r10002104 = 3;
        float r10002105 = pow(r10002099, r10002104);
        float r10002106 = 1;
        float r10002107 = r10002104 + r10002106;
        float r10002108 = pow(r10002105, r10002107);
        float r10002109 = cbrt(r10002108);
        float r10002110 = -0.008333;
        float r10002111 = r10002110 * r10002099;
        float r10002112 = 0.208333;
        float r10002113 = r10002111 + r10002112;
        float r10002114 = r10002109 * r10002113;
        float r10002115 = r10002099 * r10002099;
        float r10002116 = -1.666667;
        float r10002117 = r10002116 * r10002099;
        float r10002118 = 5.0;
        float r10002119 = r10002117 + r10002118;
        float r10002120 = r10002115 * r10002119;
        float r10002121 = r10002114 + r10002120;
        float r10002122 = r10002103 + r10002121;
        return r10002122;
}

double f_od(double x) {
        double r10002123 = x;
        double r10002124 = -5.0;
        double r10002125 = r10002123 * r10002124;
        double r10002126 = 1.0;
        double r10002127 = r10002125 + r10002126;
        double r10002128 = 3;
        double r10002129 = pow(r10002123, r10002128);
        double r10002130 = 1;
        double r10002131 = r10002128 + r10002130;
        double r10002132 = pow(r10002129, r10002131);
        double r10002133 = cbrt(r10002132);
        double r10002134 = -0.008333;
        double r10002135 = r10002134 * r10002123;
        double r10002136 = 0.208333;
        double r10002137 = r10002135 + r10002136;
        double r10002138 = r10002133 * r10002137;
        double r10002139 = r10002123 * r10002123;
        double r10002140 = -1.666667;
        double r10002141 = r10002140 * r10002123;
        double r10002142 = 5.0;
        double r10002143 = r10002141 + r10002142;
        double r10002144 = r10002139 * r10002143;
        double r10002145 = r10002138 + r10002144;
        double r10002146 = r10002127 + r10002145;
        return r10002146;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10002147, r10002148, r10002149, r10002150, r10002151, r10002152, r10002153, r10002154, r10002155, r10002156, r10002157, r10002158, r10002159, r10002160, r10002161, r10002162, r10002163, r10002164, r10002165, r10002166, r10002167;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10002147, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10002148, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10002149);
        mpfr_init(r10002150);
        mpfr_init(r10002151);
        mpfr_init_set_str(r10002152, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10002153);
        mpfr_init(r10002154);
        mpfr_init(r10002155);
        mpfr_init_set_str(r10002156, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10002157);
        mpfr_init(r10002158);
        mpfr_init(r10002159);
        mpfr_init_set_str(r10002160, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10002161);
        mpfr_init(r10002162);
        mpfr_init(r10002163);
        mpfr_init_set_str(r10002164, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10002165);
        mpfr_init(r10002166);
        mpfr_init(r10002167);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10002149, x, MPFR_RNDN);
        mpfr_mul(r10002150, r10002148, r10002149, MPFR_RNDN);
        mpfr_add(r10002151, r10002147, r10002150, MPFR_RNDN);
        ;
        mpfr_mul(r10002153, r10002149, r10002149, MPFR_RNDN);
        mpfr_mul(r10002154, r10002152, r10002153, MPFR_RNDN);
        mpfr_add(r10002155, r10002151, r10002154, MPFR_RNDN);
        ;
        mpfr_mul(r10002157, r10002153, r10002149, MPFR_RNDN);
        mpfr_mul(r10002158, r10002156, r10002157, MPFR_RNDN);
        mpfr_add(r10002159, r10002155, r10002158, MPFR_RNDN);
        ;
        mpfr_mul(r10002161, r10002157, r10002149, MPFR_RNDN);
        mpfr_mul(r10002162, r10002160, r10002161, MPFR_RNDN);
        mpfr_add(r10002163, r10002159, r10002162, MPFR_RNDN);
        ;
        mpfr_mul(r10002165, r10002161, r10002149, MPFR_RNDN);
        mpfr_mul(r10002166, r10002164, r10002165, MPFR_RNDN);
        mpfr_add(r10002167, r10002163, r10002166, MPFR_RNDN);
        return mpfr_get_d(r10002167, MPFR_RNDN);
}

static mpfr_t r10002168, r10002169, r10002170, r10002171, r10002172, r10002173, r10002174, r10002175, r10002176, r10002177, r10002178, r10002179, r10002180, r10002181, r10002182, r10002183, r10002184, r10002185, r10002186, r10002187, r10002188, r10002189, r10002190, r10002191;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10002168);
        mpfr_init_set_str(r10002169, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10002170);
        mpfr_init_set_str(r10002171, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10002172);
        mpfr_init_set_str(r10002173, "3", 10, MPFR_RNDN);
        mpfr_init(r10002174);
        mpfr_init_set_str(r10002175, "1", 10, MPFR_RNDN);
        mpfr_init(r10002176);
        mpfr_init(r10002177);
        mpfr_init(r10002178);
        mpfr_init_set_str(r10002179, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10002180);
        mpfr_init_set_str(r10002181, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10002182);
        mpfr_init(r10002183);
        mpfr_init(r10002184);
        mpfr_init_set_str(r10002185, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10002186);
        mpfr_init_set_str(r10002187, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10002188);
        mpfr_init(r10002189);
        mpfr_init(r10002190);
        mpfr_init(r10002191);
}

double f_fm(double x) {
        mpfr_set_d(r10002168, x, MPFR_RNDN);
        ;
        mpfr_mul(r10002170, r10002168, r10002169, MPFR_RNDN);
        ;
        mpfr_add(r10002172, r10002170, r10002171, MPFR_RNDN);
        ;
        mpfr_pow(r10002174, r10002168, r10002173, MPFR_RNDN);
        ;
        mpfr_add(r10002176, r10002173, r10002175, MPFR_RNDN);
        mpfr_pow(r10002177, r10002174, r10002176, MPFR_RNDN);
        mpfr_cbrt(r10002178, r10002177, MPFR_RNDN);
        ;
        mpfr_mul(r10002180, r10002179, r10002168, MPFR_RNDN);
        ;
        mpfr_add(r10002182, r10002180, r10002181, MPFR_RNDN);
        mpfr_mul(r10002183, r10002178, r10002182, MPFR_RNDN);
        mpfr_mul(r10002184, r10002168, r10002168, MPFR_RNDN);
        ;
        mpfr_mul(r10002186, r10002185, r10002168, MPFR_RNDN);
        ;
        mpfr_add(r10002188, r10002186, r10002187, MPFR_RNDN);
        mpfr_mul(r10002189, r10002184, r10002188, MPFR_RNDN);
        mpfr_add(r10002190, r10002183, r10002189, MPFR_RNDN);
        mpfr_add(r10002191, r10002172, r10002190, MPFR_RNDN);
        return mpfr_get_d(r10002191, MPFR_RNDN);
}

static mpfr_t r10002192, r10002193, r10002194, r10002195, r10002196, r10002197, r10002198, r10002199, r10002200, r10002201, r10002202, r10002203, r10002204, r10002205, r10002206, r10002207, r10002208, r10002209, r10002210, r10002211, r10002212, r10002213, r10002214, r10002215;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10002192);
        mpfr_init_set_str(r10002193, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10002194);
        mpfr_init_set_str(r10002195, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10002196);
        mpfr_init_set_str(r10002197, "3", 10, MPFR_RNDN);
        mpfr_init(r10002198);
        mpfr_init_set_str(r10002199, "1", 10, MPFR_RNDN);
        mpfr_init(r10002200);
        mpfr_init(r10002201);
        mpfr_init(r10002202);
        mpfr_init_set_str(r10002203, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10002204);
        mpfr_init_set_str(r10002205, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10002206);
        mpfr_init(r10002207);
        mpfr_init(r10002208);
        mpfr_init_set_str(r10002209, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10002210);
        mpfr_init_set_str(r10002211, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10002212);
        mpfr_init(r10002213);
        mpfr_init(r10002214);
        mpfr_init(r10002215);
}

double f_dm(double x) {
        mpfr_set_d(r10002192, x, MPFR_RNDN);
        ;
        mpfr_mul(r10002194, r10002192, r10002193, MPFR_RNDN);
        ;
        mpfr_add(r10002196, r10002194, r10002195, MPFR_RNDN);
        ;
        mpfr_pow(r10002198, r10002192, r10002197, MPFR_RNDN);
        ;
        mpfr_add(r10002200, r10002197, r10002199, MPFR_RNDN);
        mpfr_pow(r10002201, r10002198, r10002200, MPFR_RNDN);
        mpfr_cbrt(r10002202, r10002201, MPFR_RNDN);
        ;
        mpfr_mul(r10002204, r10002203, r10002192, MPFR_RNDN);
        ;
        mpfr_add(r10002206, r10002204, r10002205, MPFR_RNDN);
        mpfr_mul(r10002207, r10002202, r10002206, MPFR_RNDN);
        mpfr_mul(r10002208, r10002192, r10002192, MPFR_RNDN);
        ;
        mpfr_mul(r10002210, r10002209, r10002192, MPFR_RNDN);
        ;
        mpfr_add(r10002212, r10002210, r10002211, MPFR_RNDN);
        mpfr_mul(r10002213, r10002208, r10002212, MPFR_RNDN);
        mpfr_add(r10002214, r10002207, r10002213, MPFR_RNDN);
        mpfr_add(r10002215, r10002196, r10002214, MPFR_RNDN);
        return mpfr_get_d(r10002215, MPFR_RNDN);
}

