#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r7605409 = 17297280.0;
        float r7605410 = x;
        float r7605411 = r7605409 * r7605410;
        float r7605412 = -69189120.0;
        float r7605413 = r7605410 * r7605410;
        float r7605414 = r7605413 * r7605410;
        float r7605415 = r7605412 * r7605414;
        float r7605416 = r7605411 + r7605415;
        float r7605417 = 69189120.0;
        float r7605418 = r7605414 * r7605410;
        float r7605419 = r7605418 * r7605410;
        float r7605420 = r7605417 * r7605419;
        float r7605421 = r7605416 + r7605420;
        float r7605422 = -26357760.0;
        float r7605423 = r7605419 * r7605410;
        float r7605424 = r7605423 * r7605410;
        float r7605425 = r7605422 * r7605424;
        float r7605426 = r7605421 + r7605425;
        float r7605427 = 4392960.0;
        float r7605428 = r7605424 * r7605410;
        float r7605429 = r7605428 * r7605410;
        float r7605430 = r7605427 * r7605429;
        float r7605431 = r7605426 + r7605430;
        float r7605432 = -319488.0;
        float r7605433 = r7605429 * r7605410;
        float r7605434 = r7605433 * r7605410;
        float r7605435 = r7605432 * r7605434;
        float r7605436 = r7605431 + r7605435;
        float r7605437 = 8192.0;
        float r7605438 = r7605434 * r7605410;
        float r7605439 = r7605438 * r7605410;
        float r7605440 = r7605437 * r7605439;
        float r7605441 = r7605436 + r7605440;
        return r7605441;
}

double f_id(double x) {
        double r7605442 = 17297280.0;
        double r7605443 = x;
        double r7605444 = r7605442 * r7605443;
        double r7605445 = -69189120.0;
        double r7605446 = r7605443 * r7605443;
        double r7605447 = r7605446 * r7605443;
        double r7605448 = r7605445 * r7605447;
        double r7605449 = r7605444 + r7605448;
        double r7605450 = 69189120.0;
        double r7605451 = r7605447 * r7605443;
        double r7605452 = r7605451 * r7605443;
        double r7605453 = r7605450 * r7605452;
        double r7605454 = r7605449 + r7605453;
        double r7605455 = -26357760.0;
        double r7605456 = r7605452 * r7605443;
        double r7605457 = r7605456 * r7605443;
        double r7605458 = r7605455 * r7605457;
        double r7605459 = r7605454 + r7605458;
        double r7605460 = 4392960.0;
        double r7605461 = r7605457 * r7605443;
        double r7605462 = r7605461 * r7605443;
        double r7605463 = r7605460 * r7605462;
        double r7605464 = r7605459 + r7605463;
        double r7605465 = -319488.0;
        double r7605466 = r7605462 * r7605443;
        double r7605467 = r7605466 * r7605443;
        double r7605468 = r7605465 * r7605467;
        double r7605469 = r7605464 + r7605468;
        double r7605470 = 8192.0;
        double r7605471 = r7605467 * r7605443;
        double r7605472 = r7605471 * r7605443;
        double r7605473 = r7605470 * r7605472;
        double r7605474 = r7605469 + r7605473;
        return r7605474;
}


double f_of(float x) {
        float r7605475 = x;
        float r7605476 = r7605475 * r7605475;
        float r7605477 = 3;
        float r7605478 = pow(r7605476, r7605477);
        float r7605479 = r7605475 * r7605478;
        float r7605480 = -26357760.0;
        float r7605481 = 4392960.0;
        float r7605482 = r7605476 * r7605481;
        float r7605483 = r7605480 + r7605482;
        float r7605484 = r7605479 * r7605483;
        float r7605485 = 69189120.0;
        float r7605486 = r7605475 * r7605485;
        float r7605487 = r7605486 * r7605476;
        float r7605488 = -69189120.0;
        float r7605489 = r7605488 * r7605475;
        float r7605490 = r7605487 + r7605489;
        float r7605491 = r7605476 * r7605490;
        float r7605492 = 17297280.0;
        float r7605493 = r7605475 * r7605492;
        float r7605494 = 13;
        float r7605495 = pow(r7605475, r7605494);
        float r7605496 = 8192.0;
        float r7605497 = r7605495 * r7605496;
        float r7605498 = 319488.0;
        float r7605499 = 11;
        float r7605500 = pow(r7605475, r7605499);
        float r7605501 = r7605498 * r7605500;
        float r7605502 = r7605497 - r7605501;
        float r7605503 = r7605493 + r7605502;
        float r7605504 = r7605491 + r7605503;
        float r7605505 = r7605484 + r7605504;
        return r7605505;
}

