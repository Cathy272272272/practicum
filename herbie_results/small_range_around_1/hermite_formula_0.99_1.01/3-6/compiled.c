#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r61032847 = -120.0;
        float r61032848 = 720.0;
        float r61032849 = x;
        float r61032850 = r61032849 * r61032849;
        float r61032851 = r61032848 * r61032850;
        float r61032852 = r61032847 + r61032851;
        float r61032853 = -480.0;
        float r61032854 = r61032850 * r61032849;
        float r61032855 = r61032854 * r61032849;
        float r61032856 = r61032853 * r61032855;
        float r61032857 = r61032852 + r61032856;
        float r61032858 = 64.0;
        float r61032859 = r61032855 * r61032849;
        float r61032860 = r61032859 * r61032849;
        float r61032861 = r61032858 * r61032860;
        float r61032862 = r61032857 + r61032861;
        return r61032862;
}

double f_id(double x) {
        double r61032863 = -120.0;
        double r61032864 = 720.0;
        double r61032865 = x;
        double r61032866 = r61032865 * r61032865;
        double r61032867 = r61032864 * r61032866;
        double r61032868 = r61032863 + r61032867;
        double r61032869 = -480.0;
        double r61032870 = r61032866 * r61032865;
        double r61032871 = r61032870 * r61032865;
        double r61032872 = r61032869 * r61032871;
        double r61032873 = r61032868 + r61032872;
        double r61032874 = 64.0;
        double r61032875 = r61032871 * r61032865;
        double r61032876 = r61032875 * r61032865;
        double r61032877 = r61032874 * r61032876;
        double r61032878 = r61032873 + r61032877;
        return r61032878;
}


double f_of(float x) {
        float r61032879 = -120.0;
        float r61032880 = 720.0;
        float r61032881 = x;
        float r61032882 = r61032881 * r61032881;
        float r61032883 = r61032880 * r61032882;
        float r61032884 = r61032879 + r61032883;
        float r61032885 = -480.0;
        float r61032886 = r61032885 * r61032881;
        float r61032887 = r61032886 * r61032882;
        float r61032888 = 3;
        float r61032889 = pow(r61032887, r61032888);
        float r61032890 = cbrt(r61032889);
        float r61032891 = r61032890 * r61032881;
        float r61032892 = r61032884 + r61032891;
        float r61032893 = 64.0;
        float r61032894 = 1;
        float r61032895 = r61032888 + r61032894;
        float r61032896 = r61032895 + r61032894;
        float r61032897 = pow(r61032881, r61032896);
        float r61032898 = r61032897 * r61032881;
        float r61032899 = r61032893 * r61032898;
        float r61032900 = r61032892 + r61032899;
        return r61032900;
}

double f_od(double x) {
        double r61032901 = -120.0;
        double r61032902 = 720.0;
        double r61032903 = x;
        double r61032904 = r61032903 * r61032903;
        double r61032905 = r61032902 * r61032904;
        double r61032906 = r61032901 + r61032905;
        double r61032907 = -480.0;
        double r61032908 = r61032907 * r61032903;
        double r61032909 = r61032908 * r61032904;
        double r61032910 = 3;
        double r61032911 = pow(r61032909, r61032910);
        double r61032912 = cbrt(r61032911);
        double r61032913 = r61032912 * r61032903;
        double r61032914 = r61032906 + r61032913;
        double r61032915 = 64.0;
        double r61032916 = 1;
        double r61032917 = r61032910 + r61032916;
        double r61032918 = r61032917 + r61032916;
        double r61032919 = pow(r61032903, r61032918);
        double r61032920 = r61032919 * r61032903;
        double r61032921 = r61032915 * r61032920;
        double r61032922 = r61032914 + r61032921;
        return r61032922;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r61032923, r61032924, r61032925, r61032926, r61032927, r61032928, r61032929, r61032930, r61032931, r61032932, r61032933, r61032934, r61032935, r61032936, r61032937, r61032938;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032923, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032924, "720.0", 10, MPFR_RNDN);
        mpfr_init(r61032925);
        mpfr_init(r61032926);
        mpfr_init(r61032927);
        mpfr_init(r61032928);
        mpfr_init_set_str(r61032929, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r61032930);
        mpfr_init(r61032931);
        mpfr_init(r61032932);
        mpfr_init(r61032933);
        mpfr_init_set_str(r61032934, "64.0", 10, MPFR_RNDN);
        mpfr_init(r61032935);
        mpfr_init(r61032936);
        mpfr_init(r61032937);
        mpfr_init(r61032938);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r61032925, x, MPFR_RNDN);
        mpfr_mul(r61032926, r61032925, r61032925, MPFR_RNDN);
        mpfr_mul(r61032927, r61032924, r61032926, MPFR_RNDN);
        mpfr_add(r61032928, r61032923, r61032927, MPFR_RNDN);
        ;
        mpfr_mul(r61032930, r61032926, r61032925, MPFR_RNDN);
        mpfr_mul(r61032931, r61032930, r61032925, MPFR_RNDN);
        mpfr_mul(r61032932, r61032929, r61032931, MPFR_RNDN);
        mpfr_add(r61032933, r61032928, r61032932, MPFR_RNDN);
        ;
        mpfr_mul(r61032935, r61032931, r61032925, MPFR_RNDN);
        mpfr_mul(r61032936, r61032935, r61032925, MPFR_RNDN);
        mpfr_mul(r61032937, r61032934, r61032936, MPFR_RNDN);
        mpfr_add(r61032938, r61032933, r61032937, MPFR_RNDN);
        return mpfr_get_d(r61032938, MPFR_RNDN);
}

