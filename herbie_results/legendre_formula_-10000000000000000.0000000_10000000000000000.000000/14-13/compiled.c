#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r6905982 = 2.932617;
        float r6905983 = x;
        float r6905984 = r6905982 * r6905983;
        float r6905985 = -87.978516;
        float r6905986 = r6905983 * r6905983;
        float r6905987 = r6905986 * r6905983;
        float r6905988 = r6905985 * r6905987;
        float r6905989 = r6905984 + r6905988;
        float r6905990 = 747.817383;
        float r6905991 = r6905987 * r6905983;
        float r6905992 = r6905991 * r6905983;
        float r6905993 = r6905990 * r6905992;
        float r6905994 = r6905989 + r6905993;
        float r6905995 = -2706.386719;
        float r6905996 = r6905992 * r6905983;
        float r6905997 = r6905996 * r6905983;
        float r6905998 = r6905995 * r6905997;
        float r6905999 = r6905994 + r6905998;
        float r6906000 = 4736.176758;
        float r6906001 = r6905997 * r6905983;
        float r6906002 = r6906001 * r6905983;
        float r6906003 = r6906000 * r6906002;
        float r6906004 = r6905999 + r6906003;
        float r6906005 = -3961.166016;
        float r6906006 = r6906002 * r6905983;
        float r6906007 = r6906006 * r6905983;
        float r6906008 = r6906005 * r6906007;
        float r6906009 = r6906004 + r6906008;
        float r6906010 = 1269.604492;
        float r6906011 = r6906007 * r6905983;
        float r6906012 = r6906011 * r6905983;
        float r6906013 = r6906010 * r6906012;
        float r6906014 = r6906009 + r6906013;
        return r6906014;
}

double f_id(double x) {
        double r6906015 = 2.932617;
        double r6906016 = x;
        double r6906017 = r6906015 * r6906016;
        double r6906018 = -87.978516;
        double r6906019 = r6906016 * r6906016;
        double r6906020 = r6906019 * r6906016;
        double r6906021 = r6906018 * r6906020;
        double r6906022 = r6906017 + r6906021;
        double r6906023 = 747.817383;
        double r6906024 = r6906020 * r6906016;
        double r6906025 = r6906024 * r6906016;
        double r6906026 = r6906023 * r6906025;
        double r6906027 = r6906022 + r6906026;
        double r6906028 = -2706.386719;
        double r6906029 = r6906025 * r6906016;
        double r6906030 = r6906029 * r6906016;
        double r6906031 = r6906028 * r6906030;
        double r6906032 = r6906027 + r6906031;
        double r6906033 = 4736.176758;
        double r6906034 = r6906030 * r6906016;
        double r6906035 = r6906034 * r6906016;
        double r6906036 = r6906033 * r6906035;
        double r6906037 = r6906032 + r6906036;
        double r6906038 = -3961.166016;
        double r6906039 = r6906035 * r6906016;
        double r6906040 = r6906039 * r6906016;
        double r6906041 = r6906038 * r6906040;
        double r6906042 = r6906037 + r6906041;
        double r6906043 = 1269.604492;
        double r6906044 = r6906040 * r6906016;
        double r6906045 = r6906044 * r6906016;
        double r6906046 = r6906043 * r6906045;
        double r6906047 = r6906042 + r6906046;
        return r6906047;
}


