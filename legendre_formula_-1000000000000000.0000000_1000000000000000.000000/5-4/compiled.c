#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r8032078 = 0.375;
        float r8032079 = -3.75;
        float r8032080 = x;
        float r8032081 = r8032080 * r8032080;
        float r8032082 = r8032079 * r8032081;
        float r8032083 = r8032078 + r8032082;
        float r8032084 = 4.375;
        float r8032085 = r8032081 * r8032080;
        float r8032086 = r8032085 * r8032080;
        float r8032087 = r8032084 * r8032086;
        float r8032088 = r8032083 + r8032087;
        return r8032088;
}

double f_id(double x) {
        double r8032089 = 0.375;
        double r8032090 = -3.75;
        double r8032091 = x;
        double r8032092 = r8032091 * r8032091;
        double r8032093 = r8032090 * r8032092;
        double r8032094 = r8032089 + r8032093;
        double r8032095 = 4.375;
        double r8032096 = r8032092 * r8032091;
        double r8032097 = r8032096 * r8032091;
        double r8032098 = r8032095 * r8032097;
        double r8032099 = r8032094 + r8032098;
        return r8032099;
}


double f_of(float x) {
        float r8032100 = 0.375;
        float r8032101 = x;
        float r8032102 = 4.375;
        float r8032103 = r8032101 * r8032102;
        float r8032104 = 3;
        float r8032105 = pow(r8032101, r8032104);
        float r8032106 = r8032103 * r8032105;
        float r8032107 = -3.75;
        float r8032108 = r8032101 * r8032107;
        float r8032109 = r8032108 * r8032101;
        float r8032110 = r8032106 + r8032109;
        float r8032111 = r8032100 + r8032110;
        return r8032111;
}

double f_od(double x) {
        double r8032112 = 0.375;
        double r8032113 = x;
        double r8032114 = 4.375;
        double r8032115 = r8032113 * r8032114;
        double r8032116 = 3;
        double r8032117 = pow(r8032113, r8032116);
        double r8032118 = r8032115 * r8032117;
        double r8032119 = -3.75;
        double r8032120 = r8032113 * r8032119;
        double r8032121 = r8032120 * r8032113;
        double r8032122 = r8032118 + r8032121;
        double r8032123 = r8032112 + r8032122;
        return r8032123;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8032124, r8032125, r8032126, r8032127, r8032128, r8032129, r8032130, r8032131, r8032132, r8032133, r8032134;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8032124, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r8032125, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8032126);
        mpfr_init(r8032127);
        mpfr_init(r8032128);
        mpfr_init(r8032129);
        mpfr_init_set_str(r8032130, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8032131);
        mpfr_init(r8032132);
        mpfr_init(r8032133);
        mpfr_init(r8032134);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8032126, x, MPFR_RNDN);
        mpfr_mul(r8032127, r8032126, r8032126, MPFR_RNDN);
        mpfr_mul(r8032128, r8032125, r8032127, MPFR_RNDN);
        mpfr_add(r8032129, r8032124, r8032128, MPFR_RNDN);
        ;
        mpfr_mul(r8032131, r8032127, r8032126, MPFR_RNDN);
        mpfr_mul(r8032132, r8032131, r8032126, MPFR_RNDN);
        mpfr_mul(r8032133, r8032130, r8032132, MPFR_RNDN);
        mpfr_add(r8032134, r8032129, r8032133, MPFR_RNDN);
        return mpfr_get_d(r8032134, MPFR_RNDN);
}

static mpfr_t r8032135, r8032136, r8032137, r8032138, r8032139, r8032140, r8032141, r8032142, r8032143, r8032144, r8032145, r8032146;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8032135, "0.375", 10, MPFR_RNDN);
        mpfr_init(r8032136);
        mpfr_init_set_str(r8032137, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8032138);
        mpfr_init_set_str(r8032139, "3", 10, MPFR_RNDN);
        mpfr_init(r8032140);
        mpfr_init(r8032141);
        mpfr_init_set_str(r8032142, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8032143);
        mpfr_init(r8032144);
        mpfr_init(r8032145);
        mpfr_init(r8032146);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8032136, x, MPFR_RNDN);
        ;
        mpfr_mul(r8032138, r8032136, r8032137, MPFR_RNDN);
        ;
        mpfr_pow(r8032140, r8032136, r8032139, MPFR_RNDN);
        mpfr_mul(r8032141, r8032138, r8032140, MPFR_RNDN);
        ;
        mpfr_mul(r8032143, r8032136, r8032142, MPFR_RNDN);
        mpfr_mul(r8032144, r8032143, r8032136, MPFR_RNDN);
        mpfr_add(r8032145, r8032141, r8032144, MPFR_RNDN);
        mpfr_add(r8032146, r8032135, r8032145, MPFR_RNDN);
        return mpfr_get_d(r8032146, MPFR_RNDN);
}

static mpfr_t r8032147, r8032148, r8032149, r8032150, r8032151, r8032152, r8032153, r8032154, r8032155, r8032156, r8032157, r8032158;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8032147, "0.375", 10, MPFR_RNDN);
        mpfr_init(r8032148);
        mpfr_init_set_str(r8032149, "4.375", 10, MPFR_RNDN);
        mpfr_init(r8032150);
        mpfr_init_set_str(r8032151, "3", 10, MPFR_RNDN);
        mpfr_init(r8032152);
        mpfr_init(r8032153);
        mpfr_init_set_str(r8032154, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r8032155);
        mpfr_init(r8032156);
        mpfr_init(r8032157);
        mpfr_init(r8032158);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8032148, x, MPFR_RNDN);
        ;
        mpfr_mul(r8032150, r8032148, r8032149, MPFR_RNDN);
        ;
        mpfr_pow(r8032152, r8032148, r8032151, MPFR_RNDN);
        mpfr_mul(r8032153, r8032150, r8032152, MPFR_RNDN);
        ;
        mpfr_mul(r8032155, r8032148, r8032154, MPFR_RNDN);
        mpfr_mul(r8032156, r8032155, r8032148, MPFR_RNDN);
        mpfr_add(r8032157, r8032153, r8032156, MPFR_RNDN);
        mpfr_add(r8032158, r8032147, r8032157, MPFR_RNDN);
        return mpfr_get_d(r8032158, MPFR_RNDN);
}

