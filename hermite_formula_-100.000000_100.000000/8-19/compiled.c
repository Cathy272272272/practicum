#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "19";

double f_if(float x) {
        float r7079965 = -670442572800.0;
        float r7079966 = x;
        float r7079967 = r7079965 * r7079966;
        float r7079968 = 4022655436800.0;
        float r7079969 = r7079966 * r7079966;
        float r7079970 = r7079969 * r7079966;
        float r7079971 = r7079968 * r7079970;
        float r7079972 = r7079967 + r7079971;
        float r7079973 = -6436248698880.0;
        float r7079974 = r7079970 * r7079966;
        float r7079975 = r7079974 * r7079966;
        float r7079976 = r7079973 * r7079975;
        float r7079977 = r7079972 + r7079976;
        float r7079978 = 4290832465920.0;
        float r7079979 = r7079975 * r7079966;
        float r7079980 = r7079979 * r7079966;
        float r7079981 = r7079978 * r7079980;
        float r7079982 = r7079977 + r7079981;
        float r7079983 = -1430277488640.0;
        float r7079984 = r7079980 * r7079966;
        float r7079985 = r7079984 * r7079966;
        float r7079986 = r7079983 * r7079985;
        float r7079987 = r7079982 + r7079986;
        float r7079988 = 260050452480.0;
        float r7079989 = r7079985 * r7079966;
        float r7079990 = r7079989 * r7079966;
        float r7079991 = r7079988 * r7079990;
        float r7079992 = r7079987 + r7079991;
        float r7079993 = -26671841280.0;
        float r7079994 = r7079990 * r7079966;
        float r7079995 = r7079994 * r7079966;
        float r7079996 = r7079993 * r7079995;
        float r7079997 = r7079992 + r7079996;
        float r7079998 = 1524105216.0;
        float r7079999 = r7079995 * r7079966;
        float r7080000 = r7079999 * r7079966;
        float r7080001 = r7079998 * r7080000;
        float r7080002 = r7079997 + r7080001;
        float r7080003 = -44826624.0;
        float r7080004 = r7080000 * r7079966;
        float r7080005 = r7080004 * r7079966;
        float r7080006 = r7080003 * r7080005;
        float r7080007 = r7080002 + r7080006;
        float r7080008 = 524288.0;
        float r7080009 = r7080005 * r7079966;
        float r7080010 = r7080009 * r7079966;
        float r7080011 = r7080008 * r7080010;
        float r7080012 = r7080007 + r7080011;
        return r7080012;
}

double f_id(double x) {
        double r7080013 = -670442572800.0;
        double r7080014 = x;
        double r7080015 = r7080013 * r7080014;
        double r7080016 = 4022655436800.0;
        double r7080017 = r7080014 * r7080014;
        double r7080018 = r7080017 * r7080014;
        double r7080019 = r7080016 * r7080018;
        double r7080020 = r7080015 + r7080019;
        double r7080021 = -6436248698880.0;
        double r7080022 = r7080018 * r7080014;
        double r7080023 = r7080022 * r7080014;
        double r7080024 = r7080021 * r7080023;
        double r7080025 = r7080020 + r7080024;
        double r7080026 = 4290832465920.0;
        double r7080027 = r7080023 * r7080014;
        double r7080028 = r7080027 * r7080014;
        double r7080029 = r7080026 * r7080028;
        double r7080030 = r7080025 + r7080029;
        double r7080031 = -1430277488640.0;
        double r7080032 = r7080028 * r7080014;
        double r7080033 = r7080032 * r7080014;
        double r7080034 = r7080031 * r7080033;
        double r7080035 = r7080030 + r7080034;
        double r7080036 = 260050452480.0;
        double r7080037 = r7080033 * r7080014;
        double r7080038 = r7080037 * r7080014;
        double r7080039 = r7080036 * r7080038;
        double r7080040 = r7080035 + r7080039;
        double r7080041 = -26671841280.0;
        double r7080042 = r7080038 * r7080014;
        double r7080043 = r7080042 * r7080014;
        double r7080044 = r7080041 * r7080043;
        double r7080045 = r7080040 + r7080044;
        double r7080046 = 1524105216.0;
        double r7080047 = r7080043 * r7080014;
        double r7080048 = r7080047 * r7080014;
        double r7080049 = r7080046 * r7080048;
        double r7080050 = r7080045 + r7080049;
        double r7080051 = -44826624.0;
        double r7080052 = r7080048 * r7080014;
        double r7080053 = r7080052 * r7080014;
        double r7080054 = r7080051 * r7080053;
        double r7080055 = r7080050 + r7080054;
        double r7080056 = 524288.0;
        double r7080057 = r7080053 * r7080014;
        double r7080058 = r7080057 * r7080014;
        double r7080059 = r7080056 * r7080058;
        double r7080060 = r7080055 + r7080059;
        return r7080060;
}


