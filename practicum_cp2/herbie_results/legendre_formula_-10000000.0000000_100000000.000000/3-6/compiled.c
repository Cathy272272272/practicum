#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r5394101 = -0.3125;
        float r5394102 = 6.5625;
        float r5394103 = x;
        float r5394104 = r5394103 * r5394103;
        float r5394105 = r5394102 * r5394104;
        float r5394106 = r5394101 + r5394105;
        float r5394107 = -19.6875;
        float r5394108 = r5394104 * r5394103;
        float r5394109 = r5394108 * r5394103;
        float r5394110 = r5394107 * r5394109;
        float r5394111 = r5394106 + r5394110;
        float r5394112 = 14.4375;
        float r5394113 = r5394109 * r5394103;
        float r5394114 = r5394113 * r5394103;
        float r5394115 = r5394112 * r5394114;
        float r5394116 = r5394111 + r5394115;
        return r5394116;
}

double f_id(double x) {
        double r5394117 = -0.3125;
        double r5394118 = 6.5625;
        double r5394119 = x;
        double r5394120 = r5394119 * r5394119;
        double r5394121 = r5394118 * r5394120;
        double r5394122 = r5394117 + r5394121;
        double r5394123 = -19.6875;
        double r5394124 = r5394120 * r5394119;
        double r5394125 = r5394124 * r5394119;
        double r5394126 = r5394123 * r5394125;
        double r5394127 = r5394122 + r5394126;
        double r5394128 = 14.4375;
        double r5394129 = r5394125 * r5394119;
        double r5394130 = r5394129 * r5394119;
        double r5394131 = r5394128 * r5394130;
        double r5394132 = r5394127 + r5394131;
        return r5394132;
}


double f_of(float x) {
        float r5394133 = -0.3125;
        float r5394134 = 6.5625;
        float r5394135 = x;
        float r5394136 = r5394135 * r5394135;
        float r5394137 = r5394134 * r5394136;
        float r5394138 = r5394133 + r5394137;
        float r5394139 = -19.6875;
        float r5394140 = r5394136 * r5394135;
        float r5394141 = r5394140 * r5394135;
        float r5394142 = r5394139 * r5394141;
        float r5394143 = r5394138 + r5394142;
        float r5394144 = 14.4375;
        float r5394145 = r5394141 * r5394135;
        float r5394146 = r5394145 * r5394135;
        float r5394147 = r5394144 * r5394146;
        float r5394148 = r5394143 + r5394147;
        return r5394148;
}

double f_od(double x) {
        double r5394149 = -0.3125;
        double r5394150 = 6.5625;
        double r5394151 = x;
        double r5394152 = r5394151 * r5394151;
        double r5394153 = r5394150 * r5394152;
        double r5394154 = r5394149 + r5394153;
        double r5394155 = -19.6875;
        double r5394156 = r5394152 * r5394151;
        double r5394157 = r5394156 * r5394151;
        double r5394158 = r5394155 * r5394157;
        double r5394159 = r5394154 + r5394158;
        double r5394160 = 14.4375;
        double r5394161 = r5394157 * r5394151;
        double r5394162 = r5394161 * r5394151;
        double r5394163 = r5394160 * r5394162;
        double r5394164 = r5394159 + r5394163;
        return r5394164;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5394165, r5394166, r5394167, r5394168, r5394169, r5394170, r5394171, r5394172, r5394173, r5394174, r5394175, r5394176, r5394177, r5394178, r5394179, r5394180;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394165, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394166, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r5394167);
        mpfr_init(r5394168);
        mpfr_init(r5394169);
        mpfr_init(r5394170);
        mpfr_init_set_str(r5394171, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r5394172);
        mpfr_init(r5394173);
        mpfr_init(r5394174);
        mpfr_init(r5394175);
        mpfr_init_set_str(r5394176, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r5394177);
        mpfr_init(r5394178);
        mpfr_init(r5394179);
        mpfr_init(r5394180);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5394167, x, MPFR_RNDN);
        mpfr_mul(r5394168, r5394167, r5394167, MPFR_RNDN);
        mpfr_mul(r5394169, r5394166, r5394168, MPFR_RNDN);
        mpfr_add(r5394170, r5394165, r5394169, MPFR_RNDN);
        ;
        mpfr_mul(r5394172, r5394168, r5394167, MPFR_RNDN);
        mpfr_mul(r5394173, r5394172, r5394167, MPFR_RNDN);
        mpfr_mul(r5394174, r5394171, r5394173, MPFR_RNDN);
        mpfr_add(r5394175, r5394170, r5394174, MPFR_RNDN);
        ;
        mpfr_mul(r5394177, r5394173, r5394167, MPFR_RNDN);
        mpfr_mul(r5394178, r5394177, r5394167, MPFR_RNDN);
        mpfr_mul(r5394179, r5394176, r5394178, MPFR_RNDN);
        mpfr_add(r5394180, r5394175, r5394179, MPFR_RNDN);
        return mpfr_get_d(r5394180, MPFR_RNDN);
}

