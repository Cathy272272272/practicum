#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r7404837 = 2.932617;
        float r7404838 = x;
        float r7404839 = r7404837 * r7404838;
        float r7404840 = -87.978516;
        float r7404841 = r7404838 * r7404838;
        float r7404842 = r7404841 * r7404838;
        float r7404843 = r7404840 * r7404842;
        float r7404844 = r7404839 + r7404843;
        float r7404845 = 747.817383;
        float r7404846 = r7404842 * r7404838;
        float r7404847 = r7404846 * r7404838;
        float r7404848 = r7404845 * r7404847;
        float r7404849 = r7404844 + r7404848;
        float r7404850 = -2706.386719;
        float r7404851 = r7404847 * r7404838;
        float r7404852 = r7404851 * r7404838;
        float r7404853 = r7404850 * r7404852;
        float r7404854 = r7404849 + r7404853;
        float r7404855 = 4736.176758;
        float r7404856 = r7404852 * r7404838;
        float r7404857 = r7404856 * r7404838;
        float r7404858 = r7404855 * r7404857;
        float r7404859 = r7404854 + r7404858;
        float r7404860 = -3961.166016;
        float r7404861 = r7404857 * r7404838;
        float r7404862 = r7404861 * r7404838;
        float r7404863 = r7404860 * r7404862;
        float r7404864 = r7404859 + r7404863;
        float r7404865 = 1269.604492;
        float r7404866 = r7404862 * r7404838;
        float r7404867 = r7404866 * r7404838;
        float r7404868 = r7404865 * r7404867;
        float r7404869 = r7404864 + r7404868;
        return r7404869;
}

double f_id(double x) {
        double r7404870 = 2.932617;
        double r7404871 = x;
        double r7404872 = r7404870 * r7404871;
        double r7404873 = -87.978516;
        double r7404874 = r7404871 * r7404871;
        double r7404875 = r7404874 * r7404871;
        double r7404876 = r7404873 * r7404875;
        double r7404877 = r7404872 + r7404876;
        double r7404878 = 747.817383;
        double r7404879 = r7404875 * r7404871;
        double r7404880 = r7404879 * r7404871;
        double r7404881 = r7404878 * r7404880;
        double r7404882 = r7404877 + r7404881;
        double r7404883 = -2706.386719;
        double r7404884 = r7404880 * r7404871;
        double r7404885 = r7404884 * r7404871;
        double r7404886 = r7404883 * r7404885;
        double r7404887 = r7404882 + r7404886;
        double r7404888 = 4736.176758;
        double r7404889 = r7404885 * r7404871;
        double r7404890 = r7404889 * r7404871;
        double r7404891 = r7404888 * r7404890;
        double r7404892 = r7404887 + r7404891;
        double r7404893 = -3961.166016;
        double r7404894 = r7404890 * r7404871;
        double r7404895 = r7404894 * r7404871;
        double r7404896 = r7404893 * r7404895;
        double r7404897 = r7404892 + r7404896;
        double r7404898 = 1269.604492;
        double r7404899 = r7404895 * r7404871;
        double r7404900 = r7404899 * r7404871;
        double r7404901 = r7404898 * r7404900;
        double r7404902 = r7404897 + r7404901;
        return r7404902;
}


double f_of(float x) {
        float r7404903 = x;
        float r7404904 = 3;
        float r7404905 = pow(r7404903, r7404904);
        float r7404906 = r7404905 * r7404905;
        float r7404907 = r7404906 * r7404903;
        float r7404908 = -2706.386719;
        float r7404909 = r7404903 * r7404903;
        float r7404910 = 4736.176758;
        float r7404911 = r7404909 * r7404910;
        float r7404912 = r7404908 + r7404911;
        float r7404913 = r7404907 * r7404912;
        float r7404914 = r7404909 * r7404909;
        float r7404915 = 747.817383;
        float r7404916 = r7404903 * r7404915;
        float r7404917 = r7404914 * r7404916;
        float r7404918 = 2.932617;
        float r7404919 = r7404918 * r7404903;
        float r7404920 = -87.978516;
        float r7404921 = r7404920 * r7404903;
        float r7404922 = r7404921 * r7404909;
        float r7404923 = r7404919 + r7404922;
        float r7404924 = r7404917 + r7404923;
        float r7404925 = r7404913 + r7404924;
        float r7404926 = r7404914 * r7404914;
        float r7404927 = r7404926 * r7404905;
        float r7404928 = -3961.166016;
        float r7404929 = 1269.604492;
        float r7404930 = r7404903 * r7404929;
        float r7404931 = r7404903 * r7404930;
        float r7404932 = r7404928 + r7404931;
        float r7404933 = r7404927 * r7404932;
        float r7404934 = r7404925 + r7404933;
        return r7404934;
}

