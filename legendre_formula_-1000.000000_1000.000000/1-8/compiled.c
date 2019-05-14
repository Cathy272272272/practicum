#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7055638 = 0.273438;
        float r7055639 = -9.84375;
        float r7055640 = x;
        float r7055641 = r7055640 * r7055640;
        float r7055642 = r7055639 * r7055641;
        float r7055643 = r7055638 + r7055642;
        float r7055644 = 54.140625;
        float r7055645 = r7055641 * r7055640;
        float r7055646 = r7055645 * r7055640;
        float r7055647 = r7055644 * r7055646;
        float r7055648 = r7055643 + r7055647;
        float r7055649 = -93.84375;
        float r7055650 = r7055646 * r7055640;
        float r7055651 = r7055650 * r7055640;
        float r7055652 = r7055649 * r7055651;
        float r7055653 = r7055648 + r7055652;
        float r7055654 = 50.273438;
        float r7055655 = r7055651 * r7055640;
        float r7055656 = r7055655 * r7055640;
        float r7055657 = r7055654 * r7055656;
        float r7055658 = r7055653 + r7055657;
        return r7055658;
}

double f_id(double x) {
        double r7055659 = 0.273438;
        double r7055660 = -9.84375;
        double r7055661 = x;
        double r7055662 = r7055661 * r7055661;
        double r7055663 = r7055660 * r7055662;
        double r7055664 = r7055659 + r7055663;
        double r7055665 = 54.140625;
        double r7055666 = r7055662 * r7055661;
        double r7055667 = r7055666 * r7055661;
        double r7055668 = r7055665 * r7055667;
        double r7055669 = r7055664 + r7055668;
        double r7055670 = -93.84375;
        double r7055671 = r7055667 * r7055661;
        double r7055672 = r7055671 * r7055661;
        double r7055673 = r7055670 * r7055672;
        double r7055674 = r7055669 + r7055673;
        double r7055675 = 50.273438;
        double r7055676 = r7055672 * r7055661;
        double r7055677 = r7055676 * r7055661;
        double r7055678 = r7055675 * r7055677;
        double r7055679 = r7055674 + r7055678;
        return r7055679;
}


double f_of(float x) {
        float r7055680 = 50.273438;
        float r7055681 = x;
        float r7055682 = 8;
        float r7055683 = pow(r7055681, r7055682);
        float r7055684 = r7055680 * r7055683;
        float r7055685 = 0.273438;
        float r7055686 = 93.84375;
        float r7055687 = 6;
        float r7055688 = pow(r7055681, r7055687);
        float r7055689 = r7055686 * r7055688;
        float r7055690 = r7055685 - r7055689;
        float r7055691 = r7055684 + r7055690;
        float r7055692 = r7055681 * r7055681;
        float r7055693 = -r7055692;
        float r7055694 = 54.140625;
        float r7055695 = r7055692 * r7055694;
        float r7055696 = -9.84375;
        float r7055697 = r7055695 + r7055696;
        float r7055698 = r7055693 * r7055697;
        float r7055699 = r7055691 - r7055698;
        return r7055699;
}

double f_od(double x) {
        double r7055700 = 50.273438;
        double r7055701 = x;
        double r7055702 = 8;
        double r7055703 = pow(r7055701, r7055702);
        double r7055704 = r7055700 * r7055703;
        double r7055705 = 0.273438;
        double r7055706 = 93.84375;
        double r7055707 = 6;
        double r7055708 = pow(r7055701, r7055707);
        double r7055709 = r7055706 * r7055708;
        double r7055710 = r7055705 - r7055709;
        double r7055711 = r7055704 + r7055710;
        double r7055712 = r7055701 * r7055701;
        double r7055713 = -r7055712;
        double r7055714 = 54.140625;
        double r7055715 = r7055712 * r7055714;
        double r7055716 = -9.84375;
        double r7055717 = r7055715 + r7055716;
        double r7055718 = r7055713 * r7055717;
        double r7055719 = r7055711 - r7055718;
        return r7055719;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7055720, r7055721, r7055722, r7055723, r7055724, r7055725, r7055726, r7055727, r7055728, r7055729, r7055730, r7055731, r7055732, r7055733, r7055734, r7055735, r7055736, r7055737, r7055738, r7055739, r7055740;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7055720, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7055721, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7055722);
        mpfr_init(r7055723);
        mpfr_init(r7055724);
        mpfr_init(r7055725);
        mpfr_init_set_str(r7055726, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7055727);
        mpfr_init(r7055728);
        mpfr_init(r7055729);
        mpfr_init(r7055730);
        mpfr_init_set_str(r7055731, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r7055732);
        mpfr_init(r7055733);
        mpfr_init(r7055734);
        mpfr_init(r7055735);
        mpfr_init_set_str(r7055736, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7055737);
        mpfr_init(r7055738);
        mpfr_init(r7055739);
        mpfr_init(r7055740);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7055722, x, MPFR_RNDN);
        mpfr_mul(r7055723, r7055722, r7055722, MPFR_RNDN);
        mpfr_mul(r7055724, r7055721, r7055723, MPFR_RNDN);
        mpfr_add(r7055725, r7055720, r7055724, MPFR_RNDN);
        ;
        mpfr_mul(r7055727, r7055723, r7055722, MPFR_RNDN);
        mpfr_mul(r7055728, r7055727, r7055722, MPFR_RNDN);
        mpfr_mul(r7055729, r7055726, r7055728, MPFR_RNDN);
        mpfr_add(r7055730, r7055725, r7055729, MPFR_RNDN);
        ;
        mpfr_mul(r7055732, r7055728, r7055722, MPFR_RNDN);
        mpfr_mul(r7055733, r7055732, r7055722, MPFR_RNDN);
        mpfr_mul(r7055734, r7055731, r7055733, MPFR_RNDN);
        mpfr_add(r7055735, r7055730, r7055734, MPFR_RNDN);
        ;
        mpfr_mul(r7055737, r7055733, r7055722, MPFR_RNDN);
        mpfr_mul(r7055738, r7055737, r7055722, MPFR_RNDN);
        mpfr_mul(r7055739, r7055736, r7055738, MPFR_RNDN);
        mpfr_add(r7055740, r7055735, r7055739, MPFR_RNDN);
        return mpfr_get_d(r7055740, MPFR_RNDN);
}

