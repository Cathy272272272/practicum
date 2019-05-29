#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r11587616 = 1.0;
        float r11587617 = -5.0;
        float r11587618 = x;
        float r11587619 = r11587617 * r11587618;
        float r11587620 = r11587616 + r11587619;
        float r11587621 = 5.0;
        float r11587622 = r11587618 * r11587618;
        float r11587623 = r11587621 * r11587622;
        float r11587624 = r11587620 + r11587623;
        float r11587625 = -1.666667;
        float r11587626 = r11587622 * r11587618;
        float r11587627 = r11587625 * r11587626;
        float r11587628 = r11587624 + r11587627;
        float r11587629 = 0.208333;
        float r11587630 = r11587626 * r11587618;
        float r11587631 = r11587629 * r11587630;
        float r11587632 = r11587628 + r11587631;
        float r11587633 = -0.008333;
        float r11587634 = r11587630 * r11587618;
        float r11587635 = r11587633 * r11587634;
        float r11587636 = r11587632 + r11587635;
        return r11587636;
}

double f_id(double x) {
        double r11587637 = 1.0;
        double r11587638 = -5.0;
        double r11587639 = x;
        double r11587640 = r11587638 * r11587639;
        double r11587641 = r11587637 + r11587640;
        double r11587642 = 5.0;
        double r11587643 = r11587639 * r11587639;
        double r11587644 = r11587642 * r11587643;
        double r11587645 = r11587641 + r11587644;
        double r11587646 = -1.666667;
        double r11587647 = r11587643 * r11587639;
        double r11587648 = r11587646 * r11587647;
        double r11587649 = r11587645 + r11587648;
        double r11587650 = 0.208333;
        double r11587651 = r11587647 * r11587639;
        double r11587652 = r11587650 * r11587651;
        double r11587653 = r11587649 + r11587652;
        double r11587654 = -0.008333;
        double r11587655 = r11587651 * r11587639;
        double r11587656 = r11587654 * r11587655;
        double r11587657 = r11587653 + r11587656;
        return r11587657;
}


double f_of(float x) {
        float r11587658 = 1.0;
        float r11587659 = -5.0;
        float r11587660 = x;
        float r11587661 = r11587659 * r11587660;
        float r11587662 = r11587658 + r11587661;
        float r11587663 = 5.0;
        float r11587664 = r11587660 * r11587660;
        float r11587665 = r11587663 * r11587664;
        float r11587666 = r11587662 + r11587665;
        float r11587667 = -1.666667;
        float r11587668 = r11587664 * r11587660;
        float r11587669 = r11587667 * r11587668;
        float r11587670 = cbrt(r11587669);
        float r11587671 = r11587670 * r11587670;
        float r11587672 = r11587671 * r11587670;
        float r11587673 = r11587666 + r11587672;
        float r11587674 = 0.208333;
        float r11587675 = r11587668 * r11587660;
        float r11587676 = r11587674 * r11587675;
        float r11587677 = r11587673 + r11587676;
        float r11587678 = -0.008333;
        float r11587679 = r11587675 * r11587660;
        float r11587680 = r11587678 * r11587679;
        float r11587681 = r11587677 + r11587680;
        return r11587681;
}

