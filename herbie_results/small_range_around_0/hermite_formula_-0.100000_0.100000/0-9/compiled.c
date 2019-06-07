#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6326066 = 30240.0;
        float r6326067 = x;
        float r6326068 = r6326066 * r6326067;
        float r6326069 = -80640.0;
        float r6326070 = r6326067 * r6326067;
        float r6326071 = r6326070 * r6326067;
        float r6326072 = r6326069 * r6326071;
        float r6326073 = r6326068 + r6326072;
        float r6326074 = 48384.0;
        float r6326075 = r6326071 * r6326067;
        float r6326076 = r6326075 * r6326067;
        float r6326077 = r6326074 * r6326076;
        float r6326078 = r6326073 + r6326077;
        float r6326079 = -9216.0;
        float r6326080 = r6326076 * r6326067;
        float r6326081 = r6326080 * r6326067;
        float r6326082 = r6326079 * r6326081;
        float r6326083 = r6326078 + r6326082;
        float r6326084 = 512.0;
        float r6326085 = r6326081 * r6326067;
        float r6326086 = r6326085 * r6326067;
        float r6326087 = r6326084 * r6326086;
        float r6326088 = r6326083 + r6326087;
        return r6326088;
}

double f_id(double x) {
        double r6326089 = 30240.0;
        double r6326090 = x;
        double r6326091 = r6326089 * r6326090;
        double r6326092 = -80640.0;
        double r6326093 = r6326090 * r6326090;
        double r6326094 = r6326093 * r6326090;
        double r6326095 = r6326092 * r6326094;
        double r6326096 = r6326091 + r6326095;
        double r6326097 = 48384.0;
        double r6326098 = r6326094 * r6326090;
        double r6326099 = r6326098 * r6326090;
        double r6326100 = r6326097 * r6326099;
        double r6326101 = r6326096 + r6326100;
        double r6326102 = -9216.0;
        double r6326103 = r6326099 * r6326090;
        double r6326104 = r6326103 * r6326090;
        double r6326105 = r6326102 * r6326104;
        double r6326106 = r6326101 + r6326105;
        double r6326107 = 512.0;
        double r6326108 = r6326104 * r6326090;
        double r6326109 = r6326108 * r6326090;
        double r6326110 = r6326107 * r6326109;
        double r6326111 = r6326106 + r6326110;
        return r6326111;
}


double f_of(float x) {
        float r6326112 = 30240.0;
        float r6326113 = x;
        float r6326114 = r6326112 * r6326113;
        float r6326115 = -80640.0;
        float r6326116 = r6326113 * r6326113;
        float r6326117 = r6326116 * r6326113;
        float r6326118 = r6326115 * r6326117;
        float r6326119 = r6326114 + r6326118;
        float r6326120 = 48384.0;
        float r6326121 = r6326117 * r6326113;
        float r6326122 = r6326121 * r6326113;
        float r6326123 = r6326120 * r6326122;
        float r6326124 = r6326119 + r6326123;
        float r6326125 = -9216.0;
        float r6326126 = r6326122 * r6326113;
        float r6326127 = r6326126 * r6326113;
        float r6326128 = r6326125 * r6326127;
        float r6326129 = r6326124 + r6326128;
        float r6326130 = 512.0;
        float r6326131 = r6326127 * r6326113;
        float r6326132 = r6326131 * r6326113;
        float r6326133 = r6326130 * r6326132;
        float r6326134 = r6326129 + r6326133;
        return r6326134;
}

