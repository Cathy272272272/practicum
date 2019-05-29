#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r9584999 = 1.0;
        float r9585000 = -12.0;
        float r9585001 = x;
        float r9585002 = r9585000 * r9585001;
        float r9585003 = r9584999 + r9585002;
        float r9585004 = 33.0;
        float r9585005 = r9585001 * r9585001;
        float r9585006 = r9585004 * r9585005;
        float r9585007 = r9585003 + r9585006;
        float r9585008 = -36.666667;
        float r9585009 = r9585005 * r9585001;
        float r9585010 = r9585008 * r9585009;
        float r9585011 = r9585007 + r9585010;
        float r9585012 = 20.625;
        float r9585013 = r9585009 * r9585001;
        float r9585014 = r9585012 * r9585013;
        float r9585015 = r9585011 + r9585014;
        float r9585016 = -6.6;
        float r9585017 = r9585013 * r9585001;
        float r9585018 = r9585016 * r9585017;
        float r9585019 = r9585015 + r9585018;
        float r9585020 = 1.283333;
        float r9585021 = r9585017 * r9585001;
        float r9585022 = r9585020 * r9585021;
        float r9585023 = r9585019 + r9585022;
        float r9585024 = -0.157143;
        float r9585025 = r9585021 * r9585001;
        float r9585026 = r9585024 * r9585025;
        float r9585027 = r9585023 + r9585026;
        float r9585028 = 0.012277;
        float r9585029 = r9585025 * r9585001;
        float r9585030 = r9585028 * r9585029;
        float r9585031 = r9585027 + r9585030;
        float r9585032 = -0.000606;
        float r9585033 = r9585029 * r9585001;
        float r9585034 = r9585032 * r9585033;
        float r9585035 = r9585031 + r9585034;
        float r9585036 = 1.8e-05;
        float r9585037 = r9585033 * r9585001;
        float r9585038 = r9585036 * r9585037;
        float r9585039 = r9585035 + r9585038;
        return r9585039;
}

double f_id(double x) {
        double r9585040 = 1.0;
        double r9585041 = -12.0;
        double r9585042 = x;
        double r9585043 = r9585041 * r9585042;
        double r9585044 = r9585040 + r9585043;
        double r9585045 = 33.0;
        double r9585046 = r9585042 * r9585042;
        double r9585047 = r9585045 * r9585046;
        double r9585048 = r9585044 + r9585047;
        double r9585049 = -36.666667;
        double r9585050 = r9585046 * r9585042;
        double r9585051 = r9585049 * r9585050;
        double r9585052 = r9585048 + r9585051;
        double r9585053 = 20.625;
        double r9585054 = r9585050 * r9585042;
        double r9585055 = r9585053 * r9585054;
        double r9585056 = r9585052 + r9585055;
        double r9585057 = -6.6;
        double r9585058 = r9585054 * r9585042;
        double r9585059 = r9585057 * r9585058;
        double r9585060 = r9585056 + r9585059;
        double r9585061 = 1.283333;
        double r9585062 = r9585058 * r9585042;
        double r9585063 = r9585061 * r9585062;
        double r9585064 = r9585060 + r9585063;
        double r9585065 = -0.157143;
        double r9585066 = r9585062 * r9585042;
        double r9585067 = r9585065 * r9585066;
        double r9585068 = r9585064 + r9585067;
        double r9585069 = 0.012277;
        double r9585070 = r9585066 * r9585042;
        double r9585071 = r9585069 * r9585070;
        double r9585072 = r9585068 + r9585071;
        double r9585073 = -0.000606;
        double r9585074 = r9585070 * r9585042;
        double r9585075 = r9585073 * r9585074;
        double r9585076 = r9585072 + r9585075;
        double r9585077 = 1.8e-05;
        double r9585078 = r9585074 * r9585042;
        double r9585079 = r9585077 * r9585078;
        double r9585080 = r9585076 + r9585079;
        return r9585080;
}


