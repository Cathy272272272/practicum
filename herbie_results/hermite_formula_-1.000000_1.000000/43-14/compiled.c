#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r7997844 = -17297280.0;
        float r7997845 = 242161920.0;
        float r7997846 = x;
        float r7997847 = r7997846 * r7997846;
        float r7997848 = r7997845 * r7997847;
        float r7997849 = r7997844 + r7997848;
        float r7997850 = -484323840.0;
        float r7997851 = r7997847 * r7997846;
        float r7997852 = r7997851 * r7997846;
        float r7997853 = r7997850 * r7997852;
        float r7997854 = r7997849 + r7997853;
        float r7997855 = 322882560.0;
        float r7997856 = r7997852 * r7997846;
        float r7997857 = r7997856 * r7997846;
        float r7997858 = r7997855 * r7997857;
        float r7997859 = r7997854 + r7997858;
        float r7997860 = -92252160.0;
        float r7997861 = r7997857 * r7997846;
        float r7997862 = r7997861 * r7997846;
        float r7997863 = r7997860 * r7997862;
        float r7997864 = r7997859 + r7997863;
        float r7997865 = 12300288.0;
        float r7997866 = r7997862 * r7997846;
        float r7997867 = r7997866 * r7997846;
        float r7997868 = r7997865 * r7997867;
        float r7997869 = r7997864 + r7997868;
        float r7997870 = -745472.0;
        float r7997871 = r7997867 * r7997846;
        float r7997872 = r7997871 * r7997846;
        float r7997873 = r7997870 * r7997872;
        float r7997874 = r7997869 + r7997873;
        float r7997875 = 16384.0;
        float r7997876 = r7997872 * r7997846;
        float r7997877 = r7997876 * r7997846;
        float r7997878 = r7997875 * r7997877;
        float r7997879 = r7997874 + r7997878;
        return r7997879;
}

double f_id(double x) {
        double r7997880 = -17297280.0;
        double r7997881 = 242161920.0;
        double r7997882 = x;
        double r7997883 = r7997882 * r7997882;
        double r7997884 = r7997881 * r7997883;
        double r7997885 = r7997880 + r7997884;
        double r7997886 = -484323840.0;
        double r7997887 = r7997883 * r7997882;
        double r7997888 = r7997887 * r7997882;
        double r7997889 = r7997886 * r7997888;
        double r7997890 = r7997885 + r7997889;
        double r7997891 = 322882560.0;
        double r7997892 = r7997888 * r7997882;
        double r7997893 = r7997892 * r7997882;
        double r7997894 = r7997891 * r7997893;
        double r7997895 = r7997890 + r7997894;
        double r7997896 = -92252160.0;
        double r7997897 = r7997893 * r7997882;
        double r7997898 = r7997897 * r7997882;
        double r7997899 = r7997896 * r7997898;
        double r7997900 = r7997895 + r7997899;
        double r7997901 = 12300288.0;
        double r7997902 = r7997898 * r7997882;
        double r7997903 = r7997902 * r7997882;
        double r7997904 = r7997901 * r7997903;
        double r7997905 = r7997900 + r7997904;
        double r7997906 = -745472.0;
        double r7997907 = r7997903 * r7997882;
        double r7997908 = r7997907 * r7997882;
        double r7997909 = r7997906 * r7997908;
        double r7997910 = r7997905 + r7997909;
        double r7997911 = 16384.0;
        double r7997912 = r7997908 * r7997882;
        double r7997913 = r7997912 * r7997882;
        double r7997914 = r7997911 * r7997913;
        double r7997915 = r7997910 + r7997914;
        return r7997915;
}


