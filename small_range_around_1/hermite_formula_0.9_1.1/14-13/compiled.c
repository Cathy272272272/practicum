#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r46351929 = 17297280.0;
        float r46351930 = x;
        float r46351931 = r46351929 * r46351930;
        float r46351932 = -69189120.0;
        float r46351933 = r46351930 * r46351930;
        float r46351934 = r46351933 * r46351930;
        float r46351935 = r46351932 * r46351934;
        float r46351936 = r46351931 + r46351935;
        float r46351937 = 69189120.0;
        float r46351938 = r46351934 * r46351930;
        float r46351939 = r46351938 * r46351930;
        float r46351940 = r46351937 * r46351939;
        float r46351941 = r46351936 + r46351940;
        float r46351942 = -26357760.0;
        float r46351943 = r46351939 * r46351930;
        float r46351944 = r46351943 * r46351930;
        float r46351945 = r46351942 * r46351944;
        float r46351946 = r46351941 + r46351945;
        float r46351947 = 4392960.0;
        float r46351948 = r46351944 * r46351930;
        float r46351949 = r46351948 * r46351930;
        float r46351950 = r46351947 * r46351949;
        float r46351951 = r46351946 + r46351950;
        float r46351952 = -319488.0;
        float r46351953 = r46351949 * r46351930;
        float r46351954 = r46351953 * r46351930;
        float r46351955 = r46351952 * r46351954;
        float r46351956 = r46351951 + r46351955;
        float r46351957 = 8192.0;
        float r46351958 = r46351954 * r46351930;
        float r46351959 = r46351958 * r46351930;
        float r46351960 = r46351957 * r46351959;
        float r46351961 = r46351956 + r46351960;
        return r46351961;
}

double f_id(double x) {
        double r46351962 = 17297280.0;
        double r46351963 = x;
        double r46351964 = r46351962 * r46351963;
        double r46351965 = -69189120.0;
        double r46351966 = r46351963 * r46351963;
        double r46351967 = r46351966 * r46351963;
        double r46351968 = r46351965 * r46351967;
        double r46351969 = r46351964 + r46351968;
        double r46351970 = 69189120.0;
        double r46351971 = r46351967 * r46351963;
        double r46351972 = r46351971 * r46351963;
        double r46351973 = r46351970 * r46351972;
        double r46351974 = r46351969 + r46351973;
        double r46351975 = -26357760.0;
        double r46351976 = r46351972 * r46351963;
        double r46351977 = r46351976 * r46351963;
        double r46351978 = r46351975 * r46351977;
        double r46351979 = r46351974 + r46351978;
        double r46351980 = 4392960.0;
        double r46351981 = r46351977 * r46351963;
        double r46351982 = r46351981 * r46351963;
        double r46351983 = r46351980 * r46351982;
        double r46351984 = r46351979 + r46351983;
        double r46351985 = -319488.0;
        double r46351986 = r46351982 * r46351963;
        double r46351987 = r46351986 * r46351963;
        double r46351988 = r46351985 * r46351987;
        double r46351989 = r46351984 + r46351988;
        double r46351990 = 8192.0;
        double r46351991 = r46351987 * r46351963;
        double r46351992 = r46351991 * r46351963;
        double r46351993 = r46351990 * r46351992;
        double r46351994 = r46351989 + r46351993;
        return r46351994;
}


