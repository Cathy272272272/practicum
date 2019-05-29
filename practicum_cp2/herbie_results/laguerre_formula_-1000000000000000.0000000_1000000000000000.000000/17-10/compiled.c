#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r10202074 = 1.0;
        float r10202075 = -10.0;
        float r10202076 = x;
        float r10202077 = r10202075 * r10202076;
        float r10202078 = r10202074 + r10202077;
        float r10202079 = 22.5;
        float r10202080 = r10202076 * r10202076;
        float r10202081 = r10202079 * r10202080;
        float r10202082 = r10202078 + r10202081;
        float r10202083 = -20.0;
        float r10202084 = r10202080 * r10202076;
        float r10202085 = r10202083 * r10202084;
        float r10202086 = r10202082 + r10202085;
        float r10202087 = 8.75;
        float r10202088 = r10202084 * r10202076;
        float r10202089 = r10202087 * r10202088;
        float r10202090 = r10202086 + r10202089;
        float r10202091 = -2.1;
        float r10202092 = r10202088 * r10202076;
        float r10202093 = r10202091 * r10202092;
        float r10202094 = r10202090 + r10202093;
        float r10202095 = 0.291667;
        float r10202096 = r10202092 * r10202076;
        float r10202097 = r10202095 * r10202096;
        float r10202098 = r10202094 + r10202097;
        float r10202099 = -0.02381;
        float r10202100 = r10202096 * r10202076;
        float r10202101 = r10202099 * r10202100;
        float r10202102 = r10202098 + r10202101;
        float r10202103 = 0.001116;
        float r10202104 = r10202100 * r10202076;
        float r10202105 = r10202103 * r10202104;
        float r10202106 = r10202102 + r10202105;
        float r10202107 = -2.8e-05;
        float r10202108 = r10202104 * r10202076;
        float r10202109 = r10202107 * r10202108;
        float r10202110 = r10202106 + r10202109;
        return r10202110;
}

double f_id(double x) {
        double r10202111 = 1.0;
        double r10202112 = -10.0;
        double r10202113 = x;
        double r10202114 = r10202112 * r10202113;
        double r10202115 = r10202111 + r10202114;
        double r10202116 = 22.5;
        double r10202117 = r10202113 * r10202113;
        double r10202118 = r10202116 * r10202117;
        double r10202119 = r10202115 + r10202118;
        double r10202120 = -20.0;
        double r10202121 = r10202117 * r10202113;
        double r10202122 = r10202120 * r10202121;
        double r10202123 = r10202119 + r10202122;
        double r10202124 = 8.75;
        double r10202125 = r10202121 * r10202113;
        double r10202126 = r10202124 * r10202125;
        double r10202127 = r10202123 + r10202126;
        double r10202128 = -2.1;
        double r10202129 = r10202125 * r10202113;
        double r10202130 = r10202128 * r10202129;
        double r10202131 = r10202127 + r10202130;
        double r10202132 = 0.291667;
        double r10202133 = r10202129 * r10202113;
        double r10202134 = r10202132 * r10202133;
        double r10202135 = r10202131 + r10202134;
        double r10202136 = -0.02381;
        double r10202137 = r10202133 * r10202113;
        double r10202138 = r10202136 * r10202137;
        double r10202139 = r10202135 + r10202138;
        double r10202140 = 0.001116;
        double r10202141 = r10202137 * r10202113;
        double r10202142 = r10202140 * r10202141;
        double r10202143 = r10202139 + r10202142;
        double r10202144 = -2.8e-05;
        double r10202145 = r10202141 * r10202113;
        double r10202146 = r10202144 * r10202145;
        double r10202147 = r10202143 + r10202146;
        return r10202147;
}


double f_of(float x) {
        float r10202148 = x;
        float r10202149 = r10202148 * r10202148;
        float r10202150 = 22.5;
        float r10202151 = 20.0;
        float r10202152 = r10202151 * r10202148;
        float r10202153 = r10202150 - r10202152;
        float r10202154 = r10202149 * r10202153;
        float r10202155 = -10.0;
        float r10202156 = r10202155 * r10202148;
        float r10202157 = r10202154 + r10202156;
        float r10202158 = 1.0;
        float r10202159 = 3;
        float r10202160 = pow(r10202149, r10202159);
        float r10202161 = r10202160 * r10202149;
        float r10202162 = -2.8e-05;
        float r10202163 = r10202148 * r10202162;
        float r10202164 = 0.001116;
        float r10202165 = r10202163 + r10202164;
        float r10202166 = r10202161 * r10202165;
        float r10202167 = r10202158 + r10202166;
        float r10202168 = r10202157 + r10202167;
        float r10202169 = r10202149 * r10202149;
        float r10202170 = 0.291667;
        float r10202171 = r10202148 * r10202170;
        float r10202172 = r10202171 * r10202148;
        float r10202173 = 8.75;
        float r10202174 = -2.1;
        float r10202175 = r10202148 * r10202174;
        float r10202176 = r10202173 + r10202175;
        float r10202177 = r10202172 + r10202176;
        float r10202178 = -0.02381;
        float r10202179 = r10202178 * r10202148;
        float r10202180 = r10202149 * r10202179;
        float r10202181 = r10202177 + r10202180;
        float r10202182 = r10202169 * r10202181;
        float r10202183 = r10202168 + r10202182;
        return r10202183;
}