double f_of(float x) {
        float r7997916 = -17297280.0;
        float r7997917 = 242161920.0;
        float r7997918 = x;
        float r7997919 = r7997918 * r7997918;
        float r7997920 = r7997917 * r7997919;
        float r7997921 = r7997916 + r7997920;
        float r7997922 = -484323840.0;
        float r7997923 = r7997919 * r7997918;
        float r7997924 = r7997923 * r7997918;
        float r7997925 = r7997922 * r7997924;
        float r7997926 = r7997921 + r7997925;
        float r7997927 = 322882560.0;
        float r7997928 = r7997924 * r7997918;
        float r7997929 = r7997928 * r7997918;
        float r7997930 = r7997927 * r7997929;
        float r7997931 = r7997926 + r7997930;
        float r7997932 = -92252160.0;
        float r7997933 = r7997929 * r7997918;
        float r7997934 = r7997933 * r7997918;
        float r7997935 = r7997932 * r7997934;
        float r7997936 = r7997931 + r7997935;
        float r7997937 = 12300288.0;
        float r7997938 = r7997934 * r7997918;
        float r7997939 = r7997938 * r7997918;
        float r7997940 = r7997937 * r7997939;
        float r7997941 = r7997936 + r7997940;
        float r7997942 = -745472.0;
        float r7997943 = r7997939 * r7997918;
        float r7997944 = r7997943 * r7997918;
        float r7997945 = r7997942 * r7997944;
        float r7997946 = r7997941 + r7997945;
        float r7997947 = 16384.0;
        float r7997948 = r7997944 * r7997918;
        float r7997949 = r7997948 * r7997918;
        float r7997950 = r7997947 * r7997949;
        float r7997951 = r7997946 + r7997950;
        return r7997951;
}

