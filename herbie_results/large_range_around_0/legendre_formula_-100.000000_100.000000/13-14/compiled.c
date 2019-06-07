#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6180798 = -0.209473;
        float r6180799 = 21.994629;
        float r6180800 = x;
        float r6180801 = r6180800 * r6180800;
        float r6180802 = r6180799 * r6180801;
        float r6180803 = r6180798 + r6180802;
        float r6180804 = -373.908691;
        float r6180805 = r6180801 * r6180800;
        float r6180806 = r6180805 * r6180800;
        float r6180807 = r6180804 * r6180806;
        float r6180808 = r6180803 + r6180807;
        float r6180809 = 2368.088379;
        float r6180810 = r6180806 * r6180800;
        float r6180811 = r6180810 * r6180800;
        float r6180812 = r6180809 * r6180811;
        float r6180813 = r6180808 + r6180812;
        float r6180814 = -7104.265137;
        float r6180815 = r6180811 * r6180800;
        float r6180816 = r6180815 * r6180800;
        float r6180817 = r6180814 * r6180816;
        float r6180818 = r6180813 + r6180817;
        float r6180819 = 10893.206543;
        float r6180820 = r6180816 * r6180800;
        float r6180821 = r6180820 * r6180800;
        float r6180822 = r6180819 * r6180821;
        float r6180823 = r6180818 + r6180822;
        float r6180824 = -8252.429199;
        float r6180825 = r6180821 * r6180800;
        float r6180826 = r6180825 * r6180800;
        float r6180827 = r6180824 * r6180826;
        float r6180828 = r6180823 + r6180827;
        float r6180829 = 2448.522949;
        float r6180830 = r6180826 * r6180800;
        float r6180831 = r6180830 * r6180800;
        float r6180832 = r6180829 * r6180831;
        float r6180833 = r6180828 + r6180832;
        return r6180833;
}

double f_id(double x) {
        double r6180834 = -0.209473;
        double r6180835 = 21.994629;
        double r6180836 = x;
        double r6180837 = r6180836 * r6180836;
        double r6180838 = r6180835 * r6180837;
        double r6180839 = r6180834 + r6180838;
        double r6180840 = -373.908691;
        double r6180841 = r6180837 * r6180836;
        double r6180842 = r6180841 * r6180836;
        double r6180843 = r6180840 * r6180842;
        double r6180844 = r6180839 + r6180843;
        double r6180845 = 2368.088379;
        double r6180846 = r6180842 * r6180836;
        double r6180847 = r6180846 * r6180836;
        double r6180848 = r6180845 * r6180847;
        double r6180849 = r6180844 + r6180848;
        double r6180850 = -7104.265137;
        double r6180851 = r6180847 * r6180836;
        double r6180852 = r6180851 * r6180836;
        double r6180853 = r6180850 * r6180852;
        double r6180854 = r6180849 + r6180853;
        double r6180855 = 10893.206543;
        double r6180856 = r6180852 * r6180836;
        double r6180857 = r6180856 * r6180836;
        double r6180858 = r6180855 * r6180857;
        double r6180859 = r6180854 + r6180858;
        double r6180860 = -8252.429199;
        double r6180861 = r6180857 * r6180836;
        double r6180862 = r6180861 * r6180836;
        double r6180863 = r6180860 * r6180862;
        double r6180864 = r6180859 + r6180863;
        double r6180865 = 2448.522949;
        double r6180866 = r6180862 * r6180836;
        double r6180867 = r6180866 * r6180836;
        double r6180868 = r6180865 * r6180867;
        double r6180869 = r6180864 + r6180868;
        return r6180869;
}


double f_of(float x) {
        float r6180870 = -0.209473;
        float r6180871 = x;
        float r6180872 = r6180871 * r6180871;
        float r6180873 = 21.994629;
        float r6180874 = r6180872 * r6180873;
        float r6180875 = r6180870 + r6180874;
        float r6180876 = 2368.088379;
        float r6180877 = 6;
        float r6180878 = pow(r6180871, r6180877);
        float r6180879 = r6180876 * r6180878;
        float r6180880 = r6180875 + r6180879;
        float r6180881 = -8252.429199;
        float r6180882 = 2448.522949;
        float r6180883 = r6180882 * r6180871;
        float r6180884 = r6180871 * r6180883;
        float r6180885 = r6180881 + r6180884;
        float r6180886 = 3;
        float r6180887 = pow(r6180871, r6180886);
        float r6180888 = 1;
        float r6180889 = r6180886 + r6180888;
        float r6180890 = pow(r6180887, r6180889);
        float r6180891 = r6180885 * r6180890;
        float r6180892 = r6180880 + r6180891;
        float r6180893 = 4;
        float r6180894 = pow(r6180871, r6180893);
        float r6180895 = 373.908691;
        float r6180896 = r6180894 * r6180895;
        float r6180897 = pow(r6180872, r6180889);
        float r6180898 = -7104.265137;
        float r6180899 = 10893.206543;
        float r6180900 = r6180899 * r6180872;
        float r6180901 = r6180898 + r6180900;
        float r6180902 = r6180897 * r6180901;
        float r6180903 = r6180896 - r6180902;
        float r6180904 = r6180892 - r6180903;
        return r6180904;
}

