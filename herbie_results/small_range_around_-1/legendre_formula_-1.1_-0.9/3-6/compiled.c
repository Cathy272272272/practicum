#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r29570812 = -0.3125;
        float r29570813 = 6.5625;
        float r29570814 = x;
        float r29570815 = r29570814 * r29570814;
        float r29570816 = r29570813 * r29570815;
        float r29570817 = r29570812 + r29570816;
        float r29570818 = -19.6875;
        float r29570819 = r29570815 * r29570814;
        float r29570820 = r29570819 * r29570814;
        float r29570821 = r29570818 * r29570820;
        float r29570822 = r29570817 + r29570821;
        float r29570823 = 14.4375;
        float r29570824 = r29570820 * r29570814;
        float r29570825 = r29570824 * r29570814;
        float r29570826 = r29570823 * r29570825;
        float r29570827 = r29570822 + r29570826;
        return r29570827;
}

double f_id(double x) {
        double r29570828 = -0.3125;
        double r29570829 = 6.5625;
        double r29570830 = x;
        double r29570831 = r29570830 * r29570830;
        double r29570832 = r29570829 * r29570831;
        double r29570833 = r29570828 + r29570832;
        double r29570834 = -19.6875;
        double r29570835 = r29570831 * r29570830;
        double r29570836 = r29570835 * r29570830;
        double r29570837 = r29570834 * r29570836;
        double r29570838 = r29570833 + r29570837;
        double r29570839 = 14.4375;
        double r29570840 = r29570836 * r29570830;
        double r29570841 = r29570840 * r29570830;
        double r29570842 = r29570839 * r29570841;
        double r29570843 = r29570838 + r29570842;
        return r29570843;
}


double f_of(float x) {
        float r29570844 = x;
        float r29570845 = r29570844 * r29570844;
        float r29570846 = r29570845 * r29570845;
        float r29570847 = 14.4375;
        float r29570848 = r29570845 * r29570847;
        float r29570849 = -19.6875;
        float r29570850 = r29570848 + r29570849;
        float r29570851 = r29570846 * r29570850;
        float r29570852 = -0.3125;
        float r29570853 = 6.5625;
        float r29570854 = r29570845 * r29570853;
        float r29570855 = r29570852 + r29570854;
        float r29570856 = r29570851 + r29570855;
        float r29570857 = cbrt(r29570856);
        float r29570858 = r29570857 * r29570857;
        float r29570859 = r29570844 * r29570853;
        float r29570860 = r29570859 * r29570844;
        float r29570861 = r29570860 + r29570852;
        float r29570862 = r29570861 * r29570861;
        float r29570863 = r29570844 * r29570847;
        float r29570864 = r29570844 * r29570863;
        float r29570865 = r29570864 + r29570849;
        float r29570866 = r29570865 * r29570846;
        float r29570867 = r29570866 * r29570866;
        float r29570868 = r29570862 - r29570867;
        float r29570869 = r29570861 - r29570866;
        float r29570870 = r29570868 / r29570869;
        float r29570871 = cbrt(r29570870);
        float r29570872 = r29570858 * r29570871;
        return r29570872;
}