double f_od(double x) {
        double r7997952 = -17297280.0;
        double r7997953 = 242161920.0;
        double r7997954 = x;
        double r7997955 = r7997954 * r7997954;
        double r7997956 = r7997953 * r7997955;
        double r7997957 = r7997952 + r7997956;
        double r7997958 = -484323840.0;
        double r7997959 = r7997955 * r7997954;
        double r7997960 = r7997959 * r7997954;
        double r7997961 = r7997958 * r7997960;
        double r7997962 = r7997957 + r7997961;
        double r7997963 = 322882560.0;
        double r7997964 = r7997960 * r7997954;
        double r7997965 = r7997964 * r7997954;
        double r7997966 = r7997963 * r7997965;
        double r7997967 = r7997962 + r7997966;
        double r7997968 = -92252160.0;
        double r7997969 = r7997965 * r7997954;
        double r7997970 = r7997969 * r7997954;
        double r7997971 = r7997968 * r7997970;
        double r7997972 = r7997967 + r7997971;
        double r7997973 = 12300288.0;
        double r7997974 = r7997970 * r7997954;
        double r7997975 = r7997974 * r7997954;
        double r7997976 = r7997973 * r7997975;
        double r7997977 = r7997972 + r7997976;
        double r7997978 = -745472.0;
        double r7997979 = r7997975 * r7997954;
        double r7997980 = r7997979 * r7997954;
        double r7997981 = r7997978 * r7997980;
        double r7997982 = r7997977 + r7997981;
        double r7997983 = 16384.0;
        double r7997984 = r7997980 * r7997954;
        double r7997985 = r7997984 * r7997954;
        double r7997986 = r7997983 * r7997985;
        double r7997987 = r7997982 + r7997986;
        return r7997987;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7997988, r7997989, r7997990, r7997991, r7997992, r7997993, r7997994, r7997995, r7997996, r7997997, r7997998, r7997999, r7998000, r7998001, r7998002, r7998003, r7998004, r7998005, r7998006, r7998007, r7998008, r7998009, r7998010, r7998011, r7998012, r7998013, r7998014, r7998015, r7998016, r7998017, r7998018, r7998019, r7998020, r7998021, r7998022, r7998023;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7997988, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7997989, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7997990);
        mpfr_init(r7997991);
        mpfr_init(r7997992);
        mpfr_init(r7997993);
        mpfr_init_set_str(r7997994, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7997995);
        mpfr_init(r7997996);
        mpfr_init(r7997997);
        mpfr_init(r7997998);
        mpfr_init_set_str(r7997999, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7998000);
        mpfr_init(r7998001);
        mpfr_init(r7998002);
        mpfr_init(r7998003);
        mpfr_init_set_str(r7998004, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7998005);
        mpfr_init(r7998006);
        mpfr_init(r7998007);
        mpfr_init(r7998008);
        mpfr_init_set_str(r7998009, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7998010);
        mpfr_init(r7998011);
        mpfr_init(r7998012);
        mpfr_init(r7998013);
        mpfr_init_set_str(r7998014, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7998015);
        mpfr_init(r7998016);
        mpfr_init(r7998017);
        mpfr_init(r7998018);
        mpfr_init_set_str(r7998019, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7998020);
        mpfr_init(r7998021);
        mpfr_init(r7998022);
        mpfr_init(r7998023);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7997990, x, MPFR_RNDN);
        mpfr_mul(r7997991, r7997990, r7997990, MPFR_RNDN);
        mpfr_mul(r7997992, r7997989, r7997991, MPFR_RNDN);
        mpfr_add(r7997993, r7997988, r7997992, MPFR_RNDN);
        ;
        mpfr_mul(r7997995, r7997991, r7997990, MPFR_RNDN);
        mpfr_mul(r7997996, r7997995, r7997990, MPFR_RNDN);
        mpfr_mul(r7997997, r7997994, r7997996, MPFR_RNDN);
        mpfr_add(r7997998, r7997993, r7997997, MPFR_RNDN);
        ;
        mpfr_mul(r7998000, r7997996, r7997990, MPFR_RNDN);
        mpfr_mul(r7998001, r7998000, r7997990, MPFR_RNDN);
        mpfr_mul(r7998002, r7997999, r7998001, MPFR_RNDN);
        mpfr_add(r7998003, r7997998, r7998002, MPFR_RNDN);
        ;
        mpfr_mul(r7998005, r7998001, r7997990, MPFR_RNDN);
        mpfr_mul(r7998006, r7998005, r7997990, MPFR_RNDN);
        mpfr_mul(r7998007, r7998004, r7998006, MPFR_RNDN);
        mpfr_add(r7998008, r7998003, r7998007, MPFR_RNDN);
        ;
        mpfr_mul(r7998010, r7998006, r7997990, MPFR_RNDN);
        mpfr_mul(r7998011, r7998010, r7997990, MPFR_RNDN);
        mpfr_mul(r7998012, r7998009, r7998011, MPFR_RNDN);
        mpfr_add(r7998013, r7998008, r7998012, MPFR_RNDN);
        ;
        mpfr_mul(r7998015, r7998011, r7997990, MPFR_RNDN);
        mpfr_mul(r7998016, r7998015, r7997990, MPFR_RNDN);
        mpfr_mul(r7998017, r7998014, r7998016, MPFR_RNDN);
        mpfr_add(r7998018, r7998013, r7998017, MPFR_RNDN);
        ;
        mpfr_mul(r7998020, r7998016, r7997990, MPFR_RNDN);
        mpfr_mul(r7998021, r7998020, r7997990, MPFR_RNDN);
        mpfr_mul(r7998022, r7998019, r7998021, MPFR_RNDN);
        mpfr_add(r7998023, r7998018, r7998022, MPFR_RNDN);
        return mpfr_get_d(r7998023, MPFR_RNDN);
}

