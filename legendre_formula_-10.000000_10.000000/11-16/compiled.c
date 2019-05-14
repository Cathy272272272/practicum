#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r8100952 = 0.196381;
        float r8100953 = -26.707764;
        float r8100954 = x;
        float r8100955 = r8100954 * r8100954;
        float r8100956 = r8100953 * r8100955;
        float r8100957 = r8100952 + r8100956;
        float r8100958 = 592.022095;
        float r8100959 = r8100955 * r8100954;
        float r8100960 = r8100959 * r8100954;
        float r8100961 = r8100958 * r8100960;
        float r8100962 = r8100957 + r8100961;
        float r8100963 = -4972.985596;
        float r8100964 = r8100960 * r8100954;
        float r8100965 = r8100964 * r8100954;
        float r8100966 = r8100963 * r8100965;
        float r8100967 = r8100962 + r8100966;
        float r8100968 = 20424.762268;
        float r8100969 = r8100965 * r8100954;
        float r8100970 = r8100969 * r8100954;
        float r8100971 = r8100968 * r8100970;
        float r8100972 = r8100967 + r8100971;
        float r8100973 = -45388.360596;
        float r8100974 = r8100970 * r8100954;
        float r8100975 = r8100974 * r8100954;
        float r8100976 = r8100973 * r8100975;
        float r8100977 = r8100972 + r8100976;
        float r8100978 = 55703.897095;
        float r8100979 = r8100975 * r8100954;
        float r8100980 = r8100979 * r8100954;
        float r8100981 = r8100978 * r8100980;
        float r8100982 = r8100977 + r8100981;
        float r8100983 = -35503.582764;
        float r8100984 = r8100980 * r8100954;
        float r8100985 = r8100984 * r8100954;
        float r8100986 = r8100983 * r8100985;
        float r8100987 = r8100982 + r8100986;
        float r8100988 = 9171.758881;
        float r8100989 = r8100985 * r8100954;
        float r8100990 = r8100989 * r8100954;
        float r8100991 = r8100988 * r8100990;
        float r8100992 = r8100987 + r8100991;
        return r8100992;
}

double f_id(double x) {
        double r8100993 = 0.196381;
        double r8100994 = -26.707764;
        double r8100995 = x;
        double r8100996 = r8100995 * r8100995;
        double r8100997 = r8100994 * r8100996;
        double r8100998 = r8100993 + r8100997;
        double r8100999 = 592.022095;
        double r8101000 = r8100996 * r8100995;
        double r8101001 = r8101000 * r8100995;
        double r8101002 = r8100999 * r8101001;
        double r8101003 = r8100998 + r8101002;
        double r8101004 = -4972.985596;
        double r8101005 = r8101001 * r8100995;
        double r8101006 = r8101005 * r8100995;
        double r8101007 = r8101004 * r8101006;
        double r8101008 = r8101003 + r8101007;
        double r8101009 = 20424.762268;
        double r8101010 = r8101006 * r8100995;
        double r8101011 = r8101010 * r8100995;
        double r8101012 = r8101009 * r8101011;
        double r8101013 = r8101008 + r8101012;
        double r8101014 = -45388.360596;
        double r8101015 = r8101011 * r8100995;
        double r8101016 = r8101015 * r8100995;
        double r8101017 = r8101014 * r8101016;
        double r8101018 = r8101013 + r8101017;
        double r8101019 = 55703.897095;
        double r8101020 = r8101016 * r8100995;
        double r8101021 = r8101020 * r8100995;
        double r8101022 = r8101019 * r8101021;
        double r8101023 = r8101018 + r8101022;
        double r8101024 = -35503.582764;
        double r8101025 = r8101021 * r8100995;
        double r8101026 = r8101025 * r8100995;
        double r8101027 = r8101024 * r8101026;
        double r8101028 = r8101023 + r8101027;
        double r8101029 = 9171.758881;
        double r8101030 = r8101026 * r8100995;
        double r8101031 = r8101030 * r8100995;
        double r8101032 = r8101029 * r8101031;
        double r8101033 = r8101028 + r8101032;
        return r8101033;
}