double f_of(float x) {
        float r9585081 = x;
        float r9585082 = r9585081 * r9585081;
        float r9585083 = -36.666667;
        float r9585084 = r9585083 * r9585081;
        float r9585085 = 33.0;
        float r9585086 = r9585084 + r9585085;
        float r9585087 = r9585082 * r9585086;
        float r9585088 = -12.0;
        float r9585089 = r9585081 * r9585088;
        float r9585090 = 1.0;
        float r9585091 = r9585089 + r9585090;
        float r9585092 = r9585087 + r9585091;
        float r9585093 = 3;
        float r9585094 = pow(r9585081, r9585093);
        float r9585095 = r9585094 * r9585094;
        float r9585096 = 1.283333;
        float r9585097 = -0.157143;
        float r9585098 = r9585097 * r9585081;
        float r9585099 = r9585096 + r9585098;
        float r9585100 = r9585095 * r9585099;
        float r9585101 = r9585082 * r9585082;
        float r9585102 = 20.625;
        float r9585103 = -6.6;
        float r9585104 = r9585103 * r9585081;
        float r9585105 = r9585102 + r9585104;
        float r9585106 = r9585101 * r9585105;
        float r9585107 = r9585100 + r9585106;
        float r9585108 = r9585092 + r9585107;
        float r9585109 = r9585101 * r9585101;
        float r9585110 = 1.8e-05;
        float r9585111 = r9585110 * r9585082;
        float r9585112 = r9585109 * r9585111;
        float r9585113 = -0.000606;
        float r9585114 = r9585113 * r9585081;
        float r9585115 = 0.012277;
        float r9585116 = r9585114 + r9585115;
        float r9585117 = r9585109 * r9585116;
        float r9585118 = r9585112 + r9585117;
        float r9585119 = r9585108 + r9585118;
        return r9585119;
}

