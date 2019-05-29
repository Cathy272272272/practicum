#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7030372 = -120.0;
        float r7030373 = 720.0;
        float r7030374 = x;
        float r7030375 = r7030374 * r7030374;
        float r7030376 = r7030373 * r7030375;
        float r7030377 = r7030372 + r7030376;
        float r7030378 = -480.0;
        float r7030379 = r7030375 * r7030374;
        float r7030380 = r7030379 * r7030374;
        float r7030381 = r7030378 * r7030380;
        float r7030382 = r7030377 + r7030381;
        float r7030383 = 64.0;
        float r7030384 = r7030380 * r7030374;
        float r7030385 = r7030384 * r7030374;
        float r7030386 = r7030383 * r7030385;
        float r7030387 = r7030382 + r7030386;
        return r7030387;
}

double f_id(double x) {
        double r7030388 = -120.0;
        double r7030389 = 720.0;
        double r7030390 = x;
        double r7030391 = r7030390 * r7030390;
        double r7030392 = r7030389 * r7030391;
        double r7030393 = r7030388 + r7030392;
        double r7030394 = -480.0;
        double r7030395 = r7030391 * r7030390;
        double r7030396 = r7030395 * r7030390;
        double r7030397 = r7030394 * r7030396;
        double r7030398 = r7030393 + r7030397;
        double r7030399 = 64.0;
        double r7030400 = r7030396 * r7030390;
        double r7030401 = r7030400 * r7030390;
        double r7030402 = r7030399 * r7030401;
        double r7030403 = r7030398 + r7030402;
        return r7030403;
}


double f_of(float x) {
        float r7030404 = -120.0;
        float r7030405 = 720.0;
        float r7030406 = x;
        float r7030407 = r7030406 * r7030406;
        float r7030408 = r7030405 * r7030407;
        float r7030409 = r7030404 + r7030408;
        float r7030410 = -480.0;
        float r7030411 = r7030407 * r7030406;
        float r7030412 = r7030411 * r7030406;
        float r7030413 = r7030410 * r7030412;
        float r7030414 = r7030409 + r7030413;
        float r7030415 = 64.0;
        float r7030416 = 3;
        float r7030417 = pow(r7030406, r7030416);
        float r7030418 = r7030417 * r7030406;
        float r7030419 = r7030418 * r7030406;
        float r7030420 = r7030419 * r7030406;
        float r7030421 = r7030415 * r7030420;
        float r7030422 = r7030414 + r7030421;
        return r7030422;
}

double f_od(double x) {
        double r7030423 = -120.0;
        double r7030424 = 720.0;
        double r7030425 = x;
        double r7030426 = r7030425 * r7030425;
        double r7030427 = r7030424 * r7030426;
        double r7030428 = r7030423 + r7030427;
        double r7030429 = -480.0;
        double r7030430 = r7030426 * r7030425;
        double r7030431 = r7030430 * r7030425;
        double r7030432 = r7030429 * r7030431;
        double r7030433 = r7030428 + r7030432;
        double r7030434 = 64.0;
        double r7030435 = 3;
        double r7030436 = pow(r7030425, r7030435);
        double r7030437 = r7030436 * r7030425;
        double r7030438 = r7030437 * r7030425;
        double r7030439 = r7030438 * r7030425;
        double r7030440 = r7030434 * r7030439;
        double r7030441 = r7030433 + r7030440;
        return r7030441;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030442, r7030443, r7030444, r7030445, r7030446, r7030447, r7030448, r7030449, r7030450, r7030451, r7030452, r7030453, r7030454, r7030455, r7030456, r7030457;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030442, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030443, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7030444);
        mpfr_init(r7030445);
        mpfr_init(r7030446);
        mpfr_init(r7030447);
        mpfr_init_set_str(r7030448, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7030449);
        mpfr_init(r7030450);
        mpfr_init(r7030451);
        mpfr_init(r7030452);
        mpfr_init_set_str(r7030453, "64.0", 10, MPFR_RNDN);
        mpfr_init(r7030454);
        mpfr_init(r7030455);
        mpfr_init(r7030456);
        mpfr_init(r7030457);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7030444, x, MPFR_RNDN);
        mpfr_mul(r7030445, r7030444, r7030444, MPFR_RNDN);
        mpfr_mul(r7030446, r7030443, r7030445, MPFR_RNDN);
        mpfr_add(r7030447, r7030442, r7030446, MPFR_RNDN);
        ;
        mpfr_mul(r7030449, r7030445, r7030444, MPFR_RNDN);
        mpfr_mul(r7030450, r7030449, r7030444, MPFR_RNDN);
        mpfr_mul(r7030451, r7030448, r7030450, MPFR_RNDN);
        mpfr_add(r7030452, r7030447, r7030451, MPFR_RNDN);
        ;
        mpfr_mul(r7030454, r7030450, r7030444, MPFR_RNDN);
        mpfr_mul(r7030455, r7030454, r7030444, MPFR_RNDN);
        mpfr_mul(r7030456, r7030453, r7030455, MPFR_RNDN);
        mpfr_add(r7030457, r7030452, r7030456, MPFR_RNDN);
        return mpfr_get_d(r7030457, MPFR_RNDN);
}

