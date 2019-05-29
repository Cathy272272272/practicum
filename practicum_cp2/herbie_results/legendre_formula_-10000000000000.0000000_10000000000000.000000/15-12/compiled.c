#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r7516388 = 0.225586;
        float r7516389 = -17.595703;
        float r7516390 = x;
        float r7516391 = r7516390 * r7516390;
        float r7516392 = r7516389 * r7516391;
        float r7516393 = r7516388 + r7516392;
        float r7516394 = 219.946289;
        float r7516395 = r7516391 * r7516390;
        float r7516396 = r7516395 * r7516390;
        float r7516397 = r7516394 * r7516396;
        float r7516398 = r7516393 + r7516397;
        float r7516399 = -997.089844;
        float r7516400 = r7516396 * r7516390;
        float r7516401 = r7516400 * r7516390;
        float r7516402 = r7516399 * r7516401;
        float r7516403 = r7516398 + r7516402;
        float r7516404 = 2029.790039;
        float r7516405 = r7516401 * r7516390;
        float r7516406 = r7516405 * r7516390;
        float r7516407 = r7516404 * r7516406;
        float r7516408 = r7516403 + r7516407;
        float r7516409 = -1894.470703;
        float r7516410 = r7516406 * r7516390;
        float r7516411 = r7516410 * r7516390;
        float r7516412 = r7516409 * r7516411;
        float r7516413 = r7516408 + r7516412;
        float r7516414 = 660.194336;
        float r7516415 = r7516411 * r7516390;
        float r7516416 = r7516415 * r7516390;
        float r7516417 = r7516414 * r7516416;
        float r7516418 = r7516413 + r7516417;
        return r7516418;
}

double f_id(double x) {
        double r7516419 = 0.225586;
        double r7516420 = -17.595703;
        double r7516421 = x;
        double r7516422 = r7516421 * r7516421;
        double r7516423 = r7516420 * r7516422;
        double r7516424 = r7516419 + r7516423;
        double r7516425 = 219.946289;
        double r7516426 = r7516422 * r7516421;
        double r7516427 = r7516426 * r7516421;
        double r7516428 = r7516425 * r7516427;
        double r7516429 = r7516424 + r7516428;
        double r7516430 = -997.089844;
        double r7516431 = r7516427 * r7516421;
        double r7516432 = r7516431 * r7516421;
        double r7516433 = r7516430 * r7516432;
        double r7516434 = r7516429 + r7516433;
        double r7516435 = 2029.790039;
        double r7516436 = r7516432 * r7516421;
        double r7516437 = r7516436 * r7516421;
        double r7516438 = r7516435 * r7516437;
        double r7516439 = r7516434 + r7516438;
        double r7516440 = -1894.470703;
        double r7516441 = r7516437 * r7516421;
        double r7516442 = r7516441 * r7516421;
        double r7516443 = r7516440 * r7516442;
        double r7516444 = r7516439 + r7516443;
        double r7516445 = 660.194336;
        double r7516446 = r7516442 * r7516421;
        double r7516447 = r7516446 * r7516421;
        double r7516448 = r7516445 * r7516447;
        double r7516449 = r7516444 + r7516448;
        return r7516449;
}


double f_of(float x) {
        float r7516450 = 2029.790039;
        float r7516451 = x;
        float r7516452 = r7516450 * r7516451;
        float r7516453 = r7516452 * r7516451;
        float r7516454 = r7516451 * r7516451;
        float r7516455 = 3;
        float r7516456 = pow(r7516454, r7516455);
        float r7516457 = r7516453 * r7516456;
        float r7516458 = r7516454 * r7516454;
        float r7516459 = r7516456 * r7516458;
        float r7516460 = 660.194336;
        float r7516461 = r7516460 * r7516451;
        float r7516462 = r7516451 * r7516461;
        float r7516463 = cbrt(r7516462);
        float r7516464 = r7516463 * r7516463;
        float r7516465 = r7516464 * r7516463;
        float r7516466 = -1894.470703;
        float r7516467 = r7516465 + r7516466;
        float r7516468 = r7516459 * r7516467;
        float r7516469 = r7516457 + r7516468;
        float r7516470 = -997.089844;
        float r7516471 = r7516454 * r7516470;
        float r7516472 = 219.946289;
        float r7516473 = r7516471 + r7516472;
        float r7516474 = r7516458 * r7516473;
        float r7516475 = -17.595703;
        float r7516476 = r7516451 * r7516475;
        float r7516477 = r7516476 * r7516451;
        float r7516478 = 0.225586;
        float r7516479 = r7516477 + r7516478;
        float r7516480 = r7516474 + r7516479;
        float r7516481 = r7516469 + r7516480;
        return r7516481;
}

