#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7603293 = -1680.0;
        float r7603294 = x;
        float r7603295 = r7603293 * r7603294;
        float r7603296 = 3360.0;
        float r7603297 = r7603294 * r7603294;
        float r7603298 = r7603297 * r7603294;
        float r7603299 = r7603296 * r7603298;
        float r7603300 = r7603295 + r7603299;
        float r7603301 = -1344.0;
        float r7603302 = r7603298 * r7603294;
        float r7603303 = r7603302 * r7603294;
        float r7603304 = r7603301 * r7603303;
        float r7603305 = r7603300 + r7603304;
        float r7603306 = 128.0;
        float r7603307 = r7603303 * r7603294;
        float r7603308 = r7603307 * r7603294;
        float r7603309 = r7603306 * r7603308;
        float r7603310 = r7603305 + r7603309;
        return r7603310;
}

double f_id(double x) {
        double r7603311 = -1680.0;
        double r7603312 = x;
        double r7603313 = r7603311 * r7603312;
        double r7603314 = 3360.0;
        double r7603315 = r7603312 * r7603312;
        double r7603316 = r7603315 * r7603312;
        double r7603317 = r7603314 * r7603316;
        double r7603318 = r7603313 + r7603317;
        double r7603319 = -1344.0;
        double r7603320 = r7603316 * r7603312;
        double r7603321 = r7603320 * r7603312;
        double r7603322 = r7603319 * r7603321;
        double r7603323 = r7603318 + r7603322;
        double r7603324 = 128.0;
        double r7603325 = r7603321 * r7603312;
        double r7603326 = r7603325 * r7603312;
        double r7603327 = r7603324 * r7603326;
        double r7603328 = r7603323 + r7603327;
        return r7603328;
}


double f_of(float x) {
        float r7603329 = -1680.0;
        float r7603330 = x;
        float r7603331 = r7603329 * r7603330;
        float r7603332 = 3360.0;
        float r7603333 = r7603330 * r7603330;
        float r7603334 = r7603333 * r7603330;
        float r7603335 = r7603332 * r7603334;
        float r7603336 = r7603331 + r7603335;
        float r7603337 = -1344.0;
        float r7603338 = r7603334 * r7603330;
        float r7603339 = r7603338 * r7603330;
        float r7603340 = r7603337 * r7603339;
        float r7603341 = r7603336 + r7603340;
        float r7603342 = 128.0;
        float r7603343 = 3;
        float r7603344 = pow(r7603330, r7603343);
        float r7603345 = r7603344 * r7603330;
        float r7603346 = r7603345 * r7603330;
        float r7603347 = r7603346 * r7603330;
        float r7603348 = r7603347 * r7603330;
        float r7603349 = r7603342 * r7603348;
        float r7603350 = r7603341 + r7603349;
        return r7603350;
}

double f_od(double x) {
        double r7603351 = -1680.0;
        double r7603352 = x;
        double r7603353 = r7603351 * r7603352;
        double r7603354 = 3360.0;
        double r7603355 = r7603352 * r7603352;
        double r7603356 = r7603355 * r7603352;
        double r7603357 = r7603354 * r7603356;
        double r7603358 = r7603353 + r7603357;
        double r7603359 = -1344.0;
        double r7603360 = r7603356 * r7603352;
        double r7603361 = r7603360 * r7603352;
        double r7603362 = r7603359 * r7603361;
        double r7603363 = r7603358 + r7603362;
        double r7603364 = 128.0;
        double r7603365 = 3;
        double r7603366 = pow(r7603352, r7603365);
        double r7603367 = r7603366 * r7603352;
        double r7603368 = r7603367 * r7603352;
        double r7603369 = r7603368 * r7603352;
        double r7603370 = r7603369 * r7603352;
        double r7603371 = r7603364 * r7603370;
        double r7603372 = r7603363 + r7603371;
        return r7603372;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603373, r7603374, r7603375, r7603376, r7603377, r7603378, r7603379, r7603380, r7603381, r7603382, r7603383, r7603384, r7603385, r7603386, r7603387, r7603388, r7603389, r7603390;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603373, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7603374);
        mpfr_init(r7603375);
        mpfr_init_set_str(r7603376, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7603377);
        mpfr_init(r7603378);
        mpfr_init(r7603379);
        mpfr_init(r7603380);
        mpfr_init_set_str(r7603381, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7603382);
        mpfr_init(r7603383);
        mpfr_init(r7603384);
        mpfr_init(r7603385);
        mpfr_init_set_str(r7603386, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7603387);
        mpfr_init(r7603388);
        mpfr_init(r7603389);
        mpfr_init(r7603390);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7603374, x, MPFR_RNDN);
        mpfr_mul(r7603375, r7603373, r7603374, MPFR_RNDN);
        ;
        mpfr_mul(r7603377, r7603374, r7603374, MPFR_RNDN);
        mpfr_mul(r7603378, r7603377, r7603374, MPFR_RNDN);
        mpfr_mul(r7603379, r7603376, r7603378, MPFR_RNDN);
        mpfr_add(r7603380, r7603375, r7603379, MPFR_RNDN);
        ;
        mpfr_mul(r7603382, r7603378, r7603374, MPFR_RNDN);
        mpfr_mul(r7603383, r7603382, r7603374, MPFR_RNDN);
        mpfr_mul(r7603384, r7603381, r7603383, MPFR_RNDN);
        mpfr_add(r7603385, r7603380, r7603384, MPFR_RNDN);
        ;
        mpfr_mul(r7603387, r7603383, r7603374, MPFR_RNDN);
        mpfr_mul(r7603388, r7603387, r7603374, MPFR_RNDN);
        mpfr_mul(r7603389, r7603386, r7603388, MPFR_RNDN);
        mpfr_add(r7603390, r7603385, r7603389, MPFR_RNDN);
        return mpfr_get_d(r7603390, MPFR_RNDN);
}

