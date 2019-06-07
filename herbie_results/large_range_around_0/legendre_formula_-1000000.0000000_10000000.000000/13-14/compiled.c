#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r6407977 = -0.209473;
        float r6407978 = 21.994629;
        float r6407979 = x;
        float r6407980 = r6407979 * r6407979;
        float r6407981 = r6407978 * r6407980;
        float r6407982 = r6407977 + r6407981;
        float r6407983 = -373.908691;
        float r6407984 = r6407980 * r6407979;
        float r6407985 = r6407984 * r6407979;
        float r6407986 = r6407983 * r6407985;
        float r6407987 = r6407982 + r6407986;
        float r6407988 = 2368.088379;
        float r6407989 = r6407985 * r6407979;
        float r6407990 = r6407989 * r6407979;
        float r6407991 = r6407988 * r6407990;
        float r6407992 = r6407987 + r6407991;
        float r6407993 = -7104.265137;
        float r6407994 = r6407990 * r6407979;
        float r6407995 = r6407994 * r6407979;
        float r6407996 = r6407993 * r6407995;
        float r6407997 = r6407992 + r6407996;
        float r6407998 = 10893.206543;
        float r6407999 = r6407995 * r6407979;
        float r6408000 = r6407999 * r6407979;
        float r6408001 = r6407998 * r6408000;
        float r6408002 = r6407997 + r6408001;
        float r6408003 = -8252.429199;
        float r6408004 = r6408000 * r6407979;
        float r6408005 = r6408004 * r6407979;
        float r6408006 = r6408003 * r6408005;
        float r6408007 = r6408002 + r6408006;
        float r6408008 = 2448.522949;
        float r6408009 = r6408005 * r6407979;
        float r6408010 = r6408009 * r6407979;
        float r6408011 = r6408008 * r6408010;
        float r6408012 = r6408007 + r6408011;
        return r6408012;
}

double f_id(double x) {
        double r6408013 = -0.209473;
        double r6408014 = 21.994629;
        double r6408015 = x;
        double r6408016 = r6408015 * r6408015;
        double r6408017 = r6408014 * r6408016;
        double r6408018 = r6408013 + r6408017;
        double r6408019 = -373.908691;
        double r6408020 = r6408016 * r6408015;
        double r6408021 = r6408020 * r6408015;
        double r6408022 = r6408019 * r6408021;
        double r6408023 = r6408018 + r6408022;
        double r6408024 = 2368.088379;
        double r6408025 = r6408021 * r6408015;
        double r6408026 = r6408025 * r6408015;
        double r6408027 = r6408024 * r6408026;
        double r6408028 = r6408023 + r6408027;
        double r6408029 = -7104.265137;
        double r6408030 = r6408026 * r6408015;
        double r6408031 = r6408030 * r6408015;
        double r6408032 = r6408029 * r6408031;
        double r6408033 = r6408028 + r6408032;
        double r6408034 = 10893.206543;
        double r6408035 = r6408031 * r6408015;
        double r6408036 = r6408035 * r6408015;
        double r6408037 = r6408034 * r6408036;
        double r6408038 = r6408033 + r6408037;
        double r6408039 = -8252.429199;
        double r6408040 = r6408036 * r6408015;
        double r6408041 = r6408040 * r6408015;
        double r6408042 = r6408039 * r6408041;
        double r6408043 = r6408038 + r6408042;
        double r6408044 = 2448.522949;
        double r6408045 = r6408041 * r6408015;
        double r6408046 = r6408045 * r6408015;
        double r6408047 = r6408044 * r6408046;
        double r6408048 = r6408043 + r6408047;
        return r6408048;
}


