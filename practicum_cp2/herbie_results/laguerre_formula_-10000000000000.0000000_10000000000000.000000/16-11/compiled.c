#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r11590844 = 1.0;
        float r11590845 = -11.0;
        float r11590846 = x;
        float r11590847 = r11590845 * r11590846;
        float r11590848 = r11590844 + r11590847;
        float r11590849 = 27.5;
        float r11590850 = r11590846 * r11590846;
        float r11590851 = r11590849 * r11590850;
        float r11590852 = r11590848 + r11590851;
        float r11590853 = -27.5;
        float r11590854 = r11590850 * r11590846;
        float r11590855 = r11590853 * r11590854;
        float r11590856 = r11590852 + r11590855;
        float r11590857 = 13.75;
        float r11590858 = r11590854 * r11590846;
        float r11590859 = r11590857 * r11590858;
        float r11590860 = r11590856 + r11590859;
        float r11590861 = -3.85;
        float r11590862 = r11590858 * r11590846;
        float r11590863 = r11590861 * r11590862;
        float r11590864 = r11590860 + r11590863;
        float r11590865 = 0.641667;
        float r11590866 = r11590862 * r11590846;
        float r11590867 = r11590865 * r11590866;
        float r11590868 = r11590864 + r11590867;
        float r11590869 = -0.065476;
        float r11590870 = r11590866 * r11590846;
        float r11590871 = r11590869 * r11590870;
        float r11590872 = r11590868 + r11590871;
        float r11590873 = 0.004092;
        float r11590874 = r11590870 * r11590846;
        float r11590875 = r11590873 * r11590874;
        float r11590876 = r11590872 + r11590875;
        float r11590877 = -0.000152;
        float r11590878 = r11590874 * r11590846;
        float r11590879 = r11590877 * r11590878;
        float r11590880 = r11590876 + r11590879;
        float r11590881 = 3e-06;
        float r11590882 = r11590878 * r11590846;
        float r11590883 = r11590881 * r11590882;
        float r11590884 = r11590880 + r11590883;
        return r11590884;
}

double f_id(double x) {
        double r11590885 = 1.0;
        double r11590886 = -11.0;
        double r11590887 = x;
        double r11590888 = r11590886 * r11590887;
        double r11590889 = r11590885 + r11590888;
        double r11590890 = 27.5;
        double r11590891 = r11590887 * r11590887;
        double r11590892 = r11590890 * r11590891;
        double r11590893 = r11590889 + r11590892;
        double r11590894 = -27.5;
        double r11590895 = r11590891 * r11590887;
        double r11590896 = r11590894 * r11590895;
        double r11590897 = r11590893 + r11590896;
        double r11590898 = 13.75;
        double r11590899 = r11590895 * r11590887;
        double r11590900 = r11590898 * r11590899;
        double r11590901 = r11590897 + r11590900;
        double r11590902 = -3.85;
        double r11590903 = r11590899 * r11590887;
        double r11590904 = r11590902 * r11590903;
        double r11590905 = r11590901 + r11590904;
        double r11590906 = 0.641667;
        double r11590907 = r11590903 * r11590887;
        double r11590908 = r11590906 * r11590907;
        double r11590909 = r11590905 + r11590908;
        double r11590910 = -0.065476;
        double r11590911 = r11590907 * r11590887;
        double r11590912 = r11590910 * r11590911;
        double r11590913 = r11590909 + r11590912;
        double r11590914 = 0.004092;
        double r11590915 = r11590911 * r11590887;
        double r11590916 = r11590914 * r11590915;
        double r11590917 = r11590913 + r11590916;
        double r11590918 = -0.000152;
        double r11590919 = r11590915 * r11590887;
        double r11590920 = r11590918 * r11590919;
        double r11590921 = r11590917 + r11590920;
        double r11590922 = 3e-06;
        double r11590923 = r11590919 * r11590887;
        double r11590924 = r11590922 * r11590923;
        double r11590925 = r11590921 + r11590924;
        return r11590925;
}