double f_of(float x) {
        float r7080061 = x;
        float r7080062 = r7080061 * r7080061;
        float r7080063 = r7080062 * r7080062;
        float r7080064 = 3;
        float r7080065 = pow(r7080061, r7080064);
        float r7080066 = r7080065 * r7080065;
        float r7080067 = r7080065 * r7080066;
        float r7080068 = r7080063 * r7080067;
        float r7080069 = 1524105216.0;
        float r7080070 = r7080069 * r7080061;
        float r7080071 = r7080061 * r7080070;
        float r7080072 = -26671841280.0;
        float r7080073 = r7080071 + r7080072;
        float r7080074 = r7080068 * r7080073;
        float r7080075 = r7080066 * r7080063;
        float r7080076 = r7080075 * r7080063;
        float r7080077 = r7080065 * r7080076;
        float r7080078 = 524288.0;
        float r7080079 = r7080078 * r7080061;
        float r7080080 = r7080061 * r7080079;
        float r7080081 = -44826624.0;
        float r7080082 = r7080080 + r7080081;
        float r7080083 = r7080077 * r7080082;
        float r7080084 = r7080074 + r7080083;
        float r7080085 = pow(r7080062, r7080064);
        float r7080086 = -1430277488640.0;
        float r7080087 = 260050452480.0;
        float r7080088 = r7080061 * r7080087;
        float r7080089 = r7080088 * r7080061;
        float r7080090 = r7080086 + r7080089;
        float r7080091 = r7080085 * r7080090;
        float r7080092 = r7080065 * r7080091;
        float r7080093 = -670442572800.0;
        float r7080094 = r7080093 * r7080061;
        float r7080095 = r7080092 + r7080094;
        float r7080096 = -6436248698880.0;
        float r7080097 = r7080061 * r7080096;
        float r7080098 = r7080097 * r7080062;
        float r7080099 = 4022655436800.0;
        float r7080100 = r7080099 * r7080061;
        float r7080101 = r7080098 + r7080100;
        float r7080102 = r7080062 * r7080101;
        float r7080103 = 4290832465920.0;
        float r7080104 = r7080103 * r7080061;
        float r7080105 = r7080104 * r7080062;
        float r7080106 = r7080105 * r7080063;
        float r7080107 = r7080102 + r7080106;
        float r7080108 = r7080095 + r7080107;
        float r7080109 = r7080084 + r7080108;
        return r7080109;
}