double f_of(float x) {
        float r8101034 = x;
        float r8101035 = r8101034 * r8101034;
        float r8101036 = r8101035 * r8101035;
        float r8101037 = 3;
        float r8101038 = pow(r8101035, r8101037);
        float r8101039 = r8101038 * r8101036;
        float r8101040 = r8101036 * r8101039;
        float r8101041 = -35503.582764;
        float r8101042 = 9171.758881;
        float r8101043 = r8101042 * r8101035;
        float r8101044 = r8101041 + r8101043;
        float r8101045 = r8101040 * r8101044;
        float r8101046 = 55703.897095;
        float r8101047 = r8101035 * r8101046;
        float r8101048 = -45388.360596;
        float r8101049 = r8101047 + r8101048;
        float r8101050 = r8101039 * r8101049;
        float r8101051 = r8101045 + r8101050;
        float r8101052 = 4;
        float r8101053 = pow(r8101034, r8101052);
        float r8101054 = 592.022095;
        float r8101055 = r8101053 * r8101054;
        float r8101056 = -26.707764;
        float r8101057 = r8101035 * r8101056;
        float r8101058 = r8101055 + r8101057;
        float r8101059 = 0.196381;
        float r8101060 = r8101058 + r8101059;
        float r8101061 = 20424.762268;
        float r8101062 = r8101061 * r8101035;
        float r8101063 = r8101062 * r8101038;
        float r8101064 = -4972.985596;
        float r8101065 = r8101035 * r8101064;
        float r8101066 = r8101036 * r8101065;
        float r8101067 = r8101063 + r8101066;
        float r8101068 = r8101060 + r8101067;
        float r8101069 = r8101051 + r8101068;
        return r8101069;
}

