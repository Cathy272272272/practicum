#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6329170 = -30240.0;
        float r6329171 = 302400.0;
        float r6329172 = x;
        float r6329173 = r6329172 * r6329172;
        float r6329174 = r6329171 * r6329173;
        float r6329175 = r6329170 + r6329174;
        float r6329176 = -403200.0;
        float r6329177 = r6329173 * r6329172;
        float r6329178 = r6329177 * r6329172;
        float r6329179 = r6329176 * r6329178;
        float r6329180 = r6329175 + r6329179;
        float r6329181 = 161280.0;
        float r6329182 = r6329178 * r6329172;
        float r6329183 = r6329182 * r6329172;
        float r6329184 = r6329181 * r6329183;
        float r6329185 = r6329180 + r6329184;
        float r6329186 = -23040.0;
        float r6329187 = r6329183 * r6329172;
        float r6329188 = r6329187 * r6329172;
        float r6329189 = r6329186 * r6329188;
        float r6329190 = r6329185 + r6329189;
        float r6329191 = 1024.0;
        float r6329192 = r6329188 * r6329172;
        float r6329193 = r6329192 * r6329172;
        float r6329194 = r6329191 * r6329193;
        float r6329195 = r6329190 + r6329194;
        return r6329195;
}

double f_id(double x) {
        double r6329196 = -30240.0;
        double r6329197 = 302400.0;
        double r6329198 = x;
        double r6329199 = r6329198 * r6329198;
        double r6329200 = r6329197 * r6329199;
        double r6329201 = r6329196 + r6329200;
        double r6329202 = -403200.0;
        double r6329203 = r6329199 * r6329198;
        double r6329204 = r6329203 * r6329198;
        double r6329205 = r6329202 * r6329204;
        double r6329206 = r6329201 + r6329205;
        double r6329207 = 161280.0;
        double r6329208 = r6329204 * r6329198;
        double r6329209 = r6329208 * r6329198;
        double r6329210 = r6329207 * r6329209;
        double r6329211 = r6329206 + r6329210;
        double r6329212 = -23040.0;
        double r6329213 = r6329209 * r6329198;
        double r6329214 = r6329213 * r6329198;
        double r6329215 = r6329212 * r6329214;
        double r6329216 = r6329211 + r6329215;
        double r6329217 = 1024.0;
        double r6329218 = r6329214 * r6329198;
        double r6329219 = r6329218 * r6329198;
        double r6329220 = r6329217 * r6329219;
        double r6329221 = r6329216 + r6329220;
        return r6329221;
}


double f_of(float x) {
        float r6329222 = -30240.0;
        float r6329223 = 302400.0;
        float r6329224 = x;
        float r6329225 = r6329224 * r6329224;
        float r6329226 = r6329223 * r6329225;
        float r6329227 = r6329222 + r6329226;
        float r6329228 = -403200.0;
        float r6329229 = r6329225 * r6329224;
        float r6329230 = r6329229 * r6329224;
        float r6329231 = r6329228 * r6329230;
        float r6329232 = r6329227 + r6329231;
        float r6329233 = 161280.0;
        float r6329234 = r6329230 * r6329224;
        float r6329235 = r6329234 * r6329224;
        float r6329236 = r6329233 * r6329235;
        float r6329237 = r6329232 + r6329236;
        float r6329238 = -23040.0;
        float r6329239 = r6329235 * r6329224;
        float r6329240 = r6329239 * r6329224;
        float r6329241 = r6329238 * r6329240;
        float r6329242 = r6329237 + r6329241;
        float r6329243 = 1024.0;
        float r6329244 = r6329240 * r6329224;
        float r6329245 = r6329244 * r6329224;
        float r6329246 = r6329243 * r6329245;
        float r6329247 = r6329242 + r6329246;
        return r6329247;
}

