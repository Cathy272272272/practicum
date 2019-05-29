#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7167024 = 2.460938;
        float r7167025 = x;
        float r7167026 = r7167024 * r7167025;
        float r7167027 = -36.09375;
        float r7167028 = r7167025 * r7167025;
        float r7167029 = r7167028 * r7167025;
        float r7167030 = r7167027 * r7167029;
        float r7167031 = r7167026 + r7167030;
        float r7167032 = 140.765625;
        float r7167033 = r7167029 * r7167025;
        float r7167034 = r7167033 * r7167025;
        float r7167035 = r7167032 * r7167034;
        float r7167036 = r7167031 + r7167035;
        float r7167037 = -201.09375;
        float r7167038 = r7167034 * r7167025;
        float r7167039 = r7167038 * r7167025;
        float r7167040 = r7167037 * r7167039;
        float r7167041 = r7167036 + r7167040;
        float r7167042 = 94.960938;
        float r7167043 = r7167039 * r7167025;
        float r7167044 = r7167043 * r7167025;
        float r7167045 = r7167042 * r7167044;
        float r7167046 = r7167041 + r7167045;
        return r7167046;
}

double f_id(double x) {
        double r7167047 = 2.460938;
        double r7167048 = x;
        double r7167049 = r7167047 * r7167048;
        double r7167050 = -36.09375;
        double r7167051 = r7167048 * r7167048;
        double r7167052 = r7167051 * r7167048;
        double r7167053 = r7167050 * r7167052;
        double r7167054 = r7167049 + r7167053;
        double r7167055 = 140.765625;
        double r7167056 = r7167052 * r7167048;
        double r7167057 = r7167056 * r7167048;
        double r7167058 = r7167055 * r7167057;
        double r7167059 = r7167054 + r7167058;
        double r7167060 = -201.09375;
        double r7167061 = r7167057 * r7167048;
        double r7167062 = r7167061 * r7167048;
        double r7167063 = r7167060 * r7167062;
        double r7167064 = r7167059 + r7167063;
        double r7167065 = 94.960938;
        double r7167066 = r7167062 * r7167048;
        double r7167067 = r7167066 * r7167048;
        double r7167068 = r7167065 * r7167067;
        double r7167069 = r7167064 + r7167068;
        return r7167069;
}


double f_of(float x) {
        float r7167070 = 2.460938;
        float r7167071 = x;
        float r7167072 = r7167070 * r7167071;
        float r7167073 = -36.09375;
        float r7167074 = r7167071 * r7167071;
        float r7167075 = r7167074 * r7167071;
        float r7167076 = r7167073 * r7167075;
        float r7167077 = r7167072 + r7167076;
        float r7167078 = 140.765625;
        float r7167079 = r7167075 * r7167071;
        float r7167080 = r7167079 * r7167071;
        float r7167081 = r7167078 * r7167080;
        float r7167082 = r7167077 + r7167081;
        float r7167083 = -201.09375;
        float r7167084 = r7167080 * r7167071;
        float r7167085 = r7167084 * r7167071;
        float r7167086 = r7167083 * r7167085;
        float r7167087 = r7167082 + r7167086;
        float r7167088 = 94.960938;
        float r7167089 = r7167085 * r7167071;
        float r7167090 = r7167089 * r7167071;
        float r7167091 = r7167088 * r7167090;
        float r7167092 = r7167087 + r7167091;
        return r7167092;
}

