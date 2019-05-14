#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8956467 = -30240.0;
        float r8956468 = 302400.0;
        float r8956469 = x;
        float r8956470 = r8956469 * r8956469;
        float r8956471 = r8956468 * r8956470;
        float r8956472 = r8956467 + r8956471;
        float r8956473 = -403200.0;
        float r8956474 = r8956470 * r8956469;
        float r8956475 = r8956474 * r8956469;
        float r8956476 = r8956473 * r8956475;
        float r8956477 = r8956472 + r8956476;
        float r8956478 = 161280.0;
        float r8956479 = r8956475 * r8956469;
        float r8956480 = r8956479 * r8956469;
        float r8956481 = r8956478 * r8956480;
        float r8956482 = r8956477 + r8956481;
        float r8956483 = -23040.0;
        float r8956484 = r8956480 * r8956469;
        float r8956485 = r8956484 * r8956469;
        float r8956486 = r8956483 * r8956485;
        float r8956487 = r8956482 + r8956486;
        float r8956488 = 1024.0;
        float r8956489 = r8956485 * r8956469;
        float r8956490 = r8956489 * r8956469;
        float r8956491 = r8956488 * r8956490;
        float r8956492 = r8956487 + r8956491;
        return r8956492;
}

double f_id(double x) {
        double r8956493 = -30240.0;
        double r8956494 = 302400.0;
        double r8956495 = x;
        double r8956496 = r8956495 * r8956495;
        double r8956497 = r8956494 * r8956496;
        double r8956498 = r8956493 + r8956497;
        double r8956499 = -403200.0;
        double r8956500 = r8956496 * r8956495;
        double r8956501 = r8956500 * r8956495;
        double r8956502 = r8956499 * r8956501;
        double r8956503 = r8956498 + r8956502;
        double r8956504 = 161280.0;
        double r8956505 = r8956501 * r8956495;
        double r8956506 = r8956505 * r8956495;
        double r8956507 = r8956504 * r8956506;
        double r8956508 = r8956503 + r8956507;
        double r8956509 = -23040.0;
        double r8956510 = r8956506 * r8956495;
        double r8956511 = r8956510 * r8956495;
        double r8956512 = r8956509 * r8956511;
        double r8956513 = r8956508 + r8956512;
        double r8956514 = 1024.0;
        double r8956515 = r8956511 * r8956495;
        double r8956516 = r8956515 * r8956495;
        double r8956517 = r8956514 * r8956516;
        double r8956518 = r8956513 + r8956517;
        return r8956518;
}


double f_of(float x) {
        float r8956519 = x;
        float r8956520 = 3;
        float r8956521 = pow(r8956519, r8956520);
        float r8956522 = 1024.0;
        float r8956523 = r8956522 * r8956519;
        float r8956524 = r8956521 * r8956523;
        float r8956525 = 1;
        float r8956526 = r8956525 + r8956520;
        float r8956527 = r8956525 + r8956525;
        float r8956528 = r8956526 + r8956527;
        float r8956529 = pow(r8956519, r8956528);
        float r8956530 = r8956524 * r8956529;
        float r8956531 = -403200.0;
        float r8956532 = 4;
        float r8956533 = pow(r8956519, r8956532);
        float r8956534 = r8956531 * r8956533;
        float r8956535 = -30240.0;
        float r8956536 = r8956534 + r8956535;
        float r8956537 = r8956530 + r8956536;
        float r8956538 = r8956519 * r8956519;
        float r8956539 = pow(r8956538, r8956520);
        float r8956540 = -23040.0;
        float r8956541 = r8956540 * r8956538;
        float r8956542 = 161280.0;
        float r8956543 = r8956541 + r8956542;
        float r8956544 = r8956539 * r8956543;
        float r8956545 = 302400.0;
        float r8956546 = r8956545 * r8956519;
        float r8956547 = r8956546 * r8956519;
        float r8956548 = r8956544 + r8956547;
        float r8956549 = r8956537 + r8956548;
        return r8956549;
}

