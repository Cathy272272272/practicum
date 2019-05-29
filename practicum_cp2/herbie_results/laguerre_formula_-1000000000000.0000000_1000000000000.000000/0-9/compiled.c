#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r9581210 = 1.0;
        float r9581211 = -9.0;
        float r9581212 = x;
        float r9581213 = r9581211 * r9581212;
        float r9581214 = r9581210 + r9581213;
        float r9581215 = 18.0;
        float r9581216 = r9581212 * r9581212;
        float r9581217 = r9581215 * r9581216;
        float r9581218 = r9581214 + r9581217;
        float r9581219 = -14.0;
        float r9581220 = r9581216 * r9581212;
        float r9581221 = r9581219 * r9581220;
        float r9581222 = r9581218 + r9581221;
        float r9581223 = 5.25;
        float r9581224 = r9581220 * r9581212;
        float r9581225 = r9581223 * r9581224;
        float r9581226 = r9581222 + r9581225;
        float r9581227 = -1.05;
        float r9581228 = r9581224 * r9581212;
        float r9581229 = r9581227 * r9581228;
        float r9581230 = r9581226 + r9581229;
        float r9581231 = 0.116667;
        float r9581232 = r9581228 * r9581212;
        float r9581233 = r9581231 * r9581232;
        float r9581234 = r9581230 + r9581233;
        float r9581235 = -0.007143;
        float r9581236 = r9581232 * r9581212;
        float r9581237 = r9581235 * r9581236;
        float r9581238 = r9581234 + r9581237;
        float r9581239 = 0.000223;
        float r9581240 = r9581236 * r9581212;
        float r9581241 = r9581239 * r9581240;
        float r9581242 = r9581238 + r9581241;
        float r9581243 = -3e-06;
        float r9581244 = r9581240 * r9581212;
        float r9581245 = r9581243 * r9581244;
        float r9581246 = r9581242 + r9581245;
        return r9581246;
}

double f_id(double x) {
        double r9581247 = 1.0;
        double r9581248 = -9.0;
        double r9581249 = x;
        double r9581250 = r9581248 * r9581249;
        double r9581251 = r9581247 + r9581250;
        double r9581252 = 18.0;
        double r9581253 = r9581249 * r9581249;
        double r9581254 = r9581252 * r9581253;
        double r9581255 = r9581251 + r9581254;
        double r9581256 = -14.0;
        double r9581257 = r9581253 * r9581249;
        double r9581258 = r9581256 * r9581257;
        double r9581259 = r9581255 + r9581258;
        double r9581260 = 5.25;
        double r9581261 = r9581257 * r9581249;
        double r9581262 = r9581260 * r9581261;
        double r9581263 = r9581259 + r9581262;
        double r9581264 = -1.05;
        double r9581265 = r9581261 * r9581249;
        double r9581266 = r9581264 * r9581265;
        double r9581267 = r9581263 + r9581266;
        double r9581268 = 0.116667;
        double r9581269 = r9581265 * r9581249;
        double r9581270 = r9581268 * r9581269;
        double r9581271 = r9581267 + r9581270;
        double r9581272 = -0.007143;
        double r9581273 = r9581269 * r9581249;
        double r9581274 = r9581272 * r9581273;
        double r9581275 = r9581271 + r9581274;
        double r9581276 = 0.000223;
        double r9581277 = r9581273 * r9581249;
        double r9581278 = r9581276 * r9581277;
        double r9581279 = r9581275 + r9581278;
        double r9581280 = -3e-06;
        double r9581281 = r9581277 * r9581249;
        double r9581282 = r9581280 * r9581281;
        double r9581283 = r9581279 + r9581282;
        return r9581283;
}


