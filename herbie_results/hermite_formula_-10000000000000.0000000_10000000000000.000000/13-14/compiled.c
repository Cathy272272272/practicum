#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r5316899 = -17297280.0;
        float r5316900 = 242161920.0;
        float r5316901 = x;
        float r5316902 = r5316901 * r5316901;
        float r5316903 = r5316900 * r5316902;
        float r5316904 = r5316899 + r5316903;
        float r5316905 = -484323840.0;
        float r5316906 = r5316902 * r5316901;
        float r5316907 = r5316906 * r5316901;
        float r5316908 = r5316905 * r5316907;
        float r5316909 = r5316904 + r5316908;
        float r5316910 = 322882560.0;
        float r5316911 = r5316907 * r5316901;
        float r5316912 = r5316911 * r5316901;
        float r5316913 = r5316910 * r5316912;
        float r5316914 = r5316909 + r5316913;
        float r5316915 = -92252160.0;
        float r5316916 = r5316912 * r5316901;
        float r5316917 = r5316916 * r5316901;
        float r5316918 = r5316915 * r5316917;
        float r5316919 = r5316914 + r5316918;
        float r5316920 = 12300288.0;
        float r5316921 = r5316917 * r5316901;
        float r5316922 = r5316921 * r5316901;
        float r5316923 = r5316920 * r5316922;
        float r5316924 = r5316919 + r5316923;
        float r5316925 = -745472.0;
        float r5316926 = r5316922 * r5316901;
        float r5316927 = r5316926 * r5316901;
        float r5316928 = r5316925 * r5316927;
        float r5316929 = r5316924 + r5316928;
        float r5316930 = 16384.0;
        float r5316931 = r5316927 * r5316901;
        float r5316932 = r5316931 * r5316901;
        float r5316933 = r5316930 * r5316932;
        float r5316934 = r5316929 + r5316933;
        return r5316934;
}

double f_id(double x) {
        double r5316935 = -17297280.0;
        double r5316936 = 242161920.0;
        double r5316937 = x;
        double r5316938 = r5316937 * r5316937;
        double r5316939 = r5316936 * r5316938;
        double r5316940 = r5316935 + r5316939;
        double r5316941 = -484323840.0;
        double r5316942 = r5316938 * r5316937;
        double r5316943 = r5316942 * r5316937;
        double r5316944 = r5316941 * r5316943;
        double r5316945 = r5316940 + r5316944;
        double r5316946 = 322882560.0;
        double r5316947 = r5316943 * r5316937;
        double r5316948 = r5316947 * r5316937;
        double r5316949 = r5316946 * r5316948;
        double r5316950 = r5316945 + r5316949;
        double r5316951 = -92252160.0;
        double r5316952 = r5316948 * r5316937;
        double r5316953 = r5316952 * r5316937;
        double r5316954 = r5316951 * r5316953;
        double r5316955 = r5316950 + r5316954;
        double r5316956 = 12300288.0;
        double r5316957 = r5316953 * r5316937;
        double r5316958 = r5316957 * r5316937;
        double r5316959 = r5316956 * r5316958;
        double r5316960 = r5316955 + r5316959;
        double r5316961 = -745472.0;
        double r5316962 = r5316958 * r5316937;
        double r5316963 = r5316962 * r5316937;
        double r5316964 = r5316961 * r5316963;
        double r5316965 = r5316960 + r5316964;
        double r5316966 = 16384.0;
        double r5316967 = r5316963 * r5316937;
        double r5316968 = r5316967 * r5316937;
        double r5316969 = r5316966 * r5316968;
        double r5316970 = r5316965 + r5316969;
        return r5316970;
}


