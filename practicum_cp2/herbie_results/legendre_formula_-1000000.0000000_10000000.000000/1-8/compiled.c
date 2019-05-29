#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r6405806 = 0.273438;
        float r6405807 = -9.84375;
        float r6405808 = x;
        float r6405809 = r6405808 * r6405808;
        float r6405810 = r6405807 * r6405809;
        float r6405811 = r6405806 + r6405810;
        float r6405812 = 54.140625;
        float r6405813 = r6405809 * r6405808;
        float r6405814 = r6405813 * r6405808;
        float r6405815 = r6405812 * r6405814;
        float r6405816 = r6405811 + r6405815;
        float r6405817 = -93.84375;
        float r6405818 = r6405814 * r6405808;
        float r6405819 = r6405818 * r6405808;
        float r6405820 = r6405817 * r6405819;
        float r6405821 = r6405816 + r6405820;
        float r6405822 = 50.273438;
        float r6405823 = r6405819 * r6405808;
        float r6405824 = r6405823 * r6405808;
        float r6405825 = r6405822 * r6405824;
        float r6405826 = r6405821 + r6405825;
        return r6405826;
}

double f_id(double x) {
        double r6405827 = 0.273438;
        double r6405828 = -9.84375;
        double r6405829 = x;
        double r6405830 = r6405829 * r6405829;
        double r6405831 = r6405828 * r6405830;
        double r6405832 = r6405827 + r6405831;
        double r6405833 = 54.140625;
        double r6405834 = r6405830 * r6405829;
        double r6405835 = r6405834 * r6405829;
        double r6405836 = r6405833 * r6405835;
        double r6405837 = r6405832 + r6405836;
        double r6405838 = -93.84375;
        double r6405839 = r6405835 * r6405829;
        double r6405840 = r6405839 * r6405829;
        double r6405841 = r6405838 * r6405840;
        double r6405842 = r6405837 + r6405841;
        double r6405843 = 50.273438;
        double r6405844 = r6405840 * r6405829;
        double r6405845 = r6405844 * r6405829;
        double r6405846 = r6405843 * r6405845;
        double r6405847 = r6405842 + r6405846;
        return r6405847;
}


double f_of(float x) {
        float r6405848 = x;
        float r6405849 = 54.140625;
        float r6405850 = r6405848 * r6405849;
        float r6405851 = 3;
        float r6405852 = pow(r6405848, r6405851);
        float r6405853 = r6405850 * r6405852;
        float r6405854 = -9.84375;
        float r6405855 = r6405848 * r6405854;
        float r6405856 = r6405848 * r6405855;
        float r6405857 = r6405853 + r6405856;
        float r6405858 = 0.273438;
        float r6405859 = r6405857 + r6405858;
        float r6405860 = r6405852 * r6405852;
        float r6405861 = -93.84375;
        float r6405862 = 50.273438;
        float r6405863 = r6405862 * r6405848;
        float r6405864 = r6405863 * r6405848;
        float r6405865 = r6405861 + r6405864;
        float r6405866 = r6405860 * r6405865;
        float r6405867 = r6405859 + r6405866;
        return r6405867;
}

double f_od(double x) {
        double r6405868 = x;
        double r6405869 = 54.140625;
        double r6405870 = r6405868 * r6405869;
        double r6405871 = 3;
        double r6405872 = pow(r6405868, r6405871);
        double r6405873 = r6405870 * r6405872;
        double r6405874 = -9.84375;
        double r6405875 = r6405868 * r6405874;
        double r6405876 = r6405868 * r6405875;
        double r6405877 = r6405873 + r6405876;
        double r6405878 = 0.273438;
        double r6405879 = r6405877 + r6405878;
        double r6405880 = r6405872 * r6405872;
        double r6405881 = -93.84375;
        double r6405882 = 50.273438;
        double r6405883 = r6405882 * r6405868;
        double r6405884 = r6405883 * r6405868;
        double r6405885 = r6405881 + r6405884;
        double r6405886 = r6405880 * r6405885;
        double r6405887 = r6405879 + r6405886;
        return r6405887;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6405888, r6405889, r6405890, r6405891, r6405892, r6405893, r6405894, r6405895, r6405896, r6405897, r6405898, r6405899, r6405900, r6405901, r6405902, r6405903, r6405904, r6405905, r6405906, r6405907, r6405908;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r6405888, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r6405889, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6405890);
        mpfr_init(r6405891);
        mpfr_init(r6405892);
        mpfr_init(r6405893);
        mpfr_init_set_str(r6405894, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6405895);
        mpfr_init(r6405896);
        mpfr_init(r6405897);
        mpfr_init(r6405898);
        mpfr_init_set_str(r6405899, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r6405900);
        mpfr_init(r6405901);
        mpfr_init(r6405902);
        mpfr_init(r6405903);
        mpfr_init_set_str(r6405904, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6405905);
        mpfr_init(r6405906);
        mpfr_init(r6405907);
        mpfr_init(r6405908);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6405890, x, MPFR_RNDN);
        mpfr_mul(r6405891, r6405890, r6405890, MPFR_RNDN);
        mpfr_mul(r6405892, r6405889, r6405891, MPFR_RNDN);
        mpfr_add(r6405893, r6405888, r6405892, MPFR_RNDN);
        ;
        mpfr_mul(r6405895, r6405891, r6405890, MPFR_RNDN);
        mpfr_mul(r6405896, r6405895, r6405890, MPFR_RNDN);
        mpfr_mul(r6405897, r6405894, r6405896, MPFR_RNDN);
        mpfr_add(r6405898, r6405893, r6405897, MPFR_RNDN);
        ;
        mpfr_mul(r6405900, r6405896, r6405890, MPFR_RNDN);
        mpfr_mul(r6405901, r6405900, r6405890, MPFR_RNDN);
        mpfr_mul(r6405902, r6405899, r6405901, MPFR_RNDN);
        mpfr_add(r6405903, r6405898, r6405902, MPFR_RNDN);
        ;
        mpfr_mul(r6405905, r6405901, r6405890, MPFR_RNDN);
        mpfr_mul(r6405906, r6405905, r6405890, MPFR_RNDN);
        mpfr_mul(r6405907, r6405904, r6405906, MPFR_RNDN);
        mpfr_add(r6405908, r6405903, r6405907, MPFR_RNDN);
        return mpfr_get_d(r6405908, MPFR_RNDN);
}

