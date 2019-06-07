#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6179716 = 0.375;
        float r6179717 = -3.75;
        float r6179718 = x;
        float r6179719 = r6179718 * r6179718;
        float r6179720 = r6179717 * r6179719;
        float r6179721 = r6179716 + r6179720;
        float r6179722 = 4.375;
        float r6179723 = r6179719 * r6179718;
        float r6179724 = r6179723 * r6179718;
        float r6179725 = r6179722 * r6179724;
        float r6179726 = r6179721 + r6179725;
        return r6179726;
}

double f_id(double x) {
        double r6179727 = 0.375;
        double r6179728 = -3.75;
        double r6179729 = x;
        double r6179730 = r6179729 * r6179729;
        double r6179731 = r6179728 * r6179730;
        double r6179732 = r6179727 + r6179731;
        double r6179733 = 4.375;
        double r6179734 = r6179730 * r6179729;
        double r6179735 = r6179734 * r6179729;
        double r6179736 = r6179733 * r6179735;
        double r6179737 = r6179732 + r6179736;
        return r6179737;
}


double f_of(float x) {
        float r6179738 = 0.375;
        float r6179739 = -3.75;
        float r6179740 = x;
        float r6179741 = r6179740 * r6179740;
        float r6179742 = r6179739 * r6179741;
        float r6179743 = r6179738 + r6179742;
        float r6179744 = 4.375;
        float r6179745 = 3;
        float r6179746 = pow(r6179740, r6179745);
        float r6179747 = r6179746 * r6179740;
        float r6179748 = r6179744 * r6179747;
        float r6179749 = r6179743 + r6179748;
        return r6179749;
}

double f_od(double x) {
        double r6179750 = 0.375;
        double r6179751 = -3.75;
        double r6179752 = x;
        double r6179753 = r6179752 * r6179752;
        double r6179754 = r6179751 * r6179753;
        double r6179755 = r6179750 + r6179754;
        double r6179756 = 4.375;
        double r6179757 = 3;
        double r6179758 = pow(r6179752, r6179757);
        double r6179759 = r6179758 * r6179752;
        double r6179760 = r6179756 * r6179759;
        double r6179761 = r6179755 + r6179760;
        return r6179761;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179762, r6179763, r6179764, r6179765, r6179766, r6179767, r6179768, r6179769, r6179770, r6179771, r6179772;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179762, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179763, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6179764);
        mpfr_init(r6179765);
        mpfr_init(r6179766);
        mpfr_init(r6179767);
        mpfr_init_set_str(r6179768, "4.375", 10, MPFR_RNDN);
        mpfr_init(r6179769);
        mpfr_init(r6179770);
        mpfr_init(r6179771);
        mpfr_init(r6179772);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6179764, x, MPFR_RNDN);
        mpfr_mul(r6179765, r6179764, r6179764, MPFR_RNDN);
        mpfr_mul(r6179766, r6179763, r6179765, MPFR_RNDN);
        mpfr_add(r6179767, r6179762, r6179766, MPFR_RNDN);
        ;
        mpfr_mul(r6179769, r6179765, r6179764, MPFR_RNDN);
        mpfr_mul(r6179770, r6179769, r6179764, MPFR_RNDN);
        mpfr_mul(r6179771, r6179768, r6179770, MPFR_RNDN);
        mpfr_add(r6179772, r6179767, r6179771, MPFR_RNDN);
        return mpfr_get_d(r6179772, MPFR_RNDN);
}

static mpfr_t r6179773, r6179774, r6179775, r6179776, r6179777, r6179778, r6179779, r6179780, r6179781, r6179782, r6179783, r6179784;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179773, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179774, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6179775);
        mpfr_init(r6179776);
        mpfr_init(r6179777);
        mpfr_init(r6179778);
        mpfr_init_set_str(r6179779, "4.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179780, "3", 10, MPFR_RNDN);
        mpfr_init(r6179781);
        mpfr_init(r6179782);
        mpfr_init(r6179783);
        mpfr_init(r6179784);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6179775, x, MPFR_RNDN);
        mpfr_mul(r6179776, r6179775, r6179775, MPFR_RNDN);
        mpfr_mul(r6179777, r6179774, r6179776, MPFR_RNDN);
        mpfr_add(r6179778, r6179773, r6179777, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6179781, r6179775, r6179780, MPFR_RNDN);
        mpfr_mul(r6179782, r6179781, r6179775, MPFR_RNDN);
        mpfr_mul(r6179783, r6179779, r6179782, MPFR_RNDN);
        mpfr_add(r6179784, r6179778, r6179783, MPFR_RNDN);
        return mpfr_get_d(r6179784, MPFR_RNDN);
}

static mpfr_t r6179785, r6179786, r6179787, r6179788, r6179789, r6179790, r6179791, r6179792, r6179793, r6179794, r6179795, r6179796;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179785, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179786, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r6179787);
        mpfr_init(r6179788);
        mpfr_init(r6179789);
        mpfr_init(r6179790);
        mpfr_init_set_str(r6179791, "4.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179792, "3", 10, MPFR_RNDN);
        mpfr_init(r6179793);
        mpfr_init(r6179794);
        mpfr_init(r6179795);
        mpfr_init(r6179796);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6179787, x, MPFR_RNDN);
        mpfr_mul(r6179788, r6179787, r6179787, MPFR_RNDN);
        mpfr_mul(r6179789, r6179786, r6179788, MPFR_RNDN);
        mpfr_add(r6179790, r6179785, r6179789, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6179793, r6179787, r6179792, MPFR_RNDN);
        mpfr_mul(r6179794, r6179793, r6179787, MPFR_RNDN);
        mpfr_mul(r6179795, r6179791, r6179794, MPFR_RNDN);
        mpfr_add(r6179796, r6179790, r6179795, MPFR_RNDN);
        return mpfr_get_d(r6179796, MPFR_RNDN);
}