double f_of(float x) {
        float r6906048 = x;
        float r6906049 = -3961.166016;
        float r6906050 = r6906048 * r6906049;
        float r6906051 = 3;
        float r6906052 = pow(r6906048, r6906051);
        float r6906053 = r6906052 * r6906052;
        float r6906054 = 1269.604492;
        float r6906055 = r6906054 * r6906048;
        float r6906056 = pow(r6906055, r6906051);
        float r6906057 = r6906053 * r6906056;
        float r6906058 = cbrt(r6906057);
        float r6906059 = r6906050 + r6906058;
        float r6906060 = r6906048 * r6906048;
        float r6906061 = r6906052 * r6906060;
        float r6906062 = r6906061 * r6906061;
        float r6906063 = r6906059 * r6906062;
        float r6906064 = 9;
        float r6906065 = pow(r6906048, r6906064);
        float r6906066 = 4736.176758;
        float r6906067 = r6906065 * r6906066;
        float r6906068 = -87.978516;
        float r6906069 = r6906068 * r6906048;
        float r6906070 = r6906069 * r6906060;
        float r6906071 = 2.932617;
        float r6906072 = r6906048 * r6906071;
        float r6906073 = r6906070 + r6906072;
        float r6906074 = r6906067 + r6906073;
        float r6906075 = r6906060 * r6906060;
        float r6906076 = 747.817383;
        float r6906077 = r6906076 * r6906048;
        float r6906078 = -2706.386719;
        float r6906079 = r6906078 * r6906048;
        float r6906080 = r6906060 * r6906079;
        float r6906081 = r6906077 + r6906080;
        float r6906082 = r6906075 * r6906081;
        float r6906083 = r6906074 + r6906082;
        float r6906084 = r6906063 + r6906083;
        return r6906084;
}