double f_od(double x) {
        double r11587682 = 1.0;
        double r11587683 = -5.0;
        double r11587684 = x;
        double r11587685 = r11587683 * r11587684;
        double r11587686 = r11587682 + r11587685;
        double r11587687 = 5.0;
        double r11587688 = r11587684 * r11587684;
        double r11587689 = r11587687 * r11587688;
        double r11587690 = r11587686 + r11587689;
        double r11587691 = -1.666667;
        double r11587692 = r11587688 * r11587684;
        double r11587693 = r11587691 * r11587692;
        double r11587694 = cbrt(r11587693);
        double r11587695 = r11587694 * r11587694;
        double r11587696 = r11587695 * r11587694;
        double r11587697 = r11587690 + r11587696;
        double r11587698 = 0.208333;
        double r11587699 = r11587692 * r11587684;
        double r11587700 = r11587698 * r11587699;
        double r11587701 = r11587697 + r11587700;
        double r11587702 = -0.008333;
        double r11587703 = r11587699 * r11587684;
        double r11587704 = r11587702 * r11587703;
        double r11587705 = r11587701 + r11587704;
        return r11587705;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11587706, r11587707, r11587708, r11587709, r11587710, r11587711, r11587712, r11587713, r11587714, r11587715, r11587716, r11587717, r11587718, r11587719, r11587720, r11587721, r11587722, r11587723, r11587724, r11587725, r11587726;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11587706, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587707, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11587708);
        mpfr_init(r11587709);
        mpfr_init(r11587710);
        mpfr_init_set_str(r11587711, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11587712);
        mpfr_init(r11587713);
        mpfr_init(r11587714);
        mpfr_init_set_str(r11587715, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11587716);
        mpfr_init(r11587717);
        mpfr_init(r11587718);
        mpfr_init_set_str(r11587719, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11587720);
        mpfr_init(r11587721);
        mpfr_init(r11587722);
        mpfr_init_set_str(r11587723, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11587724);
        mpfr_init(r11587725);
        mpfr_init(r11587726);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11587708, x, MPFR_RNDN);
        mpfr_mul(r11587709, r11587707, r11587708, MPFR_RNDN);
        mpfr_add(r11587710, r11587706, r11587709, MPFR_RNDN);
        ;
        mpfr_mul(r11587712, r11587708, r11587708, MPFR_RNDN);
        mpfr_mul(r11587713, r11587711, r11587712, MPFR_RNDN);
        mpfr_add(r11587714, r11587710, r11587713, MPFR_RNDN);
        ;
        mpfr_mul(r11587716, r11587712, r11587708, MPFR_RNDN);
        mpfr_mul(r11587717, r11587715, r11587716, MPFR_RNDN);
        mpfr_add(r11587718, r11587714, r11587717, MPFR_RNDN);
        ;
        mpfr_mul(r11587720, r11587716, r11587708, MPFR_RNDN);
        mpfr_mul(r11587721, r11587719, r11587720, MPFR_RNDN);
        mpfr_add(r11587722, r11587718, r11587721, MPFR_RNDN);
        ;
        mpfr_mul(r11587724, r11587720, r11587708, MPFR_RNDN);
        mpfr_mul(r11587725, r11587723, r11587724, MPFR_RNDN);
        mpfr_add(r11587726, r11587722, r11587725, MPFR_RNDN);
        return mpfr_get_d(r11587726, MPFR_RNDN);
}

static mpfr_t r11587727, r11587728, r11587729, r11587730, r11587731, r11587732, r11587733, r11587734, r11587735, r11587736, r11587737, r11587738, r11587739, r11587740, r11587741, r11587742, r11587743, r11587744, r11587745, r11587746, r11587747, r11587748, r11587749, r11587750;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11587727, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587728, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11587729);
        mpfr_init(r11587730);
        mpfr_init(r11587731);
        mpfr_init_set_str(r11587732, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11587733);
        mpfr_init(r11587734);
        mpfr_init(r11587735);
        mpfr_init_set_str(r11587736, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11587737);
        mpfr_init(r11587738);
        mpfr_init(r11587739);
        mpfr_init(r11587740);
        mpfr_init(r11587741);
        mpfr_init(r11587742);
        mpfr_init_set_str(r11587743, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11587744);
        mpfr_init(r11587745);
        mpfr_init(r11587746);
        mpfr_init_set_str(r11587747, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11587748);
        mpfr_init(r11587749);
        mpfr_init(r11587750);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11587729, x, MPFR_RNDN);
        mpfr_mul(r11587730, r11587728, r11587729, MPFR_RNDN);
        mpfr_add(r11587731, r11587727, r11587730, MPFR_RNDN);
        ;
        mpfr_mul(r11587733, r11587729, r11587729, MPFR_RNDN);
        mpfr_mul(r11587734, r11587732, r11587733, MPFR_RNDN);
        mpfr_add(r11587735, r11587731, r11587734, MPFR_RNDN);
        ;
        mpfr_mul(r11587737, r11587733, r11587729, MPFR_RNDN);
        mpfr_mul(r11587738, r11587736, r11587737, MPFR_RNDN);
        mpfr_cbrt(r11587739, r11587738, MPFR_RNDN);
        mpfr_mul(r11587740, r11587739, r11587739, MPFR_RNDN);
        mpfr_mul(r11587741, r11587740, r11587739, MPFR_RNDN);
        mpfr_add(r11587742, r11587735, r11587741, MPFR_RNDN);
        ;
        mpfr_mul(r11587744, r11587737, r11587729, MPFR_RNDN);
        mpfr_mul(r11587745, r11587743, r11587744, MPFR_RNDN);
        mpfr_add(r11587746, r11587742, r11587745, MPFR_RNDN);
        ;
        mpfr_mul(r11587748, r11587744, r11587729, MPFR_RNDN);
        mpfr_mul(r11587749, r11587747, r11587748, MPFR_RNDN);
        mpfr_add(r11587750, r11587746, r11587749, MPFR_RNDN);
        return mpfr_get_d(r11587750, MPFR_RNDN);
}

