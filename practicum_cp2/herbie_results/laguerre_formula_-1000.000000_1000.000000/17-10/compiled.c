#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6516739 = 1.0;
        float r6516740 = -10.0;
        float r6516741 = x;
        float r6516742 = r6516740 * r6516741;
        float r6516743 = r6516739 + r6516742;
        float r6516744 = 22.5;
        float r6516745 = r6516741 * r6516741;
        float r6516746 = r6516744 * r6516745;
        float r6516747 = r6516743 + r6516746;
        float r6516748 = -20.0;
        float r6516749 = r6516745 * r6516741;
        float r6516750 = r6516748 * r6516749;
        float r6516751 = r6516747 + r6516750;
        float r6516752 = 8.75;
        float r6516753 = r6516749 * r6516741;
        float r6516754 = r6516752 * r6516753;
        float r6516755 = r6516751 + r6516754;
        float r6516756 = -2.1;
        float r6516757 = r6516753 * r6516741;
        float r6516758 = r6516756 * r6516757;
        float r6516759 = r6516755 + r6516758;
        float r6516760 = 0.291667;
        float r6516761 = r6516757 * r6516741;
        float r6516762 = r6516760 * r6516761;
        float r6516763 = r6516759 + r6516762;
        float r6516764 = -0.02381;
        float r6516765 = r6516761 * r6516741;
        float r6516766 = r6516764 * r6516765;
        float r6516767 = r6516763 + r6516766;
        float r6516768 = 0.001116;
        float r6516769 = r6516765 * r6516741;
        float r6516770 = r6516768 * r6516769;
        float r6516771 = r6516767 + r6516770;
        float r6516772 = -2.8e-05;
        float r6516773 = r6516769 * r6516741;
        float r6516774 = r6516772 * r6516773;
        float r6516775 = r6516771 + r6516774;
        return r6516775;
}

double f_id(double x) {
        double r6516776 = 1.0;
        double r6516777 = -10.0;
        double r6516778 = x;
        double r6516779 = r6516777 * r6516778;
        double r6516780 = r6516776 + r6516779;
        double r6516781 = 22.5;
        double r6516782 = r6516778 * r6516778;
        double r6516783 = r6516781 * r6516782;
        double r6516784 = r6516780 + r6516783;
        double r6516785 = -20.0;
        double r6516786 = r6516782 * r6516778;
        double r6516787 = r6516785 * r6516786;
        double r6516788 = r6516784 + r6516787;
        double r6516789 = 8.75;
        double r6516790 = r6516786 * r6516778;
        double r6516791 = r6516789 * r6516790;
        double r6516792 = r6516788 + r6516791;
        double r6516793 = -2.1;
        double r6516794 = r6516790 * r6516778;
        double r6516795 = r6516793 * r6516794;
        double r6516796 = r6516792 + r6516795;
        double r6516797 = 0.291667;
        double r6516798 = r6516794 * r6516778;
        double r6516799 = r6516797 * r6516798;
        double r6516800 = r6516796 + r6516799;
        double r6516801 = -0.02381;
        double r6516802 = r6516798 * r6516778;
        double r6516803 = r6516801 * r6516802;
        double r6516804 = r6516800 + r6516803;
        double r6516805 = 0.001116;
        double r6516806 = r6516802 * r6516778;
        double r6516807 = r6516805 * r6516806;
        double r6516808 = r6516804 + r6516807;
        double r6516809 = -2.8e-05;
        double r6516810 = r6516806 * r6516778;
        double r6516811 = r6516809 * r6516810;
        double r6516812 = r6516808 + r6516811;
        return r6516812;
}


double f_of(float x) {
        float r6516813 = x;
        float r6516814 = r6516813 * r6516813;
        float r6516815 = 22.5;
        float r6516816 = 20.0;
        float r6516817 = r6516816 * r6516813;
        float r6516818 = r6516815 - r6516817;
        float r6516819 = r6516814 * r6516818;
        float r6516820 = -10.0;
        float r6516821 = r6516820 * r6516813;
        float r6516822 = r6516819 + r6516821;
        float r6516823 = 1.0;
        float r6516824 = 3;
        float r6516825 = 1;
        float r6516826 = r6516824 + r6516825;
        float r6516827 = pow(r6516814, r6516826);
        float r6516828 = -2.8e-05;
        float r6516829 = r6516813 * r6516828;
        float r6516830 = 0.001116;
        float r6516831 = r6516829 + r6516830;
        float r6516832 = r6516827 * r6516831;
        float r6516833 = r6516823 + r6516832;
        float r6516834 = r6516822 + r6516833;
        float r6516835 = r6516814 * r6516814;
        float r6516836 = 0.291667;
        float r6516837 = r6516813 * r6516836;
        float r6516838 = r6516837 * r6516813;
        float r6516839 = 8.75;
        float r6516840 = -2.1;
        float r6516841 = r6516813 * r6516840;
        float r6516842 = r6516839 + r6516841;
        float r6516843 = r6516838 + r6516842;
        float r6516844 = -0.02381;
        float r6516845 = r6516844 * r6516813;
        float r6516846 = r6516814 * r6516845;
        float r6516847 = r6516843 + r6516846;
        float r6516848 = r6516835 * r6516847;
        float r6516849 = r6516834 + r6516848;
        return r6516849;
}

