#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r9402070 = 30240.0;
        float r9402071 = x;
        float r9402072 = r9402070 * r9402071;
        float r9402073 = -80640.0;
        float r9402074 = r9402071 * r9402071;
        float r9402075 = r9402074 * r9402071;
        float r9402076 = r9402073 * r9402075;
        float r9402077 = r9402072 + r9402076;
        float r9402078 = 48384.0;
        float r9402079 = r9402075 * r9402071;
        float r9402080 = r9402079 * r9402071;
        float r9402081 = r9402078 * r9402080;
        float r9402082 = r9402077 + r9402081;
        float r9402083 = -9216.0;
        float r9402084 = r9402080 * r9402071;
        float r9402085 = r9402084 * r9402071;
        float r9402086 = r9402083 * r9402085;
        float r9402087 = r9402082 + r9402086;
        float r9402088 = 512.0;
        float r9402089 = r9402085 * r9402071;
        float r9402090 = r9402089 * r9402071;
        float r9402091 = r9402088 * r9402090;
        float r9402092 = r9402087 + r9402091;
        return r9402092;
}

double f_id(double x) {
        double r9402093 = 30240.0;
        double r9402094 = x;
        double r9402095 = r9402093 * r9402094;
        double r9402096 = -80640.0;
        double r9402097 = r9402094 * r9402094;
        double r9402098 = r9402097 * r9402094;
        double r9402099 = r9402096 * r9402098;
        double r9402100 = r9402095 + r9402099;
        double r9402101 = 48384.0;
        double r9402102 = r9402098 * r9402094;
        double r9402103 = r9402102 * r9402094;
        double r9402104 = r9402101 * r9402103;
        double r9402105 = r9402100 + r9402104;
        double r9402106 = -9216.0;
        double r9402107 = r9402103 * r9402094;
        double r9402108 = r9402107 * r9402094;
        double r9402109 = r9402106 * r9402108;
        double r9402110 = r9402105 + r9402109;
        double r9402111 = 512.0;
        double r9402112 = r9402108 * r9402094;
        double r9402113 = r9402112 * r9402094;
        double r9402114 = r9402111 * r9402113;
        double r9402115 = r9402110 + r9402114;
        return r9402115;
}


double f_of(float x) {
        float r9402116 = 30240.0;
        float r9402117 = x;
        float r9402118 = r9402116 * r9402117;
        float r9402119 = -80640.0;
        float r9402120 = r9402117 * r9402117;
        float r9402121 = r9402120 * r9402117;
        float r9402122 = r9402119 * r9402121;
        float r9402123 = r9402118 + r9402122;
        float r9402124 = 3;
        float r9402125 = pow(r9402117, r9402124);
        float r9402126 = 48384.0;
        float r9402127 = r9402126 * r9402117;
        float r9402128 = r9402125 * r9402127;
        float r9402129 = r9402128 * r9402117;
        float r9402130 = r9402123 + r9402129;
        float r9402131 = -9216.0;
        float r9402132 = r9402121 * r9402117;
        float r9402133 = r9402132 * r9402117;
        float r9402134 = r9402133 * r9402117;
        float r9402135 = r9402134 * r9402117;
        float r9402136 = r9402131 * r9402135;
        float r9402137 = r9402130 + r9402136;
        float r9402138 = 512.0;
        float r9402139 = r9402135 * r9402117;
        float r9402140 = r9402139 * r9402117;
        float r9402141 = r9402138 * r9402140;
        float r9402142 = r9402137 + r9402141;
        return r9402142;
}

