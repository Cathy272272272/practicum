#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r8099811 = -2.1875;
        float r8099812 = x;
        float r8099813 = r8099811 * r8099812;
        float r8099814 = 19.6875;
        float r8099815 = r8099812 * r8099812;
        float r8099816 = r8099815 * r8099812;
        float r8099817 = r8099814 * r8099816;
        float r8099818 = r8099813 + r8099817;
        float r8099819 = -43.3125;
        float r8099820 = r8099816 * r8099812;
        float r8099821 = r8099820 * r8099812;
        float r8099822 = r8099819 * r8099821;
        float r8099823 = r8099818 + r8099822;
        float r8099824 = 26.8125;
        float r8099825 = r8099821 * r8099812;
        float r8099826 = r8099825 * r8099812;
        float r8099827 = r8099824 * r8099826;
        float r8099828 = r8099823 + r8099827;
        return r8099828;
}

double f_id(double x) {
        double r8099829 = -2.1875;
        double r8099830 = x;
        double r8099831 = r8099829 * r8099830;
        double r8099832 = 19.6875;
        double r8099833 = r8099830 * r8099830;
        double r8099834 = r8099833 * r8099830;
        double r8099835 = r8099832 * r8099834;
        double r8099836 = r8099831 + r8099835;
        double r8099837 = -43.3125;
        double r8099838 = r8099834 * r8099830;
        double r8099839 = r8099838 * r8099830;
        double r8099840 = r8099837 * r8099839;
        double r8099841 = r8099836 + r8099840;
        double r8099842 = 26.8125;
        double r8099843 = r8099839 * r8099830;
        double r8099844 = r8099843 * r8099830;
        double r8099845 = r8099842 * r8099844;
        double r8099846 = r8099841 + r8099845;
        return r8099846;
}


double f_of(float x) {
        float r8099847 = x;
        float r8099848 = r8099847 * r8099847;
        float r8099849 = r8099848 * r8099848;
        float r8099850 = 26.8125;
        float r8099851 = r8099850 * r8099847;
        float r8099852 = r8099848 * r8099851;
        float r8099853 = -43.3125;
        float r8099854 = r8099847 * r8099853;
        float r8099855 = r8099852 + r8099854;
        float r8099856 = r8099849 * r8099855;
        float r8099857 = 19.6875;
        float r8099858 = r8099857 * r8099847;
        float r8099859 = r8099858 * r8099847;
        float r8099860 = -2.1875;
        float r8099861 = r8099859 + r8099860;
        float r8099862 = r8099847 * r8099861;
        float r8099863 = r8099856 + r8099862;
        return r8099863;
}

double f_od(double x) {
        double r8099864 = x;
        double r8099865 = r8099864 * r8099864;
        double r8099866 = r8099865 * r8099865;
        double r8099867 = 26.8125;
        double r8099868 = r8099867 * r8099864;
        double r8099869 = r8099865 * r8099868;
        double r8099870 = -43.3125;
        double r8099871 = r8099864 * r8099870;
        double r8099872 = r8099869 + r8099871;
        double r8099873 = r8099866 * r8099872;
        double r8099874 = 19.6875;
        double r8099875 = r8099874 * r8099864;
        double r8099876 = r8099875 * r8099864;
        double r8099877 = -2.1875;
        double r8099878 = r8099876 + r8099877;
        double r8099879 = r8099864 * r8099878;
        double r8099880 = r8099873 + r8099879;
        return r8099880;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8099881, r8099882, r8099883, r8099884, r8099885, r8099886, r8099887, r8099888, r8099889, r8099890, r8099891, r8099892, r8099893, r8099894, r8099895, r8099896, r8099897, r8099898;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8099881, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8099882);
        mpfr_init(r8099883);
        mpfr_init_set_str(r8099884, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8099885);
        mpfr_init(r8099886);
        mpfr_init(r8099887);
        mpfr_init(r8099888);
        mpfr_init_set_str(r8099889, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8099890);
        mpfr_init(r8099891);
        mpfr_init(r8099892);
        mpfr_init(r8099893);
        mpfr_init_set_str(r8099894, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8099895);
        mpfr_init(r8099896);
        mpfr_init(r8099897);
        mpfr_init(r8099898);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8099882, x, MPFR_RNDN);
        mpfr_mul(r8099883, r8099881, r8099882, MPFR_RNDN);
        ;
        mpfr_mul(r8099885, r8099882, r8099882, MPFR_RNDN);
        mpfr_mul(r8099886, r8099885, r8099882, MPFR_RNDN);
        mpfr_mul(r8099887, r8099884, r8099886, MPFR_RNDN);
        mpfr_add(r8099888, r8099883, r8099887, MPFR_RNDN);
        ;
        mpfr_mul(r8099890, r8099886, r8099882, MPFR_RNDN);
        mpfr_mul(r8099891, r8099890, r8099882, MPFR_RNDN);
        mpfr_mul(r8099892, r8099889, r8099891, MPFR_RNDN);
        mpfr_add(r8099893, r8099888, r8099892, MPFR_RNDN);
        ;
        mpfr_mul(r8099895, r8099891, r8099882, MPFR_RNDN);
        mpfr_mul(r8099896, r8099895, r8099882, MPFR_RNDN);
        mpfr_mul(r8099897, r8099894, r8099896, MPFR_RNDN);
        mpfr_add(r8099898, r8099893, r8099897, MPFR_RNDN);
        return mpfr_get_d(r8099898, MPFR_RNDN);
}

