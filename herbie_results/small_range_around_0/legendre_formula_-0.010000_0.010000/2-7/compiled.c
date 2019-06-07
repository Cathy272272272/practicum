#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r4485101 = -2.1875;
        float r4485102 = x;
        float r4485103 = r4485101 * r4485102;
        float r4485104 = 19.6875;
        float r4485105 = r4485102 * r4485102;
        float r4485106 = r4485105 * r4485102;
        float r4485107 = r4485104 * r4485106;
        float r4485108 = r4485103 + r4485107;
        float r4485109 = -43.3125;
        float r4485110 = r4485106 * r4485102;
        float r4485111 = r4485110 * r4485102;
        float r4485112 = r4485109 * r4485111;
        float r4485113 = r4485108 + r4485112;
        float r4485114 = 26.8125;
        float r4485115 = r4485111 * r4485102;
        float r4485116 = r4485115 * r4485102;
        float r4485117 = r4485114 * r4485116;
        float r4485118 = r4485113 + r4485117;
        return r4485118;
}

double f_id(double x) {
        double r4485119 = -2.1875;
        double r4485120 = x;
        double r4485121 = r4485119 * r4485120;
        double r4485122 = 19.6875;
        double r4485123 = r4485120 * r4485120;
        double r4485124 = r4485123 * r4485120;
        double r4485125 = r4485122 * r4485124;
        double r4485126 = r4485121 + r4485125;
        double r4485127 = -43.3125;
        double r4485128 = r4485124 * r4485120;
        double r4485129 = r4485128 * r4485120;
        double r4485130 = r4485127 * r4485129;
        double r4485131 = r4485126 + r4485130;
        double r4485132 = 26.8125;
        double r4485133 = r4485129 * r4485120;
        double r4485134 = r4485133 * r4485120;
        double r4485135 = r4485132 * r4485134;
        double r4485136 = r4485131 + r4485135;
        return r4485136;
}


double f_of(float x) {
        float r4485137 = x;
        float r4485138 = r4485137 * r4485137;
        float r4485139 = r4485138 * r4485138;
        float r4485140 = 26.8125;
        float r4485141 = r4485140 * r4485137;
        float r4485142 = r4485138 * r4485141;
        float r4485143 = -43.3125;
        float r4485144 = r4485137 * r4485143;
        float r4485145 = r4485142 + r4485144;
        float r4485146 = r4485139 * r4485145;
        float r4485147 = 19.6875;
        float r4485148 = r4485147 * r4485137;
        float r4485149 = r4485148 * r4485137;
        float r4485150 = -2.1875;
        float r4485151 = r4485149 + r4485150;
        float r4485152 = r4485137 * r4485151;
        float r4485153 = r4485146 + r4485152;
        return r4485153;
}

double f_od(double x) {
        double r4485154 = x;
        double r4485155 = r4485154 * r4485154;
        double r4485156 = r4485155 * r4485155;
        double r4485157 = 26.8125;
        double r4485158 = r4485157 * r4485154;
        double r4485159 = r4485155 * r4485158;
        double r4485160 = -43.3125;
        double r4485161 = r4485154 * r4485160;
        double r4485162 = r4485159 + r4485161;
        double r4485163 = r4485156 * r4485162;
        double r4485164 = 19.6875;
        double r4485165 = r4485164 * r4485154;
        double r4485166 = r4485165 * r4485154;
        double r4485167 = -2.1875;
        double r4485168 = r4485166 + r4485167;
        double r4485169 = r4485154 * r4485168;
        double r4485170 = r4485163 + r4485169;
        return r4485170;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4485171, r4485172, r4485173, r4485174, r4485175, r4485176, r4485177, r4485178, r4485179, r4485180, r4485181, r4485182, r4485183, r4485184, r4485185, r4485186, r4485187, r4485188;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4485171, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4485172);
        mpfr_init(r4485173);
        mpfr_init_set_str(r4485174, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4485175);
        mpfr_init(r4485176);
        mpfr_init(r4485177);
        mpfr_init(r4485178);
        mpfr_init_set_str(r4485179, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4485180);
        mpfr_init(r4485181);
        mpfr_init(r4485182);
        mpfr_init(r4485183);
        mpfr_init_set_str(r4485184, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4485185);
        mpfr_init(r4485186);
        mpfr_init(r4485187);
        mpfr_init(r4485188);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4485172, x, MPFR_RNDN);
        mpfr_mul(r4485173, r4485171, r4485172, MPFR_RNDN);
        ;
        mpfr_mul(r4485175, r4485172, r4485172, MPFR_RNDN);
        mpfr_mul(r4485176, r4485175, r4485172, MPFR_RNDN);
        mpfr_mul(r4485177, r4485174, r4485176, MPFR_RNDN);
        mpfr_add(r4485178, r4485173, r4485177, MPFR_RNDN);
        ;
        mpfr_mul(r4485180, r4485176, r4485172, MPFR_RNDN);
        mpfr_mul(r4485181, r4485180, r4485172, MPFR_RNDN);
        mpfr_mul(r4485182, r4485179, r4485181, MPFR_RNDN);
        mpfr_add(r4485183, r4485178, r4485182, MPFR_RNDN);
        ;
        mpfr_mul(r4485185, r4485181, r4485172, MPFR_RNDN);
        mpfr_mul(r4485186, r4485185, r4485172, MPFR_RNDN);
        mpfr_mul(r4485187, r4485184, r4485186, MPFR_RNDN);
        mpfr_add(r4485188, r4485183, r4485187, MPFR_RNDN);
        return mpfr_get_d(r4485188, MPFR_RNDN);
}