double f_od(double x) {
        double r7167093 = 2.460938;
        double r7167094 = x;
        double r7167095 = r7167093 * r7167094;
        double r7167096 = -36.09375;
        double r7167097 = r7167094 * r7167094;
        double r7167098 = r7167097 * r7167094;
        double r7167099 = r7167096 * r7167098;
        double r7167100 = r7167095 + r7167099;
        double r7167101 = 140.765625;
        double r7167102 = r7167098 * r7167094;
        double r7167103 = r7167102 * r7167094;
        double r7167104 = r7167101 * r7167103;
        double r7167105 = r7167100 + r7167104;
        double r7167106 = -201.09375;
        double r7167107 = r7167103 * r7167094;
        double r7167108 = r7167107 * r7167094;
        double r7167109 = r7167106 * r7167108;
        double r7167110 = r7167105 + r7167109;
        double r7167111 = 94.960938;
        double r7167112 = r7167108 * r7167094;
        double r7167113 = r7167112 * r7167094;
        double r7167114 = r7167111 * r7167113;
        double r7167115 = r7167110 + r7167114;
        return r7167115;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7167116, r7167117, r7167118, r7167119, r7167120, r7167121, r7167122, r7167123, r7167124, r7167125, r7167126, r7167127, r7167128, r7167129, r7167130, r7167131, r7167132, r7167133, r7167134, r7167135, r7167136, r7167137, r7167138;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7167116, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7167117);
        mpfr_init(r7167118);
        mpfr_init_set_str(r7167119, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7167120);
        mpfr_init(r7167121);
        mpfr_init(r7167122);
        mpfr_init(r7167123);
        mpfr_init_set_str(r7167124, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7167125);
        mpfr_init(r7167126);
        mpfr_init(r7167127);
        mpfr_init(r7167128);
        mpfr_init_set_str(r7167129, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7167130);
        mpfr_init(r7167131);
        mpfr_init(r7167132);
        mpfr_init(r7167133);
        mpfr_init_set_str(r7167134, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7167135);
        mpfr_init(r7167136);
        mpfr_init(r7167137);
        mpfr_init(r7167138);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7167117, x, MPFR_RNDN);
        mpfr_mul(r7167118, r7167116, r7167117, MPFR_RNDN);
        ;
        mpfr_mul(r7167120, r7167117, r7167117, MPFR_RNDN);
        mpfr_mul(r7167121, r7167120, r7167117, MPFR_RNDN);
        mpfr_mul(r7167122, r7167119, r7167121, MPFR_RNDN);
        mpfr_add(r7167123, r7167118, r7167122, MPFR_RNDN);
        ;
        mpfr_mul(r7167125, r7167121, r7167117, MPFR_RNDN);
        mpfr_mul(r7167126, r7167125, r7167117, MPFR_RNDN);
        mpfr_mul(r7167127, r7167124, r7167126, MPFR_RNDN);
        mpfr_add(r7167128, r7167123, r7167127, MPFR_RNDN);
        ;
        mpfr_mul(r7167130, r7167126, r7167117, MPFR_RNDN);
        mpfr_mul(r7167131, r7167130, r7167117, MPFR_RNDN);
        mpfr_mul(r7167132, r7167129, r7167131, MPFR_RNDN);
        mpfr_add(r7167133, r7167128, r7167132, MPFR_RNDN);
        ;
        mpfr_mul(r7167135, r7167131, r7167117, MPFR_RNDN);
        mpfr_mul(r7167136, r7167135, r7167117, MPFR_RNDN);
        mpfr_mul(r7167137, r7167134, r7167136, MPFR_RNDN);
        mpfr_add(r7167138, r7167133, r7167137, MPFR_RNDN);
        return mpfr_get_d(r7167138, MPFR_RNDN);
}

