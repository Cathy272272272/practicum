#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r11587007 = 1.0;
        float r11587008 = -8.0;
        float r11587009 = x;
        float r11587010 = r11587008 * r11587009;
        float r11587011 = r11587007 + r11587010;
        float r11587012 = 14.0;
        float r11587013 = r11587009 * r11587009;
        float r11587014 = r11587012 * r11587013;
        float r11587015 = r11587011 + r11587014;
        float r11587016 = -9.333333;
        float r11587017 = r11587013 * r11587009;
        float r11587018 = r11587016 * r11587017;
        float r11587019 = r11587015 + r11587018;
        float r11587020 = 2.916667;
        float r11587021 = r11587017 * r11587009;
        float r11587022 = r11587020 * r11587021;
        float r11587023 = r11587019 + r11587022;
        float r11587024 = -0.466667;
        float r11587025 = r11587021 * r11587009;
        float r11587026 = r11587024 * r11587025;
        float r11587027 = r11587023 + r11587026;
        float r11587028 = 0.038889;
        float r11587029 = r11587025 * r11587009;
        float r11587030 = r11587028 * r11587029;
        float r11587031 = r11587027 + r11587030;
        float r11587032 = -0.001587;
        float r11587033 = r11587029 * r11587009;
        float r11587034 = r11587032 * r11587033;
        float r11587035 = r11587031 + r11587034;
        float r11587036 = 2.5e-05;
        float r11587037 = r11587033 * r11587009;
        float r11587038 = r11587036 * r11587037;
        float r11587039 = r11587035 + r11587038;
        return r11587039;
}

double f_id(double x) {
        double r11587040 = 1.0;
        double r11587041 = -8.0;
        double r11587042 = x;
        double r11587043 = r11587041 * r11587042;
        double r11587044 = r11587040 + r11587043;
        double r11587045 = 14.0;
        double r11587046 = r11587042 * r11587042;
        double r11587047 = r11587045 * r11587046;
        double r11587048 = r11587044 + r11587047;
        double r11587049 = -9.333333;
        double r11587050 = r11587046 * r11587042;
        double r11587051 = r11587049 * r11587050;
        double r11587052 = r11587048 + r11587051;
        double r11587053 = 2.916667;
        double r11587054 = r11587050 * r11587042;
        double r11587055 = r11587053 * r11587054;
        double r11587056 = r11587052 + r11587055;
        double r11587057 = -0.466667;
        double r11587058 = r11587054 * r11587042;
        double r11587059 = r11587057 * r11587058;
        double r11587060 = r11587056 + r11587059;
        double r11587061 = 0.038889;
        double r11587062 = r11587058 * r11587042;
        double r11587063 = r11587061 * r11587062;
        double r11587064 = r11587060 + r11587063;
        double r11587065 = -0.001587;
        double r11587066 = r11587062 * r11587042;
        double r11587067 = r11587065 * r11587066;
        double r11587068 = r11587064 + r11587067;
        double r11587069 = 2.5e-05;
        double r11587070 = r11587066 * r11587042;
        double r11587071 = r11587069 * r11587070;
        double r11587072 = r11587068 + r11587071;
        return r11587072;
}


double f_of(float x) {
        float r11587073 = x;
        float r11587074 = 2;
        float r11587075 = 3;
        float r11587076 = r11587074 * r11587075;
        float r11587077 = pow(r11587073, r11587076);
        float r11587078 = 2.5e-05;
        float r11587079 = r11587073 * r11587073;
        float r11587080 = r11587078 * r11587079;
        float r11587081 = r11587077 * r11587080;
        float r11587082 = pow(r11587079, r11587075);
        float r11587083 = -0.001587;
        float r11587084 = r11587083 * r11587073;
        float r11587085 = 0.038889;
        float r11587086 = r11587084 + r11587085;
        float r11587087 = r11587082 * r11587086;
        float r11587088 = r11587081 + r11587087;
        float r11587089 = -9.333333;
        float r11587090 = r11587089 * r11587073;
        float r11587091 = 14.0;
        float r11587092 = r11587090 + r11587091;
        float r11587093 = r11587079 * r11587092;
        float r11587094 = r11587079 * r11587079;
        float r11587095 = 2.916667;
        float r11587096 = -0.466667;
        float r11587097 = r11587096 * r11587073;
        float r11587098 = r11587095 + r11587097;
        float r11587099 = r11587094 * r11587098;
        float r11587100 = r11587093 + r11587099;
        float r11587101 = -8.0;
        float r11587102 = r11587073 * r11587101;
        float r11587103 = 1.0;
        float r11587104 = r11587102 + r11587103;
        float r11587105 = r11587100 + r11587104;
        float r11587106 = r11587088 + r11587105;
        return r11587106;
}

