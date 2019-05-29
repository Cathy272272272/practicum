#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r7055781 = -2.1875;
        float r7055782 = x;
        float r7055783 = r7055781 * r7055782;
        float r7055784 = 19.6875;
        float r7055785 = r7055782 * r7055782;
        float r7055786 = r7055785 * r7055782;
        float r7055787 = r7055784 * r7055786;
        float r7055788 = r7055783 + r7055787;
        float r7055789 = -43.3125;
        float r7055790 = r7055786 * r7055782;
        float r7055791 = r7055790 * r7055782;
        float r7055792 = r7055789 * r7055791;
        float r7055793 = r7055788 + r7055792;
        float r7055794 = 26.8125;
        float r7055795 = r7055791 * r7055782;
        float r7055796 = r7055795 * r7055782;
        float r7055797 = r7055794 * r7055796;
        float r7055798 = r7055793 + r7055797;
        return r7055798;
}

double f_id(double x) {
        double r7055799 = -2.1875;
        double r7055800 = x;
        double r7055801 = r7055799 * r7055800;
        double r7055802 = 19.6875;
        double r7055803 = r7055800 * r7055800;
        double r7055804 = r7055803 * r7055800;
        double r7055805 = r7055802 * r7055804;
        double r7055806 = r7055801 + r7055805;
        double r7055807 = -43.3125;
        double r7055808 = r7055804 * r7055800;
        double r7055809 = r7055808 * r7055800;
        double r7055810 = r7055807 * r7055809;
        double r7055811 = r7055806 + r7055810;
        double r7055812 = 26.8125;
        double r7055813 = r7055809 * r7055800;
        double r7055814 = r7055813 * r7055800;
        double r7055815 = r7055812 * r7055814;
        double r7055816 = r7055811 + r7055815;
        return r7055816;
}


double f_of(float x) {
        float r7055817 = x;
        float r7055818 = r7055817 * r7055817;
        float r7055819 = r7055818 * r7055818;
        float r7055820 = 3;
        float r7055821 = pow(r7055817, r7055820);
        float r7055822 = r7055821 * r7055821;
        float r7055823 = 26.8125;
        float r7055824 = r7055817 * r7055823;
        float r7055825 = pow(r7055824, r7055820);
        float r7055826 = r7055822 * r7055825;
        float r7055827 = cbrt(r7055826);
        float r7055828 = -43.3125;
        float r7055829 = r7055817 * r7055828;
        float r7055830 = r7055827 + r7055829;
        float r7055831 = r7055819 * r7055830;
        float r7055832 = -2.1875;
        float r7055833 = r7055832 * r7055817;
        float r7055834 = 19.6875;
        float r7055835 = r7055834 * r7055817;
        float r7055836 = r7055818 * r7055835;
        float r7055837 = r7055833 + r7055836;
        float r7055838 = r7055831 + r7055837;
        return r7055838;
}