double f_od(double x) {
        double r6516850 = x;
        double r6516851 = r6516850 * r6516850;
        double r6516852 = 22.5;
        double r6516853 = 20.0;
        double r6516854 = r6516853 * r6516850;
        double r6516855 = r6516852 - r6516854;
        double r6516856 = r6516851 * r6516855;
        double r6516857 = -10.0;
        double r6516858 = r6516857 * r6516850;
        double r6516859 = r6516856 + r6516858;
        double r6516860 = 1.0;
        double r6516861 = 3;
        double r6516862 = 1;
        double r6516863 = r6516861 + r6516862;
        double r6516864 = pow(r6516851, r6516863);
        double r6516865 = -2.8e-05;
        double r6516866 = r6516850 * r6516865;
        double r6516867 = 0.001116;
        double r6516868 = r6516866 + r6516867;
        double r6516869 = r6516864 * r6516868;
        double r6516870 = r6516860 + r6516869;
        double r6516871 = r6516859 + r6516870;
        double r6516872 = r6516851 * r6516851;
        double r6516873 = 0.291667;
        double r6516874 = r6516850 * r6516873;
        double r6516875 = r6516874 * r6516850;
        double r6516876 = 8.75;
        double r6516877 = -2.1;
        double r6516878 = r6516850 * r6516877;
        double r6516879 = r6516876 + r6516878;
        double r6516880 = r6516875 + r6516879;
        double r6516881 = -0.02381;
        double r6516882 = r6516881 * r6516850;
        double r6516883 = r6516851 * r6516882;
        double r6516884 = r6516880 + r6516883;
        double r6516885 = r6516872 * r6516884;
        double r6516886 = r6516871 + r6516885;
        return r6516886;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6516887, r6516888, r6516889, r6516890, r6516891, r6516892, r6516893, r6516894, r6516895, r6516896, r6516897, r6516898, r6516899, r6516900, r6516901, r6516902, r6516903, r6516904, r6516905, r6516906, r6516907, r6516908, r6516909, r6516910, r6516911, r6516912, r6516913, r6516914, r6516915, r6516916, r6516917, r6516918, r6516919, r6516920, r6516921, r6516922, r6516923;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6516887, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516888, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r6516889);
        mpfr_init(r6516890);
        mpfr_init(r6516891);
        mpfr_init_set_str(r6516892, "22.5", 10, MPFR_RNDN);
        mpfr_init(r6516893);
        mpfr_init(r6516894);
        mpfr_init(r6516895);
        mpfr_init_set_str(r6516896, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r6516897);
        mpfr_init(r6516898);
        mpfr_init(r6516899);
        mpfr_init_set_str(r6516900, "8.75", 10, MPFR_RNDN);
        mpfr_init(r6516901);
        mpfr_init(r6516902);
        mpfr_init(r6516903);
        mpfr_init_set_str(r6516904, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r6516905);
        mpfr_init(r6516906);
        mpfr_init(r6516907);
        mpfr_init_set_str(r6516908, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r6516909);
        mpfr_init(r6516910);
        mpfr_init(r6516911);
        mpfr_init_set_str(r6516912, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r6516913);
        mpfr_init(r6516914);
        mpfr_init(r6516915);
        mpfr_init_set_str(r6516916, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r6516917);
        mpfr_init(r6516918);
        mpfr_init(r6516919);
        mpfr_init_set_str(r6516920, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r6516921);
        mpfr_init(r6516922);
        mpfr_init(r6516923);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6516889, x, MPFR_RNDN);
        mpfr_mul(r6516890, r6516888, r6516889, MPFR_RNDN);
        mpfr_add(r6516891, r6516887, r6516890, MPFR_RNDN);
        ;
        mpfr_mul(r6516893, r6516889, r6516889, MPFR_RNDN);
        mpfr_mul(r6516894, r6516892, r6516893, MPFR_RNDN);
        mpfr_add(r6516895, r6516891, r6516894, MPFR_RNDN);
        ;
        mpfr_mul(r6516897, r6516893, r6516889, MPFR_RNDN);
        mpfr_mul(r6516898, r6516896, r6516897, MPFR_RNDN);
        mpfr_add(r6516899, r6516895, r6516898, MPFR_RNDN);
        ;
        mpfr_mul(r6516901, r6516897, r6516889, MPFR_RNDN);
        mpfr_mul(r6516902, r6516900, r6516901, MPFR_RNDN);
        mpfr_add(r6516903, r6516899, r6516902, MPFR_RNDN);
        ;
        mpfr_mul(r6516905, r6516901, r6516889, MPFR_RNDN);
        mpfr_mul(r6516906, r6516904, r6516905, MPFR_RNDN);
        mpfr_add(r6516907, r6516903, r6516906, MPFR_RNDN);
        ;
        mpfr_mul(r6516909, r6516905, r6516889, MPFR_RNDN);
        mpfr_mul(r6516910, r6516908, r6516909, MPFR_RNDN);
        mpfr_add(r6516911, r6516907, r6516910, MPFR_RNDN);
        ;
        mpfr_mul(r6516913, r6516909, r6516889, MPFR_RNDN);
        mpfr_mul(r6516914, r6516912, r6516913, MPFR_RNDN);
        mpfr_add(r6516915, r6516911, r6516914, MPFR_RNDN);
        ;
        mpfr_mul(r6516917, r6516913, r6516889, MPFR_RNDN);
        mpfr_mul(r6516918, r6516916, r6516917, MPFR_RNDN);
        mpfr_add(r6516919, r6516915, r6516918, MPFR_RNDN);
        ;
        mpfr_mul(r6516921, r6516917, r6516889, MPFR_RNDN);
        mpfr_mul(r6516922, r6516920, r6516921, MPFR_RNDN);
        mpfr_add(r6516923, r6516919, r6516922, MPFR_RNDN);
        return mpfr_get_d(r6516923, MPFR_RNDN);
}

