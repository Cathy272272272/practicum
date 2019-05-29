#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9402247 = 1680.0;
        float r9402248 = -13440.0;
        float r9402249 = x;
        float r9402250 = r9402249 * r9402249;
        float r9402251 = r9402248 * r9402250;
        float r9402252 = r9402247 + r9402251;
        float r9402253 = 13440.0;
        float r9402254 = r9402250 * r9402249;
        float r9402255 = r9402254 * r9402249;
        float r9402256 = r9402253 * r9402255;
        float r9402257 = r9402252 + r9402256;
        float r9402258 = -3584.0;
        float r9402259 = r9402255 * r9402249;
        float r9402260 = r9402259 * r9402249;
        float r9402261 = r9402258 * r9402260;
        float r9402262 = r9402257 + r9402261;
        float r9402263 = 256.0;
        float r9402264 = r9402260 * r9402249;
        float r9402265 = r9402264 * r9402249;
        float r9402266 = r9402263 * r9402265;
        float r9402267 = r9402262 + r9402266;
        return r9402267;
}

double f_id(double x) {
        double r9402268 = 1680.0;
        double r9402269 = -13440.0;
        double r9402270 = x;
        double r9402271 = r9402270 * r9402270;
        double r9402272 = r9402269 * r9402271;
        double r9402273 = r9402268 + r9402272;
        double r9402274 = 13440.0;
        double r9402275 = r9402271 * r9402270;
        double r9402276 = r9402275 * r9402270;
        double r9402277 = r9402274 * r9402276;
        double r9402278 = r9402273 + r9402277;
        double r9402279 = -3584.0;
        double r9402280 = r9402276 * r9402270;
        double r9402281 = r9402280 * r9402270;
        double r9402282 = r9402279 * r9402281;
        double r9402283 = r9402278 + r9402282;
        double r9402284 = 256.0;
        double r9402285 = r9402281 * r9402270;
        double r9402286 = r9402285 * r9402270;
        double r9402287 = r9402284 * r9402286;
        double r9402288 = r9402283 + r9402287;
        return r9402288;
}


double f_of(float x) {
        float r9402289 = x;
        float r9402290 = 13440.0;
        float r9402291 = r9402289 * r9402290;
        float r9402292 = 3;
        float r9402293 = pow(r9402289, r9402292);
        float r9402294 = r9402291 * r9402293;
        float r9402295 = log(r9402294);
        float r9402296 = exp(r9402295);
        float r9402297 = -13440.0;
        float r9402298 = r9402289 * r9402297;
        float r9402299 = r9402289 * r9402298;
        float r9402300 = r9402296 + r9402299;
        float r9402301 = 1680.0;
        float r9402302 = r9402300 + r9402301;
        float r9402303 = r9402293 * r9402293;
        float r9402304 = -3584.0;
        float r9402305 = 256.0;
        float r9402306 = r9402305 * r9402289;
        float r9402307 = r9402306 * r9402289;
        float r9402308 = r9402304 + r9402307;
        float r9402309 = r9402303 * r9402308;
        float r9402310 = r9402302 + r9402309;
        return r9402310;
}

double f_od(double x) {
        double r9402311 = x;
        double r9402312 = 13440.0;
        double r9402313 = r9402311 * r9402312;
        double r9402314 = 3;
        double r9402315 = pow(r9402311, r9402314);
        double r9402316 = r9402313 * r9402315;
        double r9402317 = log(r9402316);
        double r9402318 = exp(r9402317);
        double r9402319 = -13440.0;
        double r9402320 = r9402311 * r9402319;
        double r9402321 = r9402311 * r9402320;
        double r9402322 = r9402318 + r9402321;
        double r9402323 = 1680.0;
        double r9402324 = r9402322 + r9402323;
        double r9402325 = r9402315 * r9402315;
        double r9402326 = -3584.0;
        double r9402327 = 256.0;
        double r9402328 = r9402327 * r9402311;
        double r9402329 = r9402328 * r9402311;
        double r9402330 = r9402326 + r9402329;
        double r9402331 = r9402325 * r9402330;
        double r9402332 = r9402324 + r9402331;
        return r9402332;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402333, r9402334, r9402335, r9402336, r9402337, r9402338, r9402339, r9402340, r9402341, r9402342, r9402343, r9402344, r9402345, r9402346, r9402347, r9402348, r9402349, r9402350, r9402351, r9402352, r9402353;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9402333, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402334, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9402335);
        mpfr_init(r9402336);
        mpfr_init(r9402337);
        mpfr_init(r9402338);
        mpfr_init_set_str(r9402339, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9402340);
        mpfr_init(r9402341);
        mpfr_init(r9402342);
        mpfr_init(r9402343);
        mpfr_init_set_str(r9402344, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r9402345);
        mpfr_init(r9402346);
        mpfr_init(r9402347);
        mpfr_init(r9402348);
        mpfr_init_set_str(r9402349, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9402350);
        mpfr_init(r9402351);
        mpfr_init(r9402352);
        mpfr_init(r9402353);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9402335, x, MPFR_RNDN);
        mpfr_mul(r9402336, r9402335, r9402335, MPFR_RNDN);
        mpfr_mul(r9402337, r9402334, r9402336, MPFR_RNDN);
        mpfr_add(r9402338, r9402333, r9402337, MPFR_RNDN);
        ;
        mpfr_mul(r9402340, r9402336, r9402335, MPFR_RNDN);
        mpfr_mul(r9402341, r9402340, r9402335, MPFR_RNDN);
        mpfr_mul(r9402342, r9402339, r9402341, MPFR_RNDN);
        mpfr_add(r9402343, r9402338, r9402342, MPFR_RNDN);
        ;
        mpfr_mul(r9402345, r9402341, r9402335, MPFR_RNDN);
        mpfr_mul(r9402346, r9402345, r9402335, MPFR_RNDN);
        mpfr_mul(r9402347, r9402344, r9402346, MPFR_RNDN);
        mpfr_add(r9402348, r9402343, r9402347, MPFR_RNDN);
        ;
        mpfr_mul(r9402350, r9402346, r9402335, MPFR_RNDN);
        mpfr_mul(r9402351, r9402350, r9402335, MPFR_RNDN);
        mpfr_mul(r9402352, r9402349, r9402351, MPFR_RNDN);
        mpfr_add(r9402353, r9402348, r9402352, MPFR_RNDN);
        return mpfr_get_d(r9402353, MPFR_RNDN);
}

