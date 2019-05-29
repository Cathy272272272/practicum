#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10215757 = 1.0;
        float r10215758 = -8.0;
        float r10215759 = x;
        float r10215760 = r10215758 * r10215759;
        float r10215761 = r10215757 + r10215760;
        float r10215762 = 14.0;
        float r10215763 = r10215759 * r10215759;
        float r10215764 = r10215762 * r10215763;
        float r10215765 = r10215761 + r10215764;
        float r10215766 = -9.333333;
        float r10215767 = r10215763 * r10215759;
        float r10215768 = r10215766 * r10215767;
        float r10215769 = r10215765 + r10215768;
        float r10215770 = 2.916667;
        float r10215771 = r10215767 * r10215759;
        float r10215772 = r10215770 * r10215771;
        float r10215773 = r10215769 + r10215772;
        float r10215774 = -0.466667;
        float r10215775 = r10215771 * r10215759;
        float r10215776 = r10215774 * r10215775;
        float r10215777 = r10215773 + r10215776;
        float r10215778 = 0.038889;
        float r10215779 = r10215775 * r10215759;
        float r10215780 = r10215778 * r10215779;
        float r10215781 = r10215777 + r10215780;
        float r10215782 = -0.001587;
        float r10215783 = r10215779 * r10215759;
        float r10215784 = r10215782 * r10215783;
        float r10215785 = r10215781 + r10215784;
        float r10215786 = 2.5e-05;
        float r10215787 = r10215783 * r10215759;
        float r10215788 = r10215786 * r10215787;
        float r10215789 = r10215785 + r10215788;
        return r10215789;
}

double f_id(double x) {
        double r10215790 = 1.0;
        double r10215791 = -8.0;
        double r10215792 = x;
        double r10215793 = r10215791 * r10215792;
        double r10215794 = r10215790 + r10215793;
        double r10215795 = 14.0;
        double r10215796 = r10215792 * r10215792;
        double r10215797 = r10215795 * r10215796;
        double r10215798 = r10215794 + r10215797;
        double r10215799 = -9.333333;
        double r10215800 = r10215796 * r10215792;
        double r10215801 = r10215799 * r10215800;
        double r10215802 = r10215798 + r10215801;
        double r10215803 = 2.916667;
        double r10215804 = r10215800 * r10215792;
        double r10215805 = r10215803 * r10215804;
        double r10215806 = r10215802 + r10215805;
        double r10215807 = -0.466667;
        double r10215808 = r10215804 * r10215792;
        double r10215809 = r10215807 * r10215808;
        double r10215810 = r10215806 + r10215809;
        double r10215811 = 0.038889;
        double r10215812 = r10215808 * r10215792;
        double r10215813 = r10215811 * r10215812;
        double r10215814 = r10215810 + r10215813;
        double r10215815 = -0.001587;
        double r10215816 = r10215812 * r10215792;
        double r10215817 = r10215815 * r10215816;
        double r10215818 = r10215814 + r10215817;
        double r10215819 = 2.5e-05;
        double r10215820 = r10215816 * r10215792;
        double r10215821 = r10215819 * r10215820;
        double r10215822 = r10215818 + r10215821;
        return r10215822;
}


double f_of(float x) {
        float r10215823 = x;
        float r10215824 = 3;
        float r10215825 = pow(r10215823, r10215824);
        float r10215826 = r10215825 * r10215825;
        float r10215827 = r10215823 * r10215823;
        float r10215828 = 2.5e-05;
        float r10215829 = r10215827 * r10215828;
        float r10215830 = -0.001587;
        float r10215831 = r10215830 * r10215823;
        float r10215832 = 0.038889;
        float r10215833 = r10215831 + r10215832;
        float r10215834 = r10215829 + r10215833;
        float r10215835 = r10215826 * r10215834;
        float r10215836 = r10215827 * r10215827;
        float r10215837 = 2.916667;
        float r10215838 = -0.466667;
        float r10215839 = r10215823 * r10215838;
        float r10215840 = r10215837 + r10215839;
        float r10215841 = r10215836 * r10215840;
        float r10215842 = 14.0;
        float r10215843 = 9.333333;
        float r10215844 = r10215823 * r10215843;
        float r10215845 = r10215842 - r10215844;
        float r10215846 = r10215827 * r10215845;
        float r10215847 = r10215841 + r10215846;
        float r10215848 = r10215835 + r10215847;
        float r10215849 = 1.0;
        float r10215850 = -8.0;
        float r10215851 = r10215850 * r10215823;
        float r10215852 = r10215849 + r10215851;
        float r10215853 = r10215848 + r10215852;
        return r10215853;
}

