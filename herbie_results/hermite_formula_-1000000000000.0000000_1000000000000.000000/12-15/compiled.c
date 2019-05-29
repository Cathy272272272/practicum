#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r7604827 = -518918400.0;
        float r7604828 = x;
        float r7604829 = r7604827 * r7604828;
        float r7604830 = 2421619200.0;
        float r7604831 = r7604828 * r7604828;
        float r7604832 = r7604831 * r7604828;
        float r7604833 = r7604830 * r7604832;
        float r7604834 = r7604829 + r7604833;
        float r7604835 = -2905943040.0;
        float r7604836 = r7604832 * r7604828;
        float r7604837 = r7604836 * r7604828;
        float r7604838 = r7604835 * r7604837;
        float r7604839 = r7604834 + r7604838;
        float r7604840 = 1383782400.0;
        float r7604841 = r7604837 * r7604828;
        float r7604842 = r7604841 * r7604828;
        float r7604843 = r7604840 * r7604842;
        float r7604844 = r7604839 + r7604843;
        float r7604845 = -307507200.0;
        float r7604846 = r7604842 * r7604828;
        float r7604847 = r7604846 * r7604828;
        float r7604848 = r7604845 * r7604847;
        float r7604849 = r7604844 + r7604848;
        float r7604850 = 33546240.0;
        float r7604851 = r7604847 * r7604828;
        float r7604852 = r7604851 * r7604828;
        float r7604853 = r7604850 * r7604852;
        float r7604854 = r7604849 + r7604853;
        float r7604855 = -1720320.0;
        float r7604856 = r7604852 * r7604828;
        float r7604857 = r7604856 * r7604828;
        float r7604858 = r7604855 * r7604857;
        float r7604859 = r7604854 + r7604858;
        float r7604860 = 32768.0;
        float r7604861 = r7604857 * r7604828;
        float r7604862 = r7604861 * r7604828;
        float r7604863 = r7604860 * r7604862;
        float r7604864 = r7604859 + r7604863;
        return r7604864;
}

double f_id(double x) {
        double r7604865 = -518918400.0;
        double r7604866 = x;
        double r7604867 = r7604865 * r7604866;
        double r7604868 = 2421619200.0;
        double r7604869 = r7604866 * r7604866;
        double r7604870 = r7604869 * r7604866;
        double r7604871 = r7604868 * r7604870;
        double r7604872 = r7604867 + r7604871;
        double r7604873 = -2905943040.0;
        double r7604874 = r7604870 * r7604866;
        double r7604875 = r7604874 * r7604866;
        double r7604876 = r7604873 * r7604875;
        double r7604877 = r7604872 + r7604876;
        double r7604878 = 1383782400.0;
        double r7604879 = r7604875 * r7604866;
        double r7604880 = r7604879 * r7604866;
        double r7604881 = r7604878 * r7604880;
        double r7604882 = r7604877 + r7604881;
        double r7604883 = -307507200.0;
        double r7604884 = r7604880 * r7604866;
        double r7604885 = r7604884 * r7604866;
        double r7604886 = r7604883 * r7604885;
        double r7604887 = r7604882 + r7604886;
        double r7604888 = 33546240.0;
        double r7604889 = r7604885 * r7604866;
        double r7604890 = r7604889 * r7604866;
        double r7604891 = r7604888 * r7604890;
        double r7604892 = r7604887 + r7604891;
        double r7604893 = -1720320.0;
        double r7604894 = r7604890 * r7604866;
        double r7604895 = r7604894 * r7604866;
        double r7604896 = r7604893 * r7604895;
        double r7604897 = r7604892 + r7604896;
        double r7604898 = 32768.0;
        double r7604899 = r7604895 * r7604866;
        double r7604900 = r7604899 * r7604866;
        double r7604901 = r7604898 * r7604900;
        double r7604902 = r7604897 + r7604901;
        return r7604902;
}


