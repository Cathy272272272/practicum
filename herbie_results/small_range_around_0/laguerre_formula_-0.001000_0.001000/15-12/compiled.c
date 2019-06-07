#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r3751934 = 1.0;
        float r3751935 = -12.0;
        float r3751936 = x;
        float r3751937 = r3751935 * r3751936;
        float r3751938 = r3751934 + r3751937;
        float r3751939 = 33.0;
        float r3751940 = r3751936 * r3751936;
        float r3751941 = r3751939 * r3751940;
        float r3751942 = r3751938 + r3751941;
        float r3751943 = -36.666667;
        float r3751944 = r3751940 * r3751936;
        float r3751945 = r3751943 * r3751944;
        float r3751946 = r3751942 + r3751945;
        float r3751947 = 20.625;
        float r3751948 = r3751944 * r3751936;
        float r3751949 = r3751947 * r3751948;
        float r3751950 = r3751946 + r3751949;
        float r3751951 = -6.6;
        float r3751952 = r3751948 * r3751936;
        float r3751953 = r3751951 * r3751952;
        float r3751954 = r3751950 + r3751953;
        float r3751955 = 1.283333;
        float r3751956 = r3751952 * r3751936;
        float r3751957 = r3751955 * r3751956;
        float r3751958 = r3751954 + r3751957;
        float r3751959 = -0.157143;
        float r3751960 = r3751956 * r3751936;
        float r3751961 = r3751959 * r3751960;
        float r3751962 = r3751958 + r3751961;
        float r3751963 = 0.012277;
        float r3751964 = r3751960 * r3751936;
        float r3751965 = r3751963 * r3751964;
        float r3751966 = r3751962 + r3751965;
        float r3751967 = -0.000606;
        float r3751968 = r3751964 * r3751936;
        float r3751969 = r3751967 * r3751968;
        float r3751970 = r3751966 + r3751969;
        float r3751971 = 1.8e-05;
        float r3751972 = r3751968 * r3751936;
        float r3751973 = r3751971 * r3751972;
        float r3751974 = r3751970 + r3751973;
        return r3751974;
}

double f_id(double x) {
        double r3751975 = 1.0;
        double r3751976 = -12.0;
        double r3751977 = x;
        double r3751978 = r3751976 * r3751977;
        double r3751979 = r3751975 + r3751978;
        double r3751980 = 33.0;
        double r3751981 = r3751977 * r3751977;
        double r3751982 = r3751980 * r3751981;
        double r3751983 = r3751979 + r3751982;
        double r3751984 = -36.666667;
        double r3751985 = r3751981 * r3751977;
        double r3751986 = r3751984 * r3751985;
        double r3751987 = r3751983 + r3751986;
        double r3751988 = 20.625;
        double r3751989 = r3751985 * r3751977;
        double r3751990 = r3751988 * r3751989;
        double r3751991 = r3751987 + r3751990;
        double r3751992 = -6.6;
        double r3751993 = r3751989 * r3751977;
        double r3751994 = r3751992 * r3751993;
        double r3751995 = r3751991 + r3751994;
        double r3751996 = 1.283333;
        double r3751997 = r3751993 * r3751977;
        double r3751998 = r3751996 * r3751997;
        double r3751999 = r3751995 + r3751998;
        double r3752000 = -0.157143;
        double r3752001 = r3751997 * r3751977;
        double r3752002 = r3752000 * r3752001;
        double r3752003 = r3751999 + r3752002;
        double r3752004 = 0.012277;
        double r3752005 = r3752001 * r3751977;
        double r3752006 = r3752004 * r3752005;
        double r3752007 = r3752003 + r3752006;
        double r3752008 = -0.000606;
        double r3752009 = r3752005 * r3751977;
        double r3752010 = r3752008 * r3752009;
        double r3752011 = r3752007 + r3752010;
        double r3752012 = 1.8e-05;
        double r3752013 = r3752009 * r3751977;
        double r3752014 = r3752012 * r3752013;
        double r3752015 = r3752011 + r3752014;
        return r3752015;
}


