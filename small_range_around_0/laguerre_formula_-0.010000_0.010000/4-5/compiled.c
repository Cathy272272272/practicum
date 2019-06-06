#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r3278128 = 1.0;
        float r3278129 = -5.0;
        float r3278130 = x;
        float r3278131 = r3278129 * r3278130;
        float r3278132 = r3278128 + r3278131;
        float r3278133 = 5.0;
        float r3278134 = r3278130 * r3278130;
        float r3278135 = r3278133 * r3278134;
        float r3278136 = r3278132 + r3278135;
        float r3278137 = -1.666667;
        float r3278138 = r3278134 * r3278130;
        float r3278139 = r3278137 * r3278138;
        float r3278140 = r3278136 + r3278139;
        float r3278141 = 0.208333;
        float r3278142 = r3278138 * r3278130;
        float r3278143 = r3278141 * r3278142;
        float r3278144 = r3278140 + r3278143;
        float r3278145 = -0.008333;
        float r3278146 = r3278142 * r3278130;
        float r3278147 = r3278145 * r3278146;
        float r3278148 = r3278144 + r3278147;
        return r3278148;
}

double f_id(double x) {
        double r3278149 = 1.0;
        double r3278150 = -5.0;
        double r3278151 = x;
        double r3278152 = r3278150 * r3278151;
        double r3278153 = r3278149 + r3278152;
        double r3278154 = 5.0;
        double r3278155 = r3278151 * r3278151;
        double r3278156 = r3278154 * r3278155;
        double r3278157 = r3278153 + r3278156;
        double r3278158 = -1.666667;
        double r3278159 = r3278155 * r3278151;
        double r3278160 = r3278158 * r3278159;
        double r3278161 = r3278157 + r3278160;
        double r3278162 = 0.208333;
        double r3278163 = r3278159 * r3278151;
        double r3278164 = r3278162 * r3278163;
        double r3278165 = r3278161 + r3278164;
        double r3278166 = -0.008333;
        double r3278167 = r3278163 * r3278151;
        double r3278168 = r3278166 * r3278167;
        double r3278169 = r3278165 + r3278168;
        return r3278169;
}


double f_of(float x) {
        float r3278170 = x;
        float r3278171 = -5.0;
        float r3278172 = r3278170 * r3278171;
        float r3278173 = 1.0;
        float r3278174 = r3278172 + r3278173;
        float r3278175 = r3278170 * r3278170;
        float r3278176 = r3278175 * r3278175;
        float r3278177 = -0.008333;
        float r3278178 = r3278177 * r3278170;
        float r3278179 = 0.208333;
        float r3278180 = r3278178 + r3278179;
        float r3278181 = r3278176 * r3278180;
        float r3278182 = -1.666667;
        float r3278183 = r3278182 * r3278170;
        float r3278184 = 5.0;
        float r3278185 = r3278183 + r3278184;
        float r3278186 = r3278175 * r3278185;
        float r3278187 = r3278181 + r3278186;
        float r3278188 = r3278174 + r3278187;
        return r3278188;
}

double f_od(double x) {
        double r3278189 = x;
        double r3278190 = -5.0;
        double r3278191 = r3278189 * r3278190;
        double r3278192 = 1.0;
        double r3278193 = r3278191 + r3278192;
        double r3278194 = r3278189 * r3278189;
        double r3278195 = r3278194 * r3278194;
        double r3278196 = -0.008333;
        double r3278197 = r3278196 * r3278189;
        double r3278198 = 0.208333;
        double r3278199 = r3278197 + r3278198;
        double r3278200 = r3278195 * r3278199;
        double r3278201 = -1.666667;
        double r3278202 = r3278201 * r3278189;
        double r3278203 = 5.0;
        double r3278204 = r3278202 + r3278203;
        double r3278205 = r3278194 * r3278204;
        double r3278206 = r3278200 + r3278205;
        double r3278207 = r3278193 + r3278206;
        return r3278207;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3278208, r3278209, r3278210, r3278211, r3278212, r3278213, r3278214, r3278215, r3278216, r3278217, r3278218, r3278219, r3278220, r3278221, r3278222, r3278223, r3278224, r3278225, r3278226, r3278227, r3278228;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3278208, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3278209, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r3278210);
        mpfr_init(r3278211);
        mpfr_init(r3278212);
        mpfr_init_set_str(r3278213, "5.0", 10, MPFR_RNDN);
        mpfr_init(r3278214);
        mpfr_init(r3278215);
        mpfr_init(r3278216);
        mpfr_init_set_str(r3278217, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r3278218);
        mpfr_init(r3278219);
        mpfr_init(r3278220);
        mpfr_init_set_str(r3278221, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r3278222);
        mpfr_init(r3278223);
        mpfr_init(r3278224);
        mpfr_init_set_str(r3278225, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r3278226);
        mpfr_init(r3278227);
        mpfr_init(r3278228);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3278210, x, MPFR_RNDN);
        mpfr_mul(r3278211, r3278209, r3278210, MPFR_RNDN);
        mpfr_add(r3278212, r3278208, r3278211, MPFR_RNDN);
        ;
        mpfr_mul(r3278214, r3278210, r3278210, MPFR_RNDN);
        mpfr_mul(r3278215, r3278213, r3278214, MPFR_RNDN);
        mpfr_add(r3278216, r3278212, r3278215, MPFR_RNDN);
        ;
        mpfr_mul(r3278218, r3278214, r3278210, MPFR_RNDN);
        mpfr_mul(r3278219, r3278217, r3278218, MPFR_RNDN);
        mpfr_add(r3278220, r3278216, r3278219, MPFR_RNDN);
        ;
        mpfr_mul(r3278222, r3278218, r3278210, MPFR_RNDN);
        mpfr_mul(r3278223, r3278221, r3278222, MPFR_RNDN);
        mpfr_add(r3278224, r3278220, r3278223, MPFR_RNDN);
        ;
        mpfr_mul(r3278226, r3278222, r3278210, MPFR_RNDN);
        mpfr_mul(r3278227, r3278225, r3278226, MPFR_RNDN);
        mpfr_add(r3278228, r3278224, r3278227, MPFR_RNDN);
        return mpfr_get_d(r3278228, MPFR_RNDN);
}

