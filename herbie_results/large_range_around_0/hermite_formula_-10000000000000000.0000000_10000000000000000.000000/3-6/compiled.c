#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6896505 = -120.0;
        float r6896506 = 720.0;
        float r6896507 = x;
        float r6896508 = r6896507 * r6896507;
        float r6896509 = r6896506 * r6896508;
        float r6896510 = r6896505 + r6896509;
        float r6896511 = -480.0;
        float r6896512 = r6896508 * r6896507;
        float r6896513 = r6896512 * r6896507;
        float r6896514 = r6896511 * r6896513;
        float r6896515 = r6896510 + r6896514;
        float r6896516 = 64.0;
        float r6896517 = r6896513 * r6896507;
        float r6896518 = r6896517 * r6896507;
        float r6896519 = r6896516 * r6896518;
        float r6896520 = r6896515 + r6896519;
        return r6896520;
}

double f_id(double x) {
        double r6896521 = -120.0;
        double r6896522 = 720.0;
        double r6896523 = x;
        double r6896524 = r6896523 * r6896523;
        double r6896525 = r6896522 * r6896524;
        double r6896526 = r6896521 + r6896525;
        double r6896527 = -480.0;
        double r6896528 = r6896524 * r6896523;
        double r6896529 = r6896528 * r6896523;
        double r6896530 = r6896527 * r6896529;
        double r6896531 = r6896526 + r6896530;
        double r6896532 = 64.0;
        double r6896533 = r6896529 * r6896523;
        double r6896534 = r6896533 * r6896523;
        double r6896535 = r6896532 * r6896534;
        double r6896536 = r6896531 + r6896535;
        return r6896536;
}


double f_of(float x) {
        float r6896537 = x;
        float r6896538 = 720.0;
        float r6896539 = r6896537 * r6896538;
        float r6896540 = r6896539 * r6896537;
        float r6896541 = -120.0;
        float r6896542 = r6896540 + r6896541;
        float r6896543 = 64.0;
        float r6896544 = 6;
        float r6896545 = pow(r6896537, r6896544);
        float r6896546 = r6896543 * r6896545;
        float r6896547 = 480.0;
        float r6896548 = 4;
        float r6896549 = pow(r6896537, r6896548);
        float r6896550 = r6896547 * r6896549;
        float r6896551 = r6896546 - r6896550;
        float r6896552 = r6896542 + r6896551;
        return r6896552;
}

double f_od(double x) {
        double r6896553 = x;
        double r6896554 = 720.0;
        double r6896555 = r6896553 * r6896554;
        double r6896556 = r6896555 * r6896553;
        double r6896557 = -120.0;
        double r6896558 = r6896556 + r6896557;
        double r6896559 = 64.0;
        double r6896560 = 6;
        double r6896561 = pow(r6896553, r6896560);
        double r6896562 = r6896559 * r6896561;
        double r6896563 = 480.0;
        double r6896564 = 4;
        double r6896565 = pow(r6896553, r6896564);
        double r6896566 = r6896563 * r6896565;
        double r6896567 = r6896562 - r6896566;
        double r6896568 = r6896558 + r6896567;
        return r6896568;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896569, r6896570, r6896571, r6896572, r6896573, r6896574, r6896575, r6896576, r6896577, r6896578, r6896579, r6896580, r6896581, r6896582, r6896583, r6896584;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6896569, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896570, "720.0", 10, MPFR_RNDN);
        mpfr_init(r6896571);
        mpfr_init(r6896572);
        mpfr_init(r6896573);
        mpfr_init(r6896574);
        mpfr_init_set_str(r6896575, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r6896576);
        mpfr_init(r6896577);
        mpfr_init(r6896578);
        mpfr_init(r6896579);
        mpfr_init_set_str(r6896580, "64.0", 10, MPFR_RNDN);
        mpfr_init(r6896581);
        mpfr_init(r6896582);
        mpfr_init(r6896583);
        mpfr_init(r6896584);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6896571, x, MPFR_RNDN);
        mpfr_mul(r6896572, r6896571, r6896571, MPFR_RNDN);
        mpfr_mul(r6896573, r6896570, r6896572, MPFR_RNDN);
        mpfr_add(r6896574, r6896569, r6896573, MPFR_RNDN);
        ;
        mpfr_mul(r6896576, r6896572, r6896571, MPFR_RNDN);
        mpfr_mul(r6896577, r6896576, r6896571, MPFR_RNDN);
        mpfr_mul(r6896578, r6896575, r6896577, MPFR_RNDN);
        mpfr_add(r6896579, r6896574, r6896578, MPFR_RNDN);
        ;
        mpfr_mul(r6896581, r6896577, r6896571, MPFR_RNDN);
        mpfr_mul(r6896582, r6896581, r6896571, MPFR_RNDN);
        mpfr_mul(r6896583, r6896580, r6896582, MPFR_RNDN);
        mpfr_add(r6896584, r6896579, r6896583, MPFR_RNDN);
        return mpfr_get_d(r6896584, MPFR_RNDN);
}

