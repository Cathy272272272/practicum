#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "1";

double f_if(float x) {
        float r10924837 = 1.0;
        float r10924838 = -1.0;
        float r10924839 = x;
        float r10924840 = r10924838 * r10924839;
        float r10924841 = r10924837 + r10924840;
        return r10924841;
}

double f_id(double x) {
        double r10924842 = 1.0;
        double r10924843 = -1.0;
        double r10924844 = x;
        double r10924845 = r10924843 * r10924844;
        double r10924846 = r10924842 + r10924845;
        return r10924846;
}


double f_of(float x) {
        float r10924847 = 1.0;
        float r10924848 = -1.0;
        float r10924849 = x;
        float r10924850 = r10924848 * r10924849;
        float r10924851 = r10924847 + r10924850;
        return r10924851;
}

double f_od(double x) {
        double r10924852 = 1.0;
        double r10924853 = -1.0;
        double r10924854 = x;
        double r10924855 = r10924853 * r10924854;
        double r10924856 = r10924852 + r10924855;
        return r10924856;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10924857, r10924858, r10924859, r10924860, r10924861;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10924857, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924858, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10924859);
        mpfr_init(r10924860);
        mpfr_init(r10924861);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10924859, x, MPFR_RNDN);
        mpfr_mul(r10924860, r10924858, r10924859, MPFR_RNDN);
        mpfr_add(r10924861, r10924857, r10924860, MPFR_RNDN);
        return mpfr_get_d(r10924861, MPFR_RNDN);
}

static mpfr_t r10924862, r10924863, r10924864, r10924865, r10924866;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10924862, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924863, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10924864);
        mpfr_init(r10924865);
        mpfr_init(r10924866);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10924864, x, MPFR_RNDN);
        mpfr_mul(r10924865, r10924863, r10924864, MPFR_RNDN);
        mpfr_add(r10924866, r10924862, r10924865, MPFR_RNDN);
        return mpfr_get_d(r10924866, MPFR_RNDN);
}

static mpfr_t r10924867, r10924868, r10924869, r10924870, r10924871;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10924867, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10924868, "-1.0", 10, MPFR_RNDN);
        mpfr_init(r10924869);
        mpfr_init(r10924870);
        mpfr_init(r10924871);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10924869, x, MPFR_RNDN);
        mpfr_mul(r10924870, r10924868, r10924869, MPFR_RNDN);
        mpfr_add(r10924871, r10924867, r10924870, MPFR_RNDN);
        return mpfr_get_d(r10924871, MPFR_RNDN);
}

