#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r4677539 = 1.0;
        float r4677540 = -7.0;
        float r4677541 = x;
        float r4677542 = r4677540 * r4677541;
        float r4677543 = r4677539 + r4677542;
        float r4677544 = 10.5;
        float r4677545 = r4677541 * r4677541;
        float r4677546 = r4677544 * r4677545;
        float r4677547 = r4677543 + r4677546;
        float r4677548 = -5.833333;
        float r4677549 = r4677545 * r4677541;
        float r4677550 = r4677548 * r4677549;
        float r4677551 = r4677547 + r4677550;
        float r4677552 = 1.458333;
        float r4677553 = r4677549 * r4677541;
        float r4677554 = r4677552 * r4677553;
        float r4677555 = r4677551 + r4677554;
        float r4677556 = -0.175;
        float r4677557 = r4677553 * r4677541;
        float r4677558 = r4677556 * r4677557;
        float r4677559 = r4677555 + r4677558;
        float r4677560 = 0.009722;
        float r4677561 = r4677557 * r4677541;
        float r4677562 = r4677560 * r4677561;
        float r4677563 = r4677559 + r4677562;
        float r4677564 = -0.000198;
        float r4677565 = r4677561 * r4677541;
        float r4677566 = r4677564 * r4677565;
        float r4677567 = r4677563 + r4677566;
        return r4677567;
}

double f_id(double x) {
        double r4677568 = 1.0;
        double r4677569 = -7.0;
        double r4677570 = x;
        double r4677571 = r4677569 * r4677570;
        double r4677572 = r4677568 + r4677571;
        double r4677573 = 10.5;
        double r4677574 = r4677570 * r4677570;
        double r4677575 = r4677573 * r4677574;
        double r4677576 = r4677572 + r4677575;
        double r4677577 = -5.833333;
        double r4677578 = r4677574 * r4677570;
        double r4677579 = r4677577 * r4677578;
        double r4677580 = r4677576 + r4677579;
        double r4677581 = 1.458333;
        double r4677582 = r4677578 * r4677570;
        double r4677583 = r4677581 * r4677582;
        double r4677584 = r4677580 + r4677583;
        double r4677585 = -0.175;
        double r4677586 = r4677582 * r4677570;
        double r4677587 = r4677585 * r4677586;
        double r4677588 = r4677584 + r4677587;
        double r4677589 = 0.009722;
        double r4677590 = r4677586 * r4677570;
        double r4677591 = r4677589 * r4677590;
        double r4677592 = r4677588 + r4677591;
        double r4677593 = -0.000198;
        double r4677594 = r4677590 * r4677570;
        double r4677595 = r4677593 * r4677594;
        double r4677596 = r4677592 + r4677595;
        return r4677596;
}


double f_of(float x) {
        float r4677597 = x;
        float r4677598 = r4677597 * r4677597;
        float r4677599 = 10.5;
        float r4677600 = -5.833333;
        float r4677601 = r4677600 * r4677597;
        float r4677602 = r4677599 + r4677601;
        float r4677603 = r4677598 * r4677602;
        float r4677604 = -7.0;
        float r4677605 = r4677597 * r4677604;
        float r4677606 = 1.0;
        float r4677607 = r4677605 + r4677606;
        float r4677608 = r4677603 + r4677607;
        float r4677609 = r4677598 * r4677598;
        float r4677610 = 1.458333;
        float r4677611 = -0.175;
        float r4677612 = r4677611 * r4677597;
        float r4677613 = r4677610 + r4677612;
        float r4677614 = r4677609 * r4677613;
        float r4677615 = 3;
        float r4677616 = pow(r4677597, r4677615);
        float r4677617 = r4677616 * r4677616;
        float r4677618 = -0.000198;
        float r4677619 = r4677618 * r4677597;
        float r4677620 = 0.009722;
        float r4677621 = r4677619 + r4677620;
        float r4677622 = r4677617 * r4677621;
        float r4677623 = r4677614 + r4677622;
        float r4677624 = r4677608 + r4677623;
        return r4677624;
}

