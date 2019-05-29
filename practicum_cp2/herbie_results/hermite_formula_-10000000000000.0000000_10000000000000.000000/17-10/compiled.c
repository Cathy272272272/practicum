#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r5317819 = -30240.0;
        float r5317820 = 302400.0;
        float r5317821 = x;
        float r5317822 = r5317821 * r5317821;
        float r5317823 = r5317820 * r5317822;
        float r5317824 = r5317819 + r5317823;
        float r5317825 = -403200.0;
        float r5317826 = r5317822 * r5317821;
        float r5317827 = r5317826 * r5317821;
        float r5317828 = r5317825 * r5317827;
        float r5317829 = r5317824 + r5317828;
        float r5317830 = 161280.0;
        float r5317831 = r5317827 * r5317821;
        float r5317832 = r5317831 * r5317821;
        float r5317833 = r5317830 * r5317832;
        float r5317834 = r5317829 + r5317833;
        float r5317835 = -23040.0;
        float r5317836 = r5317832 * r5317821;
        float r5317837 = r5317836 * r5317821;
        float r5317838 = r5317835 * r5317837;
        float r5317839 = r5317834 + r5317838;
        float r5317840 = 1024.0;
        float r5317841 = r5317837 * r5317821;
        float r5317842 = r5317841 * r5317821;
        float r5317843 = r5317840 * r5317842;
        float r5317844 = r5317839 + r5317843;
        return r5317844;
}

double f_id(double x) {
        double r5317845 = -30240.0;
        double r5317846 = 302400.0;
        double r5317847 = x;
        double r5317848 = r5317847 * r5317847;
        double r5317849 = r5317846 * r5317848;
        double r5317850 = r5317845 + r5317849;
        double r5317851 = -403200.0;
        double r5317852 = r5317848 * r5317847;
        double r5317853 = r5317852 * r5317847;
        double r5317854 = r5317851 * r5317853;
        double r5317855 = r5317850 + r5317854;
        double r5317856 = 161280.0;
        double r5317857 = r5317853 * r5317847;
        double r5317858 = r5317857 * r5317847;
        double r5317859 = r5317856 * r5317858;
        double r5317860 = r5317855 + r5317859;
        double r5317861 = -23040.0;
        double r5317862 = r5317858 * r5317847;
        double r5317863 = r5317862 * r5317847;
        double r5317864 = r5317861 * r5317863;
        double r5317865 = r5317860 + r5317864;
        double r5317866 = 1024.0;
        double r5317867 = r5317863 * r5317847;
        double r5317868 = r5317867 * r5317847;
        double r5317869 = r5317866 * r5317868;
        double r5317870 = r5317865 + r5317869;
        return r5317870;
}


double f_of(float x) {
        float r5317871 = 1024.0;
        float r5317872 = x;
        float r5317873 = r5317871 * r5317872;
        float r5317874 = r5317872 * r5317872;
        float r5317875 = r5317873 * r5317874;
        float r5317876 = 3;
        float r5317877 = pow(r5317872, r5317876);
        float r5317878 = 4;
        float r5317879 = pow(r5317872, r5317878);
        float r5317880 = r5317877 * r5317879;
        float r5317881 = r5317875 * r5317880;
        float r5317882 = -30240.0;
        float r5317883 = r5317881 + r5317882;
        float r5317884 = r5317877 * r5317877;
        float r5317885 = -23040.0;
        float r5317886 = r5317885 * r5317872;
        float r5317887 = r5317872 * r5317886;
        float r5317888 = 161280.0;
        float r5317889 = r5317887 + r5317888;
        float r5317890 = r5317884 * r5317889;
        float r5317891 = -403200.0;
        float r5317892 = r5317872 * r5317891;
        float r5317893 = r5317892 * r5317877;
        float r5317894 = 302400.0;
        float r5317895 = r5317874 * r5317894;
        float r5317896 = r5317893 + r5317895;
        float r5317897 = r5317890 + r5317896;
        float r5317898 = r5317883 + r5317897;
        return r5317898;
}

