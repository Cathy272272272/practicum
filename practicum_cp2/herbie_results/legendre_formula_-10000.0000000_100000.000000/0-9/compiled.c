#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r7402157 = 2.460938;
        float r7402158 = x;
        float r7402159 = r7402157 * r7402158;
        float r7402160 = -36.09375;
        float r7402161 = r7402158 * r7402158;
        float r7402162 = r7402161 * r7402158;
        float r7402163 = r7402160 * r7402162;
        float r7402164 = r7402159 + r7402163;
        float r7402165 = 140.765625;
        float r7402166 = r7402162 * r7402158;
        float r7402167 = r7402166 * r7402158;
        float r7402168 = r7402165 * r7402167;
        float r7402169 = r7402164 + r7402168;
        float r7402170 = -201.09375;
        float r7402171 = r7402167 * r7402158;
        float r7402172 = r7402171 * r7402158;
        float r7402173 = r7402170 * r7402172;
        float r7402174 = r7402169 + r7402173;
        float r7402175 = 94.960938;
        float r7402176 = r7402172 * r7402158;
        float r7402177 = r7402176 * r7402158;
        float r7402178 = r7402175 * r7402177;
        float r7402179 = r7402174 + r7402178;
        return r7402179;
}

double f_id(double x) {
        double r7402180 = 2.460938;
        double r7402181 = x;
        double r7402182 = r7402180 * r7402181;
        double r7402183 = -36.09375;
        double r7402184 = r7402181 * r7402181;
        double r7402185 = r7402184 * r7402181;
        double r7402186 = r7402183 * r7402185;
        double r7402187 = r7402182 + r7402186;
        double r7402188 = 140.765625;
        double r7402189 = r7402185 * r7402181;
        double r7402190 = r7402189 * r7402181;
        double r7402191 = r7402188 * r7402190;
        double r7402192 = r7402187 + r7402191;
        double r7402193 = -201.09375;
        double r7402194 = r7402190 * r7402181;
        double r7402195 = r7402194 * r7402181;
        double r7402196 = r7402193 * r7402195;
        double r7402197 = r7402192 + r7402196;
        double r7402198 = 94.960938;
        double r7402199 = r7402195 * r7402181;
        double r7402200 = r7402199 * r7402181;
        double r7402201 = r7402198 * r7402200;
        double r7402202 = r7402197 + r7402201;
        return r7402202;
}


double f_of(float x) {
        float r7402203 = x;
        float r7402204 = r7402203 * r7402203;
        float r7402205 = 3;
        float r7402206 = pow(r7402204, r7402205);
        float r7402207 = r7402206 * r7402203;
        float r7402208 = 94.960938;
        float r7402209 = r7402208 * r7402203;
        float r7402210 = r7402203 * r7402209;
        float r7402211 = -201.09375;
        float r7402212 = r7402210 + r7402211;
        float r7402213 = r7402207 * r7402212;
        float r7402214 = 140.765625;
        float r7402215 = r7402214 * r7402203;
        float r7402216 = r7402215 * r7402204;
        float r7402217 = r7402216 * r7402204;
        float r7402218 = 2.460938;
        float r7402219 = r7402218 * r7402203;
        float r7402220 = r7402217 + r7402219;
        float r7402221 = r7402213 + r7402220;
        float r7402222 = -36.09375;
        float r7402223 = r7402222 * r7402203;
        float r7402224 = r7402223 * r7402204;
        float r7402225 = r7402224 * r7402224;
        float r7402226 = cbrt(r7402225);
        float r7402227 = 36.09375;
        float r7402228 = -r7402227;
        float r7402229 = pow(r7402203, r7402205);
        float r7402230 = r7402228 * r7402229;
        float r7402231 = cbrt(r7402230);
        float r7402232 = r7402226 * r7402231;
        float r7402233 = r7402221 + r7402232;
        return r7402233;
}