double f_od(double x) {
        double r7080110 = x;
        double r7080111 = r7080110 * r7080110;
        double r7080112 = r7080111 * r7080111;
        double r7080113 = 3;
        double r7080114 = pow(r7080110, r7080113);
        double r7080115 = r7080114 * r7080114;
        double r7080116 = r7080114 * r7080115;
        double r7080117 = r7080112 * r7080116;
        double r7080118 = 1524105216.0;
        double r7080119 = r7080118 * r7080110;
        double r7080120 = r7080110 * r7080119;
        double r7080121 = -26671841280.0;
        double r7080122 = r7080120 + r7080121;
        double r7080123 = r7080117 * r7080122;
        double r7080124 = r7080115 * r7080112;
        double r7080125 = r7080124 * r7080112;
        double r7080126 = r7080114 * r7080125;
        double r7080127 = 524288.0;
        double r7080128 = r7080127 * r7080110;
        double r7080129 = r7080110 * r7080128;
        double r7080130 = -44826624.0;
        double r7080131 = r7080129 + r7080130;
        double r7080132 = r7080126 * r7080131;
        double r7080133 = r7080123 + r7080132;
        double r7080134 = pow(r7080111, r7080113);
        double r7080135 = -1430277488640.0;
        double r7080136 = 260050452480.0;
        double r7080137 = r7080110 * r7080136;
        double r7080138 = r7080137 * r7080110;
        double r7080139 = r7080135 + r7080138;
        double r7080140 = r7080134 * r7080139;
        double r7080141 = r7080114 * r7080140;
        double r7080142 = -670442572800.0;
        double r7080143 = r7080142 * r7080110;
        double r7080144 = r7080141 + r7080143;
        double r7080145 = -6436248698880.0;
        double r7080146 = r7080110 * r7080145;
        double r7080147 = r7080146 * r7080111;
        double r7080148 = 4022655436800.0;
        double r7080149 = r7080148 * r7080110;
        double r7080150 = r7080147 + r7080149;
        double r7080151 = r7080111 * r7080150;
        double r7080152 = 4290832465920.0;
        double r7080153 = r7080152 * r7080110;
        double r7080154 = r7080153 * r7080111;
        double r7080155 = r7080154 * r7080112;
        double r7080156 = r7080151 + r7080155;
        double r7080157 = r7080144 + r7080156;
        double r7080158 = r7080133 + r7080157;
        return r7080158;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7080159, r7080160, r7080161, r7080162, r7080163, r7080164, r7080165, r7080166, r7080167, r7080168, r7080169, r7080170, r7080171, r7080172, r7080173, r7080174, r7080175, r7080176, r7080177, r7080178, r7080179, r7080180, r7080181, r7080182, r7080183, r7080184, r7080185, r7080186, r7080187, r7080188, r7080189, r7080190, r7080191, r7080192, r7080193, r7080194, r7080195, r7080196, r7080197, r7080198, r7080199, r7080200, r7080201, r7080202, r7080203, r7080204, r7080205, r7080206;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7080159, "-670442572800.0", 10, MPFR_RNDN);
        mpfr_init(r7080160);
        mpfr_init(r7080161);
        mpfr_init_set_str(r7080162, "4022655436800.0", 10, MPFR_RNDN);
        mpfr_init(r7080163);
        mpfr_init(r7080164);
        mpfr_init(r7080165);
        mpfr_init(r7080166);
        mpfr_init_set_str(r7080167, "-6436248698880.0", 10, MPFR_RNDN);
        mpfr_init(r7080168);
        mpfr_init(r7080169);
        mpfr_init(r7080170);
        mpfr_init(r7080171);
        mpfr_init_set_str(r7080172, "4290832465920.0", 10, MPFR_RNDN);
        mpfr_init(r7080173);
        mpfr_init(r7080174);
        mpfr_init(r7080175);
        mpfr_init(r7080176);
        mpfr_init_set_str(r7080177, "-1430277488640.0", 10, MPFR_RNDN);
        mpfr_init(r7080178);
        mpfr_init(r7080179);
        mpfr_init(r7080180);
        mpfr_init(r7080181);
        mpfr_init_set_str(r7080182, "260050452480.0", 10, MPFR_RNDN);
        mpfr_init(r7080183);
        mpfr_init(r7080184);
        mpfr_init(r7080185);
        mpfr_init(r7080186);
        mpfr_init_set_str(r7080187, "-26671841280.0", 10, MPFR_RNDN);
        mpfr_init(r7080188);
        mpfr_init(r7080189);
        mpfr_init(r7080190);
        mpfr_init(r7080191);
        mpfr_init_set_str(r7080192, "1524105216.0", 10, MPFR_RNDN);
        mpfr_init(r7080193);
        mpfr_init(r7080194);
        mpfr_init(r7080195);
        mpfr_init(r7080196);
        mpfr_init_set_str(r7080197, "-44826624.0", 10, MPFR_RNDN);
        mpfr_init(r7080198);
        mpfr_init(r7080199);
        mpfr_init(r7080200);
        mpfr_init(r7080201);
        mpfr_init_set_str(r7080202, "524288.0", 10, MPFR_RNDN);
        mpfr_init(r7080203);
        mpfr_init(r7080204);
        mpfr_init(r7080205);
        mpfr_init(r7080206);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7080160, x, MPFR_RNDN);
        mpfr_mul(r7080161, r7080159, r7080160, MPFR_RNDN);
        ;
        mpfr_mul(r7080163, r7080160, r7080160, MPFR_RNDN);
        mpfr_mul(r7080164, r7080163, r7080160, MPFR_RNDN);
        mpfr_mul(r7080165, r7080162, r7080164, MPFR_RNDN);
        mpfr_add(r7080166, r7080161, r7080165, MPFR_RNDN);
        ;
        mpfr_mul(r7080168, r7080164, r7080160, MPFR_RNDN);
        mpfr_mul(r7080169, r7080168, r7080160, MPFR_RNDN);
        mpfr_mul(r7080170, r7080167, r7080169, MPFR_RNDN);
        mpfr_add(r7080171, r7080166, r7080170, MPFR_RNDN);
        ;
        mpfr_mul(r7080173, r7080169, r7080160, MPFR_RNDN);
        mpfr_mul(r7080174, r7080173, r7080160, MPFR_RNDN);
        mpfr_mul(r7080175, r7080172, r7080174, MPFR_RNDN);
        mpfr_add(r7080176, r7080171, r7080175, MPFR_RNDN);
        ;
        mpfr_mul(r7080178, r7080174, r7080160, MPFR_RNDN);
        mpfr_mul(r7080179, r7080178, r7080160, MPFR_RNDN);
        mpfr_mul(r7080180, r7080177, r7080179, MPFR_RNDN);
        mpfr_add(r7080181, r7080176, r7080180, MPFR_RNDN);
        ;
        mpfr_mul(r7080183, r7080179, r7080160, MPFR_RNDN);
        mpfr_mul(r7080184, r7080183, r7080160, MPFR_RNDN);
        mpfr_mul(r7080185, r7080182, r7080184, MPFR_RNDN);
        mpfr_add(r7080186, r7080181, r7080185, MPFR_RNDN);
        ;
        mpfr_mul(r7080188, r7080184, r7080160, MPFR_RNDN);
        mpfr_mul(r7080189, r7080188, r7080160, MPFR_RNDN);
        mpfr_mul(r7080190, r7080187, r7080189, MPFR_RNDN);
        mpfr_add(r7080191, r7080186, r7080190, MPFR_RNDN);
        ;
        mpfr_mul(r7080193, r7080189, r7080160, MPFR_RNDN);
        mpfr_mul(r7080194, r7080193, r7080160, MPFR_RNDN);
        mpfr_mul(r7080195, r7080192, r7080194, MPFR_RNDN);
        mpfr_add(r7080196, r7080191, r7080195, MPFR_RNDN);
        ;
        mpfr_mul(r7080198, r7080194, r7080160, MPFR_RNDN);
        mpfr_mul(r7080199, r7080198, r7080160, MPFR_RNDN);
        mpfr_mul(r7080200, r7080197, r7080199, MPFR_RNDN);
        mpfr_add(r7080201, r7080196, r7080200, MPFR_RNDN);
        ;
        mpfr_mul(r7080203, r7080199, r7080160, MPFR_RNDN);
        mpfr_mul(r7080204, r7080203, r7080160, MPFR_RNDN);
        mpfr_mul(r7080205, r7080202, r7080204, MPFR_RNDN);
        mpfr_add(r7080206, r7080201, r7080205, MPFR_RNDN);
        return mpfr_get_d(r7080206, MPFR_RNDN);
}