double f_od(double x) {
        double r10202184 = x;
        double r10202185 = r10202184 * r10202184;
        double r10202186 = 22.5;
        double r10202187 = 20.0;
        double r10202188 = r10202187 * r10202184;
        double r10202189 = r10202186 - r10202188;
        double r10202190 = r10202185 * r10202189;
        double r10202191 = -10.0;
        double r10202192 = r10202191 * r10202184;
        double r10202193 = r10202190 + r10202192;
        double r10202194 = 1.0;
        double r10202195 = 3;
        double r10202196 = pow(r10202185, r10202195);
        double r10202197 = r10202196 * r10202185;
        double r10202198 = -2.8e-05;
        double r10202199 = r10202184 * r10202198;
        double r10202200 = 0.001116;
        double r10202201 = r10202199 + r10202200;
        double r10202202 = r10202197 * r10202201;
        double r10202203 = r10202194 + r10202202;
        double r10202204 = r10202193 + r10202203;
        double r10202205 = r10202185 * r10202185;
        double r10202206 = 0.291667;
        double r10202207 = r10202184 * r10202206;
        double r10202208 = r10202207 * r10202184;
        double r10202209 = 8.75;
        double r10202210 = -2.1;
        double r10202211 = r10202184 * r10202210;
        double r10202212 = r10202209 + r10202211;
        double r10202213 = r10202208 + r10202212;
        double r10202214 = -0.02381;
        double r10202215 = r10202214 * r10202184;
        double r10202216 = r10202185 * r10202215;
        double r10202217 = r10202213 + r10202216;
        double r10202218 = r10202205 * r10202217;
        double r10202219 = r10202204 + r10202218;
        return r10202219;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10202220, r10202221, r10202222, r10202223, r10202224, r10202225, r10202226, r10202227, r10202228, r10202229, r10202230, r10202231, r10202232, r10202233, r10202234, r10202235, r10202236, r10202237, r10202238, r10202239, r10202240, r10202241, r10202242, r10202243, r10202244, r10202245, r10202246, r10202247, r10202248, r10202249, r10202250, r10202251, r10202252, r10202253, r10202254, r10202255, r10202256;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10202220, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202221, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10202222);
        mpfr_init(r10202223);
        mpfr_init(r10202224);
        mpfr_init_set_str(r10202225, "22.5", 10, MPFR_RNDN);
        mpfr_init(r10202226);
        mpfr_init(r10202227);
        mpfr_init(r10202228);
        mpfr_init_set_str(r10202229, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r10202230);
        mpfr_init(r10202231);
        mpfr_init(r10202232);
        mpfr_init_set_str(r10202233, "8.75", 10, MPFR_RNDN);
        mpfr_init(r10202234);
        mpfr_init(r10202235);
        mpfr_init(r10202236);
        mpfr_init_set_str(r10202237, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10202238);
        mpfr_init(r10202239);
        mpfr_init(r10202240);
        mpfr_init_set_str(r10202241, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10202242);
        mpfr_init(r10202243);
        mpfr_init(r10202244);
        mpfr_init_set_str(r10202245, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10202246);
        mpfr_init(r10202247);
        mpfr_init(r10202248);
        mpfr_init_set_str(r10202249, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10202250);
        mpfr_init(r10202251);
        mpfr_init(r10202252);
        mpfr_init_set_str(r10202253, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10202254);
        mpfr_init(r10202255);
        mpfr_init(r10202256);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10202222, x, MPFR_RNDN);
        mpfr_mul(r10202223, r10202221, r10202222, MPFR_RNDN);
        mpfr_add(r10202224, r10202220, r10202223, MPFR_RNDN);
        ;
        mpfr_mul(r10202226, r10202222, r10202222, MPFR_RNDN);
        mpfr_mul(r10202227, r10202225, r10202226, MPFR_RNDN);
        mpfr_add(r10202228, r10202224, r10202227, MPFR_RNDN);
        ;
        mpfr_mul(r10202230, r10202226, r10202222, MPFR_RNDN);
        mpfr_mul(r10202231, r10202229, r10202230, MPFR_RNDN);
        mpfr_add(r10202232, r10202228, r10202231, MPFR_RNDN);
        ;
        mpfr_mul(r10202234, r10202230, r10202222, MPFR_RNDN);
        mpfr_mul(r10202235, r10202233, r10202234, MPFR_RNDN);
        mpfr_add(r10202236, r10202232, r10202235, MPFR_RNDN);
        ;
        mpfr_mul(r10202238, r10202234, r10202222, MPFR_RNDN);
        mpfr_mul(r10202239, r10202237, r10202238, MPFR_RNDN);
        mpfr_add(r10202240, r10202236, r10202239, MPFR_RNDN);
        ;
        mpfr_mul(r10202242, r10202238, r10202222, MPFR_RNDN);
        mpfr_mul(r10202243, r10202241, r10202242, MPFR_RNDN);
        mpfr_add(r10202244, r10202240, r10202243, MPFR_RNDN);
        ;
        mpfr_mul(r10202246, r10202242, r10202222, MPFR_RNDN);
        mpfr_mul(r10202247, r10202245, r10202246, MPFR_RNDN);
        mpfr_add(r10202248, r10202244, r10202247, MPFR_RNDN);
        ;
        mpfr_mul(r10202250, r10202246, r10202222, MPFR_RNDN);
        mpfr_mul(r10202251, r10202249, r10202250, MPFR_RNDN);
        mpfr_add(r10202252, r10202248, r10202251, MPFR_RNDN);
        ;
        mpfr_mul(r10202254, r10202250, r10202222, MPFR_RNDN);
        mpfr_mul(r10202255, r10202253, r10202254, MPFR_RNDN);
        mpfr_add(r10202256, r10202252, r10202255, MPFR_RNDN);
        return mpfr_get_d(r10202256, MPFR_RNDN);
}

