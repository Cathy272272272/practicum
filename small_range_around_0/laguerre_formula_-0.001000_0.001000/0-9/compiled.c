#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r3748217 = 1.0;
        float r3748218 = -9.0;
        float r3748219 = x;
        float r3748220 = r3748218 * r3748219;
        float r3748221 = r3748217 + r3748220;
        float r3748222 = 18.0;
        float r3748223 = r3748219 * r3748219;
        float r3748224 = r3748222 * r3748223;
        float r3748225 = r3748221 + r3748224;
        float r3748226 = -14.0;
        float r3748227 = r3748223 * r3748219;
        float r3748228 = r3748226 * r3748227;
        float r3748229 = r3748225 + r3748228;
        float r3748230 = 5.25;
        float r3748231 = r3748227 * r3748219;
        float r3748232 = r3748230 * r3748231;
        float r3748233 = r3748229 + r3748232;
        float r3748234 = -1.05;
        float r3748235 = r3748231 * r3748219;
        float r3748236 = r3748234 * r3748235;
        float r3748237 = r3748233 + r3748236;
        float r3748238 = 0.116667;
        float r3748239 = r3748235 * r3748219;
        float r3748240 = r3748238 * r3748239;
        float r3748241 = r3748237 + r3748240;
        float r3748242 = -0.007143;
        float r3748243 = r3748239 * r3748219;
        float r3748244 = r3748242 * r3748243;
        float r3748245 = r3748241 + r3748244;
        float r3748246 = 0.000223;
        float r3748247 = r3748243 * r3748219;
        float r3748248 = r3748246 * r3748247;
        float r3748249 = r3748245 + r3748248;
        float r3748250 = -3e-06;
        float r3748251 = r3748247 * r3748219;
        float r3748252 = r3748250 * r3748251;
        float r3748253 = r3748249 + r3748252;
        return r3748253;
}

double f_id(double x) {
        double r3748254 = 1.0;
        double r3748255 = -9.0;
        double r3748256 = x;
        double r3748257 = r3748255 * r3748256;
        double r3748258 = r3748254 + r3748257;
        double r3748259 = 18.0;
        double r3748260 = r3748256 * r3748256;
        double r3748261 = r3748259 * r3748260;
        double r3748262 = r3748258 + r3748261;
        double r3748263 = -14.0;
        double r3748264 = r3748260 * r3748256;
        double r3748265 = r3748263 * r3748264;
        double r3748266 = r3748262 + r3748265;
        double r3748267 = 5.25;
        double r3748268 = r3748264 * r3748256;
        double r3748269 = r3748267 * r3748268;
        double r3748270 = r3748266 + r3748269;
        double r3748271 = -1.05;
        double r3748272 = r3748268 * r3748256;
        double r3748273 = r3748271 * r3748272;
        double r3748274 = r3748270 + r3748273;
        double r3748275 = 0.116667;
        double r3748276 = r3748272 * r3748256;
        double r3748277 = r3748275 * r3748276;
        double r3748278 = r3748274 + r3748277;
        double r3748279 = -0.007143;
        double r3748280 = r3748276 * r3748256;
        double r3748281 = r3748279 * r3748280;
        double r3748282 = r3748278 + r3748281;
        double r3748283 = 0.000223;
        double r3748284 = r3748280 * r3748256;
        double r3748285 = r3748283 * r3748284;
        double r3748286 = r3748282 + r3748285;
        double r3748287 = -3e-06;
        double r3748288 = r3748284 * r3748256;
        double r3748289 = r3748287 * r3748288;
        double r3748290 = r3748286 + r3748289;
        return r3748290;
}


double f_of(float x) {
        float r3748291 = x;
        float r3748292 = r3748291 * r3748291;
        float r3748293 = 0.116667;
        float r3748294 = r3748292 * r3748293;
        float r3748295 = r3748292 * r3748292;
        float r3748296 = r3748294 * r3748295;
        float r3748297 = -1.05;
        float r3748298 = r3748297 * r3748291;
        float r3748299 = 5.25;
        float r3748300 = r3748298 + r3748299;
        float r3748301 = r3748295 * r3748300;
        float r3748302 = r3748296 + r3748301;
        float r3748303 = -9.0;
        float r3748304 = r3748291 * r3748303;
        float r3748305 = 1.0;
        float r3748306 = r3748304 + r3748305;
        float r3748307 = -14.0;
        float r3748308 = r3748307 * r3748291;
        float r3748309 = 18.0;
        float r3748310 = r3748308 + r3748309;
        float r3748311 = r3748292 * r3748310;
        float r3748312 = r3748306 + r3748311;
        float r3748313 = r3748302 + r3748312;
        float r3748314 = -0.007143;
        float r3748315 = r3748314 * r3748291;
        float r3748316 = r3748315 * r3748292;
        float r3748317 = r3748316 * r3748295;
        float r3748318 = r3748295 * r3748295;
        float r3748319 = -3e-06;
        float r3748320 = r3748319 * r3748291;
        float r3748321 = 0.000223;
        float r3748322 = r3748320 + r3748321;
        float r3748323 = r3748318 * r3748322;
        float r3748324 = r3748317 + r3748323;
        float r3748325 = r3748313 + r3748324;
        return r3748325;
}

