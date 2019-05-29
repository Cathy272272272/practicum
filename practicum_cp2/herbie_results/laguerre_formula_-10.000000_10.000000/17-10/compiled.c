#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10588230 = 1.0;
        float r10588231 = -10.0;
        float r10588232 = x;
        float r10588233 = r10588231 * r10588232;
        float r10588234 = r10588230 + r10588233;
        float r10588235 = 22.5;
        float r10588236 = r10588232 * r10588232;
        float r10588237 = r10588235 * r10588236;
        float r10588238 = r10588234 + r10588237;
        float r10588239 = -20.0;
        float r10588240 = r10588236 * r10588232;
        float r10588241 = r10588239 * r10588240;
        float r10588242 = r10588238 + r10588241;
        float r10588243 = 8.75;
        float r10588244 = r10588240 * r10588232;
        float r10588245 = r10588243 * r10588244;
        float r10588246 = r10588242 + r10588245;
        float r10588247 = -2.1;
        float r10588248 = r10588244 * r10588232;
        float r10588249 = r10588247 * r10588248;
        float r10588250 = r10588246 + r10588249;
        float r10588251 = 0.291667;
        float r10588252 = r10588248 * r10588232;
        float r10588253 = r10588251 * r10588252;
        float r10588254 = r10588250 + r10588253;
        float r10588255 = -0.02381;
        float r10588256 = r10588252 * r10588232;
        float r10588257 = r10588255 * r10588256;
        float r10588258 = r10588254 + r10588257;
        float r10588259 = 0.001116;
        float r10588260 = r10588256 * r10588232;
        float r10588261 = r10588259 * r10588260;
        float r10588262 = r10588258 + r10588261;
        float r10588263 = -2.8e-05;
        float r10588264 = r10588260 * r10588232;
        float r10588265 = r10588263 * r10588264;
        float r10588266 = r10588262 + r10588265;
        return r10588266;
}

double f_id(double x) {
        double r10588267 = 1.0;
        double r10588268 = -10.0;
        double r10588269 = x;
        double r10588270 = r10588268 * r10588269;
        double r10588271 = r10588267 + r10588270;
        double r10588272 = 22.5;
        double r10588273 = r10588269 * r10588269;
        double r10588274 = r10588272 * r10588273;
        double r10588275 = r10588271 + r10588274;
        double r10588276 = -20.0;
        double r10588277 = r10588273 * r10588269;
        double r10588278 = r10588276 * r10588277;
        double r10588279 = r10588275 + r10588278;
        double r10588280 = 8.75;
        double r10588281 = r10588277 * r10588269;
        double r10588282 = r10588280 * r10588281;
        double r10588283 = r10588279 + r10588282;
        double r10588284 = -2.1;
        double r10588285 = r10588281 * r10588269;
        double r10588286 = r10588284 * r10588285;
        double r10588287 = r10588283 + r10588286;
        double r10588288 = 0.291667;
        double r10588289 = r10588285 * r10588269;
        double r10588290 = r10588288 * r10588289;
        double r10588291 = r10588287 + r10588290;
        double r10588292 = -0.02381;
        double r10588293 = r10588289 * r10588269;
        double r10588294 = r10588292 * r10588293;
        double r10588295 = r10588291 + r10588294;
        double r10588296 = 0.001116;
        double r10588297 = r10588293 * r10588269;
        double r10588298 = r10588296 * r10588297;
        double r10588299 = r10588295 + r10588298;
        double r10588300 = -2.8e-05;
        double r10588301 = r10588297 * r10588269;
        double r10588302 = r10588300 * r10588301;
        double r10588303 = r10588299 + r10588302;
        return r10588303;
}


