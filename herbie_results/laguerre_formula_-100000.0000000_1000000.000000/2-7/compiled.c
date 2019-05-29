#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r10215980 = 1.0;
        float r10215981 = -7.0;
        float r10215982 = x;
        float r10215983 = r10215981 * r10215982;
        float r10215984 = r10215980 + r10215983;
        float r10215985 = 10.5;
        float r10215986 = r10215982 * r10215982;
        float r10215987 = r10215985 * r10215986;
        float r10215988 = r10215984 + r10215987;
        float r10215989 = -5.833333;
        float r10215990 = r10215986 * r10215982;
        float r10215991 = r10215989 * r10215990;
        float r10215992 = r10215988 + r10215991;
        float r10215993 = 1.458333;
        float r10215994 = r10215990 * r10215982;
        float r10215995 = r10215993 * r10215994;
        float r10215996 = r10215992 + r10215995;
        float r10215997 = -0.175;
        float r10215998 = r10215994 * r10215982;
        float r10215999 = r10215997 * r10215998;
        float r10216000 = r10215996 + r10215999;
        float r10216001 = 0.009722;
        float r10216002 = r10215998 * r10215982;
        float r10216003 = r10216001 * r10216002;
        float r10216004 = r10216000 + r10216003;
        float r10216005 = -0.000198;
        float r10216006 = r10216002 * r10215982;
        float r10216007 = r10216005 * r10216006;
        float r10216008 = r10216004 + r10216007;
        return r10216008;
}

double f_id(double x) {
        double r10216009 = 1.0;
        double r10216010 = -7.0;
        double r10216011 = x;
        double r10216012 = r10216010 * r10216011;
        double r10216013 = r10216009 + r10216012;
        double r10216014 = 10.5;
        double r10216015 = r10216011 * r10216011;
        double r10216016 = r10216014 * r10216015;
        double r10216017 = r10216013 + r10216016;
        double r10216018 = -5.833333;
        double r10216019 = r10216015 * r10216011;
        double r10216020 = r10216018 * r10216019;
        double r10216021 = r10216017 + r10216020;
        double r10216022 = 1.458333;
        double r10216023 = r10216019 * r10216011;
        double r10216024 = r10216022 * r10216023;
        double r10216025 = r10216021 + r10216024;
        double r10216026 = -0.175;
        double r10216027 = r10216023 * r10216011;
        double r10216028 = r10216026 * r10216027;
        double r10216029 = r10216025 + r10216028;
        double r10216030 = 0.009722;
        double r10216031 = r10216027 * r10216011;
        double r10216032 = r10216030 * r10216031;
        double r10216033 = r10216029 + r10216032;
        double r10216034 = -0.000198;
        double r10216035 = r10216031 * r10216011;
        double r10216036 = r10216034 * r10216035;
        double r10216037 = r10216033 + r10216036;
        return r10216037;
}


double f_of(float x) {
        float r10216038 = x;
        float r10216039 = 3;
        float r10216040 = pow(r10216038, r10216039);
        float r10216041 = r10216040 * r10216040;
        float r10216042 = 0.009722;
        float r10216043 = -0.000198;
        float r10216044 = r10216038 * r10216043;
        float r10216045 = r10216042 + r10216044;
        float r10216046 = r10216041 * r10216045;
        float r10216047 = -7.0;
        float r10216048 = r10216047 * r10216038;
        float r10216049 = 1.0;
        float r10216050 = r10216048 + r10216049;
        float r10216051 = r10216046 + r10216050;
        float r10216052 = 1.458333;
        float r10216053 = -0.175;
        float r10216054 = r10216053 * r10216038;
        float r10216055 = r10216052 + r10216054;
        float r10216056 = 2;
        float r10216057 = r10216056 + r10216056;
        float r10216058 = pow(r10216038, r10216057);
        float r10216059 = r10216055 * r10216058;
        float r10216060 = r10216038 * r10216038;
        float r10216061 = 10.5;
        float r10216062 = 5.833333;
        float r10216063 = r10216062 * r10216038;
        float r10216064 = r10216061 - r10216063;
        float r10216065 = r10216060 * r10216064;
        float r10216066 = r10216059 + r10216065;
        float r10216067 = r10216051 + r10216066;
        return r10216067;
}

