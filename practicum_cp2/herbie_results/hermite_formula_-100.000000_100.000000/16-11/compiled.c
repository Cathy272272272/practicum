#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r7082121 = -665280.0;
        float r7082122 = x;
        float r7082123 = r7082121 * r7082122;
        float r7082124 = 2217600.0;
        float r7082125 = r7082122 * r7082122;
        float r7082126 = r7082125 * r7082122;
        float r7082127 = r7082124 * r7082126;
        float r7082128 = r7082123 + r7082127;
        float r7082129 = -1774080.0;
        float r7082130 = r7082126 * r7082122;
        float r7082131 = r7082130 * r7082122;
        float r7082132 = r7082129 * r7082131;
        float r7082133 = r7082128 + r7082132;
        float r7082134 = 506880.0;
        float r7082135 = r7082131 * r7082122;
        float r7082136 = r7082135 * r7082122;
        float r7082137 = r7082134 * r7082136;
        float r7082138 = r7082133 + r7082137;
        float r7082139 = -56320.0;
        float r7082140 = r7082136 * r7082122;
        float r7082141 = r7082140 * r7082122;
        float r7082142 = r7082139 * r7082141;
        float r7082143 = r7082138 + r7082142;
        float r7082144 = 2048.0;
        float r7082145 = r7082141 * r7082122;
        float r7082146 = r7082145 * r7082122;
        float r7082147 = r7082144 * r7082146;
        float r7082148 = r7082143 + r7082147;
        return r7082148;
}

double f_id(double x) {
        double r7082149 = -665280.0;
        double r7082150 = x;
        double r7082151 = r7082149 * r7082150;
        double r7082152 = 2217600.0;
        double r7082153 = r7082150 * r7082150;
        double r7082154 = r7082153 * r7082150;
        double r7082155 = r7082152 * r7082154;
        double r7082156 = r7082151 + r7082155;
        double r7082157 = -1774080.0;
        double r7082158 = r7082154 * r7082150;
        double r7082159 = r7082158 * r7082150;
        double r7082160 = r7082157 * r7082159;
        double r7082161 = r7082156 + r7082160;
        double r7082162 = 506880.0;
        double r7082163 = r7082159 * r7082150;
        double r7082164 = r7082163 * r7082150;
        double r7082165 = r7082162 * r7082164;
        double r7082166 = r7082161 + r7082165;
        double r7082167 = -56320.0;
        double r7082168 = r7082164 * r7082150;
        double r7082169 = r7082168 * r7082150;
        double r7082170 = r7082167 * r7082169;
        double r7082171 = r7082166 + r7082170;
        double r7082172 = 2048.0;
        double r7082173 = r7082169 * r7082150;
        double r7082174 = r7082173 * r7082150;
        double r7082175 = r7082172 * r7082174;
        double r7082176 = r7082171 + r7082175;
        return r7082176;
}


double f_of(float x) {
        float r7082177 = x;
        float r7082178 = 3;
        float r7082179 = pow(r7082177, r7082178);
        float r7082180 = r7082179 * r7082179;
        float r7082181 = r7082179 * r7082180;
        float r7082182 = 2048.0;
        float r7082183 = r7082177 * r7082182;
        float r7082184 = r7082177 * r7082183;
        float r7082185 = -56320.0;
        float r7082186 = r7082184 + r7082185;
        float r7082187 = r7082181 * r7082186;
        float r7082188 = 506880.0;
        float r7082189 = r7082188 * r7082177;
        float r7082190 = r7082177 * r7082177;
        float r7082191 = r7082189 * r7082190;
        float r7082192 = r7082190 * r7082190;
        float r7082193 = r7082191 * r7082192;
        float r7082194 = -665280.0;
        float r7082195 = r7082194 * r7082177;
        float r7082196 = r7082193 + r7082195;
        float r7082197 = r7082187 + r7082196;
        float r7082198 = 2217600.0;
        float r7082199 = r7082198 * r7082177;
        float r7082200 = -1774080.0;
        float r7082201 = r7082177 * r7082200;
        float r7082202 = r7082201 * r7082190;
        float r7082203 = r7082199 + r7082202;
        float r7082204 = r7082190 * r7082203;
        float r7082205 = cbrt(r7082204);
        float r7082206 = r7082205 * r7082205;
        float r7082207 = r7082206 * r7082205;
        float r7082208 = r7082197 + r7082207;
        return r7082208;
}

