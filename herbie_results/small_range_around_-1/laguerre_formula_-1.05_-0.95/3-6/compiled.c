#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10528153 = 1.0;
        float r10528154 = -6.0;
        float r10528155 = x;
        float r10528156 = r10528154 * r10528155;
        float r10528157 = r10528153 + r10528156;
        float r10528158 = 7.5;
        float r10528159 = r10528155 * r10528155;
        float r10528160 = r10528158 * r10528159;
        float r10528161 = r10528157 + r10528160;
        float r10528162 = -3.333333;
        float r10528163 = r10528159 * r10528155;
        float r10528164 = r10528162 * r10528163;
        float r10528165 = r10528161 + r10528164;
        float r10528166 = 0.625;
        float r10528167 = r10528163 * r10528155;
        float r10528168 = r10528166 * r10528167;
        float r10528169 = r10528165 + r10528168;
        float r10528170 = -0.05;
        float r10528171 = r10528167 * r10528155;
        float r10528172 = r10528170 * r10528171;
        float r10528173 = r10528169 + r10528172;
        float r10528174 = 0.001389;
        float r10528175 = r10528171 * r10528155;
        float r10528176 = r10528174 * r10528175;
        float r10528177 = r10528173 + r10528176;
        return r10528177;
}

double f_id(double x) {
        double r10528178 = 1.0;
        double r10528179 = -6.0;
        double r10528180 = x;
        double r10528181 = r10528179 * r10528180;
        double r10528182 = r10528178 + r10528181;
        double r10528183 = 7.5;
        double r10528184 = r10528180 * r10528180;
        double r10528185 = r10528183 * r10528184;
        double r10528186 = r10528182 + r10528185;
        double r10528187 = -3.333333;
        double r10528188 = r10528184 * r10528180;
        double r10528189 = r10528187 * r10528188;
        double r10528190 = r10528186 + r10528189;
        double r10528191 = 0.625;
        double r10528192 = r10528188 * r10528180;
        double r10528193 = r10528191 * r10528192;
        double r10528194 = r10528190 + r10528193;
        double r10528195 = -0.05;
        double r10528196 = r10528192 * r10528180;
        double r10528197 = r10528195 * r10528196;
        double r10528198 = r10528194 + r10528197;
        double r10528199 = 0.001389;
        double r10528200 = r10528196 * r10528180;
        double r10528201 = r10528199 * r10528200;
        double r10528202 = r10528198 + r10528201;
        return r10528202;
}


double f_of(float x) {
        float r10528203 = x;
        float r10528204 = 0.001389;
        float r10528205 = r10528204 * r10528203;
        float r10528206 = r10528203 * r10528205;
        float r10528207 = r10528203 * r10528203;
        float r10528208 = r10528207 * r10528207;
        float r10528209 = r10528206 * r10528208;
        float r10528210 = exp(r10528209);
        float r10528211 = log(r10528210);
        float r10528212 = -6.0;
        float r10528213 = r10528203 * r10528212;
        float r10528214 = 1.0;
        float r10528215 = r10528213 + r10528214;
        float r10528216 = r10528211 + r10528215;
        float r10528217 = 0.625;
        float r10528218 = -0.05;
        float r10528219 = r10528218 * r10528203;
        float r10528220 = r10528217 + r10528219;
        float r10528221 = r10528208 * r10528220;
        float r10528222 = -3.333333;
        float r10528223 = r10528222 * r10528203;
        float r10528224 = 7.5;
        float r10528225 = r10528223 + r10528224;
        float r10528226 = r10528207 * r10528225;
        float r10528227 = r10528221 + r10528226;
        float r10528228 = r10528216 + r10528227;
        return r10528228;
}