double f_of(float x) {
        float r10588304 = x;
        float r10588305 = r10588304 * r10588304;
        float r10588306 = 0.291667;
        float r10588307 = r10588305 * r10588306;
        float r10588308 = r10588305 * r10588305;
        float r10588309 = r10588307 * r10588308;
        float r10588310 = -2.1;
        float r10588311 = r10588310 * r10588304;
        float r10588312 = 8.75;
        float r10588313 = r10588311 + r10588312;
        float r10588314 = r10588308 * r10588313;
        float r10588315 = r10588309 + r10588314;
        float r10588316 = -10.0;
        float r10588317 = r10588304 * r10588316;
        float r10588318 = 1.0;
        float r10588319 = r10588317 + r10588318;
        float r10588320 = 3;
        float r10588321 = pow(r10588304, r10588320);
        float r10588322 = r10588321 * r10588321;
        float r10588323 = 22.5;
        float r10588324 = -20.0;
        float r10588325 = r10588304 * r10588324;
        float r10588326 = r10588323 + r10588325;
        float r10588327 = r10588322 * r10588326;
        float r10588328 = r10588326 * r10588326;
        float r10588329 = r10588327 * r10588328;
        float r10588330 = cbrt(r10588329);
        float r10588331 = r10588319 + r10588330;
        float r10588332 = r10588315 + r10588331;
        float r10588333 = -0.02381;
        float r10588334 = r10588333 * r10588304;
        float r10588335 = r10588334 * r10588305;
        float r10588336 = r10588335 * r10588308;
        float r10588337 = r10588308 * r10588308;
        float r10588338 = -2.8e-05;
        float r10588339 = r10588338 * r10588304;
        float r10588340 = 0.001116;
        float r10588341 = r10588339 + r10588340;
        float r10588342 = r10588337 * r10588341;
        float r10588343 = r10588336 + r10588342;
        float r10588344 = r10588332 + r10588343;
        return r10588344;
}

