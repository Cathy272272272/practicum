#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6179133 = -0.246094;
        float r6179134 = 13.535156;
        float r6179135 = x;
        float r6179136 = r6179135 * r6179135;
        float r6179137 = r6179134 * r6179136;
        float r6179138 = r6179133 + r6179137;
        float r6179139 = -117.304688;
        float r6179140 = r6179136 * r6179135;
        float r6179141 = r6179140 * r6179135;
        float r6179142 = r6179139 * r6179141;
        float r6179143 = r6179138 + r6179142;
        float r6179144 = 351.914062;
        float r6179145 = r6179141 * r6179135;
        float r6179146 = r6179145 * r6179135;
        float r6179147 = r6179144 * r6179146;
        float r6179148 = r6179143 + r6179147;
        float r6179149 = -427.324219;
        float r6179150 = r6179146 * r6179135;
        float r6179151 = r6179150 * r6179135;
        float r6179152 = r6179149 * r6179151;
        float r6179153 = r6179148 + r6179152;
        float r6179154 = 180.425781;
        float r6179155 = r6179151 * r6179135;
        float r6179156 = r6179155 * r6179135;
        float r6179157 = r6179154 * r6179156;
        float r6179158 = r6179153 + r6179157;
        return r6179158;
}

double f_id(double x) {
        double r6179159 = -0.246094;
        double r6179160 = 13.535156;
        double r6179161 = x;
        double r6179162 = r6179161 * r6179161;
        double r6179163 = r6179160 * r6179162;
        double r6179164 = r6179159 + r6179163;
        double r6179165 = -117.304688;
        double r6179166 = r6179162 * r6179161;
        double r6179167 = r6179166 * r6179161;
        double r6179168 = r6179165 * r6179167;
        double r6179169 = r6179164 + r6179168;
        double r6179170 = 351.914062;
        double r6179171 = r6179167 * r6179161;
        double r6179172 = r6179171 * r6179161;
        double r6179173 = r6179170 * r6179172;
        double r6179174 = r6179169 + r6179173;
        double r6179175 = -427.324219;
        double r6179176 = r6179172 * r6179161;
        double r6179177 = r6179176 * r6179161;
        double r6179178 = r6179175 * r6179177;
        double r6179179 = r6179174 + r6179178;
        double r6179180 = 180.425781;
        double r6179181 = r6179177 * r6179161;
        double r6179182 = r6179181 * r6179161;
        double r6179183 = r6179180 * r6179182;
        double r6179184 = r6179179 + r6179183;
        return r6179184;
}


double f_of(float x) {
        float r6179185 = x;
        float r6179186 = r6179185 * r6179185;
        float r6179187 = r6179186 * r6179186;
        float r6179188 = r6179187 * r6179187;
        float r6179189 = -427.324219;
        float r6179190 = 180.425781;
        float r6179191 = r6179190 * r6179185;
        float r6179192 = r6179185 * r6179191;
        float r6179193 = sqrt(r6179192);
        float r6179194 = r6179193 * r6179193;
        float r6179195 = r6179189 + r6179194;
        float r6179196 = r6179188 * r6179195;
        float r6179197 = 351.914062;
        float r6179198 = r6179197 * r6179185;
        float r6179199 = r6179198 * r6179185;
        float r6179200 = r6179199 * r6179187;
        float r6179201 = 13.535156;
        float r6179202 = r6179186 * r6179201;
        float r6179203 = -0.246094;
        float r6179204 = r6179202 + r6179203;
        float r6179205 = r6179200 + r6179204;
        float r6179206 = r6179196 + r6179205;
        float r6179207 = 4;
        float r6179208 = pow(r6179185, r6179207);
        float r6179209 = -117.304688;
        float r6179210 = r6179208 * r6179209;
        float r6179211 = r6179206 + r6179210;
        return r6179211;
}