double f_od(double x) {
        double r8101070 = x;
        double r8101071 = r8101070 * r8101070;
        double r8101072 = r8101071 * r8101071;
        double r8101073 = 3;
        double r8101074 = pow(r8101071, r8101073);
        double r8101075 = r8101074 * r8101072;
        double r8101076 = r8101072 * r8101075;
        double r8101077 = -35503.582764;
        double r8101078 = 9171.758881;
        double r8101079 = r8101078 * r8101071;
        double r8101080 = r8101077 + r8101079;
        double r8101081 = r8101076 * r8101080;
        double r8101082 = 55703.897095;
        double r8101083 = r8101071 * r8101082;
        double r8101084 = -45388.360596;
        double r8101085 = r8101083 + r8101084;
        double r8101086 = r8101075 * r8101085;
        double r8101087 = r8101081 + r8101086;
        double r8101088 = 4;
        double r8101089 = pow(r8101070, r8101088);
        double r8101090 = 592.022095;
        double r8101091 = r8101089 * r8101090;
        double r8101092 = -26.707764;
        double r8101093 = r8101071 * r8101092;
        double r8101094 = r8101091 + r8101093;
        double r8101095 = 0.196381;
        double r8101096 = r8101094 + r8101095;
        double r8101097 = 20424.762268;
        double r8101098 = r8101097 * r8101071;
        double r8101099 = r8101098 * r8101074;
        double r8101100 = -4972.985596;
        double r8101101 = r8101071 * r8101100;
        double r8101102 = r8101072 * r8101101;
        double r8101103 = r8101099 + r8101102;
        double r8101104 = r8101096 + r8101103;
        double r8101105 = r8101087 + r8101104;
        return r8101105;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8101106, r8101107, r8101108, r8101109, r8101110, r8101111, r8101112, r8101113, r8101114, r8101115, r8101116, r8101117, r8101118, r8101119, r8101120, r8101121, r8101122, r8101123, r8101124, r8101125, r8101126, r8101127, r8101128, r8101129, r8101130, r8101131, r8101132, r8101133, r8101134, r8101135, r8101136, r8101137, r8101138, r8101139, r8101140, r8101141, r8101142, r8101143, r8101144, r8101145, r8101146;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8101106, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101107, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r8101108);
        mpfr_init(r8101109);
        mpfr_init(r8101110);
        mpfr_init(r8101111);
        mpfr_init_set_str(r8101112, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r8101113);
        mpfr_init(r8101114);
        mpfr_init(r8101115);
        mpfr_init(r8101116);
        mpfr_init_set_str(r8101117, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r8101118);
        mpfr_init(r8101119);
        mpfr_init(r8101120);
        mpfr_init(r8101121);
        mpfr_init_set_str(r8101122, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r8101123);
        mpfr_init(r8101124);
        mpfr_init(r8101125);
        mpfr_init(r8101126);
        mpfr_init_set_str(r8101127, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r8101128);
        mpfr_init(r8101129);
        mpfr_init(r8101130);
        mpfr_init(r8101131);
        mpfr_init_set_str(r8101132, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r8101133);
        mpfr_init(r8101134);
        mpfr_init(r8101135);
        mpfr_init(r8101136);
        mpfr_init_set_str(r8101137, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r8101138);
        mpfr_init(r8101139);
        mpfr_init(r8101140);
        mpfr_init(r8101141);
        mpfr_init_set_str(r8101142, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r8101143);
        mpfr_init(r8101144);
        mpfr_init(r8101145);
        mpfr_init(r8101146);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8101108, x, MPFR_RNDN);
        mpfr_mul(r8101109, r8101108, r8101108, MPFR_RNDN);
        mpfr_mul(r8101110, r8101107, r8101109, MPFR_RNDN);
        mpfr_add(r8101111, r8101106, r8101110, MPFR_RNDN);
        ;
        mpfr_mul(r8101113, r8101109, r8101108, MPFR_RNDN);
        mpfr_mul(r8101114, r8101113, r8101108, MPFR_RNDN);
        mpfr_mul(r8101115, r8101112, r8101114, MPFR_RNDN);
        mpfr_add(r8101116, r8101111, r8101115, MPFR_RNDN);
        ;
        mpfr_mul(r8101118, r8101114, r8101108, MPFR_RNDN);
        mpfr_mul(r8101119, r8101118, r8101108, MPFR_RNDN);
        mpfr_mul(r8101120, r8101117, r8101119, MPFR_RNDN);
        mpfr_add(r8101121, r8101116, r8101120, MPFR_RNDN);
        ;
        mpfr_mul(r8101123, r8101119, r8101108, MPFR_RNDN);
        mpfr_mul(r8101124, r8101123, r8101108, MPFR_RNDN);
        mpfr_mul(r8101125, r8101122, r8101124, MPFR_RNDN);
        mpfr_add(r8101126, r8101121, r8101125, MPFR_RNDN);
        ;
        mpfr_mul(r8101128, r8101124, r8101108, MPFR_RNDN);
        mpfr_mul(r8101129, r8101128, r8101108, MPFR_RNDN);
        mpfr_mul(r8101130, r8101127, r8101129, MPFR_RNDN);
        mpfr_add(r8101131, r8101126, r8101130, MPFR_RNDN);
        ;
        mpfr_mul(r8101133, r8101129, r8101108, MPFR_RNDN);
        mpfr_mul(r8101134, r8101133, r8101108, MPFR_RNDN);
        mpfr_mul(r8101135, r8101132, r8101134, MPFR_RNDN);
        mpfr_add(r8101136, r8101131, r8101135, MPFR_RNDN);
        ;
        mpfr_mul(r8101138, r8101134, r8101108, MPFR_RNDN);
        mpfr_mul(r8101139, r8101138, r8101108, MPFR_RNDN);
        mpfr_mul(r8101140, r8101137, r8101139, MPFR_RNDN);
        mpfr_add(r8101141, r8101136, r8101140, MPFR_RNDN);
        ;
        mpfr_mul(r8101143, r8101139, r8101108, MPFR_RNDN);
        mpfr_mul(r8101144, r8101143, r8101108, MPFR_RNDN);
        mpfr_mul(r8101145, r8101142, r8101144, MPFR_RNDN);
        mpfr_add(r8101146, r8101141, r8101145, MPFR_RNDN);
        return mpfr_get_d(r8101146, MPFR_RNDN);
}