double f_od(double x) {
        double r9402143 = 30240.0;
        double r9402144 = x;
        double r9402145 = r9402143 * r9402144;
        double r9402146 = -80640.0;
        double r9402147 = r9402144 * r9402144;
        double r9402148 = r9402147 * r9402144;
        double r9402149 = r9402146 * r9402148;
        double r9402150 = r9402145 + r9402149;
        double r9402151 = 3;
        double r9402152 = pow(r9402144, r9402151);
        double r9402153 = 48384.0;
        double r9402154 = r9402153 * r9402144;
        double r9402155 = r9402152 * r9402154;
        double r9402156 = r9402155 * r9402144;
        double r9402157 = r9402150 + r9402156;
        double r9402158 = -9216.0;
        double r9402159 = r9402148 * r9402144;
        double r9402160 = r9402159 * r9402144;
        double r9402161 = r9402160 * r9402144;
        double r9402162 = r9402161 * r9402144;
        double r9402163 = r9402158 * r9402162;
        double r9402164 = r9402157 + r9402163;
        double r9402165 = 512.0;
        double r9402166 = r9402162 * r9402144;
        double r9402167 = r9402166 * r9402144;
        double r9402168 = r9402165 * r9402167;
        double r9402169 = r9402164 + r9402168;
        return r9402169;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402170, r9402171, r9402172, r9402173, r9402174, r9402175, r9402176, r9402177, r9402178, r9402179, r9402180, r9402181, r9402182, r9402183, r9402184, r9402185, r9402186, r9402187, r9402188, r9402189, r9402190, r9402191, r9402192;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9402170, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9402171);
        mpfr_init(r9402172);
        mpfr_init_set_str(r9402173, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9402174);
        mpfr_init(r9402175);
        mpfr_init(r9402176);
        mpfr_init(r9402177);
        mpfr_init_set_str(r9402178, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9402179);
        mpfr_init(r9402180);
        mpfr_init(r9402181);
        mpfr_init(r9402182);
        mpfr_init_set_str(r9402183, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9402184);
        mpfr_init(r9402185);
        mpfr_init(r9402186);
        mpfr_init(r9402187);
        mpfr_init_set_str(r9402188, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9402189);
        mpfr_init(r9402190);
        mpfr_init(r9402191);
        mpfr_init(r9402192);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9402171, x, MPFR_RNDN);
        mpfr_mul(r9402172, r9402170, r9402171, MPFR_RNDN);
        ;
        mpfr_mul(r9402174, r9402171, r9402171, MPFR_RNDN);
        mpfr_mul(r9402175, r9402174, r9402171, MPFR_RNDN);
        mpfr_mul(r9402176, r9402173, r9402175, MPFR_RNDN);
        mpfr_add(r9402177, r9402172, r9402176, MPFR_RNDN);
        ;
        mpfr_mul(r9402179, r9402175, r9402171, MPFR_RNDN);
        mpfr_mul(r9402180, r9402179, r9402171, MPFR_RNDN);
        mpfr_mul(r9402181, r9402178, r9402180, MPFR_RNDN);
        mpfr_add(r9402182, r9402177, r9402181, MPFR_RNDN);
        ;
        mpfr_mul(r9402184, r9402180, r9402171, MPFR_RNDN);
        mpfr_mul(r9402185, r9402184, r9402171, MPFR_RNDN);
        mpfr_mul(r9402186, r9402183, r9402185, MPFR_RNDN);
        mpfr_add(r9402187, r9402182, r9402186, MPFR_RNDN);
        ;
        mpfr_mul(r9402189, r9402185, r9402171, MPFR_RNDN);
        mpfr_mul(r9402190, r9402189, r9402171, MPFR_RNDN);
        mpfr_mul(r9402191, r9402188, r9402190, MPFR_RNDN);
        mpfr_add(r9402192, r9402187, r9402191, MPFR_RNDN);
        return mpfr_get_d(r9402192, MPFR_RNDN);
}

static mpfr_t r9402193, r9402194, r9402195, r9402196, r9402197, r9402198, r9402199, r9402200, r9402201, r9402202, r9402203, r9402204, r9402205, r9402206, r9402207, r9402208, r9402209, r9402210, r9402211, r9402212, r9402213, r9402214, r9402215, r9402216, r9402217, r9402218, r9402219;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9402193, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9402194);
        mpfr_init(r9402195);
        mpfr_init_set_str(r9402196, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9402197);
        mpfr_init(r9402198);
        mpfr_init(r9402199);
        mpfr_init(r9402200);
        mpfr_init_set_str(r9402201, "3", 10, MPFR_RNDN);
        mpfr_init(r9402202);
        mpfr_init_set_str(r9402203, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9402204);
        mpfr_init(r9402205);
        mpfr_init(r9402206);
        mpfr_init(r9402207);
        mpfr_init_set_str(r9402208, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9402209);
        mpfr_init(r9402210);
        mpfr_init(r9402211);
        mpfr_init(r9402212);
        mpfr_init(r9402213);
        mpfr_init(r9402214);
        mpfr_init_set_str(r9402215, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9402216);
        mpfr_init(r9402217);
        mpfr_init(r9402218);
        mpfr_init(r9402219);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9402194, x, MPFR_RNDN);
        mpfr_mul(r9402195, r9402193, r9402194, MPFR_RNDN);
        ;
        mpfr_mul(r9402197, r9402194, r9402194, MPFR_RNDN);
        mpfr_mul(r9402198, r9402197, r9402194, MPFR_RNDN);
        mpfr_mul(r9402199, r9402196, r9402198, MPFR_RNDN);
        mpfr_add(r9402200, r9402195, r9402199, MPFR_RNDN);
        ;
        mpfr_pow(r9402202, r9402194, r9402201, MPFR_RNDN);
        ;
        mpfr_mul(r9402204, r9402203, r9402194, MPFR_RNDN);
        mpfr_mul(r9402205, r9402202, r9402204, MPFR_RNDN);
        mpfr_mul(r9402206, r9402205, r9402194, MPFR_RNDN);
        mpfr_add(r9402207, r9402200, r9402206, MPFR_RNDN);
        ;
        mpfr_mul(r9402209, r9402198, r9402194, MPFR_RNDN);
        mpfr_mul(r9402210, r9402209, r9402194, MPFR_RNDN);
        mpfr_mul(r9402211, r9402210, r9402194, MPFR_RNDN);
        mpfr_mul(r9402212, r9402211, r9402194, MPFR_RNDN);
        mpfr_mul(r9402213, r9402208, r9402212, MPFR_RNDN);
        mpfr_add(r9402214, r9402207, r9402213, MPFR_RNDN);
        ;
        mpfr_mul(r9402216, r9402212, r9402194, MPFR_RNDN);
        mpfr_mul(r9402217, r9402216, r9402194, MPFR_RNDN);
        mpfr_mul(r9402218, r9402215, r9402217, MPFR_RNDN);
        mpfr_add(r9402219, r9402214, r9402218, MPFR_RNDN);
        return mpfr_get_d(r9402219, MPFR_RNDN);
}