double f_od(double x) {
        double r5317899 = 1024.0;
        double r5317900 = x;
        double r5317901 = r5317899 * r5317900;
        double r5317902 = r5317900 * r5317900;
        double r5317903 = r5317901 * r5317902;
        double r5317904 = 3;
        double r5317905 = pow(r5317900, r5317904);
        double r5317906 = 4;
        double r5317907 = pow(r5317900, r5317906);
        double r5317908 = r5317905 * r5317907;
        double r5317909 = r5317903 * r5317908;
        double r5317910 = -30240.0;
        double r5317911 = r5317909 + r5317910;
        double r5317912 = r5317905 * r5317905;
        double r5317913 = -23040.0;
        double r5317914 = r5317913 * r5317900;
        double r5317915 = r5317900 * r5317914;
        double r5317916 = 161280.0;
        double r5317917 = r5317915 + r5317916;
        double r5317918 = r5317912 * r5317917;
        double r5317919 = -403200.0;
        double r5317920 = r5317900 * r5317919;
        double r5317921 = r5317920 * r5317905;
        double r5317922 = 302400.0;
        double r5317923 = r5317902 * r5317922;
        double r5317924 = r5317921 + r5317923;
        double r5317925 = r5317918 + r5317924;
        double r5317926 = r5317911 + r5317925;
        return r5317926;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5317927, r5317928, r5317929, r5317930, r5317931, r5317932, r5317933, r5317934, r5317935, r5317936, r5317937, r5317938, r5317939, r5317940, r5317941, r5317942, r5317943, r5317944, r5317945, r5317946, r5317947, r5317948, r5317949, r5317950, r5317951, r5317952;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317927, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5317928, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r5317929);
        mpfr_init(r5317930);
        mpfr_init(r5317931);
        mpfr_init(r5317932);
        mpfr_init_set_str(r5317933, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r5317934);
        mpfr_init(r5317935);
        mpfr_init(r5317936);
        mpfr_init(r5317937);
        mpfr_init_set_str(r5317938, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r5317939);
        mpfr_init(r5317940);
        mpfr_init(r5317941);
        mpfr_init(r5317942);
        mpfr_init_set_str(r5317943, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r5317944);
        mpfr_init(r5317945);
        mpfr_init(r5317946);
        mpfr_init(r5317947);
        mpfr_init_set_str(r5317948, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r5317949);
        mpfr_init(r5317950);
        mpfr_init(r5317951);
        mpfr_init(r5317952);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5317929, x, MPFR_RNDN);
        mpfr_mul(r5317930, r5317929, r5317929, MPFR_RNDN);
        mpfr_mul(r5317931, r5317928, r5317930, MPFR_RNDN);
        mpfr_add(r5317932, r5317927, r5317931, MPFR_RNDN);
        ;
        mpfr_mul(r5317934, r5317930, r5317929, MPFR_RNDN);
        mpfr_mul(r5317935, r5317934, r5317929, MPFR_RNDN);
        mpfr_mul(r5317936, r5317933, r5317935, MPFR_RNDN);
        mpfr_add(r5317937, r5317932, r5317936, MPFR_RNDN);
        ;
        mpfr_mul(r5317939, r5317935, r5317929, MPFR_RNDN);
        mpfr_mul(r5317940, r5317939, r5317929, MPFR_RNDN);
        mpfr_mul(r5317941, r5317938, r5317940, MPFR_RNDN);
        mpfr_add(r5317942, r5317937, r5317941, MPFR_RNDN);
        ;
        mpfr_mul(r5317944, r5317940, r5317929, MPFR_RNDN);
        mpfr_mul(r5317945, r5317944, r5317929, MPFR_RNDN);
        mpfr_mul(r5317946, r5317943, r5317945, MPFR_RNDN);
        mpfr_add(r5317947, r5317942, r5317946, MPFR_RNDN);
        ;
        mpfr_mul(r5317949, r5317945, r5317929, MPFR_RNDN);
        mpfr_mul(r5317950, r5317949, r5317929, MPFR_RNDN);
        mpfr_mul(r5317951, r5317948, r5317950, MPFR_RNDN);
        mpfr_add(r5317952, r5317947, r5317951, MPFR_RNDN);
        return mpfr_get_d(r5317952, MPFR_RNDN);
}

