#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r4436128 = -0.3125;
        float r4436129 = 6.5625;
        float r4436130 = x;
        float r4436131 = r4436130 * r4436130;
        float r4436132 = r4436129 * r4436131;
        float r4436133 = r4436128 + r4436132;
        float r4436134 = -19.6875;
        float r4436135 = r4436131 * r4436130;
        float r4436136 = r4436135 * r4436130;
        float r4436137 = r4436134 * r4436136;
        float r4436138 = r4436133 + r4436137;
        float r4436139 = 14.4375;
        float r4436140 = r4436136 * r4436130;
        float r4436141 = r4436140 * r4436130;
        float r4436142 = r4436139 * r4436141;
        float r4436143 = r4436138 + r4436142;
        return r4436143;
}

double f_id(double x) {
        double r4436144 = -0.3125;
        double r4436145 = 6.5625;
        double r4436146 = x;
        double r4436147 = r4436146 * r4436146;
        double r4436148 = r4436145 * r4436147;
        double r4436149 = r4436144 + r4436148;
        double r4436150 = -19.6875;
        double r4436151 = r4436147 * r4436146;
        double r4436152 = r4436151 * r4436146;
        double r4436153 = r4436150 * r4436152;
        double r4436154 = r4436149 + r4436153;
        double r4436155 = 14.4375;
        double r4436156 = r4436152 * r4436146;
        double r4436157 = r4436156 * r4436146;
        double r4436158 = r4436155 * r4436157;
        double r4436159 = r4436154 + r4436158;
        return r4436159;
}


double f_of(float x) {
        float r4436160 = -0.3125;
        float r4436161 = 6.5625;
        float r4436162 = x;
        float r4436163 = r4436162 * r4436162;
        float r4436164 = r4436161 * r4436163;
        float r4436165 = r4436160 + r4436164;
        float r4436166 = -19.6875;
        float r4436167 = r4436163 * r4436162;
        float r4436168 = r4436167 * r4436162;
        float r4436169 = r4436166 * r4436168;
        float r4436170 = r4436165 + r4436169;
        float r4436171 = 14.4375;
        float r4436172 = r4436168 * r4436162;
        float r4436173 = r4436172 * r4436162;
        float r4436174 = r4436171 * r4436173;
        float r4436175 = r4436170 + r4436174;
        return r4436175;
}

double f_od(double x) {
        double r4436176 = -0.3125;
        double r4436177 = 6.5625;
        double r4436178 = x;
        double r4436179 = r4436178 * r4436178;
        double r4436180 = r4436177 * r4436179;
        double r4436181 = r4436176 + r4436180;
        double r4436182 = -19.6875;
        double r4436183 = r4436179 * r4436178;
        double r4436184 = r4436183 * r4436178;
        double r4436185 = r4436182 * r4436184;
        double r4436186 = r4436181 + r4436185;
        double r4436187 = 14.4375;
        double r4436188 = r4436184 * r4436178;
        double r4436189 = r4436188 * r4436178;
        double r4436190 = r4436187 * r4436189;
        double r4436191 = r4436186 + r4436190;
        return r4436191;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4436192, r4436193, r4436194, r4436195, r4436196, r4436197, r4436198, r4436199, r4436200, r4436201, r4436202, r4436203, r4436204, r4436205, r4436206, r4436207;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436192, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436193, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4436194);
        mpfr_init(r4436195);
        mpfr_init(r4436196);
        mpfr_init(r4436197);
        mpfr_init_set_str(r4436198, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4436199);
        mpfr_init(r4436200);
        mpfr_init(r4436201);
        mpfr_init(r4436202);
        mpfr_init_set_str(r4436203, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4436204);
        mpfr_init(r4436205);
        mpfr_init(r4436206);
        mpfr_init(r4436207);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4436194, x, MPFR_RNDN);
        mpfr_mul(r4436195, r4436194, r4436194, MPFR_RNDN);
        mpfr_mul(r4436196, r4436193, r4436195, MPFR_RNDN);
        mpfr_add(r4436197, r4436192, r4436196, MPFR_RNDN);
        ;
        mpfr_mul(r4436199, r4436195, r4436194, MPFR_RNDN);
        mpfr_mul(r4436200, r4436199, r4436194, MPFR_RNDN);
        mpfr_mul(r4436201, r4436198, r4436200, MPFR_RNDN);
        mpfr_add(r4436202, r4436197, r4436201, MPFR_RNDN);
        ;
        mpfr_mul(r4436204, r4436200, r4436194, MPFR_RNDN);
        mpfr_mul(r4436205, r4436204, r4436194, MPFR_RNDN);
        mpfr_mul(r4436206, r4436203, r4436205, MPFR_RNDN);
        mpfr_add(r4436207, r4436202, r4436206, MPFR_RNDN);
        return mpfr_get_d(r4436207, MPFR_RNDN);
}

