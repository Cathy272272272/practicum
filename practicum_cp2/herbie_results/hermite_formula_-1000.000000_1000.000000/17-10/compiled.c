#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r12292158 = -30240.0;
        float r12292159 = 302400.0;
        float r12292160 = x;
        float r12292161 = r12292160 * r12292160;
        float r12292162 = r12292159 * r12292161;
        float r12292163 = r12292158 + r12292162;
        float r12292164 = -403200.0;
        float r12292165 = r12292161 * r12292160;
        float r12292166 = r12292165 * r12292160;
        float r12292167 = r12292164 * r12292166;
        float r12292168 = r12292163 + r12292167;
        float r12292169 = 161280.0;
        float r12292170 = r12292166 * r12292160;
        float r12292171 = r12292170 * r12292160;
        float r12292172 = r12292169 * r12292171;
        float r12292173 = r12292168 + r12292172;
        float r12292174 = -23040.0;
        float r12292175 = r12292171 * r12292160;
        float r12292176 = r12292175 * r12292160;
        float r12292177 = r12292174 * r12292176;
        float r12292178 = r12292173 + r12292177;
        float r12292179 = 1024.0;
        float r12292180 = r12292176 * r12292160;
        float r12292181 = r12292180 * r12292160;
        float r12292182 = r12292179 * r12292181;
        float r12292183 = r12292178 + r12292182;
        return r12292183;
}

double f_id(double x) {
        double r12292184 = -30240.0;
        double r12292185 = 302400.0;
        double r12292186 = x;
        double r12292187 = r12292186 * r12292186;
        double r12292188 = r12292185 * r12292187;
        double r12292189 = r12292184 + r12292188;
        double r12292190 = -403200.0;
        double r12292191 = r12292187 * r12292186;
        double r12292192 = r12292191 * r12292186;
        double r12292193 = r12292190 * r12292192;
        double r12292194 = r12292189 + r12292193;
        double r12292195 = 161280.0;
        double r12292196 = r12292192 * r12292186;
        double r12292197 = r12292196 * r12292186;
        double r12292198 = r12292195 * r12292197;
        double r12292199 = r12292194 + r12292198;
        double r12292200 = -23040.0;
        double r12292201 = r12292197 * r12292186;
        double r12292202 = r12292201 * r12292186;
        double r12292203 = r12292200 * r12292202;
        double r12292204 = r12292199 + r12292203;
        double r12292205 = 1024.0;
        double r12292206 = r12292202 * r12292186;
        double r12292207 = r12292206 * r12292186;
        double r12292208 = r12292205 * r12292207;
        double r12292209 = r12292204 + r12292208;
        return r12292209;
}


double f_of(float x) {
        float r12292210 = -403200.0;
        float r12292211 = x;
        float r12292212 = r12292210 * r12292211;
        float r12292213 = 3;
        float r12292214 = pow(r12292211, r12292213);
        float r12292215 = r12292212 * r12292214;
        float r12292216 = r12292211 * r12292211;
        float r12292217 = r12292216 * r12292216;
        float r12292218 = 161280.0;
        float r12292219 = r12292218 * r12292211;
        float r12292220 = r12292211 * r12292219;
        float r12292221 = r12292217 * r12292220;
        float r12292222 = r12292215 + r12292221;
        float r12292223 = r12292217 * r12292217;
        float r12292224 = 1024.0;
        float r12292225 = r12292224 * r12292216;
        float r12292226 = -23040.0;
        float r12292227 = r12292225 + r12292226;
        float r12292228 = r12292223 * r12292227;
        float r12292229 = r12292222 + r12292228;
        float r12292230 = 302400.0;
        float r12292231 = r12292211 * r12292230;
        float r12292232 = r12292211 * r12292231;
        float r12292233 = -30240.0;
        float r12292234 = r12292232 + r12292233;
        float r12292235 = r12292229 + r12292234;
        return r12292235;
}