double f_of(float x) {
        float r5316971 = x;
        float r5316972 = r5316971 * r5316971;
        float r5316973 = 242161920.0;
        float r5316974 = r5316972 * r5316973;
        float r5316975 = -17297280.0;
        float r5316976 = r5316974 + r5316975;
        float r5316977 = 3;
        float r5316978 = pow(r5316972, r5316977);
        float r5316979 = -92252160.0;
        float r5316980 = r5316979 * r5316971;
        float r5316981 = r5316971 * r5316980;
        float r5316982 = r5316978 * r5316981;
        float r5316983 = r5316976 + r5316982;
        float r5316984 = r5316972 * r5316972;
        float r5316985 = 322882560.0;
        float r5316986 = r5316972 * r5316985;
        float r5316987 = -484323840.0;
        float r5316988 = r5316986 + r5316987;
        float r5316989 = r5316984 * r5316988;
        float r5316990 = cbrt(r5316989);
        float r5316991 = r5316990 * r5316990;
        float r5316992 = r5316991 * r5316990;
        float r5316993 = r5316983 + r5316992;
        float r5316994 = 14;
        float r5316995 = pow(r5316971, r5316994);
        float r5316996 = 16384.0;
        float r5316997 = r5316995 * r5316996;
        float r5316998 = r5316978 * r5316984;
        float r5316999 = 12300288.0;
        float r5317000 = -745472.0;
        float r5317001 = r5317000 * r5316971;
        float r5317002 = r5316971 * r5317001;
        float r5317003 = r5316999 + r5317002;
        float r5317004 = r5316998 * r5317003;
        float r5317005 = r5316997 + r5317004;
        float r5317006 = r5316993 + r5317005;
        return r5317006;
}

