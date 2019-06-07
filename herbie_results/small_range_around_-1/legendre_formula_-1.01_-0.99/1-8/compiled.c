#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r48608193 = 0.273438;
        float r48608194 = -9.84375;
        float r48608195 = x;
        float r48608196 = r48608195 * r48608195;
        float r48608197 = r48608194 * r48608196;
        float r48608198 = r48608193 + r48608197;
        float r48608199 = 54.140625;
        float r48608200 = r48608196 * r48608195;
        float r48608201 = r48608200 * r48608195;
        float r48608202 = r48608199 * r48608201;
        float r48608203 = r48608198 + r48608202;
        float r48608204 = -93.84375;
        float r48608205 = r48608201 * r48608195;
        float r48608206 = r48608205 * r48608195;
        float r48608207 = r48608204 * r48608206;
        float r48608208 = r48608203 + r48608207;
        float r48608209 = 50.273438;
        float r48608210 = r48608206 * r48608195;
        float r48608211 = r48608210 * r48608195;
        float r48608212 = r48608209 * r48608211;
        float r48608213 = r48608208 + r48608212;
        return r48608213;
}

double f_id(double x) {
        double r48608214 = 0.273438;
        double r48608215 = -9.84375;
        double r48608216 = x;
        double r48608217 = r48608216 * r48608216;
        double r48608218 = r48608215 * r48608217;
        double r48608219 = r48608214 + r48608218;
        double r48608220 = 54.140625;
        double r48608221 = r48608217 * r48608216;
        double r48608222 = r48608221 * r48608216;
        double r48608223 = r48608220 * r48608222;
        double r48608224 = r48608219 + r48608223;
        double r48608225 = -93.84375;
        double r48608226 = r48608222 * r48608216;
        double r48608227 = r48608226 * r48608216;
        double r48608228 = r48608225 * r48608227;
        double r48608229 = r48608224 + r48608228;
        double r48608230 = 50.273438;
        double r48608231 = r48608227 * r48608216;
        double r48608232 = r48608231 * r48608216;
        double r48608233 = r48608230 * r48608232;
        double r48608234 = r48608229 + r48608233;
        return r48608234;
}


double f_of(float x) {
        float r48608235 = x;
        float r48608236 = 3;
        float r48608237 = pow(r48608235, r48608236);
        float r48608238 = 54.140625;
        float r48608239 = r48608235 * r48608238;
        float r48608240 = r48608237 * r48608239;
        float r48608241 = -9.84375;
        float r48608242 = r48608235 * r48608241;
        float r48608243 = r48608235 * r48608242;
        float r48608244 = 0.273438;
        float r48608245 = r48608243 + r48608244;
        float r48608246 = r48608240 + r48608245;
        float r48608247 = pow(r48608246, r48608236);
        float r48608248 = pow(r48608247, r48608236);
        float r48608249 = cbrt(r48608248);
        float r48608250 = r48608237 * r48608237;
        float r48608251 = pow(r48608250, r48608236);
        float r48608252 = -93.84375;
        float r48608253 = 50.273438;
        float r48608254 = r48608235 * r48608235;
        float r48608255 = r48608253 * r48608254;
        float r48608256 = r48608252 + r48608255;
        float r48608257 = pow(r48608256, r48608236);
        float r48608258 = r48608251 * r48608257;
        float r48608259 = r48608249 + r48608258;
        float r48608260 = r48608242 * r48608235;
        float r48608261 = r48608240 + r48608260;
        float r48608262 = r48608261 + r48608244;
        float r48608263 = r48608262 * r48608262;
        float r48608264 = r48608250 * r48608256;
        float r48608265 = r48608264 - r48608262;
        float r48608266 = r48608264 * r48608265;
        float r48608267 = r48608263 + r48608266;
        float r48608268 = r48608259 / r48608267;
        return r48608268;
}

