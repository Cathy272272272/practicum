#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r60479784 = 12.0;
        float r60479785 = -48.0;
        float r60479786 = x;
        float r60479787 = r60479786 * r60479786;
        float r60479788 = r60479785 * r60479787;
        float r60479789 = r60479784 + r60479788;
        float r60479790 = 16.0;
        float r60479791 = r60479787 * r60479786;
        float r60479792 = r60479791 * r60479786;
        float r60479793 = r60479790 * r60479792;
        float r60479794 = r60479789 + r60479793;
        return r60479794;
}

double f_id(double x) {
        double r60479795 = 12.0;
        double r60479796 = -48.0;
        double r60479797 = x;
        double r60479798 = r60479797 * r60479797;
        double r60479799 = r60479796 * r60479798;
        double r60479800 = r60479795 + r60479799;
        double r60479801 = 16.0;
        double r60479802 = r60479798 * r60479797;
        double r60479803 = r60479802 * r60479797;
        double r60479804 = r60479801 * r60479803;
        double r60479805 = r60479800 + r60479804;
        return r60479805;
}


double f_of(float x) {
        float r60479806 = 12.0;
        float r60479807 = exp(r60479806);
        float r60479808 = -48.0;
        float r60479809 = exp(r60479808);
        float r60479810 = x;
        float r60479811 = r60479810 * r60479810;
        float r60479812 = pow(r60479809, r60479811);
        float r60479813 = r60479807 * r60479812;
        float r60479814 = 3;
        float r60479815 = pow(r60479813, r60479814);
        float r60479816 = cbrt(r60479815);
        float r60479817 = 16.0;
        float r60479818 = fabs(r60479811);
        float r60479819 = r60479818 * r60479818;
        float r60479820 = r60479817 * r60479819;
        float r60479821 = exp(r60479820);
        float r60479822 = r60479816 * r60479821;
        float r60479823 = log(r60479822);
        return r60479823;
}

double f_od(double x) {
        double r60479824 = 12.0;
        double r60479825 = exp(r60479824);
        double r60479826 = -48.0;
        double r60479827 = exp(r60479826);
        double r60479828 = x;
        double r60479829 = r60479828 * r60479828;
        double r60479830 = pow(r60479827, r60479829);
        double r60479831 = r60479825 * r60479830;
        double r60479832 = 3;
        double r60479833 = pow(r60479831, r60479832);
        double r60479834 = cbrt(r60479833);
        double r60479835 = 16.0;
        double r60479836 = fabs(r60479829);
        double r60479837 = r60479836 * r60479836;
        double r60479838 = r60479835 * r60479837;
        double r60479839 = exp(r60479838);
        double r60479840 = r60479834 * r60479839;
        double r60479841 = log(r60479840);
        return r60479841;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r60479842, r60479843, r60479844, r60479845, r60479846, r60479847, r60479848, r60479849, r60479850, r60479851, r60479852;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479842, "12.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r60479843, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r60479844);
        mpfr_init(r60479845);
        mpfr_init(r60479846);
        mpfr_init(r60479847);
        mpfr_init_set_str(r60479848, "16.0", 10, MPFR_RNDN);
        mpfr_init(r60479849);
        mpfr_init(r60479850);
        mpfr_init(r60479851);
        mpfr_init(r60479852);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r60479844, x, MPFR_RNDN);
        mpfr_mul(r60479845, r60479844, r60479844, MPFR_RNDN);
        mpfr_mul(r60479846, r60479843, r60479845, MPFR_RNDN);
        mpfr_add(r60479847, r60479842, r60479846, MPFR_RNDN);
        ;
        mpfr_mul(r60479849, r60479845, r60479844, MPFR_RNDN);
        mpfr_mul(r60479850, r60479849, r60479844, MPFR_RNDN);
        mpfr_mul(r60479851, r60479848, r60479850, MPFR_RNDN);
        mpfr_add(r60479852, r60479847, r60479851, MPFR_RNDN);
        return mpfr_get_d(r60479852, MPFR_RNDN);
}