double f_od(double x) {
        double r7055839 = x;
        double r7055840 = r7055839 * r7055839;
        double r7055841 = r7055840 * r7055840;
        double r7055842 = 3;
        double r7055843 = pow(r7055839, r7055842);
        double r7055844 = r7055843 * r7055843;
        double r7055845 = 26.8125;
        double r7055846 = r7055839 * r7055845;
        double r7055847 = pow(r7055846, r7055842);
        double r7055848 = r7055844 * r7055847;
        double r7055849 = cbrt(r7055848);
        double r7055850 = -43.3125;
        double r7055851 = r7055839 * r7055850;
        double r7055852 = r7055849 + r7055851;
        double r7055853 = r7055841 * r7055852;
        double r7055854 = -2.1875;
        double r7055855 = r7055854 * r7055839;
        double r7055856 = 19.6875;
        double r7055857 = r7055856 * r7055839;
        double r7055858 = r7055840 * r7055857;
        double r7055859 = r7055855 + r7055858;
        double r7055860 = r7055853 + r7055859;
        return r7055860;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7055861, r7055862, r7055863, r7055864, r7055865, r7055866, r7055867, r7055868, r7055869, r7055870, r7055871, r7055872, r7055873, r7055874, r7055875, r7055876, r7055877, r7055878;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r7055861, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7055862);
        mpfr_init(r7055863);
        mpfr_init_set_str(r7055864, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7055865);
        mpfr_init(r7055866);
        mpfr_init(r7055867);
        mpfr_init(r7055868);
        mpfr_init_set_str(r7055869, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7055870);
        mpfr_init(r7055871);
        mpfr_init(r7055872);
        mpfr_init(r7055873);
        mpfr_init_set_str(r7055874, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7055875);
        mpfr_init(r7055876);
        mpfr_init(r7055877);
        mpfr_init(r7055878);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7055862, x, MPFR_RNDN);
        mpfr_mul(r7055863, r7055861, r7055862, MPFR_RNDN);
        ;
        mpfr_mul(r7055865, r7055862, r7055862, MPFR_RNDN);
        mpfr_mul(r7055866, r7055865, r7055862, MPFR_RNDN);
        mpfr_mul(r7055867, r7055864, r7055866, MPFR_RNDN);
        mpfr_add(r7055868, r7055863, r7055867, MPFR_RNDN);
        ;
        mpfr_mul(r7055870, r7055866, r7055862, MPFR_RNDN);
        mpfr_mul(r7055871, r7055870, r7055862, MPFR_RNDN);
        mpfr_mul(r7055872, r7055869, r7055871, MPFR_RNDN);
        mpfr_add(r7055873, r7055868, r7055872, MPFR_RNDN);
        ;
        mpfr_mul(r7055875, r7055871, r7055862, MPFR_RNDN);
        mpfr_mul(r7055876, r7055875, r7055862, MPFR_RNDN);
        mpfr_mul(r7055877, r7055874, r7055876, MPFR_RNDN);
        mpfr_add(r7055878, r7055873, r7055877, MPFR_RNDN);
        return mpfr_get_d(r7055878, MPFR_RNDN);
}

static mpfr_t r7055879, r7055880, r7055881, r7055882, r7055883, r7055884, r7055885, r7055886, r7055887, r7055888, r7055889, r7055890, r7055891, r7055892, r7055893, r7055894, r7055895, r7055896, r7055897, r7055898, r7055899, r7055900;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7055879);
        mpfr_init(r7055880);
        mpfr_init(r7055881);
        mpfr_init_set_str(r7055882, "3", 10, MPFR_RNDN);
        mpfr_init(r7055883);
        mpfr_init(r7055884);
        mpfr_init_set_str(r7055885, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7055886);
        mpfr_init(r7055887);
        mpfr_init(r7055888);
        mpfr_init(r7055889);
        mpfr_init_set_str(r7055890, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7055891);
        mpfr_init(r7055892);
        mpfr_init(r7055893);
        mpfr_init_set_str(r7055894, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7055895);
        mpfr_init_set_str(r7055896, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7055897);
        mpfr_init(r7055898);
        mpfr_init(r7055899);
        mpfr_init(r7055900);
}