double f_od(double x) {
        double r7404935 = x;
        double r7404936 = 3;
        double r7404937 = pow(r7404935, r7404936);
        double r7404938 = r7404937 * r7404937;
        double r7404939 = r7404938 * r7404935;
        double r7404940 = -2706.386719;
        double r7404941 = r7404935 * r7404935;
        double r7404942 = 4736.176758;
        double r7404943 = r7404941 * r7404942;
        double r7404944 = r7404940 + r7404943;
        double r7404945 = r7404939 * r7404944;
        double r7404946 = r7404941 * r7404941;
        double r7404947 = 747.817383;
        double r7404948 = r7404935 * r7404947;
        double r7404949 = r7404946 * r7404948;
        double r7404950 = 2.932617;
        double r7404951 = r7404950 * r7404935;
        double r7404952 = -87.978516;
        double r7404953 = r7404952 * r7404935;
        double r7404954 = r7404953 * r7404941;
        double r7404955 = r7404951 + r7404954;
        double r7404956 = r7404949 + r7404955;
        double r7404957 = r7404945 + r7404956;
        double r7404958 = r7404946 * r7404946;
        double r7404959 = r7404958 * r7404937;
        double r7404960 = -3961.166016;
        double r7404961 = 1269.604492;
        double r7404962 = r7404935 * r7404961;
        double r7404963 = r7404935 * r7404962;
        double r7404964 = r7404960 + r7404963;
        double r7404965 = r7404959 * r7404964;
        double r7404966 = r7404957 + r7404965;
        return r7404966;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7404967, r7404968, r7404969, r7404970, r7404971, r7404972, r7404973, r7404974, r7404975, r7404976, r7404977, r7404978, r7404979, r7404980, r7404981, r7404982, r7404983, r7404984, r7404985, r7404986, r7404987, r7404988, r7404989, r7404990, r7404991, r7404992, r7404993, r7404994, r7404995, r7404996, r7404997, r7404998, r7404999;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7404967, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7404968);
        mpfr_init(r7404969);
        mpfr_init_set_str(r7404970, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7404971);
        mpfr_init(r7404972);
        mpfr_init(r7404973);
        mpfr_init(r7404974);
        mpfr_init_set_str(r7404975, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7404976);
        mpfr_init(r7404977);
        mpfr_init(r7404978);
        mpfr_init(r7404979);
        mpfr_init_set_str(r7404980, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7404981);
        mpfr_init(r7404982);
        mpfr_init(r7404983);
        mpfr_init(r7404984);
        mpfr_init_set_str(r7404985, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7404986);
        mpfr_init(r7404987);
        mpfr_init(r7404988);
        mpfr_init(r7404989);
        mpfr_init_set_str(r7404990, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r7404991);
        mpfr_init(r7404992);
        mpfr_init(r7404993);
        mpfr_init(r7404994);
        mpfr_init_set_str(r7404995, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7404996);
        mpfr_init(r7404997);
        mpfr_init(r7404998);
        mpfr_init(r7404999);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7404968, x, MPFR_RNDN);
        mpfr_mul(r7404969, r7404967, r7404968, MPFR_RNDN);
        ;
        mpfr_mul(r7404971, r7404968, r7404968, MPFR_RNDN);
        mpfr_mul(r7404972, r7404971, r7404968, MPFR_RNDN);
        mpfr_mul(r7404973, r7404970, r7404972, MPFR_RNDN);
        mpfr_add(r7404974, r7404969, r7404973, MPFR_RNDN);
        ;
        mpfr_mul(r7404976, r7404972, r7404968, MPFR_RNDN);
        mpfr_mul(r7404977, r7404976, r7404968, MPFR_RNDN);
        mpfr_mul(r7404978, r7404975, r7404977, MPFR_RNDN);
        mpfr_add(r7404979, r7404974, r7404978, MPFR_RNDN);
        ;
        mpfr_mul(r7404981, r7404977, r7404968, MPFR_RNDN);
        mpfr_mul(r7404982, r7404981, r7404968, MPFR_RNDN);
        mpfr_mul(r7404983, r7404980, r7404982, MPFR_RNDN);
        mpfr_add(r7404984, r7404979, r7404983, MPFR_RNDN);
        ;
        mpfr_mul(r7404986, r7404982, r7404968, MPFR_RNDN);
        mpfr_mul(r7404987, r7404986, r7404968, MPFR_RNDN);
        mpfr_mul(r7404988, r7404985, r7404987, MPFR_RNDN);
        mpfr_add(r7404989, r7404984, r7404988, MPFR_RNDN);
        ;
        mpfr_mul(r7404991, r7404987, r7404968, MPFR_RNDN);
        mpfr_mul(r7404992, r7404991, r7404968, MPFR_RNDN);
        mpfr_mul(r7404993, r7404990, r7404992, MPFR_RNDN);
        mpfr_add(r7404994, r7404989, r7404993, MPFR_RNDN);
        ;
        mpfr_mul(r7404996, r7404992, r7404968, MPFR_RNDN);
        mpfr_mul(r7404997, r7404996, r7404968, MPFR_RNDN);
        mpfr_mul(r7404998, r7404995, r7404997, MPFR_RNDN);
        mpfr_add(r7404999, r7404994, r7404998, MPFR_RNDN);
        return mpfr_get_d(r7404999, MPFR_RNDN);
}

