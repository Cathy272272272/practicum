#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r3817102 = 120.0;
        float r3817103 = x;
        float r3817104 = r3817102 * r3817103;
        float r3817105 = -160.0;
        float r3817106 = r3817103 * r3817103;
        float r3817107 = r3817106 * r3817103;
        float r3817108 = r3817105 * r3817107;
        float r3817109 = r3817104 + r3817108;
        float r3817110 = 32.0;
        float r3817111 = r3817107 * r3817103;
        float r3817112 = r3817111 * r3817103;
        float r3817113 = r3817110 * r3817112;
        float r3817114 = r3817109 + r3817113;
        return r3817114;
}

double f_id(double x) {
        double r3817115 = 120.0;
        double r3817116 = x;
        double r3817117 = r3817115 * r3817116;
        double r3817118 = -160.0;
        double r3817119 = r3817116 * r3817116;
        double r3817120 = r3817119 * r3817116;
        double r3817121 = r3817118 * r3817120;
        double r3817122 = r3817117 + r3817121;
        double r3817123 = 32.0;
        double r3817124 = r3817120 * r3817116;
        double r3817125 = r3817124 * r3817116;
        double r3817126 = r3817123 * r3817125;
        double r3817127 = r3817122 + r3817126;
        return r3817127;
}


double f_of(float x) {
        float r3817128 = 120.0;
        float r3817129 = x;
        float r3817130 = r3817128 * r3817129;
        float r3817131 = -160.0;
        float r3817132 = r3817129 * r3817129;
        float r3817133 = r3817132 * r3817129;
        float r3817134 = r3817131 * r3817133;
        float r3817135 = r3817130 + r3817134;
        float r3817136 = 32.0;
        float r3817137 = r3817133 * r3817129;
        float r3817138 = r3817137 * r3817129;
        float r3817139 = r3817136 * r3817138;
        float r3817140 = r3817135 + r3817139;
        return r3817140;
}

double f_od(double x) {
        double r3817141 = 120.0;
        double r3817142 = x;
        double r3817143 = r3817141 * r3817142;
        double r3817144 = -160.0;
        double r3817145 = r3817142 * r3817142;
        double r3817146 = r3817145 * r3817142;
        double r3817147 = r3817144 * r3817146;
        double r3817148 = r3817143 + r3817147;
        double r3817149 = 32.0;
        double r3817150 = r3817146 * r3817142;
        double r3817151 = r3817150 * r3817142;
        double r3817152 = r3817149 * r3817151;
        double r3817153 = r3817148 + r3817152;
        return r3817153;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3817154, r3817155, r3817156, r3817157, r3817158, r3817159, r3817160, r3817161, r3817162, r3817163, r3817164, r3817165, r3817166;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3817154, "120.0", 10, MPFR_RNDN);
        mpfr_init(r3817155);
        mpfr_init(r3817156);
        mpfr_init_set_str(r3817157, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r3817158);
        mpfr_init(r3817159);
        mpfr_init(r3817160);
        mpfr_init(r3817161);
        mpfr_init_set_str(r3817162, "32.0", 10, MPFR_RNDN);
        mpfr_init(r3817163);
        mpfr_init(r3817164);
        mpfr_init(r3817165);
        mpfr_init(r3817166);
}

double f_im(double x) {
        ;
        mpfr_set_d(r3817155, x, MPFR_RNDN);
        mpfr_mul(r3817156, r3817154, r3817155, MPFR_RNDN);
        ;
        mpfr_mul(r3817158, r3817155, r3817155, MPFR_RNDN);
        mpfr_mul(r3817159, r3817158, r3817155, MPFR_RNDN);
        mpfr_mul(r3817160, r3817157, r3817159, MPFR_RNDN);
        mpfr_add(r3817161, r3817156, r3817160, MPFR_RNDN);
        ;
        mpfr_mul(r3817163, r3817159, r3817155, MPFR_RNDN);
        mpfr_mul(r3817164, r3817163, r3817155, MPFR_RNDN);
        mpfr_mul(r3817165, r3817162, r3817164, MPFR_RNDN);
        mpfr_add(r3817166, r3817161, r3817165, MPFR_RNDN);
        return mpfr_get_d(r3817166, MPFR_RNDN);
}

static mpfr_t r3817167, r3817168, r3817169, r3817170, r3817171, r3817172, r3817173, r3817174, r3817175, r3817176, r3817177, r3817178, r3817179;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3817167, "120.0", 10, MPFR_RNDN);
        mpfr_init(r3817168);
        mpfr_init(r3817169);
        mpfr_init_set_str(r3817170, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r3817171);
        mpfr_init(r3817172);
        mpfr_init(r3817173);
        mpfr_init(r3817174);
        mpfr_init_set_str(r3817175, "32.0", 10, MPFR_RNDN);
        mpfr_init(r3817176);
        mpfr_init(r3817177);
        mpfr_init(r3817178);
        mpfr_init(r3817179);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r3817168, x, MPFR_RNDN);
        mpfr_mul(r3817169, r3817167, r3817168, MPFR_RNDN);
        ;
        mpfr_mul(r3817171, r3817168, r3817168, MPFR_RNDN);
        mpfr_mul(r3817172, r3817171, r3817168, MPFR_RNDN);
        mpfr_mul(r3817173, r3817170, r3817172, MPFR_RNDN);
        mpfr_add(r3817174, r3817169, r3817173, MPFR_RNDN);
        ;
        mpfr_mul(r3817176, r3817172, r3817168, MPFR_RNDN);
        mpfr_mul(r3817177, r3817176, r3817168, MPFR_RNDN);
        mpfr_mul(r3817178, r3817175, r3817177, MPFR_RNDN);
        mpfr_add(r3817179, r3817174, r3817178, MPFR_RNDN);
        return mpfr_get_d(r3817179, MPFR_RNDN);
}

static mpfr_t r3817180, r3817181, r3817182, r3817183, r3817184, r3817185, r3817186, r3817187, r3817188, r3817189, r3817190, r3817191, r3817192;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r3817180, "120.0", 10, MPFR_RNDN);
        mpfr_init(r3817181);
        mpfr_init(r3817182);
        mpfr_init_set_str(r3817183, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r3817184);
        mpfr_init(r3817185);
        mpfr_init(r3817186);
        mpfr_init(r3817187);
        mpfr_init_set_str(r3817188, "32.0", 10, MPFR_RNDN);
        mpfr_init(r3817189);
        mpfr_init(r3817190);
        mpfr_init(r3817191);
        mpfr_init(r3817192);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r3817181, x, MPFR_RNDN);
        mpfr_mul(r3817182, r3817180, r3817181, MPFR_RNDN);
        ;
        mpfr_mul(r3817184, r3817181, r3817181, MPFR_RNDN);
        mpfr_mul(r3817185, r3817184, r3817181, MPFR_RNDN);
        mpfr_mul(r3817186, r3817183, r3817185, MPFR_RNDN);
        mpfr_add(r3817187, r3817182, r3817186, MPFR_RNDN);
        ;
        mpfr_mul(r3817189, r3817185, r3817181, MPFR_RNDN);
        mpfr_mul(r3817190, r3817189, r3817181, MPFR_RNDN);
        mpfr_mul(r3817191, r3817188, r3817190, MPFR_RNDN);
        mpfr_add(r3817192, r3817187, r3817191, MPFR_RNDN);
        return mpfr_get_d(r3817192, MPFR_RNDN);
}

