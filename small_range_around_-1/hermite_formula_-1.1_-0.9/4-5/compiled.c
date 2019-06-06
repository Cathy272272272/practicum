#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r64037372 = 120.0;
        float r64037373 = x;
        float r64037374 = r64037372 * r64037373;
        float r64037375 = -160.0;
        float r64037376 = r64037373 * r64037373;
        float r64037377 = r64037376 * r64037373;
        float r64037378 = r64037375 * r64037377;
        float r64037379 = r64037374 + r64037378;
        float r64037380 = 32.0;
        float r64037381 = r64037377 * r64037373;
        float r64037382 = r64037381 * r64037373;
        float r64037383 = r64037380 * r64037382;
        float r64037384 = r64037379 + r64037383;
        return r64037384;
}

double f_id(double x) {
        double r64037385 = 120.0;
        double r64037386 = x;
        double r64037387 = r64037385 * r64037386;
        double r64037388 = -160.0;
        double r64037389 = r64037386 * r64037386;
        double r64037390 = r64037389 * r64037386;
        double r64037391 = r64037388 * r64037390;
        double r64037392 = r64037387 + r64037391;
        double r64037393 = 32.0;
        double r64037394 = r64037390 * r64037386;
        double r64037395 = r64037394 * r64037386;
        double r64037396 = r64037393 * r64037395;
        double r64037397 = r64037392 + r64037396;
        return r64037397;
}


double f_of(float x) {
        float r64037398 = 32.0;
        float r64037399 = exp(r64037398);
        float r64037400 = x;
        float r64037401 = 3;
        float r64037402 = pow(r64037400, r64037401);
        float r64037403 = pow(r64037399, r64037402);
        float r64037404 = r64037400 * r64037400;
        float r64037405 = pow(r64037403, r64037404);
        float r64037406 = 120.0;
        float r64037407 = exp(r64037406);
        float r64037408 = pow(r64037407, r64037400);
        float r64037409 = -160.0;
        float r64037410 = exp(r64037409);
        float r64037411 = pow(r64037410, r64037400);
        float r64037412 = pow(r64037411, r64037404);
        float r64037413 = r64037408 * r64037412;
        float r64037414 = r64037405 * r64037413;
        float r64037415 = log(r64037414);
        return r64037415;
}

double f_od(double x) {
        double r64037416 = 32.0;
        double r64037417 = exp(r64037416);
        double r64037418 = x;
        double r64037419 = 3;
        double r64037420 = pow(r64037418, r64037419);
        double r64037421 = pow(r64037417, r64037420);
        double r64037422 = r64037418 * r64037418;
        double r64037423 = pow(r64037421, r64037422);
        double r64037424 = 120.0;
        double r64037425 = exp(r64037424);
        double r64037426 = pow(r64037425, r64037418);
        double r64037427 = -160.0;
        double r64037428 = exp(r64037427);
        double r64037429 = pow(r64037428, r64037418);
        double r64037430 = pow(r64037429, r64037422);
        double r64037431 = r64037426 * r64037430;
        double r64037432 = r64037423 * r64037431;
        double r64037433 = log(r64037432);
        return r64037433;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r64037434, r64037435, r64037436, r64037437, r64037438, r64037439, r64037440, r64037441, r64037442, r64037443, r64037444, r64037445, r64037446;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037434, "120.0", 10, MPFR_RNDN);
        mpfr_init(r64037435);
        mpfr_init(r64037436);
        mpfr_init_set_str(r64037437, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r64037438);
        mpfr_init(r64037439);
        mpfr_init(r64037440);
        mpfr_init(r64037441);
        mpfr_init_set_str(r64037442, "32.0", 10, MPFR_RNDN);
        mpfr_init(r64037443);
        mpfr_init(r64037444);
        mpfr_init(r64037445);
        mpfr_init(r64037446);
}

double f_im(double x) {
        ;
        mpfr_set_d(r64037435, x, MPFR_RNDN);
        mpfr_mul(r64037436, r64037434, r64037435, MPFR_RNDN);
        ;
        mpfr_mul(r64037438, r64037435, r64037435, MPFR_RNDN);
        mpfr_mul(r64037439, r64037438, r64037435, MPFR_RNDN);
        mpfr_mul(r64037440, r64037437, r64037439, MPFR_RNDN);
        mpfr_add(r64037441, r64037436, r64037440, MPFR_RNDN);
        ;
        mpfr_mul(r64037443, r64037439, r64037435, MPFR_RNDN);
        mpfr_mul(r64037444, r64037443, r64037435, MPFR_RNDN);
        mpfr_mul(r64037445, r64037442, r64037444, MPFR_RNDN);
        mpfr_add(r64037446, r64037441, r64037445, MPFR_RNDN);
        return mpfr_get_d(r64037446, MPFR_RNDN);
}

