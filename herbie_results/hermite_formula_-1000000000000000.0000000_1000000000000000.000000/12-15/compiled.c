#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r8955225 = -518918400.0;
        float r8955226 = x;
        float r8955227 = r8955225 * r8955226;
        float r8955228 = 2421619200.0;
        float r8955229 = r8955226 * r8955226;
        float r8955230 = r8955229 * r8955226;
        float r8955231 = r8955228 * r8955230;
        float r8955232 = r8955227 + r8955231;
        float r8955233 = -2905943040.0;
        float r8955234 = r8955230 * r8955226;
        float r8955235 = r8955234 * r8955226;
        float r8955236 = r8955233 * r8955235;
        float r8955237 = r8955232 + r8955236;
        float r8955238 = 1383782400.0;
        float r8955239 = r8955235 * r8955226;
        float r8955240 = r8955239 * r8955226;
        float r8955241 = r8955238 * r8955240;
        float r8955242 = r8955237 + r8955241;
        float r8955243 = -307507200.0;
        float r8955244 = r8955240 * r8955226;
        float r8955245 = r8955244 * r8955226;
        float r8955246 = r8955243 * r8955245;
        float r8955247 = r8955242 + r8955246;
        float r8955248 = 33546240.0;
        float r8955249 = r8955245 * r8955226;
        float r8955250 = r8955249 * r8955226;
        float r8955251 = r8955248 * r8955250;
        float r8955252 = r8955247 + r8955251;
        float r8955253 = -1720320.0;
        float r8955254 = r8955250 * r8955226;
        float r8955255 = r8955254 * r8955226;
        float r8955256 = r8955253 * r8955255;
        float r8955257 = r8955252 + r8955256;
        float r8955258 = 32768.0;
        float r8955259 = r8955255 * r8955226;
        float r8955260 = r8955259 * r8955226;
        float r8955261 = r8955258 * r8955260;
        float r8955262 = r8955257 + r8955261;
        return r8955262;
}

double f_id(double x) {
        double r8955263 = -518918400.0;
        double r8955264 = x;
        double r8955265 = r8955263 * r8955264;
        double r8955266 = 2421619200.0;
        double r8955267 = r8955264 * r8955264;
        double r8955268 = r8955267 * r8955264;
        double r8955269 = r8955266 * r8955268;
        double r8955270 = r8955265 + r8955269;
        double r8955271 = -2905943040.0;
        double r8955272 = r8955268 * r8955264;
        double r8955273 = r8955272 * r8955264;
        double r8955274 = r8955271 * r8955273;
        double r8955275 = r8955270 + r8955274;
        double r8955276 = 1383782400.0;
        double r8955277 = r8955273 * r8955264;
        double r8955278 = r8955277 * r8955264;
        double r8955279 = r8955276 * r8955278;
        double r8955280 = r8955275 + r8955279;
        double r8955281 = -307507200.0;
        double r8955282 = r8955278 * r8955264;
        double r8955283 = r8955282 * r8955264;
        double r8955284 = r8955281 * r8955283;
        double r8955285 = r8955280 + r8955284;
        double r8955286 = 33546240.0;
        double r8955287 = r8955283 * r8955264;
        double r8955288 = r8955287 * r8955264;
        double r8955289 = r8955286 * r8955288;
        double r8955290 = r8955285 + r8955289;
        double r8955291 = -1720320.0;
        double r8955292 = r8955288 * r8955264;
        double r8955293 = r8955292 * r8955264;
        double r8955294 = r8955291 * r8955293;
        double r8955295 = r8955290 + r8955294;
        double r8955296 = 32768.0;
        double r8955297 = r8955293 * r8955264;
        double r8955298 = r8955297 * r8955264;
        double r8955299 = r8955296 * r8955298;
        double r8955300 = r8955295 + r8955299;
        return r8955300;
}