double f_of(float x) {
        float r46351995 = x;
        float r46351996 = r46351995 * r46351995;
        float r46351997 = 3;
        float r46351998 = pow(r46351995, r46351997);
        float r46351999 = r46351996 * r46351998;
        float r46352000 = r46351999 * r46351999;
        float r46352001 = 8192.0;
        float r46352002 = r46352001 * r46351996;
        float r46352003 = -319488.0;
        float r46352004 = r46352002 + r46352003;
        float r46352005 = r46352000 * r46352004;
        float r46352006 = 4392960.0;
        float r46352007 = r46352006 * r46351995;
        float r46352008 = r46352007 * r46351998;
        float r46352009 = 8;
        float r46352010 = pow(r46351995, r46352009);
        float r46352011 = cbrt(r46352010);
        float r46352012 = r46352008 * r46352011;
        float r46352013 = r46351996 * r46351996;
        float r46352014 = cbrt(r46352013);
        float r46352015 = r46352012 * r46352014;
        float r46352016 = r46352005 + r46352015;
        float r46352017 = r46351995 * r46352016;
        float r46352018 = 17297280.0;
        float r46352019 = r46352018 * r46351995;
        float r46352020 = -26357760.0;
        float r46352021 = r46352020 * r46351995;
        float r46352022 = r46352021 * r46351996;
        float r46352023 = r46352022 * r46352013;
        float r46352024 = r46352019 + r46352023;
        float r46352025 = -69189120.0;
        float r46352026 = r46352025 * r46351995;
        float r46352027 = 69189120.0;
        float r46352028 = r46352027 * r46351995;
        float r46352029 = r46352028 * r46351996;
        float r46352030 = r46352026 + r46352029;
        float r46352031 = r46351996 * r46352030;
        float r46352032 = r46352024 + r46352031;
        float r46352033 = r46352017 + r46352032;
        return r46352033;
}

double f_od(double x) {
        double r46352034 = x;
        double r46352035 = r46352034 * r46352034;
        double r46352036 = 3;
        double r46352037 = pow(r46352034, r46352036);
        double r46352038 = r46352035 * r46352037;
        double r46352039 = r46352038 * r46352038;
        double r46352040 = 8192.0;
        double r46352041 = r46352040 * r46352035;
        double r46352042 = -319488.0;
        double r46352043 = r46352041 + r46352042;
        double r46352044 = r46352039 * r46352043;
        double r46352045 = 4392960.0;
        double r46352046 = r46352045 * r46352034;
        double r46352047 = r46352046 * r46352037;
        double r46352048 = 8;
        double r46352049 = pow(r46352034, r46352048);
        double r46352050 = cbrt(r46352049);
        double r46352051 = r46352047 * r46352050;
        double r46352052 = r46352035 * r46352035;
        double r46352053 = cbrt(r46352052);
        double r46352054 = r46352051 * r46352053;
        double r46352055 = r46352044 + r46352054;
        double r46352056 = r46352034 * r46352055;
        double r46352057 = 17297280.0;
        double r46352058 = r46352057 * r46352034;
        double r46352059 = -26357760.0;
        double r46352060 = r46352059 * r46352034;
        double r46352061 = r46352060 * r46352035;
        double r46352062 = r46352061 * r46352052;
        double r46352063 = r46352058 + r46352062;
        double r46352064 = -69189120.0;
        double r46352065 = r46352064 * r46352034;
        double r46352066 = 69189120.0;
        double r46352067 = r46352066 * r46352034;
        double r46352068 = r46352067 * r46352035;
        double r46352069 = r46352065 + r46352068;
        double r46352070 = r46352035 * r46352069;
        double r46352071 = r46352063 + r46352070;
        double r46352072 = r46352056 + r46352071;
        return r46352072;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r46352073, r46352074, r46352075, r46352076, r46352077, r46352078, r46352079, r46352080, r46352081, r46352082, r46352083, r46352084, r46352085, r46352086, r46352087, r46352088, r46352089, r46352090, r46352091, r46352092, r46352093, r46352094, r46352095, r46352096, r46352097, r46352098, r46352099, r46352100, r46352101, r46352102, r46352103, r46352104, r46352105;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r46352073, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r46352074);
        mpfr_init(r46352075);
        mpfr_init_set_str(r46352076, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r46352077);
        mpfr_init(r46352078);
        mpfr_init(r46352079);
        mpfr_init(r46352080);
        mpfr_init_set_str(r46352081, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r46352082);
        mpfr_init(r46352083);
        mpfr_init(r46352084);
        mpfr_init(r46352085);
        mpfr_init_set_str(r46352086, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r46352087);
        mpfr_init(r46352088);
        mpfr_init(r46352089);
        mpfr_init(r46352090);
        mpfr_init_set_str(r46352091, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r46352092);
        mpfr_init(r46352093);
        mpfr_init(r46352094);
        mpfr_init(r46352095);
        mpfr_init_set_str(r46352096, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r46352097);
        mpfr_init(r46352098);
        mpfr_init(r46352099);
        mpfr_init(r46352100);
        mpfr_init_set_str(r46352101, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r46352102);
        mpfr_init(r46352103);
        mpfr_init(r46352104);
        mpfr_init(r46352105);
}