double f_od(double x) {
        double r11587107 = x;
        double r11587108 = 2;
        double r11587109 = 3;
        double r11587110 = r11587108 * r11587109;
        double r11587111 = pow(r11587107, r11587110);
        double r11587112 = 2.5e-05;
        double r11587113 = r11587107 * r11587107;
        double r11587114 = r11587112 * r11587113;
        double r11587115 = r11587111 * r11587114;
        double r11587116 = pow(r11587113, r11587109);
        double r11587117 = -0.001587;
        double r11587118 = r11587117 * r11587107;
        double r11587119 = 0.038889;
        double r11587120 = r11587118 + r11587119;
        double r11587121 = r11587116 * r11587120;
        double r11587122 = r11587115 + r11587121;
        double r11587123 = -9.333333;
        double r11587124 = r11587123 * r11587107;
        double r11587125 = 14.0;
        double r11587126 = r11587124 + r11587125;
        double r11587127 = r11587113 * r11587126;
        double r11587128 = r11587113 * r11587113;
        double r11587129 = 2.916667;
        double r11587130 = -0.466667;
        double r11587131 = r11587130 * r11587107;
        double r11587132 = r11587129 + r11587131;
        double r11587133 = r11587128 * r11587132;
        double r11587134 = r11587127 + r11587133;
        double r11587135 = -8.0;
        double r11587136 = r11587107 * r11587135;
        double r11587137 = 1.0;
        double r11587138 = r11587136 + r11587137;
        double r11587139 = r11587134 + r11587138;
        double r11587140 = r11587122 + r11587139;
        return r11587140;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11587141, r11587142, r11587143, r11587144, r11587145, r11587146, r11587147, r11587148, r11587149, r11587150, r11587151, r11587152, r11587153, r11587154, r11587155, r11587156, r11587157, r11587158, r11587159, r11587160, r11587161, r11587162, r11587163, r11587164, r11587165, r11587166, r11587167, r11587168, r11587169, r11587170, r11587171, r11587172, r11587173;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11587141, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587142, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11587143);
        mpfr_init(r11587144);
        mpfr_init(r11587145);
        mpfr_init_set_str(r11587146, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11587147);
        mpfr_init(r11587148);
        mpfr_init(r11587149);
        mpfr_init_set_str(r11587150, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11587151);
        mpfr_init(r11587152);
        mpfr_init(r11587153);
        mpfr_init_set_str(r11587154, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r11587155);
        mpfr_init(r11587156);
        mpfr_init(r11587157);
        mpfr_init_set_str(r11587158, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11587159);
        mpfr_init(r11587160);
        mpfr_init(r11587161);
        mpfr_init_set_str(r11587162, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11587163);
        mpfr_init(r11587164);
        mpfr_init(r11587165);
        mpfr_init_set_str(r11587166, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11587167);
        mpfr_init(r11587168);
        mpfr_init(r11587169);
        mpfr_init_set_str(r11587170, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11587171);
        mpfr_init(r11587172);
        mpfr_init(r11587173);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11587143, x, MPFR_RNDN);
        mpfr_mul(r11587144, r11587142, r11587143, MPFR_RNDN);
        mpfr_add(r11587145, r11587141, r11587144, MPFR_RNDN);
        ;
        mpfr_mul(r11587147, r11587143, r11587143, MPFR_RNDN);
        mpfr_mul(r11587148, r11587146, r11587147, MPFR_RNDN);
        mpfr_add(r11587149, r11587145, r11587148, MPFR_RNDN);
        ;
        mpfr_mul(r11587151, r11587147, r11587143, MPFR_RNDN);
        mpfr_mul(r11587152, r11587150, r11587151, MPFR_RNDN);
        mpfr_add(r11587153, r11587149, r11587152, MPFR_RNDN);
        ;
        mpfr_mul(r11587155, r11587151, r11587143, MPFR_RNDN);
        mpfr_mul(r11587156, r11587154, r11587155, MPFR_RNDN);
        mpfr_add(r11587157, r11587153, r11587156, MPFR_RNDN);
        ;
        mpfr_mul(r11587159, r11587155, r11587143, MPFR_RNDN);
        mpfr_mul(r11587160, r11587158, r11587159, MPFR_RNDN);
        mpfr_add(r11587161, r11587157, r11587160, MPFR_RNDN);
        ;
        mpfr_mul(r11587163, r11587159, r11587143, MPFR_RNDN);
        mpfr_mul(r11587164, r11587162, r11587163, MPFR_RNDN);
        mpfr_add(r11587165, r11587161, r11587164, MPFR_RNDN);
        ;
        mpfr_mul(r11587167, r11587163, r11587143, MPFR_RNDN);
        mpfr_mul(r11587168, r11587166, r11587167, MPFR_RNDN);
        mpfr_add(r11587169, r11587165, r11587168, MPFR_RNDN);
        ;
        mpfr_mul(r11587171, r11587167, r11587143, MPFR_RNDN);
        mpfr_mul(r11587172, r11587170, r11587171, MPFR_RNDN);
        mpfr_add(r11587173, r11587169, r11587172, MPFR_RNDN);
        return mpfr_get_d(r11587173, MPFR_RNDN);
}

