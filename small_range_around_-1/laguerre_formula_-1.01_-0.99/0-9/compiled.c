#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r11543787 = 1.0;
        float r11543788 = -9.0;
        float r11543789 = x;
        float r11543790 = r11543788 * r11543789;
        float r11543791 = r11543787 + r11543790;
        float r11543792 = 18.0;
        float r11543793 = r11543789 * r11543789;
        float r11543794 = r11543792 * r11543793;
        float r11543795 = r11543791 + r11543794;
        float r11543796 = -14.0;
        float r11543797 = r11543793 * r11543789;
        float r11543798 = r11543796 * r11543797;
        float r11543799 = r11543795 + r11543798;
        float r11543800 = 5.25;
        float r11543801 = r11543797 * r11543789;
        float r11543802 = r11543800 * r11543801;
        float r11543803 = r11543799 + r11543802;
        float r11543804 = -1.05;
        float r11543805 = r11543801 * r11543789;
        float r11543806 = r11543804 * r11543805;
        float r11543807 = r11543803 + r11543806;
        float r11543808 = 0.116667;
        float r11543809 = r11543805 * r11543789;
        float r11543810 = r11543808 * r11543809;
        float r11543811 = r11543807 + r11543810;
        float r11543812 = -0.007143;
        float r11543813 = r11543809 * r11543789;
        float r11543814 = r11543812 * r11543813;
        float r11543815 = r11543811 + r11543814;
        float r11543816 = 0.000223;
        float r11543817 = r11543813 * r11543789;
        float r11543818 = r11543816 * r11543817;
        float r11543819 = r11543815 + r11543818;
        float r11543820 = -3e-06;
        float r11543821 = r11543817 * r11543789;
        float r11543822 = r11543820 * r11543821;
        float r11543823 = r11543819 + r11543822;
        return r11543823;
}

double f_id(double x) {
        double r11543824 = 1.0;
        double r11543825 = -9.0;
        double r11543826 = x;
        double r11543827 = r11543825 * r11543826;
        double r11543828 = r11543824 + r11543827;
        double r11543829 = 18.0;
        double r11543830 = r11543826 * r11543826;
        double r11543831 = r11543829 * r11543830;
        double r11543832 = r11543828 + r11543831;
        double r11543833 = -14.0;
        double r11543834 = r11543830 * r11543826;
        double r11543835 = r11543833 * r11543834;
        double r11543836 = r11543832 + r11543835;
        double r11543837 = 5.25;
        double r11543838 = r11543834 * r11543826;
        double r11543839 = r11543837 * r11543838;
        double r11543840 = r11543836 + r11543839;
        double r11543841 = -1.05;
        double r11543842 = r11543838 * r11543826;
        double r11543843 = r11543841 * r11543842;
        double r11543844 = r11543840 + r11543843;
        double r11543845 = 0.116667;
        double r11543846 = r11543842 * r11543826;
        double r11543847 = r11543845 * r11543846;
        double r11543848 = r11543844 + r11543847;
        double r11543849 = -0.007143;
        double r11543850 = r11543846 * r11543826;
        double r11543851 = r11543849 * r11543850;
        double r11543852 = r11543848 + r11543851;
        double r11543853 = 0.000223;
        double r11543854 = r11543850 * r11543826;
        double r11543855 = r11543853 * r11543854;
        double r11543856 = r11543852 + r11543855;
        double r11543857 = -3e-06;
        double r11543858 = r11543854 * r11543826;
        double r11543859 = r11543857 * r11543858;
        double r11543860 = r11543856 + r11543859;
        return r11543860;
}


