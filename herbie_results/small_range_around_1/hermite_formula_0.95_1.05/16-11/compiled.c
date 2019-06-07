#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r63173049 = -665280.0;
        float r63173050 = x;
        float r63173051 = r63173049 * r63173050;
        float r63173052 = 2217600.0;
        float r63173053 = r63173050 * r63173050;
        float r63173054 = r63173053 * r63173050;
        float r63173055 = r63173052 * r63173054;
        float r63173056 = r63173051 + r63173055;
        float r63173057 = -1774080.0;
        float r63173058 = r63173054 * r63173050;
        float r63173059 = r63173058 * r63173050;
        float r63173060 = r63173057 * r63173059;
        float r63173061 = r63173056 + r63173060;
        float r63173062 = 506880.0;
        float r63173063 = r63173059 * r63173050;
        float r63173064 = r63173063 * r63173050;
        float r63173065 = r63173062 * r63173064;
        float r63173066 = r63173061 + r63173065;
        float r63173067 = -56320.0;
        float r63173068 = r63173064 * r63173050;
        float r63173069 = r63173068 * r63173050;
        float r63173070 = r63173067 * r63173069;
        float r63173071 = r63173066 + r63173070;
        float r63173072 = 2048.0;
        float r63173073 = r63173069 * r63173050;
        float r63173074 = r63173073 * r63173050;
        float r63173075 = r63173072 * r63173074;
        float r63173076 = r63173071 + r63173075;
        return r63173076;
}

double f_id(double x) {
        double r63173077 = -665280.0;
        double r63173078 = x;
        double r63173079 = r63173077 * r63173078;
        double r63173080 = 2217600.0;
        double r63173081 = r63173078 * r63173078;
        double r63173082 = r63173081 * r63173078;
        double r63173083 = r63173080 * r63173082;
        double r63173084 = r63173079 + r63173083;
        double r63173085 = -1774080.0;
        double r63173086 = r63173082 * r63173078;
        double r63173087 = r63173086 * r63173078;
        double r63173088 = r63173085 * r63173087;
        double r63173089 = r63173084 + r63173088;
        double r63173090 = 506880.0;
        double r63173091 = r63173087 * r63173078;
        double r63173092 = r63173091 * r63173078;
        double r63173093 = r63173090 * r63173092;
        double r63173094 = r63173089 + r63173093;
        double r63173095 = -56320.0;
        double r63173096 = r63173092 * r63173078;
        double r63173097 = r63173096 * r63173078;
        double r63173098 = r63173095 * r63173097;
        double r63173099 = r63173094 + r63173098;
        double r63173100 = 2048.0;
        double r63173101 = r63173097 * r63173078;
        double r63173102 = r63173101 * r63173078;
        double r63173103 = r63173100 * r63173102;
        double r63173104 = r63173099 + r63173103;
        return r63173104;
}


double f_of(float x) {
        float r63173105 = x;
        float r63173106 = r63173105 * r63173105;
        float r63173107 = 506880.0;
        float r63173108 = r63173105 * r63173107;
        float r63173109 = r63173106 * r63173108;
        float r63173110 = r63173106 * r63173109;
        float r63173111 = -1774080.0;
        float r63173112 = r63173105 * r63173111;
        float r63173113 = r63173112 * r63173106;
        float r63173114 = 2217600.0;
        float r63173115 = r63173105 * r63173114;
        float r63173116 = r63173113 + r63173115;
        float r63173117 = sqrt(r63173116);
        float r63173118 = r63173117 * r63173117;
        float r63173119 = r63173110 + r63173118;
        float r63173120 = r63173106 * r63173119;
        float r63173121 = 3;
        float r63173122 = pow(r63173105, r63173121);
        float r63173123 = r63173122 * r63173122;
        float r63173124 = r63173122 * r63173123;
        float r63173125 = -56320.0;
        float r63173126 = 2048.0;
        float r63173127 = r63173126 * r63173105;
        float r63173128 = r63173105 * r63173127;
        float r63173129 = r63173125 + r63173128;
        float r63173130 = r63173124 * r63173129;
        float r63173131 = -665280.0;
        float r63173132 = r63173105 * r63173131;
        float r63173133 = r63173130 + r63173132;
        float r63173134 = r63173120 + r63173133;
        float r63173135 = sqrt(r63173134);
        float r63173136 = r63173135 * r63173135;
        return r63173136;
}

