#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r4678060 = 1.0;
        float r4678061 = -4.0;
        float r4678062 = x;
        float r4678063 = r4678061 * r4678062;
        float r4678064 = r4678060 + r4678063;
        float r4678065 = 3.0;
        float r4678066 = r4678062 * r4678062;
        float r4678067 = r4678065 * r4678066;
        float r4678068 = r4678064 + r4678067;
        float r4678069 = -0.666667;
        float r4678070 = r4678066 * r4678062;
        float r4678071 = r4678069 * r4678070;
        float r4678072 = r4678068 + r4678071;
        float r4678073 = 0.041667;
        float r4678074 = r4678070 * r4678062;
        float r4678075 = r4678073 * r4678074;
        float r4678076 = r4678072 + r4678075;
        return r4678076;
}

double f_id(double x) {
        double r4678077 = 1.0;
        double r4678078 = -4.0;
        double r4678079 = x;
        double r4678080 = r4678078 * r4678079;
        double r4678081 = r4678077 + r4678080;
        double r4678082 = 3.0;
        double r4678083 = r4678079 * r4678079;
        double r4678084 = r4678082 * r4678083;
        double r4678085 = r4678081 + r4678084;
        double r4678086 = -0.666667;
        double r4678087 = r4678083 * r4678079;
        double r4678088 = r4678086 * r4678087;
        double r4678089 = r4678085 + r4678088;
        double r4678090 = 0.041667;
        double r4678091 = r4678087 * r4678079;
        double r4678092 = r4678090 * r4678091;
        double r4678093 = r4678089 + r4678092;
        return r4678093;
}


double f_of(float x) {
        float r4678094 = x;
        float r4678095 = 3;
        float r4678096 = pow(r4678094, r4678095);
        float r4678097 = 0.041667;
        float r4678098 = r4678097 * r4678094;
        float r4678099 = -0.666667;
        float r4678100 = r4678098 + r4678099;
        float r4678101 = r4678096 * r4678100;
        float r4678102 = 3.0;
        float r4678103 = r4678094 * r4678102;
        float r4678104 = r4678103 * r4678094;
        float r4678105 = -4.0;
        float r4678106 = r4678094 * r4678105;
        float r4678107 = 1.0;
        float r4678108 = r4678106 + r4678107;
        float r4678109 = r4678104 + r4678108;
        float r4678110 = r4678101 + r4678109;
        return r4678110;
}

double f_od(double x) {
        double r4678111 = x;
        double r4678112 = 3;
        double r4678113 = pow(r4678111, r4678112);
        double r4678114 = 0.041667;
        double r4678115 = r4678114 * r4678111;
        double r4678116 = -0.666667;
        double r4678117 = r4678115 + r4678116;
        double r4678118 = r4678113 * r4678117;
        double r4678119 = 3.0;
        double r4678120 = r4678111 * r4678119;
        double r4678121 = r4678120 * r4678111;
        double r4678122 = -4.0;
        double r4678123 = r4678111 * r4678122;
        double r4678124 = 1.0;
        double r4678125 = r4678123 + r4678124;
        double r4678126 = r4678121 + r4678125;
        double r4678127 = r4678118 + r4678126;
        return r4678127;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4678128, r4678129, r4678130, r4678131, r4678132, r4678133, r4678134, r4678135, r4678136, r4678137, r4678138, r4678139, r4678140, r4678141, r4678142, r4678143, r4678144;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4678128, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4678129, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r4678130);
        mpfr_init(r4678131);
        mpfr_init(r4678132);
        mpfr_init_set_str(r4678133, "3.0", 10, MPFR_RNDN);
        mpfr_init(r4678134);
        mpfr_init(r4678135);
        mpfr_init(r4678136);
        mpfr_init_set_str(r4678137, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r4678138);
        mpfr_init(r4678139);
        mpfr_init(r4678140);
        mpfr_init_set_str(r4678141, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r4678142);
        mpfr_init(r4678143);
        mpfr_init(r4678144);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4678130, x, MPFR_RNDN);
        mpfr_mul(r4678131, r4678129, r4678130, MPFR_RNDN);
        mpfr_add(r4678132, r4678128, r4678131, MPFR_RNDN);
        ;
        mpfr_mul(r4678134, r4678130, r4678130, MPFR_RNDN);
        mpfr_mul(r4678135, r4678133, r4678134, MPFR_RNDN);
        mpfr_add(r4678136, r4678132, r4678135, MPFR_RNDN);
        ;
        mpfr_mul(r4678138, r4678134, r4678130, MPFR_RNDN);
        mpfr_mul(r4678139, r4678137, r4678138, MPFR_RNDN);
        mpfr_add(r4678140, r4678136, r4678139, MPFR_RNDN);
        ;
        mpfr_mul(r4678142, r4678138, r4678130, MPFR_RNDN);
        mpfr_mul(r4678143, r4678141, r4678142, MPFR_RNDN);
        mpfr_add(r4678144, r4678140, r4678143, MPFR_RNDN);
        return mpfr_get_d(r4678144, MPFR_RNDN);
}