double f_od(double x) {
        double r6329248 = -30240.0;
        double r6329249 = 302400.0;
        double r6329250 = x;
        double r6329251 = r6329250 * r6329250;
        double r6329252 = r6329249 * r6329251;
        double r6329253 = r6329248 + r6329252;
        double r6329254 = -403200.0;
        double r6329255 = r6329251 * r6329250;
        double r6329256 = r6329255 * r6329250;
        double r6329257 = r6329254 * r6329256;
        double r6329258 = r6329253 + r6329257;
        double r6329259 = 161280.0;
        double r6329260 = r6329256 * r6329250;
        double r6329261 = r6329260 * r6329250;
        double r6329262 = r6329259 * r6329261;
        double r6329263 = r6329258 + r6329262;
        double r6329264 = -23040.0;
        double r6329265 = r6329261 * r6329250;
        double r6329266 = r6329265 * r6329250;
        double r6329267 = r6329264 * r6329266;
        double r6329268 = r6329263 + r6329267;
        double r6329269 = 1024.0;
        double r6329270 = r6329266 * r6329250;
        double r6329271 = r6329270 * r6329250;
        double r6329272 = r6329269 * r6329271;
        double r6329273 = r6329268 + r6329272;
        return r6329273;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6329274, r6329275, r6329276, r6329277, r6329278, r6329279, r6329280, r6329281, r6329282, r6329283, r6329284, r6329285, r6329286, r6329287, r6329288, r6329289, r6329290, r6329291, r6329292, r6329293, r6329294, r6329295, r6329296, r6329297, r6329298, r6329299;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6329274, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6329275, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r6329276);
        mpfr_init(r6329277);
        mpfr_init(r6329278);
        mpfr_init(r6329279);
        mpfr_init_set_str(r6329280, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r6329281);
        mpfr_init(r6329282);
        mpfr_init(r6329283);
        mpfr_init(r6329284);
        mpfr_init_set_str(r6329285, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r6329286);
        mpfr_init(r6329287);
        mpfr_init(r6329288);
        mpfr_init(r6329289);
        mpfr_init_set_str(r6329290, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r6329291);
        mpfr_init(r6329292);
        mpfr_init(r6329293);
        mpfr_init(r6329294);
        mpfr_init_set_str(r6329295, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r6329296);
        mpfr_init(r6329297);
        mpfr_init(r6329298);
        mpfr_init(r6329299);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6329276, x, MPFR_RNDN);
        mpfr_mul(r6329277, r6329276, r6329276, MPFR_RNDN);
        mpfr_mul(r6329278, r6329275, r6329277, MPFR_RNDN);
        mpfr_add(r6329279, r6329274, r6329278, MPFR_RNDN);
        ;
        mpfr_mul(r6329281, r6329277, r6329276, MPFR_RNDN);
        mpfr_mul(r6329282, r6329281, r6329276, MPFR_RNDN);
        mpfr_mul(r6329283, r6329280, r6329282, MPFR_RNDN);
        mpfr_add(r6329284, r6329279, r6329283, MPFR_RNDN);
        ;
        mpfr_mul(r6329286, r6329282, r6329276, MPFR_RNDN);
        mpfr_mul(r6329287, r6329286, r6329276, MPFR_RNDN);
        mpfr_mul(r6329288, r6329285, r6329287, MPFR_RNDN);
        mpfr_add(r6329289, r6329284, r6329288, MPFR_RNDN);
        ;
        mpfr_mul(r6329291, r6329287, r6329276, MPFR_RNDN);
        mpfr_mul(r6329292, r6329291, r6329276, MPFR_RNDN);
        mpfr_mul(r6329293, r6329290, r6329292, MPFR_RNDN);
        mpfr_add(r6329294, r6329289, r6329293, MPFR_RNDN);
        ;
        mpfr_mul(r6329296, r6329292, r6329276, MPFR_RNDN);
        mpfr_mul(r6329297, r6329296, r6329276, MPFR_RNDN);
        mpfr_mul(r6329298, r6329295, r6329297, MPFR_RNDN);
        mpfr_add(r6329299, r6329294, r6329298, MPFR_RNDN);
        return mpfr_get_d(r6329299, MPFR_RNDN);
}