double f_of(float x) {
        float r7604903 = -518918400.0;
        float r7604904 = x;
        float r7604905 = r7604903 * r7604904;
        float r7604906 = 2421619200.0;
        float r7604907 = r7604904 * r7604904;
        float r7604908 = r7604907 * r7604904;
        float r7604909 = r7604906 * r7604908;
        float r7604910 = r7604905 + r7604909;
        float r7604911 = -2905943040.0;
        float r7604912 = r7604908 * r7604904;
        float r7604913 = r7604912 * r7604904;
        float r7604914 = r7604911 * r7604913;
        float r7604915 = r7604910 + r7604914;
        float r7604916 = 1383782400.0;
        float r7604917 = r7604913 * r7604904;
        float r7604918 = r7604917 * r7604904;
        float r7604919 = r7604916 * r7604918;
        float r7604920 = cbrt(r7604919);
        float r7604921 = r7604920 * r7604920;
        float r7604922 = r7604921 * r7604920;
        float r7604923 = r7604915 + r7604922;
        float r7604924 = -307507200.0;
        float r7604925 = r7604918 * r7604904;
        float r7604926 = r7604925 * r7604904;
        float r7604927 = r7604924 * r7604926;
        float r7604928 = r7604923 + r7604927;
        float r7604929 = 33546240.0;
        float r7604930 = r7604926 * r7604904;
        float r7604931 = r7604930 * r7604904;
        float r7604932 = r7604929 * r7604931;
        float r7604933 = r7604928 + r7604932;
        float r7604934 = -1720320.0;
        float r7604935 = r7604931 * r7604904;
        float r7604936 = r7604935 * r7604904;
        float r7604937 = r7604934 * r7604936;
        float r7604938 = r7604933 + r7604937;
        float r7604939 = 32768.0;
        float r7604940 = r7604936 * r7604904;
        float r7604941 = r7604940 * r7604904;
        float r7604942 = r7604939 * r7604941;
        float r7604943 = r7604938 + r7604942;
        return r7604943;
}