double f_of(float x) {
        float r9581284 = 1.0;
        float r9581285 = -9.0;
        float r9581286 = x;
        float r9581287 = r9581285 * r9581286;
        float r9581288 = r9581284 + r9581287;
        float r9581289 = 18.0;
        float r9581290 = r9581286 * r9581286;
        float r9581291 = r9581289 * r9581290;
        float r9581292 = sqrt(r9581291);
        float r9581293 = r9581292 * r9581292;
        float r9581294 = r9581288 + r9581293;
        float r9581295 = -14.0;
        float r9581296 = r9581290 * r9581286;
        float r9581297 = r9581295 * r9581296;
        float r9581298 = r9581294 + r9581297;
        float r9581299 = 5.25;
        float r9581300 = r9581296 * r9581286;
        float r9581301 = r9581299 * r9581300;
        float r9581302 = r9581298 + r9581301;
        float r9581303 = -1.05;
        float r9581304 = r9581300 * r9581286;
        float r9581305 = r9581303 * r9581304;
        float r9581306 = r9581302 + r9581305;
        float r9581307 = 0.116667;
        float r9581308 = r9581304 * r9581286;
        float r9581309 = r9581307 * r9581308;
        float r9581310 = r9581306 + r9581309;
        float r9581311 = -0.007143;
        float r9581312 = r9581308 * r9581286;
        float r9581313 = r9581311 * r9581312;
        float r9581314 = r9581310 + r9581313;
        float r9581315 = 0.000223;
        float r9581316 = r9581312 * r9581286;
        float r9581317 = r9581315 * r9581316;
        float r9581318 = r9581314 + r9581317;
        float r9581319 = -3e-06;
        float r9581320 = r9581316 * r9581286;
        float r9581321 = r9581319 * r9581320;
        float r9581322 = r9581318 + r9581321;
        return r9581322;
}

