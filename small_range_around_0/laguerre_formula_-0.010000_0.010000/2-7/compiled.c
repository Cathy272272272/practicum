#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r3277758 = 1.0;
        float r3277759 = -7.0;
        float r3277760 = x;
        float r3277761 = r3277759 * r3277760;
        float r3277762 = r3277758 + r3277761;
        float r3277763 = 10.5;
        float r3277764 = r3277760 * r3277760;
        float r3277765 = r3277763 * r3277764;
        float r3277766 = r3277762 + r3277765;
        float r3277767 = -5.833333;
        float r3277768 = r3277764 * r3277760;
        float r3277769 = r3277767 * r3277768;
        float r3277770 = r3277766 + r3277769;
        float r3277771 = 1.458333;
        float r3277772 = r3277768 * r3277760;
        float r3277773 = r3277771 * r3277772;
        float r3277774 = r3277770 + r3277773;
        float r3277775 = -0.175;
        float r3277776 = r3277772 * r3277760;
        float r3277777 = r3277775 * r3277776;
        float r3277778 = r3277774 + r3277777;
        float r3277779 = 0.009722;
        float r3277780 = r3277776 * r3277760;
        float r3277781 = r3277779 * r3277780;
        float r3277782 = r3277778 + r3277781;
        float r3277783 = -0.000198;
        float r3277784 = r3277780 * r3277760;
        float r3277785 = r3277783 * r3277784;
        float r3277786 = r3277782 + r3277785;
        return r3277786;
}

double f_id(double x) {
        double r3277787 = 1.0;
        double r3277788 = -7.0;
        double r3277789 = x;
        double r3277790 = r3277788 * r3277789;
        double r3277791 = r3277787 + r3277790;
        double r3277792 = 10.5;
        double r3277793 = r3277789 * r3277789;
        double r3277794 = r3277792 * r3277793;
        double r3277795 = r3277791 + r3277794;
        double r3277796 = -5.833333;
        double r3277797 = r3277793 * r3277789;
        double r3277798 = r3277796 * r3277797;
        double r3277799 = r3277795 + r3277798;
        double r3277800 = 1.458333;
        double r3277801 = r3277797 * r3277789;
        double r3277802 = r3277800 * r3277801;
        double r3277803 = r3277799 + r3277802;
        double r3277804 = -0.175;
        double r3277805 = r3277801 * r3277789;
        double r3277806 = r3277804 * r3277805;
        double r3277807 = r3277803 + r3277806;
        double r3277808 = 0.009722;
        double r3277809 = r3277805 * r3277789;
        double r3277810 = r3277808 * r3277809;
        double r3277811 = r3277807 + r3277810;
        double r3277812 = -0.000198;
        double r3277813 = r3277809 * r3277789;
        double r3277814 = r3277812 * r3277813;
        double r3277815 = r3277811 + r3277814;
        return r3277815;
}


double f_of(float x) {
        float r3277816 = x;
        float r3277817 = r3277816 * r3277816;
        float r3277818 = 10.5;
        float r3277819 = -5.833333;
        float r3277820 = r3277819 * r3277816;
        float r3277821 = r3277818 + r3277820;
        float r3277822 = r3277817 * r3277821;
        float r3277823 = -7.0;
        float r3277824 = r3277816 * r3277823;
        float r3277825 = 1.0;
        float r3277826 = r3277824 + r3277825;
        float r3277827 = r3277822 + r3277826;
        float r3277828 = r3277817 * r3277817;
        float r3277829 = 1.458333;
        float r3277830 = -0.175;
        float r3277831 = r3277830 * r3277816;
        float r3277832 = r3277829 + r3277831;
        float r3277833 = r3277828 * r3277832;
        float r3277834 = 3;
        float r3277835 = pow(r3277816, r3277834);
        float r3277836 = r3277835 * r3277835;
        float r3277837 = -0.000198;
        float r3277838 = r3277837 * r3277816;
        float r3277839 = 0.009722;
        float r3277840 = r3277838 + r3277839;
        float r3277841 = r3277836 * r3277840;
        float r3277842 = r3277833 + r3277841;
        float r3277843 = r3277827 + r3277842;
        return r3277843;
}

