#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r6862990 = -2.707031;
        float r6862991 = x;
        float r6862992 = r6862990 * r6862991;
        float r6862993 = 58.652344;
        float r6862994 = r6862991 * r6862991;
        float r6862995 = r6862994 * r6862991;
        float r6862996 = r6862993 * r6862995;
        float r6862997 = r6862992 + r6862996;
        float r6862998 = -351.914062;
        float r6862999 = r6862995 * r6862991;
        float r6863000 = r6862999 * r6862991;
        float r6863001 = r6862998 * r6863000;
        float r6863002 = r6862997 + r6863001;
        float r6863003 = 854.648438;
        float r6863004 = r6863000 * r6862991;
        float r6863005 = r6863004 * r6862991;
        float r6863006 = r6863003 * r6863005;
        float r6863007 = r6863002 + r6863006;
        float r6863008 = -902.128906;
        float r6863009 = r6863005 * r6862991;
        float r6863010 = r6863009 * r6862991;
        float r6863011 = r6863008 * r6863010;
        float r6863012 = r6863007 + r6863011;
        float r6863013 = 344.449219;
        float r6863014 = r6863010 * r6862991;
        float r6863015 = r6863014 * r6862991;
        float r6863016 = r6863013 * r6863015;
        float r6863017 = r6863012 + r6863016;
        return r6863017;
}

double f_id(double x) {
        double r6863018 = -2.707031;
        double r6863019 = x;
        double r6863020 = r6863018 * r6863019;
        double r6863021 = 58.652344;
        double r6863022 = r6863019 * r6863019;
        double r6863023 = r6863022 * r6863019;
        double r6863024 = r6863021 * r6863023;
        double r6863025 = r6863020 + r6863024;
        double r6863026 = -351.914062;
        double r6863027 = r6863023 * r6863019;
        double r6863028 = r6863027 * r6863019;
        double r6863029 = r6863026 * r6863028;
        double r6863030 = r6863025 + r6863029;
        double r6863031 = 854.648438;
        double r6863032 = r6863028 * r6863019;
        double r6863033 = r6863032 * r6863019;
        double r6863034 = r6863031 * r6863033;
        double r6863035 = r6863030 + r6863034;
        double r6863036 = -902.128906;
        double r6863037 = r6863033 * r6863019;
        double r6863038 = r6863037 * r6863019;
        double r6863039 = r6863036 * r6863038;
        double r6863040 = r6863035 + r6863039;
        double r6863041 = 344.449219;
        double r6863042 = r6863038 * r6863019;
        double r6863043 = r6863042 * r6863019;
        double r6863044 = r6863041 * r6863043;
        double r6863045 = r6863040 + r6863044;
        return r6863045;
}


double f_of(float x) {
        float r6863046 = x;
        float r6863047 = r6863046 * r6863046;
        float r6863048 = r6863047 * r6863047;
        float r6863049 = 3;
        float r6863050 = pow(r6863046, r6863049);
        float r6863051 = r6863050 * r6863047;
        float r6863052 = r6863048 * r6863051;
        float r6863053 = -902.128906;
        float r6863054 = 344.449219;
        float r6863055 = r6863046 * r6863054;
        float r6863056 = r6863046 * r6863055;
        float r6863057 = r6863053 + r6863056;
        float r6863058 = r6863052 * r6863057;
        float r6863059 = -351.914062;
        float r6863060 = r6863046 * r6863059;
        float r6863061 = r6863060 * r6863048;
        float r6863062 = -2.707031;
        float r6863063 = r6863062 * r6863046;
        float r6863064 = 58.652344;
        float r6863065 = r6863064 * r6863046;
        float r6863066 = r6863047 * r6863065;
        float r6863067 = r6863063 + r6863066;
        float r6863068 = r6863061 + r6863067;
        float r6863069 = 854.648438;
        float r6863070 = r6863069 * r6863046;
        float r6863071 = r6863070 * r6863047;
        float r6863072 = r6863071 * r6863048;
        float r6863073 = r6863068 + r6863072;
        float r6863074 = r6863058 + r6863073;
        return r6863074;
}

