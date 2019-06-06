#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r60479216 = 1680.0;
        float r60479217 = -13440.0;
        float r60479218 = x;
        float r60479219 = r60479218 * r60479218;
        float r60479220 = r60479217 * r60479219;
        float r60479221 = r60479216 + r60479220;
        float r60479222 = 13440.0;
        float r60479223 = r60479219 * r60479218;
        float r60479224 = r60479223 * r60479218;
        float r60479225 = r60479222 * r60479224;
        float r60479226 = r60479221 + r60479225;
        float r60479227 = -3584.0;
        float r60479228 = r60479224 * r60479218;
        float r60479229 = r60479228 * r60479218;
        float r60479230 = r60479227 * r60479229;
        float r60479231 = r60479226 + r60479230;
        float r60479232 = 256.0;
        float r60479233 = r60479229 * r60479218;
        float r60479234 = r60479233 * r60479218;
        float r60479235 = r60479232 * r60479234;
        float r60479236 = r60479231 + r60479235;
        return r60479236;
}

double f_id(double x) {
        double r60479237 = 1680.0;
        double r60479238 = -13440.0;
        double r60479239 = x;
        double r60479240 = r60479239 * r60479239;
        double r60479241 = r60479238 * r60479240;
        double r60479242 = r60479237 + r60479241;
        double r60479243 = 13440.0;
        double r60479244 = r60479240 * r60479239;
        double r60479245 = r60479244 * r60479239;
        double r60479246 = r60479243 * r60479245;
        double r60479247 = r60479242 + r60479246;
        double r60479248 = -3584.0;
        double r60479249 = r60479245 * r60479239;
        double r60479250 = r60479249 * r60479239;
        double r60479251 = r60479248 * r60479250;
        double r60479252 = r60479247 + r60479251;
        double r60479253 = 256.0;
        double r60479254 = r60479250 * r60479239;
        double r60479255 = r60479254 * r60479239;
        double r60479256 = r60479253 * r60479255;
        double r60479257 = r60479252 + r60479256;
        return r60479257;
}


double f_of(float x) {
        float r60479258 = x;
        float r60479259 = 3;
        float r60479260 = pow(r60479258, r60479259);
        float r60479261 = r60479260 * r60479260;
        float r60479262 = 256.0;
        float r60479263 = r60479258 * r60479258;
        float r60479264 = r60479262 * r60479263;
        float r60479265 = 3584.0;
        float r60479266 = r60479264 - r60479265;
        float r60479267 = r60479261 * r60479266;
        float r60479268 = pow(r60479260, r60479259);
        float r60479269 = r60479268 - r60479260;
        float r60479270 = r60479260 * r60479258;
        float r60479271 = r60479263 + r60479270;
        float r60479272 = r60479261 + r60479271;
        float r60479273 = r60479269 / r60479272;
        float r60479274 = 13440.0;
        float r60479275 = r60479274 * r60479258;
        float r60479276 = r60479273 * r60479275;
        float r60479277 = 1680.0;
        float r60479278 = r60479276 + r60479277;
        float r60479279 = r60479267 + r60479278;
        return r60479279;
}