double f_od(double x) {
        double r10216068 = x;
        double r10216069 = 3;
        double r10216070 = pow(r10216068, r10216069);
        double r10216071 = r10216070 * r10216070;
        double r10216072 = 0.009722;
        double r10216073 = -0.000198;
        double r10216074 = r10216068 * r10216073;
        double r10216075 = r10216072 + r10216074;
        double r10216076 = r10216071 * r10216075;
        double r10216077 = -7.0;
        double r10216078 = r10216077 * r10216068;
        double r10216079 = 1.0;
        double r10216080 = r10216078 + r10216079;
        double r10216081 = r10216076 + r10216080;
        double r10216082 = 1.458333;
        double r10216083 = -0.175;
        double r10216084 = r10216083 * r10216068;
        double r10216085 = r10216082 + r10216084;
        double r10216086 = 2;
        double r10216087 = r10216086 + r10216086;
        double r10216088 = pow(r10216068, r10216087);
        double r10216089 = r10216085 * r10216088;
        double r10216090 = r10216068 * r10216068;
        double r10216091 = 10.5;
        double r10216092 = 5.833333;
        double r10216093 = r10216092 * r10216068;
        double r10216094 = r10216091 - r10216093;
        double r10216095 = r10216090 * r10216094;
        double r10216096 = r10216089 + r10216095;
        double r10216097 = r10216081 + r10216096;
        return r10216097;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10216098, r10216099, r10216100, r10216101, r10216102, r10216103, r10216104, r10216105, r10216106, r10216107, r10216108, r10216109, r10216110, r10216111, r10216112, r10216113, r10216114, r10216115, r10216116, r10216117, r10216118, r10216119, r10216120, r10216121, r10216122, r10216123, r10216124, r10216125, r10216126;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10216098, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216099, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10216100);
        mpfr_init(r10216101);
        mpfr_init(r10216102);
        mpfr_init_set_str(r10216103, "10.5", 10, MPFR_RNDN);
        mpfr_init(r10216104);
        mpfr_init(r10216105);
        mpfr_init(r10216106);
        mpfr_init_set_str(r10216107, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r10216108);
        mpfr_init(r10216109);
        mpfr_init(r10216110);
        mpfr_init_set_str(r10216111, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r10216112);
        mpfr_init(r10216113);
        mpfr_init(r10216114);
        mpfr_init_set_str(r10216115, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10216116);
        mpfr_init(r10216117);
        mpfr_init(r10216118);
        mpfr_init_set_str(r10216119, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r10216120);
        mpfr_init(r10216121);
        mpfr_init(r10216122);
        mpfr_init_set_str(r10216123, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10216124);
        mpfr_init(r10216125);
        mpfr_init(r10216126);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10216100, x, MPFR_RNDN);
        mpfr_mul(r10216101, r10216099, r10216100, MPFR_RNDN);
        mpfr_add(r10216102, r10216098, r10216101, MPFR_RNDN);
        ;
        mpfr_mul(r10216104, r10216100, r10216100, MPFR_RNDN);
        mpfr_mul(r10216105, r10216103, r10216104, MPFR_RNDN);
        mpfr_add(r10216106, r10216102, r10216105, MPFR_RNDN);
        ;
        mpfr_mul(r10216108, r10216104, r10216100, MPFR_RNDN);
        mpfr_mul(r10216109, r10216107, r10216108, MPFR_RNDN);
        mpfr_add(r10216110, r10216106, r10216109, MPFR_RNDN);
        ;
        mpfr_mul(r10216112, r10216108, r10216100, MPFR_RNDN);
        mpfr_mul(r10216113, r10216111, r10216112, MPFR_RNDN);
        mpfr_add(r10216114, r10216110, r10216113, MPFR_RNDN);
        ;
        mpfr_mul(r10216116, r10216112, r10216100, MPFR_RNDN);
        mpfr_mul(r10216117, r10216115, r10216116, MPFR_RNDN);
        mpfr_add(r10216118, r10216114, r10216117, MPFR_RNDN);
        ;
        mpfr_mul(r10216120, r10216116, r10216100, MPFR_RNDN);
        mpfr_mul(r10216121, r10216119, r10216120, MPFR_RNDN);
        mpfr_add(r10216122, r10216118, r10216121, MPFR_RNDN);
        ;
        mpfr_mul(r10216124, r10216120, r10216100, MPFR_RNDN);
        mpfr_mul(r10216125, r10216123, r10216124, MPFR_RNDN);
        mpfr_add(r10216126, r10216122, r10216125, MPFR_RNDN);
        return mpfr_get_d(r10216126, MPFR_RNDN);
}

static mpfr_t r10216127, r10216128, r10216129, r10216130, r10216131, r10216132, r10216133, r10216134, r10216135, r10216136, r10216137, r10216138, r10216139, r10216140, r10216141, r10216142, r10216143, r10216144, r10216145, r10216146, r10216147, r10216148, r10216149, r10216150, r10216151, r10216152, r10216153, r10216154, r10216155, r10216156;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10216127);
        mpfr_init_set_str(r10216128, "3", 10, MPFR_RNDN);
        mpfr_init(r10216129);
        mpfr_init(r10216130);
        mpfr_init_set_str(r10216131, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216132, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10216133);
        mpfr_init(r10216134);
        mpfr_init(r10216135);
        mpfr_init_set_str(r10216136, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10216137);
        mpfr_init_set_str(r10216138, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216139);
        mpfr_init(r10216140);
        mpfr_init_set_str(r10216141, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216142, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10216143);
        mpfr_init(r10216144);
        mpfr_init_set_str(r10216145, "2", 10, MPFR_RNDN);
        mpfr_init(r10216146);
        mpfr_init(r10216147);
        mpfr_init(r10216148);
        mpfr_init(r10216149);
        mpfr_init_set_str(r10216150, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216151, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r10216152);
        mpfr_init(r10216153);
        mpfr_init(r10216154);
        mpfr_init(r10216155);
        mpfr_init(r10216156);
}