double f_of(float x) {
        float r11543861 = 0.000223;
        float r11543862 = -3e-06;
        float r11543863 = x;
        float r11543864 = r11543862 * r11543863;
        float r11543865 = r11543861 + r11543864;
        float r11543866 = 8;
        float r11543867 = pow(r11543863, r11543866);
        float r11543868 = r11543865 * r11543867;
        float r11543869 = -9.0;
        float r11543870 = r11543869 * r11543863;
        float r11543871 = 1.0;
        float r11543872 = r11543870 + r11543871;
        float r11543873 = r11543868 + r11543872;
        float r11543874 = 3;
        float r11543875 = pow(r11543863, r11543874);
        float r11543876 = r11543875 * r11543875;
        float r11543877 = 18.0;
        float r11543878 = -14.0;
        float r11543879 = r11543878 * r11543863;
        float r11543880 = r11543877 + r11543879;
        float r11543881 = r11543876 * r11543880;
        float r11543882 = r11543880 * r11543880;
        float r11543883 = r11543881 * r11543882;
        float r11543884 = cbrt(r11543883);
        float r11543885 = r11543873 + r11543884;
        float r11543886 = -1.05;
        float r11543887 = r11543863 * r11543886;
        float r11543888 = 5.25;
        float r11543889 = r11543887 + r11543888;
        float r11543890 = r11543863 * r11543863;
        float r11543891 = -0.007143;
        float r11543892 = r11543863 * r11543891;
        float r11543893 = 0.116667;
        float r11543894 = r11543892 + r11543893;
        float r11543895 = r11543890 * r11543894;
        float r11543896 = r11543889 + r11543895;
        float r11543897 = 2;
        float r11543898 = r11543897 + r11543897;
        float r11543899 = pow(r11543863, r11543898);
        float r11543900 = r11543896 * r11543899;
        float r11543901 = r11543885 + r11543900;
        return r11543901;
}