double f_im(double x) {
        ;
        mpfr_set_d(r46352074, x, MPFR_RNDN);
        mpfr_mul(r46352075, r46352073, r46352074, MPFR_RNDN);
        ;
        mpfr_mul(r46352077, r46352074, r46352074, MPFR_RNDN);
        mpfr_mul(r46352078, r46352077, r46352074, MPFR_RNDN);
        mpfr_mul(r46352079, r46352076, r46352078, MPFR_RNDN);
        mpfr_add(r46352080, r46352075, r46352079, MPFR_RNDN);
        ;
        mpfr_mul(r46352082, r46352078, r46352074, MPFR_RNDN);
        mpfr_mul(r46352083, r46352082, r46352074, MPFR_RNDN);
        mpfr_mul(r46352084, r46352081, r46352083, MPFR_RNDN);
        mpfr_add(r46352085, r46352080, r46352084, MPFR_RNDN);
        ;
        mpfr_mul(r46352087, r46352083, r46352074, MPFR_RNDN);
        mpfr_mul(r46352088, r46352087, r46352074, MPFR_RNDN);
        mpfr_mul(r46352089, r46352086, r46352088, MPFR_RNDN);
        mpfr_add(r46352090, r46352085, r46352089, MPFR_RNDN);
        ;
        mpfr_mul(r46352092, r46352088, r46352074, MPFR_RNDN);
        mpfr_mul(r46352093, r46352092, r46352074, MPFR_RNDN);
        mpfr_mul(r46352094, r46352091, r46352093, MPFR_RNDN);
        mpfr_add(r46352095, r46352090, r46352094, MPFR_RNDN);
        ;
        mpfr_mul(r46352097, r46352093, r46352074, MPFR_RNDN);
        mpfr_mul(r46352098, r46352097, r46352074, MPFR_RNDN);
        mpfr_mul(r46352099, r46352096, r46352098, MPFR_RNDN);
        mpfr_add(r46352100, r46352095, r46352099, MPFR_RNDN);
        ;
        mpfr_mul(r46352102, r46352098, r46352074, MPFR_RNDN);
        mpfr_mul(r46352103, r46352102, r46352074, MPFR_RNDN);
        mpfr_mul(r46352104, r46352101, r46352103, MPFR_RNDN);
        mpfr_add(r46352105, r46352100, r46352104, MPFR_RNDN);
        return mpfr_get_d(r46352105, MPFR_RNDN);
}

static mpfr_t r46352106, r46352107, r46352108, r46352109, r46352110, r46352111, r46352112, r46352113, r46352114, r46352115, r46352116, r46352117, r46352118, r46352119, r46352120, r46352121, r46352122, r46352123, r46352124, r46352125, r46352126, r46352127, r46352128, r46352129, r46352130, r46352131, r46352132, r46352133, r46352134, r46352135, r46352136, r46352137, r46352138, r46352139, r46352140, r46352141, r46352142, r46352143, r46352144;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r46352106);
        mpfr_init(r46352107);
        mpfr_init_set_str(r46352108, "3", 10, MPFR_RNDN);
        mpfr_init(r46352109);
        mpfr_init(r46352110);
        mpfr_init(r46352111);
        mpfr_init_set_str(r46352112, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r46352113);
        mpfr_init_set_str(r46352114, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r46352115);
        mpfr_init(r46352116);
        mpfr_init_set_str(r46352117, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r46352118);
        mpfr_init(r46352119);
        mpfr_init_set_str(r46352120, "8", 10, MPFR_RNDN);
        mpfr_init(r46352121);
        mpfr_init(r46352122);
        mpfr_init(r46352123);
        mpfr_init(r46352124);
        mpfr_init(r46352125);
        mpfr_init(r46352126);
        mpfr_init(r46352127);
        mpfr_init(r46352128);
        mpfr_init_set_str(r46352129, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r46352130);
        mpfr_init_set_str(r46352131, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r46352132);
        mpfr_init(r46352133);
        mpfr_init(r46352134);
        mpfr_init(r46352135);
        mpfr_init_set_str(r46352136, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r46352137);
        mpfr_init_set_str(r46352138, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r46352139);
        mpfr_init(r46352140);
        mpfr_init(r46352141);
        mpfr_init(r46352142);
        mpfr_init(r46352143);
        mpfr_init(r46352144);
}

