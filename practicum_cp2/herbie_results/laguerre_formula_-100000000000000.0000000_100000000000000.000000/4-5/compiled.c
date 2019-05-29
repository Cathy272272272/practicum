#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8830155 = 1.0;
        float r8830156 = -5.0;
        float r8830157 = x;
        float r8830158 = r8830156 * r8830157;
        float r8830159 = r8830155 + r8830158;
        float r8830160 = 5.0;
        float r8830161 = r8830157 * r8830157;
        float r8830162 = r8830160 * r8830161;
        float r8830163 = r8830159 + r8830162;
        float r8830164 = -1.666667;
        float r8830165 = r8830161 * r8830157;
        float r8830166 = r8830164 * r8830165;
        float r8830167 = r8830163 + r8830166;
        float r8830168 = 0.208333;
        float r8830169 = r8830165 * r8830157;
        float r8830170 = r8830168 * r8830169;
        float r8830171 = r8830167 + r8830170;
        float r8830172 = -0.008333;
        float r8830173 = r8830169 * r8830157;
        float r8830174 = r8830172 * r8830173;
        float r8830175 = r8830171 + r8830174;
        return r8830175;
}

double f_id(double x) {
        double r8830176 = 1.0;
        double r8830177 = -5.0;
        double r8830178 = x;
        double r8830179 = r8830177 * r8830178;
        double r8830180 = r8830176 + r8830179;
        double r8830181 = 5.0;
        double r8830182 = r8830178 * r8830178;
        double r8830183 = r8830181 * r8830182;
        double r8830184 = r8830180 + r8830183;
        double r8830185 = -1.666667;
        double r8830186 = r8830182 * r8830178;
        double r8830187 = r8830185 * r8830186;
        double r8830188 = r8830184 + r8830187;
        double r8830189 = 0.208333;
        double r8830190 = r8830186 * r8830178;
        double r8830191 = r8830189 * r8830190;
        double r8830192 = r8830188 + r8830191;
        double r8830193 = -0.008333;
        double r8830194 = r8830190 * r8830178;
        double r8830195 = r8830193 * r8830194;
        double r8830196 = r8830192 + r8830195;
        return r8830196;
}


double f_of(float x) {
        float r8830197 = 1.0;
        float r8830198 = -5.0;
        float r8830199 = x;
        float r8830200 = r8830198 * r8830199;
        float r8830201 = r8830197 + r8830200;
        float r8830202 = 5.0;
        float r8830203 = r8830199 * r8830199;
        float r8830204 = r8830202 * r8830203;
        float r8830205 = r8830201 + r8830204;
        float r8830206 = -1.666667;
        float r8830207 = r8830203 * r8830199;
        float r8830208 = r8830206 * r8830207;
        float r8830209 = r8830205 + r8830208;
        float r8830210 = 0.208333;
        float r8830211 = r8830207 * r8830199;
        float r8830212 = r8830210 * r8830211;
        float r8830213 = r8830209 + r8830212;
        float r8830214 = -0.008333;
        float r8830215 = r8830211 * r8830199;
        float r8830216 = r8830214 * r8830215;
        float r8830217 = r8830213 + r8830216;
        return r8830217;
}

double f_od(double x) {
        double r8830218 = 1.0;
        double r8830219 = -5.0;
        double r8830220 = x;
        double r8830221 = r8830219 * r8830220;
        double r8830222 = r8830218 + r8830221;
        double r8830223 = 5.0;
        double r8830224 = r8830220 * r8830220;
        double r8830225 = r8830223 * r8830224;
        double r8830226 = r8830222 + r8830225;
        double r8830227 = -1.666667;
        double r8830228 = r8830224 * r8830220;
        double r8830229 = r8830227 * r8830228;
        double r8830230 = r8830226 + r8830229;
        double r8830231 = 0.208333;
        double r8830232 = r8830228 * r8830220;
        double r8830233 = r8830231 * r8830232;
        double r8830234 = r8830230 + r8830233;
        double r8830235 = -0.008333;
        double r8830236 = r8830232 * r8830220;
        double r8830237 = r8830235 * r8830236;
        double r8830238 = r8830234 + r8830237;
        return r8830238;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8830239, r8830240, r8830241, r8830242, r8830243, r8830244, r8830245, r8830246, r8830247, r8830248, r8830249, r8830250, r8830251, r8830252, r8830253, r8830254, r8830255, r8830256, r8830257, r8830258, r8830259;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8830239, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830240, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r8830241);
        mpfr_init(r8830242);
        mpfr_init(r8830243);
        mpfr_init_set_str(r8830244, "5.0", 10, MPFR_RNDN);
        mpfr_init(r8830245);
        mpfr_init(r8830246);
        mpfr_init(r8830247);
        mpfr_init_set_str(r8830248, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r8830249);
        mpfr_init(r8830250);
        mpfr_init(r8830251);
        mpfr_init_set_str(r8830252, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r8830253);
        mpfr_init(r8830254);
        mpfr_init(r8830255);
        mpfr_init_set_str(r8830256, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r8830257);
        mpfr_init(r8830258);
        mpfr_init(r8830259);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8830241, x, MPFR_RNDN);
        mpfr_mul(r8830242, r8830240, r8830241, MPFR_RNDN);
        mpfr_add(r8830243, r8830239, r8830242, MPFR_RNDN);
        ;
        mpfr_mul(r8830245, r8830241, r8830241, MPFR_RNDN);
        mpfr_mul(r8830246, r8830244, r8830245, MPFR_RNDN);
        mpfr_add(r8830247, r8830243, r8830246, MPFR_RNDN);
        ;
        mpfr_mul(r8830249, r8830245, r8830241, MPFR_RNDN);
        mpfr_mul(r8830250, r8830248, r8830249, MPFR_RNDN);
        mpfr_add(r8830251, r8830247, r8830250, MPFR_RNDN);
        ;
        mpfr_mul(r8830253, r8830249, r8830241, MPFR_RNDN);
        mpfr_mul(r8830254, r8830252, r8830253, MPFR_RNDN);
        mpfr_add(r8830255, r8830251, r8830254, MPFR_RNDN);
        ;
        mpfr_mul(r8830257, r8830253, r8830241, MPFR_RNDN);
        mpfr_mul(r8830258, r8830256, r8830257, MPFR_RNDN);
        mpfr_add(r8830259, r8830255, r8830258, MPFR_RNDN);
        return mpfr_get_d(r8830259, MPFR_RNDN);
}