double f_od(double x) {
        double r10528229 = x;
        double r10528230 = 0.001389;
        double r10528231 = r10528230 * r10528229;
        double r10528232 = r10528229 * r10528231;
        double r10528233 = r10528229 * r10528229;
        double r10528234 = r10528233 * r10528233;
        double r10528235 = r10528232 * r10528234;
        double r10528236 = exp(r10528235);
        double r10528237 = log(r10528236);
        double r10528238 = -6.0;
        double r10528239 = r10528229 * r10528238;
        double r10528240 = 1.0;
        double r10528241 = r10528239 + r10528240;
        double r10528242 = r10528237 + r10528241;
        double r10528243 = 0.625;
        double r10528244 = -0.05;
        double r10528245 = r10528244 * r10528229;
        double r10528246 = r10528243 + r10528245;
        double r10528247 = r10528234 * r10528246;
        double r10528248 = -3.333333;
        double r10528249 = r10528248 * r10528229;
        double r10528250 = 7.5;
        double r10528251 = r10528249 + r10528250;
        double r10528252 = r10528233 * r10528251;
        double r10528253 = r10528247 + r10528252;
        double r10528254 = r10528242 + r10528253;
        return r10528254;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10528255, r10528256, r10528257, r10528258, r10528259, r10528260, r10528261, r10528262, r10528263, r10528264, r10528265, r10528266, r10528267, r10528268, r10528269, r10528270, r10528271, r10528272, r10528273, r10528274, r10528275, r10528276, r10528277, r10528278, r10528279;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528255, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528256, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10528257);
        mpfr_init(r10528258);
        mpfr_init(r10528259);
        mpfr_init_set_str(r10528260, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10528261);
        mpfr_init(r10528262);
        mpfr_init(r10528263);
        mpfr_init_set_str(r10528264, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10528265);
        mpfr_init(r10528266);
        mpfr_init(r10528267);
        mpfr_init_set_str(r10528268, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10528269);
        mpfr_init(r10528270);
        mpfr_init(r10528271);
        mpfr_init_set_str(r10528272, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10528273);
        mpfr_init(r10528274);
        mpfr_init(r10528275);
        mpfr_init_set_str(r10528276, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10528277);
        mpfr_init(r10528278);
        mpfr_init(r10528279);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10528257, x, MPFR_RNDN);
        mpfr_mul(r10528258, r10528256, r10528257, MPFR_RNDN);
        mpfr_add(r10528259, r10528255, r10528258, MPFR_RNDN);
        ;
        mpfr_mul(r10528261, r10528257, r10528257, MPFR_RNDN);
        mpfr_mul(r10528262, r10528260, r10528261, MPFR_RNDN);
        mpfr_add(r10528263, r10528259, r10528262, MPFR_RNDN);
        ;
        mpfr_mul(r10528265, r10528261, r10528257, MPFR_RNDN);
        mpfr_mul(r10528266, r10528264, r10528265, MPFR_RNDN);
        mpfr_add(r10528267, r10528263, r10528266, MPFR_RNDN);
        ;
        mpfr_mul(r10528269, r10528265, r10528257, MPFR_RNDN);
        mpfr_mul(r10528270, r10528268, r10528269, MPFR_RNDN);
        mpfr_add(r10528271, r10528267, r10528270, MPFR_RNDN);
        ;
        mpfr_mul(r10528273, r10528269, r10528257, MPFR_RNDN);
        mpfr_mul(r10528274, r10528272, r10528273, MPFR_RNDN);
        mpfr_add(r10528275, r10528271, r10528274, MPFR_RNDN);
        ;
        mpfr_mul(r10528277, r10528273, r10528257, MPFR_RNDN);
        mpfr_mul(r10528278, r10528276, r10528277, MPFR_RNDN);
        mpfr_add(r10528279, r10528275, r10528278, MPFR_RNDN);
        return mpfr_get_d(r10528279, MPFR_RNDN);
}

static mpfr_t r10528280, r10528281, r10528282, r10528283, r10528284, r10528285, r10528286, r10528287, r10528288, r10528289, r10528290, r10528291, r10528292, r10528293, r10528294, r10528295, r10528296, r10528297, r10528298, r10528299, r10528300, r10528301, r10528302, r10528303, r10528304, r10528305;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10528280);
        mpfr_init_set_str(r10528281, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10528282);
        mpfr_init(r10528283);
        mpfr_init(r10528284);
        mpfr_init(r10528285);
        mpfr_init(r10528286);
        mpfr_init(r10528287);
        mpfr_init(r10528288);
        mpfr_init_set_str(r10528289, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10528290);
        mpfr_init_set_str(r10528291, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528292);
        mpfr_init(r10528293);
        mpfr_init_set_str(r10528294, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528295, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10528296);
        mpfr_init(r10528297);
        mpfr_init(r10528298);
        mpfr_init_set_str(r10528299, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10528300);
        mpfr_init_set_str(r10528301, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10528302);
        mpfr_init(r10528303);
        mpfr_init(r10528304);
        mpfr_init(r10528305);
}

