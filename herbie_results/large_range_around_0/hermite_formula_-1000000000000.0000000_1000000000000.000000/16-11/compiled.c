#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r7605849 = -665280.0;
        float r7605850 = x;
        float r7605851 = r7605849 * r7605850;
        float r7605852 = 2217600.0;
        float r7605853 = r7605850 * r7605850;
        float r7605854 = r7605853 * r7605850;
        float r7605855 = r7605852 * r7605854;
        float r7605856 = r7605851 + r7605855;
        float r7605857 = -1774080.0;
        float r7605858 = r7605854 * r7605850;
        float r7605859 = r7605858 * r7605850;
        float r7605860 = r7605857 * r7605859;
        float r7605861 = r7605856 + r7605860;
        float r7605862 = 506880.0;
        float r7605863 = r7605859 * r7605850;
        float r7605864 = r7605863 * r7605850;
        float r7605865 = r7605862 * r7605864;
        float r7605866 = r7605861 + r7605865;
        float r7605867 = -56320.0;
        float r7605868 = r7605864 * r7605850;
        float r7605869 = r7605868 * r7605850;
        float r7605870 = r7605867 * r7605869;
        float r7605871 = r7605866 + r7605870;
        float r7605872 = 2048.0;
        float r7605873 = r7605869 * r7605850;
        float r7605874 = r7605873 * r7605850;
        float r7605875 = r7605872 * r7605874;
        float r7605876 = r7605871 + r7605875;
        return r7605876;
}

double f_id(double x) {
        double r7605877 = -665280.0;
        double r7605878 = x;
        double r7605879 = r7605877 * r7605878;
        double r7605880 = 2217600.0;
        double r7605881 = r7605878 * r7605878;
        double r7605882 = r7605881 * r7605878;
        double r7605883 = r7605880 * r7605882;
        double r7605884 = r7605879 + r7605883;
        double r7605885 = -1774080.0;
        double r7605886 = r7605882 * r7605878;
        double r7605887 = r7605886 * r7605878;
        double r7605888 = r7605885 * r7605887;
        double r7605889 = r7605884 + r7605888;
        double r7605890 = 506880.0;
        double r7605891 = r7605887 * r7605878;
        double r7605892 = r7605891 * r7605878;
        double r7605893 = r7605890 * r7605892;
        double r7605894 = r7605889 + r7605893;
        double r7605895 = -56320.0;
        double r7605896 = r7605892 * r7605878;
        double r7605897 = r7605896 * r7605878;
        double r7605898 = r7605895 * r7605897;
        double r7605899 = r7605894 + r7605898;
        double r7605900 = 2048.0;
        double r7605901 = r7605897 * r7605878;
        double r7605902 = r7605901 * r7605878;
        double r7605903 = r7605900 * r7605902;
        double r7605904 = r7605899 + r7605903;
        return r7605904;
}


double f_of(float x) {
        float r7605905 = 2048.0;
        float r7605906 = x;
        float r7605907 = 11;
        float r7605908 = pow(r7605906, r7605907);
        float r7605909 = r7605905 * r7605908;
        float r7605910 = -665280.0;
        float r7605911 = r7605910 * r7605906;
        float r7605912 = r7605909 + r7605911;
        float r7605913 = 3;
        float r7605914 = pow(r7605906, r7605913);
        float r7605915 = r7605914 * r7605914;
        float r7605916 = r7605915 * r7605906;
        float r7605917 = 506880.0;
        float r7605918 = -56320.0;
        float r7605919 = r7605918 * r7605906;
        float r7605920 = r7605906 * r7605919;
        float r7605921 = r7605917 + r7605920;
        float r7605922 = r7605916 * r7605921;
        float r7605923 = r7605906 * r7605906;
        float r7605924 = -1774080.0;
        float r7605925 = r7605906 * r7605924;
        float r7605926 = r7605925 * r7605923;
        float r7605927 = 2217600.0;
        float r7605928 = r7605927 * r7605906;
        float r7605929 = r7605926 + r7605928;
        float r7605930 = r7605923 * r7605929;
        float r7605931 = r7605922 + r7605930;
        float r7605932 = r7605912 + r7605931;
        return r7605932;
}

