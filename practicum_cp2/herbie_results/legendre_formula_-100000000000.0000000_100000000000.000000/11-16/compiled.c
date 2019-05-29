#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r6765930 = 0.196381;
        float r6765931 = -26.707764;
        float r6765932 = x;
        float r6765933 = r6765932 * r6765932;
        float r6765934 = r6765931 * r6765933;
        float r6765935 = r6765930 + r6765934;
        float r6765936 = 592.022095;
        float r6765937 = r6765933 * r6765932;
        float r6765938 = r6765937 * r6765932;
        float r6765939 = r6765936 * r6765938;
        float r6765940 = r6765935 + r6765939;
        float r6765941 = -4972.985596;
        float r6765942 = r6765938 * r6765932;
        float r6765943 = r6765942 * r6765932;
        float r6765944 = r6765941 * r6765943;
        float r6765945 = r6765940 + r6765944;
        float r6765946 = 20424.762268;
        float r6765947 = r6765943 * r6765932;
        float r6765948 = r6765947 * r6765932;
        float r6765949 = r6765946 * r6765948;
        float r6765950 = r6765945 + r6765949;
        float r6765951 = -45388.360596;
        float r6765952 = r6765948 * r6765932;
        float r6765953 = r6765952 * r6765932;
        float r6765954 = r6765951 * r6765953;
        float r6765955 = r6765950 + r6765954;
        float r6765956 = 55703.897095;
        float r6765957 = r6765953 * r6765932;
        float r6765958 = r6765957 * r6765932;
        float r6765959 = r6765956 * r6765958;
        float r6765960 = r6765955 + r6765959;
        float r6765961 = -35503.582764;
        float r6765962 = r6765958 * r6765932;
        float r6765963 = r6765962 * r6765932;
        float r6765964 = r6765961 * r6765963;
        float r6765965 = r6765960 + r6765964;
        float r6765966 = 9171.758881;
        float r6765967 = r6765963 * r6765932;
        float r6765968 = r6765967 * r6765932;
        float r6765969 = r6765966 * r6765968;
        float r6765970 = r6765965 + r6765969;
        return r6765970;
}

double f_id(double x) {
        double r6765971 = 0.196381;
        double r6765972 = -26.707764;
        double r6765973 = x;
        double r6765974 = r6765973 * r6765973;
        double r6765975 = r6765972 * r6765974;
        double r6765976 = r6765971 + r6765975;
        double r6765977 = 592.022095;
        double r6765978 = r6765974 * r6765973;
        double r6765979 = r6765978 * r6765973;
        double r6765980 = r6765977 * r6765979;
        double r6765981 = r6765976 + r6765980;
        double r6765982 = -4972.985596;
        double r6765983 = r6765979 * r6765973;
        double r6765984 = r6765983 * r6765973;
        double r6765985 = r6765982 * r6765984;
        double r6765986 = r6765981 + r6765985;
        double r6765987 = 20424.762268;
        double r6765988 = r6765984 * r6765973;
        double r6765989 = r6765988 * r6765973;
        double r6765990 = r6765987 * r6765989;
        double r6765991 = r6765986 + r6765990;
        double r6765992 = -45388.360596;
        double r6765993 = r6765989 * r6765973;
        double r6765994 = r6765993 * r6765973;
        double r6765995 = r6765992 * r6765994;
        double r6765996 = r6765991 + r6765995;
        double r6765997 = 55703.897095;
        double r6765998 = r6765994 * r6765973;
        double r6765999 = r6765998 * r6765973;
        double r6766000 = r6765997 * r6765999;
        double r6766001 = r6765996 + r6766000;
        double r6766002 = -35503.582764;
        double r6766003 = r6765999 * r6765973;
        double r6766004 = r6766003 * r6765973;
        double r6766005 = r6766002 * r6766004;
        double r6766006 = r6766001 + r6766005;
        double r6766007 = 9171.758881;
        double r6766008 = r6766004 * r6765973;
        double r6766009 = r6766008 * r6765973;
        double r6766010 = r6766007 * r6766009;
        double r6766011 = r6766006 + r6766010;
        return r6766011;
}