static mpfr_t r7055741, r7055742, r7055743, r7055744, r7055745, r7055746, r7055747, r7055748, r7055749, r7055750, r7055751, r7055752, r7055753, r7055754, r7055755, r7055756, r7055757, r7055758, r7055759, r7055760;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7055741, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7055742);
        mpfr_init_set_str(r7055743, "8", 10, MPFR_RNDN);
        mpfr_init(r7055744);
        mpfr_init(r7055745);
        mpfr_init_set_str(r7055746, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7055747, "93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7055748, "6", 10, MPFR_RNDN);
        mpfr_init(r7055749);
        mpfr_init(r7055750);
        mpfr_init(r7055751);
        mpfr_init(r7055752);
        mpfr_init(r7055753);
        mpfr_init(r7055754);
        mpfr_init_set_str(r7055755, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7055756);
        mpfr_init_set_str(r7055757, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7055758);
        mpfr_init(r7055759);
        mpfr_init(r7055760);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7055742, x, MPFR_RNDN);
        ;
        mpfr_pow(r7055744, r7055742, r7055743, MPFR_RNDN);
        mpfr_mul(r7055745, r7055741, r7055744, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r7055749, r7055742, r7055748, MPFR_RNDN);
        mpfr_mul(r7055750, r7055747, r7055749, MPFR_RNDN);
        mpfr_sub(r7055751, r7055746, r7055750, MPFR_RNDN);
        mpfr_add(r7055752, r7055745, r7055751, MPFR_RNDN);
        mpfr_mul(r7055753, r7055742, r7055742, MPFR_RNDN);
        mpfr_neg(r7055754, r7055753, MPFR_RNDN);
        ;
        mpfr_mul(r7055756, r7055753, r7055755, MPFR_RNDN);
        ;
        mpfr_add(r7055758, r7055756, r7055757, MPFR_RNDN);
        mpfr_mul(r7055759, r7055754, r7055758, MPFR_RNDN);
        mpfr_sub(r7055760, r7055752, r7055759, MPFR_RNDN);
        return mpfr_get_d(r7055760, MPFR_RNDN);
}

static mpfr_t r7055761, r7055762, r7055763, r7055764, r7055765, r7055766, r7055767, r7055768, r7055769, r7055770, r7055771, r7055772, r7055773, r7055774, r7055775, r7055776, r7055777, r7055778, r7055779, r7055780;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7055761, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r7055762);
        mpfr_init_set_str(r7055763, "8", 10, MPFR_RNDN);
        mpfr_init(r7055764);
        mpfr_init(r7055765);
        mpfr_init_set_str(r7055766, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r7055767, "93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7055768, "6", 10, MPFR_RNDN);
        mpfr_init(r7055769);
        mpfr_init(r7055770);
        mpfr_init(r7055771);
        mpfr_init(r7055772);
        mpfr_init(r7055773);
        mpfr_init(r7055774);
        mpfr_init_set_str(r7055775, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r7055776);
        mpfr_init_set_str(r7055777, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r7055778);
        mpfr_init(r7055779);
        mpfr_init(r7055780);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7055762, x, MPFR_RNDN);
        ;
        mpfr_pow(r7055764, r7055762, r7055763, MPFR_RNDN);
        mpfr_mul(r7055765, r7055761, r7055764, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r7055769, r7055762, r7055768, MPFR_RNDN);
        mpfr_mul(r7055770, r7055767, r7055769, MPFR_RNDN);
        mpfr_sub(r7055771, r7055766, r7055770, MPFR_RNDN);
        mpfr_add(r7055772, r7055765, r7055771, MPFR_RNDN);
        mpfr_mul(r7055773, r7055762, r7055762, MPFR_RNDN);
        mpfr_neg(r7055774, r7055773, MPFR_RNDN);
        ;
        mpfr_mul(r7055776, r7055773, r7055775, MPFR_RNDN);
        ;
        mpfr_add(r7055778, r7055776, r7055777, MPFR_RNDN);
        mpfr_mul(r7055779, r7055774, r7055778, MPFR_RNDN);
        mpfr_sub(r7055780, r7055772, r7055779, MPFR_RNDN);
        return mpfr_get_d(r7055780, MPFR_RNDN);
}

