#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r9851978 = 1.0;
        float r9851979 = -8.0;
        float r9851980 = x;
        float r9851981 = r9851979 * r9851980;
        float r9851982 = r9851978 + r9851981;
        float r9851983 = 14.0;
        float r9851984 = r9851980 * r9851980;
        float r9851985 = r9851983 * r9851984;
        float r9851986 = r9851982 + r9851985;
        float r9851987 = -9.333333;
        float r9851988 = r9851984 * r9851980;
        float r9851989 = r9851987 * r9851988;
        float r9851990 = r9851986 + r9851989;
        float r9851991 = 2.916667;
        float r9851992 = r9851988 * r9851980;
        float r9851993 = r9851991 * r9851992;
        float r9851994 = r9851990 + r9851993;
        float r9851995 = -0.466667;
        float r9851996 = r9851992 * r9851980;
        float r9851997 = r9851995 * r9851996;
        float r9851998 = r9851994 + r9851997;
        float r9851999 = 0.038889;
        float r9852000 = r9851996 * r9851980;
        float r9852001 = r9851999 * r9852000;
        float r9852002 = r9851998 + r9852001;
        float r9852003 = -0.001587;
        float r9852004 = r9852000 * r9851980;
        float r9852005 = r9852003 * r9852004;
        float r9852006 = r9852002 + r9852005;
        float r9852007 = 2.5e-05;
        float r9852008 = r9852004 * r9851980;
        float r9852009 = r9852007 * r9852008;
        float r9852010 = r9852006 + r9852009;
        return r9852010;
}

double f_id(double x) {
        double r9852011 = 1.0;
        double r9852012 = -8.0;
        double r9852013 = x;
        double r9852014 = r9852012 * r9852013;
        double r9852015 = r9852011 + r9852014;
        double r9852016 = 14.0;
        double r9852017 = r9852013 * r9852013;
        double r9852018 = r9852016 * r9852017;
        double r9852019 = r9852015 + r9852018;
        double r9852020 = -9.333333;
        double r9852021 = r9852017 * r9852013;
        double r9852022 = r9852020 * r9852021;
        double r9852023 = r9852019 + r9852022;
        double r9852024 = 2.916667;
        double r9852025 = r9852021 * r9852013;
        double r9852026 = r9852024 * r9852025;
        double r9852027 = r9852023 + r9852026;
        double r9852028 = -0.466667;
        double r9852029 = r9852025 * r9852013;
        double r9852030 = r9852028 * r9852029;
        double r9852031 = r9852027 + r9852030;
        double r9852032 = 0.038889;
        double r9852033 = r9852029 * r9852013;
        double r9852034 = r9852032 * r9852033;
        double r9852035 = r9852031 + r9852034;
        double r9852036 = -0.001587;
        double r9852037 = r9852033 * r9852013;
        double r9852038 = r9852036 * r9852037;
        double r9852039 = r9852035 + r9852038;
        double r9852040 = 2.5e-05;
        double r9852041 = r9852037 * r9852013;
        double r9852042 = r9852040 * r9852041;
        double r9852043 = r9852039 + r9852042;
        return r9852043;
}


