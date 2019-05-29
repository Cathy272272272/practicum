#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r9852798 = 1.0;
        float r9852799 = -4.0;
        float r9852800 = x;
        float r9852801 = r9852799 * r9852800;
        float r9852802 = r9852798 + r9852801;
        float r9852803 = 3.0;
        float r9852804 = r9852800 * r9852800;
        float r9852805 = r9852803 * r9852804;
        float r9852806 = r9852802 + r9852805;
        float r9852807 = -0.666667;
        float r9852808 = r9852804 * r9852800;
        float r9852809 = r9852807 * r9852808;
        float r9852810 = r9852806 + r9852809;
        float r9852811 = 0.041667;
        float r9852812 = r9852808 * r9852800;
        float r9852813 = r9852811 * r9852812;
        float r9852814 = r9852810 + r9852813;
        return r9852814;
}

double f_id(double x) {
        double r9852815 = 1.0;
        double r9852816 = -4.0;
        double r9852817 = x;
        double r9852818 = r9852816 * r9852817;
        double r9852819 = r9852815 + r9852818;
        double r9852820 = 3.0;
        double r9852821 = r9852817 * r9852817;
        double r9852822 = r9852820 * r9852821;
        double r9852823 = r9852819 + r9852822;
        double r9852824 = -0.666667;
        double r9852825 = r9852821 * r9852817;
        double r9852826 = r9852824 * r9852825;
        double r9852827 = r9852823 + r9852826;
        double r9852828 = 0.041667;
        double r9852829 = r9852825 * r9852817;
        double r9852830 = r9852828 * r9852829;
        double r9852831 = r9852827 + r9852830;
        return r9852831;
}


double f_of(float x) {
        float r9852832 = x;
        float r9852833 = 3;
        float r9852834 = pow(r9852832, r9852833);
        float r9852835 = 0.041667;
        float r9852836 = r9852835 * r9852832;
        float r9852837 = -0.666667;
        float r9852838 = r9852836 + r9852837;
        float r9852839 = r9852834 * r9852838;
        float r9852840 = 3.0;
        float r9852841 = r9852832 * r9852840;
        float r9852842 = r9852841 * r9852832;
        float r9852843 = pow(r9852842, r9852833);
        float r9852844 = -4.0;
        float r9852845 = r9852832 * r9852844;
        float r9852846 = 1.0;
        float r9852847 = r9852845 + r9852846;
        float r9852848 = pow(r9852847, r9852833);
        float r9852849 = r9852843 + r9852848;
        float r9852850 = r9852832 * r9852841;
        float r9852851 = r9852850 * r9852850;
        float r9852852 = r9852844 * r9852832;
        float r9852853 = r9852846 + r9852852;
        float r9852854 = r9852853 - r9852850;
        float r9852855 = r9852854 * r9852853;
        float r9852856 = r9852851 + r9852855;
        float r9852857 = r9852849 / r9852856;
        float r9852858 = r9852839 + r9852857;
        return r9852858;
}

