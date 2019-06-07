#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "17";

double f_if(float x) {
        float r9374750 = 1.0;
        float r9374751 = -17.0;
        float r9374752 = x;
        float r9374753 = r9374751 * r9374752;
        float r9374754 = r9374750 + r9374753;
        float r9374755 = 68.0;
        float r9374756 = r9374752 * r9374752;
        float r9374757 = r9374755 * r9374756;
        float r9374758 = r9374754 + r9374757;
        float r9374759 = -113.333333;
        float r9374760 = r9374756 * r9374752;
        float r9374761 = r9374759 * r9374760;
        float r9374762 = r9374758 + r9374761;
        float r9374763 = 99.166667;
        float r9374764 = r9374760 * r9374752;
        float r9374765 = r9374763 * r9374764;
        float r9374766 = r9374762 + r9374765;
        float r9374767 = -51.566667;
        float r9374768 = r9374764 * r9374752;
        float r9374769 = r9374767 * r9374768;
        float r9374770 = r9374766 + r9374769;
        float r9374771 = 17.188889;
        float r9374772 = r9374768 * r9374752;
        float r9374773 = r9374771 * r9374772;
        float r9374774 = r9374770 + r9374773;
        float r9374775 = -3.85873;
        float r9374776 = r9374772 * r9374752;
        float r9374777 = r9374775 * r9374776;
        float r9374778 = r9374774 + r9374777;
        float r9374779 = 0.602927;
        float r9374780 = r9374776 * r9374752;
        float r9374781 = r9374779 * r9374780;
        float r9374782 = r9374778 + r9374781;
        float r9374783 = -0.066992;
        float r9374784 = r9374780 * r9374752;
        float r9374785 = r9374783 * r9374784;
        float r9374786 = r9374782 + r9374785;
        float r9374787 = 0.005359;
        float r9374788 = r9374784 * r9374752;
        float r9374789 = r9374787 * r9374788;
        float r9374790 = r9374786 + r9374789;
        float r9374791 = -0.00031;
        float r9374792 = r9374788 * r9374752;
        float r9374793 = r9374791 * r9374792;
        float r9374794 = r9374790 + r9374793;
        float r9374795 = 1.3e-05;
        float r9374796 = r9374792 * r9374752;
        float r9374797 = r9374795 * r9374796;
        float r9374798 = r9374794 + r9374797;
        return r9374798;
}

double f_id(double x) {
        double r9374799 = 1.0;
        double r9374800 = -17.0;
        double r9374801 = x;
        double r9374802 = r9374800 * r9374801;
        double r9374803 = r9374799 + r9374802;
        double r9374804 = 68.0;
        double r9374805 = r9374801 * r9374801;
        double r9374806 = r9374804 * r9374805;
        double r9374807 = r9374803 + r9374806;
        double r9374808 = -113.333333;
        double r9374809 = r9374805 * r9374801;
        double r9374810 = r9374808 * r9374809;
        double r9374811 = r9374807 + r9374810;
        double r9374812 = 99.166667;
        double r9374813 = r9374809 * r9374801;
        double r9374814 = r9374812 * r9374813;
        double r9374815 = r9374811 + r9374814;
        double r9374816 = -51.566667;
        double r9374817 = r9374813 * r9374801;
        double r9374818 = r9374816 * r9374817;
        double r9374819 = r9374815 + r9374818;
        double r9374820 = 17.188889;
        double r9374821 = r9374817 * r9374801;
        double r9374822 = r9374820 * r9374821;
        double r9374823 = r9374819 + r9374822;
        double r9374824 = -3.85873;
        double r9374825 = r9374821 * r9374801;
        double r9374826 = r9374824 * r9374825;
        double r9374827 = r9374823 + r9374826;
        double r9374828 = 0.602927;
        double r9374829 = r9374825 * r9374801;
        double r9374830 = r9374828 * r9374829;
        double r9374831 = r9374827 + r9374830;
        double r9374832 = -0.066992;
        double r9374833 = r9374829 * r9374801;
        double r9374834 = r9374832 * r9374833;
        double r9374835 = r9374831 + r9374834;
        double r9374836 = 0.005359;
        double r9374837 = r9374833 * r9374801;
        double r9374838 = r9374836 * r9374837;
        double r9374839 = r9374835 + r9374838;
        double r9374840 = -0.00031;
        double r9374841 = r9374837 * r9374801;
        double r9374842 = r9374840 * r9374841;
        double r9374843 = r9374839 + r9374842;
        double r9374844 = 1.3e-05;
        double r9374845 = r9374841 * r9374801;
        double r9374846 = r9374844 * r9374845;
        double r9374847 = r9374843 + r9374846;
        return r9374847;
}


