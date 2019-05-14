#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7513885 = 2.460938;
        float r7513886 = x;
        float r7513887 = r7513885 * r7513886;
        float r7513888 = -36.09375;
        float r7513889 = r7513886 * r7513886;
        float r7513890 = r7513889 * r7513886;
        float r7513891 = r7513888 * r7513890;
        float r7513892 = r7513887 + r7513891;
        float r7513893 = 140.765625;
        float r7513894 = r7513890 * r7513886;
        float r7513895 = r7513894 * r7513886;
        float r7513896 = r7513893 * r7513895;
        float r7513897 = r7513892 + r7513896;
        float r7513898 = -201.09375;
        float r7513899 = r7513895 * r7513886;
        float r7513900 = r7513899 * r7513886;
        float r7513901 = r7513898 * r7513900;
        float r7513902 = r7513897 + r7513901;
        float r7513903 = 94.960938;
        float r7513904 = r7513900 * r7513886;
        float r7513905 = r7513904 * r7513886;
        float r7513906 = r7513903 * r7513905;
        float r7513907 = r7513902 + r7513906;
        return r7513907;
}

double f_id(double x) {
        double r7513908 = 2.460938;
        double r7513909 = x;
        double r7513910 = r7513908 * r7513909;
        double r7513911 = -36.09375;
        double r7513912 = r7513909 * r7513909;
        double r7513913 = r7513912 * r7513909;
        double r7513914 = r7513911 * r7513913;
        double r7513915 = r7513910 + r7513914;
        double r7513916 = 140.765625;
        double r7513917 = r7513913 * r7513909;
        double r7513918 = r7513917 * r7513909;
        double r7513919 = r7513916 * r7513918;
        double r7513920 = r7513915 + r7513919;
        double r7513921 = -201.09375;
        double r7513922 = r7513918 * r7513909;
        double r7513923 = r7513922 * r7513909;
        double r7513924 = r7513921 * r7513923;
        double r7513925 = r7513920 + r7513924;
        double r7513926 = 94.960938;
        double r7513927 = r7513923 * r7513909;
        double r7513928 = r7513927 * r7513909;
        double r7513929 = r7513926 * r7513928;
        double r7513930 = r7513925 + r7513929;
        return r7513930;
}


double f_of(float x) {
        float r7513931 = x;
        float r7513932 = r7513931 * r7513931;
        float r7513933 = 140.765625;
        float r7513934 = r7513931 * r7513933;
        float r7513935 = r7513932 * r7513934;
        float r7513936 = r7513932 * r7513935;
        float r7513937 = 2.460938;
        float r7513938 = r7513937 * r7513931;
        float r7513939 = -36.09375;
        float r7513940 = r7513939 * r7513931;
        float r7513941 = r7513940 * r7513932;
        float r7513942 = r7513938 + r7513941;
        float r7513943 = r7513936 + r7513942;
        float r7513944 = 3;
        float r7513945 = pow(r7513931, r7513944);
        float r7513946 = r7513945 * r7513945;
        float r7513947 = r7513946 * r7513931;
        float r7513948 = -201.09375;
        float r7513949 = 94.960938;
        float r7513950 = r7513949 * r7513931;
        float r7513951 = r7513931 * r7513950;
        float r7513952 = r7513948 + r7513951;
        float r7513953 = r7513947 * r7513952;
        float r7513954 = r7513943 + r7513953;
        return r7513954;
}