static mpfr_t r7405000, r7405001, r7405002, r7405003, r7405004, r7405005, r7405006, r7405007, r7405008, r7405009, r7405010, r7405011, r7405012, r7405013, r7405014, r7405015, r7405016, r7405017, r7405018, r7405019, r7405020, r7405021, r7405022, r7405023, r7405024, r7405025, r7405026, r7405027, r7405028, r7405029, r7405030, r7405031;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7405000);
        mpfr_init_set_str(r7405001, "3", 10, MPFR_RNDN);
        mpfr_init(r7405002);
        mpfr_init(r7405003);
        mpfr_init(r7405004);
        mpfr_init_set_str(r7405005, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7405006);
        mpfr_init_set_str(r7405007, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7405008);
        mpfr_init(r7405009);
        mpfr_init(r7405010);
        mpfr_init(r7405011);
        mpfr_init_set_str(r7405012, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7405013);
        mpfr_init(r7405014);
        mpfr_init_set_str(r7405015, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7405016);
        mpfr_init_set_str(r7405017, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7405018);
        mpfr_init(r7405019);
        mpfr_init(r7405020);
        mpfr_init(r7405021);
        mpfr_init(r7405022);
        mpfr_init(r7405023);
        mpfr_init(r7405024);
        mpfr_init_set_str(r7405025, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405026, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7405027);
        mpfr_init(r7405028);
        mpfr_init(r7405029);
        mpfr_init(r7405030);
        mpfr_init(r7405031);
}

double f_fm(double x) {
        mpfr_set_d(r7405000, x, MPFR_RNDN);
        ;
        mpfr_pow(r7405002, r7405000, r7405001, MPFR_RNDN);
        mpfr_mul(r7405003, r7405002, r7405002, MPFR_RNDN);
        mpfr_mul(r7405004, r7405003, r7405000, MPFR_RNDN);
        ;
        mpfr_mul(r7405006, r7405000, r7405000, MPFR_RNDN);
        ;
        mpfr_mul(r7405008, r7405006, r7405007, MPFR_RNDN);
        mpfr_add(r7405009, r7405005, r7405008, MPFR_RNDN);
        mpfr_mul(r7405010, r7405004, r7405009, MPFR_RNDN);
        mpfr_mul(r7405011, r7405006, r7405006, MPFR_RNDN);
        ;
        mpfr_mul(r7405013, r7405000, r7405012, MPFR_RNDN);
        mpfr_mul(r7405014, r7405011, r7405013, MPFR_RNDN);
        ;
        mpfr_mul(r7405016, r7405015, r7405000, MPFR_RNDN);
        ;
        mpfr_mul(r7405018, r7405017, r7405000, MPFR_RNDN);
        mpfr_mul(r7405019, r7405018, r7405006, MPFR_RNDN);
        mpfr_add(r7405020, r7405016, r7405019, MPFR_RNDN);
        mpfr_add(r7405021, r7405014, r7405020, MPFR_RNDN);
        mpfr_add(r7405022, r7405010, r7405021, MPFR_RNDN);
        mpfr_mul(r7405023, r7405011, r7405011, MPFR_RNDN);
        mpfr_mul(r7405024, r7405023, r7405002, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7405027, r7405000, r7405026, MPFR_RNDN);
        mpfr_mul(r7405028, r7405000, r7405027, MPFR_RNDN);
        mpfr_add(r7405029, r7405025, r7405028, MPFR_RNDN);
        mpfr_mul(r7405030, r7405024, r7405029, MPFR_RNDN);
        mpfr_add(r7405031, r7405022, r7405030, MPFR_RNDN);
        return mpfr_get_d(r7405031, MPFR_RNDN);
}

