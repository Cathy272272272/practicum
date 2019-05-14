#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6860272 = 2.460938;
        float r6860273 = x;
        float r6860274 = r6860272 * r6860273;
        float r6860275 = -36.09375;
        float r6860276 = r6860273 * r6860273;
        float r6860277 = r6860276 * r6860273;
        float r6860278 = r6860275 * r6860277;
        float r6860279 = r6860274 + r6860278;
        float r6860280 = 140.765625;
        float r6860281 = r6860277 * r6860273;
        float r6860282 = r6860281 * r6860273;
        float r6860283 = r6860280 * r6860282;
        float r6860284 = r6860279 + r6860283;
        float r6860285 = -201.09375;
        float r6860286 = r6860282 * r6860273;
        float r6860287 = r6860286 * r6860273;
        float r6860288 = r6860285 * r6860287;
        float r6860289 = r6860284 + r6860288;
        float r6860290 = 94.960938;
        float r6860291 = r6860287 * r6860273;
        float r6860292 = r6860291 * r6860273;
        float r6860293 = r6860290 * r6860292;
        float r6860294 = r6860289 + r6860293;
        return r6860294;
}

double f_id(double x) {
        double r6860295 = 2.460938;
        double r6860296 = x;
        double r6860297 = r6860295 * r6860296;
        double r6860298 = -36.09375;
        double r6860299 = r6860296 * r6860296;
        double r6860300 = r6860299 * r6860296;
        double r6860301 = r6860298 * r6860300;
        double r6860302 = r6860297 + r6860301;
        double r6860303 = 140.765625;
        double r6860304 = r6860300 * r6860296;
        double r6860305 = r6860304 * r6860296;
        double r6860306 = r6860303 * r6860305;
        double r6860307 = r6860302 + r6860306;
        double r6860308 = -201.09375;
        double r6860309 = r6860305 * r6860296;
        double r6860310 = r6860309 * r6860296;
        double r6860311 = r6860308 * r6860310;
        double r6860312 = r6860307 + r6860311;
        double r6860313 = 94.960938;
        double r6860314 = r6860310 * r6860296;
        double r6860315 = r6860314 * r6860296;
        double r6860316 = r6860313 * r6860315;
        double r6860317 = r6860312 + r6860316;
        return r6860317;
}


double f_of(float x) {
        float r6860318 = x;
        float r6860319 = r6860318 * r6860318;
        float r6860320 = 140.765625;
        float r6860321 = r6860318 * r6860320;
        float r6860322 = r6860319 * r6860321;
        float r6860323 = r6860319 * r6860322;
        float r6860324 = 2.460938;
        float r6860325 = r6860324 * r6860318;
        float r6860326 = -36.09375;
        float r6860327 = r6860326 * r6860318;
        float r6860328 = r6860327 * r6860319;
        float r6860329 = r6860325 + r6860328;
        float r6860330 = r6860323 + r6860329;
        float r6860331 = 3;
        float r6860332 = pow(r6860318, r6860331);
        float r6860333 = r6860332 * r6860332;
        float r6860334 = r6860333 * r6860318;
        float r6860335 = -201.09375;
        float r6860336 = 94.960938;
        float r6860337 = r6860336 * r6860318;
        float r6860338 = r6860318 * r6860337;
        float r6860339 = sqrt(r6860338);
        float r6860340 = r6860339 * r6860339;
        float r6860341 = r6860335 + r6860340;
        float r6860342 = r6860334 * r6860341;
        float r6860343 = r6860330 + r6860342;
        return r6860343;
}