static mpfr_t r9402220, r9402221, r9402222, r9402223, r9402224, r9402225, r9402226, r9402227, r9402228, r9402229, r9402230, r9402231, r9402232, r9402233, r9402234, r9402235, r9402236, r9402237, r9402238, r9402239, r9402240, r9402241, r9402242, r9402243, r9402244, r9402245, r9402246;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9402220, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r9402221);
        mpfr_init(r9402222);
        mpfr_init_set_str(r9402223, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r9402224);
        mpfr_init(r9402225);
        mpfr_init(r9402226);
        mpfr_init(r9402227);
        mpfr_init_set_str(r9402228, "3", 10, MPFR_RNDN);
        mpfr_init(r9402229);
        mpfr_init_set_str(r9402230, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r9402231);
        mpfr_init(r9402232);
        mpfr_init(r9402233);
        mpfr_init(r9402234);
        mpfr_init_set_str(r9402235, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r9402236);
        mpfr_init(r9402237);
        mpfr_init(r9402238);
        mpfr_init(r9402239);
        mpfr_init(r9402240);
        mpfr_init(r9402241);
        mpfr_init_set_str(r9402242, "512.0", 10, MPFR_RNDN);
        mpfr_init(r9402243);
        mpfr_init(r9402244);
        mpfr_init(r9402245);
        mpfr_init(r9402246);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9402221, x, MPFR_RNDN);
        mpfr_mul(r9402222, r9402220, r9402221, MPFR_RNDN);
        ;
        mpfr_mul(r9402224, r9402221, r9402221, MPFR_RNDN);
        mpfr_mul(r9402225, r9402224, r9402221, MPFR_RNDN);
        mpfr_mul(r9402226, r9402223, r9402225, MPFR_RNDN);
        mpfr_add(r9402227, r9402222, r9402226, MPFR_RNDN);
        ;
        mpfr_pow(r9402229, r9402221, r9402228, MPFR_RNDN);
        ;
        mpfr_mul(r9402231, r9402230, r9402221, MPFR_RNDN);
        mpfr_mul(r9402232, r9402229, r9402231, MPFR_RNDN);
        mpfr_mul(r9402233, r9402232, r9402221, MPFR_RNDN);
        mpfr_add(r9402234, r9402227, r9402233, MPFR_RNDN);
        ;
        mpfr_mul(r9402236, r9402225, r9402221, MPFR_RNDN);
        mpfr_mul(r9402237, r9402236, r9402221, MPFR_RNDN);
        mpfr_mul(r9402238, r9402237, r9402221, MPFR_RNDN);
        mpfr_mul(r9402239, r9402238, r9402221, MPFR_RNDN);
        mpfr_mul(r9402240, r9402235, r9402239, MPFR_RNDN);
        mpfr_add(r9402241, r9402234, r9402240, MPFR_RNDN);
        ;
        mpfr_mul(r9402243, r9402239, r9402221, MPFR_RNDN);
        mpfr_mul(r9402244, r9402243, r9402221, MPFR_RNDN);
        mpfr_mul(r9402245, r9402242, r9402244, MPFR_RNDN);
        mpfr_add(r9402246, r9402241, r9402245, MPFR_RNDN);
        return mpfr_get_d(r9402246, MPFR_RNDN);
}

