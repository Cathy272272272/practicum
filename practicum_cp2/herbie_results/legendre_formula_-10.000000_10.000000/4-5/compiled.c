#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8100057 = 1.875;
        float r8100058 = x;
        float r8100059 = r8100057 * r8100058;
        float r8100060 = -8.75;
        float r8100061 = r8100058 * r8100058;
        float r8100062 = r8100061 * r8100058;
        float r8100063 = r8100060 * r8100062;
        float r8100064 = r8100059 + r8100063;
        float r8100065 = 7.875;
        float r8100066 = r8100062 * r8100058;
        float r8100067 = r8100066 * r8100058;
        float r8100068 = r8100065 * r8100067;
        float r8100069 = r8100064 + r8100068;
        return r8100069;
}

double f_id(double x) {
        double r8100070 = 1.875;
        double r8100071 = x;
        double r8100072 = r8100070 * r8100071;
        double r8100073 = -8.75;
        double r8100074 = r8100071 * r8100071;
        double r8100075 = r8100074 * r8100071;
        double r8100076 = r8100073 * r8100075;
        double r8100077 = r8100072 + r8100076;
        double r8100078 = 7.875;
        double r8100079 = r8100075 * r8100071;
        double r8100080 = r8100079 * r8100071;
        double r8100081 = r8100078 * r8100080;
        double r8100082 = r8100077 + r8100081;
        return r8100082;
}


double f_of(float x) {
        float r8100083 = 1.875;
        float r8100084 = x;
        float r8100085 = r8100083 * r8100084;
        float r8100086 = -8.75;
        float r8100087 = r8100084 * r8100084;
        float r8100088 = r8100087 * r8100084;
        float r8100089 = r8100086 * r8100088;
        float r8100090 = r8100085 + r8100089;
        float r8100091 = 7.875;
        float r8100092 = r8100088 * r8100084;
        float r8100093 = r8100092 * r8100084;
        float r8100094 = r8100091 * r8100093;
        float r8100095 = r8100090 + r8100094;
        return r8100095;
}

double f_od(double x) {
        double r8100096 = 1.875;
        double r8100097 = x;
        double r8100098 = r8100096 * r8100097;
        double r8100099 = -8.75;
        double r8100100 = r8100097 * r8100097;
        double r8100101 = r8100100 * r8100097;
        double r8100102 = r8100099 * r8100101;
        double r8100103 = r8100098 + r8100102;
        double r8100104 = 7.875;
        double r8100105 = r8100101 * r8100097;
        double r8100106 = r8100105 * r8100097;
        double r8100107 = r8100104 * r8100106;
        double r8100108 = r8100103 + r8100107;
        return r8100108;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8100109, r8100110, r8100111, r8100112, r8100113, r8100114, r8100115, r8100116, r8100117, r8100118, r8100119, r8100120, r8100121;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8100109, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8100110);
        mpfr_init(r8100111);
        mpfr_init_set_str(r8100112, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8100113);
        mpfr_init(r8100114);
        mpfr_init(r8100115);
        mpfr_init(r8100116);
        mpfr_init_set_str(r8100117, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8100118);
        mpfr_init(r8100119);
        mpfr_init(r8100120);
        mpfr_init(r8100121);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8100110, x, MPFR_RNDN);
        mpfr_mul(r8100111, r8100109, r8100110, MPFR_RNDN);
        ;
        mpfr_mul(r8100113, r8100110, r8100110, MPFR_RNDN);
        mpfr_mul(r8100114, r8100113, r8100110, MPFR_RNDN);
        mpfr_mul(r8100115, r8100112, r8100114, MPFR_RNDN);
        mpfr_add(r8100116, r8100111, r8100115, MPFR_RNDN);
        ;
        mpfr_mul(r8100118, r8100114, r8100110, MPFR_RNDN);
        mpfr_mul(r8100119, r8100118, r8100110, MPFR_RNDN);
        mpfr_mul(r8100120, r8100117, r8100119, MPFR_RNDN);
        mpfr_add(r8100121, r8100116, r8100120, MPFR_RNDN);
        return mpfr_get_d(r8100121, MPFR_RNDN);
}

static mpfr_t r8100122, r8100123, r8100124, r8100125, r8100126, r8100127, r8100128, r8100129, r8100130, r8100131, r8100132, r8100133, r8100134;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8100122, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8100123);
        mpfr_init(r8100124);
        mpfr_init_set_str(r8100125, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8100126);
        mpfr_init(r8100127);
        mpfr_init(r8100128);
        mpfr_init(r8100129);
        mpfr_init_set_str(r8100130, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8100131);
        mpfr_init(r8100132);
        mpfr_init(r8100133);
        mpfr_init(r8100134);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8100123, x, MPFR_RNDN);
        mpfr_mul(r8100124, r8100122, r8100123, MPFR_RNDN);
        ;
        mpfr_mul(r8100126, r8100123, r8100123, MPFR_RNDN);
        mpfr_mul(r8100127, r8100126, r8100123, MPFR_RNDN);
        mpfr_mul(r8100128, r8100125, r8100127, MPFR_RNDN);
        mpfr_add(r8100129, r8100124, r8100128, MPFR_RNDN);
        ;
        mpfr_mul(r8100131, r8100127, r8100123, MPFR_RNDN);
        mpfr_mul(r8100132, r8100131, r8100123, MPFR_RNDN);
        mpfr_mul(r8100133, r8100130, r8100132, MPFR_RNDN);
        mpfr_add(r8100134, r8100129, r8100133, MPFR_RNDN);
        return mpfr_get_d(r8100134, MPFR_RNDN);
}

static mpfr_t r8100135, r8100136, r8100137, r8100138, r8100139, r8100140, r8100141, r8100142, r8100143, r8100144, r8100145, r8100146, r8100147;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8100135, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8100136);
        mpfr_init(r8100137);
        mpfr_init_set_str(r8100138, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8100139);
        mpfr_init(r8100140);
        mpfr_init(r8100141);
        mpfr_init(r8100142);
        mpfr_init_set_str(r8100143, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8100144);
        mpfr_init(r8100145);
        mpfr_init(r8100146);
        mpfr_init(r8100147);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8100136, x, MPFR_RNDN);
        mpfr_mul(r8100137, r8100135, r8100136, MPFR_RNDN);
        ;
        mpfr_mul(r8100139, r8100136, r8100136, MPFR_RNDN);
        mpfr_mul(r8100140, r8100139, r8100136, MPFR_RNDN);
        mpfr_mul(r8100141, r8100138, r8100140, MPFR_RNDN);
        mpfr_add(r8100142, r8100137, r8100141, MPFR_RNDN);
        ;
        mpfr_mul(r8100144, r8100140, r8100136, MPFR_RNDN);
        mpfr_mul(r8100145, r8100144, r8100136, MPFR_RNDN);
        mpfr_mul(r8100146, r8100143, r8100145, MPFR_RNDN);
        mpfr_add(r8100147, r8100142, r8100146, MPFR_RNDN);
        return mpfr_get_d(r8100147, MPFR_RNDN);
}

