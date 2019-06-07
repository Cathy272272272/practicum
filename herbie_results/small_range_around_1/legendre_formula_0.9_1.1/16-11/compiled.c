#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r31481895 = -2.707031;
        float r31481896 = x;
        float r31481897 = r31481895 * r31481896;
        float r31481898 = 58.652344;
        float r31481899 = r31481896 * r31481896;
        float r31481900 = r31481899 * r31481896;
        float r31481901 = r31481898 * r31481900;
        float r31481902 = r31481897 + r31481901;
        float r31481903 = -351.914062;
        float r31481904 = r31481900 * r31481896;
        float r31481905 = r31481904 * r31481896;
        float r31481906 = r31481903 * r31481905;
        float r31481907 = r31481902 + r31481906;
        float r31481908 = 854.648438;
        float r31481909 = r31481905 * r31481896;
        float r31481910 = r31481909 * r31481896;
        float r31481911 = r31481908 * r31481910;
        float r31481912 = r31481907 + r31481911;
        float r31481913 = -902.128906;
        float r31481914 = r31481910 * r31481896;
        float r31481915 = r31481914 * r31481896;
        float r31481916 = r31481913 * r31481915;
        float r31481917 = r31481912 + r31481916;
        float r31481918 = 344.449219;
        float r31481919 = r31481915 * r31481896;
        float r31481920 = r31481919 * r31481896;
        float r31481921 = r31481918 * r31481920;
        float r31481922 = r31481917 + r31481921;
        return r31481922;
}

double f_id(double x) {
        double r31481923 = -2.707031;
        double r31481924 = x;
        double r31481925 = r31481923 * r31481924;
        double r31481926 = 58.652344;
        double r31481927 = r31481924 * r31481924;
        double r31481928 = r31481927 * r31481924;
        double r31481929 = r31481926 * r31481928;
        double r31481930 = r31481925 + r31481929;
        double r31481931 = -351.914062;
        double r31481932 = r31481928 * r31481924;
        double r31481933 = r31481932 * r31481924;
        double r31481934 = r31481931 * r31481933;
        double r31481935 = r31481930 + r31481934;
        double r31481936 = 854.648438;
        double r31481937 = r31481933 * r31481924;
        double r31481938 = r31481937 * r31481924;
        double r31481939 = r31481936 * r31481938;
        double r31481940 = r31481935 + r31481939;
        double r31481941 = -902.128906;
        double r31481942 = r31481938 * r31481924;
        double r31481943 = r31481942 * r31481924;
        double r31481944 = r31481941 * r31481943;
        double r31481945 = r31481940 + r31481944;
        double r31481946 = 344.449219;
        double r31481947 = r31481943 * r31481924;
        double r31481948 = r31481947 * r31481924;
        double r31481949 = r31481946 * r31481948;
        double r31481950 = r31481945 + r31481949;
        return r31481950;
}


double f_of(float x) {
        float r31481951 = x;
        float r31481952 = r31481951 * r31481951;
        float r31481953 = 3;
        float r31481954 = pow(r31481952, r31481953);
        float r31481955 = r31481951 * r31481954;
        float r31481956 = exp(r31481955);
        float r31481957 = -902.128906;
        float r31481958 = r31481952 * r31481957;
        float r31481959 = pow(r31481958, r31481953);
        float r31481960 = 854.648438;
        float r31481961 = pow(r31481960, r31481953);
        float r31481962 = r31481959 + r31481961;
        float r31481963 = cbrt(r31481962);
        float r31481964 = r31481963 * r31481963;
        float r31481965 = r31481964 * r31481963;
        float r31481966 = r31481960 * r31481960;
        float r31481967 = r31481957 * r31481960;
        float r31481968 = r31481967 * r31481952;
        float r31481969 = r31481966 - r31481968;
        float r31481970 = r31481958 * r31481958;
        float r31481971 = r31481969 + r31481970;
        float r31481972 = r31481965 / r31481971;
        float r31481973 = pow(r31481956, r31481972);
        float r31481974 = 344.449219;
        float r31481975 = r31481974 * r31481951;
        float r31481976 = r31481975 * r31481952;
        float r31481977 = 1;
        float r31481978 = r31481953 + r31481977;
        float r31481979 = pow(r31481952, r31481978);
        float r31481980 = r31481976 * r31481979;
        float r31481981 = -2.707031;
        float r31481982 = r31481981 * r31481951;
        float r31481983 = r31481980 + r31481982;
        float r31481984 = 58.652344;
        float r31481985 = r31481984 * r31481951;
        float r31481986 = -351.914062;
        float r31481987 = r31481951 * r31481986;
        float r31481988 = r31481987 * r31481952;
        float r31481989 = r31481985 + r31481988;
        float r31481990 = r31481952 * r31481989;
        float r31481991 = r31481983 + r31481990;
        float r31481992 = exp(r31481991);
        float r31481993 = r31481973 * r31481992;
        float r31481994 = log(r31481993);
        return r31481994;
}

