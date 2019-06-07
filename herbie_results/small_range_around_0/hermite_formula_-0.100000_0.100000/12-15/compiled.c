#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r6328048 = -518918400.0;
        float r6328049 = x;
        float r6328050 = r6328048 * r6328049;
        float r6328051 = 2421619200.0;
        float r6328052 = r6328049 * r6328049;
        float r6328053 = r6328052 * r6328049;
        float r6328054 = r6328051 * r6328053;
        float r6328055 = r6328050 + r6328054;
        float r6328056 = -2905943040.0;
        float r6328057 = r6328053 * r6328049;
        float r6328058 = r6328057 * r6328049;
        float r6328059 = r6328056 * r6328058;
        float r6328060 = r6328055 + r6328059;
        float r6328061 = 1383782400.0;
        float r6328062 = r6328058 * r6328049;
        float r6328063 = r6328062 * r6328049;
        float r6328064 = r6328061 * r6328063;
        float r6328065 = r6328060 + r6328064;
        float r6328066 = -307507200.0;
        float r6328067 = r6328063 * r6328049;
        float r6328068 = r6328067 * r6328049;
        float r6328069 = r6328066 * r6328068;
        float r6328070 = r6328065 + r6328069;
        float r6328071 = 33546240.0;
        float r6328072 = r6328068 * r6328049;
        float r6328073 = r6328072 * r6328049;
        float r6328074 = r6328071 * r6328073;
        float r6328075 = r6328070 + r6328074;
        float r6328076 = -1720320.0;
        float r6328077 = r6328073 * r6328049;
        float r6328078 = r6328077 * r6328049;
        float r6328079 = r6328076 * r6328078;
        float r6328080 = r6328075 + r6328079;
        float r6328081 = 32768.0;
        float r6328082 = r6328078 * r6328049;
        float r6328083 = r6328082 * r6328049;
        float r6328084 = r6328081 * r6328083;
        float r6328085 = r6328080 + r6328084;
        return r6328085;
}

double f_id(double x) {
        double r6328086 = -518918400.0;
        double r6328087 = x;
        double r6328088 = r6328086 * r6328087;
        double r6328089 = 2421619200.0;
        double r6328090 = r6328087 * r6328087;
        double r6328091 = r6328090 * r6328087;
        double r6328092 = r6328089 * r6328091;
        double r6328093 = r6328088 + r6328092;
        double r6328094 = -2905943040.0;
        double r6328095 = r6328091 * r6328087;
        double r6328096 = r6328095 * r6328087;
        double r6328097 = r6328094 * r6328096;
        double r6328098 = r6328093 + r6328097;
        double r6328099 = 1383782400.0;
        double r6328100 = r6328096 * r6328087;
        double r6328101 = r6328100 * r6328087;
        double r6328102 = r6328099 * r6328101;
        double r6328103 = r6328098 + r6328102;
        double r6328104 = -307507200.0;
        double r6328105 = r6328101 * r6328087;
        double r6328106 = r6328105 * r6328087;
        double r6328107 = r6328104 * r6328106;
        double r6328108 = r6328103 + r6328107;
        double r6328109 = 33546240.0;
        double r6328110 = r6328106 * r6328087;
        double r6328111 = r6328110 * r6328087;
        double r6328112 = r6328109 * r6328111;
        double r6328113 = r6328108 + r6328112;
        double r6328114 = -1720320.0;
        double r6328115 = r6328111 * r6328087;
        double r6328116 = r6328115 * r6328087;
        double r6328117 = r6328114 * r6328116;
        double r6328118 = r6328113 + r6328117;
        double r6328119 = 32768.0;
        double r6328120 = r6328116 * r6328087;
        double r6328121 = r6328120 * r6328087;
        double r6328122 = r6328119 * r6328121;
        double r6328123 = r6328118 + r6328122;
        return r6328123;
}


