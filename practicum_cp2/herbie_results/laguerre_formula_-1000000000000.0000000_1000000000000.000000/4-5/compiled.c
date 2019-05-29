#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9582098 = 1.0;
        float r9582099 = -5.0;
        float r9582100 = x;
        float r9582101 = r9582099 * r9582100;
        float r9582102 = r9582098 + r9582101;
        float r9582103 = 5.0;
        float r9582104 = r9582100 * r9582100;
        float r9582105 = r9582103 * r9582104;
        float r9582106 = r9582102 + r9582105;
        float r9582107 = -1.666667;
        float r9582108 = r9582104 * r9582100;
        float r9582109 = r9582107 * r9582108;
        float r9582110 = r9582106 + r9582109;
        float r9582111 = 0.208333;
        float r9582112 = r9582108 * r9582100;
        float r9582113 = r9582111 * r9582112;
        float r9582114 = r9582110 + r9582113;
        float r9582115 = -0.008333;
        float r9582116 = r9582112 * r9582100;
        float r9582117 = r9582115 * r9582116;
        float r9582118 = r9582114 + r9582117;
        return r9582118;
}

double f_id(double x) {
        double r9582119 = 1.0;
        double r9582120 = -5.0;
        double r9582121 = x;
        double r9582122 = r9582120 * r9582121;
        double r9582123 = r9582119 + r9582122;
        double r9582124 = 5.0;
        double r9582125 = r9582121 * r9582121;
        double r9582126 = r9582124 * r9582125;
        double r9582127 = r9582123 + r9582126;
        double r9582128 = -1.666667;
        double r9582129 = r9582125 * r9582121;
        double r9582130 = r9582128 * r9582129;
        double r9582131 = r9582127 + r9582130;
        double r9582132 = 0.208333;
        double r9582133 = r9582129 * r9582121;
        double r9582134 = r9582132 * r9582133;
        double r9582135 = r9582131 + r9582134;
        double r9582136 = -0.008333;
        double r9582137 = r9582133 * r9582121;
        double r9582138 = r9582136 * r9582137;
        double r9582139 = r9582135 + r9582138;
        return r9582139;
}


double f_of(float x) {
        float r9582140 = 1.0;
        float r9582141 = -5.0;
        float r9582142 = x;
        float r9582143 = r9582141 * r9582142;
        float r9582144 = r9582140 + r9582143;
        float r9582145 = 5.0;
        float r9582146 = r9582142 * r9582142;
        float r9582147 = r9582145 * r9582146;
        float r9582148 = log(r9582147);
        float r9582149 = exp(r9582148);
        float r9582150 = r9582144 + r9582149;
        float r9582151 = -1.666667;
        float r9582152 = r9582146 * r9582142;
        float r9582153 = r9582151 * r9582152;
        float r9582154 = r9582150 + r9582153;
        float r9582155 = 0.208333;
        float r9582156 = r9582152 * r9582142;
        float r9582157 = r9582155 * r9582156;
        float r9582158 = r9582154 + r9582157;
        float r9582159 = -0.008333;
        float r9582160 = r9582156 * r9582142;
        float r9582161 = r9582159 * r9582160;
        float r9582162 = r9582158 + r9582161;
        return r9582162;
}

