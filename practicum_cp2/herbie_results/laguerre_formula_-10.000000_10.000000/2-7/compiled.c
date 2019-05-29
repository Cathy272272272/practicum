#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10584233 = 1.0;
        float r10584234 = -7.0;
        float r10584235 = x;
        float r10584236 = r10584234 * r10584235;
        float r10584237 = r10584233 + r10584236;
        float r10584238 = 10.5;
        float r10584239 = r10584235 * r10584235;
        float r10584240 = r10584238 * r10584239;
        float r10584241 = r10584237 + r10584240;
        float r10584242 = -5.833333;
        float r10584243 = r10584239 * r10584235;
        float r10584244 = r10584242 * r10584243;
        float r10584245 = r10584241 + r10584244;
        float r10584246 = 1.458333;
        float r10584247 = r10584243 * r10584235;
        float r10584248 = r10584246 * r10584247;
        float r10584249 = r10584245 + r10584248;
        float r10584250 = -0.175;
        float r10584251 = r10584247 * r10584235;
        float r10584252 = r10584250 * r10584251;
        float r10584253 = r10584249 + r10584252;
        float r10584254 = 0.009722;
        float r10584255 = r10584251 * r10584235;
        float r10584256 = r10584254 * r10584255;
        float r10584257 = r10584253 + r10584256;
        float r10584258 = -0.000198;
        float r10584259 = r10584255 * r10584235;
        float r10584260 = r10584258 * r10584259;
        float r10584261 = r10584257 + r10584260;
        return r10584261;
}

double f_id(double x) {
        double r10584262 = 1.0;
        double r10584263 = -7.0;
        double r10584264 = x;
        double r10584265 = r10584263 * r10584264;
        double r10584266 = r10584262 + r10584265;
        double r10584267 = 10.5;
        double r10584268 = r10584264 * r10584264;
        double r10584269 = r10584267 * r10584268;
        double r10584270 = r10584266 + r10584269;
        double r10584271 = -5.833333;
        double r10584272 = r10584268 * r10584264;
        double r10584273 = r10584271 * r10584272;
        double r10584274 = r10584270 + r10584273;
        double r10584275 = 1.458333;
        double r10584276 = r10584272 * r10584264;
        double r10584277 = r10584275 * r10584276;
        double r10584278 = r10584274 + r10584277;
        double r10584279 = -0.175;
        double r10584280 = r10584276 * r10584264;
        double r10584281 = r10584279 * r10584280;
        double r10584282 = r10584278 + r10584281;
        double r10584283 = 0.009722;
        double r10584284 = r10584280 * r10584264;
        double r10584285 = r10584283 * r10584284;
        double r10584286 = r10584282 + r10584285;
        double r10584287 = -0.000198;
        double r10584288 = r10584284 * r10584264;
        double r10584289 = r10584287 * r10584288;
        double r10584290 = r10584286 + r10584289;
        return r10584290;
}


double f_of(float x) {
        float r10584291 = x;
        float r10584292 = r10584291 * r10584291;
        float r10584293 = 10.5;
        float r10584294 = -5.833333;
        float r10584295 = r10584294 * r10584291;
        float r10584296 = r10584293 + r10584295;
        float r10584297 = r10584292 * r10584296;
        float r10584298 = -7.0;
        float r10584299 = r10584291 * r10584298;
        float r10584300 = 1.0;
        float r10584301 = r10584299 + r10584300;
        float r10584302 = r10584297 + r10584301;
        float r10584303 = r10584292 * r10584292;
        float r10584304 = 1.458333;
        float r10584305 = -0.175;
        float r10584306 = r10584305 * r10584291;
        float r10584307 = r10584304 + r10584306;
        float r10584308 = r10584303 * r10584307;
        float r10584309 = 3;
        float r10584310 = pow(r10584291, r10584309);
        float r10584311 = r10584310 * r10584310;
        float r10584312 = -0.000198;
        float r10584313 = r10584312 * r10584291;
        float r10584314 = 0.009722;
        float r10584315 = r10584313 + r10584314;
        float r10584316 = r10584311 * r10584315;
        float r10584317 = r10584308 + r10584316;
        float r10584318 = r10584302 + r10584317;
        return r10584318;
}

