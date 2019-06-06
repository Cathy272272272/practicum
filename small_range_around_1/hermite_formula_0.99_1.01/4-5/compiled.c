#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r61032983 = 120.0;
        float r61032984 = x;
        float r61032985 = r61032983 * r61032984;
        float r61032986 = -160.0;
        float r61032987 = r61032984 * r61032984;
        float r61032988 = r61032987 * r61032984;
        float r61032989 = r61032986 * r61032988;
        float r61032990 = r61032985 + r61032989;
        float r61032991 = 32.0;
        float r61032992 = r61032988 * r61032984;
        float r61032993 = r61032992 * r61032984;
        float r61032994 = r61032991 * r61032993;
        float r61032995 = r61032990 + r61032994;
        return r61032995;
}

double f_id(double x) {
        double r61032996 = 120.0;
        double r61032997 = x;
        double r61032998 = r61032996 * r61032997;
        double r61032999 = -160.0;
        double r61033000 = r61032997 * r61032997;
        double r61033001 = r61033000 * r61032997;
        double r61033002 = r61032999 * r61033001;
        double r61033003 = r61032998 + r61033002;
        double r61033004 = 32.0;
        double r61033005 = r61033001 * r61032997;
        double r61033006 = r61033005 * r61032997;
        double r61033007 = r61033004 * r61033006;
        double r61033008 = r61033003 + r61033007;
        return r61033008;
}


double f_of(float x) {
        float r61033009 = 32.0;
        float r61033010 = exp(r61033009);
        float r61033011 = x;
        float r61033012 = 3;
        float r61033013 = pow(r61033011, r61033012);
        float r61033014 = r61033011 * r61033011;
        float r61033015 = r61033013 * r61033014;
        float r61033016 = pow(r61033010, r61033015);
        float r61033017 = 120.0;
        float r61033018 = exp(r61033017);
        float r61033019 = pow(r61033018, r61033011);
        float r61033020 = -160.0;
        float r61033021 = exp(r61033020);
        float r61033022 = sqrt(r61033021);
        float r61033023 = pow(r61033022, r61033013);
        float r61033024 = pow(r61033022, r61033011);
        float r61033025 = pow(r61033024, r61033014);
        float r61033026 = r61033023 * r61033025;
        float r61033027 = r61033019 * r61033026;
        float r61033028 = r61033016 * r61033027;
        float r61033029 = log(r61033028);
        return r61033029;
}

double f_od(double x) {
        double r61033030 = 32.0;
        double r61033031 = exp(r61033030);
        double r61033032 = x;
        double r61033033 = 3;
        double r61033034 = pow(r61033032, r61033033);
        double r61033035 = r61033032 * r61033032;
        double r61033036 = r61033034 * r61033035;
        double r61033037 = pow(r61033031, r61033036);
        double r61033038 = 120.0;
        double r61033039 = exp(r61033038);
        double r61033040 = pow(r61033039, r61033032);
        double r61033041 = -160.0;
        double r61033042 = exp(r61033041);
        double r61033043 = sqrt(r61033042);
        double r61033044 = pow(r61033043, r61033034);
        double r61033045 = pow(r61033043, r61033032);
        double r61033046 = pow(r61033045, r61033035);
        double r61033047 = r61033044 * r61033046;
        double r61033048 = r61033040 * r61033047;
        double r61033049 = r61033037 * r61033048;
        double r61033050 = log(r61033049);
        return r61033050;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61033051, r61033052, r61033053, r61033054, r61033055, r61033056, r61033057, r61033058, r61033059, r61033060, r61033061, r61033062, r61033063;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033051, "120.0", 10, MPFR_RNDN);
        mpfr_init(r61033052);
        mpfr_init(r61033053);
        mpfr_init_set_str(r61033054, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r61033055);
        mpfr_init(r61033056);
        mpfr_init(r61033057);
        mpfr_init(r61033058);
        mpfr_init_set_str(r61033059, "32.0", 10, MPFR_RNDN);
        mpfr_init(r61033060);
        mpfr_init(r61033061);
        mpfr_init(r61033062);
        mpfr_init(r61033063);
}

double f_im(double x) {
        ;
        mpfr_set_d(r61033052, x, MPFR_RNDN);
        mpfr_mul(r61033053, r61033051, r61033052, MPFR_RNDN);
        ;
        mpfr_mul(r61033055, r61033052, r61033052, MPFR_RNDN);
        mpfr_mul(r61033056, r61033055, r61033052, MPFR_RNDN);
        mpfr_mul(r61033057, r61033054, r61033056, MPFR_RNDN);
        mpfr_add(r61033058, r61033053, r61033057, MPFR_RNDN);
        ;
        mpfr_mul(r61033060, r61033056, r61033052, MPFR_RNDN);
        mpfr_mul(r61033061, r61033060, r61033052, MPFR_RNDN);
        mpfr_mul(r61033062, r61033059, r61033061, MPFR_RNDN);
        mpfr_add(r61033063, r61033058, r61033062, MPFR_RNDN);
        return mpfr_get_d(r61033063, MPFR_RNDN);
}