double f_of(float x) {
        float r11590926 = x;
        float r11590927 = r11590926 * r11590926;
        float r11590928 = -27.5;
        float r11590929 = r11590928 * r11590926;
        float r11590930 = 27.5;
        float r11590931 = r11590929 + r11590930;
        float r11590932 = r11590927 * r11590931;
        float r11590933 = -11.0;
        float r11590934 = r11590926 * r11590933;
        float r11590935 = 1.0;
        float r11590936 = r11590934 + r11590935;
        float r11590937 = r11590932 + r11590936;
        float r11590938 = 3;
        float r11590939 = pow(r11590926, r11590938);
        float r11590940 = r11590939 * r11590939;
        float r11590941 = 0.641667;
        float r11590942 = -0.065476;
        float r11590943 = r11590942 * r11590926;
        float r11590944 = r11590941 + r11590943;
        float r11590945 = r11590940 * r11590944;
        float r11590946 = r11590927 * r11590927;
        float r11590947 = 13.75;
        float r11590948 = -3.85;
        float r11590949 = r11590948 * r11590926;
        float r11590950 = r11590947 + r11590949;
        float r11590951 = r11590946 * r11590950;
        float r11590952 = r11590945 + r11590951;
        float r11590953 = r11590937 + r11590952;
        float r11590954 = r11590946 * r11590946;
        float r11590955 = 3e-06;
        float r11590956 = r11590955 * r11590927;
        float r11590957 = r11590954 * r11590956;
        float r11590958 = -0.000152;
        float r11590959 = r11590958 * r11590926;
        float r11590960 = 0.004092;
        float r11590961 = r11590959 + r11590960;
        float r11590962 = r11590954 * r11590961;
        float r11590963 = r11590957 + r11590962;
        float r11590964 = r11590953 + r11590963;
        return r11590964;
}