double f_od(double x) {
        double r3748326 = x;
        double r3748327 = r3748326 * r3748326;
        double r3748328 = 0.116667;
        double r3748329 = r3748327 * r3748328;
        double r3748330 = r3748327 * r3748327;
        double r3748331 = r3748329 * r3748330;
        double r3748332 = -1.05;
        double r3748333 = r3748332 * r3748326;
        double r3748334 = 5.25;
        double r3748335 = r3748333 + r3748334;
        double r3748336 = r3748330 * r3748335;
        double r3748337 = r3748331 + r3748336;
        double r3748338 = -9.0;
        double r3748339 = r3748326 * r3748338;
        double r3748340 = 1.0;
        double r3748341 = r3748339 + r3748340;
        double r3748342 = -14.0;
        double r3748343 = r3748342 * r3748326;
        double r3748344 = 18.0;
        double r3748345 = r3748343 + r3748344;
        double r3748346 = r3748327 * r3748345;
        double r3748347 = r3748341 + r3748346;
        double r3748348 = r3748337 + r3748347;
        double r3748349 = -0.007143;
        double r3748350 = r3748349 * r3748326;
        double r3748351 = r3748350 * r3748327;
        double r3748352 = r3748351 * r3748330;
        double r3748353 = r3748330 * r3748330;
        double r3748354 = -3e-06;
        double r3748355 = r3748354 * r3748326;
        double r3748356 = 0.000223;
        double r3748357 = r3748355 + r3748356;
        double r3748358 = r3748353 * r3748357;
        double r3748359 = r3748352 + r3748358;
        double r3748360 = r3748348 + r3748359;
        return r3748360;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3748361, r3748362, r3748363, r3748364, r3748365, r3748366, r3748367, r3748368, r3748369, r3748370, r3748371, r3748372, r3748373, r3748374, r3748375, r3748376, r3748377, r3748378, r3748379, r3748380, r3748381, r3748382, r3748383, r3748384, r3748385, r3748386, r3748387, r3748388, r3748389, r3748390, r3748391, r3748392, r3748393, r3748394, r3748395, r3748396, r3748397;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3748361, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3748362, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r3748363);
        mpfr_init(r3748364);
        mpfr_init(r3748365);
        mpfr_init_set_str(r3748366, "18.0", 10, MPFR_RNDN);
        mpfr_init(r3748367);
        mpfr_init(r3748368);
        mpfr_init(r3748369);
        mpfr_init_set_str(r3748370, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r3748371);
        mpfr_init(r3748372);
        mpfr_init(r3748373);
        mpfr_init_set_str(r3748374, "5.25", 10, MPFR_RNDN);
        mpfr_init(r3748375);
        mpfr_init(r3748376);
        mpfr_init(r3748377);
        mpfr_init_set_str(r3748378, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r3748379);
        mpfr_init(r3748380);
        mpfr_init(r3748381);
        mpfr_init_set_str(r3748382, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r3748383);
        mpfr_init(r3748384);
        mpfr_init(r3748385);
        mpfr_init_set_str(r3748386, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r3748387);
        mpfr_init(r3748388);
        mpfr_init(r3748389);
        mpfr_init_set_str(r3748390, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r3748391);
        mpfr_init(r3748392);
        mpfr_init(r3748393);
        mpfr_init_set_str(r3748394, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r3748395);
        mpfr_init(r3748396);
        mpfr_init(r3748397);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3748363, x, MPFR_RNDN);
        mpfr_mul(r3748364, r3748362, r3748363, MPFR_RNDN);
        mpfr_add(r3748365, r3748361, r3748364, MPFR_RNDN);
        ;
        mpfr_mul(r3748367, r3748363, r3748363, MPFR_RNDN);
        mpfr_mul(r3748368, r3748366, r3748367, MPFR_RNDN);
        mpfr_add(r3748369, r3748365, r3748368, MPFR_RNDN);
        ;
        mpfr_mul(r3748371, r3748367, r3748363, MPFR_RNDN);
        mpfr_mul(r3748372, r3748370, r3748371, MPFR_RNDN);
        mpfr_add(r3748373, r3748369, r3748372, MPFR_RNDN);
        ;
        mpfr_mul(r3748375, r3748371, r3748363, MPFR_RNDN);
        mpfr_mul(r3748376, r3748374, r3748375, MPFR_RNDN);
        mpfr_add(r3748377, r3748373, r3748376, MPFR_RNDN);
        ;
        mpfr_mul(r3748379, r3748375, r3748363, MPFR_RNDN);
        mpfr_mul(r3748380, r3748378, r3748379, MPFR_RNDN);
        mpfr_add(r3748381, r3748377, r3748380, MPFR_RNDN);
        ;
        mpfr_mul(r3748383, r3748379, r3748363, MPFR_RNDN);
        mpfr_mul(r3748384, r3748382, r3748383, MPFR_RNDN);
        mpfr_add(r3748385, r3748381, r3748384, MPFR_RNDN);
        ;
        mpfr_mul(r3748387, r3748383, r3748363, MPFR_RNDN);
        mpfr_mul(r3748388, r3748386, r3748387, MPFR_RNDN);
        mpfr_add(r3748389, r3748385, r3748388, MPFR_RNDN);
        ;
        mpfr_mul(r3748391, r3748387, r3748363, MPFR_RNDN);
        mpfr_mul(r3748392, r3748390, r3748391, MPFR_RNDN);
        mpfr_add(r3748393, r3748389, r3748392, MPFR_RNDN);
        ;
        mpfr_mul(r3748395, r3748391, r3748363, MPFR_RNDN);
        mpfr_mul(r3748396, r3748394, r3748395, MPFR_RNDN);
        mpfr_add(r3748397, r3748393, r3748396, MPFR_RNDN);
        return mpfr_get_d(r3748397, MPFR_RNDN);
}