double f_of(float x) {
        float r6766012 = x;
        float r6766013 = 9171.758881;
        float r6766014 = r6766013 * r6766012;
        float r6766015 = r6766012 * r6766014;
        float r6766016 = -35503.582764;
        float r6766017 = r6766015 + r6766016;
        float r6766018 = r6766012 * r6766012;
        float r6766019 = 3;
        float r6766020 = 1;
        float r6766021 = r6766019 + r6766020;
        float r6766022 = pow(r6766018, r6766021);
        float r6766023 = pow(r6766018, r6766019);
        float r6766024 = r6766022 * r6766023;
        float r6766025 = r6766017 * r6766024;
        float r6766026 = -4972.985596;
        float r6766027 = r6766012 * r6766026;
        float r6766028 = r6766027 * r6766012;
        float r6766029 = 592.022095;
        float r6766030 = r6766028 + r6766029;
        float r6766031 = r6766018 * r6766018;
        float r6766032 = r6766030 * r6766031;
        float r6766033 = r6766025 + r6766032;
        float r6766034 = r6766023 * r6766031;
        float r6766035 = -45388.360596;
        float r6766036 = 55703.897095;
        float r6766037 = r6766036 * r6766018;
        float r6766038 = r6766035 + r6766037;
        float r6766039 = r6766034 * r6766038;
        float r6766040 = 20424.762268;
        float r6766041 = r6766040 * r6766018;
        float r6766042 = r6766041 * r6766023;
        float r6766043 = 0.196381;
        float r6766044 = -26.707764;
        float r6766045 = r6766044 * r6766012;
        float r6766046 = r6766045 * r6766012;
        float r6766047 = r6766043 + r6766046;
        float r6766048 = r6766042 + r6766047;
        float r6766049 = r6766039 + r6766048;
        float r6766050 = r6766033 + r6766049;
        return r6766050;
}