double f_of(float x) {
        float r3752016 = x;
        float r3752017 = r3752016 * r3752016;
        float r3752018 = -36.666667;
        float r3752019 = r3752018 * r3752016;
        float r3752020 = 33.0;
        float r3752021 = r3752019 + r3752020;
        float r3752022 = r3752017 * r3752021;
        float r3752023 = -12.0;
        float r3752024 = r3752016 * r3752023;
        float r3752025 = 1.0;
        float r3752026 = r3752024 + r3752025;
        float r3752027 = r3752022 + r3752026;
        float r3752028 = 3;
        float r3752029 = pow(r3752016, r3752028);
        float r3752030 = r3752029 * r3752029;
        float r3752031 = 1.283333;
        float r3752032 = -0.157143;
        float r3752033 = r3752032 * r3752016;
        float r3752034 = r3752031 + r3752033;
        float r3752035 = r3752030 * r3752034;
        float r3752036 = r3752017 * r3752017;
        float r3752037 = 20.625;
        float r3752038 = -6.6;
        float r3752039 = r3752038 * r3752016;
        float r3752040 = r3752037 + r3752039;
        float r3752041 = r3752036 * r3752040;
        float r3752042 = r3752035 + r3752041;
        float r3752043 = r3752027 + r3752042;
        float r3752044 = r3752036 * r3752036;
        float r3752045 = 1.8e-05;
        float r3752046 = r3752045 * r3752017;
        float r3752047 = r3752044 * r3752046;
        float r3752048 = -0.000606;
        float r3752049 = r3752048 * r3752016;
        float r3752050 = 0.012277;
        float r3752051 = r3752049 + r3752050;
        float r3752052 = r3752044 * r3752051;
        float r3752053 = r3752047 + r3752052;
        float r3752054 = r3752043 + r3752053;
        return r3752054;
}

