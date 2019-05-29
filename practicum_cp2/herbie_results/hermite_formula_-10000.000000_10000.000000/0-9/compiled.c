#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r11625773 = 30240.0;
        float r11625774 = x;
        float r11625775 = r11625773 * r11625774;
        float r11625776 = -80640.0;
        float r11625777 = r11625774 * r11625774;
        float r11625778 = r11625777 * r11625774;
        float r11625779 = r11625776 * r11625778;
        float r11625780 = r11625775 + r11625779;
        float r11625781 = 48384.0;
        float r11625782 = r11625778 * r11625774;
        float r11625783 = r11625782 * r11625774;
        float r11625784 = r11625781 * r11625783;
        float r11625785 = r11625780 + r11625784;
        float r11625786 = -9216.0;
        float r11625787 = r11625783 * r11625774;
        float r11625788 = r11625787 * r11625774;
        float r11625789 = r11625786 * r11625788;
        float r11625790 = r11625785 + r11625789;
        float r11625791 = 512.0;
        float r11625792 = r11625788 * r11625774;
        float r11625793 = r11625792 * r11625774;
        float r11625794 = r11625791 * r11625793;
        float r11625795 = r11625790 + r11625794;
        return r11625795;
}

double f_id(double x) {
        double r11625796 = 30240.0;
        double r11625797 = x;
        double r11625798 = r11625796 * r11625797;
        double r11625799 = -80640.0;
        double r11625800 = r11625797 * r11625797;
        double r11625801 = r11625800 * r11625797;
        double r11625802 = r11625799 * r11625801;
        double r11625803 = r11625798 + r11625802;
        double r11625804 = 48384.0;
        double r11625805 = r11625801 * r11625797;
        double r11625806 = r11625805 * r11625797;
        double r11625807 = r11625804 * r11625806;
        double r11625808 = r11625803 + r11625807;
        double r11625809 = -9216.0;
        double r11625810 = r11625806 * r11625797;
        double r11625811 = r11625810 * r11625797;
        double r11625812 = r11625809 * r11625811;
        double r11625813 = r11625808 + r11625812;
        double r11625814 = 512.0;
        double r11625815 = r11625811 * r11625797;
        double r11625816 = r11625815 * r11625797;
        double r11625817 = r11625814 * r11625816;
        double r11625818 = r11625813 + r11625817;
        return r11625818;
}


double f_of(float x) {
        float r11625819 = x;
        float r11625820 = r11625819 * r11625819;
        float r11625821 = -80640.0;
        float r11625822 = r11625819 * r11625821;
        float r11625823 = r11625820 * r11625822;
        float r11625824 = 48384.0;
        float r11625825 = r11625819 * r11625824;
        float r11625826 = r11625825 * r11625820;
        float r11625827 = r11625820 * r11625826;
        float r11625828 = 30240.0;
        float r11625829 = r11625819 * r11625828;
        float r11625830 = 9;
        float r11625831 = pow(r11625819, r11625830);
        float r11625832 = 512.0;
        float r11625833 = r11625831 * r11625832;
        float r11625834 = r11625829 + r11625833;
        float r11625835 = 9216.0;
        float r11625836 = 7;
        float r11625837 = pow(r11625819, r11625836);
        float r11625838 = r11625835 * r11625837;
        float r11625839 = r11625834 - r11625838;
        float r11625840 = r11625827 + r11625839;
        float r11625841 = r11625823 + r11625840;
        return r11625841;
}