static mpfr_t r11587174, r11587175, r11587176, r11587177, r11587178, r11587179, r11587180, r11587181, r11587182, r11587183, r11587184, r11587185, r11587186, r11587187, r11587188, r11587189, r11587190, r11587191, r11587192, r11587193, r11587194, r11587195, r11587196, r11587197, r11587198, r11587199, r11587200, r11587201, r11587202, r11587203, r11587204, r11587205, r11587206, r11587207;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11587174);
        mpfr_init_set_str(r11587175, "2", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587176, "3", 10, MPFR_RNDN);
        mpfr_init(r11587177);
        mpfr_init(r11587178);
        mpfr_init_set_str(r11587179, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11587180);
        mpfr_init(r11587181);
        mpfr_init(r11587182);
        mpfr_init(r11587183);
        mpfr_init_set_str(r11587184, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11587185);
        mpfr_init_set_str(r11587186, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11587187);
        mpfr_init(r11587188);
        mpfr_init(r11587189);
        mpfr_init_set_str(r11587190, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11587191);
        mpfr_init_set_str(r11587192, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11587193);
        mpfr_init(r11587194);
        mpfr_init(r11587195);
        mpfr_init_set_str(r11587196, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587197, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11587198);
        mpfr_init(r11587199);
        mpfr_init(r11587200);
        mpfr_init(r11587201);
        mpfr_init_set_str(r11587202, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11587203);
        mpfr_init_set_str(r11587204, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587205);
        mpfr_init(r11587206);
        mpfr_init(r11587207);
}

double f_fm(double x) {
        mpfr_set_d(r11587174, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587177, r11587175, r11587176, MPFR_RNDN);
        mpfr_pow(r11587178, r11587174, r11587177, MPFR_RNDN);
        ;
        mpfr_mul(r11587180, r11587174, r11587174, MPFR_RNDN);
        mpfr_mul(r11587181, r11587179, r11587180, MPFR_RNDN);
        mpfr_mul(r11587182, r11587178, r11587181, MPFR_RNDN);
        mpfr_pow(r11587183, r11587180, r11587176, MPFR_RNDN);
        ;
        mpfr_mul(r11587185, r11587184, r11587174, MPFR_RNDN);
        ;
        mpfr_add(r11587187, r11587185, r11587186, MPFR_RNDN);
        mpfr_mul(r11587188, r11587183, r11587187, MPFR_RNDN);
        mpfr_add(r11587189, r11587182, r11587188, MPFR_RNDN);
        ;
        mpfr_mul(r11587191, r11587190, r11587174, MPFR_RNDN);
        ;
        mpfr_add(r11587193, r11587191, r11587192, MPFR_RNDN);
        mpfr_mul(r11587194, r11587180, r11587193, MPFR_RNDN);
        mpfr_mul(r11587195, r11587180, r11587180, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587198, r11587197, r11587174, MPFR_RNDN);
        mpfr_add(r11587199, r11587196, r11587198, MPFR_RNDN);
        mpfr_mul(r11587200, r11587195, r11587199, MPFR_RNDN);
        mpfr_add(r11587201, r11587194, r11587200, MPFR_RNDN);
        ;
        mpfr_mul(r11587203, r11587174, r11587202, MPFR_RNDN);
        ;
        mpfr_add(r11587205, r11587203, r11587204, MPFR_RNDN);
        mpfr_add(r11587206, r11587201, r11587205, MPFR_RNDN);
        mpfr_add(r11587207, r11587189, r11587206, MPFR_RNDN);
        return mpfr_get_d(r11587207, MPFR_RNDN);
}

