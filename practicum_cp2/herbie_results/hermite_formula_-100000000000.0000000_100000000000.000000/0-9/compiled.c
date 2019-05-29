#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r11053888 = 30240.0;
        float r11053889 = x;
        float r11053890 = r11053888 * r11053889;
        float r11053891 = -80640.0;
        float r11053892 = r11053889 * r11053889;
        float r11053893 = r11053892 * r11053889;
        float r11053894 = r11053891 * r11053893;
        float r11053895 = r11053890 + r11053894;
        float r11053896 = 48384.0;
        float r11053897 = r11053893 * r11053889;
        float r11053898 = r11053897 * r11053889;
        float r11053899 = r11053896 * r11053898;
        float r11053900 = r11053895 + r11053899;
        float r11053901 = -9216.0;
        float r11053902 = r11053898 * r11053889;
        float r11053903 = r11053902 * r11053889;
        float r11053904 = r11053901 * r11053903;
        float r11053905 = r11053900 + r11053904;
        float r11053906 = 512.0;
        float r11053907 = r11053903 * r11053889;
        float r11053908 = r11053907 * r11053889;
        float r11053909 = r11053906 * r11053908;
        float r11053910 = r11053905 + r11053909;
        return r11053910;
}

double f_id(double x) {
        double r11053911 = 30240.0;
        double r11053912 = x;
        double r11053913 = r11053911 * r11053912;
        double r11053914 = -80640.0;
        double r11053915 = r11053912 * r11053912;
        double r11053916 = r11053915 * r11053912;
        double r11053917 = r11053914 * r11053916;
        double r11053918 = r11053913 + r11053917;
        double r11053919 = 48384.0;
        double r11053920 = r11053916 * r11053912;
        double r11053921 = r11053920 * r11053912;
        double r11053922 = r11053919 * r11053921;
        double r11053923 = r11053918 + r11053922;
        double r11053924 = -9216.0;
        double r11053925 = r11053921 * r11053912;
        double r11053926 = r11053925 * r11053912;
        double r11053927 = r11053924 * r11053926;
        double r11053928 = r11053923 + r11053927;
        double r11053929 = 512.0;
        double r11053930 = r11053926 * r11053912;
        double r11053931 = r11053930 * r11053912;
        double r11053932 = r11053929 * r11053931;
        double r11053933 = r11053928 + r11053932;
        return r11053933;
}


double f_of(float x) {
        float r11053934 = x;
        float r11053935 = r11053934 * r11053934;
        float r11053936 = 48384.0;
        float r11053937 = r11053934 * r11053936;
        float r11053938 = r11053935 * r11053937;
        float r11053939 = r11053935 * r11053938;
        float r11053940 = 30240.0;
        float r11053941 = r11053940 * r11053934;
        float r11053942 = -80640.0;
        float r11053943 = r11053942 * r11053934;
        float r11053944 = r11053943 * r11053935;
        float r11053945 = r11053941 + r11053944;
        float r11053946 = r11053939 + r11053945;
        float r11053947 = 3;
        float r11053948 = pow(r11053934, r11053947);
        float r11053949 = r11053948 * r11053948;
        float r11053950 = r11053949 * r11053934;
        float r11053951 = -9216.0;
        float r11053952 = 512.0;
        float r11053953 = r11053952 * r11053934;
        float r11053954 = r11053934 * r11053953;
        float r11053955 = r11053951 + r11053954;
        float r11053956 = r11053950 * r11053955;
        float r11053957 = r11053946 + r11053956;
        return r11053957;
}

