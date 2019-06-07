#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r4484793 = 2.460938;
        float r4484794 = x;
        float r4484795 = r4484793 * r4484794;
        float r4484796 = -36.09375;
        float r4484797 = r4484794 * r4484794;
        float r4484798 = r4484797 * r4484794;
        float r4484799 = r4484796 * r4484798;
        float r4484800 = r4484795 + r4484799;
        float r4484801 = 140.765625;
        float r4484802 = r4484798 * r4484794;
        float r4484803 = r4484802 * r4484794;
        float r4484804 = r4484801 * r4484803;
        float r4484805 = r4484800 + r4484804;
        float r4484806 = -201.09375;
        float r4484807 = r4484803 * r4484794;
        float r4484808 = r4484807 * r4484794;
        float r4484809 = r4484806 * r4484808;
        float r4484810 = r4484805 + r4484809;
        float r4484811 = 94.960938;
        float r4484812 = r4484808 * r4484794;
        float r4484813 = r4484812 * r4484794;
        float r4484814 = r4484811 * r4484813;
        float r4484815 = r4484810 + r4484814;
        return r4484815;
}

double f_id(double x) {
        double r4484816 = 2.460938;
        double r4484817 = x;
        double r4484818 = r4484816 * r4484817;
        double r4484819 = -36.09375;
        double r4484820 = r4484817 * r4484817;
        double r4484821 = r4484820 * r4484817;
        double r4484822 = r4484819 * r4484821;
        double r4484823 = r4484818 + r4484822;
        double r4484824 = 140.765625;
        double r4484825 = r4484821 * r4484817;
        double r4484826 = r4484825 * r4484817;
        double r4484827 = r4484824 * r4484826;
        double r4484828 = r4484823 + r4484827;
        double r4484829 = -201.09375;
        double r4484830 = r4484826 * r4484817;
        double r4484831 = r4484830 * r4484817;
        double r4484832 = r4484829 * r4484831;
        double r4484833 = r4484828 + r4484832;
        double r4484834 = 94.960938;
        double r4484835 = r4484831 * r4484817;
        double r4484836 = r4484835 * r4484817;
        double r4484837 = r4484834 * r4484836;
        double r4484838 = r4484833 + r4484837;
        return r4484838;
}


double f_of(float x) {
        float r4484839 = 2.460938;
        float r4484840 = x;
        float r4484841 = r4484839 * r4484840;
        float r4484842 = -36.09375;
        float r4484843 = r4484840 * r4484840;
        float r4484844 = r4484843 * r4484840;
        float r4484845 = r4484842 * r4484844;
        float r4484846 = r4484841 + r4484845;
        float r4484847 = 140.765625;
        float r4484848 = r4484844 * r4484840;
        float r4484849 = r4484848 * r4484840;
        float r4484850 = r4484847 * r4484849;
        float r4484851 = r4484846 + r4484850;
        float r4484852 = -201.09375;
        float r4484853 = r4484849 * r4484840;
        float r4484854 = r4484853 * r4484840;
        float r4484855 = r4484852 * r4484854;
        float r4484856 = r4484851 + r4484855;
        float r4484857 = 94.960938;
        float r4484858 = r4484854 * r4484840;
        float r4484859 = r4484858 * r4484840;
        float r4484860 = r4484857 * r4484859;
        float r4484861 = r4484856 + r4484860;
        return r4484861;
}