double f_of(float x) {
        float r8955301 = x;
        float r8955302 = 3;
        float r8955303 = pow(r8955301, r8955302);
        float r8955304 = pow(r8955303, r8955302);
        float r8955305 = 33546240.0;
        float r8955306 = r8955301 * r8955301;
        float r8955307 = r8955305 * r8955306;
        float r8955308 = -307507200.0;
        float r8955309 = r8955307 + r8955308;
        float r8955310 = r8955304 * r8955309;
        float r8955311 = 15;
        float r8955312 = pow(r8955301, r8955311);
        float r8955313 = 32768.0;
        float r8955314 = r8955312 * r8955313;
        float r8955315 = 1720320.0;
        float r8955316 = 13;
        float r8955317 = pow(r8955301, r8955316);
        float r8955318 = r8955315 * r8955317;
        float r8955319 = 2421619200.0;
        float r8955320 = r8955301 * r8955319;
        float r8955321 = r8955306 * r8955320;
        float r8955322 = r8955318 - r8955321;
        float r8955323 = r8955314 - r8955322;
        float r8955324 = r8955310 + r8955323;
        float r8955325 = -518918400.0;
        float r8955326 = r8955301 * r8955325;
        float r8955327 = r8955306 * r8955306;
        float r8955328 = 1383782400.0;
        float r8955329 = r8955328 * r8955301;
        float r8955330 = r8955306 * r8955329;
        float r8955331 = -2905943040.0;
        float r8955332 = r8955331 * r8955301;
        float r8955333 = r8955330 + r8955332;
        float r8955334 = r8955327 * r8955333;
        float r8955335 = r8955326 + r8955334;
        float r8955336 = r8955324 + r8955335;
        return r8955336;
}