double f_od(double x) {
        double r8956550 = x;
        double r8956551 = 3;
        double r8956552 = pow(r8956550, r8956551);
        double r8956553 = 1024.0;
        double r8956554 = r8956553 * r8956550;
        double r8956555 = r8956552 * r8956554;
        double r8956556 = 1;
        double r8956557 = r8956556 + r8956551;
        double r8956558 = r8956556 + r8956556;
        double r8956559 = r8956557 + r8956558;
        double r8956560 = pow(r8956550, r8956559);
        double r8956561 = r8956555 * r8956560;
        double r8956562 = -403200.0;
        double r8956563 = 4;
        double r8956564 = pow(r8956550, r8956563);
        double r8956565 = r8956562 * r8956564;
        double r8956566 = -30240.0;
        double r8956567 = r8956565 + r8956566;
        double r8956568 = r8956561 + r8956567;
        double r8956569 = r8956550 * r8956550;
        double r8956570 = pow(r8956569, r8956551);
        double r8956571 = -23040.0;
        double r8956572 = r8956571 * r8956569;
        double r8956573 = 161280.0;
        double r8956574 = r8956572 + r8956573;
        double r8956575 = r8956570 * r8956574;
        double r8956576 = 302400.0;
        double r8956577 = r8956576 * r8956550;
        double r8956578 = r8956577 * r8956550;
        double r8956579 = r8956575 + r8956578;
        double r8956580 = r8956568 + r8956579;
        return r8956580;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8956581, r8956582, r8956583, r8956584, r8956585, r8956586, r8956587, r8956588, r8956589, r8956590, r8956591, r8956592, r8956593, r8956594, r8956595, r8956596, r8956597, r8956598, r8956599, r8956600, r8956601, r8956602, r8956603, r8956604, r8956605, r8956606;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8956581, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8956582, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r8956583);
        mpfr_init(r8956584);
        mpfr_init(r8956585);
        mpfr_init(r8956586);
        mpfr_init_set_str(r8956587, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r8956588);
        mpfr_init(r8956589);
        mpfr_init(r8956590);
        mpfr_init(r8956591);
        mpfr_init_set_str(r8956592, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r8956593);
        mpfr_init(r8956594);
        mpfr_init(r8956595);
        mpfr_init(r8956596);
        mpfr_init_set_str(r8956597, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r8956598);
        mpfr_init(r8956599);
        mpfr_init(r8956600);
        mpfr_init(r8956601);
        mpfr_init_set_str(r8956602, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r8956603);
        mpfr_init(r8956604);
        mpfr_init(r8956605);
        mpfr_init(r8956606);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8956583, x, MPFR_RNDN);
        mpfr_mul(r8956584, r8956583, r8956583, MPFR_RNDN);
        mpfr_mul(r8956585, r8956582, r8956584, MPFR_RNDN);
        mpfr_add(r8956586, r8956581, r8956585, MPFR_RNDN);
        ;
        mpfr_mul(r8956588, r8956584, r8956583, MPFR_RNDN);
        mpfr_mul(r8956589, r8956588, r8956583, MPFR_RNDN);
        mpfr_mul(r8956590, r8956587, r8956589, MPFR_RNDN);
        mpfr_add(r8956591, r8956586, r8956590, MPFR_RNDN);
        ;
        mpfr_mul(r8956593, r8956589, r8956583, MPFR_RNDN);
        mpfr_mul(r8956594, r8956593, r8956583, MPFR_RNDN);
        mpfr_mul(r8956595, r8956592, r8956594, MPFR_RNDN);
        mpfr_add(r8956596, r8956591, r8956595, MPFR_RNDN);
        ;
        mpfr_mul(r8956598, r8956594, r8956583, MPFR_RNDN);
        mpfr_mul(r8956599, r8956598, r8956583, MPFR_RNDN);
        mpfr_mul(r8956600, r8956597, r8956599, MPFR_RNDN);
        mpfr_add(r8956601, r8956596, r8956600, MPFR_RNDN);
        ;
        mpfr_mul(r8956603, r8956599, r8956583, MPFR_RNDN);
        mpfr_mul(r8956604, r8956603, r8956583, MPFR_RNDN);
        mpfr_mul(r8956605, r8956602, r8956604, MPFR_RNDN);
        mpfr_add(r8956606, r8956601, r8956605, MPFR_RNDN);
        return mpfr_get_d(r8956606, MPFR_RNDN);
}