double f_od(double x) {
        double r6766051 = x;
        double r6766052 = 9171.758881;
        double r6766053 = r6766052 * r6766051;
        double r6766054 = r6766051 * r6766053;
        double r6766055 = -35503.582764;
        double r6766056 = r6766054 + r6766055;
        double r6766057 = r6766051 * r6766051;
        double r6766058 = 3;
        double r6766059 = 1;
        double r6766060 = r6766058 + r6766059;
        double r6766061 = pow(r6766057, r6766060);
        double r6766062 = pow(r6766057, r6766058);
        double r6766063 = r6766061 * r6766062;
        double r6766064 = r6766056 * r6766063;
        double r6766065 = -4972.985596;
        double r6766066 = r6766051 * r6766065;
        double r6766067 = r6766066 * r6766051;
        double r6766068 = 592.022095;
        double r6766069 = r6766067 + r6766068;
        double r6766070 = r6766057 * r6766057;
        double r6766071 = r6766069 * r6766070;
        double r6766072 = r6766064 + r6766071;
        double r6766073 = r6766062 * r6766070;
        double r6766074 = -45388.360596;
        double r6766075 = 55703.897095;
        double r6766076 = r6766075 * r6766057;
        double r6766077 = r6766074 + r6766076;
        double r6766078 = r6766073 * r6766077;
        double r6766079 = 20424.762268;
        double r6766080 = r6766079 * r6766057;
        double r6766081 = r6766080 * r6766062;
        double r6766082 = 0.196381;
        double r6766083 = -26.707764;
        double r6766084 = r6766083 * r6766051;
        double r6766085 = r6766084 * r6766051;
        double r6766086 = r6766082 + r6766085;
        double r6766087 = r6766081 + r6766086;
        double r6766088 = r6766078 + r6766087;
        double r6766089 = r6766072 + r6766088;
        return r6766089;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6766090, r6766091, r6766092, r6766093, r6766094, r6766095, r6766096, r6766097, r6766098, r6766099, r6766100, r6766101, r6766102, r6766103, r6766104, r6766105, r6766106, r6766107, r6766108, r6766109, r6766110, r6766111, r6766112, r6766113, r6766114, r6766115, r6766116, r6766117, r6766118, r6766119, r6766120, r6766121, r6766122, r6766123, r6766124, r6766125, r6766126, r6766127, r6766128, r6766129, r6766130;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6766090, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766091, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r6766092);
        mpfr_init(r6766093);
        mpfr_init(r6766094);
        mpfr_init(r6766095);
        mpfr_init_set_str(r6766096, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r6766097);
        mpfr_init(r6766098);
        mpfr_init(r6766099);
        mpfr_init(r6766100);
        mpfr_init_set_str(r6766101, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r6766102);
        mpfr_init(r6766103);
        mpfr_init(r6766104);
        mpfr_init(r6766105);
        mpfr_init_set_str(r6766106, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r6766107);
        mpfr_init(r6766108);
        mpfr_init(r6766109);
        mpfr_init(r6766110);
        mpfr_init_set_str(r6766111, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r6766112);
        mpfr_init(r6766113);
        mpfr_init(r6766114);
        mpfr_init(r6766115);
        mpfr_init_set_str(r6766116, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r6766117);
        mpfr_init(r6766118);
        mpfr_init(r6766119);
        mpfr_init(r6766120);
        mpfr_init_set_str(r6766121, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r6766122);
        mpfr_init(r6766123);
        mpfr_init(r6766124);
        mpfr_init(r6766125);
        mpfr_init_set_str(r6766126, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r6766127);
        mpfr_init(r6766128);
        mpfr_init(r6766129);
        mpfr_init(r6766130);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6766092, x, MPFR_RNDN);
        mpfr_mul(r6766093, r6766092, r6766092, MPFR_RNDN);
        mpfr_mul(r6766094, r6766091, r6766093, MPFR_RNDN);
        mpfr_add(r6766095, r6766090, r6766094, MPFR_RNDN);
        ;
        mpfr_mul(r6766097, r6766093, r6766092, MPFR_RNDN);
        mpfr_mul(r6766098, r6766097, r6766092, MPFR_RNDN);
        mpfr_mul(r6766099, r6766096, r6766098, MPFR_RNDN);
        mpfr_add(r6766100, r6766095, r6766099, MPFR_RNDN);
        ;
        mpfr_mul(r6766102, r6766098, r6766092, MPFR_RNDN);
        mpfr_mul(r6766103, r6766102, r6766092, MPFR_RNDN);
        mpfr_mul(r6766104, r6766101, r6766103, MPFR_RNDN);
        mpfr_add(r6766105, r6766100, r6766104, MPFR_RNDN);
        ;
        mpfr_mul(r6766107, r6766103, r6766092, MPFR_RNDN);
        mpfr_mul(r6766108, r6766107, r6766092, MPFR_RNDN);
        mpfr_mul(r6766109, r6766106, r6766108, MPFR_RNDN);
        mpfr_add(r6766110, r6766105, r6766109, MPFR_RNDN);
        ;
        mpfr_mul(r6766112, r6766108, r6766092, MPFR_RNDN);
        mpfr_mul(r6766113, r6766112, r6766092, MPFR_RNDN);
        mpfr_mul(r6766114, r6766111, r6766113, MPFR_RNDN);
        mpfr_add(r6766115, r6766110, r6766114, MPFR_RNDN);
        ;
        mpfr_mul(r6766117, r6766113, r6766092, MPFR_RNDN);
        mpfr_mul(r6766118, r6766117, r6766092, MPFR_RNDN);
        mpfr_mul(r6766119, r6766116, r6766118, MPFR_RNDN);
        mpfr_add(r6766120, r6766115, r6766119, MPFR_RNDN);
        ;
        mpfr_mul(r6766122, r6766118, r6766092, MPFR_RNDN);
        mpfr_mul(r6766123, r6766122, r6766092, MPFR_RNDN);
        mpfr_mul(r6766124, r6766121, r6766123, MPFR_RNDN);
        mpfr_add(r6766125, r6766120, r6766124, MPFR_RNDN);
        ;
        mpfr_mul(r6766127, r6766123, r6766092, MPFR_RNDN);
        mpfr_mul(r6766128, r6766127, r6766092, MPFR_RNDN);
        mpfr_mul(r6766129, r6766126, r6766128, MPFR_RNDN);
        mpfr_add(r6766130, r6766125, r6766129, MPFR_RNDN);
        return mpfr_get_d(r6766130, MPFR_RNDN);
}