double f_od(double x) {
        double r8955337 = x;
        double r8955338 = 3;
        double r8955339 = pow(r8955337, r8955338);
        double r8955340 = pow(r8955339, r8955338);
        double r8955341 = 33546240.0;
        double r8955342 = r8955337 * r8955337;
        double r8955343 = r8955341 * r8955342;
        double r8955344 = -307507200.0;
        double r8955345 = r8955343 + r8955344;
        double r8955346 = r8955340 * r8955345;
        double r8955347 = 15;
        double r8955348 = pow(r8955337, r8955347);
        double r8955349 = 32768.0;
        double r8955350 = r8955348 * r8955349;
        double r8955351 = 1720320.0;
        double r8955352 = 13;
        double r8955353 = pow(r8955337, r8955352);
        double r8955354 = r8955351 * r8955353;
        double r8955355 = 2421619200.0;
        double r8955356 = r8955337 * r8955355;
        double r8955357 = r8955342 * r8955356;
        double r8955358 = r8955354 - r8955357;
        double r8955359 = r8955350 - r8955358;
        double r8955360 = r8955346 + r8955359;
        double r8955361 = -518918400.0;
        double r8955362 = r8955337 * r8955361;
        double r8955363 = r8955342 * r8955342;
        double r8955364 = 1383782400.0;
        double r8955365 = r8955364 * r8955337;
        double r8955366 = r8955342 * r8955365;
        double r8955367 = -2905943040.0;
        double r8955368 = r8955367 * r8955337;
        double r8955369 = r8955366 + r8955368;
        double r8955370 = r8955363 * r8955369;
        double r8955371 = r8955362 + r8955370;
        double r8955372 = r8955360 + r8955371;
        return r8955372;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8955373, r8955374, r8955375, r8955376, r8955377, r8955378, r8955379, r8955380, r8955381, r8955382, r8955383, r8955384, r8955385, r8955386, r8955387, r8955388, r8955389, r8955390, r8955391, r8955392, r8955393, r8955394, r8955395, r8955396, r8955397, r8955398, r8955399, r8955400, r8955401, r8955402, r8955403, r8955404, r8955405, r8955406, r8955407, r8955408, r8955409, r8955410;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8955373, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r8955374);
        mpfr_init(r8955375);
        mpfr_init_set_str(r8955376, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r8955377);
        mpfr_init(r8955378);
        mpfr_init(r8955379);
        mpfr_init(r8955380);
        mpfr_init_set_str(r8955381, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r8955382);
        mpfr_init(r8955383);
        mpfr_init(r8955384);
        mpfr_init(r8955385);
        mpfr_init_set_str(r8955386, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r8955387);
        mpfr_init(r8955388);
        mpfr_init(r8955389);
        mpfr_init(r8955390);
        mpfr_init_set_str(r8955391, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r8955392);
        mpfr_init(r8955393);
        mpfr_init(r8955394);
        mpfr_init(r8955395);
        mpfr_init_set_str(r8955396, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r8955397);
        mpfr_init(r8955398);
        mpfr_init(r8955399);
        mpfr_init(r8955400);
        mpfr_init_set_str(r8955401, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r8955402);
        mpfr_init(r8955403);
        mpfr_init(r8955404);
        mpfr_init(r8955405);
        mpfr_init_set_str(r8955406, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r8955407);
        mpfr_init(r8955408);
        mpfr_init(r8955409);
        mpfr_init(r8955410);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8955374, x, MPFR_RNDN);
        mpfr_mul(r8955375, r8955373, r8955374, MPFR_RNDN);
        ;
        mpfr_mul(r8955377, r8955374, r8955374, MPFR_RNDN);
        mpfr_mul(r8955378, r8955377, r8955374, MPFR_RNDN);
        mpfr_mul(r8955379, r8955376, r8955378, MPFR_RNDN);
        mpfr_add(r8955380, r8955375, r8955379, MPFR_RNDN);
        ;
        mpfr_mul(r8955382, r8955378, r8955374, MPFR_RNDN);
        mpfr_mul(r8955383, r8955382, r8955374, MPFR_RNDN);
        mpfr_mul(r8955384, r8955381, r8955383, MPFR_RNDN);
        mpfr_add(r8955385, r8955380, r8955384, MPFR_RNDN);
        ;
        mpfr_mul(r8955387, r8955383, r8955374, MPFR_RNDN);
        mpfr_mul(r8955388, r8955387, r8955374, MPFR_RNDN);
        mpfr_mul(r8955389, r8955386, r8955388, MPFR_RNDN);
        mpfr_add(r8955390, r8955385, r8955389, MPFR_RNDN);
        ;
        mpfr_mul(r8955392, r8955388, r8955374, MPFR_RNDN);
        mpfr_mul(r8955393, r8955392, r8955374, MPFR_RNDN);
        mpfr_mul(r8955394, r8955391, r8955393, MPFR_RNDN);
        mpfr_add(r8955395, r8955390, r8955394, MPFR_RNDN);
        ;
        mpfr_mul(r8955397, r8955393, r8955374, MPFR_RNDN);
        mpfr_mul(r8955398, r8955397, r8955374, MPFR_RNDN);
        mpfr_mul(r8955399, r8955396, r8955398, MPFR_RNDN);
        mpfr_add(r8955400, r8955395, r8955399, MPFR_RNDN);
        ;
        mpfr_mul(r8955402, r8955398, r8955374, MPFR_RNDN);
        mpfr_mul(r8955403, r8955402, r8955374, MPFR_RNDN);
        mpfr_mul(r8955404, r8955401, r8955403, MPFR_RNDN);
        mpfr_add(r8955405, r8955400, r8955404, MPFR_RNDN);
        ;
        mpfr_mul(r8955407, r8955403, r8955374, MPFR_RNDN);
        mpfr_mul(r8955408, r8955407, r8955374, MPFR_RNDN);
        mpfr_mul(r8955409, r8955406, r8955408, MPFR_RNDN);
        mpfr_add(r8955410, r8955405, r8955409, MPFR_RNDN);
        return mpfr_get_d(r8955410, MPFR_RNDN);
}

