#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7082333 = -30240.0;
        float r7082334 = 302400.0;
        float r7082335 = x;
        float r7082336 = r7082335 * r7082335;
        float r7082337 = r7082334 * r7082336;
        float r7082338 = r7082333 + r7082337;
        float r7082339 = -403200.0;
        float r7082340 = r7082336 * r7082335;
        float r7082341 = r7082340 * r7082335;
        float r7082342 = r7082339 * r7082341;
        float r7082343 = r7082338 + r7082342;
        float r7082344 = 161280.0;
        float r7082345 = r7082341 * r7082335;
        float r7082346 = r7082345 * r7082335;
        float r7082347 = r7082344 * r7082346;
        float r7082348 = r7082343 + r7082347;
        float r7082349 = -23040.0;
        float r7082350 = r7082346 * r7082335;
        float r7082351 = r7082350 * r7082335;
        float r7082352 = r7082349 * r7082351;
        float r7082353 = r7082348 + r7082352;
        float r7082354 = 1024.0;
        float r7082355 = r7082351 * r7082335;
        float r7082356 = r7082355 * r7082335;
        float r7082357 = r7082354 * r7082356;
        float r7082358 = r7082353 + r7082357;
        return r7082358;
}

double f_id(double x) {
        double r7082359 = -30240.0;
        double r7082360 = 302400.0;
        double r7082361 = x;
        double r7082362 = r7082361 * r7082361;
        double r7082363 = r7082360 * r7082362;
        double r7082364 = r7082359 + r7082363;
        double r7082365 = -403200.0;
        double r7082366 = r7082362 * r7082361;
        double r7082367 = r7082366 * r7082361;
        double r7082368 = r7082365 * r7082367;
        double r7082369 = r7082364 + r7082368;
        double r7082370 = 161280.0;
        double r7082371 = r7082367 * r7082361;
        double r7082372 = r7082371 * r7082361;
        double r7082373 = r7082370 * r7082372;
        double r7082374 = r7082369 + r7082373;
        double r7082375 = -23040.0;
        double r7082376 = r7082372 * r7082361;
        double r7082377 = r7082376 * r7082361;
        double r7082378 = r7082375 * r7082377;
        double r7082379 = r7082374 + r7082378;
        double r7082380 = 1024.0;
        double r7082381 = r7082377 * r7082361;
        double r7082382 = r7082381 * r7082361;
        double r7082383 = r7082380 * r7082382;
        double r7082384 = r7082379 + r7082383;
        return r7082384;
}


double f_of(float x) {
        float r7082385 = x;
        float r7082386 = r7082385 * r7082385;
        float r7082387 = r7082386 * r7082386;
        float r7082388 = r7082387 * r7082387;
        float r7082389 = -23040.0;
        float r7082390 = 1024.0;
        float r7082391 = r7082390 * r7082385;
        float r7082392 = r7082385 * r7082391;
        float r7082393 = r7082389 + r7082392;
        float r7082394 = r7082388 * r7082393;
        float r7082395 = -403200.0;
        float r7082396 = 161280.0;
        float r7082397 = r7082386 * r7082396;
        float r7082398 = r7082395 + r7082397;
        float r7082399 = r7082387 * r7082398;
        float r7082400 = -30240.0;
        float r7082401 = 302400.0;
        float r7082402 = r7082385 * r7082401;
        float r7082403 = r7082385 * r7082402;
        float r7082404 = r7082400 + r7082403;
        float r7082405 = r7082399 + r7082404;
        float r7082406 = r7082394 + r7082405;
        return r7082406;
}

