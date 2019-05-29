#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6176281 = 2.460938;
        float r6176282 = x;
        float r6176283 = r6176281 * r6176282;
        float r6176284 = -36.09375;
        float r6176285 = r6176282 * r6176282;
        float r6176286 = r6176285 * r6176282;
        float r6176287 = r6176284 * r6176286;
        float r6176288 = r6176283 + r6176287;
        float r6176289 = 140.765625;
        float r6176290 = r6176286 * r6176282;
        float r6176291 = r6176290 * r6176282;
        float r6176292 = r6176289 * r6176291;
        float r6176293 = r6176288 + r6176292;
        float r6176294 = -201.09375;
        float r6176295 = r6176291 * r6176282;
        float r6176296 = r6176295 * r6176282;
        float r6176297 = r6176294 * r6176296;
        float r6176298 = r6176293 + r6176297;
        float r6176299 = 94.960938;
        float r6176300 = r6176296 * r6176282;
        float r6176301 = r6176300 * r6176282;
        float r6176302 = r6176299 * r6176301;
        float r6176303 = r6176298 + r6176302;
        return r6176303;
}

double f_id(double x) {
        double r6176304 = 2.460938;
        double r6176305 = x;
        double r6176306 = r6176304 * r6176305;
        double r6176307 = -36.09375;
        double r6176308 = r6176305 * r6176305;
        double r6176309 = r6176308 * r6176305;
        double r6176310 = r6176307 * r6176309;
        double r6176311 = r6176306 + r6176310;
        double r6176312 = 140.765625;
        double r6176313 = r6176309 * r6176305;
        double r6176314 = r6176313 * r6176305;
        double r6176315 = r6176312 * r6176314;
        double r6176316 = r6176311 + r6176315;
        double r6176317 = -201.09375;
        double r6176318 = r6176314 * r6176305;
        double r6176319 = r6176318 * r6176305;
        double r6176320 = r6176317 * r6176319;
        double r6176321 = r6176316 + r6176320;
        double r6176322 = 94.960938;
        double r6176323 = r6176319 * r6176305;
        double r6176324 = r6176323 * r6176305;
        double r6176325 = r6176322 * r6176324;
        double r6176326 = r6176321 + r6176325;
        return r6176326;
}


double f_of(float x) {
        float r6176327 = x;
        float r6176328 = r6176327 * r6176327;
        float r6176329 = 140.765625;
        float r6176330 = r6176327 * r6176329;
        float r6176331 = r6176328 * r6176330;
        float r6176332 = r6176328 * r6176331;
        float r6176333 = 2.460938;
        float r6176334 = r6176333 * r6176327;
        float r6176335 = -36.09375;
        float r6176336 = r6176335 * r6176327;
        float r6176337 = r6176336 * r6176328;
        float r6176338 = r6176334 + r6176337;
        float r6176339 = r6176332 + r6176338;
        float r6176340 = 3;
        float r6176341 = pow(r6176327, r6176340);
        float r6176342 = r6176341 * r6176341;
        float r6176343 = r6176342 * r6176327;
        float r6176344 = -201.09375;
        float r6176345 = 94.960938;
        float r6176346 = r6176345 * r6176327;
        float r6176347 = r6176327 * r6176346;
        float r6176348 = r6176344 + r6176347;
        float r6176349 = r6176343 * r6176348;
        float r6176350 = r6176339 + r6176349;
        return r6176350;
}

