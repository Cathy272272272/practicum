#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r11054053 = 1680.0;
        float r11054054 = -13440.0;
        float r11054055 = x;
        float r11054056 = r11054055 * r11054055;
        float r11054057 = r11054054 * r11054056;
        float r11054058 = r11054053 + r11054057;
        float r11054059 = 13440.0;
        float r11054060 = r11054056 * r11054055;
        float r11054061 = r11054060 * r11054055;
        float r11054062 = r11054059 * r11054061;
        float r11054063 = r11054058 + r11054062;
        float r11054064 = -3584.0;
        float r11054065 = r11054061 * r11054055;
        float r11054066 = r11054065 * r11054055;
        float r11054067 = r11054064 * r11054066;
        float r11054068 = r11054063 + r11054067;
        float r11054069 = 256.0;
        float r11054070 = r11054066 * r11054055;
        float r11054071 = r11054070 * r11054055;
        float r11054072 = r11054069 * r11054071;
        float r11054073 = r11054068 + r11054072;
        return r11054073;
}

double f_id(double x) {
        double r11054074 = 1680.0;
        double r11054075 = -13440.0;
        double r11054076 = x;
        double r11054077 = r11054076 * r11054076;
        double r11054078 = r11054075 * r11054077;
        double r11054079 = r11054074 + r11054078;
        double r11054080 = 13440.0;
        double r11054081 = r11054077 * r11054076;
        double r11054082 = r11054081 * r11054076;
        double r11054083 = r11054080 * r11054082;
        double r11054084 = r11054079 + r11054083;
        double r11054085 = -3584.0;
        double r11054086 = r11054082 * r11054076;
        double r11054087 = r11054086 * r11054076;
        double r11054088 = r11054085 * r11054087;
        double r11054089 = r11054084 + r11054088;
        double r11054090 = 256.0;
        double r11054091 = r11054087 * r11054076;
        double r11054092 = r11054091 * r11054076;
        double r11054093 = r11054090 * r11054092;
        double r11054094 = r11054089 + r11054093;
        return r11054094;
}


double f_of(float x) {
        float r11054095 = x;
        float r11054096 = 13440.0;
        float r11054097 = r11054095 * r11054096;
        float r11054098 = 3;
        float r11054099 = pow(r11054095, r11054098);
        float r11054100 = r11054097 * r11054099;
        float r11054101 = -13440.0;
        float r11054102 = r11054095 * r11054101;
        float r11054103 = r11054095 * r11054102;
        float r11054104 = r11054100 + r11054103;
        float r11054105 = 1680.0;
        float r11054106 = r11054104 + r11054105;
        float r11054107 = 256.0;
        float r11054108 = r11054107 * r11054095;
        float r11054109 = r11054095 * r11054108;
        float r11054110 = -3584.0;
        float r11054111 = r11054109 + r11054110;
        float r11054112 = r11054111 * r11054111;
        float r11054113 = pow(r11054099, r11054098);
        float r11054114 = r11054113 * r11054113;
        float r11054115 = r11054111 * r11054114;
        float r11054116 = r11054112 * r11054115;
        float r11054117 = cbrt(r11054116);
        float r11054118 = r11054106 + r11054117;
        return r11054118;
}