double f_od(double x) {
        double r9585120 = x;
        double r9585121 = r9585120 * r9585120;
        double r9585122 = -36.666667;
        double r9585123 = r9585122 * r9585120;
        double r9585124 = 33.0;
        double r9585125 = r9585123 + r9585124;
        double r9585126 = r9585121 * r9585125;
        double r9585127 = -12.0;
        double r9585128 = r9585120 * r9585127;
        double r9585129 = 1.0;
        double r9585130 = r9585128 + r9585129;
        double r9585131 = r9585126 + r9585130;
        double r9585132 = 3;
        double r9585133 = pow(r9585120, r9585132);
        double r9585134 = r9585133 * r9585133;
        double r9585135 = 1.283333;
        double r9585136 = -0.157143;
        double r9585137 = r9585136 * r9585120;
        double r9585138 = r9585135 + r9585137;
        double r9585139 = r9585134 * r9585138;
        double r9585140 = r9585121 * r9585121;
        double r9585141 = 20.625;
        double r9585142 = -6.6;
        double r9585143 = r9585142 * r9585120;
        double r9585144 = r9585141 + r9585143;
        double r9585145 = r9585140 * r9585144;
        double r9585146 = r9585139 + r9585145;
        double r9585147 = r9585131 + r9585146;
        double r9585148 = r9585140 * r9585140;
        double r9585149 = 1.8e-05;
        double r9585150 = r9585149 * r9585121;
        double r9585151 = r9585148 * r9585150;
        double r9585152 = -0.000606;
        double r9585153 = r9585152 * r9585120;
        double r9585154 = 0.012277;
        double r9585155 = r9585153 + r9585154;
        double r9585156 = r9585148 * r9585155;
        double r9585157 = r9585151 + r9585156;
        double r9585158 = r9585147 + r9585157;
        return r9585158;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9585159, r9585160, r9585161, r9585162, r9585163, r9585164, r9585165, r9585166, r9585167, r9585168, r9585169, r9585170, r9585171, r9585172, r9585173, r9585174, r9585175, r9585176, r9585177, r9585178, r9585179, r9585180, r9585181, r9585182, r9585183, r9585184, r9585185, r9585186, r9585187, r9585188, r9585189, r9585190, r9585191, r9585192, r9585193, r9585194, r9585195, r9585196, r9585197, r9585198, r9585199;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9585159, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585160, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9585161);
        mpfr_init(r9585162);
        mpfr_init(r9585163);
        mpfr_init_set_str(r9585164, "33.0", 10, MPFR_RNDN);
        mpfr_init(r9585165);
        mpfr_init(r9585166);
        mpfr_init(r9585167);
        mpfr_init_set_str(r9585168, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r9585169);
        mpfr_init(r9585170);
        mpfr_init(r9585171);
        mpfr_init_set_str(r9585172, "20.625", 10, MPFR_RNDN);
        mpfr_init(r9585173);
        mpfr_init(r9585174);
        mpfr_init(r9585175);
        mpfr_init_set_str(r9585176, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r9585177);
        mpfr_init(r9585178);
        mpfr_init(r9585179);
        mpfr_init_set_str(r9585180, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r9585181);
        mpfr_init(r9585182);
        mpfr_init(r9585183);
        mpfr_init_set_str(r9585184, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r9585185);
        mpfr_init(r9585186);
        mpfr_init(r9585187);
        mpfr_init_set_str(r9585188, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r9585189);
        mpfr_init(r9585190);
        mpfr_init(r9585191);
        mpfr_init_set_str(r9585192, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r9585193);
        mpfr_init(r9585194);
        mpfr_init(r9585195);
        mpfr_init_set_str(r9585196, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9585197);
        mpfr_init(r9585198);
        mpfr_init(r9585199);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9585161, x, MPFR_RNDN);
        mpfr_mul(r9585162, r9585160, r9585161, MPFR_RNDN);
        mpfr_add(r9585163, r9585159, r9585162, MPFR_RNDN);
        ;
        mpfr_mul(r9585165, r9585161, r9585161, MPFR_RNDN);
        mpfr_mul(r9585166, r9585164, r9585165, MPFR_RNDN);
        mpfr_add(r9585167, r9585163, r9585166, MPFR_RNDN);
        ;
        mpfr_mul(r9585169, r9585165, r9585161, MPFR_RNDN);
        mpfr_mul(r9585170, r9585168, r9585169, MPFR_RNDN);
        mpfr_add(r9585171, r9585167, r9585170, MPFR_RNDN);
        ;
        mpfr_mul(r9585173, r9585169, r9585161, MPFR_RNDN);
        mpfr_mul(r9585174, r9585172, r9585173, MPFR_RNDN);
        mpfr_add(r9585175, r9585171, r9585174, MPFR_RNDN);
        ;
        mpfr_mul(r9585177, r9585173, r9585161, MPFR_RNDN);
        mpfr_mul(r9585178, r9585176, r9585177, MPFR_RNDN);
        mpfr_add(r9585179, r9585175, r9585178, MPFR_RNDN);
        ;
        mpfr_mul(r9585181, r9585177, r9585161, MPFR_RNDN);
        mpfr_mul(r9585182, r9585180, r9585181, MPFR_RNDN);
        mpfr_add(r9585183, r9585179, r9585182, MPFR_RNDN);
        ;
        mpfr_mul(r9585185, r9585181, r9585161, MPFR_RNDN);
        mpfr_mul(r9585186, r9585184, r9585185, MPFR_RNDN);
        mpfr_add(r9585187, r9585183, r9585186, MPFR_RNDN);
        ;
        mpfr_mul(r9585189, r9585185, r9585161, MPFR_RNDN);
        mpfr_mul(r9585190, r9585188, r9585189, MPFR_RNDN);
        mpfr_add(r9585191, r9585187, r9585190, MPFR_RNDN);
        ;
        mpfr_mul(r9585193, r9585189, r9585161, MPFR_RNDN);
        mpfr_mul(r9585194, r9585192, r9585193, MPFR_RNDN);
        mpfr_add(r9585195, r9585191, r9585194, MPFR_RNDN);
        ;
        mpfr_mul(r9585197, r9585193, r9585161, MPFR_RNDN);
        mpfr_mul(r9585198, r9585196, r9585197, MPFR_RNDN);
        mpfr_add(r9585199, r9585195, r9585198, MPFR_RNDN);
        return mpfr_get_d(r9585199, MPFR_RNDN);
}

