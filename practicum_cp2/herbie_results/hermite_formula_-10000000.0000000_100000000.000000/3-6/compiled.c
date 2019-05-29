#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9883133 = -120.0;
        float r9883134 = 720.0;
        float r9883135 = x;
        float r9883136 = r9883135 * r9883135;
        float r9883137 = r9883134 * r9883136;
        float r9883138 = r9883133 + r9883137;
        float r9883139 = -480.0;
        float r9883140 = r9883136 * r9883135;
        float r9883141 = r9883140 * r9883135;
        float r9883142 = r9883139 * r9883141;
        float r9883143 = r9883138 + r9883142;
        float r9883144 = 64.0;
        float r9883145 = r9883141 * r9883135;
        float r9883146 = r9883145 * r9883135;
        float r9883147 = r9883144 * r9883146;
        float r9883148 = r9883143 + r9883147;
        return r9883148;
}

double f_id(double x) {
        double r9883149 = -120.0;
        double r9883150 = 720.0;
        double r9883151 = x;
        double r9883152 = r9883151 * r9883151;
        double r9883153 = r9883150 * r9883152;
        double r9883154 = r9883149 + r9883153;
        double r9883155 = -480.0;
        double r9883156 = r9883152 * r9883151;
        double r9883157 = r9883156 * r9883151;
        double r9883158 = r9883155 * r9883157;
        double r9883159 = r9883154 + r9883158;
        double r9883160 = 64.0;
        double r9883161 = r9883157 * r9883151;
        double r9883162 = r9883161 * r9883151;
        double r9883163 = r9883160 * r9883162;
        double r9883164 = r9883159 + r9883163;
        return r9883164;
}


double f_of(float x) {
        float r9883165 = x;
        float r9883166 = 720.0;
        float r9883167 = r9883165 * r9883166;
        float r9883168 = r9883167 * r9883165;
        float r9883169 = -120.0;
        float r9883170 = r9883168 + r9883169;
        float r9883171 = r9883165 * r9883165;
        float r9883172 = r9883171 * r9883171;
        float r9883173 = -480.0;
        float r9883174 = 64.0;
        float r9883175 = r9883171 * r9883174;
        float r9883176 = r9883173 + r9883175;
        float r9883177 = r9883172 * r9883176;
        float r9883178 = r9883170 + r9883177;
        return r9883178;
}

double f_od(double x) {
        double r9883179 = x;
        double r9883180 = 720.0;
        double r9883181 = r9883179 * r9883180;
        double r9883182 = r9883181 * r9883179;
        double r9883183 = -120.0;
        double r9883184 = r9883182 + r9883183;
        double r9883185 = r9883179 * r9883179;
        double r9883186 = r9883185 * r9883185;
        double r9883187 = -480.0;
        double r9883188 = 64.0;
        double r9883189 = r9883185 * r9883188;
        double r9883190 = r9883187 + r9883189;
        double r9883191 = r9883186 * r9883190;
        double r9883192 = r9883184 + r9883191;
        return r9883192;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9883193, r9883194, r9883195, r9883196, r9883197, r9883198, r9883199, r9883200, r9883201, r9883202, r9883203, r9883204, r9883205, r9883206, r9883207, r9883208;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9883193, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883194, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9883195);
        mpfr_init(r9883196);
        mpfr_init(r9883197);
        mpfr_init(r9883198);
        mpfr_init_set_str(r9883199, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9883200);
        mpfr_init(r9883201);
        mpfr_init(r9883202);
        mpfr_init(r9883203);
        mpfr_init_set_str(r9883204, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9883205);
        mpfr_init(r9883206);
        mpfr_init(r9883207);
        mpfr_init(r9883208);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9883195, x, MPFR_RNDN);
        mpfr_mul(r9883196, r9883195, r9883195, MPFR_RNDN);
        mpfr_mul(r9883197, r9883194, r9883196, MPFR_RNDN);
        mpfr_add(r9883198, r9883193, r9883197, MPFR_RNDN);
        ;
        mpfr_mul(r9883200, r9883196, r9883195, MPFR_RNDN);
        mpfr_mul(r9883201, r9883200, r9883195, MPFR_RNDN);
        mpfr_mul(r9883202, r9883199, r9883201, MPFR_RNDN);
        mpfr_add(r9883203, r9883198, r9883202, MPFR_RNDN);
        ;
        mpfr_mul(r9883205, r9883201, r9883195, MPFR_RNDN);
        mpfr_mul(r9883206, r9883205, r9883195, MPFR_RNDN);
        mpfr_mul(r9883207, r9883204, r9883206, MPFR_RNDN);
        mpfr_add(r9883208, r9883203, r9883207, MPFR_RNDN);
        return mpfr_get_d(r9883208, MPFR_RNDN);
}