double f_od(double x) {
        double r10215854 = x;
        double r10215855 = 3;
        double r10215856 = pow(r10215854, r10215855);
        double r10215857 = r10215856 * r10215856;
        double r10215858 = r10215854 * r10215854;
        double r10215859 = 2.5e-05;
        double r10215860 = r10215858 * r10215859;
        double r10215861 = -0.001587;
        double r10215862 = r10215861 * r10215854;
        double r10215863 = 0.038889;
        double r10215864 = r10215862 + r10215863;
        double r10215865 = r10215860 + r10215864;
        double r10215866 = r10215857 * r10215865;
        double r10215867 = r10215858 * r10215858;
        double r10215868 = 2.916667;
        double r10215869 = -0.466667;
        double r10215870 = r10215854 * r10215869;
        double r10215871 = r10215868 + r10215870;
        double r10215872 = r10215867 * r10215871;
        double r10215873 = 14.0;
        double r10215874 = 9.333333;
        double r10215875 = r10215854 * r10215874;
        double r10215876 = r10215873 - r10215875;
        double r10215877 = r10215858 * r10215876;
        double r10215878 = r10215872 + r10215877;
        double r10215879 = r10215866 + r10215878;
        double r10215880 = 1.0;
        double r10215881 = -8.0;
        double r10215882 = r10215881 * r10215854;
        double r10215883 = r10215880 + r10215882;
        double r10215884 = r10215879 + r10215883;
        return r10215884;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10215885, r10215886, r10215887, r10215888, r10215889, r10215890, r10215891, r10215892, r10215893, r10215894, r10215895, r10215896, r10215897, r10215898, r10215899, r10215900, r10215901, r10215902, r10215903, r10215904, r10215905, r10215906, r10215907, r10215908, r10215909, r10215910, r10215911, r10215912, r10215913, r10215914, r10215915, r10215916, r10215917;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10215885, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215886, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10215887);
        mpfr_init(r10215888);
        mpfr_init(r10215889);
        mpfr_init_set_str(r10215890, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10215891);
        mpfr_init(r10215892);
        mpfr_init(r10215893);
        mpfr_init_set_str(r10215894, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10215895);
        mpfr_init(r10215896);
        mpfr_init(r10215897);
        mpfr_init_set_str(r10215898, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10215899);
        mpfr_init(r10215900);
        mpfr_init(r10215901);
        mpfr_init_set_str(r10215902, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10215903);
        mpfr_init(r10215904);
        mpfr_init(r10215905);
        mpfr_init_set_str(r10215906, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10215907);
        mpfr_init(r10215908);
        mpfr_init(r10215909);
        mpfr_init_set_str(r10215910, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10215911);
        mpfr_init(r10215912);
        mpfr_init(r10215913);
        mpfr_init_set_str(r10215914, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10215915);
        mpfr_init(r10215916);
        mpfr_init(r10215917);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10215887, x, MPFR_RNDN);
        mpfr_mul(r10215888, r10215886, r10215887, MPFR_RNDN);
        mpfr_add(r10215889, r10215885, r10215888, MPFR_RNDN);
        ;
        mpfr_mul(r10215891, r10215887, r10215887, MPFR_RNDN);
        mpfr_mul(r10215892, r10215890, r10215891, MPFR_RNDN);
        mpfr_add(r10215893, r10215889, r10215892, MPFR_RNDN);
        ;
        mpfr_mul(r10215895, r10215891, r10215887, MPFR_RNDN);
        mpfr_mul(r10215896, r10215894, r10215895, MPFR_RNDN);
        mpfr_add(r10215897, r10215893, r10215896, MPFR_RNDN);
        ;
        mpfr_mul(r10215899, r10215895, r10215887, MPFR_RNDN);
        mpfr_mul(r10215900, r10215898, r10215899, MPFR_RNDN);
        mpfr_add(r10215901, r10215897, r10215900, MPFR_RNDN);
        ;
        mpfr_mul(r10215903, r10215899, r10215887, MPFR_RNDN);
        mpfr_mul(r10215904, r10215902, r10215903, MPFR_RNDN);
        mpfr_add(r10215905, r10215901, r10215904, MPFR_RNDN);
        ;
        mpfr_mul(r10215907, r10215903, r10215887, MPFR_RNDN);
        mpfr_mul(r10215908, r10215906, r10215907, MPFR_RNDN);
        mpfr_add(r10215909, r10215905, r10215908, MPFR_RNDN);
        ;
        mpfr_mul(r10215911, r10215907, r10215887, MPFR_RNDN);
        mpfr_mul(r10215912, r10215910, r10215911, MPFR_RNDN);
        mpfr_add(r10215913, r10215909, r10215912, MPFR_RNDN);
        ;
        mpfr_mul(r10215915, r10215911, r10215887, MPFR_RNDN);
        mpfr_mul(r10215916, r10215914, r10215915, MPFR_RNDN);
        mpfr_add(r10215917, r10215913, r10215916, MPFR_RNDN);
        return mpfr_get_d(r10215917, MPFR_RNDN);
}