double f_od(double x) {
        double r9581323 = 1.0;
        double r9581324 = -9.0;
        double r9581325 = x;
        double r9581326 = r9581324 * r9581325;
        double r9581327 = r9581323 + r9581326;
        double r9581328 = 18.0;
        double r9581329 = r9581325 * r9581325;
        double r9581330 = r9581328 * r9581329;
        double r9581331 = sqrt(r9581330);
        double r9581332 = r9581331 * r9581331;
        double r9581333 = r9581327 + r9581332;
        double r9581334 = -14.0;
        double r9581335 = r9581329 * r9581325;
        double r9581336 = r9581334 * r9581335;
        double r9581337 = r9581333 + r9581336;
        double r9581338 = 5.25;
        double r9581339 = r9581335 * r9581325;
        double r9581340 = r9581338 * r9581339;
        double r9581341 = r9581337 + r9581340;
        double r9581342 = -1.05;
        double r9581343 = r9581339 * r9581325;
        double r9581344 = r9581342 * r9581343;
        double r9581345 = r9581341 + r9581344;
        double r9581346 = 0.116667;
        double r9581347 = r9581343 * r9581325;
        double r9581348 = r9581346 * r9581347;
        double r9581349 = r9581345 + r9581348;
        double r9581350 = -0.007143;
        double r9581351 = r9581347 * r9581325;
        double r9581352 = r9581350 * r9581351;
        double r9581353 = r9581349 + r9581352;
        double r9581354 = 0.000223;
        double r9581355 = r9581351 * r9581325;
        double r9581356 = r9581354 * r9581355;
        double r9581357 = r9581353 + r9581356;
        double r9581358 = -3e-06;
        double r9581359 = r9581355 * r9581325;
        double r9581360 = r9581358 * r9581359;
        double r9581361 = r9581357 + r9581360;
        return r9581361;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9581362, r9581363, r9581364, r9581365, r9581366, r9581367, r9581368, r9581369, r9581370, r9581371, r9581372, r9581373, r9581374, r9581375, r9581376, r9581377, r9581378, r9581379, r9581380, r9581381, r9581382, r9581383, r9581384, r9581385, r9581386, r9581387, r9581388, r9581389, r9581390, r9581391, r9581392, r9581393, r9581394, r9581395, r9581396, r9581397, r9581398;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9581362, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581363, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r9581364);
        mpfr_init(r9581365);
        mpfr_init(r9581366);
        mpfr_init_set_str(r9581367, "18.0", 10, MPFR_RNDN);
        mpfr_init(r9581368);
        mpfr_init(r9581369);
        mpfr_init(r9581370);
        mpfr_init_set_str(r9581371, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9581372);
        mpfr_init(r9581373);
        mpfr_init(r9581374);
        mpfr_init_set_str(r9581375, "5.25", 10, MPFR_RNDN);
        mpfr_init(r9581376);
        mpfr_init(r9581377);
        mpfr_init(r9581378);
        mpfr_init_set_str(r9581379, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r9581380);
        mpfr_init(r9581381);
        mpfr_init(r9581382);
        mpfr_init_set_str(r9581383, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r9581384);
        mpfr_init(r9581385);
        mpfr_init(r9581386);
        mpfr_init_set_str(r9581387, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r9581388);
        mpfr_init(r9581389);
        mpfr_init(r9581390);
        mpfr_init_set_str(r9581391, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r9581392);
        mpfr_init(r9581393);
        mpfr_init(r9581394);
        mpfr_init_set_str(r9581395, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r9581396);
        mpfr_init(r9581397);
        mpfr_init(r9581398);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9581364, x, MPFR_RNDN);
        mpfr_mul(r9581365, r9581363, r9581364, MPFR_RNDN);
        mpfr_add(r9581366, r9581362, r9581365, MPFR_RNDN);
        ;
        mpfr_mul(r9581368, r9581364, r9581364, MPFR_RNDN);
        mpfr_mul(r9581369, r9581367, r9581368, MPFR_RNDN);
        mpfr_add(r9581370, r9581366, r9581369, MPFR_RNDN);
        ;
        mpfr_mul(r9581372, r9581368, r9581364, MPFR_RNDN);
        mpfr_mul(r9581373, r9581371, r9581372, MPFR_RNDN);
        mpfr_add(r9581374, r9581370, r9581373, MPFR_RNDN);
        ;
        mpfr_mul(r9581376, r9581372, r9581364, MPFR_RNDN);
        mpfr_mul(r9581377, r9581375, r9581376, MPFR_RNDN);
        mpfr_add(r9581378, r9581374, r9581377, MPFR_RNDN);
        ;
        mpfr_mul(r9581380, r9581376, r9581364, MPFR_RNDN);
        mpfr_mul(r9581381, r9581379, r9581380, MPFR_RNDN);
        mpfr_add(r9581382, r9581378, r9581381, MPFR_RNDN);
        ;
        mpfr_mul(r9581384, r9581380, r9581364, MPFR_RNDN);
        mpfr_mul(r9581385, r9581383, r9581384, MPFR_RNDN);
        mpfr_add(r9581386, r9581382, r9581385, MPFR_RNDN);
        ;
        mpfr_mul(r9581388, r9581384, r9581364, MPFR_RNDN);
        mpfr_mul(r9581389, r9581387, r9581388, MPFR_RNDN);
        mpfr_add(r9581390, r9581386, r9581389, MPFR_RNDN);
        ;
        mpfr_mul(r9581392, r9581388, r9581364, MPFR_RNDN);
        mpfr_mul(r9581393, r9581391, r9581392, MPFR_RNDN);
        mpfr_add(r9581394, r9581390, r9581393, MPFR_RNDN);
        ;
        mpfr_mul(r9581396, r9581392, r9581364, MPFR_RNDN);
        mpfr_mul(r9581397, r9581395, r9581396, MPFR_RNDN);
        mpfr_add(r9581398, r9581394, r9581397, MPFR_RNDN);
        return mpfr_get_d(r9581398, MPFR_RNDN);
}