double f_od(double x) {
        double r31481995 = x;
        double r31481996 = r31481995 * r31481995;
        double r31481997 = 3;
        double r31481998 = pow(r31481996, r31481997);
        double r31481999 = r31481995 * r31481998;
        double r31482000 = exp(r31481999);
        double r31482001 = -902.128906;
        double r31482002 = r31481996 * r31482001;
        double r31482003 = pow(r31482002, r31481997);
        double r31482004 = 854.648438;
        double r31482005 = pow(r31482004, r31481997);
        double r31482006 = r31482003 + r31482005;
        double r31482007 = cbrt(r31482006);
        double r31482008 = r31482007 * r31482007;
        double r31482009 = r31482008 * r31482007;
        double r31482010 = r31482004 * r31482004;
        double r31482011 = r31482001 * r31482004;
        double r31482012 = r31482011 * r31481996;
        double r31482013 = r31482010 - r31482012;
        double r31482014 = r31482002 * r31482002;
        double r31482015 = r31482013 + r31482014;
        double r31482016 = r31482009 / r31482015;
        double r31482017 = pow(r31482000, r31482016);
        double r31482018 = 344.449219;
        double r31482019 = r31482018 * r31481995;
        double r31482020 = r31482019 * r31481996;
        double r31482021 = 1;
        double r31482022 = r31481997 + r31482021;
        double r31482023 = pow(r31481996, r31482022);
        double r31482024 = r31482020 * r31482023;
        double r31482025 = -2.707031;
        double r31482026 = r31482025 * r31481995;
        double r31482027 = r31482024 + r31482026;
        double r31482028 = 58.652344;
        double r31482029 = r31482028 * r31481995;
        double r31482030 = -351.914062;
        double r31482031 = r31481995 * r31482030;
        double r31482032 = r31482031 * r31481996;
        double r31482033 = r31482029 + r31482032;
        double r31482034 = r31481996 * r31482033;
        double r31482035 = r31482027 + r31482034;
        double r31482036 = exp(r31482035);
        double r31482037 = r31482017 * r31482036;
        double r31482038 = log(r31482037);
        return r31482038;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r31482039, r31482040, r31482041, r31482042, r31482043, r31482044, r31482045, r31482046, r31482047, r31482048, r31482049, r31482050, r31482051, r31482052, r31482053, r31482054, r31482055, r31482056, r31482057, r31482058, r31482059, r31482060, r31482061, r31482062, r31482063, r31482064, r31482065, r31482066;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r31482039, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r31482040);
        mpfr_init(r31482041);
        mpfr_init_set_str(r31482042, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r31482043);
        mpfr_init(r31482044);
        mpfr_init(r31482045);
        mpfr_init(r31482046);
        mpfr_init_set_str(r31482047, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r31482048);
        mpfr_init(r31482049);
        mpfr_init(r31482050);
        mpfr_init(r31482051);
        mpfr_init_set_str(r31482052, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r31482053);
        mpfr_init(r31482054);
        mpfr_init(r31482055);
        mpfr_init(r31482056);
        mpfr_init_set_str(r31482057, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r31482058);
        mpfr_init(r31482059);
        mpfr_init(r31482060);
        mpfr_init(r31482061);
        mpfr_init_set_str(r31482062, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r31482063);
        mpfr_init(r31482064);
        mpfr_init(r31482065);
        mpfr_init(r31482066);
}