static mpfr_t r8101147, r8101148, r8101149, r8101150, r8101151, r8101152, r8101153, r8101154, r8101155, r8101156, r8101157, r8101158, r8101159, r8101160, r8101161, r8101162, r8101163, r8101164, r8101165, r8101166, r8101167, r8101168, r8101169, r8101170, r8101171, r8101172, r8101173, r8101174, r8101175, r8101176, r8101177, r8101178, r8101179, r8101180, r8101181, r8101182;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8101147);
        mpfr_init(r8101148);
        mpfr_init(r8101149);
        mpfr_init_set_str(r8101150, "3", 10, MPFR_RNDN);
        mpfr_init(r8101151);
        mpfr_init(r8101152);
        mpfr_init(r8101153);
        mpfr_init_set_str(r8101154, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101155, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r8101156);
        mpfr_init(r8101157);
        mpfr_init(r8101158);
        mpfr_init_set_str(r8101159, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r8101160);
        mpfr_init_set_str(r8101161, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r8101162);
        mpfr_init(r8101163);
        mpfr_init(r8101164);
        mpfr_init_set_str(r8101165, "4", 10, MPFR_RNDN);
        mpfr_init(r8101166);
        mpfr_init_set_str(r8101167, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r8101168);
        mpfr_init_set_str(r8101169, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r8101170);
        mpfr_init(r8101171);
        mpfr_init_set_str(r8101172, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r8101173);
        mpfr_init_set_str(r8101174, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r8101175);
        mpfr_init(r8101176);
        mpfr_init_set_str(r8101177, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r8101178);
        mpfr_init(r8101179);
        mpfr_init(r8101180);
        mpfr_init(r8101181);
        mpfr_init(r8101182);
}

double f_fm(double x) {
        mpfr_set_d(r8101147, x, MPFR_RNDN);
        mpfr_mul(r8101148, r8101147, r8101147, MPFR_RNDN);
        mpfr_mul(r8101149, r8101148, r8101148, MPFR_RNDN);
        ;
        mpfr_pow(r8101151, r8101148, r8101150, MPFR_RNDN);
        mpfr_mul(r8101152, r8101151, r8101149, MPFR_RNDN);
        mpfr_mul(r8101153, r8101149, r8101152, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8101156, r8101155, r8101148, MPFR_RNDN);
        mpfr_add(r8101157, r8101154, r8101156, MPFR_RNDN);
        mpfr_mul(r8101158, r8101153, r8101157, MPFR_RNDN);
        ;
        mpfr_mul(r8101160, r8101148, r8101159, MPFR_RNDN);
        ;
        mpfr_add(r8101162, r8101160, r8101161, MPFR_RNDN);
        mpfr_mul(r8101163, r8101152, r8101162, MPFR_RNDN);
        mpfr_add(r8101164, r8101158, r8101163, MPFR_RNDN);
        ;
        mpfr_pow(r8101166, r8101147, r8101165, MPFR_RNDN);
        ;
        mpfr_mul(r8101168, r8101166, r8101167, MPFR_RNDN);
        ;
        mpfr_mul(r8101170, r8101148, r8101169, MPFR_RNDN);
        mpfr_add(r8101171, r8101168, r8101170, MPFR_RNDN);
        ;
        mpfr_add(r8101173, r8101171, r8101172, MPFR_RNDN);
        ;
        mpfr_mul(r8101175, r8101174, r8101148, MPFR_RNDN);
        mpfr_mul(r8101176, r8101175, r8101151, MPFR_RNDN);
        ;
        mpfr_mul(r8101178, r8101148, r8101177, MPFR_RNDN);
        mpfr_mul(r8101179, r8101149, r8101178, MPFR_RNDN);
        mpfr_add(r8101180, r8101176, r8101179, MPFR_RNDN);
        mpfr_add(r8101181, r8101173, r8101180, MPFR_RNDN);
        mpfr_add(r8101182, r8101164, r8101181, MPFR_RNDN);
        return mpfr_get_d(r8101182, MPFR_RNDN);
}