double f_od(double x) {
        double r6179212 = x;
        double r6179213 = r6179212 * r6179212;
        double r6179214 = r6179213 * r6179213;
        double r6179215 = r6179214 * r6179214;
        double r6179216 = -427.324219;
        double r6179217 = 180.425781;
        double r6179218 = r6179217 * r6179212;
        double r6179219 = r6179212 * r6179218;
        double r6179220 = sqrt(r6179219);
        double r6179221 = r6179220 * r6179220;
        double r6179222 = r6179216 + r6179221;
        double r6179223 = r6179215 * r6179222;
        double r6179224 = 351.914062;
        double r6179225 = r6179224 * r6179212;
        double r6179226 = r6179225 * r6179212;
        double r6179227 = r6179226 * r6179214;
        double r6179228 = 13.535156;
        double r6179229 = r6179213 * r6179228;
        double r6179230 = -0.246094;
        double r6179231 = r6179229 + r6179230;
        double r6179232 = r6179227 + r6179231;
        double r6179233 = r6179223 + r6179232;
        double r6179234 = 4;
        double r6179235 = pow(r6179212, r6179234);
        double r6179236 = -117.304688;
        double r6179237 = r6179235 * r6179236;
        double r6179238 = r6179233 + r6179237;
        return r6179238;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179239, r6179240, r6179241, r6179242, r6179243, r6179244, r6179245, r6179246, r6179247, r6179248, r6179249, r6179250, r6179251, r6179252, r6179253, r6179254, r6179255, r6179256, r6179257, r6179258, r6179259, r6179260, r6179261, r6179262, r6179263, r6179264;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6179239, "-0.246094", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179240, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6179241);
        mpfr_init(r6179242);
        mpfr_init(r6179243);
        mpfr_init(r6179244);
        mpfr_init_set_str(r6179245, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6179246);
        mpfr_init(r6179247);
        mpfr_init(r6179248);
        mpfr_init(r6179249);
        mpfr_init_set_str(r6179250, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6179251);
        mpfr_init(r6179252);
        mpfr_init(r6179253);
        mpfr_init(r6179254);
        mpfr_init_set_str(r6179255, "-427.324219", 10, MPFR_RNDN);
        mpfr_init(r6179256);
        mpfr_init(r6179257);
        mpfr_init(r6179258);
        mpfr_init(r6179259);
        mpfr_init_set_str(r6179260, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6179261);
        mpfr_init(r6179262);
        mpfr_init(r6179263);
        mpfr_init(r6179264);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6179241, x, MPFR_RNDN);
        mpfr_mul(r6179242, r6179241, r6179241, MPFR_RNDN);
        mpfr_mul(r6179243, r6179240, r6179242, MPFR_RNDN);
        mpfr_add(r6179244, r6179239, r6179243, MPFR_RNDN);
        ;
        mpfr_mul(r6179246, r6179242, r6179241, MPFR_RNDN);
        mpfr_mul(r6179247, r6179246, r6179241, MPFR_RNDN);
        mpfr_mul(r6179248, r6179245, r6179247, MPFR_RNDN);
        mpfr_add(r6179249, r6179244, r6179248, MPFR_RNDN);
        ;
        mpfr_mul(r6179251, r6179247, r6179241, MPFR_RNDN);
        mpfr_mul(r6179252, r6179251, r6179241, MPFR_RNDN);
        mpfr_mul(r6179253, r6179250, r6179252, MPFR_RNDN);
        mpfr_add(r6179254, r6179249, r6179253, MPFR_RNDN);
        ;
        mpfr_mul(r6179256, r6179252, r6179241, MPFR_RNDN);
        mpfr_mul(r6179257, r6179256, r6179241, MPFR_RNDN);
        mpfr_mul(r6179258, r6179255, r6179257, MPFR_RNDN);
        mpfr_add(r6179259, r6179254, r6179258, MPFR_RNDN);
        ;
        mpfr_mul(r6179261, r6179257, r6179241, MPFR_RNDN);
        mpfr_mul(r6179262, r6179261, r6179241, MPFR_RNDN);
        mpfr_mul(r6179263, r6179260, r6179262, MPFR_RNDN);
        mpfr_add(r6179264, r6179259, r6179263, MPFR_RNDN);
        return mpfr_get_d(r6179264, MPFR_RNDN);
}

static mpfr_t r6179265, r6179266, r6179267, r6179268, r6179269, r6179270, r6179271, r6179272, r6179273, r6179274, r6179275, r6179276, r6179277, r6179278, r6179279, r6179280, r6179281, r6179282, r6179283, r6179284, r6179285, r6179286, r6179287, r6179288, r6179289, r6179290, r6179291;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6179265);
        mpfr_init(r6179266);
        mpfr_init(r6179267);
        mpfr_init(r6179268);
        mpfr_init_set_str(r6179269, "-427.324219", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179270, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6179271);
        mpfr_init(r6179272);
        mpfr_init(r6179273);
        mpfr_init(r6179274);
        mpfr_init(r6179275);
        mpfr_init(r6179276);
        mpfr_init_set_str(r6179277, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6179278);
        mpfr_init(r6179279);
        mpfr_init(r6179280);
        mpfr_init_set_str(r6179281, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6179282);
        mpfr_init_set_str(r6179283, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6179284);
        mpfr_init(r6179285);
        mpfr_init(r6179286);
        mpfr_init_set_str(r6179287, "4", 10, MPFR_RNDN);
        mpfr_init(r6179288);
        mpfr_init_set_str(r6179289, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6179290);
        mpfr_init(r6179291);
}