static mpfr_t r4485189, r4485190, r4485191, r4485192, r4485193, r4485194, r4485195, r4485196, r4485197, r4485198, r4485199, r4485200, r4485201, r4485202, r4485203, r4485204, r4485205;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r4485189);
        mpfr_init(r4485190);
        mpfr_init(r4485191);
        mpfr_init_set_str(r4485192, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4485193);
        mpfr_init(r4485194);
        mpfr_init_set_str(r4485195, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4485196);
        mpfr_init(r4485197);
        mpfr_init(r4485198);
        mpfr_init_set_str(r4485199, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4485200);
        mpfr_init(r4485201);
        mpfr_init_set_str(r4485202, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4485203);
        mpfr_init(r4485204);
        mpfr_init(r4485205);
}

double f_fm(double x) {
        mpfr_set_d(r4485189, x, MPFR_RNDN);
        mpfr_mul(r4485190, r4485189, r4485189, MPFR_RNDN);
        mpfr_mul(r4485191, r4485190, r4485190, MPFR_RNDN);
        ;
        mpfr_mul(r4485193, r4485192, r4485189, MPFR_RNDN);
        mpfr_mul(r4485194, r4485190, r4485193, MPFR_RNDN);
        ;
        mpfr_mul(r4485196, r4485189, r4485195, MPFR_RNDN);
        mpfr_add(r4485197, r4485194, r4485196, MPFR_RNDN);
        mpfr_mul(r4485198, r4485191, r4485197, MPFR_RNDN);
        ;
        mpfr_mul(r4485200, r4485199, r4485189, MPFR_RNDN);
        mpfr_mul(r4485201, r4485200, r4485189, MPFR_RNDN);
        ;
        mpfr_add(r4485203, r4485201, r4485202, MPFR_RNDN);
        mpfr_mul(r4485204, r4485189, r4485203, MPFR_RNDN);
        mpfr_add(r4485205, r4485198, r4485204, MPFR_RNDN);
        return mpfr_get_d(r4485205, MPFR_RNDN);
}

static mpfr_t r4485206, r4485207, r4485208, r4485209, r4485210, r4485211, r4485212, r4485213, r4485214, r4485215, r4485216, r4485217, r4485218, r4485219, r4485220, r4485221, r4485222;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r4485206);
        mpfr_init(r4485207);
        mpfr_init(r4485208);
        mpfr_init_set_str(r4485209, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r4485210);
        mpfr_init(r4485211);
        mpfr_init_set_str(r4485212, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r4485213);
        mpfr_init(r4485214);
        mpfr_init(r4485215);
        mpfr_init_set_str(r4485216, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r4485217);
        mpfr_init(r4485218);
        mpfr_init_set_str(r4485219, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r4485220);
        mpfr_init(r4485221);
        mpfr_init(r4485222);
}

double f_dm(double x) {
        mpfr_set_d(r4485206, x, MPFR_RNDN);
        mpfr_mul(r4485207, r4485206, r4485206, MPFR_RNDN);
        mpfr_mul(r4485208, r4485207, r4485207, MPFR_RNDN);
        ;
        mpfr_mul(r4485210, r4485209, r4485206, MPFR_RNDN);
        mpfr_mul(r4485211, r4485207, r4485210, MPFR_RNDN);
        ;
        mpfr_mul(r4485213, r4485206, r4485212, MPFR_RNDN);
        mpfr_add(r4485214, r4485211, r4485213, MPFR_RNDN);
        mpfr_mul(r4485215, r4485208, r4485214, MPFR_RNDN);
        ;
        mpfr_mul(r4485217, r4485216, r4485206, MPFR_RNDN);
        mpfr_mul(r4485218, r4485217, r4485206, MPFR_RNDN);
        ;
        mpfr_add(r4485220, r4485218, r4485219, MPFR_RNDN);
        mpfr_mul(r4485221, r4485206, r4485220, MPFR_RNDN);
        mpfr_add(r4485222, r4485215, r4485221, MPFR_RNDN);
        return mpfr_get_d(r4485222, MPFR_RNDN);
}