static mpfr_t r60479853, r60479854, r60479855, r60479856, r60479857, r60479858, r60479859, r60479860, r60479861, r60479862, r60479863, r60479864, r60479865, r60479866, r60479867, r60479868, r60479869, r60479870;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479853, "12.0", 10, MPFR_RNDN);
        mpfr_init(r60479854);
        mpfr_init_set_str(r60479855, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r60479856);
        mpfr_init(r60479857);
        mpfr_init(r60479858);
        mpfr_init(r60479859);
        mpfr_init(r60479860);
        mpfr_init_set_str(r60479861, "3", 10, MPFR_RNDN);
        mpfr_init(r60479862);
        mpfr_init(r60479863);
        mpfr_init_set_str(r60479864, "16.0", 10, MPFR_RNDN);
        mpfr_init(r60479865);
        mpfr_init(r60479866);
        mpfr_init(r60479867);
        mpfr_init(r60479868);
        mpfr_init(r60479869);
        mpfr_init(r60479870);
}

double f_fm(double x) {
        ;
        mpfr_exp(r60479854, r60479853, MPFR_RNDN);
        ;
        mpfr_exp(r60479856, r60479855, MPFR_RNDN);
        mpfr_set_d(r60479857, x, MPFR_RNDN);
        mpfr_mul(r60479858, r60479857, r60479857, MPFR_RNDN);
        mpfr_pow(r60479859, r60479856, r60479858, MPFR_RNDN);
        mpfr_mul(r60479860, r60479854, r60479859, MPFR_RNDN);
        ;
        mpfr_pow(r60479862, r60479860, r60479861, MPFR_RNDN);
        mpfr_cbrt(r60479863, r60479862, MPFR_RNDN);
        ;
        mpfr_abs(r60479865, r60479858, MPFR_RNDN);
        mpfr_mul(r60479866, r60479865, r60479865, MPFR_RNDN);
        mpfr_mul(r60479867, r60479864, r60479866, MPFR_RNDN);
        mpfr_exp(r60479868, r60479867, MPFR_RNDN);
        mpfr_mul(r60479869, r60479863, r60479868, MPFR_RNDN);
        mpfr_log(r60479870, r60479869, MPFR_RNDN);
        return mpfr_get_d(r60479870, MPFR_RNDN);
}

static mpfr_t r60479871, r60479872, r60479873, r60479874, r60479875, r60479876, r60479877, r60479878, r60479879, r60479880, r60479881, r60479882, r60479883, r60479884, r60479885, r60479886, r60479887, r60479888;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r60479871, "12.0", 10, MPFR_RNDN);
        mpfr_init(r60479872);
        mpfr_init_set_str(r60479873, "-48.0", 10, MPFR_RNDN);
        mpfr_init(r60479874);
        mpfr_init(r60479875);
        mpfr_init(r60479876);
        mpfr_init(r60479877);
        mpfr_init(r60479878);
        mpfr_init_set_str(r60479879, "3", 10, MPFR_RNDN);
        mpfr_init(r60479880);
        mpfr_init(r60479881);
        mpfr_init_set_str(r60479882, "16.0", 10, MPFR_RNDN);
        mpfr_init(r60479883);
        mpfr_init(r60479884);
        mpfr_init(r60479885);
        mpfr_init(r60479886);
        mpfr_init(r60479887);
        mpfr_init(r60479888);
}

double f_dm(double x) {
        ;
        mpfr_exp(r60479872, r60479871, MPFR_RNDN);
        ;
        mpfr_exp(r60479874, r60479873, MPFR_RNDN);
        mpfr_set_d(r60479875, x, MPFR_RNDN);
        mpfr_mul(r60479876, r60479875, r60479875, MPFR_RNDN);
        mpfr_pow(r60479877, r60479874, r60479876, MPFR_RNDN);
        mpfr_mul(r60479878, r60479872, r60479877, MPFR_RNDN);
        ;
        mpfr_pow(r60479880, r60479878, r60479879, MPFR_RNDN);
        mpfr_cbrt(r60479881, r60479880, MPFR_RNDN);
        ;
        mpfr_abs(r60479883, r60479876, MPFR_RNDN);
        mpfr_mul(r60479884, r60479883, r60479883, MPFR_RNDN);
        mpfr_mul(r60479885, r60479882, r60479884, MPFR_RNDN);
        mpfr_exp(r60479886, r60479885, MPFR_RNDN);
        mpfr_mul(r60479887, r60479881, r60479886, MPFR_RNDN);
        mpfr_log(r60479888, r60479887, MPFR_RNDN);
        return mpfr_get_d(r60479888, MPFR_RNDN);
}

