#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r7030103 = 1680.0;
        float r7030104 = -13440.0;
        float r7030105 = x;
        float r7030106 = r7030105 * r7030105;
        float r7030107 = r7030104 * r7030106;
        float r7030108 = r7030103 + r7030107;
        float r7030109 = 13440.0;
        float r7030110 = r7030106 * r7030105;
        float r7030111 = r7030110 * r7030105;
        float r7030112 = r7030109 * r7030111;
        float r7030113 = r7030108 + r7030112;
        float r7030114 = -3584.0;
        float r7030115 = r7030111 * r7030105;
        float r7030116 = r7030115 * r7030105;
        float r7030117 = r7030114 * r7030116;
        float r7030118 = r7030113 + r7030117;
        float r7030119 = 256.0;
        float r7030120 = r7030116 * r7030105;
        float r7030121 = r7030120 * r7030105;
        float r7030122 = r7030119 * r7030121;
        float r7030123 = r7030118 + r7030122;
        return r7030123;
}

double f_id(double x) {
        double r7030124 = 1680.0;
        double r7030125 = -13440.0;
        double r7030126 = x;
        double r7030127 = r7030126 * r7030126;
        double r7030128 = r7030125 * r7030127;
        double r7030129 = r7030124 + r7030128;
        double r7030130 = 13440.0;
        double r7030131 = r7030127 * r7030126;
        double r7030132 = r7030131 * r7030126;
        double r7030133 = r7030130 * r7030132;
        double r7030134 = r7030129 + r7030133;
        double r7030135 = -3584.0;
        double r7030136 = r7030132 * r7030126;
        double r7030137 = r7030136 * r7030126;
        double r7030138 = r7030135 * r7030137;
        double r7030139 = r7030134 + r7030138;
        double r7030140 = 256.0;
        double r7030141 = r7030137 * r7030126;
        double r7030142 = r7030141 * r7030126;
        double r7030143 = r7030140 * r7030142;
        double r7030144 = r7030139 + r7030143;
        return r7030144;
}


double f_of(float x) {
        float r7030145 = x;
        float r7030146 = 13440.0;
        float r7030147 = r7030145 * r7030146;
        float r7030148 = 3;
        float r7030149 = pow(r7030145, r7030148);
        float r7030150 = r7030147 * r7030149;
        float r7030151 = r7030145 * r7030145;
        float r7030152 = -13440.0;
        float r7030153 = r7030151 * r7030152;
        float r7030154 = r7030150 + r7030153;
        float r7030155 = 1680.0;
        float r7030156 = r7030154 + r7030155;
        float r7030157 = r7030149 * r7030149;
        float r7030158 = -3584.0;
        float r7030159 = 256.0;
        float r7030160 = r7030159 * r7030145;
        float r7030161 = r7030160 * r7030145;
        float r7030162 = r7030158 + r7030161;
        float r7030163 = r7030157 * r7030162;
        float r7030164 = r7030156 + r7030163;
        return r7030164;
}

double f_od(double x) {
        double r7030165 = x;
        double r7030166 = 13440.0;
        double r7030167 = r7030165 * r7030166;
        double r7030168 = 3;
        double r7030169 = pow(r7030165, r7030168);
        double r7030170 = r7030167 * r7030169;
        double r7030171 = r7030165 * r7030165;
        double r7030172 = -13440.0;
        double r7030173 = r7030171 * r7030172;
        double r7030174 = r7030170 + r7030173;
        double r7030175 = 1680.0;
        double r7030176 = r7030174 + r7030175;
        double r7030177 = r7030169 * r7030169;
        double r7030178 = -3584.0;
        double r7030179 = 256.0;
        double r7030180 = r7030179 * r7030165;
        double r7030181 = r7030180 * r7030165;
        double r7030182 = r7030178 + r7030181;
        double r7030183 = r7030177 * r7030182;
        double r7030184 = r7030176 + r7030183;
        return r7030184;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7030185, r7030186, r7030187, r7030188, r7030189, r7030190, r7030191, r7030192, r7030193, r7030194, r7030195, r7030196, r7030197, r7030198, r7030199, r7030200, r7030201, r7030202, r7030203, r7030204, r7030205;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7030185, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030186, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7030187);
        mpfr_init(r7030188);
        mpfr_init(r7030189);
        mpfr_init(r7030190);
        mpfr_init_set_str(r7030191, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7030192);
        mpfr_init(r7030193);
        mpfr_init(r7030194);
        mpfr_init(r7030195);
        mpfr_init_set_str(r7030196, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r7030197);
        mpfr_init(r7030198);
        mpfr_init(r7030199);
        mpfr_init(r7030200);
        mpfr_init_set_str(r7030201, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7030202);
        mpfr_init(r7030203);
        mpfr_init(r7030204);
        mpfr_init(r7030205);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7030187, x, MPFR_RNDN);
        mpfr_mul(r7030188, r7030187, r7030187, MPFR_RNDN);
        mpfr_mul(r7030189, r7030186, r7030188, MPFR_RNDN);
        mpfr_add(r7030190, r7030185, r7030189, MPFR_RNDN);
        ;
        mpfr_mul(r7030192, r7030188, r7030187, MPFR_RNDN);
        mpfr_mul(r7030193, r7030192, r7030187, MPFR_RNDN);
        mpfr_mul(r7030194, r7030191, r7030193, MPFR_RNDN);
        mpfr_add(r7030195, r7030190, r7030194, MPFR_RNDN);
        ;
        mpfr_mul(r7030197, r7030193, r7030187, MPFR_RNDN);
        mpfr_mul(r7030198, r7030197, r7030187, MPFR_RNDN);
        mpfr_mul(r7030199, r7030196, r7030198, MPFR_RNDN);
        mpfr_add(r7030200, r7030195, r7030199, MPFR_RNDN);
        ;
        mpfr_mul(r7030202, r7030198, r7030187, MPFR_RNDN);
        mpfr_mul(r7030203, r7030202, r7030187, MPFR_RNDN);
        mpfr_mul(r7030204, r7030201, r7030203, MPFR_RNDN);
        mpfr_add(r7030205, r7030200, r7030204, MPFR_RNDN);
        return mpfr_get_d(r7030205, MPFR_RNDN);
}