static mpfr_t r5394181, r5394182, r5394183, r5394184, r5394185, r5394186, r5394187, r5394188, r5394189, r5394190, r5394191, r5394192, r5394193, r5394194, r5394195, r5394196;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394181, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394182, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r5394183);
        mpfr_init(r5394184);
        mpfr_init(r5394185);
        mpfr_init(r5394186);
        mpfr_init_set_str(r5394187, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r5394188);
        mpfr_init(r5394189);
        mpfr_init(r5394190);
        mpfr_init(r5394191);
        mpfr_init_set_str(r5394192, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r5394193);
        mpfr_init(r5394194);
        mpfr_init(r5394195);
        mpfr_init(r5394196);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r5394183, x, MPFR_RNDN);
        mpfr_mul(r5394184, r5394183, r5394183, MPFR_RNDN);
        mpfr_mul(r5394185, r5394182, r5394184, MPFR_RNDN);
        mpfr_add(r5394186, r5394181, r5394185, MPFR_RNDN);
        ;
        mpfr_mul(r5394188, r5394184, r5394183, MPFR_RNDN);
        mpfr_mul(r5394189, r5394188, r5394183, MPFR_RNDN);
        mpfr_mul(r5394190, r5394187, r5394189, MPFR_RNDN);
        mpfr_add(r5394191, r5394186, r5394190, MPFR_RNDN);
        ;
        mpfr_mul(r5394193, r5394189, r5394183, MPFR_RNDN);
        mpfr_mul(r5394194, r5394193, r5394183, MPFR_RNDN);
        mpfr_mul(r5394195, r5394192, r5394194, MPFR_RNDN);
        mpfr_add(r5394196, r5394191, r5394195, MPFR_RNDN);
        return mpfr_get_d(r5394196, MPFR_RNDN);
}

static mpfr_t r5394197, r5394198, r5394199, r5394200, r5394201, r5394202, r5394203, r5394204, r5394205, r5394206, r5394207, r5394208, r5394209, r5394210, r5394211, r5394212;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5394197, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r5394198, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r5394199);
        mpfr_init(r5394200);
        mpfr_init(r5394201);
        mpfr_init(r5394202);
        mpfr_init_set_str(r5394203, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r5394204);
        mpfr_init(r5394205);
        mpfr_init(r5394206);
        mpfr_init(r5394207);
        mpfr_init_set_str(r5394208, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r5394209);
        mpfr_init(r5394210);
        mpfr_init(r5394211);
        mpfr_init(r5394212);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r5394199, x, MPFR_RNDN);
        mpfr_mul(r5394200, r5394199, r5394199, MPFR_RNDN);
        mpfr_mul(r5394201, r5394198, r5394200, MPFR_RNDN);
        mpfr_add(r5394202, r5394197, r5394201, MPFR_RNDN);
        ;
        mpfr_mul(r5394204, r5394200, r5394199, MPFR_RNDN);
        mpfr_mul(r5394205, r5394204, r5394199, MPFR_RNDN);
        mpfr_mul(r5394206, r5394203, r5394205, MPFR_RNDN);
        mpfr_add(r5394207, r5394202, r5394206, MPFR_RNDN);
        ;
        mpfr_mul(r5394209, r5394205, r5394199, MPFR_RNDN);
        mpfr_mul(r5394210, r5394209, r5394199, MPFR_RNDN);
        mpfr_mul(r5394211, r5394208, r5394210, MPFR_RNDN);
        mpfr_add(r5394212, r5394207, r5394211, MPFR_RNDN);
        return mpfr_get_d(r5394212, MPFR_RNDN);
}

