#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r83191146 = 1.0;
        float r83191147 = -5.0;
        float r83191148 = x;
        float r83191149 = r83191147 * r83191148;
        float r83191150 = r83191146 + r83191149;
        float r83191151 = 5.0;
        float r83191152 = r83191148 * r83191148;
        float r83191153 = r83191151 * r83191152;
        float r83191154 = r83191150 + r83191153;
        float r83191155 = -1.666667;
        float r83191156 = r83191152 * r83191148;
        float r83191157 = r83191155 * r83191156;
        float r83191158 = r83191154 + r83191157;
        float r83191159 = 0.208333;
        float r83191160 = r83191156 * r83191148;
        float r83191161 = r83191159 * r83191160;
        float r83191162 = r83191158 + r83191161;
        float r83191163 = -0.008333;
        float r83191164 = r83191160 * r83191148;
        float r83191165 = r83191163 * r83191164;
        float r83191166 = r83191162 + r83191165;
        return r83191166;
}

double f_id(double x) {
        double r83191167 = 1.0;
        double r83191168 = -5.0;
        double r83191169 = x;
        double r83191170 = r83191168 * r83191169;
        double r83191171 = r83191167 + r83191170;
        double r83191172 = 5.0;
        double r83191173 = r83191169 * r83191169;
        double r83191174 = r83191172 * r83191173;
        double r83191175 = r83191171 + r83191174;
        double r83191176 = -1.666667;
        double r83191177 = r83191173 * r83191169;
        double r83191178 = r83191176 * r83191177;
        double r83191179 = r83191175 + r83191178;
        double r83191180 = 0.208333;
        double r83191181 = r83191177 * r83191169;
        double r83191182 = r83191180 * r83191181;
        double r83191183 = r83191179 + r83191182;
        double r83191184 = -0.008333;
        double r83191185 = r83191181 * r83191169;
        double r83191186 = r83191184 * r83191185;
        double r83191187 = r83191183 + r83191186;
        return r83191187;
}


double f_of(float x) {
        float r83191188 = 1.0;
        float r83191189 = x;
        float r83191190 = -5.0;
        float r83191191 = r83191189 * r83191190;
        float r83191192 = r83191188 + r83191191;
        float r83191193 = exp(r83191192);
        float r83191194 = r83191189 * r83191189;
        float r83191195 = exp(r83191194);
        float r83191196 = -1.666667;
        float r83191197 = r83191196 * r83191189;
        float r83191198 = pow(r83191195, r83191197);
        float r83191199 = exp(r83191189);
        float r83191200 = 5.0;
        float r83191201 = r83191189 * r83191200;
        float r83191202 = pow(r83191199, r83191201);
        float r83191203 = r83191198 * r83191202;
        float r83191204 = r83191193 * r83191203;
        float r83191205 = log(r83191204);
        float r83191206 = 3;
        float r83191207 = pow(r83191189, r83191206);
        float r83191208 = r83191189 * r83191207;
        float r83191209 = -0.008333;
        float r83191210 = r83191189 * r83191209;
        float r83191211 = 0.208333;
        float r83191212 = r83191210 + r83191211;
        float r83191213 = r83191208 * r83191212;
        float r83191214 = r83191205 + r83191213;
        return r83191214;
}