static mpfr_t r6405909, r6405910, r6405911, r6405912, r6405913, r6405914, r6405915, r6405916, r6405917, r6405918, r6405919, r6405920, r6405921, r6405922, r6405923, r6405924, r6405925, r6405926, r6405927, r6405928;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6405909);
        mpfr_init_set_str(r6405910, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6405911);
        mpfr_init_set_str(r6405912, "3", 10, MPFR_RNDN);
        mpfr_init(r6405913);
        mpfr_init(r6405914);
        mpfr_init_set_str(r6405915, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6405916);
        mpfr_init(r6405917);
        mpfr_init(r6405918);
        mpfr_init_set_str(r6405919, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6405920);
        mpfr_init(r6405921);
        mpfr_init_set_str(r6405922, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6405923, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6405924);
        mpfr_init(r6405925);
        mpfr_init(r6405926);
        mpfr_init(r6405927);
        mpfr_init(r6405928);
}

double f_fm(double x) {
        mpfr_set_d(r6405909, x, MPFR_RNDN);
        ;
        mpfr_mul(r6405911, r6405909, r6405910, MPFR_RNDN);
        ;
        mpfr_pow(r6405913, r6405909, r6405912, MPFR_RNDN);
        mpfr_mul(r6405914, r6405911, r6405913, MPFR_RNDN);
        ;
        mpfr_mul(r6405916, r6405909, r6405915, MPFR_RNDN);
        mpfr_mul(r6405917, r6405909, r6405916, MPFR_RNDN);
        mpfr_add(r6405918, r6405914, r6405917, MPFR_RNDN);
        ;
        mpfr_add(r6405920, r6405918, r6405919, MPFR_RNDN);
        mpfr_mul(r6405921, r6405913, r6405913, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6405924, r6405923, r6405909, MPFR_RNDN);
        mpfr_mul(r6405925, r6405924, r6405909, MPFR_RNDN);
        mpfr_add(r6405926, r6405922, r6405925, MPFR_RNDN);
        mpfr_mul(r6405927, r6405921, r6405926, MPFR_RNDN);
        mpfr_add(r6405928, r6405920, r6405927, MPFR_RNDN);
        return mpfr_get_d(r6405928, MPFR_RNDN);
}

static mpfr_t r6405929, r6405930, r6405931, r6405932, r6405933, r6405934, r6405935, r6405936, r6405937, r6405938, r6405939, r6405940, r6405941, r6405942, r6405943, r6405944, r6405945, r6405946, r6405947, r6405948;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r6405929);
        mpfr_init_set_str(r6405930, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r6405931);
        mpfr_init_set_str(r6405932, "3", 10, MPFR_RNDN);
        mpfr_init(r6405933);
        mpfr_init(r6405934);
        mpfr_init_set_str(r6405935, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r6405936);
        mpfr_init(r6405937);
        mpfr_init(r6405938);
        mpfr_init_set_str(r6405939, "0.273438", 10, MPFR_RNDN);
        mpfr_init(r6405940);
        mpfr_init(r6405941);
        mpfr_init_set_str(r6405942, "-93.84375", 10, MPFR_RNDN);
        mpfr_init_set_str(r6405943, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r6405944);
        mpfr_init(r6405945);
        mpfr_init(r6405946);
        mpfr_init(r6405947);
        mpfr_init(r6405948);
}

double f_dm(double x) {
        mpfr_set_d(r6405929, x, MPFR_RNDN);
        ;
        mpfr_mul(r6405931, r6405929, r6405930, MPFR_RNDN);
        ;
        mpfr_pow(r6405933, r6405929, r6405932, MPFR_RNDN);
        mpfr_mul(r6405934, r6405931, r6405933, MPFR_RNDN);
        ;
        mpfr_mul(r6405936, r6405929, r6405935, MPFR_RNDN);
        mpfr_mul(r6405937, r6405929, r6405936, MPFR_RNDN);
        mpfr_add(r6405938, r6405934, r6405937, MPFR_RNDN);
        ;
        mpfr_add(r6405940, r6405938, r6405939, MPFR_RNDN);
        mpfr_mul(r6405941, r6405933, r6405933, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6405944, r6405943, r6405929, MPFR_RNDN);
        mpfr_mul(r6405945, r6405944, r6405929, MPFR_RNDN);
        mpfr_add(r6405946, r6405942, r6405945, MPFR_RNDN);
        mpfr_mul(r6405947, r6405941, r6405946, MPFR_RNDN);
        mpfr_add(r6405948, r6405940, r6405947, MPFR_RNDN);
        return mpfr_get_d(r6405948, MPFR_RNDN);
}