static mpfr_t r9883209, r9883210, r9883211, r9883212, r9883213, r9883214, r9883215, r9883216, r9883217, r9883218, r9883219, r9883220, r9883221, r9883222;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9883209);
        mpfr_init_set_str(r9883210, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9883211);
        mpfr_init(r9883212);
        mpfr_init_set_str(r9883213, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r9883214);
        mpfr_init(r9883215);
        mpfr_init(r9883216);
        mpfr_init_set_str(r9883217, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883218, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9883219);
        mpfr_init(r9883220);
        mpfr_init(r9883221);
        mpfr_init(r9883222);
}

double f_fm(double x) {
        mpfr_set_d(r9883209, x, MPFR_RNDN);
        ;
        mpfr_mul(r9883211, r9883209, r9883210, MPFR_RNDN);
        mpfr_mul(r9883212, r9883211, r9883209, MPFR_RNDN);
        ;
        mpfr_add(r9883214, r9883212, r9883213, MPFR_RNDN);
        mpfr_mul(r9883215, r9883209, r9883209, MPFR_RNDN);
        mpfr_mul(r9883216, r9883215, r9883215, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9883219, r9883215, r9883218, MPFR_RNDN);
        mpfr_add(r9883220, r9883217, r9883219, MPFR_RNDN);
        mpfr_mul(r9883221, r9883216, r9883220, MPFR_RNDN);
        mpfr_add(r9883222, r9883214, r9883221, MPFR_RNDN);
        return mpfr_get_d(r9883222, MPFR_RNDN);
}

static mpfr_t r9883223, r9883224, r9883225, r9883226, r9883227, r9883228, r9883229, r9883230, r9883231, r9883232, r9883233, r9883234, r9883235, r9883236;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9883223);
        mpfr_init_set_str(r9883224, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9883225);
        mpfr_init(r9883226);
        mpfr_init_set_str(r9883227, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r9883228);
        mpfr_init(r9883229);
        mpfr_init(r9883230);
        mpfr_init_set_str(r9883231, "-480.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9883232, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9883233);
        mpfr_init(r9883234);
        mpfr_init(r9883235);
        mpfr_init(r9883236);
}

double f_dm(double x) {
        mpfr_set_d(r9883223, x, MPFR_RNDN);
        ;
        mpfr_mul(r9883225, r9883223, r9883224, MPFR_RNDN);
        mpfr_mul(r9883226, r9883225, r9883223, MPFR_RNDN);
        ;
        mpfr_add(r9883228, r9883226, r9883227, MPFR_RNDN);
        mpfr_mul(r9883229, r9883223, r9883223, MPFR_RNDN);
        mpfr_mul(r9883230, r9883229, r9883229, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9883233, r9883229, r9883232, MPFR_RNDN);
        mpfr_add(r9883234, r9883231, r9883233, MPFR_RNDN);
        mpfr_mul(r9883235, r9883230, r9883234, MPFR_RNDN);
        mpfr_add(r9883236, r9883228, r9883235, MPFR_RNDN);
        return mpfr_get_d(r9883236, MPFR_RNDN);
}