double f_od(double x) {
        double r11590965 = x;
        double r11590966 = r11590965 * r11590965;
        double r11590967 = -27.5;
        double r11590968 = r11590967 * r11590965;
        double r11590969 = 27.5;
        double r11590970 = r11590968 + r11590969;
        double r11590971 = r11590966 * r11590970;
        double r11590972 = -11.0;
        double r11590973 = r11590965 * r11590972;
        double r11590974 = 1.0;
        double r11590975 = r11590973 + r11590974;
        double r11590976 = r11590971 + r11590975;
        double r11590977 = 3;
        double r11590978 = pow(r11590965, r11590977);
        double r11590979 = r11590978 * r11590978;
        double r11590980 = 0.641667;
        double r11590981 = -0.065476;
        double r11590982 = r11590981 * r11590965;
        double r11590983 = r11590980 + r11590982;
        double r11590984 = r11590979 * r11590983;
        double r11590985 = r11590966 * r11590966;
        double r11590986 = 13.75;
        double r11590987 = -3.85;
        double r11590988 = r11590987 * r11590965;
        double r11590989 = r11590986 + r11590988;
        double r11590990 = r11590985 * r11590989;
        double r11590991 = r11590984 + r11590990;
        double r11590992 = r11590976 + r11590991;
        double r11590993 = r11590985 * r11590985;
        double r11590994 = 3e-06;
        double r11590995 = r11590994 * r11590966;
        double r11590996 = r11590993 * r11590995;
        double r11590997 = -0.000152;
        double r11590998 = r11590997 * r11590965;
        double r11590999 = 0.004092;
        double r11591000 = r11590998 + r11590999;
        double r11591001 = r11590993 * r11591000;
        double r11591002 = r11590996 + r11591001;
        double r11591003 = r11590992 + r11591002;
        return r11591003;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11591004, r11591005, r11591006, r11591007, r11591008, r11591009, r11591010, r11591011, r11591012, r11591013, r11591014, r11591015, r11591016, r11591017, r11591018, r11591019, r11591020, r11591021, r11591022, r11591023, r11591024, r11591025, r11591026, r11591027, r11591028, r11591029, r11591030, r11591031, r11591032, r11591033, r11591034, r11591035, r11591036, r11591037, r11591038, r11591039, r11591040, r11591041, r11591042, r11591043, r11591044;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11591004, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591005, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r11591006);
        mpfr_init(r11591007);
        mpfr_init(r11591008);
        mpfr_init_set_str(r11591009, "27.5", 10, MPFR_RNDN);
        mpfr_init(r11591010);
        mpfr_init(r11591011);
        mpfr_init(r11591012);
        mpfr_init_set_str(r11591013, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r11591014);
        mpfr_init(r11591015);
        mpfr_init(r11591016);
        mpfr_init_set_str(r11591017, "13.75", 10, MPFR_RNDN);
        mpfr_init(r11591018);
        mpfr_init(r11591019);
        mpfr_init(r11591020);
        mpfr_init_set_str(r11591021, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r11591022);
        mpfr_init(r11591023);
        mpfr_init(r11591024);
        mpfr_init_set_str(r11591025, "0.641667", 10, MPFR_RNDN);
        mpfr_init(r11591026);
        mpfr_init(r11591027);
        mpfr_init(r11591028);
        mpfr_init_set_str(r11591029, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r11591030);
        mpfr_init(r11591031);
        mpfr_init(r11591032);
        mpfr_init_set_str(r11591033, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r11591034);
        mpfr_init(r11591035);
        mpfr_init(r11591036);
        mpfr_init_set_str(r11591037, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r11591038);
        mpfr_init(r11591039);
        mpfr_init(r11591040);
        mpfr_init_set_str(r11591041, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r11591042);
        mpfr_init(r11591043);
        mpfr_init(r11591044);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11591006, x, MPFR_RNDN);
        mpfr_mul(r11591007, r11591005, r11591006, MPFR_RNDN);
        mpfr_add(r11591008, r11591004, r11591007, MPFR_RNDN);
        ;
        mpfr_mul(r11591010, r11591006, r11591006, MPFR_RNDN);
        mpfr_mul(r11591011, r11591009, r11591010, MPFR_RNDN);
        mpfr_add(r11591012, r11591008, r11591011, MPFR_RNDN);
        ;
        mpfr_mul(r11591014, r11591010, r11591006, MPFR_RNDN);
        mpfr_mul(r11591015, r11591013, r11591014, MPFR_RNDN);
        mpfr_add(r11591016, r11591012, r11591015, MPFR_RNDN);
        ;
        mpfr_mul(r11591018, r11591014, r11591006, MPFR_RNDN);
        mpfr_mul(r11591019, r11591017, r11591018, MPFR_RNDN);
        mpfr_add(r11591020, r11591016, r11591019, MPFR_RNDN);
        ;
        mpfr_mul(r11591022, r11591018, r11591006, MPFR_RNDN);
        mpfr_mul(r11591023, r11591021, r11591022, MPFR_RNDN);
        mpfr_add(r11591024, r11591020, r11591023, MPFR_RNDN);
        ;
        mpfr_mul(r11591026, r11591022, r11591006, MPFR_RNDN);
        mpfr_mul(r11591027, r11591025, r11591026, MPFR_RNDN);
        mpfr_add(r11591028, r11591024, r11591027, MPFR_RNDN);
        ;
        mpfr_mul(r11591030, r11591026, r11591006, MPFR_RNDN);
        mpfr_mul(r11591031, r11591029, r11591030, MPFR_RNDN);
        mpfr_add(r11591032, r11591028, r11591031, MPFR_RNDN);
        ;
        mpfr_mul(r11591034, r11591030, r11591006, MPFR_RNDN);
        mpfr_mul(r11591035, r11591033, r11591034, MPFR_RNDN);
        mpfr_add(r11591036, r11591032, r11591035, MPFR_RNDN);
        ;
        mpfr_mul(r11591038, r11591034, r11591006, MPFR_RNDN);
        mpfr_mul(r11591039, r11591037, r11591038, MPFR_RNDN);
        mpfr_add(r11591040, r11591036, r11591039, MPFR_RNDN);
        ;
        mpfr_mul(r11591042, r11591038, r11591006, MPFR_RNDN);
        mpfr_mul(r11591043, r11591041, r11591042, MPFR_RNDN);
        mpfr_add(r11591044, r11591040, r11591043, MPFR_RNDN);
        return mpfr_get_d(r11591044, MPFR_RNDN);
}

