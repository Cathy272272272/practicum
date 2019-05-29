#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r9959360 = 30240.0;
        float r9959361 = x;
        float r9959362 = r9959360 * r9959361;
        float r9959363 = -80640.0;
        float r9959364 = r9959361 * r9959361;
        float r9959365 = r9959364 * r9959361;
        float r9959366 = r9959363 * r9959365;
        float r9959367 = r9959362 + r9959366;
        float r9959368 = 48384.0;
        float r9959369 = r9959365 * r9959361;
        float r9959370 = r9959369 * r9959361;
        float r9959371 = r9959368 * r9959370;
        float r9959372 = r9959367 + r9959371;
        float r9959373 = -9216.0;
        float r9959374 = r9959370 * r9959361;
        float r9959375 = r9959374 * r9959361;
        float r9959376 = r9959373 * r9959375;
        float r9959377 = r9959372 + r9959376;
        float r9959378 = 512.0;
        float r9959379 = r9959375 * r9959361;
        float r9959380 = r9959379 * r9959361;
        float r9959381 = r9959378 * r9959380;
        float r9959382 = r9959377 + r9959381;
        return r9959382;
}

double f_id(double x) {
        double r9959383 = 30240.0;
        double r9959384 = x;
        double r9959385 = r9959383 * r9959384;
        double r9959386 = -80640.0;
        double r9959387 = r9959384 * r9959384;
        double r9959388 = r9959387 * r9959384;
        double r9959389 = r9959386 * r9959388;
        double r9959390 = r9959385 + r9959389;
        double r9959391 = 48384.0;
        double r9959392 = r9959388 * r9959384;
        double r9959393 = r9959392 * r9959384;
        double r9959394 = r9959391 * r9959393;
        double r9959395 = r9959390 + r9959394;
        double r9959396 = -9216.0;
        double r9959397 = r9959393 * r9959384;
        double r9959398 = r9959397 * r9959384;
        double r9959399 = r9959396 * r9959398;
        double r9959400 = r9959395 + r9959399;
        double r9959401 = 512.0;
        double r9959402 = r9959398 * r9959384;
        double r9959403 = r9959402 * r9959384;
        double r9959404 = r9959401 * r9959403;
        double r9959405 = r9959400 + r9959404;
        return r9959405;
}


double f_of(float x) {
        float r9959406 = x;
        float r9959407 = r9959406 * r9959406;
        float r9959408 = 48384.0;
        float r9959409 = r9959408 * r9959406;
        float r9959410 = r9959407 * r9959409;
        float r9959411 = -80640.0;
        float r9959412 = r9959406 * r9959411;
        float r9959413 = r9959410 + r9959412;
        float r9959414 = r9959407 * r9959413;
        float r9959415 = 9;
        float r9959416 = pow(r9959406, r9959415);
        float r9959417 = 512.0;
        float r9959418 = r9959416 * r9959417;
        float r9959419 = 30240.0;
        float r9959420 = r9959406 * r9959419;
        float r9959421 = 9216.0;
        float r9959422 = 7;
        float r9959423 = pow(r9959406, r9959422);
        float r9959424 = r9959421 * r9959423;
        float r9959425 = r9959420 - r9959424;
        float r9959426 = r9959418 + r9959425;
        float r9959427 = r9959414 + r9959426;
        return r9959427;
}

