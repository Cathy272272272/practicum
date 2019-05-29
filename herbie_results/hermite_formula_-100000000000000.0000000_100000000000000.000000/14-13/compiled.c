#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r9961940 = 17297280.0;
        float r9961941 = x;
        float r9961942 = r9961940 * r9961941;
        float r9961943 = -69189120.0;
        float r9961944 = r9961941 * r9961941;
        float r9961945 = r9961944 * r9961941;
        float r9961946 = r9961943 * r9961945;
        float r9961947 = r9961942 + r9961946;
        float r9961948 = 69189120.0;
        float r9961949 = r9961945 * r9961941;
        float r9961950 = r9961949 * r9961941;
        float r9961951 = r9961948 * r9961950;
        float r9961952 = r9961947 + r9961951;
        float r9961953 = -26357760.0;
        float r9961954 = r9961950 * r9961941;
        float r9961955 = r9961954 * r9961941;
        float r9961956 = r9961953 * r9961955;
        float r9961957 = r9961952 + r9961956;
        float r9961958 = 4392960.0;
        float r9961959 = r9961955 * r9961941;
        float r9961960 = r9961959 * r9961941;
        float r9961961 = r9961958 * r9961960;
        float r9961962 = r9961957 + r9961961;
        float r9961963 = -319488.0;
        float r9961964 = r9961960 * r9961941;
        float r9961965 = r9961964 * r9961941;
        float r9961966 = r9961963 * r9961965;
        float r9961967 = r9961962 + r9961966;
        float r9961968 = 8192.0;
        float r9961969 = r9961965 * r9961941;
        float r9961970 = r9961969 * r9961941;
        float r9961971 = r9961968 * r9961970;
        float r9961972 = r9961967 + r9961971;
        return r9961972;
}

double f_id(double x) {
        double r9961973 = 17297280.0;
        double r9961974 = x;
        double r9961975 = r9961973 * r9961974;
        double r9961976 = -69189120.0;
        double r9961977 = r9961974 * r9961974;
        double r9961978 = r9961977 * r9961974;
        double r9961979 = r9961976 * r9961978;
        double r9961980 = r9961975 + r9961979;
        double r9961981 = 69189120.0;
        double r9961982 = r9961978 * r9961974;
        double r9961983 = r9961982 * r9961974;
        double r9961984 = r9961981 * r9961983;
        double r9961985 = r9961980 + r9961984;
        double r9961986 = -26357760.0;
        double r9961987 = r9961983 * r9961974;
        double r9961988 = r9961987 * r9961974;
        double r9961989 = r9961986 * r9961988;
        double r9961990 = r9961985 + r9961989;
        double r9961991 = 4392960.0;
        double r9961992 = r9961988 * r9961974;
        double r9961993 = r9961992 * r9961974;
        double r9961994 = r9961991 * r9961993;
        double r9961995 = r9961990 + r9961994;
        double r9961996 = -319488.0;
        double r9961997 = r9961993 * r9961974;
        double r9961998 = r9961997 * r9961974;
        double r9961999 = r9961996 * r9961998;
        double r9962000 = r9961995 + r9961999;
        double r9962001 = 8192.0;
        double r9962002 = r9961998 * r9961974;
        double r9962003 = r9962002 * r9961974;
        double r9962004 = r9962001 * r9962003;
        double r9962005 = r9962000 + r9962004;
        return r9962005;
}


double f_of(float x) {
        float r9962006 = x;
        float r9962007 = r9962006 * r9962006;
        float r9962008 = 3;
        float r9962009 = pow(r9962007, r9962008);
        float r9962010 = r9962006 * r9962009;
        float r9962011 = -26357760.0;
        float r9962012 = 4392960.0;
        float r9962013 = r9962007 * r9962012;
        float r9962014 = r9962011 + r9962013;
        float r9962015 = r9962010 * r9962014;
        float r9962016 = 69189120.0;
        float r9962017 = r9962006 * r9962016;
        float r9962018 = r9962017 * r9962007;
        float r9962019 = -69189120.0;
        float r9962020 = r9962019 * r9962006;
        float r9962021 = r9962018 + r9962020;
        float r9962022 = r9962007 * r9962021;
        float r9962023 = 17297280.0;
        float r9962024 = r9962006 * r9962023;
        float r9962025 = 13;
        float r9962026 = pow(r9962006, r9962025);
        float r9962027 = 8192.0;
        float r9962028 = r9962026 * r9962027;
        float r9962029 = 319488.0;
        float r9962030 = 11;
        float r9962031 = pow(r9962006, r9962030);
        float r9962032 = r9962029 * r9962031;
        float r9962033 = r9962028 - r9962032;
        float r9962034 = r9962024 + r9962033;
        float r9962035 = r9962022 + r9962034;
        float r9962036 = r9962015 + r9962035;
        return r9962036;
}