double f_of(float x) {
        float r9852044 = 1.0;
        float r9852045 = -8.0;
        float r9852046 = x;
        float r9852047 = r9852045 * r9852046;
        float r9852048 = r9852044 + r9852047;
        float r9852049 = 14.0;
        float r9852050 = r9852046 * r9852046;
        float r9852051 = r9852049 * r9852050;
        float r9852052 = r9852048 + r9852051;
        float r9852053 = -9.333333;
        float r9852054 = r9852050 * r9852046;
        float r9852055 = r9852053 * r9852054;
        float r9852056 = r9852052 + r9852055;
        float r9852057 = 2.916667;
        float r9852058 = r9852054 * r9852046;
        float r9852059 = r9852057 * r9852058;
        float r9852060 = r9852056 + r9852059;
        float r9852061 = -0.466667;
        float r9852062 = r9852058 * r9852046;
        float r9852063 = r9852061 * r9852062;
        float r9852064 = r9852060 + r9852063;
        float r9852065 = 0.038889;
        float r9852066 = r9852062 * r9852046;
        float r9852067 = r9852065 * r9852066;
        float r9852068 = r9852064 + r9852067;
        float r9852069 = -0.001587;
        float r9852070 = r9852066 * r9852046;
        float r9852071 = r9852069 * r9852070;
        float r9852072 = r9852068 + r9852071;
        float r9852073 = 2.5e-05;
        float r9852074 = 3;
        float r9852075 = pow(r9852046, r9852074);
        float r9852076 = 1;
        float r9852077 = r9852076 + r9852074;
        float r9852078 = pow(r9852075, r9852077);
        float r9852079 = cbrt(r9852078);
        float r9852080 = r9852079 * r9852046;
        float r9852081 = r9852080 * r9852046;
        float r9852082 = r9852081 * r9852046;
        float r9852083 = r9852082 * r9852046;
        float r9852084 = r9852073 * r9852083;
        float r9852085 = r9852072 + r9852084;
        return r9852085;
}

double f_od(double x) {
        double r9852086 = 1.0;
        double r9852087 = -8.0;
        double r9852088 = x;
        double r9852089 = r9852087 * r9852088;
        double r9852090 = r9852086 + r9852089;
        double r9852091 = 14.0;
        double r9852092 = r9852088 * r9852088;
        double r9852093 = r9852091 * r9852092;
        double r9852094 = r9852090 + r9852093;
        double r9852095 = -9.333333;
        double r9852096 = r9852092 * r9852088;
        double r9852097 = r9852095 * r9852096;
        double r9852098 = r9852094 + r9852097;
        double r9852099 = 2.916667;
        double r9852100 = r9852096 * r9852088;
        double r9852101 = r9852099 * r9852100;
        double r9852102 = r9852098 + r9852101;
        double r9852103 = -0.466667;
        double r9852104 = r9852100 * r9852088;
        double r9852105 = r9852103 * r9852104;
        double r9852106 = r9852102 + r9852105;
        double r9852107 = 0.038889;
        double r9852108 = r9852104 * r9852088;
        double r9852109 = r9852107 * r9852108;
        double r9852110 = r9852106 + r9852109;
        double r9852111 = -0.001587;
        double r9852112 = r9852108 * r9852088;
        double r9852113 = r9852111 * r9852112;
        double r9852114 = r9852110 + r9852113;
        double r9852115 = 2.5e-05;
        double r9852116 = 3;
        double r9852117 = pow(r9852088, r9852116);
        double r9852118 = 1;
        double r9852119 = r9852118 + r9852116;
        double r9852120 = pow(r9852117, r9852119);
        double r9852121 = cbrt(r9852120);
        double r9852122 = r9852121 * r9852088;
        double r9852123 = r9852122 * r9852088;
        double r9852124 = r9852123 * r9852088;
        double r9852125 = r9852124 * r9852088;
        double r9852126 = r9852115 * r9852125;
        double r9852127 = r9852114 + r9852126;
        return r9852127;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9852128, r9852129, r9852130, r9852131, r9852132, r9852133, r9852134, r9852135, r9852136, r9852137, r9852138, r9852139, r9852140, r9852141, r9852142, r9852143, r9852144, r9852145, r9852146, r9852147, r9852148, r9852149, r9852150, r9852151, r9852152, r9852153, r9852154, r9852155, r9852156, r9852157, r9852158, r9852159, r9852160;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852128, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852129, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9852130);
        mpfr_init(r9852131);
        mpfr_init(r9852132);
        mpfr_init_set_str(r9852133, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9852134);
        mpfr_init(r9852135);
        mpfr_init(r9852136);
        mpfr_init_set_str(r9852137, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9852138);
        mpfr_init(r9852139);
        mpfr_init(r9852140);
        mpfr_init_set_str(r9852141, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9852142);
        mpfr_init(r9852143);
        mpfr_init(r9852144);
        mpfr_init_set_str(r9852145, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9852146);
        mpfr_init(r9852147);
        mpfr_init(r9852148);
        mpfr_init_set_str(r9852149, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9852150);
        mpfr_init(r9852151);
        mpfr_init(r9852152);
        mpfr_init_set_str(r9852153, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9852154);
        mpfr_init(r9852155);
        mpfr_init(r9852156);
        mpfr_init_set_str(r9852157, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r9852158);
        mpfr_init(r9852159);
        mpfr_init(r9852160);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9852130, x, MPFR_RNDN);
        mpfr_mul(r9852131, r9852129, r9852130, MPFR_RNDN);
        mpfr_add(r9852132, r9852128, r9852131, MPFR_RNDN);
        ;
        mpfr_mul(r9852134, r9852130, r9852130, MPFR_RNDN);
        mpfr_mul(r9852135, r9852133, r9852134, MPFR_RNDN);
        mpfr_add(r9852136, r9852132, r9852135, MPFR_RNDN);
        ;
        mpfr_mul(r9852138, r9852134, r9852130, MPFR_RNDN);
        mpfr_mul(r9852139, r9852137, r9852138, MPFR_RNDN);
        mpfr_add(r9852140, r9852136, r9852139, MPFR_RNDN);
        ;
        mpfr_mul(r9852142, r9852138, r9852130, MPFR_RNDN);
        mpfr_mul(r9852143, r9852141, r9852142, MPFR_RNDN);
        mpfr_add(r9852144, r9852140, r9852143, MPFR_RNDN);
        ;
        mpfr_mul(r9852146, r9852142, r9852130, MPFR_RNDN);
        mpfr_mul(r9852147, r9852145, r9852146, MPFR_RNDN);
        mpfr_add(r9852148, r9852144, r9852147, MPFR_RNDN);
        ;
        mpfr_mul(r9852150, r9852146, r9852130, MPFR_RNDN);
        mpfr_mul(r9852151, r9852149, r9852150, MPFR_RNDN);
        mpfr_add(r9852152, r9852148, r9852151, MPFR_RNDN);
        ;
        mpfr_mul(r9852154, r9852150, r9852130, MPFR_RNDN);
        mpfr_mul(r9852155, r9852153, r9852154, MPFR_RNDN);
        mpfr_add(r9852156, r9852152, r9852155, MPFR_RNDN);
        ;
        mpfr_mul(r9852158, r9852154, r9852130, MPFR_RNDN);
        mpfr_mul(r9852159, r9852157, r9852158, MPFR_RNDN);
        mpfr_add(r9852160, r9852156, r9852159, MPFR_RNDN);
        return mpfr_get_d(r9852160, MPFR_RNDN);
}