double f_od(double x) {
        double r5317007 = x;
        double r5317008 = r5317007 * r5317007;
        double r5317009 = 242161920.0;
        double r5317010 = r5317008 * r5317009;
        double r5317011 = -17297280.0;
        double r5317012 = r5317010 + r5317011;
        double r5317013 = 3;
        double r5317014 = pow(r5317008, r5317013);
        double r5317015 = -92252160.0;
        double r5317016 = r5317015 * r5317007;
        double r5317017 = r5317007 * r5317016;
        double r5317018 = r5317014 * r5317017;
        double r5317019 = r5317012 + r5317018;
        double r5317020 = r5317008 * r5317008;
        double r5317021 = 322882560.0;
        double r5317022 = r5317008 * r5317021;
        double r5317023 = -484323840.0;
        double r5317024 = r5317022 + r5317023;
        double r5317025 = r5317020 * r5317024;
        double r5317026 = cbrt(r5317025);
        double r5317027 = r5317026 * r5317026;
        double r5317028 = r5317027 * r5317026;
        double r5317029 = r5317019 + r5317028;
        double r5317030 = 14;
        double r5317031 = pow(r5317007, r5317030);
        double r5317032 = 16384.0;
        double r5317033 = r5317031 * r5317032;
        double r5317034 = r5317014 * r5317020;
        double r5317035 = 12300288.0;
        double r5317036 = -745472.0;
        double r5317037 = r5317036 * r5317007;
        double r5317038 = r5317007 * r5317037;
        double r5317039 = r5317035 + r5317038;
        double r5317040 = r5317034 * r5317039;
        double r5317041 = r5317033 + r5317040;
        double r5317042 = r5317029 + r5317041;
        return r5317042;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5317043, r5317044, r5317045, r5317046, r5317047, r5317048, r5317049, r5317050, r5317051, r5317052, r5317053, r5317054, r5317055, r5317056, r5317057, r5317058, r5317059, r5317060, r5317061, r5317062, r5317063, r5317064, r5317065, r5317066, r5317067, r5317068, r5317069, r5317070, r5317071, r5317072, r5317073, r5317074, r5317075, r5317076, r5317077, r5317078;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5317043, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5317044, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r5317045);
        mpfr_init(r5317046);
        mpfr_init(r5317047);
        mpfr_init(r5317048);
        mpfr_init_set_str(r5317049, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r5317050);
        mpfr_init(r5317051);
        mpfr_init(r5317052);
        mpfr_init(r5317053);
        mpfr_init_set_str(r5317054, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r5317055);
        mpfr_init(r5317056);
        mpfr_init(r5317057);
        mpfr_init(r5317058);
        mpfr_init_set_str(r5317059, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r5317060);
        mpfr_init(r5317061);
        mpfr_init(r5317062);
        mpfr_init(r5317063);
        mpfr_init_set_str(r5317064, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r5317065);
        mpfr_init(r5317066);
        mpfr_init(r5317067);
        mpfr_init(r5317068);
        mpfr_init_set_str(r5317069, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r5317070);
        mpfr_init(r5317071);
        mpfr_init(r5317072);
        mpfr_init(r5317073);
        mpfr_init_set_str(r5317074, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r5317075);
        mpfr_init(r5317076);
        mpfr_init(r5317077);
        mpfr_init(r5317078);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r5317045, x, MPFR_RNDN);
        mpfr_mul(r5317046, r5317045, r5317045, MPFR_RNDN);
        mpfr_mul(r5317047, r5317044, r5317046, MPFR_RNDN);
        mpfr_add(r5317048, r5317043, r5317047, MPFR_RNDN);
        ;
        mpfr_mul(r5317050, r5317046, r5317045, MPFR_RNDN);
        mpfr_mul(r5317051, r5317050, r5317045, MPFR_RNDN);
        mpfr_mul(r5317052, r5317049, r5317051, MPFR_RNDN);
        mpfr_add(r5317053, r5317048, r5317052, MPFR_RNDN);
        ;
        mpfr_mul(r5317055, r5317051, r5317045, MPFR_RNDN);
        mpfr_mul(r5317056, r5317055, r5317045, MPFR_RNDN);
        mpfr_mul(r5317057, r5317054, r5317056, MPFR_RNDN);
        mpfr_add(r5317058, r5317053, r5317057, MPFR_RNDN);
        ;
        mpfr_mul(r5317060, r5317056, r5317045, MPFR_RNDN);
        mpfr_mul(r5317061, r5317060, r5317045, MPFR_RNDN);
        mpfr_mul(r5317062, r5317059, r5317061, MPFR_RNDN);
        mpfr_add(r5317063, r5317058, r5317062, MPFR_RNDN);
        ;
        mpfr_mul(r5317065, r5317061, r5317045, MPFR_RNDN);
        mpfr_mul(r5317066, r5317065, r5317045, MPFR_RNDN);
        mpfr_mul(r5317067, r5317064, r5317066, MPFR_RNDN);
        mpfr_add(r5317068, r5317063, r5317067, MPFR_RNDN);
        ;
        mpfr_mul(r5317070, r5317066, r5317045, MPFR_RNDN);
        mpfr_mul(r5317071, r5317070, r5317045, MPFR_RNDN);
        mpfr_mul(r5317072, r5317069, r5317071, MPFR_RNDN);
        mpfr_add(r5317073, r5317068, r5317072, MPFR_RNDN);
        ;
        mpfr_mul(r5317075, r5317071, r5317045, MPFR_RNDN);
        mpfr_mul(r5317076, r5317075, r5317045, MPFR_RNDN);
        mpfr_mul(r5317077, r5317074, r5317076, MPFR_RNDN);
        mpfr_add(r5317078, r5317073, r5317077, MPFR_RNDN);
        return mpfr_get_d(r5317078, MPFR_RNDN);
}

