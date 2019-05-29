#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r8829777 = 1.0;
        float r8829778 = -7.0;
        float r8829779 = x;
        float r8829780 = r8829778 * r8829779;
        float r8829781 = r8829777 + r8829780;
        float r8829782 = 10.5;
        float r8829783 = r8829779 * r8829779;
        float r8829784 = r8829782 * r8829783;
        float r8829785 = r8829781 + r8829784;
        float r8829786 = -5.833333;
        float r8829787 = r8829783 * r8829779;
        float r8829788 = r8829786 * r8829787;
        float r8829789 = r8829785 + r8829788;
        float r8829790 = 1.458333;
        float r8829791 = r8829787 * r8829779;
        float r8829792 = r8829790 * r8829791;
        float r8829793 = r8829789 + r8829792;
        float r8829794 = -0.175;
        float r8829795 = r8829791 * r8829779;
        float r8829796 = r8829794 * r8829795;
        float r8829797 = r8829793 + r8829796;
        float r8829798 = 0.009722;
        float r8829799 = r8829795 * r8829779;
        float r8829800 = r8829798 * r8829799;
        float r8829801 = r8829797 + r8829800;
        float r8829802 = -0.000198;
        float r8829803 = r8829799 * r8829779;
        float r8829804 = r8829802 * r8829803;
        float r8829805 = r8829801 + r8829804;
        return r8829805;
}

double f_id(double x) {
        double r8829806 = 1.0;
        double r8829807 = -7.0;
        double r8829808 = x;
        double r8829809 = r8829807 * r8829808;
        double r8829810 = r8829806 + r8829809;
        double r8829811 = 10.5;
        double r8829812 = r8829808 * r8829808;
        double r8829813 = r8829811 * r8829812;
        double r8829814 = r8829810 + r8829813;
        double r8829815 = -5.833333;
        double r8829816 = r8829812 * r8829808;
        double r8829817 = r8829815 * r8829816;
        double r8829818 = r8829814 + r8829817;
        double r8829819 = 1.458333;
        double r8829820 = r8829816 * r8829808;
        double r8829821 = r8829819 * r8829820;
        double r8829822 = r8829818 + r8829821;
        double r8829823 = -0.175;
        double r8829824 = r8829820 * r8829808;
        double r8829825 = r8829823 * r8829824;
        double r8829826 = r8829822 + r8829825;
        double r8829827 = 0.009722;
        double r8829828 = r8829824 * r8829808;
        double r8829829 = r8829827 * r8829828;
        double r8829830 = r8829826 + r8829829;
        double r8829831 = -0.000198;
        double r8829832 = r8829828 * r8829808;
        double r8829833 = r8829831 * r8829832;
        double r8829834 = r8829830 + r8829833;
        return r8829834;
}


double f_of(float x) {
        float r8829835 = x;
        float r8829836 = r8829835 * r8829835;
        float r8829837 = 10.5;
        float r8829838 = -5.833333;
        float r8829839 = r8829838 * r8829835;
        float r8829840 = r8829837 + r8829839;
        float r8829841 = r8829836 * r8829840;
        float r8829842 = -7.0;
        float r8829843 = r8829835 * r8829842;
        float r8829844 = 1.0;
        float r8829845 = r8829843 + r8829844;
        float r8829846 = r8829841 + r8829845;
        float r8829847 = r8829836 * r8829836;
        float r8829848 = 1.458333;
        float r8829849 = -0.175;
        float r8829850 = r8829849 * r8829835;
        float r8829851 = r8829848 + r8829850;
        float r8829852 = r8829847 * r8829851;
        float r8829853 = 3;
        float r8829854 = r8829853 + r8829853;
        float r8829855 = pow(r8829835, r8829854);
        float r8829856 = -0.000198;
        float r8829857 = r8829856 * r8829835;
        float r8829858 = 0.009722;
        float r8829859 = r8829857 + r8829858;
        float r8829860 = r8829855 * r8829859;
        float r8829861 = r8829852 + r8829860;
        float r8829862 = r8829846 + r8829861;
        return r8829862;
}

