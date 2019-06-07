#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "18";

double f_if(float x) {
        float r6327206 = -17643225600.0;
        float r6327207 = 317578060800.0;
        float r6327208 = x;
        float r6327209 = r6327208 * r6327208;
        float r6327210 = r6327207 * r6327209;
        float r6327211 = r6327206 + r6327210;
        float r6327212 = -846874828800.0;
        float r6327213 = r6327209 * r6327208;
        float r6327214 = r6327213 * r6327208;
        float r6327215 = r6327212 * r6327214;
        float r6327216 = r6327211 + r6327215;
        float r6327217 = 790416506880.0;
        float r6327218 = r6327214 * r6327208;
        float r6327219 = r6327218 * r6327208;
        float r6327220 = r6327217 * r6327219;
        float r6327221 = r6327216 + r6327220;
        float r6327222 = -338749931520.0;
        float r6327223 = r6327219 * r6327208;
        float r6327224 = r6327223 * r6327208;
        float r6327225 = r6327222 * r6327224;
        float r6327226 = r6327221 + r6327225;
        float r6327227 = 75277762560.0;
        float r6327228 = r6327224 * r6327208;
        float r6327229 = r6327228 * r6327208;
        float r6327230 = r6327227 * r6327229;
        float r6327231 = r6327226 + r6327230;
        float r6327232 = -9124577280.0;
        float r6327233 = r6327229 * r6327208;
        float r6327234 = r6327233 * r6327208;
        float r6327235 = r6327232 * r6327234;
        float r6327236 = r6327231 + r6327235;
        float r6327237 = 601620480.0;
        float r6327238 = r6327234 * r6327208;
        float r6327239 = r6327238 * r6327208;
        float r6327240 = r6327237 * r6327239;
        float r6327241 = r6327236 + r6327240;
        float r6327242 = -20054016.0;
        float r6327243 = r6327239 * r6327208;
        float r6327244 = r6327243 * r6327208;
        float r6327245 = r6327242 * r6327244;
        float r6327246 = r6327241 + r6327245;
        float r6327247 = 262144.0;
        float r6327248 = r6327244 * r6327208;
        float r6327249 = r6327248 * r6327208;
        float r6327250 = r6327247 * r6327249;
        float r6327251 = r6327246 + r6327250;
        return r6327251;
}

double f_id(double x) {
        double r6327252 = -17643225600.0;
        double r6327253 = 317578060800.0;
        double r6327254 = x;
        double r6327255 = r6327254 * r6327254;
        double r6327256 = r6327253 * r6327255;
        double r6327257 = r6327252 + r6327256;
        double r6327258 = -846874828800.0;
        double r6327259 = r6327255 * r6327254;
        double r6327260 = r6327259 * r6327254;
        double r6327261 = r6327258 * r6327260;
        double r6327262 = r6327257 + r6327261;
        double r6327263 = 790416506880.0;
        double r6327264 = r6327260 * r6327254;
        double r6327265 = r6327264 * r6327254;
        double r6327266 = r6327263 * r6327265;
        double r6327267 = r6327262 + r6327266;
        double r6327268 = -338749931520.0;
        double r6327269 = r6327265 * r6327254;
        double r6327270 = r6327269 * r6327254;
        double r6327271 = r6327268 * r6327270;
        double r6327272 = r6327267 + r6327271;
        double r6327273 = 75277762560.0;
        double r6327274 = r6327270 * r6327254;
        double r6327275 = r6327274 * r6327254;
        double r6327276 = r6327273 * r6327275;
        double r6327277 = r6327272 + r6327276;
        double r6327278 = -9124577280.0;
        double r6327279 = r6327275 * r6327254;
        double r6327280 = r6327279 * r6327254;
        double r6327281 = r6327278 * r6327280;
        double r6327282 = r6327277 + r6327281;
        double r6327283 = 601620480.0;
        double r6327284 = r6327280 * r6327254;
        double r6327285 = r6327284 * r6327254;
        double r6327286 = r6327283 * r6327285;
        double r6327287 = r6327282 + r6327286;
        double r6327288 = -20054016.0;
        double r6327289 = r6327285 * r6327254;
        double r6327290 = r6327289 * r6327254;
        double r6327291 = r6327288 * r6327290;
        double r6327292 = r6327287 + r6327291;
        double r6327293 = 262144.0;
        double r6327294 = r6327290 * r6327254;
        double r6327295 = r6327294 * r6327254;
        double r6327296 = r6327293 * r6327295;
        double r6327297 = r6327292 + r6327296;
        return r6327297;
}


