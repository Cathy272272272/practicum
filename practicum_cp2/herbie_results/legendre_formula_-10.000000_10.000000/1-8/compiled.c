#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8099664 = 0.273438;
        float r8099665 = -9.84375;
        float r8099666 = x;
        float r8099667 = r8099666 * r8099666;
        float r8099668 = r8099665 * r8099667;
        float r8099669 = r8099664 + r8099668;
        float r8099670 = 54.140625;
        float r8099671 = r8099667 * r8099666;
        float r8099672 = r8099671 * r8099666;
        float r8099673 = r8099670 * r8099672;
        float r8099674 = r8099669 + r8099673;
        float r8099675 = -93.84375;
        float r8099676 = r8099672 * r8099666;
        float r8099677 = r8099676 * r8099666;
        float r8099678 = r8099675 * r8099677;
        float r8099679 = r8099674 + r8099678;
        float r8099680 = 50.273438;
        float r8099681 = r8099677 * r8099666;
        float r8099682 = r8099681 * r8099666;
        float r8099683 = r8099680 * r8099682;
        float r8099684 = r8099679 + r8099683;
        return r8099684;
}

double f_id(double x) {
        double r8099685 = 0.273438;
        double r8099686 = -9.84375;
        double r8099687 = x;
        double r8099688 = r8099687 * r8099687;
        double r8099689 = r8099686 * r8099688;
        double r8099690 = r8099685 + r8099689;
        double r8099691 = 54.140625;
        double r8099692 = r8099688 * r8099687;
        double r8099693 = r8099692 * r8099687;
        double r8099694 = r8099691 * r8099693;
        double r8099695 = r8099690 + r8099694;
        double r8099696 = -93.84375;
        double r8099697 = r8099693 * r8099687;
        double r8099698 = r8099697 * r8099687;
        double r8099699 = r8099696 * r8099698;
        double r8099700 = r8099695 + r8099699;
        double r8099701 = 50.273438;
        double r8099702 = r8099698 * r8099687;
        double r8099703 = r8099702 * r8099687;
        double r8099704 = r8099701 * r8099703;
        double r8099705 = r8099700 + r8099704;
        return r8099705;
}


double f_of(float x) {
        float r8099706 = x;
        float r8099707 = r8099706 * r8099706;
        float r8099708 = r8099707 * r8099707;
        float r8099709 = -93.84375;
        float r8099710 = r8099707 * r8099709;
        float r8099711 = 54.140625;
        float r8099712 = r8099710 + r8099711;
        float r8099713 = r8099708 * r8099712;
        float r8099714 = 3;
        float r8099715 = 1;
        float r8099716 = r8099714 + r8099715;
        float r8099717 = pow(r8099707, r8099716);
        float r8099718 = 50.273438;
        float r8099719 = r8099717 * r8099718;
        float r8099720 = 0.273438;
        float r8099721 = -9.84375;
        float r8099722 = r8099706 * r8099721;
        float r8099723 = r8099706 * r8099722;
        float r8099724 = r8099720 + r8099723;
        float r8099725 = r8099719 + r8099724;
        float r8099726 = r8099713 + r8099725;
        return r8099726;
}

double f_od(double x) {
        double r8099727 = x;
        double r8099728 = r8099727 * r8099727;
        double r8099729 = r8099728 * r8099728;
        double r8099730 = -93.84375;
        double r8099731 = r8099728 * r8099730;
        double r8099732 = 54.140625;
        double r8099733 = r8099731 + r8099732;
        double r8099734 = r8099729 * r8099733;
        double r8099735 = 3;
        double r8099736 = 1;
        double r8099737 = r8099735 + r8099736;
        double r8099738 = pow(r8099728, r8099737);
        double r8099739 = 50.273438;
        double r8099740 = r8099738 * r8099739;
        double r8099741 = 0.273438;
        double r8099742 = -9.84375;
        double r8099743 = r8099727 * r8099742;
        double r8099744 = r8099727 * r8099743;
        double r8099745 = r8099741 + r8099744;
        double r8099746 = r8099740 + r8099745;
        double r8099747 = r8099734 + r8099746;
        return r8099747;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8099748, r8099749, r8099750, r8099751, r8099752, r8099753, r8099754, r8099755, r8099756, r8099757, r8099758, r8099759, r8099760, r8099761, r8099762, r8099763, r8099764, r8099765, r8099766, r8099767, r8099768;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8099748, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099749, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8099750);
        mpfr_init(r8099751);
        mpfr_init(r8099752);
        mpfr_init(r8099753);
        mpfr_init_set_str(r8099754, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8099755);
        mpfr_init(r8099756);
        mpfr_init(r8099757);
        mpfr_init(r8099758);
        mpfr_init_set_str(r8099759, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8099760);
        mpfr_init(r8099761);
        mpfr_init(r8099762);
        mpfr_init(r8099763);
        mpfr_init_set_str(r8099764, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8099765);
        mpfr_init(r8099766);
        mpfr_init(r8099767);
        mpfr_init(r8099768);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8099750, x, MPFR_RNDN);
        mpfr_mul(r8099751, r8099750, r8099750, MPFR_RNDN);
        mpfr_mul(r8099752, r8099749, r8099751, MPFR_RNDN);
        mpfr_add(r8099753, r8099748, r8099752, MPFR_RNDN);
        ;
        mpfr_mul(r8099755, r8099751, r8099750, MPFR_RNDN);
        mpfr_mul(r8099756, r8099755, r8099750, MPFR_RNDN);
        mpfr_mul(r8099757, r8099754, r8099756, MPFR_RNDN);
        mpfr_add(r8099758, r8099753, r8099757, MPFR_RNDN);
        ;
        mpfr_mul(r8099760, r8099756, r8099750, MPFR_RNDN);
        mpfr_mul(r8099761, r8099760, r8099750, MPFR_RNDN);
        mpfr_mul(r8099762, r8099759, r8099761, MPFR_RNDN);
        mpfr_add(r8099763, r8099758, r8099762, MPFR_RNDN);
        ;
        mpfr_mul(r8099765, r8099761, r8099750, MPFR_RNDN);
        mpfr_mul(r8099766, r8099765, r8099750, MPFR_RNDN);
        mpfr_mul(r8099767, r8099764, r8099766, MPFR_RNDN);
        mpfr_add(r8099768, r8099763, r8099767, MPFR_RNDN);
        return mpfr_get_d(r8099768, MPFR_RNDN);
}

