#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r8031705 = -2.1875;
        float r8031706 = x;
        float r8031707 = r8031705 * r8031706;
        float r8031708 = 19.6875;
        float r8031709 = r8031706 * r8031706;
        float r8031710 = r8031709 * r8031706;
        float r8031711 = r8031708 * r8031710;
        float r8031712 = r8031707 + r8031711;
        float r8031713 = -43.3125;
        float r8031714 = r8031710 * r8031706;
        float r8031715 = r8031714 * r8031706;
        float r8031716 = r8031713 * r8031715;
        float r8031717 = r8031712 + r8031716;
        float r8031718 = 26.8125;
        float r8031719 = r8031715 * r8031706;
        float r8031720 = r8031719 * r8031706;
        float r8031721 = r8031718 * r8031720;
        float r8031722 = r8031717 + r8031721;
        return r8031722;
}

double f_id(double x) {
        double r8031723 = -2.1875;
        double r8031724 = x;
        double r8031725 = r8031723 * r8031724;
        double r8031726 = 19.6875;
        double r8031727 = r8031724 * r8031724;
        double r8031728 = r8031727 * r8031724;
        double r8031729 = r8031726 * r8031728;
        double r8031730 = r8031725 + r8031729;
        double r8031731 = -43.3125;
        double r8031732 = r8031728 * r8031724;
        double r8031733 = r8031732 * r8031724;
        double r8031734 = r8031731 * r8031733;
        double r8031735 = r8031730 + r8031734;
        double r8031736 = 26.8125;
        double r8031737 = r8031733 * r8031724;
        double r8031738 = r8031737 * r8031724;
        double r8031739 = r8031736 * r8031738;
        double r8031740 = r8031735 + r8031739;
        return r8031740;
}


double f_of(float x) {
        float r8031741 = x;
        float r8031742 = 2;
        float r8031743 = r8031742 + r8031742;
        float r8031744 = pow(r8031741, r8031743);
        float r8031745 = 3;
        float r8031746 = pow(r8031741, r8031745);
        float r8031747 = r8031746 * r8031746;
        float r8031748 = 26.8125;
        float r8031749 = r8031741 * r8031748;
        float r8031750 = pow(r8031749, r8031745);
        float r8031751 = r8031747 * r8031750;
        float r8031752 = cbrt(r8031751);
        float r8031753 = -43.3125;
        float r8031754 = r8031741 * r8031753;
        float r8031755 = r8031752 + r8031754;
        float r8031756 = r8031744 * r8031755;
        float r8031757 = 19.6875;
        float r8031758 = r8031757 * r8031741;
        float r8031759 = r8031758 * r8031741;
        float r8031760 = -2.1875;
        float r8031761 = r8031759 + r8031760;
        float r8031762 = r8031741 * r8031761;
        float r8031763 = r8031756 + r8031762;
        return r8031763;
}

double f_od(double x) {
        double r8031764 = x;
        double r8031765 = 2;
        double r8031766 = r8031765 + r8031765;
        double r8031767 = pow(r8031764, r8031766);
        double r8031768 = 3;
        double r8031769 = pow(r8031764, r8031768);
        double r8031770 = r8031769 * r8031769;
        double r8031771 = 26.8125;
        double r8031772 = r8031764 * r8031771;
        double r8031773 = pow(r8031772, r8031768);
        double r8031774 = r8031770 * r8031773;
        double r8031775 = cbrt(r8031774);
        double r8031776 = -43.3125;
        double r8031777 = r8031764 * r8031776;
        double r8031778 = r8031775 + r8031777;
        double r8031779 = r8031767 * r8031778;
        double r8031780 = 19.6875;
        double r8031781 = r8031780 * r8031764;
        double r8031782 = r8031781 * r8031764;
        double r8031783 = -2.1875;
        double r8031784 = r8031782 + r8031783;
        double r8031785 = r8031764 * r8031784;
        double r8031786 = r8031779 + r8031785;
        return r8031786;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8031787, r8031788, r8031789, r8031790, r8031791, r8031792, r8031793, r8031794, r8031795, r8031796, r8031797, r8031798, r8031799, r8031800, r8031801, r8031802, r8031803, r8031804;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8031787, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8031788);
        mpfr_init(r8031789);
        mpfr_init_set_str(r8031790, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8031791);
        mpfr_init(r8031792);
        mpfr_init(r8031793);
        mpfr_init(r8031794);
        mpfr_init_set_str(r8031795, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8031796);
        mpfr_init(r8031797);
        mpfr_init(r8031798);
        mpfr_init(r8031799);
        mpfr_init_set_str(r8031800, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8031801);
        mpfr_init(r8031802);
        mpfr_init(r8031803);
        mpfr_init(r8031804);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8031788, x, MPFR_RNDN);
        mpfr_mul(r8031789, r8031787, r8031788, MPFR_RNDN);
        ;
        mpfr_mul(r8031791, r8031788, r8031788, MPFR_RNDN);
        mpfr_mul(r8031792, r8031791, r8031788, MPFR_RNDN);
        mpfr_mul(r8031793, r8031790, r8031792, MPFR_RNDN);
        mpfr_add(r8031794, r8031789, r8031793, MPFR_RNDN);
        ;
        mpfr_mul(r8031796, r8031792, r8031788, MPFR_RNDN);
        mpfr_mul(r8031797, r8031796, r8031788, MPFR_RNDN);
        mpfr_mul(r8031798, r8031795, r8031797, MPFR_RNDN);
        mpfr_add(r8031799, r8031794, r8031798, MPFR_RNDN);
        ;
        mpfr_mul(r8031801, r8031797, r8031788, MPFR_RNDN);
        mpfr_mul(r8031802, r8031801, r8031788, MPFR_RNDN);
        mpfr_mul(r8031803, r8031800, r8031802, MPFR_RNDN);
        mpfr_add(r8031804, r8031799, r8031803, MPFR_RNDN);
        return mpfr_get_d(r8031804, MPFR_RNDN);
}

