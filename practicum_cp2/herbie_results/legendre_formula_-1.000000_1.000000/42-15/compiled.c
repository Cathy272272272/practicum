#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r10047825 = -3.14209;
        float r10047826 = x;
        float r10047827 = r10047825 * r10047826;
        float r10047828 = 124.63623;
        float r10047829 = r10047826 * r10047826;
        float r10047830 = r10047829 * r10047826;
        float r10047831 = r10047828 * r10047830;
        float r10047832 = r10047827 + r10047831;
        float r10047833 = -1420.853027;
        float r10047834 = r10047830 * r10047826;
        float r10047835 = r10047834 * r10047826;
        float r10047836 = r10047833 * r10047835;
        float r10047837 = r10047832 + r10047836;
        float r10047838 = 7104.265137;
        float r10047839 = r10047835 * r10047826;
        float r10047840 = r10047839 * r10047826;
        float r10047841 = r10047838 * r10047840;
        float r10047842 = r10047837 + r10047841;
        float r10047843 = -18155.344238;
        float r10047844 = r10047840 * r10047826;
        float r10047845 = r10047844 * r10047826;
        float r10047846 = r10047843 * r10047845;
        float r10047847 = r10047842 + r10047846;
        float r10047848 = 24757.287598;
        float r10047849 = r10047845 * r10047826;
        float r10047850 = r10047849 * r10047826;
        float r10047851 = r10047848 * r10047850;
        float r10047852 = r10047847 + r10047851;
        float r10047853 = -17139.660645;
        float r10047854 = r10047850 * r10047826;
        float r10047855 = r10047854 * r10047826;
        float r10047856 = r10047853 * r10047855;
        float r10047857 = r10047852 + r10047856;
        float r10047858 = 4733.811035;
        float r10047859 = r10047855 * r10047826;
        float r10047860 = r10047859 * r10047826;
        float r10047861 = r10047858 * r10047860;
        float r10047862 = r10047857 + r10047861;
        return r10047862;
}

double f_id(double x) {
        double r10047863 = -3.14209;
        double r10047864 = x;
        double r10047865 = r10047863 * r10047864;
        double r10047866 = 124.63623;
        double r10047867 = r10047864 * r10047864;
        double r10047868 = r10047867 * r10047864;
        double r10047869 = r10047866 * r10047868;
        double r10047870 = r10047865 + r10047869;
        double r10047871 = -1420.853027;
        double r10047872 = r10047868 * r10047864;
        double r10047873 = r10047872 * r10047864;
        double r10047874 = r10047871 * r10047873;
        double r10047875 = r10047870 + r10047874;
        double r10047876 = 7104.265137;
        double r10047877 = r10047873 * r10047864;
        double r10047878 = r10047877 * r10047864;
        double r10047879 = r10047876 * r10047878;
        double r10047880 = r10047875 + r10047879;
        double r10047881 = -18155.344238;
        double r10047882 = r10047878 * r10047864;
        double r10047883 = r10047882 * r10047864;
        double r10047884 = r10047881 * r10047883;
        double r10047885 = r10047880 + r10047884;
        double r10047886 = 24757.287598;
        double r10047887 = r10047883 * r10047864;
        double r10047888 = r10047887 * r10047864;
        double r10047889 = r10047886 * r10047888;
        double r10047890 = r10047885 + r10047889;
        double r10047891 = -17139.660645;
        double r10047892 = r10047888 * r10047864;
        double r10047893 = r10047892 * r10047864;
        double r10047894 = r10047891 * r10047893;
        double r10047895 = r10047890 + r10047894;
        double r10047896 = 4733.811035;
        double r10047897 = r10047893 * r10047864;
        double r10047898 = r10047897 * r10047864;
        double r10047899 = r10047896 * r10047898;
        double r10047900 = r10047895 + r10047899;
        return r10047900;
}