static mpfr_t r9585200, r9585201, r9585202, r9585203, r9585204, r9585205, r9585206, r9585207, r9585208, r9585209, r9585210, r9585211, r9585212, r9585213, r9585214, r9585215, r9585216, r9585217, r9585218, r9585219, r9585220, r9585221, r9585222, r9585223, r9585224, r9585225, r9585226, r9585227, r9585228, r9585229, r9585230, r9585231, r9585232, r9585233, r9585234, r9585235, r9585236, r9585237, r9585238;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9585200);
        mpfr_init(r9585201);
        mpfr_init_set_str(r9585202, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r9585203);
        mpfr_init_set_str(r9585204, "33.0", 10, MPFR_RNDN);
        mpfr_init(r9585205);
        mpfr_init(r9585206);
        mpfr_init_set_str(r9585207, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9585208);
        mpfr_init_set_str(r9585209, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9585210);
        mpfr_init(r9585211);
        mpfr_init_set_str(r9585212, "3", 10, MPFR_RNDN);
        mpfr_init(r9585213);
        mpfr_init(r9585214);
        mpfr_init_set_str(r9585215, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585216, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r9585217);
        mpfr_init(r9585218);
        mpfr_init(r9585219);
        mpfr_init(r9585220);
        mpfr_init_set_str(r9585221, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585222, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r9585223);
        mpfr_init(r9585224);
        mpfr_init(r9585225);
        mpfr_init(r9585226);
        mpfr_init(r9585227);
        mpfr_init(r9585228);
        mpfr_init_set_str(r9585229, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9585230);
        mpfr_init(r9585231);
        mpfr_init_set_str(r9585232, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r9585233);
        mpfr_init_set_str(r9585234, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r9585235);
        mpfr_init(r9585236);
        mpfr_init(r9585237);
        mpfr_init(r9585238);
}

double f_fm(double x) {
        mpfr_set_d(r9585200, x, MPFR_RNDN);
        mpfr_mul(r9585201, r9585200, r9585200, MPFR_RNDN);
        ;
        mpfr_mul(r9585203, r9585202, r9585200, MPFR_RNDN);
        ;
        mpfr_add(r9585205, r9585203, r9585204, MPFR_RNDN);
        mpfr_mul(r9585206, r9585201, r9585205, MPFR_RNDN);
        ;
        mpfr_mul(r9585208, r9585200, r9585207, MPFR_RNDN);
        ;
        mpfr_add(r9585210, r9585208, r9585209, MPFR_RNDN);
        mpfr_add(r9585211, r9585206, r9585210, MPFR_RNDN);
        ;
        mpfr_pow(r9585213, r9585200, r9585212, MPFR_RNDN);
        mpfr_mul(r9585214, r9585213, r9585213, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9585217, r9585216, r9585200, MPFR_RNDN);
        mpfr_add(r9585218, r9585215, r9585217, MPFR_RNDN);
        mpfr_mul(r9585219, r9585214, r9585218, MPFR_RNDN);
        mpfr_mul(r9585220, r9585201, r9585201, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9585223, r9585222, r9585200, MPFR_RNDN);
        mpfr_add(r9585224, r9585221, r9585223, MPFR_RNDN);
        mpfr_mul(r9585225, r9585220, r9585224, MPFR_RNDN);
        mpfr_add(r9585226, r9585219, r9585225, MPFR_RNDN);
        mpfr_add(r9585227, r9585211, r9585226, MPFR_RNDN);
        mpfr_mul(r9585228, r9585220, r9585220, MPFR_RNDN);
        ;
        mpfr_mul(r9585230, r9585229, r9585201, MPFR_RNDN);
        mpfr_mul(r9585231, r9585228, r9585230, MPFR_RNDN);
        ;
        mpfr_mul(r9585233, r9585232, r9585200, MPFR_RNDN);
        ;
        mpfr_add(r9585235, r9585233, r9585234, MPFR_RNDN);
        mpfr_mul(r9585236, r9585228, r9585235, MPFR_RNDN);
        mpfr_add(r9585237, r9585231, r9585236, MPFR_RNDN);
        mpfr_add(r9585238, r9585227, r9585237, MPFR_RNDN);
        return mpfr_get_d(r9585238, MPFR_RNDN);
}

