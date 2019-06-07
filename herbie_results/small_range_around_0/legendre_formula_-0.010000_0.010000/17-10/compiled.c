#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r4488017 = -0.246094;
        float r4488018 = 13.535156;
        float r4488019 = x;
        float r4488020 = r4488019 * r4488019;
        float r4488021 = r4488018 * r4488020;
        float r4488022 = r4488017 + r4488021;
        float r4488023 = -117.304688;
        float r4488024 = r4488020 * r4488019;
        float r4488025 = r4488024 * r4488019;
        float r4488026 = r4488023 * r4488025;
        float r4488027 = r4488022 + r4488026;
        float r4488028 = 351.914062;
        float r4488029 = r4488025 * r4488019;
        float r4488030 = r4488029 * r4488019;
        float r4488031 = r4488028 * r4488030;
        float r4488032 = r4488027 + r4488031;
        float r4488033 = -427.324219;
        float r4488034 = r4488030 * r4488019;
        float r4488035 = r4488034 * r4488019;
        float r4488036 = r4488033 * r4488035;
        float r4488037 = r4488032 + r4488036;
        float r4488038 = 180.425781;
        float r4488039 = r4488035 * r4488019;
        float r4488040 = r4488039 * r4488019;
        float r4488041 = r4488038 * r4488040;
        float r4488042 = r4488037 + r4488041;
        return r4488042;
}

double f_id(double x) {
        double r4488043 = -0.246094;
        double r4488044 = 13.535156;
        double r4488045 = x;
        double r4488046 = r4488045 * r4488045;
        double r4488047 = r4488044 * r4488046;
        double r4488048 = r4488043 + r4488047;
        double r4488049 = -117.304688;
        double r4488050 = r4488046 * r4488045;
        double r4488051 = r4488050 * r4488045;
        double r4488052 = r4488049 * r4488051;
        double r4488053 = r4488048 + r4488052;
        double r4488054 = 351.914062;
        double r4488055 = r4488051 * r4488045;
        double r4488056 = r4488055 * r4488045;
        double r4488057 = r4488054 * r4488056;
        double r4488058 = r4488053 + r4488057;
        double r4488059 = -427.324219;
        double r4488060 = r4488056 * r4488045;
        double r4488061 = r4488060 * r4488045;
        double r4488062 = r4488059 * r4488061;
        double r4488063 = r4488058 + r4488062;
        double r4488064 = 180.425781;
        double r4488065 = r4488061 * r4488045;
        double r4488066 = r4488065 * r4488045;
        double r4488067 = r4488064 * r4488066;
        double r4488068 = r4488063 + r4488067;
        return r4488068;
}


double f_of(float x) {
        float r4488069 = -0.246094;
        float r4488070 = x;
        float r4488071 = 4;
        float r4488072 = pow(r4488070, r4488071);
        float r4488073 = -117.304688;
        float r4488074 = r4488072 * r4488073;
        float r4488075 = 13.535156;
        float r4488076 = r4488070 * r4488075;
        float r4488077 = r4488070 * r4488076;
        float r4488078 = r4488074 + r4488077;
        float r4488079 = r4488069 + r4488078;
        float r4488080 = r4488070 * r4488070;
        float r4488081 = r4488080 * r4488080;
        float r4488082 = r4488081 * r4488081;
        float r4488083 = 180.425781;
        float r4488084 = r4488080 * r4488083;
        float r4488085 = -427.324219;
        float r4488086 = r4488084 + r4488085;
        float r4488087 = r4488082 * r4488086;
        float r4488088 = r4488079 + r4488087;
        float r4488089 = 351.914062;
        float r4488090 = r4488080 * r4488089;
        float r4488091 = r4488081 * r4488090;
        float r4488092 = r4488088 + r4488091;
        return r4488092;
}

