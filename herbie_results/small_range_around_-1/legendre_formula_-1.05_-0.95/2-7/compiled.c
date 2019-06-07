#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r33707376 = -2.1875;
        float r33707377 = x;
        float r33707378 = r33707376 * r33707377;
        float r33707379 = 19.6875;
        float r33707380 = r33707377 * r33707377;
        float r33707381 = r33707380 * r33707377;
        float r33707382 = r33707379 * r33707381;
        float r33707383 = r33707378 + r33707382;
        float r33707384 = -43.3125;
        float r33707385 = r33707381 * r33707377;
        float r33707386 = r33707385 * r33707377;
        float r33707387 = r33707384 * r33707386;
        float r33707388 = r33707383 + r33707387;
        float r33707389 = 26.8125;
        float r33707390 = r33707386 * r33707377;
        float r33707391 = r33707390 * r33707377;
        float r33707392 = r33707389 * r33707391;
        float r33707393 = r33707388 + r33707392;
        return r33707393;
}

double f_id(double x) {
        double r33707394 = -2.1875;
        double r33707395 = x;
        double r33707396 = r33707394 * r33707395;
        double r33707397 = 19.6875;
        double r33707398 = r33707395 * r33707395;
        double r33707399 = r33707398 * r33707395;
        double r33707400 = r33707397 * r33707399;
        double r33707401 = r33707396 + r33707400;
        double r33707402 = -43.3125;
        double r33707403 = r33707399 * r33707395;
        double r33707404 = r33707403 * r33707395;
        double r33707405 = r33707402 * r33707404;
        double r33707406 = r33707401 + r33707405;
        double r33707407 = 26.8125;
        double r33707408 = r33707404 * r33707395;
        double r33707409 = r33707408 * r33707395;
        double r33707410 = r33707407 * r33707409;
        double r33707411 = r33707406 + r33707410;
        return r33707411;
}


double f_of(float x) {
        float r33707412 = x;
        float r33707413 = exp(r33707412);
        float r33707414 = r33707412 * r33707412;
        float r33707415 = r33707414 * r33707414;
        float r33707416 = pow(r33707413, r33707415);
        float r33707417 = 26.8125;
        float r33707418 = r33707417 * r33707412;
        float r33707419 = r33707412 * r33707418;
        float r33707420 = -43.3125;
        float r33707421 = r33707419 + r33707420;
        float r33707422 = pow(r33707416, r33707421);
        float r33707423 = -2.1875;
        float r33707424 = exp(r33707423);
        float r33707425 = 19.6875;
        float r33707426 = r33707425 * r33707414;
        float r33707427 = exp(r33707426);
        float r33707428 = r33707424 * r33707427;
        float r33707429 = pow(r33707428, r33707412);
        float r33707430 = exp(r33707425);
        float r33707431 = pow(r33707430, r33707414);
        float r33707432 = r33707424 * r33707431;
        float r33707433 = r33707412 + r33707412;
        float r33707434 = pow(r33707432, r33707433);
        float r33707435 = r33707429 * r33707434;
        float r33707436 = cbrt(r33707435);
        float r33707437 = r33707422 * r33707436;
        float r33707438 = log(r33707437);
        return r33707438;
}

double f_od(double x) {
        double r33707439 = x;
        double r33707440 = exp(r33707439);
        double r33707441 = r33707439 * r33707439;
        double r33707442 = r33707441 * r33707441;
        double r33707443 = pow(r33707440, r33707442);
        double r33707444 = 26.8125;
        double r33707445 = r33707444 * r33707439;
        double r33707446 = r33707439 * r33707445;
        double r33707447 = -43.3125;
        double r33707448 = r33707446 + r33707447;
        double r33707449 = pow(r33707443, r33707448);
        double r33707450 = -2.1875;
        double r33707451 = exp(r33707450);
        double r33707452 = 19.6875;
        double r33707453 = r33707452 * r33707441;
        double r33707454 = exp(r33707453);
        double r33707455 = r33707451 * r33707454;
        double r33707456 = pow(r33707455, r33707439);
        double r33707457 = exp(r33707452);
        double r33707458 = pow(r33707457, r33707441);
        double r33707459 = r33707451 * r33707458;
        double r33707460 = r33707439 + r33707439;
        double r33707461 = pow(r33707459, r33707460);
        double r33707462 = r33707456 * r33707461;
        double r33707463 = cbrt(r33707462);
        double r33707464 = r33707449 * r33707463;
        double r33707465 = log(r33707464);
        return r33707465;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707466, r33707467, r33707468, r33707469, r33707470, r33707471, r33707472, r33707473, r33707474, r33707475, r33707476, r33707477, r33707478, r33707479, r33707480, r33707481, r33707482, r33707483;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707466, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r33707467);
        mpfr_init(r33707468);
        mpfr_init_set_str(r33707469, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r33707470);
        mpfr_init(r33707471);
        mpfr_init(r33707472);
        mpfr_init(r33707473);
        mpfr_init_set_str(r33707474, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r33707475);
        mpfr_init(r33707476);
        mpfr_init(r33707477);
        mpfr_init(r33707478);
        mpfr_init_set_str(r33707479, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r33707480);
        mpfr_init(r33707481);
        mpfr_init(r33707482);
        mpfr_init(r33707483);
}