static mpfr_t r6766131, r6766132, r6766133, r6766134, r6766135, r6766136, r6766137, r6766138, r6766139, r6766140, r6766141, r6766142, r6766143, r6766144, r6766145, r6766146, r6766147, r6766148, r6766149, r6766150, r6766151, r6766152, r6766153, r6766154, r6766155, r6766156, r6766157, r6766158, r6766159, r6766160, r6766161, r6766162, r6766163, r6766164, r6766165, r6766166, r6766167, r6766168, r6766169;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6766131);
        mpfr_init_set_str(r6766132, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r6766133);
        mpfr_init(r6766134);
        mpfr_init_set_str(r6766135, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r6766136);
        mpfr_init(r6766137);
        mpfr_init_set_str(r6766138, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766139, "1", 10, MPFR_RNDN);
        mpfr_init(r6766140);
        mpfr_init(r6766141);
        mpfr_init(r6766142);
        mpfr_init(r6766143);
        mpfr_init(r6766144);
        mpfr_init_set_str(r6766145, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r6766146);
        mpfr_init(r6766147);
        mpfr_init_set_str(r6766148, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r6766149);
        mpfr_init(r6766150);
        mpfr_init(r6766151);
        mpfr_init(r6766152);
        mpfr_init(r6766153);
        mpfr_init_set_str(r6766154, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766155, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r6766156);
        mpfr_init(r6766157);
        mpfr_init(r6766158);
        mpfr_init_set_str(r6766159, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r6766160);
        mpfr_init(r6766161);
        mpfr_init_set_str(r6766162, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766163, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r6766164);
        mpfr_init(r6766165);
        mpfr_init(r6766166);
        mpfr_init(r6766167);
        mpfr_init(r6766168);
        mpfr_init(r6766169);
}

double f_fm(double x) {
        mpfr_set_d(r6766131, x, MPFR_RNDN);
        ;
        mpfr_mul(r6766133, r6766132, r6766131, MPFR_RNDN);
        mpfr_mul(r6766134, r6766131, r6766133, MPFR_RNDN);
        ;
        mpfr_add(r6766136, r6766134, r6766135, MPFR_RNDN);
        mpfr_mul(r6766137, r6766131, r6766131, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6766140, r6766138, r6766139, MPFR_RNDN);
        mpfr_pow(r6766141, r6766137, r6766140, MPFR_RNDN);
        mpfr_pow(r6766142, r6766137, r6766138, MPFR_RNDN);
        mpfr_mul(r6766143, r6766141, r6766142, MPFR_RNDN);
        mpfr_mul(r6766144, r6766136, r6766143, MPFR_RNDN);
        ;
        mpfr_mul(r6766146, r6766131, r6766145, MPFR_RNDN);
        mpfr_mul(r6766147, r6766146, r6766131, MPFR_RNDN);
        ;
        mpfr_add(r6766149, r6766147, r6766148, MPFR_RNDN);
        mpfr_mul(r6766150, r6766137, r6766137, MPFR_RNDN);
        mpfr_mul(r6766151, r6766149, r6766150, MPFR_RNDN);
        mpfr_add(r6766152, r6766144, r6766151, MPFR_RNDN);
        mpfr_mul(r6766153, r6766142, r6766150, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6766156, r6766155, r6766137, MPFR_RNDN);
        mpfr_add(r6766157, r6766154, r6766156, MPFR_RNDN);
        mpfr_mul(r6766158, r6766153, r6766157, MPFR_RNDN);
        ;
        mpfr_mul(r6766160, r6766159, r6766137, MPFR_RNDN);
        mpfr_mul(r6766161, r6766160, r6766142, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6766164, r6766163, r6766131, MPFR_RNDN);
        mpfr_mul(r6766165, r6766164, r6766131, MPFR_RNDN);
        mpfr_add(r6766166, r6766162, r6766165, MPFR_RNDN);
        mpfr_add(r6766167, r6766161, r6766166, MPFR_RNDN);
        mpfr_add(r6766168, r6766158, r6766167, MPFR_RNDN);
        mpfr_add(r6766169, r6766152, r6766168, MPFR_RNDN);
        return mpfr_get_d(r6766169, MPFR_RNDN);
}

