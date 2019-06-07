#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r4438018 = -0.209473;
        float r4438019 = 21.994629;
        float r4438020 = x;
        float r4438021 = r4438020 * r4438020;
        float r4438022 = r4438019 * r4438021;
        float r4438023 = r4438018 + r4438022;
        float r4438024 = -373.908691;
        float r4438025 = r4438021 * r4438020;
        float r4438026 = r4438025 * r4438020;
        float r4438027 = r4438024 * r4438026;
        float r4438028 = r4438023 + r4438027;
        float r4438029 = 2368.088379;
        float r4438030 = r4438026 * r4438020;
        float r4438031 = r4438030 * r4438020;
        float r4438032 = r4438029 * r4438031;
        float r4438033 = r4438028 + r4438032;
        float r4438034 = -7104.265137;
        float r4438035 = r4438031 * r4438020;
        float r4438036 = r4438035 * r4438020;
        float r4438037 = r4438034 * r4438036;
        float r4438038 = r4438033 + r4438037;
        float r4438039 = 10893.206543;
        float r4438040 = r4438036 * r4438020;
        float r4438041 = r4438040 * r4438020;
        float r4438042 = r4438039 * r4438041;
        float r4438043 = r4438038 + r4438042;
        float r4438044 = -8252.429199;
        float r4438045 = r4438041 * r4438020;
        float r4438046 = r4438045 * r4438020;
        float r4438047 = r4438044 * r4438046;
        float r4438048 = r4438043 + r4438047;
        float r4438049 = 2448.522949;
        float r4438050 = r4438046 * r4438020;
        float r4438051 = r4438050 * r4438020;
        float r4438052 = r4438049 * r4438051;
        float r4438053 = r4438048 + r4438052;
        return r4438053;
}

double f_id(double x) {
        double r4438054 = -0.209473;
        double r4438055 = 21.994629;
        double r4438056 = x;
        double r4438057 = r4438056 * r4438056;
        double r4438058 = r4438055 * r4438057;
        double r4438059 = r4438054 + r4438058;
        double r4438060 = -373.908691;
        double r4438061 = r4438057 * r4438056;
        double r4438062 = r4438061 * r4438056;
        double r4438063 = r4438060 * r4438062;
        double r4438064 = r4438059 + r4438063;
        double r4438065 = 2368.088379;
        double r4438066 = r4438062 * r4438056;
        double r4438067 = r4438066 * r4438056;
        double r4438068 = r4438065 * r4438067;
        double r4438069 = r4438064 + r4438068;
        double r4438070 = -7104.265137;
        double r4438071 = r4438067 * r4438056;
        double r4438072 = r4438071 * r4438056;
        double r4438073 = r4438070 * r4438072;
        double r4438074 = r4438069 + r4438073;
        double r4438075 = 10893.206543;
        double r4438076 = r4438072 * r4438056;
        double r4438077 = r4438076 * r4438056;
        double r4438078 = r4438075 * r4438077;
        double r4438079 = r4438074 + r4438078;
        double r4438080 = -8252.429199;
        double r4438081 = r4438077 * r4438056;
        double r4438082 = r4438081 * r4438056;
        double r4438083 = r4438080 * r4438082;
        double r4438084 = r4438079 + r4438083;
        double r4438085 = 2448.522949;
        double r4438086 = r4438082 * r4438056;
        double r4438087 = r4438086 * r4438056;
        double r4438088 = r4438085 * r4438087;
        double r4438089 = r4438084 + r4438088;
        return r4438089;
}


