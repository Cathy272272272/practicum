#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r6326699 = 12.0;
        float r6326700 = -48.0;
        float r6326701 = x;
        float r6326702 = r6326701 * r6326701;
        float r6326703 = r6326700 * r6326702;
        float r6326704 = r6326699 + r6326703;
        float r6326705 = 16.0;
        float r6326706 = r6326702 * r6326701;
        float r6326707 = r6326706 * r6326701;
        float r6326708 = r6326705 * r6326707;
        float r6326709 = r6326704 + r6326708;
        return r6326709;
}

double f_id(double x) {
        double r6326710 = 12.0;
        double r6326711 = -48.0;
        double r6326712 = x;
        double r6326713 = r6326712 * r6326712;
        double r6326714 = r6326711 * r6326713;
        double r6326715 = r6326710 + r6326714;
        double r6326716 = 16.0;
        double r6326717 = r6326713 * r6326712;
        double r6326718 = r6326717 * r6326712;
        double r6326719 = r6326716 * r6326718;
        double r6326720 = r6326715 + r6326719;
        return r6326720;
}


double f_of(float x) {
        float r6326721 = 12.0;
        float r6326722 = x;
        float r6326723 = 16.0;
        float r6326724 = r6326722 * r6326723;
        float r6326725 = 3;
        float r6326726 = pow(r6326722, r6326725);
        float r6326727 = r6326724 * r6326726;
        float r6326728 = -48.0;
        float r6326729 = r6326722 * r6326728;
        float r6326730 = r6326729 * r6326722;
        float r6326731 = r6326727 + r6326730;
        float r6326732 = r6326721 + r6326731;
        return r6326732;
}

double f_od(double x) {
        double r6326733 = 12.0;
        double r6326734 = x;
        double r6326735 = 16.0;
        double r6326736 = r6326734 * r6326735;
        double r6326737 = 3;
        double r6326738 = pow(r6326734, r6326737);
        double r6326739 = r6326736 * r6326738;
        double r6326740 = -48.0;
        double r6326741 = r6326734 * r6326740;
        double r6326742 = r6326741 * r6326734;
        double r6326743 = r6326739 + r6326742;
        double r6326744 = r6326733 + r6326743;
        return r6326744;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326745, r6326746, r6326747, r6326748, r6326749, r6326750, r6326751, r6326752, r6326753, r6326754, r6326755;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326745, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6326746, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r6326747);
        mpfr_init(r6326748);
        mpfr_init(r6326749);
        mpfr_init(r6326750);
        mpfr_init_set_str(r6326751, "16.0", 10, MPFR_RNDN);
        mpfr_init(r6326752);
        mpfr_init(r6326753);
        mpfr_init(r6326754);
        mpfr_init(r6326755);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6326747, x, MPFR_RNDN);
        mpfr_mul(r6326748, r6326747, r6326747, MPFR_RNDN);
        mpfr_mul(r6326749, r6326746, r6326748, MPFR_RNDN);
        mpfr_add(r6326750, r6326745, r6326749, MPFR_RNDN);
        ;
        mpfr_mul(r6326752, r6326748, r6326747, MPFR_RNDN);
        mpfr_mul(r6326753, r6326752, r6326747, MPFR_RNDN);
        mpfr_mul(r6326754, r6326751, r6326753, MPFR_RNDN);
        mpfr_add(r6326755, r6326750, r6326754, MPFR_RNDN);
        return mpfr_get_d(r6326755, MPFR_RNDN);
}

static mpfr_t r6326756, r6326757, r6326758, r6326759, r6326760, r6326761, r6326762, r6326763, r6326764, r6326765, r6326766, r6326767;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326756, "12.0", 10, MPFR_RNDN);
        mpfr_init(r6326757);
        mpfr_init_set_str(r6326758, "16.0", 10, MPFR_RNDN);
        mpfr_init(r6326759);
        mpfr_init_set_str(r6326760, "3", 10, MPFR_RNDN);
        mpfr_init(r6326761);
        mpfr_init(r6326762);
        mpfr_init_set_str(r6326763, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r6326764);
        mpfr_init(r6326765);
        mpfr_init(r6326766);
        mpfr_init(r6326767);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6326757, x, MPFR_RNDN);
        ;
        mpfr_mul(r6326759, r6326757, r6326758, MPFR_RNDN);
        ;
        mpfr_pow(r6326761, r6326757, r6326760, MPFR_RNDN);
        mpfr_mul(r6326762, r6326759, r6326761, MPFR_RNDN);
        ;
        mpfr_mul(r6326764, r6326757, r6326763, MPFR_RNDN);
        mpfr_mul(r6326765, r6326764, r6326757, MPFR_RNDN);
        mpfr_add(r6326766, r6326762, r6326765, MPFR_RNDN);
        mpfr_add(r6326767, r6326756, r6326766, MPFR_RNDN);
        return mpfr_get_d(r6326767, MPFR_RNDN);
}

static mpfr_t r6326768, r6326769, r6326770, r6326771, r6326772, r6326773, r6326774, r6326775, r6326776, r6326777, r6326778, r6326779;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326768, "12.0", 10, MPFR_RNDN);
        mpfr_init(r6326769);
        mpfr_init_set_str(r6326770, "16.0", 10, MPFR_RNDN);
        mpfr_init(r6326771);
        mpfr_init_set_str(r6326772, "3", 10, MPFR_RNDN);
        mpfr_init(r6326773);
        mpfr_init(r6326774);
        mpfr_init_set_str(r6326775, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r6326776);
        mpfr_init(r6326777);
        mpfr_init(r6326778);
        mpfr_init(r6326779);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6326769, x, MPFR_RNDN);
        ;
        mpfr_mul(r6326771, r6326769, r6326770, MPFR_RNDN);
        ;
        mpfr_pow(r6326773, r6326769, r6326772, MPFR_RNDN);
        mpfr_mul(r6326774, r6326771, r6326773, MPFR_RNDN);
        ;
        mpfr_mul(r6326776, r6326769, r6326775, MPFR_RNDN);
        mpfr_mul(r6326777, r6326776, r6326769, MPFR_RNDN);
        mpfr_add(r6326778, r6326774, r6326777, MPFR_RNDN);
        mpfr_add(r6326779, r6326768, r6326778, MPFR_RNDN);
        return mpfr_get_d(r6326779, MPFR_RNDN);
}

