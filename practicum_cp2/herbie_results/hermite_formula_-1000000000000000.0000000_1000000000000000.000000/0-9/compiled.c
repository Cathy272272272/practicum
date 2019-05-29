#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r8953047 = 30240.0;
        float r8953048 = x;
        float r8953049 = r8953047 * r8953048;
        float r8953050 = -80640.0;
        float r8953051 = r8953048 * r8953048;
        float r8953052 = r8953051 * r8953048;
        float r8953053 = r8953050 * r8953052;
        float r8953054 = r8953049 + r8953053;
        float r8953055 = 48384.0;
        float r8953056 = r8953052 * r8953048;
        float r8953057 = r8953056 * r8953048;
        float r8953058 = r8953055 * r8953057;
        float r8953059 = r8953054 + r8953058;
        float r8953060 = -9216.0;
        float r8953061 = r8953057 * r8953048;
        float r8953062 = r8953061 * r8953048;
        float r8953063 = r8953060 * r8953062;
        float r8953064 = r8953059 + r8953063;
        float r8953065 = 512.0;
        float r8953066 = r8953062 * r8953048;
        float r8953067 = r8953066 * r8953048;
        float r8953068 = r8953065 * r8953067;
        float r8953069 = r8953064 + r8953068;
        return r8953069;
}

double f_id(double x) {
        double r8953070 = 30240.0;
        double r8953071 = x;
        double r8953072 = r8953070 * r8953071;
        double r8953073 = -80640.0;
        double r8953074 = r8953071 * r8953071;
        double r8953075 = r8953074 * r8953071;
        double r8953076 = r8953073 * r8953075;
        double r8953077 = r8953072 + r8953076;
        double r8953078 = 48384.0;
        double r8953079 = r8953075 * r8953071;
        double r8953080 = r8953079 * r8953071;
        double r8953081 = r8953078 * r8953080;
        double r8953082 = r8953077 + r8953081;
        double r8953083 = -9216.0;
        double r8953084 = r8953080 * r8953071;
        double r8953085 = r8953084 * r8953071;
        double r8953086 = r8953083 * r8953085;
        double r8953087 = r8953082 + r8953086;
        double r8953088 = 512.0;
        double r8953089 = r8953085 * r8953071;
        double r8953090 = r8953089 * r8953071;
        double r8953091 = r8953088 * r8953090;
        double r8953092 = r8953087 + r8953091;
        return r8953092;
}


double f_of(float x) {
        float r8953093 = 30240.0;
        float r8953094 = x;
        float r8953095 = r8953093 * r8953094;
        float r8953096 = -80640.0;
        float r8953097 = r8953094 * r8953094;
        float r8953098 = r8953097 * r8953094;
        float r8953099 = r8953096 * r8953098;
        float r8953100 = r8953095 + r8953099;
        float r8953101 = 48384.0;
        float r8953102 = r8953098 * r8953094;
        float r8953103 = r8953102 * r8953094;
        float r8953104 = r8953101 * r8953103;
        float r8953105 = r8953100 + r8953104;
        float r8953106 = -9216.0;
        float r8953107 = r8953103 * r8953094;
        float r8953108 = r8953107 * r8953094;
        float r8953109 = r8953106 * r8953108;
        float r8953110 = r8953105 + r8953109;
        float r8953111 = 512.0;
        float r8953112 = 3;
        float r8953113 = 1;
        float r8953114 = r8953112 + r8953113;
        float r8953115 = r8953114 + r8953113;
        float r8953116 = pow(r8953094, r8953115);
        float r8953117 = r8953116 * r8953094;
        float r8953118 = r8953117 * r8953094;
        float r8953119 = r8953118 * r8953094;
        float r8953120 = r8953119 * r8953094;
        float r8953121 = r8953111 * r8953120;
        float r8953122 = r8953110 + r8953121;
        return r8953122;
}