double f_od(double x) {
        double r8829863 = x;
        double r8829864 = r8829863 * r8829863;
        double r8829865 = 10.5;
        double r8829866 = -5.833333;
        double r8829867 = r8829866 * r8829863;
        double r8829868 = r8829865 + r8829867;
        double r8829869 = r8829864 * r8829868;
        double r8829870 = -7.0;
        double r8829871 = r8829863 * r8829870;
        double r8829872 = 1.0;
        double r8829873 = r8829871 + r8829872;
        double r8829874 = r8829869 + r8829873;
        double r8829875 = r8829864 * r8829864;
        double r8829876 = 1.458333;
        double r8829877 = -0.175;
        double r8829878 = r8829877 * r8829863;
        double r8829879 = r8829876 + r8829878;
        double r8829880 = r8829875 * r8829879;
        double r8829881 = 3;
        double r8829882 = r8829881 + r8829881;
        double r8829883 = pow(r8829863, r8829882);
        double r8829884 = -0.000198;
        double r8829885 = r8829884 * r8829863;
        double r8829886 = 0.009722;
        double r8829887 = r8829885 + r8829886;
        double r8829888 = r8829883 * r8829887;
        double r8829889 = r8829880 + r8829888;
        double r8829890 = r8829874 + r8829889;
        return r8829890;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8829891, r8829892, r8829893, r8829894, r8829895, r8829896, r8829897, r8829898, r8829899, r8829900, r8829901, r8829902, r8829903, r8829904, r8829905, r8829906, r8829907, r8829908, r8829909, r8829910, r8829911, r8829912, r8829913, r8829914, r8829915, r8829916, r8829917, r8829918, r8829919;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8829891, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829892, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r8829893);
        mpfr_init(r8829894);
        mpfr_init(r8829895);
        mpfr_init_set_str(r8829896, "10.5", 10, MPFR_RNDN);
        mpfr_init(r8829897);
        mpfr_init(r8829898);
        mpfr_init(r8829899);
        mpfr_init_set_str(r8829900, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r8829901);
        mpfr_init(r8829902);
        mpfr_init(r8829903);
        mpfr_init_set_str(r8829904, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r8829905);
        mpfr_init(r8829906);
        mpfr_init(r8829907);
        mpfr_init_set_str(r8829908, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r8829909);
        mpfr_init(r8829910);
        mpfr_init(r8829911);
        mpfr_init_set_str(r8829912, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r8829913);
        mpfr_init(r8829914);
        mpfr_init(r8829915);
        mpfr_init_set_str(r8829916, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r8829917);
        mpfr_init(r8829918);
        mpfr_init(r8829919);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8829893, x, MPFR_RNDN);
        mpfr_mul(r8829894, r8829892, r8829893, MPFR_RNDN);
        mpfr_add(r8829895, r8829891, r8829894, MPFR_RNDN);
        ;
        mpfr_mul(r8829897, r8829893, r8829893, MPFR_RNDN);
        mpfr_mul(r8829898, r8829896, r8829897, MPFR_RNDN);
        mpfr_add(r8829899, r8829895, r8829898, MPFR_RNDN);
        ;
        mpfr_mul(r8829901, r8829897, r8829893, MPFR_RNDN);
        mpfr_mul(r8829902, r8829900, r8829901, MPFR_RNDN);
        mpfr_add(r8829903, r8829899, r8829902, MPFR_RNDN);
        ;
        mpfr_mul(r8829905, r8829901, r8829893, MPFR_RNDN);
        mpfr_mul(r8829906, r8829904, r8829905, MPFR_RNDN);
        mpfr_add(r8829907, r8829903, r8829906, MPFR_RNDN);
        ;
        mpfr_mul(r8829909, r8829905, r8829893, MPFR_RNDN);
        mpfr_mul(r8829910, r8829908, r8829909, MPFR_RNDN);
        mpfr_add(r8829911, r8829907, r8829910, MPFR_RNDN);
        ;
        mpfr_mul(r8829913, r8829909, r8829893, MPFR_RNDN);
        mpfr_mul(r8829914, r8829912, r8829913, MPFR_RNDN);
        mpfr_add(r8829915, r8829911, r8829914, MPFR_RNDN);
        ;
        mpfr_mul(r8829917, r8829913, r8829893, MPFR_RNDN);
        mpfr_mul(r8829918, r8829916, r8829917, MPFR_RNDN);
        mpfr_add(r8829919, r8829915, r8829918, MPFR_RNDN);
        return mpfr_get_d(r8829919, MPFR_RNDN);
}

static mpfr_t r8829920, r8829921, r8829922, r8829923, r8829924, r8829925, r8829926, r8829927, r8829928, r8829929, r8829930, r8829931, r8829932, r8829933, r8829934, r8829935, r8829936, r8829937, r8829938, r8829939, r8829940, r8829941, r8829942, r8829943, r8829944, r8829945, r8829946, r8829947;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8829920);
        mpfr_init(r8829921);
        mpfr_init_set_str(r8829922, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829923, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r8829924);
        mpfr_init(r8829925);
        mpfr_init(r8829926);
        mpfr_init_set_str(r8829927, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r8829928);
        mpfr_init_set_str(r8829929, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8829930);
        mpfr_init(r8829931);
        mpfr_init(r8829932);
        mpfr_init_set_str(r8829933, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829934, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r8829935);
        mpfr_init(r8829936);
        mpfr_init(r8829937);
        mpfr_init_set_str(r8829938, "3", 10, MPFR_RNDN);
        mpfr_init(r8829939);
        mpfr_init(r8829940);
        mpfr_init_set_str(r8829941, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r8829942);
        mpfr_init_set_str(r8829943, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r8829944);
        mpfr_init(r8829945);
        mpfr_init(r8829946);
        mpfr_init(r8829947);
}