double f_od(double x) {
        double r6860344 = x;
        double r6860345 = r6860344 * r6860344;
        double r6860346 = 140.765625;
        double r6860347 = r6860344 * r6860346;
        double r6860348 = r6860345 * r6860347;
        double r6860349 = r6860345 * r6860348;
        double r6860350 = 2.460938;
        double r6860351 = r6860350 * r6860344;
        double r6860352 = -36.09375;
        double r6860353 = r6860352 * r6860344;
        double r6860354 = r6860353 * r6860345;
        double r6860355 = r6860351 + r6860354;
        double r6860356 = r6860349 + r6860355;
        double r6860357 = 3;
        double r6860358 = pow(r6860344, r6860357);
        double r6860359 = r6860358 * r6860358;
        double r6860360 = r6860359 * r6860344;
        double r6860361 = -201.09375;
        double r6860362 = 94.960938;
        double r6860363 = r6860362 * r6860344;
        double r6860364 = r6860344 * r6860363;
        double r6860365 = sqrt(r6860364);
        double r6860366 = r6860365 * r6860365;
        double r6860367 = r6860361 + r6860366;
        double r6860368 = r6860360 * r6860367;
        double r6860369 = r6860356 + r6860368;
        return r6860369;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6860370, r6860371, r6860372, r6860373, r6860374, r6860375, r6860376, r6860377, r6860378, r6860379, r6860380, r6860381, r6860382, r6860383, r6860384, r6860385, r6860386, r6860387, r6860388, r6860389, r6860390, r6860391, r6860392;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6860370, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6860371);
        mpfr_init(r6860372);
        mpfr_init_set_str(r6860373, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6860374);
        mpfr_init(r6860375);
        mpfr_init(r6860376);
        mpfr_init(r6860377);
        mpfr_init_set_str(r6860378, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6860379);
        mpfr_init(r6860380);
        mpfr_init(r6860381);
        mpfr_init(r6860382);
        mpfr_init_set_str(r6860383, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6860384);
        mpfr_init(r6860385);
        mpfr_init(r6860386);
        mpfr_init(r6860387);
        mpfr_init_set_str(r6860388, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6860389);
        mpfr_init(r6860390);
        mpfr_init(r6860391);
        mpfr_init(r6860392);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6860371, x, MPFR_RNDN);
        mpfr_mul(r6860372, r6860370, r6860371, MPFR_RNDN);
        ;
        mpfr_mul(r6860374, r6860371, r6860371, MPFR_RNDN);
        mpfr_mul(r6860375, r6860374, r6860371, MPFR_RNDN);
        mpfr_mul(r6860376, r6860373, r6860375, MPFR_RNDN);
        mpfr_add(r6860377, r6860372, r6860376, MPFR_RNDN);
        ;
        mpfr_mul(r6860379, r6860375, r6860371, MPFR_RNDN);
        mpfr_mul(r6860380, r6860379, r6860371, MPFR_RNDN);
        mpfr_mul(r6860381, r6860378, r6860380, MPFR_RNDN);
        mpfr_add(r6860382, r6860377, r6860381, MPFR_RNDN);
        ;
        mpfr_mul(r6860384, r6860380, r6860371, MPFR_RNDN);
        mpfr_mul(r6860385, r6860384, r6860371, MPFR_RNDN);
        mpfr_mul(r6860386, r6860383, r6860385, MPFR_RNDN);
        mpfr_add(r6860387, r6860382, r6860386, MPFR_RNDN);
        ;
        mpfr_mul(r6860389, r6860385, r6860371, MPFR_RNDN);
        mpfr_mul(r6860390, r6860389, r6860371, MPFR_RNDN);
        mpfr_mul(r6860391, r6860388, r6860390, MPFR_RNDN);
        mpfr_add(r6860392, r6860387, r6860391, MPFR_RNDN);
        return mpfr_get_d(r6860392, MPFR_RNDN);
}

static mpfr_t r6860393, r6860394, r6860395, r6860396, r6860397, r6860398, r6860399, r6860400, r6860401, r6860402, r6860403, r6860404, r6860405, r6860406, r6860407, r6860408, r6860409, r6860410, r6860411, r6860412, r6860413, r6860414, r6860415, r6860416, r6860417, r6860418;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6860393);
        mpfr_init(r6860394);
        mpfr_init_set_str(r6860395, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6860396);
        mpfr_init(r6860397);
        mpfr_init(r6860398);
        mpfr_init_set_str(r6860399, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6860400);
        mpfr_init_set_str(r6860401, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6860402);
        mpfr_init(r6860403);
        mpfr_init(r6860404);
        mpfr_init(r6860405);
        mpfr_init_set_str(r6860406, "3", 10, MPFR_RNDN);
        mpfr_init(r6860407);
        mpfr_init(r6860408);
        mpfr_init(r6860409);
        mpfr_init_set_str(r6860410, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860411, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6860412);
        mpfr_init(r6860413);
        mpfr_init(r6860414);
        mpfr_init(r6860415);
        mpfr_init(r6860416);
        mpfr_init(r6860417);
        mpfr_init(r6860418);
}

