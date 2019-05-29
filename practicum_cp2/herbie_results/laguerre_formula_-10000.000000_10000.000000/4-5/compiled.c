#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r10744099 = 1.0;
        float r10744100 = -5.0;
        float r10744101 = x;
        float r10744102 = r10744100 * r10744101;
        float r10744103 = r10744099 + r10744102;
        float r10744104 = 5.0;
        float r10744105 = r10744101 * r10744101;
        float r10744106 = r10744104 * r10744105;
        float r10744107 = r10744103 + r10744106;
        float r10744108 = -1.666667;
        float r10744109 = r10744105 * r10744101;
        float r10744110 = r10744108 * r10744109;
        float r10744111 = r10744107 + r10744110;
        float r10744112 = 0.208333;
        float r10744113 = r10744109 * r10744101;
        float r10744114 = r10744112 * r10744113;
        float r10744115 = r10744111 + r10744114;
        float r10744116 = -0.008333;
        float r10744117 = r10744113 * r10744101;
        float r10744118 = r10744116 * r10744117;
        float r10744119 = r10744115 + r10744118;
        return r10744119;
}

double f_id(double x) {
        double r10744120 = 1.0;
        double r10744121 = -5.0;
        double r10744122 = x;
        double r10744123 = r10744121 * r10744122;
        double r10744124 = r10744120 + r10744123;
        double r10744125 = 5.0;
        double r10744126 = r10744122 * r10744122;
        double r10744127 = r10744125 * r10744126;
        double r10744128 = r10744124 + r10744127;
        double r10744129 = -1.666667;
        double r10744130 = r10744126 * r10744122;
        double r10744131 = r10744129 * r10744130;
        double r10744132 = r10744128 + r10744131;
        double r10744133 = 0.208333;
        double r10744134 = r10744130 * r10744122;
        double r10744135 = r10744133 * r10744134;
        double r10744136 = r10744132 + r10744135;
        double r10744137 = -0.008333;
        double r10744138 = r10744134 * r10744122;
        double r10744139 = r10744137 * r10744138;
        double r10744140 = r10744136 + r10744139;
        return r10744140;
}


double f_of(float x) {
        float r10744141 = 1.0;
        float r10744142 = -5.0;
        float r10744143 = x;
        float r10744144 = r10744142 * r10744143;
        float r10744145 = r10744141 + r10744144;
        float r10744146 = 5.0;
        float r10744147 = r10744143 * r10744143;
        float r10744148 = r10744146 * r10744147;
        float r10744149 = r10744145 + r10744148;
        float r10744150 = -1.666667;
        float r10744151 = r10744147 * r10744143;
        float r10744152 = r10744150 * r10744151;
        float r10744153 = r10744149 + r10744152;
        float r10744154 = 0.208333;
        float r10744155 = r10744151 * r10744143;
        float r10744156 = r10744154 * r10744155;
        float r10744157 = r10744153 + r10744156;
        float r10744158 = -0.008333;
        float r10744159 = r10744155 * r10744143;
        float r10744160 = r10744158 * r10744159;
        float r10744161 = r10744157 + r10744160;
        return r10744161;
}

double f_od(double x) {
        double r10744162 = 1.0;
        double r10744163 = -5.0;
        double r10744164 = x;
        double r10744165 = r10744163 * r10744164;
        double r10744166 = r10744162 + r10744165;
        double r10744167 = 5.0;
        double r10744168 = r10744164 * r10744164;
        double r10744169 = r10744167 * r10744168;
        double r10744170 = r10744166 + r10744169;
        double r10744171 = -1.666667;
        double r10744172 = r10744168 * r10744164;
        double r10744173 = r10744171 * r10744172;
        double r10744174 = r10744170 + r10744173;
        double r10744175 = 0.208333;
        double r10744176 = r10744172 * r10744164;
        double r10744177 = r10744175 * r10744176;
        double r10744178 = r10744174 + r10744177;
        double r10744179 = -0.008333;
        double r10744180 = r10744176 * r10744164;
        double r10744181 = r10744179 * r10744180;
        double r10744182 = r10744178 + r10744181;
        return r10744182;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10744183, r10744184, r10744185, r10744186, r10744187, r10744188, r10744189, r10744190, r10744191, r10744192, r10744193, r10744194, r10744195, r10744196, r10744197, r10744198, r10744199, r10744200, r10744201, r10744202, r10744203;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744183, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744184, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10744185);
        mpfr_init(r10744186);
        mpfr_init(r10744187);
        mpfr_init_set_str(r10744188, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10744189);
        mpfr_init(r10744190);
        mpfr_init(r10744191);
        mpfr_init_set_str(r10744192, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10744193);
        mpfr_init(r10744194);
        mpfr_init(r10744195);
        mpfr_init_set_str(r10744196, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10744197);
        mpfr_init(r10744198);
        mpfr_init(r10744199);
        mpfr_init_set_str(r10744200, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10744201);
        mpfr_init(r10744202);
        mpfr_init(r10744203);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10744185, x, MPFR_RNDN);
        mpfr_mul(r10744186, r10744184, r10744185, MPFR_RNDN);
        mpfr_add(r10744187, r10744183, r10744186, MPFR_RNDN);
        ;
        mpfr_mul(r10744189, r10744185, r10744185, MPFR_RNDN);
        mpfr_mul(r10744190, r10744188, r10744189, MPFR_RNDN);
        mpfr_add(r10744191, r10744187, r10744190, MPFR_RNDN);
        ;
        mpfr_mul(r10744193, r10744189, r10744185, MPFR_RNDN);
        mpfr_mul(r10744194, r10744192, r10744193, MPFR_RNDN);
        mpfr_add(r10744195, r10744191, r10744194, MPFR_RNDN);
        ;
        mpfr_mul(r10744197, r10744193, r10744185, MPFR_RNDN);
        mpfr_mul(r10744198, r10744196, r10744197, MPFR_RNDN);
        mpfr_add(r10744199, r10744195, r10744198, MPFR_RNDN);
        ;
        mpfr_mul(r10744201, r10744197, r10744185, MPFR_RNDN);
        mpfr_mul(r10744202, r10744200, r10744201, MPFR_RNDN);
        mpfr_add(r10744203, r10744199, r10744202, MPFR_RNDN);
        return mpfr_get_d(r10744203, MPFR_RNDN);
}