double f_od(double x) {
        double r6326135 = 30240.0;
        double r6326136 = x;
        double r6326137 = r6326135 * r6326136;
        double r6326138 = -80640.0;
        double r6326139 = r6326136 * r6326136;
        double r6326140 = r6326139 * r6326136;
        double r6326141 = r6326138 * r6326140;
        double r6326142 = r6326137 + r6326141;
        double r6326143 = 48384.0;
        double r6326144 = r6326140 * r6326136;
        double r6326145 = r6326144 * r6326136;
        double r6326146 = r6326143 * r6326145;
        double r6326147 = r6326142 + r6326146;
        double r6326148 = -9216.0;
        double r6326149 = r6326145 * r6326136;
        double r6326150 = r6326149 * r6326136;
        double r6326151 = r6326148 * r6326150;
        double r6326152 = r6326147 + r6326151;
        double r6326153 = 512.0;
        double r6326154 = r6326150 * r6326136;
        double r6326155 = r6326154 * r6326136;
        double r6326156 = r6326153 * r6326155;
        double r6326157 = r6326152 + r6326156;
        return r6326157;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6326158, r6326159, r6326160, r6326161, r6326162, r6326163, r6326164, r6326165, r6326166, r6326167, r6326168, r6326169, r6326170, r6326171, r6326172, r6326173, r6326174, r6326175, r6326176, r6326177, r6326178, r6326179, r6326180;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326158, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r6326159);
        mpfr_init(r6326160);
        mpfr_init_set_str(r6326161, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r6326162);
        mpfr_init(r6326163);
        mpfr_init(r6326164);
        mpfr_init(r6326165);
        mpfr_init_set_str(r6326166, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r6326167);
        mpfr_init(r6326168);
        mpfr_init(r6326169);
        mpfr_init(r6326170);
        mpfr_init_set_str(r6326171, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r6326172);
        mpfr_init(r6326173);
        mpfr_init(r6326174);
        mpfr_init(r6326175);
        mpfr_init_set_str(r6326176, "512.0", 10, MPFR_RNDN);
        mpfr_init(r6326177);
        mpfr_init(r6326178);
        mpfr_init(r6326179);
        mpfr_init(r6326180);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6326159, x, MPFR_RNDN);
        mpfr_mul(r6326160, r6326158, r6326159, MPFR_RNDN);
        ;
        mpfr_mul(r6326162, r6326159, r6326159, MPFR_RNDN);
        mpfr_mul(r6326163, r6326162, r6326159, MPFR_RNDN);
        mpfr_mul(r6326164, r6326161, r6326163, MPFR_RNDN);
        mpfr_add(r6326165, r6326160, r6326164, MPFR_RNDN);
        ;
        mpfr_mul(r6326167, r6326163, r6326159, MPFR_RNDN);
        mpfr_mul(r6326168, r6326167, r6326159, MPFR_RNDN);
        mpfr_mul(r6326169, r6326166, r6326168, MPFR_RNDN);
        mpfr_add(r6326170, r6326165, r6326169, MPFR_RNDN);
        ;
        mpfr_mul(r6326172, r6326168, r6326159, MPFR_RNDN);
        mpfr_mul(r6326173, r6326172, r6326159, MPFR_RNDN);
        mpfr_mul(r6326174, r6326171, r6326173, MPFR_RNDN);
        mpfr_add(r6326175, r6326170, r6326174, MPFR_RNDN);
        ;
        mpfr_mul(r6326177, r6326173, r6326159, MPFR_RNDN);
        mpfr_mul(r6326178, r6326177, r6326159, MPFR_RNDN);
        mpfr_mul(r6326179, r6326176, r6326178, MPFR_RNDN);
        mpfr_add(r6326180, r6326175, r6326179, MPFR_RNDN);
        return mpfr_get_d(r6326180, MPFR_RNDN);
}