static mpfr_t r6516924, r6516925, r6516926, r6516927, r6516928, r6516929, r6516930, r6516931, r6516932, r6516933, r6516934, r6516935, r6516936, r6516937, r6516938, r6516939, r6516940, r6516941, r6516942, r6516943, r6516944, r6516945, r6516946, r6516947, r6516948, r6516949, r6516950, r6516951, r6516952, r6516953, r6516954, r6516955, r6516956, r6516957, r6516958, r6516959, r6516960;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6516924);
        mpfr_init(r6516925);
        mpfr_init_set_str(r6516926, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516927, "20.0", 10, MPFR_RNDN);
        mpfr_init(r6516928);
        mpfr_init(r6516929);
        mpfr_init(r6516930);
        mpfr_init_set_str(r6516931, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r6516932);
        mpfr_init(r6516933);
        mpfr_init_set_str(r6516934, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516935, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516936, "1", 10, MPFR_RNDN);
        mpfr_init(r6516937);
        mpfr_init(r6516938);
        mpfr_init_set_str(r6516939, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r6516940);
        mpfr_init_set_str(r6516941, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r6516942);
        mpfr_init(r6516943);
        mpfr_init(r6516944);
        mpfr_init(r6516945);
        mpfr_init(r6516946);
        mpfr_init_set_str(r6516947, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r6516948);
        mpfr_init(r6516949);
        mpfr_init_set_str(r6516950, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516951, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r6516952);
        mpfr_init(r6516953);
        mpfr_init(r6516954);
        mpfr_init_set_str(r6516955, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r6516956);
        mpfr_init(r6516957);
        mpfr_init(r6516958);
        mpfr_init(r6516959);
        mpfr_init(r6516960);
}

double f_fm(double x) {
        mpfr_set_d(r6516924, x, MPFR_RNDN);
        mpfr_mul(r6516925, r6516924, r6516924, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516928, r6516927, r6516924, MPFR_RNDN);
        mpfr_sub(r6516929, r6516926, r6516928, MPFR_RNDN);
        mpfr_mul(r6516930, r6516925, r6516929, MPFR_RNDN);
        ;
        mpfr_mul(r6516932, r6516931, r6516924, MPFR_RNDN);
        mpfr_add(r6516933, r6516930, r6516932, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r6516937, r6516935, r6516936, MPFR_RNDN);
        mpfr_pow(r6516938, r6516925, r6516937, MPFR_RNDN);
        ;
        mpfr_mul(r6516940, r6516924, r6516939, MPFR_RNDN);
        ;
        mpfr_add(r6516942, r6516940, r6516941, MPFR_RNDN);
        mpfr_mul(r6516943, r6516938, r6516942, MPFR_RNDN);
        mpfr_add(r6516944, r6516934, r6516943, MPFR_RNDN);
        mpfr_add(r6516945, r6516933, r6516944, MPFR_RNDN);
        mpfr_mul(r6516946, r6516925, r6516925, MPFR_RNDN);
        ;
        mpfr_mul(r6516948, r6516924, r6516947, MPFR_RNDN);
        mpfr_mul(r6516949, r6516948, r6516924, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516952, r6516924, r6516951, MPFR_RNDN);
        mpfr_add(r6516953, r6516950, r6516952, MPFR_RNDN);
        mpfr_add(r6516954, r6516949, r6516953, MPFR_RNDN);
        ;
        mpfr_mul(r6516956, r6516955, r6516924, MPFR_RNDN);
        mpfr_mul(r6516957, r6516925, r6516956, MPFR_RNDN);
        mpfr_add(r6516958, r6516954, r6516957, MPFR_RNDN);
        mpfr_mul(r6516959, r6516946, r6516958, MPFR_RNDN);
        mpfr_add(r6516960, r6516945, r6516959, MPFR_RNDN);
        return mpfr_get_d(r6516960, MPFR_RNDN);
}