double f_fm(double x) {
        mpfr_set_d(r7055879, x, MPFR_RNDN);
        mpfr_mul(r7055880, r7055879, r7055879, MPFR_RNDN);
        mpfr_mul(r7055881, r7055880, r7055880, MPFR_RNDN);
        ;
        mpfr_pow(r7055883, r7055879, r7055882, MPFR_RNDN);
        mpfr_mul(r7055884, r7055883, r7055883, MPFR_RNDN);
        ;
        mpfr_mul(r7055886, r7055879, r7055885, MPFR_RNDN);
        mpfr_pow(r7055887, r7055886, r7055882, MPFR_RNDN);
        mpfr_mul(r7055888, r7055884, r7055887, MPFR_RNDN);
        mpfr_cbrt(r7055889, r7055888, MPFR_RNDN);
        ;
        mpfr_mul(r7055891, r7055879, r7055890, MPFR_RNDN);
        mpfr_add(r7055892, r7055889, r7055891, MPFR_RNDN);
        mpfr_mul(r7055893, r7055881, r7055892, MPFR_RNDN);
        ;
        mpfr_mul(r7055895, r7055894, r7055879, MPFR_RNDN);
        ;
        mpfr_mul(r7055897, r7055896, r7055879, MPFR_RNDN);
        mpfr_mul(r7055898, r7055880, r7055897, MPFR_RNDN);
        mpfr_add(r7055899, r7055895, r7055898, MPFR_RNDN);
        mpfr_add(r7055900, r7055893, r7055899, MPFR_RNDN);
        return mpfr_get_d(r7055900, MPFR_RNDN);
}

static mpfr_t r7055901, r7055902, r7055903, r7055904, r7055905, r7055906, r7055907, r7055908, r7055909, r7055910, r7055911, r7055912, r7055913, r7055914, r7055915, r7055916, r7055917, r7055918, r7055919, r7055920, r7055921, r7055922;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r7055901);
        mpfr_init(r7055902);
        mpfr_init(r7055903);
        mpfr_init_set_str(r7055904, "3", 10, MPFR_RNDN);
        mpfr_init(r7055905);
        mpfr_init(r7055906);
        mpfr_init_set_str(r7055907, "26.8125", 10, MPFR_RNDN);
        mpfr_init(r7055908);
        mpfr_init(r7055909);
        mpfr_init(r7055910);
        mpfr_init(r7055911);
        mpfr_init_set_str(r7055912, "-43.3125", 10, MPFR_RNDN);
        mpfr_init(r7055913);
        mpfr_init(r7055914);
        mpfr_init(r7055915);
        mpfr_init_set_str(r7055916, "-2.1875", 10, MPFR_RNDN);
        mpfr_init(r7055917);
        mpfr_init_set_str(r7055918, "19.6875", 10, MPFR_RNDN);
        mpfr_init(r7055919);
        mpfr_init(r7055920);
        mpfr_init(r7055921);
        mpfr_init(r7055922);
}

double f_dm(double x) {
        mpfr_set_d(r7055901, x, MPFR_RNDN);
        mpfr_mul(r7055902, r7055901, r7055901, MPFR_RNDN);
        mpfr_mul(r7055903, r7055902, r7055902, MPFR_RNDN);
        ;
        mpfr_pow(r7055905, r7055901, r7055904, MPFR_RNDN);
        mpfr_mul(r7055906, r7055905, r7055905, MPFR_RNDN);
        ;
        mpfr_mul(r7055908, r7055901, r7055907, MPFR_RNDN);
        mpfr_pow(r7055909, r7055908, r7055904, MPFR_RNDN);
        mpfr_mul(r7055910, r7055906, r7055909, MPFR_RNDN);
        mpfr_cbrt(r7055911, r7055910, MPFR_RNDN);
        ;
        mpfr_mul(r7055913, r7055901, r7055912, MPFR_RNDN);
        mpfr_add(r7055914, r7055911, r7055913, MPFR_RNDN);
        mpfr_mul(r7055915, r7055903, r7055914, MPFR_RNDN);
        ;
        mpfr_mul(r7055917, r7055916, r7055901, MPFR_RNDN);
        ;
        mpfr_mul(r7055919, r7055918, r7055901, MPFR_RNDN);
        mpfr_mul(r7055920, r7055902, r7055919, MPFR_RNDN);
        mpfr_add(r7055921, r7055917, r7055920, MPFR_RNDN);
        mpfr_add(r7055922, r7055915, r7055921, MPFR_RNDN);
        return mpfr_get_d(r7055922, MPFR_RNDN);
}