double f_fm(double x) {
        mpfr_set_d(r6860393, x, MPFR_RNDN);
        mpfr_mul(r6860394, r6860393, r6860393, MPFR_RNDN);
        ;
        mpfr_mul(r6860396, r6860393, r6860395, MPFR_RNDN);
        mpfr_mul(r6860397, r6860394, r6860396, MPFR_RNDN);
        mpfr_mul(r6860398, r6860394, r6860397, MPFR_RNDN);
        ;
        mpfr_mul(r6860400, r6860399, r6860393, MPFR_RNDN);
        ;
        mpfr_mul(r6860402, r6860401, r6860393, MPFR_RNDN);
        mpfr_mul(r6860403, r6860402, r6860394, MPFR_RNDN);
        mpfr_add(r6860404, r6860400, r6860403, MPFR_RNDN);
        mpfr_add(r6860405, r6860398, r6860404, MPFR_RNDN);
        ;
        mpfr_pow(r6860407, r6860393, r6860406, MPFR_RNDN);
        mpfr_mul(r6860408, r6860407, r6860407, MPFR_RNDN);
        mpfr_mul(r6860409, r6860408, r6860393, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6860412, r6860411, r6860393, MPFR_RNDN);
        mpfr_mul(r6860413, r6860393, r6860412, MPFR_RNDN);
        mpfr_sqrt(r6860414, r6860413, MPFR_RNDN);
        mpfr_mul(r6860415, r6860414, r6860414, MPFR_RNDN);
        mpfr_add(r6860416, r6860410, r6860415, MPFR_RNDN);
        mpfr_mul(r6860417, r6860409, r6860416, MPFR_RNDN);
        mpfr_add(r6860418, r6860405, r6860417, MPFR_RNDN);
        return mpfr_get_d(r6860418, MPFR_RNDN);
}

static mpfr_t r6860419, r6860420, r6860421, r6860422, r6860423, r6860424, r6860425, r6860426, r6860427, r6860428, r6860429, r6860430, r6860431, r6860432, r6860433, r6860434, r6860435, r6860436, r6860437, r6860438, r6860439, r6860440, r6860441, r6860442, r6860443, r6860444;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6860419);
        mpfr_init(r6860420);
        mpfr_init_set_str(r6860421, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6860422);
        mpfr_init(r6860423);
        mpfr_init(r6860424);
        mpfr_init_set_str(r6860425, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6860426);
        mpfr_init_set_str(r6860427, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6860428);
        mpfr_init(r6860429);
        mpfr_init(r6860430);
        mpfr_init(r6860431);
        mpfr_init_set_str(r6860432, "3", 10, MPFR_RNDN);
        mpfr_init(r6860433);
        mpfr_init(r6860434);
        mpfr_init(r6860435);
        mpfr_init_set_str(r6860436, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6860437, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6860438);
        mpfr_init(r6860439);
        mpfr_init(r6860440);
        mpfr_init(r6860441);
        mpfr_init(r6860442);
        mpfr_init(r6860443);
        mpfr_init(r6860444);
}

double f_dm(double x) {
        mpfr_set_d(r6860419, x, MPFR_RNDN);
        mpfr_mul(r6860420, r6860419, r6860419, MPFR_RNDN);
        ;
        mpfr_mul(r6860422, r6860419, r6860421, MPFR_RNDN);
        mpfr_mul(r6860423, r6860420, r6860422, MPFR_RNDN);
        mpfr_mul(r6860424, r6860420, r6860423, MPFR_RNDN);
        ;
        mpfr_mul(r6860426, r6860425, r6860419, MPFR_RNDN);
        ;
        mpfr_mul(r6860428, r6860427, r6860419, MPFR_RNDN);
        mpfr_mul(r6860429, r6860428, r6860420, MPFR_RNDN);
        mpfr_add(r6860430, r6860426, r6860429, MPFR_RNDN);
        mpfr_add(r6860431, r6860424, r6860430, MPFR_RNDN);
        ;
        mpfr_pow(r6860433, r6860419, r6860432, MPFR_RNDN);
        mpfr_mul(r6860434, r6860433, r6860433, MPFR_RNDN);
        mpfr_mul(r6860435, r6860434, r6860419, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6860438, r6860437, r6860419, MPFR_RNDN);
        mpfr_mul(r6860439, r6860419, r6860438, MPFR_RNDN);
        mpfr_sqrt(r6860440, r6860439, MPFR_RNDN);
        mpfr_mul(r6860441, r6860440, r6860440, MPFR_RNDN);
        mpfr_add(r6860442, r6860436, r6860441, MPFR_RNDN);
        mpfr_mul(r6860443, r6860435, r6860442, MPFR_RNDN);
        mpfr_add(r6860444, r6860431, r6860443, MPFR_RNDN);
        return mpfr_get_d(r6860444, MPFR_RNDN);
}