static mpfr_t r11591045, r11591046, r11591047, r11591048, r11591049, r11591050, r11591051, r11591052, r11591053, r11591054, r11591055, r11591056, r11591057, r11591058, r11591059, r11591060, r11591061, r11591062, r11591063, r11591064, r11591065, r11591066, r11591067, r11591068, r11591069, r11591070, r11591071, r11591072, r11591073, r11591074, r11591075, r11591076, r11591077, r11591078, r11591079, r11591080, r11591081, r11591082, r11591083;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11591045);
        mpfr_init(r11591046);
        mpfr_init_set_str(r11591047, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r11591048);
        mpfr_init_set_str(r11591049, "27.5", 10, MPFR_RNDN);
        mpfr_init(r11591050);
        mpfr_init(r11591051);
        mpfr_init_set_str(r11591052, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r11591053);
        mpfr_init_set_str(r11591054, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11591055);
        mpfr_init(r11591056);
        mpfr_init_set_str(r11591057, "3", 10, MPFR_RNDN);
        mpfr_init(r11591058);
        mpfr_init(r11591059);
        mpfr_init_set_str(r11591060, "0.641667", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591061, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r11591062);
        mpfr_init(r11591063);
        mpfr_init(r11591064);
        mpfr_init(r11591065);
        mpfr_init_set_str(r11591066, "13.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591067, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r11591068);
        mpfr_init(r11591069);
        mpfr_init(r11591070);
        mpfr_init(r11591071);
        mpfr_init(r11591072);
        mpfr_init(r11591073);
        mpfr_init_set_str(r11591074, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r11591075);
        mpfr_init(r11591076);
        mpfr_init_set_str(r11591077, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r11591078);
        mpfr_init_set_str(r11591079, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r11591080);
        mpfr_init(r11591081);
        mpfr_init(r11591082);
        mpfr_init(r11591083);
}

double f_fm(double x) {
        mpfr_set_d(r11591045, x, MPFR_RNDN);
        mpfr_mul(r11591046, r11591045, r11591045, MPFR_RNDN);
        ;
        mpfr_mul(r11591048, r11591047, r11591045, MPFR_RNDN);
        ;
        mpfr_add(r11591050, r11591048, r11591049, MPFR_RNDN);
        mpfr_mul(r11591051, r11591046, r11591050, MPFR_RNDN);
        ;
        mpfr_mul(r11591053, r11591045, r11591052, MPFR_RNDN);
        ;
        mpfr_add(r11591055, r11591053, r11591054, MPFR_RNDN);
        mpfr_add(r11591056, r11591051, r11591055, MPFR_RNDN);
        ;
        mpfr_pow(r11591058, r11591045, r11591057, MPFR_RNDN);
        mpfr_mul(r11591059, r11591058, r11591058, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11591062, r11591061, r11591045, MPFR_RNDN);
        mpfr_add(r11591063, r11591060, r11591062, MPFR_RNDN);
        mpfr_mul(r11591064, r11591059, r11591063, MPFR_RNDN);
        mpfr_mul(r11591065, r11591046, r11591046, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11591068, r11591067, r11591045, MPFR_RNDN);
        mpfr_add(r11591069, r11591066, r11591068, MPFR_RNDN);
        mpfr_mul(r11591070, r11591065, r11591069, MPFR_RNDN);
        mpfr_add(r11591071, r11591064, r11591070, MPFR_RNDN);
        mpfr_add(r11591072, r11591056, r11591071, MPFR_RNDN);
        mpfr_mul(r11591073, r11591065, r11591065, MPFR_RNDN);
        ;
        mpfr_mul(r11591075, r11591074, r11591046, MPFR_RNDN);
        mpfr_mul(r11591076, r11591073, r11591075, MPFR_RNDN);
        ;
        mpfr_mul(r11591078, r11591077, r11591045, MPFR_RNDN);
        ;
        mpfr_add(r11591080, r11591078, r11591079, MPFR_RNDN);
        mpfr_mul(r11591081, r11591073, r11591080, MPFR_RNDN);
        mpfr_add(r11591082, r11591076, r11591081, MPFR_RNDN);
        mpfr_add(r11591083, r11591072, r11591082, MPFR_RNDN);
        return mpfr_get_d(r11591083, MPFR_RNDN);
}