static mpfr_t r8830260, r8830261, r8830262, r8830263, r8830264, r8830265, r8830266, r8830267, r8830268, r8830269, r8830270, r8830271, r8830272, r8830273, r8830274, r8830275, r8830276, r8830277, r8830278, r8830279, r8830280;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8830260, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830261, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r8830262);
        mpfr_init(r8830263);
        mpfr_init(r8830264);
        mpfr_init_set_str(r8830265, "5.0", 10, MPFR_RNDN);
        mpfr_init(r8830266);
        mpfr_init(r8830267);
        mpfr_init(r8830268);
        mpfr_init_set_str(r8830269, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r8830270);
        mpfr_init(r8830271);
        mpfr_init(r8830272);
        mpfr_init_set_str(r8830273, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r8830274);
        mpfr_init(r8830275);
        mpfr_init(r8830276);
        mpfr_init_set_str(r8830277, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r8830278);
        mpfr_init(r8830279);
        mpfr_init(r8830280);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8830262, x, MPFR_RNDN);
        mpfr_mul(r8830263, r8830261, r8830262, MPFR_RNDN);
        mpfr_add(r8830264, r8830260, r8830263, MPFR_RNDN);
        ;
        mpfr_mul(r8830266, r8830262, r8830262, MPFR_RNDN);
        mpfr_mul(r8830267, r8830265, r8830266, MPFR_RNDN);
        mpfr_add(r8830268, r8830264, r8830267, MPFR_RNDN);
        ;
        mpfr_mul(r8830270, r8830266, r8830262, MPFR_RNDN);
        mpfr_mul(r8830271, r8830269, r8830270, MPFR_RNDN);
        mpfr_add(r8830272, r8830268, r8830271, MPFR_RNDN);
        ;
        mpfr_mul(r8830274, r8830270, r8830262, MPFR_RNDN);
        mpfr_mul(r8830275, r8830273, r8830274, MPFR_RNDN);
        mpfr_add(r8830276, r8830272, r8830275, MPFR_RNDN);
        ;
        mpfr_mul(r8830278, r8830274, r8830262, MPFR_RNDN);
        mpfr_mul(r8830279, r8830277, r8830278, MPFR_RNDN);
        mpfr_add(r8830280, r8830276, r8830279, MPFR_RNDN);
        return mpfr_get_d(r8830280, MPFR_RNDN);
}

static mpfr_t r8830281, r8830282, r8830283, r8830284, r8830285, r8830286, r8830287, r8830288, r8830289, r8830290, r8830291, r8830292, r8830293, r8830294, r8830295, r8830296, r8830297, r8830298, r8830299, r8830300, r8830301;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8830281, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8830282, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r8830283);
        mpfr_init(r8830284);
        mpfr_init(r8830285);
        mpfr_init_set_str(r8830286, "5.0", 10, MPFR_RNDN);
        mpfr_init(r8830287);
        mpfr_init(r8830288);
        mpfr_init(r8830289);
        mpfr_init_set_str(r8830290, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r8830291);
        mpfr_init(r8830292);
        mpfr_init(r8830293);
        mpfr_init_set_str(r8830294, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r8830295);
        mpfr_init(r8830296);
        mpfr_init(r8830297);
        mpfr_init_set_str(r8830298, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r8830299);
        mpfr_init(r8830300);
        mpfr_init(r8830301);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8830283, x, MPFR_RNDN);
        mpfr_mul(r8830284, r8830282, r8830283, MPFR_RNDN);
        mpfr_add(r8830285, r8830281, r8830284, MPFR_RNDN);
        ;
        mpfr_mul(r8830287, r8830283, r8830283, MPFR_RNDN);
        mpfr_mul(r8830288, r8830286, r8830287, MPFR_RNDN);
        mpfr_add(r8830289, r8830285, r8830288, MPFR_RNDN);
        ;
        mpfr_mul(r8830291, r8830287, r8830283, MPFR_RNDN);
        mpfr_mul(r8830292, r8830290, r8830291, MPFR_RNDN);
        mpfr_add(r8830293, r8830289, r8830292, MPFR_RNDN);
        ;
        mpfr_mul(r8830295, r8830291, r8830283, MPFR_RNDN);
        mpfr_mul(r8830296, r8830294, r8830295, MPFR_RNDN);
        mpfr_add(r8830297, r8830293, r8830296, MPFR_RNDN);
        ;
        mpfr_mul(r8830299, r8830295, r8830283, MPFR_RNDN);
        mpfr_mul(r8830300, r8830298, r8830299, MPFR_RNDN);
        mpfr_add(r8830301, r8830297, r8830300, MPFR_RNDN);
        return mpfr_get_d(r8830301, MPFR_RNDN);
}