double f_od(double x) {
        double r7082209 = x;
        double r7082210 = 3;
        double r7082211 = pow(r7082209, r7082210);
        double r7082212 = r7082211 * r7082211;
        double r7082213 = r7082211 * r7082212;
        double r7082214 = 2048.0;
        double r7082215 = r7082209 * r7082214;
        double r7082216 = r7082209 * r7082215;
        double r7082217 = -56320.0;
        double r7082218 = r7082216 + r7082217;
        double r7082219 = r7082213 * r7082218;
        double r7082220 = 506880.0;
        double r7082221 = r7082220 * r7082209;
        double r7082222 = r7082209 * r7082209;
        double r7082223 = r7082221 * r7082222;
        double r7082224 = r7082222 * r7082222;
        double r7082225 = r7082223 * r7082224;
        double r7082226 = -665280.0;
        double r7082227 = r7082226 * r7082209;
        double r7082228 = r7082225 + r7082227;
        double r7082229 = r7082219 + r7082228;
        double r7082230 = 2217600.0;
        double r7082231 = r7082230 * r7082209;
        double r7082232 = -1774080.0;
        double r7082233 = r7082209 * r7082232;
        double r7082234 = r7082233 * r7082222;
        double r7082235 = r7082231 + r7082234;
        double r7082236 = r7082222 * r7082235;
        double r7082237 = cbrt(r7082236);
        double r7082238 = r7082237 * r7082237;
        double r7082239 = r7082238 * r7082237;
        double r7082240 = r7082229 + r7082239;
        return r7082240;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7082241, r7082242, r7082243, r7082244, r7082245, r7082246, r7082247, r7082248, r7082249, r7082250, r7082251, r7082252, r7082253, r7082254, r7082255, r7082256, r7082257, r7082258, r7082259, r7082260, r7082261, r7082262, r7082263, r7082264, r7082265, r7082266, r7082267, r7082268;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7082241, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7082242);
        mpfr_init(r7082243);
        mpfr_init_set_str(r7082244, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7082245);
        mpfr_init(r7082246);
        mpfr_init(r7082247);
        mpfr_init(r7082248);
        mpfr_init_set_str(r7082249, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7082250);
        mpfr_init(r7082251);
        mpfr_init(r7082252);
        mpfr_init(r7082253);
        mpfr_init_set_str(r7082254, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7082255);
        mpfr_init(r7082256);
        mpfr_init(r7082257);
        mpfr_init(r7082258);
        mpfr_init_set_str(r7082259, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7082260);
        mpfr_init(r7082261);
        mpfr_init(r7082262);
        mpfr_init(r7082263);
        mpfr_init_set_str(r7082264, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7082265);
        mpfr_init(r7082266);
        mpfr_init(r7082267);
        mpfr_init(r7082268);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7082242, x, MPFR_RNDN);
        mpfr_mul(r7082243, r7082241, r7082242, MPFR_RNDN);
        ;
        mpfr_mul(r7082245, r7082242, r7082242, MPFR_RNDN);
        mpfr_mul(r7082246, r7082245, r7082242, MPFR_RNDN);
        mpfr_mul(r7082247, r7082244, r7082246, MPFR_RNDN);
        mpfr_add(r7082248, r7082243, r7082247, MPFR_RNDN);
        ;
        mpfr_mul(r7082250, r7082246, r7082242, MPFR_RNDN);
        mpfr_mul(r7082251, r7082250, r7082242, MPFR_RNDN);
        mpfr_mul(r7082252, r7082249, r7082251, MPFR_RNDN);
        mpfr_add(r7082253, r7082248, r7082252, MPFR_RNDN);
        ;
        mpfr_mul(r7082255, r7082251, r7082242, MPFR_RNDN);
        mpfr_mul(r7082256, r7082255, r7082242, MPFR_RNDN);
        mpfr_mul(r7082257, r7082254, r7082256, MPFR_RNDN);
        mpfr_add(r7082258, r7082253, r7082257, MPFR_RNDN);
        ;
        mpfr_mul(r7082260, r7082256, r7082242, MPFR_RNDN);
        mpfr_mul(r7082261, r7082260, r7082242, MPFR_RNDN);
        mpfr_mul(r7082262, r7082259, r7082261, MPFR_RNDN);
        mpfr_add(r7082263, r7082258, r7082262, MPFR_RNDN);
        ;
        mpfr_mul(r7082265, r7082261, r7082242, MPFR_RNDN);
        mpfr_mul(r7082266, r7082265, r7082242, MPFR_RNDN);
        mpfr_mul(r7082267, r7082264, r7082266, MPFR_RNDN);
        mpfr_add(r7082268, r7082263, r7082267, MPFR_RNDN);
        return mpfr_get_d(r7082268, MPFR_RNDN);
}

