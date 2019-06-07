#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r6327785 = 518918400.0;
        float r6327786 = -8302694400.0;
        float r6327787 = x;
        float r6327788 = r6327787 * r6327787;
        float r6327789 = r6327786 * r6327788;
        float r6327790 = r6327785 + r6327789;
        float r6327791 = 19372953600.0;
        float r6327792 = r6327788 * r6327787;
        float r6327793 = r6327792 * r6327787;
        float r6327794 = r6327791 * r6327793;
        float r6327795 = r6327790 + r6327794;
        float r6327796 = -15498362880.0;
        float r6327797 = r6327793 * r6327787;
        float r6327798 = r6327797 * r6327787;
        float r6327799 = r6327796 * r6327798;
        float r6327800 = r6327795 + r6327799;
        float r6327801 = 5535129600.0;
        float r6327802 = r6327798 * r6327787;
        float r6327803 = r6327802 * r6327787;
        float r6327804 = r6327801 * r6327803;
        float r6327805 = r6327800 + r6327804;
        float r6327806 = -984023040.0;
        float r6327807 = r6327803 * r6327787;
        float r6327808 = r6327807 * r6327787;
        float r6327809 = r6327806 * r6327808;
        float r6327810 = r6327805 + r6327809;
        float r6327811 = 89456640.0;
        float r6327812 = r6327808 * r6327787;
        float r6327813 = r6327812 * r6327787;
        float r6327814 = r6327811 * r6327813;
        float r6327815 = r6327810 + r6327814;
        float r6327816 = -3932160.0;
        float r6327817 = r6327813 * r6327787;
        float r6327818 = r6327817 * r6327787;
        float r6327819 = r6327816 * r6327818;
        float r6327820 = r6327815 + r6327819;
        float r6327821 = 65536.0;
        float r6327822 = r6327818 * r6327787;
        float r6327823 = r6327822 * r6327787;
        float r6327824 = r6327821 * r6327823;
        float r6327825 = r6327820 + r6327824;
        return r6327825;
}

double f_id(double x) {
        double r6327826 = 518918400.0;
        double r6327827 = -8302694400.0;
        double r6327828 = x;
        double r6327829 = r6327828 * r6327828;
        double r6327830 = r6327827 * r6327829;
        double r6327831 = r6327826 + r6327830;
        double r6327832 = 19372953600.0;
        double r6327833 = r6327829 * r6327828;
        double r6327834 = r6327833 * r6327828;
        double r6327835 = r6327832 * r6327834;
        double r6327836 = r6327831 + r6327835;
        double r6327837 = -15498362880.0;
        double r6327838 = r6327834 * r6327828;
        double r6327839 = r6327838 * r6327828;
        double r6327840 = r6327837 * r6327839;
        double r6327841 = r6327836 + r6327840;
        double r6327842 = 5535129600.0;
        double r6327843 = r6327839 * r6327828;
        double r6327844 = r6327843 * r6327828;
        double r6327845 = r6327842 * r6327844;
        double r6327846 = r6327841 + r6327845;
        double r6327847 = -984023040.0;
        double r6327848 = r6327844 * r6327828;
        double r6327849 = r6327848 * r6327828;
        double r6327850 = r6327847 * r6327849;
        double r6327851 = r6327846 + r6327850;
        double r6327852 = 89456640.0;
        double r6327853 = r6327849 * r6327828;
        double r6327854 = r6327853 * r6327828;
        double r6327855 = r6327852 * r6327854;
        double r6327856 = r6327851 + r6327855;
        double r6327857 = -3932160.0;
        double r6327858 = r6327854 * r6327828;
        double r6327859 = r6327858 * r6327828;
        double r6327860 = r6327857 * r6327859;
        double r6327861 = r6327856 + r6327860;
        double r6327862 = 65536.0;
        double r6327863 = r6327859 * r6327828;
        double r6327864 = r6327863 * r6327828;
        double r6327865 = r6327862 * r6327864;
        double r6327866 = r6327861 + r6327865;
        return r6327866;
}