static mpfr_t r9852161, r9852162, r9852163, r9852164, r9852165, r9852166, r9852167, r9852168, r9852169, r9852170, r9852171, r9852172, r9852173, r9852174, r9852175, r9852176, r9852177, r9852178, r9852179, r9852180, r9852181, r9852182, r9852183, r9852184, r9852185, r9852186, r9852187, r9852188, r9852189, r9852190, r9852191, r9852192, r9852193, r9852194, r9852195, r9852196, r9852197, r9852198, r9852199, r9852200, r9852201, r9852202;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852161, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852162, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9852163);
        mpfr_init(r9852164);
        mpfr_init(r9852165);
        mpfr_init_set_str(r9852166, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9852167);
        mpfr_init(r9852168);
        mpfr_init(r9852169);
        mpfr_init_set_str(r9852170, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9852171);
        mpfr_init(r9852172);
        mpfr_init(r9852173);
        mpfr_init_set_str(r9852174, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9852175);
        mpfr_init(r9852176);
        mpfr_init(r9852177);
        mpfr_init_set_str(r9852178, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9852179);
        mpfr_init(r9852180);
        mpfr_init(r9852181);
        mpfr_init_set_str(r9852182, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9852183);
        mpfr_init(r9852184);
        mpfr_init(r9852185);
        mpfr_init_set_str(r9852186, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9852187);
        mpfr_init(r9852188);
        mpfr_init(r9852189);
        mpfr_init_set_str(r9852190, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852191, "3", 10, MPFR_RNDN);
        mpfr_init(r9852192);
        mpfr_init_set_str(r9852193, "1", 10, MPFR_RNDN);
        mpfr_init(r9852194);
        mpfr_init(r9852195);
        mpfr_init(r9852196);
        mpfr_init(r9852197);
        mpfr_init(r9852198);
        mpfr_init(r9852199);
        mpfr_init(r9852200);
        mpfr_init(r9852201);
        mpfr_init(r9852202);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9852163, x, MPFR_RNDN);
        mpfr_mul(r9852164, r9852162, r9852163, MPFR_RNDN);
        mpfr_add(r9852165, r9852161, r9852164, MPFR_RNDN);
        ;
        mpfr_mul(r9852167, r9852163, r9852163, MPFR_RNDN);
        mpfr_mul(r9852168, r9852166, r9852167, MPFR_RNDN);
        mpfr_add(r9852169, r9852165, r9852168, MPFR_RNDN);
        ;
        mpfr_mul(r9852171, r9852167, r9852163, MPFR_RNDN);
        mpfr_mul(r9852172, r9852170, r9852171, MPFR_RNDN);
        mpfr_add(r9852173, r9852169, r9852172, MPFR_RNDN);
        ;
        mpfr_mul(r9852175, r9852171, r9852163, MPFR_RNDN);
        mpfr_mul(r9852176, r9852174, r9852175, MPFR_RNDN);
        mpfr_add(r9852177, r9852173, r9852176, MPFR_RNDN);
        ;
        mpfr_mul(r9852179, r9852175, r9852163, MPFR_RNDN);
        mpfr_mul(r9852180, r9852178, r9852179, MPFR_RNDN);
        mpfr_add(r9852181, r9852177, r9852180, MPFR_RNDN);
        ;
        mpfr_mul(r9852183, r9852179, r9852163, MPFR_RNDN);
        mpfr_mul(r9852184, r9852182, r9852183, MPFR_RNDN);
        mpfr_add(r9852185, r9852181, r9852184, MPFR_RNDN);
        ;
        mpfr_mul(r9852187, r9852183, r9852163, MPFR_RNDN);
        mpfr_mul(r9852188, r9852186, r9852187, MPFR_RNDN);
        mpfr_add(r9852189, r9852185, r9852188, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9852192, r9852163, r9852191, MPFR_RNDN);
        ;
        mpfr_add(r9852194, r9852193, r9852191, MPFR_RNDN);
        mpfr_pow(r9852195, r9852192, r9852194, MPFR_RNDN);
        mpfr_cbrt(r9852196, r9852195, MPFR_RNDN);
        mpfr_mul(r9852197, r9852196, r9852163, MPFR_RNDN);
        mpfr_mul(r9852198, r9852197, r9852163, MPFR_RNDN);
        mpfr_mul(r9852199, r9852198, r9852163, MPFR_RNDN);
        mpfr_mul(r9852200, r9852199, r9852163, MPFR_RNDN);
        mpfr_mul(r9852201, r9852190, r9852200, MPFR_RNDN);
        mpfr_add(r9852202, r9852189, r9852201, MPFR_RNDN);
        return mpfr_get_d(r9852202, MPFR_RNDN);
}