double f_od(double x) {
        double r3277844 = x;
        double r3277845 = r3277844 * r3277844;
        double r3277846 = 10.5;
        double r3277847 = -5.833333;
        double r3277848 = r3277847 * r3277844;
        double r3277849 = r3277846 + r3277848;
        double r3277850 = r3277845 * r3277849;
        double r3277851 = -7.0;
        double r3277852 = r3277844 * r3277851;
        double r3277853 = 1.0;
        double r3277854 = r3277852 + r3277853;
        double r3277855 = r3277850 + r3277854;
        double r3277856 = r3277845 * r3277845;
        double r3277857 = 1.458333;
        double r3277858 = -0.175;
        double r3277859 = r3277858 * r3277844;
        double r3277860 = r3277857 + r3277859;
        double r3277861 = r3277856 * r3277860;
        double r3277862 = 3;
        double r3277863 = pow(r3277844, r3277862);
        double r3277864 = r3277863 * r3277863;
        double r3277865 = -0.000198;
        double r3277866 = r3277865 * r3277844;
        double r3277867 = 0.009722;
        double r3277868 = r3277866 + r3277867;
        double r3277869 = r3277864 * r3277868;
        double r3277870 = r3277861 + r3277869;
        double r3277871 = r3277855 + r3277870;
        return r3277871;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r3277872, r3277873, r3277874, r3277875, r3277876, r3277877, r3277878, r3277879, r3277880, r3277881, r3277882, r3277883, r3277884, r3277885, r3277886, r3277887, r3277888, r3277889, r3277890, r3277891, r3277892, r3277893, r3277894, r3277895, r3277896, r3277897, r3277898, r3277899, r3277900;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r3277872, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277873, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r3277874);
        mpfr_init(r3277875);
        mpfr_init(r3277876);
        mpfr_init_set_str(r3277877, "10.5", 10, MPFR_RNDN);
        mpfr_init(r3277878);
        mpfr_init(r3277879);
        mpfr_init(r3277880);
        mpfr_init_set_str(r3277881, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r3277882);
        mpfr_init(r3277883);
        mpfr_init(r3277884);
        mpfr_init_set_str(r3277885, "1.458333", 10, MPFR_RNDN);
        mpfr_init(r3277886);
        mpfr_init(r3277887);
        mpfr_init(r3277888);
        mpfr_init_set_str(r3277889, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r3277890);
        mpfr_init(r3277891);
        mpfr_init(r3277892);
        mpfr_init_set_str(r3277893, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r3277894);
        mpfr_init(r3277895);
        mpfr_init(r3277896);
        mpfr_init_set_str(r3277897, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r3277898);
        mpfr_init(r3277899);
        mpfr_init(r3277900);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r3277874, x, MPFR_RNDN);
        mpfr_mul(r3277875, r3277873, r3277874, MPFR_RNDN);
        mpfr_add(r3277876, r3277872, r3277875, MPFR_RNDN);
        ;
        mpfr_mul(r3277878, r3277874, r3277874, MPFR_RNDN);
        mpfr_mul(r3277879, r3277877, r3277878, MPFR_RNDN);
        mpfr_add(r3277880, r3277876, r3277879, MPFR_RNDN);
        ;
        mpfr_mul(r3277882, r3277878, r3277874, MPFR_RNDN);
        mpfr_mul(r3277883, r3277881, r3277882, MPFR_RNDN);
        mpfr_add(r3277884, r3277880, r3277883, MPFR_RNDN);
        ;
        mpfr_mul(r3277886, r3277882, r3277874, MPFR_RNDN);
        mpfr_mul(r3277887, r3277885, r3277886, MPFR_RNDN);
        mpfr_add(r3277888, r3277884, r3277887, MPFR_RNDN);
        ;
        mpfr_mul(r3277890, r3277886, r3277874, MPFR_RNDN);
        mpfr_mul(r3277891, r3277889, r3277890, MPFR_RNDN);
        mpfr_add(r3277892, r3277888, r3277891, MPFR_RNDN);
        ;
        mpfr_mul(r3277894, r3277890, r3277874, MPFR_RNDN);
        mpfr_mul(r3277895, r3277893, r3277894, MPFR_RNDN);
        mpfr_add(r3277896, r3277892, r3277895, MPFR_RNDN);
        ;
        mpfr_mul(r3277898, r3277894, r3277874, MPFR_RNDN);
        mpfr_mul(r3277899, r3277897, r3277898, MPFR_RNDN);
        mpfr_add(r3277900, r3277896, r3277899, MPFR_RNDN);
        return mpfr_get_d(r3277900, MPFR_RNDN);
}

static mpfr_t r3277901, r3277902, r3277903, r3277904, r3277905, r3277906, r3277907, r3277908, r3277909, r3277910, r3277911, r3277912, r3277913, r3277914, r3277915, r3277916, r3277917, r3277918, r3277919, r3277920, r3277921, r3277922, r3277923, r3277924, r3277925, r3277926, r3277927, r3277928;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3277901);
        mpfr_init(r3277902);
        mpfr_init_set_str(r3277903, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277904, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r3277905);
        mpfr_init(r3277906);
        mpfr_init(r3277907);
        mpfr_init_set_str(r3277908, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r3277909);
        mpfr_init_set_str(r3277910, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3277911);
        mpfr_init(r3277912);
        mpfr_init(r3277913);
        mpfr_init_set_str(r3277914, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277915, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r3277916);
        mpfr_init(r3277917);
        mpfr_init(r3277918);
        mpfr_init_set_str(r3277919, "3", 10, MPFR_RNDN);
        mpfr_init(r3277920);
        mpfr_init(r3277921);
        mpfr_init_set_str(r3277922, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r3277923);
        mpfr_init_set_str(r3277924, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r3277925);
        mpfr_init(r3277926);
        mpfr_init(r3277927);
        mpfr_init(r3277928);
}