static mpfr_t r7030458, r7030459, r7030460, r7030461, r7030462, r7030463, r7030464, r7030465, r7030466, r7030467, r7030468, r7030469, r7030470, r7030471, r7030472, r7030473, r7030474, r7030475, r7030476;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030458, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030459, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7030460);
        mpfr_init(r7030461);
        mpfr_init(r7030462);
        mpfr_init(r7030463);
        mpfr_init_set_str(r7030464, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7030465);
        mpfr_init(r7030466);
        mpfr_init(r7030467);
        mpfr_init(r7030468);
        mpfr_init_set_str(r7030469, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030470, "3", 10, MPFR_RNDN);
        mpfr_init(r7030471);
        mpfr_init(r7030472);
        mpfr_init(r7030473);
        mpfr_init(r7030474);
        mpfr_init(r7030475);
        mpfr_init(r7030476);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7030460, x, MPFR_RNDN);
        mpfr_mul(r7030461, r7030460, r7030460, MPFR_RNDN);
        mpfr_mul(r7030462, r7030459, r7030461, MPFR_RNDN);
        mpfr_add(r7030463, r7030458, r7030462, MPFR_RNDN);
        ;
        mpfr_mul(r7030465, r7030461, r7030460, MPFR_RNDN);
        mpfr_mul(r7030466, r7030465, r7030460, MPFR_RNDN);
        mpfr_mul(r7030467, r7030464, r7030466, MPFR_RNDN);
        mpfr_add(r7030468, r7030463, r7030467, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030471, r7030460, r7030470, MPFR_RNDN);
        mpfr_mul(r7030472, r7030471, r7030460, MPFR_RNDN);
        mpfr_mul(r7030473, r7030472, r7030460, MPFR_RNDN);
        mpfr_mul(r7030474, r7030473, r7030460, MPFR_RNDN);
        mpfr_mul(r7030475, r7030469, r7030474, MPFR_RNDN);
        mpfr_add(r7030476, r7030468, r7030475, MPFR_RNDN);
        return mpfr_get_d(r7030476, MPFR_RNDN);
}

static mpfr_t r7030477, r7030478, r7030479, r7030480, r7030481, r7030482, r7030483, r7030484, r7030485, r7030486, r7030487, r7030488, r7030489, r7030490, r7030491, r7030492, r7030493, r7030494, r7030495;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030477, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030478, "720.0", 10, MPFR_RNDN);
        mpfr_init(r7030479);
        mpfr_init(r7030480);
        mpfr_init(r7030481);
        mpfr_init(r7030482);
        mpfr_init_set_str(r7030483, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r7030484);
        mpfr_init(r7030485);
        mpfr_init(r7030486);
        mpfr_init(r7030487);
        mpfr_init_set_str(r7030488, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030489, "3", 10, MPFR_RNDN);
        mpfr_init(r7030490);
        mpfr_init(r7030491);
        mpfr_init(r7030492);
        mpfr_init(r7030493);
        mpfr_init(r7030494);
        mpfr_init(r7030495);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7030479, x, MPFR_RNDN);
        mpfr_mul(r7030480, r7030479, r7030479, MPFR_RNDN);
        mpfr_mul(r7030481, r7030478, r7030480, MPFR_RNDN);
        mpfr_add(r7030482, r7030477, r7030481, MPFR_RNDN);
        ;
        mpfr_mul(r7030484, r7030480, r7030479, MPFR_RNDN);
        mpfr_mul(r7030485, r7030484, r7030479, MPFR_RNDN);
        mpfr_mul(r7030486, r7030483, r7030485, MPFR_RNDN);
        mpfr_add(r7030487, r7030482, r7030486, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030490, r7030479, r7030489, MPFR_RNDN);
        mpfr_mul(r7030491, r7030490, r7030479, MPFR_RNDN);
        mpfr_mul(r7030492, r7030491, r7030479, MPFR_RNDN);
        mpfr_mul(r7030493, r7030492, r7030479, MPFR_RNDN);
        mpfr_mul(r7030494, r7030488, r7030493, MPFR_RNDN);
        mpfr_add(r7030495, r7030487, r7030494, MPFR_RNDN);
        return mpfr_get_d(r7030495, MPFR_RNDN);
}