double f_of(float x) {
        float r6327867 = x;
        float r6327868 = r6327867 * r6327867;
        float r6327869 = r6327868 * r6327868;
        float r6327870 = 3;
        float r6327871 = pow(r6327868, r6327870);
        float r6327872 = r6327869 * r6327871;
        float r6327873 = r6327869 * r6327872;
        float r6327874 = -3932160.0;
        float r6327875 = 65536.0;
        float r6327876 = r6327867 * r6327875;
        float r6327877 = r6327867 * r6327876;
        float r6327878 = r6327874 + r6327877;
        float r6327879 = r6327873 * r6327878;
        float r6327880 = 89456640.0;
        float r6327881 = r6327868 * r6327880;
        float r6327882 = -984023040.0;
        float r6327883 = r6327881 + r6327882;
        float r6327884 = r6327872 * r6327883;
        float r6327885 = 5535129600.0;
        float r6327886 = r6327885 * r6327867;
        float r6327887 = r6327886 * r6327867;
        float r6327888 = r6327887 * r6327871;
        float r6327889 = r6327884 + r6327888;
        float r6327890 = 518918400.0;
        float r6327891 = -8302694400.0;
        float r6327892 = r6327891 * r6327868;
        float r6327893 = r6327890 + r6327892;
        float r6327894 = -15498362880.0;
        float r6327895 = r6327868 * r6327894;
        float r6327896 = 19372953600.0;
        float r6327897 = r6327895 + r6327896;
        float r6327898 = r6327869 * r6327897;
        float r6327899 = r6327893 + r6327898;
        float r6327900 = r6327889 + r6327899;
        float r6327901 = r6327879 + r6327900;
        return r6327901;
}