static mpfr_t r7998024, r7998025, r7998026, r7998027, r7998028, r7998029, r7998030, r7998031, r7998032, r7998033, r7998034, r7998035, r7998036, r7998037, r7998038, r7998039, r7998040, r7998041, r7998042, r7998043, r7998044, r7998045, r7998046, r7998047, r7998048, r7998049, r7998050, r7998051, r7998052, r7998053, r7998054, r7998055, r7998056, r7998057, r7998058, r7998059;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998024, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7998025, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7998026);
        mpfr_init(r7998027);
        mpfr_init(r7998028);
        mpfr_init(r7998029);
        mpfr_init_set_str(r7998030, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7998031);
        mpfr_init(r7998032);
        mpfr_init(r7998033);
        mpfr_init(r7998034);
        mpfr_init_set_str(r7998035, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7998036);
        mpfr_init(r7998037);
        mpfr_init(r7998038);
        mpfr_init(r7998039);
        mpfr_init_set_str(r7998040, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7998041);
        mpfr_init(r7998042);
        mpfr_init(r7998043);
        mpfr_init(r7998044);
        mpfr_init_set_str(r7998045, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7998046);
        mpfr_init(r7998047);
        mpfr_init(r7998048);
        mpfr_init(r7998049);
        mpfr_init_set_str(r7998050, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7998051);
        mpfr_init(r7998052);
        mpfr_init(r7998053);
        mpfr_init(r7998054);
        mpfr_init_set_str(r7998055, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7998056);
        mpfr_init(r7998057);
        mpfr_init(r7998058);
        mpfr_init(r7998059);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7998026, x, MPFR_RNDN);
        mpfr_mul(r7998027, r7998026, r7998026, MPFR_RNDN);
        mpfr_mul(r7998028, r7998025, r7998027, MPFR_RNDN);
        mpfr_add(r7998029, r7998024, r7998028, MPFR_RNDN);
        ;
        mpfr_mul(r7998031, r7998027, r7998026, MPFR_RNDN);
        mpfr_mul(r7998032, r7998031, r7998026, MPFR_RNDN);
        mpfr_mul(r7998033, r7998030, r7998032, MPFR_RNDN);
        mpfr_add(r7998034, r7998029, r7998033, MPFR_RNDN);
        ;
        mpfr_mul(r7998036, r7998032, r7998026, MPFR_RNDN);
        mpfr_mul(r7998037, r7998036, r7998026, MPFR_RNDN);
        mpfr_mul(r7998038, r7998035, r7998037, MPFR_RNDN);
        mpfr_add(r7998039, r7998034, r7998038, MPFR_RNDN);
        ;
        mpfr_mul(r7998041, r7998037, r7998026, MPFR_RNDN);
        mpfr_mul(r7998042, r7998041, r7998026, MPFR_RNDN);
        mpfr_mul(r7998043, r7998040, r7998042, MPFR_RNDN);
        mpfr_add(r7998044, r7998039, r7998043, MPFR_RNDN);
        ;
        mpfr_mul(r7998046, r7998042, r7998026, MPFR_RNDN);
        mpfr_mul(r7998047, r7998046, r7998026, MPFR_RNDN);
        mpfr_mul(r7998048, r7998045, r7998047, MPFR_RNDN);
        mpfr_add(r7998049, r7998044, r7998048, MPFR_RNDN);
        ;
        mpfr_mul(r7998051, r7998047, r7998026, MPFR_RNDN);
        mpfr_mul(r7998052, r7998051, r7998026, MPFR_RNDN);
        mpfr_mul(r7998053, r7998050, r7998052, MPFR_RNDN);
        mpfr_add(r7998054, r7998049, r7998053, MPFR_RNDN);
        ;
        mpfr_mul(r7998056, r7998052, r7998026, MPFR_RNDN);
        mpfr_mul(r7998057, r7998056, r7998026, MPFR_RNDN);
        mpfr_mul(r7998058, r7998055, r7998057, MPFR_RNDN);
        mpfr_add(r7998059, r7998054, r7998058, MPFR_RNDN);
        return mpfr_get_d(r7998059, MPFR_RNDN);
}