double f_od(double x) {
        double r7605933 = 2048.0;
        double r7605934 = x;
        double r7605935 = 11;
        double r7605936 = pow(r7605934, r7605935);
        double r7605937 = r7605933 * r7605936;
        double r7605938 = -665280.0;
        double r7605939 = r7605938 * r7605934;
        double r7605940 = r7605937 + r7605939;
        double r7605941 = 3;
        double r7605942 = pow(r7605934, r7605941);
        double r7605943 = r7605942 * r7605942;
        double r7605944 = r7605943 * r7605934;
        double r7605945 = 506880.0;
        double r7605946 = -56320.0;
        double r7605947 = r7605946 * r7605934;
        double r7605948 = r7605934 * r7605947;
        double r7605949 = r7605945 + r7605948;
        double r7605950 = r7605944 * r7605949;
        double r7605951 = r7605934 * r7605934;
        double r7605952 = -1774080.0;
        double r7605953 = r7605934 * r7605952;
        double r7605954 = r7605953 * r7605951;
        double r7605955 = 2217600.0;
        double r7605956 = r7605955 * r7605934;
        double r7605957 = r7605954 + r7605956;
        double r7605958 = r7605951 * r7605957;
        double r7605959 = r7605950 + r7605958;
        double r7605960 = r7605940 + r7605959;
        return r7605960;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7605961, r7605962, r7605963, r7605964, r7605965, r7605966, r7605967, r7605968, r7605969, r7605970, r7605971, r7605972, r7605973, r7605974, r7605975, r7605976, r7605977, r7605978, r7605979, r7605980, r7605981, r7605982, r7605983, r7605984, r7605985, r7605986, r7605987, r7605988;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7605961, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7605962);
        mpfr_init(r7605963);
        mpfr_init_set_str(r7605964, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7605965);
        mpfr_init(r7605966);
        mpfr_init(r7605967);
        mpfr_init(r7605968);
        mpfr_init_set_str(r7605969, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7605970);
        mpfr_init(r7605971);
        mpfr_init(r7605972);
        mpfr_init(r7605973);
        mpfr_init_set_str(r7605974, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7605975);
        mpfr_init(r7605976);
        mpfr_init(r7605977);
        mpfr_init(r7605978);
        mpfr_init_set_str(r7605979, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7605980);
        mpfr_init(r7605981);
        mpfr_init(r7605982);
        mpfr_init(r7605983);
        mpfr_init_set_str(r7605984, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7605985);
        mpfr_init(r7605986);
        mpfr_init(r7605987);
        mpfr_init(r7605988);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7605962, x, MPFR_RNDN);
        mpfr_mul(r7605963, r7605961, r7605962, MPFR_RNDN);
        ;
        mpfr_mul(r7605965, r7605962, r7605962, MPFR_RNDN);
        mpfr_mul(r7605966, r7605965, r7605962, MPFR_RNDN);
        mpfr_mul(r7605967, r7605964, r7605966, MPFR_RNDN);
        mpfr_add(r7605968, r7605963, r7605967, MPFR_RNDN);
        ;
        mpfr_mul(r7605970, r7605966, r7605962, MPFR_RNDN);
        mpfr_mul(r7605971, r7605970, r7605962, MPFR_RNDN);
        mpfr_mul(r7605972, r7605969, r7605971, MPFR_RNDN);
        mpfr_add(r7605973, r7605968, r7605972, MPFR_RNDN);
        ;
        mpfr_mul(r7605975, r7605971, r7605962, MPFR_RNDN);
        mpfr_mul(r7605976, r7605975, r7605962, MPFR_RNDN);
        mpfr_mul(r7605977, r7605974, r7605976, MPFR_RNDN);
        mpfr_add(r7605978, r7605973, r7605977, MPFR_RNDN);
        ;
        mpfr_mul(r7605980, r7605976, r7605962, MPFR_RNDN);
        mpfr_mul(r7605981, r7605980, r7605962, MPFR_RNDN);
        mpfr_mul(r7605982, r7605979, r7605981, MPFR_RNDN);
        mpfr_add(r7605983, r7605978, r7605982, MPFR_RNDN);
        ;
        mpfr_mul(r7605985, r7605981, r7605962, MPFR_RNDN);
        mpfr_mul(r7605986, r7605985, r7605962, MPFR_RNDN);
        mpfr_mul(r7605987, r7605984, r7605986, MPFR_RNDN);
        mpfr_add(r7605988, r7605983, r7605987, MPFR_RNDN);
        return mpfr_get_d(r7605988, MPFR_RNDN);
}