double f_od(double x) {
        double r83191215 = 1.0;
        double r83191216 = x;
        double r83191217 = -5.0;
        double r83191218 = r83191216 * r83191217;
        double r83191219 = r83191215 + r83191218;
        double r83191220 = exp(r83191219);
        double r83191221 = r83191216 * r83191216;
        double r83191222 = exp(r83191221);
        double r83191223 = -1.666667;
        double r83191224 = r83191223 * r83191216;
        double r83191225 = pow(r83191222, r83191224);
        double r83191226 = exp(r83191216);
        double r83191227 = 5.0;
        double r83191228 = r83191216 * r83191227;
        double r83191229 = pow(r83191226, r83191228);
        double r83191230 = r83191225 * r83191229;
        double r83191231 = r83191220 * r83191230;
        double r83191232 = log(r83191231);
        double r83191233 = 3;
        double r83191234 = pow(r83191216, r83191233);
        double r83191235 = r83191216 * r83191234;
        double r83191236 = -0.008333;
        double r83191237 = r83191216 * r83191236;
        double r83191238 = 0.208333;
        double r83191239 = r83191237 + r83191238;
        double r83191240 = r83191235 * r83191239;
        double r83191241 = r83191232 + r83191240;
        return r83191241;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r83191242, r83191243, r83191244, r83191245, r83191246, r83191247, r83191248, r83191249, r83191250, r83191251, r83191252, r83191253, r83191254, r83191255, r83191256, r83191257, r83191258, r83191259, r83191260, r83191261, r83191262;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191242, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r83191243, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r83191244);
        mpfr_init(r83191245);
        mpfr_init(r83191246);
        mpfr_init_set_str(r83191247, "5.0", 10, MPFR_RNDN);
        mpfr_init(r83191248);
        mpfr_init(r83191249);
        mpfr_init(r83191250);
        mpfr_init_set_str(r83191251, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r83191252);
        mpfr_init(r83191253);
        mpfr_init(r83191254);
        mpfr_init_set_str(r83191255, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r83191256);
        mpfr_init(r83191257);
        mpfr_init(r83191258);
        mpfr_init_set_str(r83191259, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r83191260);
        mpfr_init(r83191261);
        mpfr_init(r83191262);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r83191244, x, MPFR_RNDN);
        mpfr_mul(r83191245, r83191243, r83191244, MPFR_RNDN);
        mpfr_add(r83191246, r83191242, r83191245, MPFR_RNDN);
        ;
        mpfr_mul(r83191248, r83191244, r83191244, MPFR_RNDN);
        mpfr_mul(r83191249, r83191247, r83191248, MPFR_RNDN);
        mpfr_add(r83191250, r83191246, r83191249, MPFR_RNDN);
        ;
        mpfr_mul(r83191252, r83191248, r83191244, MPFR_RNDN);
        mpfr_mul(r83191253, r83191251, r83191252, MPFR_RNDN);
        mpfr_add(r83191254, r83191250, r83191253, MPFR_RNDN);
        ;
        mpfr_mul(r83191256, r83191252, r83191244, MPFR_RNDN);
        mpfr_mul(r83191257, r83191255, r83191256, MPFR_RNDN);
        mpfr_add(r83191258, r83191254, r83191257, MPFR_RNDN);
        ;
        mpfr_mul(r83191260, r83191256, r83191244, MPFR_RNDN);
        mpfr_mul(r83191261, r83191259, r83191260, MPFR_RNDN);
        mpfr_add(r83191262, r83191258, r83191261, MPFR_RNDN);
        return mpfr_get_d(r83191262, MPFR_RNDN);
}

static mpfr_t r83191263, r83191264, r83191265, r83191266, r83191267, r83191268, r83191269, r83191270, r83191271, r83191272, r83191273, r83191274, r83191275, r83191276, r83191277, r83191278, r83191279, r83191280, r83191281, r83191282, r83191283, r83191284, r83191285, r83191286, r83191287, r83191288, r83191289;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191263, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83191264);
        mpfr_init_set_str(r83191265, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r83191266);
        mpfr_init(r83191267);
        mpfr_init(r83191268);
        mpfr_init(r83191269);
        mpfr_init(r83191270);
        mpfr_init_set_str(r83191271, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r83191272);
        mpfr_init(r83191273);
        mpfr_init(r83191274);
        mpfr_init_set_str(r83191275, "5.0", 10, MPFR_RNDN);
        mpfr_init(r83191276);
        mpfr_init(r83191277);
        mpfr_init(r83191278);
        mpfr_init(r83191279);
        mpfr_init(r83191280);
        mpfr_init_set_str(r83191281, "3", 10, MPFR_RNDN);
        mpfr_init(r83191282);
        mpfr_init(r83191283);
        mpfr_init_set_str(r83191284, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r83191285);
        mpfr_init_set_str(r83191286, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r83191287);
        mpfr_init(r83191288);
        mpfr_init(r83191289);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r83191264, x, MPFR_RNDN);
        ;
        mpfr_mul(r83191266, r83191264, r83191265, MPFR_RNDN);
        mpfr_add(r83191267, r83191263, r83191266, MPFR_RNDN);
        mpfr_exp(r83191268, r83191267, MPFR_RNDN);
        mpfr_mul(r83191269, r83191264, r83191264, MPFR_RNDN);
        mpfr_exp(r83191270, r83191269, MPFR_RNDN);
        ;
        mpfr_mul(r83191272, r83191271, r83191264, MPFR_RNDN);
        mpfr_pow(r83191273, r83191270, r83191272, MPFR_RNDN);
        mpfr_exp(r83191274, r83191264, MPFR_RNDN);
        ;
        mpfr_mul(r83191276, r83191264, r83191275, MPFR_RNDN);
        mpfr_pow(r83191277, r83191274, r83191276, MPFR_RNDN);
        mpfr_mul(r83191278, r83191273, r83191277, MPFR_RNDN);
        mpfr_mul(r83191279, r83191268, r83191278, MPFR_RNDN);
        mpfr_log(r83191280, r83191279, MPFR_RNDN);
        ;
        mpfr_pow(r83191282, r83191264, r83191281, MPFR_RNDN);
        mpfr_mul(r83191283, r83191264, r83191282, MPFR_RNDN);
        ;
        mpfr_mul(r83191285, r83191264, r83191284, MPFR_RNDN);
        ;
        mpfr_add(r83191287, r83191285, r83191286, MPFR_RNDN);
        mpfr_mul(r83191288, r83191283, r83191287, MPFR_RNDN);
        mpfr_add(r83191289, r83191280, r83191288, MPFR_RNDN);
        return mpfr_get_d(r83191289, MPFR_RNDN);
}