static mpfr_t r9402354, r9402355, r9402356, r9402357, r9402358, r9402359, r9402360, r9402361, r9402362, r9402363, r9402364, r9402365, r9402366, r9402367, r9402368, r9402369, r9402370, r9402371, r9402372, r9402373, r9402374, r9402375;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9402354);
        mpfr_init_set_str(r9402355, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9402356);
        mpfr_init_set_str(r9402357, "3", 10, MPFR_RNDN);
        mpfr_init(r9402358);
        mpfr_init(r9402359);
        mpfr_init(r9402360);
        mpfr_init(r9402361);
        mpfr_init_set_str(r9402362, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9402363);
        mpfr_init(r9402364);
        mpfr_init(r9402365);
        mpfr_init_set_str(r9402366, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r9402367);
        mpfr_init(r9402368);
        mpfr_init_set_str(r9402369, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402370, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9402371);
        mpfr_init(r9402372);
        mpfr_init(r9402373);
        mpfr_init(r9402374);
        mpfr_init(r9402375);
}

double f_fm(double x) {
        mpfr_set_d(r9402354, x, MPFR_RNDN);
        ;
        mpfr_mul(r9402356, r9402354, r9402355, MPFR_RNDN);
        ;
        mpfr_pow(r9402358, r9402354, r9402357, MPFR_RNDN);
        mpfr_mul(r9402359, r9402356, r9402358, MPFR_RNDN);
        mpfr_log(r9402360, r9402359, MPFR_RNDN);
        mpfr_exp(r9402361, r9402360, MPFR_RNDN);
        ;
        mpfr_mul(r9402363, r9402354, r9402362, MPFR_RNDN);
        mpfr_mul(r9402364, r9402354, r9402363, MPFR_RNDN);
        mpfr_add(r9402365, r9402361, r9402364, MPFR_RNDN);
        ;
        mpfr_add(r9402367, r9402365, r9402366, MPFR_RNDN);
        mpfr_mul(r9402368, r9402358, r9402358, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9402371, r9402370, r9402354, MPFR_RNDN);
        mpfr_mul(r9402372, r9402371, r9402354, MPFR_RNDN);
        mpfr_add(r9402373, r9402369, r9402372, MPFR_RNDN);
        mpfr_mul(r9402374, r9402368, r9402373, MPFR_RNDN);
        mpfr_add(r9402375, r9402367, r9402374, MPFR_RNDN);
        return mpfr_get_d(r9402375, MPFR_RNDN);
}

static mpfr_t r9402376, r9402377, r9402378, r9402379, r9402380, r9402381, r9402382, r9402383, r9402384, r9402385, r9402386, r9402387, r9402388, r9402389, r9402390, r9402391, r9402392, r9402393, r9402394, r9402395, r9402396, r9402397;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9402376);
        mpfr_init_set_str(r9402377, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r9402378);
        mpfr_init_set_str(r9402379, "3", 10, MPFR_RNDN);
        mpfr_init(r9402380);
        mpfr_init(r9402381);
        mpfr_init(r9402382);
        mpfr_init(r9402383);
        mpfr_init_set_str(r9402384, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r9402385);
        mpfr_init(r9402386);
        mpfr_init(r9402387);
        mpfr_init_set_str(r9402388, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r9402389);
        mpfr_init(r9402390);
        mpfr_init_set_str(r9402391, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9402392, "256.0", 10, MPFR_RNDN);
        mpfr_init(r9402393);
        mpfr_init(r9402394);
        mpfr_init(r9402395);
        mpfr_init(r9402396);
        mpfr_init(r9402397);
}

double f_dm(double x) {
        mpfr_set_d(r9402376, x, MPFR_RNDN);
        ;
        mpfr_mul(r9402378, r9402376, r9402377, MPFR_RNDN);
        ;
        mpfr_pow(r9402380, r9402376, r9402379, MPFR_RNDN);
        mpfr_mul(r9402381, r9402378, r9402380, MPFR_RNDN);
        mpfr_log(r9402382, r9402381, MPFR_RNDN);
        mpfr_exp(r9402383, r9402382, MPFR_RNDN);
        ;
        mpfr_mul(r9402385, r9402376, r9402384, MPFR_RNDN);
        mpfr_mul(r9402386, r9402376, r9402385, MPFR_RNDN);
        mpfr_add(r9402387, r9402383, r9402386, MPFR_RNDN);
        ;
        mpfr_add(r9402389, r9402387, r9402388, MPFR_RNDN);
        mpfr_mul(r9402390, r9402380, r9402380, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9402393, r9402392, r9402376, MPFR_RNDN);
        mpfr_mul(r9402394, r9402393, r9402376, MPFR_RNDN);
        mpfr_add(r9402395, r9402391, r9402394, MPFR_RNDN);
        mpfr_mul(r9402396, r9402390, r9402395, MPFR_RNDN);
        mpfr_add(r9402397, r9402389, r9402396, MPFR_RNDN);
        return mpfr_get_d(r9402397, MPFR_RNDN);
}

