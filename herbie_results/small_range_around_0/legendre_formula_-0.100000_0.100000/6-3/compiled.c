#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r4599132 = -1.5;
        float r4599133 = x;
        float r4599134 = r4599132 * r4599133;
        float r4599135 = 2.5;
        float r4599136 = r4599133 * r4599133;
        float r4599137 = r4599136 * r4599133;
        float r4599138 = r4599135 * r4599137;
        float r4599139 = r4599134 + r4599138;
        return r4599139;
}

double f_id(double x) {
        double r4599140 = -1.5;
        double r4599141 = x;
        double r4599142 = r4599140 * r4599141;
        double r4599143 = 2.5;
        double r4599144 = r4599141 * r4599141;
        double r4599145 = r4599144 * r4599141;
        double r4599146 = r4599143 * r4599145;
        double r4599147 = r4599142 + r4599146;
        return r4599147;
}


double f_of(float x) {
        float r4599148 = -1.5;
        float r4599149 = x;
        float r4599150 = r4599148 * r4599149;
        float r4599151 = 2.5;
        float r4599152 = r4599149 * r4599149;
        float r4599153 = r4599152 * r4599149;
        float r4599154 = r4599151 * r4599153;
        float r4599155 = r4599150 + r4599154;
        return r4599155;
}

double f_od(double x) {
        double r4599156 = -1.5;
        double r4599157 = x;
        double r4599158 = r4599156 * r4599157;
        double r4599159 = 2.5;
        double r4599160 = r4599157 * r4599157;
        double r4599161 = r4599160 * r4599157;
        double r4599162 = r4599159 * r4599161;
        double r4599163 = r4599158 + r4599162;
        return r4599163;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4599164, r4599165, r4599166, r4599167, r4599168, r4599169, r4599170, r4599171;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4599164, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4599165);
        mpfr_init(r4599166);
        mpfr_init_set_str(r4599167, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4599168);
        mpfr_init(r4599169);
        mpfr_init(r4599170);
        mpfr_init(r4599171);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4599165, x, MPFR_RNDN);
        mpfr_mul(r4599166, r4599164, r4599165, MPFR_RNDN);
        ;
        mpfr_mul(r4599168, r4599165, r4599165, MPFR_RNDN);
        mpfr_mul(r4599169, r4599168, r4599165, MPFR_RNDN);
        mpfr_mul(r4599170, r4599167, r4599169, MPFR_RNDN);
        mpfr_add(r4599171, r4599166, r4599170, MPFR_RNDN);
        return mpfr_get_d(r4599171, MPFR_RNDN);
}

static mpfr_t r4599172, r4599173, r4599174, r4599175, r4599176, r4599177, r4599178, r4599179;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4599172, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4599173);
        mpfr_init(r4599174);
        mpfr_init_set_str(r4599175, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4599176);
        mpfr_init(r4599177);
        mpfr_init(r4599178);
        mpfr_init(r4599179);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4599173, x, MPFR_RNDN);
        mpfr_mul(r4599174, r4599172, r4599173, MPFR_RNDN);
        ;
        mpfr_mul(r4599176, r4599173, r4599173, MPFR_RNDN);
        mpfr_mul(r4599177, r4599176, r4599173, MPFR_RNDN);
        mpfr_mul(r4599178, r4599175, r4599177, MPFR_RNDN);
        mpfr_add(r4599179, r4599174, r4599178, MPFR_RNDN);
        return mpfr_get_d(r4599179, MPFR_RNDN);
}

static mpfr_t r4599180, r4599181, r4599182, r4599183, r4599184, r4599185, r4599186, r4599187;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4599180, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r4599181);
        mpfr_init(r4599182);
        mpfr_init_set_str(r4599183, "2.5", 10, MPFR_RNDN);
        mpfr_init(r4599184);
        mpfr_init(r4599185);
        mpfr_init(r4599186);
        mpfr_init(r4599187);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4599181, x, MPFR_RNDN);
        mpfr_mul(r4599182, r4599180, r4599181, MPFR_RNDN);
        ;
        mpfr_mul(r4599184, r4599181, r4599181, MPFR_RNDN);
        mpfr_mul(r4599185, r4599184, r4599181, MPFR_RNDN);
        mpfr_mul(r4599186, r4599183, r4599185, MPFR_RNDN);
        mpfr_add(r4599187, r4599182, r4599186, MPFR_RNDN);
        return mpfr_get_d(r4599187, MPFR_RNDN);
}