double f_od(double x) {
        double r11053958 = x;
        double r11053959 = r11053958 * r11053958;
        double r11053960 = 48384.0;
        double r11053961 = r11053958 * r11053960;
        double r11053962 = r11053959 * r11053961;
        double r11053963 = r11053959 * r11053962;
        double r11053964 = 30240.0;
        double r11053965 = r11053964 * r11053958;
        double r11053966 = -80640.0;
        double r11053967 = r11053966 * r11053958;
        double r11053968 = r11053967 * r11053959;
        double r11053969 = r11053965 + r11053968;
        double r11053970 = r11053963 + r11053969;
        double r11053971 = 3;
        double r11053972 = pow(r11053958, r11053971);
        double r11053973 = r11053972 * r11053972;
        double r11053974 = r11053973 * r11053958;
        double r11053975 = -9216.0;
        double r11053976 = 512.0;
        double r11053977 = r11053976 * r11053958;
        double r11053978 = r11053958 * r11053977;
        double r11053979 = r11053975 + r11053978;
        double r11053980 = r11053974 * r11053979;
        double r11053981 = r11053970 + r11053980;
        return r11053981;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11053982, r11053983, r11053984, r11053985, r11053986, r11053987, r11053988, r11053989, r11053990, r11053991, r11053992, r11053993, r11053994, r11053995, r11053996, r11053997, r11053998, r11053999, r11054000, r11054001, r11054002, r11054003, r11054004;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(848);
        mpfr_init_set_str(r11053982, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r11053983);
        mpfr_init(r11053984);
        mpfr_init_set_str(r11053985, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r11053986);
        mpfr_init(r11053987);
        mpfr_init(r11053988);
        mpfr_init(r11053989);
        mpfr_init_set_str(r11053990, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r11053991);
        mpfr_init(r11053992);
        mpfr_init(r11053993);
        mpfr_init(r11053994);
        mpfr_init_set_str(r11053995, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r11053996);
        mpfr_init(r11053997);
        mpfr_init(r11053998);
        mpfr_init(r11053999);
        mpfr_init_set_str(r11054000, "512.0", 10, MPFR_RNDN);
        mpfr_init(r11054001);
        mpfr_init(r11054002);
        mpfr_init(r11054003);
        mpfr_init(r11054004);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11053983, x, MPFR_RNDN);
        mpfr_mul(r11053984, r11053982, r11053983, MPFR_RNDN);
        ;
        mpfr_mul(r11053986, r11053983, r11053983, MPFR_RNDN);
        mpfr_mul(r11053987, r11053986, r11053983, MPFR_RNDN);
        mpfr_mul(r11053988, r11053985, r11053987, MPFR_RNDN);
        mpfr_add(r11053989, r11053984, r11053988, MPFR_RNDN);
        ;
        mpfr_mul(r11053991, r11053987, r11053983, MPFR_RNDN);
        mpfr_mul(r11053992, r11053991, r11053983, MPFR_RNDN);
        mpfr_mul(r11053993, r11053990, r11053992, MPFR_RNDN);
        mpfr_add(r11053994, r11053989, r11053993, MPFR_RNDN);
        ;
        mpfr_mul(r11053996, r11053992, r11053983, MPFR_RNDN);
        mpfr_mul(r11053997, r11053996, r11053983, MPFR_RNDN);
        mpfr_mul(r11053998, r11053995, r11053997, MPFR_RNDN);
        mpfr_add(r11053999, r11053994, r11053998, MPFR_RNDN);
        ;
        mpfr_mul(r11054001, r11053997, r11053983, MPFR_RNDN);
        mpfr_mul(r11054002, r11054001, r11053983, MPFR_RNDN);
        mpfr_mul(r11054003, r11054000, r11054002, MPFR_RNDN);
        mpfr_add(r11054004, r11053999, r11054003, MPFR_RNDN);
        return mpfr_get_d(r11054004, MPFR_RNDN);
}

static mpfr_t r11054005, r11054006, r11054007, r11054008, r11054009, r11054010, r11054011, r11054012, r11054013, r11054014, r11054015, r11054016, r11054017, r11054018, r11054019, r11054020, r11054021, r11054022, r11054023, r11054024, r11054025, r11054026, r11054027, r11054028;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(848);
        mpfr_init(r11054005);
        mpfr_init(r11054006);
        mpfr_init_set_str(r11054007, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r11054008);
        mpfr_init(r11054009);
        mpfr_init(r11054010);
        mpfr_init_set_str(r11054011, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r11054012);
        mpfr_init_set_str(r11054013, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r11054014);
        mpfr_init(r11054015);
        mpfr_init(r11054016);
        mpfr_init(r11054017);
        mpfr_init_set_str(r11054018, "3", 10, MPFR_RNDN);
        mpfr_init(r11054019);
        mpfr_init(r11054020);
        mpfr_init(r11054021);
        mpfr_init_set_str(r11054022, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054023, "512.0", 10, MPFR_RNDN);
        mpfr_init(r11054024);
        mpfr_init(r11054025);
        mpfr_init(r11054026);
        mpfr_init(r11054027);
        mpfr_init(r11054028);
}

