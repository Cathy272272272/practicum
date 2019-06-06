#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r60478991 = 30240.0;
        float r60478992 = x;
        float r60478993 = r60478991 * r60478992;
        float r60478994 = -80640.0;
        float r60478995 = r60478992 * r60478992;
        float r60478996 = r60478995 * r60478992;
        float r60478997 = r60478994 * r60478996;
        float r60478998 = r60478993 + r60478997;
        float r60478999 = 48384.0;
        float r60479000 = r60478996 * r60478992;
        float r60479001 = r60479000 * r60478992;
        float r60479002 = r60478999 * r60479001;
        float r60479003 = r60478998 + r60479002;
        float r60479004 = -9216.0;
        float r60479005 = r60479001 * r60478992;
        float r60479006 = r60479005 * r60478992;
        float r60479007 = r60479004 * r60479006;
        float r60479008 = r60479003 + r60479007;
        float r60479009 = 512.0;
        float r60479010 = r60479006 * r60478992;
        float r60479011 = r60479010 * r60478992;
        float r60479012 = r60479009 * r60479011;
        float r60479013 = r60479008 + r60479012;
        return r60479013;
}

double f_id(double x) {
        double r60479014 = 30240.0;
        double r60479015 = x;
        double r60479016 = r60479014 * r60479015;
        double r60479017 = -80640.0;
        double r60479018 = r60479015 * r60479015;
        double r60479019 = r60479018 * r60479015;
        double r60479020 = r60479017 * r60479019;
        double r60479021 = r60479016 + r60479020;
        double r60479022 = 48384.0;
        double r60479023 = r60479019 * r60479015;
        double r60479024 = r60479023 * r60479015;
        double r60479025 = r60479022 * r60479024;
        double r60479026 = r60479021 + r60479025;
        double r60479027 = -9216.0;
        double r60479028 = r60479024 * r60479015;
        double r60479029 = r60479028 * r60479015;
        double r60479030 = r60479027 * r60479029;
        double r60479031 = r60479026 + r60479030;
        double r60479032 = 512.0;
        double r60479033 = r60479029 * r60479015;
        double r60479034 = r60479033 * r60479015;
        double r60479035 = r60479032 * r60479034;
        double r60479036 = r60479031 + r60479035;
        return r60479036;
}


double f_of(float x) {
        float r60479037 = 30240.0;
        float r60479038 = x;
        float r60479039 = r60479037 * r60479038;
        float r60479040 = 3;
        float r60479041 = pow(r60479039, r60479040);
        float r60479042 = 48384.0;
        float r60479043 = r60479042 * r60479038;
        float r60479044 = r60479043 * r60479038;
        float r60479045 = -80640.0;
        float r60479046 = r60479044 + r60479045;
        float r60479047 = r60479038 * r60479038;
        float r60479048 = pow(r60479047, r60479040);
        float r60479049 = r60479048 * r60479038;
        float r60479050 = r60479046 * r60479049;
        float r60479051 = r60479038 * r60479045;
        float r60479052 = r60479043 * r60479047;
        float r60479053 = r60479051 + r60479052;
        float r60479054 = r60479053 * r60479053;
        float r60479055 = r60479050 * r60479054;
        float r60479056 = r60479041 + r60479055;
        float r60479057 = cbrt(r60479055);
        float r60479058 = r60479057 - r60479039;
        float r60479059 = r60479057 * r60479058;
        float r60479060 = r60479039 * r60479039;
        float r60479061 = r60479059 + r60479060;
        float r60479062 = r60479056 / r60479061;
        float r60479063 = -9216.0;
        float r60479064 = r60479047 * r60479038;
        float r60479065 = r60479064 * r60479038;
        float r60479066 = r60479065 * r60479038;
        float r60479067 = r60479066 * r60479038;
        float r60479068 = r60479067 * r60479038;
        float r60479069 = r60479063 * r60479068;
        float r60479070 = r60479062 + r60479069;
        float r60479071 = 512.0;
        float r60479072 = r60479068 * r60479038;
        float r60479073 = r60479072 * r60479038;
        float r60479074 = r60479071 * r60479073;
        float r60479075 = r60479070 + r60479074;
        return r60479075;
}