double f_of(float x) {
        float r10047901 = x;
        float r10047902 = r10047901 * r10047901;
        float r10047903 = r10047902 * r10047902;
        float r10047904 = 3;
        float r10047905 = pow(r10047901, r10047904);
        float r10047906 = r10047905 * r10047905;
        float r10047907 = r10047905 * r10047906;
        float r10047908 = r10047903 * r10047907;
        float r10047909 = 4733.811035;
        float r10047910 = r10047909 * r10047901;
        float r10047911 = r10047901 * r10047910;
        float r10047912 = -17139.660645;
        float r10047913 = r10047911 + r10047912;
        float r10047914 = r10047908 * r10047913;
        float r10047915 = 7104.265137;
        float r10047916 = r10047915 * r10047901;
        float r10047917 = r10047916 * r10047902;
        float r10047918 = r10047917 * r10047903;
        float r10047919 = -3.14209;
        float r10047920 = r10047919 * r10047901;
        float r10047921 = r10047918 + r10047920;
        float r10047922 = -1420.853027;
        float r10047923 = r10047901 * r10047922;
        float r10047924 = r10047923 * r10047902;
        float r10047925 = 124.63623;
        float r10047926 = r10047925 * r10047901;
        float r10047927 = r10047924 + r10047926;
        float r10047928 = r10047902 * r10047927;
        float r10047929 = r10047921 + r10047928;
        float r10047930 = r10047914 + r10047929;
        float r10047931 = -18155.344238;
        float r10047932 = 24757.287598;
        float r10047933 = r10047901 * r10047932;
        float r10047934 = r10047901 * r10047933;
        float r10047935 = r10047931 + r10047934;
        float r10047936 = r10047907 * r10047935;
        float r10047937 = r10047930 + r10047936;
        return r10047937;
}

double f_od(double x) {
        double r10047938 = x;
        double r10047939 = r10047938 * r10047938;
        double r10047940 = r10047939 * r10047939;
        double r10047941 = 3;
        double r10047942 = pow(r10047938, r10047941);
        double r10047943 = r10047942 * r10047942;
        double r10047944 = r10047942 * r10047943;
        double r10047945 = r10047940 * r10047944;
        double r10047946 = 4733.811035;
        double r10047947 = r10047946 * r10047938;
        double r10047948 = r10047938 * r10047947;
        double r10047949 = -17139.660645;
        double r10047950 = r10047948 + r10047949;
        double r10047951 = r10047945 * r10047950;
        double r10047952 = 7104.265137;
        double r10047953 = r10047952 * r10047938;
        double r10047954 = r10047953 * r10047939;
        double r10047955 = r10047954 * r10047940;
        double r10047956 = -3.14209;
        double r10047957 = r10047956 * r10047938;
        double r10047958 = r10047955 + r10047957;
        double r10047959 = -1420.853027;
        double r10047960 = r10047938 * r10047959;
        double r10047961 = r10047960 * r10047939;
        double r10047962 = 124.63623;
        double r10047963 = r10047962 * r10047938;
        double r10047964 = r10047961 + r10047963;
        double r10047965 = r10047939 * r10047964;
        double r10047966 = r10047958 + r10047965;
        double r10047967 = r10047951 + r10047966;
        double r10047968 = -18155.344238;
        double r10047969 = 24757.287598;
        double r10047970 = r10047938 * r10047969;
        double r10047971 = r10047938 * r10047970;
        double r10047972 = r10047968 + r10047971;
        double r10047973 = r10047944 * r10047972;
        double r10047974 = r10047967 + r10047973;
        return r10047974;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10047975, r10047976, r10047977, r10047978, r10047979, r10047980, r10047981, r10047982, r10047983, r10047984, r10047985, r10047986, r10047987, r10047988, r10047989, r10047990, r10047991, r10047992, r10047993, r10047994, r10047995, r10047996, r10047997, r10047998, r10047999, r10048000, r10048001, r10048002, r10048003, r10048004, r10048005, r10048006, r10048007, r10048008, r10048009, r10048010, r10048011, r10048012;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10047975, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r10047976);
        mpfr_init(r10047977);
        mpfr_init_set_str(r10047978, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r10047979);
        mpfr_init(r10047980);
        mpfr_init(r10047981);
        mpfr_init(r10047982);
        mpfr_init_set_str(r10047983, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r10047984);
        mpfr_init(r10047985);
        mpfr_init(r10047986);
        mpfr_init(r10047987);
        mpfr_init_set_str(r10047988, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r10047989);
        mpfr_init(r10047990);
        mpfr_init(r10047991);
        mpfr_init(r10047992);
        mpfr_init_set_str(r10047993, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init(r10047994);
        mpfr_init(r10047995);
        mpfr_init(r10047996);
        mpfr_init(r10047997);
        mpfr_init_set_str(r10047998, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r10047999);
        mpfr_init(r10048000);
        mpfr_init(r10048001);
        mpfr_init(r10048002);
        mpfr_init_set_str(r10048003, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r10048004);
        mpfr_init(r10048005);
        mpfr_init(r10048006);
        mpfr_init(r10048007);
        mpfr_init_set_str(r10048008, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r10048009);
        mpfr_init(r10048010);
        mpfr_init(r10048011);
        mpfr_init(r10048012);
}

