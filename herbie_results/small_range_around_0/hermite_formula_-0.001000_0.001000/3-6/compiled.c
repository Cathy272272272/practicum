#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r3816990 = -120.0;
        float r3816991 = 720.0;
        float r3816992 = x;
        float r3816993 = r3816992 * r3816992;
        float r3816994 = r3816991 * r3816993;
        float r3816995 = r3816990 + r3816994;
        float r3816996 = -480.0;
        float r3816997 = r3816993 * r3816992;
        float r3816998 = r3816997 * r3816992;
        float r3816999 = r3816996 * r3816998;
        float r3817000 = r3816995 + r3816999;
        float r3817001 = 64.0;
        float r3817002 = r3816998 * r3816992;
        float r3817003 = r3817002 * r3816992;
        float r3817004 = r3817001 * r3817003;
        float r3817005 = r3817000 + r3817004;
        return r3817005;
}

double f_id(double x) {
        double r3817006 = -120.0;
        double r3817007 = 720.0;
        double r3817008 = x;
        double r3817009 = r3817008 * r3817008;
        double r3817010 = r3817007 * r3817009;
        double r3817011 = r3817006 + r3817010;
        double r3817012 = -480.0;
        double r3817013 = r3817009 * r3817008;
        double r3817014 = r3817013 * r3817008;
        double r3817015 = r3817012 * r3817014;
        double r3817016 = r3817011 + r3817015;
        double r3817017 = 64.0;
        double r3817018 = r3817014 * r3817008;
        double r3817019 = r3817018 * r3817008;
        double r3817020 = r3817017 * r3817019;
        double r3817021 = r3817016 + r3817020;
        return r3817021;
}


double f_of(float x) {
        float r3817022 = -120.0;
        float r3817023 = 720.0;
        float r3817024 = x;
        float r3817025 = r3817024 * r3817024;
        float r3817026 = r3817023 * r3817025;
        float r3817027 = r3817022 + r3817026;
        float r3817028 = -480.0;
        float r3817029 = r3817025 * r3817024;
        float r3817030 = r3817029 * r3817024;
        float r3817031 = r3817028 * r3817030;
        float r3817032 = r3817027 + r3817031;
        float r3817033 = 64.0;
        float r3817034 = r3817030 * r3817024;
        float r3817035 = r3817034 * r3817024;
        float r3817036 = r3817033 * r3817035;
        float r3817037 = r3817032 + r3817036;
        return r3817037;
}

double f_od(double x) {
        double r3817038 = -120.0;
        double r3817039 = 720.0;
        double r3817040 = x;
        double r3817041 = r3817040 * r3817040;
        double r3817042 = r3817039 * r3817041;
        double r3817043 = r3817038 + r3817042;
        double r3817044 = -480.0;
        double r3817045 = r3817041 * r3817040;
        double r3817046 = r3817045 * r3817040;
        double r3817047 = r3817044 * r3817046;
        double r3817048 = r3817043 + r3817047;
        double r3817049 = 64.0;
        double r3817050 = r3817046 * r3817040;
        double r3817051 = r3817050 * r3817040;
        double r3817052 = r3817049 * r3817051;
        double r3817053 = r3817048 + r3817052;
        return r3817053;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3817054, r3817055, r3817056, r3817057, r3817058, r3817059, r3817060, r3817061, r3817062, r3817063, r3817064, r3817065, r3817066, r3817067, r3817068, r3817069;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817054, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817055, "720.0", 10, MPFR_RNDN);
        mpfr_init(r3817056);
        mpfr_init(r3817057);
        mpfr_init(r3817058);
        mpfr_init(r3817059);
        mpfr_init_set_str(r3817060, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r3817061);
        mpfr_init(r3817062);
        mpfr_init(r3817063);
        mpfr_init(r3817064);
        mpfr_init_set_str(r3817065, "64.0", 10, MPFR_RNDN);
        mpfr_init(r3817066);
        mpfr_init(r3817067);
        mpfr_init(r3817068);
        mpfr_init(r3817069);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3817056, x, MPFR_RNDN);
        mpfr_mul(r3817057, r3817056, r3817056, MPFR_RNDN);
        mpfr_mul(r3817058, r3817055, r3817057, MPFR_RNDN);
        mpfr_add(r3817059, r3817054, r3817058, MPFR_RNDN);
        ;
        mpfr_mul(r3817061, r3817057, r3817056, MPFR_RNDN);
        mpfr_mul(r3817062, r3817061, r3817056, MPFR_RNDN);
        mpfr_mul(r3817063, r3817060, r3817062, MPFR_RNDN);
        mpfr_add(r3817064, r3817059, r3817063, MPFR_RNDN);
        ;
        mpfr_mul(r3817066, r3817062, r3817056, MPFR_RNDN);
        mpfr_mul(r3817067, r3817066, r3817056, MPFR_RNDN);
        mpfr_mul(r3817068, r3817065, r3817067, MPFR_RNDN);
        mpfr_add(r3817069, r3817064, r3817068, MPFR_RNDN);
        return mpfr_get_d(r3817069, MPFR_RNDN);
}