double f_od(double x) {
        double r6906085 = x;
        double r6906086 = -3961.166016;
        double r6906087 = r6906085 * r6906086;
        double r6906088 = 3;
        double r6906089 = pow(r6906085, r6906088);
        double r6906090 = r6906089 * r6906089;
        double r6906091 = 1269.604492;
        double r6906092 = r6906091 * r6906085;
        double r6906093 = pow(r6906092, r6906088);
        double r6906094 = r6906090 * r6906093;
        double r6906095 = cbrt(r6906094);
        double r6906096 = r6906087 + r6906095;
        double r6906097 = r6906085 * r6906085;
        double r6906098 = r6906089 * r6906097;
        double r6906099 = r6906098 * r6906098;
        double r6906100 = r6906096 * r6906099;
        double r6906101 = 9;
        double r6906102 = pow(r6906085, r6906101);
        double r6906103 = 4736.176758;
        double r6906104 = r6906102 * r6906103;
        double r6906105 = -87.978516;
        double r6906106 = r6906105 * r6906085;
        double r6906107 = r6906106 * r6906097;
        double r6906108 = 2.932617;
        double r6906109 = r6906085 * r6906108;
        double r6906110 = r6906107 + r6906109;
        double r6906111 = r6906104 + r6906110;
        double r6906112 = r6906097 * r6906097;
        double r6906113 = 747.817383;
        double r6906114 = r6906113 * r6906085;
        double r6906115 = -2706.386719;
        double r6906116 = r6906115 * r6906085;
        double r6906117 = r6906097 * r6906116;
        double r6906118 = r6906114 + r6906117;
        double r6906119 = r6906112 * r6906118;
        double r6906120 = r6906111 + r6906119;
        double r6906121 = r6906100 + r6906120;
        return r6906121;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6906122, r6906123, r6906124, r6906125, r6906126, r6906127, r6906128, r6906129, r6906130, r6906131, r6906132, r6906133, r6906134, r6906135, r6906136, r6906137, r6906138, r6906139, r6906140, r6906141, r6906142, r6906143, r6906144, r6906145, r6906146, r6906147, r6906148, r6906149, r6906150, r6906151, r6906152, r6906153, r6906154;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6906122, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6906123);
        mpfr_init(r6906124);
        mpfr_init_set_str(r6906125, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6906126);
        mpfr_init(r6906127);
        mpfr_init(r6906128);
        mpfr_init(r6906129);
        mpfr_init_set_str(r6906130, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6906131);
        mpfr_init(r6906132);
        mpfr_init(r6906133);
        mpfr_init(r6906134);
        mpfr_init_set_str(r6906135, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r6906136);
        mpfr_init(r6906137);
        mpfr_init(r6906138);
        mpfr_init(r6906139);
        mpfr_init_set_str(r6906140, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6906141);
        mpfr_init(r6906142);
        mpfr_init(r6906143);
        mpfr_init(r6906144);
        mpfr_init_set_str(r6906145, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6906146);
        mpfr_init(r6906147);
        mpfr_init(r6906148);
        mpfr_init(r6906149);
        mpfr_init_set_str(r6906150, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6906151);
        mpfr_init(r6906152);
        mpfr_init(r6906153);
        mpfr_init(r6906154);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6906123, x, MPFR_RNDN);
        mpfr_mul(r6906124, r6906122, r6906123, MPFR_RNDN);
        ;
        mpfr_mul(r6906126, r6906123, r6906123, MPFR_RNDN);
        mpfr_mul(r6906127, r6906126, r6906123, MPFR_RNDN);
        mpfr_mul(r6906128, r6906125, r6906127, MPFR_RNDN);
        mpfr_add(r6906129, r6906124, r6906128, MPFR_RNDN);
        ;
        mpfr_mul(r6906131, r6906127, r6906123, MPFR_RNDN);
        mpfr_mul(r6906132, r6906131, r6906123, MPFR_RNDN);
        mpfr_mul(r6906133, r6906130, r6906132, MPFR_RNDN);
        mpfr_add(r6906134, r6906129, r6906133, MPFR_RNDN);
        ;
        mpfr_mul(r6906136, r6906132, r6906123, MPFR_RNDN);
        mpfr_mul(r6906137, r6906136, r6906123, MPFR_RNDN);
        mpfr_mul(r6906138, r6906135, r6906137, MPFR_RNDN);
        mpfr_add(r6906139, r6906134, r6906138, MPFR_RNDN);
        ;
        mpfr_mul(r6906141, r6906137, r6906123, MPFR_RNDN);
        mpfr_mul(r6906142, r6906141, r6906123, MPFR_RNDN);
        mpfr_mul(r6906143, r6906140, r6906142, MPFR_RNDN);
        mpfr_add(r6906144, r6906139, r6906143, MPFR_RNDN);
        ;
        mpfr_mul(r6906146, r6906142, r6906123, MPFR_RNDN);
        mpfr_mul(r6906147, r6906146, r6906123, MPFR_RNDN);
        mpfr_mul(r6906148, r6906145, r6906147, MPFR_RNDN);
        mpfr_add(r6906149, r6906144, r6906148, MPFR_RNDN);
        ;
        mpfr_mul(r6906151, r6906147, r6906123, MPFR_RNDN);
        mpfr_mul(r6906152, r6906151, r6906123, MPFR_RNDN);
        mpfr_mul(r6906153, r6906150, r6906152, MPFR_RNDN);
        mpfr_add(r6906154, r6906149, r6906153, MPFR_RNDN);
        return mpfr_get_d(r6906154, MPFR_RNDN);
}

static mpfr_t r6906155, r6906156, r6906157, r6906158, r6906159, r6906160, r6906161, r6906162, r6906163, r6906164, r6906165, r6906166, r6906167, r6906168, r6906169, r6906170, r6906171, r6906172, r6906173, r6906174, r6906175, r6906176, r6906177, r6906178, r6906179, r6906180, r6906181, r6906182, r6906183, r6906184, r6906185, r6906186, r6906187, r6906188, r6906189, r6906190, r6906191;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6906155);
        mpfr_init_set_str(r6906156, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6906157);
        mpfr_init_set_str(r6906158, "3", 10, MPFR_RNDN);
        mpfr_init(r6906159);
        mpfr_init(r6906160);
        mpfr_init_set_str(r6906161, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6906162);
        mpfr_init(r6906163);
        mpfr_init(r6906164);
        mpfr_init(r6906165);
        mpfr_init(r6906166);
        mpfr_init(r6906167);
        mpfr_init(r6906168);
        mpfr_init(r6906169);
        mpfr_init(r6906170);
        mpfr_init_set_str(r6906171, "9", 10, MPFR_RNDN);
        mpfr_init(r6906172);
        mpfr_init_set_str(r6906173, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6906174);
        mpfr_init_set_str(r6906175, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6906176);
        mpfr_init(r6906177);
        mpfr_init_set_str(r6906178, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6906179);
        mpfr_init(r6906180);
        mpfr_init(r6906181);
        mpfr_init(r6906182);
        mpfr_init_set_str(r6906183, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6906184);
        mpfr_init_set_str(r6906185, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r6906186);
        mpfr_init(r6906187);
        mpfr_init(r6906188);
        mpfr_init(r6906189);
        mpfr_init(r6906190);
        mpfr_init(r6906191);
}

