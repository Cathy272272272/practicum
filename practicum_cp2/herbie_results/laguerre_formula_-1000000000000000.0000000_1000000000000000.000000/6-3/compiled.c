#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10198813 = 1.0;
        float r10198814 = -3.0;
        float r10198815 = x;
        float r10198816 = r10198814 * r10198815;
        float r10198817 = r10198813 + r10198816;
        float r10198818 = 1.5;
        float r10198819 = r10198815 * r10198815;
        float r10198820 = r10198818 * r10198819;
        float r10198821 = r10198817 + r10198820;
        float r10198822 = -0.166667;
        float r10198823 = r10198819 * r10198815;
        float r10198824 = r10198822 * r10198823;
        float r10198825 = r10198821 + r10198824;
        return r10198825;
}

double f_id(double x) {
        double r10198826 = 1.0;
        double r10198827 = -3.0;
        double r10198828 = x;
        double r10198829 = r10198827 * r10198828;
        double r10198830 = r10198826 + r10198829;
        double r10198831 = 1.5;
        double r10198832 = r10198828 * r10198828;
        double r10198833 = r10198831 * r10198832;
        double r10198834 = r10198830 + r10198833;
        double r10198835 = -0.166667;
        double r10198836 = r10198832 * r10198828;
        double r10198837 = r10198835 * r10198836;
        double r10198838 = r10198834 + r10198837;
        return r10198838;
}


double f_of(float x) {
        float r10198839 = 1.0;
        float r10198840 = -3.0;
        float r10198841 = x;
        float r10198842 = r10198840 * r10198841;
        float r10198843 = r10198839 + r10198842;
        float r10198844 = 1.5;
        float r10198845 = r10198841 * r10198841;
        float r10198846 = r10198844 * r10198845;
        float r10198847 = r10198843 + r10198846;
        float r10198848 = -0.166667;
        float r10198849 = r10198845 * r10198841;
        float r10198850 = r10198848 * r10198849;
        float r10198851 = r10198847 + r10198850;
        return r10198851;
}

double f_od(double x) {
        double r10198852 = 1.0;
        double r10198853 = -3.0;
        double r10198854 = x;
        double r10198855 = r10198853 * r10198854;
        double r10198856 = r10198852 + r10198855;
        double r10198857 = 1.5;
        double r10198858 = r10198854 * r10198854;
        double r10198859 = r10198857 * r10198858;
        double r10198860 = r10198856 + r10198859;
        double r10198861 = -0.166667;
        double r10198862 = r10198858 * r10198854;
        double r10198863 = r10198861 * r10198862;
        double r10198864 = r10198860 + r10198863;
        return r10198864;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10198865, r10198866, r10198867, r10198868, r10198869, r10198870, r10198871, r10198872, r10198873, r10198874, r10198875, r10198876, r10198877;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198865, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198866, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10198867);
        mpfr_init(r10198868);
        mpfr_init(r10198869);
        mpfr_init_set_str(r10198870, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10198871);
        mpfr_init(r10198872);
        mpfr_init(r10198873);
        mpfr_init_set_str(r10198874, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10198875);
        mpfr_init(r10198876);
        mpfr_init(r10198877);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10198867, x, MPFR_RNDN);
        mpfr_mul(r10198868, r10198866, r10198867, MPFR_RNDN);
        mpfr_add(r10198869, r10198865, r10198868, MPFR_RNDN);
        ;
        mpfr_mul(r10198871, r10198867, r10198867, MPFR_RNDN);
        mpfr_mul(r10198872, r10198870, r10198871, MPFR_RNDN);
        mpfr_add(r10198873, r10198869, r10198872, MPFR_RNDN);
        ;
        mpfr_mul(r10198875, r10198871, r10198867, MPFR_RNDN);
        mpfr_mul(r10198876, r10198874, r10198875, MPFR_RNDN);
        mpfr_add(r10198877, r10198873, r10198876, MPFR_RNDN);
        return mpfr_get_d(r10198877, MPFR_RNDN);
}

static mpfr_t r10198878, r10198879, r10198880, r10198881, r10198882, r10198883, r10198884, r10198885, r10198886, r10198887, r10198888, r10198889, r10198890;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198878, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198879, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10198880);
        mpfr_init(r10198881);
        mpfr_init(r10198882);
        mpfr_init_set_str(r10198883, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10198884);
        mpfr_init(r10198885);
        mpfr_init(r10198886);
        mpfr_init_set_str(r10198887, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10198888);
        mpfr_init(r10198889);
        mpfr_init(r10198890);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10198880, x, MPFR_RNDN);
        mpfr_mul(r10198881, r10198879, r10198880, MPFR_RNDN);
        mpfr_add(r10198882, r10198878, r10198881, MPFR_RNDN);
        ;
        mpfr_mul(r10198884, r10198880, r10198880, MPFR_RNDN);
        mpfr_mul(r10198885, r10198883, r10198884, MPFR_RNDN);
        mpfr_add(r10198886, r10198882, r10198885, MPFR_RNDN);
        ;
        mpfr_mul(r10198888, r10198884, r10198880, MPFR_RNDN);
        mpfr_mul(r10198889, r10198887, r10198888, MPFR_RNDN);
        mpfr_add(r10198890, r10198886, r10198889, MPFR_RNDN);
        return mpfr_get_d(r10198890, MPFR_RNDN);
}

static mpfr_t r10198891, r10198892, r10198893, r10198894, r10198895, r10198896, r10198897, r10198898, r10198899, r10198900, r10198901, r10198902, r10198903;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10198891, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10198892, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10198893);
        mpfr_init(r10198894);
        mpfr_init(r10198895);
        mpfr_init_set_str(r10198896, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10198897);
        mpfr_init(r10198898);
        mpfr_init(r10198899);
        mpfr_init_set_str(r10198900, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10198901);
        mpfr_init(r10198902);
        mpfr_init(r10198903);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10198893, x, MPFR_RNDN);
        mpfr_mul(r10198894, r10198892, r10198893, MPFR_RNDN);
        mpfr_add(r10198895, r10198891, r10198894, MPFR_RNDN);
        ;
        mpfr_mul(r10198897, r10198893, r10198893, MPFR_RNDN);
        mpfr_mul(r10198898, r10198896, r10198897, MPFR_RNDN);
        mpfr_add(r10198899, r10198895, r10198898, MPFR_RNDN);
        ;
        mpfr_mul(r10198901, r10198897, r10198893, MPFR_RNDN);
        mpfr_mul(r10198902, r10198900, r10198901, MPFR_RNDN);
        mpfr_add(r10198903, r10198899, r10198902, MPFR_RNDN);
        return mpfr_get_d(r10198903, MPFR_RNDN);
}

