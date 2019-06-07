#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8924536 = -0.3125;
        float r8924537 = 6.5625;
        float r8924538 = x;
        float r8924539 = r8924538 * r8924538;
        float r8924540 = r8924537 * r8924539;
        float r8924541 = r8924536 + r8924540;
        float r8924542 = -19.6875;
        float r8924543 = r8924539 * r8924538;
        float r8924544 = r8924543 * r8924538;
        float r8924545 = r8924542 * r8924544;
        float r8924546 = r8924541 + r8924545;
        float r8924547 = 14.4375;
        float r8924548 = r8924544 * r8924538;
        float r8924549 = r8924548 * r8924538;
        float r8924550 = r8924547 * r8924549;
        float r8924551 = r8924546 + r8924550;
        return r8924551;
}

double f_id(double x) {
        double r8924552 = -0.3125;
        double r8924553 = 6.5625;
        double r8924554 = x;
        double r8924555 = r8924554 * r8924554;
        double r8924556 = r8924553 * r8924555;
        double r8924557 = r8924552 + r8924556;
        double r8924558 = -19.6875;
        double r8924559 = r8924555 * r8924554;
        double r8924560 = r8924559 * r8924554;
        double r8924561 = r8924558 * r8924560;
        double r8924562 = r8924557 + r8924561;
        double r8924563 = 14.4375;
        double r8924564 = r8924560 * r8924554;
        double r8924565 = r8924564 * r8924554;
        double r8924566 = r8924563 * r8924565;
        double r8924567 = r8924562 + r8924566;
        return r8924567;
}


double f_of(float x) {
        float r8924568 = x;
        float r8924569 = 6.5625;
        float r8924570 = r8924568 * r8924569;
        float r8924571 = r8924570 * r8924568;
        float r8924572 = -0.3125;
        float r8924573 = r8924571 + r8924572;
        float r8924574 = 3;
        float r8924575 = pow(r8924568, r8924574);
        float r8924576 = 1;
        float r8924577 = r8924574 + r8924576;
        float r8924578 = pow(r8924575, r8924577);
        float r8924579 = cbrt(r8924578);
        float r8924580 = -19.6875;
        float r8924581 = r8924568 * r8924568;
        float r8924582 = 14.4375;
        float r8924583 = r8924581 * r8924582;
        float r8924584 = r8924580 + r8924583;
        float r8924585 = r8924579 * r8924584;
        float r8924586 = r8924573 + r8924585;
        return r8924586;
}

double f_od(double x) {
        double r8924587 = x;
        double r8924588 = 6.5625;
        double r8924589 = r8924587 * r8924588;
        double r8924590 = r8924589 * r8924587;
        double r8924591 = -0.3125;
        double r8924592 = r8924590 + r8924591;
        double r8924593 = 3;
        double r8924594 = pow(r8924587, r8924593);
        double r8924595 = 1;
        double r8924596 = r8924593 + r8924595;
        double r8924597 = pow(r8924594, r8924596);
        double r8924598 = cbrt(r8924597);
        double r8924599 = -19.6875;
        double r8924600 = r8924587 * r8924587;
        double r8924601 = 14.4375;
        double r8924602 = r8924600 * r8924601;
        double r8924603 = r8924599 + r8924602;
        double r8924604 = r8924598 * r8924603;
        double r8924605 = r8924592 + r8924604;
        return r8924605;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924606, r8924607, r8924608, r8924609, r8924610, r8924611, r8924612, r8924613, r8924614, r8924615, r8924616, r8924617, r8924618, r8924619, r8924620, r8924621;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8924606, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8924607, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8924608);
        mpfr_init(r8924609);
        mpfr_init(r8924610);
        mpfr_init(r8924611);
        mpfr_init_set_str(r8924612, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8924613);
        mpfr_init(r8924614);
        mpfr_init(r8924615);
        mpfr_init(r8924616);
        mpfr_init_set_str(r8924617, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8924618);
        mpfr_init(r8924619);
        mpfr_init(r8924620);
        mpfr_init(r8924621);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8924608, x, MPFR_RNDN);
        mpfr_mul(r8924609, r8924608, r8924608, MPFR_RNDN);
        mpfr_mul(r8924610, r8924607, r8924609, MPFR_RNDN);
        mpfr_add(r8924611, r8924606, r8924610, MPFR_RNDN);
        ;
        mpfr_mul(r8924613, r8924609, r8924608, MPFR_RNDN);
        mpfr_mul(r8924614, r8924613, r8924608, MPFR_RNDN);
        mpfr_mul(r8924615, r8924612, r8924614, MPFR_RNDN);
        mpfr_add(r8924616, r8924611, r8924615, MPFR_RNDN);
        ;
        mpfr_mul(r8924618, r8924614, r8924608, MPFR_RNDN);
        mpfr_mul(r8924619, r8924618, r8924608, MPFR_RNDN);
        mpfr_mul(r8924620, r8924617, r8924619, MPFR_RNDN);
        mpfr_add(r8924621, r8924616, r8924620, MPFR_RNDN);
        return mpfr_get_d(r8924621, MPFR_RNDN);
}