double f_od(double x) {
        double r6863075 = x;
        double r6863076 = r6863075 * r6863075;
        double r6863077 = r6863076 * r6863076;
        double r6863078 = 3;
        double r6863079 = pow(r6863075, r6863078);
        double r6863080 = r6863079 * r6863076;
        double r6863081 = r6863077 * r6863080;
        double r6863082 = -902.128906;
        double r6863083 = 344.449219;
        double r6863084 = r6863075 * r6863083;
        double r6863085 = r6863075 * r6863084;
        double r6863086 = r6863082 + r6863085;
        double r6863087 = r6863081 * r6863086;
        double r6863088 = -351.914062;
        double r6863089 = r6863075 * r6863088;
        double r6863090 = r6863089 * r6863077;
        double r6863091 = -2.707031;
        double r6863092 = r6863091 * r6863075;
        double r6863093 = 58.652344;
        double r6863094 = r6863093 * r6863075;
        double r6863095 = r6863076 * r6863094;
        double r6863096 = r6863092 + r6863095;
        double r6863097 = r6863090 + r6863096;
        double r6863098 = 854.648438;
        double r6863099 = r6863098 * r6863075;
        double r6863100 = r6863099 * r6863076;
        double r6863101 = r6863100 * r6863077;
        double r6863102 = r6863097 + r6863101;
        double r6863103 = r6863087 + r6863102;
        return r6863103;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6863104, r6863105, r6863106, r6863107, r6863108, r6863109, r6863110, r6863111, r6863112, r6863113, r6863114, r6863115, r6863116, r6863117, r6863118, r6863119, r6863120, r6863121, r6863122, r6863123, r6863124, r6863125, r6863126, r6863127, r6863128, r6863129, r6863130, r6863131;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6863104, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r6863105);
        mpfr_init(r6863106);
        mpfr_init_set_str(r6863107, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r6863108);
        mpfr_init(r6863109);
        mpfr_init(r6863110);
        mpfr_init(r6863111);
        mpfr_init_set_str(r6863112, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r6863113);
        mpfr_init(r6863114);
        mpfr_init(r6863115);
        mpfr_init(r6863116);
        mpfr_init_set_str(r6863117, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r6863118);
        mpfr_init(r6863119);
        mpfr_init(r6863120);
        mpfr_init(r6863121);
        mpfr_init_set_str(r6863122, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r6863123);
        mpfr_init(r6863124);
        mpfr_init(r6863125);
        mpfr_init(r6863126);
        mpfr_init_set_str(r6863127, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r6863128);
        mpfr_init(r6863129);
        mpfr_init(r6863130);
        mpfr_init(r6863131);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6863105, x, MPFR_RNDN);
        mpfr_mul(r6863106, r6863104, r6863105, MPFR_RNDN);
        ;
        mpfr_mul(r6863108, r6863105, r6863105, MPFR_RNDN);
        mpfr_mul(r6863109, r6863108, r6863105, MPFR_RNDN);
        mpfr_mul(r6863110, r6863107, r6863109, MPFR_RNDN);
        mpfr_add(r6863111, r6863106, r6863110, MPFR_RNDN);
        ;
        mpfr_mul(r6863113, r6863109, r6863105, MPFR_RNDN);
        mpfr_mul(r6863114, r6863113, r6863105, MPFR_RNDN);
        mpfr_mul(r6863115, r6863112, r6863114, MPFR_RNDN);
        mpfr_add(r6863116, r6863111, r6863115, MPFR_RNDN);
        ;
        mpfr_mul(r6863118, r6863114, r6863105, MPFR_RNDN);
        mpfr_mul(r6863119, r6863118, r6863105, MPFR_RNDN);
        mpfr_mul(r6863120, r6863117, r6863119, MPFR_RNDN);
        mpfr_add(r6863121, r6863116, r6863120, MPFR_RNDN);
        ;
        mpfr_mul(r6863123, r6863119, r6863105, MPFR_RNDN);
        mpfr_mul(r6863124, r6863123, r6863105, MPFR_RNDN);
        mpfr_mul(r6863125, r6863122, r6863124, MPFR_RNDN);
        mpfr_add(r6863126, r6863121, r6863125, MPFR_RNDN);
        ;
        mpfr_mul(r6863128, r6863124, r6863105, MPFR_RNDN);
        mpfr_mul(r6863129, r6863128, r6863105, MPFR_RNDN);
        mpfr_mul(r6863130, r6863127, r6863129, MPFR_RNDN);
        mpfr_add(r6863131, r6863126, r6863130, MPFR_RNDN);
        return mpfr_get_d(r6863131, MPFR_RNDN);
}

