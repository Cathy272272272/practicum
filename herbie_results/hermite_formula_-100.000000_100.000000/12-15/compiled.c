#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r7081171 = -518918400.0;
        float r7081172 = x;
        float r7081173 = r7081171 * r7081172;
        float r7081174 = 2421619200.0;
        float r7081175 = r7081172 * r7081172;
        float r7081176 = r7081175 * r7081172;
        float r7081177 = r7081174 * r7081176;
        float r7081178 = r7081173 + r7081177;
        float r7081179 = -2905943040.0;
        float r7081180 = r7081176 * r7081172;
        float r7081181 = r7081180 * r7081172;
        float r7081182 = r7081179 * r7081181;
        float r7081183 = r7081178 + r7081182;
        float r7081184 = 1383782400.0;
        float r7081185 = r7081181 * r7081172;
        float r7081186 = r7081185 * r7081172;
        float r7081187 = r7081184 * r7081186;
        float r7081188 = r7081183 + r7081187;
        float r7081189 = -307507200.0;
        float r7081190 = r7081186 * r7081172;
        float r7081191 = r7081190 * r7081172;
        float r7081192 = r7081189 * r7081191;
        float r7081193 = r7081188 + r7081192;
        float r7081194 = 33546240.0;
        float r7081195 = r7081191 * r7081172;
        float r7081196 = r7081195 * r7081172;
        float r7081197 = r7081194 * r7081196;
        float r7081198 = r7081193 + r7081197;
        float r7081199 = -1720320.0;
        float r7081200 = r7081196 * r7081172;
        float r7081201 = r7081200 * r7081172;
        float r7081202 = r7081199 * r7081201;
        float r7081203 = r7081198 + r7081202;
        float r7081204 = 32768.0;
        float r7081205 = r7081201 * r7081172;
        float r7081206 = r7081205 * r7081172;
        float r7081207 = r7081204 * r7081206;
        float r7081208 = r7081203 + r7081207;
        return r7081208;
}

double f_id(double x) {
        double r7081209 = -518918400.0;
        double r7081210 = x;
        double r7081211 = r7081209 * r7081210;
        double r7081212 = 2421619200.0;
        double r7081213 = r7081210 * r7081210;
        double r7081214 = r7081213 * r7081210;
        double r7081215 = r7081212 * r7081214;
        double r7081216 = r7081211 + r7081215;
        double r7081217 = -2905943040.0;
        double r7081218 = r7081214 * r7081210;
        double r7081219 = r7081218 * r7081210;
        double r7081220 = r7081217 * r7081219;
        double r7081221 = r7081216 + r7081220;
        double r7081222 = 1383782400.0;
        double r7081223 = r7081219 * r7081210;
        double r7081224 = r7081223 * r7081210;
        double r7081225 = r7081222 * r7081224;
        double r7081226 = r7081221 + r7081225;
        double r7081227 = -307507200.0;
        double r7081228 = r7081224 * r7081210;
        double r7081229 = r7081228 * r7081210;
        double r7081230 = r7081227 * r7081229;
        double r7081231 = r7081226 + r7081230;
        double r7081232 = 33546240.0;
        double r7081233 = r7081229 * r7081210;
        double r7081234 = r7081233 * r7081210;
        double r7081235 = r7081232 * r7081234;
        double r7081236 = r7081231 + r7081235;
        double r7081237 = -1720320.0;
        double r7081238 = r7081234 * r7081210;
        double r7081239 = r7081238 * r7081210;
        double r7081240 = r7081237 * r7081239;
        double r7081241 = r7081236 + r7081240;
        double r7081242 = 32768.0;
        double r7081243 = r7081239 * r7081210;
        double r7081244 = r7081243 * r7081210;
        double r7081245 = r7081242 * r7081244;
        double r7081246 = r7081241 + r7081245;
        return r7081246;
}


