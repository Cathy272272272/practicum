#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r98657961 = 1.0;
        float r98657962 = -6.0;
        float r98657963 = x;
        float r98657964 = r98657962 * r98657963;
        float r98657965 = r98657961 + r98657964;
        float r98657966 = 7.5;
        float r98657967 = r98657963 * r98657963;
        float r98657968 = r98657966 * r98657967;
        float r98657969 = r98657965 + r98657968;
        float r98657970 = -3.333333;
        float r98657971 = r98657967 * r98657963;
        float r98657972 = r98657970 * r98657971;
        float r98657973 = r98657969 + r98657972;
        float r98657974 = 0.625;
        float r98657975 = r98657971 * r98657963;
        float r98657976 = r98657974 * r98657975;
        float r98657977 = r98657973 + r98657976;
        float r98657978 = -0.05;
        float r98657979 = r98657975 * r98657963;
        float r98657980 = r98657978 * r98657979;
        float r98657981 = r98657977 + r98657980;
        float r98657982 = 0.001389;
        float r98657983 = r98657979 * r98657963;
        float r98657984 = r98657982 * r98657983;
        float r98657985 = r98657981 + r98657984;
        return r98657985;
}

double f_id(double x) {
        double r98657986 = 1.0;
        double r98657987 = -6.0;
        double r98657988 = x;
        double r98657989 = r98657987 * r98657988;
        double r98657990 = r98657986 + r98657989;
        double r98657991 = 7.5;
        double r98657992 = r98657988 * r98657988;
        double r98657993 = r98657991 * r98657992;
        double r98657994 = r98657990 + r98657993;
        double r98657995 = -3.333333;
        double r98657996 = r98657992 * r98657988;
        double r98657997 = r98657995 * r98657996;
        double r98657998 = r98657994 + r98657997;
        double r98657999 = 0.625;
        double r98658000 = r98657996 * r98657988;
        double r98658001 = r98657999 * r98658000;
        double r98658002 = r98657998 + r98658001;
        double r98658003 = -0.05;
        double r98658004 = r98658000 * r98657988;
        double r98658005 = r98658003 * r98658004;
        double r98658006 = r98658002 + r98658005;
        double r98658007 = 0.001389;
        double r98658008 = r98658004 * r98657988;
        double r98658009 = r98658007 * r98658008;
        double r98658010 = r98658006 + r98658009;
        return r98658010;
}


double f_of(float x) {
        float r98658011 = x;
        float r98658012 = 3;
        float r98658013 = pow(r98658011, r98658012);
        float r98658014 = r98658011 * r98658013;
        float r98658015 = r98658011 * r98658011;
        float r98658016 = 0.001389;
        float r98658017 = r98658015 * r98658016;
        float r98658018 = -0.05;
        float r98658019 = r98658011 * r98658018;
        float r98658020 = 0.625;
        float r98658021 = r98658019 + r98658020;
        float r98658022 = r98658017 + r98658021;
        float r98658023 = r98658014 * r98658022;
        float r98658024 = 1.0;
        float r98658025 = exp(r98658024);
        float r98658026 = -3.333333;
        float r98658027 = exp(r98658026);
        float r98658028 = pow(r98658027, r98658013);
        float r98658029 = r98658025 * r98658028;
        float r98658030 = exp(r98658011);
        float r98658031 = 7.5;
        float r98658032 = r98658011 * r98658031;
        float r98658033 = 6.0;
        float r98658034 = r98658032 - r98658033;
        float r98658035 = pow(r98658030, r98658034);
        float r98658036 = r98658029 * r98658035;
        float r98658037 = log(r98658036);
        float r98658038 = r98658023 + r98658037;
        return r98658038;
}