double f_of(float x) {
        float r6408049 = -0.209473;
        float r6408050 = 21.994629;
        float r6408051 = x;
        float r6408052 = r6408051 * r6408051;
        float r6408053 = r6408050 * r6408052;
        float r6408054 = r6408049 + r6408053;
        float r6408055 = -373.908691;
        float r6408056 = r6408052 * r6408051;
        float r6408057 = r6408056 * r6408051;
        float r6408058 = r6408055 * r6408057;
        float r6408059 = r6408054 + r6408058;
        float r6408060 = 2368.088379;
        float r6408061 = r6408057 * r6408051;
        float r6408062 = r6408061 * r6408051;
        float r6408063 = r6408060 * r6408062;
        float r6408064 = r6408059 + r6408063;
        float r6408065 = -7104.265137;
        float r6408066 = r6408062 * r6408051;
        float r6408067 = r6408066 * r6408051;
        float r6408068 = r6408065 * r6408067;
        float r6408069 = r6408064 + r6408068;
        float r6408070 = 10893.206543;
        float r6408071 = r6408067 * r6408051;
        float r6408072 = r6408071 * r6408051;
        float r6408073 = r6408070 * r6408072;
        float r6408074 = r6408069 + r6408073;
        float r6408075 = -8252.429199;
        float r6408076 = r6408072 * r6408051;
        float r6408077 = r6408076 * r6408051;
        float r6408078 = r6408075 * r6408077;
        float r6408079 = r6408074 + r6408078;
        float r6408080 = 2448.522949;
        float r6408081 = r6408077 * r6408051;
        float r6408082 = r6408081 * r6408051;
        float r6408083 = r6408080 * r6408082;
        float r6408084 = r6408079 + r6408083;
        return r6408084;
}

