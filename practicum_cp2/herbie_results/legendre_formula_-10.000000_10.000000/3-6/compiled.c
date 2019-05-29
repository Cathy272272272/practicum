#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8099933 = -0.3125;
        float r8099934 = 6.5625;
        float r8099935 = x;
        float r8099936 = r8099935 * r8099935;
        float r8099937 = r8099934 * r8099936;
        float r8099938 = r8099933 + r8099937;
        float r8099939 = -19.6875;
        float r8099940 = r8099936 * r8099935;
        float r8099941 = r8099940 * r8099935;
        float r8099942 = r8099939 * r8099941;
        float r8099943 = r8099938 + r8099942;
        float r8099944 = 14.4375;
        float r8099945 = r8099941 * r8099935;
        float r8099946 = r8099945 * r8099935;
        float r8099947 = r8099944 * r8099946;
        float r8099948 = r8099943 + r8099947;
        return r8099948;
}

double f_id(double x) {
        double r8099949 = -0.3125;
        double r8099950 = 6.5625;
        double r8099951 = x;
        double r8099952 = r8099951 * r8099951;
        double r8099953 = r8099950 * r8099952;
        double r8099954 = r8099949 + r8099953;
        double r8099955 = -19.6875;
        double r8099956 = r8099952 * r8099951;
        double r8099957 = r8099956 * r8099951;
        double r8099958 = r8099955 * r8099957;
        double r8099959 = r8099954 + r8099958;
        double r8099960 = 14.4375;
        double r8099961 = r8099957 * r8099951;
        double r8099962 = r8099961 * r8099951;
        double r8099963 = r8099960 * r8099962;
        double r8099964 = r8099959 + r8099963;
        return r8099964;
}


double f_of(float x) {
        float r8099965 = x;
        float r8099966 = 6.5625;
        float r8099967 = r8099965 * r8099966;
        float r8099968 = r8099967 * r8099965;
        float r8099969 = -0.3125;
        float r8099970 = r8099968 + r8099969;
        float r8099971 = -19.6875;
        float r8099972 = 14.4375;
        float r8099973 = r8099965 * r8099965;
        float r8099974 = r8099972 * r8099973;
        float r8099975 = r8099971 + r8099974;
        float r8099976 = r8099975 * r8099975;
        float r8099977 = 3;
        float r8099978 = pow(r8099973, r8099977);
        float r8099979 = r8099978 * r8099978;
        float r8099980 = r8099975 * r8099979;
        float r8099981 = r8099976 * r8099980;
        float r8099982 = cbrt(r8099981);
        float r8099983 = r8099970 + r8099982;
        return r8099983;
}

double f_od(double x) {
        double r8099984 = x;
        double r8099985 = 6.5625;
        double r8099986 = r8099984 * r8099985;
        double r8099987 = r8099986 * r8099984;
        double r8099988 = -0.3125;
        double r8099989 = r8099987 + r8099988;
        double r8099990 = -19.6875;
        double r8099991 = 14.4375;
        double r8099992 = r8099984 * r8099984;
        double r8099993 = r8099991 * r8099992;
        double r8099994 = r8099990 + r8099993;
        double r8099995 = r8099994 * r8099994;
        double r8099996 = 3;
        double r8099997 = pow(r8099992, r8099996);
        double r8099998 = r8099997 * r8099997;
        double r8099999 = r8099994 * r8099998;
        double r8100000 = r8099995 * r8099999;
        double r8100001 = cbrt(r8100000);
        double r8100002 = r8099989 + r8100001;
        return r8100002;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8100003, r8100004, r8100005, r8100006, r8100007, r8100008, r8100009, r8100010, r8100011, r8100012, r8100013, r8100014, r8100015, r8100016, r8100017, r8100018;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8100003, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100004, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8100005);
        mpfr_init(r8100006);
        mpfr_init(r8100007);
        mpfr_init(r8100008);
        mpfr_init_set_str(r8100009, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r8100010);
        mpfr_init(r8100011);
        mpfr_init(r8100012);
        mpfr_init(r8100013);
        mpfr_init_set_str(r8100014, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8100015);
        mpfr_init(r8100016);
        mpfr_init(r8100017);
        mpfr_init(r8100018);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8100005, x, MPFR_RNDN);
        mpfr_mul(r8100006, r8100005, r8100005, MPFR_RNDN);
        mpfr_mul(r8100007, r8100004, r8100006, MPFR_RNDN);
        mpfr_add(r8100008, r8100003, r8100007, MPFR_RNDN);
        ;
        mpfr_mul(r8100010, r8100006, r8100005, MPFR_RNDN);
        mpfr_mul(r8100011, r8100010, r8100005, MPFR_RNDN);
        mpfr_mul(r8100012, r8100009, r8100011, MPFR_RNDN);
        mpfr_add(r8100013, r8100008, r8100012, MPFR_RNDN);
        ;
        mpfr_mul(r8100015, r8100011, r8100005, MPFR_RNDN);
        mpfr_mul(r8100016, r8100015, r8100005, MPFR_RNDN);
        mpfr_mul(r8100017, r8100014, r8100016, MPFR_RNDN);
        mpfr_add(r8100018, r8100013, r8100017, MPFR_RNDN);
        return mpfr_get_d(r8100018, MPFR_RNDN);
}

