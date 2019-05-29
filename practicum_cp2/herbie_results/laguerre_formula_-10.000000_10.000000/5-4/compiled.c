#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r10584794 = 1.0;
        float r10584795 = -4.0;
        float r10584796 = x;
        float r10584797 = r10584795 * r10584796;
        float r10584798 = r10584794 + r10584797;
        float r10584799 = 3.0;
        float r10584800 = r10584796 * r10584796;
        float r10584801 = r10584799 * r10584800;
        float r10584802 = r10584798 + r10584801;
        float r10584803 = -0.666667;
        float r10584804 = r10584800 * r10584796;
        float r10584805 = r10584803 * r10584804;
        float r10584806 = r10584802 + r10584805;
        float r10584807 = 0.041667;
        float r10584808 = r10584804 * r10584796;
        float r10584809 = r10584807 * r10584808;
        float r10584810 = r10584806 + r10584809;
        return r10584810;
}

double f_id(double x) {
        double r10584811 = 1.0;
        double r10584812 = -4.0;
        double r10584813 = x;
        double r10584814 = r10584812 * r10584813;
        double r10584815 = r10584811 + r10584814;
        double r10584816 = 3.0;
        double r10584817 = r10584813 * r10584813;
        double r10584818 = r10584816 * r10584817;
        double r10584819 = r10584815 + r10584818;
        double r10584820 = -0.666667;
        double r10584821 = r10584817 * r10584813;
        double r10584822 = r10584820 * r10584821;
        double r10584823 = r10584819 + r10584822;
        double r10584824 = 0.041667;
        double r10584825 = r10584821 * r10584813;
        double r10584826 = r10584824 * r10584825;
        double r10584827 = r10584823 + r10584826;
        return r10584827;
}


double f_of(float x) {
        float r10584828 = x;
        float r10584829 = 3;
        float r10584830 = pow(r10584828, r10584829);
        float r10584831 = 0.041667;
        float r10584832 = r10584831 * r10584828;
        float r10584833 = r10584832 * r10584832;
        float r10584834 = -0.666667;
        float r10584835 = r10584834 * r10584834;
        float r10584836 = r10584833 - r10584835;
        float r10584837 = r10584830 * r10584836;
        float r10584838 = 3.0;
        float r10584839 = r10584828 * r10584838;
        float r10584840 = r10584839 * r10584828;
        float r10584841 = r10584840 * r10584840;
        float r10584842 = -4.0;
        float r10584843 = r10584828 * r10584842;
        float r10584844 = 1.0;
        float r10584845 = r10584843 + r10584844;
        float r10584846 = r10584845 * r10584845;
        float r10584847 = r10584840 * r10584845;
        float r10584848 = r10584846 - r10584847;
        float r10584849 = r10584841 + r10584848;
        float r10584850 = r10584837 * r10584849;
        float r10584851 = r10584832 - r10584834;
        float r10584852 = pow(r10584840, r10584829);
        float r10584853 = pow(r10584845, r10584829);
        float r10584854 = r10584852 + r10584853;
        float r10584855 = r10584851 * r10584854;
        float r10584856 = r10584850 + r10584855;
        float r10584857 = log(r10584840);
        float r10584858 = exp(r10584857);
        float r10584859 = r10584840 * r10584858;
        float r10584860 = r10584859 + r10584848;
        float r10584861 = r10584851 * r10584860;
        float r10584862 = r10584856 / r10584861;
        return r10584862;
}

