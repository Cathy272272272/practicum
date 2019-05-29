#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6432677 = 1.875;
        float r6432678 = x;
        float r6432679 = r6432677 * r6432678;
        float r6432680 = -8.75;
        float r6432681 = r6432678 * r6432678;
        float r6432682 = r6432681 * r6432678;
        float r6432683 = r6432680 * r6432682;
        float r6432684 = r6432679 + r6432683;
        float r6432685 = 7.875;
        float r6432686 = r6432682 * r6432678;
        float r6432687 = r6432686 * r6432678;
        float r6432688 = r6432685 * r6432687;
        float r6432689 = r6432684 + r6432688;
        return r6432689;
}

double f_id(double x) {
        double r6432690 = 1.875;
        double r6432691 = x;
        double r6432692 = r6432690 * r6432691;
        double r6432693 = -8.75;
        double r6432694 = r6432691 * r6432691;
        double r6432695 = r6432694 * r6432691;
        double r6432696 = r6432693 * r6432695;
        double r6432697 = r6432692 + r6432696;
        double r6432698 = 7.875;
        double r6432699 = r6432695 * r6432691;
        double r6432700 = r6432699 * r6432691;
        double r6432701 = r6432698 * r6432700;
        double r6432702 = r6432697 + r6432701;
        return r6432702;
}


double f_of(float x) {
        float r6432703 = 1.875;
        float r6432704 = x;
        float r6432705 = r6432703 * r6432704;
        float r6432706 = -8.75;
        float r6432707 = r6432704 * r6432704;
        float r6432708 = r6432707 * r6432704;
        float r6432709 = r6432706 * r6432708;
        float r6432710 = r6432705 + r6432709;
        float r6432711 = 7.875;
        float r6432712 = 3;
        float r6432713 = 1;
        float r6432714 = r6432712 + r6432713;
        float r6432715 = r6432714 + r6432713;
        float r6432716 = pow(r6432704, r6432715);
        float r6432717 = r6432711 * r6432716;
        float r6432718 = r6432710 + r6432717;
        return r6432718;
}

double f_od(double x) {
        double r6432719 = 1.875;
        double r6432720 = x;
        double r6432721 = r6432719 * r6432720;
        double r6432722 = -8.75;
        double r6432723 = r6432720 * r6432720;
        double r6432724 = r6432723 * r6432720;
        double r6432725 = r6432722 * r6432724;
        double r6432726 = r6432721 + r6432725;
        double r6432727 = 7.875;
        double r6432728 = 3;
        double r6432729 = 1;
        double r6432730 = r6432728 + r6432729;
        double r6432731 = r6432730 + r6432729;
        double r6432732 = pow(r6432720, r6432731);
        double r6432733 = r6432727 * r6432732;
        double r6432734 = r6432726 + r6432733;
        return r6432734;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6432735, r6432736, r6432737, r6432738, r6432739, r6432740, r6432741, r6432742, r6432743, r6432744, r6432745, r6432746, r6432747;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432735, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6432736);
        mpfr_init(r6432737);
        mpfr_init_set_str(r6432738, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6432739);
        mpfr_init(r6432740);
        mpfr_init(r6432741);
        mpfr_init(r6432742);
        mpfr_init_set_str(r6432743, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6432744);
        mpfr_init(r6432745);
        mpfr_init(r6432746);
        mpfr_init(r6432747);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6432736, x, MPFR_RNDN);
        mpfr_mul(r6432737, r6432735, r6432736, MPFR_RNDN);
        ;
        mpfr_mul(r6432739, r6432736, r6432736, MPFR_RNDN);
        mpfr_mul(r6432740, r6432739, r6432736, MPFR_RNDN);
        mpfr_mul(r6432741, r6432738, r6432740, MPFR_RNDN);
        mpfr_add(r6432742, r6432737, r6432741, MPFR_RNDN);
        ;
        mpfr_mul(r6432744, r6432740, r6432736, MPFR_RNDN);
        mpfr_mul(r6432745, r6432744, r6432736, MPFR_RNDN);
        mpfr_mul(r6432746, r6432743, r6432745, MPFR_RNDN);
        mpfr_add(r6432747, r6432742, r6432746, MPFR_RNDN);
        return mpfr_get_d(r6432747, MPFR_RNDN);
}

static mpfr_t r6432748, r6432749, r6432750, r6432751, r6432752, r6432753, r6432754, r6432755, r6432756, r6432757, r6432758, r6432759, r6432760, r6432761, r6432762, r6432763;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432748, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6432749);
        mpfr_init(r6432750);
        mpfr_init_set_str(r6432751, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6432752);
        mpfr_init(r6432753);
        mpfr_init(r6432754);
        mpfr_init(r6432755);
        mpfr_init_set_str(r6432756, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432757, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432758, "1", 10, MPFR_RNDN);
        mpfr_init(r6432759);
        mpfr_init(r6432760);
        mpfr_init(r6432761);
        mpfr_init(r6432762);
        mpfr_init(r6432763);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6432749, x, MPFR_RNDN);
        mpfr_mul(r6432750, r6432748, r6432749, MPFR_RNDN);
        ;
        mpfr_mul(r6432752, r6432749, r6432749, MPFR_RNDN);
        mpfr_mul(r6432753, r6432752, r6432749, MPFR_RNDN);
        mpfr_mul(r6432754, r6432751, r6432753, MPFR_RNDN);
        mpfr_add(r6432755, r6432750, r6432754, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r6432759, r6432757, r6432758, MPFR_RNDN);
        mpfr_add(r6432760, r6432759, r6432758, MPFR_RNDN);
        mpfr_pow(r6432761, r6432749, r6432760, MPFR_RNDN);
        mpfr_mul(r6432762, r6432756, r6432761, MPFR_RNDN);
        mpfr_add(r6432763, r6432755, r6432762, MPFR_RNDN);
        return mpfr_get_d(r6432763, MPFR_RNDN);
}

static mpfr_t r6432764, r6432765, r6432766, r6432767, r6432768, r6432769, r6432770, r6432771, r6432772, r6432773, r6432774, r6432775, r6432776, r6432777, r6432778, r6432779;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6432764, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6432765);
        mpfr_init(r6432766);
        mpfr_init_set_str(r6432767, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6432768);
        mpfr_init(r6432769);
        mpfr_init(r6432770);
        mpfr_init(r6432771);
        mpfr_init_set_str(r6432772, "7.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432773, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6432774, "1", 10, MPFR_RNDN);
        mpfr_init(r6432775);
        mpfr_init(r6432776);
        mpfr_init(r6432777);
        mpfr_init(r6432778);
        mpfr_init(r6432779);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6432765, x, MPFR_RNDN);
        mpfr_mul(r6432766, r6432764, r6432765, MPFR_RNDN);
        ;
        mpfr_mul(r6432768, r6432765, r6432765, MPFR_RNDN);
        mpfr_mul(r6432769, r6432768, r6432765, MPFR_RNDN);
        mpfr_mul(r6432770, r6432767, r6432769, MPFR_RNDN);
        mpfr_add(r6432771, r6432766, r6432770, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r6432775, r6432773, r6432774, MPFR_RNDN);
        mpfr_add(r6432776, r6432775, r6432774, MPFR_RNDN);
        mpfr_pow(r6432777, r6432765, r6432776, MPFR_RNDN);
        mpfr_mul(r6432778, r6432772, r6432777, MPFR_RNDN);
        mpfr_add(r6432779, r6432771, r6432778, MPFR_RNDN);
        return mpfr_get_d(r6432779, MPFR_RNDN);
}

