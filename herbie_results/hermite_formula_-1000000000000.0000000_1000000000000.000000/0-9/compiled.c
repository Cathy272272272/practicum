#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7602953 = 30240.0;
        float r7602954 = x;
        float r7602955 = r7602953 * r7602954;
        float r7602956 = -80640.0;
        float r7602957 = r7602954 * r7602954;
        float r7602958 = r7602957 * r7602954;
        float r7602959 = r7602956 * r7602958;
        float r7602960 = r7602955 + r7602959;
        float r7602961 = 48384.0;
        float r7602962 = r7602958 * r7602954;
        float r7602963 = r7602962 * r7602954;
        float r7602964 = r7602961 * r7602963;
        float r7602965 = r7602960 + r7602964;
        float r7602966 = -9216.0;
        float r7602967 = r7602963 * r7602954;
        float r7602968 = r7602967 * r7602954;
        float r7602969 = r7602966 * r7602968;
        float r7602970 = r7602965 + r7602969;
        float r7602971 = 512.0;
        float r7602972 = r7602968 * r7602954;
        float r7602973 = r7602972 * r7602954;
        float r7602974 = r7602971 * r7602973;
        float r7602975 = r7602970 + r7602974;
        return r7602975;
}

double f_id(double x) {
        double r7602976 = 30240.0;
        double r7602977 = x;
        double r7602978 = r7602976 * r7602977;
        double r7602979 = -80640.0;
        double r7602980 = r7602977 * r7602977;
        double r7602981 = r7602980 * r7602977;
        double r7602982 = r7602979 * r7602981;
        double r7602983 = r7602978 + r7602982;
        double r7602984 = 48384.0;
        double r7602985 = r7602981 * r7602977;
        double r7602986 = r7602985 * r7602977;
        double r7602987 = r7602984 * r7602986;
        double r7602988 = r7602983 + r7602987;
        double r7602989 = -9216.0;
        double r7602990 = r7602986 * r7602977;
        double r7602991 = r7602990 * r7602977;
        double r7602992 = r7602989 * r7602991;
        double r7602993 = r7602988 + r7602992;
        double r7602994 = 512.0;
        double r7602995 = r7602991 * r7602977;
        double r7602996 = r7602995 * r7602977;
        double r7602997 = r7602994 * r7602996;
        double r7602998 = r7602993 + r7602997;
        return r7602998;
}


double f_of(float x) {
        float r7602999 = x;
        float r7603000 = 3;
        float r7603001 = pow(r7602999, r7603000);
        float r7603002 = 80640.0;
        float r7603003 = -r7603002;
        float r7603004 = r7603001 * r7603003;
        float r7603005 = cbrt(r7603004);
        float r7603006 = r7602999 * r7602999;
        float r7603007 = -80640.0;
        float r7603008 = r7603007 * r7602999;
        float r7603009 = r7603006 * r7603008;
        float r7603010 = cbrt(r7603009);
        float r7603011 = r7603005 * r7603010;
        float r7603012 = r7603011 * r7603010;
        float r7603013 = r7603006 * r7603006;
        float r7603014 = 48384.0;
        float r7603015 = r7603014 * r7602999;
        float r7603016 = r7603013 * r7603015;
        float r7603017 = 30240.0;
        float r7603018 = r7603017 * r7602999;
        float r7603019 = r7603016 + r7603018;
        float r7603020 = r7603001 * r7603001;
        float r7603021 = r7603020 * r7602999;
        float r7603022 = 512.0;
        float r7603023 = r7603022 * r7602999;
        float r7603024 = r7603023 * r7602999;
        float r7603025 = -9216.0;
        float r7603026 = r7603024 + r7603025;
        float r7603027 = r7603021 * r7603026;
        float r7603028 = r7603019 + r7603027;
        float r7603029 = r7603012 + r7603028;
        return r7603029;
}