double f_od(double x) {
        double r4484862 = 2.460938;
        double r4484863 = x;
        double r4484864 = r4484862 * r4484863;
        double r4484865 = -36.09375;
        double r4484866 = r4484863 * r4484863;
        double r4484867 = r4484866 * r4484863;
        double r4484868 = r4484865 * r4484867;
        double r4484869 = r4484864 + r4484868;
        double r4484870 = 140.765625;
        double r4484871 = r4484867 * r4484863;
        double r4484872 = r4484871 * r4484863;
        double r4484873 = r4484870 * r4484872;
        double r4484874 = r4484869 + r4484873;
        double r4484875 = -201.09375;
        double r4484876 = r4484872 * r4484863;
        double r4484877 = r4484876 * r4484863;
        double r4484878 = r4484875 * r4484877;
        double r4484879 = r4484874 + r4484878;
        double r4484880 = 94.960938;
        double r4484881 = r4484877 * r4484863;
        double r4484882 = r4484881 * r4484863;
        double r4484883 = r4484880 * r4484882;
        double r4484884 = r4484879 + r4484883;
        return r4484884;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4484885, r4484886, r4484887, r4484888, r4484889, r4484890, r4484891, r4484892, r4484893, r4484894, r4484895, r4484896, r4484897, r4484898, r4484899, r4484900, r4484901, r4484902, r4484903, r4484904, r4484905, r4484906, r4484907;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4484885, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4484886);
        mpfr_init(r4484887);
        mpfr_init_set_str(r4484888, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4484889);
        mpfr_init(r4484890);
        mpfr_init(r4484891);
        mpfr_init(r4484892);
        mpfr_init_set_str(r4484893, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4484894);
        mpfr_init(r4484895);
        mpfr_init(r4484896);
        mpfr_init(r4484897);
        mpfr_init_set_str(r4484898, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4484899);
        mpfr_init(r4484900);
        mpfr_init(r4484901);
        mpfr_init(r4484902);
        mpfr_init_set_str(r4484903, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4484904);
        mpfr_init(r4484905);
        mpfr_init(r4484906);
        mpfr_init(r4484907);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4484886, x, MPFR_RNDN);
        mpfr_mul(r4484887, r4484885, r4484886, MPFR_RNDN);
        ;
        mpfr_mul(r4484889, r4484886, r4484886, MPFR_RNDN);
        mpfr_mul(r4484890, r4484889, r4484886, MPFR_RNDN);
        mpfr_mul(r4484891, r4484888, r4484890, MPFR_RNDN);
        mpfr_add(r4484892, r4484887, r4484891, MPFR_RNDN);
        ;
        mpfr_mul(r4484894, r4484890, r4484886, MPFR_RNDN);
        mpfr_mul(r4484895, r4484894, r4484886, MPFR_RNDN);
        mpfr_mul(r4484896, r4484893, r4484895, MPFR_RNDN);
        mpfr_add(r4484897, r4484892, r4484896, MPFR_RNDN);
        ;
        mpfr_mul(r4484899, r4484895, r4484886, MPFR_RNDN);
        mpfr_mul(r4484900, r4484899, r4484886, MPFR_RNDN);
        mpfr_mul(r4484901, r4484898, r4484900, MPFR_RNDN);
        mpfr_add(r4484902, r4484897, r4484901, MPFR_RNDN);
        ;
        mpfr_mul(r4484904, r4484900, r4484886, MPFR_RNDN);
        mpfr_mul(r4484905, r4484904, r4484886, MPFR_RNDN);
        mpfr_mul(r4484906, r4484903, r4484905, MPFR_RNDN);
        mpfr_add(r4484907, r4484902, r4484906, MPFR_RNDN);
        return mpfr_get_d(r4484907, MPFR_RNDN);
}

static mpfr_t r4484908, r4484909, r4484910, r4484911, r4484912, r4484913, r4484914, r4484915, r4484916, r4484917, r4484918, r4484919, r4484920, r4484921, r4484922, r4484923, r4484924, r4484925, r4484926, r4484927, r4484928, r4484929, r4484930;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4484908, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4484909);
        mpfr_init(r4484910);
        mpfr_init_set_str(r4484911, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4484912);
        mpfr_init(r4484913);
        mpfr_init(r4484914);
        mpfr_init(r4484915);
        mpfr_init_set_str(r4484916, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4484917);
        mpfr_init(r4484918);
        mpfr_init(r4484919);
        mpfr_init(r4484920);
        mpfr_init_set_str(r4484921, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4484922);
        mpfr_init(r4484923);
        mpfr_init(r4484924);
        mpfr_init(r4484925);
        mpfr_init_set_str(r4484926, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4484927);
        mpfr_init(r4484928);
        mpfr_init(r4484929);
        mpfr_init(r4484930);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r4484909, x, MPFR_RNDN);
        mpfr_mul(r4484910, r4484908, r4484909, MPFR_RNDN);
        ;
        mpfr_mul(r4484912, r4484909, r4484909, MPFR_RNDN);
        mpfr_mul(r4484913, r4484912, r4484909, MPFR_RNDN);
        mpfr_mul(r4484914, r4484911, r4484913, MPFR_RNDN);
        mpfr_add(r4484915, r4484910, r4484914, MPFR_RNDN);
        ;
        mpfr_mul(r4484917, r4484913, r4484909, MPFR_RNDN);
        mpfr_mul(r4484918, r4484917, r4484909, MPFR_RNDN);
        mpfr_mul(r4484919, r4484916, r4484918, MPFR_RNDN);
        mpfr_add(r4484920, r4484915, r4484919, MPFR_RNDN);
        ;
        mpfr_mul(r4484922, r4484918, r4484909, MPFR_RNDN);
        mpfr_mul(r4484923, r4484922, r4484909, MPFR_RNDN);
        mpfr_mul(r4484924, r4484921, r4484923, MPFR_RNDN);
        mpfr_add(r4484925, r4484920, r4484924, MPFR_RNDN);
        ;
        mpfr_mul(r4484927, r4484923, r4484909, MPFR_RNDN);
        mpfr_mul(r4484928, r4484927, r4484909, MPFR_RNDN);
        mpfr_mul(r4484929, r4484926, r4484928, MPFR_RNDN);
        mpfr_add(r4484930, r4484925, r4484929, MPFR_RNDN);
        return mpfr_get_d(r4484930, MPFR_RNDN);
}

