#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6764701 = 1.875;
        float r6764702 = x;
        float r6764703 = r6764701 * r6764702;
        float r6764704 = -8.75;
        float r6764705 = r6764702 * r6764702;
        float r6764706 = r6764705 * r6764702;
        float r6764707 = r6764704 * r6764706;
        float r6764708 = r6764703 + r6764707;
        float r6764709 = 7.875;
        float r6764710 = r6764706 * r6764702;
        float r6764711 = r6764710 * r6764702;
        float r6764712 = r6764709 * r6764711;
        float r6764713 = r6764708 + r6764712;
        return r6764713;
}

double f_id(double x) {
        double r6764714 = 1.875;
        double r6764715 = x;
        double r6764716 = r6764714 * r6764715;
        double r6764717 = -8.75;
        double r6764718 = r6764715 * r6764715;
        double r6764719 = r6764718 * r6764715;
        double r6764720 = r6764717 * r6764719;
        double r6764721 = r6764716 + r6764720;
        double r6764722 = 7.875;
        double r6764723 = r6764719 * r6764715;
        double r6764724 = r6764723 * r6764715;
        double r6764725 = r6764722 * r6764724;
        double r6764726 = r6764721 + r6764725;
        return r6764726;
}


double f_of(float x) {
        float r6764727 = 1.875;
        float r6764728 = x;
        float r6764729 = r6764727 * r6764728;
        float r6764730 = -8.75;
        float r6764731 = r6764728 * r6764728;
        float r6764732 = r6764731 * r6764728;
        float r6764733 = r6764730 * r6764732;
        float r6764734 = r6764729 + r6764733;
        float r6764735 = 3;
        float r6764736 = pow(r6764728, r6764735);
        float r6764737 = 7.875;
        float r6764738 = r6764737 * r6764728;
        float r6764739 = r6764736 * r6764738;
        float r6764740 = r6764739 * r6764728;
        float r6764741 = r6764734 + r6764740;
        return r6764741;
}

double f_od(double x) {
        double r6764742 = 1.875;
        double r6764743 = x;
        double r6764744 = r6764742 * r6764743;
        double r6764745 = -8.75;
        double r6764746 = r6764743 * r6764743;
        double r6764747 = r6764746 * r6764743;
        double r6764748 = r6764745 * r6764747;
        double r6764749 = r6764744 + r6764748;
        double r6764750 = 3;
        double r6764751 = pow(r6764743, r6764750);
        double r6764752 = 7.875;
        double r6764753 = r6764752 * r6764743;
        double r6764754 = r6764751 * r6764753;
        double r6764755 = r6764754 * r6764743;
        double r6764756 = r6764749 + r6764755;
        return r6764756;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6764757, r6764758, r6764759, r6764760, r6764761, r6764762, r6764763, r6764764, r6764765, r6764766, r6764767, r6764768, r6764769;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764757, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6764758);
        mpfr_init(r6764759);
        mpfr_init_set_str(r6764760, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6764761);
        mpfr_init(r6764762);
        mpfr_init(r6764763);
        mpfr_init(r6764764);
        mpfr_init_set_str(r6764765, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6764766);
        mpfr_init(r6764767);
        mpfr_init(r6764768);
        mpfr_init(r6764769);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6764758, x, MPFR_RNDN);
        mpfr_mul(r6764759, r6764757, r6764758, MPFR_RNDN);
        ;
        mpfr_mul(r6764761, r6764758, r6764758, MPFR_RNDN);
        mpfr_mul(r6764762, r6764761, r6764758, MPFR_RNDN);
        mpfr_mul(r6764763, r6764760, r6764762, MPFR_RNDN);
        mpfr_add(r6764764, r6764759, r6764763, MPFR_RNDN);
        ;
        mpfr_mul(r6764766, r6764762, r6764758, MPFR_RNDN);
        mpfr_mul(r6764767, r6764766, r6764758, MPFR_RNDN);
        mpfr_mul(r6764768, r6764765, r6764767, MPFR_RNDN);
        mpfr_add(r6764769, r6764764, r6764768, MPFR_RNDN);
        return mpfr_get_d(r6764769, MPFR_RNDN);
}

static mpfr_t r6764770, r6764771, r6764772, r6764773, r6764774, r6764775, r6764776, r6764777, r6764778, r6764779, r6764780, r6764781, r6764782, r6764783, r6764784;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764770, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6764771);
        mpfr_init(r6764772);
        mpfr_init_set_str(r6764773, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6764774);
        mpfr_init(r6764775);
        mpfr_init(r6764776);
        mpfr_init(r6764777);
        mpfr_init_set_str(r6764778, "3", 10, MPFR_RNDN);
        mpfr_init(r6764779);
        mpfr_init_set_str(r6764780, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6764781);
        mpfr_init(r6764782);
        mpfr_init(r6764783);
        mpfr_init(r6764784);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6764771, x, MPFR_RNDN);
        mpfr_mul(r6764772, r6764770, r6764771, MPFR_RNDN);
        ;
        mpfr_mul(r6764774, r6764771, r6764771, MPFR_RNDN);
        mpfr_mul(r6764775, r6764774, r6764771, MPFR_RNDN);
        mpfr_mul(r6764776, r6764773, r6764775, MPFR_RNDN);
        mpfr_add(r6764777, r6764772, r6764776, MPFR_RNDN);
        ;
        mpfr_pow(r6764779, r6764771, r6764778, MPFR_RNDN);
        ;
        mpfr_mul(r6764781, r6764780, r6764771, MPFR_RNDN);
        mpfr_mul(r6764782, r6764779, r6764781, MPFR_RNDN);
        mpfr_mul(r6764783, r6764782, r6764771, MPFR_RNDN);
        mpfr_add(r6764784, r6764777, r6764783, MPFR_RNDN);
        return mpfr_get_d(r6764784, MPFR_RNDN);
}

static mpfr_t r6764785, r6764786, r6764787, r6764788, r6764789, r6764790, r6764791, r6764792, r6764793, r6764794, r6764795, r6764796, r6764797, r6764798, r6764799;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6764785, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6764786);
        mpfr_init(r6764787);
        mpfr_init_set_str(r6764788, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6764789);
        mpfr_init(r6764790);
        mpfr_init(r6764791);
        mpfr_init(r6764792);
        mpfr_init_set_str(r6764793, "3", 10, MPFR_RNDN);
        mpfr_init(r6764794);
        mpfr_init_set_str(r6764795, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6764796);
        mpfr_init(r6764797);
        mpfr_init(r6764798);
        mpfr_init(r6764799);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6764786, x, MPFR_RNDN);
        mpfr_mul(r6764787, r6764785, r6764786, MPFR_RNDN);
        ;
        mpfr_mul(r6764789, r6764786, r6764786, MPFR_RNDN);
        mpfr_mul(r6764790, r6764789, r6764786, MPFR_RNDN);
        mpfr_mul(r6764791, r6764788, r6764790, MPFR_RNDN);
        mpfr_add(r6764792, r6764787, r6764791, MPFR_RNDN);
        ;
        mpfr_pow(r6764794, r6764786, r6764793, MPFR_RNDN);
        ;
        mpfr_mul(r6764796, r6764795, r6764786, MPFR_RNDN);
        mpfr_mul(r6764797, r6764794, r6764796, MPFR_RNDN);
        mpfr_mul(r6764798, r6764797, r6764786, MPFR_RNDN);
        mpfr_add(r6764799, r6764792, r6764798, MPFR_RNDN);
        return mpfr_get_d(r6764799, MPFR_RNDN);
}