double f_od(double x) {
        double r7604944 = -518918400.0;
        double r7604945 = x;
        double r7604946 = r7604944 * r7604945;
        double r7604947 = 2421619200.0;
        double r7604948 = r7604945 * r7604945;
        double r7604949 = r7604948 * r7604945;
        double r7604950 = r7604947 * r7604949;
        double r7604951 = r7604946 + r7604950;
        double r7604952 = -2905943040.0;
        double r7604953 = r7604949 * r7604945;
        double r7604954 = r7604953 * r7604945;
        double r7604955 = r7604952 * r7604954;
        double r7604956 = r7604951 + r7604955;
        double r7604957 = 1383782400.0;
        double r7604958 = r7604954 * r7604945;
        double r7604959 = r7604958 * r7604945;
        double r7604960 = r7604957 * r7604959;
        double r7604961 = cbrt(r7604960);
        double r7604962 = r7604961 * r7604961;
        double r7604963 = r7604962 * r7604961;
        double r7604964 = r7604956 + r7604963;
        double r7604965 = -307507200.0;
        double r7604966 = r7604959 * r7604945;
        double r7604967 = r7604966 * r7604945;
        double r7604968 = r7604965 * r7604967;
        double r7604969 = r7604964 + r7604968;
        double r7604970 = 33546240.0;
        double r7604971 = r7604967 * r7604945;
        double r7604972 = r7604971 * r7604945;
        double r7604973 = r7604970 * r7604972;
        double r7604974 = r7604969 + r7604973;
        double r7604975 = -1720320.0;
        double r7604976 = r7604972 * r7604945;
        double r7604977 = r7604976 * r7604945;
        double r7604978 = r7604975 * r7604977;
        double r7604979 = r7604974 + r7604978;
        double r7604980 = 32768.0;
        double r7604981 = r7604977 * r7604945;
        double r7604982 = r7604981 * r7604945;
        double r7604983 = r7604980 * r7604982;
        double r7604984 = r7604979 + r7604983;
        return r7604984;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7604985, r7604986, r7604987, r7604988, r7604989, r7604990, r7604991, r7604992, r7604993, r7604994, r7604995, r7604996, r7604997, r7604998, r7604999, r7605000, r7605001, r7605002, r7605003, r7605004, r7605005, r7605006, r7605007, r7605008, r7605009, r7605010, r7605011, r7605012, r7605013, r7605014, r7605015, r7605016, r7605017, r7605018, r7605019, r7605020, r7605021, r7605022;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7604985, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7604986);
        mpfr_init(r7604987);
        mpfr_init_set_str(r7604988, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7604989);
        mpfr_init(r7604990);
        mpfr_init(r7604991);
        mpfr_init(r7604992);
        mpfr_init_set_str(r7604993, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7604994);
        mpfr_init(r7604995);
        mpfr_init(r7604996);
        mpfr_init(r7604997);
        mpfr_init_set_str(r7604998, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7604999);
        mpfr_init(r7605000);
        mpfr_init(r7605001);
        mpfr_init(r7605002);
        mpfr_init_set_str(r7605003, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7605004);
        mpfr_init(r7605005);
        mpfr_init(r7605006);
        mpfr_init(r7605007);
        mpfr_init_set_str(r7605008, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7605009);
        mpfr_init(r7605010);
        mpfr_init(r7605011);
        mpfr_init(r7605012);
        mpfr_init_set_str(r7605013, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7605014);
        mpfr_init(r7605015);
        mpfr_init(r7605016);
        mpfr_init(r7605017);
        mpfr_init_set_str(r7605018, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7605019);
        mpfr_init(r7605020);
        mpfr_init(r7605021);
        mpfr_init(r7605022);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7604986, x, MPFR_RNDN);
        mpfr_mul(r7604987, r7604985, r7604986, MPFR_RNDN);
        ;
        mpfr_mul(r7604989, r7604986, r7604986, MPFR_RNDN);
        mpfr_mul(r7604990, r7604989, r7604986, MPFR_RNDN);
        mpfr_mul(r7604991, r7604988, r7604990, MPFR_RNDN);
        mpfr_add(r7604992, r7604987, r7604991, MPFR_RNDN);
        ;
        mpfr_mul(r7604994, r7604990, r7604986, MPFR_RNDN);
        mpfr_mul(r7604995, r7604994, r7604986, MPFR_RNDN);
        mpfr_mul(r7604996, r7604993, r7604995, MPFR_RNDN);
        mpfr_add(r7604997, r7604992, r7604996, MPFR_RNDN);
        ;
        mpfr_mul(r7604999, r7604995, r7604986, MPFR_RNDN);
        mpfr_mul(r7605000, r7604999, r7604986, MPFR_RNDN);
        mpfr_mul(r7605001, r7604998, r7605000, MPFR_RNDN);
        mpfr_add(r7605002, r7604997, r7605001, MPFR_RNDN);
        ;
        mpfr_mul(r7605004, r7605000, r7604986, MPFR_RNDN);
        mpfr_mul(r7605005, r7605004, r7604986, MPFR_RNDN);
        mpfr_mul(r7605006, r7605003, r7605005, MPFR_RNDN);
        mpfr_add(r7605007, r7605002, r7605006, MPFR_RNDN);
        ;
        mpfr_mul(r7605009, r7605005, r7604986, MPFR_RNDN);
        mpfr_mul(r7605010, r7605009, r7604986, MPFR_RNDN);
        mpfr_mul(r7605011, r7605008, r7605010, MPFR_RNDN);
        mpfr_add(r7605012, r7605007, r7605011, MPFR_RNDN);
        ;
        mpfr_mul(r7605014, r7605010, r7604986, MPFR_RNDN);
        mpfr_mul(r7605015, r7605014, r7604986, MPFR_RNDN);
        mpfr_mul(r7605016, r7605013, r7605015, MPFR_RNDN);
        mpfr_add(r7605017, r7605012, r7605016, MPFR_RNDN);
        ;
        mpfr_mul(r7605019, r7605015, r7604986, MPFR_RNDN);
        mpfr_mul(r7605020, r7605019, r7604986, MPFR_RNDN);
        mpfr_mul(r7605021, r7605018, r7605020, MPFR_RNDN);
        mpfr_add(r7605022, r7605017, r7605021, MPFR_RNDN);
        return mpfr_get_d(r7605022, MPFR_RNDN);
}