double f_od(double x) {
        double r7603030 = x;
        double r7603031 = 3;
        double r7603032 = pow(r7603030, r7603031);
        double r7603033 = 80640.0;
        double r7603034 = -r7603033;
        double r7603035 = r7603032 * r7603034;
        double r7603036 = cbrt(r7603035);
        double r7603037 = r7603030 * r7603030;
        double r7603038 = -80640.0;
        double r7603039 = r7603038 * r7603030;
        double r7603040 = r7603037 * r7603039;
        double r7603041 = cbrt(r7603040);
        double r7603042 = r7603036 * r7603041;
        double r7603043 = r7603042 * r7603041;
        double r7603044 = r7603037 * r7603037;
        double r7603045 = 48384.0;
        double r7603046 = r7603045 * r7603030;
        double r7603047 = r7603044 * r7603046;
        double r7603048 = 30240.0;
        double r7603049 = r7603048 * r7603030;
        double r7603050 = r7603047 + r7603049;
        double r7603051 = r7603032 * r7603032;
        double r7603052 = r7603051 * r7603030;
        double r7603053 = 512.0;
        double r7603054 = r7603053 * r7603030;
        double r7603055 = r7603054 * r7603030;
        double r7603056 = -9216.0;
        double r7603057 = r7603055 + r7603056;
        double r7603058 = r7603052 * r7603057;
        double r7603059 = r7603050 + r7603058;
        double r7603060 = r7603043 + r7603059;
        return r7603060;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7603061, r7603062, r7603063, r7603064, r7603065, r7603066, r7603067, r7603068, r7603069, r7603070, r7603071, r7603072, r7603073, r7603074, r7603075, r7603076, r7603077, r7603078, r7603079, r7603080, r7603081, r7603082, r7603083;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7603061, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7603062);
        mpfr_init(r7603063);
        mpfr_init_set_str(r7603064, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7603065);
        mpfr_init(r7603066);
        mpfr_init(r7603067);
        mpfr_init(r7603068);
        mpfr_init_set_str(r7603069, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7603070);
        mpfr_init(r7603071);
        mpfr_init(r7603072);
        mpfr_init(r7603073);
        mpfr_init_set_str(r7603074, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7603075);
        mpfr_init(r7603076);
        mpfr_init(r7603077);
        mpfr_init(r7603078);
        mpfr_init_set_str(r7603079, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7603080);
        mpfr_init(r7603081);
        mpfr_init(r7603082);
        mpfr_init(r7603083);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7603062, x, MPFR_RNDN);
        mpfr_mul(r7603063, r7603061, r7603062, MPFR_RNDN);
        ;
        mpfr_mul(r7603065, r7603062, r7603062, MPFR_RNDN);
        mpfr_mul(r7603066, r7603065, r7603062, MPFR_RNDN);
        mpfr_mul(r7603067, r7603064, r7603066, MPFR_RNDN);
        mpfr_add(r7603068, r7603063, r7603067, MPFR_RNDN);
        ;
        mpfr_mul(r7603070, r7603066, r7603062, MPFR_RNDN);
        mpfr_mul(r7603071, r7603070, r7603062, MPFR_RNDN);
        mpfr_mul(r7603072, r7603069, r7603071, MPFR_RNDN);
        mpfr_add(r7603073, r7603068, r7603072, MPFR_RNDN);
        ;
        mpfr_mul(r7603075, r7603071, r7603062, MPFR_RNDN);
        mpfr_mul(r7603076, r7603075, r7603062, MPFR_RNDN);
        mpfr_mul(r7603077, r7603074, r7603076, MPFR_RNDN);
        mpfr_add(r7603078, r7603073, r7603077, MPFR_RNDN);
        ;
        mpfr_mul(r7603080, r7603076, r7603062, MPFR_RNDN);
        mpfr_mul(r7603081, r7603080, r7603062, MPFR_RNDN);
        mpfr_mul(r7603082, r7603079, r7603081, MPFR_RNDN);
        mpfr_add(r7603083, r7603078, r7603082, MPFR_RNDN);
        return mpfr_get_d(r7603083, MPFR_RNDN);
}