double f_od(double x) {
        double r60479076 = 30240.0;
        double r60479077 = x;
        double r60479078 = r60479076 * r60479077;
        double r60479079 = 3;
        double r60479080 = pow(r60479078, r60479079);
        double r60479081 = 48384.0;
        double r60479082 = r60479081 * r60479077;
        double r60479083 = r60479082 * r60479077;
        double r60479084 = -80640.0;
        double r60479085 = r60479083 + r60479084;
        double r60479086 = r60479077 * r60479077;
        double r60479087 = pow(r60479086, r60479079);
        double r60479088 = r60479087 * r60479077;
        double r60479089 = r60479085 * r60479088;
        double r60479090 = r60479077 * r60479084;
        double r60479091 = r60479082 * r60479086;
        double r60479092 = r60479090 + r60479091;
        double r60479093 = r60479092 * r60479092;
        double r60479094 = r60479089 * r60479093;
        double r60479095 = r60479080 + r60479094;
        double r60479096 = cbrt(r60479094);
        double r60479097 = r60479096 - r60479078;
        double r60479098 = r60479096 * r60479097;
        double r60479099 = r60479078 * r60479078;
        double r60479100 = r60479098 + r60479099;
        double r60479101 = r60479095 / r60479100;
        double r60479102 = -9216.0;
        double r60479103 = r60479086 * r60479077;
        double r60479104 = r60479103 * r60479077;
        double r60479105 = r60479104 * r60479077;
        double r60479106 = r60479105 * r60479077;
        double r60479107 = r60479106 * r60479077;
        double r60479108 = r60479102 * r60479107;
        double r60479109 = r60479101 + r60479108;
        double r60479110 = 512.0;
        double r60479111 = r60479107 * r60479077;
        double r60479112 = r60479111 * r60479077;
        double r60479113 = r60479110 * r60479112;
        double r60479114 = r60479109 + r60479113;
        return r60479114;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479115, r60479116, r60479117, r60479118, r60479119, r60479120, r60479121, r60479122, r60479123, r60479124, r60479125, r60479126, r60479127, r60479128, r60479129, r60479130, r60479131, r60479132, r60479133, r60479134, r60479135, r60479136, r60479137;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479115, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r60479116);
        mpfr_init(r60479117);
        mpfr_init_set_str(r60479118, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r60479119);
        mpfr_init(r60479120);
        mpfr_init(r60479121);
        mpfr_init(r60479122);
        mpfr_init_set_str(r60479123, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r60479124);
        mpfr_init(r60479125);
        mpfr_init(r60479126);
        mpfr_init(r60479127);
        mpfr_init_set_str(r60479128, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r60479129);
        mpfr_init(r60479130);
        mpfr_init(r60479131);
        mpfr_init(r60479132);
        mpfr_init_set_str(r60479133, "512.0", 10, MPFR_RNDN);
        mpfr_init(r60479134);
        mpfr_init(r60479135);
        mpfr_init(r60479136);
        mpfr_init(r60479137);
}

double f_im(double x) {
        ;
        mpfr_set_d(r60479116, x, MPFR_RNDN);
        mpfr_mul(r60479117, r60479115, r60479116, MPFR_RNDN);
        ;
        mpfr_mul(r60479119, r60479116, r60479116, MPFR_RNDN);
        mpfr_mul(r60479120, r60479119, r60479116, MPFR_RNDN);
        mpfr_mul(r60479121, r60479118, r60479120, MPFR_RNDN);
        mpfr_add(r60479122, r60479117, r60479121, MPFR_RNDN);
        ;
        mpfr_mul(r60479124, r60479120, r60479116, MPFR_RNDN);
        mpfr_mul(r60479125, r60479124, r60479116, MPFR_RNDN);
        mpfr_mul(r60479126, r60479123, r60479125, MPFR_RNDN);
        mpfr_add(r60479127, r60479122, r60479126, MPFR_RNDN);
        ;
        mpfr_mul(r60479129, r60479125, r60479116, MPFR_RNDN);
        mpfr_mul(r60479130, r60479129, r60479116, MPFR_RNDN);
        mpfr_mul(r60479131, r60479128, r60479130, MPFR_RNDN);
        mpfr_add(r60479132, r60479127, r60479131, MPFR_RNDN);
        ;
        mpfr_mul(r60479134, r60479130, r60479116, MPFR_RNDN);
        mpfr_mul(r60479135, r60479134, r60479116, MPFR_RNDN);
        mpfr_mul(r60479136, r60479133, r60479135, MPFR_RNDN);
        mpfr_add(r60479137, r60479132, r60479136, MPFR_RNDN);
        return mpfr_get_d(r60479137, MPFR_RNDN);
}

