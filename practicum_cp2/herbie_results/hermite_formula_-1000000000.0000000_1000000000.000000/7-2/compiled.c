#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "2";

double f_if(float x) {
        float r7030732 = -2.0;
        float r7030733 = 4.0;
        float r7030734 = x;
        float r7030735 = r7030734 * r7030734;
        float r7030736 = r7030733 * r7030735;
        float r7030737 = r7030732 + r7030736;
        return r7030737;
}

double f_id(double x) {
        double r7030738 = -2.0;
        double r7030739 = 4.0;
        double r7030740 = x;
        double r7030741 = r7030740 * r7030740;
        double r7030742 = r7030739 * r7030741;
        double r7030743 = r7030738 + r7030742;
        return r7030743;
}


double f_of(float x) {
        float r7030744 = -2.0;
        float r7030745 = 4.0;
        float r7030746 = x;
        float r7030747 = r7030746 * r7030746;
        float r7030748 = r7030745 * r7030747;
        float r7030749 = r7030744 + r7030748;
        return r7030749;
}

double f_od(double x) {
        double r7030750 = -2.0;
        double r7030751 = 4.0;
        double r7030752 = x;
        double r7030753 = r7030752 * r7030752;
        double r7030754 = r7030751 * r7030753;
        double r7030755 = r7030750 + r7030754;
        return r7030755;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030756, r7030757, r7030758, r7030759, r7030760, r7030761;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030756, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030757, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7030758);
        mpfr_init(r7030759);
        mpfr_init(r7030760);
        mpfr_init(r7030761);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7030758, x, MPFR_RNDN);
        mpfr_mul(r7030759, r7030758, r7030758, MPFR_RNDN);
        mpfr_mul(r7030760, r7030757, r7030759, MPFR_RNDN);
        mpfr_add(r7030761, r7030756, r7030760, MPFR_RNDN);
        return mpfr_get_d(r7030761, MPFR_RNDN);
}

static mpfr_t r7030762, r7030763, r7030764, r7030765, r7030766, r7030767;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030762, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030763, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7030764);
        mpfr_init(r7030765);
        mpfr_init(r7030766);
        mpfr_init(r7030767);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7030764, x, MPFR_RNDN);
        mpfr_mul(r7030765, r7030764, r7030764, MPFR_RNDN);
        mpfr_mul(r7030766, r7030763, r7030765, MPFR_RNDN);
        mpfr_add(r7030767, r7030762, r7030766, MPFR_RNDN);
        return mpfr_get_d(r7030767, MPFR_RNDN);
}

static mpfr_t r7030768, r7030769, r7030770, r7030771, r7030772, r7030773;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030768, "-2.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030769, "4.0", 10, MPFR_RNDN);
        mpfr_init(r7030770);
        mpfr_init(r7030771);
        mpfr_init(r7030772);
        mpfr_init(r7030773);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7030770, x, MPFR_RNDN);
        mpfr_mul(r7030771, r7030770, r7030770, MPFR_RNDN);
        mpfr_mul(r7030772, r7030769, r7030771, MPFR_RNDN);
        mpfr_add(r7030773, r7030768, r7030772, MPFR_RNDN);
        return mpfr_get_d(r7030773, MPFR_RNDN);
}