static mpfr_t r6896585, r6896586, r6896587, r6896588, r6896589, r6896590, r6896591, r6896592, r6896593, r6896594, r6896595, r6896596, r6896597, r6896598, r6896599, r6896600;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6896585);
        mpfr_init_set_str(r6896586, "720.0", 10, MPFR_RNDN);
        mpfr_init(r6896587);
        mpfr_init(r6896588);
        mpfr_init_set_str(r6896589, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r6896590);
        mpfr_init_set_str(r6896591, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896592, "6", 10, MPFR_RNDN);
        mpfr_init(r6896593);
        mpfr_init(r6896594);
        mpfr_init_set_str(r6896595, "480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896596, "4", 10, MPFR_RNDN);
        mpfr_init(r6896597);
        mpfr_init(r6896598);
        mpfr_init(r6896599);
        mpfr_init(r6896600);
}

double f_fm(double x) {
        mpfr_set_d(r6896585, x, MPFR_RNDN);
        ;
        mpfr_mul(r6896587, r6896585, r6896586, MPFR_RNDN);
        mpfr_mul(r6896588, r6896587, r6896585, MPFR_RNDN);
        ;
        mpfr_add(r6896590, r6896588, r6896589, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896593, r6896585, r6896592, MPFR_RNDN);
        mpfr_mul(r6896594, r6896591, r6896593, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896597, r6896585, r6896596, MPFR_RNDN);
        mpfr_mul(r6896598, r6896595, r6896597, MPFR_RNDN);
        mpfr_sub(r6896599, r6896594, r6896598, MPFR_RNDN);
        mpfr_add(r6896600, r6896590, r6896599, MPFR_RNDN);
        return mpfr_get_d(r6896600, MPFR_RNDN);
}

static mpfr_t r6896601, r6896602, r6896603, r6896604, r6896605, r6896606, r6896607, r6896608, r6896609, r6896610, r6896611, r6896612, r6896613, r6896614, r6896615, r6896616;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6896601);
        mpfr_init_set_str(r6896602, "720.0", 10, MPFR_RNDN);
        mpfr_init(r6896603);
        mpfr_init(r6896604);
        mpfr_init_set_str(r6896605, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r6896606);
        mpfr_init_set_str(r6896607, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896608, "6", 10, MPFR_RNDN);
        mpfr_init(r6896609);
        mpfr_init(r6896610);
        mpfr_init_set_str(r6896611, "480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896612, "4", 10, MPFR_RNDN);
        mpfr_init(r6896613);
        mpfr_init(r6896614);
        mpfr_init(r6896615);
        mpfr_init(r6896616);
}

double f_dm(double x) {
        mpfr_set_d(r6896601, x, MPFR_RNDN);
        ;
        mpfr_mul(r6896603, r6896601, r6896602, MPFR_RNDN);
        mpfr_mul(r6896604, r6896603, r6896601, MPFR_RNDN);
        ;
        mpfr_add(r6896606, r6896604, r6896605, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896609, r6896601, r6896608, MPFR_RNDN);
        mpfr_mul(r6896610, r6896607, r6896609, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6896613, r6896601, r6896612, MPFR_RNDN);
        mpfr_mul(r6896614, r6896611, r6896613, MPFR_RNDN);
        mpfr_sub(r6896615, r6896610, r6896614, MPFR_RNDN);
        mpfr_add(r6896616, r6896606, r6896615, MPFR_RNDN);
        return mpfr_get_d(r6896616, MPFR_RNDN);
}