double f_fm(double x) {
        mpfr_set_d(r46352106, x, MPFR_RNDN);
        mpfr_mul(r46352107, r46352106, r46352106, MPFR_RNDN);
        ;
        mpfr_pow(r46352109, r46352106, r46352108, MPFR_RNDN);
        mpfr_mul(r46352110, r46352107, r46352109, MPFR_RNDN);
        mpfr_mul(r46352111, r46352110, r46352110, MPFR_RNDN);
        ;
        mpfr_mul(r46352113, r46352112, r46352107, MPFR_RNDN);
        ;
        mpfr_add(r46352115, r46352113, r46352114, MPFR_RNDN);
        mpfr_mul(r46352116, r46352111, r46352115, MPFR_RNDN);
        ;
        mpfr_mul(r46352118, r46352117, r46352106, MPFR_RNDN);
        mpfr_mul(r46352119, r46352118, r46352109, MPFR_RNDN);
        ;
        mpfr_pow(r46352121, r46352106, r46352120, MPFR_RNDN);
        mpfr_cbrt(r46352122, r46352121, MPFR_RNDN);
        mpfr_mul(r46352123, r46352119, r46352122, MPFR_RNDN);
        mpfr_mul(r46352124, r46352107, r46352107, MPFR_RNDN);
        mpfr_cbrt(r46352125, r46352124, MPFR_RNDN);
        mpfr_mul(r46352126, r46352123, r46352125, MPFR_RNDN);
        mpfr_add(r46352127, r46352116, r46352126, MPFR_RNDN);
        mpfr_mul(r46352128, r46352106, r46352127, MPFR_RNDN);
        ;
        mpfr_mul(r46352130, r46352129, r46352106, MPFR_RNDN);
        ;
        mpfr_mul(r46352132, r46352131, r46352106, MPFR_RNDN);
        mpfr_mul(r46352133, r46352132, r46352107, MPFR_RNDN);
        mpfr_mul(r46352134, r46352133, r46352124, MPFR_RNDN);
        mpfr_add(r46352135, r46352130, r46352134, MPFR_RNDN);
        ;
        mpfr_mul(r46352137, r46352136, r46352106, MPFR_RNDN);
        ;
        mpfr_mul(r46352139, r46352138, r46352106, MPFR_RNDN);
        mpfr_mul(r46352140, r46352139, r46352107, MPFR_RNDN);
        mpfr_add(r46352141, r46352137, r46352140, MPFR_RNDN);
        mpfr_mul(r46352142, r46352107, r46352141, MPFR_RNDN);
        mpfr_add(r46352143, r46352135, r46352142, MPFR_RNDN);
        mpfr_add(r46352144, r46352128, r46352143, MPFR_RNDN);
        return mpfr_get_d(r46352144, MPFR_RNDN);
}

