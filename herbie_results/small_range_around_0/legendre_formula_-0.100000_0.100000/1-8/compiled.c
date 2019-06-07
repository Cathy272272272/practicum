#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r4598575 = 0.273438;
        float r4598576 = -9.84375;
        float r4598577 = x;
        float r4598578 = r4598577 * r4598577;
        float r4598579 = r4598576 * r4598578;
        float r4598580 = r4598575 + r4598579;
        float r4598581 = 54.140625;
        float r4598582 = r4598578 * r4598577;
        float r4598583 = r4598582 * r4598577;
        float r4598584 = r4598581 * r4598583;
        float r4598585 = r4598580 + r4598584;
        float r4598586 = -93.84375;
        float r4598587 = r4598583 * r4598577;
        float r4598588 = r4598587 * r4598577;
        float r4598589 = r4598586 * r4598588;
        float r4598590 = r4598585 + r4598589;
        float r4598591 = 50.273438;
        float r4598592 = r4598588 * r4598577;
        float r4598593 = r4598592 * r4598577;
        float r4598594 = r4598591 * r4598593;
        float r4598595 = r4598590 + r4598594;
        return r4598595;
}

double f_id(double x) {
        double r4598596 = 0.273438;
        double r4598597 = -9.84375;
        double r4598598 = x;
        double r4598599 = r4598598 * r4598598;
        double r4598600 = r4598597 * r4598599;
        double r4598601 = r4598596 + r4598600;
        double r4598602 = 54.140625;
        double r4598603 = r4598599 * r4598598;
        double r4598604 = r4598603 * r4598598;
        double r4598605 = r4598602 * r4598604;
        double r4598606 = r4598601 + r4598605;
        double r4598607 = -93.84375;
        double r4598608 = r4598604 * r4598598;
        double r4598609 = r4598608 * r4598598;
        double r4598610 = r4598607 * r4598609;
        double r4598611 = r4598606 + r4598610;
        double r4598612 = 50.273438;
        double r4598613 = r4598609 * r4598598;
        double r4598614 = r4598613 * r4598598;
        double r4598615 = r4598612 * r4598614;
        double r4598616 = r4598611 + r4598615;
        return r4598616;
}


double f_of(float x) {
        float r4598617 = 0.273438;
        float r4598618 = -9.84375;
        float r4598619 = x;
        float r4598620 = r4598619 * r4598619;
        float r4598621 = r4598618 * r4598620;
        float r4598622 = r4598617 + r4598621;
        float r4598623 = 54.140625;
        float r4598624 = r4598620 * r4598619;
        float r4598625 = r4598624 * r4598619;
        float r4598626 = r4598623 * r4598625;
        float r4598627 = r4598622 + r4598626;
        float r4598628 = -93.84375;
        float r4598629 = r4598625 * r4598619;
        float r4598630 = r4598629 * r4598619;
        float r4598631 = r4598628 * r4598630;
        float r4598632 = r4598627 + r4598631;
        float r4598633 = 50.273438;
        float r4598634 = r4598630 * r4598619;
        float r4598635 = r4598634 * r4598619;
        float r4598636 = r4598633 * r4598635;
        float r4598637 = r4598632 + r4598636;
        return r4598637;
}

double f_od(double x) {
        double r4598638 = 0.273438;
        double r4598639 = -9.84375;
        double r4598640 = x;
        double r4598641 = r4598640 * r4598640;
        double r4598642 = r4598639 * r4598641;
        double r4598643 = r4598638 + r4598642;
        double r4598644 = 54.140625;
        double r4598645 = r4598641 * r4598640;
        double r4598646 = r4598645 * r4598640;
        double r4598647 = r4598644 * r4598646;
        double r4598648 = r4598643 + r4598647;
        double r4598649 = -93.84375;
        double r4598650 = r4598646 * r4598640;
        double r4598651 = r4598650 * r4598640;
        double r4598652 = r4598649 * r4598651;
        double r4598653 = r4598648 + r4598652;
        double r4598654 = 50.273438;
        double r4598655 = r4598651 * r4598640;
        double r4598656 = r4598655 * r4598640;
        double r4598657 = r4598654 * r4598656;
        double r4598658 = r4598653 + r4598657;
        return r4598658;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4598659, r4598660, r4598661, r4598662, r4598663, r4598664, r4598665, r4598666, r4598667, r4598668, r4598669, r4598670, r4598671, r4598672, r4598673, r4598674, r4598675, r4598676, r4598677, r4598678, r4598679;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4598659, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4598660, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4598661);
        mpfr_init(r4598662);
        mpfr_init(r4598663);
        mpfr_init(r4598664);
        mpfr_init_set_str(r4598665, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4598666);
        mpfr_init(r4598667);
        mpfr_init(r4598668);
        mpfr_init(r4598669);
        mpfr_init_set_str(r4598670, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4598671);
        mpfr_init(r4598672);
        mpfr_init(r4598673);
        mpfr_init(r4598674);
        mpfr_init_set_str(r4598675, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4598676);
        mpfr_init(r4598677);
        mpfr_init(r4598678);
        mpfr_init(r4598679);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4598661, x, MPFR_RNDN);
        mpfr_mul(r4598662, r4598661, r4598661, MPFR_RNDN);
        mpfr_mul(r4598663, r4598660, r4598662, MPFR_RNDN);
        mpfr_add(r4598664, r4598659, r4598663, MPFR_RNDN);
        ;
        mpfr_mul(r4598666, r4598662, r4598661, MPFR_RNDN);
        mpfr_mul(r4598667, r4598666, r4598661, MPFR_RNDN);
        mpfr_mul(r4598668, r4598665, r4598667, MPFR_RNDN);
        mpfr_add(r4598669, r4598664, r4598668, MPFR_RNDN);
        ;
        mpfr_mul(r4598671, r4598667, r4598661, MPFR_RNDN);
        mpfr_mul(r4598672, r4598671, r4598661, MPFR_RNDN);
        mpfr_mul(r4598673, r4598670, r4598672, MPFR_RNDN);
        mpfr_add(r4598674, r4598669, r4598673, MPFR_RNDN);
        ;
        mpfr_mul(r4598676, r4598672, r4598661, MPFR_RNDN);
        mpfr_mul(r4598677, r4598676, r4598661, MPFR_RNDN);
        mpfr_mul(r4598678, r4598675, r4598677, MPFR_RNDN);
        mpfr_add(r4598679, r4598674, r4598678, MPFR_RNDN);
        return mpfr_get_d(r4598679, MPFR_RNDN);
}