double f_fm(double x) {
        mpfr_set_d(r6179265, x, MPFR_RNDN);
        mpfr_mul(r6179266, r6179265, r6179265, MPFR_RNDN);
        mpfr_mul(r6179267, r6179266, r6179266, MPFR_RNDN);
        mpfr_mul(r6179268, r6179267, r6179267, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6179271, r6179270, r6179265, MPFR_RNDN);
        mpfr_mul(r6179272, r6179265, r6179271, MPFR_RNDN);
        mpfr_sqrt(r6179273, r6179272, MPFR_RNDN);
        mpfr_mul(r6179274, r6179273, r6179273, MPFR_RNDN);
        mpfr_add(r6179275, r6179269, r6179274, MPFR_RNDN);
        mpfr_mul(r6179276, r6179268, r6179275, MPFR_RNDN);
        ;
        mpfr_mul(r6179278, r6179277, r6179265, MPFR_RNDN);
        mpfr_mul(r6179279, r6179278, r6179265, MPFR_RNDN);
        mpfr_mul(r6179280, r6179279, r6179267, MPFR_RNDN);
        ;
        mpfr_mul(r6179282, r6179266, r6179281, MPFR_RNDN);
        ;
        mpfr_add(r6179284, r6179282, r6179283, MPFR_RNDN);
        mpfr_add(r6179285, r6179280, r6179284, MPFR_RNDN);
        mpfr_add(r6179286, r6179276, r6179285, MPFR_RNDN);
        ;
        mpfr_pow(r6179288, r6179265, r6179287, MPFR_RNDN);
        ;
        mpfr_mul(r6179290, r6179288, r6179289, MPFR_RNDN);
        mpfr_add(r6179291, r6179286, r6179290, MPFR_RNDN);
        return mpfr_get_d(r6179291, MPFR_RNDN);
}

static mpfr_t r6179292, r6179293, r6179294, r6179295, r6179296, r6179297, r6179298, r6179299, r6179300, r6179301, r6179302, r6179303, r6179304, r6179305, r6179306, r6179307, r6179308, r6179309, r6179310, r6179311, r6179312, r6179313, r6179314, r6179315, r6179316, r6179317, r6179318;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6179292);
        mpfr_init(r6179293);
        mpfr_init(r6179294);
        mpfr_init(r6179295);
        mpfr_init_set_str(r6179296, "-427.324219", 10, MPFR_RNDN);
        mpfr_init_set_str(r6179297, "180.425781", 10, MPFR_RNDN);
        mpfr_init(r6179298);
        mpfr_init(r6179299);
        mpfr_init(r6179300);
        mpfr_init(r6179301);
        mpfr_init(r6179302);
        mpfr_init(r6179303);
        mpfr_init_set_str(r6179304, "351.914062", 10, MPFR_RNDN);
        mpfr_init(r6179305);
        mpfr_init(r6179306);
        mpfr_init(r6179307);
        mpfr_init_set_str(r6179308, "13.535156", 10, MPFR_RNDN);
        mpfr_init(r6179309);
        mpfr_init_set_str(r6179310, "-0.246094", 10, MPFR_RNDN);
        mpfr_init(r6179311);
        mpfr_init(r6179312);
        mpfr_init(r6179313);
        mpfr_init_set_str(r6179314, "4", 10, MPFR_RNDN);
        mpfr_init(r6179315);
        mpfr_init_set_str(r6179316, "-117.304688", 10, MPFR_RNDN);
        mpfr_init(r6179317);
        mpfr_init(r6179318);
}

double f_dm(double x) {
        mpfr_set_d(r6179292, x, MPFR_RNDN);
        mpfr_mul(r6179293, r6179292, r6179292, MPFR_RNDN);
        mpfr_mul(r6179294, r6179293, r6179293, MPFR_RNDN);
        mpfr_mul(r6179295, r6179294, r6179294, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6179298, r6179297, r6179292, MPFR_RNDN);
        mpfr_mul(r6179299, r6179292, r6179298, MPFR_RNDN);
        mpfr_sqrt(r6179300, r6179299, MPFR_RNDN);
        mpfr_mul(r6179301, r6179300, r6179300, MPFR_RNDN);
        mpfr_add(r6179302, r6179296, r6179301, MPFR_RNDN);
        mpfr_mul(r6179303, r6179295, r6179302, MPFR_RNDN);
        ;
        mpfr_mul(r6179305, r6179304, r6179292, MPFR_RNDN);
        mpfr_mul(r6179306, r6179305, r6179292, MPFR_RNDN);
        mpfr_mul(r6179307, r6179306, r6179294, MPFR_RNDN);
        ;
        mpfr_mul(r6179309, r6179293, r6179308, MPFR_RNDN);
        ;
        mpfr_add(r6179311, r6179309, r6179310, MPFR_RNDN);
        mpfr_add(r6179312, r6179307, r6179311, MPFR_RNDN);
        mpfr_add(r6179313, r6179303, r6179312, MPFR_RNDN);
        ;
        mpfr_pow(r6179315, r6179292, r6179314, MPFR_RNDN);
        ;
        mpfr_mul(r6179317, r6179315, r6179316, MPFR_RNDN);
        mpfr_add(r6179318, r6179313, r6179317, MPFR_RNDN);
        return mpfr_get_d(r6179318, MPFR_RNDN);
}