static mpfr_t r8099769, r8099770, r8099771, r8099772, r8099773, r8099774, r8099775, r8099776, r8099777, r8099778, r8099779, r8099780, r8099781, r8099782, r8099783, r8099784, r8099785, r8099786, r8099787, r8099788, r8099789;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8099769);
        mpfr_init(r8099770);
        mpfr_init(r8099771);
        mpfr_init_set_str(r8099772, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8099773);
        mpfr_init_set_str(r8099774, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8099775);
        mpfr_init(r8099776);
        mpfr_init_set_str(r8099777, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099778, "1", 10, MPFR_RNDN);
        mpfr_init(r8099779);
        mpfr_init(r8099780);
        mpfr_init_set_str(r8099781, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8099782);
        mpfr_init_set_str(r8099783, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099784, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8099785);
        mpfr_init(r8099786);
        mpfr_init(r8099787);
        mpfr_init(r8099788);
        mpfr_init(r8099789);
}

double f_fm(double x) {
        mpfr_set_d(r8099769, x, MPFR_RNDN);
        mpfr_mul(r8099770, r8099769, r8099769, MPFR_RNDN);
        mpfr_mul(r8099771, r8099770, r8099770, MPFR_RNDN);
        ;
        mpfr_mul(r8099773, r8099770, r8099772, MPFR_RNDN);
        ;
        mpfr_add(r8099775, r8099773, r8099774, MPFR_RNDN);
        mpfr_mul(r8099776, r8099771, r8099775, MPFR_RNDN);
        ;
        ;
        mpfr_add(r8099779, r8099777, r8099778, MPFR_RNDN);
        mpfr_pow(r8099780, r8099770, r8099779, MPFR_RNDN);
        ;
        mpfr_mul(r8099782, r8099780, r8099781, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8099785, r8099769, r8099784, MPFR_RNDN);
        mpfr_mul(r8099786, r8099769, r8099785, MPFR_RNDN);
        mpfr_add(r8099787, r8099783, r8099786, MPFR_RNDN);
        mpfr_add(r8099788, r8099782, r8099787, MPFR_RNDN);
        mpfr_add(r8099789, r8099776, r8099788, MPFR_RNDN);
        return mpfr_get_d(r8099789, MPFR_RNDN);
}

static mpfr_t r8099790, r8099791, r8099792, r8099793, r8099794, r8099795, r8099796, r8099797, r8099798, r8099799, r8099800, r8099801, r8099802, r8099803, r8099804, r8099805, r8099806, r8099807, r8099808, r8099809, r8099810;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8099790);
        mpfr_init(r8099791);
        mpfr_init(r8099792);
        mpfr_init_set_str(r8099793, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r8099794);
        mpfr_init_set_str(r8099795, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r8099796);
        mpfr_init(r8099797);
        mpfr_init_set_str(r8099798, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099799, "1", 10, MPFR_RNDN);
        mpfr_init(r8099800);
        mpfr_init(r8099801);
        mpfr_init_set_str(r8099802, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r8099803);
        mpfr_init_set_str(r8099804, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r8099805, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r8099806);
        mpfr_init(r8099807);
        mpfr_init(r8099808);
        mpfr_init(r8099809);
        mpfr_init(r8099810);
}

double f_dm(double x) {
        mpfr_set_d(r8099790, x, MPFR_RNDN);
        mpfr_mul(r8099791, r8099790, r8099790, MPFR_RNDN);
        mpfr_mul(r8099792, r8099791, r8099791, MPFR_RNDN);
        ;
        mpfr_mul(r8099794, r8099791, r8099793, MPFR_RNDN);
        ;
        mpfr_add(r8099796, r8099794, r8099795, MPFR_RNDN);
        mpfr_mul(r8099797, r8099792, r8099796, MPFR_RNDN);
        ;
        ;
        mpfr_add(r8099800, r8099798, r8099799, MPFR_RNDN);
        mpfr_pow(r8099801, r8099791, r8099800, MPFR_RNDN);
        ;
        mpfr_mul(r8099803, r8099801, r8099802, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8099806, r8099790, r8099805, MPFR_RNDN);
        mpfr_mul(r8099807, r8099790, r8099806, MPFR_RNDN);
        mpfr_add(r8099808, r8099804, r8099807, MPFR_RNDN);
        mpfr_add(r8099809, r8099803, r8099808, MPFR_RNDN);
        mpfr_add(r8099810, r8099797, r8099809, MPFR_RNDN);
        return mpfr_get_d(r8099810, MPFR_RNDN);
}

