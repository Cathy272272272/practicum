#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r5393639 = 2.460938;
        float r5393640 = x;
        float r5393641 = r5393639 * r5393640;
        float r5393642 = -36.09375;
        float r5393643 = r5393640 * r5393640;
        float r5393644 = r5393643 * r5393640;
        float r5393645 = r5393642 * r5393644;
        float r5393646 = r5393641 + r5393645;
        float r5393647 = 140.765625;
        float r5393648 = r5393644 * r5393640;
        float r5393649 = r5393648 * r5393640;
        float r5393650 = r5393647 * r5393649;
        float r5393651 = r5393646 + r5393650;
        float r5393652 = -201.09375;
        float r5393653 = r5393649 * r5393640;
        float r5393654 = r5393653 * r5393640;
        float r5393655 = r5393652 * r5393654;
        float r5393656 = r5393651 + r5393655;
        float r5393657 = 94.960938;
        float r5393658 = r5393654 * r5393640;
        float r5393659 = r5393658 * r5393640;
        float r5393660 = r5393657 * r5393659;
        float r5393661 = r5393656 + r5393660;
        return r5393661;
}

double f_id(double x) {
        double r5393662 = 2.460938;
        double r5393663 = x;
        double r5393664 = r5393662 * r5393663;
        double r5393665 = -36.09375;
        double r5393666 = r5393663 * r5393663;
        double r5393667 = r5393666 * r5393663;
        double r5393668 = r5393665 * r5393667;
        double r5393669 = r5393664 + r5393668;
        double r5393670 = 140.765625;
        double r5393671 = r5393667 * r5393663;
        double r5393672 = r5393671 * r5393663;
        double r5393673 = r5393670 * r5393672;
        double r5393674 = r5393669 + r5393673;
        double r5393675 = -201.09375;
        double r5393676 = r5393672 * r5393663;
        double r5393677 = r5393676 * r5393663;
        double r5393678 = r5393675 * r5393677;
        double r5393679 = r5393674 + r5393678;
        double r5393680 = 94.960938;
        double r5393681 = r5393677 * r5393663;
        double r5393682 = r5393681 * r5393663;
        double r5393683 = r5393680 * r5393682;
        double r5393684 = r5393679 + r5393683;
        return r5393684;
}


double f_of(float x) {
        float r5393685 = x;
        float r5393686 = r5393685 * r5393685;
        float r5393687 = 140.765625;
        float r5393688 = r5393685 * r5393687;
        float r5393689 = r5393686 * r5393688;
        float r5393690 = cbrt(r5393689);
        float r5393691 = r5393690 * r5393690;
        float r5393692 = r5393691 * r5393690;
        float r5393693 = r5393686 * r5393692;
        float r5393694 = 2.460938;
        float r5393695 = r5393694 * r5393685;
        float r5393696 = -36.09375;
        float r5393697 = r5393696 * r5393685;
        float r5393698 = r5393697 * r5393686;
        float r5393699 = r5393695 + r5393698;
        float r5393700 = r5393693 + r5393699;
        float r5393701 = 3;
        float r5393702 = pow(r5393685, r5393701);
        float r5393703 = r5393702 * r5393702;
        float r5393704 = r5393703 * r5393685;
        float r5393705 = -201.09375;
        float r5393706 = 94.960938;
        float r5393707 = r5393706 * r5393685;
        float r5393708 = r5393685 * r5393707;
        float r5393709 = r5393705 + r5393708;
        float r5393710 = r5393704 * r5393709;
        float r5393711 = r5393700 + r5393710;
        return r5393711;
}