double f_of(float x) {
        float r6328124 = x;
        float r6328125 = r6328124 * r6328124;
        float r6328126 = r6328125 * r6328125;
        float r6328127 = 3;
        float r6328128 = pow(r6328124, r6328127);
        float r6328129 = r6328128 * r6328128;
        float r6328130 = r6328128 * r6328129;
        float r6328131 = r6328126 * r6328130;
        float r6328132 = 32768.0;
        float r6328133 = r6328132 * r6328124;
        float r6328134 = r6328124 * r6328133;
        float r6328135 = -1720320.0;
        float r6328136 = r6328134 + r6328135;
        float r6328137 = r6328131 * r6328136;
        float r6328138 = 1383782400.0;
        float r6328139 = r6328138 * r6328124;
        float r6328140 = r6328139 * r6328125;
        float r6328141 = r6328140 * r6328126;
        float r6328142 = -518918400.0;
        float r6328143 = r6328142 * r6328124;
        float r6328144 = r6328141 + r6328143;
        float r6328145 = -2905943040.0;
        float r6328146 = r6328124 * r6328145;
        float r6328147 = r6328146 * r6328125;
        float r6328148 = 2421619200.0;
        float r6328149 = r6328148 * r6328124;
        float r6328150 = r6328147 + r6328149;
        float r6328151 = r6328125 * r6328150;
        float r6328152 = r6328144 + r6328151;
        float r6328153 = r6328137 + r6328152;
        float r6328154 = -307507200.0;
        float r6328155 = 33546240.0;
        float r6328156 = r6328124 * r6328155;
        float r6328157 = r6328124 * r6328156;
        float r6328158 = r6328154 + r6328157;
        float r6328159 = r6328130 * r6328158;
        float r6328160 = r6328153 + r6328159;
        return r6328160;
}