static mpfr_t r7603084, r7603085, r7603086, r7603087, r7603088, r7603089, r7603090, r7603091, r7603092, r7603093, r7603094, r7603095, r7603096, r7603097, r7603098, r7603099, r7603100, r7603101, r7603102, r7603103, r7603104, r7603105, r7603106, r7603107, r7603108, r7603109, r7603110, r7603111, r7603112, r7603113, r7603114;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7603084);
        mpfr_init_set_str(r7603085, "3", 10, MPFR_RNDN);
        mpfr_init(r7603086);
        mpfr_init_set_str(r7603087, "80640.0", 10, MPFR_RNDN);
        mpfr_init(r7603088);
        mpfr_init(r7603089);
        mpfr_init(r7603090);
        mpfr_init(r7603091);
        mpfr_init_set_str(r7603092, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7603093);
        mpfr_init(r7603094);
        mpfr_init(r7603095);
        mpfr_init(r7603096);
        mpfr_init(r7603097);
        mpfr_init(r7603098);
        mpfr_init_set_str(r7603099, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7603100);
        mpfr_init(r7603101);
        mpfr_init_set_str(r7603102, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7603103);
        mpfr_init(r7603104);
        mpfr_init(r7603105);
        mpfr_init(r7603106);
        mpfr_init_set_str(r7603107, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7603108);
        mpfr_init(r7603109);
        mpfr_init_set_str(r7603110, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7603111);
        mpfr_init(r7603112);
        mpfr_init(r7603113);
        mpfr_init(r7603114);
}

double f_fm(double x) {
        mpfr_set_d(r7603084, x, MPFR_RNDN);
        ;
        mpfr_pow(r7603086, r7603084, r7603085, MPFR_RNDN);
        ;
        mpfr_neg(r7603088, r7603087, MPFR_RNDN);
        mpfr_mul(r7603089, r7603086, r7603088, MPFR_RNDN);
        mpfr_cbrt(r7603090, r7603089, MPFR_RNDN);
        mpfr_mul(r7603091, r7603084, r7603084, MPFR_RNDN);
        ;
        mpfr_mul(r7603093, r7603092, r7603084, MPFR_RNDN);
        mpfr_mul(r7603094, r7603091, r7603093, MPFR_RNDN);
        mpfr_cbrt(r7603095, r7603094, MPFR_RNDN);
        mpfr_mul(r7603096, r7603090, r7603095, MPFR_RNDN);
        mpfr_mul(r7603097, r7603096, r7603095, MPFR_RNDN);
        mpfr_mul(r7603098, r7603091, r7603091, MPFR_RNDN);
        ;
        mpfr_mul(r7603100, r7603099, r7603084, MPFR_RNDN);
        mpfr_mul(r7603101, r7603098, r7603100, MPFR_RNDN);
        ;
        mpfr_mul(r7603103, r7603102, r7603084, MPFR_RNDN);
        mpfr_add(r7603104, r7603101, r7603103, MPFR_RNDN);
        mpfr_mul(r7603105, r7603086, r7603086, MPFR_RNDN);
        mpfr_mul(r7603106, r7603105, r7603084, MPFR_RNDN);
        ;
        mpfr_mul(r7603108, r7603107, r7603084, MPFR_RNDN);
        mpfr_mul(r7603109, r7603108, r7603084, MPFR_RNDN);
        ;
        mpfr_add(r7603111, r7603109, r7603110, MPFR_RNDN);
        mpfr_mul(r7603112, r7603106, r7603111, MPFR_RNDN);
        mpfr_add(r7603113, r7603104, r7603112, MPFR_RNDN);
        mpfr_add(r7603114, r7603097, r7603113, MPFR_RNDN);
        return mpfr_get_d(r7603114, MPFR_RNDN);
}