static mpfr_t r61033064, r61033065, r61033066, r61033067, r61033068, r61033069, r61033070, r61033071, r61033072, r61033073, r61033074, r61033075, r61033076, r61033077, r61033078, r61033079, r61033080, r61033081, r61033082, r61033083, r61033084;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033064, "32.0", 10, MPFR_RNDN);
        mpfr_init(r61033065);
        mpfr_init(r61033066);
        mpfr_init_set_str(r61033067, "3", 10, MPFR_RNDN);
        mpfr_init(r61033068);
        mpfr_init(r61033069);
        mpfr_init(r61033070);
        mpfr_init(r61033071);
        mpfr_init_set_str(r61033072, "120.0", 10, MPFR_RNDN);
        mpfr_init(r61033073);
        mpfr_init(r61033074);
        mpfr_init_set_str(r61033075, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r61033076);
        mpfr_init(r61033077);
        mpfr_init(r61033078);
        mpfr_init(r61033079);
        mpfr_init(r61033080);
        mpfr_init(r61033081);
        mpfr_init(r61033082);
        mpfr_init(r61033083);
        mpfr_init(r61033084);
}

double f_fm(double x) {
        ;
        mpfr_exp(r61033065, r61033064, MPFR_RNDN);
        mpfr_set_d(r61033066, x, MPFR_RNDN);
        ;
        mpfr_pow(r61033068, r61033066, r61033067, MPFR_RNDN);
        mpfr_mul(r61033069, r61033066, r61033066, MPFR_RNDN);
        mpfr_mul(r61033070, r61033068, r61033069, MPFR_RNDN);
        mpfr_pow(r61033071, r61033065, r61033070, MPFR_RNDN);
        ;
        mpfr_exp(r61033073, r61033072, MPFR_RNDN);
        mpfr_pow(r61033074, r61033073, r61033066, MPFR_RNDN);
        ;
        mpfr_exp(r61033076, r61033075, MPFR_RNDN);
        mpfr_sqrt(r61033077, r61033076, MPFR_RNDN);
        mpfr_pow(r61033078, r61033077, r61033068, MPFR_RNDN);
        mpfr_pow(r61033079, r61033077, r61033066, MPFR_RNDN);
        mpfr_pow(r61033080, r61033079, r61033069, MPFR_RNDN);
        mpfr_mul(r61033081, r61033078, r61033080, MPFR_RNDN);
        mpfr_mul(r61033082, r61033074, r61033081, MPFR_RNDN);
        mpfr_mul(r61033083, r61033071, r61033082, MPFR_RNDN);
        mpfr_log(r61033084, r61033083, MPFR_RNDN);
        return mpfr_get_d(r61033084, MPFR_RNDN);
}

static mpfr_t r61033085, r61033086, r61033087, r61033088, r61033089, r61033090, r61033091, r61033092, r61033093, r61033094, r61033095, r61033096, r61033097, r61033098, r61033099, r61033100, r61033101, r61033102, r61033103, r61033104, r61033105;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61033085, "32.0", 10, MPFR_RNDN);
        mpfr_init(r61033086);
        mpfr_init(r61033087);
        mpfr_init_set_str(r61033088, "3", 10, MPFR_RNDN);
        mpfr_init(r61033089);
        mpfr_init(r61033090);
        mpfr_init(r61033091);
        mpfr_init(r61033092);
        mpfr_init_set_str(r61033093, "120.0", 10, MPFR_RNDN);
        mpfr_init(r61033094);
        mpfr_init(r61033095);
        mpfr_init_set_str(r61033096, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r61033097);
        mpfr_init(r61033098);
        mpfr_init(r61033099);
        mpfr_init(r61033100);
        mpfr_init(r61033101);
        mpfr_init(r61033102);
        mpfr_init(r61033103);
        mpfr_init(r61033104);
        mpfr_init(r61033105);
}

double f_dm(double x) {
        ;
        mpfr_exp(r61033086, r61033085, MPFR_RNDN);
        mpfr_set_d(r61033087, x, MPFR_RNDN);
        ;
        mpfr_pow(r61033089, r61033087, r61033088, MPFR_RNDN);
        mpfr_mul(r61033090, r61033087, r61033087, MPFR_RNDN);
        mpfr_mul(r61033091, r61033089, r61033090, MPFR_RNDN);
        mpfr_pow(r61033092, r61033086, r61033091, MPFR_RNDN);
        ;
        mpfr_exp(r61033094, r61033093, MPFR_RNDN);
        mpfr_pow(r61033095, r61033094, r61033087, MPFR_RNDN);
        ;
        mpfr_exp(r61033097, r61033096, MPFR_RNDN);
        mpfr_sqrt(r61033098, r61033097, MPFR_RNDN);
        mpfr_pow(r61033099, r61033098, r61033089, MPFR_RNDN);
        mpfr_pow(r61033100, r61033098, r61033087, MPFR_RNDN);
        mpfr_pow(r61033101, r61033100, r61033090, MPFR_RNDN);
        mpfr_mul(r61033102, r61033099, r61033101, MPFR_RNDN);
        mpfr_mul(r61033103, r61033095, r61033102, MPFR_RNDN);
        mpfr_mul(r61033104, r61033092, r61033103, MPFR_RNDN);
        mpfr_log(r61033105, r61033104, MPFR_RNDN);
        return mpfr_get_d(r61033105, MPFR_RNDN);
}