double f_od(double x) {
        double r48608269 = x;
        double r48608270 = 3;
        double r48608271 = pow(r48608269, r48608270);
        double r48608272 = 54.140625;
        double r48608273 = r48608269 * r48608272;
        double r48608274 = r48608271 * r48608273;
        double r48608275 = -9.84375;
        double r48608276 = r48608269 * r48608275;
        double r48608277 = r48608269 * r48608276;
        double r48608278 = 0.273438;
        double r48608279 = r48608277 + r48608278;
        double r48608280 = r48608274 + r48608279;
        double r48608281 = pow(r48608280, r48608270);
        double r48608282 = pow(r48608281, r48608270);
        double r48608283 = cbrt(r48608282);
        double r48608284 = r48608271 * r48608271;
        double r48608285 = pow(r48608284, r48608270);
        double r48608286 = -93.84375;
        double r48608287 = 50.273438;
        double r48608288 = r48608269 * r48608269;
        double r48608289 = r48608287 * r48608288;
        double r48608290 = r48608286 + r48608289;
        double r48608291 = pow(r48608290, r48608270);
        double r48608292 = r48608285 * r48608291;
        double r48608293 = r48608283 + r48608292;
        double r48608294 = r48608276 * r48608269;
        double r48608295 = r48608274 + r48608294;
        double r48608296 = r48608295 + r48608278;
        double r48608297 = r48608296 * r48608296;
        double r48608298 = r48608284 * r48608290;
        double r48608299 = r48608298 - r48608296;
        double r48608300 = r48608298 * r48608299;
        double r48608301 = r48608297 + r48608300;
        double r48608302 = r48608293 / r48608301;
        return r48608302;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r48608303, r48608304, r48608305, r48608306, r48608307, r48608308, r48608309, r48608310, r48608311, r48608312, r48608313, r48608314, r48608315, r48608316, r48608317, r48608318, r48608319, r48608320, r48608321, r48608322, r48608323;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r48608303, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608304, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r48608305);
        mpfr_init(r48608306);
        mpfr_init(r48608307);
        mpfr_init(r48608308);
        mpfr_init_set_str(r48608309, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r48608310);
        mpfr_init(r48608311);
        mpfr_init(r48608312);
        mpfr_init(r48608313);
        mpfr_init_set_str(r48608314, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r48608315);
        mpfr_init(r48608316);
        mpfr_init(r48608317);
        mpfr_init(r48608318);
        mpfr_init_set_str(r48608319, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r48608320);
        mpfr_init(r48608321);
        mpfr_init(r48608322);
        mpfr_init(r48608323);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r48608305, x, MPFR_RNDN);
        mpfr_mul(r48608306, r48608305, r48608305, MPFR_RNDN);
        mpfr_mul(r48608307, r48608304, r48608306, MPFR_RNDN);
        mpfr_add(r48608308, r48608303, r48608307, MPFR_RNDN);
        ;
        mpfr_mul(r48608310, r48608306, r48608305, MPFR_RNDN);
        mpfr_mul(r48608311, r48608310, r48608305, MPFR_RNDN);
        mpfr_mul(r48608312, r48608309, r48608311, MPFR_RNDN);
        mpfr_add(r48608313, r48608308, r48608312, MPFR_RNDN);
        ;
        mpfr_mul(r48608315, r48608311, r48608305, MPFR_RNDN);
        mpfr_mul(r48608316, r48608315, r48608305, MPFR_RNDN);
        mpfr_mul(r48608317, r48608314, r48608316, MPFR_RNDN);
        mpfr_add(r48608318, r48608313, r48608317, MPFR_RNDN);
        ;
        mpfr_mul(r48608320, r48608316, r48608305, MPFR_RNDN);
        mpfr_mul(r48608321, r48608320, r48608305, MPFR_RNDN);
        mpfr_mul(r48608322, r48608319, r48608321, MPFR_RNDN);
        mpfr_add(r48608323, r48608318, r48608322, MPFR_RNDN);
        return mpfr_get_d(r48608323, MPFR_RNDN);
}