static mpfr_t r4484931, r4484932, r4484933, r4484934, r4484935, r4484936, r4484937, r4484938, r4484939, r4484940, r4484941, r4484942, r4484943, r4484944, r4484945, r4484946, r4484947, r4484948, r4484949, r4484950, r4484951, r4484952, r4484953;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r4484931, "2.460938", 10, MPFR_RNDN);
        mpfr_init(r4484932);
        mpfr_init(r4484933);
        mpfr_init_set_str(r4484934, "-36.09375", 10, MPFR_RNDN);
        mpfr_init(r4484935);
        mpfr_init(r4484936);
        mpfr_init(r4484937);
        mpfr_init(r4484938);
        mpfr_init_set_str(r4484939, "140.765625", 10, MPFR_RNDN);
        mpfr_init(r4484940);
        mpfr_init(r4484941);
        mpfr_init(r4484942);
        mpfr_init(r4484943);
        mpfr_init_set_str(r4484944, "-201.09375", 10, MPFR_RNDN);
        mpfr_init(r4484945);
        mpfr_init(r4484946);
        mpfr_init(r4484947);
        mpfr_init(r4484948);
        mpfr_init_set_str(r4484949, "94.960938", 10, MPFR_RNDN);
        mpfr_init(r4484950);
        mpfr_init(r4484951);
        mpfr_init(r4484952);
        mpfr_init(r4484953);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r4484932, x, MPFR_RNDN);
        mpfr_mul(r4484933, r4484931, r4484932, MPFR_RNDN);
        ;
        mpfr_mul(r4484935, r4484932, r4484932, MPFR_RNDN);
        mpfr_mul(r4484936, r4484935, r4484932, MPFR_RNDN);
        mpfr_mul(r4484937, r4484934, r4484936, MPFR_RNDN);
        mpfr_add(r4484938, r4484933, r4484937, MPFR_RNDN);
        ;
        mpfr_mul(r4484940, r4484936, r4484932, MPFR_RNDN);
        mpfr_mul(r4484941, r4484940, r4484932, MPFR_RNDN);
        mpfr_mul(r4484942, r4484939, r4484941, MPFR_RNDN);
        mpfr_add(r4484943, r4484938, r4484942, MPFR_RNDN);
        ;
        mpfr_mul(r4484945, r4484941, r4484932, MPFR_RNDN);
        mpfr_mul(r4484946, r4484945, r4484932, MPFR_RNDN);
        mpfr_mul(r4484947, r4484944, r4484946, MPFR_RNDN);
        mpfr_add(r4484948, r4484943, r4484947, MPFR_RNDN);
        ;
        mpfr_mul(r4484950, r4484946, r4484932, MPFR_RNDN);
        mpfr_mul(r4484951, r4484950, r4484932, MPFR_RNDN);
        mpfr_mul(r4484952, r4484949, r4484951, MPFR_RNDN);
        mpfr_add(r4484953, r4484948, r4484952, MPFR_RNDN);
        return mpfr_get_d(r4484953, MPFR_RNDN);
}