double f_im(double x) {
        ;
        mpfr_set_d(r10047976, x, MPFR_RNDN);
        mpfr_mul(r10047977, r10047975, r10047976, MPFR_RNDN);
        ;
        mpfr_mul(r10047979, r10047976, r10047976, MPFR_RNDN);
        mpfr_mul(r10047980, r10047979, r10047976, MPFR_RNDN);
        mpfr_mul(r10047981, r10047978, r10047980, MPFR_RNDN);
        mpfr_add(r10047982, r10047977, r10047981, MPFR_RNDN);
        ;
        mpfr_mul(r10047984, r10047980, r10047976, MPFR_RNDN);
        mpfr_mul(r10047985, r10047984, r10047976, MPFR_RNDN);
        mpfr_mul(r10047986, r10047983, r10047985, MPFR_RNDN);
        mpfr_add(r10047987, r10047982, r10047986, MPFR_RNDN);
        ;
        mpfr_mul(r10047989, r10047985, r10047976, MPFR_RNDN);
        mpfr_mul(r10047990, r10047989, r10047976, MPFR_RNDN);
        mpfr_mul(r10047991, r10047988, r10047990, MPFR_RNDN);
        mpfr_add(r10047992, r10047987, r10047991, MPFR_RNDN);
        ;
        mpfr_mul(r10047994, r10047990, r10047976, MPFR_RNDN);
        mpfr_mul(r10047995, r10047994, r10047976, MPFR_RNDN);
        mpfr_mul(r10047996, r10047993, r10047995, MPFR_RNDN);
        mpfr_add(r10047997, r10047992, r10047996, MPFR_RNDN);
        ;
        mpfr_mul(r10047999, r10047995, r10047976, MPFR_RNDN);
        mpfr_mul(r10048000, r10047999, r10047976, MPFR_RNDN);
        mpfr_mul(r10048001, r10047998, r10048000, MPFR_RNDN);
        mpfr_add(r10048002, r10047997, r10048001, MPFR_RNDN);
        ;
        mpfr_mul(r10048004, r10048000, r10047976, MPFR_RNDN);
        mpfr_mul(r10048005, r10048004, r10047976, MPFR_RNDN);
        mpfr_mul(r10048006, r10048003, r10048005, MPFR_RNDN);
        mpfr_add(r10048007, r10048002, r10048006, MPFR_RNDN);
        ;
        mpfr_mul(r10048009, r10048005, r10047976, MPFR_RNDN);
        mpfr_mul(r10048010, r10048009, r10047976, MPFR_RNDN);
        mpfr_mul(r10048011, r10048008, r10048010, MPFR_RNDN);
        mpfr_add(r10048012, r10048007, r10048011, MPFR_RNDN);
        return mpfr_get_d(r10048012, MPFR_RNDN);
}