static mpfr_t r48608324, r48608325, r48608326, r48608327, r48608328, r48608329, r48608330, r48608331, r48608332, r48608333, r48608334, r48608335, r48608336, r48608337, r48608338, r48608339, r48608340, r48608341, r48608342, r48608343, r48608344, r48608345, r48608346, r48608347, r48608348, r48608349, r48608350, r48608351, r48608352, r48608353, r48608354, r48608355, r48608356, r48608357;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48608324);
        mpfr_init_set_str(r48608325, "3", 10, MPFR_RNDN);
        mpfr_init(r48608326);
        mpfr_init_set_str(r48608327, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r48608328);
        mpfr_init(r48608329);
        mpfr_init_set_str(r48608330, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r48608331);
        mpfr_init(r48608332);
        mpfr_init_set_str(r48608333, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r48608334);
        mpfr_init(r48608335);
        mpfr_init(r48608336);
        mpfr_init(r48608337);
        mpfr_init(r48608338);
        mpfr_init(r48608339);
        mpfr_init(r48608340);
        mpfr_init_set_str(r48608341, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608342, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r48608343);
        mpfr_init(r48608344);
        mpfr_init(r48608345);
        mpfr_init(r48608346);
        mpfr_init(r48608347);
        mpfr_init(r48608348);
        mpfr_init(r48608349);
        mpfr_init(r48608350);
        mpfr_init(r48608351);
        mpfr_init(r48608352);
        mpfr_init(r48608353);
        mpfr_init(r48608354);
        mpfr_init(r48608355);
        mpfr_init(r48608356);
        mpfr_init(r48608357);
}

double f_fm(double x) {
        mpfr_set_d(r48608324, x, MPFR_RNDN);
        ;
        mpfr_pow(r48608326, r48608324, r48608325, MPFR_RNDN);
        ;
        mpfr_mul(r48608328, r48608324, r48608327, MPFR_RNDN);
        mpfr_mul(r48608329, r48608326, r48608328, MPFR_RNDN);
        ;
        mpfr_mul(r48608331, r48608324, r48608330, MPFR_RNDN);
        mpfr_mul(r48608332, r48608324, r48608331, MPFR_RNDN);
        ;
        mpfr_add(r48608334, r48608332, r48608333, MPFR_RNDN);
        mpfr_add(r48608335, r48608329, r48608334, MPFR_RNDN);
        mpfr_pow(r48608336, r48608335, r48608325, MPFR_RNDN);
        mpfr_pow(r48608337, r48608336, r48608325, MPFR_RNDN);
        mpfr_cbrt(r48608338, r48608337, MPFR_RNDN);
        mpfr_mul(r48608339, r48608326, r48608326, MPFR_RNDN);
        mpfr_pow(r48608340, r48608339, r48608325, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r48608343, r48608324, r48608324, MPFR_RNDN);
        mpfr_mul(r48608344, r48608342, r48608343, MPFR_RNDN);
        mpfr_add(r48608345, r48608341, r48608344, MPFR_RNDN);
        mpfr_pow(r48608346, r48608345, r48608325, MPFR_RNDN);
        mpfr_mul(r48608347, r48608340, r48608346, MPFR_RNDN);
        mpfr_add(r48608348, r48608338, r48608347, MPFR_RNDN);
        mpfr_mul(r48608349, r48608331, r48608324, MPFR_RNDN);
        mpfr_add(r48608350, r48608329, r48608349, MPFR_RNDN);
        mpfr_add(r48608351, r48608350, r48608333, MPFR_RNDN);
        mpfr_mul(r48608352, r48608351, r48608351, MPFR_RNDN);
        mpfr_mul(r48608353, r48608339, r48608345, MPFR_RNDN);
        mpfr_sub(r48608354, r48608353, r48608351, MPFR_RNDN);
        mpfr_mul(r48608355, r48608353, r48608354, MPFR_RNDN);
        mpfr_add(r48608356, r48608352, r48608355, MPFR_RNDN);
        mpfr_div(r48608357, r48608348, r48608356, MPFR_RNDN);
        return mpfr_get_d(r48608357, MPFR_RNDN);
}