double f_of(float x) {
        float r9374848 = 1.0;
        float r9374849 = -17.0;
        float r9374850 = x;
        float r9374851 = r9374849 * r9374850;
        float r9374852 = r9374848 + r9374851;
        float r9374853 = 68.0;
        float r9374854 = r9374853 * r9374850;
        float r9374855 = r9374854 * r9374850;
        float r9374856 = r9374852 + r9374855;
        float r9374857 = -113.333333;
        float r9374858 = r9374850 * r9374850;
        float r9374859 = r9374858 * r9374850;
        float r9374860 = r9374857 * r9374859;
        float r9374861 = r9374856 + r9374860;
        float r9374862 = 99.166667;
        float r9374863 = r9374859 * r9374850;
        float r9374864 = r9374862 * r9374863;
        float r9374865 = r9374861 + r9374864;
        float r9374866 = -51.566667;
        float r9374867 = r9374863 * r9374850;
        float r9374868 = r9374866 * r9374867;
        float r9374869 = r9374865 + r9374868;
        float r9374870 = 17.188889;
        float r9374871 = r9374867 * r9374850;
        float r9374872 = r9374870 * r9374871;
        float r9374873 = r9374869 + r9374872;
        float r9374874 = -3.85873;
        float r9374875 = r9374871 * r9374850;
        float r9374876 = r9374874 * r9374875;
        float r9374877 = r9374873 + r9374876;
        float r9374878 = 0.602927;
        float r9374879 = r9374875 * r9374850;
        float r9374880 = r9374878 * r9374879;
        float r9374881 = r9374877 + r9374880;
        float r9374882 = -0.066992;
        float r9374883 = r9374879 * r9374850;
        float r9374884 = r9374882 * r9374883;
        float r9374885 = r9374881 + r9374884;
        float r9374886 = 0.005359;
        float r9374887 = r9374883 * r9374850;
        float r9374888 = r9374886 * r9374887;
        float r9374889 = r9374885 + r9374888;
        float r9374890 = -0.00031;
        float r9374891 = r9374887 * r9374850;
        float r9374892 = r9374890 * r9374891;
        float r9374893 = r9374889 + r9374892;
        float r9374894 = 1.3e-05;
        float r9374895 = r9374891 * r9374850;
        float r9374896 = r9374894 * r9374895;
        float r9374897 = r9374893 + r9374896;
        return r9374897;
}

