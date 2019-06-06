#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r60479673 = 120.0;
        float r60479674 = x;
        float r60479675 = r60479673 * r60479674;
        float r60479676 = -160.0;
        float r60479677 = r60479674 * r60479674;
        float r60479678 = r60479677 * r60479674;
        float r60479679 = r60479676 * r60479678;
        float r60479680 = r60479675 + r60479679;
        float r60479681 = 32.0;
        float r60479682 = r60479678 * r60479674;
        float r60479683 = r60479682 * r60479674;
        float r60479684 = r60479681 * r60479683;
        float r60479685 = r60479680 + r60479684;
        return r60479685;
}

double f_id(double x) {
        double r60479686 = 120.0;
        double r60479687 = x;
        double r60479688 = r60479686 * r60479687;
        double r60479689 = -160.0;
        double r60479690 = r60479687 * r60479687;
        double r60479691 = r60479690 * r60479687;
        double r60479692 = r60479689 * r60479691;
        double r60479693 = r60479688 + r60479692;
        double r60479694 = 32.0;
        double r60479695 = r60479691 * r60479687;
        double r60479696 = r60479695 * r60479687;
        double r60479697 = r60479694 * r60479696;
        double r60479698 = r60479693 + r60479697;
        return r60479698;
}


double f_of(float x) {
        float r60479699 = 32.0;
        float r60479700 = exp(r60479699);
        float r60479701 = x;
        float r60479702 = 3;
        float r60479703 = pow(r60479701, r60479702);
        float r60479704 = pow(r60479700, r60479703);
        float r60479705 = r60479703 * r60479703;
        float r60479706 = cbrt(r60479705);
        float r60479707 = pow(r60479704, r60479706);
        float r60479708 = 120.0;
        float r60479709 = exp(r60479708);
        float r60479710 = pow(r60479709, r60479701);
        float r60479711 = -160.0;
        float r60479712 = exp(r60479711);
        float r60479713 = pow(r60479712, r60479703);
        float r60479714 = r60479710 * r60479713;
        float r60479715 = r60479707 * r60479714;
        float r60479716 = log(r60479715);
        return r60479716;
}

double f_od(double x) {
        double r60479717 = 32.0;
        double r60479718 = exp(r60479717);
        double r60479719 = x;
        double r60479720 = 3;
        double r60479721 = pow(r60479719, r60479720);
        double r60479722 = pow(r60479718, r60479721);
        double r60479723 = r60479721 * r60479721;
        double r60479724 = cbrt(r60479723);
        double r60479725 = pow(r60479722, r60479724);
        double r60479726 = 120.0;
        double r60479727 = exp(r60479726);
        double r60479728 = pow(r60479727, r60479719);
        double r60479729 = -160.0;
        double r60479730 = exp(r60479729);
        double r60479731 = pow(r60479730, r60479721);
        double r60479732 = r60479728 * r60479731;
        double r60479733 = r60479725 * r60479732;
        double r60479734 = log(r60479733);
        return r60479734;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479735, r60479736, r60479737, r60479738, r60479739, r60479740, r60479741, r60479742, r60479743, r60479744, r60479745, r60479746, r60479747;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479735, "120.0", 10, MPFR_RNDN);
        mpfr_init(r60479736);
        mpfr_init(r60479737);
        mpfr_init_set_str(r60479738, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r60479739);
        mpfr_init(r60479740);
        mpfr_init(r60479741);
        mpfr_init(r60479742);
        mpfr_init_set_str(r60479743, "32.0", 10, MPFR_RNDN);
        mpfr_init(r60479744);
        mpfr_init(r60479745);
        mpfr_init(r60479746);
        mpfr_init(r60479747);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60479736, x, MPFR_RNDN);
        mpfr_mul(r60479737, r60479735, r60479736, MPFR_RNDN);
        ;
        mpfr_mul(r60479739, r60479736, r60479736, MPFR_RNDN);
        mpfr_mul(r60479740, r60479739, r60479736, MPFR_RNDN);
        mpfr_mul(r60479741, r60479738, r60479740, MPFR_RNDN);
        mpfr_add(r60479742, r60479737, r60479741, MPFR_RNDN);
        ;
        mpfr_mul(r60479744, r60479740, r60479736, MPFR_RNDN);
        mpfr_mul(r60479745, r60479744, r60479736, MPFR_RNDN);
        mpfr_mul(r60479746, r60479743, r60479745, MPFR_RNDN);
        mpfr_add(r60479747, r60479742, r60479746, MPFR_RNDN);
        return mpfr_get_d(r60479747, MPFR_RNDN);
}