double f_od(double x) {
        double r7082407 = x;
        double r7082408 = r7082407 * r7082407;
        double r7082409 = r7082408 * r7082408;
        double r7082410 = r7082409 * r7082409;
        double r7082411 = -23040.0;
        double r7082412 = 1024.0;
        double r7082413 = r7082412 * r7082407;
        double r7082414 = r7082407 * r7082413;
        double r7082415 = r7082411 + r7082414;
        double r7082416 = r7082410 * r7082415;
        double r7082417 = -403200.0;
        double r7082418 = 161280.0;
        double r7082419 = r7082408 * r7082418;
        double r7082420 = r7082417 + r7082419;
        double r7082421 = r7082409 * r7082420;
        double r7082422 = -30240.0;
        double r7082423 = 302400.0;
        double r7082424 = r7082407 * r7082423;
        double r7082425 = r7082407 * r7082424;
        double r7082426 = r7082422 + r7082425;
        double r7082427 = r7082421 + r7082426;
        double r7082428 = r7082416 + r7082427;
        return r7082428;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7082429, r7082430, r7082431, r7082432, r7082433, r7082434, r7082435, r7082436, r7082437, r7082438, r7082439, r7082440, r7082441, r7082442, r7082443, r7082444, r7082445, r7082446, r7082447, r7082448, r7082449, r7082450, r7082451, r7082452, r7082453, r7082454;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7082429, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082430, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7082431);
        mpfr_init(r7082432);
        mpfr_init(r7082433);
        mpfr_init(r7082434);
        mpfr_init_set_str(r7082435, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7082436);
        mpfr_init(r7082437);
        mpfr_init(r7082438);
        mpfr_init(r7082439);
        mpfr_init_set_str(r7082440, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7082441);
        mpfr_init(r7082442);
        mpfr_init(r7082443);
        mpfr_init(r7082444);
        mpfr_init_set_str(r7082445, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7082446);
        mpfr_init(r7082447);
        mpfr_init(r7082448);
        mpfr_init(r7082449);
        mpfr_init_set_str(r7082450, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7082451);
        mpfr_init(r7082452);
        mpfr_init(r7082453);
        mpfr_init(r7082454);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7082431, x, MPFR_RNDN);
        mpfr_mul(r7082432, r7082431, r7082431, MPFR_RNDN);
        mpfr_mul(r7082433, r7082430, r7082432, MPFR_RNDN);
        mpfr_add(r7082434, r7082429, r7082433, MPFR_RNDN);
        ;
        mpfr_mul(r7082436, r7082432, r7082431, MPFR_RNDN);
        mpfr_mul(r7082437, r7082436, r7082431, MPFR_RNDN);
        mpfr_mul(r7082438, r7082435, r7082437, MPFR_RNDN);
        mpfr_add(r7082439, r7082434, r7082438, MPFR_RNDN);
        ;
        mpfr_mul(r7082441, r7082437, r7082431, MPFR_RNDN);
        mpfr_mul(r7082442, r7082441, r7082431, MPFR_RNDN);
        mpfr_mul(r7082443, r7082440, r7082442, MPFR_RNDN);
        mpfr_add(r7082444, r7082439, r7082443, MPFR_RNDN);
        ;
        mpfr_mul(r7082446, r7082442, r7082431, MPFR_RNDN);
        mpfr_mul(r7082447, r7082446, r7082431, MPFR_RNDN);
        mpfr_mul(r7082448, r7082445, r7082447, MPFR_RNDN);
        mpfr_add(r7082449, r7082444, r7082448, MPFR_RNDN);
        ;
        mpfr_mul(r7082451, r7082447, r7082431, MPFR_RNDN);
        mpfr_mul(r7082452, r7082451, r7082431, MPFR_RNDN);
        mpfr_mul(r7082453, r7082450, r7082452, MPFR_RNDN);
        mpfr_add(r7082454, r7082449, r7082453, MPFR_RNDN);
        return mpfr_get_d(r7082454, MPFR_RNDN);
}

static mpfr_t r7082455, r7082456, r7082457, r7082458, r7082459, r7082460, r7082461, r7082462, r7082463, r7082464, r7082465, r7082466, r7082467, r7082468, r7082469, r7082470, r7082471, r7082472, r7082473, r7082474, r7082475, r7082476;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7082455);
        mpfr_init(r7082456);
        mpfr_init(r7082457);
        mpfr_init(r7082458);
        mpfr_init_set_str(r7082459, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082460, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7082461);
        mpfr_init(r7082462);
        mpfr_init(r7082463);
        mpfr_init(r7082464);
        mpfr_init_set_str(r7082465, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082466, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7082467);
        mpfr_init(r7082468);
        mpfr_init(r7082469);
        mpfr_init_set_str(r7082470, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082471, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7082472);
        mpfr_init(r7082473);
        mpfr_init(r7082474);
        mpfr_init(r7082475);
        mpfr_init(r7082476);
}