double f_of(float x) {
        float r6327298 = x;
        float r6327299 = r6327298 * r6327298;
        float r6327300 = r6327299 * r6327299;
        float r6327301 = r6327300 * r6327300;
        float r6327302 = r6327300 * r6327301;
        float r6327303 = -9124577280.0;
        float r6327304 = 601620480.0;
        float r6327305 = r6327304 * r6327299;
        float r6327306 = r6327303 + r6327305;
        float r6327307 = r6327302 * r6327306;
        float r6327308 = -338749931520.0;
        float r6327309 = 75277762560.0;
        float r6327310 = r6327309 * r6327299;
        float r6327311 = r6327308 + r6327310;
        float r6327312 = r6327301 * r6327311;
        float r6327313 = r6327307 + r6327312;
        float r6327314 = 317578060800.0;
        float r6327315 = r6327298 * r6327314;
        float r6327316 = r6327315 * r6327298;
        float r6327317 = -17643225600.0;
        float r6327318 = r6327316 + r6327317;
        float r6327319 = 790416506880.0;
        float r6327320 = r6327299 * r6327319;
        float r6327321 = -846874828800.0;
        float r6327322 = r6327320 + r6327321;
        float r6327323 = r6327300 * r6327322;
        float r6327324 = r6327318 + r6327323;
        float r6327325 = r6327313 + r6327324;
        float r6327326 = r6327302 * r6327300;
        float r6327327 = 262144.0;
        float r6327328 = r6327327 * r6327299;
        float r6327329 = -20054016.0;
        float r6327330 = r6327328 + r6327329;
        float r6327331 = r6327326 * r6327330;
        float r6327332 = r6327325 + r6327331;
        return r6327332;
}