double f_od(double x) {
        double r3752055 = x;
        double r3752056 = r3752055 * r3752055;
        double r3752057 = -36.666667;
        double r3752058 = r3752057 * r3752055;
        double r3752059 = 33.0;
        double r3752060 = r3752058 + r3752059;
        double r3752061 = r3752056 * r3752060;
        double r3752062 = -12.0;
        double r3752063 = r3752055 * r3752062;
        double r3752064 = 1.0;
        double r3752065 = r3752063 + r3752064;
        double r3752066 = r3752061 + r3752065;
        double r3752067 = 3;
        double r3752068 = pow(r3752055, r3752067);
        double r3752069 = r3752068 * r3752068;
        double r3752070 = 1.283333;
        double r3752071 = -0.157143;
        double r3752072 = r3752071 * r3752055;
        double r3752073 = r3752070 + r3752072;
        double r3752074 = r3752069 * r3752073;
        double r3752075 = r3752056 * r3752056;
        double r3752076 = 20.625;
        double r3752077 = -6.6;
        double r3752078 = r3752077 * r3752055;
        double r3752079 = r3752076 + r3752078;
        double r3752080 = r3752075 * r3752079;
        double r3752081 = r3752074 + r3752080;
        double r3752082 = r3752066 + r3752081;
        double r3752083 = r3752075 * r3752075;
        double r3752084 = 1.8e-05;
        double r3752085 = r3752084 * r3752056;
        double r3752086 = r3752083 * r3752085;
        double r3752087 = -0.000606;
        double r3752088 = r3752087 * r3752055;
        double r3752089 = 0.012277;
        double r3752090 = r3752088 + r3752089;
        double r3752091 = r3752083 * r3752090;
        double r3752092 = r3752086 + r3752091;
        double r3752093 = r3752082 + r3752092;
        return r3752093;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3752094, r3752095, r3752096, r3752097, r3752098, r3752099, r3752100, r3752101, r3752102, r3752103, r3752104, r3752105, r3752106, r3752107, r3752108, r3752109, r3752110, r3752111, r3752112, r3752113, r3752114, r3752115, r3752116, r3752117, r3752118, r3752119, r3752120, r3752121, r3752122, r3752123, r3752124, r3752125, r3752126, r3752127, r3752128, r3752129, r3752130, r3752131, r3752132, r3752133, r3752134;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3752094, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752095, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3752096);
        mpfr_init(r3752097);
        mpfr_init(r3752098);
        mpfr_init_set_str(r3752099, "33.0", 10, MPFR_RNDN);
        mpfr_init(r3752100);
        mpfr_init(r3752101);
        mpfr_init(r3752102);
        mpfr_init_set_str(r3752103, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r3752104);
        mpfr_init(r3752105);
        mpfr_init(r3752106);
        mpfr_init_set_str(r3752107, "20.625", 10, MPFR_RNDN);
        mpfr_init(r3752108);
        mpfr_init(r3752109);
        mpfr_init(r3752110);
        mpfr_init_set_str(r3752111, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r3752112);
        mpfr_init(r3752113);
        mpfr_init(r3752114);
        mpfr_init_set_str(r3752115, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r3752116);
        mpfr_init(r3752117);
        mpfr_init(r3752118);
        mpfr_init_set_str(r3752119, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r3752120);
        mpfr_init(r3752121);
        mpfr_init(r3752122);
        mpfr_init_set_str(r3752123, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r3752124);
        mpfr_init(r3752125);
        mpfr_init(r3752126);
        mpfr_init_set_str(r3752127, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r3752128);
        mpfr_init(r3752129);
        mpfr_init(r3752130);
        mpfr_init_set_str(r3752131, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3752132);
        mpfr_init(r3752133);
        mpfr_init(r3752134);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3752096, x, MPFR_RNDN);
        mpfr_mul(r3752097, r3752095, r3752096, MPFR_RNDN);
        mpfr_add(r3752098, r3752094, r3752097, MPFR_RNDN);
        ;
        mpfr_mul(r3752100, r3752096, r3752096, MPFR_RNDN);
        mpfr_mul(r3752101, r3752099, r3752100, MPFR_RNDN);
        mpfr_add(r3752102, r3752098, r3752101, MPFR_RNDN);
        ;
        mpfr_mul(r3752104, r3752100, r3752096, MPFR_RNDN);
        mpfr_mul(r3752105, r3752103, r3752104, MPFR_RNDN);
        mpfr_add(r3752106, r3752102, r3752105, MPFR_RNDN);
        ;
        mpfr_mul(r3752108, r3752104, r3752096, MPFR_RNDN);
        mpfr_mul(r3752109, r3752107, r3752108, MPFR_RNDN);
        mpfr_add(r3752110, r3752106, r3752109, MPFR_RNDN);
        ;
        mpfr_mul(r3752112, r3752108, r3752096, MPFR_RNDN);
        mpfr_mul(r3752113, r3752111, r3752112, MPFR_RNDN);
        mpfr_add(r3752114, r3752110, r3752113, MPFR_RNDN);
        ;
        mpfr_mul(r3752116, r3752112, r3752096, MPFR_RNDN);
        mpfr_mul(r3752117, r3752115, r3752116, MPFR_RNDN);
        mpfr_add(r3752118, r3752114, r3752117, MPFR_RNDN);
        ;
        mpfr_mul(r3752120, r3752116, r3752096, MPFR_RNDN);
        mpfr_mul(r3752121, r3752119, r3752120, MPFR_RNDN);
        mpfr_add(r3752122, r3752118, r3752121, MPFR_RNDN);
        ;
        mpfr_mul(r3752124, r3752120, r3752096, MPFR_RNDN);
        mpfr_mul(r3752125, r3752123, r3752124, MPFR_RNDN);
        mpfr_add(r3752126, r3752122, r3752125, MPFR_RNDN);
        ;
        mpfr_mul(r3752128, r3752124, r3752096, MPFR_RNDN);
        mpfr_mul(r3752129, r3752127, r3752128, MPFR_RNDN);
        mpfr_add(r3752130, r3752126, r3752129, MPFR_RNDN);
        ;
        mpfr_mul(r3752132, r3752128, r3752096, MPFR_RNDN);
        mpfr_mul(r3752133, r3752131, r3752132, MPFR_RNDN);
        mpfr_add(r3752134, r3752130, r3752133, MPFR_RNDN);
        return mpfr_get_d(r3752134, MPFR_RNDN);
}