double f_od(double x) {
        double r7605506 = x;
        double r7605507 = r7605506 * r7605506;
        double r7605508 = 3;
        double r7605509 = pow(r7605507, r7605508);
        double r7605510 = r7605506 * r7605509;
        double r7605511 = -26357760.0;
        double r7605512 = 4392960.0;
        double r7605513 = r7605507 * r7605512;
        double r7605514 = r7605511 + r7605513;
        double r7605515 = r7605510 * r7605514;
        double r7605516 = 69189120.0;
        double r7605517 = r7605506 * r7605516;
        double r7605518 = r7605517 * r7605507;
        double r7605519 = -69189120.0;
        double r7605520 = r7605519 * r7605506;
        double r7605521 = r7605518 + r7605520;
        double r7605522 = r7605507 * r7605521;
        double r7605523 = 17297280.0;
        double r7605524 = r7605506 * r7605523;
        double r7605525 = 13;
        double r7605526 = pow(r7605506, r7605525);
        double r7605527 = 8192.0;
        double r7605528 = r7605526 * r7605527;
        double r7605529 = 319488.0;
        double r7605530 = 11;
        double r7605531 = pow(r7605506, r7605530);
        double r7605532 = r7605529 * r7605531;
        double r7605533 = r7605528 - r7605532;
        double r7605534 = r7605524 + r7605533;
        double r7605535 = r7605522 + r7605534;
        double r7605536 = r7605515 + r7605535;
        return r7605536;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7605537, r7605538, r7605539, r7605540, r7605541, r7605542, r7605543, r7605544, r7605545, r7605546, r7605547, r7605548, r7605549, r7605550, r7605551, r7605552, r7605553, r7605554, r7605555, r7605556, r7605557, r7605558, r7605559, r7605560, r7605561, r7605562, r7605563, r7605564, r7605565, r7605566, r7605567, r7605568, r7605569;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7605537, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7605538);
        mpfr_init(r7605539);
        mpfr_init_set_str(r7605540, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7605541);
        mpfr_init(r7605542);
        mpfr_init(r7605543);
        mpfr_init(r7605544);
        mpfr_init_set_str(r7605545, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7605546);
        mpfr_init(r7605547);
        mpfr_init(r7605548);
        mpfr_init(r7605549);
        mpfr_init_set_str(r7605550, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r7605551);
        mpfr_init(r7605552);
        mpfr_init(r7605553);
        mpfr_init(r7605554);
        mpfr_init_set_str(r7605555, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r7605556);
        mpfr_init(r7605557);
        mpfr_init(r7605558);
        mpfr_init(r7605559);
        mpfr_init_set_str(r7605560, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r7605561);
        mpfr_init(r7605562);
        mpfr_init(r7605563);
        mpfr_init(r7605564);
        mpfr_init_set_str(r7605565, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r7605566);
        mpfr_init(r7605567);
        mpfr_init(r7605568);
        mpfr_init(r7605569);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7605538, x, MPFR_RNDN);
        mpfr_mul(r7605539, r7605537, r7605538, MPFR_RNDN);
        ;
        mpfr_mul(r7605541, r7605538, r7605538, MPFR_RNDN);
        mpfr_mul(r7605542, r7605541, r7605538, MPFR_RNDN);
        mpfr_mul(r7605543, r7605540, r7605542, MPFR_RNDN);
        mpfr_add(r7605544, r7605539, r7605543, MPFR_RNDN);
        ;
        mpfr_mul(r7605546, r7605542, r7605538, MPFR_RNDN);
        mpfr_mul(r7605547, r7605546, r7605538, MPFR_RNDN);
        mpfr_mul(r7605548, r7605545, r7605547, MPFR_RNDN);
        mpfr_add(r7605549, r7605544, r7605548, MPFR_RNDN);
        ;
        mpfr_mul(r7605551, r7605547, r7605538, MPFR_RNDN);
        mpfr_mul(r7605552, r7605551, r7605538, MPFR_RNDN);
        mpfr_mul(r7605553, r7605550, r7605552, MPFR_RNDN);
        mpfr_add(r7605554, r7605549, r7605553, MPFR_RNDN);
        ;
        mpfr_mul(r7605556, r7605552, r7605538, MPFR_RNDN);
        mpfr_mul(r7605557, r7605556, r7605538, MPFR_RNDN);
        mpfr_mul(r7605558, r7605555, r7605557, MPFR_RNDN);
        mpfr_add(r7605559, r7605554, r7605558, MPFR_RNDN);
        ;
        mpfr_mul(r7605561, r7605557, r7605538, MPFR_RNDN);
        mpfr_mul(r7605562, r7605561, r7605538, MPFR_RNDN);
        mpfr_mul(r7605563, r7605560, r7605562, MPFR_RNDN);
        mpfr_add(r7605564, r7605559, r7605563, MPFR_RNDN);
        ;
        mpfr_mul(r7605566, r7605562, r7605538, MPFR_RNDN);
        mpfr_mul(r7605567, r7605566, r7605538, MPFR_RNDN);
        mpfr_mul(r7605568, r7605565, r7605567, MPFR_RNDN);
        mpfr_add(r7605569, r7605564, r7605568, MPFR_RNDN);
        return mpfr_get_d(r7605569, MPFR_RNDN);
}

