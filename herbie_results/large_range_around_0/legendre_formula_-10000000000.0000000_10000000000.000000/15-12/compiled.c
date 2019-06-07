#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r8926797 = 0.225586;
        float r8926798 = -17.595703;
        float r8926799 = x;
        float r8926800 = r8926799 * r8926799;
        float r8926801 = r8926798 * r8926800;
        float r8926802 = r8926797 + r8926801;
        float r8926803 = 219.946289;
        float r8926804 = r8926800 * r8926799;
        float r8926805 = r8926804 * r8926799;
        float r8926806 = r8926803 * r8926805;
        float r8926807 = r8926802 + r8926806;
        float r8926808 = -997.089844;
        float r8926809 = r8926805 * r8926799;
        float r8926810 = r8926809 * r8926799;
        float r8926811 = r8926808 * r8926810;
        float r8926812 = r8926807 + r8926811;
        float r8926813 = 2029.790039;
        float r8926814 = r8926810 * r8926799;
        float r8926815 = r8926814 * r8926799;
        float r8926816 = r8926813 * r8926815;
        float r8926817 = r8926812 + r8926816;
        float r8926818 = -1894.470703;
        float r8926819 = r8926815 * r8926799;
        float r8926820 = r8926819 * r8926799;
        float r8926821 = r8926818 * r8926820;
        float r8926822 = r8926817 + r8926821;
        float r8926823 = 660.194336;
        float r8926824 = r8926820 * r8926799;
        float r8926825 = r8926824 * r8926799;
        float r8926826 = r8926823 * r8926825;
        float r8926827 = r8926822 + r8926826;
        return r8926827;
}

double f_id(double x) {
        double r8926828 = 0.225586;
        double r8926829 = -17.595703;
        double r8926830 = x;
        double r8926831 = r8926830 * r8926830;
        double r8926832 = r8926829 * r8926831;
        double r8926833 = r8926828 + r8926832;
        double r8926834 = 219.946289;
        double r8926835 = r8926831 * r8926830;
        double r8926836 = r8926835 * r8926830;
        double r8926837 = r8926834 * r8926836;
        double r8926838 = r8926833 + r8926837;
        double r8926839 = -997.089844;
        double r8926840 = r8926836 * r8926830;
        double r8926841 = r8926840 * r8926830;
        double r8926842 = r8926839 * r8926841;
        double r8926843 = r8926838 + r8926842;
        double r8926844 = 2029.790039;
        double r8926845 = r8926841 * r8926830;
        double r8926846 = r8926845 * r8926830;
        double r8926847 = r8926844 * r8926846;
        double r8926848 = r8926843 + r8926847;
        double r8926849 = -1894.470703;
        double r8926850 = r8926846 * r8926830;
        double r8926851 = r8926850 * r8926830;
        double r8926852 = r8926849 * r8926851;
        double r8926853 = r8926848 + r8926852;
        double r8926854 = 660.194336;
        double r8926855 = r8926851 * r8926830;
        double r8926856 = r8926855 * r8926830;
        double r8926857 = r8926854 * r8926856;
        double r8926858 = r8926853 + r8926857;
        return r8926858;
}


double f_of(float x) {
        float r8926859 = x;
        float r8926860 = r8926859 * r8926859;
        float r8926861 = 660.194336;
        float r8926862 = r8926861 * r8926859;
        float r8926863 = r8926860 * r8926862;
        float r8926864 = 3;
        float r8926865 = pow(r8926859, r8926864);
        float r8926866 = pow(r8926865, r8926864);
        float r8926867 = r8926863 * r8926866;
        float r8926868 = 10;
        float r8926869 = pow(r8926859, r8926868);
        float r8926870 = -1894.470703;
        float r8926871 = r8926869 * r8926870;
        float r8926872 = 219.946289;
        float r8926873 = 4;
        float r8926874 = pow(r8926859, r8926873);
        float r8926875 = r8926872 * r8926874;
        float r8926876 = r8926871 + r8926875;
        float r8926877 = r8926867 + r8926876;
        float r8926878 = 6;
        float r8926879 = pow(r8926859, r8926878);
        float r8926880 = 997.089844;
        float r8926881 = r8926879 * r8926880;
        float r8926882 = -17.595703;
        float r8926883 = r8926859 * r8926882;
        float r8926884 = r8926859 * r8926883;
        float r8926885 = 0.225586;
        float r8926886 = r8926884 + r8926885;
        float r8926887 = r8926881 - r8926886;
        float r8926888 = r8926865 * r8926865;
        float r8926889 = 2029.790039;
        float r8926890 = r8926859 * r8926889;
        float r8926891 = r8926890 * r8926859;
        float r8926892 = r8926888 * r8926891;
        float r8926893 = r8926887 - r8926892;
        float r8926894 = r8926877 - r8926893;
        return r8926894;
}