double f_od(double x) {
        double r63173137 = x;
        double r63173138 = r63173137 * r63173137;
        double r63173139 = 506880.0;
        double r63173140 = r63173137 * r63173139;
        double r63173141 = r63173138 * r63173140;
        double r63173142 = r63173138 * r63173141;
        double r63173143 = -1774080.0;
        double r63173144 = r63173137 * r63173143;
        double r63173145 = r63173144 * r63173138;
        double r63173146 = 2217600.0;
        double r63173147 = r63173137 * r63173146;
        double r63173148 = r63173145 + r63173147;
        double r63173149 = sqrt(r63173148);
        double r63173150 = r63173149 * r63173149;
        double r63173151 = r63173142 + r63173150;
        double r63173152 = r63173138 * r63173151;
        double r63173153 = 3;
        double r63173154 = pow(r63173137, r63173153);
        double r63173155 = r63173154 * r63173154;
        double r63173156 = r63173154 * r63173155;
        double r63173157 = -56320.0;
        double r63173158 = 2048.0;
        double r63173159 = r63173158 * r63173137;
        double r63173160 = r63173137 * r63173159;
        double r63173161 = r63173157 + r63173160;
        double r63173162 = r63173156 * r63173161;
        double r63173163 = -665280.0;
        double r63173164 = r63173137 * r63173163;
        double r63173165 = r63173162 + r63173164;
        double r63173166 = r63173152 + r63173165;
        double r63173167 = sqrt(r63173166);
        double r63173168 = r63173167 * r63173167;
        return r63173168;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r63173169, r63173170, r63173171, r63173172, r63173173, r63173174, r63173175, r63173176, r63173177, r63173178, r63173179, r63173180, r63173181, r63173182, r63173183, r63173184, r63173185, r63173186, r63173187, r63173188, r63173189, r63173190, r63173191, r63173192, r63173193, r63173194, r63173195, r63173196;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r63173169, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r63173170);
        mpfr_init(r63173171);
        mpfr_init_set_str(r63173172, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r63173173);
        mpfr_init(r63173174);
        mpfr_init(r63173175);
        mpfr_init(r63173176);
        mpfr_init_set_str(r63173177, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r63173178);
        mpfr_init(r63173179);
        mpfr_init(r63173180);
        mpfr_init(r63173181);
        mpfr_init_set_str(r63173182, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r63173183);
        mpfr_init(r63173184);
        mpfr_init(r63173185);
        mpfr_init(r63173186);
        mpfr_init_set_str(r63173187, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r63173188);
        mpfr_init(r63173189);
        mpfr_init(r63173190);
        mpfr_init(r63173191);
        mpfr_init_set_str(r63173192, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r63173193);
        mpfr_init(r63173194);
        mpfr_init(r63173195);
        mpfr_init(r63173196);
}

double f_im(double x) {
        ;
        mpfr_set_d(r63173170, x, MPFR_RNDN);
        mpfr_mul(r63173171, r63173169, r63173170, MPFR_RNDN);
        ;
        mpfr_mul(r63173173, r63173170, r63173170, MPFR_RNDN);
        mpfr_mul(r63173174, r63173173, r63173170, MPFR_RNDN);
        mpfr_mul(r63173175, r63173172, r63173174, MPFR_RNDN);
        mpfr_add(r63173176, r63173171, r63173175, MPFR_RNDN);
        ;
        mpfr_mul(r63173178, r63173174, r63173170, MPFR_RNDN);
        mpfr_mul(r63173179, r63173178, r63173170, MPFR_RNDN);
        mpfr_mul(r63173180, r63173177, r63173179, MPFR_RNDN);
        mpfr_add(r63173181, r63173176, r63173180, MPFR_RNDN);
        ;
        mpfr_mul(r63173183, r63173179, r63173170, MPFR_RNDN);
        mpfr_mul(r63173184, r63173183, r63173170, MPFR_RNDN);
        mpfr_mul(r63173185, r63173182, r63173184, MPFR_RNDN);
        mpfr_add(r63173186, r63173181, r63173185, MPFR_RNDN);
        ;
        mpfr_mul(r63173188, r63173184, r63173170, MPFR_RNDN);
        mpfr_mul(r63173189, r63173188, r63173170, MPFR_RNDN);
        mpfr_mul(r63173190, r63173187, r63173189, MPFR_RNDN);
        mpfr_add(r63173191, r63173186, r63173190, MPFR_RNDN);
        ;
        mpfr_mul(r63173193, r63173189, r63173170, MPFR_RNDN);
        mpfr_mul(r63173194, r63173193, r63173170, MPFR_RNDN);
        mpfr_mul(r63173195, r63173192, r63173194, MPFR_RNDN);
        mpfr_add(r63173196, r63173191, r63173195, MPFR_RNDN);
        return mpfr_get_d(r63173196, MPFR_RNDN);
}