static mpfr_t r60479138, r60479139, r60479140, r60479141, r60479142, r60479143, r60479144, r60479145, r60479146, r60479147, r60479148, r60479149, r60479150, r60479151, r60479152, r60479153, r60479154, r60479155, r60479156, r60479157, r60479158, r60479159, r60479160, r60479161, r60479162, r60479163, r60479164, r60479165, r60479166, r60479167, r60479168, r60479169, r60479170, r60479171, r60479172, r60479173, r60479174, r60479175, r60479176;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479138, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r60479139);
        mpfr_init(r60479140);
        mpfr_init_set_str(r60479141, "3", 10, MPFR_RNDN);
        mpfr_init(r60479142);
        mpfr_init_set_str(r60479143, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r60479144);
        mpfr_init(r60479145);
        mpfr_init_set_str(r60479146, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r60479147);
        mpfr_init(r60479148);
        mpfr_init(r60479149);
        mpfr_init(r60479150);
        mpfr_init(r60479151);
        mpfr_init(r60479152);
        mpfr_init(r60479153);
        mpfr_init(r60479154);
        mpfr_init(r60479155);
        mpfr_init(r60479156);
        mpfr_init(r60479157);
        mpfr_init(r60479158);
        mpfr_init(r60479159);
        mpfr_init(r60479160);
        mpfr_init(r60479161);
        mpfr_init(r60479162);
        mpfr_init(r60479163);
        mpfr_init_set_str(r60479164, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r60479165);
        mpfr_init(r60479166);
        mpfr_init(r60479167);
        mpfr_init(r60479168);
        mpfr_init(r60479169);
        mpfr_init(r60479170);
        mpfr_init(r60479171);
        mpfr_init_set_str(r60479172, "512.0", 10, MPFR_RNDN);
        mpfr_init(r60479173);
        mpfr_init(r60479174);
        mpfr_init(r60479175);
        mpfr_init(r60479176);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r60479139, x, MPFR_RNDN);
        mpfr_mul(r60479140, r60479138, r60479139, MPFR_RNDN);
        ;
        mpfr_pow(r60479142, r60479140, r60479141, MPFR_RNDN);
        ;
        mpfr_mul(r60479144, r60479143, r60479139, MPFR_RNDN);
        mpfr_mul(r60479145, r60479144, r60479139, MPFR_RNDN);
        ;
        mpfr_add(r60479147, r60479145, r60479146, MPFR_RNDN);
        mpfr_mul(r60479148, r60479139, r60479139, MPFR_RNDN);
        mpfr_pow(r60479149, r60479148, r60479141, MPFR_RNDN);
        mpfr_mul(r60479150, r60479149, r60479139, MPFR_RNDN);
        mpfr_mul(r60479151, r60479147, r60479150, MPFR_RNDN);
        mpfr_mul(r60479152, r60479139, r60479146, MPFR_RNDN);
        mpfr_mul(r60479153, r60479144, r60479148, MPFR_RNDN);
        mpfr_add(r60479154, r60479152, r60479153, MPFR_RNDN);
        mpfr_mul(r60479155, r60479154, r60479154, MPFR_RNDN);
        mpfr_mul(r60479156, r60479151, r60479155, MPFR_RNDN);
        mpfr_add(r60479157, r60479142, r60479156, MPFR_RNDN);
        mpfr_cbrt(r60479158, r60479156, MPFR_RNDN);
        mpfr_sub(r60479159, r60479158, r60479140, MPFR_RNDN);
        mpfr_mul(r60479160, r60479158, r60479159, MPFR_RNDN);
        mpfr_mul(r60479161, r60479140, r60479140, MPFR_RNDN);
        mpfr_add(r60479162, r60479160, r60479161, MPFR_RNDN);
        mpfr_div(r60479163, r60479157, r60479162, MPFR_RNDN);
        ;
        mpfr_mul(r60479165, r60479148, r60479139, MPFR_RNDN);
        mpfr_mul(r60479166, r60479165, r60479139, MPFR_RNDN);
        mpfr_mul(r60479167, r60479166, r60479139, MPFR_RNDN);
        mpfr_mul(r60479168, r60479167, r60479139, MPFR_RNDN);
        mpfr_mul(r60479169, r60479168, r60479139, MPFR_RNDN);
        mpfr_mul(r60479170, r60479164, r60479169, MPFR_RNDN);
        mpfr_add(r60479171, r60479163, r60479170, MPFR_RNDN);
        ;
        mpfr_mul(r60479173, r60479169, r60479139, MPFR_RNDN);
        mpfr_mul(r60479174, r60479173, r60479139, MPFR_RNDN);
        mpfr_mul(r60479175, r60479172, r60479174, MPFR_RNDN);
        mpfr_add(r60479176, r60479171, r60479175, MPFR_RNDN);
        return mpfr_get_d(r60479176, MPFR_RNDN);
}