static mpfr_t r10215918, r10215919, r10215920, r10215921, r10215922, r10215923, r10215924, r10215925, r10215926, r10215927, r10215928, r10215929, r10215930, r10215931, r10215932, r10215933, r10215934, r10215935, r10215936, r10215937, r10215938, r10215939, r10215940, r10215941, r10215942, r10215943, r10215944, r10215945, r10215946, r10215947, r10215948;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10215918);
        mpfr_init_set_str(r10215919, "3", 10, MPFR_RNDN);
        mpfr_init(r10215920);
        mpfr_init(r10215921);
        mpfr_init(r10215922);
        mpfr_init_set_str(r10215923, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10215924);
        mpfr_init_set_str(r10215925, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10215926);
        mpfr_init_set_str(r10215927, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10215928);
        mpfr_init(r10215929);
        mpfr_init(r10215930);
        mpfr_init(r10215931);
        mpfr_init_set_str(r10215932, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215933, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10215934);
        mpfr_init(r10215935);
        mpfr_init(r10215936);
        mpfr_init_set_str(r10215937, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215938, "9.333333", 10, MPFR_RNDN);
        mpfr_init(r10215939);
        mpfr_init(r10215940);
        mpfr_init(r10215941);
        mpfr_init(r10215942);
        mpfr_init(r10215943);
        mpfr_init_set_str(r10215944, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215945, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10215946);
        mpfr_init(r10215947);
        mpfr_init(r10215948);
}

double f_fm(double x) {
        mpfr_set_d(r10215918, x, MPFR_RNDN);
        ;
        mpfr_pow(r10215920, r10215918, r10215919, MPFR_RNDN);
        mpfr_mul(r10215921, r10215920, r10215920, MPFR_RNDN);
        mpfr_mul(r10215922, r10215918, r10215918, MPFR_RNDN);
        ;
        mpfr_mul(r10215924, r10215922, r10215923, MPFR_RNDN);
        ;
        mpfr_mul(r10215926, r10215925, r10215918, MPFR_RNDN);
        ;
        mpfr_add(r10215928, r10215926, r10215927, MPFR_RNDN);
        mpfr_add(r10215929, r10215924, r10215928, MPFR_RNDN);
        mpfr_mul(r10215930, r10215921, r10215929, MPFR_RNDN);
        mpfr_mul(r10215931, r10215922, r10215922, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215934, r10215918, r10215933, MPFR_RNDN);
        mpfr_add(r10215935, r10215932, r10215934, MPFR_RNDN);
        mpfr_mul(r10215936, r10215931, r10215935, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215939, r10215918, r10215938, MPFR_RNDN);
        mpfr_sub(r10215940, r10215937, r10215939, MPFR_RNDN);
        mpfr_mul(r10215941, r10215922, r10215940, MPFR_RNDN);
        mpfr_add(r10215942, r10215936, r10215941, MPFR_RNDN);
        mpfr_add(r10215943, r10215930, r10215942, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215946, r10215945, r10215918, MPFR_RNDN);
        mpfr_add(r10215947, r10215944, r10215946, MPFR_RNDN);
        mpfr_add(r10215948, r10215943, r10215947, MPFR_RNDN);
        return mpfr_get_d(r10215948, MPFR_RNDN);
}