static mpfr_t r6766170, r6766171, r6766172, r6766173, r6766174, r6766175, r6766176, r6766177, r6766178, r6766179, r6766180, r6766181, r6766182, r6766183, r6766184, r6766185, r6766186, r6766187, r6766188, r6766189, r6766190, r6766191, r6766192, r6766193, r6766194, r6766195, r6766196, r6766197, r6766198, r6766199, r6766200, r6766201, r6766202, r6766203, r6766204, r6766205, r6766206, r6766207, r6766208;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6766170);
        mpfr_init_set_str(r6766171, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r6766172);
        mpfr_init(r6766173);
        mpfr_init_set_str(r6766174, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r6766175);
        mpfr_init(r6766176);
        mpfr_init_set_str(r6766177, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766178, "1", 10, MPFR_RNDN);
        mpfr_init(r6766179);
        mpfr_init(r6766180);
        mpfr_init(r6766181);
        mpfr_init(r6766182);
        mpfr_init(r6766183);
        mpfr_init_set_str(r6766184, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r6766185);
        mpfr_init(r6766186);
        mpfr_init_set_str(r6766187, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r6766188);
        mpfr_init(r6766189);
        mpfr_init(r6766190);
        mpfr_init(r6766191);
        mpfr_init(r6766192);
        mpfr_init_set_str(r6766193, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766194, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r6766195);
        mpfr_init(r6766196);
        mpfr_init(r6766197);
        mpfr_init_set_str(r6766198, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r6766199);
        mpfr_init(r6766200);
        mpfr_init_set_str(r6766201, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r6766202, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r6766203);
        mpfr_init(r6766204);
        mpfr_init(r6766205);
        mpfr_init(r6766206);
        mpfr_init(r6766207);
        mpfr_init(r6766208);
}

double f_dm(double x) {
        mpfr_set_d(r6766170, x, MPFR_RNDN);
        ;
        mpfr_mul(r6766172, r6766171, r6766170, MPFR_RNDN);
        mpfr_mul(r6766173, r6766170, r6766172, MPFR_RNDN);
        ;
        mpfr_add(r6766175, r6766173, r6766174, MPFR_RNDN);
        mpfr_mul(r6766176, r6766170, r6766170, MPFR_RNDN);
        ;
        ;
        mpfr_add(r6766179, r6766177, r6766178, MPFR_RNDN);
        mpfr_pow(r6766180, r6766176, r6766179, MPFR_RNDN);
        mpfr_pow(r6766181, r6766176, r6766177, MPFR_RNDN);
        mpfr_mul(r6766182, r6766180, r6766181, MPFR_RNDN);
        mpfr_mul(r6766183, r6766175, r6766182, MPFR_RNDN);
        ;
        mpfr_mul(r6766185, r6766170, r6766184, MPFR_RNDN);
        mpfr_mul(r6766186, r6766185, r6766170, MPFR_RNDN);
        ;
        mpfr_add(r6766188, r6766186, r6766187, MPFR_RNDN);
        mpfr_mul(r6766189, r6766176, r6766176, MPFR_RNDN);
        mpfr_mul(r6766190, r6766188, r6766189, MPFR_RNDN);
        mpfr_add(r6766191, r6766183, r6766190, MPFR_RNDN);
        mpfr_mul(r6766192, r6766181, r6766189, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6766195, r6766194, r6766176, MPFR_RNDN);
        mpfr_add(r6766196, r6766193, r6766195, MPFR_RNDN);
        mpfr_mul(r6766197, r6766192, r6766196, MPFR_RNDN);
        ;
        mpfr_mul(r6766199, r6766198, r6766176, MPFR_RNDN);
        mpfr_mul(r6766200, r6766199, r6766181, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6766203, r6766202, r6766170, MPFR_RNDN);
        mpfr_mul(r6766204, r6766203, r6766170, MPFR_RNDN);
        mpfr_add(r6766205, r6766201, r6766204, MPFR_RNDN);
        mpfr_add(r6766206, r6766200, r6766205, MPFR_RNDN);
        mpfr_add(r6766207, r6766197, r6766206, MPFR_RNDN);
        mpfr_add(r6766208, r6766191, r6766207, MPFR_RNDN);
        return mpfr_get_d(r6766208, MPFR_RNDN);
}

