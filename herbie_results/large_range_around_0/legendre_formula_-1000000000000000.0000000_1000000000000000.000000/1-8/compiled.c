#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8031558 = 0.273438;
        float r8031559 = -9.84375;
        float r8031560 = x;
        float r8031561 = r8031560 * r8031560;
        float r8031562 = r8031559 * r8031561;
        float r8031563 = r8031558 + r8031562;
        float r8031564 = 54.140625;
        float r8031565 = r8031561 * r8031560;
        float r8031566 = r8031565 * r8031560;
        float r8031567 = r8031564 * r8031566;
        float r8031568 = r8031563 + r8031567;
        float r8031569 = -93.84375;
        float r8031570 = r8031566 * r8031560;
        float r8031571 = r8031570 * r8031560;
        float r8031572 = r8031569 * r8031571;
        float r8031573 = r8031568 + r8031572;
        float r8031574 = 50.273438;
        float r8031575 = r8031571 * r8031560;
        float r8031576 = r8031575 * r8031560;
        float r8031577 = r8031574 * r8031576;
        float r8031578 = r8031573 + r8031577;
        return r8031578;
}

double f_id(double x) {
        double r8031579 = 0.273438;
        double r8031580 = -9.84375;
        double r8031581 = x;
        double r8031582 = r8031581 * r8031581;
        double r8031583 = r8031580 * r8031582;
        double r8031584 = r8031579 + r8031583;
        double r8031585 = 54.140625;
        double r8031586 = r8031582 * r8031581;
        double r8031587 = r8031586 * r8031581;
        double r8031588 = r8031585 * r8031587;
        double r8031589 = r8031584 + r8031588;
        double r8031590 = -93.84375;
        double r8031591 = r8031587 * r8031581;
        double r8031592 = r8031591 * r8031581;
        double r8031593 = r8031590 * r8031592;
        double r8031594 = r8031589 + r8031593;
        double r8031595 = 50.273438;
        double r8031596 = r8031592 * r8031581;
        double r8031597 = r8031596 * r8031581;
        double r8031598 = r8031595 * r8031597;
        double r8031599 = r8031594 + r8031598;
        return r8031599;
}


double f_of(float x) {
        float r8031600 = 0.273438;
        float r8031601 = -9.84375;
        float r8031602 = x;
        float r8031603 = r8031602 * r8031602;
        float r8031604 = r8031601 * r8031603;
        float r8031605 = r8031600 + r8031604;
        float r8031606 = 54.140625;
        float r8031607 = r8031603 * r8031602;
        float r8031608 = r8031607 * r8031602;
        float r8031609 = r8031606 * r8031608;
        float r8031610 = r8031605 + r8031609;
        float r8031611 = -93.84375;
        float r8031612 = r8031608 * r8031602;
        float r8031613 = r8031612 * r8031602;
        float r8031614 = r8031611 * r8031613;
        float r8031615 = r8031610 + r8031614;
        float r8031616 = 50.273438;
        float r8031617 = r8031613 * r8031602;
        float r8031618 = r8031617 * r8031602;
        float r8031619 = r8031616 * r8031618;
        float r8031620 = r8031615 + r8031619;
        return r8031620;
}

double f_od(double x) {
        double r8031621 = 0.273438;
        double r8031622 = -9.84375;
        double r8031623 = x;
        double r8031624 = r8031623 * r8031623;
        double r8031625 = r8031622 * r8031624;
        double r8031626 = r8031621 + r8031625;
        double r8031627 = 54.140625;
        double r8031628 = r8031624 * r8031623;
        double r8031629 = r8031628 * r8031623;
        double r8031630 = r8031627 * r8031629;
        double r8031631 = r8031626 + r8031630;
        double r8031632 = -93.84375;
        double r8031633 = r8031629 * r8031623;
        double r8031634 = r8031633 * r8031623;
        double r8031635 = r8031632 * r8031634;
        double r8031636 = r8031631 + r8031635;
        double r8031637 = 50.273438;
        double r8031638 = r8031634 * r8031623;
        double r8031639 = r8031638 * r8031623;
        double r8031640 = r8031637 * r8031639;
        double r8031641 = r8031636 + r8031640;
        return r8031641;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8031642, r8031643, r8031644, r8031645, r8031646, r8031647, r8031648, r8031649, r8031650, r8031651, r8031652, r8031653, r8031654, r8031655, r8031656, r8031657, r8031658, r8031659, r8031660, r8031661, r8031662;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8031642, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031643, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8031644);
        mpfr_init(r8031645);
        mpfr_init(r8031646);
        mpfr_init(r8031647);
        mpfr_init_set_str(r8031648, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8031649);
        mpfr_init(r8031650);
        mpfr_init(r8031651);
        mpfr_init(r8031652);
        mpfr_init_set_str(r8031653, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8031654);
        mpfr_init(r8031655);
        mpfr_init(r8031656);
        mpfr_init(r8031657);
        mpfr_init_set_str(r8031658, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8031659);
        mpfr_init(r8031660);
        mpfr_init(r8031661);
        mpfr_init(r8031662);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8031644, x, MPFR_RNDN);
        mpfr_mul(r8031645, r8031644, r8031644, MPFR_RNDN);
        mpfr_mul(r8031646, r8031643, r8031645, MPFR_RNDN);
        mpfr_add(r8031647, r8031642, r8031646, MPFR_RNDN);
        ;
        mpfr_mul(r8031649, r8031645, r8031644, MPFR_RNDN);
        mpfr_mul(r8031650, r8031649, r8031644, MPFR_RNDN);
        mpfr_mul(r8031651, r8031648, r8031650, MPFR_RNDN);
        mpfr_add(r8031652, r8031647, r8031651, MPFR_RNDN);
        ;
        mpfr_mul(r8031654, r8031650, r8031644, MPFR_RNDN);
        mpfr_mul(r8031655, r8031654, r8031644, MPFR_RNDN);
        mpfr_mul(r8031656, r8031653, r8031655, MPFR_RNDN);
        mpfr_add(r8031657, r8031652, r8031656, MPFR_RNDN);
        ;
        mpfr_mul(r8031659, r8031655, r8031644, MPFR_RNDN);
        mpfr_mul(r8031660, r8031659, r8031644, MPFR_RNDN);
        mpfr_mul(r8031661, r8031658, r8031660, MPFR_RNDN);
        mpfr_add(r8031662, r8031657, r8031661, MPFR_RNDN);
        return mpfr_get_d(r8031662, MPFR_RNDN);
}