double f_od(double x) {
        double r98658039 = x;
        double r98658040 = 3;
        double r98658041 = pow(r98658039, r98658040);
        double r98658042 = r98658039 * r98658041;
        double r98658043 = r98658039 * r98658039;
        double r98658044 = 0.001389;
        double r98658045 = r98658043 * r98658044;
        double r98658046 = -0.05;
        double r98658047 = r98658039 * r98658046;
        double r98658048 = 0.625;
        double r98658049 = r98658047 + r98658048;
        double r98658050 = r98658045 + r98658049;
        double r98658051 = r98658042 * r98658050;
        double r98658052 = 1.0;
        double r98658053 = exp(r98658052);
        double r98658054 = -3.333333;
        double r98658055 = exp(r98658054);
        double r98658056 = pow(r98658055, r98658041);
        double r98658057 = r98658053 * r98658056;
        double r98658058 = exp(r98658039);
        double r98658059 = 7.5;
        double r98658060 = r98658039 * r98658059;
        double r98658061 = 6.0;
        double r98658062 = r98658060 - r98658061;
        double r98658063 = pow(r98658058, r98658062);
        double r98658064 = r98658057 * r98658063;
        double r98658065 = log(r98658064);
        double r98658066 = r98658051 + r98658065;
        return r98658066;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r98658067, r98658068, r98658069, r98658070, r98658071, r98658072, r98658073, r98658074, r98658075, r98658076, r98658077, r98658078, r98658079, r98658080, r98658081, r98658082, r98658083, r98658084, r98658085, r98658086, r98658087, r98658088, r98658089, r98658090, r98658091;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r98658067, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r98658068, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r98658069);
        mpfr_init(r98658070);
        mpfr_init(r98658071);
        mpfr_init_set_str(r98658072, "7.5", 10, MPFR_RNDN);
        mpfr_init(r98658073);
        mpfr_init(r98658074);
        mpfr_init(r98658075);
        mpfr_init_set_str(r98658076, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r98658077);
        mpfr_init(r98658078);
        mpfr_init(r98658079);
        mpfr_init_set_str(r98658080, "0.625", 10, MPFR_RNDN);
        mpfr_init(r98658081);
        mpfr_init(r98658082);
        mpfr_init(r98658083);
        mpfr_init_set_str(r98658084, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r98658085);
        mpfr_init(r98658086);
        mpfr_init(r98658087);
        mpfr_init_set_str(r98658088, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r98658089);
        mpfr_init(r98658090);
        mpfr_init(r98658091);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r98658069, x, MPFR_RNDN);
        mpfr_mul(r98658070, r98658068, r98658069, MPFR_RNDN);
        mpfr_add(r98658071, r98658067, r98658070, MPFR_RNDN);
        ;
        mpfr_mul(r98658073, r98658069, r98658069, MPFR_RNDN);
        mpfr_mul(r98658074, r98658072, r98658073, MPFR_RNDN);
        mpfr_add(r98658075, r98658071, r98658074, MPFR_RNDN);
        ;
        mpfr_mul(r98658077, r98658073, r98658069, MPFR_RNDN);
        mpfr_mul(r98658078, r98658076, r98658077, MPFR_RNDN);
        mpfr_add(r98658079, r98658075, r98658078, MPFR_RNDN);
        ;
        mpfr_mul(r98658081, r98658077, r98658069, MPFR_RNDN);
        mpfr_mul(r98658082, r98658080, r98658081, MPFR_RNDN);
        mpfr_add(r98658083, r98658079, r98658082, MPFR_RNDN);
        ;
        mpfr_mul(r98658085, r98658081, r98658069, MPFR_RNDN);
        mpfr_mul(r98658086, r98658084, r98658085, MPFR_RNDN);
        mpfr_add(r98658087, r98658083, r98658086, MPFR_RNDN);
        ;
        mpfr_mul(r98658089, r98658085, r98658069, MPFR_RNDN);
        mpfr_mul(r98658090, r98658088, r98658089, MPFR_RNDN);
        mpfr_add(r98658091, r98658087, r98658090, MPFR_RNDN);
        return mpfr_get_d(r98658091, MPFR_RNDN);
}

static mpfr_t r98658092, r98658093, r98658094, r98658095, r98658096, r98658097, r98658098, r98658099, r98658100, r98658101, r98658102, r98658103, r98658104, r98658105, r98658106, r98658107, r98658108, r98658109, r98658110, r98658111, r98658112, r98658113, r98658114, r98658115, r98658116, r98658117, r98658118, r98658119;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98658092);
        mpfr_init_set_str(r98658093, "3", 10, MPFR_RNDN);
        mpfr_init(r98658094);
        mpfr_init(r98658095);
        mpfr_init(r98658096);
        mpfr_init_set_str(r98658097, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r98658098);
        mpfr_init_set_str(r98658099, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r98658100);
        mpfr_init_set_str(r98658101, "0.625", 10, MPFR_RNDN);
        mpfr_init(r98658102);
        mpfr_init(r98658103);
        mpfr_init(r98658104);
        mpfr_init_set_str(r98658105, "1.0", 10, MPFR_RNDN);
        mpfr_init(r98658106);
        mpfr_init_set_str(r98658107, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r98658108);
        mpfr_init(r98658109);
        mpfr_init(r98658110);
        mpfr_init(r98658111);
        mpfr_init_set_str(r98658112, "7.5", 10, MPFR_RNDN);
        mpfr_init(r98658113);
        mpfr_init_set_str(r98658114, "6.0", 10, MPFR_RNDN);
        mpfr_init(r98658115);
        mpfr_init(r98658116);
        mpfr_init(r98658117);
        mpfr_init(r98658118);
        mpfr_init(r98658119);
}