static mpfr_t r46352145, r46352146, r46352147, r46352148, r46352149, r46352150, r46352151, r46352152, r46352153, r46352154, r46352155, r46352156, r46352157, r46352158, r46352159, r46352160, r46352161, r46352162, r46352163, r46352164, r46352165, r46352166, r46352167, r46352168, r46352169, r46352170, r46352171, r46352172, r46352173, r46352174, r46352175, r46352176, r46352177, r46352178, r46352179, r46352180, r46352181, r46352182, r46352183;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r46352145);
        mpfr_init(r46352146);
        mpfr_init_set_str(r46352147, "3", 10, MPFR_RNDN);
        mpfr_init(r46352148);
        mpfr_init(r46352149);
        mpfr_init(r46352150);
        mpfr_init_set_str(r46352151, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r46352152);
        mpfr_init_set_str(r46352153, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r46352154);
        mpfr_init(r46352155);
        mpfr_init_set_str(r46352156, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r46352157);
        mpfr_init(r46352158);
        mpfr_init_set_str(r46352159, "8", 10, MPFR_RNDN);
        mpfr_init(r46352160);
        mpfr_init(r46352161);
        mpfr_init(r46352162);
        mpfr_init(r46352163);
        mpfr_init(r46352164);
        mpfr_init(r46352165);
        mpfr_init(r46352166);
        mpfr_init(r46352167);
        mpfr_init_set_str(r46352168, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r46352169);
        mpfr_init_set_str(r46352170, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r46352171);
        mpfr_init(r46352172);
        mpfr_init(r46352173);
        mpfr_init(r46352174);
        mpfr_init_set_str(r46352175, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r46352176);
        mpfr_init_set_str(r46352177, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r46352178);
        mpfr_init(r46352179);
        mpfr_init(r46352180);
        mpfr_init(r46352181);
        mpfr_init(r46352182);
        mpfr_init(r46352183);
}

double f_dm(double x) {
        mpfr_set_d(r46352145, x, MPFR_RNDN);
        mpfr_mul(r46352146, r46352145, r46352145, MPFR_RNDN);
        ;
        mpfr_pow(r46352148, r46352145, r46352147, MPFR_RNDN);
        mpfr_mul(r46352149, r46352146, r46352148, MPFR_RNDN);
        mpfr_mul(r46352150, r46352149, r46352149, MPFR_RNDN);
        ;
        mpfr_mul(r46352152, r46352151, r46352146, MPFR_RNDN);
        ;
        mpfr_add(r46352154, r46352152, r46352153, MPFR_RNDN);
        mpfr_mul(r46352155, r46352150, r46352154, MPFR_RNDN);
        ;
        mpfr_mul(r46352157, r46352156, r46352145, MPFR_RNDN);
        mpfr_mul(r46352158, r46352157, r46352148, MPFR_RNDN);
        ;
        mpfr_pow(r46352160, r46352145, r46352159, MPFR_RNDN);
        mpfr_cbrt(r46352161, r46352160, MPFR_RNDN);
        mpfr_mul(r46352162, r46352158, r46352161, MPFR_RNDN);
        mpfr_mul(r46352163, r46352146, r46352146, MPFR_RNDN);
        mpfr_cbrt(r46352164, r46352163, MPFR_RNDN);
        mpfr_mul(r46352165, r46352162, r46352164, MPFR_RNDN);
        mpfr_add(r46352166, r46352155, r46352165, MPFR_RNDN);
        mpfr_mul(r46352167, r46352145, r46352166, MPFR_RNDN);
        ;
        mpfr_mul(r46352169, r46352168, r46352145, MPFR_RNDN);
        ;
        mpfr_mul(r46352171, r46352170, r46352145, MPFR_RNDN);
        mpfr_mul(r46352172, r46352171, r46352146, MPFR_RNDN);
        mpfr_mul(r46352173, r46352172, r46352163, MPFR_RNDN);
        mpfr_add(r46352174, r46352169, r46352173, MPFR_RNDN);
        ;
        mpfr_mul(r46352176, r46352175, r46352145, MPFR_RNDN);
        ;
        mpfr_mul(r46352178, r46352177, r46352145, MPFR_RNDN);
        mpfr_mul(r46352179, r46352178, r46352146, MPFR_RNDN);
        mpfr_add(r46352180, r46352176, r46352179, MPFR_RNDN);
        mpfr_mul(r46352181, r46352146, r46352180, MPFR_RNDN);
        mpfr_add(r46352182, r46352174, r46352181, MPFR_RNDN);
        mpfr_add(r46352183, r46352167, r46352182, MPFR_RNDN);
        return mpfr_get_d(r46352183, MPFR_RNDN);
}

