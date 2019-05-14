#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r7169106 = -0.209473;
        float r7169107 = 21.994629;
        float r7169108 = x;
        float r7169109 = r7169108 * r7169108;
        float r7169110 = r7169107 * r7169109;
        float r7169111 = r7169106 + r7169110;
        float r7169112 = -373.908691;
        float r7169113 = r7169109 * r7169108;
        float r7169114 = r7169113 * r7169108;
        float r7169115 = r7169112 * r7169114;
        float r7169116 = r7169111 + r7169115;
        float r7169117 = 2368.088379;
        float r7169118 = r7169114 * r7169108;
        float r7169119 = r7169118 * r7169108;
        float r7169120 = r7169117 * r7169119;
        float r7169121 = r7169116 + r7169120;
        float r7169122 = -7104.265137;
        float r7169123 = r7169119 * r7169108;
        float r7169124 = r7169123 * r7169108;
        float r7169125 = r7169122 * r7169124;
        float r7169126 = r7169121 + r7169125;
        float r7169127 = 10893.206543;
        float r7169128 = r7169124 * r7169108;
        float r7169129 = r7169128 * r7169108;
        float r7169130 = r7169127 * r7169129;
        float r7169131 = r7169126 + r7169130;
        float r7169132 = -8252.429199;
        float r7169133 = r7169129 * r7169108;
        float r7169134 = r7169133 * r7169108;
        float r7169135 = r7169132 * r7169134;
        float r7169136 = r7169131 + r7169135;
        float r7169137 = 2448.522949;
        float r7169138 = r7169134 * r7169108;
        float r7169139 = r7169138 * r7169108;
        float r7169140 = r7169137 * r7169139;
        float r7169141 = r7169136 + r7169140;
        return r7169141;
}

double f_id(double x) {
        double r7169142 = -0.209473;
        double r7169143 = 21.994629;
        double r7169144 = x;
        double r7169145 = r7169144 * r7169144;
        double r7169146 = r7169143 * r7169145;
        double r7169147 = r7169142 + r7169146;
        double r7169148 = -373.908691;
        double r7169149 = r7169145 * r7169144;
        double r7169150 = r7169149 * r7169144;
        double r7169151 = r7169148 * r7169150;
        double r7169152 = r7169147 + r7169151;
        double r7169153 = 2368.088379;
        double r7169154 = r7169150 * r7169144;
        double r7169155 = r7169154 * r7169144;
        double r7169156 = r7169153 * r7169155;
        double r7169157 = r7169152 + r7169156;
        double r7169158 = -7104.265137;
        double r7169159 = r7169155 * r7169144;
        double r7169160 = r7169159 * r7169144;
        double r7169161 = r7169158 * r7169160;
        double r7169162 = r7169157 + r7169161;
        double r7169163 = 10893.206543;
        double r7169164 = r7169160 * r7169144;
        double r7169165 = r7169164 * r7169144;
        double r7169166 = r7169163 * r7169165;
        double r7169167 = r7169162 + r7169166;
        double r7169168 = -8252.429199;
        double r7169169 = r7169165 * r7169144;
        double r7169170 = r7169169 * r7169144;
        double r7169171 = r7169168 * r7169170;
        double r7169172 = r7169167 + r7169171;
        double r7169173 = 2448.522949;
        double r7169174 = r7169170 * r7169144;
        double r7169175 = r7169174 * r7169144;
        double r7169176 = r7169173 * r7169175;
        double r7169177 = r7169172 + r7169176;
        return r7169177;
}


double f_of(float x) {
        float r7169178 = x;
        float r7169179 = r7169178 * r7169178;
        float r7169180 = r7169179 * r7169179;
        float r7169181 = r7169180 * r7169180;
        float r7169182 = r7169180 * r7169181;
        float r7169183 = 2448.522949;
        float r7169184 = r7169178 * r7169183;
        float r7169185 = r7169178 * r7169184;
        float r7169186 = -8252.429199;
        float r7169187 = r7169185 + r7169186;
        float r7169188 = r7169182 * r7169187;
        float r7169189 = 21.994629;
        float r7169190 = r7169178 * r7169189;
        float r7169191 = r7169190 * r7169178;
        float r7169192 = -0.209473;
        float r7169193 = r7169191 + r7169192;
        float r7169194 = -373.908691;
        float r7169195 = 2368.088379;
        float r7169196 = r7169195 * r7169178;
        float r7169197 = r7169178 * r7169196;
        float r7169198 = r7169194 + r7169197;
        float r7169199 = r7169180 * r7169198;
        float r7169200 = cbrt(r7169199);
        float r7169201 = r7169200 * r7169200;
        float r7169202 = r7169201 * r7169200;
        float r7169203 = r7169193 + r7169202;
        float r7169204 = r7169188 + r7169203;
        float r7169205 = 10893.206543;
        float r7169206 = r7169205 * r7169179;
        float r7169207 = -7104.265137;
        float r7169208 = r7169206 + r7169207;
        float r7169209 = r7169181 * r7169208;
        float r7169210 = r7169204 + r7169209;
        return r7169210;
}