double f_od(double x) {
        double r8953123 = 30240.0;
        double r8953124 = x;
        double r8953125 = r8953123 * r8953124;
        double r8953126 = -80640.0;
        double r8953127 = r8953124 * r8953124;
        double r8953128 = r8953127 * r8953124;
        double r8953129 = r8953126 * r8953128;
        double r8953130 = r8953125 + r8953129;
        double r8953131 = 48384.0;
        double r8953132 = r8953128 * r8953124;
        double r8953133 = r8953132 * r8953124;
        double r8953134 = r8953131 * r8953133;
        double r8953135 = r8953130 + r8953134;
        double r8953136 = -9216.0;
        double r8953137 = r8953133 * r8953124;
        double r8953138 = r8953137 * r8953124;
        double r8953139 = r8953136 * r8953138;
        double r8953140 = r8953135 + r8953139;
        double r8953141 = 512.0;
        double r8953142 = 3;
        double r8953143 = 1;
        double r8953144 = r8953142 + r8953143;
        double r8953145 = r8953144 + r8953143;
        double r8953146 = pow(r8953124, r8953145);
        double r8953147 = r8953146 * r8953124;
        double r8953148 = r8953147 * r8953124;
        double r8953149 = r8953148 * r8953124;
        double r8953150 = r8953149 * r8953124;
        double r8953151 = r8953141 * r8953150;
        double r8953152 = r8953140 + r8953151;
        return r8953152;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953153, r8953154, r8953155, r8953156, r8953157, r8953158, r8953159, r8953160, r8953161, r8953162, r8953163, r8953164, r8953165, r8953166, r8953167, r8953168, r8953169, r8953170, r8953171, r8953172, r8953173, r8953174, r8953175;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8953153, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r8953154);
        mpfr_init(r8953155);
        mpfr_init_set_str(r8953156, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r8953157);
        mpfr_init(r8953158);
        mpfr_init(r8953159);
        mpfr_init(r8953160);
        mpfr_init_set_str(r8953161, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r8953162);
        mpfr_init(r8953163);
        mpfr_init(r8953164);
        mpfr_init(r8953165);
        mpfr_init_set_str(r8953166, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r8953167);
        mpfr_init(r8953168);
        mpfr_init(r8953169);
        mpfr_init(r8953170);
        mpfr_init_set_str(r8953171, "512.0", 10, MPFR_RNDN);
        mpfr_init(r8953172);
        mpfr_init(r8953173);
        mpfr_init(r8953174);
        mpfr_init(r8953175);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8953154, x, MPFR_RNDN);
        mpfr_mul(r8953155, r8953153, r8953154, MPFR_RNDN);
        ;
        mpfr_mul(r8953157, r8953154, r8953154, MPFR_RNDN);
        mpfr_mul(r8953158, r8953157, r8953154, MPFR_RNDN);
        mpfr_mul(r8953159, r8953156, r8953158, MPFR_RNDN);
        mpfr_add(r8953160, r8953155, r8953159, MPFR_RNDN);
        ;
        mpfr_mul(r8953162, r8953158, r8953154, MPFR_RNDN);
        mpfr_mul(r8953163, r8953162, r8953154, MPFR_RNDN);
        mpfr_mul(r8953164, r8953161, r8953163, MPFR_RNDN);
        mpfr_add(r8953165, r8953160, r8953164, MPFR_RNDN);
        ;
        mpfr_mul(r8953167, r8953163, r8953154, MPFR_RNDN);
        mpfr_mul(r8953168, r8953167, r8953154, MPFR_RNDN);
        mpfr_mul(r8953169, r8953166, r8953168, MPFR_RNDN);
        mpfr_add(r8953170, r8953165, r8953169, MPFR_RNDN);
        ;
        mpfr_mul(r8953172, r8953168, r8953154, MPFR_RNDN);
        mpfr_mul(r8953173, r8953172, r8953154, MPFR_RNDN);
        mpfr_mul(r8953174, r8953171, r8953173, MPFR_RNDN);
        mpfr_add(r8953175, r8953170, r8953174, MPFR_RNDN);
        return mpfr_get_d(r8953175, MPFR_RNDN);
}

static mpfr_t r8953176, r8953177, r8953178, r8953179, r8953180, r8953181, r8953182, r8953183, r8953184, r8953185, r8953186, r8953187, r8953188, r8953189, r8953190, r8953191, r8953192, r8953193, r8953194, r8953195, r8953196, r8953197, r8953198, r8953199, r8953200, r8953201, r8953202, r8953203, r8953204, r8953205;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8953176, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r8953177);
        mpfr_init(r8953178);
        mpfr_init_set_str(r8953179, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r8953180);
        mpfr_init(r8953181);
        mpfr_init(r8953182);
        mpfr_init(r8953183);
        mpfr_init_set_str(r8953184, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r8953185);
        mpfr_init(r8953186);
        mpfr_init(r8953187);
        mpfr_init(r8953188);
        mpfr_init_set_str(r8953189, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r8953190);
        mpfr_init(r8953191);
        mpfr_init(r8953192);
        mpfr_init(r8953193);
        mpfr_init_set_str(r8953194, "512.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953195, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953196, "1", 10, MPFR_RNDN);
        mpfr_init(r8953197);
        mpfr_init(r8953198);
        mpfr_init(r8953199);
        mpfr_init(r8953200);
        mpfr_init(r8953201);
        mpfr_init(r8953202);
        mpfr_init(r8953203);
        mpfr_init(r8953204);
        mpfr_init(r8953205);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8953177, x, MPFR_RNDN);
        mpfr_mul(r8953178, r8953176, r8953177, MPFR_RNDN);
        ;
        mpfr_mul(r8953180, r8953177, r8953177, MPFR_RNDN);
        mpfr_mul(r8953181, r8953180, r8953177, MPFR_RNDN);
        mpfr_mul(r8953182, r8953179, r8953181, MPFR_RNDN);
        mpfr_add(r8953183, r8953178, r8953182, MPFR_RNDN);
        ;
        mpfr_mul(r8953185, r8953181, r8953177, MPFR_RNDN);
        mpfr_mul(r8953186, r8953185, r8953177, MPFR_RNDN);
        mpfr_mul(r8953187, r8953184, r8953186, MPFR_RNDN);
        mpfr_add(r8953188, r8953183, r8953187, MPFR_RNDN);
        ;
        mpfr_mul(r8953190, r8953186, r8953177, MPFR_RNDN);
        mpfr_mul(r8953191, r8953190, r8953177, MPFR_RNDN);
        mpfr_mul(r8953192, r8953189, r8953191, MPFR_RNDN);
        mpfr_add(r8953193, r8953188, r8953192, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8953197, r8953195, r8953196, MPFR_RNDN);
        mpfr_add(r8953198, r8953197, r8953196, MPFR_RNDN);
        mpfr_pow(r8953199, r8953177, r8953198, MPFR_RNDN);
        mpfr_mul(r8953200, r8953199, r8953177, MPFR_RNDN);
        mpfr_mul(r8953201, r8953200, r8953177, MPFR_RNDN);
        mpfr_mul(r8953202, r8953201, r8953177, MPFR_RNDN);
        mpfr_mul(r8953203, r8953202, r8953177, MPFR_RNDN);
        mpfr_mul(r8953204, r8953194, r8953203, MPFR_RNDN);
        mpfr_add(r8953205, r8953193, r8953204, MPFR_RNDN);
        return mpfr_get_d(r8953205, MPFR_RNDN);
}

