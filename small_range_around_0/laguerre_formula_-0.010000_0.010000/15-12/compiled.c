#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "12";

double f_if(float x) {
        float r3280969 = 1.0;
        float r3280970 = -12.0;
        float r3280971 = x;
        float r3280972 = r3280970 * r3280971;
        float r3280973 = r3280969 + r3280972;
        float r3280974 = 33.0;
        float r3280975 = r3280971 * r3280971;
        float r3280976 = r3280974 * r3280975;
        float r3280977 = r3280973 + r3280976;
        float r3280978 = -36.666667;
        float r3280979 = r3280975 * r3280971;
        float r3280980 = r3280978 * r3280979;
        float r3280981 = r3280977 + r3280980;
        float r3280982 = 20.625;
        float r3280983 = r3280979 * r3280971;
        float r3280984 = r3280982 * r3280983;
        float r3280985 = r3280981 + r3280984;
        float r3280986 = -6.6;
        float r3280987 = r3280983 * r3280971;
        float r3280988 = r3280986 * r3280987;
        float r3280989 = r3280985 + r3280988;
        float r3280990 = 1.283333;
        float r3280991 = r3280987 * r3280971;
        float r3280992 = r3280990 * r3280991;
        float r3280993 = r3280989 + r3280992;
        float r3280994 = -0.157143;
        float r3280995 = r3280991 * r3280971;
        float r3280996 = r3280994 * r3280995;
        float r3280997 = r3280993 + r3280996;
        float r3280998 = 0.012277;
        float r3280999 = r3280995 * r3280971;
        float r3281000 = r3280998 * r3280999;
        float r3281001 = r3280997 + r3281000;
        float r3281002 = -0.000606;
        float r3281003 = r3280999 * r3280971;
        float r3281004 = r3281002 * r3281003;
        float r3281005 = r3281001 + r3281004;
        float r3281006 = 1.8e-05;
        float r3281007 = r3281003 * r3280971;
        float r3281008 = r3281006 * r3281007;
        float r3281009 = r3281005 + r3281008;
        return r3281009;
}

double f_id(double x) {
        double r3281010 = 1.0;
        double r3281011 = -12.0;
        double r3281012 = x;
        double r3281013 = r3281011 * r3281012;
        double r3281014 = r3281010 + r3281013;
        double r3281015 = 33.0;
        double r3281016 = r3281012 * r3281012;
        double r3281017 = r3281015 * r3281016;
        double r3281018 = r3281014 + r3281017;
        double r3281019 = -36.666667;
        double r3281020 = r3281016 * r3281012;
        double r3281021 = r3281019 * r3281020;
        double r3281022 = r3281018 + r3281021;
        double r3281023 = 20.625;
        double r3281024 = r3281020 * r3281012;
        double r3281025 = r3281023 * r3281024;
        double r3281026 = r3281022 + r3281025;
        double r3281027 = -6.6;
        double r3281028 = r3281024 * r3281012;
        double r3281029 = r3281027 * r3281028;
        double r3281030 = r3281026 + r3281029;
        double r3281031 = 1.283333;
        double r3281032 = r3281028 * r3281012;
        double r3281033 = r3281031 * r3281032;
        double r3281034 = r3281030 + r3281033;
        double r3281035 = -0.157143;
        double r3281036 = r3281032 * r3281012;
        double r3281037 = r3281035 * r3281036;
        double r3281038 = r3281034 + r3281037;
        double r3281039 = 0.012277;
        double r3281040 = r3281036 * r3281012;
        double r3281041 = r3281039 * r3281040;
        double r3281042 = r3281038 + r3281041;
        double r3281043 = -0.000606;
        double r3281044 = r3281040 * r3281012;
        double r3281045 = r3281043 * r3281044;
        double r3281046 = r3281042 + r3281045;
        double r3281047 = 1.8e-05;
        double r3281048 = r3281044 * r3281012;
        double r3281049 = r3281047 * r3281048;
        double r3281050 = r3281046 + r3281049;
        return r3281050;
}


