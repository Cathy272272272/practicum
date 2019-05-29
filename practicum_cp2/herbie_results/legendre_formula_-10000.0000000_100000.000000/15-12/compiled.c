#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r7405064 = 0.225586;
        float r7405065 = -17.595703;
        float r7405066 = x;
        float r7405067 = r7405066 * r7405066;
        float r7405068 = r7405065 * r7405067;
        float r7405069 = r7405064 + r7405068;
        float r7405070 = 219.946289;
        float r7405071 = r7405067 * r7405066;
        float r7405072 = r7405071 * r7405066;
        float r7405073 = r7405070 * r7405072;
        float r7405074 = r7405069 + r7405073;
        float r7405075 = -997.089844;
        float r7405076 = r7405072 * r7405066;
        float r7405077 = r7405076 * r7405066;
        float r7405078 = r7405075 * r7405077;
        float r7405079 = r7405074 + r7405078;
        float r7405080 = 2029.790039;
        float r7405081 = r7405077 * r7405066;
        float r7405082 = r7405081 * r7405066;
        float r7405083 = r7405080 * r7405082;
        float r7405084 = r7405079 + r7405083;
        float r7405085 = -1894.470703;
        float r7405086 = r7405082 * r7405066;
        float r7405087 = r7405086 * r7405066;
        float r7405088 = r7405085 * r7405087;
        float r7405089 = r7405084 + r7405088;
        float r7405090 = 660.194336;
        float r7405091 = r7405087 * r7405066;
        float r7405092 = r7405091 * r7405066;
        float r7405093 = r7405090 * r7405092;
        float r7405094 = r7405089 + r7405093;
        return r7405094;
}

double f_id(double x) {
        double r7405095 = 0.225586;
        double r7405096 = -17.595703;
        double r7405097 = x;
        double r7405098 = r7405097 * r7405097;
        double r7405099 = r7405096 * r7405098;
        double r7405100 = r7405095 + r7405099;
        double r7405101 = 219.946289;
        double r7405102 = r7405098 * r7405097;
        double r7405103 = r7405102 * r7405097;
        double r7405104 = r7405101 * r7405103;
        double r7405105 = r7405100 + r7405104;
        double r7405106 = -997.089844;
        double r7405107 = r7405103 * r7405097;
        double r7405108 = r7405107 * r7405097;
        double r7405109 = r7405106 * r7405108;
        double r7405110 = r7405105 + r7405109;
        double r7405111 = 2029.790039;
        double r7405112 = r7405108 * r7405097;
        double r7405113 = r7405112 * r7405097;
        double r7405114 = r7405111 * r7405113;
        double r7405115 = r7405110 + r7405114;
        double r7405116 = -1894.470703;
        double r7405117 = r7405113 * r7405097;
        double r7405118 = r7405117 * r7405097;
        double r7405119 = r7405116 * r7405118;
        double r7405120 = r7405115 + r7405119;
        double r7405121 = 660.194336;
        double r7405122 = r7405118 * r7405097;
        double r7405123 = r7405122 * r7405097;
        double r7405124 = r7405121 * r7405123;
        double r7405125 = r7405120 + r7405124;
        return r7405125;
}


double f_of(float x) {
        float r7405126 = x;
        float r7405127 = r7405126 * r7405126;
        float r7405128 = 3;
        float r7405129 = pow(r7405127, r7405128);
        float r7405130 = r7405127 * r7405127;
        float r7405131 = r7405129 * r7405130;
        float r7405132 = -1894.470703;
        float r7405133 = 660.194336;
        float r7405134 = r7405133 * r7405126;
        float r7405135 = r7405126 * r7405134;
        float r7405136 = r7405132 + r7405135;
        float r7405137 = r7405131 * r7405136;
        float r7405138 = 2029.790039;
        float r7405139 = r7405138 * r7405127;
        float r7405140 = -997.089844;
        float r7405141 = r7405139 + r7405140;
        float r7405142 = r7405129 * r7405141;
        float r7405143 = 0.225586;
        float r7405144 = 4;
        float r7405145 = pow(r7405126, r7405144);
        float r7405146 = 219.946289;
        float r7405147 = r7405145 * r7405146;
        float r7405148 = -17.595703;
        float r7405149 = r7405127 * r7405148;
        float r7405150 = r7405147 + r7405149;
        float r7405151 = r7405143 + r7405150;
        float r7405152 = r7405142 + r7405151;
        float r7405153 = r7405137 + r7405152;
        return r7405153;
}