double f_od(double x) {
        double r9374898 = 1.0;
        double r9374899 = -17.0;
        double r9374900 = x;
        double r9374901 = r9374899 * r9374900;
        double r9374902 = r9374898 + r9374901;
        double r9374903 = 68.0;
        double r9374904 = r9374903 * r9374900;
        double r9374905 = r9374904 * r9374900;
        double r9374906 = r9374902 + r9374905;
        double r9374907 = -113.333333;
        double r9374908 = r9374900 * r9374900;
        double r9374909 = r9374908 * r9374900;
        double r9374910 = r9374907 * r9374909;
        double r9374911 = r9374906 + r9374910;
        double r9374912 = 99.166667;
        double r9374913 = r9374909 * r9374900;
        double r9374914 = r9374912 * r9374913;
        double r9374915 = r9374911 + r9374914;
        double r9374916 = -51.566667;
        double r9374917 = r9374913 * r9374900;
        double r9374918 = r9374916 * r9374917;
        double r9374919 = r9374915 + r9374918;
        double r9374920 = 17.188889;
        double r9374921 = r9374917 * r9374900;
        double r9374922 = r9374920 * r9374921;
        double r9374923 = r9374919 + r9374922;
        double r9374924 = -3.85873;
        double r9374925 = r9374921 * r9374900;
        double r9374926 = r9374924 * r9374925;
        double r9374927 = r9374923 + r9374926;
        double r9374928 = 0.602927;
        double r9374929 = r9374925 * r9374900;
        double r9374930 = r9374928 * r9374929;
        double r9374931 = r9374927 + r9374930;
        double r9374932 = -0.066992;
        double r9374933 = r9374929 * r9374900;
        double r9374934 = r9374932 * r9374933;
        double r9374935 = r9374931 + r9374934;
        double r9374936 = 0.005359;
        double r9374937 = r9374933 * r9374900;
        double r9374938 = r9374936 * r9374937;
        double r9374939 = r9374935 + r9374938;
        double r9374940 = -0.00031;
        double r9374941 = r9374937 * r9374900;
        double r9374942 = r9374940 * r9374941;
        double r9374943 = r9374939 + r9374942;
        double r9374944 = 1.3e-05;
        double r9374945 = r9374941 * r9374900;
        double r9374946 = r9374944 * r9374945;
        double r9374947 = r9374943 + r9374946;
        return r9374947;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9374948, r9374949, r9374950, r9374951, r9374952, r9374953, r9374954, r9374955, r9374956, r9374957, r9374958, r9374959, r9374960, r9374961, r9374962, r9374963, r9374964, r9374965, r9374966, r9374967, r9374968, r9374969, r9374970, r9374971, r9374972, r9374973, r9374974, r9374975, r9374976, r9374977, r9374978, r9374979, r9374980, r9374981, r9374982, r9374983, r9374984, r9374985, r9374986, r9374987, r9374988, r9374989, r9374990, r9374991, r9374992, r9374993, r9374994, r9374995, r9374996;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9374948, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9374949, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r9374950);
        mpfr_init(r9374951);
        mpfr_init(r9374952);
        mpfr_init_set_str(r9374953, "68.0", 10, MPFR_RNDN);
        mpfr_init(r9374954);
        mpfr_init(r9374955);
        mpfr_init(r9374956);
        mpfr_init_set_str(r9374957, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r9374958);
        mpfr_init(r9374959);
        mpfr_init(r9374960);
        mpfr_init_set_str(r9374961, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r9374962);
        mpfr_init(r9374963);
        mpfr_init(r9374964);
        mpfr_init_set_str(r9374965, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r9374966);
        mpfr_init(r9374967);
        mpfr_init(r9374968);
        mpfr_init_set_str(r9374969, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r9374970);
        mpfr_init(r9374971);
        mpfr_init(r9374972);
        mpfr_init_set_str(r9374973, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r9374974);
        mpfr_init(r9374975);
        mpfr_init(r9374976);
        mpfr_init_set_str(r9374977, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r9374978);
        mpfr_init(r9374979);
        mpfr_init(r9374980);
        mpfr_init_set_str(r9374981, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r9374982);
        mpfr_init(r9374983);
        mpfr_init(r9374984);
        mpfr_init_set_str(r9374985, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r9374986);
        mpfr_init(r9374987);
        mpfr_init(r9374988);
        mpfr_init_set_str(r9374989, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r9374990);
        mpfr_init(r9374991);
        mpfr_init(r9374992);
        mpfr_init_set_str(r9374993, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r9374994);
        mpfr_init(r9374995);
        mpfr_init(r9374996);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9374950, x, MPFR_RNDN);
        mpfr_mul(r9374951, r9374949, r9374950, MPFR_RNDN);
        mpfr_add(r9374952, r9374948, r9374951, MPFR_RNDN);
        ;
        mpfr_mul(r9374954, r9374950, r9374950, MPFR_RNDN);
        mpfr_mul(r9374955, r9374953, r9374954, MPFR_RNDN);
        mpfr_add(r9374956, r9374952, r9374955, MPFR_RNDN);
        ;
        mpfr_mul(r9374958, r9374954, r9374950, MPFR_RNDN);
        mpfr_mul(r9374959, r9374957, r9374958, MPFR_RNDN);
        mpfr_add(r9374960, r9374956, r9374959, MPFR_RNDN);
        ;
        mpfr_mul(r9374962, r9374958, r9374950, MPFR_RNDN);
        mpfr_mul(r9374963, r9374961, r9374962, MPFR_RNDN);
        mpfr_add(r9374964, r9374960, r9374963, MPFR_RNDN);
        ;
        mpfr_mul(r9374966, r9374962, r9374950, MPFR_RNDN);
        mpfr_mul(r9374967, r9374965, r9374966, MPFR_RNDN);
        mpfr_add(r9374968, r9374964, r9374967, MPFR_RNDN);
        ;
        mpfr_mul(r9374970, r9374966, r9374950, MPFR_RNDN);
        mpfr_mul(r9374971, r9374969, r9374970, MPFR_RNDN);
        mpfr_add(r9374972, r9374968, r9374971, MPFR_RNDN);
        ;
        mpfr_mul(r9374974, r9374970, r9374950, MPFR_RNDN);
        mpfr_mul(r9374975, r9374973, r9374974, MPFR_RNDN);
        mpfr_add(r9374976, r9374972, r9374975, MPFR_RNDN);
        ;
        mpfr_mul(r9374978, r9374974, r9374950, MPFR_RNDN);
        mpfr_mul(r9374979, r9374977, r9374978, MPFR_RNDN);
        mpfr_add(r9374980, r9374976, r9374979, MPFR_RNDN);
        ;
        mpfr_mul(r9374982, r9374978, r9374950, MPFR_RNDN);
        mpfr_mul(r9374983, r9374981, r9374982, MPFR_RNDN);
        mpfr_add(r9374984, r9374980, r9374983, MPFR_RNDN);
        ;
        mpfr_mul(r9374986, r9374982, r9374950, MPFR_RNDN);
        mpfr_mul(r9374987, r9374985, r9374986, MPFR_RNDN);
        mpfr_add(r9374988, r9374984, r9374987, MPFR_RNDN);
        ;
        mpfr_mul(r9374990, r9374986, r9374950, MPFR_RNDN);
        mpfr_mul(r9374991, r9374989, r9374990, MPFR_RNDN);
        mpfr_add(r9374992, r9374988, r9374991, MPFR_RNDN);
        ;
        mpfr_mul(r9374994, r9374990, r9374950, MPFR_RNDN);
        mpfr_mul(r9374995, r9374993, r9374994, MPFR_RNDN);
        mpfr_add(r9374996, r9374992, r9374995, MPFR_RNDN);
        return mpfr_get_d(r9374996, MPFR_RNDN);
}