double f_im(double x) {
        ;
        mpfr_set_d(r31482040, x, MPFR_RNDN);
        mpfr_mul(r31482041, r31482039, r31482040, MPFR_RNDN);
        ;
        mpfr_mul(r31482043, r31482040, r31482040, MPFR_RNDN);
        mpfr_mul(r31482044, r31482043, r31482040, MPFR_RNDN);
        mpfr_mul(r31482045, r31482042, r31482044, MPFR_RNDN);
        mpfr_add(r31482046, r31482041, r31482045, MPFR_RNDN);
        ;
        mpfr_mul(r31482048, r31482044, r31482040, MPFR_RNDN);
        mpfr_mul(r31482049, r31482048, r31482040, MPFR_RNDN);
        mpfr_mul(r31482050, r31482047, r31482049, MPFR_RNDN);
        mpfr_add(r31482051, r31482046, r31482050, MPFR_RNDN);
        ;
        mpfr_mul(r31482053, r31482049, r31482040, MPFR_RNDN);
        mpfr_mul(r31482054, r31482053, r31482040, MPFR_RNDN);
        mpfr_mul(r31482055, r31482052, r31482054, MPFR_RNDN);
        mpfr_add(r31482056, r31482051, r31482055, MPFR_RNDN);
        ;
        mpfr_mul(r31482058, r31482054, r31482040, MPFR_RNDN);
        mpfr_mul(r31482059, r31482058, r31482040, MPFR_RNDN);
        mpfr_mul(r31482060, r31482057, r31482059, MPFR_RNDN);
        mpfr_add(r31482061, r31482056, r31482060, MPFR_RNDN);
        ;
        mpfr_mul(r31482063, r31482059, r31482040, MPFR_RNDN);
        mpfr_mul(r31482064, r31482063, r31482040, MPFR_RNDN);
        mpfr_mul(r31482065, r31482062, r31482064, MPFR_RNDN);
        mpfr_add(r31482066, r31482061, r31482065, MPFR_RNDN);
        return mpfr_get_d(r31482066, MPFR_RNDN);
}

static mpfr_t r31482067, r31482068, r31482069, r31482070, r31482071, r31482072, r31482073, r31482074, r31482075, r31482076, r31482077, r31482078, r31482079, r31482080, r31482081, r31482082, r31482083, r31482084, r31482085, r31482086, r31482087, r31482088, r31482089, r31482090, r31482091, r31482092, r31482093, r31482094, r31482095, r31482096, r31482097, r31482098, r31482099, r31482100, r31482101, r31482102, r31482103, r31482104, r31482105, r31482106, r31482107, r31482108, r31482109, r31482110;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31482067);
        mpfr_init(r31482068);
        mpfr_init_set_str(r31482069, "3", 10, MPFR_RNDN);
        mpfr_init(r31482070);
        mpfr_init(r31482071);
        mpfr_init(r31482072);
        mpfr_init_set_str(r31482073, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r31482074);
        mpfr_init(r31482075);
        mpfr_init_set_str(r31482076, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r31482077);
        mpfr_init(r31482078);
        mpfr_init(r31482079);
        mpfr_init(r31482080);
        mpfr_init(r31482081);
        mpfr_init(r31482082);
        mpfr_init(r31482083);
        mpfr_init(r31482084);
        mpfr_init(r31482085);
        mpfr_init(r31482086);
        mpfr_init(r31482087);
        mpfr_init(r31482088);
        mpfr_init(r31482089);
        mpfr_init_set_str(r31482090, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r31482091);
        mpfr_init(r31482092);
        mpfr_init_set_str(r31482093, "1", 10, MPFR_RNDN);
        mpfr_init(r31482094);
        mpfr_init(r31482095);
        mpfr_init(r31482096);
        mpfr_init_set_str(r31482097, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r31482098);
        mpfr_init(r31482099);
        mpfr_init_set_str(r31482100, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r31482101);
        mpfr_init_set_str(r31482102, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r31482103);
        mpfr_init(r31482104);
        mpfr_init(r31482105);
        mpfr_init(r31482106);
        mpfr_init(r31482107);
        mpfr_init(r31482108);
        mpfr_init(r31482109);
        mpfr_init(r31482110);
}