double f_od(double x) {
        double r6327902 = x;
        double r6327903 = r6327902 * r6327902;
        double r6327904 = r6327903 * r6327903;
        double r6327905 = 3;
        double r6327906 = pow(r6327903, r6327905);
        double r6327907 = r6327904 * r6327906;
        double r6327908 = r6327904 * r6327907;
        double r6327909 = -3932160.0;
        double r6327910 = 65536.0;
        double r6327911 = r6327902 * r6327910;
        double r6327912 = r6327902 * r6327911;
        double r6327913 = r6327909 + r6327912;
        double r6327914 = r6327908 * r6327913;
        double r6327915 = 89456640.0;
        double r6327916 = r6327903 * r6327915;
        double r6327917 = -984023040.0;
        double r6327918 = r6327916 + r6327917;
        double r6327919 = r6327907 * r6327918;
        double r6327920 = 5535129600.0;
        double r6327921 = r6327920 * r6327902;
        double r6327922 = r6327921 * r6327902;
        double r6327923 = r6327922 * r6327906;
        double r6327924 = r6327919 + r6327923;
        double r6327925 = 518918400.0;
        double r6327926 = -8302694400.0;
        double r6327927 = r6327926 * r6327903;
        double r6327928 = r6327925 + r6327927;
        double r6327929 = -15498362880.0;
        double r6327930 = r6327903 * r6327929;
        double r6327931 = 19372953600.0;
        double r6327932 = r6327930 + r6327931;
        double r6327933 = r6327904 * r6327932;
        double r6327934 = r6327928 + r6327933;
        double r6327935 = r6327924 + r6327934;
        double r6327936 = r6327914 + r6327935;
        return r6327936;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6327937, r6327938, r6327939, r6327940, r6327941, r6327942, r6327943, r6327944, r6327945, r6327946, r6327947, r6327948, r6327949, r6327950, r6327951, r6327952, r6327953, r6327954, r6327955, r6327956, r6327957, r6327958, r6327959, r6327960, r6327961, r6327962, r6327963, r6327964, r6327965, r6327966, r6327967, r6327968, r6327969, r6327970, r6327971, r6327972, r6327973, r6327974, r6327975, r6327976, r6327977;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6327937, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327938, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r6327939);
        mpfr_init(r6327940);
        mpfr_init(r6327941);
        mpfr_init(r6327942);
        mpfr_init_set_str(r6327943, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r6327944);
        mpfr_init(r6327945);
        mpfr_init(r6327946);
        mpfr_init(r6327947);
        mpfr_init_set_str(r6327948, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r6327949);
        mpfr_init(r6327950);
        mpfr_init(r6327951);
        mpfr_init(r6327952);
        mpfr_init_set_str(r6327953, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r6327954);
        mpfr_init(r6327955);
        mpfr_init(r6327956);
        mpfr_init(r6327957);
        mpfr_init_set_str(r6327958, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r6327959);
        mpfr_init(r6327960);
        mpfr_init(r6327961);
        mpfr_init(r6327962);
        mpfr_init_set_str(r6327963, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r6327964);
        mpfr_init(r6327965);
        mpfr_init(r6327966);
        mpfr_init(r6327967);
        mpfr_init_set_str(r6327968, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init(r6327969);
        mpfr_init(r6327970);
        mpfr_init(r6327971);
        mpfr_init(r6327972);
        mpfr_init_set_str(r6327973, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r6327974);
        mpfr_init(r6327975);
        mpfr_init(r6327976);
        mpfr_init(r6327977);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6327939, x, MPFR_RNDN);
        mpfr_mul(r6327940, r6327939, r6327939, MPFR_RNDN);
        mpfr_mul(r6327941, r6327938, r6327940, MPFR_RNDN);
        mpfr_add(r6327942, r6327937, r6327941, MPFR_RNDN);
        ;
        mpfr_mul(r6327944, r6327940, r6327939, MPFR_RNDN);
        mpfr_mul(r6327945, r6327944, r6327939, MPFR_RNDN);
        mpfr_mul(r6327946, r6327943, r6327945, MPFR_RNDN);
        mpfr_add(r6327947, r6327942, r6327946, MPFR_RNDN);
        ;
        mpfr_mul(r6327949, r6327945, r6327939, MPFR_RNDN);
        mpfr_mul(r6327950, r6327949, r6327939, MPFR_RNDN);
        mpfr_mul(r6327951, r6327948, r6327950, MPFR_RNDN);
        mpfr_add(r6327952, r6327947, r6327951, MPFR_RNDN);
        ;
        mpfr_mul(r6327954, r6327950, r6327939, MPFR_RNDN);
        mpfr_mul(r6327955, r6327954, r6327939, MPFR_RNDN);
        mpfr_mul(r6327956, r6327953, r6327955, MPFR_RNDN);
        mpfr_add(r6327957, r6327952, r6327956, MPFR_RNDN);
        ;
        mpfr_mul(r6327959, r6327955, r6327939, MPFR_RNDN);
        mpfr_mul(r6327960, r6327959, r6327939, MPFR_RNDN);
        mpfr_mul(r6327961, r6327958, r6327960, MPFR_RNDN);
        mpfr_add(r6327962, r6327957, r6327961, MPFR_RNDN);
        ;
        mpfr_mul(r6327964, r6327960, r6327939, MPFR_RNDN);
        mpfr_mul(r6327965, r6327964, r6327939, MPFR_RNDN);
        mpfr_mul(r6327966, r6327963, r6327965, MPFR_RNDN);
        mpfr_add(r6327967, r6327962, r6327966, MPFR_RNDN);
        ;
        mpfr_mul(r6327969, r6327965, r6327939, MPFR_RNDN);
        mpfr_mul(r6327970, r6327969, r6327939, MPFR_RNDN);
        mpfr_mul(r6327971, r6327968, r6327970, MPFR_RNDN);
        mpfr_add(r6327972, r6327967, r6327971, MPFR_RNDN);
        ;
        mpfr_mul(r6327974, r6327970, r6327939, MPFR_RNDN);
        mpfr_mul(r6327975, r6327974, r6327939, MPFR_RNDN);
        mpfr_mul(r6327976, r6327973, r6327975, MPFR_RNDN);
        mpfr_add(r6327977, r6327972, r6327976, MPFR_RNDN);
        return mpfr_get_d(r6327977, MPFR_RNDN);
}

