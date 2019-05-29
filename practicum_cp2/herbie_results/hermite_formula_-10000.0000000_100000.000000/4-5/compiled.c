#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r4211017 = 120.0;
        float r4211018 = x;
        float r4211019 = r4211017 * r4211018;
        float r4211020 = -160.0;
        float r4211021 = r4211018 * r4211018;
        float r4211022 = r4211021 * r4211018;
        float r4211023 = r4211020 * r4211022;
        float r4211024 = r4211019 + r4211023;
        float r4211025 = 32.0;
        float r4211026 = r4211022 * r4211018;
        float r4211027 = r4211026 * r4211018;
        float r4211028 = r4211025 * r4211027;
        float r4211029 = r4211024 + r4211028;
        return r4211029;
}

double f_id(double x) {
        double r4211030 = 120.0;
        double r4211031 = x;
        double r4211032 = r4211030 * r4211031;
        double r4211033 = -160.0;
        double r4211034 = r4211031 * r4211031;
        double r4211035 = r4211034 * r4211031;
        double r4211036 = r4211033 * r4211035;
        double r4211037 = r4211032 + r4211036;
        double r4211038 = 32.0;
        double r4211039 = r4211035 * r4211031;
        double r4211040 = r4211039 * r4211031;
        double r4211041 = r4211038 * r4211040;
        double r4211042 = r4211037 + r4211041;
        return r4211042;
}


double f_of(float x) {
        float r4211043 = 120.0;
        float r4211044 = x;
        float r4211045 = r4211043 * r4211044;
        float r4211046 = -160.0;
        float r4211047 = r4211044 * r4211044;
        float r4211048 = r4211047 * r4211044;
        float r4211049 = r4211046 * r4211048;
        float r4211050 = r4211045 + r4211049;
        float r4211051 = 32.0;
        float r4211052 = 3;
        float r4211053 = 1;
        float r4211054 = r4211052 + r4211053;
        float r4211055 = pow(r4211044, r4211054);
        float r4211056 = r4211055 * r4211044;
        float r4211057 = r4211051 * r4211056;
        float r4211058 = r4211050 + r4211057;
        return r4211058;
}

double f_od(double x) {
        double r4211059 = 120.0;
        double r4211060 = x;
        double r4211061 = r4211059 * r4211060;
        double r4211062 = -160.0;
        double r4211063 = r4211060 * r4211060;
        double r4211064 = r4211063 * r4211060;
        double r4211065 = r4211062 * r4211064;
        double r4211066 = r4211061 + r4211065;
        double r4211067 = 32.0;
        double r4211068 = 3;
        double r4211069 = 1;
        double r4211070 = r4211068 + r4211069;
        double r4211071 = pow(r4211060, r4211070);
        double r4211072 = r4211071 * r4211060;
        double r4211073 = r4211067 * r4211072;
        double r4211074 = r4211066 + r4211073;
        return r4211074;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4211075, r4211076, r4211077, r4211078, r4211079, r4211080, r4211081, r4211082, r4211083, r4211084, r4211085, r4211086, r4211087;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4211075, "120.0", 10, MPFR_RNDN);
        mpfr_init(r4211076);
        mpfr_init(r4211077);
        mpfr_init_set_str(r4211078, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r4211079);
        mpfr_init(r4211080);
        mpfr_init(r4211081);
        mpfr_init(r4211082);
        mpfr_init_set_str(r4211083, "32.0", 10, MPFR_RNDN);
        mpfr_init(r4211084);
        mpfr_init(r4211085);
        mpfr_init(r4211086);
        mpfr_init(r4211087);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4211076, x, MPFR_RNDN);
        mpfr_mul(r4211077, r4211075, r4211076, MPFR_RNDN);
        ;
        mpfr_mul(r4211079, r4211076, r4211076, MPFR_RNDN);
        mpfr_mul(r4211080, r4211079, r4211076, MPFR_RNDN);
        mpfr_mul(r4211081, r4211078, r4211080, MPFR_RNDN);
        mpfr_add(r4211082, r4211077, r4211081, MPFR_RNDN);
        ;
        mpfr_mul(r4211084, r4211080, r4211076, MPFR_RNDN);
        mpfr_mul(r4211085, r4211084, r4211076, MPFR_RNDN);
        mpfr_mul(r4211086, r4211083, r4211085, MPFR_RNDN);
        mpfr_add(r4211087, r4211082, r4211086, MPFR_RNDN);
        return mpfr_get_d(r4211087, MPFR_RNDN);
}

