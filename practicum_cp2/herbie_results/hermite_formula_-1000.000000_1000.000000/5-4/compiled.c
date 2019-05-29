#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r12290080 = 12.0;
        float r12290081 = -48.0;
        float r12290082 = x;
        float r12290083 = r12290082 * r12290082;
        float r12290084 = r12290081 * r12290083;
        float r12290085 = r12290080 + r12290084;
        float r12290086 = 16.0;
        float r12290087 = r12290083 * r12290082;
        float r12290088 = r12290087 * r12290082;
        float r12290089 = r12290086 * r12290088;
        float r12290090 = r12290085 + r12290089;
        return r12290090;
}

double f_id(double x) {
        double r12290091 = 12.0;
        double r12290092 = -48.0;
        double r12290093 = x;
        double r12290094 = r12290093 * r12290093;
        double r12290095 = r12290092 * r12290094;
        double r12290096 = r12290091 + r12290095;
        double r12290097 = 16.0;
        double r12290098 = r12290094 * r12290093;
        double r12290099 = r12290098 * r12290093;
        double r12290100 = r12290097 * r12290099;
        double r12290101 = r12290096 + r12290100;
        return r12290101;
}


double f_of(float x) {
        float r12290102 = 12.0;
        float r12290103 = x;
        float r12290104 = 16.0;
        float r12290105 = r12290103 * r12290104;
        float r12290106 = 3;
        float r12290107 = pow(r12290103, r12290106);
        float r12290108 = r12290105 * r12290107;
        float r12290109 = -48.0;
        float r12290110 = r12290103 * r12290109;
        float r12290111 = r12290110 * r12290103;
        float r12290112 = r12290108 + r12290111;
        float r12290113 = r12290102 + r12290112;
        return r12290113;
}

double f_od(double x) {
        double r12290114 = 12.0;
        double r12290115 = x;
        double r12290116 = 16.0;
        double r12290117 = r12290115 * r12290116;
        double r12290118 = 3;
        double r12290119 = pow(r12290115, r12290118);
        double r12290120 = r12290117 * r12290119;
        double r12290121 = -48.0;
        double r12290122 = r12290115 * r12290121;
        double r12290123 = r12290122 * r12290115;
        double r12290124 = r12290120 + r12290123;
        double r12290125 = r12290114 + r12290124;
        return r12290125;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12290126, r12290127, r12290128, r12290129, r12290130, r12290131, r12290132, r12290133, r12290134, r12290135, r12290136;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12290126, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12290127, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r12290128);
        mpfr_init(r12290129);
        mpfr_init(r12290130);
        mpfr_init(r12290131);
        mpfr_init_set_str(r12290132, "16.0", 10, MPFR_RNDN);
        mpfr_init(r12290133);
        mpfr_init(r12290134);
        mpfr_init(r12290135);
        mpfr_init(r12290136);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r12290128, x, MPFR_RNDN);
        mpfr_mul(r12290129, r12290128, r12290128, MPFR_RNDN);
        mpfr_mul(r12290130, r12290127, r12290129, MPFR_RNDN);
        mpfr_add(r12290131, r12290126, r12290130, MPFR_RNDN);
        ;
        mpfr_mul(r12290133, r12290129, r12290128, MPFR_RNDN);
        mpfr_mul(r12290134, r12290133, r12290128, MPFR_RNDN);
        mpfr_mul(r12290135, r12290132, r12290134, MPFR_RNDN);
        mpfr_add(r12290136, r12290131, r12290135, MPFR_RNDN);
        return mpfr_get_d(r12290136, MPFR_RNDN);
}

static mpfr_t r12290137, r12290138, r12290139, r12290140, r12290141, r12290142, r12290143, r12290144, r12290145, r12290146, r12290147, r12290148;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12290137, "12.0", 10, MPFR_RNDN);
        mpfr_init(r12290138);
        mpfr_init_set_str(r12290139, "16.0", 10, MPFR_RNDN);
        mpfr_init(r12290140);
        mpfr_init_set_str(r12290141, "3", 10, MPFR_RNDN);
        mpfr_init(r12290142);
        mpfr_init(r12290143);
        mpfr_init_set_str(r12290144, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r12290145);
        mpfr_init(r12290146);
        mpfr_init(r12290147);
        mpfr_init(r12290148);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r12290138, x, MPFR_RNDN);
        ;
        mpfr_mul(r12290140, r12290138, r12290139, MPFR_RNDN);
        ;
        mpfr_pow(r12290142, r12290138, r12290141, MPFR_RNDN);
        mpfr_mul(r12290143, r12290140, r12290142, MPFR_RNDN);
        ;
        mpfr_mul(r12290145, r12290138, r12290144, MPFR_RNDN);
        mpfr_mul(r12290146, r12290145, r12290138, MPFR_RNDN);
        mpfr_add(r12290147, r12290143, r12290146, MPFR_RNDN);
        mpfr_add(r12290148, r12290137, r12290147, MPFR_RNDN);
        return mpfr_get_d(r12290148, MPFR_RNDN);
}

static mpfr_t r12290149, r12290150, r12290151, r12290152, r12290153, r12290154, r12290155, r12290156, r12290157, r12290158, r12290159, r12290160;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r12290149, "12.0", 10, MPFR_RNDN);
        mpfr_init(r12290150);
        mpfr_init_set_str(r12290151, "16.0", 10, MPFR_RNDN);
        mpfr_init(r12290152);
        mpfr_init_set_str(r12290153, "3", 10, MPFR_RNDN);
        mpfr_init(r12290154);
        mpfr_init(r12290155);
        mpfr_init_set_str(r12290156, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r12290157);
        mpfr_init(r12290158);
        mpfr_init(r12290159);
        mpfr_init(r12290160);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r12290150, x, MPFR_RNDN);
        ;
        mpfr_mul(r12290152, r12290150, r12290151, MPFR_RNDN);
        ;
        mpfr_pow(r12290154, r12290150, r12290153, MPFR_RNDN);
        mpfr_mul(r12290155, r12290152, r12290154, MPFR_RNDN);
        ;
        mpfr_mul(r12290157, r12290150, r12290156, MPFR_RNDN);
        mpfr_mul(r12290158, r12290157, r12290150, MPFR_RNDN);
        mpfr_add(r12290159, r12290155, r12290158, MPFR_RNDN);
        mpfr_add(r12290160, r12290149, r12290159, MPFR_RNDN);
        return mpfr_get_d(r12290160, MPFR_RNDN);
}