static mpfr_t r11587751, r11587752, r11587753, r11587754, r11587755, r11587756, r11587757, r11587758, r11587759, r11587760, r11587761, r11587762, r11587763, r11587764, r11587765, r11587766, r11587767, r11587768, r11587769, r11587770, r11587771, r11587772, r11587773, r11587774;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11587751, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587752, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r11587753);
        mpfr_init(r11587754);
        mpfr_init(r11587755);
        mpfr_init_set_str(r11587756, "5.0", 10, MPFR_RNDN);
        mpfr_init(r11587757);
        mpfr_init(r11587758);
        mpfr_init(r11587759);
        mpfr_init_set_str(r11587760, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r11587761);
        mpfr_init(r11587762);
        mpfr_init(r11587763);
        mpfr_init(r11587764);
        mpfr_init(r11587765);
        mpfr_init(r11587766);
        mpfr_init_set_str(r11587767, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r11587768);
        mpfr_init(r11587769);
        mpfr_init(r11587770);
        mpfr_init_set_str(r11587771, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r11587772);
        mpfr_init(r11587773);
        mpfr_init(r11587774);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11587753, x, MPFR_RNDN);
        mpfr_mul(r11587754, r11587752, r11587753, MPFR_RNDN);
        mpfr_add(r11587755, r11587751, r11587754, MPFR_RNDN);
        ;
        mpfr_mul(r11587757, r11587753, r11587753, MPFR_RNDN);
        mpfr_mul(r11587758, r11587756, r11587757, MPFR_RNDN);
        mpfr_add(r11587759, r11587755, r11587758, MPFR_RNDN);
        ;
        mpfr_mul(r11587761, r11587757, r11587753, MPFR_RNDN);
        mpfr_mul(r11587762, r11587760, r11587761, MPFR_RNDN);
        mpfr_cbrt(r11587763, r11587762, MPFR_RNDN);
        mpfr_mul(r11587764, r11587763, r11587763, MPFR_RNDN);
        mpfr_mul(r11587765, r11587764, r11587763, MPFR_RNDN);
        mpfr_add(r11587766, r11587759, r11587765, MPFR_RNDN);
        ;
        mpfr_mul(r11587768, r11587761, r11587753, MPFR_RNDN);
        mpfr_mul(r11587769, r11587767, r11587768, MPFR_RNDN);
        mpfr_add(r11587770, r11587766, r11587769, MPFR_RNDN);
        ;
        mpfr_mul(r11587772, r11587768, r11587753, MPFR_RNDN);
        mpfr_mul(r11587773, r11587771, r11587772, MPFR_RNDN);
        mpfr_add(r11587774, r11587770, r11587773, MPFR_RNDN);
        return mpfr_get_d(r11587774, MPFR_RNDN);
}

