#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r64037090 = -1680.0;
        float r64037091 = x;
        float r64037092 = r64037090 * r64037091;
        float r64037093 = 3360.0;
        float r64037094 = r64037091 * r64037091;
        float r64037095 = r64037094 * r64037091;
        float r64037096 = r64037093 * r64037095;
        float r64037097 = r64037092 + r64037096;
        float r64037098 = -1344.0;
        float r64037099 = r64037095 * r64037091;
        float r64037100 = r64037099 * r64037091;
        float r64037101 = r64037098 * r64037100;
        float r64037102 = r64037097 + r64037101;
        float r64037103 = 128.0;
        float r64037104 = r64037100 * r64037091;
        float r64037105 = r64037104 * r64037091;
        float r64037106 = r64037103 * r64037105;
        float r64037107 = r64037102 + r64037106;
        return r64037107;
}

double f_id(double x) {
        double r64037108 = -1680.0;
        double r64037109 = x;
        double r64037110 = r64037108 * r64037109;
        double r64037111 = 3360.0;
        double r64037112 = r64037109 * r64037109;
        double r64037113 = r64037112 * r64037109;
        double r64037114 = r64037111 * r64037113;
        double r64037115 = r64037110 + r64037114;
        double r64037116 = -1344.0;
        double r64037117 = r64037113 * r64037109;
        double r64037118 = r64037117 * r64037109;
        double r64037119 = r64037116 * r64037118;
        double r64037120 = r64037115 + r64037119;
        double r64037121 = 128.0;
        double r64037122 = r64037118 * r64037109;
        double r64037123 = r64037122 * r64037109;
        double r64037124 = r64037121 * r64037123;
        double r64037125 = r64037120 + r64037124;
        return r64037125;
}


double f_of(float x) {
        float r64037126 = x;
        float r64037127 = r64037126 * r64037126;
        float r64037128 = r64037127 * r64037127;
        float r64037129 = 128.0;
        float r64037130 = r64037129 * r64037126;
        float r64037131 = r64037127 * r64037130;
        float r64037132 = r64037128 * r64037131;
        float r64037133 = -1344.0;
        float r64037134 = r64037126 * r64037133;
        float r64037135 = r64037128 * r64037134;
        float r64037136 = -1680.0;
        float r64037137 = r64037136 * r64037126;
        float r64037138 = 3360.0;
        float r64037139 = r64037138 * r64037126;
        float r64037140 = r64037127 * r64037139;
        float r64037141 = r64037137 + r64037140;
        float r64037142 = r64037135 + r64037141;
        float r64037143 = cbrt(r64037142);
        float r64037144 = r64037143 * r64037143;
        float r64037145 = r64037144 * r64037143;
        float r64037146 = r64037132 + r64037145;
        return r64037146;
}

double f_od(double x) {
        double r64037147 = x;
        double r64037148 = r64037147 * r64037147;
        double r64037149 = r64037148 * r64037148;
        double r64037150 = 128.0;
        double r64037151 = r64037150 * r64037147;
        double r64037152 = r64037148 * r64037151;
        double r64037153 = r64037149 * r64037152;
        double r64037154 = -1344.0;
        double r64037155 = r64037147 * r64037154;
        double r64037156 = r64037149 * r64037155;
        double r64037157 = -1680.0;
        double r64037158 = r64037157 * r64037147;
        double r64037159 = 3360.0;
        double r64037160 = r64037159 * r64037147;
        double r64037161 = r64037148 * r64037160;
        double r64037162 = r64037158 + r64037161;
        double r64037163 = r64037156 + r64037162;
        double r64037164 = cbrt(r64037163);
        double r64037165 = r64037164 * r64037164;
        double r64037166 = r64037165 * r64037164;
        double r64037167 = r64037153 + r64037166;
        return r64037167;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037168, r64037169, r64037170, r64037171, r64037172, r64037173, r64037174, r64037175, r64037176, r64037177, r64037178, r64037179, r64037180, r64037181, r64037182, r64037183, r64037184, r64037185;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037168, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r64037169);
        mpfr_init(r64037170);
        mpfr_init_set_str(r64037171, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r64037172);
        mpfr_init(r64037173);
        mpfr_init(r64037174);
        mpfr_init(r64037175);
        mpfr_init_set_str(r64037176, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r64037177);
        mpfr_init(r64037178);
        mpfr_init(r64037179);
        mpfr_init(r64037180);
        mpfr_init_set_str(r64037181, "128.0", 10, MPFR_RNDN);
        mpfr_init(r64037182);
        mpfr_init(r64037183);
        mpfr_init(r64037184);
        mpfr_init(r64037185);
}

double f_im(double x) {
        ;
        mpfr_set_d(r64037169, x, MPFR_RNDN);
        mpfr_mul(r64037170, r64037168, r64037169, MPFR_RNDN);
        ;
        mpfr_mul(r64037172, r64037169, r64037169, MPFR_RNDN);
        mpfr_mul(r64037173, r64037172, r64037169, MPFR_RNDN);
        mpfr_mul(r64037174, r64037171, r64037173, MPFR_RNDN);
        mpfr_add(r64037175, r64037170, r64037174, MPFR_RNDN);
        ;
        mpfr_mul(r64037177, r64037173, r64037169, MPFR_RNDN);
        mpfr_mul(r64037178, r64037177, r64037169, MPFR_RNDN);
        mpfr_mul(r64037179, r64037176, r64037178, MPFR_RNDN);
        mpfr_add(r64037180, r64037175, r64037179, MPFR_RNDN);
        ;
        mpfr_mul(r64037182, r64037178, r64037169, MPFR_RNDN);
        mpfr_mul(r64037183, r64037182, r64037169, MPFR_RNDN);
        mpfr_mul(r64037184, r64037181, r64037183, MPFR_RNDN);
        mpfr_add(r64037185, r64037180, r64037184, MPFR_RNDN);
        return mpfr_get_d(r64037185, MPFR_RNDN);
}