double f_od(double x) {
        double r11054119 = x;
        double r11054120 = 13440.0;
        double r11054121 = r11054119 * r11054120;
        double r11054122 = 3;
        double r11054123 = pow(r11054119, r11054122);
        double r11054124 = r11054121 * r11054123;
        double r11054125 = -13440.0;
        double r11054126 = r11054119 * r11054125;
        double r11054127 = r11054119 * r11054126;
        double r11054128 = r11054124 + r11054127;
        double r11054129 = 1680.0;
        double r11054130 = r11054128 + r11054129;
        double r11054131 = 256.0;
        double r11054132 = r11054131 * r11054119;
        double r11054133 = r11054119 * r11054132;
        double r11054134 = -3584.0;
        double r11054135 = r11054133 + r11054134;
        double r11054136 = r11054135 * r11054135;
        double r11054137 = pow(r11054123, r11054122);
        double r11054138 = r11054137 * r11054137;
        double r11054139 = r11054135 * r11054138;
        double r11054140 = r11054136 * r11054139;
        double r11054141 = cbrt(r11054140);
        double r11054142 = r11054130 + r11054141;
        return r11054142;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11054143, r11054144, r11054145, r11054146, r11054147, r11054148, r11054149, r11054150, r11054151, r11054152, r11054153, r11054154, r11054155, r11054156, r11054157, r11054158, r11054159, r11054160, r11054161, r11054162, r11054163;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11054143, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11054144, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r11054145);
        mpfr_init(r11054146);
        mpfr_init(r11054147);
        mpfr_init(r11054148);
        mpfr_init_set_str(r11054149, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r11054150);
        mpfr_init(r11054151);
        mpfr_init(r11054152);
        mpfr_init(r11054153);
        mpfr_init_set_str(r11054154, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r11054155);
        mpfr_init(r11054156);
        mpfr_init(r11054157);
        mpfr_init(r11054158);
        mpfr_init_set_str(r11054159, "256.0", 10, MPFR_RNDN);
        mpfr_init(r11054160);
        mpfr_init(r11054161);
        mpfr_init(r11054162);
        mpfr_init(r11054163);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11054145, x, MPFR_RNDN);
        mpfr_mul(r11054146, r11054145, r11054145, MPFR_RNDN);
        mpfr_mul(r11054147, r11054144, r11054146, MPFR_RNDN);
        mpfr_add(r11054148, r11054143, r11054147, MPFR_RNDN);
        ;
        mpfr_mul(r11054150, r11054146, r11054145, MPFR_RNDN);
        mpfr_mul(r11054151, r11054150, r11054145, MPFR_RNDN);
        mpfr_mul(r11054152, r11054149, r11054151, MPFR_RNDN);
        mpfr_add(r11054153, r11054148, r11054152, MPFR_RNDN);
        ;
        mpfr_mul(r11054155, r11054151, r11054145, MPFR_RNDN);
        mpfr_mul(r11054156, r11054155, r11054145, MPFR_RNDN);
        mpfr_mul(r11054157, r11054154, r11054156, MPFR_RNDN);
        mpfr_add(r11054158, r11054153, r11054157, MPFR_RNDN);
        ;
        mpfr_mul(r11054160, r11054156, r11054145, MPFR_RNDN);
        mpfr_mul(r11054161, r11054160, r11054145, MPFR_RNDN);
        mpfr_mul(r11054162, r11054159, r11054161, MPFR_RNDN);
        mpfr_add(r11054163, r11054158, r11054162, MPFR_RNDN);
        return mpfr_get_d(r11054163, MPFR_RNDN);
}

static mpfr_t r11054164, r11054165, r11054166, r11054167, r11054168, r11054169, r11054170, r11054171, r11054172, r11054173, r11054174, r11054175, r11054176, r11054177, r11054178, r11054179, r11054180, r11054181, r11054182, r11054183, r11054184, r11054185, r11054186, r11054187;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11054164);
        mpfr_init_set_str(r11054165, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r11054166);
        mpfr_init_set_str(r11054167, "3", 10, MPFR_RNDN);
        mpfr_init(r11054168);
        mpfr_init(r11054169);
        mpfr_init_set_str(r11054170, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r11054171);
        mpfr_init(r11054172);
        mpfr_init(r11054173);
        mpfr_init_set_str(r11054174, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r11054175);
        mpfr_init_set_str(r11054176, "256.0", 10, MPFR_RNDN);
        mpfr_init(r11054177);
        mpfr_init(r11054178);
        mpfr_init_set_str(r11054179, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r11054180);
        mpfr_init(r11054181);
        mpfr_init(r11054182);
        mpfr_init(r11054183);
        mpfr_init(r11054184);
        mpfr_init(r11054185);
        mpfr_init(r11054186);
        mpfr_init(r11054187);
}