double f_fm(double x) {
        mpfr_set_d(r8829920, x, MPFR_RNDN);
        mpfr_mul(r8829921, r8829920, r8829920, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829924, r8829923, r8829920, MPFR_RNDN);
        mpfr_add(r8829925, r8829922, r8829924, MPFR_RNDN);
        mpfr_mul(r8829926, r8829921, r8829925, MPFR_RNDN);
        ;
        mpfr_mul(r8829928, r8829920, r8829927, MPFR_RNDN);
        ;
        mpfr_add(r8829930, r8829928, r8829929, MPFR_RNDN);
        mpfr_add(r8829931, r8829926, r8829930, MPFR_RNDN);
        mpfr_mul(r8829932, r8829921, r8829921, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829935, r8829934, r8829920, MPFR_RNDN);
        mpfr_add(r8829936, r8829933, r8829935, MPFR_RNDN);
        mpfr_mul(r8829937, r8829932, r8829936, MPFR_RNDN);
        ;
        mpfr_add(r8829939, r8829938, r8829938, MPFR_RNDN);
        mpfr_pow(r8829940, r8829920, r8829939, MPFR_RNDN);
        ;
        mpfr_mul(r8829942, r8829941, r8829920, MPFR_RNDN);
        ;
        mpfr_add(r8829944, r8829942, r8829943, MPFR_RNDN);
        mpfr_mul(r8829945, r8829940, r8829944, MPFR_RNDN);
        mpfr_add(r8829946, r8829937, r8829945, MPFR_RNDN);
        mpfr_add(r8829947, r8829931, r8829946, MPFR_RNDN);
        return mpfr_get_d(r8829947, MPFR_RNDN);
}

static mpfr_t r8829948, r8829949, r8829950, r8829951, r8829952, r8829953, r8829954, r8829955, r8829956, r8829957, r8829958, r8829959, r8829960, r8829961, r8829962, r8829963, r8829964, r8829965, r8829966, r8829967, r8829968, r8829969, r8829970, r8829971, r8829972, r8829973, r8829974, r8829975;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8829948);
        mpfr_init(r8829949);
        mpfr_init_set_str(r8829950, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829951, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r8829952);
        mpfr_init(r8829953);
        mpfr_init(r8829954);
        mpfr_init_set_str(r8829955, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r8829956);
        mpfr_init_set_str(r8829957, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8829958);
        mpfr_init(r8829959);
        mpfr_init(r8829960);
        mpfr_init_set_str(r8829961, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r8829962, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r8829963);
        mpfr_init(r8829964);
        mpfr_init(r8829965);
        mpfr_init_set_str(r8829966, "3", 10, MPFR_RNDN);
        mpfr_init(r8829967);
        mpfr_init(r8829968);
        mpfr_init_set_str(r8829969, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r8829970);
        mpfr_init_set_str(r8829971, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r8829972);
        mpfr_init(r8829973);
        mpfr_init(r8829974);
        mpfr_init(r8829975);
}

double f_dm(double x) {
        mpfr_set_d(r8829948, x, MPFR_RNDN);
        mpfr_mul(r8829949, r8829948, r8829948, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829952, r8829951, r8829948, MPFR_RNDN);
        mpfr_add(r8829953, r8829950, r8829952, MPFR_RNDN);
        mpfr_mul(r8829954, r8829949, r8829953, MPFR_RNDN);
        ;
        mpfr_mul(r8829956, r8829948, r8829955, MPFR_RNDN);
        ;
        mpfr_add(r8829958, r8829956, r8829957, MPFR_RNDN);
        mpfr_add(r8829959, r8829954, r8829958, MPFR_RNDN);
        mpfr_mul(r8829960, r8829949, r8829949, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8829963, r8829962, r8829948, MPFR_RNDN);
        mpfr_add(r8829964, r8829961, r8829963, MPFR_RNDN);
        mpfr_mul(r8829965, r8829960, r8829964, MPFR_RNDN);
        ;
        mpfr_add(r8829967, r8829966, r8829966, MPFR_RNDN);
        mpfr_pow(r8829968, r8829948, r8829967, MPFR_RNDN);
        ;
        mpfr_mul(r8829970, r8829969, r8829948, MPFR_RNDN);
        ;
        mpfr_add(r8829972, r8829970, r8829971, MPFR_RNDN);
        mpfr_mul(r8829973, r8829968, r8829972, MPFR_RNDN);
        mpfr_add(r8829974, r8829965, r8829973, MPFR_RNDN);
        mpfr_add(r8829975, r8829959, r8829974, MPFR_RNDN);
        return mpfr_get_d(r8829975, MPFR_RNDN);
}