static mpfr_t r6327978, r6327979, r6327980, r6327981, r6327982, r6327983, r6327984, r6327985, r6327986, r6327987, r6327988, r6327989, r6327990, r6327991, r6327992, r6327993, r6327994, r6327995, r6327996, r6327997, r6327998, r6327999, r6328000, r6328001, r6328002, r6328003, r6328004, r6328005, r6328006, r6328007, r6328008, r6328009, r6328010, r6328011, r6328012;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6327978);
        mpfr_init(r6327979);
        mpfr_init(r6327980);
        mpfr_init_set_str(r6327981, "3", 10, MPFR_RNDN);
        mpfr_init(r6327982);
        mpfr_init(r6327983);
        mpfr_init(r6327984);
        mpfr_init_set_str(r6327985, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6327986, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r6327987);
        mpfr_init(r6327988);
        mpfr_init(r6327989);
        mpfr_init(r6327990);
        mpfr_init_set_str(r6327991, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r6327992);
        mpfr_init_set_str(r6327993, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r6327994);
        mpfr_init(r6327995);
        mpfr_init_set_str(r6327996, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r6327997);
        mpfr_init(r6327998);
        mpfr_init(r6327999);
        mpfr_init(r6328000);
        mpfr_init_set_str(r6328001, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328002, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r6328003);
        mpfr_init(r6328004);
        mpfr_init_set_str(r6328005, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r6328006);
        mpfr_init_set_str(r6328007, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r6328008);
        mpfr_init(r6328009);
        mpfr_init(r6328010);
        mpfr_init(r6328011);
        mpfr_init(r6328012);
}

double f_fm(double x) {
        mpfr_set_d(r6327978, x, MPFR_RNDN);
        mpfr_mul(r6327979, r6327978, r6327978, MPFR_RNDN);
        mpfr_mul(r6327980, r6327979, r6327979, MPFR_RNDN);
        ;
        mpfr_pow(r6327982, r6327979, r6327981, MPFR_RNDN);
        mpfr_mul(r6327983, r6327980, r6327982, MPFR_RNDN);
        mpfr_mul(r6327984, r6327980, r6327983, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6327987, r6327978, r6327986, MPFR_RNDN);
        mpfr_mul(r6327988, r6327978, r6327987, MPFR_RNDN);
        mpfr_add(r6327989, r6327985, r6327988, MPFR_RNDN);
        mpfr_mul(r6327990, r6327984, r6327989, MPFR_RNDN);
        ;
        mpfr_mul(r6327992, r6327979, r6327991, MPFR_RNDN);
        ;
        mpfr_add(r6327994, r6327992, r6327993, MPFR_RNDN);
        mpfr_mul(r6327995, r6327983, r6327994, MPFR_RNDN);
        ;
        mpfr_mul(r6327997, r6327996, r6327978, MPFR_RNDN);
        mpfr_mul(r6327998, r6327997, r6327978, MPFR_RNDN);
        mpfr_mul(r6327999, r6327998, r6327982, MPFR_RNDN);
        mpfr_add(r6328000, r6327995, r6327999, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328003, r6328002, r6327979, MPFR_RNDN);
        mpfr_add(r6328004, r6328001, r6328003, MPFR_RNDN);
        ;
        mpfr_mul(r6328006, r6327979, r6328005, MPFR_RNDN);
        ;
        mpfr_add(r6328008, r6328006, r6328007, MPFR_RNDN);
        mpfr_mul(r6328009, r6327980, r6328008, MPFR_RNDN);
        mpfr_add(r6328010, r6328004, r6328009, MPFR_RNDN);
        mpfr_add(r6328011, r6328000, r6328010, MPFR_RNDN);
        mpfr_add(r6328012, r6327990, r6328011, MPFR_RNDN);
        return mpfr_get_d(r6328012, MPFR_RNDN);
}

