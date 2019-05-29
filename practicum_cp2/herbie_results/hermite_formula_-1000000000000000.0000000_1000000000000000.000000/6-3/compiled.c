#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8953849 = -12.0;
        float r8953850 = x;
        float r8953851 = r8953849 * r8953850;
        float r8953852 = 8.0;
        float r8953853 = r8953850 * r8953850;
        float r8953854 = r8953853 * r8953850;
        float r8953855 = r8953852 * r8953854;
        float r8953856 = r8953851 + r8953855;
        return r8953856;
}

double f_id(double x) {
        double r8953857 = -12.0;
        double r8953858 = x;
        double r8953859 = r8953857 * r8953858;
        double r8953860 = 8.0;
        double r8953861 = r8953858 * r8953858;
        double r8953862 = r8953861 * r8953858;
        double r8953863 = r8953860 * r8953862;
        double r8953864 = r8953859 + r8953863;
        return r8953864;
}


double f_of(float x) {
        float r8953865 = -12.0;
        float r8953866 = x;
        float r8953867 = r8953865 * r8953866;
        float r8953868 = 8.0;
        float r8953869 = 3;
        float r8953870 = pow(r8953866, r8953869);
        float r8953871 = r8953868 * r8953870;
        float r8953872 = r8953867 + r8953871;
        return r8953872;
}

double f_od(double x) {
        double r8953873 = -12.0;
        double r8953874 = x;
        double r8953875 = r8953873 * r8953874;
        double r8953876 = 8.0;
        double r8953877 = 3;
        double r8953878 = pow(r8953874, r8953877);
        double r8953879 = r8953876 * r8953878;
        double r8953880 = r8953875 + r8953879;
        return r8953880;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8953881, r8953882, r8953883, r8953884, r8953885, r8953886, r8953887, r8953888;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953881, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r8953882);
        mpfr_init(r8953883);
        mpfr_init_set_str(r8953884, "8.0", 10, MPFR_RNDN);
        mpfr_init(r8953885);
        mpfr_init(r8953886);
        mpfr_init(r8953887);
        mpfr_init(r8953888);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8953882, x, MPFR_RNDN);
        mpfr_mul(r8953883, r8953881, r8953882, MPFR_RNDN);
        ;
        mpfr_mul(r8953885, r8953882, r8953882, MPFR_RNDN);
        mpfr_mul(r8953886, r8953885, r8953882, MPFR_RNDN);
        mpfr_mul(r8953887, r8953884, r8953886, MPFR_RNDN);
        mpfr_add(r8953888, r8953883, r8953887, MPFR_RNDN);
        return mpfr_get_d(r8953888, MPFR_RNDN);
}

static mpfr_t r8953889, r8953890, r8953891, r8953892, r8953893, r8953894, r8953895, r8953896;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953889, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r8953890);
        mpfr_init(r8953891);
        mpfr_init_set_str(r8953892, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953893, "3", 10, MPFR_RNDN);
        mpfr_init(r8953894);
        mpfr_init(r8953895);
        mpfr_init(r8953896);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8953890, x, MPFR_RNDN);
        mpfr_mul(r8953891, r8953889, r8953890, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8953894, r8953890, r8953893, MPFR_RNDN);
        mpfr_mul(r8953895, r8953892, r8953894, MPFR_RNDN);
        mpfr_add(r8953896, r8953891, r8953895, MPFR_RNDN);
        return mpfr_get_d(r8953896, MPFR_RNDN);
}

static mpfr_t r8953897, r8953898, r8953899, r8953900, r8953901, r8953902, r8953903, r8953904;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8953897, "-12.0", 10, MPFR_RNDN);
        mpfr_init(r8953898);
        mpfr_init(r8953899);
        mpfr_init_set_str(r8953900, "8.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8953901, "3", 10, MPFR_RNDN);
        mpfr_init(r8953902);
        mpfr_init(r8953903);
        mpfr_init(r8953904);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8953898, x, MPFR_RNDN);
        mpfr_mul(r8953899, r8953897, r8953898, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r8953902, r8953898, r8953901, MPFR_RNDN);
        mpfr_mul(r8953903, r8953900, r8953902, MPFR_RNDN);
        mpfr_add(r8953904, r8953899, r8953903, MPFR_RNDN);
        return mpfr_get_d(r8953904, MPFR_RNDN);
}