static mpfr_t r6329300, r6329301, r6329302, r6329303, r6329304, r6329305, r6329306, r6329307, r6329308, r6329309, r6329310, r6329311, r6329312, r6329313, r6329314, r6329315, r6329316, r6329317, r6329318, r6329319, r6329320, r6329321, r6329322, r6329323, r6329324, r6329325;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6329300, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6329301, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r6329302);
        mpfr_init(r6329303);
        mpfr_init(r6329304);
        mpfr_init(r6329305);
        mpfr_init_set_str(r6329306, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r6329307);
        mpfr_init(r6329308);
        mpfr_init(r6329309);
        mpfr_init(r6329310);
        mpfr_init_set_str(r6329311, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r6329312);
        mpfr_init(r6329313);
        mpfr_init(r6329314);
        mpfr_init(r6329315);
        mpfr_init_set_str(r6329316, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r6329317);
        mpfr_init(r6329318);
        mpfr_init(r6329319);
        mpfr_init(r6329320);
        mpfr_init_set_str(r6329321, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r6329322);
        mpfr_init(r6329323);
        mpfr_init(r6329324);
        mpfr_init(r6329325);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r6329302, x, MPFR_RNDN);
        mpfr_mul(r6329303, r6329302, r6329302, MPFR_RNDN);
        mpfr_mul(r6329304, r6329301, r6329303, MPFR_RNDN);
        mpfr_add(r6329305, r6329300, r6329304, MPFR_RNDN);
        ;
        mpfr_mul(r6329307, r6329303, r6329302, MPFR_RNDN);
        mpfr_mul(r6329308, r6329307, r6329302, MPFR_RNDN);
        mpfr_mul(r6329309, r6329306, r6329308, MPFR_RNDN);
        mpfr_add(r6329310, r6329305, r6329309, MPFR_RNDN);
        ;
        mpfr_mul(r6329312, r6329308, r6329302, MPFR_RNDN);
        mpfr_mul(r6329313, r6329312, r6329302, MPFR_RNDN);
        mpfr_mul(r6329314, r6329311, r6329313, MPFR_RNDN);
        mpfr_add(r6329315, r6329310, r6329314, MPFR_RNDN);
        ;
        mpfr_mul(r6329317, r6329313, r6329302, MPFR_RNDN);
        mpfr_mul(r6329318, r6329317, r6329302, MPFR_RNDN);
        mpfr_mul(r6329319, r6329316, r6329318, MPFR_RNDN);
        mpfr_add(r6329320, r6329315, r6329319, MPFR_RNDN);
        ;
        mpfr_mul(r6329322, r6329318, r6329302, MPFR_RNDN);
        mpfr_mul(r6329323, r6329322, r6329302, MPFR_RNDN);
        mpfr_mul(r6329324, r6329321, r6329323, MPFR_RNDN);
        mpfr_add(r6329325, r6329320, r6329324, MPFR_RNDN);
        return mpfr_get_d(r6329325, MPFR_RNDN);
}

static mpfr_t r6329326, r6329327, r6329328, r6329329, r6329330, r6329331, r6329332, r6329333, r6329334, r6329335, r6329336, r6329337, r6329338, r6329339, r6329340, r6329341, r6329342, r6329343, r6329344, r6329345, r6329346, r6329347, r6329348, r6329349, r6329350, r6329351;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6329326, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6329327, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r6329328);
        mpfr_init(r6329329);
        mpfr_init(r6329330);
        mpfr_init(r6329331);
        mpfr_init_set_str(r6329332, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r6329333);
        mpfr_init(r6329334);
        mpfr_init(r6329335);
        mpfr_init(r6329336);
        mpfr_init_set_str(r6329337, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r6329338);
        mpfr_init(r6329339);
        mpfr_init(r6329340);
        mpfr_init(r6329341);
        mpfr_init_set_str(r6329342, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r6329343);
        mpfr_init(r6329344);
        mpfr_init(r6329345);
        mpfr_init(r6329346);
        mpfr_init_set_str(r6329347, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r6329348);
        mpfr_init(r6329349);
        mpfr_init(r6329350);
        mpfr_init(r6329351);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r6329328, x, MPFR_RNDN);
        mpfr_mul(r6329329, r6329328, r6329328, MPFR_RNDN);
        mpfr_mul(r6329330, r6329327, r6329329, MPFR_RNDN);
        mpfr_add(r6329331, r6329326, r6329330, MPFR_RNDN);
        ;
        mpfr_mul(r6329333, r6329329, r6329328, MPFR_RNDN);
        mpfr_mul(r6329334, r6329333, r6329328, MPFR_RNDN);
        mpfr_mul(r6329335, r6329332, r6329334, MPFR_RNDN);
        mpfr_add(r6329336, r6329331, r6329335, MPFR_RNDN);
        ;
        mpfr_mul(r6329338, r6329334, r6329328, MPFR_RNDN);
        mpfr_mul(r6329339, r6329338, r6329328, MPFR_RNDN);
        mpfr_mul(r6329340, r6329337, r6329339, MPFR_RNDN);
        mpfr_add(r6329341, r6329336, r6329340, MPFR_RNDN);
        ;
        mpfr_mul(r6329343, r6329339, r6329328, MPFR_RNDN);
        mpfr_mul(r6329344, r6329343, r6329328, MPFR_RNDN);
        mpfr_mul(r6329345, r6329342, r6329344, MPFR_RNDN);
        mpfr_add(r6329346, r6329341, r6329345, MPFR_RNDN);
        ;
        mpfr_mul(r6329348, r6329344, r6329328, MPFR_RNDN);
        mpfr_mul(r6329349, r6329348, r6329328, MPFR_RNDN);
        mpfr_mul(r6329350, r6329347, r6329349, MPFR_RNDN);
        mpfr_add(r6329351, r6329346, r6329350, MPFR_RNDN);
        return mpfr_get_d(r6329351, MPFR_RNDN);
}