double f_fm(double x) {
        mpfr_set_d(r6906155, x, MPFR_RNDN);
        ;
        mpfr_mul(r6906157, r6906155, r6906156, MPFR_RNDN);
        ;
        mpfr_pow(r6906159, r6906155, r6906158, MPFR_RNDN);
        mpfr_mul(r6906160, r6906159, r6906159, MPFR_RNDN);
        ;
        mpfr_mul(r6906162, r6906161, r6906155, MPFR_RNDN);
        mpfr_pow(r6906163, r6906162, r6906158, MPFR_RNDN);
        mpfr_mul(r6906164, r6906160, r6906163, MPFR_RNDN);
        mpfr_cbrt(r6906165, r6906164, MPFR_RNDN);
        mpfr_add(r6906166, r6906157, r6906165, MPFR_RNDN);
        mpfr_mul(r6906167, r6906155, r6906155, MPFR_RNDN);
        mpfr_mul(r6906168, r6906159, r6906167, MPFR_RNDN);
        mpfr_mul(r6906169, r6906168, r6906168, MPFR_RNDN);
        mpfr_mul(r6906170, r6906166, r6906169, MPFR_RNDN);
        ;
        mpfr_pow(r6906172, r6906155, r6906171, MPFR_RNDN);
        ;
        mpfr_mul(r6906174, r6906172, r6906173, MPFR_RNDN);
        ;
        mpfr_mul(r6906176, r6906175, r6906155, MPFR_RNDN);
        mpfr_mul(r6906177, r6906176, r6906167, MPFR_RNDN);
        ;
        mpfr_mul(r6906179, r6906155, r6906178, MPFR_RNDN);
        mpfr_add(r6906180, r6906177, r6906179, MPFR_RNDN);
        mpfr_add(r6906181, r6906174, r6906180, MPFR_RNDN);
        mpfr_mul(r6906182, r6906167, r6906167, MPFR_RNDN);
        ;
        mpfr_mul(r6906184, r6906183, r6906155, MPFR_RNDN);
        ;
        mpfr_mul(r6906186, r6906185, r6906155, MPFR_RNDN);
        mpfr_mul(r6906187, r6906167, r6906186, MPFR_RNDN);
        mpfr_add(r6906188, r6906184, r6906187, MPFR_RNDN);
        mpfr_mul(r6906189, r6906182, r6906188, MPFR_RNDN);
        mpfr_add(r6906190, r6906181, r6906189, MPFR_RNDN);
        mpfr_add(r6906191, r6906170, r6906190, MPFR_RNDN);
        return mpfr_get_d(r6906191, MPFR_RNDN);
}

