#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r11626093 = -1680.0;
        float r11626094 = x;
        float r11626095 = r11626093 * r11626094;
        float r11626096 = 3360.0;
        float r11626097 = r11626094 * r11626094;
        float r11626098 = r11626097 * r11626094;
        float r11626099 = r11626096 * r11626098;
        float r11626100 = r11626095 + r11626099;
        float r11626101 = -1344.0;
        float r11626102 = r11626098 * r11626094;
        float r11626103 = r11626102 * r11626094;
        float r11626104 = r11626101 * r11626103;
        float r11626105 = r11626100 + r11626104;
        float r11626106 = 128.0;
        float r11626107 = r11626103 * r11626094;
        float r11626108 = r11626107 * r11626094;
        float r11626109 = r11626106 * r11626108;
        float r11626110 = r11626105 + r11626109;
        return r11626110;
}

double f_id(double x) {
        double r11626111 = -1680.0;
        double r11626112 = x;
        double r11626113 = r11626111 * r11626112;
        double r11626114 = 3360.0;
        double r11626115 = r11626112 * r11626112;
        double r11626116 = r11626115 * r11626112;
        double r11626117 = r11626114 * r11626116;
        double r11626118 = r11626113 + r11626117;
        double r11626119 = -1344.0;
        double r11626120 = r11626116 * r11626112;
        double r11626121 = r11626120 * r11626112;
        double r11626122 = r11626119 * r11626121;
        double r11626123 = r11626118 + r11626122;
        double r11626124 = 128.0;
        double r11626125 = r11626121 * r11626112;
        double r11626126 = r11626125 * r11626112;
        double r11626127 = r11626124 * r11626126;
        double r11626128 = r11626123 + r11626127;
        return r11626128;
}


double f_of(float x) {
        float r11626129 = x;
        float r11626130 = 2;
        float r11626131 = r11626130 + r11626130;
        float r11626132 = pow(r11626129, r11626131);
        float r11626133 = r11626129 * r11626129;
        float r11626134 = 128.0;
        float r11626135 = r11626134 * r11626129;
        float r11626136 = r11626133 * r11626135;
        float r11626137 = -1344.0;
        float r11626138 = r11626129 * r11626137;
        float r11626139 = r11626136 + r11626138;
        float r11626140 = r11626132 * r11626139;
        float r11626141 = -1680.0;
        float r11626142 = r11626141 * r11626129;
        float r11626143 = 3360.0;
        float r11626144 = r11626143 * r11626129;
        float r11626145 = r11626133 * r11626144;
        float r11626146 = r11626142 + r11626145;
        float r11626147 = r11626140 + r11626146;
        return r11626147;
}

double f_od(double x) {
        double r11626148 = x;
        double r11626149 = 2;
        double r11626150 = r11626149 + r11626149;
        double r11626151 = pow(r11626148, r11626150);
        double r11626152 = r11626148 * r11626148;
        double r11626153 = 128.0;
        double r11626154 = r11626153 * r11626148;
        double r11626155 = r11626152 * r11626154;
        double r11626156 = -1344.0;
        double r11626157 = r11626148 * r11626156;
        double r11626158 = r11626155 + r11626157;
        double r11626159 = r11626151 * r11626158;
        double r11626160 = -1680.0;
        double r11626161 = r11626160 * r11626148;
        double r11626162 = 3360.0;
        double r11626163 = r11626162 * r11626148;
        double r11626164 = r11626152 * r11626163;
        double r11626165 = r11626161 + r11626164;
        double r11626166 = r11626159 + r11626165;
        return r11626166;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11626167, r11626168, r11626169, r11626170, r11626171, r11626172, r11626173, r11626174, r11626175, r11626176, r11626177, r11626178, r11626179, r11626180, r11626181, r11626182, r11626183, r11626184;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r11626167, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r11626168);
        mpfr_init(r11626169);
        mpfr_init_set_str(r11626170, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r11626171);
        mpfr_init(r11626172);
        mpfr_init(r11626173);
        mpfr_init(r11626174);
        mpfr_init_set_str(r11626175, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r11626176);
        mpfr_init(r11626177);
        mpfr_init(r11626178);
        mpfr_init(r11626179);
        mpfr_init_set_str(r11626180, "128.0", 10, MPFR_RNDN);
        mpfr_init(r11626181);
        mpfr_init(r11626182);
        mpfr_init(r11626183);
        mpfr_init(r11626184);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11626168, x, MPFR_RNDN);
        mpfr_mul(r11626169, r11626167, r11626168, MPFR_RNDN);
        ;
        mpfr_mul(r11626171, r11626168, r11626168, MPFR_RNDN);
        mpfr_mul(r11626172, r11626171, r11626168, MPFR_RNDN);
        mpfr_mul(r11626173, r11626170, r11626172, MPFR_RNDN);
        mpfr_add(r11626174, r11626169, r11626173, MPFR_RNDN);
        ;
        mpfr_mul(r11626176, r11626172, r11626168, MPFR_RNDN);
        mpfr_mul(r11626177, r11626176, r11626168, MPFR_RNDN);
        mpfr_mul(r11626178, r11626175, r11626177, MPFR_RNDN);
        mpfr_add(r11626179, r11626174, r11626178, MPFR_RNDN);
        ;
        mpfr_mul(r11626181, r11626177, r11626168, MPFR_RNDN);
        mpfr_mul(r11626182, r11626181, r11626168, MPFR_RNDN);
        mpfr_mul(r11626183, r11626180, r11626182, MPFR_RNDN);
        mpfr_add(r11626184, r11626179, r11626183, MPFR_RNDN);
        return mpfr_get_d(r11626184, MPFR_RNDN);
}

