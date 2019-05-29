#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r11729999 = 1.0;
        float r11730000 = -4.0;
        float r11730001 = x;
        float r11730002 = r11730000 * r11730001;
        float r11730003 = r11729999 + r11730002;
        float r11730004 = 3.0;
        float r11730005 = r11730001 * r11730001;
        float r11730006 = r11730004 * r11730005;
        float r11730007 = r11730003 + r11730006;
        float r11730008 = -0.666667;
        float r11730009 = r11730005 * r11730001;
        float r11730010 = r11730008 * r11730009;
        float r11730011 = r11730007 + r11730010;
        float r11730012 = 0.041667;
        float r11730013 = r11730009 * r11730001;
        float r11730014 = r11730012 * r11730013;
        float r11730015 = r11730011 + r11730014;
        return r11730015;
}

double f_id(double x) {
        double r11730016 = 1.0;
        double r11730017 = -4.0;
        double r11730018 = x;
        double r11730019 = r11730017 * r11730018;
        double r11730020 = r11730016 + r11730019;
        double r11730021 = 3.0;
        double r11730022 = r11730018 * r11730018;
        double r11730023 = r11730021 * r11730022;
        double r11730024 = r11730020 + r11730023;
        double r11730025 = -0.666667;
        double r11730026 = r11730022 * r11730018;
        double r11730027 = r11730025 * r11730026;
        double r11730028 = r11730024 + r11730027;
        double r11730029 = 0.041667;
        double r11730030 = r11730026 * r11730018;
        double r11730031 = r11730029 * r11730030;
        double r11730032 = r11730028 + r11730031;
        return r11730032;
}


double f_of(float x) {
        float r11730033 = 1.0;
        float r11730034 = -4.0;
        float r11730035 = x;
        float r11730036 = r11730034 * r11730035;
        float r11730037 = r11730033 + r11730036;
        float r11730038 = 3.0;
        float r11730039 = r11730035 * r11730035;
        float r11730040 = r11730038 * r11730039;
        float r11730041 = r11730037 + r11730040;
        float r11730042 = -0.666667;
        float r11730043 = r11730039 * r11730035;
        float r11730044 = r11730042 * r11730043;
        float r11730045 = r11730041 + r11730044;
        float r11730046 = 0.041667;
        float r11730047 = r11730043 * r11730035;
        float r11730048 = r11730046 * r11730047;
        float r11730049 = r11730045 + r11730048;
        return r11730049;
}

double f_od(double x) {
        double r11730050 = 1.0;
        double r11730051 = -4.0;
        double r11730052 = x;
        double r11730053 = r11730051 * r11730052;
        double r11730054 = r11730050 + r11730053;
        double r11730055 = 3.0;
        double r11730056 = r11730052 * r11730052;
        double r11730057 = r11730055 * r11730056;
        double r11730058 = r11730054 + r11730057;
        double r11730059 = -0.666667;
        double r11730060 = r11730056 * r11730052;
        double r11730061 = r11730059 * r11730060;
        double r11730062 = r11730058 + r11730061;
        double r11730063 = 0.041667;
        double r11730064 = r11730060 * r11730052;
        double r11730065 = r11730063 * r11730064;
        double r11730066 = r11730062 + r11730065;
        return r11730066;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11730067, r11730068, r11730069, r11730070, r11730071, r11730072, r11730073, r11730074, r11730075, r11730076, r11730077, r11730078, r11730079, r11730080, r11730081, r11730082, r11730083;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11730067, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730068, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11730069);
        mpfr_init(r11730070);
        mpfr_init(r11730071);
        mpfr_init_set_str(r11730072, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11730073);
        mpfr_init(r11730074);
        mpfr_init(r11730075);
        mpfr_init_set_str(r11730076, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11730077);
        mpfr_init(r11730078);
        mpfr_init(r11730079);
        mpfr_init_set_str(r11730080, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11730081);
        mpfr_init(r11730082);
        mpfr_init(r11730083);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11730069, x, MPFR_RNDN);
        mpfr_mul(r11730070, r11730068, r11730069, MPFR_RNDN);
        mpfr_add(r11730071, r11730067, r11730070, MPFR_RNDN);
        ;
        mpfr_mul(r11730073, r11730069, r11730069, MPFR_RNDN);
        mpfr_mul(r11730074, r11730072, r11730073, MPFR_RNDN);
        mpfr_add(r11730075, r11730071, r11730074, MPFR_RNDN);
        ;
        mpfr_mul(r11730077, r11730073, r11730069, MPFR_RNDN);
        mpfr_mul(r11730078, r11730076, r11730077, MPFR_RNDN);
        mpfr_add(r11730079, r11730075, r11730078, MPFR_RNDN);
        ;
        mpfr_mul(r11730081, r11730077, r11730069, MPFR_RNDN);
        mpfr_mul(r11730082, r11730080, r11730081, MPFR_RNDN);
        mpfr_add(r11730083, r11730079, r11730082, MPFR_RNDN);
        return mpfr_get_d(r11730083, MPFR_RNDN);
}

