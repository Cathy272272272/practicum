#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7079691 = 120.0;
        float r7079692 = x;
        float r7079693 = r7079691 * r7079692;
        float r7079694 = -160.0;
        float r7079695 = r7079692 * r7079692;
        float r7079696 = r7079695 * r7079692;
        float r7079697 = r7079694 * r7079696;
        float r7079698 = r7079693 + r7079697;
        float r7079699 = 32.0;
        float r7079700 = r7079696 * r7079692;
        float r7079701 = r7079700 * r7079692;
        float r7079702 = r7079699 * r7079701;
        float r7079703 = r7079698 + r7079702;
        return r7079703;
}

double f_id(double x) {
        double r7079704 = 120.0;
        double r7079705 = x;
        double r7079706 = r7079704 * r7079705;
        double r7079707 = -160.0;
        double r7079708 = r7079705 * r7079705;
        double r7079709 = r7079708 * r7079705;
        double r7079710 = r7079707 * r7079709;
        double r7079711 = r7079706 + r7079710;
        double r7079712 = 32.0;
        double r7079713 = r7079709 * r7079705;
        double r7079714 = r7079713 * r7079705;
        double r7079715 = r7079712 * r7079714;
        double r7079716 = r7079711 + r7079715;
        return r7079716;
}


double f_of(float x) {
        float r7079717 = 120.0;
        float r7079718 = x;
        float r7079719 = r7079717 * r7079718;
        float r7079720 = -160.0;
        float r7079721 = r7079718 * r7079718;
        float r7079722 = r7079721 * r7079718;
        float r7079723 = r7079720 * r7079722;
        float r7079724 = r7079719 + r7079723;
        float r7079725 = 32.0;
        float r7079726 = r7079722 * r7079718;
        float r7079727 = exp(r7079726);
        float r7079728 = log(r7079727);
        float r7079729 = r7079728 * r7079718;
        float r7079730 = r7079725 * r7079729;
        float r7079731 = r7079724 + r7079730;
        return r7079731;
}

double f_od(double x) {
        double r7079732 = 120.0;
        double r7079733 = x;
        double r7079734 = r7079732 * r7079733;
        double r7079735 = -160.0;
        double r7079736 = r7079733 * r7079733;
        double r7079737 = r7079736 * r7079733;
        double r7079738 = r7079735 * r7079737;
        double r7079739 = r7079734 + r7079738;
        double r7079740 = 32.0;
        double r7079741 = r7079737 * r7079733;
        double r7079742 = exp(r7079741);
        double r7079743 = log(r7079742);
        double r7079744 = r7079743 * r7079733;
        double r7079745 = r7079740 * r7079744;
        double r7079746 = r7079739 + r7079745;
        return r7079746;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7079747, r7079748, r7079749, r7079750, r7079751, r7079752, r7079753, r7079754, r7079755, r7079756, r7079757, r7079758, r7079759;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079747, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7079748);
        mpfr_init(r7079749);
        mpfr_init_set_str(r7079750, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7079751);
        mpfr_init(r7079752);
        mpfr_init(r7079753);
        mpfr_init(r7079754);
        mpfr_init_set_str(r7079755, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7079756);
        mpfr_init(r7079757);
        mpfr_init(r7079758);
        mpfr_init(r7079759);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7079748, x, MPFR_RNDN);
        mpfr_mul(r7079749, r7079747, r7079748, MPFR_RNDN);
        ;
        mpfr_mul(r7079751, r7079748, r7079748, MPFR_RNDN);
        mpfr_mul(r7079752, r7079751, r7079748, MPFR_RNDN);
        mpfr_mul(r7079753, r7079750, r7079752, MPFR_RNDN);
        mpfr_add(r7079754, r7079749, r7079753, MPFR_RNDN);
        ;
        mpfr_mul(r7079756, r7079752, r7079748, MPFR_RNDN);
        mpfr_mul(r7079757, r7079756, r7079748, MPFR_RNDN);
        mpfr_mul(r7079758, r7079755, r7079757, MPFR_RNDN);
        mpfr_add(r7079759, r7079754, r7079758, MPFR_RNDN);
        return mpfr_get_d(r7079759, MPFR_RNDN);
}