static mpfr_t r6326181, r6326182, r6326183, r6326184, r6326185, r6326186, r6326187, r6326188, r6326189, r6326190, r6326191, r6326192, r6326193, r6326194, r6326195, r6326196, r6326197, r6326198, r6326199, r6326200, r6326201, r6326202, r6326203;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326181, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r6326182);
        mpfr_init(r6326183);
        mpfr_init_set_str(r6326184, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r6326185);
        mpfr_init(r6326186);
        mpfr_init(r6326187);
        mpfr_init(r6326188);
        mpfr_init_set_str(r6326189, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r6326190);
        mpfr_init(r6326191);
        mpfr_init(r6326192);
        mpfr_init(r6326193);
        mpfr_init_set_str(r6326194, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r6326195);
        mpfr_init(r6326196);
        mpfr_init(r6326197);
        mpfr_init(r6326198);
        mpfr_init_set_str(r6326199, "512.0", 10, MPFR_RNDN);
        mpfr_init(r6326200);
        mpfr_init(r6326201);
        mpfr_init(r6326202);
        mpfr_init(r6326203);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6326182, x, MPFR_RNDN);
        mpfr_mul(r6326183, r6326181, r6326182, MPFR_RNDN);
        ;
        mpfr_mul(r6326185, r6326182, r6326182, MPFR_RNDN);
        mpfr_mul(r6326186, r6326185, r6326182, MPFR_RNDN);
        mpfr_mul(r6326187, r6326184, r6326186, MPFR_RNDN);
        mpfr_add(r6326188, r6326183, r6326187, MPFR_RNDN);
        ;
        mpfr_mul(r6326190, r6326186, r6326182, MPFR_RNDN);
        mpfr_mul(r6326191, r6326190, r6326182, MPFR_RNDN);
        mpfr_mul(r6326192, r6326189, r6326191, MPFR_RNDN);
        mpfr_add(r6326193, r6326188, r6326192, MPFR_RNDN);
        ;
        mpfr_mul(r6326195, r6326191, r6326182, MPFR_RNDN);
        mpfr_mul(r6326196, r6326195, r6326182, MPFR_RNDN);
        mpfr_mul(r6326197, r6326194, r6326196, MPFR_RNDN);
        mpfr_add(r6326198, r6326193, r6326197, MPFR_RNDN);
        ;
        mpfr_mul(r6326200, r6326196, r6326182, MPFR_RNDN);
        mpfr_mul(r6326201, r6326200, r6326182, MPFR_RNDN);
        mpfr_mul(r6326202, r6326199, r6326201, MPFR_RNDN);
        mpfr_add(r6326203, r6326198, r6326202, MPFR_RNDN);
        return mpfr_get_d(r6326203, MPFR_RNDN);
}

static mpfr_t r6326204, r6326205, r6326206, r6326207, r6326208, r6326209, r6326210, r6326211, r6326212, r6326213, r6326214, r6326215, r6326216, r6326217, r6326218, r6326219, r6326220, r6326221, r6326222, r6326223, r6326224, r6326225, r6326226;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6326204, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r6326205);
        mpfr_init(r6326206);
        mpfr_init_set_str(r6326207, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r6326208);
        mpfr_init(r6326209);
        mpfr_init(r6326210);
        mpfr_init(r6326211);
        mpfr_init_set_str(r6326212, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r6326213);
        mpfr_init(r6326214);
        mpfr_init(r6326215);
        mpfr_init(r6326216);
        mpfr_init_set_str(r6326217, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r6326218);
        mpfr_init(r6326219);
        mpfr_init(r6326220);
        mpfr_init(r6326221);
        mpfr_init_set_str(r6326222, "512.0", 10, MPFR_RNDN);
        mpfr_init(r6326223);
        mpfr_init(r6326224);
        mpfr_init(r6326225);
        mpfr_init(r6326226);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6326205, x, MPFR_RNDN);
        mpfr_mul(r6326206, r6326204, r6326205, MPFR_RNDN);
        ;
        mpfr_mul(r6326208, r6326205, r6326205, MPFR_RNDN);
        mpfr_mul(r6326209, r6326208, r6326205, MPFR_RNDN);
        mpfr_mul(r6326210, r6326207, r6326209, MPFR_RNDN);
        mpfr_add(r6326211, r6326206, r6326210, MPFR_RNDN);
        ;
        mpfr_mul(r6326213, r6326209, r6326205, MPFR_RNDN);
        mpfr_mul(r6326214, r6326213, r6326205, MPFR_RNDN);
        mpfr_mul(r6326215, r6326212, r6326214, MPFR_RNDN);
        mpfr_add(r6326216, r6326211, r6326215, MPFR_RNDN);
        ;
        mpfr_mul(r6326218, r6326214, r6326205, MPFR_RNDN);
        mpfr_mul(r6326219, r6326218, r6326205, MPFR_RNDN);
        mpfr_mul(r6326220, r6326217, r6326219, MPFR_RNDN);
        mpfr_add(r6326221, r6326216, r6326220, MPFR_RNDN);
        ;
        mpfr_mul(r6326223, r6326219, r6326205, MPFR_RNDN);
        mpfr_mul(r6326224, r6326223, r6326205, MPFR_RNDN);
        mpfr_mul(r6326225, r6326222, r6326224, MPFR_RNDN);
        mpfr_add(r6326226, r6326221, r6326225, MPFR_RNDN);
        return mpfr_get_d(r6326226, MPFR_RNDN);
}