static mpfr_t r6516961, r6516962, r6516963, r6516964, r6516965, r6516966, r6516967, r6516968, r6516969, r6516970, r6516971, r6516972, r6516973, r6516974, r6516975, r6516976, r6516977, r6516978, r6516979, r6516980, r6516981, r6516982, r6516983, r6516984, r6516985, r6516986, r6516987, r6516988, r6516989, r6516990, r6516991, r6516992, r6516993, r6516994, r6516995, r6516996, r6516997;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6516961);
        mpfr_init(r6516962);
        mpfr_init_set_str(r6516963, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516964, "20.0", 10, MPFR_RNDN);
        mpfr_init(r6516965);
        mpfr_init(r6516966);
        mpfr_init(r6516967);
        mpfr_init_set_str(r6516968, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r6516969);
        mpfr_init(r6516970);
        mpfr_init_set_str(r6516971, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516972, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516973, "1", 10, MPFR_RNDN);
        mpfr_init(r6516974);
        mpfr_init(r6516975);
        mpfr_init_set_str(r6516976, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r6516977);
        mpfr_init_set_str(r6516978, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r6516979);
        mpfr_init(r6516980);
        mpfr_init(r6516981);
        mpfr_init(r6516982);
        mpfr_init(r6516983);
        mpfr_init_set_str(r6516984, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r6516985);
        mpfr_init(r6516986);
        mpfr_init_set_str(r6516987, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r6516988, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r6516989);
        mpfr_init(r6516990);
        mpfr_init(r6516991);
        mpfr_init_set_str(r6516992, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r6516993);
        mpfr_init(r6516994);
        mpfr_init(r6516995);
        mpfr_init(r6516996);
        mpfr_init(r6516997);
}

double f_dm(double x) {
        mpfr_set_d(r6516961, x, MPFR_RNDN);
        mpfr_mul(r6516962, r6516961, r6516961, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516965, r6516964, r6516961, MPFR_RNDN);
        mpfr_sub(r6516966, r6516963, r6516965, MPFR_RNDN);
        mpfr_mul(r6516967, r6516962, r6516966, MPFR_RNDN);
        ;
        mpfr_mul(r6516969, r6516968, r6516961, MPFR_RNDN);
        mpfr_add(r6516970, r6516967, r6516969, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r6516974, r6516972, r6516973, MPFR_RNDN);
        mpfr_pow(r6516975, r6516962, r6516974, MPFR_RNDN);
        ;
        mpfr_mul(r6516977, r6516961, r6516976, MPFR_RNDN);
        ;
        mpfr_add(r6516979, r6516977, r6516978, MPFR_RNDN);
        mpfr_mul(r6516980, r6516975, r6516979, MPFR_RNDN);
        mpfr_add(r6516981, r6516971, r6516980, MPFR_RNDN);
        mpfr_add(r6516982, r6516970, r6516981, MPFR_RNDN);
        mpfr_mul(r6516983, r6516962, r6516962, MPFR_RNDN);
        ;
        mpfr_mul(r6516985, r6516961, r6516984, MPFR_RNDN);
        mpfr_mul(r6516986, r6516985, r6516961, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6516989, r6516961, r6516988, MPFR_RNDN);
        mpfr_add(r6516990, r6516987, r6516989, MPFR_RNDN);
        mpfr_add(r6516991, r6516986, r6516990, MPFR_RNDN);
        ;
        mpfr_mul(r6516993, r6516992, r6516961, MPFR_RNDN);
        mpfr_mul(r6516994, r6516962, r6516993, MPFR_RNDN);
        mpfr_add(r6516995, r6516991, r6516994, MPFR_RNDN);
        mpfr_mul(r6516996, r6516983, r6516995, MPFR_RNDN);
        mpfr_add(r6516997, r6516982, r6516996, MPFR_RNDN);
        return mpfr_get_d(r6516997, MPFR_RNDN);
}