double f_od(double x) {
        double r6327333 = x;
        double r6327334 = r6327333 * r6327333;
        double r6327335 = r6327334 * r6327334;
        double r6327336 = r6327335 * r6327335;
        double r6327337 = r6327335 * r6327336;
        double r6327338 = -9124577280.0;
        double r6327339 = 601620480.0;
        double r6327340 = r6327339 * r6327334;
        double r6327341 = r6327338 + r6327340;
        double r6327342 = r6327337 * r6327341;
        double r6327343 = -338749931520.0;
        double r6327344 = 75277762560.0;
        double r6327345 = r6327344 * r6327334;
        double r6327346 = r6327343 + r6327345;
        double r6327347 = r6327336 * r6327346;
        double r6327348 = r6327342 + r6327347;
        double r6327349 = 317578060800.0;
        double r6327350 = r6327333 * r6327349;
        double r6327351 = r6327350 * r6327333;
        double r6327352 = -17643225600.0;
        double r6327353 = r6327351 + r6327352;
        double r6327354 = 790416506880.0;
        double r6327355 = r6327334 * r6327354;
        double r6327356 = -846874828800.0;
        double r6327357 = r6327355 + r6327356;
        double r6327358 = r6327335 * r6327357;
        double r6327359 = r6327353 + r6327358;
        double r6327360 = r6327348 + r6327359;
        double r6327361 = r6327337 * r6327335;
        double r6327362 = 262144.0;
        double r6327363 = r6327362 * r6327334;
        double r6327364 = -20054016.0;
        double r6327365 = r6327363 + r6327364;
        double r6327366 = r6327361 * r6327365;
        double r6327367 = r6327360 + r6327366;
        return r6327367;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6327368, r6327369, r6327370, r6327371, r6327372, r6327373, r6327374, r6327375, r6327376, r6327377, r6327378, r6327379, r6327380, r6327381, r6327382, r6327383, r6327384, r6327385, r6327386, r6327387, r6327388, r6327389, r6327390, r6327391, r6327392, r6327393, r6327394, r6327395, r6327396, r6327397, r6327398, r6327399, r6327400, r6327401, r6327402, r6327403, r6327404, r6327405, r6327406, r6327407, r6327408, r6327409, r6327410, r6327411, r6327412, r6327413;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6327368, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327369, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r6327370);
        mpfr_init(r6327371);
        mpfr_init(r6327372);
        mpfr_init(r6327373);
        mpfr_init_set_str(r6327374, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r6327375);
        mpfr_init(r6327376);
        mpfr_init(r6327377);
        mpfr_init(r6327378);
        mpfr_init_set_str(r6327379, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r6327380);
        mpfr_init(r6327381);
        mpfr_init(r6327382);
        mpfr_init(r6327383);
        mpfr_init_set_str(r6327384, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init(r6327385);
        mpfr_init(r6327386);
        mpfr_init(r6327387);
        mpfr_init(r6327388);
        mpfr_init_set_str(r6327389, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r6327390);
        mpfr_init(r6327391);
        mpfr_init(r6327392);
        mpfr_init(r6327393);
        mpfr_init_set_str(r6327394, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init(r6327395);
        mpfr_init(r6327396);
        mpfr_init(r6327397);
        mpfr_init(r6327398);
        mpfr_init_set_str(r6327399, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r6327400);
        mpfr_init(r6327401);
        mpfr_init(r6327402);
        mpfr_init(r6327403);
        mpfr_init_set_str(r6327404, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r6327405);
        mpfr_init(r6327406);
        mpfr_init(r6327407);
        mpfr_init(r6327408);
        mpfr_init_set_str(r6327409, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r6327410);
        mpfr_init(r6327411);
        mpfr_init(r6327412);
        mpfr_init(r6327413);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6327370, x, MPFR_RNDN);
        mpfr_mul(r6327371, r6327370, r6327370, MPFR_RNDN);
        mpfr_mul(r6327372, r6327369, r6327371, MPFR_RNDN);
        mpfr_add(r6327373, r6327368, r6327372, MPFR_RNDN);
        ;
        mpfr_mul(r6327375, r6327371, r6327370, MPFR_RNDN);
        mpfr_mul(r6327376, r6327375, r6327370, MPFR_RNDN);
        mpfr_mul(r6327377, r6327374, r6327376, MPFR_RNDN);
        mpfr_add(r6327378, r6327373, r6327377, MPFR_RNDN);
        ;
        mpfr_mul(r6327380, r6327376, r6327370, MPFR_RNDN);
        mpfr_mul(r6327381, r6327380, r6327370, MPFR_RNDN);
        mpfr_mul(r6327382, r6327379, r6327381, MPFR_RNDN);
        mpfr_add(r6327383, r6327378, r6327382, MPFR_RNDN);
        ;
        mpfr_mul(r6327385, r6327381, r6327370, MPFR_RNDN);
        mpfr_mul(r6327386, r6327385, r6327370, MPFR_RNDN);
        mpfr_mul(r6327387, r6327384, r6327386, MPFR_RNDN);
        mpfr_add(r6327388, r6327383, r6327387, MPFR_RNDN);
        ;
        mpfr_mul(r6327390, r6327386, r6327370, MPFR_RNDN);
        mpfr_mul(r6327391, r6327390, r6327370, MPFR_RNDN);
        mpfr_mul(r6327392, r6327389, r6327391, MPFR_RNDN);
        mpfr_add(r6327393, r6327388, r6327392, MPFR_RNDN);
        ;
        mpfr_mul(r6327395, r6327391, r6327370, MPFR_RNDN);
        mpfr_mul(r6327396, r6327395, r6327370, MPFR_RNDN);
        mpfr_mul(r6327397, r6327394, r6327396, MPFR_RNDN);
        mpfr_add(r6327398, r6327393, r6327397, MPFR_RNDN);
        ;
        mpfr_mul(r6327400, r6327396, r6327370, MPFR_RNDN);
        mpfr_mul(r6327401, r6327400, r6327370, MPFR_RNDN);
        mpfr_mul(r6327402, r6327399, r6327401, MPFR_RNDN);
        mpfr_add(r6327403, r6327398, r6327402, MPFR_RNDN);
        ;
        mpfr_mul(r6327405, r6327401, r6327370, MPFR_RNDN);
        mpfr_mul(r6327406, r6327405, r6327370, MPFR_RNDN);
        mpfr_mul(r6327407, r6327404, r6327406, MPFR_RNDN);
        mpfr_add(r6327408, r6327403, r6327407, MPFR_RNDN);
        ;
        mpfr_mul(r6327410, r6327406, r6327370, MPFR_RNDN);
        mpfr_mul(r6327411, r6327410, r6327370, MPFR_RNDN);
        mpfr_mul(r6327412, r6327409, r6327411, MPFR_RNDN);
        mpfr_add(r6327413, r6327408, r6327412, MPFR_RNDN);
        return mpfr_get_d(r6327413, MPFR_RNDN);
}

