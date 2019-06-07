#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r8206354 = 665280.0;
        float r8206355 = -7983360.0;
        float r8206356 = x;
        float r8206357 = r8206356 * r8206356;
        float r8206358 = r8206355 * r8206357;
        float r8206359 = r8206354 + r8206358;
        float r8206360 = 13305600.0;
        float r8206361 = r8206357 * r8206356;
        float r8206362 = r8206361 * r8206356;
        float r8206363 = r8206360 * r8206362;
        float r8206364 = r8206359 + r8206363;
        float r8206365 = -7096320.0;
        float r8206366 = r8206362 * r8206356;
        float r8206367 = r8206366 * r8206356;
        float r8206368 = r8206365 * r8206367;
        float r8206369 = r8206364 + r8206368;
        float r8206370 = 1520640.0;
        float r8206371 = r8206367 * r8206356;
        float r8206372 = r8206371 * r8206356;
        float r8206373 = r8206370 * r8206372;
        float r8206374 = r8206369 + r8206373;
        float r8206375 = -135168.0;
        float r8206376 = r8206372 * r8206356;
        float r8206377 = r8206376 * r8206356;
        float r8206378 = r8206375 * r8206377;
        float r8206379 = r8206374 + r8206378;
        float r8206380 = 4096.0;
        float r8206381 = r8206377 * r8206356;
        float r8206382 = r8206381 * r8206356;
        float r8206383 = r8206380 * r8206382;
        float r8206384 = r8206379 + r8206383;
        return r8206384;
}

double f_id(double x) {
        double r8206385 = 665280.0;
        double r8206386 = -7983360.0;
        double r8206387 = x;
        double r8206388 = r8206387 * r8206387;
        double r8206389 = r8206386 * r8206388;
        double r8206390 = r8206385 + r8206389;
        double r8206391 = 13305600.0;
        double r8206392 = r8206388 * r8206387;
        double r8206393 = r8206392 * r8206387;
        double r8206394 = r8206391 * r8206393;
        double r8206395 = r8206390 + r8206394;
        double r8206396 = -7096320.0;
        double r8206397 = r8206393 * r8206387;
        double r8206398 = r8206397 * r8206387;
        double r8206399 = r8206396 * r8206398;
        double r8206400 = r8206395 + r8206399;
        double r8206401 = 1520640.0;
        double r8206402 = r8206398 * r8206387;
        double r8206403 = r8206402 * r8206387;
        double r8206404 = r8206401 * r8206403;
        double r8206405 = r8206400 + r8206404;
        double r8206406 = -135168.0;
        double r8206407 = r8206403 * r8206387;
        double r8206408 = r8206407 * r8206387;
        double r8206409 = r8206406 * r8206408;
        double r8206410 = r8206405 + r8206409;
        double r8206411 = 4096.0;
        double r8206412 = r8206408 * r8206387;
        double r8206413 = r8206412 * r8206387;
        double r8206414 = r8206411 * r8206413;
        double r8206415 = r8206410 + r8206414;
        return r8206415;
}


double f_of(float x) {
        float r8206416 = 665280.0;
        float r8206417 = -7983360.0;
        float r8206418 = x;
        float r8206419 = r8206418 * r8206418;
        float r8206420 = r8206417 * r8206419;
        float r8206421 = r8206416 + r8206420;
        float r8206422 = 13305600.0;
        float r8206423 = r8206422 * r8206418;
        float r8206424 = 3;
        float r8206425 = pow(r8206418, r8206424);
        float r8206426 = r8206423 * r8206425;
        float r8206427 = cbrt(r8206426);
        float r8206428 = r8206427 * r8206427;
        float r8206429 = r8206425 * r8206423;
        float r8206430 = cbrt(r8206429);
        float r8206431 = r8206428 * r8206430;
        float r8206432 = r8206421 + r8206431;
        float r8206433 = -7096320.0;
        float r8206434 = r8206419 * r8206418;
        float r8206435 = r8206434 * r8206418;
        float r8206436 = r8206435 * r8206418;
        float r8206437 = r8206436 * r8206418;
        float r8206438 = r8206433 * r8206437;
        float r8206439 = r8206432 + r8206438;
        float r8206440 = 1520640.0;
        float r8206441 = r8206437 * r8206418;
        float r8206442 = r8206441 * r8206418;
        float r8206443 = r8206440 * r8206442;
        float r8206444 = r8206439 + r8206443;
        float r8206445 = -135168.0;
        float r8206446 = r8206442 * r8206418;
        float r8206447 = r8206446 * r8206418;
        float r8206448 = r8206445 * r8206447;
        float r8206449 = r8206444 + r8206448;
        float r8206450 = 4096.0;
        float r8206451 = r8206447 * r8206418;
        float r8206452 = r8206451 * r8206418;
        float r8206453 = r8206450 * r8206452;
        float r8206454 = r8206449 + r8206453;
        return r8206454;
}

