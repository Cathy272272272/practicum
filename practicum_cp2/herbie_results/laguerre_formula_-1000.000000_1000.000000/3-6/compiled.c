#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r6513057 = 1.0;
        float r6513058 = -6.0;
        float r6513059 = x;
        float r6513060 = r6513058 * r6513059;
        float r6513061 = r6513057 + r6513060;
        float r6513062 = 7.5;
        float r6513063 = r6513059 * r6513059;
        float r6513064 = r6513062 * r6513063;
        float r6513065 = r6513061 + r6513064;
        float r6513066 = -3.333333;
        float r6513067 = r6513063 * r6513059;
        float r6513068 = r6513066 * r6513067;
        float r6513069 = r6513065 + r6513068;
        float r6513070 = 0.625;
        float r6513071 = r6513067 * r6513059;
        float r6513072 = r6513070 * r6513071;
        float r6513073 = r6513069 + r6513072;
        float r6513074 = -0.05;
        float r6513075 = r6513071 * r6513059;
        float r6513076 = r6513074 * r6513075;
        float r6513077 = r6513073 + r6513076;
        float r6513078 = 0.001389;
        float r6513079 = r6513075 * r6513059;
        float r6513080 = r6513078 * r6513079;
        float r6513081 = r6513077 + r6513080;
        return r6513081;
}

double f_id(double x) {
        double r6513082 = 1.0;
        double r6513083 = -6.0;
        double r6513084 = x;
        double r6513085 = r6513083 * r6513084;
        double r6513086 = r6513082 + r6513085;
        double r6513087 = 7.5;
        double r6513088 = r6513084 * r6513084;
        double r6513089 = r6513087 * r6513088;
        double r6513090 = r6513086 + r6513089;
        double r6513091 = -3.333333;
        double r6513092 = r6513088 * r6513084;
        double r6513093 = r6513091 * r6513092;
        double r6513094 = r6513090 + r6513093;
        double r6513095 = 0.625;
        double r6513096 = r6513092 * r6513084;
        double r6513097 = r6513095 * r6513096;
        double r6513098 = r6513094 + r6513097;
        double r6513099 = -0.05;
        double r6513100 = r6513096 * r6513084;
        double r6513101 = r6513099 * r6513100;
        double r6513102 = r6513098 + r6513101;
        double r6513103 = 0.001389;
        double r6513104 = r6513100 * r6513084;
        double r6513105 = r6513103 * r6513104;
        double r6513106 = r6513102 + r6513105;
        return r6513106;
}


double f_of(float x) {
        float r6513107 = x;
        float r6513108 = r6513107 * r6513107;
        float r6513109 = r6513108 * r6513108;
        float r6513110 = 0.625;
        float r6513111 = -0.05;
        float r6513112 = r6513107 * r6513111;
        float r6513113 = r6513110 + r6513112;
        float r6513114 = r6513109 * r6513113;
        float r6513115 = 0.001389;
        float r6513116 = r6513115 * r6513107;
        float r6513117 = r6513107 * r6513116;
        float r6513118 = r6513109 * r6513117;
        float r6513119 = r6513114 + r6513118;
        float r6513120 = 7.5;
        float r6513121 = -3.333333;
        float r6513122 = r6513107 * r6513121;
        float r6513123 = r6513120 + r6513122;
        float r6513124 = r6513108 * r6513123;
        float r6513125 = -6.0;
        float r6513126 = r6513107 * r6513125;
        float r6513127 = 1.0;
        float r6513128 = r6513126 + r6513127;
        float r6513129 = r6513124 + r6513128;
        float r6513130 = r6513119 + r6513129;
        return r6513130;
}