double f_od(double x) {
        double r10584319 = x;
        double r10584320 = r10584319 * r10584319;
        double r10584321 = 10.5;
        double r10584322 = -5.833333;
        double r10584323 = r10584322 * r10584319;
        double r10584324 = r10584321 + r10584323;
        double r10584325 = r10584320 * r10584324;
        double r10584326 = -7.0;
        double r10584327 = r10584319 * r10584326;
        double r10584328 = 1.0;
        double r10584329 = r10584327 + r10584328;
        double r10584330 = r10584325 + r10584329;
        double r10584331 = r10584320 * r10584320;
        double r10584332 = 1.458333;
        double r10584333 = -0.175;
        double r10584334 = r10584333 * r10584319;
        double r10584335 = r10584332 + r10584334;
        double r10584336 = r10584331 * r10584335;
        double r10584337 = 3;
        double r10584338 = pow(r10584319, r10584337);
        double r10584339 = r10584338 * r10584338;
        double r10584340 = -0.000198;
        double r10584341 = r10584340 * r10584319;
        double r10584342 = 0.009722;
        double r10584343 = r10584341 + r10584342;
        double r10584344 = r10584339 * r10584343;
        double r10584345 = r10584336 + r10584344;
        double r10584346 = r10584330 + r10584345;
        return r10584346;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10584347, r10584348, r10584349, r10584350, r10584351, r10584352, r10584353, r10584354, r10584355, r10584356, r10584357, r10584358, r10584359, r10584360, r10584361, r10584362, r10584363, r10584364, r10584365, r10584366, r10584367, r10584368, r10584369, r10584370, r10584371, r10584372, r10584373, r10584374, r10584375;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584347, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584348, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10584349);
        mpfr_init(r10584350);
        mpfr_init(r10584351);
        mpfr_init_set_str(r10584352, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10584353);
        mpfr_init(r10584354);
        mpfr_init(r10584355);
        mpfr_init_set_str(r10584356, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10584357);
        mpfr_init(r10584358);
        mpfr_init(r10584359);
        mpfr_init_set_str(r10584360, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10584361);
        mpfr_init(r10584362);
        mpfr_init(r10584363);
        mpfr_init_set_str(r10584364, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10584365);
        mpfr_init(r10584366);
        mpfr_init(r10584367);
        mpfr_init_set_str(r10584368, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10584369);
        mpfr_init(r10584370);
        mpfr_init(r10584371);
        mpfr_init_set_str(r10584372, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10584373);
        mpfr_init(r10584374);
        mpfr_init(r10584375);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10584349, x, MPFR_RNDN);
        mpfr_mul(r10584350, r10584348, r10584349, MPFR_RNDN);
        mpfr_add(r10584351, r10584347, r10584350, MPFR_RNDN);
        ;
        mpfr_mul(r10584353, r10584349, r10584349, MPFR_RNDN);
        mpfr_mul(r10584354, r10584352, r10584353, MPFR_RNDN);
        mpfr_add(r10584355, r10584351, r10584354, MPFR_RNDN);
        ;
        mpfr_mul(r10584357, r10584353, r10584349, MPFR_RNDN);
        mpfr_mul(r10584358, r10584356, r10584357, MPFR_RNDN);
        mpfr_add(r10584359, r10584355, r10584358, MPFR_RNDN);
        ;
        mpfr_mul(r10584361, r10584357, r10584349, MPFR_RNDN);
        mpfr_mul(r10584362, r10584360, r10584361, MPFR_RNDN);
        mpfr_add(r10584363, r10584359, r10584362, MPFR_RNDN);
        ;
        mpfr_mul(r10584365, r10584361, r10584349, MPFR_RNDN);
        mpfr_mul(r10584366, r10584364, r10584365, MPFR_RNDN);
        mpfr_add(r10584367, r10584363, r10584366, MPFR_RNDN);
        ;
        mpfr_mul(r10584369, r10584365, r10584349, MPFR_RNDN);
        mpfr_mul(r10584370, r10584368, r10584369, MPFR_RNDN);
        mpfr_add(r10584371, r10584367, r10584370, MPFR_RNDN);
        ;
        mpfr_mul(r10584373, r10584369, r10584349, MPFR_RNDN);
        mpfr_mul(r10584374, r10584372, r10584373, MPFR_RNDN);
        mpfr_add(r10584375, r10584371, r10584374, MPFR_RNDN);
        return mpfr_get_d(r10584375, MPFR_RNDN);
}

static mpfr_t r10584376, r10584377, r10584378, r10584379, r10584380, r10584381, r10584382, r10584383, r10584384, r10584385, r10584386, r10584387, r10584388, r10584389, r10584390, r10584391, r10584392, r10584393, r10584394, r10584395, r10584396, r10584397, r10584398, r10584399, r10584400, r10584401, r10584402, r10584403;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584376);
        mpfr_init(r10584377);
        mpfr_init_set_str(r10584378, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584379, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10584380);
        mpfr_init(r10584381);
        mpfr_init(r10584382);
        mpfr_init_set_str(r10584383, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10584384);
        mpfr_init_set_str(r10584385, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10584386);
        mpfr_init(r10584387);
        mpfr_init(r10584388);
        mpfr_init_set_str(r10584389, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584390, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10584391);
        mpfr_init(r10584392);
        mpfr_init(r10584393);
        mpfr_init_set_str(r10584394, "3", 10, MPFR_RNDN);
        mpfr_init(r10584395);
        mpfr_init(r10584396);
        mpfr_init_set_str(r10584397, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10584398);
        mpfr_init_set_str(r10584399, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10584400);
        mpfr_init(r10584401);
        mpfr_init(r10584402);
        mpfr_init(r10584403);
}

