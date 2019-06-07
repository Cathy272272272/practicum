#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7638990 = -1680.0;
        float r7638991 = x;
        float r7638992 = r7638990 * r7638991;
        float r7638993 = 3360.0;
        float r7638994 = r7638991 * r7638991;
        float r7638995 = r7638994 * r7638991;
        float r7638996 = r7638993 * r7638995;
        float r7638997 = r7638992 + r7638996;
        float r7638998 = -1344.0;
        float r7638999 = r7638995 * r7638991;
        float r7639000 = r7638999 * r7638991;
        float r7639001 = r7638998 * r7639000;
        float r7639002 = r7638997 + r7639001;
        float r7639003 = 128.0;
        float r7639004 = r7639000 * r7638991;
        float r7639005 = r7639004 * r7638991;
        float r7639006 = r7639003 * r7639005;
        float r7639007 = r7639002 + r7639006;
        return r7639007;
}

double f_id(double x) {
        double r7639008 = -1680.0;
        double r7639009 = x;
        double r7639010 = r7639008 * r7639009;
        double r7639011 = 3360.0;
        double r7639012 = r7639009 * r7639009;
        double r7639013 = r7639012 * r7639009;
        double r7639014 = r7639011 * r7639013;
        double r7639015 = r7639010 + r7639014;
        double r7639016 = -1344.0;
        double r7639017 = r7639013 * r7639009;
        double r7639018 = r7639017 * r7639009;
        double r7639019 = r7639016 * r7639018;
        double r7639020 = r7639015 + r7639019;
        double r7639021 = 128.0;
        double r7639022 = r7639018 * r7639009;
        double r7639023 = r7639022 * r7639009;
        double r7639024 = r7639021 * r7639023;
        double r7639025 = r7639020 + r7639024;
        return r7639025;
}


double f_of(float x) {
        float r7639026 = -1680.0;
        float r7639027 = x;
        float r7639028 = r7639026 * r7639027;
        float r7639029 = 3360.0;
        float r7639030 = r7639027 * r7639027;
        float r7639031 = r7639030 * r7639027;
        float r7639032 = r7639029 * r7639031;
        float r7639033 = r7639028 + r7639032;
        float r7639034 = -1344.0;
        float r7639035 = r7639031 * r7639027;
        float r7639036 = r7639035 * r7639027;
        float r7639037 = r7639034 * r7639036;
        float r7639038 = r7639033 + r7639037;
        float r7639039 = 128.0;
        float r7639040 = 3;
        float r7639041 = pow(r7639027, r7639040);
        float r7639042 = r7639041 * r7639027;
        float r7639043 = r7639042 * r7639027;
        float r7639044 = r7639043 * r7639027;
        float r7639045 = r7639044 * r7639027;
        float r7639046 = r7639039 * r7639045;
        float r7639047 = r7639038 + r7639046;
        return r7639047;
}

double f_od(double x) {
        double r7639048 = -1680.0;
        double r7639049 = x;
        double r7639050 = r7639048 * r7639049;
        double r7639051 = 3360.0;
        double r7639052 = r7639049 * r7639049;
        double r7639053 = r7639052 * r7639049;
        double r7639054 = r7639051 * r7639053;
        double r7639055 = r7639050 + r7639054;
        double r7639056 = -1344.0;
        double r7639057 = r7639053 * r7639049;
        double r7639058 = r7639057 * r7639049;
        double r7639059 = r7639056 * r7639058;
        double r7639060 = r7639055 + r7639059;
        double r7639061 = 128.0;
        double r7639062 = 3;
        double r7639063 = pow(r7639049, r7639062);
        double r7639064 = r7639063 * r7639049;
        double r7639065 = r7639064 * r7639049;
        double r7639066 = r7639065 * r7639049;
        double r7639067 = r7639066 * r7639049;
        double r7639068 = r7639061 * r7639067;
        double r7639069 = r7639060 + r7639068;
        return r7639069;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7639070, r7639071, r7639072, r7639073, r7639074, r7639075, r7639076, r7639077, r7639078, r7639079, r7639080, r7639081, r7639082, r7639083, r7639084, r7639085, r7639086, r7639087;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639070, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7639071);
        mpfr_init(r7639072);
        mpfr_init_set_str(r7639073, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7639074);
        mpfr_init(r7639075);
        mpfr_init(r7639076);
        mpfr_init(r7639077);
        mpfr_init_set_str(r7639078, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7639079);
        mpfr_init(r7639080);
        mpfr_init(r7639081);
        mpfr_init(r7639082);
        mpfr_init_set_str(r7639083, "128.0", 10, MPFR_RNDN);
        mpfr_init(r7639084);
        mpfr_init(r7639085);
        mpfr_init(r7639086);
        mpfr_init(r7639087);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7639071, x, MPFR_RNDN);
        mpfr_mul(r7639072, r7639070, r7639071, MPFR_RNDN);
        ;
        mpfr_mul(r7639074, r7639071, r7639071, MPFR_RNDN);
        mpfr_mul(r7639075, r7639074, r7639071, MPFR_RNDN);
        mpfr_mul(r7639076, r7639073, r7639075, MPFR_RNDN);
        mpfr_add(r7639077, r7639072, r7639076, MPFR_RNDN);
        ;
        mpfr_mul(r7639079, r7639075, r7639071, MPFR_RNDN);
        mpfr_mul(r7639080, r7639079, r7639071, MPFR_RNDN);
        mpfr_mul(r7639081, r7639078, r7639080, MPFR_RNDN);
        mpfr_add(r7639082, r7639077, r7639081, MPFR_RNDN);
        ;
        mpfr_mul(r7639084, r7639080, r7639071, MPFR_RNDN);
        mpfr_mul(r7639085, r7639084, r7639071, MPFR_RNDN);
        mpfr_mul(r7639086, r7639083, r7639085, MPFR_RNDN);
        mpfr_add(r7639087, r7639082, r7639086, MPFR_RNDN);
        return mpfr_get_d(r7639087, MPFR_RNDN);
}