static mpfr_t r7603115, r7603116, r7603117, r7603118, r7603119, r7603120, r7603121, r7603122, r7603123, r7603124, r7603125, r7603126, r7603127, r7603128, r7603129, r7603130, r7603131, r7603132, r7603133, r7603134, r7603135, r7603136, r7603137, r7603138, r7603139, r7603140, r7603141, r7603142, r7603143, r7603144, r7603145;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7603115);
        mpfr_init_set_str(r7603116, "3", 10, MPFR_RNDN);
        mpfr_init(r7603117);
        mpfr_init_set_str(r7603118, "80640.0", 10, MPFR_RNDN);
        mpfr_init(r7603119);
        mpfr_init(r7603120);
        mpfr_init(r7603121);
        mpfr_init(r7603122);
        mpfr_init_set_str(r7603123, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r7603124);
        mpfr_init(r7603125);
        mpfr_init(r7603126);
        mpfr_init(r7603127);
        mpfr_init(r7603128);
        mpfr_init(r7603129);
        mpfr_init_set_str(r7603130, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r7603131);
        mpfr_init(r7603132);
        mpfr_init_set_str(r7603133, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r7603134);
        mpfr_init(r7603135);
        mpfr_init(r7603136);
        mpfr_init(r7603137);
        mpfr_init_set_str(r7603138, "512.0", 10, MPFR_RNDN);
        mpfr_init(r7603139);
        mpfr_init(r7603140);
        mpfr_init_set_str(r7603141, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r7603142);
        mpfr_init(r7603143);
        mpfr_init(r7603144);
        mpfr_init(r7603145);
}

double f_dm(double x) {
        mpfr_set_d(r7603115, x, MPFR_RNDN);
        ;
        mpfr_pow(r7603117, r7603115, r7603116, MPFR_RNDN);
        ;
        mpfr_neg(r7603119, r7603118, MPFR_RNDN);
        mpfr_mul(r7603120, r7603117, r7603119, MPFR_RNDN);
        mpfr_cbrt(r7603121, r7603120, MPFR_RNDN);
        mpfr_mul(r7603122, r7603115, r7603115, MPFR_RNDN);
        ;
        mpfr_mul(r7603124, r7603123, r7603115, MPFR_RNDN);
        mpfr_mul(r7603125, r7603122, r7603124, MPFR_RNDN);
        mpfr_cbrt(r7603126, r7603125, MPFR_RNDN);
        mpfr_mul(r7603127, r7603121, r7603126, MPFR_RNDN);
        mpfr_mul(r7603128, r7603127, r7603126, MPFR_RNDN);
        mpfr_mul(r7603129, r7603122, r7603122, MPFR_RNDN);
        ;
        mpfr_mul(r7603131, r7603130, r7603115, MPFR_RNDN);
        mpfr_mul(r7603132, r7603129, r7603131, MPFR_RNDN);
        ;
        mpfr_mul(r7603134, r7603133, r7603115, MPFR_RNDN);
        mpfr_add(r7603135, r7603132, r7603134, MPFR_RNDN);
        mpfr_mul(r7603136, r7603117, r7603117, MPFR_RNDN);
        mpfr_mul(r7603137, r7603136, r7603115, MPFR_RNDN);
        ;
        mpfr_mul(r7603139, r7603138, r7603115, MPFR_RNDN);
        mpfr_mul(r7603140, r7603139, r7603115, MPFR_RNDN);
        ;
        mpfr_add(r7603142, r7603140, r7603141, MPFR_RNDN);
        mpfr_mul(r7603143, r7603137, r7603142, MPFR_RNDN);
        mpfr_add(r7603144, r7603135, r7603143, MPFR_RNDN);
        mpfr_add(r7603145, r7603128, r7603144, MPFR_RNDN);
        return mpfr_get_d(r7603145, MPFR_RNDN);
}