static mpfr_t r11626185, r11626186, r11626187, r11626188, r11626189, r11626190, r11626191, r11626192, r11626193, r11626194, r11626195, r11626196, r11626197, r11626198, r11626199, r11626200, r11626201, r11626202, r11626203;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r11626185);
        mpfr_init_set_str(r11626186, "2", 10, MPFR_RNDN);
        mpfr_init(r11626187);
        mpfr_init(r11626188);
        mpfr_init(r11626189);
        mpfr_init_set_str(r11626190, "128.0", 10, MPFR_RNDN);
        mpfr_init(r11626191);
        mpfr_init(r11626192);
        mpfr_init_set_str(r11626193, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r11626194);
        mpfr_init(r11626195);
        mpfr_init(r11626196);
        mpfr_init_set_str(r11626197, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r11626198);
        mpfr_init_set_str(r11626199, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r11626200);
        mpfr_init(r11626201);
        mpfr_init(r11626202);
        mpfr_init(r11626203);
}

double f_fm(double x) {
        mpfr_set_d(r11626185, x, MPFR_RNDN);
        ;
        mpfr_add(r11626187, r11626186, r11626186, MPFR_RNDN);
        mpfr_pow(r11626188, r11626185, r11626187, MPFR_RNDN);
        mpfr_mul(r11626189, r11626185, r11626185, MPFR_RNDN);
        ;
        mpfr_mul(r11626191, r11626190, r11626185, MPFR_RNDN);
        mpfr_mul(r11626192, r11626189, r11626191, MPFR_RNDN);
        ;
        mpfr_mul(r11626194, r11626185, r11626193, MPFR_RNDN);
        mpfr_add(r11626195, r11626192, r11626194, MPFR_RNDN);
        mpfr_mul(r11626196, r11626188, r11626195, MPFR_RNDN);
        ;
        mpfr_mul(r11626198, r11626197, r11626185, MPFR_RNDN);
        ;
        mpfr_mul(r11626200, r11626199, r11626185, MPFR_RNDN);
        mpfr_mul(r11626201, r11626189, r11626200, MPFR_RNDN);
        mpfr_add(r11626202, r11626198, r11626201, MPFR_RNDN);
        mpfr_add(r11626203, r11626196, r11626202, MPFR_RNDN);
        return mpfr_get_d(r11626203, MPFR_RNDN);
}

static mpfr_t r11626204, r11626205, r11626206, r11626207, r11626208, r11626209, r11626210, r11626211, r11626212, r11626213, r11626214, r11626215, r11626216, r11626217, r11626218, r11626219, r11626220, r11626221, r11626222;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r11626204);
        mpfr_init_set_str(r11626205, "2", 10, MPFR_RNDN);
        mpfr_init(r11626206);
        mpfr_init(r11626207);
        mpfr_init(r11626208);
        mpfr_init_set_str(r11626209, "128.0", 10, MPFR_RNDN);
        mpfr_init(r11626210);
        mpfr_init(r11626211);
        mpfr_init_set_str(r11626212, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r11626213);
        mpfr_init(r11626214);
        mpfr_init(r11626215);
        mpfr_init_set_str(r11626216, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r11626217);
        mpfr_init_set_str(r11626218, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r11626219);
        mpfr_init(r11626220);
        mpfr_init(r11626221);
        mpfr_init(r11626222);
}

double f_dm(double x) {
        mpfr_set_d(r11626204, x, MPFR_RNDN);
        ;
        mpfr_add(r11626206, r11626205, r11626205, MPFR_RNDN);
        mpfr_pow(r11626207, r11626204, r11626206, MPFR_RNDN);
        mpfr_mul(r11626208, r11626204, r11626204, MPFR_RNDN);
        ;
        mpfr_mul(r11626210, r11626209, r11626204, MPFR_RNDN);
        mpfr_mul(r11626211, r11626208, r11626210, MPFR_RNDN);
        ;
        mpfr_mul(r11626213, r11626204, r11626212, MPFR_RNDN);
        mpfr_add(r11626214, r11626211, r11626213, MPFR_RNDN);
        mpfr_mul(r11626215, r11626207, r11626214, MPFR_RNDN);
        ;
        mpfr_mul(r11626217, r11626216, r11626204, MPFR_RNDN);
        ;
        mpfr_mul(r11626219, r11626218, r11626204, MPFR_RNDN);
        mpfr_mul(r11626220, r11626208, r11626219, MPFR_RNDN);
        mpfr_add(r11626221, r11626217, r11626220, MPFR_RNDN);
        mpfr_add(r11626222, r11626215, r11626221, MPFR_RNDN);
        return mpfr_get_d(r11626222, MPFR_RNDN);
}