static mpfr_t r7605570, r7605571, r7605572, r7605573, r7605574, r7605575, r7605576, r7605577, r7605578, r7605579, r7605580, r7605581, r7605582, r7605583, r7605584, r7605585, r7605586, r7605587, r7605588, r7605589, r7605590, r7605591, r7605592, r7605593, r7605594, r7605595, r7605596, r7605597, r7605598, r7605599, r7605600;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7605570);
        mpfr_init(r7605571);
        mpfr_init_set_str(r7605572, "3", 10, MPFR_RNDN);
        mpfr_init(r7605573);
        mpfr_init(r7605574);
        mpfr_init_set_str(r7605575, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7605576, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r7605577);
        mpfr_init(r7605578);
        mpfr_init(r7605579);
        mpfr_init_set_str(r7605580, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7605581);
        mpfr_init(r7605582);
        mpfr_init_set_str(r7605583, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7605584);
        mpfr_init(r7605585);
        mpfr_init(r7605586);
        mpfr_init_set_str(r7605587, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7605588);
        mpfr_init_set_str(r7605589, "13", 10, MPFR_RNDN);
        mpfr_init(r7605590);
        mpfr_init_set_str(r7605591, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r7605592);
        mpfr_init_set_str(r7605593, "319488.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7605594, "11", 10, MPFR_RNDN);
        mpfr_init(r7605595);
        mpfr_init(r7605596);
        mpfr_init(r7605597);
        mpfr_init(r7605598);
        mpfr_init(r7605599);
        mpfr_init(r7605600);
}

double f_fm(double x) {
        mpfr_set_d(r7605570, x, MPFR_RNDN);
        mpfr_mul(r7605571, r7605570, r7605570, MPFR_RNDN);
        ;
        mpfr_pow(r7605573, r7605571, r7605572, MPFR_RNDN);
        mpfr_mul(r7605574, r7605570, r7605573, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7605577, r7605571, r7605576, MPFR_RNDN);
        mpfr_add(r7605578, r7605575, r7605577, MPFR_RNDN);
        mpfr_mul(r7605579, r7605574, r7605578, MPFR_RNDN);
        ;
        mpfr_mul(r7605581, r7605570, r7605580, MPFR_RNDN);
        mpfr_mul(r7605582, r7605581, r7605571, MPFR_RNDN);
        ;
        mpfr_mul(r7605584, r7605583, r7605570, MPFR_RNDN);
        mpfr_add(r7605585, r7605582, r7605584, MPFR_RNDN);
        mpfr_mul(r7605586, r7605571, r7605585, MPFR_RNDN);
        ;
        mpfr_mul(r7605588, r7605570, r7605587, MPFR_RNDN);
        ;
        mpfr_pow(r7605590, r7605570, r7605589, MPFR_RNDN);
        ;
        mpfr_mul(r7605592, r7605590, r7605591, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7605595, r7605570, r7605594, MPFR_RNDN);
        mpfr_mul(r7605596, r7605593, r7605595, MPFR_RNDN);
        mpfr_sub(r7605597, r7605592, r7605596, MPFR_RNDN);
        mpfr_add(r7605598, r7605588, r7605597, MPFR_RNDN);
        mpfr_add(r7605599, r7605586, r7605598, MPFR_RNDN);
        mpfr_add(r7605600, r7605579, r7605599, MPFR_RNDN);
        return mpfr_get_d(r7605600, MPFR_RNDN);
}

