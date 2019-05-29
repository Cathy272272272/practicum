#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r7603650 = 12.0;
        float r7603651 = -48.0;
        float r7603652 = x;
        float r7603653 = r7603652 * r7603652;
        float r7603654 = r7603651 * r7603653;
        float r7603655 = r7603650 + r7603654;
        float r7603656 = 16.0;
        float r7603657 = r7603653 * r7603652;
        float r7603658 = r7603657 * r7603652;
        float r7603659 = r7603656 * r7603658;
        float r7603660 = r7603655 + r7603659;
        return r7603660;
}

double f_id(double x) {
        double r7603661 = 12.0;
        double r7603662 = -48.0;
        double r7603663 = x;
        double r7603664 = r7603663 * r7603663;
        double r7603665 = r7603662 * r7603664;
        double r7603666 = r7603661 + r7603665;
        double r7603667 = 16.0;
        double r7603668 = r7603664 * r7603663;
        double r7603669 = r7603668 * r7603663;
        double r7603670 = r7603667 * r7603669;
        double r7603671 = r7603666 + r7603670;
        return r7603671;
}


double f_of(float x) {
        float r7603672 = 12.0;
        float r7603673 = 3;
        float r7603674 = pow(r7603672, r7603673);
        float r7603675 = x;
        float r7603676 = 16.0;
        float r7603677 = r7603675 * r7603676;
        float r7603678 = pow(r7603675, r7603673);
        float r7603679 = r7603677 * r7603678;
        float r7603680 = -48.0;
        float r7603681 = r7603675 * r7603680;
        float r7603682 = r7603681 * r7603675;
        float r7603683 = r7603679 + r7603682;
        float r7603684 = pow(r7603683, r7603673);
        float r7603685 = r7603674 + r7603684;
        float r7603686 = r7603672 * r7603672;
        float r7603687 = r7603683 * r7603683;
        float r7603688 = r7603672 * r7603683;
        float r7603689 = r7603687 - r7603688;
        float r7603690 = r7603686 + r7603689;
        float r7603691 = r7603685 / r7603690;
        return r7603691;
}

double f_od(double x) {
        double r7603692 = 12.0;
        double r7603693 = 3;
        double r7603694 = pow(r7603692, r7603693);
        double r7603695 = x;
        double r7603696 = 16.0;
        double r7603697 = r7603695 * r7603696;
        double r7603698 = pow(r7603695, r7603693);
        double r7603699 = r7603697 * r7603698;
        double r7603700 = -48.0;
        double r7603701 = r7603695 * r7603700;
        double r7603702 = r7603701 * r7603695;
        double r7603703 = r7603699 + r7603702;
        double r7603704 = pow(r7603703, r7603693);
        double r7603705 = r7603694 + r7603704;
        double r7603706 = r7603692 * r7603692;
        double r7603707 = r7603703 * r7603703;
        double r7603708 = r7603692 * r7603703;
        double r7603709 = r7603707 - r7603708;
        double r7603710 = r7603706 + r7603709;
        double r7603711 = r7603705 / r7603710;
        return r7603711;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603712, r7603713, r7603714, r7603715, r7603716, r7603717, r7603718, r7603719, r7603720, r7603721, r7603722;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7603712, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603713, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7603714);
        mpfr_init(r7603715);
        mpfr_init(r7603716);
        mpfr_init(r7603717);
        mpfr_init_set_str(r7603718, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7603719);
        mpfr_init(r7603720);
        mpfr_init(r7603721);
        mpfr_init(r7603722);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7603714, x, MPFR_RNDN);
        mpfr_mul(r7603715, r7603714, r7603714, MPFR_RNDN);
        mpfr_mul(r7603716, r7603713, r7603715, MPFR_RNDN);
        mpfr_add(r7603717, r7603712, r7603716, MPFR_RNDN);
        ;
        mpfr_mul(r7603719, r7603715, r7603714, MPFR_RNDN);
        mpfr_mul(r7603720, r7603719, r7603714, MPFR_RNDN);
        mpfr_mul(r7603721, r7603718, r7603720, MPFR_RNDN);
        mpfr_add(r7603722, r7603717, r7603721, MPFR_RNDN);
        return mpfr_get_d(r7603722, MPFR_RNDN);
}