static mpfr_t r10744204, r10744205, r10744206, r10744207, r10744208, r10744209, r10744210, r10744211, r10744212, r10744213, r10744214, r10744215, r10744216, r10744217, r10744218, r10744219, r10744220, r10744221, r10744222, r10744223, r10744224;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744204, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744205, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10744206);
        mpfr_init(r10744207);
        mpfr_init(r10744208);
        mpfr_init_set_str(r10744209, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10744210);
        mpfr_init(r10744211);
        mpfr_init(r10744212);
        mpfr_init_set_str(r10744213, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10744214);
        mpfr_init(r10744215);
        mpfr_init(r10744216);
        mpfr_init_set_str(r10744217, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10744218);
        mpfr_init(r10744219);
        mpfr_init(r10744220);
        mpfr_init_set_str(r10744221, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10744222);
        mpfr_init(r10744223);
        mpfr_init(r10744224);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10744206, x, MPFR_RNDN);
        mpfr_mul(r10744207, r10744205, r10744206, MPFR_RNDN);
        mpfr_add(r10744208, r10744204, r10744207, MPFR_RNDN);
        ;
        mpfr_mul(r10744210, r10744206, r10744206, MPFR_RNDN);
        mpfr_mul(r10744211, r10744209, r10744210, MPFR_RNDN);
        mpfr_add(r10744212, r10744208, r10744211, MPFR_RNDN);
        ;
        mpfr_mul(r10744214, r10744210, r10744206, MPFR_RNDN);
        mpfr_mul(r10744215, r10744213, r10744214, MPFR_RNDN);
        mpfr_add(r10744216, r10744212, r10744215, MPFR_RNDN);
        ;
        mpfr_mul(r10744218, r10744214, r10744206, MPFR_RNDN);
        mpfr_mul(r10744219, r10744217, r10744218, MPFR_RNDN);
        mpfr_add(r10744220, r10744216, r10744219, MPFR_RNDN);
        ;
        mpfr_mul(r10744222, r10744218, r10744206, MPFR_RNDN);
        mpfr_mul(r10744223, r10744221, r10744222, MPFR_RNDN);
        mpfr_add(r10744224, r10744220, r10744223, MPFR_RNDN);
        return mpfr_get_d(r10744224, MPFR_RNDN);
}

static mpfr_t r10744225, r10744226, r10744227, r10744228, r10744229, r10744230, r10744231, r10744232, r10744233, r10744234, r10744235, r10744236, r10744237, r10744238, r10744239, r10744240, r10744241, r10744242, r10744243, r10744244, r10744245;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10744225, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10744226, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r10744227);
        mpfr_init(r10744228);
        mpfr_init(r10744229);
        mpfr_init_set_str(r10744230, "5.0", 10, MPFR_RNDN);
        mpfr_init(r10744231);
        mpfr_init(r10744232);
        mpfr_init(r10744233);
        mpfr_init_set_str(r10744234, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r10744235);
        mpfr_init(r10744236);
        mpfr_init(r10744237);
        mpfr_init_set_str(r10744238, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r10744239);
        mpfr_init(r10744240);
        mpfr_init(r10744241);
        mpfr_init_set_str(r10744242, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r10744243);
        mpfr_init(r10744244);
        mpfr_init(r10744245);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10744227, x, MPFR_RNDN);
        mpfr_mul(r10744228, r10744226, r10744227, MPFR_RNDN);
        mpfr_add(r10744229, r10744225, r10744228, MPFR_RNDN);
        ;
        mpfr_mul(r10744231, r10744227, r10744227, MPFR_RNDN);
        mpfr_mul(r10744232, r10744230, r10744231, MPFR_RNDN);
        mpfr_add(r10744233, r10744229, r10744232, MPFR_RNDN);
        ;
        mpfr_mul(r10744235, r10744231, r10744227, MPFR_RNDN);
        mpfr_mul(r10744236, r10744234, r10744235, MPFR_RNDN);
        mpfr_add(r10744237, r10744233, r10744236, MPFR_RNDN);
        ;
        mpfr_mul(r10744239, r10744235, r10744227, MPFR_RNDN);
        mpfr_mul(r10744240, r10744238, r10744239, MPFR_RNDN);
        mpfr_add(r10744241, r10744237, r10744240, MPFR_RNDN);
        ;
        mpfr_mul(r10744243, r10744239, r10744227, MPFR_RNDN);
        mpfr_mul(r10744244, r10744242, r10744243, MPFR_RNDN);
        mpfr_add(r10744245, r10744241, r10744244, MPFR_RNDN);
        return mpfr_get_d(r10744245, MPFR_RNDN);
}

