#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9883011 = -1680.0;
        float r9883012 = x;
        float r9883013 = r9883011 * r9883012;
        float r9883014 = 3360.0;
        float r9883015 = r9883012 * r9883012;
        float r9883016 = r9883015 * r9883012;
        float r9883017 = r9883014 * r9883016;
        float r9883018 = r9883013 + r9883017;
        float r9883019 = -1344.0;
        float r9883020 = r9883016 * r9883012;
        float r9883021 = r9883020 * r9883012;
        float r9883022 = r9883019 * r9883021;
        float r9883023 = r9883018 + r9883022;
        float r9883024 = 128.0;
        float r9883025 = r9883021 * r9883012;
        float r9883026 = r9883025 * r9883012;
        float r9883027 = r9883024 * r9883026;
        float r9883028 = r9883023 + r9883027;
        return r9883028;
}

double f_id(double x) {
        double r9883029 = -1680.0;
        double r9883030 = x;
        double r9883031 = r9883029 * r9883030;
        double r9883032 = 3360.0;
        double r9883033 = r9883030 * r9883030;
        double r9883034 = r9883033 * r9883030;
        double r9883035 = r9883032 * r9883034;
        double r9883036 = r9883031 + r9883035;
        double r9883037 = -1344.0;
        double r9883038 = r9883034 * r9883030;
        double r9883039 = r9883038 * r9883030;
        double r9883040 = r9883037 * r9883039;
        double r9883041 = r9883036 + r9883040;
        double r9883042 = 128.0;
        double r9883043 = r9883039 * r9883030;
        double r9883044 = r9883043 * r9883030;
        double r9883045 = r9883042 * r9883044;
        double r9883046 = r9883041 + r9883045;
        return r9883046;
}


double f_of(float x) {
        float r9883047 = x;
        float r9883048 = r9883047 * r9883047;
        float r9883049 = r9883048 * r9883048;
        float r9883050 = 128.0;
        float r9883051 = r9883050 * r9883047;
        float r9883052 = r9883048 * r9883051;
        float r9883053 = -1344.0;
        float r9883054 = r9883047 * r9883053;
        float r9883055 = r9883052 + r9883054;
        float r9883056 = r9883049 * r9883055;
        float r9883057 = -1680.0;
        float r9883058 = r9883057 * r9883047;
        float r9883059 = 3360.0;
        float r9883060 = r9883059 * r9883047;
        float r9883061 = r9883048 * r9883060;
        float r9883062 = r9883058 + r9883061;
        float r9883063 = r9883056 + r9883062;
        return r9883063;
}

double f_od(double x) {
        double r9883064 = x;
        double r9883065 = r9883064 * r9883064;
        double r9883066 = r9883065 * r9883065;
        double r9883067 = 128.0;
        double r9883068 = r9883067 * r9883064;
        double r9883069 = r9883065 * r9883068;
        double r9883070 = -1344.0;
        double r9883071 = r9883064 * r9883070;
        double r9883072 = r9883069 + r9883071;
        double r9883073 = r9883066 * r9883072;
        double r9883074 = -1680.0;
        double r9883075 = r9883074 * r9883064;
        double r9883076 = 3360.0;
        double r9883077 = r9883076 * r9883064;
        double r9883078 = r9883065 * r9883077;
        double r9883079 = r9883075 + r9883078;
        double r9883080 = r9883073 + r9883079;
        return r9883080;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9883081, r9883082, r9883083, r9883084, r9883085, r9883086, r9883087, r9883088, r9883089, r9883090, r9883091, r9883092, r9883093, r9883094, r9883095, r9883096, r9883097, r9883098;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9883081, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9883082);
        mpfr_init(r9883083);
        mpfr_init_set_str(r9883084, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9883085);
        mpfr_init(r9883086);
        mpfr_init(r9883087);
        mpfr_init(r9883088);
        mpfr_init_set_str(r9883089, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9883090);
        mpfr_init(r9883091);
        mpfr_init(r9883092);
        mpfr_init(r9883093);
        mpfr_init_set_str(r9883094, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9883095);
        mpfr_init(r9883096);
        mpfr_init(r9883097);
        mpfr_init(r9883098);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9883082, x, MPFR_RNDN);
        mpfr_mul(r9883083, r9883081, r9883082, MPFR_RNDN);
        ;
        mpfr_mul(r9883085, r9883082, r9883082, MPFR_RNDN);
        mpfr_mul(r9883086, r9883085, r9883082, MPFR_RNDN);
        mpfr_mul(r9883087, r9883084, r9883086, MPFR_RNDN);
        mpfr_add(r9883088, r9883083, r9883087, MPFR_RNDN);
        ;
        mpfr_mul(r9883090, r9883086, r9883082, MPFR_RNDN);
        mpfr_mul(r9883091, r9883090, r9883082, MPFR_RNDN);
        mpfr_mul(r9883092, r9883089, r9883091, MPFR_RNDN);
        mpfr_add(r9883093, r9883088, r9883092, MPFR_RNDN);
        ;
        mpfr_mul(r9883095, r9883091, r9883082, MPFR_RNDN);
        mpfr_mul(r9883096, r9883095, r9883082, MPFR_RNDN);
        mpfr_mul(r9883097, r9883094, r9883096, MPFR_RNDN);
        mpfr_add(r9883098, r9883093, r9883097, MPFR_RNDN);
        return mpfr_get_d(r9883098, MPFR_RNDN);
}