static mpfr_t r7030206, r7030207, r7030208, r7030209, r7030210, r7030211, r7030212, r7030213, r7030214, r7030215, r7030216, r7030217, r7030218, r7030219, r7030220, r7030221, r7030222, r7030223, r7030224, r7030225;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7030206);
        mpfr_init_set_str(r7030207, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7030208);
        mpfr_init_set_str(r7030209, "3", 10, MPFR_RNDN);
        mpfr_init(r7030210);
        mpfr_init(r7030211);
        mpfr_init(r7030212);
        mpfr_init_set_str(r7030213, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7030214);
        mpfr_init(r7030215);
        mpfr_init_set_str(r7030216, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r7030217);
        mpfr_init(r7030218);
        mpfr_init_set_str(r7030219, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030220, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7030221);
        mpfr_init(r7030222);
        mpfr_init(r7030223);
        mpfr_init(r7030224);
        mpfr_init(r7030225);
}

double f_fm(double x) {
        mpfr_set_d(r7030206, x, MPFR_RNDN);
        ;
        mpfr_mul(r7030208, r7030206, r7030207, MPFR_RNDN);
        ;
        mpfr_pow(r7030210, r7030206, r7030209, MPFR_RNDN);
        mpfr_mul(r7030211, r7030208, r7030210, MPFR_RNDN);
        mpfr_mul(r7030212, r7030206, r7030206, MPFR_RNDN);
        ;
        mpfr_mul(r7030214, r7030212, r7030213, MPFR_RNDN);
        mpfr_add(r7030215, r7030211, r7030214, MPFR_RNDN);
        ;
        mpfr_add(r7030217, r7030215, r7030216, MPFR_RNDN);
        mpfr_mul(r7030218, r7030210, r7030210, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7030221, r7030220, r7030206, MPFR_RNDN);
        mpfr_mul(r7030222, r7030221, r7030206, MPFR_RNDN);
        mpfr_add(r7030223, r7030219, r7030222, MPFR_RNDN);
        mpfr_mul(r7030224, r7030218, r7030223, MPFR_RNDN);
        mpfr_add(r7030225, r7030217, r7030224, MPFR_RNDN);
        return mpfr_get_d(r7030225, MPFR_RNDN);
}

static mpfr_t r7030226, r7030227, r7030228, r7030229, r7030230, r7030231, r7030232, r7030233, r7030234, r7030235, r7030236, r7030237, r7030238, r7030239, r7030240, r7030241, r7030242, r7030243, r7030244, r7030245;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7030226);
        mpfr_init_set_str(r7030227, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r7030228);
        mpfr_init_set_str(r7030229, "3", 10, MPFR_RNDN);
        mpfr_init(r7030230);
        mpfr_init(r7030231);
        mpfr_init(r7030232);
        mpfr_init_set_str(r7030233, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r7030234);
        mpfr_init(r7030235);
        mpfr_init_set_str(r7030236, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r7030237);
        mpfr_init(r7030238);
        mpfr_init_set_str(r7030239, "-3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7030240, "256.0", 10, MPFR_RNDN);
        mpfr_init(r7030241);
        mpfr_init(r7030242);
        mpfr_init(r7030243);
        mpfr_init(r7030244);
        mpfr_init(r7030245);
}

double f_dm(double x) {
        mpfr_set_d(r7030226, x, MPFR_RNDN);
        ;
        mpfr_mul(r7030228, r7030226, r7030227, MPFR_RNDN);
        ;
        mpfr_pow(r7030230, r7030226, r7030229, MPFR_RNDN);
        mpfr_mul(r7030231, r7030228, r7030230, MPFR_RNDN);
        mpfr_mul(r7030232, r7030226, r7030226, MPFR_RNDN);
        ;
        mpfr_mul(r7030234, r7030232, r7030233, MPFR_RNDN);
        mpfr_add(r7030235, r7030231, r7030234, MPFR_RNDN);
        ;
        mpfr_add(r7030237, r7030235, r7030236, MPFR_RNDN);
        mpfr_mul(r7030238, r7030230, r7030230, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7030241, r7030240, r7030226, MPFR_RNDN);
        mpfr_mul(r7030242, r7030241, r7030226, MPFR_RNDN);
        mpfr_add(r7030243, r7030239, r7030242, MPFR_RNDN);
        mpfr_mul(r7030244, r7030238, r7030243, MPFR_RNDN);
        mpfr_add(r7030245, r7030237, r7030244, MPFR_RNDN);
        return mpfr_get_d(r7030245, MPFR_RNDN);
}