double f_od(double x) {
        double r7513955 = x;
        double r7513956 = r7513955 * r7513955;
        double r7513957 = 140.765625;
        double r7513958 = r7513955 * r7513957;
        double r7513959 = r7513956 * r7513958;
        double r7513960 = r7513956 * r7513959;
        double r7513961 = 2.460938;
        double r7513962 = r7513961 * r7513955;
        double r7513963 = -36.09375;
        double r7513964 = r7513963 * r7513955;
        double r7513965 = r7513964 * r7513956;
        double r7513966 = r7513962 + r7513965;
        double r7513967 = r7513960 + r7513966;
        double r7513968 = 3;
        double r7513969 = pow(r7513955, r7513968);
        double r7513970 = r7513969 * r7513969;
        double r7513971 = r7513970 * r7513955;
        double r7513972 = -201.09375;
        double r7513973 = 94.960938;
        double r7513974 = r7513973 * r7513955;
        double r7513975 = r7513955 * r7513974;
        double r7513976 = r7513972 + r7513975;
        double r7513977 = r7513971 * r7513976;
        double r7513978 = r7513967 + r7513977;
        return r7513978;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7513979, r7513980, r7513981, r7513982, r7513983, r7513984, r7513985, r7513986, r7513987, r7513988, r7513989, r7513990, r7513991, r7513992, r7513993, r7513994, r7513995, r7513996, r7513997, r7513998, r7513999, r7514000, r7514001;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7513979, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7513980);
        mpfr_init(r7513981);
        mpfr_init_set_str(r7513982, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7513983);
        mpfr_init(r7513984);
        mpfr_init(r7513985);
        mpfr_init(r7513986);
        mpfr_init_set_str(r7513987, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7513988);
        mpfr_init(r7513989);
        mpfr_init(r7513990);
        mpfr_init(r7513991);
        mpfr_init_set_str(r7513992, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7513993);
        mpfr_init(r7513994);
        mpfr_init(r7513995);
        mpfr_init(r7513996);
        mpfr_init_set_str(r7513997, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7513998);
        mpfr_init(r7513999);
        mpfr_init(r7514000);
        mpfr_init(r7514001);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7513980, x, MPFR_RNDN);
        mpfr_mul(r7513981, r7513979, r7513980, MPFR_RNDN);
        ;
        mpfr_mul(r7513983, r7513980, r7513980, MPFR_RNDN);
        mpfr_mul(r7513984, r7513983, r7513980, MPFR_RNDN);
        mpfr_mul(r7513985, r7513982, r7513984, MPFR_RNDN);
        mpfr_add(r7513986, r7513981, r7513985, MPFR_RNDN);
        ;
        mpfr_mul(r7513988, r7513984, r7513980, MPFR_RNDN);
        mpfr_mul(r7513989, r7513988, r7513980, MPFR_RNDN);
        mpfr_mul(r7513990, r7513987, r7513989, MPFR_RNDN);
        mpfr_add(r7513991, r7513986, r7513990, MPFR_RNDN);
        ;
        mpfr_mul(r7513993, r7513989, r7513980, MPFR_RNDN);
        mpfr_mul(r7513994, r7513993, r7513980, MPFR_RNDN);
        mpfr_mul(r7513995, r7513992, r7513994, MPFR_RNDN);
        mpfr_add(r7513996, r7513991, r7513995, MPFR_RNDN);
        ;
        mpfr_mul(r7513998, r7513994, r7513980, MPFR_RNDN);
        mpfr_mul(r7513999, r7513998, r7513980, MPFR_RNDN);
        mpfr_mul(r7514000, r7513997, r7513999, MPFR_RNDN);
        mpfr_add(r7514001, r7513996, r7514000, MPFR_RNDN);
        return mpfr_get_d(r7514001, MPFR_RNDN);
}

static mpfr_t r7514002, r7514003, r7514004, r7514005, r7514006, r7514007, r7514008, r7514009, r7514010, r7514011, r7514012, r7514013, r7514014, r7514015, r7514016, r7514017, r7514018, r7514019, r7514020, r7514021, r7514022, r7514023, r7514024, r7514025;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7514002);
        mpfr_init(r7514003);
        mpfr_init_set_str(r7514004, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7514005);
        mpfr_init(r7514006);
        mpfr_init(r7514007);
        mpfr_init_set_str(r7514008, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7514009);
        mpfr_init_set_str(r7514010, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7514011);
        mpfr_init(r7514012);
        mpfr_init(r7514013);
        mpfr_init(r7514014);
        mpfr_init_set_str(r7514015, "3", 10, MPFR_RNDN);
        mpfr_init(r7514016);
        mpfr_init(r7514017);
        mpfr_init(r7514018);
        mpfr_init_set_str(r7514019, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514020, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7514021);
        mpfr_init(r7514022);
        mpfr_init(r7514023);
        mpfr_init(r7514024);
        mpfr_init(r7514025);
}