double f_od(double x) {
        double r10588345 = x;
        double r10588346 = r10588345 * r10588345;
        double r10588347 = 0.291667;
        double r10588348 = r10588346 * r10588347;
        double r10588349 = r10588346 * r10588346;
        double r10588350 = r10588348 * r10588349;
        double r10588351 = -2.1;
        double r10588352 = r10588351 * r10588345;
        double r10588353 = 8.75;
        double r10588354 = r10588352 + r10588353;
        double r10588355 = r10588349 * r10588354;
        double r10588356 = r10588350 + r10588355;
        double r10588357 = -10.0;
        double r10588358 = r10588345 * r10588357;
        double r10588359 = 1.0;
        double r10588360 = r10588358 + r10588359;
        double r10588361 = 3;
        double r10588362 = pow(r10588345, r10588361);
        double r10588363 = r10588362 * r10588362;
        double r10588364 = 22.5;
        double r10588365 = -20.0;
        double r10588366 = r10588345 * r10588365;
        double r10588367 = r10588364 + r10588366;
        double r10588368 = r10588363 * r10588367;
        double r10588369 = r10588367 * r10588367;
        double r10588370 = r10588368 * r10588369;
        double r10588371 = cbrt(r10588370);
        double r10588372 = r10588360 + r10588371;
        double r10588373 = r10588356 + r10588372;
        double r10588374 = -0.02381;
        double r10588375 = r10588374 * r10588345;
        double r10588376 = r10588375 * r10588346;
        double r10588377 = r10588376 * r10588349;
        double r10588378 = r10588349 * r10588349;
        double r10588379 = -2.8e-05;
        double r10588380 = r10588379 * r10588345;
        double r10588381 = 0.001116;
        double r10588382 = r10588380 + r10588381;
        double r10588383 = r10588378 * r10588382;
        double r10588384 = r10588377 + r10588383;
        double r10588385 = r10588373 + r10588384;
        return r10588385;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10588386, r10588387, r10588388, r10588389, r10588390, r10588391, r10588392, r10588393, r10588394, r10588395, r10588396, r10588397, r10588398, r10588399, r10588400, r10588401, r10588402, r10588403, r10588404, r10588405, r10588406, r10588407, r10588408, r10588409, r10588410, r10588411, r10588412, r10588413, r10588414, r10588415, r10588416, r10588417, r10588418, r10588419, r10588420, r10588421, r10588422;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10588386, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10588387, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10588388);
        mpfr_init(r10588389);
        mpfr_init(r10588390);
        mpfr_init_set_str(r10588391, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10588392);
        mpfr_init(r10588393);
        mpfr_init(r10588394);
        mpfr_init_set_str(r10588395, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10588396);
        mpfr_init(r10588397);
        mpfr_init(r10588398);
        mpfr_init_set_str(r10588399, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10588400);
        mpfr_init(r10588401);
        mpfr_init(r10588402);
        mpfr_init_set_str(r10588403, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10588404);
        mpfr_init(r10588405);
        mpfr_init(r10588406);
        mpfr_init_set_str(r10588407, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10588408);
        mpfr_init(r10588409);
        mpfr_init(r10588410);
        mpfr_init_set_str(r10588411, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10588412);
        mpfr_init(r10588413);
        mpfr_init(r10588414);
        mpfr_init_set_str(r10588415, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10588416);
        mpfr_init(r10588417);
        mpfr_init(r10588418);
        mpfr_init_set_str(r10588419, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10588420);
        mpfr_init(r10588421);
        mpfr_init(r10588422);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10588388, x, MPFR_RNDN);
        mpfr_mul(r10588389, r10588387, r10588388, MPFR_RNDN);
        mpfr_add(r10588390, r10588386, r10588389, MPFR_RNDN);
        ;
        mpfr_mul(r10588392, r10588388, r10588388, MPFR_RNDN);
        mpfr_mul(r10588393, r10588391, r10588392, MPFR_RNDN);
        mpfr_add(r10588394, r10588390, r10588393, MPFR_RNDN);
        ;
        mpfr_mul(r10588396, r10588392, r10588388, MPFR_RNDN);
        mpfr_mul(r10588397, r10588395, r10588396, MPFR_RNDN);
        mpfr_add(r10588398, r10588394, r10588397, MPFR_RNDN);
        ;
        mpfr_mul(r10588400, r10588396, r10588388, MPFR_RNDN);
        mpfr_mul(r10588401, r10588399, r10588400, MPFR_RNDN);
        mpfr_add(r10588402, r10588398, r10588401, MPFR_RNDN);
        ;
        mpfr_mul(r10588404, r10588400, r10588388, MPFR_RNDN);
        mpfr_mul(r10588405, r10588403, r10588404, MPFR_RNDN);
        mpfr_add(r10588406, r10588402, r10588405, MPFR_RNDN);
        ;
        mpfr_mul(r10588408, r10588404, r10588388, MPFR_RNDN);
        mpfr_mul(r10588409, r10588407, r10588408, MPFR_RNDN);
        mpfr_add(r10588410, r10588406, r10588409, MPFR_RNDN);
        ;
        mpfr_mul(r10588412, r10588408, r10588388, MPFR_RNDN);
        mpfr_mul(r10588413, r10588411, r10588412, MPFR_RNDN);
        mpfr_add(r10588414, r10588410, r10588413, MPFR_RNDN);
        ;
        mpfr_mul(r10588416, r10588412, r10588388, MPFR_RNDN);
        mpfr_mul(r10588417, r10588415, r10588416, MPFR_RNDN);
        mpfr_add(r10588418, r10588414, r10588417, MPFR_RNDN);
        ;
        mpfr_mul(r10588420, r10588416, r10588388, MPFR_RNDN);
        mpfr_mul(r10588421, r10588419, r10588420, MPFR_RNDN);
        mpfr_add(r10588422, r10588418, r10588421, MPFR_RNDN);
        return mpfr_get_d(r10588422, MPFR_RNDN);
}