static mpfr_t r7405032, r7405033, r7405034, r7405035, r7405036, r7405037, r7405038, r7405039, r7405040, r7405041, r7405042, r7405043, r7405044, r7405045, r7405046, r7405047, r7405048, r7405049, r7405050, r7405051, r7405052, r7405053, r7405054, r7405055, r7405056, r7405057, r7405058, r7405059, r7405060, r7405061, r7405062, r7405063;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7405032);
        mpfr_init_set_str(r7405033, "3", 10, MPFR_RNDN);
        mpfr_init(r7405034);
        mpfr_init(r7405035);
        mpfr_init(r7405036);
        mpfr_init_set_str(r7405037, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r7405038);
        mpfr_init_set_str(r7405039, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r7405040);
        mpfr_init(r7405041);
        mpfr_init(r7405042);
        mpfr_init(r7405043);
        mpfr_init_set_str(r7405044, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r7405045);
        mpfr_init(r7405046);
        mpfr_init_set_str(r7405047, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r7405048);
        mpfr_init_set_str(r7405049, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r7405050);
        mpfr_init(r7405051);
        mpfr_init(r7405052);
        mpfr_init(r7405053);
        mpfr_init(r7405054);
        mpfr_init(r7405055);
        mpfr_init(r7405056);
        mpfr_init_set_str(r7405057, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405058, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r7405059);
        mpfr_init(r7405060);
        mpfr_init(r7405061);
        mpfr_init(r7405062);
        mpfr_init(r7405063);
}

double f_dm(double x) {
        mpfr_set_d(r7405032, x, MPFR_RNDN);
        ;
        mpfr_pow(r7405034, r7405032, r7405033, MPFR_RNDN);
        mpfr_mul(r7405035, r7405034, r7405034, MPFR_RNDN);
        mpfr_mul(r7405036, r7405035, r7405032, MPFR_RNDN);
        ;
        mpfr_mul(r7405038, r7405032, r7405032, MPFR_RNDN);
        ;
        mpfr_mul(r7405040, r7405038, r7405039, MPFR_RNDN);
        mpfr_add(r7405041, r7405037, r7405040, MPFR_RNDN);
        mpfr_mul(r7405042, r7405036, r7405041, MPFR_RNDN);
        mpfr_mul(r7405043, r7405038, r7405038, MPFR_RNDN);
        ;
        mpfr_mul(r7405045, r7405032, r7405044, MPFR_RNDN);
        mpfr_mul(r7405046, r7405043, r7405045, MPFR_RNDN);
        ;
        mpfr_mul(r7405048, r7405047, r7405032, MPFR_RNDN);
        ;
        mpfr_mul(r7405050, r7405049, r7405032, MPFR_RNDN);
        mpfr_mul(r7405051, r7405050, r7405038, MPFR_RNDN);
        mpfr_add(r7405052, r7405048, r7405051, MPFR_RNDN);
        mpfr_add(r7405053, r7405046, r7405052, MPFR_RNDN);
        mpfr_add(r7405054, r7405042, r7405053, MPFR_RNDN);
        mpfr_mul(r7405055, r7405043, r7405043, MPFR_RNDN);
        mpfr_mul(r7405056, r7405055, r7405034, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7405059, r7405032, r7405058, MPFR_RNDN);
        mpfr_mul(r7405060, r7405032, r7405059, MPFR_RNDN);
        mpfr_add(r7405061, r7405057, r7405060, MPFR_RNDN);
        mpfr_mul(r7405062, r7405056, r7405061, MPFR_RNDN);
        mpfr_add(r7405063, r7405054, r7405062, MPFR_RNDN);
        return mpfr_get_d(r7405063, MPFR_RNDN);
}