static mpfr_t r9852203, r9852204, r9852205, r9852206, r9852207, r9852208, r9852209, r9852210, r9852211, r9852212, r9852213, r9852214, r9852215, r9852216, r9852217, r9852218, r9852219, r9852220, r9852221, r9852222, r9852223, r9852224, r9852225, r9852226, r9852227, r9852228, r9852229, r9852230, r9852231, r9852232, r9852233, r9852234, r9852235, r9852236, r9852237, r9852238, r9852239, r9852240, r9852241, r9852242, r9852243, r9852244;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852203, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852204, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r9852205);
        mpfr_init(r9852206);
        mpfr_init(r9852207);
        mpfr_init_set_str(r9852208, "14.0", 10, MPFR_RNDN);
        mpfr_init(r9852209);
        mpfr_init(r9852210);
        mpfr_init(r9852211);
        mpfr_init_set_str(r9852212, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r9852213);
        mpfr_init(r9852214);
        mpfr_init(r9852215);
        mpfr_init_set_str(r9852216, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r9852217);
        mpfr_init(r9852218);
        mpfr_init(r9852219);
        mpfr_init_set_str(r9852220, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r9852221);
        mpfr_init(r9852222);
        mpfr_init(r9852223);
        mpfr_init_set_str(r9852224, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r9852225);
        mpfr_init(r9852226);
        mpfr_init(r9852227);
        mpfr_init_set_str(r9852228, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r9852229);
        mpfr_init(r9852230);
        mpfr_init(r9852231);
        mpfr_init_set_str(r9852232, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852233, "3", 10, MPFR_RNDN);
        mpfr_init(r9852234);
        mpfr_init_set_str(r9852235, "1", 10, MPFR_RNDN);
        mpfr_init(r9852236);
        mpfr_init(r9852237);
        mpfr_init(r9852238);
        mpfr_init(r9852239);
        mpfr_init(r9852240);
        mpfr_init(r9852241);
        mpfr_init(r9852242);
        mpfr_init(r9852243);
        mpfr_init(r9852244);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9852205, x, MPFR_RNDN);
        mpfr_mul(r9852206, r9852204, r9852205, MPFR_RNDN);
        mpfr_add(r9852207, r9852203, r9852206, MPFR_RNDN);
        ;
        mpfr_mul(r9852209, r9852205, r9852205, MPFR_RNDN);
        mpfr_mul(r9852210, r9852208, r9852209, MPFR_RNDN);
        mpfr_add(r9852211, r9852207, r9852210, MPFR_RNDN);
        ;
        mpfr_mul(r9852213, r9852209, r9852205, MPFR_RNDN);
        mpfr_mul(r9852214, r9852212, r9852213, MPFR_RNDN);
        mpfr_add(r9852215, r9852211, r9852214, MPFR_RNDN);
        ;
        mpfr_mul(r9852217, r9852213, r9852205, MPFR_RNDN);
        mpfr_mul(r9852218, r9852216, r9852217, MPFR_RNDN);
        mpfr_add(r9852219, r9852215, r9852218, MPFR_RNDN);
        ;
        mpfr_mul(r9852221, r9852217, r9852205, MPFR_RNDN);
        mpfr_mul(r9852222, r9852220, r9852221, MPFR_RNDN);
        mpfr_add(r9852223, r9852219, r9852222, MPFR_RNDN);
        ;
        mpfr_mul(r9852225, r9852221, r9852205, MPFR_RNDN);
        mpfr_mul(r9852226, r9852224, r9852225, MPFR_RNDN);
        mpfr_add(r9852227, r9852223, r9852226, MPFR_RNDN);
        ;
        mpfr_mul(r9852229, r9852225, r9852205, MPFR_RNDN);
        mpfr_mul(r9852230, r9852228, r9852229, MPFR_RNDN);
        mpfr_add(r9852231, r9852227, r9852230, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9852234, r9852205, r9852233, MPFR_RNDN);
        ;
        mpfr_add(r9852236, r9852235, r9852233, MPFR_RNDN);
        mpfr_pow(r9852237, r9852234, r9852236, MPFR_RNDN);
        mpfr_cbrt(r9852238, r9852237, MPFR_RNDN);
        mpfr_mul(r9852239, r9852238, r9852205, MPFR_RNDN);
        mpfr_mul(r9852240, r9852239, r9852205, MPFR_RNDN);
        mpfr_mul(r9852241, r9852240, r9852205, MPFR_RNDN);
        mpfr_mul(r9852242, r9852241, r9852205, MPFR_RNDN);
        mpfr_mul(r9852243, r9852232, r9852242, MPFR_RNDN);
        mpfr_add(r9852244, r9852231, r9852243, MPFR_RNDN);
        return mpfr_get_d(r9852244, MPFR_RNDN);
}