double f_od(double x) {
        double r11625842 = x;
        double r11625843 = r11625842 * r11625842;
        double r11625844 = -80640.0;
        double r11625845 = r11625842 * r11625844;
        double r11625846 = r11625843 * r11625845;
        double r11625847 = 48384.0;
        double r11625848 = r11625842 * r11625847;
        double r11625849 = r11625848 * r11625843;
        double r11625850 = r11625843 * r11625849;
        double r11625851 = 30240.0;
        double r11625852 = r11625842 * r11625851;
        double r11625853 = 9;
        double r11625854 = pow(r11625842, r11625853);
        double r11625855 = 512.0;
        double r11625856 = r11625854 * r11625855;
        double r11625857 = r11625852 + r11625856;
        double r11625858 = 9216.0;
        double r11625859 = 7;
        double r11625860 = pow(r11625842, r11625859);
        double r11625861 = r11625858 * r11625860;
        double r11625862 = r11625857 - r11625861;
        double r11625863 = r11625850 + r11625862;
        double r11625864 = r11625846 + r11625863;
        return r11625864;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11625865, r11625866, r11625867, r11625868, r11625869, r11625870, r11625871, r11625872, r11625873, r11625874, r11625875, r11625876, r11625877, r11625878, r11625879, r11625880, r11625881, r11625882, r11625883, r11625884, r11625885, r11625886, r11625887;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11625865, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r11625866);
        mpfr_init(r11625867);
        mpfr_init_set_str(r11625868, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r11625869);
        mpfr_init(r11625870);
        mpfr_init(r11625871);
        mpfr_init(r11625872);
        mpfr_init_set_str(r11625873, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r11625874);
        mpfr_init(r11625875);
        mpfr_init(r11625876);
        mpfr_init(r11625877);
        mpfr_init_set_str(r11625878, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r11625879);
        mpfr_init(r11625880);
        mpfr_init(r11625881);
        mpfr_init(r11625882);
        mpfr_init_set_str(r11625883, "512.0", 10, MPFR_RNDN);
        mpfr_init(r11625884);
        mpfr_init(r11625885);
        mpfr_init(r11625886);
        mpfr_init(r11625887);
}

double f_im(double x) {
        ;
        mpfr_set_d(r11625866, x, MPFR_RNDN);
        mpfr_mul(r11625867, r11625865, r11625866, MPFR_RNDN);
        ;
        mpfr_mul(r11625869, r11625866, r11625866, MPFR_RNDN);
        mpfr_mul(r11625870, r11625869, r11625866, MPFR_RNDN);
        mpfr_mul(r11625871, r11625868, r11625870, MPFR_RNDN);
        mpfr_add(r11625872, r11625867, r11625871, MPFR_RNDN);
        ;
        mpfr_mul(r11625874, r11625870, r11625866, MPFR_RNDN);
        mpfr_mul(r11625875, r11625874, r11625866, MPFR_RNDN);
        mpfr_mul(r11625876, r11625873, r11625875, MPFR_RNDN);
        mpfr_add(r11625877, r11625872, r11625876, MPFR_RNDN);
        ;
        mpfr_mul(r11625879, r11625875, r11625866, MPFR_RNDN);
        mpfr_mul(r11625880, r11625879, r11625866, MPFR_RNDN);
        mpfr_mul(r11625881, r11625878, r11625880, MPFR_RNDN);
        mpfr_add(r11625882, r11625877, r11625881, MPFR_RNDN);
        ;
        mpfr_mul(r11625884, r11625880, r11625866, MPFR_RNDN);
        mpfr_mul(r11625885, r11625884, r11625866, MPFR_RNDN);
        mpfr_mul(r11625886, r11625883, r11625885, MPFR_RNDN);
        mpfr_add(r11625887, r11625882, r11625886, MPFR_RNDN);
        return mpfr_get_d(r11625887, MPFR_RNDN);
}

static mpfr_t r11625888, r11625889, r11625890, r11625891, r11625892, r11625893, r11625894, r11625895, r11625896, r11625897, r11625898, r11625899, r11625900, r11625901, r11625902, r11625903, r11625904, r11625905, r11625906, r11625907, r11625908, r11625909, r11625910;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11625888);
        mpfr_init(r11625889);
        mpfr_init_set_str(r11625890, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r11625891);
        mpfr_init(r11625892);
        mpfr_init_set_str(r11625893, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r11625894);
        mpfr_init(r11625895);
        mpfr_init(r11625896);
        mpfr_init_set_str(r11625897, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r11625898);
        mpfr_init_set_str(r11625899, "9", 10, MPFR_RNDN);
        mpfr_init(r11625900);
        mpfr_init_set_str(r11625901, "512.0", 10, MPFR_RNDN);
        mpfr_init(r11625902);
        mpfr_init(r11625903);
        mpfr_init_set_str(r11625904, "9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11625905, "7", 10, MPFR_RNDN);
        mpfr_init(r11625906);
        mpfr_init(r11625907);
        mpfr_init(r11625908);
        mpfr_init(r11625909);
        mpfr_init(r11625910);
}