static mpfr_t r6327414, r6327415, r6327416, r6327417, r6327418, r6327419, r6327420, r6327421, r6327422, r6327423, r6327424, r6327425, r6327426, r6327427, r6327428, r6327429, r6327430, r6327431, r6327432, r6327433, r6327434, r6327435, r6327436, r6327437, r6327438, r6327439, r6327440, r6327441, r6327442, r6327443, r6327444, r6327445, r6327446, r6327447, r6327448;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6327414);
        mpfr_init(r6327415);
        mpfr_init(r6327416);
        mpfr_init(r6327417);
        mpfr_init(r6327418);
        mpfr_init_set_str(r6327419, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327420, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r6327421);
        mpfr_init(r6327422);
        mpfr_init(r6327423);
        mpfr_init_set_str(r6327424, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327425, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r6327426);
        mpfr_init(r6327427);
        mpfr_init(r6327428);
        mpfr_init(r6327429);
        mpfr_init_set_str(r6327430, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r6327431);
        mpfr_init(r6327432);
        mpfr_init_set_str(r6327433, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r6327434);
        mpfr_init_set_str(r6327435, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r6327436);
        mpfr_init_set_str(r6327437, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r6327438);
        mpfr_init(r6327439);
        mpfr_init(r6327440);
        mpfr_init(r6327441);
        mpfr_init(r6327442);
        mpfr_init_set_str(r6327443, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r6327444);
        mpfr_init_set_str(r6327445, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r6327446);
        mpfr_init(r6327447);
        mpfr_init(r6327448);
}

double f_fm(double x) {
        mpfr_set_d(r6327414, x, MPFR_RNDN);
        mpfr_mul(r6327415, r6327414, r6327414, MPFR_RNDN);
        mpfr_mul(r6327416, r6327415, r6327415, MPFR_RNDN);
        mpfr_mul(r6327417, r6327416, r6327416, MPFR_RNDN);
        mpfr_mul(r6327418, r6327416, r6327417, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6327421, r6327420, r6327415, MPFR_RNDN);
        mpfr_add(r6327422, r6327419, r6327421, MPFR_RNDN);
        mpfr_mul(r6327423, r6327418, r6327422, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6327426, r6327425, r6327415, MPFR_RNDN);
        mpfr_add(r6327427, r6327424, r6327426, MPFR_RNDN);
        mpfr_mul(r6327428, r6327417, r6327427, MPFR_RNDN);
        mpfr_add(r6327429, r6327423, r6327428, MPFR_RNDN);
        ;
        mpfr_mul(r6327431, r6327414, r6327430, MPFR_RNDN);
        mpfr_mul(r6327432, r6327431, r6327414, MPFR_RNDN);
        ;
        mpfr_add(r6327434, r6327432, r6327433, MPFR_RNDN);
        ;
        mpfr_mul(r6327436, r6327415, r6327435, MPFR_RNDN);
        ;
        mpfr_add(r6327438, r6327436, r6327437, MPFR_RNDN);
        mpfr_mul(r6327439, r6327416, r6327438, MPFR_RNDN);
        mpfr_add(r6327440, r6327434, r6327439, MPFR_RNDN);
        mpfr_add(r6327441, r6327429, r6327440, MPFR_RNDN);
        mpfr_mul(r6327442, r6327418, r6327416, MPFR_RNDN);
        ;
        mpfr_mul(r6327444, r6327443, r6327415, MPFR_RNDN);
        ;
        mpfr_add(r6327446, r6327444, r6327445, MPFR_RNDN);
        mpfr_mul(r6327447, r6327442, r6327446, MPFR_RNDN);
        mpfr_add(r6327448, r6327441, r6327447, MPFR_RNDN);
        return mpfr_get_d(r6327448, MPFR_RNDN);
}

