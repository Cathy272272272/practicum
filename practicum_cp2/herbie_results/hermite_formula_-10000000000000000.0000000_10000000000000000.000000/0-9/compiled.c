#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r6896043 = 30240.0;
        float r6896044 = x;
        float r6896045 = r6896043 * r6896044;
        float r6896046 = -80640.0;
        float r6896047 = r6896044 * r6896044;
        float r6896048 = r6896047 * r6896044;
        float r6896049 = r6896046 * r6896048;
        float r6896050 = r6896045 + r6896049;
        float r6896051 = 48384.0;
        float r6896052 = r6896048 * r6896044;
        float r6896053 = r6896052 * r6896044;
        float r6896054 = r6896051 * r6896053;
        float r6896055 = r6896050 + r6896054;
        float r6896056 = -9216.0;
        float r6896057 = r6896053 * r6896044;
        float r6896058 = r6896057 * r6896044;
        float r6896059 = r6896056 * r6896058;
        float r6896060 = r6896055 + r6896059;
        float r6896061 = 512.0;
        float r6896062 = r6896058 * r6896044;
        float r6896063 = r6896062 * r6896044;
        float r6896064 = r6896061 * r6896063;
        float r6896065 = r6896060 + r6896064;
        return r6896065;
}

double f_id(double x) {
        double r6896066 = 30240.0;
        double r6896067 = x;
        double r6896068 = r6896066 * r6896067;
        double r6896069 = -80640.0;
        double r6896070 = r6896067 * r6896067;
        double r6896071 = r6896070 * r6896067;
        double r6896072 = r6896069 * r6896071;
        double r6896073 = r6896068 + r6896072;
        double r6896074 = 48384.0;
        double r6896075 = r6896071 * r6896067;
        double r6896076 = r6896075 * r6896067;
        double r6896077 = r6896074 * r6896076;
        double r6896078 = r6896073 + r6896077;
        double r6896079 = -9216.0;
        double r6896080 = r6896076 * r6896067;
        double r6896081 = r6896080 * r6896067;
        double r6896082 = r6896079 * r6896081;
        double r6896083 = r6896078 + r6896082;
        double r6896084 = 512.0;
        double r6896085 = r6896081 * r6896067;
        double r6896086 = r6896085 * r6896067;
        double r6896087 = r6896084 * r6896086;
        double r6896088 = r6896083 + r6896087;
        return r6896088;
}


double f_of(float x) {
        float r6896089 = x;
        float r6896090 = r6896089 * r6896089;
        float r6896091 = 48384.0;
        float r6896092 = r6896089 * r6896091;
        float r6896093 = r6896090 * r6896092;
        float r6896094 = r6896090 * r6896093;
        float r6896095 = 30240.0;
        float r6896096 = r6896095 * r6896089;
        float r6896097 = -80640.0;
        float r6896098 = r6896097 * r6896089;
        float r6896099 = r6896098 * r6896090;
        float r6896100 = r6896096 + r6896099;
        float r6896101 = r6896094 + r6896100;
        float r6896102 = 3;
        float r6896103 = r6896102 + r6896102;
        float r6896104 = pow(r6896089, r6896103);
        float r6896105 = r6896104 * r6896089;
        float r6896106 = -9216.0;
        float r6896107 = 512.0;
        float r6896108 = r6896107 * r6896089;
        float r6896109 = r6896089 * r6896108;
        float r6896110 = r6896106 + r6896109;
        float r6896111 = r6896105 * r6896110;
        float r6896112 = r6896101 + r6896111;
        return r6896112;
}

