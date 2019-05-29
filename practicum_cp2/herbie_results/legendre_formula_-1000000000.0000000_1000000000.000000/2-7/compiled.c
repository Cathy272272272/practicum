#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r5020796 = -2.1875;
        float r5020797 = x;
        float r5020798 = r5020796 * r5020797;
        float r5020799 = 19.6875;
        float r5020800 = r5020797 * r5020797;
        float r5020801 = r5020800 * r5020797;
        float r5020802 = r5020799 * r5020801;
        float r5020803 = r5020798 + r5020802;
        float r5020804 = -43.3125;
        float r5020805 = r5020801 * r5020797;
        float r5020806 = r5020805 * r5020797;
        float r5020807 = r5020804 * r5020806;
        float r5020808 = r5020803 + r5020807;
        float r5020809 = 26.8125;
        float r5020810 = r5020806 * r5020797;
        float r5020811 = r5020810 * r5020797;
        float r5020812 = r5020809 * r5020811;
        float r5020813 = r5020808 + r5020812;
        return r5020813;
}

double f_id(double x) {
        double r5020814 = -2.1875;
        double r5020815 = x;
        double r5020816 = r5020814 * r5020815;
        double r5020817 = 19.6875;
        double r5020818 = r5020815 * r5020815;
        double r5020819 = r5020818 * r5020815;
        double r5020820 = r5020817 * r5020819;
        double r5020821 = r5020816 + r5020820;
        double r5020822 = -43.3125;
        double r5020823 = r5020819 * r5020815;
        double r5020824 = r5020823 * r5020815;
        double r5020825 = r5020822 * r5020824;
        double r5020826 = r5020821 + r5020825;
        double r5020827 = 26.8125;
        double r5020828 = r5020824 * r5020815;
        double r5020829 = r5020828 * r5020815;
        double r5020830 = r5020827 * r5020829;
        double r5020831 = r5020826 + r5020830;
        return r5020831;
}


double f_of(float x) {
        float r5020832 = x;
        float r5020833 = -2.1875;
        float r5020834 = 19.6875;
        float r5020835 = r5020834 * r5020832;
        float r5020836 = r5020835 * r5020832;
        float r5020837 = r5020833 + r5020836;
        float r5020838 = r5020832 * r5020837;
        float r5020839 = r5020832 * r5020832;
        float r5020840 = -43.3125;
        float r5020841 = r5020832 * r5020840;
        float r5020842 = r5020839 * r5020841;
        float r5020843 = 5;
        float r5020844 = pow(r5020832, r5020843);
        float r5020845 = 26.8125;
        float r5020846 = r5020844 * r5020845;
        float r5020847 = r5020842 + r5020846;
        float r5020848 = r5020839 * r5020847;
        float r5020849 = r5020838 + r5020848;
        return r5020849;
}

double f_od(double x) {
        double r5020850 = x;
        double r5020851 = -2.1875;
        double r5020852 = 19.6875;
        double r5020853 = r5020852 * r5020850;
        double r5020854 = r5020853 * r5020850;
        double r5020855 = r5020851 + r5020854;
        double r5020856 = r5020850 * r5020855;
        double r5020857 = r5020850 * r5020850;
        double r5020858 = -43.3125;
        double r5020859 = r5020850 * r5020858;
        double r5020860 = r5020857 * r5020859;
        double r5020861 = 5;
        double r5020862 = pow(r5020850, r5020861);
        double r5020863 = 26.8125;
        double r5020864 = r5020862 * r5020863;
        double r5020865 = r5020860 + r5020864;
        double r5020866 = r5020857 * r5020865;
        double r5020867 = r5020856 + r5020866;
        return r5020867;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5020868, r5020869, r5020870, r5020871, r5020872, r5020873, r5020874, r5020875, r5020876, r5020877, r5020878, r5020879, r5020880, r5020881, r5020882, r5020883, r5020884, r5020885;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r5020868, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r5020869);
        mpfr_init(r5020870);
        mpfr_init_set_str(r5020871, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r5020872);
        mpfr_init(r5020873);
        mpfr_init(r5020874);
        mpfr_init(r5020875);
        mpfr_init_set_str(r5020876, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r5020877);
        mpfr_init(r5020878);
        mpfr_init(r5020879);
        mpfr_init(r5020880);
        mpfr_init_set_str(r5020881, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r5020882);
        mpfr_init(r5020883);
        mpfr_init(r5020884);
        mpfr_init(r5020885);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5020869, x, MPFR_RNDN);
        mpfr_mul(r5020870, r5020868, r5020869, MPFR_RNDN);
        ;
        mpfr_mul(r5020872, r5020869, r5020869, MPFR_RNDN);
        mpfr_mul(r5020873, r5020872, r5020869, MPFR_RNDN);
        mpfr_mul(r5020874, r5020871, r5020873, MPFR_RNDN);
        mpfr_add(r5020875, r5020870, r5020874, MPFR_RNDN);
        ;
        mpfr_mul(r5020877, r5020873, r5020869, MPFR_RNDN);
        mpfr_mul(r5020878, r5020877, r5020869, MPFR_RNDN);
        mpfr_mul(r5020879, r5020876, r5020878, MPFR_RNDN);
        mpfr_add(r5020880, r5020875, r5020879, MPFR_RNDN);
        ;
        mpfr_mul(r5020882, r5020878, r5020869, MPFR_RNDN);
        mpfr_mul(r5020883, r5020882, r5020869, MPFR_RNDN);
        mpfr_mul(r5020884, r5020881, r5020883, MPFR_RNDN);
        mpfr_add(r5020885, r5020880, r5020884, MPFR_RNDN);
        return mpfr_get_d(r5020885, MPFR_RNDN);
}