double f_od(double x) {
        double r10584863 = x;
        double r10584864 = 3;
        double r10584865 = pow(r10584863, r10584864);
        double r10584866 = 0.041667;
        double r10584867 = r10584866 * r10584863;
        double r10584868 = r10584867 * r10584867;
        double r10584869 = -0.666667;
        double r10584870 = r10584869 * r10584869;
        double r10584871 = r10584868 - r10584870;
        double r10584872 = r10584865 * r10584871;
        double r10584873 = 3.0;
        double r10584874 = r10584863 * r10584873;
        double r10584875 = r10584874 * r10584863;
        double r10584876 = r10584875 * r10584875;
        double r10584877 = -4.0;
        double r10584878 = r10584863 * r10584877;
        double r10584879 = 1.0;
        double r10584880 = r10584878 + r10584879;
        double r10584881 = r10584880 * r10584880;
        double r10584882 = r10584875 * r10584880;
        double r10584883 = r10584881 - r10584882;
        double r10584884 = r10584876 + r10584883;
        double r10584885 = r10584872 * r10584884;
        double r10584886 = r10584867 - r10584869;
        double r10584887 = pow(r10584875, r10584864);
        double r10584888 = pow(r10584880, r10584864);
        double r10584889 = r10584887 + r10584888;
        double r10584890 = r10584886 * r10584889;
        double r10584891 = r10584885 + r10584890;
        double r10584892 = log(r10584875);
        double r10584893 = exp(r10584892);
        double r10584894 = r10584875 * r10584893;
        double r10584895 = r10584894 + r10584883;
        double r10584896 = r10584886 * r10584895;
        double r10584897 = r10584891 / r10584896;
        return r10584897;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10584898, r10584899, r10584900, r10584901, r10584902, r10584903, r10584904, r10584905, r10584906, r10584907, r10584908, r10584909, r10584910, r10584911, r10584912, r10584913, r10584914;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584898, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584899, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10584900);
        mpfr_init(r10584901);
        mpfr_init(r10584902);
        mpfr_init_set_str(r10584903, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10584904);
        mpfr_init(r10584905);
        mpfr_init(r10584906);
        mpfr_init_set_str(r10584907, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10584908);
        mpfr_init(r10584909);
        mpfr_init(r10584910);
        mpfr_init_set_str(r10584911, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10584912);
        mpfr_init(r10584913);
        mpfr_init(r10584914);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10584900, x, MPFR_RNDN);
        mpfr_mul(r10584901, r10584899, r10584900, MPFR_RNDN);
        mpfr_add(r10584902, r10584898, r10584901, MPFR_RNDN);
        ;
        mpfr_mul(r10584904, r10584900, r10584900, MPFR_RNDN);
        mpfr_mul(r10584905, r10584903, r10584904, MPFR_RNDN);
        mpfr_add(r10584906, r10584902, r10584905, MPFR_RNDN);
        ;
        mpfr_mul(r10584908, r10584904, r10584900, MPFR_RNDN);
        mpfr_mul(r10584909, r10584907, r10584908, MPFR_RNDN);
        mpfr_add(r10584910, r10584906, r10584909, MPFR_RNDN);
        ;
        mpfr_mul(r10584912, r10584908, r10584900, MPFR_RNDN);
        mpfr_mul(r10584913, r10584911, r10584912, MPFR_RNDN);
        mpfr_add(r10584914, r10584910, r10584913, MPFR_RNDN);
        return mpfr_get_d(r10584914, MPFR_RNDN);
}

static mpfr_t r10584915, r10584916, r10584917, r10584918, r10584919, r10584920, r10584921, r10584922, r10584923, r10584924, r10584925, r10584926, r10584927, r10584928, r10584929, r10584930, r10584931, r10584932, r10584933, r10584934, r10584935, r10584936, r10584937, r10584938, r10584939, r10584940, r10584941, r10584942, r10584943, r10584944, r10584945, r10584946, r10584947, r10584948, r10584949;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584915);
        mpfr_init_set_str(r10584916, "3", 10, MPFR_RNDN);
        mpfr_init(r10584917);
        mpfr_init_set_str(r10584918, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10584919);
        mpfr_init(r10584920);
        mpfr_init_set_str(r10584921, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10584922);
        mpfr_init(r10584923);
        mpfr_init(r10584924);
        mpfr_init_set_str(r10584925, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10584926);
        mpfr_init(r10584927);
        mpfr_init(r10584928);
        mpfr_init_set_str(r10584929, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10584930);
        mpfr_init_set_str(r10584931, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10584932);
        mpfr_init(r10584933);
        mpfr_init(r10584934);
        mpfr_init(r10584935);
        mpfr_init(r10584936);
        mpfr_init(r10584937);
        mpfr_init(r10584938);
        mpfr_init(r10584939);
        mpfr_init(r10584940);
        mpfr_init(r10584941);
        mpfr_init(r10584942);
        mpfr_init(r10584943);
        mpfr_init(r10584944);
        mpfr_init(r10584945);
        mpfr_init(r10584946);
        mpfr_init(r10584947);
        mpfr_init(r10584948);
        mpfr_init(r10584949);
}