static mpfr_t r9374997, r9374998, r9374999, r9375000, r9375001, r9375002, r9375003, r9375004, r9375005, r9375006, r9375007, r9375008, r9375009, r9375010, r9375011, r9375012, r9375013, r9375014, r9375015, r9375016, r9375017, r9375018, r9375019, r9375020, r9375021, r9375022, r9375023, r9375024, r9375025, r9375026, r9375027, r9375028, r9375029, r9375030, r9375031, r9375032, r9375033, r9375034, r9375035, r9375036, r9375037, r9375038, r9375039, r9375040, r9375041, r9375042, r9375043, r9375044, r9375045, r9375046;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9374997, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9374998, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r9374999);
        mpfr_init(r9375000);
        mpfr_init(r9375001);
        mpfr_init_set_str(r9375002, "68.0", 10, MPFR_RNDN);
        mpfr_init(r9375003);
        mpfr_init(r9375004);
        mpfr_init(r9375005);
        mpfr_init_set_str(r9375006, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r9375007);
        mpfr_init(r9375008);
        mpfr_init(r9375009);
        mpfr_init(r9375010);
        mpfr_init_set_str(r9375011, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r9375012);
        mpfr_init(r9375013);
        mpfr_init(r9375014);
        mpfr_init_set_str(r9375015, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r9375016);
        mpfr_init(r9375017);
        mpfr_init(r9375018);
        mpfr_init_set_str(r9375019, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r9375020);
        mpfr_init(r9375021);
        mpfr_init(r9375022);
        mpfr_init_set_str(r9375023, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r9375024);
        mpfr_init(r9375025);
        mpfr_init(r9375026);
        mpfr_init_set_str(r9375027, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r9375028);
        mpfr_init(r9375029);
        mpfr_init(r9375030);
        mpfr_init_set_str(r9375031, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r9375032);
        mpfr_init(r9375033);
        mpfr_init(r9375034);
        mpfr_init_set_str(r9375035, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r9375036);
        mpfr_init(r9375037);
        mpfr_init(r9375038);
        mpfr_init_set_str(r9375039, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r9375040);
        mpfr_init(r9375041);
        mpfr_init(r9375042);
        mpfr_init_set_str(r9375043, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r9375044);
        mpfr_init(r9375045);
        mpfr_init(r9375046);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9374999, x, MPFR_RNDN);
        mpfr_mul(r9375000, r9374998, r9374999, MPFR_RNDN);
        mpfr_add(r9375001, r9374997, r9375000, MPFR_RNDN);
        ;
        mpfr_mul(r9375003, r9375002, r9374999, MPFR_RNDN);
        mpfr_mul(r9375004, r9375003, r9374999, MPFR_RNDN);
        mpfr_add(r9375005, r9375001, r9375004, MPFR_RNDN);
        ;
        mpfr_mul(r9375007, r9374999, r9374999, MPFR_RNDN);
        mpfr_mul(r9375008, r9375007, r9374999, MPFR_RNDN);
        mpfr_mul(r9375009, r9375006, r9375008, MPFR_RNDN);
        mpfr_add(r9375010, r9375005, r9375009, MPFR_RNDN);
        ;
        mpfr_mul(r9375012, r9375008, r9374999, MPFR_RNDN);
        mpfr_mul(r9375013, r9375011, r9375012, MPFR_RNDN);
        mpfr_add(r9375014, r9375010, r9375013, MPFR_RNDN);
        ;
        mpfr_mul(r9375016, r9375012, r9374999, MPFR_RNDN);
        mpfr_mul(r9375017, r9375015, r9375016, MPFR_RNDN);
        mpfr_add(r9375018, r9375014, r9375017, MPFR_RNDN);
        ;
        mpfr_mul(r9375020, r9375016, r9374999, MPFR_RNDN);
        mpfr_mul(r9375021, r9375019, r9375020, MPFR_RNDN);
        mpfr_add(r9375022, r9375018, r9375021, MPFR_RNDN);
        ;
        mpfr_mul(r9375024, r9375020, r9374999, MPFR_RNDN);
        mpfr_mul(r9375025, r9375023, r9375024, MPFR_RNDN);
        mpfr_add(r9375026, r9375022, r9375025, MPFR_RNDN);
        ;
        mpfr_mul(r9375028, r9375024, r9374999, MPFR_RNDN);
        mpfr_mul(r9375029, r9375027, r9375028, MPFR_RNDN);
        mpfr_add(r9375030, r9375026, r9375029, MPFR_RNDN);
        ;
        mpfr_mul(r9375032, r9375028, r9374999, MPFR_RNDN);
        mpfr_mul(r9375033, r9375031, r9375032, MPFR_RNDN);
        mpfr_add(r9375034, r9375030, r9375033, MPFR_RNDN);
        ;
        mpfr_mul(r9375036, r9375032, r9374999, MPFR_RNDN);
        mpfr_mul(r9375037, r9375035, r9375036, MPFR_RNDN);
        mpfr_add(r9375038, r9375034, r9375037, MPFR_RNDN);
        ;
        mpfr_mul(r9375040, r9375036, r9374999, MPFR_RNDN);
        mpfr_mul(r9375041, r9375039, r9375040, MPFR_RNDN);
        mpfr_add(r9375042, r9375038, r9375041, MPFR_RNDN);
        ;
        mpfr_mul(r9375044, r9375040, r9374999, MPFR_RNDN);
        mpfr_mul(r9375045, r9375043, r9375044, MPFR_RNDN);
        mpfr_add(r9375046, r9375042, r9375045, MPFR_RNDN);
        return mpfr_get_d(r9375046, MPFR_RNDN);
}