static mpfr_t r7605601, r7605602, r7605603, r7605604, r7605605, r7605606, r7605607, r7605608, r7605609, r7605610, r7605611, r7605612, r7605613, r7605614, r7605615, r7605616, r7605617, r7605618, r7605619, r7605620, r7605621, r7605622, r7605623, r7605624, r7605625, r7605626, r7605627, r7605628, r7605629, r7605630, r7605631;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7605601);
        mpfr_init(r7605602);
        mpfr_init_set_str(r7605603, "3", 10, MPFR_RNDN);
        mpfr_init(r7605604);
        mpfr_init(r7605605);
        mpfr_init_set_str(r7605606, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7605607, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r7605608);
        mpfr_init(r7605609);
        mpfr_init(r7605610);
        mpfr_init_set_str(r7605611, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7605612);
        mpfr_init(r7605613);
        mpfr_init_set_str(r7605614, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7605615);
        mpfr_init(r7605616);
        mpfr_init(r7605617);
        mpfr_init_set_str(r7605618, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7605619);
        mpfr_init_set_str(r7605620, "13", 10, MPFR_RNDN);
        mpfr_init(r7605621);
        mpfr_init_set_str(r7605622, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r7605623);
        mpfr_init_set_str(r7605624, "319488.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7605625, "11", 10, MPFR_RNDN);
        mpfr_init(r7605626);
        mpfr_init(r7605627);
        mpfr_init(r7605628);
        mpfr_init(r7605629);
        mpfr_init(r7605630);
        mpfr_init(r7605631);
}

double f_dm(double x) {
        mpfr_set_d(r7605601, x, MPFR_RNDN);
        mpfr_mul(r7605602, r7605601, r7605601, MPFR_RNDN);
        ;
        mpfr_pow(r7605604, r7605602, r7605603, MPFR_RNDN);
        mpfr_mul(r7605605, r7605601, r7605604, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7605608, r7605602, r7605607, MPFR_RNDN);
        mpfr_add(r7605609, r7605606, r7605608, MPFR_RNDN);
        mpfr_mul(r7605610, r7605605, r7605609, MPFR_RNDN);
        ;
        mpfr_mul(r7605612, r7605601, r7605611, MPFR_RNDN);
        mpfr_mul(r7605613, r7605612, r7605602, MPFR_RNDN);
        ;
        mpfr_mul(r7605615, r7605614, r7605601, MPFR_RNDN);
        mpfr_add(r7605616, r7605613, r7605615, MPFR_RNDN);
        mpfr_mul(r7605617, r7605602, r7605616, MPFR_RNDN);
        ;
        mpfr_mul(r7605619, r7605601, r7605618, MPFR_RNDN);
        ;
        mpfr_pow(r7605621, r7605601, r7605620, MPFR_RNDN);
        ;
        mpfr_mul(r7605623, r7605621, r7605622, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7605626, r7605601, r7605625, MPFR_RNDN);
        mpfr_mul(r7605627, r7605624, r7605626, MPFR_RNDN);
        mpfr_sub(r7605628, r7605623, r7605627, MPFR_RNDN);
        mpfr_add(r7605629, r7605619, r7605628, MPFR_RNDN);
        mpfr_add(r7605630, r7605617, r7605629, MPFR_RNDN);
        mpfr_add(r7605631, r7605610, r7605630, MPFR_RNDN);
        return mpfr_get_d(r7605631, MPFR_RNDN);
}