double f_fm(double x) {
        mpfr_set_d(r3277901, x, MPFR_RNDN);
        mpfr_mul(r3277902, r3277901, r3277901, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277905, r3277904, r3277901, MPFR_RNDN);
        mpfr_add(r3277906, r3277903, r3277905, MPFR_RNDN);
        mpfr_mul(r3277907, r3277902, r3277906, MPFR_RNDN);
        ;
        mpfr_mul(r3277909, r3277901, r3277908, MPFR_RNDN);
        ;
        mpfr_add(r3277911, r3277909, r3277910, MPFR_RNDN);
        mpfr_add(r3277912, r3277907, r3277911, MPFR_RNDN);
        mpfr_mul(r3277913, r3277902, r3277902, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277916, r3277915, r3277901, MPFR_RNDN);
        mpfr_add(r3277917, r3277914, r3277916, MPFR_RNDN);
        mpfr_mul(r3277918, r3277913, r3277917, MPFR_RNDN);
        ;
        mpfr_pow(r3277920, r3277901, r3277919, MPFR_RNDN);
        mpfr_mul(r3277921, r3277920, r3277920, MPFR_RNDN);
        ;
        mpfr_mul(r3277923, r3277922, r3277901, MPFR_RNDN);
        ;
        mpfr_add(r3277925, r3277923, r3277924, MPFR_RNDN);
        mpfr_mul(r3277926, r3277921, r3277925, MPFR_RNDN);
        mpfr_add(r3277927, r3277918, r3277926, MPFR_RNDN);
        mpfr_add(r3277928, r3277912, r3277927, MPFR_RNDN);
        return mpfr_get_d(r3277928, MPFR_RNDN);
}

static mpfr_t r3277929, r3277930, r3277931, r3277932, r3277933, r3277934, r3277935, r3277936, r3277937, r3277938, r3277939, r3277940, r3277941, r3277942, r3277943, r3277944, r3277945, r3277946, r3277947, r3277948, r3277949, r3277950, r3277951, r3277952, r3277953, r3277954, r3277955, r3277956;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r3277929);
        mpfr_init(r3277930);
        mpfr_init_set_str(r3277931, "10.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277932, "-5.833333", 10, MPFR_RNDN);
        mpfr_init(r3277933);
        mpfr_init(r3277934);
        mpfr_init(r3277935);
        mpfr_init_set_str(r3277936, "-7.0", 10, MPFR_RNDN);
        mpfr_init(r3277937);
        mpfr_init_set_str(r3277938, "1.0", 10, MPFR_RNDN);
        mpfr_init(r3277939);
        mpfr_init(r3277940);
        mpfr_init(r3277941);
        mpfr_init_set_str(r3277942, "1.458333", 10, MPFR_RNDN);
        mpfr_init_set_str(r3277943, "-0.175", 10, MPFR_RNDN);
        mpfr_init(r3277944);
        mpfr_init(r3277945);
        mpfr_init(r3277946);
        mpfr_init_set_str(r3277947, "3", 10, MPFR_RNDN);
        mpfr_init(r3277948);
        mpfr_init(r3277949);
        mpfr_init_set_str(r3277950, "-0.000198", 10, MPFR_RNDN);
        mpfr_init(r3277951);
        mpfr_init_set_str(r3277952, "0.009722", 10, MPFR_RNDN);
        mpfr_init(r3277953);
        mpfr_init(r3277954);
        mpfr_init(r3277955);
        mpfr_init(r3277956);
}

double f_dm(double x) {
        mpfr_set_d(r3277929, x, MPFR_RNDN);
        mpfr_mul(r3277930, r3277929, r3277929, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277933, r3277932, r3277929, MPFR_RNDN);
        mpfr_add(r3277934, r3277931, r3277933, MPFR_RNDN);
        mpfr_mul(r3277935, r3277930, r3277934, MPFR_RNDN);
        ;
        mpfr_mul(r3277937, r3277929, r3277936, MPFR_RNDN);
        ;
        mpfr_add(r3277939, r3277937, r3277938, MPFR_RNDN);
        mpfr_add(r3277940, r3277935, r3277939, MPFR_RNDN);
        mpfr_mul(r3277941, r3277930, r3277930, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r3277944, r3277943, r3277929, MPFR_RNDN);
        mpfr_add(r3277945, r3277942, r3277944, MPFR_RNDN);
        mpfr_mul(r3277946, r3277941, r3277945, MPFR_RNDN);
        ;
        mpfr_pow(r3277948, r3277929, r3277947, MPFR_RNDN);
        mpfr_mul(r3277949, r3277948, r3277948, MPFR_RNDN);
        ;
        mpfr_mul(r3277951, r3277950, r3277929, MPFR_RNDN);
        ;
        mpfr_add(r3277953, r3277951, r3277952, MPFR_RNDN);
        mpfr_mul(r3277954, r3277949, r3277953, MPFR_RNDN);
        mpfr_add(r3277955, r3277946, r3277954, MPFR_RNDN);
        mpfr_add(r3277956, r3277940, r3277955, MPFR_RNDN);
        return mpfr_get_d(r3277956, MPFR_RNDN);
}