static mpfr_t r9375047, r9375048, r9375049, r9375050, r9375051, r9375052, r9375053, r9375054, r9375055, r9375056, r9375057, r9375058, r9375059, r9375060, r9375061, r9375062, r9375063, r9375064, r9375065, r9375066, r9375067, r9375068, r9375069, r9375070, r9375071, r9375072, r9375073, r9375074, r9375075, r9375076, r9375077, r9375078, r9375079, r9375080, r9375081, r9375082, r9375083, r9375084, r9375085, r9375086, r9375087, r9375088, r9375089, r9375090, r9375091, r9375092, r9375093, r9375094, r9375095, r9375096;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9375047, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9375048, "-17.0", 10, MPFR_RNDN);
        mpfr_init(r9375049);
        mpfr_init(r9375050);
        mpfr_init(r9375051);
        mpfr_init_set_str(r9375052, "68.0", 10, MPFR_RNDN);
        mpfr_init(r9375053);
        mpfr_init(r9375054);
        mpfr_init(r9375055);
        mpfr_init_set_str(r9375056, "-113.333333", 10, MPFR_RNDN);
        mpfr_init(r9375057);
        mpfr_init(r9375058);
        mpfr_init(r9375059);
        mpfr_init(r9375060);
        mpfr_init_set_str(r9375061, "99.166667", 10, MPFR_RNDN);
        mpfr_init(r9375062);
        mpfr_init(r9375063);
        mpfr_init(r9375064);
        mpfr_init_set_str(r9375065, "-51.566667", 10, MPFR_RNDN);
        mpfr_init(r9375066);
        mpfr_init(r9375067);
        mpfr_init(r9375068);
        mpfr_init_set_str(r9375069, "17.188889", 10, MPFR_RNDN);
        mpfr_init(r9375070);
        mpfr_init(r9375071);
        mpfr_init(r9375072);
        mpfr_init_set_str(r9375073, "-3.85873", 10, MPFR_RNDN);
        mpfr_init(r9375074);
        mpfr_init(r9375075);
        mpfr_init(r9375076);
        mpfr_init_set_str(r9375077, "0.602927", 10, MPFR_RNDN);
        mpfr_init(r9375078);
        mpfr_init(r9375079);
        mpfr_init(r9375080);
        mpfr_init_set_str(r9375081, "-0.066992", 10, MPFR_RNDN);
        mpfr_init(r9375082);
        mpfr_init(r9375083);
        mpfr_init(r9375084);
        mpfr_init_set_str(r9375085, "0.005359", 10, MPFR_RNDN);
        mpfr_init(r9375086);
        mpfr_init(r9375087);
        mpfr_init(r9375088);
        mpfr_init_set_str(r9375089, "-0.00031", 10, MPFR_RNDN);
        mpfr_init(r9375090);
        mpfr_init(r9375091);
        mpfr_init(r9375092);
        mpfr_init_set_str(r9375093, "1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r9375094);
        mpfr_init(r9375095);
        mpfr_init(r9375096);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9375049, x, MPFR_RNDN);
        mpfr_mul(r9375050, r9375048, r9375049, MPFR_RNDN);
        mpfr_add(r9375051, r9375047, r9375050, MPFR_RNDN);
        ;
        mpfr_mul(r9375053, r9375052, r9375049, MPFR_RNDN);
        mpfr_mul(r9375054, r9375053, r9375049, MPFR_RNDN);
        mpfr_add(r9375055, r9375051, r9375054, MPFR_RNDN);
        ;
        mpfr_mul(r9375057, r9375049, r9375049, MPFR_RNDN);
        mpfr_mul(r9375058, r9375057, r9375049, MPFR_RNDN);
        mpfr_mul(r9375059, r9375056, r9375058, MPFR_RNDN);
        mpfr_add(r9375060, r9375055, r9375059, MPFR_RNDN);
        ;
        mpfr_mul(r9375062, r9375058, r9375049, MPFR_RNDN);
        mpfr_mul(r9375063, r9375061, r9375062, MPFR_RNDN);
        mpfr_add(r9375064, r9375060, r9375063, MPFR_RNDN);
        ;
        mpfr_mul(r9375066, r9375062, r9375049, MPFR_RNDN);
        mpfr_mul(r9375067, r9375065, r9375066, MPFR_RNDN);
        mpfr_add(r9375068, r9375064, r9375067, MPFR_RNDN);
        ;
        mpfr_mul(r9375070, r9375066, r9375049, MPFR_RNDN);
        mpfr_mul(r9375071, r9375069, r9375070, MPFR_RNDN);
        mpfr_add(r9375072, r9375068, r9375071, MPFR_RNDN);
        ;
        mpfr_mul(r9375074, r9375070, r9375049, MPFR_RNDN);
        mpfr_mul(r9375075, r9375073, r9375074, MPFR_RNDN);
        mpfr_add(r9375076, r9375072, r9375075, MPFR_RNDN);
        ;
        mpfr_mul(r9375078, r9375074, r9375049, MPFR_RNDN);
        mpfr_mul(r9375079, r9375077, r9375078, MPFR_RNDN);
        mpfr_add(r9375080, r9375076, r9375079, MPFR_RNDN);
        ;
        mpfr_mul(r9375082, r9375078, r9375049, MPFR_RNDN);
        mpfr_mul(r9375083, r9375081, r9375082, MPFR_RNDN);
        mpfr_add(r9375084, r9375080, r9375083, MPFR_RNDN);
        ;
        mpfr_mul(r9375086, r9375082, r9375049, MPFR_RNDN);
        mpfr_mul(r9375087, r9375085, r9375086, MPFR_RNDN);
        mpfr_add(r9375088, r9375084, r9375087, MPFR_RNDN);
        ;
        mpfr_mul(r9375090, r9375086, r9375049, MPFR_RNDN);
        mpfr_mul(r9375091, r9375089, r9375090, MPFR_RNDN);
        mpfr_add(r9375092, r9375088, r9375091, MPFR_RNDN);
        ;
        mpfr_mul(r9375094, r9375090, r9375049, MPFR_RNDN);
        mpfr_mul(r9375095, r9375093, r9375094, MPFR_RNDN);
        mpfr_add(r9375096, r9375092, r9375095, MPFR_RNDN);
        return mpfr_get_d(r9375096, MPFR_RNDN);
}