double f_fm(double x) {
        mpfr_set_d(r11625888, x, MPFR_RNDN);
        mpfr_mul(r11625889, r11625888, r11625888, MPFR_RNDN);
        ;
        mpfr_mul(r11625891, r11625888, r11625890, MPFR_RNDN);
        mpfr_mul(r11625892, r11625889, r11625891, MPFR_RNDN);
        ;
        mpfr_mul(r11625894, r11625888, r11625893, MPFR_RNDN);
        mpfr_mul(r11625895, r11625894, r11625889, MPFR_RNDN);
        mpfr_mul(r11625896, r11625889, r11625895, MPFR_RNDN);
        ;
        mpfr_mul(r11625898, r11625888, r11625897, MPFR_RNDN);
        ;
        mpfr_pow(r11625900, r11625888, r11625899, MPFR_RNDN);
        ;
        mpfr_mul(r11625902, r11625900, r11625901, MPFR_RNDN);
        mpfr_add(r11625903, r11625898, r11625902, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r11625906, r11625888, r11625905, MPFR_RNDN);
        mpfr_mul(r11625907, r11625904, r11625906, MPFR_RNDN);
        mpfr_sub(r11625908, r11625903, r11625907, MPFR_RNDN);
        mpfr_add(r11625909, r11625896, r11625908, MPFR_RNDN);
        mpfr_add(r11625910, r11625892, r11625909, MPFR_RNDN);
        return mpfr_get_d(r11625910, MPFR_RNDN);
}

static mpfr_t r11625911, r11625912, r11625913, r11625914, r11625915, r11625916, r11625917, r11625918, r11625919, r11625920, r11625921, r11625922, r11625923, r11625924, r11625925, r11625926, r11625927, r11625928, r11625929, r11625930, r11625931, r11625932, r11625933;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r11625911);
        mpfr_init(r11625912);
        mpfr_init_set_str(r11625913, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r11625914);
        mpfr_init(r11625915);
        mpfr_init_set_str(r11625916, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r11625917);
        mpfr_init(r11625918);
        mpfr_init(r11625919);
        mpfr_init_set_str(r11625920, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r11625921);
        mpfr_init_set_str(r11625922, "9", 10, MPFR_RNDN);
        mpfr_init(r11625923);
        mpfr_init_set_str(r11625924, "512.0", 10, MPFR_RNDN);
        mpfr_init(r11625925);
        mpfr_init(r11625926);
        mpfr_init_set_str(r11625927, "9216.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11625928, "7", 10, MPFR_RNDN);
        mpfr_init(r11625929);
        mpfr_init(r11625930);
        mpfr_init(r11625931);
        mpfr_init(r11625932);
        mpfr_init(r11625933);
}

double f_dm(double x) {
        mpfr_set_d(r11625911, x, MPFR_RNDN);
        mpfr_mul(r11625912, r11625911, r11625911, MPFR_RNDN);
        ;
        mpfr_mul(r11625914, r11625911, r11625913, MPFR_RNDN);
        mpfr_mul(r11625915, r11625912, r11625914, MPFR_RNDN);
        ;
        mpfr_mul(r11625917, r11625911, r11625916, MPFR_RNDN);
        mpfr_mul(r11625918, r11625917, r11625912, MPFR_RNDN);
        mpfr_mul(r11625919, r11625912, r11625918, MPFR_RNDN);
        ;
        mpfr_mul(r11625921, r11625911, r11625920, MPFR_RNDN);
        ;
        mpfr_pow(r11625923, r11625911, r11625922, MPFR_RNDN);
        ;
        mpfr_mul(r11625925, r11625923, r11625924, MPFR_RNDN);
        mpfr_add(r11625926, r11625921, r11625925, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r11625929, r11625911, r11625928, MPFR_RNDN);
        mpfr_mul(r11625930, r11625927, r11625929, MPFR_RNDN);
        mpfr_sub(r11625931, r11625926, r11625930, MPFR_RNDN);
        mpfr_add(r11625932, r11625919, r11625931, MPFR_RNDN);
        mpfr_add(r11625933, r11625915, r11625932, MPFR_RNDN);
        return mpfr_get_d(r11625933, MPFR_RNDN);
}