double f_od(double x) {
        double r4488093 = -0.246094;
        double r4488094 = x;
        double r4488095 = 4;
        double r4488096 = pow(r4488094, r4488095);
        double r4488097 = -117.304688;
        double r4488098 = r4488096 * r4488097;
        double r4488099 = 13.535156;
        double r4488100 = r4488094 * r4488099;
        double r4488101 = r4488094 * r4488100;
        double r4488102 = r4488098 + r4488101;
        double r4488103 = r4488093 + r4488102;
        double r4488104 = r4488094 * r4488094;
        double r4488105 = r4488104 * r4488104;
        double r4488106 = r4488105 * r4488105;
        double r4488107 = 180.425781;
        double r4488108 = r4488104 * r4488107;
        double r4488109 = -427.324219;
        double r4488110 = r4488108 + r4488109;
        double r4488111 = r4488106 * r4488110;
        double r4488112 = r4488103 + r4488111;
        double r4488113 = 351.914062;
        double r4488114 = r4488104 * r4488113;
        double r4488115 = r4488105 * r4488114;
        double r4488116 = r4488112 + r4488115;
        return r4488116;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4488117, r4488118, r4488119, r4488120, r4488121, r4488122, r4488123, r4488124, r4488125, r4488126, r4488127, r4488128, r4488129, r4488130, r4488131, r4488132, r4488133, r4488134, r4488135, r4488136, r4488137, r4488138, r4488139, r4488140, r4488141, r4488142;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488117, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r4488118, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4488119);
        mpfr_init(r4488120);
        mpfr_init(r4488121);
        mpfr_init(r4488122);
        mpfr_init_set_str(r4488123, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4488124);
        mpfr_init(r4488125);
        mpfr_init(r4488126);
        mpfr_init(r4488127);
        mpfr_init_set_str(r4488128, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4488129);
        mpfr_init(r4488130);
        mpfr_init(r4488131);
        mpfr_init(r4488132);
        mpfr_init_set_str(r4488133, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4488134);
        mpfr_init(r4488135);
        mpfr_init(r4488136);
        mpfr_init(r4488137);
        mpfr_init_set_str(r4488138, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4488139);
        mpfr_init(r4488140);
        mpfr_init(r4488141);
        mpfr_init(r4488142);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4488119, x, MPFR_RNDN);
        mpfr_mul(r4488120, r4488119, r4488119, MPFR_RNDN);
        mpfr_mul(r4488121, r4488118, r4488120, MPFR_RNDN);
        mpfr_add(r4488122, r4488117, r4488121, MPFR_RNDN);
        ;
        mpfr_mul(r4488124, r4488120, r4488119, MPFR_RNDN);
        mpfr_mul(r4488125, r4488124, r4488119, MPFR_RNDN);
        mpfr_mul(r4488126, r4488123, r4488125, MPFR_RNDN);
        mpfr_add(r4488127, r4488122, r4488126, MPFR_RNDN);
        ;
        mpfr_mul(r4488129, r4488125, r4488119, MPFR_RNDN);
        mpfr_mul(r4488130, r4488129, r4488119, MPFR_RNDN);
        mpfr_mul(r4488131, r4488128, r4488130, MPFR_RNDN);
        mpfr_add(r4488132, r4488127, r4488131, MPFR_RNDN);
        ;
        mpfr_mul(r4488134, r4488130, r4488119, MPFR_RNDN);
        mpfr_mul(r4488135, r4488134, r4488119, MPFR_RNDN);
        mpfr_mul(r4488136, r4488133, r4488135, MPFR_RNDN);
        mpfr_add(r4488137, r4488132, r4488136, MPFR_RNDN);
        ;
        mpfr_mul(r4488139, r4488135, r4488119, MPFR_RNDN);
        mpfr_mul(r4488140, r4488139, r4488119, MPFR_RNDN);
        mpfr_mul(r4488141, r4488138, r4488140, MPFR_RNDN);
        mpfr_add(r4488142, r4488137, r4488141, MPFR_RNDN);
        return mpfr_get_d(r4488142, MPFR_RNDN);
}

