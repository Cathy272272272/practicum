#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r9830962 = 17297280.0;
        float r9830963 = x;
        float r9830964 = r9830962 * r9830963;
        float r9830965 = -69189120.0;
        float r9830966 = r9830963 * r9830963;
        float r9830967 = r9830966 * r9830963;
        float r9830968 = r9830965 * r9830967;
        float r9830969 = r9830964 + r9830968;
        float r9830970 = 69189120.0;
        float r9830971 = r9830967 * r9830963;
        float r9830972 = r9830971 * r9830963;
        float r9830973 = r9830970 * r9830972;
        float r9830974 = r9830969 + r9830973;
        float r9830975 = -26357760.0;
        float r9830976 = r9830972 * r9830963;
        float r9830977 = r9830976 * r9830963;
        float r9830978 = r9830975 * r9830977;
        float r9830979 = r9830974 + r9830978;
        float r9830980 = 4392960.0;
        float r9830981 = r9830977 * r9830963;
        float r9830982 = r9830981 * r9830963;
        float r9830983 = r9830980 * r9830982;
        float r9830984 = r9830979 + r9830983;
        float r9830985 = -319488.0;
        float r9830986 = r9830982 * r9830963;
        float r9830987 = r9830986 * r9830963;
        float r9830988 = r9830985 * r9830987;
        float r9830989 = r9830984 + r9830988;
        float r9830990 = 8192.0;
        float r9830991 = r9830987 * r9830963;
        float r9830992 = r9830991 * r9830963;
        float r9830993 = r9830990 * r9830992;
        float r9830994 = r9830989 + r9830993;
        return r9830994;
}

double f_id(double x) {
        double r9830995 = 17297280.0;
        double r9830996 = x;
        double r9830997 = r9830995 * r9830996;
        double r9830998 = -69189120.0;
        double r9830999 = r9830996 * r9830996;
        double r9831000 = r9830999 * r9830996;
        double r9831001 = r9830998 * r9831000;
        double r9831002 = r9830997 + r9831001;
        double r9831003 = 69189120.0;
        double r9831004 = r9831000 * r9830996;
        double r9831005 = r9831004 * r9830996;
        double r9831006 = r9831003 * r9831005;
        double r9831007 = r9831002 + r9831006;
        double r9831008 = -26357760.0;
        double r9831009 = r9831005 * r9830996;
        double r9831010 = r9831009 * r9830996;
        double r9831011 = r9831008 * r9831010;
        double r9831012 = r9831007 + r9831011;
        double r9831013 = 4392960.0;
        double r9831014 = r9831010 * r9830996;
        double r9831015 = r9831014 * r9830996;
        double r9831016 = r9831013 * r9831015;
        double r9831017 = r9831012 + r9831016;
        double r9831018 = -319488.0;
        double r9831019 = r9831015 * r9830996;
        double r9831020 = r9831019 * r9830996;
        double r9831021 = r9831018 * r9831020;
        double r9831022 = r9831017 + r9831021;
        double r9831023 = 8192.0;
        double r9831024 = r9831020 * r9830996;
        double r9831025 = r9831024 * r9830996;
        double r9831026 = r9831023 * r9831025;
        double r9831027 = r9831022 + r9831026;
        return r9831027;
}


double f_of(float x) {
        float r9831028 = x;
        float r9831029 = r9831028 * r9831028;
        float r9831030 = 3;
        float r9831031 = pow(r9831028, r9831030);
        float r9831032 = r9831031 * r9831031;
        float r9831033 = r9831031 * r9831032;
        float r9831034 = r9831029 * r9831033;
        float r9831035 = 8192.0;
        float r9831036 = r9831029 * r9831035;
        float r9831037 = log(r9831036);
        float r9831038 = exp(r9831037);
        float r9831039 = -319488.0;
        float r9831040 = r9831038 + r9831039;
        float r9831041 = r9831034 * r9831040;
        float r9831042 = 69189120.0;
        float r9831043 = r9831028 * r9831042;
        float r9831044 = r9831043 * r9831029;
        float r9831045 = r9831029 * r9831044;
        float r9831046 = 17297280.0;
        float r9831047 = r9831046 * r9831028;
        float r9831048 = -69189120.0;
        float r9831049 = r9831048 * r9831028;
        float r9831050 = r9831029 * r9831049;
        float r9831051 = r9831047 + r9831050;
        float r9831052 = r9831045 + r9831051;
        float r9831053 = r9831032 * r9831028;
        float r9831054 = -26357760.0;
        float r9831055 = 4392960.0;
        float r9831056 = r9831055 * r9831028;
        float r9831057 = r9831028 * r9831056;
        float r9831058 = r9831054 + r9831057;
        float r9831059 = r9831053 * r9831058;
        float r9831060 = r9831052 + r9831059;
        float r9831061 = r9831041 + r9831060;
        return r9831061;
}

