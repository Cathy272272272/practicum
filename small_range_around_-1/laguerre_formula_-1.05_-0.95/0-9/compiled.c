#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r10527428 = 1.0;
        float r10527429 = -9.0;
        float r10527430 = x;
        float r10527431 = r10527429 * r10527430;
        float r10527432 = r10527428 + r10527431;
        float r10527433 = 18.0;
        float r10527434 = r10527430 * r10527430;
        float r10527435 = r10527433 * r10527434;
        float r10527436 = r10527432 + r10527435;
        float r10527437 = -14.0;
        float r10527438 = r10527434 * r10527430;
        float r10527439 = r10527437 * r10527438;
        float r10527440 = r10527436 + r10527439;
        float r10527441 = 5.25;
        float r10527442 = r10527438 * r10527430;
        float r10527443 = r10527441 * r10527442;
        float r10527444 = r10527440 + r10527443;
        float r10527445 = -1.05;
        float r10527446 = r10527442 * r10527430;
        float r10527447 = r10527445 * r10527446;
        float r10527448 = r10527444 + r10527447;
        float r10527449 = 0.116667;
        float r10527450 = r10527446 * r10527430;
        float r10527451 = r10527449 * r10527450;
        float r10527452 = r10527448 + r10527451;
        float r10527453 = -0.007143;
        float r10527454 = r10527450 * r10527430;
        float r10527455 = r10527453 * r10527454;
        float r10527456 = r10527452 + r10527455;
        float r10527457 = 0.000223;
        float r10527458 = r10527454 * r10527430;
        float r10527459 = r10527457 * r10527458;
        float r10527460 = r10527456 + r10527459;
        float r10527461 = -3e-06;
        float r10527462 = r10527458 * r10527430;
        float r10527463 = r10527461 * r10527462;
        float r10527464 = r10527460 + r10527463;
        return r10527464;
}

double f_id(double x) {
        double r10527465 = 1.0;
        double r10527466 = -9.0;
        double r10527467 = x;
        double r10527468 = r10527466 * r10527467;
        double r10527469 = r10527465 + r10527468;
        double r10527470 = 18.0;
        double r10527471 = r10527467 * r10527467;
        double r10527472 = r10527470 * r10527471;
        double r10527473 = r10527469 + r10527472;
        double r10527474 = -14.0;
        double r10527475 = r10527471 * r10527467;
        double r10527476 = r10527474 * r10527475;
        double r10527477 = r10527473 + r10527476;
        double r10527478 = 5.25;
        double r10527479 = r10527475 * r10527467;
        double r10527480 = r10527478 * r10527479;
        double r10527481 = r10527477 + r10527480;
        double r10527482 = -1.05;
        double r10527483 = r10527479 * r10527467;
        double r10527484 = r10527482 * r10527483;
        double r10527485 = r10527481 + r10527484;
        double r10527486 = 0.116667;
        double r10527487 = r10527483 * r10527467;
        double r10527488 = r10527486 * r10527487;
        double r10527489 = r10527485 + r10527488;
        double r10527490 = -0.007143;
        double r10527491 = r10527487 * r10527467;
        double r10527492 = r10527490 * r10527491;
        double r10527493 = r10527489 + r10527492;
        double r10527494 = 0.000223;
        double r10527495 = r10527491 * r10527467;
        double r10527496 = r10527494 * r10527495;
        double r10527497 = r10527493 + r10527496;
        double r10527498 = -3e-06;
        double r10527499 = r10527495 * r10527467;
        double r10527500 = r10527498 * r10527499;
        double r10527501 = r10527497 + r10527500;
        return r10527501;
}