double f_od(double x) {
        double r7405154 = x;
        double r7405155 = r7405154 * r7405154;
        double r7405156 = 3;
        double r7405157 = pow(r7405155, r7405156);
        double r7405158 = r7405155 * r7405155;
        double r7405159 = r7405157 * r7405158;
        double r7405160 = -1894.470703;
        double r7405161 = 660.194336;
        double r7405162 = r7405161 * r7405154;
        double r7405163 = r7405154 * r7405162;
        double r7405164 = r7405160 + r7405163;
        double r7405165 = r7405159 * r7405164;
        double r7405166 = 2029.790039;
        double r7405167 = r7405166 * r7405155;
        double r7405168 = -997.089844;
        double r7405169 = r7405167 + r7405168;
        double r7405170 = r7405157 * r7405169;
        double r7405171 = 0.225586;
        double r7405172 = 4;
        double r7405173 = pow(r7405154, r7405172);
        double r7405174 = 219.946289;
        double r7405175 = r7405173 * r7405174;
        double r7405176 = -17.595703;
        double r7405177 = r7405155 * r7405176;
        double r7405178 = r7405175 + r7405177;
        double r7405179 = r7405171 + r7405178;
        double r7405180 = r7405170 + r7405179;
        double r7405181 = r7405165 + r7405180;
        return r7405181;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7405182, r7405183, r7405184, r7405185, r7405186, r7405187, r7405188, r7405189, r7405190, r7405191, r7405192, r7405193, r7405194, r7405195, r7405196, r7405197, r7405198, r7405199, r7405200, r7405201, r7405202, r7405203, r7405204, r7405205, r7405206, r7405207, r7405208, r7405209, r7405210, r7405211, r7405212;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7405182, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405183, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7405184);
        mpfr_init(r7405185);
        mpfr_init(r7405186);
        mpfr_init(r7405187);
        mpfr_init_set_str(r7405188, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7405189);
        mpfr_init(r7405190);
        mpfr_init(r7405191);
        mpfr_init(r7405192);
        mpfr_init_set_str(r7405193, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7405194);
        mpfr_init(r7405195);
        mpfr_init(r7405196);
        mpfr_init(r7405197);
        mpfr_init_set_str(r7405198, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7405199);
        mpfr_init(r7405200);
        mpfr_init(r7405201);
        mpfr_init(r7405202);
        mpfr_init_set_str(r7405203, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init(r7405204);
        mpfr_init(r7405205);
        mpfr_init(r7405206);
        mpfr_init(r7405207);
        mpfr_init_set_str(r7405208, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7405209);
        mpfr_init(r7405210);
        mpfr_init(r7405211);
        mpfr_init(r7405212);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7405184, x, MPFR_RNDN);
        mpfr_mul(r7405185, r7405184, r7405184, MPFR_RNDN);
        mpfr_mul(r7405186, r7405183, r7405185, MPFR_RNDN);
        mpfr_add(r7405187, r7405182, r7405186, MPFR_RNDN);
        ;
        mpfr_mul(r7405189, r7405185, r7405184, MPFR_RNDN);
        mpfr_mul(r7405190, r7405189, r7405184, MPFR_RNDN);
        mpfr_mul(r7405191, r7405188, r7405190, MPFR_RNDN);
        mpfr_add(r7405192, r7405187, r7405191, MPFR_RNDN);
        ;
        mpfr_mul(r7405194, r7405190, r7405184, MPFR_RNDN);
        mpfr_mul(r7405195, r7405194, r7405184, MPFR_RNDN);
        mpfr_mul(r7405196, r7405193, r7405195, MPFR_RNDN);
        mpfr_add(r7405197, r7405192, r7405196, MPFR_RNDN);
        ;
        mpfr_mul(r7405199, r7405195, r7405184, MPFR_RNDN);
        mpfr_mul(r7405200, r7405199, r7405184, MPFR_RNDN);
        mpfr_mul(r7405201, r7405198, r7405200, MPFR_RNDN);
        mpfr_add(r7405202, r7405197, r7405201, MPFR_RNDN);
        ;
        mpfr_mul(r7405204, r7405200, r7405184, MPFR_RNDN);
        mpfr_mul(r7405205, r7405204, r7405184, MPFR_RNDN);
        mpfr_mul(r7405206, r7405203, r7405205, MPFR_RNDN);
        mpfr_add(r7405207, r7405202, r7405206, MPFR_RNDN);
        ;
        mpfr_mul(r7405209, r7405205, r7405184, MPFR_RNDN);
        mpfr_mul(r7405210, r7405209, r7405184, MPFR_RNDN);
        mpfr_mul(r7405211, r7405208, r7405210, MPFR_RNDN);
        mpfr_add(r7405212, r7405207, r7405211, MPFR_RNDN);
        return mpfr_get_d(r7405212, MPFR_RNDN);
}