static mpfr_t r5020886, r5020887, r5020888, r5020889, r5020890, r5020891, r5020892, r5020893, r5020894, r5020895, r5020896, r5020897, r5020898, r5020899, r5020900, r5020901, r5020902, r5020903;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r5020886);
        mpfr_init_set_str(r5020887, "-2.1875", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020888, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r5020889);
        mpfr_init(r5020890);
        mpfr_init(r5020891);
        mpfr_init(r5020892);
        mpfr_init(r5020893);
        mpfr_init_set_str(r5020894, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r5020895);
        mpfr_init(r5020896);
        mpfr_init_set_str(r5020897, "5", 10, MPFR_RNDN);
        mpfr_init(r5020898);
        mpfr_init_set_str(r5020899, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r5020900);
        mpfr_init(r5020901);
        mpfr_init(r5020902);
        mpfr_init(r5020903);
}

double f_fm(double x) {
        mpfr_set_d(r5020886, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5020889, r5020888, r5020886, MPFR_RNDN);
        mpfr_mul(r5020890, r5020889, r5020886, MPFR_RNDN);
        mpfr_add(r5020891, r5020887, r5020890, MPFR_RNDN);
        mpfr_mul(r5020892, r5020886, r5020891, MPFR_RNDN);
        mpfr_mul(r5020893, r5020886, r5020886, MPFR_RNDN);
        ;
        mpfr_mul(r5020895, r5020886, r5020894, MPFR_RNDN);
        mpfr_mul(r5020896, r5020893, r5020895, MPFR_RNDN);
        ;
        mpfr_pow(r5020898, r5020886, r5020897, MPFR_RNDN);
        ;
        mpfr_mul(r5020900, r5020898, r5020899, MPFR_RNDN);
        mpfr_add(r5020901, r5020896, r5020900, MPFR_RNDN);
        mpfr_mul(r5020902, r5020893, r5020901, MPFR_RNDN);
        mpfr_add(r5020903, r5020892, r5020902, MPFR_RNDN);
        return mpfr_get_d(r5020903, MPFR_RNDN);
}

static mpfr_t r5020904, r5020905, r5020906, r5020907, r5020908, r5020909, r5020910, r5020911, r5020912, r5020913, r5020914, r5020915, r5020916, r5020917, r5020918, r5020919, r5020920, r5020921;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r5020904);
        mpfr_init_set_str(r5020905, "-2.1875", 10, MPFR_RNDN);
        mpfr_init_set_str(r5020906, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r5020907);
        mpfr_init(r5020908);
        mpfr_init(r5020909);
        mpfr_init(r5020910);
        mpfr_init(r5020911);
        mpfr_init_set_str(r5020912, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r5020913);
        mpfr_init(r5020914);
        mpfr_init_set_str(r5020915, "5", 10, MPFR_RNDN);
        mpfr_init(r5020916);
        mpfr_init_set_str(r5020917, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r5020918);
        mpfr_init(r5020919);
        mpfr_init(r5020920);
        mpfr_init(r5020921);
}

double f_dm(double x) {
        mpfr_set_d(r5020904, x, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5020907, r5020906, r5020904, MPFR_RNDN);
        mpfr_mul(r5020908, r5020907, r5020904, MPFR_RNDN);
        mpfr_add(r5020909, r5020905, r5020908, MPFR_RNDN);
        mpfr_mul(r5020910, r5020904, r5020909, MPFR_RNDN);
        mpfr_mul(r5020911, r5020904, r5020904, MPFR_RNDN);
        ;
        mpfr_mul(r5020913, r5020904, r5020912, MPFR_RNDN);
        mpfr_mul(r5020914, r5020911, r5020913, MPFR_RNDN);
        ;
        mpfr_pow(r5020916, r5020904, r5020915, MPFR_RNDN);
        ;
        mpfr_mul(r5020918, r5020916, r5020917, MPFR_RNDN);
        mpfr_add(r5020919, r5020914, r5020918, MPFR_RNDN);
        mpfr_mul(r5020920, r5020911, r5020919, MPFR_RNDN);
        mpfr_add(r5020921, r5020910, r5020920, MPFR_RNDN);
        return mpfr_get_d(r5020921, MPFR_RNDN);
}