double f_od(double x) {
        double r9962037 = x;
        double r9962038 = r9962037 * r9962037;
        double r9962039 = 3;
        double r9962040 = pow(r9962038, r9962039);
        double r9962041 = r9962037 * r9962040;
        double r9962042 = -26357760.0;
        double r9962043 = 4392960.0;
        double r9962044 = r9962038 * r9962043;
        double r9962045 = r9962042 + r9962044;
        double r9962046 = r9962041 * r9962045;
        double r9962047 = 69189120.0;
        double r9962048 = r9962037 * r9962047;
        double r9962049 = r9962048 * r9962038;
        double r9962050 = -69189120.0;
        double r9962051 = r9962050 * r9962037;
        double r9962052 = r9962049 + r9962051;
        double r9962053 = r9962038 * r9962052;
        double r9962054 = 17297280.0;
        double r9962055 = r9962037 * r9962054;
        double r9962056 = 13;
        double r9962057 = pow(r9962037, r9962056);
        double r9962058 = 8192.0;
        double r9962059 = r9962057 * r9962058;
        double r9962060 = 319488.0;
        double r9962061 = 11;
        double r9962062 = pow(r9962037, r9962061);
        double r9962063 = r9962060 * r9962062;
        double r9962064 = r9962059 - r9962063;
        double r9962065 = r9962055 + r9962064;
        double r9962066 = r9962053 + r9962065;
        double r9962067 = r9962046 + r9962066;
        return r9962067;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9962068, r9962069, r9962070, r9962071, r9962072, r9962073, r9962074, r9962075, r9962076, r9962077, r9962078, r9962079, r9962080, r9962081, r9962082, r9962083, r9962084, r9962085, r9962086, r9962087, r9962088, r9962089, r9962090, r9962091, r9962092, r9962093, r9962094, r9962095, r9962096, r9962097, r9962098, r9962099, r9962100;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9962068, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9962069);
        mpfr_init(r9962070);
        mpfr_init_set_str(r9962071, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9962072);
        mpfr_init(r9962073);
        mpfr_init(r9962074);
        mpfr_init(r9962075);
        mpfr_init_set_str(r9962076, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9962077);
        mpfr_init(r9962078);
        mpfr_init(r9962079);
        mpfr_init(r9962080);
        mpfr_init_set_str(r9962081, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r9962082);
        mpfr_init(r9962083);
        mpfr_init(r9962084);
        mpfr_init(r9962085);
        mpfr_init_set_str(r9962086, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9962087);
        mpfr_init(r9962088);
        mpfr_init(r9962089);
        mpfr_init(r9962090);
        mpfr_init_set_str(r9962091, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r9962092);
        mpfr_init(r9962093);
        mpfr_init(r9962094);
        mpfr_init(r9962095);
        mpfr_init_set_str(r9962096, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9962097);
        mpfr_init(r9962098);
        mpfr_init(r9962099);
        mpfr_init(r9962100);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9962069, x, MPFR_RNDN);
        mpfr_mul(r9962070, r9962068, r9962069, MPFR_RNDN);
        ;
        mpfr_mul(r9962072, r9962069, r9962069, MPFR_RNDN);
        mpfr_mul(r9962073, r9962072, r9962069, MPFR_RNDN);
        mpfr_mul(r9962074, r9962071, r9962073, MPFR_RNDN);
        mpfr_add(r9962075, r9962070, r9962074, MPFR_RNDN);
        ;
        mpfr_mul(r9962077, r9962073, r9962069, MPFR_RNDN);
        mpfr_mul(r9962078, r9962077, r9962069, MPFR_RNDN);
        mpfr_mul(r9962079, r9962076, r9962078, MPFR_RNDN);
        mpfr_add(r9962080, r9962075, r9962079, MPFR_RNDN);
        ;
        mpfr_mul(r9962082, r9962078, r9962069, MPFR_RNDN);
        mpfr_mul(r9962083, r9962082, r9962069, MPFR_RNDN);
        mpfr_mul(r9962084, r9962081, r9962083, MPFR_RNDN);
        mpfr_add(r9962085, r9962080, r9962084, MPFR_RNDN);
        ;
        mpfr_mul(r9962087, r9962083, r9962069, MPFR_RNDN);
        mpfr_mul(r9962088, r9962087, r9962069, MPFR_RNDN);
        mpfr_mul(r9962089, r9962086, r9962088, MPFR_RNDN);
        mpfr_add(r9962090, r9962085, r9962089, MPFR_RNDN);
        ;
        mpfr_mul(r9962092, r9962088, r9962069, MPFR_RNDN);
        mpfr_mul(r9962093, r9962092, r9962069, MPFR_RNDN);
        mpfr_mul(r9962094, r9962091, r9962093, MPFR_RNDN);
        mpfr_add(r9962095, r9962090, r9962094, MPFR_RNDN);
        ;
        mpfr_mul(r9962097, r9962093, r9962069, MPFR_RNDN);
        mpfr_mul(r9962098, r9962097, r9962069, MPFR_RNDN);
        mpfr_mul(r9962099, r9962096, r9962098, MPFR_RNDN);
        mpfr_add(r9962100, r9962095, r9962099, MPFR_RNDN);
        return mpfr_get_d(r9962100, MPFR_RNDN);
}