static mpfr_t r7082269, r7082270, r7082271, r7082272, r7082273, r7082274, r7082275, r7082276, r7082277, r7082278, r7082279, r7082280, r7082281, r7082282, r7082283, r7082284, r7082285, r7082286, r7082287, r7082288, r7082289, r7082290, r7082291, r7082292, r7082293, r7082294, r7082295, r7082296, r7082297, r7082298, r7082299, r7082300;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7082269);
        mpfr_init_set_str(r7082270, "3", 10, MPFR_RNDN);
        mpfr_init(r7082271);
        mpfr_init(r7082272);
        mpfr_init(r7082273);
        mpfr_init_set_str(r7082274, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7082275);
        mpfr_init(r7082276);
        mpfr_init_set_str(r7082277, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7082278);
        mpfr_init(r7082279);
        mpfr_init_set_str(r7082280, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7082281);
        mpfr_init(r7082282);
        mpfr_init(r7082283);
        mpfr_init(r7082284);
        mpfr_init(r7082285);
        mpfr_init_set_str(r7082286, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7082287);
        mpfr_init(r7082288);
        mpfr_init(r7082289);
        mpfr_init_set_str(r7082290, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7082291);
        mpfr_init_set_str(r7082292, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7082293);
        mpfr_init(r7082294);
        mpfr_init(r7082295);
        mpfr_init(r7082296);
        mpfr_init(r7082297);
        mpfr_init(r7082298);
        mpfr_init(r7082299);
        mpfr_init(r7082300);
}

double f_fm(double x) {
        mpfr_set_d(r7082269, x, MPFR_RNDN);
        ;
        mpfr_pow(r7082271, r7082269, r7082270, MPFR_RNDN);
        mpfr_mul(r7082272, r7082271, r7082271, MPFR_RNDN);
        mpfr_mul(r7082273, r7082271, r7082272, MPFR_RNDN);
        ;
        mpfr_mul(r7082275, r7082269, r7082274, MPFR_RNDN);
        mpfr_mul(r7082276, r7082269, r7082275, MPFR_RNDN);
        ;
        mpfr_add(r7082278, r7082276, r7082277, MPFR_RNDN);
        mpfr_mul(r7082279, r7082273, r7082278, MPFR_RNDN);
        ;
        mpfr_mul(r7082281, r7082280, r7082269, MPFR_RNDN);
        mpfr_mul(r7082282, r7082269, r7082269, MPFR_RNDN);
        mpfr_mul(r7082283, r7082281, r7082282, MPFR_RNDN);
        mpfr_mul(r7082284, r7082282, r7082282, MPFR_RNDN);
        mpfr_mul(r7082285, r7082283, r7082284, MPFR_RNDN);
        ;
        mpfr_mul(r7082287, r7082286, r7082269, MPFR_RNDN);
        mpfr_add(r7082288, r7082285, r7082287, MPFR_RNDN);
        mpfr_add(r7082289, r7082279, r7082288, MPFR_RNDN);
        ;
        mpfr_mul(r7082291, r7082290, r7082269, MPFR_RNDN);
        ;
        mpfr_mul(r7082293, r7082269, r7082292, MPFR_RNDN);
        mpfr_mul(r7082294, r7082293, r7082282, MPFR_RNDN);
        mpfr_add(r7082295, r7082291, r7082294, MPFR_RNDN);
        mpfr_mul(r7082296, r7082282, r7082295, MPFR_RNDN);
        mpfr_cbrt(r7082297, r7082296, MPFR_RNDN);
        mpfr_mul(r7082298, r7082297, r7082297, MPFR_RNDN);
        mpfr_mul(r7082299, r7082298, r7082297, MPFR_RNDN);
        mpfr_add(r7082300, r7082289, r7082299, MPFR_RNDN);
        return mpfr_get_d(r7082300, MPFR_RNDN);
}