static mpfr_t r8099899, r8099900, r8099901, r8099902, r8099903, r8099904, r8099905, r8099906, r8099907, r8099908, r8099909, r8099910, r8099911, r8099912, r8099913, r8099914, r8099915;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8099899);
        mpfr_init(r8099900);
        mpfr_init(r8099901);
        mpfr_init_set_str(r8099902, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8099903);
        mpfr_init(r8099904);
        mpfr_init_set_str(r8099905, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8099906);
        mpfr_init(r8099907);
        mpfr_init(r8099908);
        mpfr_init_set_str(r8099909, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8099910);
        mpfr_init(r8099911);
        mpfr_init_set_str(r8099912, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8099913);
        mpfr_init(r8099914);
        mpfr_init(r8099915);
}

double f_fm(double x) {
        mpfr_set_d(r8099899, x, MPFR_RNDN);
        mpfr_mul(r8099900, r8099899, r8099899, MPFR_RNDN);
        mpfr_mul(r8099901, r8099900, r8099900, MPFR_RNDN);
        ;
        mpfr_mul(r8099903, r8099902, r8099899, MPFR_RNDN);
        mpfr_mul(r8099904, r8099900, r8099903, MPFR_RNDN);
        ;
        mpfr_mul(r8099906, r8099899, r8099905, MPFR_RNDN);
        mpfr_add(r8099907, r8099904, r8099906, MPFR_RNDN);
        mpfr_mul(r8099908, r8099901, r8099907, MPFR_RNDN);
        ;
        mpfr_mul(r8099910, r8099909, r8099899, MPFR_RNDN);
        mpfr_mul(r8099911, r8099910, r8099899, MPFR_RNDN);
        ;
        mpfr_add(r8099913, r8099911, r8099912, MPFR_RNDN);
        mpfr_mul(r8099914, r8099899, r8099913, MPFR_RNDN);
        mpfr_add(r8099915, r8099908, r8099914, MPFR_RNDN);
        return mpfr_get_d(r8099915, MPFR_RNDN);
}

static mpfr_t r8099916, r8099917, r8099918, r8099919, r8099920, r8099921, r8099922, r8099923, r8099924, r8099925, r8099926, r8099927, r8099928, r8099929, r8099930, r8099931, r8099932;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r8099916);
        mpfr_init(r8099917);
        mpfr_init(r8099918);
        mpfr_init_set_str(r8099919, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r8099920);
        mpfr_init(r8099921);
        mpfr_init_set_str(r8099922, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r8099923);
        mpfr_init(r8099924);
        mpfr_init(r8099925);
        mpfr_init_set_str(r8099926, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r8099927);
        mpfr_init(r8099928);
        mpfr_init_set_str(r8099929, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r8099930);
        mpfr_init(r8099931);
        mpfr_init(r8099932);
}

double f_dm(double x) {
        mpfr_set_d(r8099916, x, MPFR_RNDN);
        mpfr_mul(r8099917, r8099916, r8099916, MPFR_RNDN);
        mpfr_mul(r8099918, r8099917, r8099917, MPFR_RNDN);
        ;
        mpfr_mul(r8099920, r8099919, r8099916, MPFR_RNDN);
        mpfr_mul(r8099921, r8099917, r8099920, MPFR_RNDN);
        ;
        mpfr_mul(r8099923, r8099916, r8099922, MPFR_RNDN);
        mpfr_add(r8099924, r8099921, r8099923, MPFR_RNDN);
        mpfr_mul(r8099925, r8099918, r8099924, MPFR_RNDN);
        ;
        mpfr_mul(r8099927, r8099926, r8099916, MPFR_RNDN);
        mpfr_mul(r8099928, r8099927, r8099916, MPFR_RNDN);
        ;
        mpfr_add(r8099930, r8099928, r8099929, MPFR_RNDN);
        mpfr_mul(r8099931, r8099916, r8099930, MPFR_RNDN);
        mpfr_add(r8099932, r8099925, r8099931, MPFR_RNDN);
        return mpfr_get_d(r8099932, MPFR_RNDN);
}