double f_od(double x) {
        double r7169211 = x;
        double r7169212 = r7169211 * r7169211;
        double r7169213 = r7169212 * r7169212;
        double r7169214 = r7169213 * r7169213;
        double r7169215 = r7169213 * r7169214;
        double r7169216 = 2448.522949;
        double r7169217 = r7169211 * r7169216;
        double r7169218 = r7169211 * r7169217;
        double r7169219 = -8252.429199;
        double r7169220 = r7169218 + r7169219;
        double r7169221 = r7169215 * r7169220;
        double r7169222 = 21.994629;
        double r7169223 = r7169211 * r7169222;
        double r7169224 = r7169223 * r7169211;
        double r7169225 = -0.209473;
        double r7169226 = r7169224 + r7169225;
        double r7169227 = -373.908691;
        double r7169228 = 2368.088379;
        double r7169229 = r7169228 * r7169211;
        double r7169230 = r7169211 * r7169229;
        double r7169231 = r7169227 + r7169230;
        double r7169232 = r7169213 * r7169231;
        double r7169233 = cbrt(r7169232);
        double r7169234 = r7169233 * r7169233;
        double r7169235 = r7169234 * r7169233;
        double r7169236 = r7169226 + r7169235;
        double r7169237 = r7169221 + r7169236;
        double r7169238 = 10893.206543;
        double r7169239 = r7169238 * r7169212;
        double r7169240 = -7104.265137;
        double r7169241 = r7169239 + r7169240;
        double r7169242 = r7169214 * r7169241;
        double r7169243 = r7169237 + r7169242;
        return r7169243;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7169244, r7169245, r7169246, r7169247, r7169248, r7169249, r7169250, r7169251, r7169252, r7169253, r7169254, r7169255, r7169256, r7169257, r7169258, r7169259, r7169260, r7169261, r7169262, r7169263, r7169264, r7169265, r7169266, r7169267, r7169268, r7169269, r7169270, r7169271, r7169272, r7169273, r7169274, r7169275, r7169276, r7169277, r7169278, r7169279;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7169244, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169245, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7169246);
        mpfr_init(r7169247);
        mpfr_init(r7169248);
        mpfr_init(r7169249);
        mpfr_init_set_str(r7169250, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7169251);
        mpfr_init(r7169252);
        mpfr_init(r7169253);
        mpfr_init(r7169254);
        mpfr_init_set_str(r7169255, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7169256);
        mpfr_init(r7169257);
        mpfr_init(r7169258);
        mpfr_init(r7169259);
        mpfr_init_set_str(r7169260, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7169261);
        mpfr_init(r7169262);
        mpfr_init(r7169263);
        mpfr_init(r7169264);
        mpfr_init_set_str(r7169265, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7169266);
        mpfr_init(r7169267);
        mpfr_init(r7169268);
        mpfr_init(r7169269);
        mpfr_init_set_str(r7169270, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7169271);
        mpfr_init(r7169272);
        mpfr_init(r7169273);
        mpfr_init(r7169274);
        mpfr_init_set_str(r7169275, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7169276);
        mpfr_init(r7169277);
        mpfr_init(r7169278);
        mpfr_init(r7169279);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7169246, x, MPFR_RNDN);
        mpfr_mul(r7169247, r7169246, r7169246, MPFR_RNDN);
        mpfr_mul(r7169248, r7169245, r7169247, MPFR_RNDN);
        mpfr_add(r7169249, r7169244, r7169248, MPFR_RNDN);
        ;
        mpfr_mul(r7169251, r7169247, r7169246, MPFR_RNDN);
        mpfr_mul(r7169252, r7169251, r7169246, MPFR_RNDN);
        mpfr_mul(r7169253, r7169250, r7169252, MPFR_RNDN);
        mpfr_add(r7169254, r7169249, r7169253, MPFR_RNDN);
        ;
        mpfr_mul(r7169256, r7169252, r7169246, MPFR_RNDN);
        mpfr_mul(r7169257, r7169256, r7169246, MPFR_RNDN);
        mpfr_mul(r7169258, r7169255, r7169257, MPFR_RNDN);
        mpfr_add(r7169259, r7169254, r7169258, MPFR_RNDN);
        ;
        mpfr_mul(r7169261, r7169257, r7169246, MPFR_RNDN);
        mpfr_mul(r7169262, r7169261, r7169246, MPFR_RNDN);
        mpfr_mul(r7169263, r7169260, r7169262, MPFR_RNDN);
        mpfr_add(r7169264, r7169259, r7169263, MPFR_RNDN);
        ;
        mpfr_mul(r7169266, r7169262, r7169246, MPFR_RNDN);
        mpfr_mul(r7169267, r7169266, r7169246, MPFR_RNDN);
        mpfr_mul(r7169268, r7169265, r7169267, MPFR_RNDN);
        mpfr_add(r7169269, r7169264, r7169268, MPFR_RNDN);
        ;
        mpfr_mul(r7169271, r7169267, r7169246, MPFR_RNDN);
        mpfr_mul(r7169272, r7169271, r7169246, MPFR_RNDN);
        mpfr_mul(r7169273, r7169270, r7169272, MPFR_RNDN);
        mpfr_add(r7169274, r7169269, r7169273, MPFR_RNDN);
        ;
        mpfr_mul(r7169276, r7169272, r7169246, MPFR_RNDN);
        mpfr_mul(r7169277, r7169276, r7169246, MPFR_RNDN);
        mpfr_mul(r7169278, r7169275, r7169277, MPFR_RNDN);
        mpfr_add(r7169279, r7169274, r7169278, MPFR_RNDN);
        return mpfr_get_d(r7169279, MPFR_RNDN);
}