double f_of(float x) {
        float r10527502 = 1.0;
        float r10527503 = -9.0;
        float r10527504 = x;
        float r10527505 = r10527503 * r10527504;
        float r10527506 = r10527502 + r10527505;
        float r10527507 = 18.0;
        float r10527508 = -14.0;
        float r10527509 = r10527508 * r10527504;
        float r10527510 = r10527507 + r10527509;
        float r10527511 = r10527510 * r10527504;
        float r10527512 = r10527511 * r10527504;
        float r10527513 = r10527506 + r10527512;
        float r10527514 = -1.05;
        float r10527515 = r10527504 * r10527514;
        float r10527516 = 5.25;
        float r10527517 = r10527515 + r10527516;
        float r10527518 = 4;
        float r10527519 = pow(r10527504, r10527518);
        float r10527520 = r10527517 * r10527519;
        float r10527521 = 0.116667;
        float r10527522 = r10527504 * r10527504;
        float r10527523 = r10527521 * r10527522;
        float r10527524 = r10527522 * r10527522;
        float r10527525 = r10527523 * r10527524;
        float r10527526 = r10527520 + r10527525;
        float r10527527 = -0.007143;
        float r10527528 = r10527504 * r10527527;
        float r10527529 = r10527528 * r10527522;
        float r10527530 = r10527529 * r10527524;
        float r10527531 = -3e-06;
        float r10527532 = r10527504 * r10527531;
        float r10527533 = 0.000223;
        float r10527534 = r10527532 + r10527533;
        float r10527535 = 3;
        float r10527536 = 1;
        float r10527537 = r10527535 + r10527536;
        float r10527538 = pow(r10527522, r10527537);
        float r10527539 = r10527534 * r10527538;
        float r10527540 = r10527530 + r10527539;
        float r10527541 = r10527526 + r10527540;
        float r10527542 = r10527513 + r10527541;
        return r10527542;
}