double f_od(double x) {
        double r6408085 = -0.209473;
        double r6408086 = 21.994629;
        double r6408087 = x;
        double r6408088 = r6408087 * r6408087;
        double r6408089 = r6408086 * r6408088;
        double r6408090 = r6408085 + r6408089;
        double r6408091 = -373.908691;
        double r6408092 = r6408088 * r6408087;
        double r6408093 = r6408092 * r6408087;
        double r6408094 = r6408091 * r6408093;
        double r6408095 = r6408090 + r6408094;
        double r6408096 = 2368.088379;
        double r6408097 = r6408093 * r6408087;
        double r6408098 = r6408097 * r6408087;
        double r6408099 = r6408096 * r6408098;
        double r6408100 = r6408095 + r6408099;
        double r6408101 = -7104.265137;
        double r6408102 = r6408098 * r6408087;
        double r6408103 = r6408102 * r6408087;
        double r6408104 = r6408101 * r6408103;
        double r6408105 = r6408100 + r6408104;
        double r6408106 = 10893.206543;
        double r6408107 = r6408103 * r6408087;
        double r6408108 = r6408107 * r6408087;
        double r6408109 = r6408106 * r6408108;
        double r6408110 = r6408105 + r6408109;
        double r6408111 = -8252.429199;
        double r6408112 = r6408108 * r6408087;
        double r6408113 = r6408112 * r6408087;
        double r6408114 = r6408111 * r6408113;
        double r6408115 = r6408110 + r6408114;
        double r6408116 = 2448.522949;
        double r6408117 = r6408113 * r6408087;
        double r6408118 = r6408117 * r6408087;
        double r6408119 = r6408116 * r6408118;
        double r6408120 = r6408115 + r6408119;
        return r6408120;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6408121, r6408122, r6408123, r6408124, r6408125, r6408126, r6408127, r6408128, r6408129, r6408130, r6408131, r6408132, r6408133, r6408134, r6408135, r6408136, r6408137, r6408138, r6408139, r6408140, r6408141, r6408142, r6408143, r6408144, r6408145, r6408146, r6408147, r6408148, r6408149, r6408150, r6408151, r6408152, r6408153, r6408154, r6408155, r6408156;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408121, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408122, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6408123);
        mpfr_init(r6408124);
        mpfr_init(r6408125);
        mpfr_init(r6408126);
        mpfr_init_set_str(r6408127, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6408128);
        mpfr_init(r6408129);
        mpfr_init(r6408130);
        mpfr_init(r6408131);
        mpfr_init_set_str(r6408132, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6408133);
        mpfr_init(r6408134);
        mpfr_init(r6408135);
        mpfr_init(r6408136);
        mpfr_init_set_str(r6408137, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6408138);
        mpfr_init(r6408139);
        mpfr_init(r6408140);
        mpfr_init(r6408141);
        mpfr_init_set_str(r6408142, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6408143);
        mpfr_init(r6408144);
        mpfr_init(r6408145);
        mpfr_init(r6408146);
        mpfr_init_set_str(r6408147, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6408148);
        mpfr_init(r6408149);
        mpfr_init(r6408150);
        mpfr_init(r6408151);
        mpfr_init_set_str(r6408152, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6408153);
        mpfr_init(r6408154);
        mpfr_init(r6408155);
        mpfr_init(r6408156);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6408123, x, MPFR_RNDN);
        mpfr_mul(r6408124, r6408123, r6408123, MPFR_RNDN);
        mpfr_mul(r6408125, r6408122, r6408124, MPFR_RNDN);
        mpfr_add(r6408126, r6408121, r6408125, MPFR_RNDN);
        ;
        mpfr_mul(r6408128, r6408124, r6408123, MPFR_RNDN);
        mpfr_mul(r6408129, r6408128, r6408123, MPFR_RNDN);
        mpfr_mul(r6408130, r6408127, r6408129, MPFR_RNDN);
        mpfr_add(r6408131, r6408126, r6408130, MPFR_RNDN);
        ;
        mpfr_mul(r6408133, r6408129, r6408123, MPFR_RNDN);
        mpfr_mul(r6408134, r6408133, r6408123, MPFR_RNDN);
        mpfr_mul(r6408135, r6408132, r6408134, MPFR_RNDN);
        mpfr_add(r6408136, r6408131, r6408135, MPFR_RNDN);
        ;
        mpfr_mul(r6408138, r6408134, r6408123, MPFR_RNDN);
        mpfr_mul(r6408139, r6408138, r6408123, MPFR_RNDN);
        mpfr_mul(r6408140, r6408137, r6408139, MPFR_RNDN);
        mpfr_add(r6408141, r6408136, r6408140, MPFR_RNDN);
        ;
        mpfr_mul(r6408143, r6408139, r6408123, MPFR_RNDN);
        mpfr_mul(r6408144, r6408143, r6408123, MPFR_RNDN);
        mpfr_mul(r6408145, r6408142, r6408144, MPFR_RNDN);
        mpfr_add(r6408146, r6408141, r6408145, MPFR_RNDN);
        ;
        mpfr_mul(r6408148, r6408144, r6408123, MPFR_RNDN);
        mpfr_mul(r6408149, r6408148, r6408123, MPFR_RNDN);
        mpfr_mul(r6408150, r6408147, r6408149, MPFR_RNDN);
        mpfr_add(r6408151, r6408146, r6408150, MPFR_RNDN);
        ;
        mpfr_mul(r6408153, r6408149, r6408123, MPFR_RNDN);
        mpfr_mul(r6408154, r6408153, r6408123, MPFR_RNDN);
        mpfr_mul(r6408155, r6408152, r6408154, MPFR_RNDN);
        mpfr_add(r6408156, r6408151, r6408155, MPFR_RNDN);
        return mpfr_get_d(r6408156, MPFR_RNDN);
}