double f_od(double x) {
        double r6513131 = x;
        double r6513132 = r6513131 * r6513131;
        double r6513133 = r6513132 * r6513132;
        double r6513134 = 0.625;
        double r6513135 = -0.05;
        double r6513136 = r6513131 * r6513135;
        double r6513137 = r6513134 + r6513136;
        double r6513138 = r6513133 * r6513137;
        double r6513139 = 0.001389;
        double r6513140 = r6513139 * r6513131;
        double r6513141 = r6513131 * r6513140;
        double r6513142 = r6513133 * r6513141;
        double r6513143 = r6513138 + r6513142;
        double r6513144 = 7.5;
        double r6513145 = -3.333333;
        double r6513146 = r6513131 * r6513145;
        double r6513147 = r6513144 + r6513146;
        double r6513148 = r6513132 * r6513147;
        double r6513149 = -6.0;
        double r6513150 = r6513131 * r6513149;
        double r6513151 = 1.0;
        double r6513152 = r6513150 + r6513151;
        double r6513153 = r6513148 + r6513152;
        double r6513154 = r6513143 + r6513153;
        return r6513154;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6513155, r6513156, r6513157, r6513158, r6513159, r6513160, r6513161, r6513162, r6513163, r6513164, r6513165, r6513166, r6513167, r6513168, r6513169, r6513170, r6513171, r6513172, r6513173, r6513174, r6513175, r6513176, r6513177, r6513178, r6513179;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6513155, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513156, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r6513157);
        mpfr_init(r6513158);
        mpfr_init(r6513159);
        mpfr_init_set_str(r6513160, "7.5", 10, MPFR_RNDN);
        mpfr_init(r6513161);
        mpfr_init(r6513162);
        mpfr_init(r6513163);
        mpfr_init_set_str(r6513164, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r6513165);
        mpfr_init(r6513166);
        mpfr_init(r6513167);
        mpfr_init_set_str(r6513168, "0.625", 10, MPFR_RNDN);
        mpfr_init(r6513169);
        mpfr_init(r6513170);
        mpfr_init(r6513171);
        mpfr_init_set_str(r6513172, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r6513173);
        mpfr_init(r6513174);
        mpfr_init(r6513175);
        mpfr_init_set_str(r6513176, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r6513177);
        mpfr_init(r6513178);
        mpfr_init(r6513179);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6513157, x, MPFR_RNDN);
        mpfr_mul(r6513158, r6513156, r6513157, MPFR_RNDN);
        mpfr_add(r6513159, r6513155, r6513158, MPFR_RNDN);
        ;
        mpfr_mul(r6513161, r6513157, r6513157, MPFR_RNDN);
        mpfr_mul(r6513162, r6513160, r6513161, MPFR_RNDN);
        mpfr_add(r6513163, r6513159, r6513162, MPFR_RNDN);
        ;
        mpfr_mul(r6513165, r6513161, r6513157, MPFR_RNDN);
        mpfr_mul(r6513166, r6513164, r6513165, MPFR_RNDN);
        mpfr_add(r6513167, r6513163, r6513166, MPFR_RNDN);
        ;
        mpfr_mul(r6513169, r6513165, r6513157, MPFR_RNDN);
        mpfr_mul(r6513170, r6513168, r6513169, MPFR_RNDN);
        mpfr_add(r6513171, r6513167, r6513170, MPFR_RNDN);
        ;
        mpfr_mul(r6513173, r6513169, r6513157, MPFR_RNDN);
        mpfr_mul(r6513174, r6513172, r6513173, MPFR_RNDN);
        mpfr_add(r6513175, r6513171, r6513174, MPFR_RNDN);
        ;
        mpfr_mul(r6513177, r6513173, r6513157, MPFR_RNDN);
        mpfr_mul(r6513178, r6513176, r6513177, MPFR_RNDN);
        mpfr_add(r6513179, r6513175, r6513178, MPFR_RNDN);
        return mpfr_get_d(r6513179, MPFR_RNDN);
}

static mpfr_t r6513180, r6513181, r6513182, r6513183, r6513184, r6513185, r6513186, r6513187, r6513188, r6513189, r6513190, r6513191, r6513192, r6513193, r6513194, r6513195, r6513196, r6513197, r6513198, r6513199, r6513200, r6513201, r6513202, r6513203;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6513180);
        mpfr_init(r6513181);
        mpfr_init(r6513182);
        mpfr_init_set_str(r6513183, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513184, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r6513185);
        mpfr_init(r6513186);
        mpfr_init(r6513187);
        mpfr_init_set_str(r6513188, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r6513189);
        mpfr_init(r6513190);
        mpfr_init(r6513191);
        mpfr_init(r6513192);
        mpfr_init_set_str(r6513193, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513194, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r6513195);
        mpfr_init(r6513196);
        mpfr_init(r6513197);
        mpfr_init_set_str(r6513198, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r6513199);
        mpfr_init_set_str(r6513200, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6513201);
        mpfr_init(r6513202);
        mpfr_init(r6513203);
}