static mpfr_t r5317079, r5317080, r5317081, r5317082, r5317083, r5317084, r5317085, r5317086, r5317087, r5317088, r5317089, r5317090, r5317091, r5317092, r5317093, r5317094, r5317095, r5317096, r5317097, r5317098, r5317099, r5317100, r5317101, r5317102, r5317103, r5317104, r5317105, r5317106, r5317107, r5317108, r5317109, r5317110, r5317111, r5317112, r5317113, r5317114;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5317079);
        mpfr_init(r5317080);
        mpfr_init_set_str(r5317081, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r5317082);
        mpfr_init_set_str(r5317083, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r5317084);
        mpfr_init_set_str(r5317085, "3", 10, MPFR_RNDN);
        mpfr_init(r5317086);
        mpfr_init_set_str(r5317087, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r5317088);
        mpfr_init(r5317089);
        mpfr_init(r5317090);
        mpfr_init(r5317091);
        mpfr_init(r5317092);
        mpfr_init_set_str(r5317093, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r5317094);
        mpfr_init_set_str(r5317095, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r5317096);
        mpfr_init(r5317097);
        mpfr_init(r5317098);
        mpfr_init(r5317099);
        mpfr_init(r5317100);
        mpfr_init(r5317101);
        mpfr_init_set_str(r5317102, "14", 10, MPFR_RNDN);
        mpfr_init(r5317103);
        mpfr_init_set_str(r5317104, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r5317105);
        mpfr_init(r5317106);
        mpfr_init_set_str(r5317107, "12300288.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5317108, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r5317109);
        mpfr_init(r5317110);
        mpfr_init(r5317111);
        mpfr_init(r5317112);
        mpfr_init(r5317113);
        mpfr_init(r5317114);
}

double f_fm(double x) {
        mpfr_set_d(r5317079, x, MPFR_RNDN);
        mpfr_mul(r5317080, r5317079, r5317079, MPFR_RNDN);
        ;
        mpfr_mul(r5317082, r5317080, r5317081, MPFR_RNDN);
        ;
        mpfr_add(r5317084, r5317082, r5317083, MPFR_RNDN);
        ;
        mpfr_pow(r5317086, r5317080, r5317085, MPFR_RNDN);
        ;
        mpfr_mul(r5317088, r5317087, r5317079, MPFR_RNDN);
        mpfr_mul(r5317089, r5317079, r5317088, MPFR_RNDN);
        mpfr_mul(r5317090, r5317086, r5317089, MPFR_RNDN);
        mpfr_add(r5317091, r5317084, r5317090, MPFR_RNDN);
        mpfr_mul(r5317092, r5317080, r5317080, MPFR_RNDN);
        ;
        mpfr_mul(r5317094, r5317080, r5317093, MPFR_RNDN);
        ;
        mpfr_add(r5317096, r5317094, r5317095, MPFR_RNDN);
        mpfr_mul(r5317097, r5317092, r5317096, MPFR_RNDN);
        mpfr_cbrt(r5317098, r5317097, MPFR_RNDN);
        mpfr_mul(r5317099, r5317098, r5317098, MPFR_RNDN);
        mpfr_mul(r5317100, r5317099, r5317098, MPFR_RNDN);
        mpfr_add(r5317101, r5317091, r5317100, MPFR_RNDN);
        ;
        mpfr_pow(r5317103, r5317079, r5317102, MPFR_RNDN);
        ;
        mpfr_mul(r5317105, r5317103, r5317104, MPFR_RNDN);
        mpfr_mul(r5317106, r5317086, r5317092, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5317109, r5317108, r5317079, MPFR_RNDN);
        mpfr_mul(r5317110, r5317079, r5317109, MPFR_RNDN);
        mpfr_add(r5317111, r5317107, r5317110, MPFR_RNDN);
        mpfr_mul(r5317112, r5317106, r5317111, MPFR_RNDN);
        mpfr_add(r5317113, r5317105, r5317112, MPFR_RNDN);
        mpfr_add(r5317114, r5317101, r5317113, MPFR_RNDN);
        return mpfr_get_d(r5317114, MPFR_RNDN);
}