double f_od(double x) {
        double r6176351 = x;
        double r6176352 = r6176351 * r6176351;
        double r6176353 = 140.765625;
        double r6176354 = r6176351 * r6176353;
        double r6176355 = r6176352 * r6176354;
        double r6176356 = r6176352 * r6176355;
        double r6176357 = 2.460938;
        double r6176358 = r6176357 * r6176351;
        double r6176359 = -36.09375;
        double r6176360 = r6176359 * r6176351;
        double r6176361 = r6176360 * r6176352;
        double r6176362 = r6176358 + r6176361;
        double r6176363 = r6176356 + r6176362;
        double r6176364 = 3;
        double r6176365 = pow(r6176351, r6176364);
        double r6176366 = r6176365 * r6176365;
        double r6176367 = r6176366 * r6176351;
        double r6176368 = -201.09375;
        double r6176369 = 94.960938;
        double r6176370 = r6176369 * r6176351;
        double r6176371 = r6176351 * r6176370;
        double r6176372 = r6176368 + r6176371;
        double r6176373 = r6176367 * r6176372;
        double r6176374 = r6176363 + r6176373;
        return r6176374;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6176375, r6176376, r6176377, r6176378, r6176379, r6176380, r6176381, r6176382, r6176383, r6176384, r6176385, r6176386, r6176387, r6176388, r6176389, r6176390, r6176391, r6176392, r6176393, r6176394, r6176395, r6176396, r6176397;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6176375, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6176376);
        mpfr_init(r6176377);
        mpfr_init_set_str(r6176378, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6176379);
        mpfr_init(r6176380);
        mpfr_init(r6176381);
        mpfr_init(r6176382);
        mpfr_init_set_str(r6176383, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6176384);
        mpfr_init(r6176385);
        mpfr_init(r6176386);
        mpfr_init(r6176387);
        mpfr_init_set_str(r6176388, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r6176389);
        mpfr_init(r6176390);
        mpfr_init(r6176391);
        mpfr_init(r6176392);
        mpfr_init_set_str(r6176393, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6176394);
        mpfr_init(r6176395);
        mpfr_init(r6176396);
        mpfr_init(r6176397);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6176376, x, MPFR_RNDN);
        mpfr_mul(r6176377, r6176375, r6176376, MPFR_RNDN);
        ;
        mpfr_mul(r6176379, r6176376, r6176376, MPFR_RNDN);
        mpfr_mul(r6176380, r6176379, r6176376, MPFR_RNDN);
        mpfr_mul(r6176381, r6176378, r6176380, MPFR_RNDN);
        mpfr_add(r6176382, r6176377, r6176381, MPFR_RNDN);
        ;
        mpfr_mul(r6176384, r6176380, r6176376, MPFR_RNDN);
        mpfr_mul(r6176385, r6176384, r6176376, MPFR_RNDN);
        mpfr_mul(r6176386, r6176383, r6176385, MPFR_RNDN);
        mpfr_add(r6176387, r6176382, r6176386, MPFR_RNDN);
        ;
        mpfr_mul(r6176389, r6176385, r6176376, MPFR_RNDN);
        mpfr_mul(r6176390, r6176389, r6176376, MPFR_RNDN);
        mpfr_mul(r6176391, r6176388, r6176390, MPFR_RNDN);
        mpfr_add(r6176392, r6176387, r6176391, MPFR_RNDN);
        ;
        mpfr_mul(r6176394, r6176390, r6176376, MPFR_RNDN);
        mpfr_mul(r6176395, r6176394, r6176376, MPFR_RNDN);
        mpfr_mul(r6176396, r6176393, r6176395, MPFR_RNDN);
        mpfr_add(r6176397, r6176392, r6176396, MPFR_RNDN);
        return mpfr_get_d(r6176397, MPFR_RNDN);
}

static mpfr_t r6176398, r6176399, r6176400, r6176401, r6176402, r6176403, r6176404, r6176405, r6176406, r6176407, r6176408, r6176409, r6176410, r6176411, r6176412, r6176413, r6176414, r6176415, r6176416, r6176417, r6176418, r6176419, r6176420, r6176421;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6176398);
        mpfr_init(r6176399);
        mpfr_init_set_str(r6176400, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6176401);
        mpfr_init(r6176402);
        mpfr_init(r6176403);
        mpfr_init_set_str(r6176404, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6176405);
        mpfr_init_set_str(r6176406, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6176407);
        mpfr_init(r6176408);
        mpfr_init(r6176409);
        mpfr_init(r6176410);
        mpfr_init_set_str(r6176411, "3", 10, MPFR_RNDN);
        mpfr_init(r6176412);
        mpfr_init(r6176413);
        mpfr_init(r6176414);
        mpfr_init_set_str(r6176415, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176416, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6176417);
        mpfr_init(r6176418);
        mpfr_init(r6176419);
        mpfr_init(r6176420);
        mpfr_init(r6176421);
}