double f_od(double x) {
        double r29570873 = x;
        double r29570874 = r29570873 * r29570873;
        double r29570875 = r29570874 * r29570874;
        double r29570876 = 14.4375;
        double r29570877 = r29570874 * r29570876;
        double r29570878 = -19.6875;
        double r29570879 = r29570877 + r29570878;
        double r29570880 = r29570875 * r29570879;
        double r29570881 = -0.3125;
        double r29570882 = 6.5625;
        double r29570883 = r29570874 * r29570882;
        double r29570884 = r29570881 + r29570883;
        double r29570885 = r29570880 + r29570884;
        double r29570886 = cbrt(r29570885);
        double r29570887 = r29570886 * r29570886;
        double r29570888 = r29570873 * r29570882;
        double r29570889 = r29570888 * r29570873;
        double r29570890 = r29570889 + r29570881;
        double r29570891 = r29570890 * r29570890;
        double r29570892 = r29570873 * r29570876;
        double r29570893 = r29570873 * r29570892;
        double r29570894 = r29570893 + r29570878;
        double r29570895 = r29570894 * r29570875;
        double r29570896 = r29570895 * r29570895;
        double r29570897 = r29570891 - r29570896;
        double r29570898 = r29570890 - r29570895;
        double r29570899 = r29570897 / r29570898;
        double r29570900 = cbrt(r29570899);
        double r29570901 = r29570887 * r29570900;
        return r29570901;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r29570902, r29570903, r29570904, r29570905, r29570906, r29570907, r29570908, r29570909, r29570910, r29570911, r29570912, r29570913, r29570914, r29570915, r29570916, r29570917;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r29570902, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570903, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r29570904);
        mpfr_init(r29570905);
        mpfr_init(r29570906);
        mpfr_init(r29570907);
        mpfr_init_set_str(r29570908, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r29570909);
        mpfr_init(r29570910);
        mpfr_init(r29570911);
        mpfr_init(r29570912);
        mpfr_init_set_str(r29570913, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r29570914);
        mpfr_init(r29570915);
        mpfr_init(r29570916);
        mpfr_init(r29570917);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r29570904, x, MPFR_RNDN);
        mpfr_mul(r29570905, r29570904, r29570904, MPFR_RNDN);
        mpfr_mul(r29570906, r29570903, r29570905, MPFR_RNDN);
        mpfr_add(r29570907, r29570902, r29570906, MPFR_RNDN);
        ;
        mpfr_mul(r29570909, r29570905, r29570904, MPFR_RNDN);
        mpfr_mul(r29570910, r29570909, r29570904, MPFR_RNDN);
        mpfr_mul(r29570911, r29570908, r29570910, MPFR_RNDN);
        mpfr_add(r29570912, r29570907, r29570911, MPFR_RNDN);
        ;
        mpfr_mul(r29570914, r29570910, r29570904, MPFR_RNDN);
        mpfr_mul(r29570915, r29570914, r29570904, MPFR_RNDN);
        mpfr_mul(r29570916, r29570913, r29570915, MPFR_RNDN);
        mpfr_add(r29570917, r29570912, r29570916, MPFR_RNDN);
        return mpfr_get_d(r29570917, MPFR_RNDN);
}

static mpfr_t r29570918, r29570919, r29570920, r29570921, r29570922, r29570923, r29570924, r29570925, r29570926, r29570927, r29570928, r29570929, r29570930, r29570931, r29570932, r29570933, r29570934, r29570935, r29570936, r29570937, r29570938, r29570939, r29570940, r29570941, r29570942, r29570943, r29570944, r29570945, r29570946;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29570918);
        mpfr_init(r29570919);
        mpfr_init(r29570920);
        mpfr_init_set_str(r29570921, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r29570922);
        mpfr_init_set_str(r29570923, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r29570924);
        mpfr_init(r29570925);
        mpfr_init_set_str(r29570926, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570927, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r29570928);
        mpfr_init(r29570929);
        mpfr_init(r29570930);
        mpfr_init(r29570931);
        mpfr_init(r29570932);
        mpfr_init(r29570933);
        mpfr_init(r29570934);
        mpfr_init(r29570935);
        mpfr_init(r29570936);
        mpfr_init(r29570937);
        mpfr_init(r29570938);
        mpfr_init(r29570939);
        mpfr_init(r29570940);
        mpfr_init(r29570941);
        mpfr_init(r29570942);
        mpfr_init(r29570943);
        mpfr_init(r29570944);
        mpfr_init(r29570945);
        mpfr_init(r29570946);
}

double f_fm(double x) {
        mpfr_set_d(r29570918, x, MPFR_RNDN);
        mpfr_mul(r29570919, r29570918, r29570918, MPFR_RNDN);
        mpfr_mul(r29570920, r29570919, r29570919, MPFR_RNDN);
        ;
        mpfr_mul(r29570922, r29570919, r29570921, MPFR_RNDN);
        ;
        mpfr_add(r29570924, r29570922, r29570923, MPFR_RNDN);
        mpfr_mul(r29570925, r29570920, r29570924, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29570928, r29570919, r29570927, MPFR_RNDN);
        mpfr_add(r29570929, r29570926, r29570928, MPFR_RNDN);
        mpfr_add(r29570930, r29570925, r29570929, MPFR_RNDN);
        mpfr_cbrt(r29570931, r29570930, MPFR_RNDN);
        mpfr_mul(r29570932, r29570931, r29570931, MPFR_RNDN);
        mpfr_mul(r29570933, r29570918, r29570927, MPFR_RNDN);
        mpfr_mul(r29570934, r29570933, r29570918, MPFR_RNDN);
        mpfr_add(r29570935, r29570934, r29570926, MPFR_RNDN);
        mpfr_mul(r29570936, r29570935, r29570935, MPFR_RNDN);
        mpfr_mul(r29570937, r29570918, r29570921, MPFR_RNDN);
        mpfr_mul(r29570938, r29570918, r29570937, MPFR_RNDN);
        mpfr_add(r29570939, r29570938, r29570923, MPFR_RNDN);
        mpfr_mul(r29570940, r29570939, r29570920, MPFR_RNDN);
        mpfr_mul(r29570941, r29570940, r29570940, MPFR_RNDN);
        mpfr_sub(r29570942, r29570936, r29570941, MPFR_RNDN);
        mpfr_sub(r29570943, r29570935, r29570940, MPFR_RNDN);
        mpfr_div(r29570944, r29570942, r29570943, MPFR_RNDN);
        mpfr_cbrt(r29570945, r29570944, MPFR_RNDN);
        mpfr_mul(r29570946, r29570932, r29570945, MPFR_RNDN);
        return mpfr_get_d(r29570946, MPFR_RNDN);
}