static mpfr_t r3752135, r3752136, r3752137, r3752138, r3752139, r3752140, r3752141, r3752142, r3752143, r3752144, r3752145, r3752146, r3752147, r3752148, r3752149, r3752150, r3752151, r3752152, r3752153, r3752154, r3752155, r3752156, r3752157, r3752158, r3752159, r3752160, r3752161, r3752162, r3752163, r3752164, r3752165, r3752166, r3752167, r3752168, r3752169, r3752170, r3752171, r3752172, r3752173;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3752135);
        mpfr_init(r3752136);
        mpfr_init_set_str(r3752137, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r3752138);
        mpfr_init_set_str(r3752139, "33.0", 10, MPFR_RNDN);
        mpfr_init(r3752140);
        mpfr_init(r3752141);
        mpfr_init_set_str(r3752142, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3752143);
        mpfr_init_set_str(r3752144, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3752145);
        mpfr_init(r3752146);
        mpfr_init_set_str(r3752147, "3", 10, MPFR_RNDN);
        mpfr_init(r3752148);
        mpfr_init(r3752149);
        mpfr_init_set_str(r3752150, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752151, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r3752152);
        mpfr_init(r3752153);
        mpfr_init(r3752154);
        mpfr_init(r3752155);
        mpfr_init_set_str(r3752156, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752157, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r3752158);
        mpfr_init(r3752159);
        mpfr_init(r3752160);
        mpfr_init(r3752161);
        mpfr_init(r3752162);
        mpfr_init(r3752163);
        mpfr_init_set_str(r3752164, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3752165);
        mpfr_init(r3752166);
        mpfr_init_set_str(r3752167, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r3752168);
        mpfr_init_set_str(r3752169, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r3752170);
        mpfr_init(r3752171);
        mpfr_init(r3752172);
        mpfr_init(r3752173);
}

double f_fm(double x) {
        mpfr_set_d(r3752135, x, MPFR_RNDN);
        mpfr_mul(r3752136, r3752135, r3752135, MPFR_RNDN);
        ;
        mpfr_mul(r3752138, r3752137, r3752135, MPFR_RNDN);
        ;
        mpfr_add(r3752140, r3752138, r3752139, MPFR_RNDN);
        mpfr_mul(r3752141, r3752136, r3752140, MPFR_RNDN);
        ;
        mpfr_mul(r3752143, r3752135, r3752142, MPFR_RNDN);
        ;
        mpfr_add(r3752145, r3752143, r3752144, MPFR_RNDN);
        mpfr_add(r3752146, r3752141, r3752145, MPFR_RNDN);
        ;
        mpfr_pow(r3752148, r3752135, r3752147, MPFR_RNDN);
        mpfr_mul(r3752149, r3752148, r3752148, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3752152, r3752151, r3752135, MPFR_RNDN);
        mpfr_add(r3752153, r3752150, r3752152, MPFR_RNDN);
        mpfr_mul(r3752154, r3752149, r3752153, MPFR_RNDN);
        mpfr_mul(r3752155, r3752136, r3752136, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3752158, r3752157, r3752135, MPFR_RNDN);
        mpfr_add(r3752159, r3752156, r3752158, MPFR_RNDN);
        mpfr_mul(r3752160, r3752155, r3752159, MPFR_RNDN);
        mpfr_add(r3752161, r3752154, r3752160, MPFR_RNDN);
        mpfr_add(r3752162, r3752146, r3752161, MPFR_RNDN);
        mpfr_mul(r3752163, r3752155, r3752155, MPFR_RNDN);
        ;
        mpfr_mul(r3752165, r3752164, r3752136, MPFR_RNDN);
        mpfr_mul(r3752166, r3752163, r3752165, MPFR_RNDN);
        ;
        mpfr_mul(r3752168, r3752167, r3752135, MPFR_RNDN);
        ;
        mpfr_add(r3752170, r3752168, r3752169, MPFR_RNDN);
        mpfr_mul(r3752171, r3752163, r3752170, MPFR_RNDN);
        mpfr_add(r3752172, r3752166, r3752171, MPFR_RNDN);
        mpfr_add(r3752173, r3752162, r3752172, MPFR_RNDN);
        return mpfr_get_d(r3752173, MPFR_RNDN);
}