static mpfr_t r7169280, r7169281, r7169282, r7169283, r7169284, r7169285, r7169286, r7169287, r7169288, r7169289, r7169290, r7169291, r7169292, r7169293, r7169294, r7169295, r7169296, r7169297, r7169298, r7169299, r7169300, r7169301, r7169302, r7169303, r7169304, r7169305, r7169306, r7169307, r7169308, r7169309, r7169310, r7169311, r7169312;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7169280);
        mpfr_init(r7169281);
        mpfr_init(r7169282);
        mpfr_init(r7169283);
        mpfr_init(r7169284);
        mpfr_init_set_str(r7169285, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7169286);
        mpfr_init(r7169287);
        mpfr_init_set_str(r7169288, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7169289);
        mpfr_init(r7169290);
        mpfr_init_set_str(r7169291, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7169292);
        mpfr_init(r7169293);
        mpfr_init_set_str(r7169294, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r7169295);
        mpfr_init_set_str(r7169296, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169297, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7169298);
        mpfr_init(r7169299);
        mpfr_init(r7169300);
        mpfr_init(r7169301);
        mpfr_init(r7169302);
        mpfr_init(r7169303);
        mpfr_init(r7169304);
        mpfr_init(r7169305);
        mpfr_init(r7169306);
        mpfr_init_set_str(r7169307, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7169308);
        mpfr_init_set_str(r7169309, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7169310);
        mpfr_init(r7169311);
        mpfr_init(r7169312);
}

double f_fm(double x) {
        mpfr_set_d(r7169280, x, MPFR_RNDN);
        mpfr_mul(r7169281, r7169280, r7169280, MPFR_RNDN);
        mpfr_mul(r7169282, r7169281, r7169281, MPFR_RNDN);
        mpfr_mul(r7169283, r7169282, r7169282, MPFR_RNDN);
        mpfr_mul(r7169284, r7169282, r7169283, MPFR_RNDN);
        ;
        mpfr_mul(r7169286, r7169280, r7169285, MPFR_RNDN);
        mpfr_mul(r7169287, r7169280, r7169286, MPFR_RNDN);
        ;
        mpfr_add(r7169289, r7169287, r7169288, MPFR_RNDN);
        mpfr_mul(r7169290, r7169284, r7169289, MPFR_RNDN);
        ;
        mpfr_mul(r7169292, r7169280, r7169291, MPFR_RNDN);
        mpfr_mul(r7169293, r7169292, r7169280, MPFR_RNDN);
        ;
        mpfr_add(r7169295, r7169293, r7169294, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7169298, r7169297, r7169280, MPFR_RNDN);
        mpfr_mul(r7169299, r7169280, r7169298, MPFR_RNDN);
        mpfr_add(r7169300, r7169296, r7169299, MPFR_RNDN);
        mpfr_mul(r7169301, r7169282, r7169300, MPFR_RNDN);
        mpfr_cbrt(r7169302, r7169301, MPFR_RNDN);
        mpfr_mul(r7169303, r7169302, r7169302, MPFR_RNDN);
        mpfr_mul(r7169304, r7169303, r7169302, MPFR_RNDN);
        mpfr_add(r7169305, r7169295, r7169304, MPFR_RNDN);
        mpfr_add(r7169306, r7169290, r7169305, MPFR_RNDN);
        ;
        mpfr_mul(r7169308, r7169307, r7169281, MPFR_RNDN);
        ;
        mpfr_add(r7169310, r7169308, r7169309, MPFR_RNDN);
        mpfr_mul(r7169311, r7169283, r7169310, MPFR_RNDN);
        mpfr_add(r7169312, r7169306, r7169311, MPFR_RNDN);
        return mpfr_get_d(r7169312, MPFR_RNDN);
}

