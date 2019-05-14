#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6903634 = -2.1875;
        float r6903635 = x;
        float r6903636 = r6903634 * r6903635;
        float r6903637 = 19.6875;
        float r6903638 = r6903635 * r6903635;
        float r6903639 = r6903638 * r6903635;
        float r6903640 = r6903637 * r6903639;
        float r6903641 = r6903636 + r6903640;
        float r6903642 = -43.3125;
        float r6903643 = r6903639 * r6903635;
        float r6903644 = r6903643 * r6903635;
        float r6903645 = r6903642 * r6903644;
        float r6903646 = r6903641 + r6903645;
        float r6903647 = 26.8125;
        float r6903648 = r6903644 * r6903635;
        float r6903649 = r6903648 * r6903635;
        float r6903650 = r6903647 * r6903649;
        float r6903651 = r6903646 + r6903650;
        return r6903651;
}

double f_id(double x) {
        double r6903652 = -2.1875;
        double r6903653 = x;
        double r6903654 = r6903652 * r6903653;
        double r6903655 = 19.6875;
        double r6903656 = r6903653 * r6903653;
        double r6903657 = r6903656 * r6903653;
        double r6903658 = r6903655 * r6903657;
        double r6903659 = r6903654 + r6903658;
        double r6903660 = -43.3125;
        double r6903661 = r6903657 * r6903653;
        double r6903662 = r6903661 * r6903653;
        double r6903663 = r6903660 * r6903662;
        double r6903664 = r6903659 + r6903663;
        double r6903665 = 26.8125;
        double r6903666 = r6903662 * r6903653;
        double r6903667 = r6903666 * r6903653;
        double r6903668 = r6903665 * r6903667;
        double r6903669 = r6903664 + r6903668;
        return r6903669;
}


double f_of(float x) {
        float r6903670 = x;
        float r6903671 = 3;
        float r6903672 = pow(r6903670, r6903671);
        float r6903673 = 1;
        float r6903674 = r6903671 + r6903673;
        float r6903675 = pow(r6903672, r6903674);
        float r6903676 = cbrt(r6903675);
        float r6903677 = r6903670 * r6903670;
        float r6903678 = 26.8125;
        float r6903679 = r6903678 * r6903670;
        float r6903680 = r6903677 * r6903679;
        float r6903681 = -43.3125;
        float r6903682 = r6903670 * r6903681;
        float r6903683 = r6903680 + r6903682;
        float r6903684 = r6903676 * r6903683;
        float r6903685 = 19.6875;
        float r6903686 = r6903685 * r6903670;
        float r6903687 = r6903686 * r6903670;
        float r6903688 = -2.1875;
        float r6903689 = r6903687 + r6903688;
        float r6903690 = r6903670 * r6903689;
        float r6903691 = r6903684 + r6903690;
        return r6903691;
}

double f_od(double x) {
        double r6903692 = x;
        double r6903693 = 3;
        double r6903694 = pow(r6903692, r6903693);
        double r6903695 = 1;
        double r6903696 = r6903693 + r6903695;
        double r6903697 = pow(r6903694, r6903696);
        double r6903698 = cbrt(r6903697);
        double r6903699 = r6903692 * r6903692;
        double r6903700 = 26.8125;
        double r6903701 = r6903700 * r6903692;
        double r6903702 = r6903699 * r6903701;
        double r6903703 = -43.3125;
        double r6903704 = r6903692 * r6903703;
        double r6903705 = r6903702 + r6903704;
        double r6903706 = r6903698 * r6903705;
        double r6903707 = 19.6875;
        double r6903708 = r6903707 * r6903692;
        double r6903709 = r6903708 * r6903692;
        double r6903710 = -2.1875;
        double r6903711 = r6903709 + r6903710;
        double r6903712 = r6903692 * r6903711;
        double r6903713 = r6903706 + r6903712;
        return r6903713;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6903714, r6903715, r6903716, r6903717, r6903718, r6903719, r6903720, r6903721, r6903722, r6903723, r6903724, r6903725, r6903726, r6903727, r6903728, r6903729, r6903730, r6903731;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6903714, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6903715);
        mpfr_init(r6903716);
        mpfr_init_set_str(r6903717, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6903718);
        mpfr_init(r6903719);
        mpfr_init(r6903720);
        mpfr_init(r6903721);
        mpfr_init_set_str(r6903722, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6903723);
        mpfr_init(r6903724);
        mpfr_init(r6903725);
        mpfr_init(r6903726);
        mpfr_init_set_str(r6903727, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6903728);
        mpfr_init(r6903729);
        mpfr_init(r6903730);
        mpfr_init(r6903731);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6903715, x, MPFR_RNDN);
        mpfr_mul(r6903716, r6903714, r6903715, MPFR_RNDN);
        ;
        mpfr_mul(r6903718, r6903715, r6903715, MPFR_RNDN);
        mpfr_mul(r6903719, r6903718, r6903715, MPFR_RNDN);
        mpfr_mul(r6903720, r6903717, r6903719, MPFR_RNDN);
        mpfr_add(r6903721, r6903716, r6903720, MPFR_RNDN);
        ;
        mpfr_mul(r6903723, r6903719, r6903715, MPFR_RNDN);
        mpfr_mul(r6903724, r6903723, r6903715, MPFR_RNDN);
        mpfr_mul(r6903725, r6903722, r6903724, MPFR_RNDN);
        mpfr_add(r6903726, r6903721, r6903725, MPFR_RNDN);
        ;
        mpfr_mul(r6903728, r6903724, r6903715, MPFR_RNDN);
        mpfr_mul(r6903729, r6903728, r6903715, MPFR_RNDN);
        mpfr_mul(r6903730, r6903727, r6903729, MPFR_RNDN);
        mpfr_add(r6903731, r6903726, r6903730, MPFR_RNDN);
        return mpfr_get_d(r6903731, MPFR_RNDN);
}

