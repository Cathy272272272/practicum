#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r7030676 = -12.0;
        float r7030677 = x;
        float r7030678 = r7030676 * r7030677;
        float r7030679 = 8.0;
        float r7030680 = r7030677 * r7030677;
        float r7030681 = r7030680 * r7030677;
        float r7030682 = r7030679 * r7030681;
        float r7030683 = r7030678 + r7030682;
        return r7030683;
}

double f_id(double x) {
        double r7030684 = -12.0;
        double r7030685 = x;
        double r7030686 = r7030684 * r7030685;
        double r7030687 = 8.0;
        double r7030688 = r7030685 * r7030685;
        double r7030689 = r7030688 * r7030685;
        double r7030690 = r7030687 * r7030689;
        double r7030691 = r7030686 + r7030690;
        return r7030691;
}


double f_of(float x) {
        float r7030692 = -12.0;
        float r7030693 = x;
        float r7030694 = r7030692 * r7030693;
        float r7030695 = 8.0;
        float r7030696 = 3;
        float r7030697 = pow(r7030693, r7030696);
        float r7030698 = r7030695 * r7030697;
        float r7030699 = r7030694 + r7030698;
        return r7030699;
}

double f_od(double x) {
        double r7030700 = -12.0;
        double r7030701 = x;
        double r7030702 = r7030700 * r7030701;
        double r7030703 = 8.0;
        double r7030704 = 3;
        double r7030705 = pow(r7030701, r7030704);
        double r7030706 = r7030703 * r7030705;
        double r7030707 = r7030702 + r7030706;
        return r7030707;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030708, r7030709, r7030710, r7030711, r7030712, r7030713, r7030714, r7030715;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030708, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7030709);
        mpfr_init(r7030710);
        mpfr_init_set_str(r7030711, "8.0", 10, MPFR_RNDN);
        mpfr_init(r7030712);
        mpfr_init(r7030713);
        mpfr_init(r7030714);
        mpfr_init(r7030715);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7030709, x, MPFR_RNDN);
        mpfr_mul(r7030710, r7030708, r7030709, MPFR_RNDN);
        ;
        mpfr_mul(r7030712, r7030709, r7030709, MPFR_RNDN);
        mpfr_mul(r7030713, r7030712, r7030709, MPFR_RNDN);
        mpfr_mul(r7030714, r7030711, r7030713, MPFR_RNDN);
        mpfr_add(r7030715, r7030710, r7030714, MPFR_RNDN);
        return mpfr_get_d(r7030715, MPFR_RNDN);
}

static mpfr_t r7030716, r7030717, r7030718, r7030719, r7030720, r7030721, r7030722, r7030723;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030716, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7030717);
        mpfr_init(r7030718);
        mpfr_init_set_str(r7030719, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030720, "3", 10, MPFR_RNDN);
        mpfr_init(r7030721);
        mpfr_init(r7030722);
        mpfr_init(r7030723);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7030717, x, MPFR_RNDN);
        mpfr_mul(r7030718, r7030716, r7030717, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030721, r7030717, r7030720, MPFR_RNDN);
        mpfr_mul(r7030722, r7030719, r7030721, MPFR_RNDN);
        mpfr_add(r7030723, r7030718, r7030722, MPFR_RNDN);
        return mpfr_get_d(r7030723, MPFR_RNDN);
}

static mpfr_t r7030724, r7030725, r7030726, r7030727, r7030728, r7030729, r7030730, r7030731;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7030724, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r7030725);
        mpfr_init(r7030726);
        mpfr_init_set_str(r7030727, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030728, "3", 10, MPFR_RNDN);
        mpfr_init(r7030729);
        mpfr_init(r7030730);
        mpfr_init(r7030731);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7030725, x, MPFR_RNDN);
        mpfr_mul(r7030726, r7030724, r7030725, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7030729, r7030725, r7030728, MPFR_RNDN);
        mpfr_mul(r7030730, r7030727, r7030729, MPFR_RNDN);
        mpfr_add(r7030731, r7030726, r7030730, MPFR_RNDN);
        return mpfr_get_d(r7030731, MPFR_RNDN);
}