double f_od(double x) {
        double r8926895 = x;
        double r8926896 = r8926895 * r8926895;
        double r8926897 = 660.194336;
        double r8926898 = r8926897 * r8926895;
        double r8926899 = r8926896 * r8926898;
        double r8926900 = 3;
        double r8926901 = pow(r8926895, r8926900);
        double r8926902 = pow(r8926901, r8926900);
        double r8926903 = r8926899 * r8926902;
        double r8926904 = 10;
        double r8926905 = pow(r8926895, r8926904);
        double r8926906 = -1894.470703;
        double r8926907 = r8926905 * r8926906;
        double r8926908 = 219.946289;
        double r8926909 = 4;
        double r8926910 = pow(r8926895, r8926909);
        double r8926911 = r8926908 * r8926910;
        double r8926912 = r8926907 + r8926911;
        double r8926913 = r8926903 + r8926912;
        double r8926914 = 6;
        double r8926915 = pow(r8926895, r8926914);
        double r8926916 = 997.089844;
        double r8926917 = r8926915 * r8926916;
        double r8926918 = -17.595703;
        double r8926919 = r8926895 * r8926918;
        double r8926920 = r8926895 * r8926919;
        double r8926921 = 0.225586;
        double r8926922 = r8926920 + r8926921;
        double r8926923 = r8926917 - r8926922;
        double r8926924 = r8926901 * r8926901;
        double r8926925 = 2029.790039;
        double r8926926 = r8926895 * r8926925;
        double r8926927 = r8926926 * r8926895;
        double r8926928 = r8926924 * r8926927;
        double r8926929 = r8926923 - r8926928;
        double r8926930 = r8926913 - r8926929;
        return r8926930;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8926931, r8926932, r8926933, r8926934, r8926935, r8926936, r8926937, r8926938, r8926939, r8926940, r8926941, r8926942, r8926943, r8926944, r8926945, r8926946, r8926947, r8926948, r8926949, r8926950, r8926951, r8926952, r8926953, r8926954, r8926955, r8926956, r8926957, r8926958, r8926959, r8926960, r8926961;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8926931, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r8926932, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r8926933);
        mpfr_init(r8926934);
        mpfr_init(r8926935);
        mpfr_init(r8926936);
        mpfr_init_set_str(r8926937, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r8926938);
        mpfr_init(r8926939);
        mpfr_init(r8926940);
        mpfr_init(r8926941);
        mpfr_init_set_str(r8926942, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r8926943);
        mpfr_init(r8926944);
        mpfr_init(r8926945);
        mpfr_init(r8926946);
        mpfr_init_set_str(r8926947, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r8926948);
        mpfr_init(r8926949);
        mpfr_init(r8926950);
        mpfr_init(r8926951);
        mpfr_init_set_str(r8926952, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r8926953);
        mpfr_init(r8926954);
        mpfr_init(r8926955);
        mpfr_init(r8926956);
        mpfr_init_set_str(r8926957, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r8926958);
        mpfr_init(r8926959);
        mpfr_init(r8926960);
        mpfr_init(r8926961);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8926933, x, MPFR_RNDN);
        mpfr_mul(r8926934, r8926933, r8926933, MPFR_RNDN);
        mpfr_mul(r8926935, r8926932, r8926934, MPFR_RNDN);
        mpfr_add(r8926936, r8926931, r8926935, MPFR_RNDN);
        ;
        mpfr_mul(r8926938, r8926934, r8926933, MPFR_RNDN);
        mpfr_mul(r8926939, r8926938, r8926933, MPFR_RNDN);
        mpfr_mul(r8926940, r8926937, r8926939, MPFR_RNDN);
        mpfr_add(r8926941, r8926936, r8926940, MPFR_RNDN);
        ;
        mpfr_mul(r8926943, r8926939, r8926933, MPFR_RNDN);
        mpfr_mul(r8926944, r8926943, r8926933, MPFR_RNDN);
        mpfr_mul(r8926945, r8926942, r8926944, MPFR_RNDN);
        mpfr_add(r8926946, r8926941, r8926945, MPFR_RNDN);
        ;
        mpfr_mul(r8926948, r8926944, r8926933, MPFR_RNDN);
        mpfr_mul(r8926949, r8926948, r8926933, MPFR_RNDN);
        mpfr_mul(r8926950, r8926947, r8926949, MPFR_RNDN);
        mpfr_add(r8926951, r8926946, r8926950, MPFR_RNDN);
        ;
        mpfr_mul(r8926953, r8926949, r8926933, MPFR_RNDN);
        mpfr_mul(r8926954, r8926953, r8926933, MPFR_RNDN);
        mpfr_mul(r8926955, r8926952, r8926954, MPFR_RNDN);
        mpfr_add(r8926956, r8926951, r8926955, MPFR_RNDN);
        ;
        mpfr_mul(r8926958, r8926954, r8926933, MPFR_RNDN);
        mpfr_mul(r8926959, r8926958, r8926933, MPFR_RNDN);
        mpfr_mul(r8926960, r8926957, r8926959, MPFR_RNDN);
        mpfr_add(r8926961, r8926956, r8926960, MPFR_RNDN);
        return mpfr_get_d(r8926961, MPFR_RNDN);
}