static mpfr_t r9962101, r9962102, r9962103, r9962104, r9962105, r9962106, r9962107, r9962108, r9962109, r9962110, r9962111, r9962112, r9962113, r9962114, r9962115, r9962116, r9962117, r9962118, r9962119, r9962120, r9962121, r9962122, r9962123, r9962124, r9962125, r9962126, r9962127, r9962128, r9962129, r9962130, r9962131;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9962101);
        mpfr_init(r9962102);
        mpfr_init_set_str(r9962103, "3", 10, MPFR_RNDN);
        mpfr_init(r9962104);
        mpfr_init(r9962105);
        mpfr_init_set_str(r9962106, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962107, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9962108);
        mpfr_init(r9962109);
        mpfr_init(r9962110);
        mpfr_init_set_str(r9962111, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9962112);
        mpfr_init(r9962113);
        mpfr_init_set_str(r9962114, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9962115);
        mpfr_init(r9962116);
        mpfr_init(r9962117);
        mpfr_init_set_str(r9962118, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9962119);
        mpfr_init_set_str(r9962120, "13", 10, MPFR_RNDN);
        mpfr_init(r9962121);
        mpfr_init_set_str(r9962122, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9962123);
        mpfr_init_set_str(r9962124, "319488.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962125, "11", 10, MPFR_RNDN);
        mpfr_init(r9962126);
        mpfr_init(r9962127);
        mpfr_init(r9962128);
        mpfr_init(r9962129);
        mpfr_init(r9962130);
        mpfr_init(r9962131);
}

double f_fm(double x) {
        mpfr_set_d(r9962101, x, MPFR_RNDN);
        mpfr_mul(r9962102, r9962101, r9962101, MPFR_RNDN);
        ;
        mpfr_pow(r9962104, r9962102, r9962103, MPFR_RNDN);
        mpfr_mul(r9962105, r9962101, r9962104, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9962108, r9962102, r9962107, MPFR_RNDN);
        mpfr_add(r9962109, r9962106, r9962108, MPFR_RNDN);
        mpfr_mul(r9962110, r9962105, r9962109, MPFR_RNDN);
        ;
        mpfr_mul(r9962112, r9962101, r9962111, MPFR_RNDN);
        mpfr_mul(r9962113, r9962112, r9962102, MPFR_RNDN);
        ;
        mpfr_mul(r9962115, r9962114, r9962101, MPFR_RNDN);
        mpfr_add(r9962116, r9962113, r9962115, MPFR_RNDN);
        mpfr_mul(r9962117, r9962102, r9962116, MPFR_RNDN);
        ;
        mpfr_mul(r9962119, r9962101, r9962118, MPFR_RNDN);
        ;
        mpfr_pow(r9962121, r9962101, r9962120, MPFR_RNDN);
        ;
        mpfr_mul(r9962123, r9962121, r9962122, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9962126, r9962101, r9962125, MPFR_RNDN);
        mpfr_mul(r9962127, r9962124, r9962126, MPFR_RNDN);
        mpfr_sub(r9962128, r9962123, r9962127, MPFR_RNDN);
        mpfr_add(r9962129, r9962119, r9962128, MPFR_RNDN);
        mpfr_add(r9962130, r9962117, r9962129, MPFR_RNDN);
        mpfr_add(r9962131, r9962110, r9962130, MPFR_RNDN);
        return mpfr_get_d(r9962131, MPFR_RNDN);
}