double f_od(double x) {
        double r10527543 = 1.0;
        double r10527544 = -9.0;
        double r10527545 = x;
        double r10527546 = r10527544 * r10527545;
        double r10527547 = r10527543 + r10527546;
        double r10527548 = 18.0;
        double r10527549 = -14.0;
        double r10527550 = r10527549 * r10527545;
        double r10527551 = r10527548 + r10527550;
        double r10527552 = r10527551 * r10527545;
        double r10527553 = r10527552 * r10527545;
        double r10527554 = r10527547 + r10527553;
        double r10527555 = -1.05;
        double r10527556 = r10527545 * r10527555;
        double r10527557 = 5.25;
        double r10527558 = r10527556 + r10527557;
        double r10527559 = 4;
        double r10527560 = pow(r10527545, r10527559);
        double r10527561 = r10527558 * r10527560;
        double r10527562 = 0.116667;
        double r10527563 = r10527545 * r10527545;
        double r10527564 = r10527562 * r10527563;
        double r10527565 = r10527563 * r10527563;
        double r10527566 = r10527564 * r10527565;
        double r10527567 = r10527561 + r10527566;
        double r10527568 = -0.007143;
        double r10527569 = r10527545 * r10527568;
        double r10527570 = r10527569 * r10527563;
        double r10527571 = r10527570 * r10527565;
        double r10527572 = -3e-06;
        double r10527573 = r10527545 * r10527572;
        double r10527574 = 0.000223;
        double r10527575 = r10527573 + r10527574;
        double r10527576 = 3;
        double r10527577 = 1;
        double r10527578 = r10527576 + r10527577;
        double r10527579 = pow(r10527563, r10527578);
        double r10527580 = r10527575 * r10527579;
        double r10527581 = r10527571 + r10527580;
        double r10527582 = r10527567 + r10527581;
        double r10527583 = r10527554 + r10527582;
        return r10527583;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10527584, r10527585, r10527586, r10527587, r10527588, r10527589, r10527590, r10527591, r10527592, r10527593, r10527594, r10527595, r10527596, r10527597, r10527598, r10527599, r10527600, r10527601, r10527602, r10527603, r10527604, r10527605, r10527606, r10527607, r10527608, r10527609, r10527610, r10527611, r10527612, r10527613, r10527614, r10527615, r10527616, r10527617, r10527618, r10527619, r10527620;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10527584, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527585, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10527586);
        mpfr_init(r10527587);
        mpfr_init(r10527588);
        mpfr_init_set_str(r10527589, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10527590);
        mpfr_init(r10527591);
        mpfr_init(r10527592);
        mpfr_init_set_str(r10527593, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10527594);
        mpfr_init(r10527595);
        mpfr_init(r10527596);
        mpfr_init_set_str(r10527597, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10527598);
        mpfr_init(r10527599);
        mpfr_init(r10527600);
        mpfr_init_set_str(r10527601, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10527602);
        mpfr_init(r10527603);
        mpfr_init(r10527604);
        mpfr_init_set_str(r10527605, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10527606);
        mpfr_init(r10527607);
        mpfr_init(r10527608);
        mpfr_init_set_str(r10527609, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10527610);
        mpfr_init(r10527611);
        mpfr_init(r10527612);
        mpfr_init_set_str(r10527613, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10527614);
        mpfr_init(r10527615);
        mpfr_init(r10527616);
        mpfr_init_set_str(r10527617, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10527618);
        mpfr_init(r10527619);
        mpfr_init(r10527620);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10527586, x, MPFR_RNDN);
        mpfr_mul(r10527587, r10527585, r10527586, MPFR_RNDN);
        mpfr_add(r10527588, r10527584, r10527587, MPFR_RNDN);
        ;
        mpfr_mul(r10527590, r10527586, r10527586, MPFR_RNDN);
        mpfr_mul(r10527591, r10527589, r10527590, MPFR_RNDN);
        mpfr_add(r10527592, r10527588, r10527591, MPFR_RNDN);
        ;
        mpfr_mul(r10527594, r10527590, r10527586, MPFR_RNDN);
        mpfr_mul(r10527595, r10527593, r10527594, MPFR_RNDN);
        mpfr_add(r10527596, r10527592, r10527595, MPFR_RNDN);
        ;
        mpfr_mul(r10527598, r10527594, r10527586, MPFR_RNDN);
        mpfr_mul(r10527599, r10527597, r10527598, MPFR_RNDN);
        mpfr_add(r10527600, r10527596, r10527599, MPFR_RNDN);
        ;
        mpfr_mul(r10527602, r10527598, r10527586, MPFR_RNDN);
        mpfr_mul(r10527603, r10527601, r10527602, MPFR_RNDN);
        mpfr_add(r10527604, r10527600, r10527603, MPFR_RNDN);
        ;
        mpfr_mul(r10527606, r10527602, r10527586, MPFR_RNDN);
        mpfr_mul(r10527607, r10527605, r10527606, MPFR_RNDN);
        mpfr_add(r10527608, r10527604, r10527607, MPFR_RNDN);
        ;
        mpfr_mul(r10527610, r10527606, r10527586, MPFR_RNDN);
        mpfr_mul(r10527611, r10527609, r10527610, MPFR_RNDN);
        mpfr_add(r10527612, r10527608, r10527611, MPFR_RNDN);
        ;
        mpfr_mul(r10527614, r10527610, r10527586, MPFR_RNDN);
        mpfr_mul(r10527615, r10527613, r10527614, MPFR_RNDN);
        mpfr_add(r10527616, r10527612, r10527615, MPFR_RNDN);
        ;
        mpfr_mul(r10527618, r10527614, r10527586, MPFR_RNDN);
        mpfr_mul(r10527619, r10527617, r10527618, MPFR_RNDN);
        mpfr_add(r10527620, r10527616, r10527619, MPFR_RNDN);
        return mpfr_get_d(r10527620, MPFR_RNDN);
}