static mpfr_t r4598680, r4598681, r4598682, r4598683, r4598684, r4598685, r4598686, r4598687, r4598688, r4598689, r4598690, r4598691, r4598692, r4598693, r4598694, r4598695, r4598696, r4598697, r4598698, r4598699, r4598700;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4598680, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4598681, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4598682);
        mpfr_init(r4598683);
        mpfr_init(r4598684);
        mpfr_init(r4598685);
        mpfr_init_set_str(r4598686, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4598687);
        mpfr_init(r4598688);
        mpfr_init(r4598689);
        mpfr_init(r4598690);
        mpfr_init_set_str(r4598691, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4598692);
        mpfr_init(r4598693);
        mpfr_init(r4598694);
        mpfr_init(r4598695);
        mpfr_init_set_str(r4598696, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4598697);
        mpfr_init(r4598698);
        mpfr_init(r4598699);
        mpfr_init(r4598700);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4598682, x, MPFR_RNDN);
        mpfr_mul(r4598683, r4598682, r4598682, MPFR_RNDN);
        mpfr_mul(r4598684, r4598681, r4598683, MPFR_RNDN);
        mpfr_add(r4598685, r4598680, r4598684, MPFR_RNDN);
        ;
        mpfr_mul(r4598687, r4598683, r4598682, MPFR_RNDN);
        mpfr_mul(r4598688, r4598687, r4598682, MPFR_RNDN);
        mpfr_mul(r4598689, r4598686, r4598688, MPFR_RNDN);
        mpfr_add(r4598690, r4598685, r4598689, MPFR_RNDN);
        ;
        mpfr_mul(r4598692, r4598688, r4598682, MPFR_RNDN);
        mpfr_mul(r4598693, r4598692, r4598682, MPFR_RNDN);
        mpfr_mul(r4598694, r4598691, r4598693, MPFR_RNDN);
        mpfr_add(r4598695, r4598690, r4598694, MPFR_RNDN);
        ;
        mpfr_mul(r4598697, r4598693, r4598682, MPFR_RNDN);
        mpfr_mul(r4598698, r4598697, r4598682, MPFR_RNDN);
        mpfr_mul(r4598699, r4598696, r4598698, MPFR_RNDN);
        mpfr_add(r4598700, r4598695, r4598699, MPFR_RNDN);
        return mpfr_get_d(r4598700, MPFR_RNDN);
}

static mpfr_t r4598701, r4598702, r4598703, r4598704, r4598705, r4598706, r4598707, r4598708, r4598709, r4598710, r4598711, r4598712, r4598713, r4598714, r4598715, r4598716, r4598717, r4598718, r4598719, r4598720, r4598721;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4598701, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r4598702, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r4598703);
        mpfr_init(r4598704);
        mpfr_init(r4598705);
        mpfr_init(r4598706);
        mpfr_init_set_str(r4598707, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r4598708);
        mpfr_init(r4598709);
        mpfr_init(r4598710);
        mpfr_init(r4598711);
        mpfr_init_set_str(r4598712, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r4598713);
        mpfr_init(r4598714);
        mpfr_init(r4598715);
        mpfr_init(r4598716);
        mpfr_init_set_str(r4598717, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r4598718);
        mpfr_init(r4598719);
        mpfr_init(r4598720);
        mpfr_init(r4598721);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4598703, x, MPFR_RNDN);
        mpfr_mul(r4598704, r4598703, r4598703, MPFR_RNDN);
        mpfr_mul(r4598705, r4598702, r4598704, MPFR_RNDN);
        mpfr_add(r4598706, r4598701, r4598705, MPFR_RNDN);
        ;
        mpfr_mul(r4598708, r4598704, r4598703, MPFR_RNDN);
        mpfr_mul(r4598709, r4598708, r4598703, MPFR_RNDN);
        mpfr_mul(r4598710, r4598707, r4598709, MPFR_RNDN);
        mpfr_add(r4598711, r4598706, r4598710, MPFR_RNDN);
        ;
        mpfr_mul(r4598713, r4598709, r4598703, MPFR_RNDN);
        mpfr_mul(r4598714, r4598713, r4598703, MPFR_RNDN);
        mpfr_mul(r4598715, r4598712, r4598714, MPFR_RNDN);
        mpfr_add(r4598716, r4598711, r4598715, MPFR_RNDN);
        ;
        mpfr_mul(r4598718, r4598714, r4598703, MPFR_RNDN);
        mpfr_mul(r4598719, r4598718, r4598703, MPFR_RNDN);
        mpfr_mul(r4598720, r4598717, r4598719, MPFR_RNDN);
        mpfr_add(r4598721, r4598716, r4598720, MPFR_RNDN);
        return mpfr_get_d(r4598721, MPFR_RNDN);
}