static mpfr_t r61032939, r61032940, r61032941, r61032942, r61032943, r61032944, r61032945, r61032946, r61032947, r61032948, r61032949, r61032950, r61032951, r61032952, r61032953, r61032954, r61032955, r61032956, r61032957, r61032958, r61032959, r61032960;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032939, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032940, "720.0", 10, MPFR_RNDN);
        mpfr_init(r61032941);
        mpfr_init(r61032942);
        mpfr_init(r61032943);
        mpfr_init(r61032944);
        mpfr_init_set_str(r61032945, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r61032946);
        mpfr_init(r61032947);
        mpfr_init_set_str(r61032948, "3", 10, MPFR_RNDN);
        mpfr_init(r61032949);
        mpfr_init(r61032950);
        mpfr_init(r61032951);
        mpfr_init(r61032952);
        mpfr_init_set_str(r61032953, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032954, "1", 10, MPFR_RNDN);
        mpfr_init(r61032955);
        mpfr_init(r61032956);
        mpfr_init(r61032957);
        mpfr_init(r61032958);
        mpfr_init(r61032959);
        mpfr_init(r61032960);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r61032941, x, MPFR_RNDN);
        mpfr_mul(r61032942, r61032941, r61032941, MPFR_RNDN);
        mpfr_mul(r61032943, r61032940, r61032942, MPFR_RNDN);
        mpfr_add(r61032944, r61032939, r61032943, MPFR_RNDN);
        ;
        mpfr_mul(r61032946, r61032945, r61032941, MPFR_RNDN);
        mpfr_mul(r61032947, r61032946, r61032942, MPFR_RNDN);
        ;
        mpfr_pow(r61032949, r61032947, r61032948, MPFR_RNDN);
        mpfr_cbrt(r61032950, r61032949, MPFR_RNDN);
        mpfr_mul(r61032951, r61032950, r61032941, MPFR_RNDN);
        mpfr_add(r61032952, r61032944, r61032951, MPFR_RNDN);
        ;
        ;
        mpfr_add(r61032955, r61032948, r61032954, MPFR_RNDN);
        mpfr_add(r61032956, r61032955, r61032954, MPFR_RNDN);
        mpfr_pow(r61032957, r61032941, r61032956, MPFR_RNDN);
        mpfr_mul(r61032958, r61032957, r61032941, MPFR_RNDN);
        mpfr_mul(r61032959, r61032953, r61032958, MPFR_RNDN);
        mpfr_add(r61032960, r61032952, r61032959, MPFR_RNDN);
        return mpfr_get_d(r61032960, MPFR_RNDN);
}

static mpfr_t r61032961, r61032962, r61032963, r61032964, r61032965, r61032966, r61032967, r61032968, r61032969, r61032970, r61032971, r61032972, r61032973, r61032974, r61032975, r61032976, r61032977, r61032978, r61032979, r61032980, r61032981, r61032982;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r61032961, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032962, "720.0", 10, MPFR_RNDN);
        mpfr_init(r61032963);
        mpfr_init(r61032964);
        mpfr_init(r61032965);
        mpfr_init(r61032966);
        mpfr_init_set_str(r61032967, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r61032968);
        mpfr_init(r61032969);
        mpfr_init_set_str(r61032970, "3", 10, MPFR_RNDN);
        mpfr_init(r61032971);
        mpfr_init(r61032972);
        mpfr_init(r61032973);
        mpfr_init(r61032974);
        mpfr_init_set_str(r61032975, "64.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r61032976, "1", 10, MPFR_RNDN);
        mpfr_init(r61032977);
        mpfr_init(r61032978);
        mpfr_init(r61032979);
        mpfr_init(r61032980);
        mpfr_init(r61032981);
        mpfr_init(r61032982);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r61032963, x, MPFR_RNDN);
        mpfr_mul(r61032964, r61032963, r61032963, MPFR_RNDN);
        mpfr_mul(r61032965, r61032962, r61032964, MPFR_RNDN);
        mpfr_add(r61032966, r61032961, r61032965, MPFR_RNDN);
        ;
        mpfr_mul(r61032968, r61032967, r61032963, MPFR_RNDN);
        mpfr_mul(r61032969, r61032968, r61032964, MPFR_RNDN);
        ;
        mpfr_pow(r61032971, r61032969, r61032970, MPFR_RNDN);
        mpfr_cbrt(r61032972, r61032971, MPFR_RNDN);
        mpfr_mul(r61032973, r61032972, r61032963, MPFR_RNDN);
        mpfr_add(r61032974, r61032966, r61032973, MPFR_RNDN);
        ;
        ;
        mpfr_add(r61032977, r61032970, r61032976, MPFR_RNDN);
        mpfr_add(r61032978, r61032977, r61032976, MPFR_RNDN);
        mpfr_pow(r61032979, r61032963, r61032978, MPFR_RNDN);
        mpfr_mul(r61032980, r61032979, r61032963, MPFR_RNDN);
        mpfr_mul(r61032981, r61032975, r61032980, MPFR_RNDN);
        mpfr_add(r61032982, r61032974, r61032981, MPFR_RNDN);
        return mpfr_get_d(r61032982, MPFR_RNDN);
}