double f_od(double x) {
        double r6180905 = -0.209473;
        double r6180906 = x;
        double r6180907 = r6180906 * r6180906;
        double r6180908 = 21.994629;
        double r6180909 = r6180907 * r6180908;
        double r6180910 = r6180905 + r6180909;
        double r6180911 = 2368.088379;
        double r6180912 = 6;
        double r6180913 = pow(r6180906, r6180912);
        double r6180914 = r6180911 * r6180913;
        double r6180915 = r6180910 + r6180914;
        double r6180916 = -8252.429199;
        double r6180917 = 2448.522949;
        double r6180918 = r6180917 * r6180906;
        double r6180919 = r6180906 * r6180918;
        double r6180920 = r6180916 + r6180919;
        double r6180921 = 3;
        double r6180922 = pow(r6180906, r6180921);
        double r6180923 = 1;
        double r6180924 = r6180921 + r6180923;
        double r6180925 = pow(r6180922, r6180924);
        double r6180926 = r6180920 * r6180925;
        double r6180927 = r6180915 + r6180926;
        double r6180928 = 4;
        double r6180929 = pow(r6180906, r6180928);
        double r6180930 = 373.908691;
        double r6180931 = r6180929 * r6180930;
        double r6180932 = pow(r6180907, r6180924);
        double r6180933 = -7104.265137;
        double r6180934 = 10893.206543;
        double r6180935 = r6180934 * r6180907;
        double r6180936 = r6180933 + r6180935;
        double r6180937 = r6180932 * r6180936;
        double r6180938 = r6180931 - r6180937;
        double r6180939 = r6180927 - r6180938;
        return r6180939;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6180940, r6180941, r6180942, r6180943, r6180944, r6180945, r6180946, r6180947, r6180948, r6180949, r6180950, r6180951, r6180952, r6180953, r6180954, r6180955, r6180956, r6180957, r6180958, r6180959, r6180960, r6180961, r6180962, r6180963, r6180964, r6180965, r6180966, r6180967, r6180968, r6180969, r6180970, r6180971, r6180972, r6180973, r6180974, r6180975;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6180940, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6180941, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6180942);
        mpfr_init(r6180943);
        mpfr_init(r6180944);
        mpfr_init(r6180945);
        mpfr_init_set_str(r6180946, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6180947);
        mpfr_init(r6180948);
        mpfr_init(r6180949);
        mpfr_init(r6180950);
        mpfr_init_set_str(r6180951, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6180952);
        mpfr_init(r6180953);
        mpfr_init(r6180954);
        mpfr_init(r6180955);
        mpfr_init_set_str(r6180956, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6180957);
        mpfr_init(r6180958);
        mpfr_init(r6180959);
        mpfr_init(r6180960);
        mpfr_init_set_str(r6180961, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6180962);
        mpfr_init(r6180963);
        mpfr_init(r6180964);
        mpfr_init(r6180965);
        mpfr_init_set_str(r6180966, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6180967);
        mpfr_init(r6180968);
        mpfr_init(r6180969);
        mpfr_init(r6180970);
        mpfr_init_set_str(r6180971, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6180972);
        mpfr_init(r6180973);
        mpfr_init(r6180974);
        mpfr_init(r6180975);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6180942, x, MPFR_RNDN);
        mpfr_mul(r6180943, r6180942, r6180942, MPFR_RNDN);
        mpfr_mul(r6180944, r6180941, r6180943, MPFR_RNDN);
        mpfr_add(r6180945, r6180940, r6180944, MPFR_RNDN);
        ;
        mpfr_mul(r6180947, r6180943, r6180942, MPFR_RNDN);
        mpfr_mul(r6180948, r6180947, r6180942, MPFR_RNDN);
        mpfr_mul(r6180949, r6180946, r6180948, MPFR_RNDN);
        mpfr_add(r6180950, r6180945, r6180949, MPFR_RNDN);
        ;
        mpfr_mul(r6180952, r6180948, r6180942, MPFR_RNDN);
        mpfr_mul(r6180953, r6180952, r6180942, MPFR_RNDN);
        mpfr_mul(r6180954, r6180951, r6180953, MPFR_RNDN);
        mpfr_add(r6180955, r6180950, r6180954, MPFR_RNDN);
        ;
        mpfr_mul(r6180957, r6180953, r6180942, MPFR_RNDN);
        mpfr_mul(r6180958, r6180957, r6180942, MPFR_RNDN);
        mpfr_mul(r6180959, r6180956, r6180958, MPFR_RNDN);
        mpfr_add(r6180960, r6180955, r6180959, MPFR_RNDN);
        ;
        mpfr_mul(r6180962, r6180958, r6180942, MPFR_RNDN);
        mpfr_mul(r6180963, r6180962, r6180942, MPFR_RNDN);
        mpfr_mul(r6180964, r6180961, r6180963, MPFR_RNDN);
        mpfr_add(r6180965, r6180960, r6180964, MPFR_RNDN);
        ;
        mpfr_mul(r6180967, r6180963, r6180942, MPFR_RNDN);
        mpfr_mul(r6180968, r6180967, r6180942, MPFR_RNDN);
        mpfr_mul(r6180969, r6180966, r6180968, MPFR_RNDN);
        mpfr_add(r6180970, r6180965, r6180969, MPFR_RNDN);
        ;
        mpfr_mul(r6180972, r6180968, r6180942, MPFR_RNDN);
        mpfr_mul(r6180973, r6180972, r6180942, MPFR_RNDN);
        mpfr_mul(r6180974, r6180971, r6180973, MPFR_RNDN);
        mpfr_add(r6180975, r6180970, r6180974, MPFR_RNDN);
        return mpfr_get_d(r6180975, MPFR_RNDN);
}