static mpfr_t r3748398, r3748399, r3748400, r3748401, r3748402, r3748403, r3748404, r3748405, r3748406, r3748407, r3748408, r3748409, r3748410, r3748411, r3748412, r3748413, r3748414, r3748415, r3748416, r3748417, r3748418, r3748419, r3748420, r3748421, r3748422, r3748423, r3748424, r3748425, r3748426, r3748427, r3748428, r3748429, r3748430, r3748431, r3748432;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3748398);
        mpfr_init(r3748399);
        mpfr_init_set_str(r3748400, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r3748401);
        mpfr_init(r3748402);
        mpfr_init(r3748403);
        mpfr_init_set_str(r3748404, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r3748405);
        mpfr_init_set_str(r3748406, "5.25", 10, MPFR_RNDN);
        mpfr_init(r3748407);
        mpfr_init(r3748408);
        mpfr_init(r3748409);
        mpfr_init_set_str(r3748410, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r3748411);
        mpfr_init_set_str(r3748412, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3748413);
        mpfr_init_set_str(r3748414, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r3748415);
        mpfr_init_set_str(r3748416, "18.0", 10, MPFR_RNDN);
        mpfr_init(r3748417);
        mpfr_init(r3748418);
        mpfr_init(r3748419);
        mpfr_init(r3748420);
        mpfr_init_set_str(r3748421, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r3748422);
        mpfr_init(r3748423);
        mpfr_init(r3748424);
        mpfr_init(r3748425);
        mpfr_init_set_str(r3748426, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r3748427);
        mpfr_init_set_str(r3748428, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r3748429);
        mpfr_init(r3748430);
        mpfr_init(r3748431);
        mpfr_init(r3748432);
}

double f_fm(double x) {
        mpfr_set_d(r3748398, x, MPFR_RNDN);
        mpfr_mul(r3748399, r3748398, r3748398, MPFR_RNDN);
        ;
        mpfr_mul(r3748401, r3748399, r3748400, MPFR_RNDN);
        mpfr_mul(r3748402, r3748399, r3748399, MPFR_RNDN);
        mpfr_mul(r3748403, r3748401, r3748402, MPFR_RNDN);
        ;
        mpfr_mul(r3748405, r3748404, r3748398, MPFR_RNDN);
        ;
        mpfr_add(r3748407, r3748405, r3748406, MPFR_RNDN);
        mpfr_mul(r3748408, r3748402, r3748407, MPFR_RNDN);
        mpfr_add(r3748409, r3748403, r3748408, MPFR_RNDN);
        ;
        mpfr_mul(r3748411, r3748398, r3748410, MPFR_RNDN);
        ;
        mpfr_add(r3748413, r3748411, r3748412, MPFR_RNDN);
        ;
        mpfr_mul(r3748415, r3748414, r3748398, MPFR_RNDN);
        ;
        mpfr_add(r3748417, r3748415, r3748416, MPFR_RNDN);
        mpfr_mul(r3748418, r3748399, r3748417, MPFR_RNDN);
        mpfr_add(r3748419, r3748413, r3748418, MPFR_RNDN);
        mpfr_add(r3748420, r3748409, r3748419, MPFR_RNDN);
        ;
        mpfr_mul(r3748422, r3748421, r3748398, MPFR_RNDN);
        mpfr_mul(r3748423, r3748422, r3748399, MPFR_RNDN);
        mpfr_mul(r3748424, r3748423, r3748402, MPFR_RNDN);
        mpfr_mul(r3748425, r3748402, r3748402, MPFR_RNDN);
        ;
        mpfr_mul(r3748427, r3748426, r3748398, MPFR_RNDN);
        ;
        mpfr_add(r3748429, r3748427, r3748428, MPFR_RNDN);
        mpfr_mul(r3748430, r3748425, r3748429, MPFR_RNDN);
        mpfr_add(r3748431, r3748424, r3748430, MPFR_RNDN);
        mpfr_add(r3748432, r3748420, r3748431, MPFR_RNDN);
        return mpfr_get_d(r3748432, MPFR_RNDN);
}