double f_of(float x) {
        float r7081247 = x;
        float r7081248 = r7081247 * r7081247;
        float r7081249 = r7081248 * r7081248;
        float r7081250 = 3;
        float r7081251 = pow(r7081247, r7081250);
        float r7081252 = r7081251 * r7081251;
        float r7081253 = r7081251 * r7081252;
        float r7081254 = r7081249 * r7081253;
        float r7081255 = 32768.0;
        float r7081256 = r7081248 * r7081255;
        float r7081257 = -1720320.0;
        float r7081258 = r7081256 + r7081257;
        float r7081259 = r7081254 * r7081258;
        float r7081260 = 33546240.0;
        float r7081261 = r7081260 * r7081248;
        float r7081262 = log(r7081261);
        float r7081263 = exp(r7081262);
        float r7081264 = -307507200.0;
        float r7081265 = r7081263 + r7081264;
        float r7081266 = r7081253 * r7081265;
        float r7081267 = 2421619200.0;
        float r7081268 = r7081267 * r7081247;
        float r7081269 = r7081248 * r7081268;
        float r7081270 = r7081266 + r7081269;
        float r7081271 = -518918400.0;
        float r7081272 = r7081271 * r7081247;
        float r7081273 = -2905943040.0;
        float r7081274 = r7081247 * r7081273;
        float r7081275 = r7081274 * r7081249;
        float r7081276 = r7081272 + r7081275;
        float r7081277 = 1383782400.0;
        float r7081278 = r7081247 * r7081277;
        float r7081279 = r7081278 * r7081248;
        float r7081280 = r7081279 * r7081249;
        float r7081281 = r7081276 + r7081280;
        float r7081282 = r7081270 + r7081281;
        float r7081283 = r7081259 + r7081282;
        return r7081283;
}