static mpfr_t r9585239, r9585240, r9585241, r9585242, r9585243, r9585244, r9585245, r9585246, r9585247, r9585248, r9585249, r9585250, r9585251, r9585252, r9585253, r9585254, r9585255, r9585256, r9585257, r9585258, r9585259, r9585260, r9585261, r9585262, r9585263, r9585264, r9585265, r9585266, r9585267, r9585268, r9585269, r9585270, r9585271, r9585272, r9585273, r9585274, r9585275, r9585276, r9585277;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9585239);
        mpfr_init(r9585240);
        mpfr_init_set_str(r9585241, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r9585242);
        mpfr_init_set_str(r9585243, "33.0", 10, MPFR_RNDN);
        mpfr_init(r9585244);
        mpfr_init(r9585245);
        mpfr_init_set_str(r9585246, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r9585247);
        mpfr_init_set_str(r9585248, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9585249);
        mpfr_init(r9585250);
        mpfr_init_set_str(r9585251, "3", 10, MPFR_RNDN);
        mpfr_init(r9585252);
        mpfr_init(r9585253);
        mpfr_init_set_str(r9585254, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585255, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r9585256);
        mpfr_init(r9585257);
        mpfr_init(r9585258);
        mpfr_init(r9585259);
        mpfr_init_set_str(r9585260, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r9585261, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r9585262);
        mpfr_init(r9585263);
        mpfr_init(r9585264);
        mpfr_init(r9585265);
        mpfr_init(r9585266);
        mpfr_init(r9585267);
        mpfr_init_set_str(r9585268, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r9585269);
        mpfr_init(r9585270);
        mpfr_init_set_str(r9585271, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r9585272);
        mpfr_init_set_str(r9585273, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r9585274);
        mpfr_init(r9585275);
        mpfr_init(r9585276);
        mpfr_init(r9585277);
}

double f_dm(double x) {
        mpfr_set_d(r9585239, x, MPFR_RNDN);
        mpfr_mul(r9585240, r9585239, r9585239, MPFR_RNDN);
        ;
        mpfr_mul(r9585242, r9585241, r9585239, MPFR_RNDN);
        ;
        mpfr_add(r9585244, r9585242, r9585243, MPFR_RNDN);
        mpfr_mul(r9585245, r9585240, r9585244, MPFR_RNDN);
        ;
        mpfr_mul(r9585247, r9585239, r9585246, MPFR_RNDN);
        ;
        mpfr_add(r9585249, r9585247, r9585248, MPFR_RNDN);
        mpfr_add(r9585250, r9585245, r9585249, MPFR_RNDN);
        ;
        mpfr_pow(r9585252, r9585239, r9585251, MPFR_RNDN);
        mpfr_mul(r9585253, r9585252, r9585252, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9585256, r9585255, r9585239, MPFR_RNDN);
        mpfr_add(r9585257, r9585254, r9585256, MPFR_RNDN);
        mpfr_mul(r9585258, r9585253, r9585257, MPFR_RNDN);
        mpfr_mul(r9585259, r9585240, r9585240, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9585262, r9585261, r9585239, MPFR_RNDN);
        mpfr_add(r9585263, r9585260, r9585262, MPFR_RNDN);
        mpfr_mul(r9585264, r9585259, r9585263, MPFR_RNDN);
        mpfr_add(r9585265, r9585258, r9585264, MPFR_RNDN);
        mpfr_add(r9585266, r9585250, r9585265, MPFR_RNDN);
        mpfr_mul(r9585267, r9585259, r9585259, MPFR_RNDN);
        ;
        mpfr_mul(r9585269, r9585268, r9585240, MPFR_RNDN);
        mpfr_mul(r9585270, r9585267, r9585269, MPFR_RNDN);
        ;
        mpfr_mul(r9585272, r9585271, r9585239, MPFR_RNDN);
        ;
        mpfr_add(r9585274, r9585272, r9585273, MPFR_RNDN);
        mpfr_mul(r9585275, r9585267, r9585274, MPFR_RNDN);
        mpfr_add(r9585276, r9585270, r9585275, MPFR_RNDN);
        mpfr_add(r9585277, r9585266, r9585276, MPFR_RNDN);
        return mpfr_get_d(r9585277, MPFR_RNDN);
}