static mpfr_t r6408157, r6408158, r6408159, r6408160, r6408161, r6408162, r6408163, r6408164, r6408165, r6408166, r6408167, r6408168, r6408169, r6408170, r6408171, r6408172, r6408173, r6408174, r6408175, r6408176, r6408177, r6408178, r6408179, r6408180, r6408181, r6408182, r6408183, r6408184, r6408185, r6408186, r6408187, r6408188, r6408189, r6408190, r6408191, r6408192;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408157, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408158, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6408159);
        mpfr_init(r6408160);
        mpfr_init(r6408161);
        mpfr_init(r6408162);
        mpfr_init_set_str(r6408163, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6408164);
        mpfr_init(r6408165);
        mpfr_init(r6408166);
        mpfr_init(r6408167);
        mpfr_init_set_str(r6408168, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6408169);
        mpfr_init(r6408170);
        mpfr_init(r6408171);
        mpfr_init(r6408172);
        mpfr_init_set_str(r6408173, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6408174);
        mpfr_init(r6408175);
        mpfr_init(r6408176);
        mpfr_init(r6408177);
        mpfr_init_set_str(r6408178, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6408179);
        mpfr_init(r6408180);
        mpfr_init(r6408181);
        mpfr_init(r6408182);
        mpfr_init_set_str(r6408183, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6408184);
        mpfr_init(r6408185);
        mpfr_init(r6408186);
        mpfr_init(r6408187);
        mpfr_init_set_str(r6408188, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6408189);
        mpfr_init(r6408190);
        mpfr_init(r6408191);
        mpfr_init(r6408192);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6408159, x, MPFR_RNDN);
        mpfr_mul(r6408160, r6408159, r6408159, MPFR_RNDN);
        mpfr_mul(r6408161, r6408158, r6408160, MPFR_RNDN);
        mpfr_add(r6408162, r6408157, r6408161, MPFR_RNDN);
        ;
        mpfr_mul(r6408164, r6408160, r6408159, MPFR_RNDN);
        mpfr_mul(r6408165, r6408164, r6408159, MPFR_RNDN);
        mpfr_mul(r6408166, r6408163, r6408165, MPFR_RNDN);
        mpfr_add(r6408167, r6408162, r6408166, MPFR_RNDN);
        ;
        mpfr_mul(r6408169, r6408165, r6408159, MPFR_RNDN);
        mpfr_mul(r6408170, r6408169, r6408159, MPFR_RNDN);
        mpfr_mul(r6408171, r6408168, r6408170, MPFR_RNDN);
        mpfr_add(r6408172, r6408167, r6408171, MPFR_RNDN);
        ;
        mpfr_mul(r6408174, r6408170, r6408159, MPFR_RNDN);
        mpfr_mul(r6408175, r6408174, r6408159, MPFR_RNDN);
        mpfr_mul(r6408176, r6408173, r6408175, MPFR_RNDN);
        mpfr_add(r6408177, r6408172, r6408176, MPFR_RNDN);
        ;
        mpfr_mul(r6408179, r6408175, r6408159, MPFR_RNDN);
        mpfr_mul(r6408180, r6408179, r6408159, MPFR_RNDN);
        mpfr_mul(r6408181, r6408178, r6408180, MPFR_RNDN);
        mpfr_add(r6408182, r6408177, r6408181, MPFR_RNDN);
        ;
        mpfr_mul(r6408184, r6408180, r6408159, MPFR_RNDN);
        mpfr_mul(r6408185, r6408184, r6408159, MPFR_RNDN);
        mpfr_mul(r6408186, r6408183, r6408185, MPFR_RNDN);
        mpfr_add(r6408187, r6408182, r6408186, MPFR_RNDN);
        ;
        mpfr_mul(r6408189, r6408185, r6408159, MPFR_RNDN);
        mpfr_mul(r6408190, r6408189, r6408159, MPFR_RNDN);
        mpfr_mul(r6408191, r6408188, r6408190, MPFR_RNDN);
        mpfr_add(r6408192, r6408187, r6408191, MPFR_RNDN);
        return mpfr_get_d(r6408192, MPFR_RNDN);
}