double f_od(double x) {
        double r7402234 = x;
        double r7402235 = r7402234 * r7402234;
        double r7402236 = 3;
        double r7402237 = pow(r7402235, r7402236);
        double r7402238 = r7402237 * r7402234;
        double r7402239 = 94.960938;
        double r7402240 = r7402239 * r7402234;
        double r7402241 = r7402234 * r7402240;
        double r7402242 = -201.09375;
        double r7402243 = r7402241 + r7402242;
        double r7402244 = r7402238 * r7402243;
        double r7402245 = 140.765625;
        double r7402246 = r7402245 * r7402234;
        double r7402247 = r7402246 * r7402235;
        double r7402248 = r7402247 * r7402235;
        double r7402249 = 2.460938;
        double r7402250 = r7402249 * r7402234;
        double r7402251 = r7402248 + r7402250;
        double r7402252 = r7402244 + r7402251;
        double r7402253 = -36.09375;
        double r7402254 = r7402253 * r7402234;
        double r7402255 = r7402254 * r7402235;
        double r7402256 = r7402255 * r7402255;
        double r7402257 = cbrt(r7402256);
        double r7402258 = 36.09375;
        double r7402259 = -r7402258;
        double r7402260 = pow(r7402234, r7402236);
        double r7402261 = r7402259 * r7402260;
        double r7402262 = cbrt(r7402261);
        double r7402263 = r7402257 * r7402262;
        double r7402264 = r7402252 + r7402263;
        return r7402264;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402265, r7402266, r7402267, r7402268, r7402269, r7402270, r7402271, r7402272, r7402273, r7402274, r7402275, r7402276, r7402277, r7402278, r7402279, r7402280, r7402281, r7402282, r7402283, r7402284, r7402285, r7402286, r7402287;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7402265, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7402266);
        mpfr_init(r7402267);
        mpfr_init_set_str(r7402268, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7402269);
        mpfr_init(r7402270);
        mpfr_init(r7402271);
        mpfr_init(r7402272);
        mpfr_init_set_str(r7402273, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7402274);
        mpfr_init(r7402275);
        mpfr_init(r7402276);
        mpfr_init(r7402277);
        mpfr_init_set_str(r7402278, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7402279);
        mpfr_init(r7402280);
        mpfr_init(r7402281);
        mpfr_init(r7402282);
        mpfr_init_set_str(r7402283, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7402284);
        mpfr_init(r7402285);
        mpfr_init(r7402286);
        mpfr_init(r7402287);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7402266, x, MPFR_RNDN);
        mpfr_mul(r7402267, r7402265, r7402266, MPFR_RNDN);
        ;
        mpfr_mul(r7402269, r7402266, r7402266, MPFR_RNDN);
        mpfr_mul(r7402270, r7402269, r7402266, MPFR_RNDN);
        mpfr_mul(r7402271, r7402268, r7402270, MPFR_RNDN);
        mpfr_add(r7402272, r7402267, r7402271, MPFR_RNDN);
        ;
        mpfr_mul(r7402274, r7402270, r7402266, MPFR_RNDN);
        mpfr_mul(r7402275, r7402274, r7402266, MPFR_RNDN);
        mpfr_mul(r7402276, r7402273, r7402275, MPFR_RNDN);
        mpfr_add(r7402277, r7402272, r7402276, MPFR_RNDN);
        ;
        mpfr_mul(r7402279, r7402275, r7402266, MPFR_RNDN);
        mpfr_mul(r7402280, r7402279, r7402266, MPFR_RNDN);
        mpfr_mul(r7402281, r7402278, r7402280, MPFR_RNDN);
        mpfr_add(r7402282, r7402277, r7402281, MPFR_RNDN);
        ;
        mpfr_mul(r7402284, r7402280, r7402266, MPFR_RNDN);
        mpfr_mul(r7402285, r7402284, r7402266, MPFR_RNDN);
        mpfr_mul(r7402286, r7402283, r7402285, MPFR_RNDN);
        mpfr_add(r7402287, r7402282, r7402286, MPFR_RNDN);
        return mpfr_get_d(r7402287, MPFR_RNDN);
}