double f_im(double x) {
        ;
        mpfr_set_d(r33707467, x, MPFR_RNDN);
        mpfr_mul(r33707468, r33707466, r33707467, MPFR_RNDN);
        ;
        mpfr_mul(r33707470, r33707467, r33707467, MPFR_RNDN);
        mpfr_mul(r33707471, r33707470, r33707467, MPFR_RNDN);
        mpfr_mul(r33707472, r33707469, r33707471, MPFR_RNDN);
        mpfr_add(r33707473, r33707468, r33707472, MPFR_RNDN);
        ;
        mpfr_mul(r33707475, r33707471, r33707467, MPFR_RNDN);
        mpfr_mul(r33707476, r33707475, r33707467, MPFR_RNDN);
        mpfr_mul(r33707477, r33707474, r33707476, MPFR_RNDN);
        mpfr_add(r33707478, r33707473, r33707477, MPFR_RNDN);
        ;
        mpfr_mul(r33707480, r33707476, r33707467, MPFR_RNDN);
        mpfr_mul(r33707481, r33707480, r33707467, MPFR_RNDN);
        mpfr_mul(r33707482, r33707479, r33707481, MPFR_RNDN);
        mpfr_add(r33707483, r33707478, r33707482, MPFR_RNDN);
        return mpfr_get_d(r33707483, MPFR_RNDN);
}

static mpfr_t r33707484, r33707485, r33707486, r33707487, r33707488, r33707489, r33707490, r33707491, r33707492, r33707493, r33707494, r33707495, r33707496, r33707497, r33707498, r33707499, r33707500, r33707501, r33707502, r33707503, r33707504, r33707505, r33707506, r33707507, r33707508, r33707509, r33707510;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707484);
        mpfr_init(r33707485);
        mpfr_init(r33707486);
        mpfr_init(r33707487);
        mpfr_init(r33707488);
        mpfr_init_set_str(r33707489, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r33707490);
        mpfr_init(r33707491);
        mpfr_init_set_str(r33707492, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r33707493);
        mpfr_init(r33707494);
        mpfr_init_set_str(r33707495, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r33707496);
        mpfr_init_set_str(r33707497, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r33707498);
        mpfr_init(r33707499);
        mpfr_init(r33707500);
        mpfr_init(r33707501);
        mpfr_init(r33707502);
        mpfr_init(r33707503);
        mpfr_init(r33707504);
        mpfr_init(r33707505);
        mpfr_init(r33707506);
        mpfr_init(r33707507);
        mpfr_init(r33707508);
        mpfr_init(r33707509);
        mpfr_init(r33707510);
}