static mpfr_t r6328013, r6328014, r6328015, r6328016, r6328017, r6328018, r6328019, r6328020, r6328021, r6328022, r6328023, r6328024, r6328025, r6328026, r6328027, r6328028, r6328029, r6328030, r6328031, r6328032, r6328033, r6328034, r6328035, r6328036, r6328037, r6328038, r6328039, r6328040, r6328041, r6328042, r6328043, r6328044, r6328045, r6328046, r6328047;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6328013);
        mpfr_init(r6328014);
        mpfr_init(r6328015);
        mpfr_init_set_str(r6328016, "3", 10, MPFR_RNDN);
        mpfr_init(r6328017);
        mpfr_init(r6328018);
        mpfr_init(r6328019);
        mpfr_init_set_str(r6328020, "-3932160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328021, "65536.0", 10, MPFR_RNDN);
        mpfr_init(r6328022);
        mpfr_init(r6328023);
        mpfr_init(r6328024);
        mpfr_init(r6328025);
        mpfr_init_set_str(r6328026, "89456640.0", 10, MPFR_RNDN);
        mpfr_init(r6328027);
        mpfr_init_set_str(r6328028, "-984023040.0", 10, MPFR_RNDN);
        mpfr_init(r6328029);
        mpfr_init(r6328030);
        mpfr_init_set_str(r6328031, "5535129600.0", 10, MPFR_RNDN);
        mpfr_init(r6328032);
        mpfr_init(r6328033);
        mpfr_init(r6328034);
        mpfr_init(r6328035);
        mpfr_init_set_str(r6328036, "518918400.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328037, "-8302694400.0", 10, MPFR_RNDN);
        mpfr_init(r6328038);
        mpfr_init(r6328039);
        mpfr_init_set_str(r6328040, "-15498362880.0", 10, MPFR_RNDN);
        mpfr_init(r6328041);
        mpfr_init_set_str(r6328042, "19372953600.0", 10, MPFR_RNDN);
        mpfr_init(r6328043);
        mpfr_init(r6328044);
        mpfr_init(r6328045);
        mpfr_init(r6328046);
        mpfr_init(r6328047);
}

double f_dm(double x) {
        mpfr_set_d(r6328013, x, MPFR_RNDN);
        mpfr_mul(r6328014, r6328013, r6328013, MPFR_RNDN);
        mpfr_mul(r6328015, r6328014, r6328014, MPFR_RNDN);
        ;
        mpfr_pow(r6328017, r6328014, r6328016, MPFR_RNDN);
        mpfr_mul(r6328018, r6328015, r6328017, MPFR_RNDN);
        mpfr_mul(r6328019, r6328015, r6328018, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328022, r6328013, r6328021, MPFR_RNDN);
        mpfr_mul(r6328023, r6328013, r6328022, MPFR_RNDN);
        mpfr_add(r6328024, r6328020, r6328023, MPFR_RNDN);
        mpfr_mul(r6328025, r6328019, r6328024, MPFR_RNDN);
        ;
        mpfr_mul(r6328027, r6328014, r6328026, MPFR_RNDN);
        ;
        mpfr_add(r6328029, r6328027, r6328028, MPFR_RNDN);
        mpfr_mul(r6328030, r6328018, r6328029, MPFR_RNDN);
        ;
        mpfr_mul(r6328032, r6328031, r6328013, MPFR_RNDN);
        mpfr_mul(r6328033, r6328032, r6328013, MPFR_RNDN);
        mpfr_mul(r6328034, r6328033, r6328017, MPFR_RNDN);
        mpfr_add(r6328035, r6328030, r6328034, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328038, r6328037, r6328014, MPFR_RNDN);
        mpfr_add(r6328039, r6328036, r6328038, MPFR_RNDN);
        ;
        mpfr_mul(r6328041, r6328014, r6328040, MPFR_RNDN);
        ;
        mpfr_add(r6328043, r6328041, r6328042, MPFR_RNDN);
        mpfr_mul(r6328044, r6328015, r6328043, MPFR_RNDN);
        mpfr_add(r6328045, r6328039, r6328044, MPFR_RNDN);
        mpfr_add(r6328046, r6328035, r6328045, MPFR_RNDN);
        mpfr_add(r6328047, r6328025, r6328046, MPFR_RNDN);
        return mpfr_get_d(r6328047, MPFR_RNDN);
}