double f_od(double x) {
        double r60479280 = x;
        double r60479281 = 3;
        double r60479282 = pow(r60479280, r60479281);
        double r60479283 = r60479282 * r60479282;
        double r60479284 = 256.0;
        double r60479285 = r60479280 * r60479280;
        double r60479286 = r60479284 * r60479285;
        double r60479287 = 3584.0;
        double r60479288 = r60479286 - r60479287;
        double r60479289 = r60479283 * r60479288;
        double r60479290 = pow(r60479282, r60479281);
        double r60479291 = r60479290 - r60479282;
        double r60479292 = r60479282 * r60479280;
        double r60479293 = r60479285 + r60479292;
        double r60479294 = r60479283 + r60479293;
        double r60479295 = r60479291 / r60479294;
        double r60479296 = 13440.0;
        double r60479297 = r60479296 * r60479280;
        double r60479298 = r60479295 * r60479297;
        double r60479299 = 1680.0;
        double r60479300 = r60479298 + r60479299;
        double r60479301 = r60479289 + r60479300;
        return r60479301;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479302, r60479303, r60479304, r60479305, r60479306, r60479307, r60479308, r60479309, r60479310, r60479311, r60479312, r60479313, r60479314, r60479315, r60479316, r60479317, r60479318, r60479319, r60479320, r60479321, r60479322;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479302, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479303, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r60479304);
        mpfr_init(r60479305);
        mpfr_init(r60479306);
        mpfr_init(r60479307);
        mpfr_init_set_str(r60479308, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r60479309);
        mpfr_init(r60479310);
        mpfr_init(r60479311);
        mpfr_init(r60479312);
        mpfr_init_set_str(r60479313, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r60479314);
        mpfr_init(r60479315);
        mpfr_init(r60479316);
        mpfr_init(r60479317);
        mpfr_init_set_str(r60479318, "256.0", 10, MPFR_RNDN);
        mpfr_init(r60479319);
        mpfr_init(r60479320);
        mpfr_init(r60479321);
        mpfr_init(r60479322);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60479304, x, MPFR_RNDN);
        mpfr_mul(r60479305, r60479304, r60479304, MPFR_RNDN);
        mpfr_mul(r60479306, r60479303, r60479305, MPFR_RNDN);
        mpfr_add(r60479307, r60479302, r60479306, MPFR_RNDN);
        ;
        mpfr_mul(r60479309, r60479305, r60479304, MPFR_RNDN);
        mpfr_mul(r60479310, r60479309, r60479304, MPFR_RNDN);
        mpfr_mul(r60479311, r60479308, r60479310, MPFR_RNDN);
        mpfr_add(r60479312, r60479307, r60479311, MPFR_RNDN);
        ;
        mpfr_mul(r60479314, r60479310, r60479304, MPFR_RNDN);
        mpfr_mul(r60479315, r60479314, r60479304, MPFR_RNDN);
        mpfr_mul(r60479316, r60479313, r60479315, MPFR_RNDN);
        mpfr_add(r60479317, r60479312, r60479316, MPFR_RNDN);
        ;
        mpfr_mul(r60479319, r60479315, r60479304, MPFR_RNDN);
        mpfr_mul(r60479320, r60479319, r60479304, MPFR_RNDN);
        mpfr_mul(r60479321, r60479318, r60479320, MPFR_RNDN);
        mpfr_add(r60479322, r60479317, r60479321, MPFR_RNDN);
        return mpfr_get_d(r60479322, MPFR_RNDN);
}

static mpfr_t r60479323, r60479324, r60479325, r60479326, r60479327, r60479328, r60479329, r60479330, r60479331, r60479332, r60479333, r60479334, r60479335, r60479336, r60479337, r60479338, r60479339, r60479340, r60479341, r60479342, r60479343, r60479344;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60479323);
        mpfr_init_set_str(r60479324, "3", 10, MPFR_RNDN);
        mpfr_init(r60479325);
        mpfr_init(r60479326);
        mpfr_init_set_str(r60479327, "256.0", 10, MPFR_RNDN);
        mpfr_init(r60479328);
        mpfr_init(r60479329);
        mpfr_init_set_str(r60479330, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r60479331);
        mpfr_init(r60479332);
        mpfr_init(r60479333);
        mpfr_init(r60479334);
        mpfr_init(r60479335);
        mpfr_init(r60479336);
        mpfr_init(r60479337);
        mpfr_init(r60479338);
        mpfr_init_set_str(r60479339, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r60479340);
        mpfr_init(r60479341);
        mpfr_init_set_str(r60479342, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r60479343);
        mpfr_init(r60479344);
}