static mpfr_t r9962132, r9962133, r9962134, r9962135, r9962136, r9962137, r9962138, r9962139, r9962140, r9962141, r9962142, r9962143, r9962144, r9962145, r9962146, r9962147, r9962148, r9962149, r9962150, r9962151, r9962152, r9962153, r9962154, r9962155, r9962156, r9962157, r9962158, r9962159, r9962160, r9962161, r9962162;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9962132);
        mpfr_init(r9962133);
        mpfr_init_set_str(r9962134, "3", 10, MPFR_RNDN);
        mpfr_init(r9962135);
        mpfr_init(r9962136);
        mpfr_init_set_str(r9962137, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962138, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r9962139);
        mpfr_init(r9962140);
        mpfr_init(r9962141);
        mpfr_init_set_str(r9962142, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9962143);
        mpfr_init(r9962144);
        mpfr_init_set_str(r9962145, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r9962146);
        mpfr_init(r9962147);
        mpfr_init(r9962148);
        mpfr_init_set_str(r9962149, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r9962150);
        mpfr_init_set_str(r9962151, "13", 10, MPFR_RNDN);
        mpfr_init(r9962152);
        mpfr_init_set_str(r9962153, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r9962154);
        mpfr_init_set_str(r9962155, "319488.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962156, "11", 10, MPFR_RNDN);
        mpfr_init(r9962157);
        mpfr_init(r9962158);
        mpfr_init(r9962159);
        mpfr_init(r9962160);
        mpfr_init(r9962161);
        mpfr_init(r9962162);
}

double f_dm(double x) {
        mpfr_set_d(r9962132, x, MPFR_RNDN);
        mpfr_mul(r9962133, r9962132, r9962132, MPFR_RNDN);
        ;
        mpfr_pow(r9962135, r9962133, r9962134, MPFR_RNDN);
        mpfr_mul(r9962136, r9962132, r9962135, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r9962139, r9962133, r9962138, MPFR_RNDN);
        mpfr_add(r9962140, r9962137, r9962139, MPFR_RNDN);
        mpfr_mul(r9962141, r9962136, r9962140, MPFR_RNDN);
        ;
        mpfr_mul(r9962143, r9962132, r9962142, MPFR_RNDN);
        mpfr_mul(r9962144, r9962143, r9962133, MPFR_RNDN);
        ;
        mpfr_mul(r9962146, r9962145, r9962132, MPFR_RNDN);
        mpfr_add(r9962147, r9962144, r9962146, MPFR_RNDN);
        mpfr_mul(r9962148, r9962133, r9962147, MPFR_RNDN);
        ;
        mpfr_mul(r9962150, r9962132, r9962149, MPFR_RNDN);
        ;
        mpfr_pow(r9962152, r9962132, r9962151, MPFR_RNDN);
        ;
        mpfr_mul(r9962154, r9962152, r9962153, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9962157, r9962132, r9962156, MPFR_RNDN);
        mpfr_mul(r9962158, r9962155, r9962157, MPFR_RNDN);
        mpfr_sub(r9962159, r9962154, r9962158, MPFR_RNDN);
        mpfr_add(r9962160, r9962150, r9962159, MPFR_RNDN);
        mpfr_add(r9962161, r9962148, r9962160, MPFR_RNDN);
        mpfr_add(r9962162, r9962141, r9962161, MPFR_RNDN);
        return mpfr_get_d(r9962162, MPFR_RNDN);
}