double f_od(double x) {
        double r4677625 = x;
        double r4677626 = r4677625 * r4677625;
        double r4677627 = 10.5;
        double r4677628 = -5.833333;
        double r4677629 = r4677628 * r4677625;
        double r4677630 = r4677627 + r4677629;
        double r4677631 = r4677626 * r4677630;
        double r4677632 = -7.0;
        double r4677633 = r4677625 * r4677632;
        double r4677634 = 1.0;
        double r4677635 = r4677633 + r4677634;
        double r4677636 = r4677631 + r4677635;
        double r4677637 = r4677626 * r4677626;
        double r4677638 = 1.458333;
        double r4677639 = -0.175;
        double r4677640 = r4677639 * r4677625;
        double r4677641 = r4677638 + r4677640;
        double r4677642 = r4677637 * r4677641;
        double r4677643 = 3;
        double r4677644 = pow(r4677625, r4677643);
        double r4677645 = r4677644 * r4677644;
        double r4677646 = -0.000198;
        double r4677647 = r4677646 * r4677625;
        double r4677648 = 0.009722;
        double r4677649 = r4677647 + r4677648;
        double r4677650 = r4677645 * r4677649;
        double r4677651 = r4677642 + r4677650;
        double r4677652 = r4677636 + r4677651;
        return r4677652;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4677653, r4677654, r4677655, r4677656, r4677657, r4677658, r4677659, r4677660, r4677661, r4677662, r4677663, r4677664, r4677665, r4677666, r4677667, r4677668, r4677669, r4677670, r4677671, r4677672, r4677673, r4677674, r4677675, r4677676, r4677677, r4677678, r4677679, r4677680, r4677681;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4677653, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677654, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r4677655);
        mpfr_init(r4677656);
        mpfr_init(r4677657);
        mpfr_init_set_str(r4677658, "10.5", 10, MPFR_RNDN);
        mpfr_init(r4677659);
        mpfr_init(r4677660);
        mpfr_init(r4677661);
        mpfr_init_set_str(r4677662, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r4677663);
        mpfr_init(r4677664);
        mpfr_init(r4677665);
        mpfr_init_set_str(r4677666, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r4677667);
        mpfr_init(r4677668);
        mpfr_init(r4677669);
        mpfr_init_set_str(r4677670, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r4677671);
        mpfr_init(r4677672);
        mpfr_init(r4677673);
        mpfr_init_set_str(r4677674, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r4677675);
        mpfr_init(r4677676);
        mpfr_init(r4677677);
        mpfr_init_set_str(r4677678, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r4677679);
        mpfr_init(r4677680);
        mpfr_init(r4677681);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4677655, x, MPFR_RNDN);
        mpfr_mul(r4677656, r4677654, r4677655, MPFR_RNDN);
        mpfr_add(r4677657, r4677653, r4677656, MPFR_RNDN);
        ;
        mpfr_mul(r4677659, r4677655, r4677655, MPFR_RNDN);
        mpfr_mul(r4677660, r4677658, r4677659, MPFR_RNDN);
        mpfr_add(r4677661, r4677657, r4677660, MPFR_RNDN);
        ;
        mpfr_mul(r4677663, r4677659, r4677655, MPFR_RNDN);
        mpfr_mul(r4677664, r4677662, r4677663, MPFR_RNDN);
        mpfr_add(r4677665, r4677661, r4677664, MPFR_RNDN);
        ;
        mpfr_mul(r4677667, r4677663, r4677655, MPFR_RNDN);
        mpfr_mul(r4677668, r4677666, r4677667, MPFR_RNDN);
        mpfr_add(r4677669, r4677665, r4677668, MPFR_RNDN);
        ;
        mpfr_mul(r4677671, r4677667, r4677655, MPFR_RNDN);
        mpfr_mul(r4677672, r4677670, r4677671, MPFR_RNDN);
        mpfr_add(r4677673, r4677669, r4677672, MPFR_RNDN);
        ;
        mpfr_mul(r4677675, r4677671, r4677655, MPFR_RNDN);
        mpfr_mul(r4677676, r4677674, r4677675, MPFR_RNDN);
        mpfr_add(r4677677, r4677673, r4677676, MPFR_RNDN);
        ;
        mpfr_mul(r4677679, r4677675, r4677655, MPFR_RNDN);
        mpfr_mul(r4677680, r4677678, r4677679, MPFR_RNDN);
        mpfr_add(r4677681, r4677677, r4677680, MPFR_RNDN);
        return mpfr_get_d(r4677681, MPFR_RNDN);
}

static mpfr_t r4677682, r4677683, r4677684, r4677685, r4677686, r4677687, r4677688, r4677689, r4677690, r4677691, r4677692, r4677693, r4677694, r4677695, r4677696, r4677697, r4677698, r4677699, r4677700, r4677701, r4677702, r4677703, r4677704, r4677705, r4677706, r4677707, r4677708, r4677709;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4677682);
        mpfr_init(r4677683);
        mpfr_init_set_str(r4677684, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677685, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r4677686);
        mpfr_init(r4677687);
        mpfr_init(r4677688);
        mpfr_init_set_str(r4677689, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r4677690);
        mpfr_init_set_str(r4677691, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4677692);
        mpfr_init(r4677693);
        mpfr_init(r4677694);
        mpfr_init_set_str(r4677695, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677696, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r4677697);
        mpfr_init(r4677698);
        mpfr_init(r4677699);
        mpfr_init_set_str(r4677700, "3", 10, MPFR_RNDN);
        mpfr_init(r4677701);
        mpfr_init(r4677702);
        mpfr_init_set_str(r4677703, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r4677704);
        mpfr_init_set_str(r4677705, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r4677706);
        mpfr_init(r4677707);
        mpfr_init(r4677708);
        mpfr_init(r4677709);
}