static mpfr_t r7080207, r7080208, r7080209, r7080210, r7080211, r7080212, r7080213, r7080214, r7080215, r7080216, r7080217, r7080218, r7080219, r7080220, r7080221, r7080222, r7080223, r7080224, r7080225, r7080226, r7080227, r7080228, r7080229, r7080230, r7080231, r7080232, r7080233, r7080234, r7080235, r7080236, r7080237, r7080238, r7080239, r7080240, r7080241, r7080242, r7080243, r7080244, r7080245, r7080246, r7080247, r7080248, r7080249, r7080250, r7080251, r7080252, r7080253, r7080254, r7080255;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7080207);
        mpfr_init(r7080208);
        mpfr_init(r7080209);
        mpfr_init_set_str(r7080210, "3", 10, MPFR_RNDN);
        mpfr_init(r7080211);
        mpfr_init(r7080212);
        mpfr_init(r7080213);
        mpfr_init(r7080214);
        mpfr_init_set_str(r7080215, "1524105216.0", 10, MPFR_RNDN);
        mpfr_init(r7080216);
        mpfr_init(r7080217);
        mpfr_init_set_str(r7080218, "-26671841280.0", 10, MPFR_RNDN);
        mpfr_init(r7080219);
        mpfr_init(r7080220);
        mpfr_init(r7080221);
        mpfr_init(r7080222);
        mpfr_init(r7080223);
        mpfr_init_set_str(r7080224, "524288.0", 10, MPFR_RNDN);
        mpfr_init(r7080225);
        mpfr_init(r7080226);
        mpfr_init_set_str(r7080227, "-44826624.0", 10, MPFR_RNDN);
        mpfr_init(r7080228);
        mpfr_init(r7080229);
        mpfr_init(r7080230);
        mpfr_init(r7080231);
        mpfr_init_set_str(r7080232, "-1430277488640.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7080233, "260050452480.0", 10, MPFR_RNDN);
        mpfr_init(r7080234);
        mpfr_init(r7080235);
        mpfr_init(r7080236);
        mpfr_init(r7080237);
        mpfr_init(r7080238);
        mpfr_init_set_str(r7080239, "-670442572800.0", 10, MPFR_RNDN);
        mpfr_init(r7080240);
        mpfr_init(r7080241);
        mpfr_init_set_str(r7080242, "-6436248698880.0", 10, MPFR_RNDN);
        mpfr_init(r7080243);
        mpfr_init(r7080244);
        mpfr_init_set_str(r7080245, "4022655436800.0", 10, MPFR_RNDN);
        mpfr_init(r7080246);
        mpfr_init(r7080247);
        mpfr_init(r7080248);
        mpfr_init_set_str(r7080249, "4290832465920.0", 10, MPFR_RNDN);
        mpfr_init(r7080250);
        mpfr_init(r7080251);
        mpfr_init(r7080252);
        mpfr_init(r7080253);
        mpfr_init(r7080254);
        mpfr_init(r7080255);
}

