#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6860834 = 1.875;
        float r6860835 = x;
        float r6860836 = r6860834 * r6860835;
        float r6860837 = -8.75;
        float r6860838 = r6860835 * r6860835;
        float r6860839 = r6860838 * r6860835;
        float r6860840 = r6860837 * r6860839;
        float r6860841 = r6860836 + r6860840;
        float r6860842 = 7.875;
        float r6860843 = r6860839 * r6860835;
        float r6860844 = r6860843 * r6860835;
        float r6860845 = r6860842 * r6860844;
        float r6860846 = r6860841 + r6860845;
        return r6860846;
}

double f_id(double x) {
        double r6860847 = 1.875;
        double r6860848 = x;
        double r6860849 = r6860847 * r6860848;
        double r6860850 = -8.75;
        double r6860851 = r6860848 * r6860848;
        double r6860852 = r6860851 * r6860848;
        double r6860853 = r6860850 * r6860852;
        double r6860854 = r6860849 + r6860853;
        double r6860855 = 7.875;
        double r6860856 = r6860852 * r6860848;
        double r6860857 = r6860856 * r6860848;
        double r6860858 = r6860855 * r6860857;
        double r6860859 = r6860854 + r6860858;
        return r6860859;
}


double f_of(float x) {
        float r6860860 = 1.875;
        float r6860861 = x;
        float r6860862 = r6860860 * r6860861;
        float r6860863 = -8.75;
        float r6860864 = r6860861 * r6860861;
        float r6860865 = r6860864 * r6860861;
        float r6860866 = r6860863 * r6860865;
        float r6860867 = r6860862 + r6860866;
        float r6860868 = 7.875;
        float r6860869 = r6860865 * r6860861;
        float r6860870 = r6860869 * r6860861;
        float r6860871 = r6860868 * r6860870;
        float r6860872 = r6860867 + r6860871;
        return r6860872;
}

double f_od(double x) {
        double r6860873 = 1.875;
        double r6860874 = x;
        double r6860875 = r6860873 * r6860874;
        double r6860876 = -8.75;
        double r6860877 = r6860874 * r6860874;
        double r6860878 = r6860877 * r6860874;
        double r6860879 = r6860876 * r6860878;
        double r6860880 = r6860875 + r6860879;
        double r6860881 = 7.875;
        double r6860882 = r6860878 * r6860874;
        double r6860883 = r6860882 * r6860874;
        double r6860884 = r6860881 * r6860883;
        double r6860885 = r6860880 + r6860884;
        return r6860885;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6860886, r6860887, r6860888, r6860889, r6860890, r6860891, r6860892, r6860893, r6860894, r6860895, r6860896, r6860897, r6860898;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6860886, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6860887);
        mpfr_init(r6860888);
        mpfr_init_set_str(r6860889, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6860890);
        mpfr_init(r6860891);
        mpfr_init(r6860892);
        mpfr_init(r6860893);
        mpfr_init_set_str(r6860894, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6860895);
        mpfr_init(r6860896);
        mpfr_init(r6860897);
        mpfr_init(r6860898);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6860887, x, MPFR_RNDN);
        mpfr_mul(r6860888, r6860886, r6860887, MPFR_RNDN);
        ;
        mpfr_mul(r6860890, r6860887, r6860887, MPFR_RNDN);
        mpfr_mul(r6860891, r6860890, r6860887, MPFR_RNDN);
        mpfr_mul(r6860892, r6860889, r6860891, MPFR_RNDN);
        mpfr_add(r6860893, r6860888, r6860892, MPFR_RNDN);
        ;
        mpfr_mul(r6860895, r6860891, r6860887, MPFR_RNDN);
        mpfr_mul(r6860896, r6860895, r6860887, MPFR_RNDN);
        mpfr_mul(r6860897, r6860894, r6860896, MPFR_RNDN);
        mpfr_add(r6860898, r6860893, r6860897, MPFR_RNDN);
        return mpfr_get_d(r6860898, MPFR_RNDN);
}

static mpfr_t r6860899, r6860900, r6860901, r6860902, r6860903, r6860904, r6860905, r6860906, r6860907, r6860908, r6860909, r6860910, r6860911;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6860899, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6860900);
        mpfr_init(r6860901);
        mpfr_init_set_str(r6860902, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6860903);
        mpfr_init(r6860904);
        mpfr_init(r6860905);
        mpfr_init(r6860906);
        mpfr_init_set_str(r6860907, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6860908);
        mpfr_init(r6860909);
        mpfr_init(r6860910);
        mpfr_init(r6860911);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6860900, x, MPFR_RNDN);
        mpfr_mul(r6860901, r6860899, r6860900, MPFR_RNDN);
        ;
        mpfr_mul(r6860903, r6860900, r6860900, MPFR_RNDN);
        mpfr_mul(r6860904, r6860903, r6860900, MPFR_RNDN);
        mpfr_mul(r6860905, r6860902, r6860904, MPFR_RNDN);
        mpfr_add(r6860906, r6860901, r6860905, MPFR_RNDN);
        ;
        mpfr_mul(r6860908, r6860904, r6860900, MPFR_RNDN);
        mpfr_mul(r6860909, r6860908, r6860900, MPFR_RNDN);
        mpfr_mul(r6860910, r6860907, r6860909, MPFR_RNDN);
        mpfr_add(r6860911, r6860906, r6860910, MPFR_RNDN);
        return mpfr_get_d(r6860911, MPFR_RNDN);
}

static mpfr_t r6860912, r6860913, r6860914, r6860915, r6860916, r6860917, r6860918, r6860919, r6860920, r6860921, r6860922, r6860923, r6860924;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6860912, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6860913);
        mpfr_init(r6860914);
        mpfr_init_set_str(r6860915, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6860916);
        mpfr_init(r6860917);
        mpfr_init(r6860918);
        mpfr_init(r6860919);
        mpfr_init_set_str(r6860920, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6860921);
        mpfr_init(r6860922);
        mpfr_init(r6860923);
        mpfr_init(r6860924);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6860913, x, MPFR_RNDN);
        mpfr_mul(r6860914, r6860912, r6860913, MPFR_RNDN);
        ;
        mpfr_mul(r6860916, r6860913, r6860913, MPFR_RNDN);
        mpfr_mul(r6860917, r6860916, r6860913, MPFR_RNDN);
        mpfr_mul(r6860918, r6860915, r6860917, MPFR_RNDN);
        mpfr_add(r6860919, r6860914, r6860918, MPFR_RNDN);
        ;
        mpfr_mul(r6860921, r6860917, r6860913, MPFR_RNDN);
        mpfr_mul(r6860922, r6860921, r6860913, MPFR_RNDN);
        mpfr_mul(r6860923, r6860920, r6860922, MPFR_RNDN);
        mpfr_add(r6860924, r6860919, r6860923, MPFR_RNDN);
        return mpfr_get_d(r6860924, MPFR_RNDN);
}