static mpfr_t r4211088, r4211089, r4211090, r4211091, r4211092, r4211093, r4211094, r4211095, r4211096, r4211097, r4211098, r4211099, r4211100, r4211101, r4211102, r4211103;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4211088, "120.0", 10, MPFR_RNDN);
        mpfr_init(r4211089);
        mpfr_init(r4211090);
        mpfr_init_set_str(r4211091, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r4211092);
        mpfr_init(r4211093);
        mpfr_init(r4211094);
        mpfr_init(r4211095);
        mpfr_init_set_str(r4211096, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211097, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211098, "1", 10, MPFR_RNDN);
        mpfr_init(r4211099);
        mpfr_init(r4211100);
        mpfr_init(r4211101);
        mpfr_init(r4211102);
        mpfr_init(r4211103);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4211089, x, MPFR_RNDN);
        mpfr_mul(r4211090, r4211088, r4211089, MPFR_RNDN);
        ;
        mpfr_mul(r4211092, r4211089, r4211089, MPFR_RNDN);
        mpfr_mul(r4211093, r4211092, r4211089, MPFR_RNDN);
        mpfr_mul(r4211094, r4211091, r4211093, MPFR_RNDN);
        mpfr_add(r4211095, r4211090, r4211094, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r4211099, r4211097, r4211098, MPFR_RNDN);
        mpfr_pow(r4211100, r4211089, r4211099, MPFR_RNDN);
        mpfr_mul(r4211101, r4211100, r4211089, MPFR_RNDN);
        mpfr_mul(r4211102, r4211096, r4211101, MPFR_RNDN);
        mpfr_add(r4211103, r4211095, r4211102, MPFR_RNDN);
        return mpfr_get_d(r4211103, MPFR_RNDN);
}

static mpfr_t r4211104, r4211105, r4211106, r4211107, r4211108, r4211109, r4211110, r4211111, r4211112, r4211113, r4211114, r4211115, r4211116, r4211117, r4211118, r4211119;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4211104, "120.0", 10, MPFR_RNDN);
        mpfr_init(r4211105);
        mpfr_init(r4211106);
        mpfr_init_set_str(r4211107, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r4211108);
        mpfr_init(r4211109);
        mpfr_init(r4211110);
        mpfr_init(r4211111);
        mpfr_init_set_str(r4211112, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211113, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r4211114, "1", 10, MPFR_RNDN);
        mpfr_init(r4211115);
        mpfr_init(r4211116);
        mpfr_init(r4211117);
        mpfr_init(r4211118);
        mpfr_init(r4211119);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4211105, x, MPFR_RNDN);
        mpfr_mul(r4211106, r4211104, r4211105, MPFR_RNDN);
        ;
        mpfr_mul(r4211108, r4211105, r4211105, MPFR_RNDN);
        mpfr_mul(r4211109, r4211108, r4211105, MPFR_RNDN);
        mpfr_mul(r4211110, r4211107, r4211109, MPFR_RNDN);
        mpfr_add(r4211111, r4211106, r4211110, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r4211115, r4211113, r4211114, MPFR_RNDN);
        mpfr_pow(r4211116, r4211105, r4211115, MPFR_RNDN);
        mpfr_mul(r4211117, r4211116, r4211105, MPFR_RNDN);
        mpfr_mul(r4211118, r4211112, r4211117, MPFR_RNDN);
        mpfr_add(r4211119, r4211111, r4211118, MPFR_RNDN);
        return mpfr_get_d(r4211119, MPFR_RNDN);
}