static mpfr_t r8955411, r8955412, r8955413, r8955414, r8955415, r8955416, r8955417, r8955418, r8955419, r8955420, r8955421, r8955422, r8955423, r8955424, r8955425, r8955426, r8955427, r8955428, r8955429, r8955430, r8955431, r8955432, r8955433, r8955434, r8955435, r8955436, r8955437, r8955438, r8955439, r8955440, r8955441, r8955442, r8955443, r8955444, r8955445, r8955446;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8955411);
        mpfr_init_set_str(r8955412, "3", 10, MPFR_RNDN);
        mpfr_init(r8955413);
        mpfr_init(r8955414);
        mpfr_init_set_str(r8955415, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r8955416);
        mpfr_init(r8955417);
        mpfr_init_set_str(r8955418, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r8955419);
        mpfr_init(r8955420);
        mpfr_init_set_str(r8955421, "15", 10, MPFR_RNDN);
        mpfr_init(r8955422);
        mpfr_init_set_str(r8955423, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r8955424);
        mpfr_init_set_str(r8955425, "1720320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8955426, "13", 10, MPFR_RNDN);
        mpfr_init(r8955427);
        mpfr_init(r8955428);
        mpfr_init_set_str(r8955429, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r8955430);
        mpfr_init(r8955431);
        mpfr_init(r8955432);
        mpfr_init(r8955433);
        mpfr_init(r8955434);
        mpfr_init_set_str(r8955435, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r8955436);
        mpfr_init(r8955437);
        mpfr_init_set_str(r8955438, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r8955439);
        mpfr_init(r8955440);
        mpfr_init_set_str(r8955441, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r8955442);
        mpfr_init(r8955443);
        mpfr_init(r8955444);
        mpfr_init(r8955445);
        mpfr_init(r8955446);
}

double f_fm(double x) {
        mpfr_set_d(r8955411, x, MPFR_RNDN);
        ;
        mpfr_pow(r8955413, r8955411, r8955412, MPFR_RNDN);
        mpfr_pow(r8955414, r8955413, r8955412, MPFR_RNDN);
        ;
        mpfr_mul(r8955416, r8955411, r8955411, MPFR_RNDN);
        mpfr_mul(r8955417, r8955415, r8955416, MPFR_RNDN);
        ;
        mpfr_add(r8955419, r8955417, r8955418, MPFR_RNDN);
        mpfr_mul(r8955420, r8955414, r8955419, MPFR_RNDN);
        ;
        mpfr_pow(r8955422, r8955411, r8955421, MPFR_RNDN);
        ;
        mpfr_mul(r8955424, r8955422, r8955423, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8955427, r8955411, r8955426, MPFR_RNDN);
        mpfr_mul(r8955428, r8955425, r8955427, MPFR_RNDN);
        ;
        mpfr_mul(r8955430, r8955411, r8955429, MPFR_RNDN);
        mpfr_mul(r8955431, r8955416, r8955430, MPFR_RNDN);
        mpfr_sub(r8955432, r8955428, r8955431, MPFR_RNDN);
        mpfr_sub(r8955433, r8955424, r8955432, MPFR_RNDN);
        mpfr_add(r8955434, r8955420, r8955433, MPFR_RNDN);
        ;
        mpfr_mul(r8955436, r8955411, r8955435, MPFR_RNDN);
        mpfr_mul(r8955437, r8955416, r8955416, MPFR_RNDN);
        ;
        mpfr_mul(r8955439, r8955438, r8955411, MPFR_RNDN);
        mpfr_mul(r8955440, r8955416, r8955439, MPFR_RNDN);
        ;
        mpfr_mul(r8955442, r8955441, r8955411, MPFR_RNDN);
        mpfr_add(r8955443, r8955440, r8955442, MPFR_RNDN);
        mpfr_mul(r8955444, r8955437, r8955443, MPFR_RNDN);
        mpfr_add(r8955445, r8955436, r8955444, MPFR_RNDN);
        mpfr_add(r8955446, r8955434, r8955445, MPFR_RNDN);
        return mpfr_get_d(r8955446, MPFR_RNDN);
}