static mpfr_t r63173197, r63173198, r63173199, r63173200, r63173201, r63173202, r63173203, r63173204, r63173205, r63173206, r63173207, r63173208, r63173209, r63173210, r63173211, r63173212, r63173213, r63173214, r63173215, r63173216, r63173217, r63173218, r63173219, r63173220, r63173221, r63173222, r63173223, r63173224, r63173225, r63173226, r63173227, r63173228;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r63173197);
        mpfr_init(r63173198);
        mpfr_init_set_str(r63173199, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r63173200);
        mpfr_init(r63173201);
        mpfr_init(r63173202);
        mpfr_init_set_str(r63173203, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r63173204);
        mpfr_init(r63173205);
        mpfr_init_set_str(r63173206, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r63173207);
        mpfr_init(r63173208);
        mpfr_init(r63173209);
        mpfr_init(r63173210);
        mpfr_init(r63173211);
        mpfr_init(r63173212);
        mpfr_init_set_str(r63173213, "3", 10, MPFR_RNDN);
        mpfr_init(r63173214);
        mpfr_init(r63173215);
        mpfr_init(r63173216);
        mpfr_init_set_str(r63173217, "-56320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63173218, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r63173219);
        mpfr_init(r63173220);
        mpfr_init(r63173221);
        mpfr_init(r63173222);
        mpfr_init_set_str(r63173223, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r63173224);
        mpfr_init(r63173225);
        mpfr_init(r63173226);
        mpfr_init(r63173227);
        mpfr_init(r63173228);
}

double f_fm(double x) {
        mpfr_set_d(r63173197, x, MPFR_RNDN);
        mpfr_mul(r63173198, r63173197, r63173197, MPFR_RNDN);
        ;
        mpfr_mul(r63173200, r63173197, r63173199, MPFR_RNDN);
        mpfr_mul(r63173201, r63173198, r63173200, MPFR_RNDN);
        mpfr_mul(r63173202, r63173198, r63173201, MPFR_RNDN);
        ;
        mpfr_mul(r63173204, r63173197, r63173203, MPFR_RNDN);
        mpfr_mul(r63173205, r63173204, r63173198, MPFR_RNDN);
        ;
        mpfr_mul(r63173207, r63173197, r63173206, MPFR_RNDN);
        mpfr_add(r63173208, r63173205, r63173207, MPFR_RNDN);
        mpfr_sqrt(r63173209, r63173208, MPFR_RNDN);
        mpfr_mul(r63173210, r63173209, r63173209, MPFR_RNDN);
        mpfr_add(r63173211, r63173202, r63173210, MPFR_RNDN);
        mpfr_mul(r63173212, r63173198, r63173211, MPFR_RNDN);
        ;
        mpfr_pow(r63173214, r63173197, r63173213, MPFR_RNDN);
        mpfr_mul(r63173215, r63173214, r63173214, MPFR_RNDN);
        mpfr_mul(r63173216, r63173214, r63173215, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r63173219, r63173218, r63173197, MPFR_RNDN);
        mpfr_mul(r63173220, r63173197, r63173219, MPFR_RNDN);
        mpfr_add(r63173221, r63173217, r63173220, MPFR_RNDN);
        mpfr_mul(r63173222, r63173216, r63173221, MPFR_RNDN);
        ;
        mpfr_mul(r63173224, r63173197, r63173223, MPFR_RNDN);
        mpfr_add(r63173225, r63173222, r63173224, MPFR_RNDN);
        mpfr_add(r63173226, r63173212, r63173225, MPFR_RNDN);
        mpfr_sqrt(r63173227, r63173226, MPFR_RNDN);
        mpfr_mul(r63173228, r63173227, r63173227, MPFR_RNDN);
        return mpfr_get_d(r63173228, MPFR_RNDN);
}