static mpfr_t r10048013, r10048014, r10048015, r10048016, r10048017, r10048018, r10048019, r10048020, r10048021, r10048022, r10048023, r10048024, r10048025, r10048026, r10048027, r10048028, r10048029, r10048030, r10048031, r10048032, r10048033, r10048034, r10048035, r10048036, r10048037, r10048038, r10048039, r10048040, r10048041, r10048042, r10048043, r10048044, r10048045, r10048046, r10048047, r10048048, r10048049;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10048013);
        mpfr_init(r10048014);
        mpfr_init(r10048015);
        mpfr_init_set_str(r10048016, "3", 10, MPFR_RNDN);
        mpfr_init(r10048017);
        mpfr_init(r10048018);
        mpfr_init(r10048019);
        mpfr_init(r10048020);
        mpfr_init_set_str(r10048021, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r10048022);
        mpfr_init(r10048023);
        mpfr_init_set_str(r10048024, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r10048025);
        mpfr_init(r10048026);
        mpfr_init_set_str(r10048027, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r10048028);
        mpfr_init(r10048029);
        mpfr_init(r10048030);
        mpfr_init_set_str(r10048031, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r10048032);
        mpfr_init(r10048033);
        mpfr_init_set_str(r10048034, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r10048035);
        mpfr_init(r10048036);
        mpfr_init_set_str(r10048037, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r10048038);
        mpfr_init(r10048039);
        mpfr_init(r10048040);
        mpfr_init(r10048041);
        mpfr_init(r10048042);
        mpfr_init_set_str(r10048043, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048044, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r10048045);
        mpfr_init(r10048046);
        mpfr_init(r10048047);
        mpfr_init(r10048048);
        mpfr_init(r10048049);
}

double f_fm(double x) {
        mpfr_set_d(r10048013, x, MPFR_RNDN);
        mpfr_mul(r10048014, r10048013, r10048013, MPFR_RNDN);
        mpfr_mul(r10048015, r10048014, r10048014, MPFR_RNDN);
        ;
        mpfr_pow(r10048017, r10048013, r10048016, MPFR_RNDN);
        mpfr_mul(r10048018, r10048017, r10048017, MPFR_RNDN);
        mpfr_mul(r10048019, r10048017, r10048018, MPFR_RNDN);
        mpfr_mul(r10048020, r10048015, r10048019, MPFR_RNDN);
        ;
        mpfr_mul(r10048022, r10048021, r10048013, MPFR_RNDN);
        mpfr_mul(r10048023, r10048013, r10048022, MPFR_RNDN);
        ;
        mpfr_add(r10048025, r10048023, r10048024, MPFR_RNDN);
        mpfr_mul(r10048026, r10048020, r10048025, MPFR_RNDN);
        ;
        mpfr_mul(r10048028, r10048027, r10048013, MPFR_RNDN);
        mpfr_mul(r10048029, r10048028, r10048014, MPFR_RNDN);
        mpfr_mul(r10048030, r10048029, r10048015, MPFR_RNDN);
        ;
        mpfr_mul(r10048032, r10048031, r10048013, MPFR_RNDN);
        mpfr_add(r10048033, r10048030, r10048032, MPFR_RNDN);
        ;
        mpfr_mul(r10048035, r10048013, r10048034, MPFR_RNDN);
        mpfr_mul(r10048036, r10048035, r10048014, MPFR_RNDN);
        ;
        mpfr_mul(r10048038, r10048037, r10048013, MPFR_RNDN);
        mpfr_add(r10048039, r10048036, r10048038, MPFR_RNDN);
        mpfr_mul(r10048040, r10048014, r10048039, MPFR_RNDN);
        mpfr_add(r10048041, r10048033, r10048040, MPFR_RNDN);
        mpfr_add(r10048042, r10048026, r10048041, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10048045, r10048013, r10048044, MPFR_RNDN);
        mpfr_mul(r10048046, r10048013, r10048045, MPFR_RNDN);
        mpfr_add(r10048047, r10048043, r10048046, MPFR_RNDN);
        mpfr_mul(r10048048, r10048019, r10048047, MPFR_RNDN);
        mpfr_add(r10048049, r10048042, r10048048, MPFR_RNDN);
        return mpfr_get_d(r10048049, MPFR_RNDN);
}