double f_of(float x) {
        float r3281051 = x;
        float r3281052 = r3281051 * r3281051;
        float r3281053 = -36.666667;
        float r3281054 = r3281053 * r3281051;
        float r3281055 = 33.0;
        float r3281056 = r3281054 + r3281055;
        float r3281057 = r3281052 * r3281056;
        float r3281058 = -12.0;
        float r3281059 = r3281051 * r3281058;
        float r3281060 = 1.0;
        float r3281061 = r3281059 + r3281060;
        float r3281062 = r3281057 + r3281061;
        float r3281063 = 3;
        float r3281064 = pow(r3281051, r3281063);
        float r3281065 = r3281064 * r3281064;
        float r3281066 = 1.283333;
        float r3281067 = -0.157143;
        float r3281068 = r3281067 * r3281051;
        float r3281069 = r3281066 + r3281068;
        float r3281070 = r3281065 * r3281069;
        float r3281071 = r3281052 * r3281052;
        float r3281072 = 20.625;
        float r3281073 = -6.6;
        float r3281074 = r3281073 * r3281051;
        float r3281075 = r3281072 + r3281074;
        float r3281076 = r3281071 * r3281075;
        float r3281077 = r3281070 + r3281076;
        float r3281078 = r3281062 + r3281077;
        float r3281079 = r3281071 * r3281071;
        float r3281080 = 1.8e-05;
        float r3281081 = r3281080 * r3281052;
        float r3281082 = r3281079 * r3281081;
        float r3281083 = -0.000606;
        float r3281084 = r3281083 * r3281051;
        float r3281085 = 0.012277;
        float r3281086 = r3281084 + r3281085;
        float r3281087 = r3281079 * r3281086;
        float r3281088 = r3281082 + r3281087;
        float r3281089 = r3281078 + r3281088;
        return r3281089;
}