static mpfr_t r9581399, r9581400, r9581401, r9581402, r9581403, r9581404, r9581405, r9581406, r9581407, r9581408, r9581409, r9581410, r9581411, r9581412, r9581413, r9581414, r9581415, r9581416, r9581417, r9581418, r9581419, r9581420, r9581421, r9581422, r9581423, r9581424, r9581425, r9581426, r9581427, r9581428, r9581429, r9581430, r9581431, r9581432, r9581433, r9581434, r9581435, r9581436, r9581437;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9581399, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581400, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r9581401);
        mpfr_init(r9581402);
        mpfr_init(r9581403);
        mpfr_init_set_str(r9581404, "18.0", 10, MPFR_RNDN);
        mpfr_init(r9581405);
        mpfr_init(r9581406);
        mpfr_init(r9581407);
        mpfr_init(r9581408);
        mpfr_init(r9581409);
        mpfr_init_set_str(r9581410, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9581411);
        mpfr_init(r9581412);
        mpfr_init(r9581413);
        mpfr_init_set_str(r9581414, "5.25", 10, MPFR_RNDN);
        mpfr_init(r9581415);
        mpfr_init(r9581416);
        mpfr_init(r9581417);
        mpfr_init_set_str(r9581418, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r9581419);
        mpfr_init(r9581420);
        mpfr_init(r9581421);
        mpfr_init_set_str(r9581422, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r9581423);
        mpfr_init(r9581424);
        mpfr_init(r9581425);
        mpfr_init_set_str(r9581426, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r9581427);
        mpfr_init(r9581428);
        mpfr_init(r9581429);
        mpfr_init_set_str(r9581430, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r9581431);
        mpfr_init(r9581432);
        mpfr_init(r9581433);
        mpfr_init_set_str(r9581434, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r9581435);
        mpfr_init(r9581436);
        mpfr_init(r9581437);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9581401, x, MPFR_RNDN);
        mpfr_mul(r9581402, r9581400, r9581401, MPFR_RNDN);
        mpfr_add(r9581403, r9581399, r9581402, MPFR_RNDN);
        ;
        mpfr_mul(r9581405, r9581401, r9581401, MPFR_RNDN);
        mpfr_mul(r9581406, r9581404, r9581405, MPFR_RNDN);
        mpfr_sqrt(r9581407, r9581406, MPFR_RNDN);
        mpfr_mul(r9581408, r9581407, r9581407, MPFR_RNDN);
        mpfr_add(r9581409, r9581403, r9581408, MPFR_RNDN);
        ;
        mpfr_mul(r9581411, r9581405, r9581401, MPFR_RNDN);
        mpfr_mul(r9581412, r9581410, r9581411, MPFR_RNDN);
        mpfr_add(r9581413, r9581409, r9581412, MPFR_RNDN);
        ;
        mpfr_mul(r9581415, r9581411, r9581401, MPFR_RNDN);
        mpfr_mul(r9581416, r9581414, r9581415, MPFR_RNDN);
        mpfr_add(r9581417, r9581413, r9581416, MPFR_RNDN);
        ;
        mpfr_mul(r9581419, r9581415, r9581401, MPFR_RNDN);
        mpfr_mul(r9581420, r9581418, r9581419, MPFR_RNDN);
        mpfr_add(r9581421, r9581417, r9581420, MPFR_RNDN);
        ;
        mpfr_mul(r9581423, r9581419, r9581401, MPFR_RNDN);
        mpfr_mul(r9581424, r9581422, r9581423, MPFR_RNDN);
        mpfr_add(r9581425, r9581421, r9581424, MPFR_RNDN);
        ;
        mpfr_mul(r9581427, r9581423, r9581401, MPFR_RNDN);
        mpfr_mul(r9581428, r9581426, r9581427, MPFR_RNDN);
        mpfr_add(r9581429, r9581425, r9581428, MPFR_RNDN);
        ;
        mpfr_mul(r9581431, r9581427, r9581401, MPFR_RNDN);
        mpfr_mul(r9581432, r9581430, r9581431, MPFR_RNDN);
        mpfr_add(r9581433, r9581429, r9581432, MPFR_RNDN);
        ;
        mpfr_mul(r9581435, r9581431, r9581401, MPFR_RNDN);
        mpfr_mul(r9581436, r9581434, r9581435, MPFR_RNDN);
        mpfr_add(r9581437, r9581433, r9581436, MPFR_RNDN);
        return mpfr_get_d(r9581437, MPFR_RNDN);
}