double f_od(double x) {
        double r7081284 = x;
        double r7081285 = r7081284 * r7081284;
        double r7081286 = r7081285 * r7081285;
        double r7081287 = 3;
        double r7081288 = pow(r7081284, r7081287);
        double r7081289 = r7081288 * r7081288;
        double r7081290 = r7081288 * r7081289;
        double r7081291 = r7081286 * r7081290;
        double r7081292 = 32768.0;
        double r7081293 = r7081285 * r7081292;
        double r7081294 = -1720320.0;
        double r7081295 = r7081293 + r7081294;
        double r7081296 = r7081291 * r7081295;
        double r7081297 = 33546240.0;
        double r7081298 = r7081297 * r7081285;
        double r7081299 = log(r7081298);
        double r7081300 = exp(r7081299);
        double r7081301 = -307507200.0;
        double r7081302 = r7081300 + r7081301;
        double r7081303 = r7081290 * r7081302;
        double r7081304 = 2421619200.0;
        double r7081305 = r7081304 * r7081284;
        double r7081306 = r7081285 * r7081305;
        double r7081307 = r7081303 + r7081306;
        double r7081308 = -518918400.0;
        double r7081309 = r7081308 * r7081284;
        double r7081310 = -2905943040.0;
        double r7081311 = r7081284 * r7081310;
        double r7081312 = r7081311 * r7081286;
        double r7081313 = r7081309 + r7081312;
        double r7081314 = 1383782400.0;
        double r7081315 = r7081284 * r7081314;
        double r7081316 = r7081315 * r7081285;
        double r7081317 = r7081316 * r7081286;
        double r7081318 = r7081313 + r7081317;
        double r7081319 = r7081307 + r7081318;
        double r7081320 = r7081296 + r7081319;
        return r7081320;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7081321, r7081322, r7081323, r7081324, r7081325, r7081326, r7081327, r7081328, r7081329, r7081330, r7081331, r7081332, r7081333, r7081334, r7081335, r7081336, r7081337, r7081338, r7081339, r7081340, r7081341, r7081342, r7081343, r7081344, r7081345, r7081346, r7081347, r7081348, r7081349, r7081350, r7081351, r7081352, r7081353, r7081354, r7081355, r7081356, r7081357, r7081358;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7081321, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7081322);
        mpfr_init(r7081323);
        mpfr_init_set_str(r7081324, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7081325);
        mpfr_init(r7081326);
        mpfr_init(r7081327);
        mpfr_init(r7081328);
        mpfr_init_set_str(r7081329, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7081330);
        mpfr_init(r7081331);
        mpfr_init(r7081332);
        mpfr_init(r7081333);
        mpfr_init_set_str(r7081334, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7081335);
        mpfr_init(r7081336);
        mpfr_init(r7081337);
        mpfr_init(r7081338);
        mpfr_init_set_str(r7081339, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7081340);
        mpfr_init(r7081341);
        mpfr_init(r7081342);
        mpfr_init(r7081343);
        mpfr_init_set_str(r7081344, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7081345);
        mpfr_init(r7081346);
        mpfr_init(r7081347);
        mpfr_init(r7081348);
        mpfr_init_set_str(r7081349, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7081350);
        mpfr_init(r7081351);
        mpfr_init(r7081352);
        mpfr_init(r7081353);
        mpfr_init_set_str(r7081354, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7081355);
        mpfr_init(r7081356);
        mpfr_init(r7081357);
        mpfr_init(r7081358);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7081322, x, MPFR_RNDN);
        mpfr_mul(r7081323, r7081321, r7081322, MPFR_RNDN);
        ;
        mpfr_mul(r7081325, r7081322, r7081322, MPFR_RNDN);
        mpfr_mul(r7081326, r7081325, r7081322, MPFR_RNDN);
        mpfr_mul(r7081327, r7081324, r7081326, MPFR_RNDN);
        mpfr_add(r7081328, r7081323, r7081327, MPFR_RNDN);
        ;
        mpfr_mul(r7081330, r7081326, r7081322, MPFR_RNDN);
        mpfr_mul(r7081331, r7081330, r7081322, MPFR_RNDN);
        mpfr_mul(r7081332, r7081329, r7081331, MPFR_RNDN);
        mpfr_add(r7081333, r7081328, r7081332, MPFR_RNDN);
        ;
        mpfr_mul(r7081335, r7081331, r7081322, MPFR_RNDN);
        mpfr_mul(r7081336, r7081335, r7081322, MPFR_RNDN);
        mpfr_mul(r7081337, r7081334, r7081336, MPFR_RNDN);
        mpfr_add(r7081338, r7081333, r7081337, MPFR_RNDN);
        ;
        mpfr_mul(r7081340, r7081336, r7081322, MPFR_RNDN);
        mpfr_mul(r7081341, r7081340, r7081322, MPFR_RNDN);
        mpfr_mul(r7081342, r7081339, r7081341, MPFR_RNDN);
        mpfr_add(r7081343, r7081338, r7081342, MPFR_RNDN);
        ;
        mpfr_mul(r7081345, r7081341, r7081322, MPFR_RNDN);
        mpfr_mul(r7081346, r7081345, r7081322, MPFR_RNDN);
        mpfr_mul(r7081347, r7081344, r7081346, MPFR_RNDN);
        mpfr_add(r7081348, r7081343, r7081347, MPFR_RNDN);
        ;
        mpfr_mul(r7081350, r7081346, r7081322, MPFR_RNDN);
        mpfr_mul(r7081351, r7081350, r7081322, MPFR_RNDN);
        mpfr_mul(r7081352, r7081349, r7081351, MPFR_RNDN);
        mpfr_add(r7081353, r7081348, r7081352, MPFR_RNDN);
        ;
        mpfr_mul(r7081355, r7081351, r7081322, MPFR_RNDN);
        mpfr_mul(r7081356, r7081355, r7081322, MPFR_RNDN);
        mpfr_mul(r7081357, r7081354, r7081356, MPFR_RNDN);
        mpfr_add(r7081358, r7081353, r7081357, MPFR_RNDN);
        return mpfr_get_d(r7081358, MPFR_RNDN);
}