double f_od(double x) {
        double r6328161 = x;
        double r6328162 = r6328161 * r6328161;
        double r6328163 = r6328162 * r6328162;
        double r6328164 = 3;
        double r6328165 = pow(r6328161, r6328164);
        double r6328166 = r6328165 * r6328165;
        double r6328167 = r6328165 * r6328166;
        double r6328168 = r6328163 * r6328167;
        double r6328169 = 32768.0;
        double r6328170 = r6328169 * r6328161;
        double r6328171 = r6328161 * r6328170;
        double r6328172 = -1720320.0;
        double r6328173 = r6328171 + r6328172;
        double r6328174 = r6328168 * r6328173;
        double r6328175 = 1383782400.0;
        double r6328176 = r6328175 * r6328161;
        double r6328177 = r6328176 * r6328162;
        double r6328178 = r6328177 * r6328163;
        double r6328179 = -518918400.0;
        double r6328180 = r6328179 * r6328161;
        double r6328181 = r6328178 + r6328180;
        double r6328182 = -2905943040.0;
        double r6328183 = r6328161 * r6328182;
        double r6328184 = r6328183 * r6328162;
        double r6328185 = 2421619200.0;
        double r6328186 = r6328185 * r6328161;
        double r6328187 = r6328184 + r6328186;
        double r6328188 = r6328162 * r6328187;
        double r6328189 = r6328181 + r6328188;
        double r6328190 = r6328174 + r6328189;
        double r6328191 = -307507200.0;
        double r6328192 = 33546240.0;
        double r6328193 = r6328161 * r6328192;
        double r6328194 = r6328161 * r6328193;
        double r6328195 = r6328191 + r6328194;
        double r6328196 = r6328167 * r6328195;
        double r6328197 = r6328190 + r6328196;
        return r6328197;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6328198, r6328199, r6328200, r6328201, r6328202, r6328203, r6328204, r6328205, r6328206, r6328207, r6328208, r6328209, r6328210, r6328211, r6328212, r6328213, r6328214, r6328215, r6328216, r6328217, r6328218, r6328219, r6328220, r6328221, r6328222, r6328223, r6328224, r6328225, r6328226, r6328227, r6328228, r6328229, r6328230, r6328231, r6328232, r6328233, r6328234, r6328235;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6328198, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r6328199);
        mpfr_init(r6328200);
        mpfr_init_set_str(r6328201, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r6328202);
        mpfr_init(r6328203);
        mpfr_init(r6328204);
        mpfr_init(r6328205);
        mpfr_init_set_str(r6328206, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r6328207);
        mpfr_init(r6328208);
        mpfr_init(r6328209);
        mpfr_init(r6328210);
        mpfr_init_set_str(r6328211, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r6328212);
        mpfr_init(r6328213);
        mpfr_init(r6328214);
        mpfr_init(r6328215);
        mpfr_init_set_str(r6328216, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init(r6328217);
        mpfr_init(r6328218);
        mpfr_init(r6328219);
        mpfr_init(r6328220);
        mpfr_init_set_str(r6328221, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r6328222);
        mpfr_init(r6328223);
        mpfr_init(r6328224);
        mpfr_init(r6328225);
        mpfr_init_set_str(r6328226, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r6328227);
        mpfr_init(r6328228);
        mpfr_init(r6328229);
        mpfr_init(r6328230);
        mpfr_init_set_str(r6328231, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r6328232);
        mpfr_init(r6328233);
        mpfr_init(r6328234);
        mpfr_init(r6328235);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6328199, x, MPFR_RNDN);
        mpfr_mul(r6328200, r6328198, r6328199, MPFR_RNDN);
        ;
        mpfr_mul(r6328202, r6328199, r6328199, MPFR_RNDN);
        mpfr_mul(r6328203, r6328202, r6328199, MPFR_RNDN);
        mpfr_mul(r6328204, r6328201, r6328203, MPFR_RNDN);
        mpfr_add(r6328205, r6328200, r6328204, MPFR_RNDN);
        ;
        mpfr_mul(r6328207, r6328203, r6328199, MPFR_RNDN);
        mpfr_mul(r6328208, r6328207, r6328199, MPFR_RNDN);
        mpfr_mul(r6328209, r6328206, r6328208, MPFR_RNDN);
        mpfr_add(r6328210, r6328205, r6328209, MPFR_RNDN);
        ;
        mpfr_mul(r6328212, r6328208, r6328199, MPFR_RNDN);
        mpfr_mul(r6328213, r6328212, r6328199, MPFR_RNDN);
        mpfr_mul(r6328214, r6328211, r6328213, MPFR_RNDN);
        mpfr_add(r6328215, r6328210, r6328214, MPFR_RNDN);
        ;
        mpfr_mul(r6328217, r6328213, r6328199, MPFR_RNDN);
        mpfr_mul(r6328218, r6328217, r6328199, MPFR_RNDN);
        mpfr_mul(r6328219, r6328216, r6328218, MPFR_RNDN);
        mpfr_add(r6328220, r6328215, r6328219, MPFR_RNDN);
        ;
        mpfr_mul(r6328222, r6328218, r6328199, MPFR_RNDN);
        mpfr_mul(r6328223, r6328222, r6328199, MPFR_RNDN);
        mpfr_mul(r6328224, r6328221, r6328223, MPFR_RNDN);
        mpfr_add(r6328225, r6328220, r6328224, MPFR_RNDN);
        ;
        mpfr_mul(r6328227, r6328223, r6328199, MPFR_RNDN);
        mpfr_mul(r6328228, r6328227, r6328199, MPFR_RNDN);
        mpfr_mul(r6328229, r6328226, r6328228, MPFR_RNDN);
        mpfr_add(r6328230, r6328225, r6328229, MPFR_RNDN);
        ;
        mpfr_mul(r6328232, r6328228, r6328199, MPFR_RNDN);
        mpfr_mul(r6328233, r6328232, r6328199, MPFR_RNDN);
        mpfr_mul(r6328234, r6328231, r6328233, MPFR_RNDN);
        mpfr_add(r6328235, r6328230, r6328234, MPFR_RNDN);
        return mpfr_get_d(r6328235, MPFR_RNDN);
}

