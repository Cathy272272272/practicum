#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7167185 = 0.273438;
        float r7167186 = -9.84375;
        float r7167187 = x;
        float r7167188 = r7167187 * r7167187;
        float r7167189 = r7167186 * r7167188;
        float r7167190 = r7167185 + r7167189;
        float r7167191 = 54.140625;
        float r7167192 = r7167188 * r7167187;
        float r7167193 = r7167192 * r7167187;
        float r7167194 = r7167191 * r7167193;
        float r7167195 = r7167190 + r7167194;
        float r7167196 = -93.84375;
        float r7167197 = r7167193 * r7167187;
        float r7167198 = r7167197 * r7167187;
        float r7167199 = r7167196 * r7167198;
        float r7167200 = r7167195 + r7167199;
        float r7167201 = 50.273438;
        float r7167202 = r7167198 * r7167187;
        float r7167203 = r7167202 * r7167187;
        float r7167204 = r7167201 * r7167203;
        float r7167205 = r7167200 + r7167204;
        return r7167205;
}

double f_id(double x) {
        double r7167206 = 0.273438;
        double r7167207 = -9.84375;
        double r7167208 = x;
        double r7167209 = r7167208 * r7167208;
        double r7167210 = r7167207 * r7167209;
        double r7167211 = r7167206 + r7167210;
        double r7167212 = 54.140625;
        double r7167213 = r7167209 * r7167208;
        double r7167214 = r7167213 * r7167208;
        double r7167215 = r7167212 * r7167214;
        double r7167216 = r7167211 + r7167215;
        double r7167217 = -93.84375;
        double r7167218 = r7167214 * r7167208;
        double r7167219 = r7167218 * r7167208;
        double r7167220 = r7167217 * r7167219;
        double r7167221 = r7167216 + r7167220;
        double r7167222 = 50.273438;
        double r7167223 = r7167219 * r7167208;
        double r7167224 = r7167223 * r7167208;
        double r7167225 = r7167222 * r7167224;
        double r7167226 = r7167221 + r7167225;
        return r7167226;
}


double f_of(float x) {
        float r7167227 = x;
        float r7167228 = 54.140625;
        float r7167229 = r7167227 * r7167228;
        float r7167230 = 3;
        float r7167231 = pow(r7167227, r7167230);
        float r7167232 = r7167229 * r7167231;
        float r7167233 = -9.84375;
        float r7167234 = r7167227 * r7167233;
        float r7167235 = r7167227 * r7167234;
        float r7167236 = r7167232 + r7167235;
        float r7167237 = 0.273438;
        float r7167238 = r7167236 + r7167237;
        float r7167239 = r7167231 * r7167231;
        float r7167240 = -93.84375;
        float r7167241 = 50.273438;
        float r7167242 = r7167241 * r7167227;
        float r7167243 = r7167242 * r7167227;
        float r7167244 = r7167240 + r7167243;
        float r7167245 = r7167239 * r7167244;
        float r7167246 = r7167238 + r7167245;
        return r7167246;
}

double f_od(double x) {
        double r7167247 = x;
        double r7167248 = 54.140625;
        double r7167249 = r7167247 * r7167248;
        double r7167250 = 3;
        double r7167251 = pow(r7167247, r7167250);
        double r7167252 = r7167249 * r7167251;
        double r7167253 = -9.84375;
        double r7167254 = r7167247 * r7167253;
        double r7167255 = r7167247 * r7167254;
        double r7167256 = r7167252 + r7167255;
        double r7167257 = 0.273438;
        double r7167258 = r7167256 + r7167257;
        double r7167259 = r7167251 * r7167251;
        double r7167260 = -93.84375;
        double r7167261 = 50.273438;
        double r7167262 = r7167261 * r7167247;
        double r7167263 = r7167262 * r7167247;
        double r7167264 = r7167260 + r7167263;
        double r7167265 = r7167259 * r7167264;
        double r7167266 = r7167258 + r7167265;
        return r7167266;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167267, r7167268, r7167269, r7167270, r7167271, r7167272, r7167273, r7167274, r7167275, r7167276, r7167277, r7167278, r7167279, r7167280, r7167281, r7167282, r7167283, r7167284, r7167285, r7167286, r7167287;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167267, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167268, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7167269);
        mpfr_init(r7167270);
        mpfr_init(r7167271);
        mpfr_init(r7167272);
        mpfr_init_set_str(r7167273, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7167274);
        mpfr_init(r7167275);
        mpfr_init(r7167276);
        mpfr_init(r7167277);
        mpfr_init_set_str(r7167278, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r7167279);
        mpfr_init(r7167280);
        mpfr_init(r7167281);
        mpfr_init(r7167282);
        mpfr_init_set_str(r7167283, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7167284);
        mpfr_init(r7167285);
        mpfr_init(r7167286);
        mpfr_init(r7167287);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7167269, x, MPFR_RNDN);
        mpfr_mul(r7167270, r7167269, r7167269, MPFR_RNDN);
        mpfr_mul(r7167271, r7167268, r7167270, MPFR_RNDN);
        mpfr_add(r7167272, r7167267, r7167271, MPFR_RNDN);
        ;
        mpfr_mul(r7167274, r7167270, r7167269, MPFR_RNDN);
        mpfr_mul(r7167275, r7167274, r7167269, MPFR_RNDN);
        mpfr_mul(r7167276, r7167273, r7167275, MPFR_RNDN);
        mpfr_add(r7167277, r7167272, r7167276, MPFR_RNDN);
        ;
        mpfr_mul(r7167279, r7167275, r7167269, MPFR_RNDN);
        mpfr_mul(r7167280, r7167279, r7167269, MPFR_RNDN);
        mpfr_mul(r7167281, r7167278, r7167280, MPFR_RNDN);
        mpfr_add(r7167282, r7167277, r7167281, MPFR_RNDN);
        ;
        mpfr_mul(r7167284, r7167280, r7167269, MPFR_RNDN);
        mpfr_mul(r7167285, r7167284, r7167269, MPFR_RNDN);
        mpfr_mul(r7167286, r7167283, r7167285, MPFR_RNDN);
        mpfr_add(r7167287, r7167282, r7167286, MPFR_RNDN);
        return mpfr_get_d(r7167287, MPFR_RNDN);
}