static mpfr_t r4488143, r4488144, r4488145, r4488146, r4488147, r4488148, r4488149, r4488150, r4488151, r4488152, r4488153, r4488154, r4488155, r4488156, r4488157, r4488158, r4488159, r4488160, r4488161, r4488162, r4488163, r4488164, r4488165, r4488166;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488143, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r4488144);
        mpfr_init_set_str(r4488145, "4", 10, MPFR_RNDN);
        mpfr_init(r4488146);
        mpfr_init_set_str(r4488147, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4488148);
        mpfr_init_set_str(r4488149, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4488150);
        mpfr_init(r4488151);
        mpfr_init(r4488152);
        mpfr_init(r4488153);
        mpfr_init(r4488154);
        mpfr_init(r4488155);
        mpfr_init(r4488156);
        mpfr_init_set_str(r4488157, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4488158);
        mpfr_init_set_str(r4488159, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4488160);
        mpfr_init(r4488161);
        mpfr_init(r4488162);
        mpfr_init_set_str(r4488163, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4488164);
        mpfr_init(r4488165);
        mpfr_init(r4488166);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4488144, x, MPFR_RNDN);
        ;
        mpfr_pow(r4488146, r4488144, r4488145, MPFR_RNDN);
        ;
        mpfr_mul(r4488148, r4488146, r4488147, MPFR_RNDN);
        ;
        mpfr_mul(r4488150, r4488144, r4488149, MPFR_RNDN);
        mpfr_mul(r4488151, r4488144, r4488150, MPFR_RNDN);
        mpfr_add(r4488152, r4488148, r4488151, MPFR_RNDN);
        mpfr_add(r4488153, r4488143, r4488152, MPFR_RNDN);
        mpfr_mul(r4488154, r4488144, r4488144, MPFR_RNDN);
        mpfr_mul(r4488155, r4488154, r4488154, MPFR_RNDN);
        mpfr_mul(r4488156, r4488155, r4488155, MPFR_RNDN);
        ;
        mpfr_mul(r4488158, r4488154, r4488157, MPFR_RNDN);
        ;
        mpfr_add(r4488160, r4488158, r4488159, MPFR_RNDN);
        mpfr_mul(r4488161, r4488156, r4488160, MPFR_RNDN);
        mpfr_add(r4488162, r4488153, r4488161, MPFR_RNDN);
        ;
        mpfr_mul(r4488164, r4488154, r4488163, MPFR_RNDN);
        mpfr_mul(r4488165, r4488155, r4488164, MPFR_RNDN);
        mpfr_add(r4488166, r4488162, r4488165, MPFR_RNDN);
        return mpfr_get_d(r4488166, MPFR_RNDN);
}

static mpfr_t r4488167, r4488168, r4488169, r4488170, r4488171, r4488172, r4488173, r4488174, r4488175, r4488176, r4488177, r4488178, r4488179, r4488180, r4488181, r4488182, r4488183, r4488184, r4488185, r4488186, r4488187, r4488188, r4488189, r4488190;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4488167, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r4488168);
        mpfr_init_set_str(r4488169, "4", 10, MPFR_RNDN);
        mpfr_init(r4488170);
        mpfr_init_set_str(r4488171, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r4488172);
        mpfr_init_set_str(r4488173, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r4488174);
        mpfr_init(r4488175);
        mpfr_init(r4488176);
        mpfr_init(r4488177);
        mpfr_init(r4488178);
        mpfr_init(r4488179);
        mpfr_init(r4488180);
        mpfr_init_set_str(r4488181, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r4488182);
        mpfr_init_set_str(r4488183, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r4488184);
        mpfr_init(r4488185);
        mpfr_init(r4488186);
        mpfr_init_set_str(r4488187, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r4488188);
        mpfr_init(r4488189);
        mpfr_init(r4488190);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4488168, x, MPFR_RNDN);
        ;
        mpfr_pow(r4488170, r4488168, r4488169, MPFR_RNDN);
        ;
        mpfr_mul(r4488172, r4488170, r4488171, MPFR_RNDN);
        ;
        mpfr_mul(r4488174, r4488168, r4488173, MPFR_RNDN);
        mpfr_mul(r4488175, r4488168, r4488174, MPFR_RNDN);
        mpfr_add(r4488176, r4488172, r4488175, MPFR_RNDN);
        mpfr_add(r4488177, r4488167, r4488176, MPFR_RNDN);
        mpfr_mul(r4488178, r4488168, r4488168, MPFR_RNDN);
        mpfr_mul(r4488179, r4488178, r4488178, MPFR_RNDN);
        mpfr_mul(r4488180, r4488179, r4488179, MPFR_RNDN);
        ;
        mpfr_mul(r4488182, r4488178, r4488181, MPFR_RNDN);
        ;
        mpfr_add(r4488184, r4488182, r4488183, MPFR_RNDN);
        mpfr_mul(r4488185, r4488180, r4488184, MPFR_RNDN);
        mpfr_add(r4488186, r4488177, r4488185, MPFR_RNDN);
        ;
        mpfr_mul(r4488188, r4488178, r4488187, MPFR_RNDN);
        mpfr_mul(r4488189, r4488179, r4488188, MPFR_RNDN);
        mpfr_add(r4488190, r4488186, r4488189, MPFR_RNDN);
        return mpfr_get_d(r4488190, MPFR_RNDN);
}