double f_fm(double x) {
        mpfr_set_d(r11054005, x, MPFR_RNDN);
        mpfr_mul(r11054006, r11054005, r11054005, MPFR_RNDN);
        ;
        mpfr_mul(r11054008, r11054005, r11054007, MPFR_RNDN);
        mpfr_mul(r11054009, r11054006, r11054008, MPFR_RNDN);
        mpfr_mul(r11054010, r11054006, r11054009, MPFR_RNDN);
        ;
        mpfr_mul(r11054012, r11054011, r11054005, MPFR_RNDN);
        ;
        mpfr_mul(r11054014, r11054013, r11054005, MPFR_RNDN);
        mpfr_mul(r11054015, r11054014, r11054006, MPFR_RNDN);
        mpfr_add(r11054016, r11054012, r11054015, MPFR_RNDN);
        mpfr_add(r11054017, r11054010, r11054016, MPFR_RNDN);
        ;
        mpfr_pow(r11054019, r11054005, r11054018, MPFR_RNDN);
        mpfr_mul(r11054020, r11054019, r11054019, MPFR_RNDN);
        mpfr_mul(r11054021, r11054020, r11054005, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11054024, r11054023, r11054005, MPFR_RNDN);
        mpfr_mul(r11054025, r11054005, r11054024, MPFR_RNDN);
        mpfr_add(r11054026, r11054022, r11054025, MPFR_RNDN);
        mpfr_mul(r11054027, r11054021, r11054026, MPFR_RNDN);
        mpfr_add(r11054028, r11054017, r11054027, MPFR_RNDN);
        return mpfr_get_d(r11054028, MPFR_RNDN);
}

static mpfr_t r11054029, r11054030, r11054031, r11054032, r11054033, r11054034, r11054035, r11054036, r11054037, r11054038, r11054039, r11054040, r11054041, r11054042, r11054043, r11054044, r11054045, r11054046, r11054047, r11054048, r11054049, r11054050, r11054051, r11054052;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(848);
        mpfr_init(r11054029);
        mpfr_init(r11054030);
        mpfr_init_set_str(r11054031, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r11054032);
        mpfr_init(r11054033);
        mpfr_init(r11054034);
        mpfr_init_set_str(r11054035, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r11054036);
        mpfr_init_set_str(r11054037, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r11054038);
        mpfr_init(r11054039);
        mpfr_init(r11054040);
        mpfr_init(r11054041);
        mpfr_init_set_str(r11054042, "3", 10, MPFR_RNDN);
        mpfr_init(r11054043);
        mpfr_init(r11054044);
        mpfr_init(r11054045);
        mpfr_init_set_str(r11054046, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054047, "512.0", 10, MPFR_RNDN);
        mpfr_init(r11054048);
        mpfr_init(r11054049);
        mpfr_init(r11054050);
        mpfr_init(r11054051);
        mpfr_init(r11054052);
}

double f_dm(double x) {
        mpfr_set_d(r11054029, x, MPFR_RNDN);
        mpfr_mul(r11054030, r11054029, r11054029, MPFR_RNDN);
        ;
        mpfr_mul(r11054032, r11054029, r11054031, MPFR_RNDN);
        mpfr_mul(r11054033, r11054030, r11054032, MPFR_RNDN);
        mpfr_mul(r11054034, r11054030, r11054033, MPFR_RNDN);
        ;
        mpfr_mul(r11054036, r11054035, r11054029, MPFR_RNDN);
        ;
        mpfr_mul(r11054038, r11054037, r11054029, MPFR_RNDN);
        mpfr_mul(r11054039, r11054038, r11054030, MPFR_RNDN);
        mpfr_add(r11054040, r11054036, r11054039, MPFR_RNDN);
        mpfr_add(r11054041, r11054034, r11054040, MPFR_RNDN);
        ;
        mpfr_pow(r11054043, r11054029, r11054042, MPFR_RNDN);
        mpfr_mul(r11054044, r11054043, r11054043, MPFR_RNDN);
        mpfr_mul(r11054045, r11054044, r11054029, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11054048, r11054047, r11054029, MPFR_RNDN);
        mpfr_mul(r11054049, r11054029, r11054048, MPFR_RNDN);
        mpfr_add(r11054050, r11054046, r11054049, MPFR_RNDN);
        mpfr_mul(r11054051, r11054045, r11054050, MPFR_RNDN);
        mpfr_add(r11054052, r11054041, r11054051, MPFR_RNDN);
        return mpfr_get_d(r11054052, MPFR_RNDN);
}