static mpfr_t r7402288, r7402289, r7402290, r7402291, r7402292, r7402293, r7402294, r7402295, r7402296, r7402297, r7402298, r7402299, r7402300, r7402301, r7402302, r7402303, r7402304, r7402305, r7402306, r7402307, r7402308, r7402309, r7402310, r7402311, r7402312, r7402313, r7402314, r7402315, r7402316, r7402317, r7402318;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7402288);
        mpfr_init(r7402289);
        mpfr_init_set_str(r7402290, "3", 10, MPFR_RNDN);
        mpfr_init(r7402291);
        mpfr_init(r7402292);
        mpfr_init_set_str(r7402293, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7402294);
        mpfr_init(r7402295);
        mpfr_init_set_str(r7402296, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7402297);
        mpfr_init(r7402298);
        mpfr_init_set_str(r7402299, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7402300);
        mpfr_init(r7402301);
        mpfr_init(r7402302);
        mpfr_init_set_str(r7402303, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7402304);
        mpfr_init(r7402305);
        mpfr_init(r7402306);
        mpfr_init_set_str(r7402307, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7402308);
        mpfr_init(r7402309);
        mpfr_init(r7402310);
        mpfr_init(r7402311);
        mpfr_init_set_str(r7402312, "36.09375", 10, MPFR_RNDN);
        mpfr_init(r7402313);
        mpfr_init(r7402314);
        mpfr_init(r7402315);
        mpfr_init(r7402316);
        mpfr_init(r7402317);
        mpfr_init(r7402318);
}

double f_fm(double x) {
        mpfr_set_d(r7402288, x, MPFR_RNDN);
        mpfr_mul(r7402289, r7402288, r7402288, MPFR_RNDN);
        ;
        mpfr_pow(r7402291, r7402289, r7402290, MPFR_RNDN);
        mpfr_mul(r7402292, r7402291, r7402288, MPFR_RNDN);
        ;
        mpfr_mul(r7402294, r7402293, r7402288, MPFR_RNDN);
        mpfr_mul(r7402295, r7402288, r7402294, MPFR_RNDN);
        ;
        mpfr_add(r7402297, r7402295, r7402296, MPFR_RNDN);
        mpfr_mul(r7402298, r7402292, r7402297, MPFR_RNDN);
        ;
        mpfr_mul(r7402300, r7402299, r7402288, MPFR_RNDN);
        mpfr_mul(r7402301, r7402300, r7402289, MPFR_RNDN);
        mpfr_mul(r7402302, r7402301, r7402289, MPFR_RNDN);
        ;
        mpfr_mul(r7402304, r7402303, r7402288, MPFR_RNDN);
        mpfr_add(r7402305, r7402302, r7402304, MPFR_RNDN);
        mpfr_add(r7402306, r7402298, r7402305, MPFR_RNDN);
        ;
        mpfr_mul(r7402308, r7402307, r7402288, MPFR_RNDN);
        mpfr_mul(r7402309, r7402308, r7402289, MPFR_RNDN);
        mpfr_mul(r7402310, r7402309, r7402309, MPFR_RNDN);
        mpfr_cbrt(r7402311, r7402310, MPFR_RNDN);
        ;
        mpfr_neg(r7402313, r7402312, MPFR_RNDN);
        mpfr_pow(r7402314, r7402288, r7402290, MPFR_RNDN);
        mpfr_mul(r7402315, r7402313, r7402314, MPFR_RNDN);
        mpfr_cbrt(r7402316, r7402315, MPFR_RNDN);
        mpfr_mul(r7402317, r7402311, r7402316, MPFR_RNDN);
        mpfr_add(r7402318, r7402306, r7402317, MPFR_RNDN);
        return mpfr_get_d(r7402318, MPFR_RNDN);
}