double f_od(double x) {
        double r6896113 = x;
        double r6896114 = r6896113 * r6896113;
        double r6896115 = 48384.0;
        double r6896116 = r6896113 * r6896115;
        double r6896117 = r6896114 * r6896116;
        double r6896118 = r6896114 * r6896117;
        double r6896119 = 30240.0;
        double r6896120 = r6896119 * r6896113;
        double r6896121 = -80640.0;
        double r6896122 = r6896121 * r6896113;
        double r6896123 = r6896122 * r6896114;
        double r6896124 = r6896120 + r6896123;
        double r6896125 = r6896118 + r6896124;
        double r6896126 = 3;
        double r6896127 = r6896126 + r6896126;
        double r6896128 = pow(r6896113, r6896127);
        double r6896129 = r6896128 * r6896113;
        double r6896130 = -9216.0;
        double r6896131 = 512.0;
        double r6896132 = r6896131 * r6896113;
        double r6896133 = r6896113 * r6896132;
        double r6896134 = r6896130 + r6896133;
        double r6896135 = r6896129 * r6896134;
        double r6896136 = r6896125 + r6896135;
        return r6896136;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896137, r6896138, r6896139, r6896140, r6896141, r6896142, r6896143, r6896144, r6896145, r6896146, r6896147, r6896148, r6896149, r6896150, r6896151, r6896152, r6896153, r6896154, r6896155, r6896156, r6896157, r6896158, r6896159;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6896137, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r6896138);
        mpfr_init(r6896139);
        mpfr_init_set_str(r6896140, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r6896141);
        mpfr_init(r6896142);
        mpfr_init(r6896143);
        mpfr_init(r6896144);
        mpfr_init_set_str(r6896145, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r6896146);
        mpfr_init(r6896147);
        mpfr_init(r6896148);
        mpfr_init(r6896149);
        mpfr_init_set_str(r6896150, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r6896151);
        mpfr_init(r6896152);
        mpfr_init(r6896153);
        mpfr_init(r6896154);
        mpfr_init_set_str(r6896155, "512.0", 10, MPFR_RNDN);
        mpfr_init(r6896156);
        mpfr_init(r6896157);
        mpfr_init(r6896158);
        mpfr_init(r6896159);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6896138, x, MPFR_RNDN);
        mpfr_mul(r6896139, r6896137, r6896138, MPFR_RNDN);
        ;
        mpfr_mul(r6896141, r6896138, r6896138, MPFR_RNDN);
        mpfr_mul(r6896142, r6896141, r6896138, MPFR_RNDN);
        mpfr_mul(r6896143, r6896140, r6896142, MPFR_RNDN);
        mpfr_add(r6896144, r6896139, r6896143, MPFR_RNDN);
        ;
        mpfr_mul(r6896146, r6896142, r6896138, MPFR_RNDN);
        mpfr_mul(r6896147, r6896146, r6896138, MPFR_RNDN);
        mpfr_mul(r6896148, r6896145, r6896147, MPFR_RNDN);
        mpfr_add(r6896149, r6896144, r6896148, MPFR_RNDN);
        ;
        mpfr_mul(r6896151, r6896147, r6896138, MPFR_RNDN);
        mpfr_mul(r6896152, r6896151, r6896138, MPFR_RNDN);
        mpfr_mul(r6896153, r6896150, r6896152, MPFR_RNDN);
        mpfr_add(r6896154, r6896149, r6896153, MPFR_RNDN);
        ;
        mpfr_mul(r6896156, r6896152, r6896138, MPFR_RNDN);
        mpfr_mul(r6896157, r6896156, r6896138, MPFR_RNDN);
        mpfr_mul(r6896158, r6896155, r6896157, MPFR_RNDN);
        mpfr_add(r6896159, r6896154, r6896158, MPFR_RNDN);
        return mpfr_get_d(r6896159, MPFR_RNDN);
}

static mpfr_t r6896160, r6896161, r6896162, r6896163, r6896164, r6896165, r6896166, r6896167, r6896168, r6896169, r6896170, r6896171, r6896172, r6896173, r6896174, r6896175, r6896176, r6896177, r6896178, r6896179, r6896180, r6896181, r6896182, r6896183;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6896160);
        mpfr_init(r6896161);
        mpfr_init_set_str(r6896162, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r6896163);
        mpfr_init(r6896164);
        mpfr_init(r6896165);
        mpfr_init_set_str(r6896166, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r6896167);
        mpfr_init_set_str(r6896168, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r6896169);
        mpfr_init(r6896170);
        mpfr_init(r6896171);
        mpfr_init(r6896172);
        mpfr_init_set_str(r6896173, "3", 10, MPFR_RNDN);
        mpfr_init(r6896174);
        mpfr_init(r6896175);
        mpfr_init(r6896176);
        mpfr_init_set_str(r6896177, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896178, "512.0", 10, MPFR_RNDN);
        mpfr_init(r6896179);
        mpfr_init(r6896180);
        mpfr_init(r6896181);
        mpfr_init(r6896182);
        mpfr_init(r6896183);
}