double f_fm(double x) {
        mpfr_set_d(r4677682, x, MPFR_RNDN);
        mpfr_mul(r4677683, r4677682, r4677682, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677686, r4677685, r4677682, MPFR_RNDN);
        mpfr_add(r4677687, r4677684, r4677686, MPFR_RNDN);
        mpfr_mul(r4677688, r4677683, r4677687, MPFR_RNDN);
        ;
        mpfr_mul(r4677690, r4677682, r4677689, MPFR_RNDN);
        ;
        mpfr_add(r4677692, r4677690, r4677691, MPFR_RNDN);
        mpfr_add(r4677693, r4677688, r4677692, MPFR_RNDN);
        mpfr_mul(r4677694, r4677683, r4677683, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677697, r4677696, r4677682, MPFR_RNDN);
        mpfr_add(r4677698, r4677695, r4677697, MPFR_RNDN);
        mpfr_mul(r4677699, r4677694, r4677698, MPFR_RNDN);
        ;
        mpfr_pow(r4677701, r4677682, r4677700, MPFR_RNDN);
        mpfr_mul(r4677702, r4677701, r4677701, MPFR_RNDN);
        ;
        mpfr_mul(r4677704, r4677703, r4677682, MPFR_RNDN);
        ;
        mpfr_add(r4677706, r4677704, r4677705, MPFR_RNDN);
        mpfr_mul(r4677707, r4677702, r4677706, MPFR_RNDN);
        mpfr_add(r4677708, r4677699, r4677707, MPFR_RNDN);
        mpfr_add(r4677709, r4677693, r4677708, MPFR_RNDN);
        return mpfr_get_d(r4677709, MPFR_RNDN);
}

static mpfr_t r4677710, r4677711, r4677712, r4677713, r4677714, r4677715, r4677716, r4677717, r4677718, r4677719, r4677720, r4677721, r4677722, r4677723, r4677724, r4677725, r4677726, r4677727, r4677728, r4677729, r4677730, r4677731, r4677732, r4677733, r4677734, r4677735, r4677736, r4677737;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4677710);
        mpfr_init(r4677711);
        mpfr_init_set_str(r4677712, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677713, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r4677714);
        mpfr_init(r4677715);
        mpfr_init(r4677716);
        mpfr_init_set_str(r4677717, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r4677718);
        mpfr_init_set_str(r4677719, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4677720);
        mpfr_init(r4677721);
        mpfr_init(r4677722);
        mpfr_init_set_str(r4677723, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r4677724, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r4677725);
        mpfr_init(r4677726);
        mpfr_init(r4677727);
        mpfr_init_set_str(r4677728, "3", 10, MPFR_RNDN);
        mpfr_init(r4677729);
        mpfr_init(r4677730);
        mpfr_init_set_str(r4677731, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r4677732);
        mpfr_init_set_str(r4677733, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r4677734);
        mpfr_init(r4677735);
        mpfr_init(r4677736);
        mpfr_init(r4677737);
}

double f_dm(double x) {
        mpfr_set_d(r4677710, x, MPFR_RNDN);
        mpfr_mul(r4677711, r4677710, r4677710, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677714, r4677713, r4677710, MPFR_RNDN);
        mpfr_add(r4677715, r4677712, r4677714, MPFR_RNDN);
        mpfr_mul(r4677716, r4677711, r4677715, MPFR_RNDN);
        ;
        mpfr_mul(r4677718, r4677710, r4677717, MPFR_RNDN);
        ;
        mpfr_add(r4677720, r4677718, r4677719, MPFR_RNDN);
        mpfr_add(r4677721, r4677716, r4677720, MPFR_RNDN);
        mpfr_mul(r4677722, r4677711, r4677711, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4677725, r4677724, r4677710, MPFR_RNDN);
        mpfr_add(r4677726, r4677723, r4677725, MPFR_RNDN);
        mpfr_mul(r4677727, r4677722, r4677726, MPFR_RNDN);
        ;
        mpfr_pow(r4677729, r4677710, r4677728, MPFR_RNDN);
        mpfr_mul(r4677730, r4677729, r4677729, MPFR_RNDN);
        ;
        mpfr_mul(r4677732, r4677731, r4677710, MPFR_RNDN);
        ;
        mpfr_add(r4677734, r4677732, r4677733, MPFR_RNDN);
        mpfr_mul(r4677735, r4677730, r4677734, MPFR_RNDN);
        mpfr_add(r4677736, r4677727, r4677735, MPFR_RNDN);
        mpfr_add(r4677737, r4677721, r4677736, MPFR_RNDN);
        return mpfr_get_d(r4677737, MPFR_RNDN);
}