static mpfr_t r8956607, r8956608, r8956609, r8956610, r8956611, r8956612, r8956613, r8956614, r8956615, r8956616, r8956617, r8956618, r8956619, r8956620, r8956621, r8956622, r8956623, r8956624, r8956625, r8956626, r8956627, r8956628, r8956629, r8956630, r8956631, r8956632, r8956633, r8956634, r8956635, r8956636, r8956637;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8956607);
        mpfr_init_set_str(r8956608, "3", 10, MPFR_RNDN);
        mpfr_init(r8956609);
        mpfr_init_set_str(r8956610, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r8956611);
        mpfr_init(r8956612);
        mpfr_init_set_str(r8956613, "1", 10, MPFR_RNDN);
        mpfr_init(r8956614);
        mpfr_init(r8956615);
        mpfr_init(r8956616);
        mpfr_init(r8956617);
        mpfr_init(r8956618);
        mpfr_init_set_str(r8956619, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8956620, "4", 10, MPFR_RNDN);
        mpfr_init(r8956621);
        mpfr_init(r8956622);
        mpfr_init_set_str(r8956623, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r8956624);
        mpfr_init(r8956625);
        mpfr_init(r8956626);
        mpfr_init(r8956627);
        mpfr_init_set_str(r8956628, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r8956629);
        mpfr_init_set_str(r8956630, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r8956631);
        mpfr_init(r8956632);
        mpfr_init_set_str(r8956633, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r8956634);
        mpfr_init(r8956635);
        mpfr_init(r8956636);
        mpfr_init(r8956637);
}

double f_fm(double x) {
        mpfr_set_d(r8956607, x, MPFR_RNDN);
        ;
        mpfr_pow(r8956609, r8956607, r8956608, MPFR_RNDN);
        ;
        mpfr_mul(r8956611, r8956610, r8956607, MPFR_RNDN);
        mpfr_mul(r8956612, r8956609, r8956611, MPFR_RNDN);
        ;
        mpfr_add(r8956614, r8956613, r8956608, MPFR_RNDN);
        mpfr_add(r8956615, r8956613, r8956613, MPFR_RNDN);
        mpfr_add(r8956616, r8956614, r8956615, MPFR_RNDN);
        mpfr_pow(r8956617, r8956607, r8956616, MPFR_RNDN);
        mpfr_mul(r8956618, r8956612, r8956617, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8956621, r8956607, r8956620, MPFR_RNDN);
        mpfr_mul(r8956622, r8956619, r8956621, MPFR_RNDN);
        ;
        mpfr_add(r8956624, r8956622, r8956623, MPFR_RNDN);
        mpfr_add(r8956625, r8956618, r8956624, MPFR_RNDN);
        mpfr_mul(r8956626, r8956607, r8956607, MPFR_RNDN);
        mpfr_pow(r8956627, r8956626, r8956608, MPFR_RNDN);
        ;
        mpfr_mul(r8956629, r8956628, r8956626, MPFR_RNDN);
        ;
        mpfr_add(r8956631, r8956629, r8956630, MPFR_RNDN);
        mpfr_mul(r8956632, r8956627, r8956631, MPFR_RNDN);
        ;
        mpfr_mul(r8956634, r8956633, r8956607, MPFR_RNDN);
        mpfr_mul(r8956635, r8956634, r8956607, MPFR_RNDN);
        mpfr_add(r8956636, r8956632, r8956635, MPFR_RNDN);
        mpfr_add(r8956637, r8956625, r8956636, MPFR_RNDN);
        return mpfr_get_d(r8956637, MPFR_RNDN);
}