double f_fm(double x) {
        mpfr_set_d(r6176398, x, MPFR_RNDN);
        mpfr_mul(r6176399, r6176398, r6176398, MPFR_RNDN);
        ;
        mpfr_mul(r6176401, r6176398, r6176400, MPFR_RNDN);
        mpfr_mul(r6176402, r6176399, r6176401, MPFR_RNDN);
        mpfr_mul(r6176403, r6176399, r6176402, MPFR_RNDN);
        ;
        mpfr_mul(r6176405, r6176404, r6176398, MPFR_RNDN);
        ;
        mpfr_mul(r6176407, r6176406, r6176398, MPFR_RNDN);
        mpfr_mul(r6176408, r6176407, r6176399, MPFR_RNDN);
        mpfr_add(r6176409, r6176405, r6176408, MPFR_RNDN);
        mpfr_add(r6176410, r6176403, r6176409, MPFR_RNDN);
        ;
        mpfr_pow(r6176412, r6176398, r6176411, MPFR_RNDN);
        mpfr_mul(r6176413, r6176412, r6176412, MPFR_RNDN);
        mpfr_mul(r6176414, r6176413, r6176398, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6176417, r6176416, r6176398, MPFR_RNDN);
        mpfr_mul(r6176418, r6176398, r6176417, MPFR_RNDN);
        mpfr_add(r6176419, r6176415, r6176418, MPFR_RNDN);
        mpfr_mul(r6176420, r6176414, r6176419, MPFR_RNDN);
        mpfr_add(r6176421, r6176410, r6176420, MPFR_RNDN);
        return mpfr_get_d(r6176421, MPFR_RNDN);
}

static mpfr_t r6176422, r6176423, r6176424, r6176425, r6176426, r6176427, r6176428, r6176429, r6176430, r6176431, r6176432, r6176433, r6176434, r6176435, r6176436, r6176437, r6176438, r6176439, r6176440, r6176441, r6176442, r6176443, r6176444, r6176445;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6176422);
        mpfr_init(r6176423);
        mpfr_init_set_str(r6176424, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r6176425);
        mpfr_init(r6176426);
        mpfr_init(r6176427);
        mpfr_init_set_str(r6176428, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r6176429);
        mpfr_init_set_str(r6176430, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r6176431);
        mpfr_init(r6176432);
        mpfr_init(r6176433);
        mpfr_init(r6176434);
        mpfr_init_set_str(r6176435, "3", 10, MPFR_RNDN);
        mpfr_init(r6176436);
        mpfr_init(r6176437);
        mpfr_init(r6176438);
        mpfr_init_set_str(r6176439, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6176440, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r6176441);
        mpfr_init(r6176442);
        mpfr_init(r6176443);
        mpfr_init(r6176444);
        mpfr_init(r6176445);
}

double f_dm(double x) {
        mpfr_set_d(r6176422, x, MPFR_RNDN);
        mpfr_mul(r6176423, r6176422, r6176422, MPFR_RNDN);
        ;
        mpfr_mul(r6176425, r6176422, r6176424, MPFR_RNDN);
        mpfr_mul(r6176426, r6176423, r6176425, MPFR_RNDN);
        mpfr_mul(r6176427, r6176423, r6176426, MPFR_RNDN);
        ;
        mpfr_mul(r6176429, r6176428, r6176422, MPFR_RNDN);
        ;
        mpfr_mul(r6176431, r6176430, r6176422, MPFR_RNDN);
        mpfr_mul(r6176432, r6176431, r6176423, MPFR_RNDN);
        mpfr_add(r6176433, r6176429, r6176432, MPFR_RNDN);
        mpfr_add(r6176434, r6176427, r6176433, MPFR_RNDN);
        ;
        mpfr_pow(r6176436, r6176422, r6176435, MPFR_RNDN);
        mpfr_mul(r6176437, r6176436, r6176436, MPFR_RNDN);
        mpfr_mul(r6176438, r6176437, r6176422, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6176441, r6176440, r6176422, MPFR_RNDN);
        mpfr_mul(r6176442, r6176422, r6176441, MPFR_RNDN);
        mpfr_add(r6176443, r6176439, r6176442, MPFR_RNDN);
        mpfr_mul(r6176444, r6176438, r6176443, MPFR_RNDN);
        mpfr_add(r6176445, r6176434, r6176444, MPFR_RNDN);
        return mpfr_get_d(r6176445, MPFR_RNDN);
}