double f_od(double x) {
        double r7516482 = 2029.790039;
        double r7516483 = x;
        double r7516484 = r7516482 * r7516483;
        double r7516485 = r7516484 * r7516483;
        double r7516486 = r7516483 * r7516483;
        double r7516487 = 3;
        double r7516488 = pow(r7516486, r7516487);
        double r7516489 = r7516485 * r7516488;
        double r7516490 = r7516486 * r7516486;
        double r7516491 = r7516488 * r7516490;
        double r7516492 = 660.194336;
        double r7516493 = r7516492 * r7516483;
        double r7516494 = r7516483 * r7516493;
        double r7516495 = cbrt(r7516494);
        double r7516496 = r7516495 * r7516495;
        double r7516497 = r7516496 * r7516495;
        double r7516498 = -1894.470703;
        double r7516499 = r7516497 + r7516498;
        double r7516500 = r7516491 * r7516499;
        double r7516501 = r7516489 + r7516500;
        double r7516502 = -997.089844;
        double r7516503 = r7516486 * r7516502;
        double r7516504 = 219.946289;
        double r7516505 = r7516503 + r7516504;
        double r7516506 = r7516490 * r7516505;
        double r7516507 = -17.595703;
        double r7516508 = r7516483 * r7516507;
        double r7516509 = r7516508 * r7516483;
        double r7516510 = 0.225586;
        double r7516511 = r7516509 + r7516510;
        double r7516512 = r7516506 + r7516511;
        double r7516513 = r7516501 + r7516512;
        return r7516513;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7516514, r7516515, r7516516, r7516517, r7516518, r7516519, r7516520, r7516521, r7516522, r7516523, r7516524, r7516525, r7516526, r7516527, r7516528, r7516529, r7516530, r7516531, r7516532, r7516533, r7516534, r7516535, r7516536, r7516537, r7516538, r7516539, r7516540, r7516541, r7516542, r7516543, r7516544;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7516514, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516515, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7516516);
        mpfr_init(r7516517);
        mpfr_init(r7516518);
        mpfr_init(r7516519);
        mpfr_init_set_str(r7516520, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7516521);
        mpfr_init(r7516522);
        mpfr_init(r7516523);
        mpfr_init(r7516524);
        mpfr_init_set_str(r7516525, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7516526);
        mpfr_init(r7516527);
        mpfr_init(r7516528);
        mpfr_init(r7516529);
        mpfr_init_set_str(r7516530, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7516531);
        mpfr_init(r7516532);
        mpfr_init(r7516533);
        mpfr_init(r7516534);
        mpfr_init_set_str(r7516535, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7516536);
        mpfr_init(r7516537);
        mpfr_init(r7516538);
        mpfr_init(r7516539);
        mpfr_init_set_str(r7516540, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7516541);
        mpfr_init(r7516542);
        mpfr_init(r7516543);
        mpfr_init(r7516544);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7516516, x, MPFR_RNDN);
        mpfr_mul(r7516517, r7516516, r7516516, MPFR_RNDN);
        mpfr_mul(r7516518, r7516515, r7516517, MPFR_RNDN);
        mpfr_add(r7516519, r7516514, r7516518, MPFR_RNDN);
        ;
        mpfr_mul(r7516521, r7516517, r7516516, MPFR_RNDN);
        mpfr_mul(r7516522, r7516521, r7516516, MPFR_RNDN);
        mpfr_mul(r7516523, r7516520, r7516522, MPFR_RNDN);
        mpfr_add(r7516524, r7516519, r7516523, MPFR_RNDN);
        ;
        mpfr_mul(r7516526, r7516522, r7516516, MPFR_RNDN);
        mpfr_mul(r7516527, r7516526, r7516516, MPFR_RNDN);
        mpfr_mul(r7516528, r7516525, r7516527, MPFR_RNDN);
        mpfr_add(r7516529, r7516524, r7516528, MPFR_RNDN);
        ;
        mpfr_mul(r7516531, r7516527, r7516516, MPFR_RNDN);
        mpfr_mul(r7516532, r7516531, r7516516, MPFR_RNDN);
        mpfr_mul(r7516533, r7516530, r7516532, MPFR_RNDN);
        mpfr_add(r7516534, r7516529, r7516533, MPFR_RNDN);
        ;
        mpfr_mul(r7516536, r7516532, r7516516, MPFR_RNDN);
        mpfr_mul(r7516537, r7516536, r7516516, MPFR_RNDN);
        mpfr_mul(r7516538, r7516535, r7516537, MPFR_RNDN);
        mpfr_add(r7516539, r7516534, r7516538, MPFR_RNDN);
        ;
        mpfr_mul(r7516541, r7516537, r7516516, MPFR_RNDN);
        mpfr_mul(r7516542, r7516541, r7516516, MPFR_RNDN);
        mpfr_mul(r7516543, r7516540, r7516542, MPFR_RNDN);
        mpfr_add(r7516544, r7516539, r7516543, MPFR_RNDN);
        return mpfr_get_d(r7516544, MPFR_RNDN);
}