static mpfr_t r8031663, r8031664, r8031665, r8031666, r8031667, r8031668, r8031669, r8031670, r8031671, r8031672, r8031673, r8031674, r8031675, r8031676, r8031677, r8031678, r8031679, r8031680, r8031681, r8031682, r8031683;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8031663, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031664, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8031665);
        mpfr_init(r8031666);
        mpfr_init(r8031667);
        mpfr_init(r8031668);
        mpfr_init_set_str(r8031669, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8031670);
        mpfr_init(r8031671);
        mpfr_init(r8031672);
        mpfr_init(r8031673);
        mpfr_init_set_str(r8031674, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8031675);
        mpfr_init(r8031676);
        mpfr_init(r8031677);
        mpfr_init(r8031678);
        mpfr_init_set_str(r8031679, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8031680);
        mpfr_init(r8031681);
        mpfr_init(r8031682);
        mpfr_init(r8031683);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r8031665, x, MPFR_RNDN);
        mpfr_mul(r8031666, r8031665, r8031665, MPFR_RNDN);
        mpfr_mul(r8031667, r8031664, r8031666, MPFR_RNDN);
        mpfr_add(r8031668, r8031663, r8031667, MPFR_RNDN);
        ;
        mpfr_mul(r8031670, r8031666, r8031665, MPFR_RNDN);
        mpfr_mul(r8031671, r8031670, r8031665, MPFR_RNDN);
        mpfr_mul(r8031672, r8031669, r8031671, MPFR_RNDN);
        mpfr_add(r8031673, r8031668, r8031672, MPFR_RNDN);
        ;
        mpfr_mul(r8031675, r8031671, r8031665, MPFR_RNDN);
        mpfr_mul(r8031676, r8031675, r8031665, MPFR_RNDN);
        mpfr_mul(r8031677, r8031674, r8031676, MPFR_RNDN);
        mpfr_add(r8031678, r8031673, r8031677, MPFR_RNDN);
        ;
        mpfr_mul(r8031680, r8031676, r8031665, MPFR_RNDN);
        mpfr_mul(r8031681, r8031680, r8031665, MPFR_RNDN);
        mpfr_mul(r8031682, r8031679, r8031681, MPFR_RNDN);
        mpfr_add(r8031683, r8031678, r8031682, MPFR_RNDN);
        return mpfr_get_d(r8031683, MPFR_RNDN);
}

static mpfr_t r8031684, r8031685, r8031686, r8031687, r8031688, r8031689, r8031690, r8031691, r8031692, r8031693, r8031694, r8031695, r8031696, r8031697, r8031698, r8031699, r8031700, r8031701, r8031702, r8031703, r8031704;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8031684, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8031685, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8031686);
        mpfr_init(r8031687);
        mpfr_init(r8031688);
        mpfr_init(r8031689);
        mpfr_init_set_str(r8031690, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8031691);
        mpfr_init(r8031692);
        mpfr_init(r8031693);
        mpfr_init(r8031694);
        mpfr_init_set_str(r8031695, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8031696);
        mpfr_init(r8031697);
        mpfr_init(r8031698);
        mpfr_init(r8031699);
        mpfr_init_set_str(r8031700, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8031701);
        mpfr_init(r8031702);
        mpfr_init(r8031703);
        mpfr_init(r8031704);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r8031686, x, MPFR_RNDN);
        mpfr_mul(r8031687, r8031686, r8031686, MPFR_RNDN);
        mpfr_mul(r8031688, r8031685, r8031687, MPFR_RNDN);
        mpfr_add(r8031689, r8031684, r8031688, MPFR_RNDN);
        ;
        mpfr_mul(r8031691, r8031687, r8031686, MPFR_RNDN);
        mpfr_mul(r8031692, r8031691, r8031686, MPFR_RNDN);
        mpfr_mul(r8031693, r8031690, r8031692, MPFR_RNDN);
        mpfr_add(r8031694, r8031689, r8031693, MPFR_RNDN);
        ;
        mpfr_mul(r8031696, r8031692, r8031686, MPFR_RNDN);
        mpfr_mul(r8031697, r8031696, r8031686, MPFR_RNDN);
        mpfr_mul(r8031698, r8031695, r8031697, MPFR_RNDN);
        mpfr_add(r8031699, r8031694, r8031698, MPFR_RNDN);
        ;
        mpfr_mul(r8031701, r8031697, r8031686, MPFR_RNDN);
        mpfr_mul(r8031702, r8031701, r8031686, MPFR_RNDN);
        mpfr_mul(r8031703, r8031700, r8031702, MPFR_RNDN);
        mpfr_add(r8031704, r8031699, r8031703, MPFR_RNDN);
        return mpfr_get_d(r8031704, MPFR_RNDN);
}