double f_od(double x) {
        double r9582163 = 1.0;
        double r9582164 = -5.0;
        double r9582165 = x;
        double r9582166 = r9582164 * r9582165;
        double r9582167 = r9582163 + r9582166;
        double r9582168 = 5.0;
        double r9582169 = r9582165 * r9582165;
        double r9582170 = r9582168 * r9582169;
        double r9582171 = log(r9582170);
        double r9582172 = exp(r9582171);
        double r9582173 = r9582167 + r9582172;
        double r9582174 = -1.666667;
        double r9582175 = r9582169 * r9582165;
        double r9582176 = r9582174 * r9582175;
        double r9582177 = r9582173 + r9582176;
        double r9582178 = 0.208333;
        double r9582179 = r9582175 * r9582165;
        double r9582180 = r9582178 * r9582179;
        double r9582181 = r9582177 + r9582180;
        double r9582182 = -0.008333;
        double r9582183 = r9582179 * r9582165;
        double r9582184 = r9582182 * r9582183;
        double r9582185 = r9582181 + r9582184;
        return r9582185;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9582186, r9582187, r9582188, r9582189, r9582190, r9582191, r9582192, r9582193, r9582194, r9582195, r9582196, r9582197, r9582198, r9582199, r9582200, r9582201, r9582202, r9582203, r9582204, r9582205, r9582206;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582186, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582187, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9582188);
        mpfr_init(r9582189);
        mpfr_init(r9582190);
        mpfr_init_set_str(r9582191, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9582192);
        mpfr_init(r9582193);
        mpfr_init(r9582194);
        mpfr_init_set_str(r9582195, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9582196);
        mpfr_init(r9582197);
        mpfr_init(r9582198);
        mpfr_init_set_str(r9582199, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9582200);
        mpfr_init(r9582201);
        mpfr_init(r9582202);
        mpfr_init_set_str(r9582203, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9582204);
        mpfr_init(r9582205);
        mpfr_init(r9582206);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9582188, x, MPFR_RNDN);
        mpfr_mul(r9582189, r9582187, r9582188, MPFR_RNDN);
        mpfr_add(r9582190, r9582186, r9582189, MPFR_RNDN);
        ;
        mpfr_mul(r9582192, r9582188, r9582188, MPFR_RNDN);
        mpfr_mul(r9582193, r9582191, r9582192, MPFR_RNDN);
        mpfr_add(r9582194, r9582190, r9582193, MPFR_RNDN);
        ;
        mpfr_mul(r9582196, r9582192, r9582188, MPFR_RNDN);
        mpfr_mul(r9582197, r9582195, r9582196, MPFR_RNDN);
        mpfr_add(r9582198, r9582194, r9582197, MPFR_RNDN);
        ;
        mpfr_mul(r9582200, r9582196, r9582188, MPFR_RNDN);
        mpfr_mul(r9582201, r9582199, r9582200, MPFR_RNDN);
        mpfr_add(r9582202, r9582198, r9582201, MPFR_RNDN);
        ;
        mpfr_mul(r9582204, r9582200, r9582188, MPFR_RNDN);
        mpfr_mul(r9582205, r9582203, r9582204, MPFR_RNDN);
        mpfr_add(r9582206, r9582202, r9582205, MPFR_RNDN);
        return mpfr_get_d(r9582206, MPFR_RNDN);
}