static mpfr_t r8101183, r8101184, r8101185, r8101186, r8101187, r8101188, r8101189, r8101190, r8101191, r8101192, r8101193, r8101194, r8101195, r8101196, r8101197, r8101198, r8101199, r8101200, r8101201, r8101202, r8101203, r8101204, r8101205, r8101206, r8101207, r8101208, r8101209, r8101210, r8101211, r8101212, r8101213, r8101214, r8101215, r8101216, r8101217, r8101218;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8101183);
        mpfr_init(r8101184);
        mpfr_init(r8101185);
        mpfr_init_set_str(r8101186, "3", 10, MPFR_RNDN);
        mpfr_init(r8101187);
        mpfr_init(r8101188);
        mpfr_init(r8101189);
        mpfr_init_set_str(r8101190, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r8101191, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r8101192);
        mpfr_init(r8101193);
        mpfr_init(r8101194);
        mpfr_init_set_str(r8101195, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r8101196);
        mpfr_init_set_str(r8101197, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r8101198);
        mpfr_init(r8101199);
        mpfr_init(r8101200);
        mpfr_init_set_str(r8101201, "4", 10, MPFR_RNDN);
        mpfr_init(r8101202);
        mpfr_init_set_str(r8101203, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r8101204);
        mpfr_init_set_str(r8101205, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r8101206);
        mpfr_init(r8101207);
        mpfr_init_set_str(r8101208, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r8101209);
        mpfr_init_set_str(r8101210, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r8101211);
        mpfr_init(r8101212);
        mpfr_init_set_str(r8101213, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r8101214);
        mpfr_init(r8101215);
        mpfr_init(r8101216);
        mpfr_init(r8101217);
        mpfr_init(r8101218);
}

double f_dm(double x) {
        mpfr_set_d(r8101183, x, MPFR_RNDN);
        mpfr_mul(r8101184, r8101183, r8101183, MPFR_RNDN);
        mpfr_mul(r8101185, r8101184, r8101184, MPFR_RNDN);
        ;
        mpfr_pow(r8101187, r8101184, r8101186, MPFR_RNDN);
        mpfr_mul(r8101188, r8101187, r8101185, MPFR_RNDN);
        mpfr_mul(r8101189, r8101185, r8101188, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8101192, r8101191, r8101184, MPFR_RNDN);
        mpfr_add(r8101193, r8101190, r8101192, MPFR_RNDN);
        mpfr_mul(r8101194, r8101189, r8101193, MPFR_RNDN);
        ;
        mpfr_mul(r8101196, r8101184, r8101195, MPFR_RNDN);
        ;
        mpfr_add(r8101198, r8101196, r8101197, MPFR_RNDN);
        mpfr_mul(r8101199, r8101188, r8101198, MPFR_RNDN);
        mpfr_add(r8101200, r8101194, r8101199, MPFR_RNDN);
        ;
        mpfr_pow(r8101202, r8101183, r8101201, MPFR_RNDN);
        ;
        mpfr_mul(r8101204, r8101202, r8101203, MPFR_RNDN);
        ;
        mpfr_mul(r8101206, r8101184, r8101205, MPFR_RNDN);
        mpfr_add(r8101207, r8101204, r8101206, MPFR_RNDN);
        ;
        mpfr_add(r8101209, r8101207, r8101208, MPFR_RNDN);
        ;
        mpfr_mul(r8101211, r8101210, r8101184, MPFR_RNDN);
        mpfr_mul(r8101212, r8101211, r8101187, MPFR_RNDN);
        ;
        mpfr_mul(r8101214, r8101184, r8101213, MPFR_RNDN);
        mpfr_mul(r8101215, r8101185, r8101214, MPFR_RNDN);
        mpfr_add(r8101216, r8101212, r8101215, MPFR_RNDN);
        mpfr_add(r8101217, r8101209, r8101216, MPFR_RNDN);
        mpfr_add(r8101218, r8101200, r8101217, MPFR_RNDN);
        return mpfr_get_d(r8101218, MPFR_RNDN);
}

