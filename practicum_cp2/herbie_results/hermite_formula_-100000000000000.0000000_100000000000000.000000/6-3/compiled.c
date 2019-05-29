#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r9960078 = -12.0;
        float r9960079 = x;
        float r9960080 = r9960078 * r9960079;
        float r9960081 = 8.0;
        float r9960082 = r9960079 * r9960079;
        float r9960083 = r9960082 * r9960079;
        float r9960084 = r9960081 * r9960083;
        float r9960085 = r9960080 + r9960084;
        return r9960085;
}

double f_id(double x) {
        double r9960086 = -12.0;
        double r9960087 = x;
        double r9960088 = r9960086 * r9960087;
        double r9960089 = 8.0;
        double r9960090 = r9960087 * r9960087;
        double r9960091 = r9960090 * r9960087;
        double r9960092 = r9960089 * r9960091;
        double r9960093 = r9960088 + r9960092;
        return r9960093;
}


double f_of(float x) {
        float r9960094 = -12.0;
        float r9960095 = x;
        float r9960096 = r9960094 * r9960095;
        float r9960097 = 8.0;
        float r9960098 = 3;
        float r9960099 = pow(r9960095, r9960098);
        float r9960100 = r9960097 * r9960099;
        float r9960101 = r9960096 + r9960100;
        return r9960101;
}

double f_od(double x) {
        double r9960102 = -12.0;
        double r9960103 = x;
        double r9960104 = r9960102 * r9960103;
        double r9960105 = 8.0;
        double r9960106 = 3;
        double r9960107 = pow(r9960103, r9960106);
        double r9960108 = r9960105 * r9960107;
        double r9960109 = r9960104 + r9960108;
        return r9960109;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9960110, r9960111, r9960112, r9960113, r9960114, r9960115, r9960116, r9960117;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9960110, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9960111);
        mpfr_init(r9960112);
        mpfr_init_set_str(r9960113, "8.0", 10, MPFR_RNDN);
        mpfr_init(r9960114);
        mpfr_init(r9960115);
        mpfr_init(r9960116);
        mpfr_init(r9960117);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9960111, x, MPFR_RNDN);
        mpfr_mul(r9960112, r9960110, r9960111, MPFR_RNDN);
        ;
        mpfr_mul(r9960114, r9960111, r9960111, MPFR_RNDN);
        mpfr_mul(r9960115, r9960114, r9960111, MPFR_RNDN);
        mpfr_mul(r9960116, r9960113, r9960115, MPFR_RNDN);
        mpfr_add(r9960117, r9960112, r9960116, MPFR_RNDN);
        return mpfr_get_d(r9960117, MPFR_RNDN);
}

static mpfr_t r9960118, r9960119, r9960120, r9960121, r9960122, r9960123, r9960124, r9960125;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9960118, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9960119);
        mpfr_init(r9960120);
        mpfr_init_set_str(r9960121, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9960122, "3", 10, MPFR_RNDN);
        mpfr_init(r9960123);
        mpfr_init(r9960124);
        mpfr_init(r9960125);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9960119, x, MPFR_RNDN);
        mpfr_mul(r9960120, r9960118, r9960119, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9960123, r9960119, r9960122, MPFR_RNDN);
        mpfr_mul(r9960124, r9960121, r9960123, MPFR_RNDN);
        mpfr_add(r9960125, r9960120, r9960124, MPFR_RNDN);
        return mpfr_get_d(r9960125, MPFR_RNDN);
}

static mpfr_t r9960126, r9960127, r9960128, r9960129, r9960130, r9960131, r9960132, r9960133;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9960126, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9960127);
        mpfr_init(r9960128);
        mpfr_init_set_str(r9960129, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9960130, "3", 10, MPFR_RNDN);
        mpfr_init(r9960131);
        mpfr_init(r9960132);
        mpfr_init(r9960133);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9960127, x, MPFR_RNDN);
        mpfr_mul(r9960128, r9960126, r9960127, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9960131, r9960127, r9960130, MPFR_RNDN);
        mpfr_mul(r9960132, r9960129, r9960131, MPFR_RNDN);
        mpfr_add(r9960133, r9960128, r9960132, MPFR_RNDN);
        return mpfr_get_d(r9960133, MPFR_RNDN);
}