static mpfr_t r7167288, r7167289, r7167290, r7167291, r7167292, r7167293, r7167294, r7167295, r7167296, r7167297, r7167298, r7167299, r7167300, r7167301, r7167302, r7167303, r7167304, r7167305, r7167306, r7167307;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7167288);
        mpfr_init_set_str(r7167289, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7167290);
        mpfr_init_set_str(r7167291, "3", 10, MPFR_RNDN);
        mpfr_init(r7167292);
        mpfr_init(r7167293);
        mpfr_init_set_str(r7167294, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7167295);
        mpfr_init(r7167296);
        mpfr_init(r7167297);
        mpfr_init_set_str(r7167298, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r7167299);
        mpfr_init(r7167300);
        mpfr_init_set_str(r7167301, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167302, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7167303);
        mpfr_init(r7167304);
        mpfr_init(r7167305);
        mpfr_init(r7167306);
        mpfr_init(r7167307);
}

double f_fm(double x) {
        mpfr_set_d(r7167288, x, MPFR_RNDN);
        ;
        mpfr_mul(r7167290, r7167288, r7167289, MPFR_RNDN);
        ;
        mpfr_pow(r7167292, r7167288, r7167291, MPFR_RNDN);
        mpfr_mul(r7167293, r7167290, r7167292, MPFR_RNDN);
        ;
        mpfr_mul(r7167295, r7167288, r7167294, MPFR_RNDN);
        mpfr_mul(r7167296, r7167288, r7167295, MPFR_RNDN);
        mpfr_add(r7167297, r7167293, r7167296, MPFR_RNDN);
        ;
        mpfr_add(r7167299, r7167297, r7167298, MPFR_RNDN);
        mpfr_mul(r7167300, r7167292, r7167292, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7167303, r7167302, r7167288, MPFR_RNDN);
        mpfr_mul(r7167304, r7167303, r7167288, MPFR_RNDN);
        mpfr_add(r7167305, r7167301, r7167304, MPFR_RNDN);
        mpfr_mul(r7167306, r7167300, r7167305, MPFR_RNDN);
        mpfr_add(r7167307, r7167299, r7167306, MPFR_RNDN);
        return mpfr_get_d(r7167307, MPFR_RNDN);
}

static mpfr_t r7167308, r7167309, r7167310, r7167311, r7167312, r7167313, r7167314, r7167315, r7167316, r7167317, r7167318, r7167319, r7167320, r7167321, r7167322, r7167323, r7167324, r7167325, r7167326, r7167327;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7167308);
        mpfr_init_set_str(r7167309, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7167310);
        mpfr_init_set_str(r7167311, "3", 10, MPFR_RNDN);
        mpfr_init(r7167312);
        mpfr_init(r7167313);
        mpfr_init_set_str(r7167314, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7167315);
        mpfr_init(r7167316);
        mpfr_init(r7167317);
        mpfr_init_set_str(r7167318, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r7167319);
        mpfr_init(r7167320);
        mpfr_init_set_str(r7167321, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167322, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7167323);
        mpfr_init(r7167324);
        mpfr_init(r7167325);
        mpfr_init(r7167326);
        mpfr_init(r7167327);
}

double f_dm(double x) {
        mpfr_set_d(r7167308, x, MPFR_RNDN);
        ;
        mpfr_mul(r7167310, r7167308, r7167309, MPFR_RNDN);
        ;
        mpfr_pow(r7167312, r7167308, r7167311, MPFR_RNDN);
        mpfr_mul(r7167313, r7167310, r7167312, MPFR_RNDN);
        ;
        mpfr_mul(r7167315, r7167308, r7167314, MPFR_RNDN);
        mpfr_mul(r7167316, r7167308, r7167315, MPFR_RNDN);
        mpfr_add(r7167317, r7167313, r7167316, MPFR_RNDN);
        ;
        mpfr_add(r7167319, r7167317, r7167318, MPFR_RNDN);
        mpfr_mul(r7167320, r7167312, r7167312, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7167323, r7167322, r7167308, MPFR_RNDN);
        mpfr_mul(r7167324, r7167323, r7167308, MPFR_RNDN);
        mpfr_add(r7167325, r7167321, r7167324, MPFR_RNDN);
        mpfr_mul(r7167326, r7167320, r7167325, MPFR_RNDN);
        mpfr_add(r7167327, r7167319, r7167326, MPFR_RNDN);
        return mpfr_get_d(r7167327, MPFR_RNDN);
}