double f_od(double x) {
        double r9831062 = x;
        double r9831063 = r9831062 * r9831062;
        double r9831064 = 3;
        double r9831065 = pow(r9831062, r9831064);
        double r9831066 = r9831065 * r9831065;
        double r9831067 = r9831065 * r9831066;
        double r9831068 = r9831063 * r9831067;
        double r9831069 = 8192.0;
        double r9831070 = r9831063 * r9831069;
        double r9831071 = log(r9831070);
        double r9831072 = exp(r9831071);
        double r9831073 = -319488.0;
        double r9831074 = r9831072 + r9831073;
        double r9831075 = r9831068 * r9831074;
        double r9831076 = 69189120.0;
        double r9831077 = r9831062 * r9831076;
        double r9831078 = r9831077 * r9831063;
        double r9831079 = r9831063 * r9831078;
        double r9831080 = 17297280.0;
        double r9831081 = r9831080 * r9831062;
        double r9831082 = -69189120.0;
        double r9831083 = r9831082 * r9831062;
        double r9831084 = r9831063 * r9831083;
        double r9831085 = r9831081 + r9831084;
        double r9831086 = r9831079 + r9831085;
        double r9831087 = r9831066 * r9831062;
        double r9831088 = -26357760.0;
        double r9831089 = 4392960.0;
        double r9831090 = r9831089 * r9831062;
        double r9831091 = r9831062 * r9831090;
        double r9831092 = r9831088 + r9831091;
        double r9831093 = r9831087 * r9831092;
        double r9831094 = r9831086 + r9831093;
        double r9831095 = r9831075 + r9831094;
        return r9831095;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9831096, r9831097, r9831098, r9831099, r9831100, r9831101, r9831102, r9831103, r9831104, r9831105, r9831106, r9831107, r9831108, r9831109, r9831110, r9831111, r9831112, r9831113, r9831114, r9831115, r9831116, r9831117, r9831118, r9831119, r9831120, r9831121, r9831122, r9831123, r9831124, r9831125, r9831126, r9831127, r9831128;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9831096, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9831097);
        mpfr_init(r9831098);
        mpfr_init_set_str(r9831099, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9831100);
        mpfr_init(r9831101);
        mpfr_init(r9831102);
        mpfr_init(r9831103);
        mpfr_init_set_str(r9831104, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9831105);
        mpfr_init(r9831106);
        mpfr_init(r9831107);
        mpfr_init(r9831108);
        mpfr_init_set_str(r9831109, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r9831110);
        mpfr_init(r9831111);
        mpfr_init(r9831112);
        mpfr_init(r9831113);
        mpfr_init_set_str(r9831114, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9831115);
        mpfr_init(r9831116);
        mpfr_init(r9831117);
        mpfr_init(r9831118);
        mpfr_init_set_str(r9831119, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9831120);
        mpfr_init(r9831121);
        mpfr_init(r9831122);
        mpfr_init(r9831123);
        mpfr_init_set_str(r9831124, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9831125);
        mpfr_init(r9831126);
        mpfr_init(r9831127);
        mpfr_init(r9831128);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9831097, x, MPFR_RNDN);
        mpfr_mul(r9831098, r9831096, r9831097, MPFR_RNDN);
        ;
        mpfr_mul(r9831100, r9831097, r9831097, MPFR_RNDN);
        mpfr_mul(r9831101, r9831100, r9831097, MPFR_RNDN);
        mpfr_mul(r9831102, r9831099, r9831101, MPFR_RNDN);
        mpfr_add(r9831103, r9831098, r9831102, MPFR_RNDN);
        ;
        mpfr_mul(r9831105, r9831101, r9831097, MPFR_RNDN);
        mpfr_mul(r9831106, r9831105, r9831097, MPFR_RNDN);
        mpfr_mul(r9831107, r9831104, r9831106, MPFR_RNDN);
        mpfr_add(r9831108, r9831103, r9831107, MPFR_RNDN);
        ;
        mpfr_mul(r9831110, r9831106, r9831097, MPFR_RNDN);
        mpfr_mul(r9831111, r9831110, r9831097, MPFR_RNDN);
        mpfr_mul(r9831112, r9831109, r9831111, MPFR_RNDN);
        mpfr_add(r9831113, r9831108, r9831112, MPFR_RNDN);
        ;
        mpfr_mul(r9831115, r9831111, r9831097, MPFR_RNDN);
        mpfr_mul(r9831116, r9831115, r9831097, MPFR_RNDN);
        mpfr_mul(r9831117, r9831114, r9831116, MPFR_RNDN);
        mpfr_add(r9831118, r9831113, r9831117, MPFR_RNDN);
        ;
        mpfr_mul(r9831120, r9831116, r9831097, MPFR_RNDN);
        mpfr_mul(r9831121, r9831120, r9831097, MPFR_RNDN);
        mpfr_mul(r9831122, r9831119, r9831121, MPFR_RNDN);
        mpfr_add(r9831123, r9831118, r9831122, MPFR_RNDN);
        ;
        mpfr_mul(r9831125, r9831121, r9831097, MPFR_RNDN);
        mpfr_mul(r9831126, r9831125, r9831097, MPFR_RNDN);
        mpfr_mul(r9831127, r9831124, r9831126, MPFR_RNDN);
        mpfr_add(r9831128, r9831123, r9831127, MPFR_RNDN);
        return mpfr_get_d(r9831128, MPFR_RNDN);
}