static mpfr_t r9581438, r9581439, r9581440, r9581441, r9581442, r9581443, r9581444, r9581445, r9581446, r9581447, r9581448, r9581449, r9581450, r9581451, r9581452, r9581453, r9581454, r9581455, r9581456, r9581457, r9581458, r9581459, r9581460, r9581461, r9581462, r9581463, r9581464, r9581465, r9581466, r9581467, r9581468, r9581469, r9581470, r9581471, r9581472, r9581473, r9581474, r9581475, r9581476;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9581438, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9581439, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r9581440);
        mpfr_init(r9581441);
        mpfr_init(r9581442);
        mpfr_init_set_str(r9581443, "18.0", 10, MPFR_RNDN);
        mpfr_init(r9581444);
        mpfr_init(r9581445);
        mpfr_init(r9581446);
        mpfr_init(r9581447);
        mpfr_init(r9581448);
        mpfr_init_set_str(r9581449, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r9581450);
        mpfr_init(r9581451);
        mpfr_init(r9581452);
        mpfr_init_set_str(r9581453, "5.25", 10, MPFR_RNDN);
        mpfr_init(r9581454);
        mpfr_init(r9581455);
        mpfr_init(r9581456);
        mpfr_init_set_str(r9581457, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r9581458);
        mpfr_init(r9581459);
        mpfr_init(r9581460);
        mpfr_init_set_str(r9581461, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r9581462);
        mpfr_init(r9581463);
        mpfr_init(r9581464);
        mpfr_init_set_str(r9581465, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r9581466);
        mpfr_init(r9581467);
        mpfr_init(r9581468);
        mpfr_init_set_str(r9581469, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r9581470);
        mpfr_init(r9581471);
        mpfr_init(r9581472);
        mpfr_init_set_str(r9581473, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r9581474);
        mpfr_init(r9581475);
        mpfr_init(r9581476);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9581440, x, MPFR_RNDN);
        mpfr_mul(r9581441, r9581439, r9581440, MPFR_RNDN);
        mpfr_add(r9581442, r9581438, r9581441, MPFR_RNDN);
        ;
        mpfr_mul(r9581444, r9581440, r9581440, MPFR_RNDN);
        mpfr_mul(r9581445, r9581443, r9581444, MPFR_RNDN);
        mpfr_sqrt(r9581446, r9581445, MPFR_RNDN);
        mpfr_mul(r9581447, r9581446, r9581446, MPFR_RNDN);
        mpfr_add(r9581448, r9581442, r9581447, MPFR_RNDN);
        ;
        mpfr_mul(r9581450, r9581444, r9581440, MPFR_RNDN);
        mpfr_mul(r9581451, r9581449, r9581450, MPFR_RNDN);
        mpfr_add(r9581452, r9581448, r9581451, MPFR_RNDN);
        ;
        mpfr_mul(r9581454, r9581450, r9581440, MPFR_RNDN);
        mpfr_mul(r9581455, r9581453, r9581454, MPFR_RNDN);
        mpfr_add(r9581456, r9581452, r9581455, MPFR_RNDN);
        ;
        mpfr_mul(r9581458, r9581454, r9581440, MPFR_RNDN);
        mpfr_mul(r9581459, r9581457, r9581458, MPFR_RNDN);
        mpfr_add(r9581460, r9581456, r9581459, MPFR_RNDN);
        ;
        mpfr_mul(r9581462, r9581458, r9581440, MPFR_RNDN);
        mpfr_mul(r9581463, r9581461, r9581462, MPFR_RNDN);
        mpfr_add(r9581464, r9581460, r9581463, MPFR_RNDN);
        ;
        mpfr_mul(r9581466, r9581462, r9581440, MPFR_RNDN);
        mpfr_mul(r9581467, r9581465, r9581466, MPFR_RNDN);
        mpfr_add(r9581468, r9581464, r9581467, MPFR_RNDN);
        ;
        mpfr_mul(r9581470, r9581466, r9581440, MPFR_RNDN);
        mpfr_mul(r9581471, r9581469, r9581470, MPFR_RNDN);
        mpfr_add(r9581472, r9581468, r9581471, MPFR_RNDN);
        ;
        mpfr_mul(r9581474, r9581470, r9581440, MPFR_RNDN);
        mpfr_mul(r9581475, r9581473, r9581474, MPFR_RNDN);
        mpfr_add(r9581476, r9581472, r9581475, MPFR_RNDN);
        return mpfr_get_d(r9581476, MPFR_RNDN);
}