static mpfr_t r10527621, r10527622, r10527623, r10527624, r10527625, r10527626, r10527627, r10527628, r10527629, r10527630, r10527631, r10527632, r10527633, r10527634, r10527635, r10527636, r10527637, r10527638, r10527639, r10527640, r10527641, r10527642, r10527643, r10527644, r10527645, r10527646, r10527647, r10527648, r10527649, r10527650, r10527651, r10527652, r10527653, r10527654, r10527655, r10527656, r10527657, r10527658, r10527659, r10527660, r10527661;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10527621, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527622, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10527623);
        mpfr_init(r10527624);
        mpfr_init(r10527625);
        mpfr_init_set_str(r10527626, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527627, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10527628);
        mpfr_init(r10527629);
        mpfr_init(r10527630);
        mpfr_init(r10527631);
        mpfr_init(r10527632);
        mpfr_init_set_str(r10527633, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10527634);
        mpfr_init_set_str(r10527635, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10527636);
        mpfr_init_set_str(r10527637, "4", 10, MPFR_RNDN);
        mpfr_init(r10527638);
        mpfr_init(r10527639);
        mpfr_init_set_str(r10527640, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10527641);
        mpfr_init(r10527642);
        mpfr_init(r10527643);
        mpfr_init(r10527644);
        mpfr_init(r10527645);
        mpfr_init_set_str(r10527646, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10527647);
        mpfr_init(r10527648);
        mpfr_init(r10527649);
        mpfr_init_set_str(r10527650, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10527651);
        mpfr_init_set_str(r10527652, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10527653);
        mpfr_init_set_str(r10527654, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527655, "1", 10, MPFR_RNDN);
        mpfr_init(r10527656);
        mpfr_init(r10527657);
        mpfr_init(r10527658);
        mpfr_init(r10527659);
        mpfr_init(r10527660);
        mpfr_init(r10527661);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10527623, x, MPFR_RNDN);
        mpfr_mul(r10527624, r10527622, r10527623, MPFR_RNDN);
        mpfr_add(r10527625, r10527621, r10527624, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10527628, r10527627, r10527623, MPFR_RNDN);
        mpfr_add(r10527629, r10527626, r10527628, MPFR_RNDN);
        mpfr_mul(r10527630, r10527629, r10527623, MPFR_RNDN);
        mpfr_mul(r10527631, r10527630, r10527623, MPFR_RNDN);
        mpfr_add(r10527632, r10527625, r10527631, MPFR_RNDN);
        ;
        mpfr_mul(r10527634, r10527623, r10527633, MPFR_RNDN);
        ;
        mpfr_add(r10527636, r10527634, r10527635, MPFR_RNDN);
        ;
        mpfr_pow(r10527638, r10527623, r10527637, MPFR_RNDN);
        mpfr_mul(r10527639, r10527636, r10527638, MPFR_RNDN);
        ;
        mpfr_mul(r10527641, r10527623, r10527623, MPFR_RNDN);
        mpfr_mul(r10527642, r10527640, r10527641, MPFR_RNDN);
        mpfr_mul(r10527643, r10527641, r10527641, MPFR_RNDN);
        mpfr_mul(r10527644, r10527642, r10527643, MPFR_RNDN);
        mpfr_add(r10527645, r10527639, r10527644, MPFR_RNDN);
        ;
        mpfr_mul(r10527647, r10527623, r10527646, MPFR_RNDN);
        mpfr_mul(r10527648, r10527647, r10527641, MPFR_RNDN);
        mpfr_mul(r10527649, r10527648, r10527643, MPFR_RNDN);
        ;
        mpfr_mul(r10527651, r10527623, r10527650, MPFR_RNDN);
        ;
        mpfr_add(r10527653, r10527651, r10527652, MPFR_RNDN);
        ;
        ;
        mpfr_add(r10527656, r10527654, r10527655, MPFR_RNDN);
        mpfr_pow(r10527657, r10527641, r10527656, MPFR_RNDN);
        mpfr_mul(r10527658, r10527653, r10527657, MPFR_RNDN);
        mpfr_add(r10527659, r10527649, r10527658, MPFR_RNDN);
        mpfr_add(r10527660, r10527645, r10527659, MPFR_RNDN);
        mpfr_add(r10527661, r10527632, r10527660, MPFR_RNDN);
        return mpfr_get_d(r10527661, MPFR_RNDN);
}