static mpfr_t r5317115, r5317116, r5317117, r5317118, r5317119, r5317120, r5317121, r5317122, r5317123, r5317124, r5317125, r5317126, r5317127, r5317128, r5317129, r5317130, r5317131, r5317132, r5317133, r5317134, r5317135, r5317136, r5317137, r5317138, r5317139, r5317140, r5317141, r5317142, r5317143, r5317144, r5317145, r5317146, r5317147, r5317148, r5317149, r5317150;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5317115);
        mpfr_init(r5317116);
        mpfr_init_set_str(r5317117, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r5317118);
        mpfr_init_set_str(r5317119, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r5317120);
        mpfr_init_set_str(r5317121, "3", 10, MPFR_RNDN);
        mpfr_init(r5317122);
        mpfr_init_set_str(r5317123, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r5317124);
        mpfr_init(r5317125);
        mpfr_init(r5317126);
        mpfr_init(r5317127);
        mpfr_init(r5317128);
        mpfr_init_set_str(r5317129, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r5317130);
        mpfr_init_set_str(r5317131, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r5317132);
        mpfr_init(r5317133);
        mpfr_init(r5317134);
        mpfr_init(r5317135);
        mpfr_init(r5317136);
        mpfr_init(r5317137);
        mpfr_init_set_str(r5317138, "14", 10, MPFR_RNDN);
        mpfr_init(r5317139);
        mpfr_init_set_str(r5317140, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r5317141);
        mpfr_init(r5317142);
        mpfr_init_set_str(r5317143, "12300288.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r5317144, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r5317145);
        mpfr_init(r5317146);
        mpfr_init(r5317147);
        mpfr_init(r5317148);
        mpfr_init(r5317149);
        mpfr_init(r5317150);
}

double f_dm(double x) {
        mpfr_set_d(r5317115, x, MPFR_RNDN);
        mpfr_mul(r5317116, r5317115, r5317115, MPFR_RNDN);
        ;
        mpfr_mul(r5317118, r5317116, r5317117, MPFR_RNDN);
        ;
        mpfr_add(r5317120, r5317118, r5317119, MPFR_RNDN);
        ;
        mpfr_pow(r5317122, r5317116, r5317121, MPFR_RNDN);
        ;
        mpfr_mul(r5317124, r5317123, r5317115, MPFR_RNDN);
        mpfr_mul(r5317125, r5317115, r5317124, MPFR_RNDN);
        mpfr_mul(r5317126, r5317122, r5317125, MPFR_RNDN);
        mpfr_add(r5317127, r5317120, r5317126, MPFR_RNDN);
        mpfr_mul(r5317128, r5317116, r5317116, MPFR_RNDN);
        ;
        mpfr_mul(r5317130, r5317116, r5317129, MPFR_RNDN);
        ;
        mpfr_add(r5317132, r5317130, r5317131, MPFR_RNDN);
        mpfr_mul(r5317133, r5317128, r5317132, MPFR_RNDN);
        mpfr_cbrt(r5317134, r5317133, MPFR_RNDN);
        mpfr_mul(r5317135, r5317134, r5317134, MPFR_RNDN);
        mpfr_mul(r5317136, r5317135, r5317134, MPFR_RNDN);
        mpfr_add(r5317137, r5317127, r5317136, MPFR_RNDN);
        ;
        mpfr_pow(r5317139, r5317115, r5317138, MPFR_RNDN);
        ;
        mpfr_mul(r5317141, r5317139, r5317140, MPFR_RNDN);
        mpfr_mul(r5317142, r5317122, r5317128, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5317145, r5317144, r5317115, MPFR_RNDN);
        mpfr_mul(r5317146, r5317115, r5317145, MPFR_RNDN);
        mpfr_add(r5317147, r5317143, r5317146, MPFR_RNDN);
        mpfr_mul(r5317148, r5317142, r5317147, MPFR_RNDN);
        mpfr_add(r5317149, r5317141, r5317148, MPFR_RNDN);
        mpfr_add(r5317150, r5317137, r5317149, MPFR_RNDN);
        return mpfr_get_d(r5317150, MPFR_RNDN);
}