static mpfr_t r9582207, r9582208, r9582209, r9582210, r9582211, r9582212, r9582213, r9582214, r9582215, r9582216, r9582217, r9582218, r9582219, r9582220, r9582221, r9582222, r9582223, r9582224, r9582225, r9582226, r9582227, r9582228, r9582229;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582207, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582208, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9582209);
        mpfr_init(r9582210);
        mpfr_init(r9582211);
        mpfr_init_set_str(r9582212, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9582213);
        mpfr_init(r9582214);
        mpfr_init(r9582215);
        mpfr_init(r9582216);
        mpfr_init(r9582217);
        mpfr_init_set_str(r9582218, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9582219);
        mpfr_init(r9582220);
        mpfr_init(r9582221);
        mpfr_init_set_str(r9582222, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9582223);
        mpfr_init(r9582224);
        mpfr_init(r9582225);
        mpfr_init_set_str(r9582226, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9582227);
        mpfr_init(r9582228);
        mpfr_init(r9582229);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9582209, x, MPFR_RNDN);
        mpfr_mul(r9582210, r9582208, r9582209, MPFR_RNDN);
        mpfr_add(r9582211, r9582207, r9582210, MPFR_RNDN);
        ;
        mpfr_mul(r9582213, r9582209, r9582209, MPFR_RNDN);
        mpfr_mul(r9582214, r9582212, r9582213, MPFR_RNDN);
        mpfr_log(r9582215, r9582214, MPFR_RNDN);
        mpfr_exp(r9582216, r9582215, MPFR_RNDN);
        mpfr_add(r9582217, r9582211, r9582216, MPFR_RNDN);
        ;
        mpfr_mul(r9582219, r9582213, r9582209, MPFR_RNDN);
        mpfr_mul(r9582220, r9582218, r9582219, MPFR_RNDN);
        mpfr_add(r9582221, r9582217, r9582220, MPFR_RNDN);
        ;
        mpfr_mul(r9582223, r9582219, r9582209, MPFR_RNDN);
        mpfr_mul(r9582224, r9582222, r9582223, MPFR_RNDN);
        mpfr_add(r9582225, r9582221, r9582224, MPFR_RNDN);
        ;
        mpfr_mul(r9582227, r9582223, r9582209, MPFR_RNDN);
        mpfr_mul(r9582228, r9582226, r9582227, MPFR_RNDN);
        mpfr_add(r9582229, r9582225, r9582228, MPFR_RNDN);
        return mpfr_get_d(r9582229, MPFR_RNDN);
}

static mpfr_t r9582230, r9582231, r9582232, r9582233, r9582234, r9582235, r9582236, r9582237, r9582238, r9582239, r9582240, r9582241, r9582242, r9582243, r9582244, r9582245, r9582246, r9582247, r9582248, r9582249, r9582250, r9582251, r9582252;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9582230, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9582231, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9582232);
        mpfr_init(r9582233);
        mpfr_init(r9582234);
        mpfr_init_set_str(r9582235, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9582236);
        mpfr_init(r9582237);
        mpfr_init(r9582238);
        mpfr_init(r9582239);
        mpfr_init(r9582240);
        mpfr_init_set_str(r9582241, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9582242);
        mpfr_init(r9582243);
        mpfr_init(r9582244);
        mpfr_init_set_str(r9582245, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9582246);
        mpfr_init(r9582247);
        mpfr_init(r9582248);
        mpfr_init_set_str(r9582249, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9582250);
        mpfr_init(r9582251);
        mpfr_init(r9582252);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9582232, x, MPFR_RNDN);
        mpfr_mul(r9582233, r9582231, r9582232, MPFR_RNDN);
        mpfr_add(r9582234, r9582230, r9582233, MPFR_RNDN);
        ;
        mpfr_mul(r9582236, r9582232, r9582232, MPFR_RNDN);
        mpfr_mul(r9582237, r9582235, r9582236, MPFR_RNDN);
        mpfr_log(r9582238, r9582237, MPFR_RNDN);
        mpfr_exp(r9582239, r9582238, MPFR_RNDN);
        mpfr_add(r9582240, r9582234, r9582239, MPFR_RNDN);
        ;
        mpfr_mul(r9582242, r9582236, r9582232, MPFR_RNDN);
        mpfr_mul(r9582243, r9582241, r9582242, MPFR_RNDN);
        mpfr_add(r9582244, r9582240, r9582243, MPFR_RNDN);
        ;
        mpfr_mul(r9582246, r9582242, r9582232, MPFR_RNDN);
        mpfr_mul(r9582247, r9582245, r9582246, MPFR_RNDN);
        mpfr_add(r9582248, r9582244, r9582247, MPFR_RNDN);
        ;
        mpfr_mul(r9582250, r9582246, r9582232, MPFR_RNDN);
        mpfr_mul(r9582251, r9582249, r9582250, MPFR_RNDN);
        mpfr_add(r9582252, r9582248, r9582251, MPFR_RNDN);
        return mpfr_get_d(r9582252, MPFR_RNDN);
}