static mpfr_t r60479748, r60479749, r60479750, r60479751, r60479752, r60479753, r60479754, r60479755, r60479756, r60479757, r60479758, r60479759, r60479760, r60479761, r60479762, r60479763, r60479764, r60479765;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479748, "32.0", 10, MPFR_RNDN);
        mpfr_init(r60479749);
        mpfr_init(r60479750);
        mpfr_init_set_str(r60479751, "3", 10, MPFR_RNDN);
        mpfr_init(r60479752);
        mpfr_init(r60479753);
        mpfr_init(r60479754);
        mpfr_init(r60479755);
        mpfr_init(r60479756);
        mpfr_init_set_str(r60479757, "120.0", 10, MPFR_RNDN);
        mpfr_init(r60479758);
        mpfr_init(r60479759);
        mpfr_init_set_str(r60479760, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r60479761);
        mpfr_init(r60479762);
        mpfr_init(r60479763);
        mpfr_init(r60479764);
        mpfr_init(r60479765);
}

double f_fm(double x) {
        ;
        mpfr_exp(r60479749, r60479748, MPFR_RNDN);
        mpfr_set_d(r60479750, x, MPFR_RNDN);
        ;
        mpfr_pow(r60479752, r60479750, r60479751, MPFR_RNDN);
        mpfr_pow(r60479753, r60479749, r60479752, MPFR_RNDN);
        mpfr_mul(r60479754, r60479752, r60479752, MPFR_RNDN);
        mpfr_cbrt(r60479755, r60479754, MPFR_RNDN);
        mpfr_pow(r60479756, r60479753, r60479755, MPFR_RNDN);
        ;
        mpfr_exp(r60479758, r60479757, MPFR_RNDN);
        mpfr_pow(r60479759, r60479758, r60479750, MPFR_RNDN);
        ;
        mpfr_exp(r60479761, r60479760, MPFR_RNDN);
        mpfr_pow(r60479762, r60479761, r60479752, MPFR_RNDN);
        mpfr_mul(r60479763, r60479759, r60479762, MPFR_RNDN);
        mpfr_mul(r60479764, r60479756, r60479763, MPFR_RNDN);
        mpfr_log(r60479765, r60479764, MPFR_RNDN);
        return mpfr_get_d(r60479765, MPFR_RNDN);
}

static mpfr_t r60479766, r60479767, r60479768, r60479769, r60479770, r60479771, r60479772, r60479773, r60479774, r60479775, r60479776, r60479777, r60479778, r60479779, r60479780, r60479781, r60479782, r60479783;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479766, "32.0", 10, MPFR_RNDN);
        mpfr_init(r60479767);
        mpfr_init(r60479768);
        mpfr_init_set_str(r60479769, "3", 10, MPFR_RNDN);
        mpfr_init(r60479770);
        mpfr_init(r60479771);
        mpfr_init(r60479772);
        mpfr_init(r60479773);
        mpfr_init(r60479774);
        mpfr_init_set_str(r60479775, "120.0", 10, MPFR_RNDN);
        mpfr_init(r60479776);
        mpfr_init(r60479777);
        mpfr_init_set_str(r60479778, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r60479779);
        mpfr_init(r60479780);
        mpfr_init(r60479781);
        mpfr_init(r60479782);
        mpfr_init(r60479783);
}

double f_dm(double x) {
        ;
        mpfr_exp(r60479767, r60479766, MPFR_RNDN);
        mpfr_set_d(r60479768, x, MPFR_RNDN);
        ;
        mpfr_pow(r60479770, r60479768, r60479769, MPFR_RNDN);
        mpfr_pow(r60479771, r60479767, r60479770, MPFR_RNDN);
        mpfr_mul(r60479772, r60479770, r60479770, MPFR_RNDN);
        mpfr_cbrt(r60479773, r60479772, MPFR_RNDN);
        mpfr_pow(r60479774, r60479771, r60479773, MPFR_RNDN);
        ;
        mpfr_exp(r60479776, r60479775, MPFR_RNDN);
        mpfr_pow(r60479777, r60479776, r60479768, MPFR_RNDN);
        ;
        mpfr_exp(r60479779, r60479778, MPFR_RNDN);
        mpfr_pow(r60479780, r60479779, r60479770, MPFR_RNDN);
        mpfr_mul(r60479781, r60479777, r60479780, MPFR_RNDN);
        mpfr_mul(r60479782, r60479774, r60479781, MPFR_RNDN);
        mpfr_log(r60479783, r60479782, MPFR_RNDN);
        return mpfr_get_d(r60479783, MPFR_RNDN);
}