static mpfr_t r10588423, r10588424, r10588425, r10588426, r10588427, r10588428, r10588429, r10588430, r10588431, r10588432, r10588433, r10588434, r10588435, r10588436, r10588437, r10588438, r10588439, r10588440, r10588441, r10588442, r10588443, r10588444, r10588445, r10588446, r10588447, r10588448, r10588449, r10588450, r10588451, r10588452, r10588453, r10588454, r10588455, r10588456, r10588457, r10588458, r10588459, r10588460, r10588461, r10588462, r10588463;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10588423);
        mpfr_init(r10588424);
        mpfr_init_set_str(r10588425, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10588426);
        mpfr_init(r10588427);
        mpfr_init(r10588428);
        mpfr_init_set_str(r10588429, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10588430);
        mpfr_init_set_str(r10588431, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10588432);
        mpfr_init(r10588433);
        mpfr_init(r10588434);
        mpfr_init_set_str(r10588435, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10588436);
        mpfr_init_set_str(r10588437, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10588438);
        mpfr_init_set_str(r10588439, "3", 10, MPFR_RNDN);
        mpfr_init(r10588440);
        mpfr_init(r10588441);
        mpfr_init_set_str(r10588442, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10588443, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10588444);
        mpfr_init(r10588445);
        mpfr_init(r10588446);
        mpfr_init(r10588447);
        mpfr_init(r10588448);
        mpfr_init(r10588449);
        mpfr_init(r10588450);
        mpfr_init(r10588451);
        mpfr_init_set_str(r10588452, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10588453);
        mpfr_init(r10588454);
        mpfr_init(r10588455);
        mpfr_init(r10588456);
        mpfr_init_set_str(r10588457, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10588458);
        mpfr_init_set_str(r10588459, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10588460);
        mpfr_init(r10588461);
        mpfr_init(r10588462);
        mpfr_init(r10588463);
}

double f_fm(double x) {
        mpfr_set_d(r10588423, x, MPFR_RNDN);
        mpfr_mul(r10588424, r10588423, r10588423, MPFR_RNDN);
        ;
        mpfr_mul(r10588426, r10588424, r10588425, MPFR_RNDN);
        mpfr_mul(r10588427, r10588424, r10588424, MPFR_RNDN);
        mpfr_mul(r10588428, r10588426, r10588427, MPFR_RNDN);
        ;
        mpfr_mul(r10588430, r10588429, r10588423, MPFR_RNDN);
        ;
        mpfr_add(r10588432, r10588430, r10588431, MPFR_RNDN);
        mpfr_mul(r10588433, r10588427, r10588432, MPFR_RNDN);
        mpfr_add(r10588434, r10588428, r10588433, MPFR_RNDN);
        ;
        mpfr_mul(r10588436, r10588423, r10588435, MPFR_RNDN);
        ;
        mpfr_add(r10588438, r10588436, r10588437, MPFR_RNDN);
        ;
        mpfr_pow(r10588440, r10588423, r10588439, MPFR_RNDN);
        mpfr_mul(r10588441, r10588440, r10588440, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10588444, r10588423, r10588443, MPFR_RNDN);
        mpfr_add(r10588445, r10588442, r10588444, MPFR_RNDN);
        mpfr_mul(r10588446, r10588441, r10588445, MPFR_RNDN);
        mpfr_mul(r10588447, r10588445, r10588445, MPFR_RNDN);
        mpfr_mul(r10588448, r10588446, r10588447, MPFR_RNDN);
        mpfr_cbrt(r10588449, r10588448, MPFR_RNDN);
        mpfr_add(r10588450, r10588438, r10588449, MPFR_RNDN);
        mpfr_add(r10588451, r10588434, r10588450, MPFR_RNDN);
        ;
        mpfr_mul(r10588453, r10588452, r10588423, MPFR_RNDN);
        mpfr_mul(r10588454, r10588453, r10588424, MPFR_RNDN);
        mpfr_mul(r10588455, r10588454, r10588427, MPFR_RNDN);
        mpfr_mul(r10588456, r10588427, r10588427, MPFR_RNDN);
        ;
        mpfr_mul(r10588458, r10588457, r10588423, MPFR_RNDN);
        ;
        mpfr_add(r10588460, r10588458, r10588459, MPFR_RNDN);
        mpfr_mul(r10588461, r10588456, r10588460, MPFR_RNDN);
        mpfr_add(r10588462, r10588455, r10588461, MPFR_RNDN);
        mpfr_add(r10588463, r10588451, r10588462, MPFR_RNDN);
        return mpfr_get_d(r10588463, MPFR_RNDN);
}