static mpfr_t r7639088, r7639089, r7639090, r7639091, r7639092, r7639093, r7639094, r7639095, r7639096, r7639097, r7639098, r7639099, r7639100, r7639101, r7639102, r7639103, r7639104, r7639105, r7639106, r7639107, r7639108, r7639109;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639088, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7639089);
        mpfr_init(r7639090);
        mpfr_init_set_str(r7639091, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7639092);
        mpfr_init(r7639093);
        mpfr_init(r7639094);
        mpfr_init(r7639095);
        mpfr_init_set_str(r7639096, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7639097);
        mpfr_init(r7639098);
        mpfr_init(r7639099);
        mpfr_init(r7639100);
        mpfr_init_set_str(r7639101, "128.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639102, "3", 10, MPFR_RNDN);
        mpfr_init(r7639103);
        mpfr_init(r7639104);
        mpfr_init(r7639105);
        mpfr_init(r7639106);
        mpfr_init(r7639107);
        mpfr_init(r7639108);
        mpfr_init(r7639109);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7639089, x, MPFR_RNDN);
        mpfr_mul(r7639090, r7639088, r7639089, MPFR_RNDN);
        ;
        mpfr_mul(r7639092, r7639089, r7639089, MPFR_RNDN);
        mpfr_mul(r7639093, r7639092, r7639089, MPFR_RNDN);
        mpfr_mul(r7639094, r7639091, r7639093, MPFR_RNDN);
        mpfr_add(r7639095, r7639090, r7639094, MPFR_RNDN);
        ;
        mpfr_mul(r7639097, r7639093, r7639089, MPFR_RNDN);
        mpfr_mul(r7639098, r7639097, r7639089, MPFR_RNDN);
        mpfr_mul(r7639099, r7639096, r7639098, MPFR_RNDN);
        mpfr_add(r7639100, r7639095, r7639099, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639103, r7639089, r7639102, MPFR_RNDN);
        mpfr_mul(r7639104, r7639103, r7639089, MPFR_RNDN);
        mpfr_mul(r7639105, r7639104, r7639089, MPFR_RNDN);
        mpfr_mul(r7639106, r7639105, r7639089, MPFR_RNDN);
        mpfr_mul(r7639107, r7639106, r7639089, MPFR_RNDN);
        mpfr_mul(r7639108, r7639101, r7639107, MPFR_RNDN);
        mpfr_add(r7639109, r7639100, r7639108, MPFR_RNDN);
        return mpfr_get_d(r7639109, MPFR_RNDN);
}

static mpfr_t r7639110, r7639111, r7639112, r7639113, r7639114, r7639115, r7639116, r7639117, r7639118, r7639119, r7639120, r7639121, r7639122, r7639123, r7639124, r7639125, r7639126, r7639127, r7639128, r7639129, r7639130, r7639131;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7639110, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r7639111);
        mpfr_init(r7639112);
        mpfr_init_set_str(r7639113, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r7639114);
        mpfr_init(r7639115);
        mpfr_init(r7639116);
        mpfr_init(r7639117);
        mpfr_init_set_str(r7639118, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r7639119);
        mpfr_init(r7639120);
        mpfr_init(r7639121);
        mpfr_init(r7639122);
        mpfr_init_set_str(r7639123, "128.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7639124, "3", 10, MPFR_RNDN);
        mpfr_init(r7639125);
        mpfr_init(r7639126);
        mpfr_init(r7639127);
        mpfr_init(r7639128);
        mpfr_init(r7639129);
        mpfr_init(r7639130);
        mpfr_init(r7639131);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7639111, x, MPFR_RNDN);
        mpfr_mul(r7639112, r7639110, r7639111, MPFR_RNDN);
        ;
        mpfr_mul(r7639114, r7639111, r7639111, MPFR_RNDN);
        mpfr_mul(r7639115, r7639114, r7639111, MPFR_RNDN);
        mpfr_mul(r7639116, r7639113, r7639115, MPFR_RNDN);
        mpfr_add(r7639117, r7639112, r7639116, MPFR_RNDN);
        ;
        mpfr_mul(r7639119, r7639115, r7639111, MPFR_RNDN);
        mpfr_mul(r7639120, r7639119, r7639111, MPFR_RNDN);
        mpfr_mul(r7639121, r7639118, r7639120, MPFR_RNDN);
        mpfr_add(r7639122, r7639117, r7639121, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7639125, r7639111, r7639124, MPFR_RNDN);
        mpfr_mul(r7639126, r7639125, r7639111, MPFR_RNDN);
        mpfr_mul(r7639127, r7639126, r7639111, MPFR_RNDN);
        mpfr_mul(r7639128, r7639127, r7639111, MPFR_RNDN);
        mpfr_mul(r7639129, r7639128, r7639111, MPFR_RNDN);
        mpfr_mul(r7639130, r7639123, r7639129, MPFR_RNDN);
        mpfr_add(r7639131, r7639122, r7639130, MPFR_RNDN);
        return mpfr_get_d(r7639131, MPFR_RNDN);
}