double f_fm(double x) {
        mpfr_set_d(r31482067, x, MPFR_RNDN);
        mpfr_mul(r31482068, r31482067, r31482067, MPFR_RNDN);
        ;
        mpfr_pow(r31482070, r31482068, r31482069, MPFR_RNDN);
        mpfr_mul(r31482071, r31482067, r31482070, MPFR_RNDN);
        mpfr_exp(r31482072, r31482071, MPFR_RNDN);
        ;
        mpfr_mul(r31482074, r31482068, r31482073, MPFR_RNDN);
        mpfr_pow(r31482075, r31482074, r31482069, MPFR_RNDN);
        ;
        mpfr_pow(r31482077, r31482076, r31482069, MPFR_RNDN);
        mpfr_add(r31482078, r31482075, r31482077, MPFR_RNDN);
        mpfr_cbrt(r31482079, r31482078, MPFR_RNDN);
        mpfr_mul(r31482080, r31482079, r31482079, MPFR_RNDN);
        mpfr_mul(r31482081, r31482080, r31482079, MPFR_RNDN);
        mpfr_mul(r31482082, r31482076, r31482076, MPFR_RNDN);
        mpfr_mul(r31482083, r31482073, r31482076, MPFR_RNDN);
        mpfr_mul(r31482084, r31482083, r31482068, MPFR_RNDN);
        mpfr_sub(r31482085, r31482082, r31482084, MPFR_RNDN);
        mpfr_mul(r31482086, r31482074, r31482074, MPFR_RNDN);
        mpfr_add(r31482087, r31482085, r31482086, MPFR_RNDN);
        mpfr_div(r31482088, r31482081, r31482087, MPFR_RNDN);
        mpfr_pow(r31482089, r31482072, r31482088, MPFR_RNDN);
        ;
        mpfr_mul(r31482091, r31482090, r31482067, MPFR_RNDN);
        mpfr_mul(r31482092, r31482091, r31482068, MPFR_RNDN);
        ;
        mpfr_add(r31482094, r31482069, r31482093, MPFR_RNDN);
        mpfr_pow(r31482095, r31482068, r31482094, MPFR_RNDN);
        mpfr_mul(r31482096, r31482092, r31482095, MPFR_RNDN);
        ;
        mpfr_mul(r31482098, r31482097, r31482067, MPFR_RNDN);
        mpfr_add(r31482099, r31482096, r31482098, MPFR_RNDN);
        ;
        mpfr_mul(r31482101, r31482100, r31482067, MPFR_RNDN);
        ;
        mpfr_mul(r31482103, r31482067, r31482102, MPFR_RNDN);
        mpfr_mul(r31482104, r31482103, r31482068, MPFR_RNDN);
        mpfr_add(r31482105, r31482101, r31482104, MPFR_RNDN);
        mpfr_mul(r31482106, r31482068, r31482105, MPFR_RNDN);
        mpfr_add(r31482107, r31482099, r31482106, MPFR_RNDN);
        mpfr_exp(r31482108, r31482107, MPFR_RNDN);
        mpfr_mul(r31482109, r31482089, r31482108, MPFR_RNDN);
        mpfr_log(r31482110, r31482109, MPFR_RNDN);
        return mpfr_get_d(r31482110, MPFR_RNDN);
}

static mpfr_t r31482111, r31482112, r31482113, r31482114, r31482115, r31482116, r31482117, r31482118, r31482119, r31482120, r31482121, r31482122, r31482123, r31482124, r31482125, r31482126, r31482127, r31482128, r31482129, r31482130, r31482131, r31482132, r31482133, r31482134, r31482135, r31482136, r31482137, r31482138, r31482139, r31482140, r31482141, r31482142, r31482143, r31482144, r31482145, r31482146, r31482147, r31482148, r31482149, r31482150, r31482151, r31482152, r31482153, r31482154;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r31482111);
        mpfr_init(r31482112);
        mpfr_init_set_str(r31482113, "3", 10, MPFR_RNDN);
        mpfr_init(r31482114);
        mpfr_init(r31482115);
        mpfr_init(r31482116);
        mpfr_init_set_str(r31482117, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r31482118);
        mpfr_init(r31482119);
        mpfr_init_set_str(r31482120, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r31482121);
        mpfr_init(r31482122);
        mpfr_init(r31482123);
        mpfr_init(r31482124);
        mpfr_init(r31482125);
        mpfr_init(r31482126);
        mpfr_init(r31482127);
        mpfr_init(r31482128);
        mpfr_init(r31482129);
        mpfr_init(r31482130);
        mpfr_init(r31482131);
        mpfr_init(r31482132);
        mpfr_init(r31482133);
        mpfr_init_set_str(r31482134, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r31482135);
        mpfr_init(r31482136);
        mpfr_init_set_str(r31482137, "1", 10, MPFR_RNDN);
        mpfr_init(r31482138);
        mpfr_init(r31482139);
        mpfr_init(r31482140);
        mpfr_init_set_str(r31482141, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r31482142);
        mpfr_init(r31482143);
        mpfr_init_set_str(r31482144, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r31482145);
        mpfr_init_set_str(r31482146, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r31482147);
        mpfr_init(r31482148);
        mpfr_init(r31482149);
        mpfr_init(r31482150);
        mpfr_init(r31482151);
        mpfr_init(r31482152);
        mpfr_init(r31482153);
        mpfr_init(r31482154);
}