static mpfr_t r8031805, r8031806, r8031807, r8031808, r8031809, r8031810, r8031811, r8031812, r8031813, r8031814, r8031815, r8031816, r8031817, r8031818, r8031819, r8031820, r8031821, r8031822, r8031823, r8031824, r8031825, r8031826, r8031827;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8031805);
        mpfr_init_set_str(r8031806, "2", 10, MPFR_RNDN);
        mpfr_init(r8031807);
        mpfr_init(r8031808);
        mpfr_init_set_str(r8031809, "3", 10, MPFR_RNDN);
        mpfr_init(r8031810);
        mpfr_init(r8031811);
        mpfr_init_set_str(r8031812, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8031813);
        mpfr_init(r8031814);
        mpfr_init(r8031815);
        mpfr_init(r8031816);
        mpfr_init_set_str(r8031817, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8031818);
        mpfr_init(r8031819);
        mpfr_init(r8031820);
        mpfr_init_set_str(r8031821, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8031822);
        mpfr_init(r8031823);
        mpfr_init_set_str(r8031824, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8031825);
        mpfr_init(r8031826);
        mpfr_init(r8031827);
}

double f_fm(double x) {
        mpfr_set_d(r8031805, x, MPFR_RNDN);
        ;
        mpfr_add(r8031807, r8031806, r8031806, MPFR_RNDN);
        mpfr_pow(r8031808, r8031805, r8031807, MPFR_RNDN);
        ;
        mpfr_pow(r8031810, r8031805, r8031809, MPFR_RNDN);
        mpfr_mul(r8031811, r8031810, r8031810, MPFR_RNDN);
        ;
        mpfr_mul(r8031813, r8031805, r8031812, MPFR_RNDN);
        mpfr_pow(r8031814, r8031813, r8031809, MPFR_RNDN);
        mpfr_mul(r8031815, r8031811, r8031814, MPFR_RNDN);
        mpfr_cbrt(r8031816, r8031815, MPFR_RNDN);
        ;
        mpfr_mul(r8031818, r8031805, r8031817, MPFR_RNDN);
        mpfr_add(r8031819, r8031816, r8031818, MPFR_RNDN);
        mpfr_mul(r8031820, r8031808, r8031819, MPFR_RNDN);
        ;
        mpfr_mul(r8031822, r8031821, r8031805, MPFR_RNDN);
        mpfr_mul(r8031823, r8031822, r8031805, MPFR_RNDN);
        ;
        mpfr_add(r8031825, r8031823, r8031824, MPFR_RNDN);
        mpfr_mul(r8031826, r8031805, r8031825, MPFR_RNDN);
        mpfr_add(r8031827, r8031820, r8031826, MPFR_RNDN);
        return mpfr_get_d(r8031827, MPFR_RNDN);
}

static mpfr_t r8031828, r8031829, r8031830, r8031831, r8031832, r8031833, r8031834, r8031835, r8031836, r8031837, r8031838, r8031839, r8031840, r8031841, r8031842, r8031843, r8031844, r8031845, r8031846, r8031847, r8031848, r8031849, r8031850;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8031828);
        mpfr_init_set_str(r8031829, "2", 10, MPFR_RNDN);
        mpfr_init(r8031830);
        mpfr_init(r8031831);
        mpfr_init_set_str(r8031832, "3", 10, MPFR_RNDN);
        mpfr_init(r8031833);
        mpfr_init(r8031834);
        mpfr_init_set_str(r8031835, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8031836);
        mpfr_init(r8031837);
        mpfr_init(r8031838);
        mpfr_init(r8031839);
        mpfr_init_set_str(r8031840, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8031841);
        mpfr_init(r8031842);
        mpfr_init(r8031843);
        mpfr_init_set_str(r8031844, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8031845);
        mpfr_init(r8031846);
        mpfr_init_set_str(r8031847, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8031848);
        mpfr_init(r8031849);
        mpfr_init(r8031850);
}

double f_dm(double x) {
        mpfr_set_d(r8031828, x, MPFR_RNDN);
        ;
        mpfr_add(r8031830, r8031829, r8031829, MPFR_RNDN);
        mpfr_pow(r8031831, r8031828, r8031830, MPFR_RNDN);
        ;
        mpfr_pow(r8031833, r8031828, r8031832, MPFR_RNDN);
        mpfr_mul(r8031834, r8031833, r8031833, MPFR_RNDN);
        ;
        mpfr_mul(r8031836, r8031828, r8031835, MPFR_RNDN);
        mpfr_pow(r8031837, r8031836, r8031832, MPFR_RNDN);
        mpfr_mul(r8031838, r8031834, r8031837, MPFR_RNDN);
        mpfr_cbrt(r8031839, r8031838, MPFR_RNDN);
        ;
        mpfr_mul(r8031841, r8031828, r8031840, MPFR_RNDN);
        mpfr_add(r8031842, r8031839, r8031841, MPFR_RNDN);
        mpfr_mul(r8031843, r8031831, r8031842, MPFR_RNDN);
        ;
        mpfr_mul(r8031845, r8031844, r8031828, MPFR_RNDN);
        mpfr_mul(r8031846, r8031845, r8031828, MPFR_RNDN);
        ;
        mpfr_add(r8031848, r8031846, r8031847, MPFR_RNDN);
        mpfr_mul(r8031849, r8031828, r8031848, MPFR_RNDN);
        mpfr_add(r8031850, r8031843, r8031849, MPFR_RNDN);
        return mpfr_get_d(r8031850, MPFR_RNDN);
}