static mpfr_t r6863132, r6863133, r6863134, r6863135, r6863136, r6863137, r6863138, r6863139, r6863140, r6863141, r6863142, r6863143, r6863144, r6863145, r6863146, r6863147, r6863148, r6863149, r6863150, r6863151, r6863152, r6863153, r6863154, r6863155, r6863156, r6863157, r6863158, r6863159, r6863160;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6863132);
        mpfr_init(r6863133);
        mpfr_init(r6863134);
        mpfr_init_set_str(r6863135, "3", 10, MPFR_RNDN);
        mpfr_init(r6863136);
        mpfr_init(r6863137);
        mpfr_init(r6863138);
        mpfr_init_set_str(r6863139, "-902.128906", 10, MPFR_RNDN);
        mpfr_init_set_str(r6863140, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r6863141);
        mpfr_init(r6863142);
        mpfr_init(r6863143);
        mpfr_init(r6863144);
        mpfr_init_set_str(r6863145, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r6863146);
        mpfr_init(r6863147);
        mpfr_init_set_str(r6863148, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r6863149);
        mpfr_init_set_str(r6863150, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r6863151);
        mpfr_init(r6863152);
        mpfr_init(r6863153);
        mpfr_init(r6863154);
        mpfr_init_set_str(r6863155, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r6863156);
        mpfr_init(r6863157);
        mpfr_init(r6863158);
        mpfr_init(r6863159);
        mpfr_init(r6863160);
}

double f_fm(double x) {
        mpfr_set_d(r6863132, x, MPFR_RNDN);
        mpfr_mul(r6863133, r6863132, r6863132, MPFR_RNDN);
        mpfr_mul(r6863134, r6863133, r6863133, MPFR_RNDN);
        ;
        mpfr_pow(r6863136, r6863132, r6863135, MPFR_RNDN);
        mpfr_mul(r6863137, r6863136, r6863133, MPFR_RNDN);
        mpfr_mul(r6863138, r6863134, r6863137, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6863141, r6863132, r6863140, MPFR_RNDN);
        mpfr_mul(r6863142, r6863132, r6863141, MPFR_RNDN);
        mpfr_add(r6863143, r6863139, r6863142, MPFR_RNDN);
        mpfr_mul(r6863144, r6863138, r6863143, MPFR_RNDN);
        ;
        mpfr_mul(r6863146, r6863132, r6863145, MPFR_RNDN);
        mpfr_mul(r6863147, r6863146, r6863134, MPFR_RNDN);
        ;
        mpfr_mul(r6863149, r6863148, r6863132, MPFR_RNDN);
        ;
        mpfr_mul(r6863151, r6863150, r6863132, MPFR_RNDN);
        mpfr_mul(r6863152, r6863133, r6863151, MPFR_RNDN);
        mpfr_add(r6863153, r6863149, r6863152, MPFR_RNDN);
        mpfr_add(r6863154, r6863147, r6863153, MPFR_RNDN);
        ;
        mpfr_mul(r6863156, r6863155, r6863132, MPFR_RNDN);
        mpfr_mul(r6863157, r6863156, r6863133, MPFR_RNDN);
        mpfr_mul(r6863158, r6863157, r6863134, MPFR_RNDN);
        mpfr_add(r6863159, r6863154, r6863158, MPFR_RNDN);
        mpfr_add(r6863160, r6863144, r6863159, MPFR_RNDN);
        return mpfr_get_d(r6863160, MPFR_RNDN);
}