double f_fm(double x) {
        mpfr_set_d(r10216127, x, MPFR_RNDN);
        ;
        mpfr_pow(r10216129, r10216127, r10216128, MPFR_RNDN);
        mpfr_mul(r10216130, r10216129, r10216129, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216133, r10216127, r10216132, MPFR_RNDN);
        mpfr_add(r10216134, r10216131, r10216133, MPFR_RNDN);
        mpfr_mul(r10216135, r10216130, r10216134, MPFR_RNDN);
        ;
        mpfr_mul(r10216137, r10216136, r10216127, MPFR_RNDN);
        ;
        mpfr_add(r10216139, r10216137, r10216138, MPFR_RNDN);
        mpfr_add(r10216140, r10216135, r10216139, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216143, r10216142, r10216127, MPFR_RNDN);
        mpfr_add(r10216144, r10216141, r10216143, MPFR_RNDN);
        ;
        mpfr_add(r10216146, r10216145, r10216145, MPFR_RNDN);
        mpfr_pow(r10216147, r10216127, r10216146, MPFR_RNDN);
        mpfr_mul(r10216148, r10216144, r10216147, MPFR_RNDN);
        mpfr_mul(r10216149, r10216127, r10216127, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216152, r10216151, r10216127, MPFR_RNDN);
        mpfr_sub(r10216153, r10216150, r10216152, MPFR_RNDN);
        mpfr_mul(r10216154, r10216149, r10216153, MPFR_RNDN);
        mpfr_add(r10216155, r10216148, r10216154, MPFR_RNDN);
        mpfr_add(r10216156, r10216140, r10216155, MPFR_RNDN);
        return mpfr_get_d(r10216156, MPFR_RNDN);
}

static mpfr_t r10216157, r10216158, r10216159, r10216160, r10216161, r10216162, r10216163, r10216164, r10216165, r10216166, r10216167, r10216168, r10216169, r10216170, r10216171, r10216172, r10216173, r10216174, r10216175, r10216176, r10216177, r10216178, r10216179, r10216180, r10216181, r10216182, r10216183, r10216184, r10216185, r10216186;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10216157);
        mpfr_init_set_str(r10216158, "3", 10, MPFR_RNDN);
        mpfr_init(r10216159);
        mpfr_init(r10216160);
        mpfr_init_set_str(r10216161, "0.009722", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216162, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r10216163);
        mpfr_init(r10216164);
        mpfr_init(r10216165);
        mpfr_init_set_str(r10216166, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r10216167);
        mpfr_init_set_str(r10216168, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216169);
        mpfr_init(r10216170);
        mpfr_init_set_str(r10216171, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216172, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r10216173);
        mpfr_init(r10216174);
        mpfr_init_set_str(r10216175, "2", 10, MPFR_RNDN);
        mpfr_init(r10216176);
        mpfr_init(r10216177);
        mpfr_init(r10216178);
        mpfr_init(r10216179);
        mpfr_init_set_str(r10216180, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216181, "5.833333", 10, MPFR_RNDN);
        mpfr_init(r10216182);
        mpfr_init(r10216183);
        mpfr_init(r10216184);
        mpfr_init(r10216185);
        mpfr_init(r10216186);
}

double f_dm(double x) {
        mpfr_set_d(r10216157, x, MPFR_RNDN);
        ;
        mpfr_pow(r10216159, r10216157, r10216158, MPFR_RNDN);
        mpfr_mul(r10216160, r10216159, r10216159, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216163, r10216157, r10216162, MPFR_RNDN);
        mpfr_add(r10216164, r10216161, r10216163, MPFR_RNDN);
        mpfr_mul(r10216165, r10216160, r10216164, MPFR_RNDN);
        ;
        mpfr_mul(r10216167, r10216166, r10216157, MPFR_RNDN);
        ;
        mpfr_add(r10216169, r10216167, r10216168, MPFR_RNDN);
        mpfr_add(r10216170, r10216165, r10216169, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216173, r10216172, r10216157, MPFR_RNDN);
        mpfr_add(r10216174, r10216171, r10216173, MPFR_RNDN);
        ;
        mpfr_add(r10216176, r10216175, r10216175, MPFR_RNDN);
        mpfr_pow(r10216177, r10216157, r10216176, MPFR_RNDN);
        mpfr_mul(r10216178, r10216174, r10216177, MPFR_RNDN);
        mpfr_mul(r10216179, r10216157, r10216157, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10216182, r10216181, r10216157, MPFR_RNDN);
        mpfr_sub(r10216183, r10216180, r10216182, MPFR_RNDN);
        mpfr_mul(r10216184, r10216179, r10216183, MPFR_RNDN);
        mpfr_add(r10216185, r10216178, r10216184, MPFR_RNDN);
        mpfr_add(r10216186, r10216170, r10216185, MPFR_RNDN);
        return mpfr_get_d(r10216186, MPFR_RNDN);
}