static mpfr_t r9831129, r9831130, r9831131, r9831132, r9831133, r9831134, r9831135, r9831136, r9831137, r9831138, r9831139, r9831140, r9831141, r9831142, r9831143, r9831144, r9831145, r9831146, r9831147, r9831148, r9831149, r9831150, r9831151, r9831152, r9831153, r9831154, r9831155, r9831156, r9831157, r9831158, r9831159, r9831160, r9831161, r9831162;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9831129);
        mpfr_init(r9831130);
        mpfr_init_set_str(r9831131, "3", 10, MPFR_RNDN);
        mpfr_init(r9831132);
        mpfr_init(r9831133);
        mpfr_init(r9831134);
        mpfr_init(r9831135);
        mpfr_init_set_str(r9831136, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9831137);
        mpfr_init(r9831138);
        mpfr_init(r9831139);
        mpfr_init_set_str(r9831140, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9831141);
        mpfr_init(r9831142);
        mpfr_init_set_str(r9831143, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9831144);
        mpfr_init(r9831145);
        mpfr_init(r9831146);
        mpfr_init_set_str(r9831147, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9831148);
        mpfr_init_set_str(r9831149, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9831150);
        mpfr_init(r9831151);
        mpfr_init(r9831152);
        mpfr_init(r9831153);
        mpfr_init(r9831154);
        mpfr_init_set_str(r9831155, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831156, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9831157);
        mpfr_init(r9831158);
        mpfr_init(r9831159);
        mpfr_init(r9831160);
        mpfr_init(r9831161);
        mpfr_init(r9831162);
}

double f_fm(double x) {
        mpfr_set_d(r9831129, x, MPFR_RNDN);
        mpfr_mul(r9831130, r9831129, r9831129, MPFR_RNDN);
        ;
        mpfr_pow(r9831132, r9831129, r9831131, MPFR_RNDN);
        mpfr_mul(r9831133, r9831132, r9831132, MPFR_RNDN);
        mpfr_mul(r9831134, r9831132, r9831133, MPFR_RNDN);
        mpfr_mul(r9831135, r9831130, r9831134, MPFR_RNDN);
        ;
        mpfr_mul(r9831137, r9831130, r9831136, MPFR_RNDN);
        mpfr_log(r9831138, r9831137, MPFR_RNDN);
        mpfr_exp(r9831139, r9831138, MPFR_RNDN);
        ;
        mpfr_add(r9831141, r9831139, r9831140, MPFR_RNDN);
        mpfr_mul(r9831142, r9831135, r9831141, MPFR_RNDN);
        ;
        mpfr_mul(r9831144, r9831129, r9831143, MPFR_RNDN);
        mpfr_mul(r9831145, r9831144, r9831130, MPFR_RNDN);
        mpfr_mul(r9831146, r9831130, r9831145, MPFR_RNDN);
        ;
        mpfr_mul(r9831148, r9831147, r9831129, MPFR_RNDN);
        ;
        mpfr_mul(r9831150, r9831149, r9831129, MPFR_RNDN);
        mpfr_mul(r9831151, r9831130, r9831150, MPFR_RNDN);
        mpfr_add(r9831152, r9831148, r9831151, MPFR_RNDN);
        mpfr_add(r9831153, r9831146, r9831152, MPFR_RNDN);
        mpfr_mul(r9831154, r9831133, r9831129, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9831157, r9831156, r9831129, MPFR_RNDN);
        mpfr_mul(r9831158, r9831129, r9831157, MPFR_RNDN);
        mpfr_add(r9831159, r9831155, r9831158, MPFR_RNDN);
        mpfr_mul(r9831160, r9831154, r9831159, MPFR_RNDN);
        mpfr_add(r9831161, r9831153, r9831160, MPFR_RNDN);
        mpfr_add(r9831162, r9831142, r9831161, MPFR_RNDN);
        return mpfr_get_d(r9831162, MPFR_RNDN);
}