static mpfr_t r11587208, r11587209, r11587210, r11587211, r11587212, r11587213, r11587214, r11587215, r11587216, r11587217, r11587218, r11587219, r11587220, r11587221, r11587222, r11587223, r11587224, r11587225, r11587226, r11587227, r11587228, r11587229, r11587230, r11587231, r11587232, r11587233, r11587234, r11587235, r11587236, r11587237, r11587238, r11587239, r11587240, r11587241;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11587208);
        mpfr_init_set_str(r11587209, "2", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587210, "3", 10, MPFR_RNDN);
        mpfr_init(r11587211);
        mpfr_init(r11587212);
        mpfr_init_set_str(r11587213, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r11587214);
        mpfr_init(r11587215);
        mpfr_init(r11587216);
        mpfr_init(r11587217);
        mpfr_init_set_str(r11587218, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r11587219);
        mpfr_init_set_str(r11587220, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r11587221);
        mpfr_init(r11587222);
        mpfr_init(r11587223);
        mpfr_init_set_str(r11587224, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r11587225);
        mpfr_init_set_str(r11587226, "14.0", 10, MPFR_RNDN);
        mpfr_init(r11587227);
        mpfr_init(r11587228);
        mpfr_init(r11587229);
        mpfr_init_set_str(r11587230, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r11587231, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r11587232);
        mpfr_init(r11587233);
        mpfr_init(r11587234);
        mpfr_init(r11587235);
        mpfr_init_set_str(r11587236, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r11587237);
        mpfr_init_set_str(r11587238, "1.0", 10, MPFR_RNDN);
        mpfr_init(r11587239);
        mpfr_init(r11587240);
        mpfr_init(r11587241);
}

double f_dm(double x) {
        mpfr_set_d(r11587208, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587211, r11587209, r11587210, MPFR_RNDN);
        mpfr_pow(r11587212, r11587208, r11587211, MPFR_RNDN);
        ;
        mpfr_mul(r11587214, r11587208, r11587208, MPFR_RNDN);
        mpfr_mul(r11587215, r11587213, r11587214, MPFR_RNDN);
        mpfr_mul(r11587216, r11587212, r11587215, MPFR_RNDN);
        mpfr_pow(r11587217, r11587214, r11587210, MPFR_RNDN);
        ;
        mpfr_mul(r11587219, r11587218, r11587208, MPFR_RNDN);
        ;
        mpfr_add(r11587221, r11587219, r11587220, MPFR_RNDN);
        mpfr_mul(r11587222, r11587217, r11587221, MPFR_RNDN);
        mpfr_add(r11587223, r11587216, r11587222, MPFR_RNDN);
        ;
        mpfr_mul(r11587225, r11587224, r11587208, MPFR_RNDN);
        ;
        mpfr_add(r11587227, r11587225, r11587226, MPFR_RNDN);
        mpfr_mul(r11587228, r11587214, r11587227, MPFR_RNDN);
        mpfr_mul(r11587229, r11587214, r11587214, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11587232, r11587231, r11587208, MPFR_RNDN);
        mpfr_add(r11587233, r11587230, r11587232, MPFR_RNDN);
        mpfr_mul(r11587234, r11587229, r11587233, MPFR_RNDN);
        mpfr_add(r11587235, r11587228, r11587234, MPFR_RNDN);
        ;
        mpfr_mul(r11587237, r11587208, r11587236, MPFR_RNDN);
        ;
        mpfr_add(r11587239, r11587237, r11587238, MPFR_RNDN);
        mpfr_add(r11587240, r11587235, r11587239, MPFR_RNDN);
        mpfr_add(r11587241, r11587223, r11587240, MPFR_RNDN);
        return mpfr_get_d(r11587241, MPFR_RNDN);
}