static mpfr_t r8953206, r8953207, r8953208, r8953209, r8953210, r8953211, r8953212, r8953213, r8953214, r8953215, r8953216, r8953217, r8953218, r8953219, r8953220, r8953221, r8953222, r8953223, r8953224, r8953225, r8953226, r8953227, r8953228, r8953229, r8953230, r8953231, r8953232, r8953233, r8953234, r8953235;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8953206, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r8953207);
        mpfr_init(r8953208);
        mpfr_init_set_str(r8953209, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r8953210);
        mpfr_init(r8953211);
        mpfr_init(r8953212);
        mpfr_init(r8953213);
        mpfr_init_set_str(r8953214, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r8953215);
        mpfr_init(r8953216);
        mpfr_init(r8953217);
        mpfr_init(r8953218);
        mpfr_init_set_str(r8953219, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r8953220);
        mpfr_init(r8953221);
        mpfr_init(r8953222);
        mpfr_init(r8953223);
        mpfr_init_set_str(r8953224, "512.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953225, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953226, "1", 10, MPFR_RNDN);
        mpfr_init(r8953227);
        mpfr_init(r8953228);
        mpfr_init(r8953229);
        mpfr_init(r8953230);
        mpfr_init(r8953231);
        mpfr_init(r8953232);
        mpfr_init(r8953233);
        mpfr_init(r8953234);
        mpfr_init(r8953235);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8953207, x, MPFR_RNDN);
        mpfr_mul(r8953208, r8953206, r8953207, MPFR_RNDN);
        ;
        mpfr_mul(r8953210, r8953207, r8953207, MPFR_RNDN);
        mpfr_mul(r8953211, r8953210, r8953207, MPFR_RNDN);
        mpfr_mul(r8953212, r8953209, r8953211, MPFR_RNDN);
        mpfr_add(r8953213, r8953208, r8953212, MPFR_RNDN);
        ;
        mpfr_mul(r8953215, r8953211, r8953207, MPFR_RNDN);
        mpfr_mul(r8953216, r8953215, r8953207, MPFR_RNDN);
        mpfr_mul(r8953217, r8953214, r8953216, MPFR_RNDN);
        mpfr_add(r8953218, r8953213, r8953217, MPFR_RNDN);
        ;
        mpfr_mul(r8953220, r8953216, r8953207, MPFR_RNDN);
        mpfr_mul(r8953221, r8953220, r8953207, MPFR_RNDN);
        mpfr_mul(r8953222, r8953219, r8953221, MPFR_RNDN);
        mpfr_add(r8953223, r8953218, r8953222, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r8953227, r8953225, r8953226, MPFR_RNDN);
        mpfr_add(r8953228, r8953227, r8953226, MPFR_RNDN);
        mpfr_pow(r8953229, r8953207, r8953228, MPFR_RNDN);
        mpfr_mul(r8953230, r8953229, r8953207, MPFR_RNDN);
        mpfr_mul(r8953231, r8953230, r8953207, MPFR_RNDN);
        mpfr_mul(r8953232, r8953231, r8953207, MPFR_RNDN);
        mpfr_mul(r8953233, r8953232, r8953207, MPFR_RNDN);
        mpfr_mul(r8953234, r8953224, r8953233, MPFR_RNDN);
        mpfr_add(r8953235, r8953223, r8953234, MPFR_RNDN);
        return mpfr_get_d(r8953235, MPFR_RNDN);
}