static mpfr_t r4436208, r4436209, r4436210, r4436211, r4436212, r4436213, r4436214, r4436215, r4436216, r4436217, r4436218, r4436219, r4436220, r4436221, r4436222, r4436223;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436208, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436209, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4436210);
        mpfr_init(r4436211);
        mpfr_init(r4436212);
        mpfr_init(r4436213);
        mpfr_init_set_str(r4436214, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4436215);
        mpfr_init(r4436216);
        mpfr_init(r4436217);
        mpfr_init(r4436218);
        mpfr_init_set_str(r4436219, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4436220);
        mpfr_init(r4436221);
        mpfr_init(r4436222);
        mpfr_init(r4436223);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4436210, x, MPFR_RNDN);
        mpfr_mul(r4436211, r4436210, r4436210, MPFR_RNDN);
        mpfr_mul(r4436212, r4436209, r4436211, MPFR_RNDN);
        mpfr_add(r4436213, r4436208, r4436212, MPFR_RNDN);
        ;
        mpfr_mul(r4436215, r4436211, r4436210, MPFR_RNDN);
        mpfr_mul(r4436216, r4436215, r4436210, MPFR_RNDN);
        mpfr_mul(r4436217, r4436214, r4436216, MPFR_RNDN);
        mpfr_add(r4436218, r4436213, r4436217, MPFR_RNDN);
        ;
        mpfr_mul(r4436220, r4436216, r4436210, MPFR_RNDN);
        mpfr_mul(r4436221, r4436220, r4436210, MPFR_RNDN);
        mpfr_mul(r4436222, r4436219, r4436221, MPFR_RNDN);
        mpfr_add(r4436223, r4436218, r4436222, MPFR_RNDN);
        return mpfr_get_d(r4436223, MPFR_RNDN);
}

static mpfr_t r4436224, r4436225, r4436226, r4436227, r4436228, r4436229, r4436230, r4436231, r4436232, r4436233, r4436234, r4436235, r4436236, r4436237, r4436238, r4436239;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4436224, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r4436225, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r4436226);
        mpfr_init(r4436227);
        mpfr_init(r4436228);
        mpfr_init(r4436229);
        mpfr_init_set_str(r4436230, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r4436231);
        mpfr_init(r4436232);
        mpfr_init(r4436233);
        mpfr_init(r4436234);
        mpfr_init_set_str(r4436235, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r4436236);
        mpfr_init(r4436237);
        mpfr_init(r4436238);
        mpfr_init(r4436239);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4436226, x, MPFR_RNDN);
        mpfr_mul(r4436227, r4436226, r4436226, MPFR_RNDN);
        mpfr_mul(r4436228, r4436225, r4436227, MPFR_RNDN);
        mpfr_add(r4436229, r4436224, r4436228, MPFR_RNDN);
        ;
        mpfr_mul(r4436231, r4436227, r4436226, MPFR_RNDN);
        mpfr_mul(r4436232, r4436231, r4436226, MPFR_RNDN);
        mpfr_mul(r4436233, r4436230, r4436232, MPFR_RNDN);
        mpfr_add(r4436234, r4436229, r4436233, MPFR_RNDN);
        ;
        mpfr_mul(r4436236, r4436232, r4436226, MPFR_RNDN);
        mpfr_mul(r4436237, r4436236, r4436226, MPFR_RNDN);
        mpfr_mul(r4436238, r4436235, r4436237, MPFR_RNDN);
        mpfr_add(r4436239, r4436234, r4436238, MPFR_RNDN);
        return mpfr_get_d(r4436239, MPFR_RNDN);
}