double f_od(double x) {
        double r12292236 = -403200.0;
        double r12292237 = x;
        double r12292238 = r12292236 * r12292237;
        double r12292239 = 3;
        double r12292240 = pow(r12292237, r12292239);
        double r12292241 = r12292238 * r12292240;
        double r12292242 = r12292237 * r12292237;
        double r12292243 = r12292242 * r12292242;
        double r12292244 = 161280.0;
        double r12292245 = r12292244 * r12292237;
        double r12292246 = r12292237 * r12292245;
        double r12292247 = r12292243 * r12292246;
        double r12292248 = r12292241 + r12292247;
        double r12292249 = r12292243 * r12292243;
        double r12292250 = 1024.0;
        double r12292251 = r12292250 * r12292242;
        double r12292252 = -23040.0;
        double r12292253 = r12292251 + r12292252;
        double r12292254 = r12292249 * r12292253;
        double r12292255 = r12292248 + r12292254;
        double r12292256 = 302400.0;
        double r12292257 = r12292237 * r12292256;
        double r12292258 = r12292237 * r12292257;
        double r12292259 = -30240.0;
        double r12292260 = r12292258 + r12292259;
        double r12292261 = r12292255 + r12292260;
        return r12292261;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r12292262, r12292263, r12292264, r12292265, r12292266, r12292267, r12292268, r12292269, r12292270, r12292271, r12292272, r12292273, r12292274, r12292275, r12292276, r12292277, r12292278, r12292279, r12292280, r12292281, r12292282, r12292283, r12292284, r12292285, r12292286, r12292287;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r12292262, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r12292263, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r12292264);
        mpfr_init(r12292265);
        mpfr_init(r12292266);
        mpfr_init(r12292267);
        mpfr_init_set_str(r12292268, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r12292269);
        mpfr_init(r12292270);
        mpfr_init(r12292271);
        mpfr_init(r12292272);
        mpfr_init_set_str(r12292273, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r12292274);
        mpfr_init(r12292275);
        mpfr_init(r12292276);
        mpfr_init(r12292277);
        mpfr_init_set_str(r12292278, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r12292279);
        mpfr_init(r12292280);
        mpfr_init(r12292281);
        mpfr_init(r12292282);
        mpfr_init_set_str(r12292283, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r12292284);
        mpfr_init(r12292285);
        mpfr_init(r12292286);
        mpfr_init(r12292287);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r12292264, x, MPFR_RNDN);
        mpfr_mul(r12292265, r12292264, r12292264, MPFR_RNDN);
        mpfr_mul(r12292266, r12292263, r12292265, MPFR_RNDN);
        mpfr_add(r12292267, r12292262, r12292266, MPFR_RNDN);
        ;
        mpfr_mul(r12292269, r12292265, r12292264, MPFR_RNDN);
        mpfr_mul(r12292270, r12292269, r12292264, MPFR_RNDN);
        mpfr_mul(r12292271, r12292268, r12292270, MPFR_RNDN);
        mpfr_add(r12292272, r12292267, r12292271, MPFR_RNDN);
        ;
        mpfr_mul(r12292274, r12292270, r12292264, MPFR_RNDN);
        mpfr_mul(r12292275, r12292274, r12292264, MPFR_RNDN);
        mpfr_mul(r12292276, r12292273, r12292275, MPFR_RNDN);
        mpfr_add(r12292277, r12292272, r12292276, MPFR_RNDN);
        ;
        mpfr_mul(r12292279, r12292275, r12292264, MPFR_RNDN);
        mpfr_mul(r12292280, r12292279, r12292264, MPFR_RNDN);
        mpfr_mul(r12292281, r12292278, r12292280, MPFR_RNDN);
        mpfr_add(r12292282, r12292277, r12292281, MPFR_RNDN);
        ;
        mpfr_mul(r12292284, r12292280, r12292264, MPFR_RNDN);
        mpfr_mul(r12292285, r12292284, r12292264, MPFR_RNDN);
        mpfr_mul(r12292286, r12292283, r12292285, MPFR_RNDN);
        mpfr_add(r12292287, r12292282, r12292286, MPFR_RNDN);
        return mpfr_get_d(r12292287, MPFR_RNDN);
}