double f_fm(double x) {
        mpfr_set_d(r7080207, x, MPFR_RNDN);
        mpfr_mul(r7080208, r7080207, r7080207, MPFR_RNDN);
        mpfr_mul(r7080209, r7080208, r7080208, MPFR_RNDN);
        ;
        mpfr_pow(r7080211, r7080207, r7080210, MPFR_RNDN);
        mpfr_mul(r7080212, r7080211, r7080211, MPFR_RNDN);
        mpfr_mul(r7080213, r7080211, r7080212, MPFR_RNDN);
        mpfr_mul(r7080214, r7080209, r7080213, MPFR_RNDN);
        ;
        mpfr_mul(r7080216, r7080215, r7080207, MPFR_RNDN);
        mpfr_mul(r7080217, r7080207, r7080216, MPFR_RNDN);
        ;
        mpfr_add(r7080219, r7080217, r7080218, MPFR_RNDN);
        mpfr_mul(r7080220, r7080214, r7080219, MPFR_RNDN);
        mpfr_mul(r7080221, r7080212, r7080209, MPFR_RNDN);
        mpfr_mul(r7080222, r7080221, r7080209, MPFR_RNDN);
        mpfr_mul(r7080223, r7080211, r7080222, MPFR_RNDN);
        ;
        mpfr_mul(r7080225, r7080224, r7080207, MPFR_RNDN);
        mpfr_mul(r7080226, r7080207, r7080225, MPFR_RNDN);
        ;
        mpfr_add(r7080228, r7080226, r7080227, MPFR_RNDN);
        mpfr_mul(r7080229, r7080223, r7080228, MPFR_RNDN);
        mpfr_add(r7080230, r7080220, r7080229, MPFR_RNDN);
        mpfr_pow(r7080231, r7080208, r7080210, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7080234, r7080207, r7080233, MPFR_RNDN);
        mpfr_mul(r7080235, r7080234, r7080207, MPFR_RNDN);
        mpfr_add(r7080236, r7080232, r7080235, MPFR_RNDN);
        mpfr_mul(r7080237, r7080231, r7080236, MPFR_RNDN);
        mpfr_mul(r7080238, r7080211, r7080237, MPFR_RNDN);
        ;
        mpfr_mul(r7080240, r7080239, r7080207, MPFR_RNDN);
        mpfr_add(r7080241, r7080238, r7080240, MPFR_RNDN);
        ;
        mpfr_mul(r7080243, r7080207, r7080242, MPFR_RNDN);
        mpfr_mul(r7080244, r7080243, r7080208, MPFR_RNDN);
        ;
        mpfr_mul(r7080246, r7080245, r7080207, MPFR_RNDN);
        mpfr_add(r7080247, r7080244, r7080246, MPFR_RNDN);
        mpfr_mul(r7080248, r7080208, r7080247, MPFR_RNDN);
        ;
        mpfr_mul(r7080250, r7080249, r7080207, MPFR_RNDN);
        mpfr_mul(r7080251, r7080250, r7080208, MPFR_RNDN);
        mpfr_mul(r7080252, r7080251, r7080209, MPFR_RNDN);
        mpfr_add(r7080253, r7080248, r7080252, MPFR_RNDN);
        mpfr_add(r7080254, r7080241, r7080253, MPFR_RNDN);
        mpfr_add(r7080255, r7080230, r7080254, MPFR_RNDN);
        return mpfr_get_d(r7080255, MPFR_RNDN);
}