static mpfr_t r83191290, r83191291, r83191292, r83191293, r83191294, r83191295, r83191296, r83191297, r83191298, r83191299, r83191300, r83191301, r83191302, r83191303, r83191304, r83191305, r83191306, r83191307, r83191308, r83191309, r83191310, r83191311, r83191312, r83191313, r83191314, r83191315, r83191316;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r83191290, "1.0", 10, MPFR_RNDN);
        mpfr_init(r83191291);
        mpfr_init_set_str(r83191292, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r83191293);
        mpfr_init(r83191294);
        mpfr_init(r83191295);
        mpfr_init(r83191296);
        mpfr_init(r83191297);
        mpfr_init_set_str(r83191298, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r83191299);
        mpfr_init(r83191300);
        mpfr_init(r83191301);
        mpfr_init_set_str(r83191302, "5.0", 10, MPFR_RNDN);
        mpfr_init(r83191303);
        mpfr_init(r83191304);
        mpfr_init(r83191305);
        mpfr_init(r83191306);
        mpfr_init(r83191307);
        mpfr_init_set_str(r83191308, "3", 10, MPFR_RNDN);
        mpfr_init(r83191309);
        mpfr_init(r83191310);
        mpfr_init_set_str(r83191311, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r83191312);
        mpfr_init_set_str(r83191313, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r83191314);
        mpfr_init(r83191315);
        mpfr_init(r83191316);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r83191291, x, MPFR_RNDN);
        ;
        mpfr_mul(r83191293, r83191291, r83191292, MPFR_RNDN);
        mpfr_add(r83191294, r83191290, r83191293, MPFR_RNDN);
        mpfr_exp(r83191295, r83191294, MPFR_RNDN);
        mpfr_mul(r83191296, r83191291, r83191291, MPFR_RNDN);
        mpfr_exp(r83191297, r83191296, MPFR_RNDN);
        ;
        mpfr_mul(r83191299, r83191298, r83191291, MPFR_RNDN);
        mpfr_pow(r83191300, r83191297, r83191299, MPFR_RNDN);
        mpfr_exp(r83191301, r83191291, MPFR_RNDN);
        ;
        mpfr_mul(r83191303, r83191291, r83191302, MPFR_RNDN);
        mpfr_pow(r83191304, r83191301, r83191303, MPFR_RNDN);
        mpfr_mul(r83191305, r83191300, r83191304, MPFR_RNDN);
        mpfr_mul(r83191306, r83191295, r83191305, MPFR_RNDN);
        mpfr_log(r83191307, r83191306, MPFR_RNDN);
        ;
        mpfr_pow(r83191309, r83191291, r83191308, MPFR_RNDN);
        mpfr_mul(r83191310, r83191291, r83191309, MPFR_RNDN);
        ;
        mpfr_mul(r83191312, r83191291, r83191311, MPFR_RNDN);
        ;
        mpfr_add(r83191314, r83191312, r83191313, MPFR_RNDN);
        mpfr_mul(r83191315, r83191310, r83191314, MPFR_RNDN);
        mpfr_add(r83191316, r83191307, r83191315, MPFR_RNDN);
        return mpfr_get_d(r83191316, MPFR_RNDN);
}