double f_fm(double x) {
        mpfr_set_d(r11054164, x, MPFR_RNDN);
        ;
        mpfr_mul(r11054166, r11054164, r11054165, MPFR_RNDN);
        ;
        mpfr_pow(r11054168, r11054164, r11054167, MPFR_RNDN);
        mpfr_mul(r11054169, r11054166, r11054168, MPFR_RNDN);
        ;
        mpfr_mul(r11054171, r11054164, r11054170, MPFR_RNDN);
        mpfr_mul(r11054172, r11054164, r11054171, MPFR_RNDN);
        mpfr_add(r11054173, r11054169, r11054172, MPFR_RNDN);
        ;
        mpfr_add(r11054175, r11054173, r11054174, MPFR_RNDN);
        ;
        mpfr_mul(r11054177, r11054176, r11054164, MPFR_RNDN);
        mpfr_mul(r11054178, r11054164, r11054177, MPFR_RNDN);
        ;
        mpfr_add(r11054180, r11054178, r11054179, MPFR_RNDN);
        mpfr_mul(r11054181, r11054180, r11054180, MPFR_RNDN);
        mpfr_pow(r11054182, r11054168, r11054167, MPFR_RNDN);
        mpfr_mul(r11054183, r11054182, r11054182, MPFR_RNDN);
        mpfr_mul(r11054184, r11054180, r11054183, MPFR_RNDN);
        mpfr_mul(r11054185, r11054181, r11054184, MPFR_RNDN);
        mpfr_cbrt(r11054186, r11054185, MPFR_RNDN);
        mpfr_add(r11054187, r11054175, r11054186, MPFR_RNDN);
        return mpfr_get_d(r11054187, MPFR_RNDN);
}

static mpfr_t r11054188, r11054189, r11054190, r11054191, r11054192, r11054193, r11054194, r11054195, r11054196, r11054197, r11054198, r11054199, r11054200, r11054201, r11054202, r11054203, r11054204, r11054205, r11054206, r11054207, r11054208, r11054209, r11054210, r11054211;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r11054188);
        mpfr_init_set_str(r11054189, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r11054190);
        mpfr_init_set_str(r11054191, "3", 10, MPFR_RNDN);
        mpfr_init(r11054192);
        mpfr_init(r11054193);
        mpfr_init_set_str(r11054194, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r11054195);
        mpfr_init(r11054196);
        mpfr_init(r11054197);
        mpfr_init_set_str(r11054198, "1680.0", 10, MPFR_RNDN);
        mpfr_init(r11054199);
        mpfr_init_set_str(r11054200, "256.0", 10, MPFR_RNDN);
        mpfr_init(r11054201);
        mpfr_init(r11054202);
        mpfr_init_set_str(r11054203, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r11054204);
        mpfr_init(r11054205);
        mpfr_init(r11054206);
        mpfr_init(r11054207);
        mpfr_init(r11054208);
        mpfr_init(r11054209);
        mpfr_init(r11054210);
        mpfr_init(r11054211);
}

double f_dm(double x) {
        mpfr_set_d(r11054188, x, MPFR_RNDN);
        ;
        mpfr_mul(r11054190, r11054188, r11054189, MPFR_RNDN);
        ;
        mpfr_pow(r11054192, r11054188, r11054191, MPFR_RNDN);
        mpfr_mul(r11054193, r11054190, r11054192, MPFR_RNDN);
        ;
        mpfr_mul(r11054195, r11054188, r11054194, MPFR_RNDN);
        mpfr_mul(r11054196, r11054188, r11054195, MPFR_RNDN);
        mpfr_add(r11054197, r11054193, r11054196, MPFR_RNDN);
        ;
        mpfr_add(r11054199, r11054197, r11054198, MPFR_RNDN);
        ;
        mpfr_mul(r11054201, r11054200, r11054188, MPFR_RNDN);
        mpfr_mul(r11054202, r11054188, r11054201, MPFR_RNDN);
        ;
        mpfr_add(r11054204, r11054202, r11054203, MPFR_RNDN);
        mpfr_mul(r11054205, r11054204, r11054204, MPFR_RNDN);
        mpfr_pow(r11054206, r11054192, r11054191, MPFR_RNDN);
        mpfr_mul(r11054207, r11054206, r11054206, MPFR_RNDN);
        mpfr_mul(r11054208, r11054204, r11054207, MPFR_RNDN);
        mpfr_mul(r11054209, r11054205, r11054208, MPFR_RNDN);
        mpfr_cbrt(r11054210, r11054209, MPFR_RNDN);
        mpfr_add(r11054211, r11054199, r11054210, MPFR_RNDN);
        return mpfr_get_d(r11054211, MPFR_RNDN);
}