static mpfr_t r4678145, r4678146, r4678147, r4678148, r4678149, r4678150, r4678151, r4678152, r4678153, r4678154, r4678155, r4678156, r4678157, r4678158, r4678159, r4678160, r4678161;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4678145);
        mpfr_init_set_str(r4678146, "3", 10, MPFR_RNDN);
        mpfr_init(r4678147);
        mpfr_init_set_str(r4678148, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r4678149);
        mpfr_init_set_str(r4678150, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r4678151);
        mpfr_init(r4678152);
        mpfr_init_set_str(r4678153, "3.0", 10, MPFR_RNDN);
        mpfr_init(r4678154);
        mpfr_init(r4678155);
        mpfr_init_set_str(r4678156, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r4678157);
        mpfr_init_set_str(r4678158, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4678159);
        mpfr_init(r4678160);
        mpfr_init(r4678161);
}

double f_fm(double x) {
        mpfr_set_d(r4678145, x, MPFR_RNDN);
        ;
        mpfr_pow(r4678147, r4678145, r4678146, MPFR_RNDN);
        ;
        mpfr_mul(r4678149, r4678148, r4678145, MPFR_RNDN);
        ;
        mpfr_add(r4678151, r4678149, r4678150, MPFR_RNDN);
        mpfr_mul(r4678152, r4678147, r4678151, MPFR_RNDN);
        ;
        mpfr_mul(r4678154, r4678145, r4678153, MPFR_RNDN);
        mpfr_mul(r4678155, r4678154, r4678145, MPFR_RNDN);
        ;
        mpfr_mul(r4678157, r4678145, r4678156, MPFR_RNDN);
        ;
        mpfr_add(r4678159, r4678157, r4678158, MPFR_RNDN);
        mpfr_add(r4678160, r4678155, r4678159, MPFR_RNDN);
        mpfr_add(r4678161, r4678152, r4678160, MPFR_RNDN);
        return mpfr_get_d(r4678161, MPFR_RNDN);
}

static mpfr_t r4678162, r4678163, r4678164, r4678165, r4678166, r4678167, r4678168, r4678169, r4678170, r4678171, r4678172, r4678173, r4678174, r4678175, r4678176, r4678177, r4678178;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4678162);
        mpfr_init_set_str(r4678163, "3", 10, MPFR_RNDN);
        mpfr_init(r4678164);
        mpfr_init_set_str(r4678165, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r4678166);
        mpfr_init_set_str(r4678167, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r4678168);
        mpfr_init(r4678169);
        mpfr_init_set_str(r4678170, "3.0", 10, MPFR_RNDN);
        mpfr_init(r4678171);
        mpfr_init(r4678172);
        mpfr_init_set_str(r4678173, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r4678174);
        mpfr_init_set_str(r4678175, "1.0", 10, MPFR_RNDN);
        mpfr_init(r4678176);
        mpfr_init(r4678177);
        mpfr_init(r4678178);
}

double f_dm(double x) {
        mpfr_set_d(r4678162, x, MPFR_RNDN);
        ;
        mpfr_pow(r4678164, r4678162, r4678163, MPFR_RNDN);
        ;
        mpfr_mul(r4678166, r4678165, r4678162, MPFR_RNDN);
        ;
        mpfr_add(r4678168, r4678166, r4678167, MPFR_RNDN);
        mpfr_mul(r4678169, r4678164, r4678168, MPFR_RNDN);
        ;
        mpfr_mul(r4678171, r4678162, r4678170, MPFR_RNDN);
        mpfr_mul(r4678172, r4678171, r4678162, MPFR_RNDN);
        ;
        mpfr_mul(r4678174, r4678162, r4678173, MPFR_RNDN);
        ;
        mpfr_add(r4678176, r4678174, r4678175, MPFR_RNDN);
        mpfr_add(r4678177, r4678172, r4678176, MPFR_RNDN);
        mpfr_add(r4678178, r4678169, r4678177, MPFR_RNDN);
        return mpfr_get_d(r4678178, MPFR_RNDN);
}