static mpfr_t r10215949, r10215950, r10215951, r10215952, r10215953, r10215954, r10215955, r10215956, r10215957, r10215958, r10215959, r10215960, r10215961, r10215962, r10215963, r10215964, r10215965, r10215966, r10215967, r10215968, r10215969, r10215970, r10215971, r10215972, r10215973, r10215974, r10215975, r10215976, r10215977, r10215978, r10215979;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10215949);
        mpfr_init_set_str(r10215950, "3", 10, MPFR_RNDN);
        mpfr_init(r10215951);
        mpfr_init(r10215952);
        mpfr_init(r10215953);
        mpfr_init_set_str(r10215954, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10215955);
        mpfr_init_set_str(r10215956, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10215957);
        mpfr_init_set_str(r10215958, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10215959);
        mpfr_init(r10215960);
        mpfr_init(r10215961);
        mpfr_init(r10215962);
        mpfr_init_set_str(r10215963, "2.916667", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215964, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10215965);
        mpfr_init(r10215966);
        mpfr_init(r10215967);
        mpfr_init_set_str(r10215968, "14.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215969, "9.333333", 10, MPFR_RNDN);
        mpfr_init(r10215970);
        mpfr_init(r10215971);
        mpfr_init(r10215972);
        mpfr_init(r10215973);
        mpfr_init(r10215974);
        mpfr_init_set_str(r10215975, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215976, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10215977);
        mpfr_init(r10215978);
        mpfr_init(r10215979);
}

double f_dm(double x) {
        mpfr_set_d(r10215949, x, MPFR_RNDN);
        ;
        mpfr_pow(r10215951, r10215949, r10215950, MPFR_RNDN);
        mpfr_mul(r10215952, r10215951, r10215951, MPFR_RNDN);
        mpfr_mul(r10215953, r10215949, r10215949, MPFR_RNDN);
        ;
        mpfr_mul(r10215955, r10215953, r10215954, MPFR_RNDN);
        ;
        mpfr_mul(r10215957, r10215956, r10215949, MPFR_RNDN);
        ;
        mpfr_add(r10215959, r10215957, r10215958, MPFR_RNDN);
        mpfr_add(r10215960, r10215955, r10215959, MPFR_RNDN);
        mpfr_mul(r10215961, r10215952, r10215960, MPFR_RNDN);
        mpfr_mul(r10215962, r10215953, r10215953, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215965, r10215949, r10215964, MPFR_RNDN);
        mpfr_add(r10215966, r10215963, r10215965, MPFR_RNDN);
        mpfr_mul(r10215967, r10215962, r10215966, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215970, r10215949, r10215969, MPFR_RNDN);
        mpfr_sub(r10215971, r10215968, r10215970, MPFR_RNDN);
        mpfr_mul(r10215972, r10215953, r10215971, MPFR_RNDN);
        mpfr_add(r10215973, r10215967, r10215972, MPFR_RNDN);
        mpfr_add(r10215974, r10215961, r10215973, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215977, r10215976, r10215949, MPFR_RNDN);
        mpfr_add(r10215978, r10215975, r10215977, MPFR_RNDN);
        mpfr_add(r10215979, r10215974, r10215978, MPFR_RNDN);
        return mpfr_get_d(r10215979, MPFR_RNDN);
}

