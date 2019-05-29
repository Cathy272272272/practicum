#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8953669 = 120.0;
        float r8953670 = x;
        float r8953671 = r8953669 * r8953670;
        float r8953672 = -160.0;
        float r8953673 = r8953670 * r8953670;
        float r8953674 = r8953673 * r8953670;
        float r8953675 = r8953672 * r8953674;
        float r8953676 = r8953671 + r8953675;
        float r8953677 = 32.0;
        float r8953678 = r8953674 * r8953670;
        float r8953679 = r8953678 * r8953670;
        float r8953680 = r8953677 * r8953679;
        float r8953681 = r8953676 + r8953680;
        return r8953681;
}

double f_id(double x) {
        double r8953682 = 120.0;
        double r8953683 = x;
        double r8953684 = r8953682 * r8953683;
        double r8953685 = -160.0;
        double r8953686 = r8953683 * r8953683;
        double r8953687 = r8953686 * r8953683;
        double r8953688 = r8953685 * r8953687;
        double r8953689 = r8953684 + r8953688;
        double r8953690 = 32.0;
        double r8953691 = r8953687 * r8953683;
        double r8953692 = r8953691 * r8953683;
        double r8953693 = r8953690 * r8953692;
        double r8953694 = r8953689 + r8953693;
        return r8953694;
}


double f_of(float x) {
        float r8953695 = 120.0;
        float r8953696 = x;
        float r8953697 = r8953695 * r8953696;
        float r8953698 = -160.0;
        float r8953699 = r8953696 * r8953696;
        float r8953700 = r8953699 * r8953696;
        float r8953701 = r8953698 * r8953700;
        float r8953702 = r8953697 + r8953701;
        float r8953703 = 32.0;
        float r8953704 = 3;
        float r8953705 = 1;
        float r8953706 = r8953704 + r8953705;
        float r8953707 = r8953706 + r8953705;
        float r8953708 = pow(r8953696, r8953707);
        float r8953709 = r8953703 * r8953708;
        float r8953710 = r8953702 + r8953709;
        return r8953710;
}

double f_od(double x) {
        double r8953711 = 120.0;
        double r8953712 = x;
        double r8953713 = r8953711 * r8953712;
        double r8953714 = -160.0;
        double r8953715 = r8953712 * r8953712;
        double r8953716 = r8953715 * r8953712;
        double r8953717 = r8953714 * r8953716;
        double r8953718 = r8953713 + r8953717;
        double r8953719 = 32.0;
        double r8953720 = 3;
        double r8953721 = 1;
        double r8953722 = r8953720 + r8953721;
        double r8953723 = r8953722 + r8953721;
        double r8953724 = pow(r8953712, r8953723);
        double r8953725 = r8953719 * r8953724;
        double r8953726 = r8953718 + r8953725;
        return r8953726;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953727, r8953728, r8953729, r8953730, r8953731, r8953732, r8953733, r8953734, r8953735, r8953736, r8953737, r8953738, r8953739;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953727, "120.0", 10, MPFR_RNDN);
        mpfr_init(r8953728);
        mpfr_init(r8953729);
        mpfr_init_set_str(r8953730, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r8953731);
        mpfr_init(r8953732);
        mpfr_init(r8953733);
        mpfr_init(r8953734);
        mpfr_init_set_str(r8953735, "32.0", 10, MPFR_RNDN);
        mpfr_init(r8953736);
        mpfr_init(r8953737);
        mpfr_init(r8953738);
        mpfr_init(r8953739);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8953728, x, MPFR_RNDN);
        mpfr_mul(r8953729, r8953727, r8953728, MPFR_RNDN);
        ;
        mpfr_mul(r8953731, r8953728, r8953728, MPFR_RNDN);
        mpfr_mul(r8953732, r8953731, r8953728, MPFR_RNDN);
        mpfr_mul(r8953733, r8953730, r8953732, MPFR_RNDN);
        mpfr_add(r8953734, r8953729, r8953733, MPFR_RNDN);
        ;
        mpfr_mul(r8953736, r8953732, r8953728, MPFR_RNDN);
        mpfr_mul(r8953737, r8953736, r8953728, MPFR_RNDN);
        mpfr_mul(r8953738, r8953735, r8953737, MPFR_RNDN);
        mpfr_add(r8953739, r8953734, r8953738, MPFR_RNDN);
        return mpfr_get_d(r8953739, MPFR_RNDN);
}