static mpfr_t r5317953, r5317954, r5317955, r5317956, r5317957, r5317958, r5317959, r5317960, r5317961, r5317962, r5317963, r5317964, r5317965, r5317966, r5317967, r5317968, r5317969, r5317970, r5317971, r5317972, r5317973, r5317974, r5317975, r5317976, r5317977, r5317978, r5317979, r5317980;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317953, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r5317954);
        mpfr_init(r5317955);
        mpfr_init(r5317956);
        mpfr_init(r5317957);
        mpfr_init_set_str(r5317958, "3", 10, MPFR_RNDN);
        mpfr_init(r5317959);
        mpfr_init_set_str(r5317960, "4", 10, MPFR_RNDN);
        mpfr_init(r5317961);
        mpfr_init(r5317962);
        mpfr_init(r5317963);
        mpfr_init_set_str(r5317964, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r5317965);
        mpfr_init(r5317966);
        mpfr_init_set_str(r5317967, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r5317968);
        mpfr_init(r5317969);
        mpfr_init_set_str(r5317970, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r5317971);
        mpfr_init(r5317972);
        mpfr_init_set_str(r5317973, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r5317974);
        mpfr_init(r5317975);
        mpfr_init_set_str(r5317976, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r5317977);
        mpfr_init(r5317978);
        mpfr_init(r5317979);
        mpfr_init(r5317980);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r5317954, x, MPFR_RNDN);
        mpfr_mul(r5317955, r5317953, r5317954, MPFR_RNDN);
        mpfr_mul(r5317956, r5317954, r5317954, MPFR_RNDN);
        mpfr_mul(r5317957, r5317955, r5317956, MPFR_RNDN);
        ;
        mpfr_pow(r5317959, r5317954, r5317958, MPFR_RNDN);
        ;
        mpfr_pow(r5317961, r5317954, r5317960, MPFR_RNDN);
        mpfr_mul(r5317962, r5317959, r5317961, MPFR_RNDN);
        mpfr_mul(r5317963, r5317957, r5317962, MPFR_RNDN);
        ;
        mpfr_add(r5317965, r5317963, r5317964, MPFR_RNDN);
        mpfr_mul(r5317966, r5317959, r5317959, MPFR_RNDN);
        ;
        mpfr_mul(r5317968, r5317967, r5317954, MPFR_RNDN);
        mpfr_mul(r5317969, r5317954, r5317968, MPFR_RNDN);
        ;
        mpfr_add(r5317971, r5317969, r5317970, MPFR_RNDN);
        mpfr_mul(r5317972, r5317966, r5317971, MPFR_RNDN);
        ;
        mpfr_mul(r5317974, r5317954, r5317973, MPFR_RNDN);
        mpfr_mul(r5317975, r5317974, r5317959, MPFR_RNDN);
        ;
        mpfr_mul(r5317977, r5317956, r5317976, MPFR_RNDN);
        mpfr_add(r5317978, r5317975, r5317977, MPFR_RNDN);
        mpfr_add(r5317979, r5317972, r5317978, MPFR_RNDN);
        mpfr_add(r5317980, r5317965, r5317979, MPFR_RNDN);
        return mpfr_get_d(r5317980, MPFR_RNDN);
}

static mpfr_t r5317981, r5317982, r5317983, r5317984, r5317985, r5317986, r5317987, r5317988, r5317989, r5317990, r5317991, r5317992, r5317993, r5317994, r5317995, r5317996, r5317997, r5317998, r5317999, r5318000, r5318001, r5318002, r5318003, r5318004, r5318005, r5318006, r5318007, r5318008;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317981, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r5317982);
        mpfr_init(r5317983);
        mpfr_init(r5317984);
        mpfr_init(r5317985);
        mpfr_init_set_str(r5317986, "3", 10, MPFR_RNDN);
        mpfr_init(r5317987);
        mpfr_init_set_str(r5317988, "4", 10, MPFR_RNDN);
        mpfr_init(r5317989);
        mpfr_init(r5317990);
        mpfr_init(r5317991);
        mpfr_init_set_str(r5317992, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r5317993);
        mpfr_init(r5317994);
        mpfr_init_set_str(r5317995, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r5317996);
        mpfr_init(r5317997);
        mpfr_init_set_str(r5317998, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r5317999);
        mpfr_init(r5318000);
        mpfr_init_set_str(r5318001, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r5318002);
        mpfr_init(r5318003);
        mpfr_init_set_str(r5318004, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r5318005);
        mpfr_init(r5318006);
        mpfr_init(r5318007);
        mpfr_init(r5318008);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r5317982, x, MPFR_RNDN);
        mpfr_mul(r5317983, r5317981, r5317982, MPFR_RNDN);
        mpfr_mul(r5317984, r5317982, r5317982, MPFR_RNDN);
        mpfr_mul(r5317985, r5317983, r5317984, MPFR_RNDN);
        ;
        mpfr_pow(r5317987, r5317982, r5317986, MPFR_RNDN);
        ;
        mpfr_pow(r5317989, r5317982, r5317988, MPFR_RNDN);
        mpfr_mul(r5317990, r5317987, r5317989, MPFR_RNDN);
        mpfr_mul(r5317991, r5317985, r5317990, MPFR_RNDN);
        ;
        mpfr_add(r5317993, r5317991, r5317992, MPFR_RNDN);
        mpfr_mul(r5317994, r5317987, r5317987, MPFR_RNDN);
        ;
        mpfr_mul(r5317996, r5317995, r5317982, MPFR_RNDN);
        mpfr_mul(r5317997, r5317982, r5317996, MPFR_RNDN);
        ;
        mpfr_add(r5317999, r5317997, r5317998, MPFR_RNDN);
        mpfr_mul(r5318000, r5317994, r5317999, MPFR_RNDN);
        ;
        mpfr_mul(r5318002, r5317982, r5318001, MPFR_RNDN);
        mpfr_mul(r5318003, r5318002, r5317987, MPFR_RNDN);
        ;
        mpfr_mul(r5318005, r5317984, r5318004, MPFR_RNDN);
        mpfr_add(r5318006, r5318003, r5318005, MPFR_RNDN);
        mpfr_add(r5318007, r5318000, r5318006, MPFR_RNDN);
        mpfr_add(r5318008, r5317993, r5318007, MPFR_RNDN);
        return mpfr_get_d(r5318008, MPFR_RNDN);
}

