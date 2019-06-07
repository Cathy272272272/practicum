#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r61033106 = 12.0;
        float r61033107 = -48.0;
        float r61033108 = x;
        float r61033109 = r61033108 * r61033108;
        float r61033110 = r61033107 * r61033109;
        float r61033111 = r61033106 + r61033110;
        float r61033112 = 16.0;
        float r61033113 = r61033109 * r61033108;
        float r61033114 = r61033113 * r61033108;
        float r61033115 = r61033112 * r61033114;
        float r61033116 = r61033111 + r61033115;
        return r61033116;
}

double f_id(double x) {
        double r61033117 = 12.0;
        double r61033118 = -48.0;
        double r61033119 = x;
        double r61033120 = r61033119 * r61033119;
        double r61033121 = r61033118 * r61033120;
        double r61033122 = r61033117 + r61033121;
        double r61033123 = 16.0;
        double r61033124 = r61033120 * r61033119;
        double r61033125 = r61033124 * r61033119;
        double r61033126 = r61033123 * r61033125;
        double r61033127 = r61033122 + r61033126;
        return r61033127;
}


double f_of(float x) {
        float r61033128 = 12.0;
        float r61033129 = -48.0;
        float r61033130 = exp(r61033129);
        float r61033131 = x;
        float r61033132 = r61033131 * r61033131;
        float r61033133 = pow(r61033130, r61033132);
        float r61033134 = 16.0;
        float r61033135 = fabs(r61033132);
        float r61033136 = r61033135 * r61033135;
        float r61033137 = r61033134 * r61033136;
        float r61033138 = exp(r61033137);
        float r61033139 = r61033133 * r61033138;
        float r61033140 = log(r61033139);
        float r61033141 = r61033128 + r61033140;
        return r61033141;
}

double f_od(double x) {
        double r61033142 = 12.0;
        double r61033143 = -48.0;
        double r61033144 = exp(r61033143);
        double r61033145 = x;
        double r61033146 = r61033145 * r61033145;
        double r61033147 = pow(r61033144, r61033146);
        double r61033148 = 16.0;
        double r61033149 = fabs(r61033146);
        double r61033150 = r61033149 * r61033149;
        double r61033151 = r61033148 * r61033150;
        double r61033152 = exp(r61033151);
        double r61033153 = r61033147 * r61033152;
        double r61033154 = log(r61033153);
        double r61033155 = r61033142 + r61033154;
        return r61033155;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61033156, r61033157, r61033158, r61033159, r61033160, r61033161, r61033162, r61033163, r61033164, r61033165, r61033166;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033156, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61033157, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r61033158);
        mpfr_init(r61033159);
        mpfr_init(r61033160);
        mpfr_init(r61033161);
        mpfr_init_set_str(r61033162, "16.0", 10, MPFR_RNDN);
        mpfr_init(r61033163);
        mpfr_init(r61033164);
        mpfr_init(r61033165);
        mpfr_init(r61033166);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r61033158, x, MPFR_RNDN);
        mpfr_mul(r61033159, r61033158, r61033158, MPFR_RNDN);
        mpfr_mul(r61033160, r61033157, r61033159, MPFR_RNDN);
        mpfr_add(r61033161, r61033156, r61033160, MPFR_RNDN);
        ;
        mpfr_mul(r61033163, r61033159, r61033158, MPFR_RNDN);
        mpfr_mul(r61033164, r61033163, r61033158, MPFR_RNDN);
        mpfr_mul(r61033165, r61033162, r61033164, MPFR_RNDN);
        mpfr_add(r61033166, r61033161, r61033165, MPFR_RNDN);
        return mpfr_get_d(r61033166, MPFR_RNDN);
}

static mpfr_t r61033167, r61033168, r61033169, r61033170, r61033171, r61033172, r61033173, r61033174, r61033175, r61033176, r61033177, r61033178, r61033179, r61033180;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033167, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61033168, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r61033169);
        mpfr_init(r61033170);
        mpfr_init(r61033171);
        mpfr_init(r61033172);
        mpfr_init_set_str(r61033173, "16.0", 10, MPFR_RNDN);
        mpfr_init(r61033174);
        mpfr_init(r61033175);
        mpfr_init(r61033176);
        mpfr_init(r61033177);
        mpfr_init(r61033178);
        mpfr_init(r61033179);
        mpfr_init(r61033180);
}

double f_fm(double x) {
        ;
        ;
        mpfr_exp(r61033169, r61033168, MPFR_RNDN);
        mpfr_set_d(r61033170, x, MPFR_RNDN);
        mpfr_mul(r61033171, r61033170, r61033170, MPFR_RNDN);
        mpfr_pow(r61033172, r61033169, r61033171, MPFR_RNDN);
        ;
        mpfr_abs(r61033174, r61033171, MPFR_RNDN);
        mpfr_mul(r61033175, r61033174, r61033174, MPFR_RNDN);
        mpfr_mul(r61033176, r61033173, r61033175, MPFR_RNDN);
        mpfr_exp(r61033177, r61033176, MPFR_RNDN);
        mpfr_mul(r61033178, r61033172, r61033177, MPFR_RNDN);
        mpfr_log(r61033179, r61033178, MPFR_RNDN);
        mpfr_add(r61033180, r61033167, r61033179, MPFR_RNDN);
        return mpfr_get_d(r61033180, MPFR_RNDN);
}

static mpfr_t r61033181, r61033182, r61033183, r61033184, r61033185, r61033186, r61033187, r61033188, r61033189, r61033190, r61033191, r61033192, r61033193, r61033194;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033181, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61033182, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r61033183);
        mpfr_init(r61033184);
        mpfr_init(r61033185);
        mpfr_init(r61033186);
        mpfr_init_set_str(r61033187, "16.0", 10, MPFR_RNDN);
        mpfr_init(r61033188);
        mpfr_init(r61033189);
        mpfr_init(r61033190);
        mpfr_init(r61033191);
        mpfr_init(r61033192);
        mpfr_init(r61033193);
        mpfr_init(r61033194);
}

double f_dm(double x) {
        ;
        ;
        mpfr_exp(r61033183, r61033182, MPFR_RNDN);
        mpfr_set_d(r61033184, x, MPFR_RNDN);
        mpfr_mul(r61033185, r61033184, r61033184, MPFR_RNDN);
        mpfr_pow(r61033186, r61033183, r61033185, MPFR_RNDN);
        ;
        mpfr_abs(r61033188, r61033185, MPFR_RNDN);
        mpfr_mul(r61033189, r61033188, r61033188, MPFR_RNDN);
        mpfr_mul(r61033190, r61033187, r61033189, MPFR_RNDN);
        mpfr_exp(r61033191, r61033190, MPFR_RNDN);
        mpfr_mul(r61033192, r61033186, r61033191, MPFR_RNDN);
        mpfr_log(r61033193, r61033192, MPFR_RNDN);
        mpfr_add(r61033194, r61033181, r61033193, MPFR_RNDN);
        return mpfr_get_d(r61033194, MPFR_RNDN);
}