static mpfr_t r6903732, r6903733, r6903734, r6903735, r6903736, r6903737, r6903738, r6903739, r6903740, r6903741, r6903742, r6903743, r6903744, r6903745, r6903746, r6903747, r6903748, r6903749, r6903750, r6903751, r6903752, r6903753;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6903732);
        mpfr_init_set_str(r6903733, "3", 10, MPFR_RNDN);
        mpfr_init(r6903734);
        mpfr_init_set_str(r6903735, "1", 10, MPFR_RNDN);
        mpfr_init(r6903736);
        mpfr_init(r6903737);
        mpfr_init(r6903738);
        mpfr_init(r6903739);
        mpfr_init_set_str(r6903740, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6903741);
        mpfr_init(r6903742);
        mpfr_init_set_str(r6903743, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6903744);
        mpfr_init(r6903745);
        mpfr_init(r6903746);
        mpfr_init_set_str(r6903747, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6903748);
        mpfr_init(r6903749);
        mpfr_init_set_str(r6903750, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6903751);
        mpfr_init(r6903752);
        mpfr_init(r6903753);
}

double f_fm(double x) {
        mpfr_set_d(r6903732, x, MPFR_RNDN);
        ;
        mpfr_pow(r6903734, r6903732, r6903733, MPFR_RNDN);
        ;
        mpfr_add(r6903736, r6903733, r6903735, MPFR_RNDN);
        mpfr_pow(r6903737, r6903734, r6903736, MPFR_RNDN);
        mpfr_cbrt(r6903738, r6903737, MPFR_RNDN);
        mpfr_mul(r6903739, r6903732, r6903732, MPFR_RNDN);
        ;
        mpfr_mul(r6903741, r6903740, r6903732, MPFR_RNDN);
        mpfr_mul(r6903742, r6903739, r6903741, MPFR_RNDN);
        ;
        mpfr_mul(r6903744, r6903732, r6903743, MPFR_RNDN);
        mpfr_add(r6903745, r6903742, r6903744, MPFR_RNDN);
        mpfr_mul(r6903746, r6903738, r6903745, MPFR_RNDN);
        ;
        mpfr_mul(r6903748, r6903747, r6903732, MPFR_RNDN);
        mpfr_mul(r6903749, r6903748, r6903732, MPFR_RNDN);
        ;
        mpfr_add(r6903751, r6903749, r6903750, MPFR_RNDN);
        mpfr_mul(r6903752, r6903732, r6903751, MPFR_RNDN);
        mpfr_add(r6903753, r6903746, r6903752, MPFR_RNDN);
        return mpfr_get_d(r6903753, MPFR_RNDN);
}

static mpfr_t r6903754, r6903755, r6903756, r6903757, r6903758, r6903759, r6903760, r6903761, r6903762, r6903763, r6903764, r6903765, r6903766, r6903767, r6903768, r6903769, r6903770, r6903771, r6903772, r6903773, r6903774, r6903775;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6903754);
        mpfr_init_set_str(r6903755, "3", 10, MPFR_RNDN);
        mpfr_init(r6903756);
        mpfr_init_set_str(r6903757, "1", 10, MPFR_RNDN);
        mpfr_init(r6903758);
        mpfr_init(r6903759);
        mpfr_init(r6903760);
        mpfr_init(r6903761);
        mpfr_init_set_str(r6903762, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r6903763);
        mpfr_init(r6903764);
        mpfr_init_set_str(r6903765, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r6903766);
        mpfr_init(r6903767);
        mpfr_init(r6903768);
        mpfr_init_set_str(r6903769, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r6903770);
        mpfr_init(r6903771);
        mpfr_init_set_str(r6903772, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r6903773);
        mpfr_init(r6903774);
        mpfr_init(r6903775);
}

double f_dm(double x) {
        mpfr_set_d(r6903754, x, MPFR_RNDN);
        ;
        mpfr_pow(r6903756, r6903754, r6903755, MPFR_RNDN);
        ;
        mpfr_add(r6903758, r6903755, r6903757, MPFR_RNDN);
        mpfr_pow(r6903759, r6903756, r6903758, MPFR_RNDN);
        mpfr_cbrt(r6903760, r6903759, MPFR_RNDN);
        mpfr_mul(r6903761, r6903754, r6903754, MPFR_RNDN);
        ;
        mpfr_mul(r6903763, r6903762, r6903754, MPFR_RNDN);
        mpfr_mul(r6903764, r6903761, r6903763, MPFR_RNDN);
        ;
        mpfr_mul(r6903766, r6903754, r6903765, MPFR_RNDN);
        mpfr_add(r6903767, r6903764, r6903766, MPFR_RNDN);
        mpfr_mul(r6903768, r6903760, r6903767, MPFR_RNDN);
        ;
        mpfr_mul(r6903770, r6903769, r6903754, MPFR_RNDN);
        mpfr_mul(r6903771, r6903770, r6903754, MPFR_RNDN);
        ;
        mpfr_add(r6903773, r6903771, r6903772, MPFR_RNDN);
        mpfr_mul(r6903774, r6903754, r6903773, MPFR_RNDN);
        mpfr_add(r6903775, r6903768, r6903774, MPFR_RNDN);
        return mpfr_get_d(r6903775, MPFR_RNDN);
}