double f_of(float x) {
        float r4438090 = -0.209473;
        float r4438091 = 21.994629;
        float r4438092 = x;
        float r4438093 = r4438092 * r4438092;
        float r4438094 = r4438091 * r4438093;
        float r4438095 = r4438090 + r4438094;
        float r4438096 = -373.908691;
        float r4438097 = r4438093 * r4438092;
        float r4438098 = r4438097 * r4438092;
        float r4438099 = r4438096 * r4438098;
        float r4438100 = r4438095 + r4438099;
        float r4438101 = 2368.088379;
        float r4438102 = r4438098 * r4438092;
        float r4438103 = r4438102 * r4438092;
        float r4438104 = r4438101 * r4438103;
        float r4438105 = r4438100 + r4438104;
        float r4438106 = -7104.265137;
        float r4438107 = r4438103 * r4438092;
        float r4438108 = r4438107 * r4438092;
        float r4438109 = r4438106 * r4438108;
        float r4438110 = r4438105 + r4438109;
        float r4438111 = 10893.206543;
        float r4438112 = r4438108 * r4438092;
        float r4438113 = r4438112 * r4438092;
        float r4438114 = r4438111 * r4438113;
        float r4438115 = r4438110 + r4438114;
        float r4438116 = -8252.429199;
        float r4438117 = r4438113 * r4438092;
        float r4438118 = r4438117 * r4438092;
        float r4438119 = r4438116 * r4438118;
        float r4438120 = r4438115 + r4438119;
        float r4438121 = 2448.522949;
        float r4438122 = r4438118 * r4438092;
        float r4438123 = r4438122 * r4438092;
        float r4438124 = r4438121 * r4438123;
        float r4438125 = r4438120 + r4438124;
        return r4438125;
}