double f_fm(double x) {
        mpfr_set_d(r7082455, x, MPFR_RNDN);
        mpfr_mul(r7082456, r7082455, r7082455, MPFR_RNDN);
        mpfr_mul(r7082457, r7082456, r7082456, MPFR_RNDN);
        mpfr_mul(r7082458, r7082457, r7082457, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7082461, r7082460, r7082455, MPFR_RNDN);
        mpfr_mul(r7082462, r7082455, r7082461, MPFR_RNDN);
        mpfr_add(r7082463, r7082459, r7082462, MPFR_RNDN);
        mpfr_mul(r7082464, r7082458, r7082463, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7082467, r7082456, r7082466, MPFR_RNDN);
        mpfr_add(r7082468, r7082465, r7082467, MPFR_RNDN);
        mpfr_mul(r7082469, r7082457, r7082468, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7082472, r7082455, r7082471, MPFR_RNDN);
        mpfr_mul(r7082473, r7082455, r7082472, MPFR_RNDN);
        mpfr_add(r7082474, r7082470, r7082473, MPFR_RNDN);
        mpfr_add(r7082475, r7082469, r7082474, MPFR_RNDN);
        mpfr_add(r7082476, r7082464, r7082475, MPFR_RNDN);
        return mpfr_get_d(r7082476, MPFR_RNDN);
}

static mpfr_t r7082477, r7082478, r7082479, r7082480, r7082481, r7082482, r7082483, r7082484, r7082485, r7082486, r7082487, r7082488, r7082489, r7082490, r7082491, r7082492, r7082493, r7082494, r7082495, r7082496, r7082497, r7082498;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7082477);
        mpfr_init(r7082478);
        mpfr_init(r7082479);
        mpfr_init(r7082480);
        mpfr_init_set_str(r7082481, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082482, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7082483);
        mpfr_init(r7082484);
        mpfr_init(r7082485);
        mpfr_init(r7082486);
        mpfr_init_set_str(r7082487, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082488, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7082489);
        mpfr_init(r7082490);
        mpfr_init(r7082491);
        mpfr_init_set_str(r7082492, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7082493, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7082494);
        mpfr_init(r7082495);
        mpfr_init(r7082496);
        mpfr_init(r7082497);
        mpfr_init(r7082498);
}

double f_dm(double x) {
        mpfr_set_d(r7082477, x, MPFR_RNDN);
        mpfr_mul(r7082478, r7082477, r7082477, MPFR_RNDN);
        mpfr_mul(r7082479, r7082478, r7082478, MPFR_RNDN);
        mpfr_mul(r7082480, r7082479, r7082479, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7082483, r7082482, r7082477, MPFR_RNDN);
        mpfr_mul(r7082484, r7082477, r7082483, MPFR_RNDN);
        mpfr_add(r7082485, r7082481, r7082484, MPFR_RNDN);
        mpfr_mul(r7082486, r7082480, r7082485, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7082489, r7082478, r7082488, MPFR_RNDN);
        mpfr_add(r7082490, r7082487, r7082489, MPFR_RNDN);
        mpfr_mul(r7082491, r7082479, r7082490, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7082494, r7082477, r7082493, MPFR_RNDN);
        mpfr_mul(r7082495, r7082477, r7082494, MPFR_RNDN);
        mpfr_add(r7082496, r7082492, r7082495, MPFR_RNDN);
        mpfr_add(r7082497, r7082491, r7082496, MPFR_RNDN);
        mpfr_add(r7082498, r7082486, r7082497, MPFR_RNDN);
        return mpfr_get_d(r7082498, MPFR_RNDN);
}