static mpfr_t r6180976, r6180977, r6180978, r6180979, r6180980, r6180981, r6180982, r6180983, r6180984, r6180985, r6180986, r6180987, r6180988, r6180989, r6180990, r6180991, r6180992, r6180993, r6180994, r6180995, r6180996, r6180997, r6180998, r6180999, r6181000, r6181001, r6181002, r6181003, r6181004, r6181005, r6181006, r6181007, r6181008, r6181009, r6181010;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6180976, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r6180977);
        mpfr_init(r6180978);
        mpfr_init_set_str(r6180979, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6180980);
        mpfr_init(r6180981);
        mpfr_init_set_str(r6180982, "2368.088379", 10, MPFR_RNDN);
        mpfr_init_set_str(r6180983, "6", 10, MPFR_RNDN);
        mpfr_init(r6180984);
        mpfr_init(r6180985);
        mpfr_init(r6180986);
        mpfr_init_set_str(r6180987, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init_set_str(r6180988, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6180989);
        mpfr_init(r6180990);
        mpfr_init(r6180991);
        mpfr_init_set_str(r6180992, "3", 10, MPFR_RNDN);
        mpfr_init(r6180993);
        mpfr_init_set_str(r6180994, "1", 10, MPFR_RNDN);
        mpfr_init(r6180995);
        mpfr_init(r6180996);
        mpfr_init(r6180997);
        mpfr_init(r6180998);
        mpfr_init_set_str(r6180999, "4", 10, MPFR_RNDN);
        mpfr_init(r6181000);
        mpfr_init_set_str(r6181001, "373.908691", 10, MPFR_RNDN);
        mpfr_init(r6181002);
        mpfr_init(r6181003);
        mpfr_init_set_str(r6181004, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181005, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6181006);
        mpfr_init(r6181007);
        mpfr_init(r6181008);
        mpfr_init(r6181009);
        mpfr_init(r6181010);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6180977, x, MPFR_RNDN);
        mpfr_mul(r6180978, r6180977, r6180977, MPFR_RNDN);
        ;
        mpfr_mul(r6180980, r6180978, r6180979, MPFR_RNDN);
        mpfr_add(r6180981, r6180976, r6180980, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6180984, r6180977, r6180983, MPFR_RNDN);
        mpfr_mul(r6180985, r6180982, r6180984, MPFR_RNDN);
        mpfr_add(r6180986, r6180981, r6180985, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6180989, r6180988, r6180977, MPFR_RNDN);
        mpfr_mul(r6180990, r6180977, r6180989, MPFR_RNDN);
        mpfr_add(r6180991, r6180987, r6180990, MPFR_RNDN);
        ;
        mpfr_pow(r6180993, r6180977, r6180992, MPFR_RNDN);
        ;
        mpfr_add(r6180995, r6180992, r6180994, MPFR_RNDN);
        mpfr_pow(r6180996, r6180993, r6180995, MPFR_RNDN);
        mpfr_mul(r6180997, r6180991, r6180996, MPFR_RNDN);
        mpfr_add(r6180998, r6180986, r6180997, MPFR_RNDN);
        ;
        mpfr_pow(r6181000, r6180977, r6180999, MPFR_RNDN);
        ;
        mpfr_mul(r6181002, r6181000, r6181001, MPFR_RNDN);
        mpfr_pow(r6181003, r6180978, r6180995, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181006, r6181005, r6180978, MPFR_RNDN);
        mpfr_add(r6181007, r6181004, r6181006, MPFR_RNDN);
        mpfr_mul(r6181008, r6181003, r6181007, MPFR_RNDN);
        mpfr_sub(r6181009, r6181002, r6181008, MPFR_RNDN);
        mpfr_sub(r6181010, r6180998, r6181009, MPFR_RNDN);
        return mpfr_get_d(r6181010, MPFR_RNDN);
}

