#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r29571099 = 0.375;
        float r29571100 = -3.75;
        float r29571101 = x;
        float r29571102 = r29571101 * r29571101;
        float r29571103 = r29571100 * r29571102;
        float r29571104 = r29571099 + r29571103;
        float r29571105 = 4.375;
        float r29571106 = r29571102 * r29571101;
        float r29571107 = r29571106 * r29571101;
        float r29571108 = r29571105 * r29571107;
        float r29571109 = r29571104 + r29571108;
        return r29571109;
}

double f_id(double x) {
        double r29571110 = 0.375;
        double r29571111 = -3.75;
        double r29571112 = x;
        double r29571113 = r29571112 * r29571112;
        double r29571114 = r29571111 * r29571113;
        double r29571115 = r29571110 + r29571114;
        double r29571116 = 4.375;
        double r29571117 = r29571113 * r29571112;
        double r29571118 = r29571117 * r29571112;
        double r29571119 = r29571116 * r29571118;
        double r29571120 = r29571115 + r29571119;
        return r29571120;
}


double f_of(float x) {
        float r29571121 = 0.375;
        float r29571122 = -3.75;
        float r29571123 = x;
        float r29571124 = r29571123 * r29571123;
        float r29571125 = r29571122 * r29571124;
        float r29571126 = r29571121 + r29571125;
        float r29571127 = exp(r29571126);
        float r29571128 = 4.375;
        float r29571129 = exp(r29571128);
        float r29571130 = r29571124 * r29571124;
        float r29571131 = pow(r29571129, r29571130);
        float r29571132 = r29571127 * r29571131;
        float r29571133 = log(r29571132);
        return r29571133;
}

double f_od(double x) {
        double r29571134 = 0.375;
        double r29571135 = -3.75;
        double r29571136 = x;
        double r29571137 = r29571136 * r29571136;
        double r29571138 = r29571135 * r29571137;
        double r29571139 = r29571134 + r29571138;
        double r29571140 = exp(r29571139);
        double r29571141 = 4.375;
        double r29571142 = exp(r29571141);
        double r29571143 = r29571137 * r29571137;
        double r29571144 = pow(r29571142, r29571143);
        double r29571145 = r29571140 * r29571144;
        double r29571146 = log(r29571145);
        return r29571146;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29571147, r29571148, r29571149, r29571150, r29571151, r29571152, r29571153, r29571154, r29571155, r29571156, r29571157;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571147, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571148, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r29571149);
        mpfr_init(r29571150);
        mpfr_init(r29571151);
        mpfr_init(r29571152);
        mpfr_init_set_str(r29571153, "4.375", 10, MPFR_RNDN);
        mpfr_init(r29571154);
        mpfr_init(r29571155);
        mpfr_init(r29571156);
        mpfr_init(r29571157);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r29571149, x, MPFR_RNDN);
        mpfr_mul(r29571150, r29571149, r29571149, MPFR_RNDN);
        mpfr_mul(r29571151, r29571148, r29571150, MPFR_RNDN);
        mpfr_add(r29571152, r29571147, r29571151, MPFR_RNDN);
        ;
        mpfr_mul(r29571154, r29571150, r29571149, MPFR_RNDN);
        mpfr_mul(r29571155, r29571154, r29571149, MPFR_RNDN);
        mpfr_mul(r29571156, r29571153, r29571155, MPFR_RNDN);
        mpfr_add(r29571157, r29571152, r29571156, MPFR_RNDN);
        return mpfr_get_d(r29571157, MPFR_RNDN);
}

static mpfr_t r29571158, r29571159, r29571160, r29571161, r29571162, r29571163, r29571164, r29571165, r29571166, r29571167, r29571168, r29571169, r29571170;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571158, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571159, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r29571160);
        mpfr_init(r29571161);
        mpfr_init(r29571162);
        mpfr_init(r29571163);
        mpfr_init(r29571164);
        mpfr_init_set_str(r29571165, "4.375", 10, MPFR_RNDN);
        mpfr_init(r29571166);
        mpfr_init(r29571167);
        mpfr_init(r29571168);
        mpfr_init(r29571169);
        mpfr_init(r29571170);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r29571160, x, MPFR_RNDN);
        mpfr_mul(r29571161, r29571160, r29571160, MPFR_RNDN);
        mpfr_mul(r29571162, r29571159, r29571161, MPFR_RNDN);
        mpfr_add(r29571163, r29571158, r29571162, MPFR_RNDN);
        mpfr_exp(r29571164, r29571163, MPFR_RNDN);
        ;
        mpfr_exp(r29571166, r29571165, MPFR_RNDN);
        mpfr_mul(r29571167, r29571161, r29571161, MPFR_RNDN);
        mpfr_pow(r29571168, r29571166, r29571167, MPFR_RNDN);
        mpfr_mul(r29571169, r29571164, r29571168, MPFR_RNDN);
        mpfr_log(r29571170, r29571169, MPFR_RNDN);
        return mpfr_get_d(r29571170, MPFR_RNDN);
}

static mpfr_t r29571171, r29571172, r29571173, r29571174, r29571175, r29571176, r29571177, r29571178, r29571179, r29571180, r29571181, r29571182, r29571183;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29571171, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r29571172, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r29571173);
        mpfr_init(r29571174);
        mpfr_init(r29571175);
        mpfr_init(r29571176);
        mpfr_init(r29571177);
        mpfr_init_set_str(r29571178, "4.375", 10, MPFR_RNDN);
        mpfr_init(r29571179);
        mpfr_init(r29571180);
        mpfr_init(r29571181);
        mpfr_init(r29571182);
        mpfr_init(r29571183);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r29571173, x, MPFR_RNDN);
        mpfr_mul(r29571174, r29571173, r29571173, MPFR_RNDN);
        mpfr_mul(r29571175, r29571172, r29571174, MPFR_RNDN);
        mpfr_add(r29571176, r29571171, r29571175, MPFR_RNDN);
        mpfr_exp(r29571177, r29571176, MPFR_RNDN);
        ;
        mpfr_exp(r29571179, r29571178, MPFR_RNDN);
        mpfr_mul(r29571180, r29571174, r29571174, MPFR_RNDN);
        mpfr_pow(r29571181, r29571179, r29571180, MPFR_RNDN);
        mpfr_mul(r29571182, r29571177, r29571181, MPFR_RNDN);
        mpfr_log(r29571183, r29571182, MPFR_RNDN);
        return mpfr_get_d(r29571183, MPFR_RNDN);
}