static mpfr_t r7080256, r7080257, r7080258, r7080259, r7080260, r7080261, r7080262, r7080263, r7080264, r7080265, r7080266, r7080267, r7080268, r7080269, r7080270, r7080271, r7080272, r7080273, r7080274, r7080275, r7080276, r7080277, r7080278, r7080279, r7080280, r7080281, r7080282, r7080283, r7080284, r7080285, r7080286, r7080287, r7080288, r7080289, r7080290, r7080291, r7080292, r7080293, r7080294, r7080295, r7080296, r7080297, r7080298, r7080299, r7080300, r7080301, r7080302, r7080303, r7080304;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7080256);
        mpfr_init(r7080257);
        mpfr_init(r7080258);
        mpfr_init_set_str(r7080259, "3", 10, MPFR_RNDN);
        mpfr_init(r7080260);
        mpfr_init(r7080261);
        mpfr_init(r7080262);
        mpfr_init(r7080263);
        mpfr_init_set_str(r7080264, "1524105216.0", 10, MPFR_RNDN);
        mpfr_init(r7080265);
        mpfr_init(r7080266);
        mpfr_init_set_str(r7080267, "-26671841280.0", 10, MPFR_RNDN);
        mpfr_init(r7080268);
        mpfr_init(r7080269);
        mpfr_init(r7080270);
        mpfr_init(r7080271);
        mpfr_init(r7080272);
        mpfr_init_set_str(r7080273, "524288.0", 10, MPFR_RNDN);
        mpfr_init(r7080274);
        mpfr_init(r7080275);
        mpfr_init_set_str(r7080276, "-44826624.0", 10, MPFR_RNDN);
        mpfr_init(r7080277);
        mpfr_init(r7080278);
        mpfr_init(r7080279);
        mpfr_init(r7080280);
        mpfr_init_set_str(r7080281, "-1430277488640.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7080282, "260050452480.0", 10, MPFR_RNDN);
        mpfr_init(r7080283);
        mpfr_init(r7080284);
        mpfr_init(r7080285);
        mpfr_init(r7080286);
        mpfr_init(r7080287);
        mpfr_init_set_str(r7080288, "-670442572800.0", 10, MPFR_RNDN);
        mpfr_init(r7080289);
        mpfr_init(r7080290);
        mpfr_init_set_str(r7080291, "-6436248698880.0", 10, MPFR_RNDN);
        mpfr_init(r7080292);
        mpfr_init(r7080293);
        mpfr_init_set_str(r7080294, "4022655436800.0", 10, MPFR_RNDN);
        mpfr_init(r7080295);
        mpfr_init(r7080296);
        mpfr_init(r7080297);
        mpfr_init_set_str(r7080298, "4290832465920.0", 10, MPFR_RNDN);
        mpfr_init(r7080299);
        mpfr_init(r7080300);
        mpfr_init(r7080301);
        mpfr_init(r7080302);
        mpfr_init(r7080303);
        mpfr_init(r7080304);
}