static mpfr_t r7405213, r7405214, r7405215, r7405216, r7405217, r7405218, r7405219, r7405220, r7405221, r7405222, r7405223, r7405224, r7405225, r7405226, r7405227, r7405228, r7405229, r7405230, r7405231, r7405232, r7405233, r7405234, r7405235, r7405236, r7405237, r7405238, r7405239, r7405240;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7405213);
        mpfr_init(r7405214);
        mpfr_init_set_str(r7405215, "3", 10, MPFR_RNDN);
        mpfr_init(r7405216);
        mpfr_init(r7405217);
        mpfr_init(r7405218);
        mpfr_init_set_str(r7405219, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405220, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7405221);
        mpfr_init(r7405222);
        mpfr_init(r7405223);
        mpfr_init(r7405224);
        mpfr_init_set_str(r7405225, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7405226);
        mpfr_init_set_str(r7405227, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7405228);
        mpfr_init(r7405229);
        mpfr_init_set_str(r7405230, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405231, "4", 10, MPFR_RNDN);
        mpfr_init(r7405232);
        mpfr_init_set_str(r7405233, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7405234);
        mpfr_init_set_str(r7405235, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7405236);
        mpfr_init(r7405237);
        mpfr_init(r7405238);
        mpfr_init(r7405239);
        mpfr_init(r7405240);
}

double f_fm(double x) {
        mpfr_set_d(r7405213, x, MPFR_RNDN);
        mpfr_mul(r7405214, r7405213, r7405213, MPFR_RNDN);
        ;
        mpfr_pow(r7405216, r7405214, r7405215, MPFR_RNDN);
        mpfr_mul(r7405217, r7405214, r7405214, MPFR_RNDN);
        mpfr_mul(r7405218, r7405216, r7405217, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7405221, r7405220, r7405213, MPFR_RNDN);
        mpfr_mul(r7405222, r7405213, r7405221, MPFR_RNDN);
        mpfr_add(r7405223, r7405219, r7405222, MPFR_RNDN);
        mpfr_mul(r7405224, r7405218, r7405223, MPFR_RNDN);
        ;
        mpfr_mul(r7405226, r7405225, r7405214, MPFR_RNDN);
        ;
        mpfr_add(r7405228, r7405226, r7405227, MPFR_RNDN);
        mpfr_mul(r7405229, r7405216, r7405228, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7405232, r7405213, r7405231, MPFR_RNDN);
        ;
        mpfr_mul(r7405234, r7405232, r7405233, MPFR_RNDN);
        ;
        mpfr_mul(r7405236, r7405214, r7405235, MPFR_RNDN);
        mpfr_add(r7405237, r7405234, r7405236, MPFR_RNDN);
        mpfr_add(r7405238, r7405230, r7405237, MPFR_RNDN);
        mpfr_add(r7405239, r7405229, r7405238, MPFR_RNDN);
        mpfr_add(r7405240, r7405224, r7405239, MPFR_RNDN);
        return mpfr_get_d(r7405240, MPFR_RNDN);
}