double f_fm(double x) {
        mpfr_set_d(r6513180, x, MPFR_RNDN);
        mpfr_mul(r6513181, r6513180, r6513180, MPFR_RNDN);
        mpfr_mul(r6513182, r6513181, r6513181, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6513185, r6513180, r6513184, MPFR_RNDN);
        mpfr_add(r6513186, r6513183, r6513185, MPFR_RNDN);
        mpfr_mul(r6513187, r6513182, r6513186, MPFR_RNDN);
        ;
        mpfr_mul(r6513189, r6513188, r6513180, MPFR_RNDN);
        mpfr_mul(r6513190, r6513180, r6513189, MPFR_RNDN);
        mpfr_mul(r6513191, r6513182, r6513190, MPFR_RNDN);
        mpfr_add(r6513192, r6513187, r6513191, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6513195, r6513180, r6513194, MPFR_RNDN);
        mpfr_add(r6513196, r6513193, r6513195, MPFR_RNDN);
        mpfr_mul(r6513197, r6513181, r6513196, MPFR_RNDN);
        ;
        mpfr_mul(r6513199, r6513180, r6513198, MPFR_RNDN);
        ;
        mpfr_add(r6513201, r6513199, r6513200, MPFR_RNDN);
        mpfr_add(r6513202, r6513197, r6513201, MPFR_RNDN);
        mpfr_add(r6513203, r6513192, r6513202, MPFR_RNDN);
        return mpfr_get_d(r6513203, MPFR_RNDN);
}

static mpfr_t r6513204, r6513205, r6513206, r6513207, r6513208, r6513209, r6513210, r6513211, r6513212, r6513213, r6513214, r6513215, r6513216, r6513217, r6513218, r6513219, r6513220, r6513221, r6513222, r6513223, r6513224, r6513225, r6513226, r6513227;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6513204);
        mpfr_init(r6513205);
        mpfr_init(r6513206);
        mpfr_init_set_str(r6513207, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513208, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r6513209);
        mpfr_init(r6513210);
        mpfr_init(r6513211);
        mpfr_init_set_str(r6513212, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r6513213);
        mpfr_init(r6513214);
        mpfr_init(r6513215);
        mpfr_init(r6513216);
        mpfr_init_set_str(r6513217, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r6513218, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r6513219);
        mpfr_init(r6513220);
        mpfr_init(r6513221);
        mpfr_init_set_str(r6513222, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r6513223);
        mpfr_init_set_str(r6513224, "1.0", 10, MPFR_RNDN);
        mpfr_init(r6513225);
        mpfr_init(r6513226);
        mpfr_init(r6513227);
}

double f_dm(double x) {
        mpfr_set_d(r6513204, x, MPFR_RNDN);
        mpfr_mul(r6513205, r6513204, r6513204, MPFR_RNDN);
        mpfr_mul(r6513206, r6513205, r6513205, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6513209, r6513204, r6513208, MPFR_RNDN);
        mpfr_add(r6513210, r6513207, r6513209, MPFR_RNDN);
        mpfr_mul(r6513211, r6513206, r6513210, MPFR_RNDN);
        ;
        mpfr_mul(r6513213, r6513212, r6513204, MPFR_RNDN);
        mpfr_mul(r6513214, r6513204, r6513213, MPFR_RNDN);
        mpfr_mul(r6513215, r6513206, r6513214, MPFR_RNDN);
        mpfr_add(r6513216, r6513211, r6513215, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6513219, r6513204, r6513218, MPFR_RNDN);
        mpfr_add(r6513220, r6513217, r6513219, MPFR_RNDN);
        mpfr_mul(r6513221, r6513205, r6513220, MPFR_RNDN);
        ;
        mpfr_mul(r6513223, r6513204, r6513222, MPFR_RNDN);
        ;
        mpfr_add(r6513225, r6513223, r6513224, MPFR_RNDN);
        mpfr_add(r6513226, r6513221, r6513225, MPFR_RNDN);
        mpfr_add(r6513227, r6513216, r6513226, MPFR_RNDN);
        return mpfr_get_d(r6513227, MPFR_RNDN);
}