double f_od(double x) {
        double r8206455 = 665280.0;
        double r8206456 = -7983360.0;
        double r8206457 = x;
        double r8206458 = r8206457 * r8206457;
        double r8206459 = r8206456 * r8206458;
        double r8206460 = r8206455 + r8206459;
        double r8206461 = 13305600.0;
        double r8206462 = r8206461 * r8206457;
        double r8206463 = 3;
        double r8206464 = pow(r8206457, r8206463);
        double r8206465 = r8206462 * r8206464;
        double r8206466 = cbrt(r8206465);
        double r8206467 = r8206466 * r8206466;
        double r8206468 = r8206464 * r8206462;
        double r8206469 = cbrt(r8206468);
        double r8206470 = r8206467 * r8206469;
        double r8206471 = r8206460 + r8206470;
        double r8206472 = -7096320.0;
        double r8206473 = r8206458 * r8206457;
        double r8206474 = r8206473 * r8206457;
        double r8206475 = r8206474 * r8206457;
        double r8206476 = r8206475 * r8206457;
        double r8206477 = r8206472 * r8206476;
        double r8206478 = r8206471 + r8206477;
        double r8206479 = 1520640.0;
        double r8206480 = r8206476 * r8206457;
        double r8206481 = r8206480 * r8206457;
        double r8206482 = r8206479 * r8206481;
        double r8206483 = r8206478 + r8206482;
        double r8206484 = -135168.0;
        double r8206485 = r8206481 * r8206457;
        double r8206486 = r8206485 * r8206457;
        double r8206487 = r8206484 * r8206486;
        double r8206488 = r8206483 + r8206487;
        double r8206489 = 4096.0;
        double r8206490 = r8206486 * r8206457;
        double r8206491 = r8206490 * r8206457;
        double r8206492 = r8206489 * r8206491;
        double r8206493 = r8206488 + r8206492;
        return r8206493;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8206494, r8206495, r8206496, r8206497, r8206498, r8206499, r8206500, r8206501, r8206502, r8206503, r8206504, r8206505, r8206506, r8206507, r8206508, r8206509, r8206510, r8206511, r8206512, r8206513, r8206514, r8206515, r8206516, r8206517, r8206518, r8206519, r8206520, r8206521, r8206522, r8206523, r8206524;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8206494, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206495, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r8206496);
        mpfr_init(r8206497);
        mpfr_init(r8206498);
        mpfr_init(r8206499);
        mpfr_init_set_str(r8206500, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r8206501);
        mpfr_init(r8206502);
        mpfr_init(r8206503);
        mpfr_init(r8206504);
        mpfr_init_set_str(r8206505, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r8206506);
        mpfr_init(r8206507);
        mpfr_init(r8206508);
        mpfr_init(r8206509);
        mpfr_init_set_str(r8206510, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r8206511);
        mpfr_init(r8206512);
        mpfr_init(r8206513);
        mpfr_init(r8206514);
        mpfr_init_set_str(r8206515, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r8206516);
        mpfr_init(r8206517);
        mpfr_init(r8206518);
        mpfr_init(r8206519);
        mpfr_init_set_str(r8206520, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r8206521);
        mpfr_init(r8206522);
        mpfr_init(r8206523);
        mpfr_init(r8206524);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8206496, x, MPFR_RNDN);
        mpfr_mul(r8206497, r8206496, r8206496, MPFR_RNDN);
        mpfr_mul(r8206498, r8206495, r8206497, MPFR_RNDN);
        mpfr_add(r8206499, r8206494, r8206498, MPFR_RNDN);
        ;
        mpfr_mul(r8206501, r8206497, r8206496, MPFR_RNDN);
        mpfr_mul(r8206502, r8206501, r8206496, MPFR_RNDN);
        mpfr_mul(r8206503, r8206500, r8206502, MPFR_RNDN);
        mpfr_add(r8206504, r8206499, r8206503, MPFR_RNDN);
        ;
        mpfr_mul(r8206506, r8206502, r8206496, MPFR_RNDN);
        mpfr_mul(r8206507, r8206506, r8206496, MPFR_RNDN);
        mpfr_mul(r8206508, r8206505, r8206507, MPFR_RNDN);
        mpfr_add(r8206509, r8206504, r8206508, MPFR_RNDN);
        ;
        mpfr_mul(r8206511, r8206507, r8206496, MPFR_RNDN);
        mpfr_mul(r8206512, r8206511, r8206496, MPFR_RNDN);
        mpfr_mul(r8206513, r8206510, r8206512, MPFR_RNDN);
        mpfr_add(r8206514, r8206509, r8206513, MPFR_RNDN);
        ;
        mpfr_mul(r8206516, r8206512, r8206496, MPFR_RNDN);
        mpfr_mul(r8206517, r8206516, r8206496, MPFR_RNDN);
        mpfr_mul(r8206518, r8206515, r8206517, MPFR_RNDN);
        mpfr_add(r8206519, r8206514, r8206518, MPFR_RNDN);
        ;
        mpfr_mul(r8206521, r8206517, r8206496, MPFR_RNDN);
        mpfr_mul(r8206522, r8206521, r8206496, MPFR_RNDN);
        mpfr_mul(r8206523, r8206520, r8206522, MPFR_RNDN);
        mpfr_add(r8206524, r8206519, r8206523, MPFR_RNDN);
        return mpfr_get_d(r8206524, MPFR_RNDN);
}