static mpfr_t r8924622, r8924623, r8924624, r8924625, r8924626, r8924627, r8924628, r8924629, r8924630, r8924631, r8924632, r8924633, r8924634, r8924635, r8924636, r8924637, r8924638, r8924639, r8924640;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8924622);
        mpfr_init_set_str(r8924623, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8924624);
        mpfr_init(r8924625);
        mpfr_init_set_str(r8924626, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r8924627);
        mpfr_init_set_str(r8924628, "3", 10, MPFR_RNDN);
        mpfr_init(r8924629);
        mpfr_init_set_str(r8924630, "1", 10, MPFR_RNDN);
        mpfr_init(r8924631);
        mpfr_init(r8924632);
        mpfr_init(r8924633);
        mpfr_init_set_str(r8924634, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8924635);
        mpfr_init_set_str(r8924636, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8924637);
        mpfr_init(r8924638);
        mpfr_init(r8924639);
        mpfr_init(r8924640);
}

double f_fm(double x) {
        mpfr_set_d(r8924622, x, MPFR_RNDN);
        ;
        mpfr_mul(r8924624, r8924622, r8924623, MPFR_RNDN);
        mpfr_mul(r8924625, r8924624, r8924622, MPFR_RNDN);
        ;
        mpfr_add(r8924627, r8924625, r8924626, MPFR_RNDN);
        ;
        mpfr_pow(r8924629, r8924622, r8924628, MPFR_RNDN);
        ;
        mpfr_add(r8924631, r8924628, r8924630, MPFR_RNDN);
        mpfr_pow(r8924632, r8924629, r8924631, MPFR_RNDN);
        mpfr_cbrt(r8924633, r8924632, MPFR_RNDN);
        ;
        mpfr_mul(r8924635, r8924622, r8924622, MPFR_RNDN);
        ;
        mpfr_mul(r8924637, r8924635, r8924636, MPFR_RNDN);
        mpfr_add(r8924638, r8924634, r8924637, MPFR_RNDN);
        mpfr_mul(r8924639, r8924633, r8924638, MPFR_RNDN);
        mpfr_add(r8924640, r8924627, r8924639, MPFR_RNDN);
        return mpfr_get_d(r8924640, MPFR_RNDN);
}

static mpfr_t r8924641, r8924642, r8924643, r8924644, r8924645, r8924646, r8924647, r8924648, r8924649, r8924650, r8924651, r8924652, r8924653, r8924654, r8924655, r8924656, r8924657, r8924658, r8924659;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8924641);
        mpfr_init_set_str(r8924642, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8924643);
        mpfr_init(r8924644);
        mpfr_init_set_str(r8924645, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r8924646);
        mpfr_init_set_str(r8924647, "3", 10, MPFR_RNDN);
        mpfr_init(r8924648);
        mpfr_init_set_str(r8924649, "1", 10, MPFR_RNDN);
        mpfr_init(r8924650);
        mpfr_init(r8924651);
        mpfr_init(r8924652);
        mpfr_init_set_str(r8924653, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8924654);
        mpfr_init_set_str(r8924655, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8924656);
        mpfr_init(r8924657);
        mpfr_init(r8924658);
        mpfr_init(r8924659);
}

double f_dm(double x) {
        mpfr_set_d(r8924641, x, MPFR_RNDN);
        ;
        mpfr_mul(r8924643, r8924641, r8924642, MPFR_RNDN);
        mpfr_mul(r8924644, r8924643, r8924641, MPFR_RNDN);
        ;
        mpfr_add(r8924646, r8924644, r8924645, MPFR_RNDN);
        ;
        mpfr_pow(r8924648, r8924641, r8924647, MPFR_RNDN);
        ;
        mpfr_add(r8924650, r8924647, r8924649, MPFR_RNDN);
        mpfr_pow(r8924651, r8924648, r8924650, MPFR_RNDN);
        mpfr_cbrt(r8924652, r8924651, MPFR_RNDN);
        ;
        mpfr_mul(r8924654, r8924641, r8924641, MPFR_RNDN);
        ;
        mpfr_mul(r8924656, r8924654, r8924655, MPFR_RNDN);
        mpfr_add(r8924657, r8924653, r8924656, MPFR_RNDN);
        mpfr_mul(r8924658, r8924652, r8924657, MPFR_RNDN);
        mpfr_add(r8924659, r8924646, r8924658, MPFR_RNDN);
        return mpfr_get_d(r8924659, MPFR_RNDN);
}