static mpfr_t r9883099, r9883100, r9883101, r9883102, r9883103, r9883104, r9883105, r9883106, r9883107, r9883108, r9883109, r9883110, r9883111, r9883112, r9883113, r9883114, r9883115;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r9883099);
        mpfr_init(r9883100);
        mpfr_init(r9883101);
        mpfr_init_set_str(r9883102, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9883103);
        mpfr_init(r9883104);
        mpfr_init_set_str(r9883105, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9883106);
        mpfr_init(r9883107);
        mpfr_init(r9883108);
        mpfr_init_set_str(r9883109, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9883110);
        mpfr_init_set_str(r9883111, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9883112);
        mpfr_init(r9883113);
        mpfr_init(r9883114);
        mpfr_init(r9883115);
}

double f_fm(double x) {
        mpfr_set_d(r9883099, x, MPFR_RNDN);
        mpfr_mul(r9883100, r9883099, r9883099, MPFR_RNDN);
        mpfr_mul(r9883101, r9883100, r9883100, MPFR_RNDN);
        ;
        mpfr_mul(r9883103, r9883102, r9883099, MPFR_RNDN);
        mpfr_mul(r9883104, r9883100, r9883103, MPFR_RNDN);
        ;
        mpfr_mul(r9883106, r9883099, r9883105, MPFR_RNDN);
        mpfr_add(r9883107, r9883104, r9883106, MPFR_RNDN);
        mpfr_mul(r9883108, r9883101, r9883107, MPFR_RNDN);
        ;
        mpfr_mul(r9883110, r9883109, r9883099, MPFR_RNDN);
        ;
        mpfr_mul(r9883112, r9883111, r9883099, MPFR_RNDN);
        mpfr_mul(r9883113, r9883100, r9883112, MPFR_RNDN);
        mpfr_add(r9883114, r9883110, r9883113, MPFR_RNDN);
        mpfr_add(r9883115, r9883108, r9883114, MPFR_RNDN);
        return mpfr_get_d(r9883115, MPFR_RNDN);
}

static mpfr_t r9883116, r9883117, r9883118, r9883119, r9883120, r9883121, r9883122, r9883123, r9883124, r9883125, r9883126, r9883127, r9883128, r9883129, r9883130, r9883131, r9883132;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r9883116);
        mpfr_init(r9883117);
        mpfr_init(r9883118);
        mpfr_init_set_str(r9883119, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9883120);
        mpfr_init(r9883121);
        mpfr_init_set_str(r9883122, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9883123);
        mpfr_init(r9883124);
        mpfr_init(r9883125);
        mpfr_init_set_str(r9883126, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9883127);
        mpfr_init_set_str(r9883128, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9883129);
        mpfr_init(r9883130);
        mpfr_init(r9883131);
        mpfr_init(r9883132);
}

double f_dm(double x) {
        mpfr_set_d(r9883116, x, MPFR_RNDN);
        mpfr_mul(r9883117, r9883116, r9883116, MPFR_RNDN);
        mpfr_mul(r9883118, r9883117, r9883117, MPFR_RNDN);
        ;
        mpfr_mul(r9883120, r9883119, r9883116, MPFR_RNDN);
        mpfr_mul(r9883121, r9883117, r9883120, MPFR_RNDN);
        ;
        mpfr_mul(r9883123, r9883116, r9883122, MPFR_RNDN);
        mpfr_add(r9883124, r9883121, r9883123, MPFR_RNDN);
        mpfr_mul(r9883125, r9883118, r9883124, MPFR_RNDN);
        ;
        mpfr_mul(r9883127, r9883126, r9883116, MPFR_RNDN);
        ;
        mpfr_mul(r9883129, r9883128, r9883116, MPFR_RNDN);
        mpfr_mul(r9883130, r9883117, r9883129, MPFR_RNDN);
        mpfr_add(r9883131, r9883127, r9883130, MPFR_RNDN);
        mpfr_add(r9883132, r9883125, r9883131, MPFR_RNDN);
        return mpfr_get_d(r9883132, MPFR_RNDN);
}