static mpfr_t r11730084, r11730085, r11730086, r11730087, r11730088, r11730089, r11730090, r11730091, r11730092, r11730093, r11730094, r11730095, r11730096, r11730097, r11730098, r11730099, r11730100;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11730084, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730085, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11730086);
        mpfr_init(r11730087);
        mpfr_init(r11730088);
        mpfr_init_set_str(r11730089, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11730090);
        mpfr_init(r11730091);
        mpfr_init(r11730092);
        mpfr_init_set_str(r11730093, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11730094);
        mpfr_init(r11730095);
        mpfr_init(r11730096);
        mpfr_init_set_str(r11730097, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11730098);
        mpfr_init(r11730099);
        mpfr_init(r11730100);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11730086, x, MPFR_RNDN);
        mpfr_mul(r11730087, r11730085, r11730086, MPFR_RNDN);
        mpfr_add(r11730088, r11730084, r11730087, MPFR_RNDN);
        ;
        mpfr_mul(r11730090, r11730086, r11730086, MPFR_RNDN);
        mpfr_mul(r11730091, r11730089, r11730090, MPFR_RNDN);
        mpfr_add(r11730092, r11730088, r11730091, MPFR_RNDN);
        ;
        mpfr_mul(r11730094, r11730090, r11730086, MPFR_RNDN);
        mpfr_mul(r11730095, r11730093, r11730094, MPFR_RNDN);
        mpfr_add(r11730096, r11730092, r11730095, MPFR_RNDN);
        ;
        mpfr_mul(r11730098, r11730094, r11730086, MPFR_RNDN);
        mpfr_mul(r11730099, r11730097, r11730098, MPFR_RNDN);
        mpfr_add(r11730100, r11730096, r11730099, MPFR_RNDN);
        return mpfr_get_d(r11730100, MPFR_RNDN);
}

static mpfr_t r11730101, r11730102, r11730103, r11730104, r11730105, r11730106, r11730107, r11730108, r11730109, r11730110, r11730111, r11730112, r11730113, r11730114, r11730115, r11730116, r11730117;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r11730101, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11730102, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r11730103);
        mpfr_init(r11730104);
        mpfr_init(r11730105);
        mpfr_init_set_str(r11730106, "3.0", 10, MPFR_RNDN);
        mpfr_init(r11730107);
        mpfr_init(r11730108);
        mpfr_init(r11730109);
        mpfr_init_set_str(r11730110, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r11730111);
        mpfr_init(r11730112);
        mpfr_init(r11730113);
        mpfr_init_set_str(r11730114, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r11730115);
        mpfr_init(r11730116);
        mpfr_init(r11730117);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11730103, x, MPFR_RNDN);
        mpfr_mul(r11730104, r11730102, r11730103, MPFR_RNDN);
        mpfr_add(r11730105, r11730101, r11730104, MPFR_RNDN);
        ;
        mpfr_mul(r11730107, r11730103, r11730103, MPFR_RNDN);
        mpfr_mul(r11730108, r11730106, r11730107, MPFR_RNDN);
        mpfr_add(r11730109, r11730105, r11730108, MPFR_RNDN);
        ;
        mpfr_mul(r11730111, r11730107, r11730103, MPFR_RNDN);
        mpfr_mul(r11730112, r11730110, r11730111, MPFR_RNDN);
        mpfr_add(r11730113, r11730109, r11730112, MPFR_RNDN);
        ;
        mpfr_mul(r11730115, r11730111, r11730103, MPFR_RNDN);
        mpfr_mul(r11730116, r11730114, r11730115, MPFR_RNDN);
        mpfr_add(r11730117, r11730113, r11730116, MPFR_RNDN);
        return mpfr_get_d(r11730117, MPFR_RNDN);
}