static mpfr_t r10527662, r10527663, r10527664, r10527665, r10527666, r10527667, r10527668, r10527669, r10527670, r10527671, r10527672, r10527673, r10527674, r10527675, r10527676, r10527677, r10527678, r10527679, r10527680, r10527681, r10527682, r10527683, r10527684, r10527685, r10527686, r10527687, r10527688, r10527689, r10527690, r10527691, r10527692, r10527693, r10527694, r10527695, r10527696, r10527697, r10527698, r10527699, r10527700, r10527701, r10527702;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10527662, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527663, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10527664);
        mpfr_init(r10527665);
        mpfr_init(r10527666);
        mpfr_init_set_str(r10527667, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527668, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10527669);
        mpfr_init(r10527670);
        mpfr_init(r10527671);
        mpfr_init(r10527672);
        mpfr_init(r10527673);
        mpfr_init_set_str(r10527674, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10527675);
        mpfr_init_set_str(r10527676, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10527677);
        mpfr_init_set_str(r10527678, "4", 10, MPFR_RNDN);
        mpfr_init(r10527679);
        mpfr_init(r10527680);
        mpfr_init_set_str(r10527681, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10527682);
        mpfr_init(r10527683);
        mpfr_init(r10527684);
        mpfr_init(r10527685);
        mpfr_init(r10527686);
        mpfr_init_set_str(r10527687, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10527688);
        mpfr_init(r10527689);
        mpfr_init(r10527690);
        mpfr_init_set_str(r10527691, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10527692);
        mpfr_init_set_str(r10527693, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10527694);
        mpfr_init_set_str(r10527695, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r10527696, "1", 10, MPFR_RNDN);
        mpfr_init(r10527697);
        mpfr_init(r10527698);
        mpfr_init(r10527699);
        mpfr_init(r10527700);
        mpfr_init(r10527701);
        mpfr_init(r10527702);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10527664, x, MPFR_RNDN);
        mpfr_mul(r10527665, r10527663, r10527664, MPFR_RNDN);
        mpfr_add(r10527666, r10527662, r10527665, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10527669, r10527668, r10527664, MPFR_RNDN);
        mpfr_add(r10527670, r10527667, r10527669, MPFR_RNDN);
        mpfr_mul(r10527671, r10527670, r10527664, MPFR_RNDN);
        mpfr_mul(r10527672, r10527671, r10527664, MPFR_RNDN);
        mpfr_add(r10527673, r10527666, r10527672, MPFR_RNDN);
        ;
        mpfr_mul(r10527675, r10527664, r10527674, MPFR_RNDN);
        ;
        mpfr_add(r10527677, r10527675, r10527676, MPFR_RNDN);
        ;
        mpfr_pow(r10527679, r10527664, r10527678, MPFR_RNDN);
        mpfr_mul(r10527680, r10527677, r10527679, MPFR_RNDN);
        ;
        mpfr_mul(r10527682, r10527664, r10527664, MPFR_RNDN);
        mpfr_mul(r10527683, r10527681, r10527682, MPFR_RNDN);
        mpfr_mul(r10527684, r10527682, r10527682, MPFR_RNDN);
        mpfr_mul(r10527685, r10527683, r10527684, MPFR_RNDN);
        mpfr_add(r10527686, r10527680, r10527685, MPFR_RNDN);
        ;
        mpfr_mul(r10527688, r10527664, r10527687, MPFR_RNDN);
        mpfr_mul(r10527689, r10527688, r10527682, MPFR_RNDN);
        mpfr_mul(r10527690, r10527689, r10527684, MPFR_RNDN);
        ;
        mpfr_mul(r10527692, r10527664, r10527691, MPFR_RNDN);
        ;
        mpfr_add(r10527694, r10527692, r10527693, MPFR_RNDN);
        ;
        ;
        mpfr_add(r10527697, r10527695, r10527696, MPFR_RNDN);
        mpfr_pow(r10527698, r10527682, r10527697, MPFR_RNDN);
        mpfr_mul(r10527699, r10527694, r10527698, MPFR_RNDN);
        mpfr_add(r10527700, r10527690, r10527699, MPFR_RNDN);
        mpfr_add(r10527701, r10527686, r10527700, MPFR_RNDN);
        mpfr_add(r10527702, r10527673, r10527701, MPFR_RNDN);
        return mpfr_get_d(r10527702, MPFR_RNDN);
}