double f_fm(double x) {
        mpfr_set_d(r33707484, x, MPFR_RNDN);
        mpfr_exp(r33707485, r33707484, MPFR_RNDN);
        mpfr_mul(r33707486, r33707484, r33707484, MPFR_RNDN);
        mpfr_mul(r33707487, r33707486, r33707486, MPFR_RNDN);
        mpfr_pow(r33707488, r33707485, r33707487, MPFR_RNDN);
        ;
        mpfr_mul(r33707490, r33707489, r33707484, MPFR_RNDN);
        mpfr_mul(r33707491, r33707484, r33707490, MPFR_RNDN);
        ;
        mpfr_add(r33707493, r33707491, r33707492, MPFR_RNDN);
        mpfr_pow(r33707494, r33707488, r33707493, MPFR_RNDN);
        ;
        mpfr_exp(r33707496, r33707495, MPFR_RNDN);
        ;
        mpfr_mul(r33707498, r33707497, r33707486, MPFR_RNDN);
        mpfr_exp(r33707499, r33707498, MPFR_RNDN);
        mpfr_mul(r33707500, r33707496, r33707499, MPFR_RNDN);
        mpfr_pow(r33707501, r33707500, r33707484, MPFR_RNDN);
        mpfr_exp(r33707502, r33707497, MPFR_RNDN);
        mpfr_pow(r33707503, r33707502, r33707486, MPFR_RNDN);
        mpfr_mul(r33707504, r33707496, r33707503, MPFR_RNDN);
        mpfr_add(r33707505, r33707484, r33707484, MPFR_RNDN);
        mpfr_pow(r33707506, r33707504, r33707505, MPFR_RNDN);
        mpfr_mul(r33707507, r33707501, r33707506, MPFR_RNDN);
        mpfr_cbrt(r33707508, r33707507, MPFR_RNDN);
        mpfr_mul(r33707509, r33707494, r33707508, MPFR_RNDN);
        mpfr_log(r33707510, r33707509, MPFR_RNDN);
        return mpfr_get_d(r33707510, MPFR_RNDN);
}

static mpfr_t r33707511, r33707512, r33707513, r33707514, r33707515, r33707516, r33707517, r33707518, r33707519, r33707520, r33707521, r33707522, r33707523, r33707524, r33707525, r33707526, r33707527, r33707528, r33707529, r33707530, r33707531, r33707532, r33707533, r33707534, r33707535, r33707536, r33707537;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707511);
        mpfr_init(r33707512);
        mpfr_init(r33707513);
        mpfr_init(r33707514);
        mpfr_init(r33707515);
        mpfr_init_set_str(r33707516, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r33707517);
        mpfr_init(r33707518);
        mpfr_init_set_str(r33707519, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r33707520);
        mpfr_init(r33707521);
        mpfr_init_set_str(r33707522, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r33707523);
        mpfr_init_set_str(r33707524, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r33707525);
        mpfr_init(r33707526);
        mpfr_init(r33707527);
        mpfr_init(r33707528);
        mpfr_init(r33707529);
        mpfr_init(r33707530);
        mpfr_init(r33707531);
        mpfr_init(r33707532);
        mpfr_init(r33707533);
        mpfr_init(r33707534);
        mpfr_init(r33707535);
        mpfr_init(r33707536);
        mpfr_init(r33707537);
}

double f_dm(double x) {
        mpfr_set_d(r33707511, x, MPFR_RNDN);
        mpfr_exp(r33707512, r33707511, MPFR_RNDN);
        mpfr_mul(r33707513, r33707511, r33707511, MPFR_RNDN);
        mpfr_mul(r33707514, r33707513, r33707513, MPFR_RNDN);
        mpfr_pow(r33707515, r33707512, r33707514, MPFR_RNDN);
        ;
        mpfr_mul(r33707517, r33707516, r33707511, MPFR_RNDN);
        mpfr_mul(r33707518, r33707511, r33707517, MPFR_RNDN);
        ;
        mpfr_add(r33707520, r33707518, r33707519, MPFR_RNDN);
        mpfr_pow(r33707521, r33707515, r33707520, MPFR_RNDN);
        ;
        mpfr_exp(r33707523, r33707522, MPFR_RNDN);
        ;
        mpfr_mul(r33707525, r33707524, r33707513, MPFR_RNDN);
        mpfr_exp(r33707526, r33707525, MPFR_RNDN);
        mpfr_mul(r33707527, r33707523, r33707526, MPFR_RNDN);
        mpfr_pow(r33707528, r33707527, r33707511, MPFR_RNDN);
        mpfr_exp(r33707529, r33707524, MPFR_RNDN);
        mpfr_pow(r33707530, r33707529, r33707513, MPFR_RNDN);
        mpfr_mul(r33707531, r33707523, r33707530, MPFR_RNDN);
        mpfr_add(r33707532, r33707511, r33707511, MPFR_RNDN);
        mpfr_pow(r33707533, r33707531, r33707532, MPFR_RNDN);
        mpfr_mul(r33707534, r33707528, r33707533, MPFR_RNDN);
        mpfr_cbrt(r33707535, r33707534, MPFR_RNDN);
        mpfr_mul(r33707536, r33707521, r33707535, MPFR_RNDN);
        mpfr_log(r33707537, r33707536, MPFR_RNDN);
        return mpfr_get_d(r33707537, MPFR_RNDN);
}