double f_od(double x) {
        double r9959428 = x;
        double r9959429 = r9959428 * r9959428;
        double r9959430 = 48384.0;
        double r9959431 = r9959430 * r9959428;
        double r9959432 = r9959429 * r9959431;
        double r9959433 = -80640.0;
        double r9959434 = r9959428 * r9959433;
        double r9959435 = r9959432 + r9959434;
        double r9959436 = r9959429 * r9959435;
        double r9959437 = 9;
        double r9959438 = pow(r9959428, r9959437);
        double r9959439 = 512.0;
        double r9959440 = r9959438 * r9959439;
        double r9959441 = 30240.0;
        double r9959442 = r9959428 * r9959441;
        double r9959443 = 9216.0;
        double r9959444 = 7;
        double r9959445 = pow(r9959428, r9959444);
        double r9959446 = r9959443 * r9959445;
        double r9959447 = r9959442 - r9959446;
        double r9959448 = r9959440 + r9959447;
        double r9959449 = r9959436 + r9959448;
        return r9959449;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9959450, r9959451, r9959452, r9959453, r9959454, r9959455, r9959456, r9959457, r9959458, r9959459, r9959460, r9959461, r9959462, r9959463, r9959464, r9959465, r9959466, r9959467, r9959468, r9959469, r9959470, r9959471, r9959472;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9959450, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9959451);
        mpfr_init(r9959452);
        mpfr_init_set_str(r9959453, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9959454);
        mpfr_init(r9959455);
        mpfr_init(r9959456);
        mpfr_init(r9959457);
        mpfr_init_set_str(r9959458, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9959459);
        mpfr_init(r9959460);
        mpfr_init(r9959461);
        mpfr_init(r9959462);
        mpfr_init_set_str(r9959463, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9959464);
        mpfr_init(r9959465);
        mpfr_init(r9959466);
        mpfr_init(r9959467);
        mpfr_init_set_str(r9959468, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9959469);
        mpfr_init(r9959470);
        mpfr_init(r9959471);
        mpfr_init(r9959472);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9959451, x, MPFR_RNDN);
        mpfr_mul(r9959452, r9959450, r9959451, MPFR_RNDN);
        ;
        mpfr_mul(r9959454, r9959451, r9959451, MPFR_RNDN);
        mpfr_mul(r9959455, r9959454, r9959451, MPFR_RNDN);
        mpfr_mul(r9959456, r9959453, r9959455, MPFR_RNDN);
        mpfr_add(r9959457, r9959452, r9959456, MPFR_RNDN);
        ;
        mpfr_mul(r9959459, r9959455, r9959451, MPFR_RNDN);
        mpfr_mul(r9959460, r9959459, r9959451, MPFR_RNDN);
        mpfr_mul(r9959461, r9959458, r9959460, MPFR_RNDN);
        mpfr_add(r9959462, r9959457, r9959461, MPFR_RNDN);
        ;
        mpfr_mul(r9959464, r9959460, r9959451, MPFR_RNDN);
        mpfr_mul(r9959465, r9959464, r9959451, MPFR_RNDN);
        mpfr_mul(r9959466, r9959463, r9959465, MPFR_RNDN);
        mpfr_add(r9959467, r9959462, r9959466, MPFR_RNDN);
        ;
        mpfr_mul(r9959469, r9959465, r9959451, MPFR_RNDN);
        mpfr_mul(r9959470, r9959469, r9959451, MPFR_RNDN);
        mpfr_mul(r9959471, r9959468, r9959470, MPFR_RNDN);
        mpfr_add(r9959472, r9959467, r9959471, MPFR_RNDN);
        return mpfr_get_d(r9959472, MPFR_RNDN);
}

static mpfr_t r9959473, r9959474, r9959475, r9959476, r9959477, r9959478, r9959479, r9959480, r9959481, r9959482, r9959483, r9959484, r9959485, r9959486, r9959487, r9959488, r9959489, r9959490, r9959491, r9959492, r9959493, r9959494;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9959473);
        mpfr_init(r9959474);
        mpfr_init_set_str(r9959475, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9959476);
        mpfr_init(r9959477);
        mpfr_init_set_str(r9959478, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9959479);
        mpfr_init(r9959480);
        mpfr_init(r9959481);
        mpfr_init_set_str(r9959482, "9", 10, MPFR_RNDN);
        mpfr_init(r9959483);
        mpfr_init_set_str(r9959484, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9959485);
        mpfr_init_set_str(r9959486, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9959487);
        mpfr_init_set_str(r9959488, "9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959489, "7", 10, MPFR_RNDN);
        mpfr_init(r9959490);
        mpfr_init(r9959491);
        mpfr_init(r9959492);
        mpfr_init(r9959493);
        mpfr_init(r9959494);
}