static mpfr_t r7079760, r7079761, r7079762, r7079763, r7079764, r7079765, r7079766, r7079767, r7079768, r7079769, r7079770, r7079771, r7079772, r7079773, r7079774;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079760, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7079761);
        mpfr_init(r7079762);
        mpfr_init_set_str(r7079763, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7079764);
        mpfr_init(r7079765);
        mpfr_init(r7079766);
        mpfr_init(r7079767);
        mpfr_init_set_str(r7079768, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7079769);
        mpfr_init(r7079770);
        mpfr_init(r7079771);
        mpfr_init(r7079772);
        mpfr_init(r7079773);
        mpfr_init(r7079774);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7079761, x, MPFR_RNDN);
        mpfr_mul(r7079762, r7079760, r7079761, MPFR_RNDN);
        ;
        mpfr_mul(r7079764, r7079761, r7079761, MPFR_RNDN);
        mpfr_mul(r7079765, r7079764, r7079761, MPFR_RNDN);
        mpfr_mul(r7079766, r7079763, r7079765, MPFR_RNDN);
        mpfr_add(r7079767, r7079762, r7079766, MPFR_RNDN);
        ;
        mpfr_mul(r7079769, r7079765, r7079761, MPFR_RNDN);
        mpfr_exp(r7079770, r7079769, MPFR_RNDN);
        mpfr_log(r7079771, r7079770, MPFR_RNDN);
        mpfr_mul(r7079772, r7079771, r7079761, MPFR_RNDN);
        mpfr_mul(r7079773, r7079768, r7079772, MPFR_RNDN);
        mpfr_add(r7079774, r7079767, r7079773, MPFR_RNDN);
        return mpfr_get_d(r7079774, MPFR_RNDN);
}

static mpfr_t r7079775, r7079776, r7079777, r7079778, r7079779, r7079780, r7079781, r7079782, r7079783, r7079784, r7079785, r7079786, r7079787, r7079788, r7079789;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7079775, "120.0", 10, MPFR_RNDN);
        mpfr_init(r7079776);
        mpfr_init(r7079777);
        mpfr_init_set_str(r7079778, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r7079779);
        mpfr_init(r7079780);
        mpfr_init(r7079781);
        mpfr_init(r7079782);
        mpfr_init_set_str(r7079783, "32.0", 10, MPFR_RNDN);
        mpfr_init(r7079784);
        mpfr_init(r7079785);
        mpfr_init(r7079786);
        mpfr_init(r7079787);
        mpfr_init(r7079788);
        mpfr_init(r7079789);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7079776, x, MPFR_RNDN);
        mpfr_mul(r7079777, r7079775, r7079776, MPFR_RNDN);
        ;
        mpfr_mul(r7079779, r7079776, r7079776, MPFR_RNDN);
        mpfr_mul(r7079780, r7079779, r7079776, MPFR_RNDN);
        mpfr_mul(r7079781, r7079778, r7079780, MPFR_RNDN);
        mpfr_add(r7079782, r7079777, r7079781, MPFR_RNDN);
        ;
        mpfr_mul(r7079784, r7079780, r7079776, MPFR_RNDN);
        mpfr_exp(r7079785, r7079784, MPFR_RNDN);
        mpfr_log(r7079786, r7079785, MPFR_RNDN);
        mpfr_mul(r7079787, r7079786, r7079776, MPFR_RNDN);
        mpfr_mul(r7079788, r7079783, r7079787, MPFR_RNDN);
        mpfr_add(r7079789, r7079782, r7079788, MPFR_RNDN);
        return mpfr_get_d(r7079789, MPFR_RNDN);
}