static mpfr_t r6181011, r6181012, r6181013, r6181014, r6181015, r6181016, r6181017, r6181018, r6181019, r6181020, r6181021, r6181022, r6181023, r6181024, r6181025, r6181026, r6181027, r6181028, r6181029, r6181030, r6181031, r6181032, r6181033, r6181034, r6181035, r6181036, r6181037, r6181038, r6181039, r6181040, r6181041, r6181042, r6181043, r6181044, r6181045;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6181011, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r6181012);
        mpfr_init(r6181013);
        mpfr_init_set_str(r6181014, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6181015);
        mpfr_init(r6181016);
        mpfr_init_set_str(r6181017, "2368.088379", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181018, "6", 10, MPFR_RNDN);
        mpfr_init(r6181019);
        mpfr_init(r6181020);
        mpfr_init(r6181021);
        mpfr_init_set_str(r6181022, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181023, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6181024);
        mpfr_init(r6181025);
        mpfr_init(r6181026);
        mpfr_init_set_str(r6181027, "3", 10, MPFR_RNDN);
        mpfr_init(r6181028);
        mpfr_init_set_str(r6181029, "1", 10, MPFR_RNDN);
        mpfr_init(r6181030);
        mpfr_init(r6181031);
        mpfr_init(r6181032);
        mpfr_init(r6181033);
        mpfr_init_set_str(r6181034, "4", 10, MPFR_RNDN);
        mpfr_init(r6181035);
        mpfr_init_set_str(r6181036, "373.908691", 10, MPFR_RNDN);
        mpfr_init(r6181037);
        mpfr_init(r6181038);
        mpfr_init_set_str(r6181039, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r6181040, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6181041);
        mpfr_init(r6181042);
        mpfr_init(r6181043);
        mpfr_init(r6181044);
        mpfr_init(r6181045);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6181012, x, MPFR_RNDN);
        mpfr_mul(r6181013, r6181012, r6181012, MPFR_RNDN);
        ;
        mpfr_mul(r6181015, r6181013, r6181014, MPFR_RNDN);
        mpfr_add(r6181016, r6181011, r6181015, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6181019, r6181012, r6181018, MPFR_RNDN);
        mpfr_mul(r6181020, r6181017, r6181019, MPFR_RNDN);
        mpfr_add(r6181021, r6181016, r6181020, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181024, r6181023, r6181012, MPFR_RNDN);
        mpfr_mul(r6181025, r6181012, r6181024, MPFR_RNDN);
        mpfr_add(r6181026, r6181022, r6181025, MPFR_RNDN);
        ;
        mpfr_pow(r6181028, r6181012, r6181027, MPFR_RNDN);
        ;
        mpfr_add(r6181030, r6181027, r6181029, MPFR_RNDN);
        mpfr_pow(r6181031, r6181028, r6181030, MPFR_RNDN);
        mpfr_mul(r6181032, r6181026, r6181031, MPFR_RNDN);
        mpfr_add(r6181033, r6181021, r6181032, MPFR_RNDN);
        ;
        mpfr_pow(r6181035, r6181012, r6181034, MPFR_RNDN);
        ;
        mpfr_mul(r6181037, r6181035, r6181036, MPFR_RNDN);
        mpfr_pow(r6181038, r6181013, r6181030, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6181041, r6181040, r6181013, MPFR_RNDN);
        mpfr_add(r6181042, r6181039, r6181041, MPFR_RNDN);
        mpfr_mul(r6181043, r6181038, r6181042, MPFR_RNDN);
        mpfr_sub(r6181044, r6181037, r6181043, MPFR_RNDN);
        mpfr_sub(r6181045, r6181033, r6181044, MPFR_RNDN);
        return mpfr_get_d(r6181045, MPFR_RNDN);
}