static mpfr_t r8100019, r8100020, r8100021, r8100022, r8100023, r8100024, r8100025, r8100026, r8100027, r8100028, r8100029, r8100030, r8100031, r8100032, r8100033, r8100034, r8100035, r8100036, r8100037;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8100019);
        mpfr_init_set_str(r8100020, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8100021);
        mpfr_init(r8100022);
        mpfr_init_set_str(r8100023, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r8100024);
        mpfr_init_set_str(r8100025, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100026, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8100027);
        mpfr_init(r8100028);
        mpfr_init(r8100029);
        mpfr_init(r8100030);
        mpfr_init_set_str(r8100031, "3", 10, MPFR_RNDN);
        mpfr_init(r8100032);
        mpfr_init(r8100033);
        mpfr_init(r8100034);
        mpfr_init(r8100035);
        mpfr_init(r8100036);
        mpfr_init(r8100037);
}

double f_fm(double x) {
        mpfr_set_d(r8100019, x, MPFR_RNDN);
        ;
        mpfr_mul(r8100021, r8100019, r8100020, MPFR_RNDN);
        mpfr_mul(r8100022, r8100021, r8100019, MPFR_RNDN);
        ;
        mpfr_add(r8100024, r8100022, r8100023, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8100027, r8100019, r8100019, MPFR_RNDN);
        mpfr_mul(r8100028, r8100026, r8100027, MPFR_RNDN);
        mpfr_add(r8100029, r8100025, r8100028, MPFR_RNDN);
        mpfr_mul(r8100030, r8100029, r8100029, MPFR_RNDN);
        ;
        mpfr_pow(r8100032, r8100027, r8100031, MPFR_RNDN);
        mpfr_mul(r8100033, r8100032, r8100032, MPFR_RNDN);
        mpfr_mul(r8100034, r8100029, r8100033, MPFR_RNDN);
        mpfr_mul(r8100035, r8100030, r8100034, MPFR_RNDN);
        mpfr_cbrt(r8100036, r8100035, MPFR_RNDN);
        mpfr_add(r8100037, r8100024, r8100036, MPFR_RNDN);
        return mpfr_get_d(r8100037, MPFR_RNDN);
}

static mpfr_t r8100038, r8100039, r8100040, r8100041, r8100042, r8100043, r8100044, r8100045, r8100046, r8100047, r8100048, r8100049, r8100050, r8100051, r8100052, r8100053, r8100054, r8100055, r8100056;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r8100038);
        mpfr_init_set_str(r8100039, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r8100040);
        mpfr_init(r8100041);
        mpfr_init_set_str(r8100042, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r8100043);
        mpfr_init_set_str(r8100044, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r8100045, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r8100046);
        mpfr_init(r8100047);
        mpfr_init(r8100048);
        mpfr_init(r8100049);
        mpfr_init_set_str(r8100050, "3", 10, MPFR_RNDN);
        mpfr_init(r8100051);
        mpfr_init(r8100052);
        mpfr_init(r8100053);
        mpfr_init(r8100054);
        mpfr_init(r8100055);
        mpfr_init(r8100056);
}

double f_dm(double x) {
        mpfr_set_d(r8100038, x, MPFR_RNDN);
        ;
        mpfr_mul(r8100040, r8100038, r8100039, MPFR_RNDN);
        mpfr_mul(r8100041, r8100040, r8100038, MPFR_RNDN);
        ;
        mpfr_add(r8100043, r8100041, r8100042, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8100046, r8100038, r8100038, MPFR_RNDN);
        mpfr_mul(r8100047, r8100045, r8100046, MPFR_RNDN);
        mpfr_add(r8100048, r8100044, r8100047, MPFR_RNDN);
        mpfr_mul(r8100049, r8100048, r8100048, MPFR_RNDN);
        ;
        mpfr_pow(r8100051, r8100046, r8100050, MPFR_RNDN);
        mpfr_mul(r8100052, r8100051, r8100051, MPFR_RNDN);
        mpfr_mul(r8100053, r8100048, r8100052, MPFR_RNDN);
        mpfr_mul(r8100054, r8100049, r8100053, MPFR_RNDN);
        mpfr_cbrt(r8100055, r8100054, MPFR_RNDN);
        mpfr_add(r8100056, r8100043, r8100055, MPFR_RNDN);
        return mpfr_get_d(r8100056, MPFR_RNDN);
}