static mpfr_t r7081359, r7081360, r7081361, r7081362, r7081363, r7081364, r7081365, r7081366, r7081367, r7081368, r7081369, r7081370, r7081371, r7081372, r7081373, r7081374, r7081375, r7081376, r7081377, r7081378, r7081379, r7081380, r7081381, r7081382, r7081383, r7081384, r7081385, r7081386, r7081387, r7081388, r7081389, r7081390, r7081391, r7081392, r7081393, r7081394, r7081395;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7081359);
        mpfr_init(r7081360);
        mpfr_init(r7081361);
        mpfr_init_set_str(r7081362, "3", 10, MPFR_RNDN);
        mpfr_init(r7081363);
        mpfr_init(r7081364);
        mpfr_init(r7081365);
        mpfr_init(r7081366);
        mpfr_init_set_str(r7081367, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7081368);
        mpfr_init_set_str(r7081369, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7081370);
        mpfr_init(r7081371);
        mpfr_init_set_str(r7081372, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7081373);
        mpfr_init(r7081374);
        mpfr_init(r7081375);
        mpfr_init_set_str(r7081376, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7081377);
        mpfr_init(r7081378);
        mpfr_init_set_str(r7081379, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7081380);
        mpfr_init(r7081381);
        mpfr_init(r7081382);
        mpfr_init_set_str(r7081383, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7081384);
        mpfr_init_set_str(r7081385, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7081386);
        mpfr_init(r7081387);
        mpfr_init(r7081388);
        mpfr_init_set_str(r7081389, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7081390);
        mpfr_init(r7081391);
        mpfr_init(r7081392);
        mpfr_init(r7081393);
        mpfr_init(r7081394);
        mpfr_init(r7081395);
}

double f_fm(double x) {
        mpfr_set_d(r7081359, x, MPFR_RNDN);
        mpfr_mul(r7081360, r7081359, r7081359, MPFR_RNDN);
        mpfr_mul(r7081361, r7081360, r7081360, MPFR_RNDN);
        ;
        mpfr_pow(r7081363, r7081359, r7081362, MPFR_RNDN);
        mpfr_mul(r7081364, r7081363, r7081363, MPFR_RNDN);
        mpfr_mul(r7081365, r7081363, r7081364, MPFR_RNDN);
        mpfr_mul(r7081366, r7081361, r7081365, MPFR_RNDN);
        ;
        mpfr_mul(r7081368, r7081360, r7081367, MPFR_RNDN);
        ;
        mpfr_add(r7081370, r7081368, r7081369, MPFR_RNDN);
        mpfr_mul(r7081371, r7081366, r7081370, MPFR_RNDN);
        ;
        mpfr_mul(r7081373, r7081372, r7081360, MPFR_RNDN);
        mpfr_log(r7081374, r7081373, MPFR_RNDN);
        mpfr_exp(r7081375, r7081374, MPFR_RNDN);
        ;
        mpfr_add(r7081377, r7081375, r7081376, MPFR_RNDN);
        mpfr_mul(r7081378, r7081365, r7081377, MPFR_RNDN);
        ;
        mpfr_mul(r7081380, r7081379, r7081359, MPFR_RNDN);
        mpfr_mul(r7081381, r7081360, r7081380, MPFR_RNDN);
        mpfr_add(r7081382, r7081378, r7081381, MPFR_RNDN);
        ;
        mpfr_mul(r7081384, r7081383, r7081359, MPFR_RNDN);
        ;
        mpfr_mul(r7081386, r7081359, r7081385, MPFR_RNDN);
        mpfr_mul(r7081387, r7081386, r7081361, MPFR_RNDN);
        mpfr_add(r7081388, r7081384, r7081387, MPFR_RNDN);
        ;
        mpfr_mul(r7081390, r7081359, r7081389, MPFR_RNDN);
        mpfr_mul(r7081391, r7081390, r7081360, MPFR_RNDN);
        mpfr_mul(r7081392, r7081391, r7081361, MPFR_RNDN);
        mpfr_add(r7081393, r7081388, r7081392, MPFR_RNDN);
        mpfr_add(r7081394, r7081382, r7081393, MPFR_RNDN);
        mpfr_add(r7081395, r7081371, r7081394, MPFR_RNDN);
        return mpfr_get_d(r7081395, MPFR_RNDN);
}