double f_od(double x) {
        double r11543902 = 0.000223;
        double r11543903 = -3e-06;
        double r11543904 = x;
        double r11543905 = r11543903 * r11543904;
        double r11543906 = r11543902 + r11543905;
        double r11543907 = 8;
        double r11543908 = pow(r11543904, r11543907);
        double r11543909 = r11543906 * r11543908;
        double r11543910 = -9.0;
        double r11543911 = r11543910 * r11543904;
        double r11543912 = 1.0;
        double r11543913 = r11543911 + r11543912;
        double r11543914 = r11543909 + r11543913;
        double r11543915 = 3;
        double r11543916 = pow(r11543904, r11543915);
        double r11543917 = r11543916 * r11543916;
        double r11543918 = 18.0;
        double r11543919 = -14.0;
        double r11543920 = r11543919 * r11543904;
        double r11543921 = r11543918 + r11543920;
        double r11543922 = r11543917 * r11543921;
        double r11543923 = r11543921 * r11543921;
        double r11543924 = r11543922 * r11543923;
        double r11543925 = cbrt(r11543924);
        double r11543926 = r11543914 + r11543925;
        double r11543927 = -1.05;
        double r11543928 = r11543904 * r11543927;
        double r11543929 = 5.25;
        double r11543930 = r11543928 + r11543929;
        double r11543931 = r11543904 * r11543904;
        double r11543932 = -0.007143;
        double r11543933 = r11543904 * r11543932;
        double r11543934 = 0.116667;
        double r11543935 = r11543933 + r11543934;
        double r11543936 = r11543931 * r11543935;
        double r11543937 = r11543930 + r11543936;
        double r11543938 = 2;
        double r11543939 = r11543938 + r11543938;
        double r11543940 = pow(r11543904, r11543939);
        double r11543941 = r11543937 * r11543940;
        double r11543942 = r11543926 + r11543941;
        return r11543942;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11543943, r11543944, r11543945, r11543946, r11543947, r11543948, r11543949, r11543950, r11543951, r11543952, r11543953, r11543954, r11543955, r11543956, r11543957, r11543958, r11543959, r11543960, r11543961, r11543962, r11543963, r11543964, r11543965, r11543966, r11543967, r11543968, r11543969, r11543970, r11543971, r11543972, r11543973, r11543974, r11543975, r11543976, r11543977, r11543978, r11543979;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11543943, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11543944, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11543945);
        mpfr_init(r11543946);
        mpfr_init(r11543947);
        mpfr_init_set_str(r11543948, "18.0", 10, MPFR_RNDN);
        mpfr_init(r11543949);
        mpfr_init(r11543950);
        mpfr_init(r11543951);
        mpfr_init_set_str(r11543952, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11543953);
        mpfr_init(r11543954);
        mpfr_init(r11543955);
        mpfr_init_set_str(r11543956, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11543957);
        mpfr_init(r11543958);
        mpfr_init(r11543959);
        mpfr_init_set_str(r11543960, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11543961);
        mpfr_init(r11543962);
        mpfr_init(r11543963);
        mpfr_init_set_str(r11543964, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11543965);
        mpfr_init(r11543966);
        mpfr_init(r11543967);
        mpfr_init_set_str(r11543968, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11543969);
        mpfr_init(r11543970);
        mpfr_init(r11543971);
        mpfr_init_set_str(r11543972, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r11543973);
        mpfr_init(r11543974);
        mpfr_init(r11543975);
        mpfr_init_set_str(r11543976, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11543977);
        mpfr_init(r11543978);
        mpfr_init(r11543979);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11543945, x, MPFR_RNDN);
        mpfr_mul(r11543946, r11543944, r11543945, MPFR_RNDN);
        mpfr_add(r11543947, r11543943, r11543946, MPFR_RNDN);
        ;
        mpfr_mul(r11543949, r11543945, r11543945, MPFR_RNDN);
        mpfr_mul(r11543950, r11543948, r11543949, MPFR_RNDN);
        mpfr_add(r11543951, r11543947, r11543950, MPFR_RNDN);
        ;
        mpfr_mul(r11543953, r11543949, r11543945, MPFR_RNDN);
        mpfr_mul(r11543954, r11543952, r11543953, MPFR_RNDN);
        mpfr_add(r11543955, r11543951, r11543954, MPFR_RNDN);
        ;
        mpfr_mul(r11543957, r11543953, r11543945, MPFR_RNDN);
        mpfr_mul(r11543958, r11543956, r11543957, MPFR_RNDN);
        mpfr_add(r11543959, r11543955, r11543958, MPFR_RNDN);
        ;
        mpfr_mul(r11543961, r11543957, r11543945, MPFR_RNDN);
        mpfr_mul(r11543962, r11543960, r11543961, MPFR_RNDN);
        mpfr_add(r11543963, r11543959, r11543962, MPFR_RNDN);
        ;
        mpfr_mul(r11543965, r11543961, r11543945, MPFR_RNDN);
        mpfr_mul(r11543966, r11543964, r11543965, MPFR_RNDN);
        mpfr_add(r11543967, r11543963, r11543966, MPFR_RNDN);
        ;
        mpfr_mul(r11543969, r11543965, r11543945, MPFR_RNDN);
        mpfr_mul(r11543970, r11543968, r11543969, MPFR_RNDN);
        mpfr_add(r11543971, r11543967, r11543970, MPFR_RNDN);
        ;
        mpfr_mul(r11543973, r11543969, r11543945, MPFR_RNDN);
        mpfr_mul(r11543974, r11543972, r11543973, MPFR_RNDN);
        mpfr_add(r11543975, r11543971, r11543974, MPFR_RNDN);
        ;
        mpfr_mul(r11543977, r11543973, r11543945, MPFR_RNDN);
        mpfr_mul(r11543978, r11543976, r11543977, MPFR_RNDN);
        mpfr_add(r11543979, r11543975, r11543978, MPFR_RNDN);
        return mpfr_get_d(r11543979, MPFR_RNDN);
}