static mpfr_t r8926962, r8926963, r8926964, r8926965, r8926966, r8926967, r8926968, r8926969, r8926970, r8926971, r8926972, r8926973, r8926974, r8926975, r8926976, r8926977, r8926978, r8926979, r8926980, r8926981, r8926982, r8926983, r8926984, r8926985, r8926986, r8926987, r8926988, r8926989, r8926990, r8926991, r8926992, r8926993, r8926994, r8926995, r8926996, r8926997;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8926962);
        mpfr_init(r8926963);
        mpfr_init_set_str(r8926964, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r8926965);
        mpfr_init(r8926966);
        mpfr_init_set_str(r8926967, "3", 10, MPFR_RNDN);
        mpfr_init(r8926968);
        mpfr_init(r8926969);
        mpfr_init(r8926970);
        mpfr_init_set_str(r8926971, "10", 10, MPFR_RNDN);
        mpfr_init(r8926972);
        mpfr_init_set_str(r8926973, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r8926974);
        mpfr_init_set_str(r8926975, "219.946289", 10, MPFR_RNDN);
        mpfr_init_set_str(r8926976, "4", 10, MPFR_RNDN);
        mpfr_init(r8926977);
        mpfr_init(r8926978);
        mpfr_init(r8926979);
        mpfr_init(r8926980);
        mpfr_init_set_str(r8926981, "6", 10, MPFR_RNDN);
        mpfr_init(r8926982);
        mpfr_init_set_str(r8926983, "997.089844", 10, MPFR_RNDN);
        mpfr_init(r8926984);
        mpfr_init_set_str(r8926985, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r8926986);
        mpfr_init(r8926987);
        mpfr_init_set_str(r8926988, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r8926989);
        mpfr_init(r8926990);
        mpfr_init(r8926991);
        mpfr_init_set_str(r8926992, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r8926993);
        mpfr_init(r8926994);
        mpfr_init(r8926995);
        mpfr_init(r8926996);
        mpfr_init(r8926997);
}

double f_fm(double x) {
        mpfr_set_d(r8926962, x, MPFR_RNDN);
        mpfr_mul(r8926963, r8926962, r8926962, MPFR_RNDN);
        ;
        mpfr_mul(r8926965, r8926964, r8926962, MPFR_RNDN);
        mpfr_mul(r8926966, r8926963, r8926965, MPFR_RNDN);
        ;
        mpfr_pow(r8926968, r8926962, r8926967, MPFR_RNDN);
        mpfr_pow(r8926969, r8926968, r8926967, MPFR_RNDN);
        mpfr_mul(r8926970, r8926966, r8926969, MPFR_RNDN);
        ;
        mpfr_pow(r8926972, r8926962, r8926971, MPFR_RNDN);
        ;
        mpfr_mul(r8926974, r8926972, r8926973, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8926977, r8926962, r8926976, MPFR_RNDN);
        mpfr_mul(r8926978, r8926975, r8926977, MPFR_RNDN);
        mpfr_add(r8926979, r8926974, r8926978, MPFR_RNDN);
        mpfr_add(r8926980, r8926970, r8926979, MPFR_RNDN);
        ;
        mpfr_pow(r8926982, r8926962, r8926981, MPFR_RNDN);
        ;
        mpfr_mul(r8926984, r8926982, r8926983, MPFR_RNDN);
        ;
        mpfr_mul(r8926986, r8926962, r8926985, MPFR_RNDN);
        mpfr_mul(r8926987, r8926962, r8926986, MPFR_RNDN);
        ;
        mpfr_add(r8926989, r8926987, r8926988, MPFR_RNDN);
        mpfr_sub(r8926990, r8926984, r8926989, MPFR_RNDN);
        mpfr_mul(r8926991, r8926968, r8926968, MPFR_RNDN);
        ;
        mpfr_mul(r8926993, r8926962, r8926992, MPFR_RNDN);
        mpfr_mul(r8926994, r8926993, r8926962, MPFR_RNDN);
        mpfr_mul(r8926995, r8926991, r8926994, MPFR_RNDN);
        mpfr_sub(r8926996, r8926990, r8926995, MPFR_RNDN);
        mpfr_sub(r8926997, r8926980, r8926996, MPFR_RNDN);
        return mpfr_get_d(r8926997, MPFR_RNDN);
}