static mpfr_t r7402319, r7402320, r7402321, r7402322, r7402323, r7402324, r7402325, r7402326, r7402327, r7402328, r7402329, r7402330, r7402331, r7402332, r7402333, r7402334, r7402335, r7402336, r7402337, r7402338, r7402339, r7402340, r7402341, r7402342, r7402343, r7402344, r7402345, r7402346, r7402347, r7402348, r7402349;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7402319);
        mpfr_init(r7402320);
        mpfr_init_set_str(r7402321, "3", 10, MPFR_RNDN);
        mpfr_init(r7402322);
        mpfr_init(r7402323);
        mpfr_init_set_str(r7402324, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r7402325);
        mpfr_init(r7402326);
        mpfr_init_set_str(r7402327, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r7402328);
        mpfr_init(r7402329);
        mpfr_init_set_str(r7402330, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r7402331);
        mpfr_init(r7402332);
        mpfr_init(r7402333);
        mpfr_init_set_str(r7402334, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r7402335);
        mpfr_init(r7402336);
        mpfr_init(r7402337);
        mpfr_init_set_str(r7402338, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r7402339);
        mpfr_init(r7402340);
        mpfr_init(r7402341);
        mpfr_init(r7402342);
        mpfr_init_set_str(r7402343, "36.09375", 10, MPFR_RNDN);
        mpfr_init(r7402344);
        mpfr_init(r7402345);
        mpfr_init(r7402346);
        mpfr_init(r7402347);
        mpfr_init(r7402348);
        mpfr_init(r7402349);
}

double f_dm(double x) {
        mpfr_set_d(r7402319, x, MPFR_RNDN);
        mpfr_mul(r7402320, r7402319, r7402319, MPFR_RNDN);
        ;
        mpfr_pow(r7402322, r7402320, r7402321, MPFR_RNDN);
        mpfr_mul(r7402323, r7402322, r7402319, MPFR_RNDN);
        ;
        mpfr_mul(r7402325, r7402324, r7402319, MPFR_RNDN);
        mpfr_mul(r7402326, r7402319, r7402325, MPFR_RNDN);
        ;
        mpfr_add(r7402328, r7402326, r7402327, MPFR_RNDN);
        mpfr_mul(r7402329, r7402323, r7402328, MPFR_RNDN);
        ;
        mpfr_mul(r7402331, r7402330, r7402319, MPFR_RNDN);
        mpfr_mul(r7402332, r7402331, r7402320, MPFR_RNDN);
        mpfr_mul(r7402333, r7402332, r7402320, MPFR_RNDN);
        ;
        mpfr_mul(r7402335, r7402334, r7402319, MPFR_RNDN);
        mpfr_add(r7402336, r7402333, r7402335, MPFR_RNDN);
        mpfr_add(r7402337, r7402329, r7402336, MPFR_RNDN);
        ;
        mpfr_mul(r7402339, r7402338, r7402319, MPFR_RNDN);
        mpfr_mul(r7402340, r7402339, r7402320, MPFR_RNDN);
        mpfr_mul(r7402341, r7402340, r7402340, MPFR_RNDN);
        mpfr_cbrt(r7402342, r7402341, MPFR_RNDN);
        ;
        mpfr_neg(r7402344, r7402343, MPFR_RNDN);
        mpfr_pow(r7402345, r7402319, r7402321, MPFR_RNDN);
        mpfr_mul(r7402346, r7402344, r7402345, MPFR_RNDN);
        mpfr_cbrt(r7402347, r7402346, MPFR_RNDN);
        mpfr_mul(r7402348, r7402342, r7402347, MPFR_RNDN);
        mpfr_add(r7402349, r7402337, r7402348, MPFR_RNDN);
        return mpfr_get_d(r7402349, MPFR_RNDN);
}