static mpfr_t r7998060, r7998061, r7998062, r7998063, r7998064, r7998065, r7998066, r7998067, r7998068, r7998069, r7998070, r7998071, r7998072, r7998073, r7998074, r7998075, r7998076, r7998077, r7998078, r7998079, r7998080, r7998081, r7998082, r7998083, r7998084, r7998085, r7998086, r7998087, r7998088, r7998089, r7998090, r7998091, r7998092, r7998093, r7998094, r7998095;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998060, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7998061, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7998062);
        mpfr_init(r7998063);
        mpfr_init(r7998064);
        mpfr_init(r7998065);
        mpfr_init_set_str(r7998066, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7998067);
        mpfr_init(r7998068);
        mpfr_init(r7998069);
        mpfr_init(r7998070);
        mpfr_init_set_str(r7998071, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7998072);
        mpfr_init(r7998073);
        mpfr_init(r7998074);
        mpfr_init(r7998075);
        mpfr_init_set_str(r7998076, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7998077);
        mpfr_init(r7998078);
        mpfr_init(r7998079);
        mpfr_init(r7998080);
        mpfr_init_set_str(r7998081, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7998082);
        mpfr_init(r7998083);
        mpfr_init(r7998084);
        mpfr_init(r7998085);
        mpfr_init_set_str(r7998086, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7998087);
        mpfr_init(r7998088);
        mpfr_init(r7998089);
        mpfr_init(r7998090);
        mpfr_init_set_str(r7998091, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7998092);
        mpfr_init(r7998093);
        mpfr_init(r7998094);
        mpfr_init(r7998095);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7998062, x, MPFR_RNDN);
        mpfr_mul(r7998063, r7998062, r7998062, MPFR_RNDN);
        mpfr_mul(r7998064, r7998061, r7998063, MPFR_RNDN);
        mpfr_add(r7998065, r7998060, r7998064, MPFR_RNDN);
        ;
        mpfr_mul(r7998067, r7998063, r7998062, MPFR_RNDN);
        mpfr_mul(r7998068, r7998067, r7998062, MPFR_RNDN);
        mpfr_mul(r7998069, r7998066, r7998068, MPFR_RNDN);
        mpfr_add(r7998070, r7998065, r7998069, MPFR_RNDN);
        ;
        mpfr_mul(r7998072, r7998068, r7998062, MPFR_RNDN);
        mpfr_mul(r7998073, r7998072, r7998062, MPFR_RNDN);
        mpfr_mul(r7998074, r7998071, r7998073, MPFR_RNDN);
        mpfr_add(r7998075, r7998070, r7998074, MPFR_RNDN);
        ;
        mpfr_mul(r7998077, r7998073, r7998062, MPFR_RNDN);
        mpfr_mul(r7998078, r7998077, r7998062, MPFR_RNDN);
        mpfr_mul(r7998079, r7998076, r7998078, MPFR_RNDN);
        mpfr_add(r7998080, r7998075, r7998079, MPFR_RNDN);
        ;
        mpfr_mul(r7998082, r7998078, r7998062, MPFR_RNDN);
        mpfr_mul(r7998083, r7998082, r7998062, MPFR_RNDN);
        mpfr_mul(r7998084, r7998081, r7998083, MPFR_RNDN);
        mpfr_add(r7998085, r7998080, r7998084, MPFR_RNDN);
        ;
        mpfr_mul(r7998087, r7998083, r7998062, MPFR_RNDN);
        mpfr_mul(r7998088, r7998087, r7998062, MPFR_RNDN);
        mpfr_mul(r7998089, r7998086, r7998088, MPFR_RNDN);
        mpfr_add(r7998090, r7998085, r7998089, MPFR_RNDN);
        ;
        mpfr_mul(r7998092, r7998088, r7998062, MPFR_RNDN);
        mpfr_mul(r7998093, r7998092, r7998062, MPFR_RNDN);
        mpfr_mul(r7998094, r7998091, r7998093, MPFR_RNDN);
        mpfr_add(r7998095, r7998090, r7998094, MPFR_RNDN);
        return mpfr_get_d(r7998095, MPFR_RNDN);
}

