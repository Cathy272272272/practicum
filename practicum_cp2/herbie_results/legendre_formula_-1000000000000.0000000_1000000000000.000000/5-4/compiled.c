#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7167693 = 0.375;
        float r7167694 = -3.75;
        float r7167695 = x;
        float r7167696 = r7167695 * r7167695;
        float r7167697 = r7167694 * r7167696;
        float r7167698 = r7167693 + r7167697;
        float r7167699 = 4.375;
        float r7167700 = r7167696 * r7167695;
        float r7167701 = r7167700 * r7167695;
        float r7167702 = r7167699 * r7167701;
        float r7167703 = r7167698 + r7167702;
        return r7167703;
}

double f_id(double x) {
        double r7167704 = 0.375;
        double r7167705 = -3.75;
        double r7167706 = x;
        double r7167707 = r7167706 * r7167706;
        double r7167708 = r7167705 * r7167707;
        double r7167709 = r7167704 + r7167708;
        double r7167710 = 4.375;
        double r7167711 = r7167707 * r7167706;
        double r7167712 = r7167711 * r7167706;
        double r7167713 = r7167710 * r7167712;
        double r7167714 = r7167709 + r7167713;
        return r7167714;
}


double f_of(float x) {
        float r7167715 = 0.375;
        float r7167716 = x;
        float r7167717 = 4.375;
        float r7167718 = r7167716 * r7167717;
        float r7167719 = r7167716 * r7167716;
        float r7167720 = r7167718 * r7167719;
        float r7167721 = r7167720 * r7167716;
        float r7167722 = -3.75;
        float r7167723 = r7167716 * r7167722;
        float r7167724 = r7167723 * r7167716;
        float r7167725 = r7167721 + r7167724;
        float r7167726 = r7167715 + r7167725;
        return r7167726;
}

double f_od(double x) {
        double r7167727 = 0.375;
        double r7167728 = x;
        double r7167729 = 4.375;
        double r7167730 = r7167728 * r7167729;
        double r7167731 = r7167728 * r7167728;
        double r7167732 = r7167730 * r7167731;
        double r7167733 = r7167732 * r7167728;
        double r7167734 = -3.75;
        double r7167735 = r7167728 * r7167734;
        double r7167736 = r7167735 * r7167728;
        double r7167737 = r7167733 + r7167736;
        double r7167738 = r7167727 + r7167737;
        return r7167738;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167739, r7167740, r7167741, r7167742, r7167743, r7167744, r7167745, r7167746, r7167747, r7167748, r7167749;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167739, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7167740, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7167741);
        mpfr_init(r7167742);
        mpfr_init(r7167743);
        mpfr_init(r7167744);
        mpfr_init_set_str(r7167745, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7167746);
        mpfr_init(r7167747);
        mpfr_init(r7167748);
        mpfr_init(r7167749);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7167741, x, MPFR_RNDN);
        mpfr_mul(r7167742, r7167741, r7167741, MPFR_RNDN);
        mpfr_mul(r7167743, r7167740, r7167742, MPFR_RNDN);
        mpfr_add(r7167744, r7167739, r7167743, MPFR_RNDN);
        ;
        mpfr_mul(r7167746, r7167742, r7167741, MPFR_RNDN);
        mpfr_mul(r7167747, r7167746, r7167741, MPFR_RNDN);
        mpfr_mul(r7167748, r7167745, r7167747, MPFR_RNDN);
        mpfr_add(r7167749, r7167744, r7167748, MPFR_RNDN);
        return mpfr_get_d(r7167749, MPFR_RNDN);
}

static mpfr_t r7167750, r7167751, r7167752, r7167753, r7167754, r7167755, r7167756, r7167757, r7167758, r7167759, r7167760, r7167761;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167750, "0.375", 10, MPFR_RNDN);
        mpfr_init(r7167751);
        mpfr_init_set_str(r7167752, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7167753);
        mpfr_init(r7167754);
        mpfr_init(r7167755);
        mpfr_init(r7167756);
        mpfr_init_set_str(r7167757, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7167758);
        mpfr_init(r7167759);
        mpfr_init(r7167760);
        mpfr_init(r7167761);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7167751, x, MPFR_RNDN);
        ;
        mpfr_mul(r7167753, r7167751, r7167752, MPFR_RNDN);
        mpfr_mul(r7167754, r7167751, r7167751, MPFR_RNDN);
        mpfr_mul(r7167755, r7167753, r7167754, MPFR_RNDN);
        mpfr_mul(r7167756, r7167755, r7167751, MPFR_RNDN);
        ;
        mpfr_mul(r7167758, r7167751, r7167757, MPFR_RNDN);
        mpfr_mul(r7167759, r7167758, r7167751, MPFR_RNDN);
        mpfr_add(r7167760, r7167756, r7167759, MPFR_RNDN);
        mpfr_add(r7167761, r7167750, r7167760, MPFR_RNDN);
        return mpfr_get_d(r7167761, MPFR_RNDN);
}

static mpfr_t r7167762, r7167763, r7167764, r7167765, r7167766, r7167767, r7167768, r7167769, r7167770, r7167771, r7167772, r7167773;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7167762, "0.375", 10, MPFR_RNDN);
        mpfr_init(r7167763);
        mpfr_init_set_str(r7167764, "4.375", 10, MPFR_RNDN);
        mpfr_init(r7167765);
        mpfr_init(r7167766);
        mpfr_init(r7167767);
        mpfr_init(r7167768);
        mpfr_init_set_str(r7167769, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r7167770);
        mpfr_init(r7167771);
        mpfr_init(r7167772);
        mpfr_init(r7167773);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7167763, x, MPFR_RNDN);
        ;
        mpfr_mul(r7167765, r7167763, r7167764, MPFR_RNDN);
        mpfr_mul(r7167766, r7167763, r7167763, MPFR_RNDN);
        mpfr_mul(r7167767, r7167765, r7167766, MPFR_RNDN);
        mpfr_mul(r7167768, r7167767, r7167763, MPFR_RNDN);
        ;
        mpfr_mul(r7167770, r7167763, r7167769, MPFR_RNDN);
        mpfr_mul(r7167771, r7167770, r7167763, MPFR_RNDN);
        mpfr_add(r7167772, r7167768, r7167771, MPFR_RNDN);
        mpfr_add(r7167773, r7167762, r7167772, MPFR_RNDN);
        return mpfr_get_d(r7167773, MPFR_RNDN);
}