double f_fm(double x) {
        mpfr_set_d(r7514002, x, MPFR_RNDN);
        mpfr_mul(r7514003, r7514002, r7514002, MPFR_RNDN);
        ;
        mpfr_mul(r7514005, r7514002, r7514004, MPFR_RNDN);
        mpfr_mul(r7514006, r7514003, r7514005, MPFR_RNDN);
        mpfr_mul(r7514007, r7514003, r7514006, MPFR_RNDN);
        ;
        mpfr_mul(r7514009, r7514008, r7514002, MPFR_RNDN);
        ;
        mpfr_mul(r7514011, r7514010, r7514002, MPFR_RNDN);
        mpfr_mul(r7514012, r7514011, r7514003, MPFR_RNDN);
        mpfr_add(r7514013, r7514009, r7514012, MPFR_RNDN);
        mpfr_add(r7514014, r7514007, r7514013, MPFR_RNDN);
        ;
        mpfr_pow(r7514016, r7514002, r7514015, MPFR_RNDN);
        mpfr_mul(r7514017, r7514016, r7514016, MPFR_RNDN);
        mpfr_mul(r7514018, r7514017, r7514002, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7514021, r7514020, r7514002, MPFR_RNDN);
        mpfr_mul(r7514022, r7514002, r7514021, MPFR_RNDN);
        mpfr_add(r7514023, r7514019, r7514022, MPFR_RNDN);
        mpfr_mul(r7514024, r7514018, r7514023, MPFR_RNDN);
        mpfr_add(r7514025, r7514014, r7514024, MPFR_RNDN);
        return mpfr_get_d(r7514025, MPFR_RNDN);
}

static mpfr_t r7514026, r7514027, r7514028, r7514029, r7514030, r7514031, r7514032, r7514033, r7514034, r7514035, r7514036, r7514037, r7514038, r7514039, r7514040, r7514041, r7514042, r7514043, r7514044, r7514045, r7514046, r7514047, r7514048, r7514049;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7514026);
        mpfr_init(r7514027);
        mpfr_init_set_str(r7514028, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7514029);
        mpfr_init(r7514030);
        mpfr_init(r7514031);
        mpfr_init_set_str(r7514032, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7514033);
        mpfr_init_set_str(r7514034, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7514035);
        mpfr_init(r7514036);
        mpfr_init(r7514037);
        mpfr_init(r7514038);
        mpfr_init_set_str(r7514039, "3", 10, MPFR_RNDN);
        mpfr_init(r7514040);
        mpfr_init(r7514041);
        mpfr_init(r7514042);
        mpfr_init_set_str(r7514043, "-201.09375", 10, MPFR_RNDN);
        mpfr_init_set_str(r7514044, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7514045);
        mpfr_init(r7514046);
        mpfr_init(r7514047);
        mpfr_init(r7514048);
        mpfr_init(r7514049);
}

double f_dm(double x) {
        mpfr_set_d(r7514026, x, MPFR_RNDN);
        mpfr_mul(r7514027, r7514026, r7514026, MPFR_RNDN);
        ;
        mpfr_mul(r7514029, r7514026, r7514028, MPFR_RNDN);
        mpfr_mul(r7514030, r7514027, r7514029, MPFR_RNDN);
        mpfr_mul(r7514031, r7514027, r7514030, MPFR_RNDN);
        ;
        mpfr_mul(r7514033, r7514032, r7514026, MPFR_RNDN);
        ;
        mpfr_mul(r7514035, r7514034, r7514026, MPFR_RNDN);
        mpfr_mul(r7514036, r7514035, r7514027, MPFR_RNDN);
        mpfr_add(r7514037, r7514033, r7514036, MPFR_RNDN);
        mpfr_add(r7514038, r7514031, r7514037, MPFR_RNDN);
        ;
        mpfr_pow(r7514040, r7514026, r7514039, MPFR_RNDN);
        mpfr_mul(r7514041, r7514040, r7514040, MPFR_RNDN);
        mpfr_mul(r7514042, r7514041, r7514026, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7514045, r7514044, r7514026, MPFR_RNDN);
        mpfr_mul(r7514046, r7514026, r7514045, MPFR_RNDN);
        mpfr_add(r7514047, r7514043, r7514046, MPFR_RNDN);
        mpfr_mul(r7514048, r7514042, r7514047, MPFR_RNDN);
        mpfr_add(r7514049, r7514038, r7514048, MPFR_RNDN);
        return mpfr_get_d(r7514049, MPFR_RNDN);
}