static mpfr_t r7405241, r7405242, r7405243, r7405244, r7405245, r7405246, r7405247, r7405248, r7405249, r7405250, r7405251, r7405252, r7405253, r7405254, r7405255, r7405256, r7405257, r7405258, r7405259, r7405260, r7405261, r7405262, r7405263, r7405264, r7405265, r7405266, r7405267, r7405268;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7405241);
        mpfr_init(r7405242);
        mpfr_init_set_str(r7405243, "3", 10, MPFR_RNDN);
        mpfr_init(r7405244);
        mpfr_init(r7405245);
        mpfr_init(r7405246);
        mpfr_init_set_str(r7405247, "-1894.470703", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405248, "660.194336", 10, MPFR_RNDN);
        mpfr_init(r7405249);
        mpfr_init(r7405250);
        mpfr_init(r7405251);
        mpfr_init(r7405252);
        mpfr_init_set_str(r7405253, "2029.790039", 10, MPFR_RNDN);
        mpfr_init(r7405254);
        mpfr_init_set_str(r7405255, "-997.089844", 10, MPFR_RNDN);
        mpfr_init(r7405256);
        mpfr_init(r7405257);
        mpfr_init_set_str(r7405258, "0.225586", 10, MPFR_RNDN);
        mpfr_init_set_str(r7405259, "4", 10, MPFR_RNDN);
        mpfr_init(r7405260);
        mpfr_init_set_str(r7405261, "219.946289", 10, MPFR_RNDN);
        mpfr_init(r7405262);
        mpfr_init_set_str(r7405263, "-17.595703", 10, MPFR_RNDN);
        mpfr_init(r7405264);
        mpfr_init(r7405265);
        mpfr_init(r7405266);
        mpfr_init(r7405267);
        mpfr_init(r7405268);
}

double f_dm(double x) {
        mpfr_set_d(r7405241, x, MPFR_RNDN);
        mpfr_mul(r7405242, r7405241, r7405241, MPFR_RNDN);
        ;
        mpfr_pow(r7405244, r7405242, r7405243, MPFR_RNDN);
        mpfr_mul(r7405245, r7405242, r7405242, MPFR_RNDN);
        mpfr_mul(r7405246, r7405244, r7405245, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7405249, r7405248, r7405241, MPFR_RNDN);
        mpfr_mul(r7405250, r7405241, r7405249, MPFR_RNDN);
        mpfr_add(r7405251, r7405247, r7405250, MPFR_RNDN);
        mpfr_mul(r7405252, r7405246, r7405251, MPFR_RNDN);
        ;
        mpfr_mul(r7405254, r7405253, r7405242, MPFR_RNDN);
        ;
        mpfr_add(r7405256, r7405254, r7405255, MPFR_RNDN);
        mpfr_mul(r7405257, r7405244, r7405256, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7405260, r7405241, r7405259, MPFR_RNDN);
        ;
        mpfr_mul(r7405262, r7405260, r7405261, MPFR_RNDN);
        ;
        mpfr_mul(r7405264, r7405242, r7405263, MPFR_RNDN);
        mpfr_add(r7405265, r7405262, r7405264, MPFR_RNDN);
        mpfr_add(r7405266, r7405258, r7405265, MPFR_RNDN);
        mpfr_add(r7405267, r7405257, r7405266, MPFR_RNDN);
        mpfr_add(r7405268, r7405252, r7405267, MPFR_RNDN);
        return mpfr_get_d(r7405268, MPFR_RNDN);
}