static mpfr_t r9831163, r9831164, r9831165, r9831166, r9831167, r9831168, r9831169, r9831170, r9831171, r9831172, r9831173, r9831174, r9831175, r9831176, r9831177, r9831178, r9831179, r9831180, r9831181, r9831182, r9831183, r9831184, r9831185, r9831186, r9831187, r9831188, r9831189, r9831190, r9831191, r9831192, r9831193, r9831194, r9831195, r9831196;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9831163);
        mpfr_init(r9831164);
        mpfr_init_set_str(r9831165, "3", 10, MPFR_RNDN);
        mpfr_init(r9831166);
        mpfr_init(r9831167);
        mpfr_init(r9831168);
        mpfr_init(r9831169);
        mpfr_init_set_str(r9831170, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9831171);
        mpfr_init(r9831172);
        mpfr_init(r9831173);
        mpfr_init_set_str(r9831174, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9831175);
        mpfr_init(r9831176);
        mpfr_init_set_str(r9831177, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9831178);
        mpfr_init(r9831179);
        mpfr_init(r9831180);
        mpfr_init_set_str(r9831181, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9831182);
        mpfr_init_set_str(r9831183, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9831184);
        mpfr_init(r9831185);
        mpfr_init(r9831186);
        mpfr_init(r9831187);
        mpfr_init(r9831188);
        mpfr_init_set_str(r9831189, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9831190, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9831191);
        mpfr_init(r9831192);
        mpfr_init(r9831193);
        mpfr_init(r9831194);
        mpfr_init(r9831195);
        mpfr_init(r9831196);
}

double f_dm(double x) {
        mpfr_set_d(r9831163, x, MPFR_RNDN);
        mpfr_mul(r9831164, r9831163, r9831163, MPFR_RNDN);
        ;
        mpfr_pow(r9831166, r9831163, r9831165, MPFR_RNDN);
        mpfr_mul(r9831167, r9831166, r9831166, MPFR_RNDN);
        mpfr_mul(r9831168, r9831166, r9831167, MPFR_RNDN);
        mpfr_mul(r9831169, r9831164, r9831168, MPFR_RNDN);
        ;
        mpfr_mul(r9831171, r9831164, r9831170, MPFR_RNDN);
        mpfr_log(r9831172, r9831171, MPFR_RNDN);
        mpfr_exp(r9831173, r9831172, MPFR_RNDN);
        ;
        mpfr_add(r9831175, r9831173, r9831174, MPFR_RNDN);
        mpfr_mul(r9831176, r9831169, r9831175, MPFR_RNDN);
        ;
        mpfr_mul(r9831178, r9831163, r9831177, MPFR_RNDN);
        mpfr_mul(r9831179, r9831178, r9831164, MPFR_RNDN);
        mpfr_mul(r9831180, r9831164, r9831179, MPFR_RNDN);
        ;
        mpfr_mul(r9831182, r9831181, r9831163, MPFR_RNDN);
        ;
        mpfr_mul(r9831184, r9831183, r9831163, MPFR_RNDN);
        mpfr_mul(r9831185, r9831164, r9831184, MPFR_RNDN);
        mpfr_add(r9831186, r9831182, r9831185, MPFR_RNDN);
        mpfr_add(r9831187, r9831180, r9831186, MPFR_RNDN);
        mpfr_mul(r9831188, r9831167, r9831163, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9831191, r9831190, r9831163, MPFR_RNDN);
        mpfr_mul(r9831192, r9831163, r9831191, MPFR_RNDN);
        mpfr_add(r9831193, r9831189, r9831192, MPFR_RNDN);
        mpfr_mul(r9831194, r9831188, r9831193, MPFR_RNDN);
        mpfr_add(r9831195, r9831187, r9831194, MPFR_RNDN);
        mpfr_add(r9831196, r9831176, r9831195, MPFR_RNDN);
        return mpfr_get_d(r9831196, MPFR_RNDN);
}