double f_fm(double x) {
        mpfr_set_d(r60479323, x, MPFR_RNDN);
        ;
        mpfr_pow(r60479325, r60479323, r60479324, MPFR_RNDN);
        mpfr_mul(r60479326, r60479325, r60479325, MPFR_RNDN);
        ;
        mpfr_mul(r60479328, r60479323, r60479323, MPFR_RNDN);
        mpfr_mul(r60479329, r60479327, r60479328, MPFR_RNDN);
        ;
        mpfr_sub(r60479331, r60479329, r60479330, MPFR_RNDN);
        mpfr_mul(r60479332, r60479326, r60479331, MPFR_RNDN);
        mpfr_pow(r60479333, r60479325, r60479324, MPFR_RNDN);
        mpfr_sub(r60479334, r60479333, r60479325, MPFR_RNDN);
        mpfr_mul(r60479335, r60479325, r60479323, MPFR_RNDN);
        mpfr_add(r60479336, r60479328, r60479335, MPFR_RNDN);
        mpfr_add(r60479337, r60479326, r60479336, MPFR_RNDN);
        mpfr_div(r60479338, r60479334, r60479337, MPFR_RNDN);
        ;
        mpfr_mul(r60479340, r60479339, r60479323, MPFR_RNDN);
        mpfr_mul(r60479341, r60479338, r60479340, MPFR_RNDN);
        ;
        mpfr_add(r60479343, r60479341, r60479342, MPFR_RNDN);
        mpfr_add(r60479344, r60479332, r60479343, MPFR_RNDN);
        return mpfr_get_d(r60479344, MPFR_RNDN);
}

static mpfr_t r60479345, r60479346, r60479347, r60479348, r60479349, r60479350, r60479351, r60479352, r60479353, r60479354, r60479355, r60479356, r60479357, r60479358, r60479359, r60479360, r60479361, r60479362, r60479363, r60479364, r60479365, r60479366;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r60479345);
        mpfr_init_set_str(r60479346, "3", 10, MPFR_RNDN);
        mpfr_init(r60479347);
        mpfr_init(r60479348);
        mpfr_init_set_str(r60479349, "256.0", 10, MPFR_RNDN);
        mpfr_init(r60479350);
        mpfr_init(r60479351);
        mpfr_init_set_str(r60479352, "3584.0", 10, MPFR_RNDN);
        mpfr_init(r60479353);
        mpfr_init(r60479354);
        mpfr_init(r60479355);
        mpfr_init(r60479356);
        mpfr_init(r60479357);
        mpfr_init(r60479358);
        mpfr_init(r60479359);
        mpfr_init(r60479360);
        mpfr_init_set_str(r60479361, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r60479362);
        mpfr_init(r60479363);
        mpfr_init_set_str(r60479364, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r60479365);
        mpfr_init(r60479366);
}

double f_dm(double x) {
        mpfr_set_d(r60479345, x, MPFR_RNDN);
        ;
        mpfr_pow(r60479347, r60479345, r60479346, MPFR_RNDN);
        mpfr_mul(r60479348, r60479347, r60479347, MPFR_RNDN);
        ;
        mpfr_mul(r60479350, r60479345, r60479345, MPFR_RNDN);
        mpfr_mul(r60479351, r60479349, r60479350, MPFR_RNDN);
        ;
        mpfr_sub(r60479353, r60479351, r60479352, MPFR_RNDN);
        mpfr_mul(r60479354, r60479348, r60479353, MPFR_RNDN);
        mpfr_pow(r60479355, r60479347, r60479346, MPFR_RNDN);
        mpfr_sub(r60479356, r60479355, r60479347, MPFR_RNDN);
        mpfr_mul(r60479357, r60479347, r60479345, MPFR_RNDN);
        mpfr_add(r60479358, r60479350, r60479357, MPFR_RNDN);
        mpfr_add(r60479359, r60479348, r60479358, MPFR_RNDN);
        mpfr_div(r60479360, r60479356, r60479359, MPFR_RNDN);
        ;
        mpfr_mul(r60479362, r60479361, r60479345, MPFR_RNDN);
        mpfr_mul(r60479363, r60479360, r60479362, MPFR_RNDN);
        ;
        mpfr_add(r60479365, r60479363, r60479364, MPFR_RNDN);
        mpfr_add(r60479366, r60479354, r60479365, MPFR_RNDN);
        return mpfr_get_d(r60479366, MPFR_RNDN);
}