static mpfr_t r3748433, r3748434, r3748435, r3748436, r3748437, r3748438, r3748439, r3748440, r3748441, r3748442, r3748443, r3748444, r3748445, r3748446, r3748447, r3748448, r3748449, r3748450, r3748451, r3748452, r3748453, r3748454, r3748455, r3748456, r3748457, r3748458, r3748459, r3748460, r3748461, r3748462, r3748463, r3748464, r3748465, r3748466, r3748467;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3748433);
        mpfr_init(r3748434);
        mpfr_init_set_str(r3748435, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r3748436);
        mpfr_init(r3748437);
        mpfr_init(r3748438);
        mpfr_init_set_str(r3748439, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r3748440);
        mpfr_init_set_str(r3748441, "5.25", 10, MPFR_RNDN);
        mpfr_init(r3748442);
        mpfr_init(r3748443);
        mpfr_init(r3748444);
        mpfr_init_set_str(r3748445, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r3748446);
        mpfr_init_set_str(r3748447, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3748448);
        mpfr_init_set_str(r3748449, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r3748450);
        mpfr_init_set_str(r3748451, "18.0", 10, MPFR_RNDN);
        mpfr_init(r3748452);
        mpfr_init(r3748453);
        mpfr_init(r3748454);
        mpfr_init(r3748455);
        mpfr_init_set_str(r3748456, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r3748457);
        mpfr_init(r3748458);
        mpfr_init(r3748459);
        mpfr_init(r3748460);
        mpfr_init_set_str(r3748461, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r3748462);
        mpfr_init_set_str(r3748463, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r3748464);
        mpfr_init(r3748465);
        mpfr_init(r3748466);
        mpfr_init(r3748467);
}

double f_dm(double x) {
        mpfr_set_d(r3748433, x, MPFR_RNDN);
        mpfr_mul(r3748434, r3748433, r3748433, MPFR_RNDN);
        ;
        mpfr_mul(r3748436, r3748434, r3748435, MPFR_RNDN);
        mpfr_mul(r3748437, r3748434, r3748434, MPFR_RNDN);
        mpfr_mul(r3748438, r3748436, r3748437, MPFR_RNDN);
        ;
        mpfr_mul(r3748440, r3748439, r3748433, MPFR_RNDN);
        ;
        mpfr_add(r3748442, r3748440, r3748441, MPFR_RNDN);
        mpfr_mul(r3748443, r3748437, r3748442, MPFR_RNDN);
        mpfr_add(r3748444, r3748438, r3748443, MPFR_RNDN);
        ;
        mpfr_mul(r3748446, r3748433, r3748445, MPFR_RNDN);
        ;
        mpfr_add(r3748448, r3748446, r3748447, MPFR_RNDN);
        ;
        mpfr_mul(r3748450, r3748449, r3748433, MPFR_RNDN);
        ;
        mpfr_add(r3748452, r3748450, r3748451, MPFR_RNDN);
        mpfr_mul(r3748453, r3748434, r3748452, MPFR_RNDN);
        mpfr_add(r3748454, r3748448, r3748453, MPFR_RNDN);
        mpfr_add(r3748455, r3748444, r3748454, MPFR_RNDN);
        ;
        mpfr_mul(r3748457, r3748456, r3748433, MPFR_RNDN);
        mpfr_mul(r3748458, r3748457, r3748434, MPFR_RNDN);
        mpfr_mul(r3748459, r3748458, r3748437, MPFR_RNDN);
        mpfr_mul(r3748460, r3748437, r3748437, MPFR_RNDN);
        ;
        mpfr_mul(r3748462, r3748461, r3748433, MPFR_RNDN);
        ;
        mpfr_add(r3748464, r3748462, r3748463, MPFR_RNDN);
        mpfr_mul(r3748465, r3748460, r3748464, MPFR_RNDN);
        mpfr_add(r3748466, r3748459, r3748465, MPFR_RNDN);
        mpfr_add(r3748467, r3748455, r3748466, MPFR_RNDN);
        return mpfr_get_d(r3748467, MPFR_RNDN);
}