static mpfr_t r29570947, r29570948, r29570949, r29570950, r29570951, r29570952, r29570953, r29570954, r29570955, r29570956, r29570957, r29570958, r29570959, r29570960, r29570961, r29570962, r29570963, r29570964, r29570965, r29570966, r29570967, r29570968, r29570969, r29570970, r29570971, r29570972, r29570973, r29570974, r29570975;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r29570947);
        mpfr_init(r29570948);
        mpfr_init(r29570949);
        mpfr_init_set_str(r29570950, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r29570951);
        mpfr_init_set_str(r29570952, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r29570953);
        mpfr_init(r29570954);
        mpfr_init_set_str(r29570955, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r29570956, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r29570957);
        mpfr_init(r29570958);
        mpfr_init(r29570959);
        mpfr_init(r29570960);
        mpfr_init(r29570961);
        mpfr_init(r29570962);
        mpfr_init(r29570963);
        mpfr_init(r29570964);
        mpfr_init(r29570965);
        mpfr_init(r29570966);
        mpfr_init(r29570967);
        mpfr_init(r29570968);
        mpfr_init(r29570969);
        mpfr_init(r29570970);
        mpfr_init(r29570971);
        mpfr_init(r29570972);
        mpfr_init(r29570973);
        mpfr_init(r29570974);
        mpfr_init(r29570975);
}

double f_dm(double x) {
        mpfr_set_d(r29570947, x, MPFR_RNDN);
        mpfr_mul(r29570948, r29570947, r29570947, MPFR_RNDN);
        mpfr_mul(r29570949, r29570948, r29570948, MPFR_RNDN);
        ;
        mpfr_mul(r29570951, r29570948, r29570950, MPFR_RNDN);
        ;
        mpfr_add(r29570953, r29570951, r29570952, MPFR_RNDN);
        mpfr_mul(r29570954, r29570949, r29570953, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r29570957, r29570948, r29570956, MPFR_RNDN);
        mpfr_add(r29570958, r29570955, r29570957, MPFR_RNDN);
        mpfr_add(r29570959, r29570954, r29570958, MPFR_RNDN);
        mpfr_cbrt(r29570960, r29570959, MPFR_RNDN);
        mpfr_mul(r29570961, r29570960, r29570960, MPFR_RNDN);
        mpfr_mul(r29570962, r29570947, r29570956, MPFR_RNDN);
        mpfr_mul(r29570963, r29570962, r29570947, MPFR_RNDN);
        mpfr_add(r29570964, r29570963, r29570955, MPFR_RNDN);
        mpfr_mul(r29570965, r29570964, r29570964, MPFR_RNDN);
        mpfr_mul(r29570966, r29570947, r29570950, MPFR_RNDN);
        mpfr_mul(r29570967, r29570947, r29570966, MPFR_RNDN);
        mpfr_add(r29570968, r29570967, r29570952, MPFR_RNDN);
        mpfr_mul(r29570969, r29570968, r29570949, MPFR_RNDN);
        mpfr_mul(r29570970, r29570969, r29570969, MPFR_RNDN);
        mpfr_sub(r29570971, r29570965, r29570970, MPFR_RNDN);
        mpfr_sub(r29570972, r29570964, r29570969, MPFR_RNDN);
        mpfr_div(r29570973, r29570971, r29570972, MPFR_RNDN);
        mpfr_cbrt(r29570974, r29570973, MPFR_RNDN);
        mpfr_mul(r29570975, r29570961, r29570974, MPFR_RNDN);
        return mpfr_get_d(r29570975, MPFR_RNDN);
}