double f_fm(double x) {
        mpfr_set_d(r9959473, x, MPFR_RNDN);
        mpfr_mul(r9959474, r9959473, r9959473, MPFR_RNDN);
        ;
        mpfr_mul(r9959476, r9959475, r9959473, MPFR_RNDN);
        mpfr_mul(r9959477, r9959474, r9959476, MPFR_RNDN);
        ;
        mpfr_mul(r9959479, r9959473, r9959478, MPFR_RNDN);
        mpfr_add(r9959480, r9959477, r9959479, MPFR_RNDN);
        mpfr_mul(r9959481, r9959474, r9959480, MPFR_RNDN);
        ;
        mpfr_pow(r9959483, r9959473, r9959482, MPFR_RNDN);
        ;
        mpfr_mul(r9959485, r9959483, r9959484, MPFR_RNDN);
        ;
        mpfr_mul(r9959487, r9959473, r9959486, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9959490, r9959473, r9959489, MPFR_RNDN);
        mpfr_mul(r9959491, r9959488, r9959490, MPFR_RNDN);
        mpfr_sub(r9959492, r9959487, r9959491, MPFR_RNDN);
        mpfr_add(r9959493, r9959485, r9959492, MPFR_RNDN);
        mpfr_add(r9959494, r9959481, r9959493, MPFR_RNDN);
        return mpfr_get_d(r9959494, MPFR_RNDN);
}

static mpfr_t r9959495, r9959496, r9959497, r9959498, r9959499, r9959500, r9959501, r9959502, r9959503, r9959504, r9959505, r9959506, r9959507, r9959508, r9959509, r9959510, r9959511, r9959512, r9959513, r9959514, r9959515, r9959516;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9959495);
        mpfr_init(r9959496);
        mpfr_init_set_str(r9959497, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9959498);
        mpfr_init(r9959499);
        mpfr_init_set_str(r9959500, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9959501);
        mpfr_init(r9959502);
        mpfr_init(r9959503);
        mpfr_init_set_str(r9959504, "9", 10, MPFR_RNDN);
        mpfr_init(r9959505);
        mpfr_init_set_str(r9959506, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9959507);
        mpfr_init_set_str(r9959508, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9959509);
        mpfr_init_set_str(r9959510, "9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959511, "7", 10, MPFR_RNDN);
        mpfr_init(r9959512);
        mpfr_init(r9959513);
        mpfr_init(r9959514);
        mpfr_init(r9959515);
        mpfr_init(r9959516);
}

double f_dm(double x) {
        mpfr_set_d(r9959495, x, MPFR_RNDN);
        mpfr_mul(r9959496, r9959495, r9959495, MPFR_RNDN);
        ;
        mpfr_mul(r9959498, r9959497, r9959495, MPFR_RNDN);
        mpfr_mul(r9959499, r9959496, r9959498, MPFR_RNDN);
        ;
        mpfr_mul(r9959501, r9959495, r9959500, MPFR_RNDN);
        mpfr_add(r9959502, r9959499, r9959501, MPFR_RNDN);
        mpfr_mul(r9959503, r9959496, r9959502, MPFR_RNDN);
        ;
        mpfr_pow(r9959505, r9959495, r9959504, MPFR_RNDN);
        ;
        mpfr_mul(r9959507, r9959505, r9959506, MPFR_RNDN);
        ;
        mpfr_mul(r9959509, r9959495, r9959508, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9959512, r9959495, r9959511, MPFR_RNDN);
        mpfr_mul(r9959513, r9959510, r9959512, MPFR_RNDN);
        mpfr_sub(r9959514, r9959509, r9959513, MPFR_RNDN);
        mpfr_add(r9959515, r9959507, r9959514, MPFR_RNDN);
        mpfr_add(r9959516, r9959503, r9959515, MPFR_RNDN);
        return mpfr_get_d(r9959516, MPFR_RNDN);
}