double f_fm(double x) {
        mpfr_set_d(r98658092, x, MPFR_RNDN);
        ;
        mpfr_pow(r98658094, r98658092, r98658093, MPFR_RNDN);
        mpfr_mul(r98658095, r98658092, r98658094, MPFR_RNDN);
        mpfr_mul(r98658096, r98658092, r98658092, MPFR_RNDN);
        ;
        mpfr_mul(r98658098, r98658096, r98658097, MPFR_RNDN);
        ;
        mpfr_mul(r98658100, r98658092, r98658099, MPFR_RNDN);
        ;
        mpfr_add(r98658102, r98658100, r98658101, MPFR_RNDN);
        mpfr_add(r98658103, r98658098, r98658102, MPFR_RNDN);
        mpfr_mul(r98658104, r98658095, r98658103, MPFR_RNDN);
        ;
        mpfr_exp(r98658106, r98658105, MPFR_RNDN);
        ;
        mpfr_exp(r98658108, r98658107, MPFR_RNDN);
        mpfr_pow(r98658109, r98658108, r98658094, MPFR_RNDN);
        mpfr_mul(r98658110, r98658106, r98658109, MPFR_RNDN);
        mpfr_exp(r98658111, r98658092, MPFR_RNDN);
        ;
        mpfr_mul(r98658113, r98658092, r98658112, MPFR_RNDN);
        ;
        mpfr_sub(r98658115, r98658113, r98658114, MPFR_RNDN);
        mpfr_pow(r98658116, r98658111, r98658115, MPFR_RNDN);
        mpfr_mul(r98658117, r98658110, r98658116, MPFR_RNDN);
        mpfr_log(r98658118, r98658117, MPFR_RNDN);
        mpfr_add(r98658119, r98658104, r98658118, MPFR_RNDN);
        return mpfr_get_d(r98658119, MPFR_RNDN);
}

static mpfr_t r98658120, r98658121, r98658122, r98658123, r98658124, r98658125, r98658126, r98658127, r98658128, r98658129, r98658130, r98658131, r98658132, r98658133, r98658134, r98658135, r98658136, r98658137, r98658138, r98658139, r98658140, r98658141, r98658142, r98658143, r98658144, r98658145, r98658146, r98658147;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r98658120);
        mpfr_init_set_str(r98658121, "3", 10, MPFR_RNDN);
        mpfr_init(r98658122);
        mpfr_init(r98658123);
        mpfr_init(r98658124);
        mpfr_init_set_str(r98658125, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r98658126);
        mpfr_init_set_str(r98658127, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r98658128);
        mpfr_init_set_str(r98658129, "0.625", 10, MPFR_RNDN);
        mpfr_init(r98658130);
        mpfr_init(r98658131);
        mpfr_init(r98658132);
        mpfr_init_set_str(r98658133, "1.0", 10, MPFR_RNDN);
        mpfr_init(r98658134);
        mpfr_init_set_str(r98658135, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r98658136);
        mpfr_init(r98658137);
        mpfr_init(r98658138);
        mpfr_init(r98658139);
        mpfr_init_set_str(r98658140, "7.5", 10, MPFR_RNDN);
        mpfr_init(r98658141);
        mpfr_init_set_str(r98658142, "6.0", 10, MPFR_RNDN);
        mpfr_init(r98658143);
        mpfr_init(r98658144);
        mpfr_init(r98658145);
        mpfr_init(r98658146);
        mpfr_init(r98658147);
}

double f_dm(double x) {
        mpfr_set_d(r98658120, x, MPFR_RNDN);
        ;
        mpfr_pow(r98658122, r98658120, r98658121, MPFR_RNDN);
        mpfr_mul(r98658123, r98658120, r98658122, MPFR_RNDN);
        mpfr_mul(r98658124, r98658120, r98658120, MPFR_RNDN);
        ;
        mpfr_mul(r98658126, r98658124, r98658125, MPFR_RNDN);
        ;
        mpfr_mul(r98658128, r98658120, r98658127, MPFR_RNDN);
        ;
        mpfr_add(r98658130, r98658128, r98658129, MPFR_RNDN);
        mpfr_add(r98658131, r98658126, r98658130, MPFR_RNDN);
        mpfr_mul(r98658132, r98658123, r98658131, MPFR_RNDN);
        ;
        mpfr_exp(r98658134, r98658133, MPFR_RNDN);
        ;
        mpfr_exp(r98658136, r98658135, MPFR_RNDN);
        mpfr_pow(r98658137, r98658136, r98658122, MPFR_RNDN);
        mpfr_mul(r98658138, r98658134, r98658137, MPFR_RNDN);
        mpfr_exp(r98658139, r98658120, MPFR_RNDN);
        ;
        mpfr_mul(r98658141, r98658120, r98658140, MPFR_RNDN);
        ;
        mpfr_sub(r98658143, r98658141, r98658142, MPFR_RNDN);
        mpfr_pow(r98658144, r98658139, r98658143, MPFR_RNDN);
        mpfr_mul(r98658145, r98658138, r98658144, MPFR_RNDN);
        mpfr_log(r98658146, r98658145, MPFR_RNDN);
        mpfr_add(r98658147, r98658132, r98658146, MPFR_RNDN);
        return mpfr_get_d(r98658147, MPFR_RNDN);
}