double f_od(double x) {
        double r3281090 = x;
        double r3281091 = r3281090 * r3281090;
        double r3281092 = -36.666667;
        double r3281093 = r3281092 * r3281090;
        double r3281094 = 33.0;
        double r3281095 = r3281093 + r3281094;
        double r3281096 = r3281091 * r3281095;
        double r3281097 = -12.0;
        double r3281098 = r3281090 * r3281097;
        double r3281099 = 1.0;
        double r3281100 = r3281098 + r3281099;
        double r3281101 = r3281096 + r3281100;
        double r3281102 = 3;
        double r3281103 = pow(r3281090, r3281102);
        double r3281104 = r3281103 * r3281103;
        double r3281105 = 1.283333;
        double r3281106 = -0.157143;
        double r3281107 = r3281106 * r3281090;
        double r3281108 = r3281105 + r3281107;
        double r3281109 = r3281104 * r3281108;
        double r3281110 = r3281091 * r3281091;
        double r3281111 = 20.625;
        double r3281112 = -6.6;
        double r3281113 = r3281112 * r3281090;
        double r3281114 = r3281111 + r3281113;
        double r3281115 = r3281110 * r3281114;
        double r3281116 = r3281109 + r3281115;
        double r3281117 = r3281101 + r3281116;
        double r3281118 = r3281110 * r3281110;
        double r3281119 = 1.8e-05;
        double r3281120 = r3281119 * r3281091;
        double r3281121 = r3281118 * r3281120;
        double r3281122 = -0.000606;
        double r3281123 = r3281122 * r3281090;
        double r3281124 = 0.012277;
        double r3281125 = r3281123 + r3281124;
        double r3281126 = r3281118 * r3281125;
        double r3281127 = r3281121 + r3281126;
        double r3281128 = r3281117 + r3281127;
        return r3281128;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3281129, r3281130, r3281131, r3281132, r3281133, r3281134, r3281135, r3281136, r3281137, r3281138, r3281139, r3281140, r3281141, r3281142, r3281143, r3281144, r3281145, r3281146, r3281147, r3281148, r3281149, r3281150, r3281151, r3281152, r3281153, r3281154, r3281155, r3281156, r3281157, r3281158, r3281159, r3281160, r3281161, r3281162, r3281163, r3281164, r3281165, r3281166, r3281167, r3281168, r3281169;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3281129, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281130, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3281131);
        mpfr_init(r3281132);
        mpfr_init(r3281133);
        mpfr_init_set_str(r3281134, "33.0", 10, MPFR_RNDN);
        mpfr_init(r3281135);
        mpfr_init(r3281136);
        mpfr_init(r3281137);
        mpfr_init_set_str(r3281138, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r3281139);
        mpfr_init(r3281140);
        mpfr_init(r3281141);
        mpfr_init_set_str(r3281142, "20.625", 10, MPFR_RNDN);
        mpfr_init(r3281143);
        mpfr_init(r3281144);
        mpfr_init(r3281145);
        mpfr_init_set_str(r3281146, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r3281147);
        mpfr_init(r3281148);
        mpfr_init(r3281149);
        mpfr_init_set_str(r3281150, "1.283333", 10, MPFR_RNDN);
        mpfr_init(r3281151);
        mpfr_init(r3281152);
        mpfr_init(r3281153);
        mpfr_init_set_str(r3281154, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r3281155);
        mpfr_init(r3281156);
        mpfr_init(r3281157);
        mpfr_init_set_str(r3281158, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r3281159);
        mpfr_init(r3281160);
        mpfr_init(r3281161);
        mpfr_init_set_str(r3281162, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r3281163);
        mpfr_init(r3281164);
        mpfr_init(r3281165);
        mpfr_init_set_str(r3281166, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3281167);
        mpfr_init(r3281168);
        mpfr_init(r3281169);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3281131, x, MPFR_RNDN);
        mpfr_mul(r3281132, r3281130, r3281131, MPFR_RNDN);
        mpfr_add(r3281133, r3281129, r3281132, MPFR_RNDN);
        ;
        mpfr_mul(r3281135, r3281131, r3281131, MPFR_RNDN);
        mpfr_mul(r3281136, r3281134, r3281135, MPFR_RNDN);
        mpfr_add(r3281137, r3281133, r3281136, MPFR_RNDN);
        ;
        mpfr_mul(r3281139, r3281135, r3281131, MPFR_RNDN);
        mpfr_mul(r3281140, r3281138, r3281139, MPFR_RNDN);
        mpfr_add(r3281141, r3281137, r3281140, MPFR_RNDN);
        ;
        mpfr_mul(r3281143, r3281139, r3281131, MPFR_RNDN);
        mpfr_mul(r3281144, r3281142, r3281143, MPFR_RNDN);
        mpfr_add(r3281145, r3281141, r3281144, MPFR_RNDN);
        ;
        mpfr_mul(r3281147, r3281143, r3281131, MPFR_RNDN);
        mpfr_mul(r3281148, r3281146, r3281147, MPFR_RNDN);
        mpfr_add(r3281149, r3281145, r3281148, MPFR_RNDN);
        ;
        mpfr_mul(r3281151, r3281147, r3281131, MPFR_RNDN);
        mpfr_mul(r3281152, r3281150, r3281151, MPFR_RNDN);
        mpfr_add(r3281153, r3281149, r3281152, MPFR_RNDN);
        ;
        mpfr_mul(r3281155, r3281151, r3281131, MPFR_RNDN);
        mpfr_mul(r3281156, r3281154, r3281155, MPFR_RNDN);
        mpfr_add(r3281157, r3281153, r3281156, MPFR_RNDN);
        ;
        mpfr_mul(r3281159, r3281155, r3281131, MPFR_RNDN);
        mpfr_mul(r3281160, r3281158, r3281159, MPFR_RNDN);
        mpfr_add(r3281161, r3281157, r3281160, MPFR_RNDN);
        ;
        mpfr_mul(r3281163, r3281159, r3281131, MPFR_RNDN);
        mpfr_mul(r3281164, r3281162, r3281163, MPFR_RNDN);
        mpfr_add(r3281165, r3281161, r3281164, MPFR_RNDN);
        ;
        mpfr_mul(r3281167, r3281163, r3281131, MPFR_RNDN);
        mpfr_mul(r3281168, r3281166, r3281167, MPFR_RNDN);
        mpfr_add(r3281169, r3281165, r3281168, MPFR_RNDN);
        return mpfr_get_d(r3281169, MPFR_RNDN);
}