static mpfr_t r10202257, r10202258, r10202259, r10202260, r10202261, r10202262, r10202263, r10202264, r10202265, r10202266, r10202267, r10202268, r10202269, r10202270, r10202271, r10202272, r10202273, r10202274, r10202275, r10202276, r10202277, r10202278, r10202279, r10202280, r10202281, r10202282, r10202283, r10202284, r10202285, r10202286, r10202287, r10202288, r10202289, r10202290, r10202291, r10202292;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10202257);
        mpfr_init(r10202258);
        mpfr_init_set_str(r10202259, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202260, "20.0", 10, MPFR_RNDN);
        mpfr_init(r10202261);
        mpfr_init(r10202262);
        mpfr_init(r10202263);
        mpfr_init_set_str(r10202264, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10202265);
        mpfr_init(r10202266);
        mpfr_init_set_str(r10202267, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202268, "3", 10, MPFR_RNDN);
        mpfr_init(r10202269);
        mpfr_init(r10202270);
        mpfr_init_set_str(r10202271, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10202272);
        mpfr_init_set_str(r10202273, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10202274);
        mpfr_init(r10202275);
        mpfr_init(r10202276);
        mpfr_init(r10202277);
        mpfr_init(r10202278);
        mpfr_init_set_str(r10202279, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10202280);
        mpfr_init(r10202281);
        mpfr_init_set_str(r10202282, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202283, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10202284);
        mpfr_init(r10202285);
        mpfr_init(r10202286);
        mpfr_init_set_str(r10202287, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10202288);
        mpfr_init(r10202289);
        mpfr_init(r10202290);
        mpfr_init(r10202291);
        mpfr_init(r10202292);
}

double f_fm(double x) {
        mpfr_set_d(r10202257, x, MPFR_RNDN);
        mpfr_mul(r10202258, r10202257, r10202257, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10202261, r10202260, r10202257, MPFR_RNDN);
        mpfr_sub(r10202262, r10202259, r10202261, MPFR_RNDN);
        mpfr_mul(r10202263, r10202258, r10202262, MPFR_RNDN);
        ;
        mpfr_mul(r10202265, r10202264, r10202257, MPFR_RNDN);
        mpfr_add(r10202266, r10202263, r10202265, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10202269, r10202258, r10202268, MPFR_RNDN);
        mpfr_mul(r10202270, r10202269, r10202258, MPFR_RNDN);
        ;
        mpfr_mul(r10202272, r10202257, r10202271, MPFR_RNDN);
        ;
        mpfr_add(r10202274, r10202272, r10202273, MPFR_RNDN);
        mpfr_mul(r10202275, r10202270, r10202274, MPFR_RNDN);
        mpfr_add(r10202276, r10202267, r10202275, MPFR_RNDN);
        mpfr_add(r10202277, r10202266, r10202276, MPFR_RNDN);
        mpfr_mul(r10202278, r10202258, r10202258, MPFR_RNDN);
        ;
        mpfr_mul(r10202280, r10202257, r10202279, MPFR_RNDN);
        mpfr_mul(r10202281, r10202280, r10202257, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10202284, r10202257, r10202283, MPFR_RNDN);
        mpfr_add(r10202285, r10202282, r10202284, MPFR_RNDN);
        mpfr_add(r10202286, r10202281, r10202285, MPFR_RNDN);
        ;
        mpfr_mul(r10202288, r10202287, r10202257, MPFR_RNDN);
        mpfr_mul(r10202289, r10202258, r10202288, MPFR_RNDN);
        mpfr_add(r10202290, r10202286, r10202289, MPFR_RNDN);
        mpfr_mul(r10202291, r10202278, r10202290, MPFR_RNDN);
        mpfr_add(r10202292, r10202277, r10202291, MPFR_RNDN);
        return mpfr_get_d(r10202292, MPFR_RNDN);
}