static mpfr_t r6328236, r6328237, r6328238, r6328239, r6328240, r6328241, r6328242, r6328243, r6328244, r6328245, r6328246, r6328247, r6328248, r6328249, r6328250, r6328251, r6328252, r6328253, r6328254, r6328255, r6328256, r6328257, r6328258, r6328259, r6328260, r6328261, r6328262, r6328263, r6328264, r6328265, r6328266, r6328267, r6328268, r6328269, r6328270, r6328271, r6328272;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6328236);
        mpfr_init(r6328237);
        mpfr_init(r6328238);
        mpfr_init_set_str(r6328239, "3", 10, MPFR_RNDN);
        mpfr_init(r6328240);
        mpfr_init(r6328241);
        mpfr_init(r6328242);
        mpfr_init(r6328243);
        mpfr_init_set_str(r6328244, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r6328245);
        mpfr_init(r6328246);
        mpfr_init_set_str(r6328247, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r6328248);
        mpfr_init(r6328249);
        mpfr_init_set_str(r6328250, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r6328251);
        mpfr_init(r6328252);
        mpfr_init(r6328253);
        mpfr_init_set_str(r6328254, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r6328255);
        mpfr_init(r6328256);
        mpfr_init_set_str(r6328257, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r6328258);
        mpfr_init(r6328259);
        mpfr_init_set_str(r6328260, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r6328261);
        mpfr_init(r6328262);
        mpfr_init(r6328263);
        mpfr_init(r6328264);
        mpfr_init(r6328265);
        mpfr_init_set_str(r6328266, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328267, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r6328268);
        mpfr_init(r6328269);
        mpfr_init(r6328270);
        mpfr_init(r6328271);
        mpfr_init(r6328272);
}

double f_fm(double x) {
        mpfr_set_d(r6328236, x, MPFR_RNDN);
        mpfr_mul(r6328237, r6328236, r6328236, MPFR_RNDN);
        mpfr_mul(r6328238, r6328237, r6328237, MPFR_RNDN);
        ;
        mpfr_pow(r6328240, r6328236, r6328239, MPFR_RNDN);
        mpfr_mul(r6328241, r6328240, r6328240, MPFR_RNDN);
        mpfr_mul(r6328242, r6328240, r6328241, MPFR_RNDN);
        mpfr_mul(r6328243, r6328238, r6328242, MPFR_RNDN);
        ;
        mpfr_mul(r6328245, r6328244, r6328236, MPFR_RNDN);
        mpfr_mul(r6328246, r6328236, r6328245, MPFR_RNDN);
        ;
        mpfr_add(r6328248, r6328246, r6328247, MPFR_RNDN);
        mpfr_mul(r6328249, r6328243, r6328248, MPFR_RNDN);
        ;
        mpfr_mul(r6328251, r6328250, r6328236, MPFR_RNDN);
        mpfr_mul(r6328252, r6328251, r6328237, MPFR_RNDN);
        mpfr_mul(r6328253, r6328252, r6328238, MPFR_RNDN);
        ;
        mpfr_mul(r6328255, r6328254, r6328236, MPFR_RNDN);
        mpfr_add(r6328256, r6328253, r6328255, MPFR_RNDN);
        ;
        mpfr_mul(r6328258, r6328236, r6328257, MPFR_RNDN);
        mpfr_mul(r6328259, r6328258, r6328237, MPFR_RNDN);
        ;
        mpfr_mul(r6328261, r6328260, r6328236, MPFR_RNDN);
        mpfr_add(r6328262, r6328259, r6328261, MPFR_RNDN);
        mpfr_mul(r6328263, r6328237, r6328262, MPFR_RNDN);
        mpfr_add(r6328264, r6328256, r6328263, MPFR_RNDN);
        mpfr_add(r6328265, r6328249, r6328264, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328268, r6328236, r6328267, MPFR_RNDN);
        mpfr_mul(r6328269, r6328236, r6328268, MPFR_RNDN);
        mpfr_add(r6328270, r6328266, r6328269, MPFR_RNDN);
        mpfr_mul(r6328271, r6328242, r6328270, MPFR_RNDN);
        mpfr_add(r6328272, r6328265, r6328271, MPFR_RNDN);
        return mpfr_get_d(r6328272, MPFR_RNDN);
}