double f_fm(double x) {
        mpfr_set_d(r10584376, x, MPFR_RNDN);
        mpfr_mul(r10584377, r10584376, r10584376, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584380, r10584379, r10584376, MPFR_RNDN);
        mpfr_add(r10584381, r10584378, r10584380, MPFR_RNDN);
        mpfr_mul(r10584382, r10584377, r10584381, MPFR_RNDN);
        ;
        mpfr_mul(r10584384, r10584376, r10584383, MPFR_RNDN);
        ;
        mpfr_add(r10584386, r10584384, r10584385, MPFR_RNDN);
        mpfr_add(r10584387, r10584382, r10584386, MPFR_RNDN);
        mpfr_mul(r10584388, r10584377, r10584377, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584391, r10584390, r10584376, MPFR_RNDN);
        mpfr_add(r10584392, r10584389, r10584391, MPFR_RNDN);
        mpfr_mul(r10584393, r10584388, r10584392, MPFR_RNDN);
        ;
        mpfr_pow(r10584395, r10584376, r10584394, MPFR_RNDN);
        mpfr_mul(r10584396, r10584395, r10584395, MPFR_RNDN);
        ;
        mpfr_mul(r10584398, r10584397, r10584376, MPFR_RNDN);
        ;
        mpfr_add(r10584400, r10584398, r10584399, MPFR_RNDN);
        mpfr_mul(r10584401, r10584396, r10584400, MPFR_RNDN);
        mpfr_add(r10584402, r10584393, r10584401, MPFR_RNDN);
        mpfr_add(r10584403, r10584387, r10584402, MPFR_RNDN);
        return mpfr_get_d(r10584403, MPFR_RNDN);
}

static mpfr_t r10584404, r10584405, r10584406, r10584407, r10584408, r10584409, r10584410, r10584411, r10584412, r10584413, r10584414, r10584415, r10584416, r10584417, r10584418, r10584419, r10584420, r10584421, r10584422, r10584423, r10584424, r10584425, r10584426, r10584427, r10584428, r10584429, r10584430, r10584431;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584404);
        mpfr_init(r10584405);
        mpfr_init_set_str(r10584406, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584407, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10584408);
        mpfr_init(r10584409);
        mpfr_init(r10584410);
        mpfr_init_set_str(r10584411, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10584412);
        mpfr_init_set_str(r10584413, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10584414);
        mpfr_init(r10584415);
        mpfr_init(r10584416);
        mpfr_init_set_str(r10584417, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584418, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10584419);
        mpfr_init(r10584420);
        mpfr_init(r10584421);
        mpfr_init_set_str(r10584422, "3", 10, MPFR_RNDN);
        mpfr_init(r10584423);
        mpfr_init(r10584424);
        mpfr_init_set_str(r10584425, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10584426);
        mpfr_init_set_str(r10584427, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10584428);
        mpfr_init(r10584429);
        mpfr_init(r10584430);
        mpfr_init(r10584431);
}

double f_dm(double x) {
        mpfr_set_d(r10584404, x, MPFR_RNDN);
        mpfr_mul(r10584405, r10584404, r10584404, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584408, r10584407, r10584404, MPFR_RNDN);
        mpfr_add(r10584409, r10584406, r10584408, MPFR_RNDN);
        mpfr_mul(r10584410, r10584405, r10584409, MPFR_RNDN);
        ;
        mpfr_mul(r10584412, r10584404, r10584411, MPFR_RNDN);
        ;
        mpfr_add(r10584414, r10584412, r10584413, MPFR_RNDN);
        mpfr_add(r10584415, r10584410, r10584414, MPFR_RNDN);
        mpfr_mul(r10584416, r10584405, r10584405, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584419, r10584418, r10584404, MPFR_RNDN);
        mpfr_add(r10584420, r10584417, r10584419, MPFR_RNDN);
        mpfr_mul(r10584421, r10584416, r10584420, MPFR_RNDN);
        ;
        mpfr_pow(r10584423, r10584404, r10584422, MPFR_RNDN);
        mpfr_mul(r10584424, r10584423, r10584423, MPFR_RNDN);
        ;
        mpfr_mul(r10584426, r10584425, r10584404, MPFR_RNDN);
        ;
        mpfr_add(r10584428, r10584426, r10584427, MPFR_RNDN);
        mpfr_mul(r10584429, r10584424, r10584428, MPFR_RNDN);
        mpfr_add(r10584430, r10584421, r10584429, MPFR_RNDN);
        mpfr_add(r10584431, r10584415, r10584430, MPFR_RNDN);
        return mpfr_get_d(r10584431, MPFR_RNDN);
}