static mpfr_t r11543980, r11543981, r11543982, r11543983, r11543984, r11543985, r11543986, r11543987, r11543988, r11543989, r11543990, r11543991, r11543992, r11543993, r11543994, r11543995, r11543996, r11543997, r11543998, r11543999, r11544000, r11544001, r11544002, r11544003, r11544004, r11544005, r11544006, r11544007, r11544008, r11544009, r11544010, r11544011, r11544012, r11544013, r11544014, r11544015, r11544016, r11544017, r11544018, r11544019, r11544020;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11543980, "0.000223", 10, MPFR_RNDN);
        mpfr_init_set_str(r11543981, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11543982);
        mpfr_init(r11543983);
        mpfr_init(r11543984);
        mpfr_init_set_str(r11543985, "8", 10, MPFR_RNDN);
        mpfr_init(r11543986);
        mpfr_init(r11543987);
        mpfr_init_set_str(r11543988, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11543989);
        mpfr_init_set_str(r11543990, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11543991);
        mpfr_init(r11543992);
        mpfr_init_set_str(r11543993, "3", 10, MPFR_RNDN);
        mpfr_init(r11543994);
        mpfr_init(r11543995);
        mpfr_init_set_str(r11543996, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11543997, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11543998);
        mpfr_init(r11543999);
        mpfr_init(r11544000);
        mpfr_init(r11544001);
        mpfr_init(r11544002);
        mpfr_init(r11544003);
        mpfr_init(r11544004);
        mpfr_init_set_str(r11544005, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11544006);
        mpfr_init_set_str(r11544007, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11544008);
        mpfr_init(r11544009);
        mpfr_init_set_str(r11544010, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11544011);
        mpfr_init_set_str(r11544012, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11544013);
        mpfr_init(r11544014);
        mpfr_init(r11544015);
        mpfr_init_set_str(r11544016, "2", 10, MPFR_RNDN);
        mpfr_init(r11544017);
        mpfr_init(r11544018);
        mpfr_init(r11544019);
        mpfr_init(r11544020);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11543982, x, MPFR_RNDN);
        mpfr_mul(r11543983, r11543981, r11543982, MPFR_RNDN);
        mpfr_add(r11543984, r11543980, r11543983, MPFR_RNDN);
        ;
        mpfr_pow(r11543986, r11543982, r11543985, MPFR_RNDN);
        mpfr_mul(r11543987, r11543984, r11543986, MPFR_RNDN);
        ;
        mpfr_mul(r11543989, r11543988, r11543982, MPFR_RNDN);
        ;
        mpfr_add(r11543991, r11543989, r11543990, MPFR_RNDN);
        mpfr_add(r11543992, r11543987, r11543991, MPFR_RNDN);
        ;
        mpfr_pow(r11543994, r11543982, r11543993, MPFR_RNDN);
        mpfr_mul(r11543995, r11543994, r11543994, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11543998, r11543997, r11543982, MPFR_RNDN);
        mpfr_add(r11543999, r11543996, r11543998, MPFR_RNDN);
        mpfr_mul(r11544000, r11543995, r11543999, MPFR_RNDN);
        mpfr_mul(r11544001, r11543999, r11543999, MPFR_RNDN);
        mpfr_mul(r11544002, r11544000, r11544001, MPFR_RNDN);
        mpfr_cbrt(r11544003, r11544002, MPFR_RNDN);
        mpfr_add(r11544004, r11543992, r11544003, MPFR_RNDN);
        ;
        mpfr_mul(r11544006, r11543982, r11544005, MPFR_RNDN);
        ;
        mpfr_add(r11544008, r11544006, r11544007, MPFR_RNDN);
        mpfr_mul(r11544009, r11543982, r11543982, MPFR_RNDN);
        ;
        mpfr_mul(r11544011, r11543982, r11544010, MPFR_RNDN);
        ;
        mpfr_add(r11544013, r11544011, r11544012, MPFR_RNDN);
        mpfr_mul(r11544014, r11544009, r11544013, MPFR_RNDN);
        mpfr_add(r11544015, r11544008, r11544014, MPFR_RNDN);
        ;
        mpfr_add(r11544017, r11544016, r11544016, MPFR_RNDN);
        mpfr_pow(r11544018, r11543982, r11544017, MPFR_RNDN);
        mpfr_mul(r11544019, r11544015, r11544018, MPFR_RNDN);
        mpfr_add(r11544020, r11544004, r11544019, MPFR_RNDN);
        return mpfr_get_d(r11544020, MPFR_RNDN);
}