double f_fm(double x) {
        mpfr_set_d(r10528280, x, MPFR_RNDN);
        ;
        mpfr_mul(r10528282, r10528281, r10528280, MPFR_RNDN);
        mpfr_mul(r10528283, r10528280, r10528282, MPFR_RNDN);
        mpfr_mul(r10528284, r10528280, r10528280, MPFR_RNDN);
        mpfr_mul(r10528285, r10528284, r10528284, MPFR_RNDN);
        mpfr_mul(r10528286, r10528283, r10528285, MPFR_RNDN);
        mpfr_exp(r10528287, r10528286, MPFR_RNDN);
        mpfr_log(r10528288, r10528287, MPFR_RNDN);
        ;
        mpfr_mul(r10528290, r10528280, r10528289, MPFR_RNDN);
        ;
        mpfr_add(r10528292, r10528290, r10528291, MPFR_RNDN);
        mpfr_add(r10528293, r10528288, r10528292, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10528296, r10528295, r10528280, MPFR_RNDN);
        mpfr_add(r10528297, r10528294, r10528296, MPFR_RNDN);
        mpfr_mul(r10528298, r10528285, r10528297, MPFR_RNDN);
        ;
        mpfr_mul(r10528300, r10528299, r10528280, MPFR_RNDN);
        ;
        mpfr_add(r10528302, r10528300, r10528301, MPFR_RNDN);
        mpfr_mul(r10528303, r10528284, r10528302, MPFR_RNDN);
        mpfr_add(r10528304, r10528298, r10528303, MPFR_RNDN);
        mpfr_add(r10528305, r10528293, r10528304, MPFR_RNDN);
        return mpfr_get_d(r10528305, MPFR_RNDN);
}

static mpfr_t r10528306, r10528307, r10528308, r10528309, r10528310, r10528311, r10528312, r10528313, r10528314, r10528315, r10528316, r10528317, r10528318, r10528319, r10528320, r10528321, r10528322, r10528323, r10528324, r10528325, r10528326, r10528327, r10528328, r10528329, r10528330, r10528331;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10528306);
        mpfr_init_set_str(r10528307, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10528308);
        mpfr_init(r10528309);
        mpfr_init(r10528310);
        mpfr_init(r10528311);
        mpfr_init(r10528312);
        mpfr_init(r10528313);
        mpfr_init(r10528314);
        mpfr_init_set_str(r10528315, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10528316);
        mpfr_init_set_str(r10528317, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528318);
        mpfr_init(r10528319);
        mpfr_init_set_str(r10528320, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528321, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10528322);
        mpfr_init(r10528323);
        mpfr_init(r10528324);
        mpfr_init_set_str(r10528325, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10528326);
        mpfr_init_set_str(r10528327, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10528328);
        mpfr_init(r10528329);
        mpfr_init(r10528330);
        mpfr_init(r10528331);
}

double f_dm(double x) {
        mpfr_set_d(r10528306, x, MPFR_RNDN);
        ;
        mpfr_mul(r10528308, r10528307, r10528306, MPFR_RNDN);
        mpfr_mul(r10528309, r10528306, r10528308, MPFR_RNDN);
        mpfr_mul(r10528310, r10528306, r10528306, MPFR_RNDN);
        mpfr_mul(r10528311, r10528310, r10528310, MPFR_RNDN);
        mpfr_mul(r10528312, r10528309, r10528311, MPFR_RNDN);
        mpfr_exp(r10528313, r10528312, MPFR_RNDN);
        mpfr_log(r10528314, r10528313, MPFR_RNDN);
        ;
        mpfr_mul(r10528316, r10528306, r10528315, MPFR_RNDN);
        ;
        mpfr_add(r10528318, r10528316, r10528317, MPFR_RNDN);
        mpfr_add(r10528319, r10528314, r10528318, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10528322, r10528321, r10528306, MPFR_RNDN);
        mpfr_add(r10528323, r10528320, r10528322, MPFR_RNDN);
        mpfr_mul(r10528324, r10528311, r10528323, MPFR_RNDN);
        ;
        mpfr_mul(r10528326, r10528325, r10528306, MPFR_RNDN);
        ;
        mpfr_add(r10528328, r10528326, r10528327, MPFR_RNDN);
        mpfr_mul(r10528329, r10528310, r10528328, MPFR_RNDN);
        mpfr_add(r10528330, r10528324, r10528329, MPFR_RNDN);
        mpfr_add(r10528331, r10528319, r10528330, MPFR_RNDN);
        return mpfr_get_d(r10528331, MPFR_RNDN);
}