static mpfr_t r48608358, r48608359, r48608360, r48608361, r48608362, r48608363, r48608364, r48608365, r48608366, r48608367, r48608368, r48608369, r48608370, r48608371, r48608372, r48608373, r48608374, r48608375, r48608376, r48608377, r48608378, r48608379, r48608380, r48608381, r48608382, r48608383, r48608384, r48608385, r48608386, r48608387, r48608388, r48608389, r48608390, r48608391;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r48608358);
        mpfr_init_set_str(r48608359, "3", 10, MPFR_RNDN);
        mpfr_init(r48608360);
        mpfr_init_set_str(r48608361, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r48608362);
        mpfr_init(r48608363);
        mpfr_init_set_str(r48608364, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r48608365);
        mpfr_init(r48608366);
        mpfr_init_set_str(r48608367, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r48608368);
        mpfr_init(r48608369);
        mpfr_init(r48608370);
        mpfr_init(r48608371);
        mpfr_init(r48608372);
        mpfr_init(r48608373);
        mpfr_init(r48608374);
        mpfr_init_set_str(r48608375, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r48608376, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r48608377);
        mpfr_init(r48608378);
        mpfr_init(r48608379);
        mpfr_init(r48608380);
        mpfr_init(r48608381);
        mpfr_init(r48608382);
        mpfr_init(r48608383);
        mpfr_init(r48608384);
        mpfr_init(r48608385);
        mpfr_init(r48608386);
        mpfr_init(r48608387);
        mpfr_init(r48608388);
        mpfr_init(r48608389);
        mpfr_init(r48608390);
        mpfr_init(r48608391);
}

double f_dm(double x) {
        mpfr_set_d(r48608358, x, MPFR_RNDN);
        ;
        mpfr_pow(r48608360, r48608358, r48608359, MPFR_RNDN);
        ;
        mpfr_mul(r48608362, r48608358, r48608361, MPFR_RNDN);
        mpfr_mul(r48608363, r48608360, r48608362, MPFR_RNDN);
        ;
        mpfr_mul(r48608365, r48608358, r48608364, MPFR_RNDN);
        mpfr_mul(r48608366, r48608358, r48608365, MPFR_RNDN);
        ;
        mpfr_add(r48608368, r48608366, r48608367, MPFR_RNDN);
        mpfr_add(r48608369, r48608363, r48608368, MPFR_RNDN);
        mpfr_pow(r48608370, r48608369, r48608359, MPFR_RNDN);
        mpfr_pow(r48608371, r48608370, r48608359, MPFR_RNDN);
        mpfr_cbrt(r48608372, r48608371, MPFR_RNDN);
        mpfr_mul(r48608373, r48608360, r48608360, MPFR_RNDN);
        mpfr_pow(r48608374, r48608373, r48608359, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r48608377, r48608358, r48608358, MPFR_RNDN);
        mpfr_mul(r48608378, r48608376, r48608377, MPFR_RNDN);
        mpfr_add(r48608379, r48608375, r48608378, MPFR_RNDN);
        mpfr_pow(r48608380, r48608379, r48608359, MPFR_RNDN);
        mpfr_mul(r48608381, r48608374, r48608380, MPFR_RNDN);
        mpfr_add(r48608382, r48608372, r48608381, MPFR_RNDN);
        mpfr_mul(r48608383, r48608365, r48608358, MPFR_RNDN);
        mpfr_add(r48608384, r48608363, r48608383, MPFR_RNDN);
        mpfr_add(r48608385, r48608384, r48608367, MPFR_RNDN);
        mpfr_mul(r48608386, r48608385, r48608385, MPFR_RNDN);
        mpfr_mul(r48608387, r48608373, r48608379, MPFR_RNDN);
        mpfr_sub(r48608388, r48608387, r48608385, MPFR_RNDN);
        mpfr_mul(r48608389, r48608387, r48608388, MPFR_RNDN);
        mpfr_add(r48608390, r48608386, r48608389, MPFR_RNDN);
        mpfr_div(r48608391, r48608382, r48608390, MPFR_RNDN);
        return mpfr_get_d(r48608391, MPFR_RNDN);
}