double f_od(double x) {
        double r5393712 = x;
        double r5393713 = r5393712 * r5393712;
        double r5393714 = 140.765625;
        double r5393715 = r5393712 * r5393714;
        double r5393716 = r5393713 * r5393715;
        double r5393717 = cbrt(r5393716);
        double r5393718 = r5393717 * r5393717;
        double r5393719 = r5393718 * r5393717;
        double r5393720 = r5393713 * r5393719;
        double r5393721 = 2.460938;
        double r5393722 = r5393721 * r5393712;
        double r5393723 = -36.09375;
        double r5393724 = r5393723 * r5393712;
        double r5393725 = r5393724 * r5393713;
        double r5393726 = r5393722 + r5393725;
        double r5393727 = r5393720 + r5393726;
        double r5393728 = 3;
        double r5393729 = pow(r5393712, r5393728);
        double r5393730 = r5393729 * r5393729;
        double r5393731 = r5393730 * r5393712;
        double r5393732 = -201.09375;
        double r5393733 = 94.960938;
        double r5393734 = r5393733 * r5393712;
        double r5393735 = r5393712 * r5393734;
        double r5393736 = r5393732 + r5393735;
        double r5393737 = r5393731 * r5393736;
        double r5393738 = r5393727 + r5393737;
        return r5393738;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5393739, r5393740, r5393741, r5393742, r5393743, r5393744, r5393745, r5393746, r5393747, r5393748, r5393749, r5393750, r5393751, r5393752, r5393753, r5393754, r5393755, r5393756, r5393757, r5393758, r5393759, r5393760, r5393761;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5393739, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r5393740);
        mpfr_init(r5393741);
        mpfr_init_set_str(r5393742, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r5393743);
        mpfr_init(r5393744);
        mpfr_init(r5393745);
        mpfr_init(r5393746);
        mpfr_init_set_str(r5393747, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r5393748);
        mpfr_init(r5393749);
        mpfr_init(r5393750);
        mpfr_init(r5393751);
        mpfr_init_set_str(r5393752, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r5393753);
        mpfr_init(r5393754);
        mpfr_init(r5393755);
        mpfr_init(r5393756);
        mpfr_init_set_str(r5393757, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r5393758);
        mpfr_init(r5393759);
        mpfr_init(r5393760);
        mpfr_init(r5393761);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5393740, x, MPFR_RNDN);
        mpfr_mul(r5393741, r5393739, r5393740, MPFR_RNDN);
        ;
        mpfr_mul(r5393743, r5393740, r5393740, MPFR_RNDN);
        mpfr_mul(r5393744, r5393743, r5393740, MPFR_RNDN);
        mpfr_mul(r5393745, r5393742, r5393744, MPFR_RNDN);
        mpfr_add(r5393746, r5393741, r5393745, MPFR_RNDN);
        ;
        mpfr_mul(r5393748, r5393744, r5393740, MPFR_RNDN);
        mpfr_mul(r5393749, r5393748, r5393740, MPFR_RNDN);
        mpfr_mul(r5393750, r5393747, r5393749, MPFR_RNDN);
        mpfr_add(r5393751, r5393746, r5393750, MPFR_RNDN);
        ;
        mpfr_mul(r5393753, r5393749, r5393740, MPFR_RNDN);
        mpfr_mul(r5393754, r5393753, r5393740, MPFR_RNDN);
        mpfr_mul(r5393755, r5393752, r5393754, MPFR_RNDN);
        mpfr_add(r5393756, r5393751, r5393755, MPFR_RNDN);
        ;
        mpfr_mul(r5393758, r5393754, r5393740, MPFR_RNDN);
        mpfr_mul(r5393759, r5393758, r5393740, MPFR_RNDN);
        mpfr_mul(r5393760, r5393757, r5393759, MPFR_RNDN);
        mpfr_add(r5393761, r5393756, r5393760, MPFR_RNDN);
        return mpfr_get_d(r5393761, MPFR_RNDN);
}

static mpfr_t r5393762, r5393763, r5393764, r5393765, r5393766, r5393767, r5393768, r5393769, r5393770, r5393771, r5393772, r5393773, r5393774, r5393775, r5393776, r5393777, r5393778, r5393779, r5393780, r5393781, r5393782, r5393783, r5393784, r5393785, r5393786, r5393787, r5393788;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5393762);
        mpfr_init(r5393763);
        mpfr_init_set_str(r5393764, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r5393765);
        mpfr_init(r5393766);
        mpfr_init(r5393767);
        mpfr_init(r5393768);
        mpfr_init(r5393769);
        mpfr_init(r5393770);
        mpfr_init_set_str(r5393771, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r5393772);
        mpfr_init_set_str(r5393773, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r5393774);
        mpfr_init(r5393775);
        mpfr_init(r5393776);
        mpfr_init(r5393777);
        mpfr_init_set_str(r5393778, "3", 10, MPFR_RNDN);
        mpfr_init(r5393779);
        mpfr_init(r5393780);
        mpfr_init(r5393781);
        mpfr_init_set_str(r5393782, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5393783, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r5393784);
        mpfr_init(r5393785);
        mpfr_init(r5393786);
        mpfr_init(r5393787);
        mpfr_init(r5393788);
}