static mpfr_t r60479177, r60479178, r60479179, r60479180, r60479181, r60479182, r60479183, r60479184, r60479185, r60479186, r60479187, r60479188, r60479189, r60479190, r60479191, r60479192, r60479193, r60479194, r60479195, r60479196, r60479197, r60479198, r60479199, r60479200, r60479201, r60479202, r60479203, r60479204, r60479205, r60479206, r60479207, r60479208, r60479209, r60479210, r60479211, r60479212, r60479213, r60479214, r60479215;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479177, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r60479178);
        mpfr_init(r60479179);
        mpfr_init_set_str(r60479180, "3", 10, MPFR_RNDN);
        mpfr_init(r60479181);
        mpfr_init_set_str(r60479182, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r60479183);
        mpfr_init(r60479184);
        mpfr_init_set_str(r60479185, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r60479186);
        mpfr_init(r60479187);
        mpfr_init(r60479188);
        mpfr_init(r60479189);
        mpfr_init(r60479190);
        mpfr_init(r60479191);
        mpfr_init(r60479192);
        mpfr_init(r60479193);
        mpfr_init(r60479194);
        mpfr_init(r60479195);
        mpfr_init(r60479196);
        mpfr_init(r60479197);
        mpfr_init(r60479198);
        mpfr_init(r60479199);
        mpfr_init(r60479200);
        mpfr_init(r60479201);
        mpfr_init(r60479202);
        mpfr_init_set_str(r60479203, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r60479204);
        mpfr_init(r60479205);
        mpfr_init(r60479206);
        mpfr_init(r60479207);
        mpfr_init(r60479208);
        mpfr_init(r60479209);
        mpfr_init(r60479210);
        mpfr_init_set_str(r60479211, "512.0", 10, MPFR_RNDN);
        mpfr_init(r60479212);
        mpfr_init(r60479213);
        mpfr_init(r60479214);
        mpfr_init(r60479215);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r60479178, x, MPFR_RNDN);
        mpfr_mul(r60479179, r60479177, r60479178, MPFR_RNDN);
        ;
        mpfr_pow(r60479181, r60479179, r60479180, MPFR_RNDN);
        ;
        mpfr_mul(r60479183, r60479182, r60479178, MPFR_RNDN);
        mpfr_mul(r60479184, r60479183, r60479178, MPFR_RNDN);
        ;
        mpfr_add(r60479186, r60479184, r60479185, MPFR_RNDN);
        mpfr_mul(r60479187, r60479178, r60479178, MPFR_RNDN);
        mpfr_pow(r60479188, r60479187, r60479180, MPFR_RNDN);
        mpfr_mul(r60479189, r60479188, r60479178, MPFR_RNDN);
        mpfr_mul(r60479190, r60479186, r60479189, MPFR_RNDN);
        mpfr_mul(r60479191, r60479178, r60479185, MPFR_RNDN);
        mpfr_mul(r60479192, r60479183, r60479187, MPFR_RNDN);
        mpfr_add(r60479193, r60479191, r60479192, MPFR_RNDN);
        mpfr_mul(r60479194, r60479193, r60479193, MPFR_RNDN);
        mpfr_mul(r60479195, r60479190, r60479194, MPFR_RNDN);
        mpfr_add(r60479196, r60479181, r60479195, MPFR_RNDN);
        mpfr_cbrt(r60479197, r60479195, MPFR_RNDN);
        mpfr_sub(r60479198, r60479197, r60479179, MPFR_RNDN);
        mpfr_mul(r60479199, r60479197, r60479198, MPFR_RNDN);
        mpfr_mul(r60479200, r60479179, r60479179, MPFR_RNDN);
        mpfr_add(r60479201, r60479199, r60479200, MPFR_RNDN);
        mpfr_div(r60479202, r60479196, r60479201, MPFR_RNDN);
        ;
        mpfr_mul(r60479204, r60479187, r60479178, MPFR_RNDN);
        mpfr_mul(r60479205, r60479204, r60479178, MPFR_RNDN);
        mpfr_mul(r60479206, r60479205, r60479178, MPFR_RNDN);
        mpfr_mul(r60479207, r60479206, r60479178, MPFR_RNDN);
        mpfr_mul(r60479208, r60479207, r60479178, MPFR_RNDN);
        mpfr_mul(r60479209, r60479203, r60479208, MPFR_RNDN);
        mpfr_add(r60479210, r60479202, r60479209, MPFR_RNDN);
        ;
        mpfr_mul(r60479212, r60479208, r60479178, MPFR_RNDN);
        mpfr_mul(r60479213, r60479212, r60479178, MPFR_RNDN);
        mpfr_mul(r60479214, r60479211, r60479213, MPFR_RNDN);
        mpfr_add(r60479215, r60479210, r60479214, MPFR_RNDN);
        return mpfr_get_d(r60479215, MPFR_RNDN);
}