double f_od(double x) {
        double r4438126 = -0.209473;
        double r4438127 = 21.994629;
        double r4438128 = x;
        double r4438129 = r4438128 * r4438128;
        double r4438130 = r4438127 * r4438129;
        double r4438131 = r4438126 + r4438130;
        double r4438132 = -373.908691;
        double r4438133 = r4438129 * r4438128;
        double r4438134 = r4438133 * r4438128;
        double r4438135 = r4438132 * r4438134;
        double r4438136 = r4438131 + r4438135;
        double r4438137 = 2368.088379;
        double r4438138 = r4438134 * r4438128;
        double r4438139 = r4438138 * r4438128;
        double r4438140 = r4438137 * r4438139;
        double r4438141 = r4438136 + r4438140;
        double r4438142 = -7104.265137;
        double r4438143 = r4438139 * r4438128;
        double r4438144 = r4438143 * r4438128;
        double r4438145 = r4438142 * r4438144;
        double r4438146 = r4438141 + r4438145;
        double r4438147 = 10893.206543;
        double r4438148 = r4438144 * r4438128;
        double r4438149 = r4438148 * r4438128;
        double r4438150 = r4438147 * r4438149;
        double r4438151 = r4438146 + r4438150;
        double r4438152 = -8252.429199;
        double r4438153 = r4438149 * r4438128;
        double r4438154 = r4438153 * r4438128;
        double r4438155 = r4438152 * r4438154;
        double r4438156 = r4438151 + r4438155;
        double r4438157 = 2448.522949;
        double r4438158 = r4438154 * r4438128;
        double r4438159 = r4438158 * r4438128;
        double r4438160 = r4438157 * r4438159;
        double r4438161 = r4438156 + r4438160;
        return r4438161;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4438162, r4438163, r4438164, r4438165, r4438166, r4438167, r4438168, r4438169, r4438170, r4438171, r4438172, r4438173, r4438174, r4438175, r4438176, r4438177, r4438178, r4438179, r4438180, r4438181, r4438182, r4438183, r4438184, r4438185, r4438186, r4438187, r4438188, r4438189, r4438190, r4438191, r4438192, r4438193, r4438194, r4438195, r4438196, r4438197;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438162, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438163, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r4438164);
        mpfr_init(r4438165);
        mpfr_init(r4438166);
        mpfr_init(r4438167);
        mpfr_init_set_str(r4438168, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r4438169);
        mpfr_init(r4438170);
        mpfr_init(r4438171);
        mpfr_init(r4438172);
        mpfr_init_set_str(r4438173, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r4438174);
        mpfr_init(r4438175);
        mpfr_init(r4438176);
        mpfr_init(r4438177);
        mpfr_init_set_str(r4438178, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r4438179);
        mpfr_init(r4438180);
        mpfr_init(r4438181);
        mpfr_init(r4438182);
        mpfr_init_set_str(r4438183, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r4438184);
        mpfr_init(r4438185);
        mpfr_init(r4438186);
        mpfr_init(r4438187);
        mpfr_init_set_str(r4438188, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r4438189);
        mpfr_init(r4438190);
        mpfr_init(r4438191);
        mpfr_init(r4438192);
        mpfr_init_set_str(r4438193, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r4438194);
        mpfr_init(r4438195);
        mpfr_init(r4438196);
        mpfr_init(r4438197);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4438164, x, MPFR_RNDN);
        mpfr_mul(r4438165, r4438164, r4438164, MPFR_RNDN);
        mpfr_mul(r4438166, r4438163, r4438165, MPFR_RNDN);
        mpfr_add(r4438167, r4438162, r4438166, MPFR_RNDN);
        ;
        mpfr_mul(r4438169, r4438165, r4438164, MPFR_RNDN);
        mpfr_mul(r4438170, r4438169, r4438164, MPFR_RNDN);
        mpfr_mul(r4438171, r4438168, r4438170, MPFR_RNDN);
        mpfr_add(r4438172, r4438167, r4438171, MPFR_RNDN);
        ;
        mpfr_mul(r4438174, r4438170, r4438164, MPFR_RNDN);
        mpfr_mul(r4438175, r4438174, r4438164, MPFR_RNDN);
        mpfr_mul(r4438176, r4438173, r4438175, MPFR_RNDN);
        mpfr_add(r4438177, r4438172, r4438176, MPFR_RNDN);
        ;
        mpfr_mul(r4438179, r4438175, r4438164, MPFR_RNDN);
        mpfr_mul(r4438180, r4438179, r4438164, MPFR_RNDN);
        mpfr_mul(r4438181, r4438178, r4438180, MPFR_RNDN);
        mpfr_add(r4438182, r4438177, r4438181, MPFR_RNDN);
        ;
        mpfr_mul(r4438184, r4438180, r4438164, MPFR_RNDN);
        mpfr_mul(r4438185, r4438184, r4438164, MPFR_RNDN);
        mpfr_mul(r4438186, r4438183, r4438185, MPFR_RNDN);
        mpfr_add(r4438187, r4438182, r4438186, MPFR_RNDN);
        ;
        mpfr_mul(r4438189, r4438185, r4438164, MPFR_RNDN);
        mpfr_mul(r4438190, r4438189, r4438164, MPFR_RNDN);
        mpfr_mul(r4438191, r4438188, r4438190, MPFR_RNDN);
        mpfr_add(r4438192, r4438187, r4438191, MPFR_RNDN);
        ;
        mpfr_mul(r4438194, r4438190, r4438164, MPFR_RNDN);
        mpfr_mul(r4438195, r4438194, r4438164, MPFR_RNDN);
        mpfr_mul(r4438196, r4438193, r4438195, MPFR_RNDN);
        mpfr_add(r4438197, r4438192, r4438196, MPFR_RNDN);
        return mpfr_get_d(r4438197, MPFR_RNDN);
}