static mpfr_t r10202293, r10202294, r10202295, r10202296, r10202297, r10202298, r10202299, r10202300, r10202301, r10202302, r10202303, r10202304, r10202305, r10202306, r10202307, r10202308, r10202309, r10202310, r10202311, r10202312, r10202313, r10202314, r10202315, r10202316, r10202317, r10202318, r10202319, r10202320, r10202321, r10202322, r10202323, r10202324, r10202325, r10202326, r10202327, r10202328;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10202293);
        mpfr_init(r10202294);
        mpfr_init_set_str(r10202295, "22.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202296, "20.0", 10, MPFR_RNDN);
        mpfr_init(r10202297);
        mpfr_init(r10202298);
        mpfr_init(r10202299);
        mpfr_init_set_str(r10202300, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r10202301);
        mpfr_init(r10202302);
        mpfr_init_set_str(r10202303, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202304, "3", 10, MPFR_RNDN);
        mpfr_init(r10202305);
        mpfr_init(r10202306);
        mpfr_init_set_str(r10202307, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r10202308);
        mpfr_init_set_str(r10202309, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r10202310);
        mpfr_init(r10202311);
        mpfr_init(r10202312);
        mpfr_init(r10202313);
        mpfr_init(r10202314);
        mpfr_init_set_str(r10202315, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r10202316);
        mpfr_init(r10202317);
        mpfr_init_set_str(r10202318, "8.75", 10, MPFR_RNDN);
        mpfr_init_set_str(r10202319, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r10202320);
        mpfr_init(r10202321);
        mpfr_init(r10202322);
        mpfr_init_set_str(r10202323, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r10202324);
        mpfr_init(r10202325);
        mpfr_init(r10202326);
        mpfr_init(r10202327);
        mpfr_init(r10202328);
}

double f_dm(double x) {
        mpfr_set_d(r10202293, x, MPFR_RNDN);
        mpfr_mul(r10202294, r10202293, r10202293, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10202297, r10202296, r10202293, MPFR_RNDN);
        mpfr_sub(r10202298, r10202295, r10202297, MPFR_RNDN);
        mpfr_mul(r10202299, r10202294, r10202298, MPFR_RNDN);
        ;
        mpfr_mul(r10202301, r10202300, r10202293, MPFR_RNDN);
        mpfr_add(r10202302, r10202299, r10202301, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10202305, r10202294, r10202304, MPFR_RNDN);
        mpfr_mul(r10202306, r10202305, r10202294, MPFR_RNDN);
        ;
        mpfr_mul(r10202308, r10202293, r10202307, MPFR_RNDN);
        ;
        mpfr_add(r10202310, r10202308, r10202309, MPFR_RNDN);
        mpfr_mul(r10202311, r10202306, r10202310, MPFR_RNDN);
        mpfr_add(r10202312, r10202303, r10202311, MPFR_RNDN);
        mpfr_add(r10202313, r10202302, r10202312, MPFR_RNDN);
        mpfr_mul(r10202314, r10202294, r10202294, MPFR_RNDN);
        ;
        mpfr_mul(r10202316, r10202293, r10202315, MPFR_RNDN);
        mpfr_mul(r10202317, r10202316, r10202293, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10202320, r10202293, r10202319, MPFR_RNDN);
        mpfr_add(r10202321, r10202318, r10202320, MPFR_RNDN);
        mpfr_add(r10202322, r10202317, r10202321, MPFR_RNDN);
        ;
        mpfr_mul(r10202324, r10202323, r10202293, MPFR_RNDN);
        mpfr_mul(r10202325, r10202294, r10202324, MPFR_RNDN);
        mpfr_add(r10202326, r10202322, r10202325, MPFR_RNDN);
        mpfr_mul(r10202327, r10202314, r10202326, MPFR_RNDN);
        mpfr_add(r10202328, r10202313, r10202327, MPFR_RNDN);
        return mpfr_get_d(r10202328, MPFR_RNDN);
}