static mpfr_t r3752174, r3752175, r3752176, r3752177, r3752178, r3752179, r3752180, r3752181, r3752182, r3752183, r3752184, r3752185, r3752186, r3752187, r3752188, r3752189, r3752190, r3752191, r3752192, r3752193, r3752194, r3752195, r3752196, r3752197, r3752198, r3752199, r3752200, r3752201, r3752202, r3752203, r3752204, r3752205, r3752206, r3752207, r3752208, r3752209, r3752210, r3752211, r3752212;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3752174);
        mpfr_init(r3752175);
        mpfr_init_set_str(r3752176, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r3752177);
        mpfr_init_set_str(r3752178, "33.0", 10, MPFR_RNDN);
        mpfr_init(r3752179);
        mpfr_init(r3752180);
        mpfr_init_set_str(r3752181, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3752182);
        mpfr_init_set_str(r3752183, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3752184);
        mpfr_init(r3752185);
        mpfr_init_set_str(r3752186, "3", 10, MPFR_RNDN);
        mpfr_init(r3752187);
        mpfr_init(r3752188);
        mpfr_init_set_str(r3752189, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752190, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r3752191);
        mpfr_init(r3752192);
        mpfr_init(r3752193);
        mpfr_init(r3752194);
        mpfr_init_set_str(r3752195, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r3752196, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r3752197);
        mpfr_init(r3752198);
        mpfr_init(r3752199);
        mpfr_init(r3752200);
        mpfr_init(r3752201);
        mpfr_init(r3752202);
        mpfr_init_set_str(r3752203, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3752204);
        mpfr_init(r3752205);
        mpfr_init_set_str(r3752206, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r3752207);
        mpfr_init_set_str(r3752208, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r3752209);
        mpfr_init(r3752210);
        mpfr_init(r3752211);
        mpfr_init(r3752212);
}

double f_dm(double x) {
        mpfr_set_d(r3752174, x, MPFR_RNDN);
        mpfr_mul(r3752175, r3752174, r3752174, MPFR_RNDN);
        ;
        mpfr_mul(r3752177, r3752176, r3752174, MPFR_RNDN);
        ;
        mpfr_add(r3752179, r3752177, r3752178, MPFR_RNDN);
        mpfr_mul(r3752180, r3752175, r3752179, MPFR_RNDN);
        ;
        mpfr_mul(r3752182, r3752174, r3752181, MPFR_RNDN);
        ;
        mpfr_add(r3752184, r3752182, r3752183, MPFR_RNDN);
        mpfr_add(r3752185, r3752180, r3752184, MPFR_RNDN);
        ;
        mpfr_pow(r3752187, r3752174, r3752186, MPFR_RNDN);
        mpfr_mul(r3752188, r3752187, r3752187, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3752191, r3752190, r3752174, MPFR_RNDN);
        mpfr_add(r3752192, r3752189, r3752191, MPFR_RNDN);
        mpfr_mul(r3752193, r3752188, r3752192, MPFR_RNDN);
        mpfr_mul(r3752194, r3752175, r3752175, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3752197, r3752196, r3752174, MPFR_RNDN);
        mpfr_add(r3752198, r3752195, r3752197, MPFR_RNDN);
        mpfr_mul(r3752199, r3752194, r3752198, MPFR_RNDN);
        mpfr_add(r3752200, r3752193, r3752199, MPFR_RNDN);
        mpfr_add(r3752201, r3752185, r3752200, MPFR_RNDN);
        mpfr_mul(r3752202, r3752194, r3752194, MPFR_RNDN);
        ;
        mpfr_mul(r3752204, r3752203, r3752175, MPFR_RNDN);
        mpfr_mul(r3752205, r3752202, r3752204, MPFR_RNDN);
        ;
        mpfr_mul(r3752207, r3752206, r3752174, MPFR_RNDN);
        ;
        mpfr_add(r3752209, r3752207, r3752208, MPFR_RNDN);
        mpfr_mul(r3752210, r3752202, r3752209, MPFR_RNDN);
        mpfr_add(r3752211, r3752205, r3752210, MPFR_RNDN);
        mpfr_add(r3752212, r3752201, r3752211, MPFR_RNDN);
        return mpfr_get_d(r3752212, MPFR_RNDN);
}