static mpfr_t r12292288, r12292289, r12292290, r12292291, r12292292, r12292293, r12292294, r12292295, r12292296, r12292297, r12292298, r12292299, r12292300, r12292301, r12292302, r12292303, r12292304, r12292305, r12292306, r12292307, r12292308, r12292309, r12292310, r12292311, r12292312, r12292313;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r12292288, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r12292289);
        mpfr_init(r12292290);
        mpfr_init_set_str(r12292291, "3", 10, MPFR_RNDN);
        mpfr_init(r12292292);
        mpfr_init(r12292293);
        mpfr_init(r12292294);
        mpfr_init(r12292295);
        mpfr_init_set_str(r12292296, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r12292297);
        mpfr_init(r12292298);
        mpfr_init(r12292299);
        mpfr_init(r12292300);
        mpfr_init(r12292301);
        mpfr_init_set_str(r12292302, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r12292303);
        mpfr_init_set_str(r12292304, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r12292305);
        mpfr_init(r12292306);
        mpfr_init(r12292307);
        mpfr_init_set_str(r12292308, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r12292309);
        mpfr_init(r12292310);
        mpfr_init_set_str(r12292311, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r12292312);
        mpfr_init(r12292313);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r12292289, x, MPFR_RNDN);
        mpfr_mul(r12292290, r12292288, r12292289, MPFR_RNDN);
        ;
        mpfr_pow(r12292292, r12292289, r12292291, MPFR_RNDN);
        mpfr_mul(r12292293, r12292290, r12292292, MPFR_RNDN);
        mpfr_mul(r12292294, r12292289, r12292289, MPFR_RNDN);
        mpfr_mul(r12292295, r12292294, r12292294, MPFR_RNDN);
        ;
        mpfr_mul(r12292297, r12292296, r12292289, MPFR_RNDN);
        mpfr_mul(r12292298, r12292289, r12292297, MPFR_RNDN);
        mpfr_mul(r12292299, r12292295, r12292298, MPFR_RNDN);
        mpfr_add(r12292300, r12292293, r12292299, MPFR_RNDN);
        mpfr_mul(r12292301, r12292295, r12292295, MPFR_RNDN);
        ;
        mpfr_mul(r12292303, r12292302, r12292294, MPFR_RNDN);
        ;
        mpfr_add(r12292305, r12292303, r12292304, MPFR_RNDN);
        mpfr_mul(r12292306, r12292301, r12292305, MPFR_RNDN);
        mpfr_add(r12292307, r12292300, r12292306, MPFR_RNDN);
        ;
        mpfr_mul(r12292309, r12292289, r12292308, MPFR_RNDN);
        mpfr_mul(r12292310, r12292289, r12292309, MPFR_RNDN);
        ;
        mpfr_add(r12292312, r12292310, r12292311, MPFR_RNDN);
        mpfr_add(r12292313, r12292307, r12292312, MPFR_RNDN);
        return mpfr_get_d(r12292313, MPFR_RNDN);
}

static mpfr_t r12292314, r12292315, r12292316, r12292317, r12292318, r12292319, r12292320, r12292321, r12292322, r12292323, r12292324, r12292325, r12292326, r12292327, r12292328, r12292329, r12292330, r12292331, r12292332, r12292333, r12292334, r12292335, r12292336, r12292337, r12292338, r12292339;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r12292314, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r12292315);
        mpfr_init(r12292316);
        mpfr_init_set_str(r12292317, "3", 10, MPFR_RNDN);
        mpfr_init(r12292318);
        mpfr_init(r12292319);
        mpfr_init(r12292320);
        mpfr_init(r12292321);
        mpfr_init_set_str(r12292322, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r12292323);
        mpfr_init(r12292324);
        mpfr_init(r12292325);
        mpfr_init(r12292326);
        mpfr_init(r12292327);
        mpfr_init_set_str(r12292328, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r12292329);
        mpfr_init_set_str(r12292330, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r12292331);
        mpfr_init(r12292332);
        mpfr_init(r12292333);
        mpfr_init_set_str(r12292334, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r12292335);
        mpfr_init(r12292336);
        mpfr_init_set_str(r12292337, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r12292338);
        mpfr_init(r12292339);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r12292315, x, MPFR_RNDN);
        mpfr_mul(r12292316, r12292314, r12292315, MPFR_RNDN);
        ;
        mpfr_pow(r12292318, r12292315, r12292317, MPFR_RNDN);
        mpfr_mul(r12292319, r12292316, r12292318, MPFR_RNDN);
        mpfr_mul(r12292320, r12292315, r12292315, MPFR_RNDN);
        mpfr_mul(r12292321, r12292320, r12292320, MPFR_RNDN);
        ;
        mpfr_mul(r12292323, r12292322, r12292315, MPFR_RNDN);
        mpfr_mul(r12292324, r12292315, r12292323, MPFR_RNDN);
        mpfr_mul(r12292325, r12292321, r12292324, MPFR_RNDN);
        mpfr_add(r12292326, r12292319, r12292325, MPFR_RNDN);
        mpfr_mul(r12292327, r12292321, r12292321, MPFR_RNDN);
        ;
        mpfr_mul(r12292329, r12292328, r12292320, MPFR_RNDN);
        ;
        mpfr_add(r12292331, r12292329, r12292330, MPFR_RNDN);
        mpfr_mul(r12292332, r12292327, r12292331, MPFR_RNDN);
        mpfr_add(r12292333, r12292326, r12292332, MPFR_RNDN);
        ;
        mpfr_mul(r12292335, r12292315, r12292334, MPFR_RNDN);
        mpfr_mul(r12292336, r12292315, r12292335, MPFR_RNDN);
        ;
        mpfr_add(r12292338, r12292336, r12292337, MPFR_RNDN);
        mpfr_add(r12292339, r12292333, r12292338, MPFR_RNDN);
        return mpfr_get_d(r12292339, MPFR_RNDN);
}