static mpfr_t r64037186, r64037187, r64037188, r64037189, r64037190, r64037191, r64037192, r64037193, r64037194, r64037195, r64037196, r64037197, r64037198, r64037199, r64037200, r64037201, r64037202, r64037203, r64037204, r64037205, r64037206;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64037186);
        mpfr_init(r64037187);
        mpfr_init(r64037188);
        mpfr_init_set_str(r64037189, "128.0", 10, MPFR_RNDN);
        mpfr_init(r64037190);
        mpfr_init(r64037191);
        mpfr_init(r64037192);
        mpfr_init_set_str(r64037193, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r64037194);
        mpfr_init(r64037195);
        mpfr_init_set_str(r64037196, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r64037197);
        mpfr_init_set_str(r64037198, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r64037199);
        mpfr_init(r64037200);
        mpfr_init(r64037201);
        mpfr_init(r64037202);
        mpfr_init(r64037203);
        mpfr_init(r64037204);
        mpfr_init(r64037205);
        mpfr_init(r64037206);
}

double f_fm(double x) {
        mpfr_set_d(r64037186, x, MPFR_RNDN);
        mpfr_mul(r64037187, r64037186, r64037186, MPFR_RNDN);
        mpfr_mul(r64037188, r64037187, r64037187, MPFR_RNDN);
        ;
        mpfr_mul(r64037190, r64037189, r64037186, MPFR_RNDN);
        mpfr_mul(r64037191, r64037187, r64037190, MPFR_RNDN);
        mpfr_mul(r64037192, r64037188, r64037191, MPFR_RNDN);
        ;
        mpfr_mul(r64037194, r64037186, r64037193, MPFR_RNDN);
        mpfr_mul(r64037195, r64037188, r64037194, MPFR_RNDN);
        ;
        mpfr_mul(r64037197, r64037196, r64037186, MPFR_RNDN);
        ;
        mpfr_mul(r64037199, r64037198, r64037186, MPFR_RNDN);
        mpfr_mul(r64037200, r64037187, r64037199, MPFR_RNDN);
        mpfr_add(r64037201, r64037197, r64037200, MPFR_RNDN);
        mpfr_add(r64037202, r64037195, r64037201, MPFR_RNDN);
        mpfr_cbrt(r64037203, r64037202, MPFR_RNDN);
        mpfr_mul(r64037204, r64037203, r64037203, MPFR_RNDN);
        mpfr_mul(r64037205, r64037204, r64037203, MPFR_RNDN);
        mpfr_add(r64037206, r64037192, r64037205, MPFR_RNDN);
        return mpfr_get_d(r64037206, MPFR_RNDN);
}

static mpfr_t r64037207, r64037208, r64037209, r64037210, r64037211, r64037212, r64037213, r64037214, r64037215, r64037216, r64037217, r64037218, r64037219, r64037220, r64037221, r64037222, r64037223, r64037224, r64037225, r64037226, r64037227;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r64037207);
        mpfr_init(r64037208);
        mpfr_init(r64037209);
        mpfr_init_set_str(r64037210, "128.0", 10, MPFR_RNDN);
        mpfr_init(r64037211);
        mpfr_init(r64037212);
        mpfr_init(r64037213);
        mpfr_init_set_str(r64037214, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r64037215);
        mpfr_init(r64037216);
        mpfr_init_set_str(r64037217, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r64037218);
        mpfr_init_set_str(r64037219, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r64037220);
        mpfr_init(r64037221);
        mpfr_init(r64037222);
        mpfr_init(r64037223);
        mpfr_init(r64037224);
        mpfr_init(r64037225);
        mpfr_init(r64037226);
        mpfr_init(r64037227);
}

double f_dm(double x) {
        mpfr_set_d(r64037207, x, MPFR_RNDN);
        mpfr_mul(r64037208, r64037207, r64037207, MPFR_RNDN);
        mpfr_mul(r64037209, r64037208, r64037208, MPFR_RNDN);
        ;
        mpfr_mul(r64037211, r64037210, r64037207, MPFR_RNDN);
        mpfr_mul(r64037212, r64037208, r64037211, MPFR_RNDN);
        mpfr_mul(r64037213, r64037209, r64037212, MPFR_RNDN);
        ;
        mpfr_mul(r64037215, r64037207, r64037214, MPFR_RNDN);
        mpfr_mul(r64037216, r64037209, r64037215, MPFR_RNDN);
        ;
        mpfr_mul(r64037218, r64037217, r64037207, MPFR_RNDN);
        ;
        mpfr_mul(r64037220, r64037219, r64037207, MPFR_RNDN);
        mpfr_mul(r64037221, r64037208, r64037220, MPFR_RNDN);
        mpfr_add(r64037222, r64037218, r64037221, MPFR_RNDN);
        mpfr_add(r64037223, r64037216, r64037222, MPFR_RNDN);
        mpfr_cbrt(r64037224, r64037223, MPFR_RNDN);
        mpfr_mul(r64037225, r64037224, r64037224, MPFR_RNDN);
        mpfr_mul(r64037226, r64037225, r64037224, MPFR_RNDN);
        mpfr_add(r64037227, r64037213, r64037226, MPFR_RNDN);
        return mpfr_get_d(r64037227, MPFR_RNDN);
}