static mpfr_t r10588464, r10588465, r10588466, r10588467, r10588468, r10588469, r10588470, r10588471, r10588472, r10588473, r10588474, r10588475, r10588476, r10588477, r10588478, r10588479, r10588480, r10588481, r10588482, r10588483, r10588484, r10588485, r10588486, r10588487, r10588488, r10588489, r10588490, r10588491, r10588492, r10588493, r10588494, r10588495, r10588496, r10588497, r10588498, r10588499, r10588500, r10588501, r10588502, r10588503, r10588504;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10588464);
        mpfr_init(r10588465);
        mpfr_init_set_str(r10588466, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10588467);
        mpfr_init(r10588468);
        mpfr_init(r10588469);
        mpfr_init_set_str(r10588470, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10588471);
        mpfr_init_set_str(r10588472, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10588473);
        mpfr_init(r10588474);
        mpfr_init(r10588475);
        mpfr_init_set_str(r10588476, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10588477);
        mpfr_init_set_str(r10588478, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10588479);
        mpfr_init_set_str(r10588480, "3", 10, MPFR_RNDN);
        mpfr_init(r10588481);
        mpfr_init(r10588482);
        mpfr_init_set_str(r10588483, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10588484, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10588485);
        mpfr_init(r10588486);
        mpfr_init(r10588487);
        mpfr_init(r10588488);
        mpfr_init(r10588489);
        mpfr_init(r10588490);
        mpfr_init(r10588491);
        mpfr_init(r10588492);
        mpfr_init_set_str(r10588493, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10588494);
        mpfr_init(r10588495);
        mpfr_init(r10588496);
        mpfr_init(r10588497);
        mpfr_init_set_str(r10588498, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10588499);
        mpfr_init_set_str(r10588500, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10588501);
        mpfr_init(r10588502);
        mpfr_init(r10588503);
        mpfr_init(r10588504);
}

double f_dm(double x) {
        mpfr_set_d(r10588464, x, MPFR_RNDN);
        mpfr_mul(r10588465, r10588464, r10588464, MPFR_RNDN);
        ;
        mpfr_mul(r10588467, r10588465, r10588466, MPFR_RNDN);
        mpfr_mul(r10588468, r10588465, r10588465, MPFR_RNDN);
        mpfr_mul(r10588469, r10588467, r10588468, MPFR_RNDN);
        ;
        mpfr_mul(r10588471, r10588470, r10588464, MPFR_RNDN);
        ;
        mpfr_add(r10588473, r10588471, r10588472, MPFR_RNDN);
        mpfr_mul(r10588474, r10588468, r10588473, MPFR_RNDN);
        mpfr_add(r10588475, r10588469, r10588474, MPFR_RNDN);
        ;
        mpfr_mul(r10588477, r10588464, r10588476, MPFR_RNDN);
        ;
        mpfr_add(r10588479, r10588477, r10588478, MPFR_RNDN);
        ;
        mpfr_pow(r10588481, r10588464, r10588480, MPFR_RNDN);
        mpfr_mul(r10588482, r10588481, r10588481, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10588485, r10588464, r10588484, MPFR_RNDN);
        mpfr_add(r10588486, r10588483, r10588485, MPFR_RNDN);
        mpfr_mul(r10588487, r10588482, r10588486, MPFR_RNDN);
        mpfr_mul(r10588488, r10588486, r10588486, MPFR_RNDN);
        mpfr_mul(r10588489, r10588487, r10588488, MPFR_RNDN);
        mpfr_cbrt(r10588490, r10588489, MPFR_RNDN);
        mpfr_add(r10588491, r10588479, r10588490, MPFR_RNDN);
        mpfr_add(r10588492, r10588475, r10588491, MPFR_RNDN);
        ;
        mpfr_mul(r10588494, r10588493, r10588464, MPFR_RNDN);
        mpfr_mul(r10588495, r10588494, r10588465, MPFR_RNDN);
        mpfr_mul(r10588496, r10588495, r10588468, MPFR_RNDN);
        mpfr_mul(r10588497, r10588468, r10588468, MPFR_RNDN);
        ;
        mpfr_mul(r10588499, r10588498, r10588464, MPFR_RNDN);
        ;
        mpfr_add(r10588501, r10588499, r10588500, MPFR_RNDN);
        mpfr_mul(r10588502, r10588497, r10588501, MPFR_RNDN);
        mpfr_add(r10588503, r10588496, r10588502, MPFR_RNDN);
        mpfr_add(r10588504, r10588492, r10588503, MPFR_RNDN);
        return mpfr_get_d(r10588504, MPFR_RNDN);
}