static mpfr_t r7082301, r7082302, r7082303, r7082304, r7082305, r7082306, r7082307, r7082308, r7082309, r7082310, r7082311, r7082312, r7082313, r7082314, r7082315, r7082316, r7082317, r7082318, r7082319, r7082320, r7082321, r7082322, r7082323, r7082324, r7082325, r7082326, r7082327, r7082328, r7082329, r7082330, r7082331, r7082332;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7082301);
        mpfr_init_set_str(r7082302, "3", 10, MPFR_RNDN);
        mpfr_init(r7082303);
        mpfr_init(r7082304);
        mpfr_init(r7082305);
        mpfr_init_set_str(r7082306, "2048.0", 10, MPFR_RNDN);
        mpfr_init(r7082307);
        mpfr_init(r7082308);
        mpfr_init_set_str(r7082309, "-56320.0", 10, MPFR_RNDN);
        mpfr_init(r7082310);
        mpfr_init(r7082311);
        mpfr_init_set_str(r7082312, "506880.0", 10, MPFR_RNDN);
        mpfr_init(r7082313);
        mpfr_init(r7082314);
        mpfr_init(r7082315);
        mpfr_init(r7082316);
        mpfr_init(r7082317);
        mpfr_init_set_str(r7082318, "-665280.0", 10, MPFR_RNDN);
        mpfr_init(r7082319);
        mpfr_init(r7082320);
        mpfr_init(r7082321);
        mpfr_init_set_str(r7082322, "2217600.0", 10, MPFR_RNDN);
        mpfr_init(r7082323);
        mpfr_init_set_str(r7082324, "-1774080.0", 10, MPFR_RNDN);
        mpfr_init(r7082325);
        mpfr_init(r7082326);
        mpfr_init(r7082327);
        mpfr_init(r7082328);
        mpfr_init(r7082329);
        mpfr_init(r7082330);
        mpfr_init(r7082331);
        mpfr_init(r7082332);
}

double f_dm(double x) {
        mpfr_set_d(r7082301, x, MPFR_RNDN);
        ;
        mpfr_pow(r7082303, r7082301, r7082302, MPFR_RNDN);
        mpfr_mul(r7082304, r7082303, r7082303, MPFR_RNDN);
        mpfr_mul(r7082305, r7082303, r7082304, MPFR_RNDN);
        ;
        mpfr_mul(r7082307, r7082301, r7082306, MPFR_RNDN);
        mpfr_mul(r7082308, r7082301, r7082307, MPFR_RNDN);
        ;
        mpfr_add(r7082310, r7082308, r7082309, MPFR_RNDN);
        mpfr_mul(r7082311, r7082305, r7082310, MPFR_RNDN);
        ;
        mpfr_mul(r7082313, r7082312, r7082301, MPFR_RNDN);
        mpfr_mul(r7082314, r7082301, r7082301, MPFR_RNDN);
        mpfr_mul(r7082315, r7082313, r7082314, MPFR_RNDN);
        mpfr_mul(r7082316, r7082314, r7082314, MPFR_RNDN);
        mpfr_mul(r7082317, r7082315, r7082316, MPFR_RNDN);
        ;
        mpfr_mul(r7082319, r7082318, r7082301, MPFR_RNDN);
        mpfr_add(r7082320, r7082317, r7082319, MPFR_RNDN);
        mpfr_add(r7082321, r7082311, r7082320, MPFR_RNDN);
        ;
        mpfr_mul(r7082323, r7082322, r7082301, MPFR_RNDN);
        ;
        mpfr_mul(r7082325, r7082301, r7082324, MPFR_RNDN);
        mpfr_mul(r7082326, r7082325, r7082314, MPFR_RNDN);
        mpfr_add(r7082327, r7082323, r7082326, MPFR_RNDN);
        mpfr_mul(r7082328, r7082314, r7082327, MPFR_RNDN);
        mpfr_cbrt(r7082329, r7082328, MPFR_RNDN);
        mpfr_mul(r7082330, r7082329, r7082329, MPFR_RNDN);
        mpfr_mul(r7082331, r7082330, r7082329, MPFR_RNDN);
        mpfr_add(r7082332, r7082321, r7082331, MPFR_RNDN);
        return mpfr_get_d(r7082332, MPFR_RNDN);
}