static mpfr_t r7167139, r7167140, r7167141, r7167142, r7167143, r7167144, r7167145, r7167146, r7167147, r7167148, r7167149, r7167150, r7167151, r7167152, r7167153, r7167154, r7167155, r7167156, r7167157, r7167158, r7167159, r7167160, r7167161;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7167139, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7167140);
        mpfr_init(r7167141);
        mpfr_init_set_str(r7167142, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7167143);
        mpfr_init(r7167144);
        mpfr_init(r7167145);
        mpfr_init(r7167146);
        mpfr_init_set_str(r7167147, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7167148);
        mpfr_init(r7167149);
        mpfr_init(r7167150);
        mpfr_init(r7167151);
        mpfr_init_set_str(r7167152, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7167153);
        mpfr_init(r7167154);
        mpfr_init(r7167155);
        mpfr_init(r7167156);
        mpfr_init_set_str(r7167157, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7167158);
        mpfr_init(r7167159);
        mpfr_init(r7167160);
        mpfr_init(r7167161);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7167140, x, MPFR_RNDN);
        mpfr_mul(r7167141, r7167139, r7167140, MPFR_RNDN);
        ;
        mpfr_mul(r7167143, r7167140, r7167140, MPFR_RNDN);
        mpfr_mul(r7167144, r7167143, r7167140, MPFR_RNDN);
        mpfr_mul(r7167145, r7167142, r7167144, MPFR_RNDN);
        mpfr_add(r7167146, r7167141, r7167145, MPFR_RNDN);
        ;
        mpfr_mul(r7167148, r7167144, r7167140, MPFR_RNDN);
        mpfr_mul(r7167149, r7167148, r7167140, MPFR_RNDN);
        mpfr_mul(r7167150, r7167147, r7167149, MPFR_RNDN);
        mpfr_add(r7167151, r7167146, r7167150, MPFR_RNDN);
        ;
        mpfr_mul(r7167153, r7167149, r7167140, MPFR_RNDN);
        mpfr_mul(r7167154, r7167153, r7167140, MPFR_RNDN);
        mpfr_mul(r7167155, r7167152, r7167154, MPFR_RNDN);
        mpfr_add(r7167156, r7167151, r7167155, MPFR_RNDN);
        ;
        mpfr_mul(r7167158, r7167154, r7167140, MPFR_RNDN);
        mpfr_mul(r7167159, r7167158, r7167140, MPFR_RNDN);
        mpfr_mul(r7167160, r7167157, r7167159, MPFR_RNDN);
        mpfr_add(r7167161, r7167156, r7167160, MPFR_RNDN);
        return mpfr_get_d(r7167161, MPFR_RNDN);
}

static mpfr_t r7167162, r7167163, r7167164, r7167165, r7167166, r7167167, r7167168, r7167169, r7167170, r7167171, r7167172, r7167173, r7167174, r7167175, r7167176, r7167177, r7167178, r7167179, r7167180, r7167181, r7167182, r7167183, r7167184;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7167162, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7167163);
        mpfr_init(r7167164);
        mpfr_init_set_str(r7167165, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7167166);
        mpfr_init(r7167167);
        mpfr_init(r7167168);
        mpfr_init(r7167169);
        mpfr_init_set_str(r7167170, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7167171);
        mpfr_init(r7167172);
        mpfr_init(r7167173);
        mpfr_init(r7167174);
        mpfr_init_set_str(r7167175, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7167176);
        mpfr_init(r7167177);
        mpfr_init(r7167178);
        mpfr_init(r7167179);
        mpfr_init_set_str(r7167180, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7167181);
        mpfr_init(r7167182);
        mpfr_init(r7167183);
        mpfr_init(r7167184);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7167163, x, MPFR_RNDN);
        mpfr_mul(r7167164, r7167162, r7167163, MPFR_RNDN);
        ;
        mpfr_mul(r7167166, r7167163, r7167163, MPFR_RNDN);
        mpfr_mul(r7167167, r7167166, r7167163, MPFR_RNDN);
        mpfr_mul(r7167168, r7167165, r7167167, MPFR_RNDN);
        mpfr_add(r7167169, r7167164, r7167168, MPFR_RNDN);
        ;
        mpfr_mul(r7167171, r7167167, r7167163, MPFR_RNDN);
        mpfr_mul(r7167172, r7167171, r7167163, MPFR_RNDN);
        mpfr_mul(r7167173, r7167170, r7167172, MPFR_RNDN);
        mpfr_add(r7167174, r7167169, r7167173, MPFR_RNDN);
        ;
        mpfr_mul(r7167176, r7167172, r7167163, MPFR_RNDN);
        mpfr_mul(r7167177, r7167176, r7167163, MPFR_RNDN);
        mpfr_mul(r7167178, r7167175, r7167177, MPFR_RNDN);
        mpfr_add(r7167179, r7167174, r7167178, MPFR_RNDN);
        ;
        mpfr_mul(r7167181, r7167177, r7167163, MPFR_RNDN);
        mpfr_mul(r7167182, r7167181, r7167163, MPFR_RNDN);
        mpfr_mul(r7167183, r7167180, r7167182, MPFR_RNDN);
        mpfr_add(r7167184, r7167179, r7167183, MPFR_RNDN);
        return mpfr_get_d(r7167184, MPFR_RNDN);
}