double f_fm(double x) {
        mpfr_set_d(r5393762, x, MPFR_RNDN);
        mpfr_mul(r5393763, r5393762, r5393762, MPFR_RNDN);
        ;
        mpfr_mul(r5393765, r5393762, r5393764, MPFR_RNDN);
        mpfr_mul(r5393766, r5393763, r5393765, MPFR_RNDN);
        mpfr_cbrt(r5393767, r5393766, MPFR_RNDN);
        mpfr_mul(r5393768, r5393767, r5393767, MPFR_RNDN);
        mpfr_mul(r5393769, r5393768, r5393767, MPFR_RNDN);
        mpfr_mul(r5393770, r5393763, r5393769, MPFR_RNDN);
        ;
        mpfr_mul(r5393772, r5393771, r5393762, MPFR_RNDN);
        ;
        mpfr_mul(r5393774, r5393773, r5393762, MPFR_RNDN);
        mpfr_mul(r5393775, r5393774, r5393763, MPFR_RNDN);
        mpfr_add(r5393776, r5393772, r5393775, MPFR_RNDN);
        mpfr_add(r5393777, r5393770, r5393776, MPFR_RNDN);
        ;
        mpfr_pow(r5393779, r5393762, r5393778, MPFR_RNDN);
        mpfr_mul(r5393780, r5393779, r5393779, MPFR_RNDN);
        mpfr_mul(r5393781, r5393780, r5393762, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5393784, r5393783, r5393762, MPFR_RNDN);
        mpfr_mul(r5393785, r5393762, r5393784, MPFR_RNDN);
        mpfr_add(r5393786, r5393782, r5393785, MPFR_RNDN);
        mpfr_mul(r5393787, r5393781, r5393786, MPFR_RNDN);
        mpfr_add(r5393788, r5393777, r5393787, MPFR_RNDN);
        return mpfr_get_d(r5393788, MPFR_RNDN);
}

static mpfr_t r5393789, r5393790, r5393791, r5393792, r5393793, r5393794, r5393795, r5393796, r5393797, r5393798, r5393799, r5393800, r5393801, r5393802, r5393803, r5393804, r5393805, r5393806, r5393807, r5393808, r5393809, r5393810, r5393811, r5393812, r5393813, r5393814, r5393815;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5393789);
        mpfr_init(r5393790);
        mpfr_init_set_str(r5393791, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r5393792);
        mpfr_init(r5393793);
        mpfr_init(r5393794);
        mpfr_init(r5393795);
        mpfr_init(r5393796);
        mpfr_init(r5393797);
        mpfr_init_set_str(r5393798, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r5393799);
        mpfr_init_set_str(r5393800, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r5393801);
        mpfr_init(r5393802);
        mpfr_init(r5393803);
        mpfr_init(r5393804);
        mpfr_init_set_str(r5393805, "3", 10, MPFR_RNDN);
        mpfr_init(r5393806);
        mpfr_init(r5393807);
        mpfr_init(r5393808);
        mpfr_init_set_str(r5393809, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r5393810, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r5393811);
        mpfr_init(r5393812);
        mpfr_init(r5393813);
        mpfr_init(r5393814);
        mpfr_init(r5393815);
}

double f_dm(double x) {
        mpfr_set_d(r5393789, x, MPFR_RNDN);
        mpfr_mul(r5393790, r5393789, r5393789, MPFR_RNDN);
        ;
        mpfr_mul(r5393792, r5393789, r5393791, MPFR_RNDN);
        mpfr_mul(r5393793, r5393790, r5393792, MPFR_RNDN);
        mpfr_cbrt(r5393794, r5393793, MPFR_RNDN);
        mpfr_mul(r5393795, r5393794, r5393794, MPFR_RNDN);
        mpfr_mul(r5393796, r5393795, r5393794, MPFR_RNDN);
        mpfr_mul(r5393797, r5393790, r5393796, MPFR_RNDN);
        ;
        mpfr_mul(r5393799, r5393798, r5393789, MPFR_RNDN);
        ;
        mpfr_mul(r5393801, r5393800, r5393789, MPFR_RNDN);
        mpfr_mul(r5393802, r5393801, r5393790, MPFR_RNDN);
        mpfr_add(r5393803, r5393799, r5393802, MPFR_RNDN);
        mpfr_add(r5393804, r5393797, r5393803, MPFR_RNDN);
        ;
        mpfr_pow(r5393806, r5393789, r5393805, MPFR_RNDN);
        mpfr_mul(r5393807, r5393806, r5393806, MPFR_RNDN);
        mpfr_mul(r5393808, r5393807, r5393789, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5393811, r5393810, r5393789, MPFR_RNDN);
        mpfr_mul(r5393812, r5393789, r5393811, MPFR_RNDN);
        mpfr_add(r5393813, r5393809, r5393812, MPFR_RNDN);
        mpfr_mul(r5393814, r5393808, r5393813, MPFR_RNDN);
        mpfr_add(r5393815, r5393804, r5393814, MPFR_RNDN);
        return mpfr_get_d(r5393815, MPFR_RNDN);
}