static mpfr_t r7516545, r7516546, r7516547, r7516548, r7516549, r7516550, r7516551, r7516552, r7516553, r7516554, r7516555, r7516556, r7516557, r7516558, r7516559, r7516560, r7516561, r7516562, r7516563, r7516564, r7516565, r7516566, r7516567, r7516568, r7516569, r7516570, r7516571, r7516572, r7516573, r7516574, r7516575, r7516576;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7516545, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7516546);
        mpfr_init(r7516547);
        mpfr_init(r7516548);
        mpfr_init(r7516549);
        mpfr_init_set_str(r7516550, "3", 10, MPFR_RNDN);
        mpfr_init(r7516551);
        mpfr_init(r7516552);
        mpfr_init(r7516553);
        mpfr_init(r7516554);
        mpfr_init_set_str(r7516555, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7516556);
        mpfr_init(r7516557);
        mpfr_init(r7516558);
        mpfr_init(r7516559);
        mpfr_init(r7516560);
        mpfr_init_set_str(r7516561, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7516562);
        mpfr_init(r7516563);
        mpfr_init(r7516564);
        mpfr_init_set_str(r7516565, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7516566);
        mpfr_init_set_str(r7516567, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7516568);
        mpfr_init(r7516569);
        mpfr_init_set_str(r7516570, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7516571);
        mpfr_init(r7516572);
        mpfr_init_set_str(r7516573, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r7516574);
        mpfr_init(r7516575);
        mpfr_init(r7516576);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7516546, x, MPFR_RNDN);
        mpfr_mul(r7516547, r7516545, r7516546, MPFR_RNDN);
        mpfr_mul(r7516548, r7516547, r7516546, MPFR_RNDN);
        mpfr_mul(r7516549, r7516546, r7516546, MPFR_RNDN);
        ;
        mpfr_pow(r7516551, r7516549, r7516550, MPFR_RNDN);
        mpfr_mul(r7516552, r7516548, r7516551, MPFR_RNDN);
        mpfr_mul(r7516553, r7516549, r7516549, MPFR_RNDN);
        mpfr_mul(r7516554, r7516551, r7516553, MPFR_RNDN);
        ;
        mpfr_mul(r7516556, r7516555, r7516546, MPFR_RNDN);
        mpfr_mul(r7516557, r7516546, r7516556, MPFR_RNDN);
        mpfr_cbrt(r7516558, r7516557, MPFR_RNDN);
        mpfr_mul(r7516559, r7516558, r7516558, MPFR_RNDN);
        mpfr_mul(r7516560, r7516559, r7516558, MPFR_RNDN);
        ;
        mpfr_add(r7516562, r7516560, r7516561, MPFR_RNDN);
        mpfr_mul(r7516563, r7516554, r7516562, MPFR_RNDN);
        mpfr_add(r7516564, r7516552, r7516563, MPFR_RNDN);
        ;
        mpfr_mul(r7516566, r7516549, r7516565, MPFR_RNDN);
        ;
        mpfr_add(r7516568, r7516566, r7516567, MPFR_RNDN);
        mpfr_mul(r7516569, r7516553, r7516568, MPFR_RNDN);
        ;
        mpfr_mul(r7516571, r7516546, r7516570, MPFR_RNDN);
        mpfr_mul(r7516572, r7516571, r7516546, MPFR_RNDN);
        ;
        mpfr_add(r7516574, r7516572, r7516573, MPFR_RNDN);
        mpfr_add(r7516575, r7516569, r7516574, MPFR_RNDN);
        mpfr_add(r7516576, r7516564, r7516575, MPFR_RNDN);
        return mpfr_get_d(r7516576, MPFR_RNDN);
}