double f_od(double x) {
        double r9852859 = x;
        double r9852860 = 3;
        double r9852861 = pow(r9852859, r9852860);
        double r9852862 = 0.041667;
        double r9852863 = r9852862 * r9852859;
        double r9852864 = -0.666667;
        double r9852865 = r9852863 + r9852864;
        double r9852866 = r9852861 * r9852865;
        double r9852867 = 3.0;
        double r9852868 = r9852859 * r9852867;
        double r9852869 = r9852868 * r9852859;
        double r9852870 = pow(r9852869, r9852860);
        double r9852871 = -4.0;
        double r9852872 = r9852859 * r9852871;
        double r9852873 = 1.0;
        double r9852874 = r9852872 + r9852873;
        double r9852875 = pow(r9852874, r9852860);
        double r9852876 = r9852870 + r9852875;
        double r9852877 = r9852859 * r9852868;
        double r9852878 = r9852877 * r9852877;
        double r9852879 = r9852871 * r9852859;
        double r9852880 = r9852873 + r9852879;
        double r9852881 = r9852880 - r9852877;
        double r9852882 = r9852881 * r9852880;
        double r9852883 = r9852878 + r9852882;
        double r9852884 = r9852876 / r9852883;
        double r9852885 = r9852866 + r9852884;
        return r9852885;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9852886, r9852887, r9852888, r9852889, r9852890, r9852891, r9852892, r9852893, r9852894, r9852895, r9852896, r9852897, r9852898, r9852899, r9852900, r9852901, r9852902;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9852886, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852887, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9852888);
        mpfr_init(r9852889);
        mpfr_init(r9852890);
        mpfr_init_set_str(r9852891, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9852892);
        mpfr_init(r9852893);
        mpfr_init(r9852894);
        mpfr_init_set_str(r9852895, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9852896);
        mpfr_init(r9852897);
        mpfr_init(r9852898);
        mpfr_init_set_str(r9852899, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9852900);
        mpfr_init(r9852901);
        mpfr_init(r9852902);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9852888, x, MPFR_RNDN);
        mpfr_mul(r9852889, r9852887, r9852888, MPFR_RNDN);
        mpfr_add(r9852890, r9852886, r9852889, MPFR_RNDN);
        ;
        mpfr_mul(r9852892, r9852888, r9852888, MPFR_RNDN);
        mpfr_mul(r9852893, r9852891, r9852892, MPFR_RNDN);
        mpfr_add(r9852894, r9852890, r9852893, MPFR_RNDN);
        ;
        mpfr_mul(r9852896, r9852892, r9852888, MPFR_RNDN);
        mpfr_mul(r9852897, r9852895, r9852896, MPFR_RNDN);
        mpfr_add(r9852898, r9852894, r9852897, MPFR_RNDN);
        ;
        mpfr_mul(r9852900, r9852896, r9852888, MPFR_RNDN);
        mpfr_mul(r9852901, r9852899, r9852900, MPFR_RNDN);
        mpfr_add(r9852902, r9852898, r9852901, MPFR_RNDN);
        return mpfr_get_d(r9852902, MPFR_RNDN);
}

static mpfr_t r9852903, r9852904, r9852905, r9852906, r9852907, r9852908, r9852909, r9852910, r9852911, r9852912, r9852913, r9852914, r9852915, r9852916, r9852917, r9852918, r9852919, r9852920, r9852921, r9852922, r9852923, r9852924, r9852925, r9852926, r9852927, r9852928, r9852929;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9852903);
        mpfr_init_set_str(r9852904, "3", 10, MPFR_RNDN);
        mpfr_init(r9852905);
        mpfr_init_set_str(r9852906, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9852907);
        mpfr_init_set_str(r9852908, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9852909);
        mpfr_init(r9852910);
        mpfr_init_set_str(r9852911, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9852912);
        mpfr_init(r9852913);
        mpfr_init(r9852914);
        mpfr_init_set_str(r9852915, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9852916);
        mpfr_init_set_str(r9852917, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9852918);
        mpfr_init(r9852919);
        mpfr_init(r9852920);
        mpfr_init(r9852921);
        mpfr_init(r9852922);
        mpfr_init(r9852923);
        mpfr_init(r9852924);
        mpfr_init(r9852925);
        mpfr_init(r9852926);
        mpfr_init(r9852927);
        mpfr_init(r9852928);
        mpfr_init(r9852929);
}

double f_fm(double x) {
        mpfr_set_d(r9852903, x, MPFR_RNDN);
        ;
        mpfr_pow(r9852905, r9852903, r9852904, MPFR_RNDN);
        ;
        mpfr_mul(r9852907, r9852906, r9852903, MPFR_RNDN);
        ;
        mpfr_add(r9852909, r9852907, r9852908, MPFR_RNDN);
        mpfr_mul(r9852910, r9852905, r9852909, MPFR_RNDN);
        ;
        mpfr_mul(r9852912, r9852903, r9852911, MPFR_RNDN);
        mpfr_mul(r9852913, r9852912, r9852903, MPFR_RNDN);
        mpfr_pow(r9852914, r9852913, r9852904, MPFR_RNDN);
        ;
        mpfr_mul(r9852916, r9852903, r9852915, MPFR_RNDN);
        ;
        mpfr_add(r9852918, r9852916, r9852917, MPFR_RNDN);
        mpfr_pow(r9852919, r9852918, r9852904, MPFR_RNDN);
        mpfr_add(r9852920, r9852914, r9852919, MPFR_RNDN);
        mpfr_mul(r9852921, r9852903, r9852912, MPFR_RNDN);
        mpfr_mul(r9852922, r9852921, r9852921, MPFR_RNDN);
        mpfr_mul(r9852923, r9852915, r9852903, MPFR_RNDN);
        mpfr_add(r9852924, r9852917, r9852923, MPFR_RNDN);
        mpfr_sub(r9852925, r9852924, r9852921, MPFR_RNDN);
        mpfr_mul(r9852926, r9852925, r9852924, MPFR_RNDN);
        mpfr_add(r9852927, r9852922, r9852926, MPFR_RNDN);
        mpfr_div(r9852928, r9852920, r9852927, MPFR_RNDN);
        mpfr_add(r9852929, r9852910, r9852928, MPFR_RNDN);
        return mpfr_get_d(r9852929, MPFR_RNDN);
}