static mpfr_t r64037447, r64037448, r64037449, r64037450, r64037451, r64037452, r64037453, r64037454, r64037455, r64037456, r64037457, r64037458, r64037459, r64037460, r64037461, r64037462, r64037463, r64037464;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037447, "32.0", 10, MPFR_RNDN);
        mpfr_init(r64037448);
        mpfr_init(r64037449);
        mpfr_init_set_str(r64037450, "3", 10, MPFR_RNDN);
        mpfr_init(r64037451);
        mpfr_init(r64037452);
        mpfr_init(r64037453);
        mpfr_init(r64037454);
        mpfr_init_set_str(r64037455, "120.0", 10, MPFR_RNDN);
        mpfr_init(r64037456);
        mpfr_init(r64037457);
        mpfr_init_set_str(r64037458, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r64037459);
        mpfr_init(r64037460);
        mpfr_init(r64037461);
        mpfr_init(r64037462);
        mpfr_init(r64037463);
        mpfr_init(r64037464);
}

double f_fm(double x) {
        ;
        mpfr_exp(r64037448, r64037447, MPFR_RNDN);
        mpfr_set_d(r64037449, x, MPFR_RNDN);
        ;
        mpfr_pow(r64037451, r64037449, r64037450, MPFR_RNDN);
        mpfr_pow(r64037452, r64037448, r64037451, MPFR_RNDN);
        mpfr_mul(r64037453, r64037449, r64037449, MPFR_RNDN);
        mpfr_pow(r64037454, r64037452, r64037453, MPFR_RNDN);
        ;
        mpfr_exp(r64037456, r64037455, MPFR_RNDN);
        mpfr_pow(r64037457, r64037456, r64037449, MPFR_RNDN);
        ;
        mpfr_exp(r64037459, r64037458, MPFR_RNDN);
        mpfr_pow(r64037460, r64037459, r64037449, MPFR_RNDN);
        mpfr_pow(r64037461, r64037460, r64037453, MPFR_RNDN);
        mpfr_mul(r64037462, r64037457, r64037461, MPFR_RNDN);
        mpfr_mul(r64037463, r64037454, r64037462, MPFR_RNDN);
        mpfr_log(r64037464, r64037463, MPFR_RNDN);
        return mpfr_get_d(r64037464, MPFR_RNDN);
}

static mpfr_t r64037465, r64037466, r64037467, r64037468, r64037469, r64037470, r64037471, r64037472, r64037473, r64037474, r64037475, r64037476, r64037477, r64037478, r64037479, r64037480, r64037481, r64037482;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r64037465, "32.0", 10, MPFR_RNDN);
        mpfr_init(r64037466);
        mpfr_init(r64037467);
        mpfr_init_set_str(r64037468, "3", 10, MPFR_RNDN);
        mpfr_init(r64037469);
        mpfr_init(r64037470);
        mpfr_init(r64037471);
        mpfr_init(r64037472);
        mpfr_init_set_str(r64037473, "120.0", 10, MPFR_RNDN);
        mpfr_init(r64037474);
        mpfr_init(r64037475);
        mpfr_init_set_str(r64037476, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r64037477);
        mpfr_init(r64037478);
        mpfr_init(r64037479);
        mpfr_init(r64037480);
        mpfr_init(r64037481);
        mpfr_init(r64037482);
}

double f_dm(double x) {
        ;
        mpfr_exp(r64037466, r64037465, MPFR_RNDN);
        mpfr_set_d(r64037467, x, MPFR_RNDN);
        ;
        mpfr_pow(r64037469, r64037467, r64037468, MPFR_RNDN);
        mpfr_pow(r64037470, r64037466, r64037469, MPFR_RNDN);
        mpfr_mul(r64037471, r64037467, r64037467, MPFR_RNDN);
        mpfr_pow(r64037472, r64037470, r64037471, MPFR_RNDN);
        ;
        mpfr_exp(r64037474, r64037473, MPFR_RNDN);
        mpfr_pow(r64037475, r64037474, r64037467, MPFR_RNDN);
        ;
        mpfr_exp(r64037477, r64037476, MPFR_RNDN);
        mpfr_pow(r64037478, r64037477, r64037467, MPFR_RNDN);
        mpfr_pow(r64037479, r64037478, r64037471, MPFR_RNDN);
        mpfr_mul(r64037480, r64037475, r64037479, MPFR_RNDN);
        mpfr_mul(r64037481, r64037472, r64037480, MPFR_RNDN);
        mpfr_log(r64037482, r64037481, MPFR_RNDN);
        return mpfr_get_d(r64037482, MPFR_RNDN);
}