static mpfr_t r8206525, r8206526, r8206527, r8206528, r8206529, r8206530, r8206531, r8206532, r8206533, r8206534, r8206535, r8206536, r8206537, r8206538, r8206539, r8206540, r8206541, r8206542, r8206543, r8206544, r8206545, r8206546, r8206547, r8206548, r8206549, r8206550, r8206551, r8206552, r8206553, r8206554, r8206555, r8206556, r8206557, r8206558, r8206559, r8206560, r8206561, r8206562, r8206563;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8206525, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206526, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r8206527);
        mpfr_init(r8206528);
        mpfr_init(r8206529);
        mpfr_init(r8206530);
        mpfr_init_set_str(r8206531, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r8206532);
        mpfr_init_set_str(r8206533, "3", 10, MPFR_RNDN);
        mpfr_init(r8206534);
        mpfr_init(r8206535);
        mpfr_init(r8206536);
        mpfr_init(r8206537);
        mpfr_init(r8206538);
        mpfr_init(r8206539);
        mpfr_init(r8206540);
        mpfr_init(r8206541);
        mpfr_init_set_str(r8206542, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r8206543);
        mpfr_init(r8206544);
        mpfr_init(r8206545);
        mpfr_init(r8206546);
        mpfr_init(r8206547);
        mpfr_init(r8206548);
        mpfr_init_set_str(r8206549, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r8206550);
        mpfr_init(r8206551);
        mpfr_init(r8206552);
        mpfr_init(r8206553);
        mpfr_init_set_str(r8206554, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r8206555);
        mpfr_init(r8206556);
        mpfr_init(r8206557);
        mpfr_init(r8206558);
        mpfr_init_set_str(r8206559, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r8206560);
        mpfr_init(r8206561);
        mpfr_init(r8206562);
        mpfr_init(r8206563);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8206527, x, MPFR_RNDN);
        mpfr_mul(r8206528, r8206527, r8206527, MPFR_RNDN);
        mpfr_mul(r8206529, r8206526, r8206528, MPFR_RNDN);
        mpfr_add(r8206530, r8206525, r8206529, MPFR_RNDN);
        ;
        mpfr_mul(r8206532, r8206531, r8206527, MPFR_RNDN);
        ;
        mpfr_pow(r8206534, r8206527, r8206533, MPFR_RNDN);
        mpfr_mul(r8206535, r8206532, r8206534, MPFR_RNDN);
        mpfr_cbrt(r8206536, r8206535, MPFR_RNDN);
        mpfr_mul(r8206537, r8206536, r8206536, MPFR_RNDN);
        mpfr_mul(r8206538, r8206534, r8206532, MPFR_RNDN);
        mpfr_cbrt(r8206539, r8206538, MPFR_RNDN);
        mpfr_mul(r8206540, r8206537, r8206539, MPFR_RNDN);
        mpfr_add(r8206541, r8206530, r8206540, MPFR_RNDN);
        ;
        mpfr_mul(r8206543, r8206528, r8206527, MPFR_RNDN);
        mpfr_mul(r8206544, r8206543, r8206527, MPFR_RNDN);
        mpfr_mul(r8206545, r8206544, r8206527, MPFR_RNDN);
        mpfr_mul(r8206546, r8206545, r8206527, MPFR_RNDN);
        mpfr_mul(r8206547, r8206542, r8206546, MPFR_RNDN);
        mpfr_add(r8206548, r8206541, r8206547, MPFR_RNDN);
        ;
        mpfr_mul(r8206550, r8206546, r8206527, MPFR_RNDN);
        mpfr_mul(r8206551, r8206550, r8206527, MPFR_RNDN);
        mpfr_mul(r8206552, r8206549, r8206551, MPFR_RNDN);
        mpfr_add(r8206553, r8206548, r8206552, MPFR_RNDN);
        ;
        mpfr_mul(r8206555, r8206551, r8206527, MPFR_RNDN);
        mpfr_mul(r8206556, r8206555, r8206527, MPFR_RNDN);
        mpfr_mul(r8206557, r8206554, r8206556, MPFR_RNDN);
        mpfr_add(r8206558, r8206553, r8206557, MPFR_RNDN);
        ;
        mpfr_mul(r8206560, r8206556, r8206527, MPFR_RNDN);
        mpfr_mul(r8206561, r8206560, r8206527, MPFR_RNDN);
        mpfr_mul(r8206562, r8206559, r8206561, MPFR_RNDN);
        mpfr_add(r8206563, r8206558, r8206562, MPFR_RNDN);
        return mpfr_get_d(r8206563, MPFR_RNDN);
}