static mpfr_t r3281170, r3281171, r3281172, r3281173, r3281174, r3281175, r3281176, r3281177, r3281178, r3281179, r3281180, r3281181, r3281182, r3281183, r3281184, r3281185, r3281186, r3281187, r3281188, r3281189, r3281190, r3281191, r3281192, r3281193, r3281194, r3281195, r3281196, r3281197, r3281198, r3281199, r3281200, r3281201, r3281202, r3281203, r3281204, r3281205, r3281206, r3281207, r3281208;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3281170);
        mpfr_init(r3281171);
        mpfr_init_set_str(r3281172, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r3281173);
        mpfr_init_set_str(r3281174, "33.0", 10, MPFR_RNDN);
        mpfr_init(r3281175);
        mpfr_init(r3281176);
        mpfr_init_set_str(r3281177, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3281178);
        mpfr_init_set_str(r3281179, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3281180);
        mpfr_init(r3281181);
        mpfr_init_set_str(r3281182, "3", 10, MPFR_RNDN);
        mpfr_init(r3281183);
        mpfr_init(r3281184);
        mpfr_init_set_str(r3281185, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281186, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r3281187);
        mpfr_init(r3281188);
        mpfr_init(r3281189);
        mpfr_init(r3281190);
        mpfr_init_set_str(r3281191, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281192, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r3281193);
        mpfr_init(r3281194);
        mpfr_init(r3281195);
        mpfr_init(r3281196);
        mpfr_init(r3281197);
        mpfr_init(r3281198);
        mpfr_init_set_str(r3281199, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3281200);
        mpfr_init(r3281201);
        mpfr_init_set_str(r3281202, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r3281203);
        mpfr_init_set_str(r3281204, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r3281205);
        mpfr_init(r3281206);
        mpfr_init(r3281207);
        mpfr_init(r3281208);
}

double f_fm(double x) {
        mpfr_set_d(r3281170, x, MPFR_RNDN);
        mpfr_mul(r3281171, r3281170, r3281170, MPFR_RNDN);
        ;
        mpfr_mul(r3281173, r3281172, r3281170, MPFR_RNDN);
        ;
        mpfr_add(r3281175, r3281173, r3281174, MPFR_RNDN);
        mpfr_mul(r3281176, r3281171, r3281175, MPFR_RNDN);
        ;
        mpfr_mul(r3281178, r3281170, r3281177, MPFR_RNDN);
        ;
        mpfr_add(r3281180, r3281178, r3281179, MPFR_RNDN);
        mpfr_add(r3281181, r3281176, r3281180, MPFR_RNDN);
        ;
        mpfr_pow(r3281183, r3281170, r3281182, MPFR_RNDN);
        mpfr_mul(r3281184, r3281183, r3281183, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3281187, r3281186, r3281170, MPFR_RNDN);
        mpfr_add(r3281188, r3281185, r3281187, MPFR_RNDN);
        mpfr_mul(r3281189, r3281184, r3281188, MPFR_RNDN);
        mpfr_mul(r3281190, r3281171, r3281171, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3281193, r3281192, r3281170, MPFR_RNDN);
        mpfr_add(r3281194, r3281191, r3281193, MPFR_RNDN);
        mpfr_mul(r3281195, r3281190, r3281194, MPFR_RNDN);
        mpfr_add(r3281196, r3281189, r3281195, MPFR_RNDN);
        mpfr_add(r3281197, r3281181, r3281196, MPFR_RNDN);
        mpfr_mul(r3281198, r3281190, r3281190, MPFR_RNDN);
        ;
        mpfr_mul(r3281200, r3281199, r3281171, MPFR_RNDN);
        mpfr_mul(r3281201, r3281198, r3281200, MPFR_RNDN);
        ;
        mpfr_mul(r3281203, r3281202, r3281170, MPFR_RNDN);
        ;
        mpfr_add(r3281205, r3281203, r3281204, MPFR_RNDN);
        mpfr_mul(r3281206, r3281198, r3281205, MPFR_RNDN);
        mpfr_add(r3281207, r3281201, r3281206, MPFR_RNDN);
        mpfr_add(r3281208, r3281197, r3281207, MPFR_RNDN);
        return mpfr_get_d(r3281208, MPFR_RNDN);
}