double f_fm(double x) {
        mpfr_set_d(r10584915, x, MPFR_RNDN);
        ;
        mpfr_pow(r10584917, r10584915, r10584916, MPFR_RNDN);
        ;
        mpfr_mul(r10584919, r10584918, r10584915, MPFR_RNDN);
        mpfr_mul(r10584920, r10584919, r10584919, MPFR_RNDN);
        ;
        mpfr_mul(r10584922, r10584921, r10584921, MPFR_RNDN);
        mpfr_sub(r10584923, r10584920, r10584922, MPFR_RNDN);
        mpfr_mul(r10584924, r10584917, r10584923, MPFR_RNDN);
        ;
        mpfr_mul(r10584926, r10584915, r10584925, MPFR_RNDN);
        mpfr_mul(r10584927, r10584926, r10584915, MPFR_RNDN);
        mpfr_mul(r10584928, r10584927, r10584927, MPFR_RNDN);
        ;
        mpfr_mul(r10584930, r10584915, r10584929, MPFR_RNDN);
        ;
        mpfr_add(r10584932, r10584930, r10584931, MPFR_RNDN);
        mpfr_mul(r10584933, r10584932, r10584932, MPFR_RNDN);
        mpfr_mul(r10584934, r10584927, r10584932, MPFR_RNDN);
        mpfr_sub(r10584935, r10584933, r10584934, MPFR_RNDN);
        mpfr_add(r10584936, r10584928, r10584935, MPFR_RNDN);
        mpfr_mul(r10584937, r10584924, r10584936, MPFR_RNDN);
        mpfr_sub(r10584938, r10584919, r10584921, MPFR_RNDN);
        mpfr_pow(r10584939, r10584927, r10584916, MPFR_RNDN);
        mpfr_pow(r10584940, r10584932, r10584916, MPFR_RNDN);
        mpfr_add(r10584941, r10584939, r10584940, MPFR_RNDN);
        mpfr_mul(r10584942, r10584938, r10584941, MPFR_RNDN);
        mpfr_add(r10584943, r10584937, r10584942, MPFR_RNDN);
        mpfr_log(r10584944, r10584927, MPFR_RNDN);
        mpfr_exp(r10584945, r10584944, MPFR_RNDN);
        mpfr_mul(r10584946, r10584927, r10584945, MPFR_RNDN);
        mpfr_add(r10584947, r10584946, r10584935, MPFR_RNDN);
        mpfr_mul(r10584948, r10584938, r10584947, MPFR_RNDN);
        mpfr_div(r10584949, r10584943, r10584948, MPFR_RNDN);
        return mpfr_get_d(r10584949, MPFR_RNDN);
}