static mpfr_t r8956638, r8956639, r8956640, r8956641, r8956642, r8956643, r8956644, r8956645, r8956646, r8956647, r8956648, r8956649, r8956650, r8956651, r8956652, r8956653, r8956654, r8956655, r8956656, r8956657, r8956658, r8956659, r8956660, r8956661, r8956662, r8956663, r8956664, r8956665, r8956666, r8956667, r8956668;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8956638);
        mpfr_init_set_str(r8956639, "3", 10, MPFR_RNDN);
        mpfr_init(r8956640);
        mpfr_init_set_str(r8956641, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r8956642);
        mpfr_init(r8956643);
        mpfr_init_set_str(r8956644, "1", 10, MPFR_RNDN);
        mpfr_init(r8956645);
        mpfr_init(r8956646);
        mpfr_init(r8956647);
        mpfr_init(r8956648);
        mpfr_init(r8956649);
        mpfr_init_set_str(r8956650, "-403200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8956651, "4", 10, MPFR_RNDN);
        mpfr_init(r8956652);
        mpfr_init(r8956653);
        mpfr_init_set_str(r8956654, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r8956655);
        mpfr_init(r8956656);
        mpfr_init(r8956657);
        mpfr_init(r8956658);
        mpfr_init_set_str(r8956659, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r8956660);
        mpfr_init_set_str(r8956661, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r8956662);
        mpfr_init(r8956663);
        mpfr_init_set_str(r8956664, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r8956665);
        mpfr_init(r8956666);
        mpfr_init(r8956667);
        mpfr_init(r8956668);
}

double f_dm(double x) {
        mpfr_set_d(r8956638, x, MPFR_RNDN);
        ;
        mpfr_pow(r8956640, r8956638, r8956639, MPFR_RNDN);
        ;
        mpfr_mul(r8956642, r8956641, r8956638, MPFR_RNDN);
        mpfr_mul(r8956643, r8956640, r8956642, MPFR_RNDN);
        ;
        mpfr_add(r8956645, r8956644, r8956639, MPFR_RNDN);
        mpfr_add(r8956646, r8956644, r8956644, MPFR_RNDN);
        mpfr_add(r8956647, r8956645, r8956646, MPFR_RNDN);
        mpfr_pow(r8956648, r8956638, r8956647, MPFR_RNDN);
        mpfr_mul(r8956649, r8956643, r8956648, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8956652, r8956638, r8956651, MPFR_RNDN);
        mpfr_mul(r8956653, r8956650, r8956652, MPFR_RNDN);
        ;
        mpfr_add(r8956655, r8956653, r8956654, MPFR_RNDN);
        mpfr_add(r8956656, r8956649, r8956655, MPFR_RNDN);
        mpfr_mul(r8956657, r8956638, r8956638, MPFR_RNDN);
        mpfr_pow(r8956658, r8956657, r8956639, MPFR_RNDN);
        ;
        mpfr_mul(r8956660, r8956659, r8956657, MPFR_RNDN);
        ;
        mpfr_add(r8956662, r8956660, r8956661, MPFR_RNDN);
        mpfr_mul(r8956663, r8956658, r8956662, MPFR_RNDN);
        ;
        mpfr_mul(r8956665, r8956664, r8956638, MPFR_RNDN);
        mpfr_mul(r8956666, r8956665, r8956638, MPFR_RNDN);
        mpfr_add(r8956667, r8956663, r8956666, MPFR_RNDN);
        mpfr_add(r8956668, r8956656, r8956667, MPFR_RNDN);
        return mpfr_get_d(r8956668, MPFR_RNDN);
}