static mpfr_t r11591084, r11591085, r11591086, r11591087, r11591088, r11591089, r11591090, r11591091, r11591092, r11591093, r11591094, r11591095, r11591096, r11591097, r11591098, r11591099, r11591100, r11591101, r11591102, r11591103, r11591104, r11591105, r11591106, r11591107, r11591108, r11591109, r11591110, r11591111, r11591112, r11591113, r11591114, r11591115, r11591116, r11591117, r11591118, r11591119, r11591120, r11591121, r11591122;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11591084);
        mpfr_init(r11591085);
        mpfr_init_set_str(r11591086, "-27.5", 10, MPFR_RNDN);
        mpfr_init(r11591087);
        mpfr_init_set_str(r11591088, "27.5", 10, MPFR_RNDN);
        mpfr_init(r11591089);
        mpfr_init(r11591090);
        mpfr_init_set_str(r11591091, "-11.0", 10, MPFR_RNDN);
        mpfr_init(r11591092);
        mpfr_init_set_str(r11591093, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11591094);
        mpfr_init(r11591095);
        mpfr_init_set_str(r11591096, "3", 10, MPFR_RNDN);
        mpfr_init(r11591097);
        mpfr_init(r11591098);
        mpfr_init_set_str(r11591099, "0.641667", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591100, "-0.065476", 10, MPFR_RNDN);
        mpfr_init(r11591101);
        mpfr_init(r11591102);
        mpfr_init(r11591103);
        mpfr_init(r11591104);
        mpfr_init_set_str(r11591105, "13.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r11591106, "-3.85", 10, MPFR_RNDN);
        mpfr_init(r11591107);
        mpfr_init(r11591108);
        mpfr_init(r11591109);
        mpfr_init(r11591110);
        mpfr_init(r11591111);
        mpfr_init(r11591112);
        mpfr_init_set_str(r11591113, "3e-06", 10, MPFR_RNDN);
        mpfr_init(r11591114);
        mpfr_init(r11591115);
        mpfr_init_set_str(r11591116, "-0.000152", 10, MPFR_RNDN);
        mpfr_init(r11591117);
        mpfr_init_set_str(r11591118, "0.004092", 10, MPFR_RNDN);
        mpfr_init(r11591119);
        mpfr_init(r11591120);
        mpfr_init(r11591121);
        mpfr_init(r11591122);
}

double f_dm(double x) {
        mpfr_set_d(r11591084, x, MPFR_RNDN);
        mpfr_mul(r11591085, r11591084, r11591084, MPFR_RNDN);
        ;
        mpfr_mul(r11591087, r11591086, r11591084, MPFR_RNDN);
        ;
        mpfr_add(r11591089, r11591087, r11591088, MPFR_RNDN);
        mpfr_mul(r11591090, r11591085, r11591089, MPFR_RNDN);
        ;
        mpfr_mul(r11591092, r11591084, r11591091, MPFR_RNDN);
        ;
        mpfr_add(r11591094, r11591092, r11591093, MPFR_RNDN);
        mpfr_add(r11591095, r11591090, r11591094, MPFR_RNDN);
        ;
        mpfr_pow(r11591097, r11591084, r11591096, MPFR_RNDN);
        mpfr_mul(r11591098, r11591097, r11591097, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11591101, r11591100, r11591084, MPFR_RNDN);
        mpfr_add(r11591102, r11591099, r11591101, MPFR_RNDN);
        mpfr_mul(r11591103, r11591098, r11591102, MPFR_RNDN);
        mpfr_mul(r11591104, r11591085, r11591085, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11591107, r11591106, r11591084, MPFR_RNDN);
        mpfr_add(r11591108, r11591105, r11591107, MPFR_RNDN);
        mpfr_mul(r11591109, r11591104, r11591108, MPFR_RNDN);
        mpfr_add(r11591110, r11591103, r11591109, MPFR_RNDN);
        mpfr_add(r11591111, r11591095, r11591110, MPFR_RNDN);
        mpfr_mul(r11591112, r11591104, r11591104, MPFR_RNDN);
        ;
        mpfr_mul(r11591114, r11591113, r11591085, MPFR_RNDN);
        mpfr_mul(r11591115, r11591112, r11591114, MPFR_RNDN);
        ;
        mpfr_mul(r11591117, r11591116, r11591084, MPFR_RNDN);
        ;
        mpfr_add(r11591119, r11591117, r11591118, MPFR_RNDN);
        mpfr_mul(r11591120, r11591112, r11591119, MPFR_RNDN);
        mpfr_add(r11591121, r11591115, r11591120, MPFR_RNDN);
        mpfr_add(r11591122, r11591111, r11591121, MPFR_RNDN);
        return mpfr_get_d(r11591122, MPFR_RNDN);
}