static mpfr_t r10048050, r10048051, r10048052, r10048053, r10048054, r10048055, r10048056, r10048057, r10048058, r10048059, r10048060, r10048061, r10048062, r10048063, r10048064, r10048065, r10048066, r10048067, r10048068, r10048069, r10048070, r10048071, r10048072, r10048073, r10048074, r10048075, r10048076, r10048077, r10048078, r10048079, r10048080, r10048081, r10048082, r10048083, r10048084, r10048085, r10048086;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10048050);
        mpfr_init(r10048051);
        mpfr_init(r10048052);
        mpfr_init_set_str(r10048053, "3", 10, MPFR_RNDN);
        mpfr_init(r10048054);
        mpfr_init(r10048055);
        mpfr_init(r10048056);
        mpfr_init(r10048057);
        mpfr_init_set_str(r10048058, "4733.811035", 10, MPFR_RNDN);
        mpfr_init(r10048059);
        mpfr_init(r10048060);
        mpfr_init_set_str(r10048061, "-17139.660645", 10, MPFR_RNDN);
        mpfr_init(r10048062);
        mpfr_init(r10048063);
        mpfr_init_set_str(r10048064, "7104.265137", 10, MPFR_RNDN);
        mpfr_init(r10048065);
        mpfr_init(r10048066);
        mpfr_init(r10048067);
        mpfr_init_set_str(r10048068, "-3.14209", 10, MPFR_RNDN);
        mpfr_init(r10048069);
        mpfr_init(r10048070);
        mpfr_init_set_str(r10048071, "-1420.853027", 10, MPFR_RNDN);
        mpfr_init(r10048072);
        mpfr_init(r10048073);
        mpfr_init_set_str(r10048074, "124.63623", 10, MPFR_RNDN);
        mpfr_init(r10048075);
        mpfr_init(r10048076);
        mpfr_init(r10048077);
        mpfr_init(r10048078);
        mpfr_init(r10048079);
        mpfr_init_set_str(r10048080, "-18155.344238", 10, MPFR_RNDN);
        mpfr_init_set_str(r10048081, "24757.287598", 10, MPFR_RNDN);
        mpfr_init(r10048082);
        mpfr_init(r10048083);
        mpfr_init(r10048084);
        mpfr_init(r10048085);
        mpfr_init(r10048086);
}

double f_dm(double x) {
        mpfr_set_d(r10048050, x, MPFR_RNDN);
        mpfr_mul(r10048051, r10048050, r10048050, MPFR_RNDN);
        mpfr_mul(r10048052, r10048051, r10048051, MPFR_RNDN);
        ;
        mpfr_pow(r10048054, r10048050, r10048053, MPFR_RNDN);
        mpfr_mul(r10048055, r10048054, r10048054, MPFR_RNDN);
        mpfr_mul(r10048056, r10048054, r10048055, MPFR_RNDN);
        mpfr_mul(r10048057, r10048052, r10048056, MPFR_RNDN);
        ;
        mpfr_mul(r10048059, r10048058, r10048050, MPFR_RNDN);
        mpfr_mul(r10048060, r10048050, r10048059, MPFR_RNDN);
        ;
        mpfr_add(r10048062, r10048060, r10048061, MPFR_RNDN);
        mpfr_mul(r10048063, r10048057, r10048062, MPFR_RNDN);
        ;
        mpfr_mul(r10048065, r10048064, r10048050, MPFR_RNDN);
        mpfr_mul(r10048066, r10048065, r10048051, MPFR_RNDN);
        mpfr_mul(r10048067, r10048066, r10048052, MPFR_RNDN);
        ;
        mpfr_mul(r10048069, r10048068, r10048050, MPFR_RNDN);
        mpfr_add(r10048070, r10048067, r10048069, MPFR_RNDN);
        ;
        mpfr_mul(r10048072, r10048050, r10048071, MPFR_RNDN);
        mpfr_mul(r10048073, r10048072, r10048051, MPFR_RNDN);
        ;
        mpfr_mul(r10048075, r10048074, r10048050, MPFR_RNDN);
        mpfr_add(r10048076, r10048073, r10048075, MPFR_RNDN);
        mpfr_mul(r10048077, r10048051, r10048076, MPFR_RNDN);
        mpfr_add(r10048078, r10048070, r10048077, MPFR_RNDN);
        mpfr_add(r10048079, r10048063, r10048078, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10048082, r10048050, r10048081, MPFR_RNDN);
        mpfr_mul(r10048083, r10048050, r10048082, MPFR_RNDN);
        mpfr_add(r10048084, r10048080, r10048083, MPFR_RNDN);
        mpfr_mul(r10048085, r10048056, r10048084, MPFR_RNDN);
        mpfr_add(r10048086, r10048079, r10048085, MPFR_RNDN);
        return mpfr_get_d(r10048086, MPFR_RNDN);
}