static mpfr_t r11544021, r11544022, r11544023, r11544024, r11544025, r11544026, r11544027, r11544028, r11544029, r11544030, r11544031, r11544032, r11544033, r11544034, r11544035, r11544036, r11544037, r11544038, r11544039, r11544040, r11544041, r11544042, r11544043, r11544044, r11544045, r11544046, r11544047, r11544048, r11544049, r11544050, r11544051, r11544052, r11544053, r11544054, r11544055, r11544056, r11544057, r11544058, r11544059, r11544060, r11544061;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11544021, "0.000223", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544022, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r11544023);
        mpfr_init(r11544024);
        mpfr_init(r11544025);
        mpfr_init_set_str(r11544026, "8", 10, MPFR_RNDN);
        mpfr_init(r11544027);
        mpfr_init(r11544028);
        mpfr_init_set_str(r11544029, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r11544030);
        mpfr_init_set_str(r11544031, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11544032);
        mpfr_init(r11544033);
        mpfr_init_set_str(r11544034, "3", 10, MPFR_RNDN);
        mpfr_init(r11544035);
        mpfr_init(r11544036);
        mpfr_init_set_str(r11544037, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11544038, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r11544039);
        mpfr_init(r11544040);
        mpfr_init(r11544041);
        mpfr_init(r11544042);
        mpfr_init(r11544043);
        mpfr_init(r11544044);
        mpfr_init(r11544045);
        mpfr_init_set_str(r11544046, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r11544047);
        mpfr_init_set_str(r11544048, "5.25", 10, MPFR_RNDN);
        mpfr_init(r11544049);
        mpfr_init(r11544050);
        mpfr_init_set_str(r11544051, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r11544052);
        mpfr_init_set_str(r11544053, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r11544054);
        mpfr_init(r11544055);
        mpfr_init(r11544056);
        mpfr_init_set_str(r11544057, "2", 10, MPFR_RNDN);
        mpfr_init(r11544058);
        mpfr_init(r11544059);
        mpfr_init(r11544060);
        mpfr_init(r11544061);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11544023, x, MPFR_RNDN);
        mpfr_mul(r11544024, r11544022, r11544023, MPFR_RNDN);
        mpfr_add(r11544025, r11544021, r11544024, MPFR_RNDN);
        ;
        mpfr_pow(r11544027, r11544023, r11544026, MPFR_RNDN);
        mpfr_mul(r11544028, r11544025, r11544027, MPFR_RNDN);
        ;
        mpfr_mul(r11544030, r11544029, r11544023, MPFR_RNDN);
        ;
        mpfr_add(r11544032, r11544030, r11544031, MPFR_RNDN);
        mpfr_add(r11544033, r11544028, r11544032, MPFR_RNDN);
        ;
        mpfr_pow(r11544035, r11544023, r11544034, MPFR_RNDN);
        mpfr_mul(r11544036, r11544035, r11544035, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11544039, r11544038, r11544023, MPFR_RNDN);
        mpfr_add(r11544040, r11544037, r11544039, MPFR_RNDN);
        mpfr_mul(r11544041, r11544036, r11544040, MPFR_RNDN);
        mpfr_mul(r11544042, r11544040, r11544040, MPFR_RNDN);
        mpfr_mul(r11544043, r11544041, r11544042, MPFR_RNDN);
        mpfr_cbrt(r11544044, r11544043, MPFR_RNDN);
        mpfr_add(r11544045, r11544033, r11544044, MPFR_RNDN);
        ;
        mpfr_mul(r11544047, r11544023, r11544046, MPFR_RNDN);
        ;
        mpfr_add(r11544049, r11544047, r11544048, MPFR_RNDN);
        mpfr_mul(r11544050, r11544023, r11544023, MPFR_RNDN);
        ;
        mpfr_mul(r11544052, r11544023, r11544051, MPFR_RNDN);
        ;
        mpfr_add(r11544054, r11544052, r11544053, MPFR_RNDN);
        mpfr_mul(r11544055, r11544050, r11544054, MPFR_RNDN);
        mpfr_add(r11544056, r11544049, r11544055, MPFR_RNDN);
        ;
        mpfr_add(r11544058, r11544057, r11544057, MPFR_RNDN);
        mpfr_pow(r11544059, r11544023, r11544058, MPFR_RNDN);
        mpfr_mul(r11544060, r11544056, r11544059, MPFR_RNDN);
        mpfr_add(r11544061, r11544045, r11544060, MPFR_RNDN);
        return mpfr_get_d(r11544061, MPFR_RNDN);
}