double f_fm(double x) {
        mpfr_set_d(r6896160, x, MPFR_RNDN);
        mpfr_mul(r6896161, r6896160, r6896160, MPFR_RNDN);
        ;
        mpfr_mul(r6896163, r6896160, r6896162, MPFR_RNDN);
        mpfr_mul(r6896164, r6896161, r6896163, MPFR_RNDN);
        mpfr_mul(r6896165, r6896161, r6896164, MPFR_RNDN);
        ;
        mpfr_mul(r6896167, r6896166, r6896160, MPFR_RNDN);
        ;
        mpfr_mul(r6896169, r6896168, r6896160, MPFR_RNDN);
        mpfr_mul(r6896170, r6896169, r6896161, MPFR_RNDN);
        mpfr_add(r6896171, r6896167, r6896170, MPFR_RNDN);
        mpfr_add(r6896172, r6896165, r6896171, MPFR_RNDN);
        ;
        mpfr_add(r6896174, r6896173, r6896173, MPFR_RNDN);
        mpfr_pow(r6896175, r6896160, r6896174, MPFR_RNDN);
        mpfr_mul(r6896176, r6896175, r6896160, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6896179, r6896178, r6896160, MPFR_RNDN);
        mpfr_mul(r6896180, r6896160, r6896179, MPFR_RNDN);
        mpfr_add(r6896181, r6896177, r6896180, MPFR_RNDN);
        mpfr_mul(r6896182, r6896176, r6896181, MPFR_RNDN);
        mpfr_add(r6896183, r6896172, r6896182, MPFR_RNDN);
        return mpfr_get_d(r6896183, MPFR_RNDN);
}

static mpfr_t r6896184, r6896185, r6896186, r6896187, r6896188, r6896189, r6896190, r6896191, r6896192, r6896193, r6896194, r6896195, r6896196, r6896197, r6896198, r6896199, r6896200, r6896201, r6896202, r6896203, r6896204, r6896205, r6896206, r6896207;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6896184);
        mpfr_init(r6896185);
        mpfr_init_set_str(r6896186, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r6896187);
        mpfr_init(r6896188);
        mpfr_init(r6896189);
        mpfr_init_set_str(r6896190, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r6896191);
        mpfr_init_set_str(r6896192, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r6896193);
        mpfr_init(r6896194);
        mpfr_init(r6896195);
        mpfr_init(r6896196);
        mpfr_init_set_str(r6896197, "3", 10, MPFR_RNDN);
        mpfr_init(r6896198);
        mpfr_init(r6896199);
        mpfr_init(r6896200);
        mpfr_init_set_str(r6896201, "-9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896202, "512.0", 10, MPFR_RNDN);
        mpfr_init(r6896203);
        mpfr_init(r6896204);
        mpfr_init(r6896205);
        mpfr_init(r6896206);
        mpfr_init(r6896207);
}

double f_dm(double x) {
        mpfr_set_d(r6896184, x, MPFR_RNDN);
        mpfr_mul(r6896185, r6896184, r6896184, MPFR_RNDN);
        ;
        mpfr_mul(r6896187, r6896184, r6896186, MPFR_RNDN);
        mpfr_mul(r6896188, r6896185, r6896187, MPFR_RNDN);
        mpfr_mul(r6896189, r6896185, r6896188, MPFR_RNDN);
        ;
        mpfr_mul(r6896191, r6896190, r6896184, MPFR_RNDN);
        ;
        mpfr_mul(r6896193, r6896192, r6896184, MPFR_RNDN);
        mpfr_mul(r6896194, r6896193, r6896185, MPFR_RNDN);
        mpfr_add(r6896195, r6896191, r6896194, MPFR_RNDN);
        mpfr_add(r6896196, r6896189, r6896195, MPFR_RNDN);
        ;
        mpfr_add(r6896198, r6896197, r6896197, MPFR_RNDN);
        mpfr_pow(r6896199, r6896184, r6896198, MPFR_RNDN);
        mpfr_mul(r6896200, r6896199, r6896184, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6896203, r6896202, r6896184, MPFR_RNDN);
        mpfr_mul(r6896204, r6896184, r6896203, MPFR_RNDN);
        mpfr_add(r6896205, r6896201, r6896204, MPFR_RNDN);
        mpfr_mul(r6896206, r6896200, r6896205, MPFR_RNDN);
        mpfr_add(r6896207, r6896196, r6896206, MPFR_RNDN);
        return mpfr_get_d(r6896207, MPFR_RNDN);
}