static mpfr_t r3278229, r3278230, r3278231, r3278232, r3278233, r3278234, r3278235, r3278236, r3278237, r3278238, r3278239, r3278240, r3278241, r3278242, r3278243, r3278244, r3278245, r3278246, r3278247;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3278229);
        mpfr_init_set_str(r3278230, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r3278231);
        mpfr_init_set_str(r3278232, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3278233);
        mpfr_init(r3278234);
        mpfr_init(r3278235);
        mpfr_init_set_str(r3278236, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r3278237);
        mpfr_init_set_str(r3278238, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r3278239);
        mpfr_init(r3278240);
        mpfr_init_set_str(r3278241, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r3278242);
        mpfr_init_set_str(r3278243, "5.0", 10, MPFR_RNDN);
        mpfr_init(r3278244);
        mpfr_init(r3278245);
        mpfr_init(r3278246);
        mpfr_init(r3278247);
}

double f_fm(double x) {
        mpfr_set_d(r3278229, x, MPFR_RNDN);
        ;
        mpfr_mul(r3278231, r3278229, r3278230, MPFR_RNDN);
        ;
        mpfr_add(r3278233, r3278231, r3278232, MPFR_RNDN);
        mpfr_mul(r3278234, r3278229, r3278229, MPFR_RNDN);
        mpfr_mul(r3278235, r3278234, r3278234, MPFR_RNDN);
        ;
        mpfr_mul(r3278237, r3278236, r3278229, MPFR_RNDN);
        ;
        mpfr_add(r3278239, r3278237, r3278238, MPFR_RNDN);
        mpfr_mul(r3278240, r3278235, r3278239, MPFR_RNDN);
        ;
        mpfr_mul(r3278242, r3278241, r3278229, MPFR_RNDN);
        ;
        mpfr_add(r3278244, r3278242, r3278243, MPFR_RNDN);
        mpfr_mul(r3278245, r3278234, r3278244, MPFR_RNDN);
        mpfr_add(r3278246, r3278240, r3278245, MPFR_RNDN);
        mpfr_add(r3278247, r3278233, r3278246, MPFR_RNDN);
        return mpfr_get_d(r3278247, MPFR_RNDN);
}

static mpfr_t r3278248, r3278249, r3278250, r3278251, r3278252, r3278253, r3278254, r3278255, r3278256, r3278257, r3278258, r3278259, r3278260, r3278261, r3278262, r3278263, r3278264, r3278265, r3278266;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3278248);
        mpfr_init_set_str(r3278249, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r3278250);
        mpfr_init_set_str(r3278251, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3278252);
        mpfr_init(r3278253);
        mpfr_init(r3278254);
        mpfr_init_set_str(r3278255, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r3278256);
        mpfr_init_set_str(r3278257, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r3278258);
        mpfr_init(r3278259);
        mpfr_init_set_str(r3278260, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r3278261);
        mpfr_init_set_str(r3278262, "5.0", 10, MPFR_RNDN);
        mpfr_init(r3278263);
        mpfr_init(r3278264);
        mpfr_init(r3278265);
        mpfr_init(r3278266);
}

double f_dm(double x) {
        mpfr_set_d(r3278248, x, MPFR_RNDN);
        ;
        mpfr_mul(r3278250, r3278248, r3278249, MPFR_RNDN);
        ;
        mpfr_add(r3278252, r3278250, r3278251, MPFR_RNDN);
        mpfr_mul(r3278253, r3278248, r3278248, MPFR_RNDN);
        mpfr_mul(r3278254, r3278253, r3278253, MPFR_RNDN);
        ;
        mpfr_mul(r3278256, r3278255, r3278248, MPFR_RNDN);
        ;
        mpfr_add(r3278258, r3278256, r3278257, MPFR_RNDN);
        mpfr_mul(r3278259, r3278254, r3278258, MPFR_RNDN);
        ;
        mpfr_mul(r3278261, r3278260, r3278248, MPFR_RNDN);
        ;
        mpfr_add(r3278263, r3278261, r3278262, MPFR_RNDN);
        mpfr_mul(r3278264, r3278253, r3278263, MPFR_RNDN);
        mpfr_add(r3278265, r3278259, r3278264, MPFR_RNDN);
        mpfr_add(r3278266, r3278252, r3278265, MPFR_RNDN);
        return mpfr_get_d(r3278266, MPFR_RNDN);
}