static mpfr_t r7603391, r7603392, r7603393, r7603394, r7603395, r7603396, r7603397, r7603398, r7603399, r7603400, r7603401, r7603402, r7603403, r7603404, r7603405, r7603406, r7603407, r7603408, r7603409, r7603410, r7603411, r7603412;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603391, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7603392);
        mpfr_init(r7603393);
        mpfr_init_set_str(r7603394, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7603395);
        mpfr_init(r7603396);
        mpfr_init(r7603397);
        mpfr_init(r7603398);
        mpfr_init_set_str(r7603399, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7603400);
        mpfr_init(r7603401);
        mpfr_init(r7603402);
        mpfr_init(r7603403);
        mpfr_init_set_str(r7603404, "128.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603405, "3", 10, MPFR_RNDN);
        mpfr_init(r7603406);
        mpfr_init(r7603407);
        mpfr_init(r7603408);
        mpfr_init(r7603409);
        mpfr_init(r7603410);
        mpfr_init(r7603411);
        mpfr_init(r7603412);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7603392, x, MPFR_RNDN);
        mpfr_mul(r7603393, r7603391, r7603392, MPFR_RNDN);
        ;
        mpfr_mul(r7603395, r7603392, r7603392, MPFR_RNDN);
        mpfr_mul(r7603396, r7603395, r7603392, MPFR_RNDN);
        mpfr_mul(r7603397, r7603394, r7603396, MPFR_RNDN);
        mpfr_add(r7603398, r7603393, r7603397, MPFR_RNDN);
        ;
        mpfr_mul(r7603400, r7603396, r7603392, MPFR_RNDN);
        mpfr_mul(r7603401, r7603400, r7603392, MPFR_RNDN);
        mpfr_mul(r7603402, r7603399, r7603401, MPFR_RNDN);
        mpfr_add(r7603403, r7603398, r7603402, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7603406, r7603392, r7603405, MPFR_RNDN);
        mpfr_mul(r7603407, r7603406, r7603392, MPFR_RNDN);
        mpfr_mul(r7603408, r7603407, r7603392, MPFR_RNDN);
        mpfr_mul(r7603409, r7603408, r7603392, MPFR_RNDN);
        mpfr_mul(r7603410, r7603409, r7603392, MPFR_RNDN);
        mpfr_mul(r7603411, r7603404, r7603410, MPFR_RNDN);
        mpfr_add(r7603412, r7603403, r7603411, MPFR_RNDN);
        return mpfr_get_d(r7603412, MPFR_RNDN);
}

static mpfr_t r7603413, r7603414, r7603415, r7603416, r7603417, r7603418, r7603419, r7603420, r7603421, r7603422, r7603423, r7603424, r7603425, r7603426, r7603427, r7603428, r7603429, r7603430, r7603431, r7603432, r7603433, r7603434;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7603413, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7603414);
        mpfr_init(r7603415);
        mpfr_init_set_str(r7603416, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7603417);
        mpfr_init(r7603418);
        mpfr_init(r7603419);
        mpfr_init(r7603420);
        mpfr_init_set_str(r7603421, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7603422);
        mpfr_init(r7603423);
        mpfr_init(r7603424);
        mpfr_init(r7603425);
        mpfr_init_set_str(r7603426, "128.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603427, "3", 10, MPFR_RNDN);
        mpfr_init(r7603428);
        mpfr_init(r7603429);
        mpfr_init(r7603430);
        mpfr_init(r7603431);
        mpfr_init(r7603432);
        mpfr_init(r7603433);
        mpfr_init(r7603434);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7603414, x, MPFR_RNDN);
        mpfr_mul(r7603415, r7603413, r7603414, MPFR_RNDN);
        ;
        mpfr_mul(r7603417, r7603414, r7603414, MPFR_RNDN);
        mpfr_mul(r7603418, r7603417, r7603414, MPFR_RNDN);
        mpfr_mul(r7603419, r7603416, r7603418, MPFR_RNDN);
        mpfr_add(r7603420, r7603415, r7603419, MPFR_RNDN);
        ;
        mpfr_mul(r7603422, r7603418, r7603414, MPFR_RNDN);
        mpfr_mul(r7603423, r7603422, r7603414, MPFR_RNDN);
        mpfr_mul(r7603424, r7603421, r7603423, MPFR_RNDN);
        mpfr_add(r7603425, r7603420, r7603424, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7603428, r7603414, r7603427, MPFR_RNDN);
        mpfr_mul(r7603429, r7603428, r7603414, MPFR_RNDN);
        mpfr_mul(r7603430, r7603429, r7603414, MPFR_RNDN);
        mpfr_mul(r7603431, r7603430, r7603414, MPFR_RNDN);
        mpfr_mul(r7603432, r7603431, r7603414, MPFR_RNDN);
        mpfr_mul(r7603433, r7603426, r7603432, MPFR_RNDN);
        mpfr_add(r7603434, r7603425, r7603433, MPFR_RNDN);
        return mpfr_get_d(r7603434, MPFR_RNDN);
}