static mpfr_t r7605023, r7605024, r7605025, r7605026, r7605027, r7605028, r7605029, r7605030, r7605031, r7605032, r7605033, r7605034, r7605035, r7605036, r7605037, r7605038, r7605039, r7605040, r7605041, r7605042, r7605043, r7605044, r7605045, r7605046, r7605047, r7605048, r7605049, r7605050, r7605051, r7605052, r7605053, r7605054, r7605055, r7605056, r7605057, r7605058, r7605059, r7605060, r7605061, r7605062, r7605063;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7605023, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7605024);
        mpfr_init(r7605025);
        mpfr_init_set_str(r7605026, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7605027);
        mpfr_init(r7605028);
        mpfr_init(r7605029);
        mpfr_init(r7605030);
        mpfr_init_set_str(r7605031, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7605032);
        mpfr_init(r7605033);
        mpfr_init(r7605034);
        mpfr_init(r7605035);
        mpfr_init_set_str(r7605036, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7605037);
        mpfr_init(r7605038);
        mpfr_init(r7605039);
        mpfr_init(r7605040);
        mpfr_init(r7605041);
        mpfr_init(r7605042);
        mpfr_init(r7605043);
        mpfr_init_set_str(r7605044, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7605045);
        mpfr_init(r7605046);
        mpfr_init(r7605047);
        mpfr_init(r7605048);
        mpfr_init_set_str(r7605049, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7605050);
        mpfr_init(r7605051);
        mpfr_init(r7605052);
        mpfr_init(r7605053);
        mpfr_init_set_str(r7605054, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7605055);
        mpfr_init(r7605056);
        mpfr_init(r7605057);
        mpfr_init(r7605058);
        mpfr_init_set_str(r7605059, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7605060);
        mpfr_init(r7605061);
        mpfr_init(r7605062);
        mpfr_init(r7605063);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7605024, x, MPFR_RNDN);
        mpfr_mul(r7605025, r7605023, r7605024, MPFR_RNDN);
        ;
        mpfr_mul(r7605027, r7605024, r7605024, MPFR_RNDN);
        mpfr_mul(r7605028, r7605027, r7605024, MPFR_RNDN);
        mpfr_mul(r7605029, r7605026, r7605028, MPFR_RNDN);
        mpfr_add(r7605030, r7605025, r7605029, MPFR_RNDN);
        ;
        mpfr_mul(r7605032, r7605028, r7605024, MPFR_RNDN);
        mpfr_mul(r7605033, r7605032, r7605024, MPFR_RNDN);
        mpfr_mul(r7605034, r7605031, r7605033, MPFR_RNDN);
        mpfr_add(r7605035, r7605030, r7605034, MPFR_RNDN);
        ;
        mpfr_mul(r7605037, r7605033, r7605024, MPFR_RNDN);
        mpfr_mul(r7605038, r7605037, r7605024, MPFR_RNDN);
        mpfr_mul(r7605039, r7605036, r7605038, MPFR_RNDN);
        mpfr_cbrt(r7605040, r7605039, MPFR_RNDN);
        mpfr_mul(r7605041, r7605040, r7605040, MPFR_RNDN);
        mpfr_mul(r7605042, r7605041, r7605040, MPFR_RNDN);
        mpfr_add(r7605043, r7605035, r7605042, MPFR_RNDN);
        ;
        mpfr_mul(r7605045, r7605038, r7605024, MPFR_RNDN);
        mpfr_mul(r7605046, r7605045, r7605024, MPFR_RNDN);
        mpfr_mul(r7605047, r7605044, r7605046, MPFR_RNDN);
        mpfr_add(r7605048, r7605043, r7605047, MPFR_RNDN);
        ;
        mpfr_mul(r7605050, r7605046, r7605024, MPFR_RNDN);
        mpfr_mul(r7605051, r7605050, r7605024, MPFR_RNDN);
        mpfr_mul(r7605052, r7605049, r7605051, MPFR_RNDN);
        mpfr_add(r7605053, r7605048, r7605052, MPFR_RNDN);
        ;
        mpfr_mul(r7605055, r7605051, r7605024, MPFR_RNDN);
        mpfr_mul(r7605056, r7605055, r7605024, MPFR_RNDN);
        mpfr_mul(r7605057, r7605054, r7605056, MPFR_RNDN);
        mpfr_add(r7605058, r7605053, r7605057, MPFR_RNDN);
        ;
        mpfr_mul(r7605060, r7605056, r7605024, MPFR_RNDN);
        mpfr_mul(r7605061, r7605060, r7605024, MPFR_RNDN);
        mpfr_mul(r7605062, r7605059, r7605061, MPFR_RNDN);
        mpfr_add(r7605063, r7605058, r7605062, MPFR_RNDN);
        return mpfr_get_d(r7605063, MPFR_RNDN);
}