static mpfr_t r3281209, r3281210, r3281211, r3281212, r3281213, r3281214, r3281215, r3281216, r3281217, r3281218, r3281219, r3281220, r3281221, r3281222, r3281223, r3281224, r3281225, r3281226, r3281227, r3281228, r3281229, r3281230, r3281231, r3281232, r3281233, r3281234, r3281235, r3281236, r3281237, r3281238, r3281239, r3281240, r3281241, r3281242, r3281243, r3281244, r3281245, r3281246, r3281247;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3281209);
        mpfr_init(r3281210);
        mpfr_init_set_str(r3281211, "-36.666667", 10, MPFR_RNDN);
        mpfr_init(r3281212);
        mpfr_init_set_str(r3281213, "33.0", 10, MPFR_RNDN);
        mpfr_init(r3281214);
        mpfr_init(r3281215);
        mpfr_init_set_str(r3281216, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r3281217);
        mpfr_init_set_str(r3281218, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3281219);
        mpfr_init(r3281220);
        mpfr_init_set_str(r3281221, "3", 10, MPFR_RNDN);
        mpfr_init(r3281222);
        mpfr_init(r3281223);
        mpfr_init_set_str(r3281224, "1.283333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281225, "-0.157143", 10, MPFR_RNDN);
        mpfr_init(r3281226);
        mpfr_init(r3281227);
        mpfr_init(r3281228);
        mpfr_init(r3281229);
        mpfr_init_set_str(r3281230, "20.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r3281231, "-6.6", 10, MPFR_RNDN);
        mpfr_init(r3281232);
        mpfr_init(r3281233);
        mpfr_init(r3281234);
        mpfr_init(r3281235);
        mpfr_init(r3281236);
        mpfr_init(r3281237);
        mpfr_init_set_str(r3281238, "1.8e-05", 10, MPFR_RNDN);
        mpfr_init(r3281239);
        mpfr_init(r3281240);
        mpfr_init_set_str(r3281241, "-0.000606", 10, MPFR_RNDN);
        mpfr_init(r3281242);
        mpfr_init_set_str(r3281243, "0.012277", 10, MPFR_RNDN);
        mpfr_init(r3281244);
        mpfr_init(r3281245);
        mpfr_init(r3281246);
        mpfr_init(r3281247);
}

double f_dm(double x) {
        mpfr_set_d(r3281209, x, MPFR_RNDN);
        mpfr_mul(r3281210, r3281209, r3281209, MPFR_RNDN);
        ;
        mpfr_mul(r3281212, r3281211, r3281209, MPFR_RNDN);
        ;
        mpfr_add(r3281214, r3281212, r3281213, MPFR_RNDN);
        mpfr_mul(r3281215, r3281210, r3281214, MPFR_RNDN);
        ;
        mpfr_mul(r3281217, r3281209, r3281216, MPFR_RNDN);
        ;
        mpfr_add(r3281219, r3281217, r3281218, MPFR_RNDN);
        mpfr_add(r3281220, r3281215, r3281219, MPFR_RNDN);
        ;
        mpfr_pow(r3281222, r3281209, r3281221, MPFR_RNDN);
        mpfr_mul(r3281223, r3281222, r3281222, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3281226, r3281225, r3281209, MPFR_RNDN);
        mpfr_add(r3281227, r3281224, r3281226, MPFR_RNDN);
        mpfr_mul(r3281228, r3281223, r3281227, MPFR_RNDN);
        mpfr_mul(r3281229, r3281210, r3281210, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3281232, r3281231, r3281209, MPFR_RNDN);
        mpfr_add(r3281233, r3281230, r3281232, MPFR_RNDN);
        mpfr_mul(r3281234, r3281229, r3281233, MPFR_RNDN);
        mpfr_add(r3281235, r3281228, r3281234, MPFR_RNDN);
        mpfr_add(r3281236, r3281220, r3281235, MPFR_RNDN);
        mpfr_mul(r3281237, r3281229, r3281229, MPFR_RNDN);
        ;
        mpfr_mul(r3281239, r3281238, r3281210, MPFR_RNDN);
        mpfr_mul(r3281240, r3281237, r3281239, MPFR_RNDN);
        ;
        mpfr_mul(r3281242, r3281241, r3281209, MPFR_RNDN);
        ;
        mpfr_add(r3281244, r3281242, r3281243, MPFR_RNDN);
        mpfr_mul(r3281245, r3281237, r3281244, MPFR_RNDN);
        mpfr_add(r3281246, r3281240, r3281245, MPFR_RNDN);
        mpfr_add(r3281247, r3281236, r3281246, MPFR_RNDN);
        return mpfr_get_d(r3281247, MPFR_RNDN);
}