static mpfr_t r6863161, r6863162, r6863163, r6863164, r6863165, r6863166, r6863167, r6863168, r6863169, r6863170, r6863171, r6863172, r6863173, r6863174, r6863175, r6863176, r6863177, r6863178, r6863179, r6863180, r6863181, r6863182, r6863183, r6863184, r6863185, r6863186, r6863187, r6863188, r6863189;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6863161);
        mpfr_init(r6863162);
        mpfr_init(r6863163);
        mpfr_init_set_str(r6863164, "3", 10, MPFR_RNDN);
        mpfr_init(r6863165);
        mpfr_init(r6863166);
        mpfr_init(r6863167);
        mpfr_init_set_str(r6863168, "-902.128906", 10, MPFR_RNDN);
        mpfr_init_set_str(r6863169, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r6863170);
        mpfr_init(r6863171);
        mpfr_init(r6863172);
        mpfr_init(r6863173);
        mpfr_init_set_str(r6863174, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r6863175);
        mpfr_init(r6863176);
        mpfr_init_set_str(r6863177, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r6863178);
        mpfr_init_set_str(r6863179, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r6863180);
        mpfr_init(r6863181);
        mpfr_init(r6863182);
        mpfr_init(r6863183);
        mpfr_init_set_str(r6863184, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r6863185);
        mpfr_init(r6863186);
        mpfr_init(r6863187);
        mpfr_init(r6863188);
        mpfr_init(r6863189);
}

double f_dm(double x) {
        mpfr_set_d(r6863161, x, MPFR_RNDN);
        mpfr_mul(r6863162, r6863161, r6863161, MPFR_RNDN);
        mpfr_mul(r6863163, r6863162, r6863162, MPFR_RNDN);
        ;
        mpfr_pow(r6863165, r6863161, r6863164, MPFR_RNDN);
        mpfr_mul(r6863166, r6863165, r6863162, MPFR_RNDN);
        mpfr_mul(r6863167, r6863163, r6863166, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6863170, r6863161, r6863169, MPFR_RNDN);
        mpfr_mul(r6863171, r6863161, r6863170, MPFR_RNDN);
        mpfr_add(r6863172, r6863168, r6863171, MPFR_RNDN);
        mpfr_mul(r6863173, r6863167, r6863172, MPFR_RNDN);
        ;
        mpfr_mul(r6863175, r6863161, r6863174, MPFR_RNDN);
        mpfr_mul(r6863176, r6863175, r6863163, MPFR_RNDN);
        ;
        mpfr_mul(r6863178, r6863177, r6863161, MPFR_RNDN);
        ;
        mpfr_mul(r6863180, r6863179, r6863161, MPFR_RNDN);
        mpfr_mul(r6863181, r6863162, r6863180, MPFR_RNDN);
        mpfr_add(r6863182, r6863178, r6863181, MPFR_RNDN);
        mpfr_add(r6863183, r6863176, r6863182, MPFR_RNDN);
        ;
        mpfr_mul(r6863185, r6863184, r6863161, MPFR_RNDN);
        mpfr_mul(r6863186, r6863185, r6863162, MPFR_RNDN);
        mpfr_mul(r6863187, r6863186, r6863163, MPFR_RNDN);
        mpfr_add(r6863188, r6863183, r6863187, MPFR_RNDN);
        mpfr_add(r6863189, r6863173, r6863188, MPFR_RNDN);
        return mpfr_get_d(r6863189, MPFR_RNDN);
}

