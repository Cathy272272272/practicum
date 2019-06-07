#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r8924840 = -1.5;
        float r8924841 = x;
        float r8924842 = r8924840 * r8924841;
        float r8924843 = 2.5;
        float r8924844 = r8924841 * r8924841;
        float r8924845 = r8924844 * r8924841;
        float r8924846 = r8924843 * r8924845;
        float r8924847 = r8924842 + r8924846;
        return r8924847;
}

double f_id(double x) {
        double r8924848 = -1.5;
        double r8924849 = x;
        double r8924850 = r8924848 * r8924849;
        double r8924851 = 2.5;
        double r8924852 = r8924849 * r8924849;
        double r8924853 = r8924852 * r8924849;
        double r8924854 = r8924851 * r8924853;
        double r8924855 = r8924850 + r8924854;
        return r8924855;
}


double f_of(float x) {
        float r8924856 = -1.5;
        float r8924857 = x;
        float r8924858 = r8924856 * r8924857;
        float r8924859 = 2.5;
        float r8924860 = r8924857 * r8924857;
        float r8924861 = r8924859 * r8924860;
        float r8924862 = r8924861 * r8924857;
        float r8924863 = r8924858 + r8924862;
        return r8924863;
}

double f_od(double x) {
        double r8924864 = -1.5;
        double r8924865 = x;
        double r8924866 = r8924864 * r8924865;
        double r8924867 = 2.5;
        double r8924868 = r8924865 * r8924865;
        double r8924869 = r8924867 * r8924868;
        double r8924870 = r8924869 * r8924865;
        double r8924871 = r8924866 + r8924870;
        return r8924871;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924872, r8924873, r8924874, r8924875, r8924876, r8924877, r8924878, r8924879;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924872, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8924873);
        mpfr_init(r8924874);
        mpfr_init_set_str(r8924875, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8924876);
        mpfr_init(r8924877);
        mpfr_init(r8924878);
        mpfr_init(r8924879);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8924873, x, MPFR_RNDN);
        mpfr_mul(r8924874, r8924872, r8924873, MPFR_RNDN);
        ;
        mpfr_mul(r8924876, r8924873, r8924873, MPFR_RNDN);
        mpfr_mul(r8924877, r8924876, r8924873, MPFR_RNDN);
        mpfr_mul(r8924878, r8924875, r8924877, MPFR_RNDN);
        mpfr_add(r8924879, r8924874, r8924878, MPFR_RNDN);
        return mpfr_get_d(r8924879, MPFR_RNDN);
}

static mpfr_t r8924880, r8924881, r8924882, r8924883, r8924884, r8924885, r8924886, r8924887;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924880, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8924881);
        mpfr_init(r8924882);
        mpfr_init_set_str(r8924883, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8924884);
        mpfr_init(r8924885);
        mpfr_init(r8924886);
        mpfr_init(r8924887);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8924881, x, MPFR_RNDN);
        mpfr_mul(r8924882, r8924880, r8924881, MPFR_RNDN);
        ;
        mpfr_mul(r8924884, r8924881, r8924881, MPFR_RNDN);
        mpfr_mul(r8924885, r8924883, r8924884, MPFR_RNDN);
        mpfr_mul(r8924886, r8924885, r8924881, MPFR_RNDN);
        mpfr_add(r8924887, r8924882, r8924886, MPFR_RNDN);
        return mpfr_get_d(r8924887, MPFR_RNDN);
}

static mpfr_t r8924888, r8924889, r8924890, r8924891, r8924892, r8924893, r8924894, r8924895;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924888, "-1.5", 10, MPFR_RNDN);
        mpfr_init(r8924889);
        mpfr_init(r8924890);
        mpfr_init_set_str(r8924891, "2.5", 10, MPFR_RNDN);
        mpfr_init(r8924892);
        mpfr_init(r8924893);
        mpfr_init(r8924894);
        mpfr_init(r8924895);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8924889, x, MPFR_RNDN);
        mpfr_mul(r8924890, r8924888, r8924889, MPFR_RNDN);
        ;
        mpfr_mul(r8924892, r8924889, r8924889, MPFR_RNDN);
        mpfr_mul(r8924893, r8924891, r8924892, MPFR_RNDN);
        mpfr_mul(r8924894, r8924893, r8924889, MPFR_RNDN);
        mpfr_add(r8924895, r8924890, r8924894, MPFR_RNDN);
        return mpfr_get_d(r8924895, MPFR_RNDN);
}