static mpfr_t r6327449, r6327450, r6327451, r6327452, r6327453, r6327454, r6327455, r6327456, r6327457, r6327458, r6327459, r6327460, r6327461, r6327462, r6327463, r6327464, r6327465, r6327466, r6327467, r6327468, r6327469, r6327470, r6327471, r6327472, r6327473, r6327474, r6327475, r6327476, r6327477, r6327478, r6327479, r6327480, r6327481, r6327482, r6327483;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6327449);
        mpfr_init(r6327450);
        mpfr_init(r6327451);
        mpfr_init(r6327452);
        mpfr_init(r6327453);
        mpfr_init_set_str(r6327454, "-9124577280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327455, "601620480.0", 10, MPFR_RNDN);
        mpfr_init(r6327456);
        mpfr_init(r6327457);
        mpfr_init(r6327458);
        mpfr_init_set_str(r6327459, "-338749931520.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327460, "75277762560.0", 10, MPFR_RNDN);
        mpfr_init(r6327461);
        mpfr_init(r6327462);
        mpfr_init(r6327463);
        mpfr_init(r6327464);
        mpfr_init_set_str(r6327465, "317578060800.0", 10, MPFR_RNDN);
        mpfr_init(r6327466);
        mpfr_init(r6327467);
        mpfr_init_set_str(r6327468, "-17643225600.0", 10, MPFR_RNDN);
        mpfr_init(r6327469);
        mpfr_init_set_str(r6327470, "790416506880.0", 10, MPFR_RNDN);
        mpfr_init(r6327471);
        mpfr_init_set_str(r6327472, "-846874828800.0", 10, MPFR_RNDN);
        mpfr_init(r6327473);
        mpfr_init(r6327474);
        mpfr_init(r6327475);
        mpfr_init(r6327476);
        mpfr_init(r6327477);
        mpfr_init_set_str(r6327478, "262144.0", 10, MPFR_RNDN);
        mpfr_init(r6327479);
        mpfr_init_set_str(r6327480, "-20054016.0", 10, MPFR_RNDN);
        mpfr_init(r6327481);
        mpfr_init(r6327482);
        mpfr_init(r6327483);
}

double f_dm(double x) {
        mpfr_set_d(r6327449, x, MPFR_RNDN);
        mpfr_mul(r6327450, r6327449, r6327449, MPFR_RNDN);
        mpfr_mul(r6327451, r6327450, r6327450, MPFR_RNDN);
        mpfr_mul(r6327452, r6327451, r6327451, MPFR_RNDN);
        mpfr_mul(r6327453, r6327451, r6327452, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6327456, r6327455, r6327450, MPFR_RNDN);
        mpfr_add(r6327457, r6327454, r6327456, MPFR_RNDN);
        mpfr_mul(r6327458, r6327453, r6327457, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6327461, r6327460, r6327450, MPFR_RNDN);
        mpfr_add(r6327462, r6327459, r6327461, MPFR_RNDN);
        mpfr_mul(r6327463, r6327452, r6327462, MPFR_RNDN);
        mpfr_add(r6327464, r6327458, r6327463, MPFR_RNDN);
        ;
        mpfr_mul(r6327466, r6327449, r6327465, MPFR_RNDN);
        mpfr_mul(r6327467, r6327466, r6327449, MPFR_RNDN);
        ;
        mpfr_add(r6327469, r6327467, r6327468, MPFR_RNDN);
        ;
        mpfr_mul(r6327471, r6327450, r6327470, MPFR_RNDN);
        ;
        mpfr_add(r6327473, r6327471, r6327472, MPFR_RNDN);
        mpfr_mul(r6327474, r6327451, r6327473, MPFR_RNDN);
        mpfr_add(r6327475, r6327469, r6327474, MPFR_RNDN);
        mpfr_add(r6327476, r6327464, r6327475, MPFR_RNDN);
        mpfr_mul(r6327477, r6327453, r6327451, MPFR_RNDN);
        ;
        mpfr_mul(r6327479, r6327478, r6327450, MPFR_RNDN);
        ;
        mpfr_add(r6327481, r6327479, r6327480, MPFR_RNDN);
        mpfr_mul(r6327482, r6327477, r6327481, MPFR_RNDN);
        mpfr_add(r6327483, r6327476, r6327482, MPFR_RNDN);
        return mpfr_get_d(r6327483, MPFR_RNDN);
}