static mpfr_t r7516577, r7516578, r7516579, r7516580, r7516581, r7516582, r7516583, r7516584, r7516585, r7516586, r7516587, r7516588, r7516589, r7516590, r7516591, r7516592, r7516593, r7516594, r7516595, r7516596, r7516597, r7516598, r7516599, r7516600, r7516601, r7516602, r7516603, r7516604, r7516605, r7516606, r7516607, r7516608;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7516577, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7516578);
        mpfr_init(r7516579);
        mpfr_init(r7516580);
        mpfr_init(r7516581);
        mpfr_init_set_str(r7516582, "3", 10, MPFR_RNDN);
        mpfr_init(r7516583);
        mpfr_init(r7516584);
        mpfr_init(r7516585);
        mpfr_init(r7516586);
        mpfr_init_set_str(r7516587, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7516588);
        mpfr_init(r7516589);
        mpfr_init(r7516590);
        mpfr_init(r7516591);
        mpfr_init(r7516592);
        mpfr_init_set_str(r7516593, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7516594);
        mpfr_init(r7516595);
        mpfr_init(r7516596);
        mpfr_init_set_str(r7516597, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7516598);
        mpfr_init_set_str(r7516599, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7516600);
        mpfr_init(r7516601);
        mpfr_init_set_str(r7516602, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7516603);
        mpfr_init(r7516604);
        mpfr_init_set_str(r7516605, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r7516606);
        mpfr_init(r7516607);
        mpfr_init(r7516608);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7516578, x, MPFR_RNDN);
        mpfr_mul(r7516579, r7516577, r7516578, MPFR_RNDN);
        mpfr_mul(r7516580, r7516579, r7516578, MPFR_RNDN);
        mpfr_mul(r7516581, r7516578, r7516578, MPFR_RNDN);
        ;
        mpfr_pow(r7516583, r7516581, r7516582, MPFR_RNDN);
        mpfr_mul(r7516584, r7516580, r7516583, MPFR_RNDN);
        mpfr_mul(r7516585, r7516581, r7516581, MPFR_RNDN);
        mpfr_mul(r7516586, r7516583, r7516585, MPFR_RNDN);
        ;
        mpfr_mul(r7516588, r7516587, r7516578, MPFR_RNDN);
        mpfr_mul(r7516589, r7516578, r7516588, MPFR_RNDN);
        mpfr_cbrt(r7516590, r7516589, MPFR_RNDN);
        mpfr_mul(r7516591, r7516590, r7516590, MPFR_RNDN);
        mpfr_mul(r7516592, r7516591, r7516590, MPFR_RNDN);
        ;
        mpfr_add(r7516594, r7516592, r7516593, MPFR_RNDN);
        mpfr_mul(r7516595, r7516586, r7516594, MPFR_RNDN);
        mpfr_add(r7516596, r7516584, r7516595, MPFR_RNDN);
        ;
        mpfr_mul(r7516598, r7516581, r7516597, MPFR_RNDN);
        ;
        mpfr_add(r7516600, r7516598, r7516599, MPFR_RNDN);
        mpfr_mul(r7516601, r7516585, r7516600, MPFR_RNDN);
        ;
        mpfr_mul(r7516603, r7516578, r7516602, MPFR_RNDN);
        mpfr_mul(r7516604, r7516603, r7516578, MPFR_RNDN);
        ;
        mpfr_add(r7516606, r7516604, r7516605, MPFR_RNDN);
        mpfr_add(r7516607, r7516601, r7516606, MPFR_RNDN);
        mpfr_add(r7516608, r7516596, r7516607, MPFR_RNDN);
        return mpfr_get_d(r7516608, MPFR_RNDN);
}