static mpfr_t r8953740, r8953741, r8953742, r8953743, r8953744, r8953745, r8953746, r8953747, r8953748, r8953749, r8953750, r8953751, r8953752, r8953753, r8953754, r8953755;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953740, "120.0", 10, MPFR_RNDN);
        mpfr_init(r8953741);
        mpfr_init(r8953742);
        mpfr_init_set_str(r8953743, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r8953744);
        mpfr_init(r8953745);
        mpfr_init(r8953746);
        mpfr_init(r8953747);
        mpfr_init_set_str(r8953748, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953749, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953750, "1", 10, MPFR_RNDN);
        mpfr_init(r8953751);
        mpfr_init(r8953752);
        mpfr_init(r8953753);
        mpfr_init(r8953754);
        mpfr_init(r8953755);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8953741, x, MPFR_RNDN);
        mpfr_mul(r8953742, r8953740, r8953741, MPFR_RNDN);
        ;
        mpfr_mul(r8953744, r8953741, r8953741, MPFR_RNDN);
        mpfr_mul(r8953745, r8953744, r8953741, MPFR_RNDN);
        mpfr_mul(r8953746, r8953743, r8953745, MPFR_RNDN);
        mpfr_add(r8953747, r8953742, r8953746, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8953751, r8953749, r8953750, MPFR_RNDN);
        mpfr_add(r8953752, r8953751, r8953750, MPFR_RNDN);
        mpfr_pow(r8953753, r8953741, r8953752, MPFR_RNDN);
        mpfr_mul(r8953754, r8953748, r8953753, MPFR_RNDN);
        mpfr_add(r8953755, r8953747, r8953754, MPFR_RNDN);
        return mpfr_get_d(r8953755, MPFR_RNDN);
}

static mpfr_t r8953756, r8953757, r8953758, r8953759, r8953760, r8953761, r8953762, r8953763, r8953764, r8953765, r8953766, r8953767, r8953768, r8953769, r8953770, r8953771;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953756, "120.0", 10, MPFR_RNDN);
        mpfr_init(r8953757);
        mpfr_init(r8953758);
        mpfr_init_set_str(r8953759, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r8953760);
        mpfr_init(r8953761);
        mpfr_init(r8953762);
        mpfr_init(r8953763);
        mpfr_init_set_str(r8953764, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953765, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953766, "1", 10, MPFR_RNDN);
        mpfr_init(r8953767);
        mpfr_init(r8953768);
        mpfr_init(r8953769);
        mpfr_init(r8953770);
        mpfr_init(r8953771);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8953757, x, MPFR_RNDN);
        mpfr_mul(r8953758, r8953756, r8953757, MPFR_RNDN);
        ;
        mpfr_mul(r8953760, r8953757, r8953757, MPFR_RNDN);
        mpfr_mul(r8953761, r8953760, r8953757, MPFR_RNDN);
        mpfr_mul(r8953762, r8953759, r8953761, MPFR_RNDN);
        mpfr_add(r8953763, r8953758, r8953762, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8953767, r8953765, r8953766, MPFR_RNDN);
        mpfr_add(r8953768, r8953767, r8953766, MPFR_RNDN);
        mpfr_pow(r8953769, r8953757, r8953768, MPFR_RNDN);
        mpfr_mul(r8953770, r8953764, r8953769, MPFR_RNDN);
        mpfr_add(r8953771, r8953763, r8953770, MPFR_RNDN);
        return mpfr_get_d(r8953771, MPFR_RNDN);
}