static mpfr_t r7081396, r7081397, r7081398, r7081399, r7081400, r7081401, r7081402, r7081403, r7081404, r7081405, r7081406, r7081407, r7081408, r7081409, r7081410, r7081411, r7081412, r7081413, r7081414, r7081415, r7081416, r7081417, r7081418, r7081419, r7081420, r7081421, r7081422, r7081423, r7081424, r7081425, r7081426, r7081427, r7081428, r7081429, r7081430, r7081431, r7081432;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7081396);
        mpfr_init(r7081397);
        mpfr_init(r7081398);
        mpfr_init_set_str(r7081399, "3", 10, MPFR_RNDN);
        mpfr_init(r7081400);
        mpfr_init(r7081401);
        mpfr_init(r7081402);
        mpfr_init(r7081403);
        mpfr_init_set_str(r7081404, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7081405);
        mpfr_init_set_str(r7081406, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7081407);
        mpfr_init(r7081408);
        mpfr_init_set_str(r7081409, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7081410);
        mpfr_init(r7081411);
        mpfr_init(r7081412);
        mpfr_init_set_str(r7081413, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7081414);
        mpfr_init(r7081415);
        mpfr_init_set_str(r7081416, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7081417);
        mpfr_init(r7081418);
        mpfr_init(r7081419);
        mpfr_init_set_str(r7081420, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7081421);
        mpfr_init_set_str(r7081422, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7081423);
        mpfr_init(r7081424);
        mpfr_init(r7081425);
        mpfr_init_set_str(r7081426, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7081427);
        mpfr_init(r7081428);
        mpfr_init(r7081429);
        mpfr_init(r7081430);
        mpfr_init(r7081431);
        mpfr_init(r7081432);
}

double f_dm(double x) {
        mpfr_set_d(r7081396, x, MPFR_RNDN);
        mpfr_mul(r7081397, r7081396, r7081396, MPFR_RNDN);
        mpfr_mul(r7081398, r7081397, r7081397, MPFR_RNDN);
        ;
        mpfr_pow(r7081400, r7081396, r7081399, MPFR_RNDN);
        mpfr_mul(r7081401, r7081400, r7081400, MPFR_RNDN);
        mpfr_mul(r7081402, r7081400, r7081401, MPFR_RNDN);
        mpfr_mul(r7081403, r7081398, r7081402, MPFR_RNDN);
        ;
        mpfr_mul(r7081405, r7081397, r7081404, MPFR_RNDN);
        ;
        mpfr_add(r7081407, r7081405, r7081406, MPFR_RNDN);
        mpfr_mul(r7081408, r7081403, r7081407, MPFR_RNDN);
        ;
        mpfr_mul(r7081410, r7081409, r7081397, MPFR_RNDN);
        mpfr_log(r7081411, r7081410, MPFR_RNDN);
        mpfr_exp(r7081412, r7081411, MPFR_RNDN);
        ;
        mpfr_add(r7081414, r7081412, r7081413, MPFR_RNDN);
        mpfr_mul(r7081415, r7081402, r7081414, MPFR_RNDN);
        ;
        mpfr_mul(r7081417, r7081416, r7081396, MPFR_RNDN);
        mpfr_mul(r7081418, r7081397, r7081417, MPFR_RNDN);
        mpfr_add(r7081419, r7081415, r7081418, MPFR_RNDN);
        ;
        mpfr_mul(r7081421, r7081420, r7081396, MPFR_RNDN);
        ;
        mpfr_mul(r7081423, r7081396, r7081422, MPFR_RNDN);
        mpfr_mul(r7081424, r7081423, r7081398, MPFR_RNDN);
        mpfr_add(r7081425, r7081421, r7081424, MPFR_RNDN);
        ;
        mpfr_mul(r7081427, r7081396, r7081426, MPFR_RNDN);
        mpfr_mul(r7081428, r7081427, r7081397, MPFR_RNDN);
        mpfr_mul(r7081429, r7081428, r7081398, MPFR_RNDN);
        mpfr_add(r7081430, r7081425, r7081429, MPFR_RNDN);
        mpfr_add(r7081431, r7081419, r7081430, MPFR_RNDN);
        mpfr_add(r7081432, r7081408, r7081431, MPFR_RNDN);
        return mpfr_get_d(r7081432, MPFR_RNDN);
}