static mpfr_t r8926998, r8926999, r8927000, r8927001, r8927002, r8927003, r8927004, r8927005, r8927006, r8927007, r8927008, r8927009, r8927010, r8927011, r8927012, r8927013, r8927014, r8927015, r8927016, r8927017, r8927018, r8927019, r8927020, r8927021, r8927022, r8927023, r8927024, r8927025, r8927026, r8927027, r8927028, r8927029, r8927030, r8927031, r8927032, r8927033;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8926998);
        mpfr_init(r8926999);
        mpfr_init_set_str(r8927000, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r8927001);
        mpfr_init(r8927002);
        mpfr_init_set_str(r8927003, "3", 10, MPFR_RNDN);
        mpfr_init(r8927004);
        mpfr_init(r8927005);
        mpfr_init(r8927006);
        mpfr_init_set_str(r8927007, "10", 10, MPFR_RNDN);
        mpfr_init(r8927008);
        mpfr_init_set_str(r8927009, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r8927010);
        mpfr_init_set_str(r8927011, "219.946289", 10, MPFR_RNDN);
        mpfr_init_set_str(r8927012, "4", 10, MPFR_RNDN);
        mpfr_init(r8927013);
        mpfr_init(r8927014);
        mpfr_init(r8927015);
        mpfr_init(r8927016);
        mpfr_init_set_str(r8927017, "6", 10, MPFR_RNDN);
        mpfr_init(r8927018);
        mpfr_init_set_str(r8927019, "997.089844", 10, MPFR_RNDN);
        mpfr_init(r8927020);
        mpfr_init_set_str(r8927021, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r8927022);
        mpfr_init(r8927023);
        mpfr_init_set_str(r8927024, "0.225586", 10, MPFR_RNDN);
        mpfr_init(r8927025);
        mpfr_init(r8927026);
        mpfr_init(r8927027);
        mpfr_init_set_str(r8927028, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r8927029);
        mpfr_init(r8927030);
        mpfr_init(r8927031);
        mpfr_init(r8927032);
        mpfr_init(r8927033);
}

double f_dm(double x) {
        mpfr_set_d(r8926998, x, MPFR_RNDN);
        mpfr_mul(r8926999, r8926998, r8926998, MPFR_RNDN);
        ;
        mpfr_mul(r8927001, r8927000, r8926998, MPFR_RNDN);
        mpfr_mul(r8927002, r8926999, r8927001, MPFR_RNDN);
        ;
        mpfr_pow(r8927004, r8926998, r8927003, MPFR_RNDN);
        mpfr_pow(r8927005, r8927004, r8927003, MPFR_RNDN);
        mpfr_mul(r8927006, r8927002, r8927005, MPFR_RNDN);
        ;
        mpfr_pow(r8927008, r8926998, r8927007, MPFR_RNDN);
        ;
        mpfr_mul(r8927010, r8927008, r8927009, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8927013, r8926998, r8927012, MPFR_RNDN);
        mpfr_mul(r8927014, r8927011, r8927013, MPFR_RNDN);
        mpfr_add(r8927015, r8927010, r8927014, MPFR_RNDN);
        mpfr_add(r8927016, r8927006, r8927015, MPFR_RNDN);
        ;
        mpfr_pow(r8927018, r8926998, r8927017, MPFR_RNDN);
        ;
        mpfr_mul(r8927020, r8927018, r8927019, MPFR_RNDN);
        ;
        mpfr_mul(r8927022, r8926998, r8927021, MPFR_RNDN);
        mpfr_mul(r8927023, r8926998, r8927022, MPFR_RNDN);
        ;
        mpfr_add(r8927025, r8927023, r8927024, MPFR_RNDN);
        mpfr_sub(r8927026, r8927020, r8927025, MPFR_RNDN);
        mpfr_mul(r8927027, r8927004, r8927004, MPFR_RNDN);
        ;
        mpfr_mul(r8927029, r8926998, r8927028, MPFR_RNDN);
        mpfr_mul(r8927030, r8927029, r8926998, MPFR_RNDN);
        mpfr_mul(r8927031, r8927027, r8927030, MPFR_RNDN);
        mpfr_sub(r8927032, r8927026, r8927031, MPFR_RNDN);
        mpfr_sub(r8927033, r8927016, r8927032, MPFR_RNDN);
        return mpfr_get_d(r8927033, MPFR_RNDN);
}