static mpfr_t r9852930, r9852931, r9852932, r9852933, r9852934, r9852935, r9852936, r9852937, r9852938, r9852939, r9852940, r9852941, r9852942, r9852943, r9852944, r9852945, r9852946, r9852947, r9852948, r9852949, r9852950, r9852951, r9852952, r9852953, r9852954, r9852955, r9852956;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9852930);
        mpfr_init_set_str(r9852931, "3", 10, MPFR_RNDN);
        mpfr_init(r9852932);
        mpfr_init_set_str(r9852933, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r9852934);
        mpfr_init_set_str(r9852935, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r9852936);
        mpfr_init(r9852937);
        mpfr_init_set_str(r9852938, "3.0", 10, MPFR_RNDN);
        mpfr_init(r9852939);
        mpfr_init(r9852940);
        mpfr_init(r9852941);
        mpfr_init_set_str(r9852942, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r9852943);
        mpfr_init_set_str(r9852944, "1.0", 10, MPFR_RNDN);
        mpfr_init(r9852945);
        mpfr_init(r9852946);
        mpfr_init(r9852947);
        mpfr_init(r9852948);
        mpfr_init(r9852949);
        mpfr_init(r9852950);
        mpfr_init(r9852951);
        mpfr_init(r9852952);
        mpfr_init(r9852953);
        mpfr_init(r9852954);
        mpfr_init(r9852955);
        mpfr_init(r9852956);
}

double f_dm(double x) {
        mpfr_set_d(r9852930, x, MPFR_RNDN);
        ;
        mpfr_pow(r9852932, r9852930, r9852931, MPFR_RNDN);
        ;
        mpfr_mul(r9852934, r9852933, r9852930, MPFR_RNDN);
        ;
        mpfr_add(r9852936, r9852934, r9852935, MPFR_RNDN);
        mpfr_mul(r9852937, r9852932, r9852936, MPFR_RNDN);
        ;
        mpfr_mul(r9852939, r9852930, r9852938, MPFR_RNDN);
        mpfr_mul(r9852940, r9852939, r9852930, MPFR_RNDN);
        mpfr_pow(r9852941, r9852940, r9852931, MPFR_RNDN);
        ;
        mpfr_mul(r9852943, r9852930, r9852942, MPFR_RNDN);
        ;
        mpfr_add(r9852945, r9852943, r9852944, MPFR_RNDN);
        mpfr_pow(r9852946, r9852945, r9852931, MPFR_RNDN);
        mpfr_add(r9852947, r9852941, r9852946, MPFR_RNDN);
        mpfr_mul(r9852948, r9852930, r9852939, MPFR_RNDN);
        mpfr_mul(r9852949, r9852948, r9852948, MPFR_RNDN);
        mpfr_mul(r9852950, r9852942, r9852930, MPFR_RNDN);
        mpfr_add(r9852951, r9852944, r9852950, MPFR_RNDN);
        mpfr_sub(r9852952, r9852951, r9852948, MPFR_RNDN);
        mpfr_mul(r9852953, r9852952, r9852951, MPFR_RNDN);
        mpfr_add(r9852954, r9852949, r9852953, MPFR_RNDN);
        mpfr_div(r9852955, r9852947, r9852954, MPFR_RNDN);
        mpfr_add(r9852956, r9852937, r9852955, MPFR_RNDN);
        return mpfr_get_d(r9852956, MPFR_RNDN);
}