static mpfr_t r6328273, r6328274, r6328275, r6328276, r6328277, r6328278, r6328279, r6328280, r6328281, r6328282, r6328283, r6328284, r6328285, r6328286, r6328287, r6328288, r6328289, r6328290, r6328291, r6328292, r6328293, r6328294, r6328295, r6328296, r6328297, r6328298, r6328299, r6328300, r6328301, r6328302, r6328303, r6328304, r6328305, r6328306, r6328307, r6328308, r6328309;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6328273);
        mpfr_init(r6328274);
        mpfr_init(r6328275);
        mpfr_init_set_str(r6328276, "3", 10, MPFR_RNDN);
        mpfr_init(r6328277);
        mpfr_init(r6328278);
        mpfr_init(r6328279);
        mpfr_init(r6328280);
        mpfr_init_set_str(r6328281, "32768.0", 10, MPFR_RNDN);
        mpfr_init(r6328282);
        mpfr_init(r6328283);
        mpfr_init_set_str(r6328284, "-1720320.0", 10, MPFR_RNDN);
        mpfr_init(r6328285);
        mpfr_init(r6328286);
        mpfr_init_set_str(r6328287, "1383782400.0", 10, MPFR_RNDN);
        mpfr_init(r6328288);
        mpfr_init(r6328289);
        mpfr_init(r6328290);
        mpfr_init_set_str(r6328291, "-518918400.0", 10, MPFR_RNDN);
        mpfr_init(r6328292);
        mpfr_init(r6328293);
        mpfr_init_set_str(r6328294, "-2905943040.0", 10, MPFR_RNDN);
        mpfr_init(r6328295);
        mpfr_init(r6328296);
        mpfr_init_set_str(r6328297, "2421619200.0", 10, MPFR_RNDN);
        mpfr_init(r6328298);
        mpfr_init(r6328299);
        mpfr_init(r6328300);
        mpfr_init(r6328301);
        mpfr_init(r6328302);
        mpfr_init_set_str(r6328303, "-307507200.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328304, "33546240.0", 10, MPFR_RNDN);
        mpfr_init(r6328305);
        mpfr_init(r6328306);
        mpfr_init(r6328307);
        mpfr_init(r6328308);
        mpfr_init(r6328309);
}

double f_dm(double x) {
        mpfr_set_d(r6328273, x, MPFR_RNDN);
        mpfr_mul(r6328274, r6328273, r6328273, MPFR_RNDN);
        mpfr_mul(r6328275, r6328274, r6328274, MPFR_RNDN);
        ;
        mpfr_pow(r6328277, r6328273, r6328276, MPFR_RNDN);
        mpfr_mul(r6328278, r6328277, r6328277, MPFR_RNDN);
        mpfr_mul(r6328279, r6328277, r6328278, MPFR_RNDN);
        mpfr_mul(r6328280, r6328275, r6328279, MPFR_RNDN);
        ;
        mpfr_mul(r6328282, r6328281, r6328273, MPFR_RNDN);
        mpfr_mul(r6328283, r6328273, r6328282, MPFR_RNDN);
        ;
        mpfr_add(r6328285, r6328283, r6328284, MPFR_RNDN);
        mpfr_mul(r6328286, r6328280, r6328285, MPFR_RNDN);
        ;
        mpfr_mul(r6328288, r6328287, r6328273, MPFR_RNDN);
        mpfr_mul(r6328289, r6328288, r6328274, MPFR_RNDN);
        mpfr_mul(r6328290, r6328289, r6328275, MPFR_RNDN);
        ;
        mpfr_mul(r6328292, r6328291, r6328273, MPFR_RNDN);
        mpfr_add(r6328293, r6328290, r6328292, MPFR_RNDN);
        ;
        mpfr_mul(r6328295, r6328273, r6328294, MPFR_RNDN);
        mpfr_mul(r6328296, r6328295, r6328274, MPFR_RNDN);
        ;
        mpfr_mul(r6328298, r6328297, r6328273, MPFR_RNDN);
        mpfr_add(r6328299, r6328296, r6328298, MPFR_RNDN);
        mpfr_mul(r6328300, r6328274, r6328299, MPFR_RNDN);
        mpfr_add(r6328301, r6328293, r6328300, MPFR_RNDN);
        mpfr_add(r6328302, r6328286, r6328301, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328305, r6328273, r6328304, MPFR_RNDN);
        mpfr_mul(r6328306, r6328273, r6328305, MPFR_RNDN);
        mpfr_add(r6328307, r6328303, r6328306, MPFR_RNDN);
        mpfr_mul(r6328308, r6328279, r6328307, MPFR_RNDN);
        mpfr_add(r6328309, r6328302, r6328308, MPFR_RNDN);
        return mpfr_get_d(r6328309, MPFR_RNDN);
}