static mpfr_t r6408193, r6408194, r6408195, r6408196, r6408197, r6408198, r6408199, r6408200, r6408201, r6408202, r6408203, r6408204, r6408205, r6408206, r6408207, r6408208, r6408209, r6408210, r6408211, r6408212, r6408213, r6408214, r6408215, r6408216, r6408217, r6408218, r6408219, r6408220, r6408221, r6408222, r6408223, r6408224, r6408225, r6408226, r6408227, r6408228;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6408193, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r6408194, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r6408195);
        mpfr_init(r6408196);
        mpfr_init(r6408197);
        mpfr_init(r6408198);
        mpfr_init_set_str(r6408199, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r6408200);
        mpfr_init(r6408201);
        mpfr_init(r6408202);
        mpfr_init(r6408203);
        mpfr_init_set_str(r6408204, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r6408205);
        mpfr_init(r6408206);
        mpfr_init(r6408207);
        mpfr_init(r6408208);
        mpfr_init_set_str(r6408209, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r6408210);
        mpfr_init(r6408211);
        mpfr_init(r6408212);
        mpfr_init(r6408213);
        mpfr_init_set_str(r6408214, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r6408215);
        mpfr_init(r6408216);
        mpfr_init(r6408217);
        mpfr_init(r6408218);
        mpfr_init_set_str(r6408219, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r6408220);
        mpfr_init(r6408221);
        mpfr_init(r6408222);
        mpfr_init(r6408223);
        mpfr_init_set_str(r6408224, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r6408225);
        mpfr_init(r6408226);
        mpfr_init(r6408227);
        mpfr_init(r6408228);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6408195, x, MPFR_RNDN);
        mpfr_mul(r6408196, r6408195, r6408195, MPFR_RNDN);
        mpfr_mul(r6408197, r6408194, r6408196, MPFR_RNDN);
        mpfr_add(r6408198, r6408193, r6408197, MPFR_RNDN);
        ;
        mpfr_mul(r6408200, r6408196, r6408195, MPFR_RNDN);
        mpfr_mul(r6408201, r6408200, r6408195, MPFR_RNDN);
        mpfr_mul(r6408202, r6408199, r6408201, MPFR_RNDN);
        mpfr_add(r6408203, r6408198, r6408202, MPFR_RNDN);
        ;
        mpfr_mul(r6408205, r6408201, r6408195, MPFR_RNDN);
        mpfr_mul(r6408206, r6408205, r6408195, MPFR_RNDN);
        mpfr_mul(r6408207, r6408204, r6408206, MPFR_RNDN);
        mpfr_add(r6408208, r6408203, r6408207, MPFR_RNDN);
        ;
        mpfr_mul(r6408210, r6408206, r6408195, MPFR_RNDN);
        mpfr_mul(r6408211, r6408210, r6408195, MPFR_RNDN);
        mpfr_mul(r6408212, r6408209, r6408211, MPFR_RNDN);
        mpfr_add(r6408213, r6408208, r6408212, MPFR_RNDN);
        ;
        mpfr_mul(r6408215, r6408211, r6408195, MPFR_RNDN);
        mpfr_mul(r6408216, r6408215, r6408195, MPFR_RNDN);
        mpfr_mul(r6408217, r6408214, r6408216, MPFR_RNDN);
        mpfr_add(r6408218, r6408213, r6408217, MPFR_RNDN);
        ;
        mpfr_mul(r6408220, r6408216, r6408195, MPFR_RNDN);
        mpfr_mul(r6408221, r6408220, r6408195, MPFR_RNDN);
        mpfr_mul(r6408222, r6408219, r6408221, MPFR_RNDN);
        mpfr_add(r6408223, r6408218, r6408222, MPFR_RNDN);
        ;
        mpfr_mul(r6408225, r6408221, r6408195, MPFR_RNDN);
        mpfr_mul(r6408226, r6408225, r6408195, MPFR_RNDN);
        mpfr_mul(r6408227, r6408224, r6408226, MPFR_RNDN);
        mpfr_add(r6408228, r6408223, r6408227, MPFR_RNDN);
        return mpfr_get_d(r6408228, MPFR_RNDN);
}