static mpfr_t r7605064, r7605065, r7605066, r7605067, r7605068, r7605069, r7605070, r7605071, r7605072, r7605073, r7605074, r7605075, r7605076, r7605077, r7605078, r7605079, r7605080, r7605081, r7605082, r7605083, r7605084, r7605085, r7605086, r7605087, r7605088, r7605089, r7605090, r7605091, r7605092, r7605093, r7605094, r7605095, r7605096, r7605097, r7605098, r7605099, r7605100, r7605101, r7605102, r7605103, r7605104;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7605064, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r7605065);
        mpfr_init(r7605066);
        mpfr_init_set_str(r7605067, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r7605068);
        mpfr_init(r7605069);
        mpfr_init(r7605070);
        mpfr_init(r7605071);
        mpfr_init_set_str(r7605072, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r7605073);
        mpfr_init(r7605074);
        mpfr_init(r7605075);
        mpfr_init(r7605076);
        mpfr_init_set_str(r7605077, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r7605078);
        mpfr_init(r7605079);
        mpfr_init(r7605080);
        mpfr_init(r7605081);
        mpfr_init(r7605082);
        mpfr_init(r7605083);
        mpfr_init(r7605084);
        mpfr_init_set_str(r7605085, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r7605086);
        mpfr_init(r7605087);
        mpfr_init(r7605088);
        mpfr_init(r7605089);
        mpfr_init_set_str(r7605090, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r7605091);
        mpfr_init(r7605092);
        mpfr_init(r7605093);
        mpfr_init(r7605094);
        mpfr_init_set_str(r7605095, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r7605096);
        mpfr_init(r7605097);
        mpfr_init(r7605098);
        mpfr_init(r7605099);
        mpfr_init_set_str(r7605100, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r7605101);
        mpfr_init(r7605102);
        mpfr_init(r7605103);
        mpfr_init(r7605104);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7605065, x, MPFR_RNDN);
        mpfr_mul(r7605066, r7605064, r7605065, MPFR_RNDN);
        ;
        mpfr_mul(r7605068, r7605065, r7605065, MPFR_RNDN);
        mpfr_mul(r7605069, r7605068, r7605065, MPFR_RNDN);
        mpfr_mul(r7605070, r7605067, r7605069, MPFR_RNDN);
        mpfr_add(r7605071, r7605066, r7605070, MPFR_RNDN);
        ;
        mpfr_mul(r7605073, r7605069, r7605065, MPFR_RNDN);
        mpfr_mul(r7605074, r7605073, r7605065, MPFR_RNDN);
        mpfr_mul(r7605075, r7605072, r7605074, MPFR_RNDN);
        mpfr_add(r7605076, r7605071, r7605075, MPFR_RNDN);
        ;
        mpfr_mul(r7605078, r7605074, r7605065, MPFR_RNDN);
        mpfr_mul(r7605079, r7605078, r7605065, MPFR_RNDN);
        mpfr_mul(r7605080, r7605077, r7605079, MPFR_RNDN);
        mpfr_cbrt(r7605081, r7605080, MPFR_RNDN);
        mpfr_mul(r7605082, r7605081, r7605081, MPFR_RNDN);
        mpfr_mul(r7605083, r7605082, r7605081, MPFR_RNDN);
        mpfr_add(r7605084, r7605076, r7605083, MPFR_RNDN);
        ;
        mpfr_mul(r7605086, r7605079, r7605065, MPFR_RNDN);
        mpfr_mul(r7605087, r7605086, r7605065, MPFR_RNDN);
        mpfr_mul(r7605088, r7605085, r7605087, MPFR_RNDN);
        mpfr_add(r7605089, r7605084, r7605088, MPFR_RNDN);
        ;
        mpfr_mul(r7605091, r7605087, r7605065, MPFR_RNDN);
        mpfr_mul(r7605092, r7605091, r7605065, MPFR_RNDN);
        mpfr_mul(r7605093, r7605090, r7605092, MPFR_RNDN);
        mpfr_add(r7605094, r7605089, r7605093, MPFR_RNDN);
        ;
        mpfr_mul(r7605096, r7605092, r7605065, MPFR_RNDN);
        mpfr_mul(r7605097, r7605096, r7605065, MPFR_RNDN);
        mpfr_mul(r7605098, r7605095, r7605097, MPFR_RNDN);
        mpfr_add(r7605099, r7605094, r7605098, MPFR_RNDN);
        ;
        mpfr_mul(r7605101, r7605097, r7605065, MPFR_RNDN);
        mpfr_mul(r7605102, r7605101, r7605065, MPFR_RNDN);
        mpfr_mul(r7605103, r7605100, r7605102, MPFR_RNDN);
        mpfr_add(r7605104, r7605099, r7605103, MPFR_RNDN);
        return mpfr_get_d(r7605104, MPFR_RNDN);
}