static mpfr_t r3817070, r3817071, r3817072, r3817073, r3817074, r3817075, r3817076, r3817077, r3817078, r3817079, r3817080, r3817081, r3817082, r3817083, r3817084, r3817085;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817070, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817071, "720.0", 10, MPFR_RNDN);
        mpfr_init(r3817072);
        mpfr_init(r3817073);
        mpfr_init(r3817074);
        mpfr_init(r3817075);
        mpfr_init_set_str(r3817076, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r3817077);
        mpfr_init(r3817078);
        mpfr_init(r3817079);
        mpfr_init(r3817080);
        mpfr_init_set_str(r3817081, "64.0", 10, MPFR_RNDN);
        mpfr_init(r3817082);
        mpfr_init(r3817083);
        mpfr_init(r3817084);
        mpfr_init(r3817085);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r3817072, x, MPFR_RNDN);
        mpfr_mul(r3817073, r3817072, r3817072, MPFR_RNDN);
        mpfr_mul(r3817074, r3817071, r3817073, MPFR_RNDN);
        mpfr_add(r3817075, r3817070, r3817074, MPFR_RNDN);
        ;
        mpfr_mul(r3817077, r3817073, r3817072, MPFR_RNDN);
        mpfr_mul(r3817078, r3817077, r3817072, MPFR_RNDN);
        mpfr_mul(r3817079, r3817076, r3817078, MPFR_RNDN);
        mpfr_add(r3817080, r3817075, r3817079, MPFR_RNDN);
        ;
        mpfr_mul(r3817082, r3817078, r3817072, MPFR_RNDN);
        mpfr_mul(r3817083, r3817082, r3817072, MPFR_RNDN);
        mpfr_mul(r3817084, r3817081, r3817083, MPFR_RNDN);
        mpfr_add(r3817085, r3817080, r3817084, MPFR_RNDN);
        return mpfr_get_d(r3817085, MPFR_RNDN);
}

static mpfr_t r3817086, r3817087, r3817088, r3817089, r3817090, r3817091, r3817092, r3817093, r3817094, r3817095, r3817096, r3817097, r3817098, r3817099, r3817100, r3817101;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3817086, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3817087, "720.0", 10, MPFR_RNDN);
        mpfr_init(r3817088);
        mpfr_init(r3817089);
        mpfr_init(r3817090);
        mpfr_init(r3817091);
        mpfr_init_set_str(r3817092, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r3817093);
        mpfr_init(r3817094);
        mpfr_init(r3817095);
        mpfr_init(r3817096);
        mpfr_init_set_str(r3817097, "64.0", 10, MPFR_RNDN);
        mpfr_init(r3817098);
        mpfr_init(r3817099);
        mpfr_init(r3817100);
        mpfr_init(r3817101);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r3817088, x, MPFR_RNDN);
        mpfr_mul(r3817089, r3817088, r3817088, MPFR_RNDN);
        mpfr_mul(r3817090, r3817087, r3817089, MPFR_RNDN);
        mpfr_add(r3817091, r3817086, r3817090, MPFR_RNDN);
        ;
        mpfr_mul(r3817093, r3817089, r3817088, MPFR_RNDN);
        mpfr_mul(r3817094, r3817093, r3817088, MPFR_RNDN);
        mpfr_mul(r3817095, r3817092, r3817094, MPFR_RNDN);
        mpfr_add(r3817096, r3817091, r3817095, MPFR_RNDN);
        ;
        mpfr_mul(r3817098, r3817094, r3817088, MPFR_RNDN);
        mpfr_mul(r3817099, r3817098, r3817088, MPFR_RNDN);
        mpfr_mul(r3817100, r3817097, r3817099, MPFR_RNDN);
        mpfr_add(r3817101, r3817096, r3817100, MPFR_RNDN);
        return mpfr_get_d(r3817101, MPFR_RNDN);
}