static mpfr_t r7605989, r7605990, r7605991, r7605992, r7605993, r7605994, r7605995, r7605996, r7605997, r7605998, r7605999, r7606000, r7606001, r7606002, r7606003, r7606004, r7606005, r7606006, r7606007, r7606008, r7606009, r7606010, r7606011, r7606012, r7606013, r7606014, r7606015, r7606016;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7605989, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7605990);
        mpfr_init_set_str(r7605991, "11", 10, MPFR_RNDN);
        mpfr_init(r7605992);
        mpfr_init(r7605993);
        mpfr_init_set_str(r7605994, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7605995);
        mpfr_init(r7605996);
        mpfr_init_set_str(r7605997, "3", 10, MPFR_RNDN);
        mpfr_init(r7605998);
        mpfr_init(r7605999);
        mpfr_init(r7606000);
        mpfr_init_set_str(r7606001, "506880.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606002, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7606003);
        mpfr_init(r7606004);
        mpfr_init(r7606005);
        mpfr_init(r7606006);
        mpfr_init(r7606007);
        mpfr_init_set_str(r7606008, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7606009);
        mpfr_init(r7606010);
        mpfr_init_set_str(r7606011, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7606012);
        mpfr_init(r7606013);
        mpfr_init(r7606014);
        mpfr_init(r7606015);
        mpfr_init(r7606016);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7605990, x, MPFR_RNDN);
        ;
        mpfr_pow(r7605992, r7605990, r7605991, MPFR_RNDN);
        mpfr_mul(r7605993, r7605989, r7605992, MPFR_RNDN);
        ;
        mpfr_mul(r7605995, r7605994, r7605990, MPFR_RNDN);
        mpfr_add(r7605996, r7605993, r7605995, MPFR_RNDN);
        ;
        mpfr_pow(r7605998, r7605990, r7605997, MPFR_RNDN);
        mpfr_mul(r7605999, r7605998, r7605998, MPFR_RNDN);
        mpfr_mul(r7606000, r7605999, r7605990, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7606003, r7606002, r7605990, MPFR_RNDN);
        mpfr_mul(r7606004, r7605990, r7606003, MPFR_RNDN);
        mpfr_add(r7606005, r7606001, r7606004, MPFR_RNDN);
        mpfr_mul(r7606006, r7606000, r7606005, MPFR_RNDN);
        mpfr_mul(r7606007, r7605990, r7605990, MPFR_RNDN);
        ;
        mpfr_mul(r7606009, r7605990, r7606008, MPFR_RNDN);
        mpfr_mul(r7606010, r7606009, r7606007, MPFR_RNDN);
        ;
        mpfr_mul(r7606012, r7606011, r7605990, MPFR_RNDN);
        mpfr_add(r7606013, r7606010, r7606012, MPFR_RNDN);
        mpfr_mul(r7606014, r7606007, r7606013, MPFR_RNDN);
        mpfr_add(r7606015, r7606006, r7606014, MPFR_RNDN);
        mpfr_add(r7606016, r7605996, r7606015, MPFR_RNDN);
        return mpfr_get_d(r7606016, MPFR_RNDN);
}

static mpfr_t r7606017, r7606018, r7606019, r7606020, r7606021, r7606022, r7606023, r7606024, r7606025, r7606026, r7606027, r7606028, r7606029, r7606030, r7606031, r7606032, r7606033, r7606034, r7606035, r7606036, r7606037, r7606038, r7606039, r7606040, r7606041, r7606042, r7606043, r7606044;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7606017, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7606018);
        mpfr_init_set_str(r7606019, "11", 10, MPFR_RNDN);
        mpfr_init(r7606020);
        mpfr_init(r7606021);
        mpfr_init_set_str(r7606022, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7606023);
        mpfr_init(r7606024);
        mpfr_init_set_str(r7606025, "3", 10, MPFR_RNDN);
        mpfr_init(r7606026);
        mpfr_init(r7606027);
        mpfr_init(r7606028);
        mpfr_init_set_str(r7606029, "506880.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7606030, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7606031);
        mpfr_init(r7606032);
        mpfr_init(r7606033);
        mpfr_init(r7606034);
        mpfr_init(r7606035);
        mpfr_init_set_str(r7606036, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7606037);
        mpfr_init(r7606038);
        mpfr_init_set_str(r7606039, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7606040);
        mpfr_init(r7606041);
        mpfr_init(r7606042);
        mpfr_init(r7606043);
        mpfr_init(r7606044);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7606018, x, MPFR_RNDN);
        ;
        mpfr_pow(r7606020, r7606018, r7606019, MPFR_RNDN);
        mpfr_mul(r7606021, r7606017, r7606020, MPFR_RNDN);
        ;
        mpfr_mul(r7606023, r7606022, r7606018, MPFR_RNDN);
        mpfr_add(r7606024, r7606021, r7606023, MPFR_RNDN);
        ;
        mpfr_pow(r7606026, r7606018, r7606025, MPFR_RNDN);
        mpfr_mul(r7606027, r7606026, r7606026, MPFR_RNDN);
        mpfr_mul(r7606028, r7606027, r7606018, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7606031, r7606030, r7606018, MPFR_RNDN);
        mpfr_mul(r7606032, r7606018, r7606031, MPFR_RNDN);
        mpfr_add(r7606033, r7606029, r7606032, MPFR_RNDN);
        mpfr_mul(r7606034, r7606028, r7606033, MPFR_RNDN);
        mpfr_mul(r7606035, r7606018, r7606018, MPFR_RNDN);
        ;
        mpfr_mul(r7606037, r7606018, r7606036, MPFR_RNDN);
        mpfr_mul(r7606038, r7606037, r7606035, MPFR_RNDN);
        ;
        mpfr_mul(r7606040, r7606039, r7606018, MPFR_RNDN);
        mpfr_add(r7606041, r7606038, r7606040, MPFR_RNDN);
        mpfr_mul(r7606042, r7606035, r7606041, MPFR_RNDN);
        mpfr_add(r7606043, r7606034, r7606042, MPFR_RNDN);
        mpfr_add(r7606044, r7606024, r7606043, MPFR_RNDN);
        return mpfr_get_d(r7606044, MPFR_RNDN);
}