static mpfr_t r7603723, r7603724, r7603725, r7603726, r7603727, r7603728, r7603729, r7603730, r7603731, r7603732, r7603733, r7603734, r7603735, r7603736, r7603737, r7603738, r7603739, r7603740, r7603741, r7603742;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7603723, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603724, "3", 10, MPFR_RNDN);
        mpfr_init(r7603725);
        mpfr_init(r7603726);
        mpfr_init_set_str(r7603727, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7603728);
        mpfr_init(r7603729);
        mpfr_init(r7603730);
        mpfr_init_set_str(r7603731, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7603732);
        mpfr_init(r7603733);
        mpfr_init(r7603734);
        mpfr_init(r7603735);
        mpfr_init(r7603736);
        mpfr_init(r7603737);
        mpfr_init(r7603738);
        mpfr_init(r7603739);
        mpfr_init(r7603740);
        mpfr_init(r7603741);
        mpfr_init(r7603742);
}

double f_fm(double x) {
        ;
        ;
        mpfr_pow(r7603725, r7603723, r7603724, MPFR_RNDN);
        mpfr_set_d(r7603726, x, MPFR_RNDN);
        ;
        mpfr_mul(r7603728, r7603726, r7603727, MPFR_RNDN);
        mpfr_pow(r7603729, r7603726, r7603724, MPFR_RNDN);
        mpfr_mul(r7603730, r7603728, r7603729, MPFR_RNDN);
        ;
        mpfr_mul(r7603732, r7603726, r7603731, MPFR_RNDN);
        mpfr_mul(r7603733, r7603732, r7603726, MPFR_RNDN);
        mpfr_add(r7603734, r7603730, r7603733, MPFR_RNDN);
        mpfr_pow(r7603735, r7603734, r7603724, MPFR_RNDN);
        mpfr_add(r7603736, r7603725, r7603735, MPFR_RNDN);
        mpfr_mul(r7603737, r7603723, r7603723, MPFR_RNDN);
        mpfr_mul(r7603738, r7603734, r7603734, MPFR_RNDN);
        mpfr_mul(r7603739, r7603723, r7603734, MPFR_RNDN);
        mpfr_sub(r7603740, r7603738, r7603739, MPFR_RNDN);
        mpfr_add(r7603741, r7603737, r7603740, MPFR_RNDN);
        mpfr_div(r7603742, r7603736, r7603741, MPFR_RNDN);
        return mpfr_get_d(r7603742, MPFR_RNDN);
}

static mpfr_t r7603743, r7603744, r7603745, r7603746, r7603747, r7603748, r7603749, r7603750, r7603751, r7603752, r7603753, r7603754, r7603755, r7603756, r7603757, r7603758, r7603759, r7603760, r7603761, r7603762;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7603743, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7603744, "3", 10, MPFR_RNDN);
        mpfr_init(r7603745);
        mpfr_init(r7603746);
        mpfr_init_set_str(r7603747, "16.0", 10, MPFR_RNDN);
        mpfr_init(r7603748);
        mpfr_init(r7603749);
        mpfr_init(r7603750);
        mpfr_init_set_str(r7603751, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r7603752);
        mpfr_init(r7603753);
        mpfr_init(r7603754);
        mpfr_init(r7603755);
        mpfr_init(r7603756);
        mpfr_init(r7603757);
        mpfr_init(r7603758);
        mpfr_init(r7603759);
        mpfr_init(r7603760);
        mpfr_init(r7603761);
        mpfr_init(r7603762);
}

double f_dm(double x) {
        ;
        ;
        mpfr_pow(r7603745, r7603743, r7603744, MPFR_RNDN);
        mpfr_set_d(r7603746, x, MPFR_RNDN);
        ;
        mpfr_mul(r7603748, r7603746, r7603747, MPFR_RNDN);
        mpfr_pow(r7603749, r7603746, r7603744, MPFR_RNDN);
        mpfr_mul(r7603750, r7603748, r7603749, MPFR_RNDN);
        ;
        mpfr_mul(r7603752, r7603746, r7603751, MPFR_RNDN);
        mpfr_mul(r7603753, r7603752, r7603746, MPFR_RNDN);
        mpfr_add(r7603754, r7603750, r7603753, MPFR_RNDN);
        mpfr_pow(r7603755, r7603754, r7603744, MPFR_RNDN);
        mpfr_add(r7603756, r7603745, r7603755, MPFR_RNDN);
        mpfr_mul(r7603757, r7603743, r7603743, MPFR_RNDN);
        mpfr_mul(r7603758, r7603754, r7603754, MPFR_RNDN);
        mpfr_mul(r7603759, r7603743, r7603754, MPFR_RNDN);
        mpfr_sub(r7603760, r7603758, r7603759, MPFR_RNDN);
        mpfr_add(r7603761, r7603757, r7603760, MPFR_RNDN);
        mpfr_div(r7603762, r7603756, r7603761, MPFR_RNDN);
        return mpfr_get_d(r7603762, MPFR_RNDN);
}