static mpfr_t r8955447, r8955448, r8955449, r8955450, r8955451, r8955452, r8955453, r8955454, r8955455, r8955456, r8955457, r8955458, r8955459, r8955460, r8955461, r8955462, r8955463, r8955464, r8955465, r8955466, r8955467, r8955468, r8955469, r8955470, r8955471, r8955472, r8955473, r8955474, r8955475, r8955476, r8955477, r8955478, r8955479, r8955480, r8955481, r8955482;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8955447);
        mpfr_init_set_str(r8955448, "3", 10, MPFR_RNDN);
        mpfr_init(r8955449);
        mpfr_init(r8955450);
        mpfr_init_set_str(r8955451, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r8955452);
        mpfr_init(r8955453);
        mpfr_init_set_str(r8955454, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r8955455);
        mpfr_init(r8955456);
        mpfr_init_set_str(r8955457, "15", 10, MPFR_RNDN);
        mpfr_init(r8955458);
        mpfr_init_set_str(r8955459, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r8955460);
        mpfr_init_set_str(r8955461, "1720320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8955462, "13", 10, MPFR_RNDN);
        mpfr_init(r8955463);
        mpfr_init(r8955464);
        mpfr_init_set_str(r8955465, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r8955466);
        mpfr_init(r8955467);
        mpfr_init(r8955468);
        mpfr_init(r8955469);
        mpfr_init(r8955470);
        mpfr_init_set_str(r8955471, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r8955472);
        mpfr_init(r8955473);
        mpfr_init_set_str(r8955474, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r8955475);
        mpfr_init(r8955476);
        mpfr_init_set_str(r8955477, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r8955478);
        mpfr_init(r8955479);
        mpfr_init(r8955480);
        mpfr_init(r8955481);
        mpfr_init(r8955482);
}

double f_dm(double x) {
        mpfr_set_d(r8955447, x, MPFR_RNDN);
        ;
        mpfr_pow(r8955449, r8955447, r8955448, MPFR_RNDN);
        mpfr_pow(r8955450, r8955449, r8955448, MPFR_RNDN);
        ;
        mpfr_mul(r8955452, r8955447, r8955447, MPFR_RNDN);
        mpfr_mul(r8955453, r8955451, r8955452, MPFR_RNDN);
        ;
        mpfr_add(r8955455, r8955453, r8955454, MPFR_RNDN);
        mpfr_mul(r8955456, r8955450, r8955455, MPFR_RNDN);
        ;
        mpfr_pow(r8955458, r8955447, r8955457, MPFR_RNDN);
        ;
        mpfr_mul(r8955460, r8955458, r8955459, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8955463, r8955447, r8955462, MPFR_RNDN);
        mpfr_mul(r8955464, r8955461, r8955463, MPFR_RNDN);
        ;
        mpfr_mul(r8955466, r8955447, r8955465, MPFR_RNDN);
        mpfr_mul(r8955467, r8955452, r8955466, MPFR_RNDN);
        mpfr_sub(r8955468, r8955464, r8955467, MPFR_RNDN);
        mpfr_sub(r8955469, r8955460, r8955468, MPFR_RNDN);
        mpfr_add(r8955470, r8955456, r8955469, MPFR_RNDN);
        ;
        mpfr_mul(r8955472, r8955447, r8955471, MPFR_RNDN);
        mpfr_mul(r8955473, r8955452, r8955452, MPFR_RNDN);
        ;
        mpfr_mul(r8955475, r8955474, r8955447, MPFR_RNDN);
        mpfr_mul(r8955476, r8955452, r8955475, MPFR_RNDN);
        ;
        mpfr_mul(r8955478, r8955477, r8955447, MPFR_RNDN);
        mpfr_add(r8955479, r8955476, r8955478, MPFR_RNDN);
        mpfr_mul(r8955480, r8955473, r8955479, MPFR_RNDN);
        mpfr_add(r8955481, r8955472, r8955480, MPFR_RNDN);
        mpfr_add(r8955482, r8955470, r8955481, MPFR_RNDN);
        return mpfr_get_d(r8955482, MPFR_RNDN);
}

