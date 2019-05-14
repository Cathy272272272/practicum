#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10036096 = 1.875;
        float r10036097 = x;
        float r10036098 = r10036096 * r10036097;
        float r10036099 = -8.75;
        float r10036100 = r10036097 * r10036097;
        float r10036101 = r10036100 * r10036097;
        float r10036102 = r10036099 * r10036101;
        float r10036103 = r10036098 + r10036102;
        float r10036104 = 7.875;
        float r10036105 = r10036101 * r10036097;
        float r10036106 = r10036105 * r10036097;
        float r10036107 = r10036104 * r10036106;
        float r10036108 = r10036103 + r10036107;
        return r10036108;
}

double f_id(double x) {
        double r10036109 = 1.875;
        double r10036110 = x;
        double r10036111 = r10036109 * r10036110;
        double r10036112 = -8.75;
        double r10036113 = r10036110 * r10036110;
        double r10036114 = r10036113 * r10036110;
        double r10036115 = r10036112 * r10036114;
        double r10036116 = r10036111 + r10036115;
        double r10036117 = 7.875;
        double r10036118 = r10036114 * r10036110;
        double r10036119 = r10036118 * r10036110;
        double r10036120 = r10036117 * r10036119;
        double r10036121 = r10036116 + r10036120;
        return r10036121;
}


double f_of(float x) {
        float r10036122 = 1.875;
        float r10036123 = x;
        float r10036124 = r10036122 * r10036123;
        float r10036125 = -8.75;
        float r10036126 = r10036123 * r10036123;
        float r10036127 = r10036126 * r10036123;
        float r10036128 = r10036125 * r10036127;
        float r10036129 = r10036124 + r10036128;
        float r10036130 = 7.875;
        float r10036131 = r10036127 * r10036123;
        float r10036132 = r10036131 * r10036123;
        float r10036133 = r10036130 * r10036132;
        float r10036134 = r10036129 + r10036133;
        return r10036134;
}

double f_od(double x) {
        double r10036135 = 1.875;
        double r10036136 = x;
        double r10036137 = r10036135 * r10036136;
        double r10036138 = -8.75;
        double r10036139 = r10036136 * r10036136;
        double r10036140 = r10036139 * r10036136;
        double r10036141 = r10036138 * r10036140;
        double r10036142 = r10036137 + r10036141;
        double r10036143 = 7.875;
        double r10036144 = r10036140 * r10036136;
        double r10036145 = r10036144 * r10036136;
        double r10036146 = r10036143 * r10036145;
        double r10036147 = r10036142 + r10036146;
        return r10036147;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10036148, r10036149, r10036150, r10036151, r10036152, r10036153, r10036154, r10036155, r10036156, r10036157, r10036158, r10036159, r10036160;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10036148, "1.875", 10, MPFR_RNDN);
        mpfr_init(r10036149);
        mpfr_init(r10036150);
        mpfr_init_set_str(r10036151, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r10036152);
        mpfr_init(r10036153);
        mpfr_init(r10036154);
        mpfr_init(r10036155);
        mpfr_init_set_str(r10036156, "7.875", 10, MPFR_RNDN);
        mpfr_init(r10036157);
        mpfr_init(r10036158);
        mpfr_init(r10036159);
        mpfr_init(r10036160);
}

double f_im(double x) {
        ;
        mpfr_set_d(r10036149, x, MPFR_RNDN);
        mpfr_mul(r10036150, r10036148, r10036149, MPFR_RNDN);
        ;
        mpfr_mul(r10036152, r10036149, r10036149, MPFR_RNDN);
        mpfr_mul(r10036153, r10036152, r10036149, MPFR_RNDN);
        mpfr_mul(r10036154, r10036151, r10036153, MPFR_RNDN);
        mpfr_add(r10036155, r10036150, r10036154, MPFR_RNDN);
        ;
        mpfr_mul(r10036157, r10036153, r10036149, MPFR_RNDN);
        mpfr_mul(r10036158, r10036157, r10036149, MPFR_RNDN);
        mpfr_mul(r10036159, r10036156, r10036158, MPFR_RNDN);
        mpfr_add(r10036160, r10036155, r10036159, MPFR_RNDN);
        return mpfr_get_d(r10036160, MPFR_RNDN);
}

static mpfr_t r10036161, r10036162, r10036163, r10036164, r10036165, r10036166, r10036167, r10036168, r10036169, r10036170, r10036171, r10036172, r10036173;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10036161, "1.875", 10, MPFR_RNDN);
        mpfr_init(r10036162);
        mpfr_init(r10036163);
        mpfr_init_set_str(r10036164, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r10036165);
        mpfr_init(r10036166);
        mpfr_init(r10036167);
        mpfr_init(r10036168);
        mpfr_init_set_str(r10036169, "7.875", 10, MPFR_RNDN);
        mpfr_init(r10036170);
        mpfr_init(r10036171);
        mpfr_init(r10036172);
        mpfr_init(r10036173);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r10036162, x, MPFR_RNDN);
        mpfr_mul(r10036163, r10036161, r10036162, MPFR_RNDN);
        ;
        mpfr_mul(r10036165, r10036162, r10036162, MPFR_RNDN);
        mpfr_mul(r10036166, r10036165, r10036162, MPFR_RNDN);
        mpfr_mul(r10036167, r10036164, r10036166, MPFR_RNDN);
        mpfr_add(r10036168, r10036163, r10036167, MPFR_RNDN);
        ;
        mpfr_mul(r10036170, r10036166, r10036162, MPFR_RNDN);
        mpfr_mul(r10036171, r10036170, r10036162, MPFR_RNDN);
        mpfr_mul(r10036172, r10036169, r10036171, MPFR_RNDN);
        mpfr_add(r10036173, r10036168, r10036172, MPFR_RNDN);
        return mpfr_get_d(r10036173, MPFR_RNDN);
}

static mpfr_t r10036174, r10036175, r10036176, r10036177, r10036178, r10036179, r10036180, r10036181, r10036182, r10036183, r10036184, r10036185, r10036186;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r10036174, "1.875", 10, MPFR_RNDN);
        mpfr_init(r10036175);
        mpfr_init(r10036176);
        mpfr_init_set_str(r10036177, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r10036178);
        mpfr_init(r10036179);
        mpfr_init(r10036180);
        mpfr_init(r10036181);
        mpfr_init_set_str(r10036182, "7.875", 10, MPFR_RNDN);
        mpfr_init(r10036183);
        mpfr_init(r10036184);
        mpfr_init(r10036185);
        mpfr_init(r10036186);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r10036175, x, MPFR_RNDN);
        mpfr_mul(r10036176, r10036174, r10036175, MPFR_RNDN);
        ;
        mpfr_mul(r10036178, r10036175, r10036175, MPFR_RNDN);
        mpfr_mul(r10036179, r10036178, r10036175, MPFR_RNDN);
        mpfr_mul(r10036180, r10036177, r10036179, MPFR_RNDN);
        mpfr_add(r10036181, r10036176, r10036180, MPFR_RNDN);
        ;
        mpfr_mul(r10036183, r10036179, r10036175, MPFR_RNDN);
        mpfr_mul(r10036184, r10036183, r10036175, MPFR_RNDN);
        mpfr_mul(r10036185, r10036182, r10036184, MPFR_RNDN);
        mpfr_add(r10036186, r10036181, r10036185, MPFR_RNDN);
        return mpfr_get_d(r10036186, MPFR_RNDN);
}