double f_dm(double x) {
        mpfr_set_d(r31482111, x, MPFR_RNDN);
        mpfr_mul(r31482112, r31482111, r31482111, MPFR_RNDN);
        ;
        mpfr_pow(r31482114, r31482112, r31482113, MPFR_RNDN);
        mpfr_mul(r31482115, r31482111, r31482114, MPFR_RNDN);
        mpfr_exp(r31482116, r31482115, MPFR_RNDN);
        ;
        mpfr_mul(r31482118, r31482112, r31482117, MPFR_RNDN);
        mpfr_pow(r31482119, r31482118, r31482113, MPFR_RNDN);
        ;
        mpfr_pow(r31482121, r31482120, r31482113, MPFR_RNDN);
        mpfr_add(r31482122, r31482119, r31482121, MPFR_RNDN);
        mpfr_cbrt(r31482123, r31482122, MPFR_RNDN);
        mpfr_mul(r31482124, r31482123, r31482123, MPFR_RNDN);
        mpfr_mul(r31482125, r31482124, r31482123, MPFR_RNDN);
        mpfr_mul(r31482126, r31482120, r31482120, MPFR_RNDN);
        mpfr_mul(r31482127, r31482117, r31482120, MPFR_RNDN);
        mpfr_mul(r31482128, r31482127, r31482112, MPFR_RNDN);
        mpfr_sub(r31482129, r31482126, r31482128, MPFR_RNDN);
        mpfr_mul(r31482130, r31482118, r31482118, MPFR_RNDN);
        mpfr_add(r31482131, r31482129, r31482130, MPFR_RNDN);
        mpfr_div(r31482132, r31482125, r31482131, MPFR_RNDN);
        mpfr_pow(r31482133, r31482116, r31482132, MPFR_RNDN);
        ;
        mpfr_mul(r31482135, r31482134, r31482111, MPFR_RNDN);
        mpfr_mul(r31482136, r31482135, r31482112, MPFR_RNDN);
        ;
        mpfr_add(r31482138, r31482113, r31482137, MPFR_RNDN);
        mpfr_pow(r31482139, r31482112, r31482138, MPFR_RNDN);
        mpfr_mul(r31482140, r31482136, r31482139, MPFR_RNDN);
        ;
        mpfr_mul(r31482142, r31482141, r31482111, MPFR_RNDN);
        mpfr_add(r31482143, r31482140, r31482142, MPFR_RNDN);
        ;
        mpfr_mul(r31482145, r31482144, r31482111, MPFR_RNDN);
        ;
        mpfr_mul(r31482147, r31482111, r31482146, MPFR_RNDN);
        mpfr_mul(r31482148, r31482147, r31482112, MPFR_RNDN);
        mpfr_add(r31482149, r31482145, r31482148, MPFR_RNDN);
        mpfr_mul(r31482150, r31482112, r31482149, MPFR_RNDN);
        mpfr_add(r31482151, r31482143, r31482150, MPFR_RNDN);
        mpfr_exp(r31482152, r31482151, MPFR_RNDN);
        mpfr_mul(r31482153, r31482133, r31482152, MPFR_RNDN);
        mpfr_log(r31482154, r31482153, MPFR_RNDN);
        return mpfr_get_d(r31482154, MPFR_RNDN);
}