static mpfr_t r63173229, r63173230, r63173231, r63173232, r63173233, r63173234, r63173235, r63173236, r63173237, r63173238, r63173239, r63173240, r63173241, r63173242, r63173243, r63173244, r63173245, r63173246, r63173247, r63173248, r63173249, r63173250, r63173251, r63173252, r63173253, r63173254, r63173255, r63173256, r63173257, r63173258, r63173259, r63173260;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r63173229);
        mpfr_init(r63173230);
        mpfr_init_set_str(r63173231, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r63173232);
        mpfr_init(r63173233);
        mpfr_init(r63173234);
        mpfr_init_set_str(r63173235, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r63173236);
        mpfr_init(r63173237);
        mpfr_init_set_str(r63173238, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r63173239);
        mpfr_init(r63173240);
        mpfr_init(r63173241);
        mpfr_init(r63173242);
        mpfr_init(r63173243);
        mpfr_init(r63173244);
        mpfr_init_set_str(r63173245, "3", 10, MPFR_RNDN);
        mpfr_init(r63173246);
        mpfr_init(r63173247);
        mpfr_init(r63173248);
        mpfr_init_set_str(r63173249, "-56320.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r63173250, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r63173251);
        mpfr_init(r63173252);
        mpfr_init(r63173253);
        mpfr_init(r63173254);
        mpfr_init_set_str(r63173255, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r63173256);
        mpfr_init(r63173257);
        mpfr_init(r63173258);
        mpfr_init(r63173259);
        mpfr_init(r63173260);
}

double f_dm(double x) {
        mpfr_set_d(r63173229, x, MPFR_RNDN);
        mpfr_mul(r63173230, r63173229, r63173229, MPFR_RNDN);
        ;
        mpfr_mul(r63173232, r63173229, r63173231, MPFR_RNDN);
        mpfr_mul(r63173233, r63173230, r63173232, MPFR_RNDN);
        mpfr_mul(r63173234, r63173230, r63173233, MPFR_RNDN);
        ;
        mpfr_mul(r63173236, r63173229, r63173235, MPFR_RNDN);
        mpfr_mul(r63173237, r63173236, r63173230, MPFR_RNDN);
        ;
        mpfr_mul(r63173239, r63173229, r63173238, MPFR_RNDN);
        mpfr_add(r63173240, r63173237, r63173239, MPFR_RNDN);
        mpfr_sqrt(r63173241, r63173240, MPFR_RNDN);
        mpfr_mul(r63173242, r63173241, r63173241, MPFR_RNDN);
        mpfr_add(r63173243, r63173234, r63173242, MPFR_RNDN);
        mpfr_mul(r63173244, r63173230, r63173243, MPFR_RNDN);
        ;
        mpfr_pow(r63173246, r63173229, r63173245, MPFR_RNDN);
        mpfr_mul(r63173247, r63173246, r63173246, MPFR_RNDN);
        mpfr_mul(r63173248, r63173246, r63173247, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r63173251, r63173250, r63173229, MPFR_RNDN);
        mpfr_mul(r63173252, r63173229, r63173251, MPFR_RNDN);
        mpfr_add(r63173253, r63173249, r63173252, MPFR_RNDN);
        mpfr_mul(r63173254, r63173248, r63173253, MPFR_RNDN);
        ;
        mpfr_mul(r63173256, r63173229, r63173255, MPFR_RNDN);
        mpfr_add(r63173257, r63173254, r63173256, MPFR_RNDN);
        mpfr_add(r63173258, r63173244, r63173257, MPFR_RNDN);
        mpfr_sqrt(r63173259, r63173258, MPFR_RNDN);
        mpfr_mul(r63173260, r63173259, r63173259, MPFR_RNDN);
        return mpfr_get_d(r63173260, MPFR_RNDN);
}