double f_dm(double x) {
        mpfr_set_d(r7080256, x, MPFR_RNDN);
        mpfr_mul(r7080257, r7080256, r7080256, MPFR_RNDN);
        mpfr_mul(r7080258, r7080257, r7080257, MPFR_RNDN);
        ;
        mpfr_pow(r7080260, r7080256, r7080259, MPFR_RNDN);
        mpfr_mul(r7080261, r7080260, r7080260, MPFR_RNDN);
        mpfr_mul(r7080262, r7080260, r7080261, MPFR_RNDN);
        mpfr_mul(r7080263, r7080258, r7080262, MPFR_RNDN);
        ;
        mpfr_mul(r7080265, r7080264, r7080256, MPFR_RNDN);
        mpfr_mul(r7080266, r7080256, r7080265, MPFR_RNDN);
        ;
        mpfr_add(r7080268, r7080266, r7080267, MPFR_RNDN);
        mpfr_mul(r7080269, r7080263, r7080268, MPFR_RNDN);
        mpfr_mul(r7080270, r7080261, r7080258, MPFR_RNDN);
        mpfr_mul(r7080271, r7080270, r7080258, MPFR_RNDN);
        mpfr_mul(r7080272, r7080260, r7080271, MPFR_RNDN);
        ;
        mpfr_mul(r7080274, r7080273, r7080256, MPFR_RNDN);
        mpfr_mul(r7080275, r7080256, r7080274, MPFR_RNDN);
        ;
        mpfr_add(r7080277, r7080275, r7080276, MPFR_RNDN);
        mpfr_mul(r7080278, r7080272, r7080277, MPFR_RNDN);
        mpfr_add(r7080279, r7080269, r7080278, MPFR_RNDN);
        mpfr_pow(r7080280, r7080257, r7080259, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7080283, r7080256, r7080282, MPFR_RNDN);
        mpfr_mul(r7080284, r7080283, r7080256, MPFR_RNDN);
        mpfr_add(r7080285, r7080281, r7080284, MPFR_RNDN);
        mpfr_mul(r7080286, r7080280, r7080285, MPFR_RNDN);
        mpfr_mul(r7080287, r7080260, r7080286, MPFR_RNDN);
        ;
        mpfr_mul(r7080289, r7080288, r7080256, MPFR_RNDN);
        mpfr_add(r7080290, r7080287, r7080289, MPFR_RNDN);
        ;
        mpfr_mul(r7080292, r7080256, r7080291, MPFR_RNDN);
        mpfr_mul(r7080293, r7080292, r7080257, MPFR_RNDN);
        ;
        mpfr_mul(r7080295, r7080294, r7080256, MPFR_RNDN);
        mpfr_add(r7080296, r7080293, r7080295, MPFR_RNDN);
        mpfr_mul(r7080297, r7080257, r7080296, MPFR_RNDN);
        ;
        mpfr_mul(r7080299, r7080298, r7080256, MPFR_RNDN);
        mpfr_mul(r7080300, r7080299, r7080257, MPFR_RNDN);
        mpfr_mul(r7080301, r7080300, r7080258, MPFR_RNDN);
        mpfr_add(r7080302, r7080297, r7080301, MPFR_RNDN);
        mpfr_add(r7080303, r7080290, r7080302, MPFR_RNDN);
        mpfr_add(r7080304, r7080279, r7080303, MPFR_RNDN);
        return mpfr_get_d(r7080304, MPFR_RNDN);
}