static mpfr_t r10584950, r10584951, r10584952, r10584953, r10584954, r10584955, r10584956, r10584957, r10584958, r10584959, r10584960, r10584961, r10584962, r10584963, r10584964, r10584965, r10584966, r10584967, r10584968, r10584969, r10584970, r10584971, r10584972, r10584973, r10584974, r10584975, r10584976, r10584977, r10584978, r10584979, r10584980, r10584981, r10584982, r10584983, r10584984;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584950);
        mpfr_init_set_str(r10584951, "3", 10, MPFR_RNDN);
        mpfr_init(r10584952);
        mpfr_init_set_str(r10584953, "0.041667", 10, MPFR_RNDN);
        mpfr_init(r10584954);
        mpfr_init(r10584955);
        mpfr_init_set_str(r10584956, "-0.666667", 10, MPFR_RNDN);
        mpfr_init(r10584957);
        mpfr_init(r10584958);
        mpfr_init(r10584959);
        mpfr_init_set_str(r10584960, "3.0", 10, MPFR_RNDN);
        mpfr_init(r10584961);
        mpfr_init(r10584962);
        mpfr_init(r10584963);
        mpfr_init_set_str(r10584964, "-4.0", 10, MPFR_RNDN);
        mpfr_init(r10584965);
        mpfr_init_set_str(r10584966, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10584967);
        mpfr_init(r10584968);
        mpfr_init(r10584969);
        mpfr_init(r10584970);
        mpfr_init(r10584971);
        mpfr_init(r10584972);
        mpfr_init(r10584973);
        mpfr_init(r10584974);
        mpfr_init(r10584975);
        mpfr_init(r10584976);
        mpfr_init(r10584977);
        mpfr_init(r10584978);
        mpfr_init(r10584979);
        mpfr_init(r10584980);
        mpfr_init(r10584981);
        mpfr_init(r10584982);
        mpfr_init(r10584983);
        mpfr_init(r10584984);
}

double f_dm(double x) {
        mpfr_set_d(r10584950, x, MPFR_RNDN);
        ;
        mpfr_pow(r10584952, r10584950, r10584951, MPFR_RNDN);
        ;
        mpfr_mul(r10584954, r10584953, r10584950, MPFR_RNDN);
        mpfr_mul(r10584955, r10584954, r10584954, MPFR_RNDN);
        ;
        mpfr_mul(r10584957, r10584956, r10584956, MPFR_RNDN);
        mpfr_sub(r10584958, r10584955, r10584957, MPFR_RNDN);
        mpfr_mul(r10584959, r10584952, r10584958, MPFR_RNDN);
        ;
        mpfr_mul(r10584961, r10584950, r10584960, MPFR_RNDN);
        mpfr_mul(r10584962, r10584961, r10584950, MPFR_RNDN);
        mpfr_mul(r10584963, r10584962, r10584962, MPFR_RNDN);
        ;
        mpfr_mul(r10584965, r10584950, r10584964, MPFR_RNDN);
        ;
        mpfr_add(r10584967, r10584965, r10584966, MPFR_RNDN);
        mpfr_mul(r10584968, r10584967, r10584967, MPFR_RNDN);
        mpfr_mul(r10584969, r10584962, r10584967, MPFR_RNDN);
        mpfr_sub(r10584970, r10584968, r10584969, MPFR_RNDN);
        mpfr_add(r10584971, r10584963, r10584970, MPFR_RNDN);
        mpfr_mul(r10584972, r10584959, r10584971, MPFR_RNDN);
        mpfr_sub(r10584973, r10584954, r10584956, MPFR_RNDN);
        mpfr_pow(r10584974, r10584962, r10584951, MPFR_RNDN);
        mpfr_pow(r10584975, r10584967, r10584951, MPFR_RNDN);
        mpfr_add(r10584976, r10584974, r10584975, MPFR_RNDN);
        mpfr_mul(r10584977, r10584973, r10584976, MPFR_RNDN);
        mpfr_add(r10584978, r10584972, r10584977, MPFR_RNDN);
        mpfr_log(r10584979, r10584962, MPFR_RNDN);
        mpfr_exp(r10584980, r10584979, MPFR_RNDN);
        mpfr_mul(r10584981, r10584962, r10584980, MPFR_RNDN);
        mpfr_add(r10584982, r10584981, r10584970, MPFR_RNDN);
        mpfr_mul(r10584983, r10584973, r10584982, MPFR_RNDN);
        mpfr_div(r10584984, r10584978, r10584983, MPFR_RNDN);
        return mpfr_get_d(r10584984, MPFR_RNDN);
}