static mpfr_t r4438198, r4438199, r4438200, r4438201, r4438202, r4438203, r4438204, r4438205, r4438206, r4438207, r4438208, r4438209, r4438210, r4438211, r4438212, r4438213, r4438214, r4438215, r4438216, r4438217, r4438218, r4438219, r4438220, r4438221, r4438222, r4438223, r4438224, r4438225, r4438226, r4438227, r4438228, r4438229, r4438230, r4438231, r4438232, r4438233;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438198, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438199, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r4438200);
        mpfr_init(r4438201);
        mpfr_init(r4438202);
        mpfr_init(r4438203);
        mpfr_init_set_str(r4438204, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r4438205);
        mpfr_init(r4438206);
        mpfr_init(r4438207);
        mpfr_init(r4438208);
        mpfr_init_set_str(r4438209, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r4438210);
        mpfr_init(r4438211);
        mpfr_init(r4438212);
        mpfr_init(r4438213);
        mpfr_init_set_str(r4438214, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r4438215);
        mpfr_init(r4438216);
        mpfr_init(r4438217);
        mpfr_init(r4438218);
        mpfr_init_set_str(r4438219, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r4438220);
        mpfr_init(r4438221);
        mpfr_init(r4438222);
        mpfr_init(r4438223);
        mpfr_init_set_str(r4438224, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r4438225);
        mpfr_init(r4438226);
        mpfr_init(r4438227);
        mpfr_init(r4438228);
        mpfr_init_set_str(r4438229, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r4438230);
        mpfr_init(r4438231);
        mpfr_init(r4438232);
        mpfr_init(r4438233);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4438200, x, MPFR_RNDN);
        mpfr_mul(r4438201, r4438200, r4438200, MPFR_RNDN);
        mpfr_mul(r4438202, r4438199, r4438201, MPFR_RNDN);
        mpfr_add(r4438203, r4438198, r4438202, MPFR_RNDN);
        ;
        mpfr_mul(r4438205, r4438201, r4438200, MPFR_RNDN);
        mpfr_mul(r4438206, r4438205, r4438200, MPFR_RNDN);
        mpfr_mul(r4438207, r4438204, r4438206, MPFR_RNDN);
        mpfr_add(r4438208, r4438203, r4438207, MPFR_RNDN);
        ;
        mpfr_mul(r4438210, r4438206, r4438200, MPFR_RNDN);
        mpfr_mul(r4438211, r4438210, r4438200, MPFR_RNDN);
        mpfr_mul(r4438212, r4438209, r4438211, MPFR_RNDN);
        mpfr_add(r4438213, r4438208, r4438212, MPFR_RNDN);
        ;
        mpfr_mul(r4438215, r4438211, r4438200, MPFR_RNDN);
        mpfr_mul(r4438216, r4438215, r4438200, MPFR_RNDN);
        mpfr_mul(r4438217, r4438214, r4438216, MPFR_RNDN);
        mpfr_add(r4438218, r4438213, r4438217, MPFR_RNDN);
        ;
        mpfr_mul(r4438220, r4438216, r4438200, MPFR_RNDN);
        mpfr_mul(r4438221, r4438220, r4438200, MPFR_RNDN);
        mpfr_mul(r4438222, r4438219, r4438221, MPFR_RNDN);
        mpfr_add(r4438223, r4438218, r4438222, MPFR_RNDN);
        ;
        mpfr_mul(r4438225, r4438221, r4438200, MPFR_RNDN);
        mpfr_mul(r4438226, r4438225, r4438200, MPFR_RNDN);
        mpfr_mul(r4438227, r4438224, r4438226, MPFR_RNDN);
        mpfr_add(r4438228, r4438223, r4438227, MPFR_RNDN);
        ;
        mpfr_mul(r4438230, r4438226, r4438200, MPFR_RNDN);
        mpfr_mul(r4438231, r4438230, r4438200, MPFR_RNDN);
        mpfr_mul(r4438232, r4438229, r4438231, MPFR_RNDN);
        mpfr_add(r4438233, r4438228, r4438232, MPFR_RNDN);
        return mpfr_get_d(r4438233, MPFR_RNDN);
}