static mpfr_t r7169313, r7169314, r7169315, r7169316, r7169317, r7169318, r7169319, r7169320, r7169321, r7169322, r7169323, r7169324, r7169325, r7169326, r7169327, r7169328, r7169329, r7169330, r7169331, r7169332, r7169333, r7169334, r7169335, r7169336, r7169337, r7169338, r7169339, r7169340, r7169341, r7169342, r7169343, r7169344, r7169345;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7169313);
        mpfr_init(r7169314);
        mpfr_init(r7169315);
        mpfr_init(r7169316);
        mpfr_init(r7169317);
        mpfr_init_set_str(r7169318, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7169319);
        mpfr_init(r7169320);
        mpfr_init_set_str(r7169321, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7169322);
        mpfr_init(r7169323);
        mpfr_init_set_str(r7169324, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7169325);
        mpfr_init(r7169326);
        mpfr_init_set_str(r7169327, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r7169328);
        mpfr_init_set_str(r7169329, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r7169330, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7169331);
        mpfr_init(r7169332);
        mpfr_init(r7169333);
        mpfr_init(r7169334);
        mpfr_init(r7169335);
        mpfr_init(r7169336);
        mpfr_init(r7169337);
        mpfr_init(r7169338);
        mpfr_init(r7169339);
        mpfr_init_set_str(r7169340, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7169341);
        mpfr_init_set_str(r7169342, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7169343);
        mpfr_init(r7169344);
        mpfr_init(r7169345);
}

double f_dm(double x) {
        mpfr_set_d(r7169313, x, MPFR_RNDN);
        mpfr_mul(r7169314, r7169313, r7169313, MPFR_RNDN);
        mpfr_mul(r7169315, r7169314, r7169314, MPFR_RNDN);
        mpfr_mul(r7169316, r7169315, r7169315, MPFR_RNDN);
        mpfr_mul(r7169317, r7169315, r7169316, MPFR_RNDN);
        ;
        mpfr_mul(r7169319, r7169313, r7169318, MPFR_RNDN);
        mpfr_mul(r7169320, r7169313, r7169319, MPFR_RNDN);
        ;
        mpfr_add(r7169322, r7169320, r7169321, MPFR_RNDN);
        mpfr_mul(r7169323, r7169317, r7169322, MPFR_RNDN);
        ;
        mpfr_mul(r7169325, r7169313, r7169324, MPFR_RNDN);
        mpfr_mul(r7169326, r7169325, r7169313, MPFR_RNDN);
        ;
        mpfr_add(r7169328, r7169326, r7169327, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7169331, r7169330, r7169313, MPFR_RNDN);
        mpfr_mul(r7169332, r7169313, r7169331, MPFR_RNDN);
        mpfr_add(r7169333, r7169329, r7169332, MPFR_RNDN);
        mpfr_mul(r7169334, r7169315, r7169333, MPFR_RNDN);
        mpfr_cbrt(r7169335, r7169334, MPFR_RNDN);
        mpfr_mul(r7169336, r7169335, r7169335, MPFR_RNDN);
        mpfr_mul(r7169337, r7169336, r7169335, MPFR_RNDN);
        mpfr_add(r7169338, r7169328, r7169337, MPFR_RNDN);
        mpfr_add(r7169339, r7169323, r7169338, MPFR_RNDN);
        ;
        mpfr_mul(r7169341, r7169340, r7169314, MPFR_RNDN);
        ;
        mpfr_add(r7169343, r7169341, r7169342, MPFR_RNDN);
        mpfr_mul(r7169344, r7169316, r7169343, MPFR_RNDN);
        mpfr_add(r7169345, r7169339, r7169344, MPFR_RNDN);
        return mpfr_get_d(r7169345, MPFR_RNDN);
}