static mpfr_t r6906192, r6906193, r6906194, r6906195, r6906196, r6906197, r6906198, r6906199, r6906200, r6906201, r6906202, r6906203, r6906204, r6906205, r6906206, r6906207, r6906208, r6906209, r6906210, r6906211, r6906212, r6906213, r6906214, r6906215, r6906216, r6906217, r6906218, r6906219, r6906220, r6906221, r6906222, r6906223, r6906224, r6906225, r6906226, r6906227, r6906228;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6906192);
        mpfr_init_set_str(r6906193, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r6906194);
        mpfr_init_set_str(r6906195, "3", 10, MPFR_RNDN);
        mpfr_init(r6906196);
        mpfr_init(r6906197);
        mpfr_init_set_str(r6906198, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r6906199);
        mpfr_init(r6906200);
        mpfr_init(r6906201);
        mpfr_init(r6906202);
        mpfr_init(r6906203);
        mpfr_init(r6906204);
        mpfr_init(r6906205);
        mpfr_init(r6906206);
        mpfr_init(r6906207);
        mpfr_init_set_str(r6906208, "9", 10, MPFR_RNDN);
        mpfr_init(r6906209);
        mpfr_init_set_str(r6906210, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r6906211);
        mpfr_init_set_str(r6906212, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r6906213);
        mpfr_init(r6906214);
        mpfr_init_set_str(r6906215, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r6906216);
        mpfr_init(r6906217);
        mpfr_init(r6906218);
        mpfr_init(r6906219);
        mpfr_init_set_str(r6906220, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r6906221);
        mpfr_init_set_str(r6906222, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r6906223);
        mpfr_init(r6906224);
        mpfr_init(r6906225);
        mpfr_init(r6906226);
        mpfr_init(r6906227);
        mpfr_init(r6906228);
}

double f_dm(double x) {
        mpfr_set_d(r6906192, x, MPFR_RNDN);
        ;
        mpfr_mul(r6906194, r6906192, r6906193, MPFR_RNDN);
        ;
        mpfr_pow(r6906196, r6906192, r6906195, MPFR_RNDN);
        mpfr_mul(r6906197, r6906196, r6906196, MPFR_RNDN);
        ;
        mpfr_mul(r6906199, r6906198, r6906192, MPFR_RNDN);
        mpfr_pow(r6906200, r6906199, r6906195, MPFR_RNDN);
        mpfr_mul(r6906201, r6906197, r6906200, MPFR_RNDN);
        mpfr_cbrt(r6906202, r6906201, MPFR_RNDN);
        mpfr_add(r6906203, r6906194, r6906202, MPFR_RNDN);
        mpfr_mul(r6906204, r6906192, r6906192, MPFR_RNDN);
        mpfr_mul(r6906205, r6906196, r6906204, MPFR_RNDN);
        mpfr_mul(r6906206, r6906205, r6906205, MPFR_RNDN);
        mpfr_mul(r6906207, r6906203, r6906206, MPFR_RNDN);
        ;
        mpfr_pow(r6906209, r6906192, r6906208, MPFR_RNDN);
        ;
        mpfr_mul(r6906211, r6906209, r6906210, MPFR_RNDN);
        ;
        mpfr_mul(r6906213, r6906212, r6906192, MPFR_RNDN);
        mpfr_mul(r6906214, r6906213, r6906204, MPFR_RNDN);
        ;
        mpfr_mul(r6906216, r6906192, r6906215, MPFR_RNDN);
        mpfr_add(r6906217, r6906214, r6906216, MPFR_RNDN);
        mpfr_add(r6906218, r6906211, r6906217, MPFR_RNDN);
        mpfr_mul(r6906219, r6906204, r6906204, MPFR_RNDN);
        ;
        mpfr_mul(r6906221, r6906220, r6906192, MPFR_RNDN);
        ;
        mpfr_mul(r6906223, r6906222, r6906192, MPFR_RNDN);
        mpfr_mul(r6906224, r6906204, r6906223, MPFR_RNDN);
        mpfr_add(r6906225, r6906221, r6906224, MPFR_RNDN);
        mpfr_mul(r6906226, r6906219, r6906225, MPFR_RNDN);
        mpfr_add(r6906227, r6906218, r6906226, MPFR_RNDN);
        mpfr_add(r6906228, r6906207, r6906227, MPFR_RNDN);
        return mpfr_get_d(r6906228, MPFR_RNDN);
}