static mpfr_t r8206564, r8206565, r8206566, r8206567, r8206568, r8206569, r8206570, r8206571, r8206572, r8206573, r8206574, r8206575, r8206576, r8206577, r8206578, r8206579, r8206580, r8206581, r8206582, r8206583, r8206584, r8206585, r8206586, r8206587, r8206588, r8206589, r8206590, r8206591, r8206592, r8206593, r8206594, r8206595, r8206596, r8206597, r8206598, r8206599, r8206600, r8206601, r8206602;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8206564, "665280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8206565, "-7983360.0", 10, MPFR_RNDN);
        mpfr_init(r8206566);
        mpfr_init(r8206567);
        mpfr_init(r8206568);
        mpfr_init(r8206569);
        mpfr_init_set_str(r8206570, "13305600.0", 10, MPFR_RNDN);
        mpfr_init(r8206571);
        mpfr_init_set_str(r8206572, "3", 10, MPFR_RNDN);
        mpfr_init(r8206573);
        mpfr_init(r8206574);
        mpfr_init(r8206575);
        mpfr_init(r8206576);
        mpfr_init(r8206577);
        mpfr_init(r8206578);
        mpfr_init(r8206579);
        mpfr_init(r8206580);
        mpfr_init_set_str(r8206581, "-7096320.0", 10, MPFR_RNDN);
        mpfr_init(r8206582);
        mpfr_init(r8206583);
        mpfr_init(r8206584);
        mpfr_init(r8206585);
        mpfr_init(r8206586);
        mpfr_init(r8206587);
        mpfr_init_set_str(r8206588, "1520640.0", 10, MPFR_RNDN);
        mpfr_init(r8206589);
        mpfr_init(r8206590);
        mpfr_init(r8206591);
        mpfr_init(r8206592);
        mpfr_init_set_str(r8206593, "-135168.0", 10, MPFR_RNDN);
        mpfr_init(r8206594);
        mpfr_init(r8206595);
        mpfr_init(r8206596);
        mpfr_init(r8206597);
        mpfr_init_set_str(r8206598, "4096.0", 10, MPFR_RNDN);
        mpfr_init(r8206599);
        mpfr_init(r8206600);
        mpfr_init(r8206601);
        mpfr_init(r8206602);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8206566, x, MPFR_RNDN);
        mpfr_mul(r8206567, r8206566, r8206566, MPFR_RNDN);
        mpfr_mul(r8206568, r8206565, r8206567, MPFR_RNDN);
        mpfr_add(r8206569, r8206564, r8206568, MPFR_RNDN);
        ;
        mpfr_mul(r8206571, r8206570, r8206566, MPFR_RNDN);
        ;
        mpfr_pow(r8206573, r8206566, r8206572, MPFR_RNDN);
        mpfr_mul(r8206574, r8206571, r8206573, MPFR_RNDN);
        mpfr_cbrt(r8206575, r8206574, MPFR_RNDN);
        mpfr_mul(r8206576, r8206575, r8206575, MPFR_RNDN);
        mpfr_mul(r8206577, r8206573, r8206571, MPFR_RNDN);
        mpfr_cbrt(r8206578, r8206577, MPFR_RNDN);
        mpfr_mul(r8206579, r8206576, r8206578, MPFR_RNDN);
        mpfr_add(r8206580, r8206569, r8206579, MPFR_RNDN);
        ;
        mpfr_mul(r8206582, r8206567, r8206566, MPFR_RNDN);
        mpfr_mul(r8206583, r8206582, r8206566, MPFR_RNDN);
        mpfr_mul(r8206584, r8206583, r8206566, MPFR_RNDN);
        mpfr_mul(r8206585, r8206584, r8206566, MPFR_RNDN);
        mpfr_mul(r8206586, r8206581, r8206585, MPFR_RNDN);
        mpfr_add(r8206587, r8206580, r8206586, MPFR_RNDN);
        ;
        mpfr_mul(r8206589, r8206585, r8206566, MPFR_RNDN);
        mpfr_mul(r8206590, r8206589, r8206566, MPFR_RNDN);
        mpfr_mul(r8206591, r8206588, r8206590, MPFR_RNDN);
        mpfr_add(r8206592, r8206587, r8206591, MPFR_RNDN);
        ;
        mpfr_mul(r8206594, r8206590, r8206566, MPFR_RNDN);
        mpfr_mul(r8206595, r8206594, r8206566, MPFR_RNDN);
        mpfr_mul(r8206596, r8206593, r8206595, MPFR_RNDN);
        mpfr_add(r8206597, r8206592, r8206596, MPFR_RNDN);
        ;
        mpfr_mul(r8206599, r8206595, r8206566, MPFR_RNDN);
        mpfr_mul(r8206600, r8206599, r8206566, MPFR_RNDN);
        mpfr_mul(r8206601, r8206598, r8206600, MPFR_RNDN);
        mpfr_add(r8206602, r8206597, r8206601, MPFR_RNDN);
        return mpfr_get_d(r8206602, MPFR_RNDN);
}