static mpfr_t r4438234, r4438235, r4438236, r4438237, r4438238, r4438239, r4438240, r4438241, r4438242, r4438243, r4438244, r4438245, r4438246, r4438247, r4438248, r4438249, r4438250, r4438251, r4438252, r4438253, r4438254, r4438255, r4438256, r4438257, r4438258, r4438259, r4438260, r4438261, r4438262, r4438263, r4438264, r4438265, r4438266, r4438267, r4438268, r4438269;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4438234, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r4438235, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r4438236);
        mpfr_init(r4438237);
        mpfr_init(r4438238);
        mpfr_init(r4438239);
        mpfr_init_set_str(r4438240, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r4438241);
        mpfr_init(r4438242);
        mpfr_init(r4438243);
        mpfr_init(r4438244);
        mpfr_init_set_str(r4438245, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r4438246);
        mpfr_init(r4438247);
        mpfr_init(r4438248);
        mpfr_init(r4438249);
        mpfr_init_set_str(r4438250, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r4438251);
        mpfr_init(r4438252);
        mpfr_init(r4438253);
        mpfr_init(r4438254);
        mpfr_init_set_str(r4438255, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r4438256);
        mpfr_init(r4438257);
        mpfr_init(r4438258);
        mpfr_init(r4438259);
        mpfr_init_set_str(r4438260, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r4438261);
        mpfr_init(r4438262);
        mpfr_init(r4438263);
        mpfr_init(r4438264);
        mpfr_init_set_str(r4438265, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r4438266);
        mpfr_init(r4438267);
        mpfr_init(r4438268);
        mpfr_init(r4438269);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4438236, x, MPFR_RNDN);
        mpfr_mul(r4438237, r4438236, r4438236, MPFR_RNDN);
        mpfr_mul(r4438238, r4438235, r4438237, MPFR_RNDN);
        mpfr_add(r4438239, r4438234, r4438238, MPFR_RNDN);
        ;
        mpfr_mul(r4438241, r4438237, r4438236, MPFR_RNDN);
        mpfr_mul(r4438242, r4438241, r4438236, MPFR_RNDN);
        mpfr_mul(r4438243, r4438240, r4438242, MPFR_RNDN);
        mpfr_add(r4438244, r4438239, r4438243, MPFR_RNDN);
        ;
        mpfr_mul(r4438246, r4438242, r4438236, MPFR_RNDN);
        mpfr_mul(r4438247, r4438246, r4438236, MPFR_RNDN);
        mpfr_mul(r4438248, r4438245, r4438247, MPFR_RNDN);
        mpfr_add(r4438249, r4438244, r4438248, MPFR_RNDN);
        ;
        mpfr_mul(r4438251, r4438247, r4438236, MPFR_RNDN);
        mpfr_mul(r4438252, r4438251, r4438236, MPFR_RNDN);
        mpfr_mul(r4438253, r4438250, r4438252, MPFR_RNDN);
        mpfr_add(r4438254, r4438249, r4438253, MPFR_RNDN);
        ;
        mpfr_mul(r4438256, r4438252, r4438236, MPFR_RNDN);
        mpfr_mul(r4438257, r4438256, r4438236, MPFR_RNDN);
        mpfr_mul(r4438258, r4438255, r4438257, MPFR_RNDN);
        mpfr_add(r4438259, r4438254, r4438258, MPFR_RNDN);
        ;
        mpfr_mul(r4438261, r4438257, r4438236, MPFR_RNDN);
        mpfr_mul(r4438262, r4438261, r4438236, MPFR_RNDN);
        mpfr_mul(r4438263, r4438260, r4438262, MPFR_RNDN);
        mpfr_add(r4438264, r4438259, r4438263, MPFR_RNDN);
        ;
        mpfr_mul(r4438266, r4438262, r4438236, MPFR_RNDN);
        mpfr_mul(r4438267, r4438266, r4438236, MPFR_RNDN);
        mpfr_mul(r4438268, r4438265, r4438267, MPFR_RNDN);
        mpfr_add(r4438269, r4438264, r4438268, MPFR_RNDN);
        return mpfr_get_d(r4438269, MPFR_RNDN);
}

