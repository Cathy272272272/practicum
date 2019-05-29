#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r7056039 = 1.875;
        float r7056040 = x;
        float r7056041 = r7056039 * r7056040;
        float r7056042 = -8.75;
        float r7056043 = r7056040 * r7056040;
        float r7056044 = r7056043 * r7056040;
        float r7056045 = r7056042 * r7056044;
        float r7056046 = r7056041 + r7056045;
        float r7056047 = 7.875;
        float r7056048 = r7056044 * r7056040;
        float r7056049 = r7056048 * r7056040;
        float r7056050 = r7056047 * r7056049;
        float r7056051 = r7056046 + r7056050;
        return r7056051;
}

double f_id(double x) {
        double r7056052 = 1.875;
        double r7056053 = x;
        double r7056054 = r7056052 * r7056053;
        double r7056055 = -8.75;
        double r7056056 = r7056053 * r7056053;
        double r7056057 = r7056056 * r7056053;
        double r7056058 = r7056055 * r7056057;
        double r7056059 = r7056054 + r7056058;
        double r7056060 = 7.875;
        double r7056061 = r7056057 * r7056053;
        double r7056062 = r7056061 * r7056053;
        double r7056063 = r7056060 * r7056062;
        double r7056064 = r7056059 + r7056063;
        return r7056064;
}


double f_of(float x) {
        float r7056065 = x;
        float r7056066 = 5;
        float r7056067 = pow(r7056065, r7056066);
        float r7056068 = 7.875;
        float r7056069 = r7056067 * r7056068;
        float r7056070 = r7056065 * r7056065;
        float r7056071 = -8.75;
        float r7056072 = r7056071 * r7056065;
        float r7056073 = r7056070 * r7056072;
        float r7056074 = r7056069 + r7056073;
        float r7056075 = 1.875;
        float r7056076 = r7056075 * r7056065;
        float r7056077 = r7056074 + r7056076;
        return r7056077;
}

double f_od(double x) {
        double r7056078 = x;
        double r7056079 = 5;
        double r7056080 = pow(r7056078, r7056079);
        double r7056081 = 7.875;
        double r7056082 = r7056080 * r7056081;
        double r7056083 = r7056078 * r7056078;
        double r7056084 = -8.75;
        double r7056085 = r7056084 * r7056078;
        double r7056086 = r7056083 * r7056085;
        double r7056087 = r7056082 + r7056086;
        double r7056088 = 1.875;
        double r7056089 = r7056088 * r7056078;
        double r7056090 = r7056087 + r7056089;
        return r7056090;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7056091, r7056092, r7056093, r7056094, r7056095, r7056096, r7056097, r7056098, r7056099, r7056100, r7056101, r7056102, r7056103;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7056091, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7056092);
        mpfr_init(r7056093);
        mpfr_init_set_str(r7056094, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7056095);
        mpfr_init(r7056096);
        mpfr_init(r7056097);
        mpfr_init(r7056098);
        mpfr_init_set_str(r7056099, "7.875", 10, MPFR_RNDN);
        mpfr_init(r7056100);
        mpfr_init(r7056101);
        mpfr_init(r7056102);
        mpfr_init(r7056103);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7056092, x, MPFR_RNDN);
        mpfr_mul(r7056093, r7056091, r7056092, MPFR_RNDN);
        ;
        mpfr_mul(r7056095, r7056092, r7056092, MPFR_RNDN);
        mpfr_mul(r7056096, r7056095, r7056092, MPFR_RNDN);
        mpfr_mul(r7056097, r7056094, r7056096, MPFR_RNDN);
        mpfr_add(r7056098, r7056093, r7056097, MPFR_RNDN);
        ;
        mpfr_mul(r7056100, r7056096, r7056092, MPFR_RNDN);
        mpfr_mul(r7056101, r7056100, r7056092, MPFR_RNDN);
        mpfr_mul(r7056102, r7056099, r7056101, MPFR_RNDN);
        mpfr_add(r7056103, r7056098, r7056102, MPFR_RNDN);
        return mpfr_get_d(r7056103, MPFR_RNDN);
}

static mpfr_t r7056104, r7056105, r7056106, r7056107, r7056108, r7056109, r7056110, r7056111, r7056112, r7056113, r7056114, r7056115, r7056116;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7056104);
        mpfr_init_set_str(r7056105, "5", 10, MPFR_RNDN);
        mpfr_init(r7056106);
        mpfr_init_set_str(r7056107, "7.875", 10, MPFR_RNDN);
        mpfr_init(r7056108);
        mpfr_init(r7056109);
        mpfr_init_set_str(r7056110, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7056111);
        mpfr_init(r7056112);
        mpfr_init(r7056113);
        mpfr_init_set_str(r7056114, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7056115);
        mpfr_init(r7056116);
}

double f_fm(double x) {
        mpfr_set_d(r7056104, x, MPFR_RNDN);
        ;
        mpfr_pow(r7056106, r7056104, r7056105, MPFR_RNDN);
        ;
        mpfr_mul(r7056108, r7056106, r7056107, MPFR_RNDN);
        mpfr_mul(r7056109, r7056104, r7056104, MPFR_RNDN);
        ;
        mpfr_mul(r7056111, r7056110, r7056104, MPFR_RNDN);
        mpfr_mul(r7056112, r7056109, r7056111, MPFR_RNDN);
        mpfr_add(r7056113, r7056108, r7056112, MPFR_RNDN);
        ;
        mpfr_mul(r7056115, r7056114, r7056104, MPFR_RNDN);
        mpfr_add(r7056116, r7056113, r7056115, MPFR_RNDN);
        return mpfr_get_d(r7056116, MPFR_RNDN);
}

static mpfr_t r7056117, r7056118, r7056119, r7056120, r7056121, r7056122, r7056123, r7056124, r7056125, r7056126, r7056127, r7056128, r7056129;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7056117);
        mpfr_init_set_str(r7056118, "5", 10, MPFR_RNDN);
        mpfr_init(r7056119);
        mpfr_init_set_str(r7056120, "7.875", 10, MPFR_RNDN);
        mpfr_init(r7056121);
        mpfr_init(r7056122);
        mpfr_init_set_str(r7056123, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r7056124);
        mpfr_init(r7056125);
        mpfr_init(r7056126);
        mpfr_init_set_str(r7056127, "1.875", 10, MPFR_RNDN);
        mpfr_init(r7056128);
        mpfr_init(r7056129);
}

double f_dm(double x) {
        mpfr_set_d(r7056117, x, MPFR_RNDN);
        ;
        mpfr_pow(r7056119, r7056117, r7056118, MPFR_RNDN);
        ;
        mpfr_mul(r7056121, r7056119, r7056120, MPFR_RNDN);
        mpfr_mul(r7056122, r7056117, r7056117, MPFR_RNDN);
        ;
        mpfr_mul(r7056124, r7056123, r7056117, MPFR_RNDN);
        mpfr_mul(r7056125, r7056122, r7056124, MPFR_RNDN);
        mpfr_add(r7056126, r7056121, r7056125, MPFR_RNDN);
        ;
        mpfr_mul(r7056128, r7056127, r7056117, MPFR_RNDN);
        mpfr_add(r7056129, r7056126, r7056128, MPFR_RNDN);
        return mpfr_get_d(r7056129, MPFR_RNDN);
}

