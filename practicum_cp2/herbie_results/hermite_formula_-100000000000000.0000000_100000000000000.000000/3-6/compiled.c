#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r9959786 = -120.0;
        float r9959787 = 720.0;
        float r9959788 = x;
        float r9959789 = r9959788 * r9959788;
        float r9959790 = r9959787 * r9959789;
        float r9959791 = r9959786 + r9959790;
        float r9959792 = -480.0;
        float r9959793 = r9959789 * r9959788;
        float r9959794 = r9959793 * r9959788;
        float r9959795 = r9959792 * r9959794;
        float r9959796 = r9959791 + r9959795;
        float r9959797 = 64.0;
        float r9959798 = r9959794 * r9959788;
        float r9959799 = r9959798 * r9959788;
        float r9959800 = r9959797 * r9959799;
        float r9959801 = r9959796 + r9959800;
        return r9959801;
}

double f_id(double x) {
        double r9959802 = -120.0;
        double r9959803 = 720.0;
        double r9959804 = x;
        double r9959805 = r9959804 * r9959804;
        double r9959806 = r9959803 * r9959805;
        double r9959807 = r9959802 + r9959806;
        double r9959808 = -480.0;
        double r9959809 = r9959805 * r9959804;
        double r9959810 = r9959809 * r9959804;
        double r9959811 = r9959808 * r9959810;
        double r9959812 = r9959807 + r9959811;
        double r9959813 = 64.0;
        double r9959814 = r9959810 * r9959804;
        double r9959815 = r9959814 * r9959804;
        double r9959816 = r9959813 * r9959815;
        double r9959817 = r9959812 + r9959816;
        return r9959817;
}


double f_of(float x) {
        float r9959818 = x;
        float r9959819 = 720.0;
        float r9959820 = r9959818 * r9959819;
        float r9959821 = r9959820 * r9959818;
        float r9959822 = -120.0;
        float r9959823 = r9959821 + r9959822;
        float r9959824 = 2;
        float r9959825 = r9959824 + r9959824;
        float r9959826 = pow(r9959818, r9959825);
        float r9959827 = -480.0;
        float r9959828 = r9959818 * r9959818;
        float r9959829 = 64.0;
        float r9959830 = r9959828 * r9959829;
        float r9959831 = r9959827 + r9959830;
        float r9959832 = r9959826 * r9959831;
        float r9959833 = r9959823 + r9959832;
        return r9959833;
}

double f_od(double x) {
        double r9959834 = x;
        double r9959835 = 720.0;
        double r9959836 = r9959834 * r9959835;
        double r9959837 = r9959836 * r9959834;
        double r9959838 = -120.0;
        double r9959839 = r9959837 + r9959838;
        double r9959840 = 2;
        double r9959841 = r9959840 + r9959840;
        double r9959842 = pow(r9959834, r9959841);
        double r9959843 = -480.0;
        double r9959844 = r9959834 * r9959834;
        double r9959845 = 64.0;
        double r9959846 = r9959844 * r9959845;
        double r9959847 = r9959843 + r9959846;
        double r9959848 = r9959842 * r9959847;
        double r9959849 = r9959839 + r9959848;
        return r9959849;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9959850, r9959851, r9959852, r9959853, r9959854, r9959855, r9959856, r9959857, r9959858, r9959859, r9959860, r9959861, r9959862, r9959863, r9959864, r9959865;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9959850, "-120.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9959851, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9959852);
        mpfr_init(r9959853);
        mpfr_init(r9959854);
        mpfr_init(r9959855);
        mpfr_init_set_str(r9959856, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9959857);
        mpfr_init(r9959858);
        mpfr_init(r9959859);
        mpfr_init(r9959860);
        mpfr_init_set_str(r9959861, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9959862);
        mpfr_init(r9959863);
        mpfr_init(r9959864);
        mpfr_init(r9959865);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9959852, x, MPFR_RNDN);
        mpfr_mul(r9959853, r9959852, r9959852, MPFR_RNDN);
        mpfr_mul(r9959854, r9959851, r9959853, MPFR_RNDN);
        mpfr_add(r9959855, r9959850, r9959854, MPFR_RNDN);
        ;
        mpfr_mul(r9959857, r9959853, r9959852, MPFR_RNDN);
        mpfr_mul(r9959858, r9959857, r9959852, MPFR_RNDN);
        mpfr_mul(r9959859, r9959856, r9959858, MPFR_RNDN);
        mpfr_add(r9959860, r9959855, r9959859, MPFR_RNDN);
        ;
        mpfr_mul(r9959862, r9959858, r9959852, MPFR_RNDN);
        mpfr_mul(r9959863, r9959862, r9959852, MPFR_RNDN);
        mpfr_mul(r9959864, r9959861, r9959863, MPFR_RNDN);
        mpfr_add(r9959865, r9959860, r9959864, MPFR_RNDN);
        return mpfr_get_d(r9959865, MPFR_RNDN);
}

static mpfr_t r9959866, r9959867, r9959868, r9959869, r9959870, r9959871, r9959872, r9959873, r9959874, r9959875, r9959876, r9959877, r9959878, r9959879, r9959880, r9959881;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9959866);
        mpfr_init_set_str(r9959867, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9959868);
        mpfr_init(r9959869);
        mpfr_init_set_str(r9959870, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r9959871);
        mpfr_init_set_str(r9959872, "2", 10, MPFR_RNDN);
        mpfr_init(r9959873);
        mpfr_init(r9959874);
        mpfr_init_set_str(r9959875, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9959876);
        mpfr_init_set_str(r9959877, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9959878);
        mpfr_init(r9959879);
        mpfr_init(r9959880);
        mpfr_init(r9959881);
}

double f_fm(double x) {
        mpfr_set_d(r9959866, x, MPFR_RNDN);
        ;
        mpfr_mul(r9959868, r9959866, r9959867, MPFR_RNDN);
        mpfr_mul(r9959869, r9959868, r9959866, MPFR_RNDN);
        ;
        mpfr_add(r9959871, r9959869, r9959870, MPFR_RNDN);
        ;
        mpfr_add(r9959873, r9959872, r9959872, MPFR_RNDN);
        mpfr_pow(r9959874, r9959866, r9959873, MPFR_RNDN);
        ;
        mpfr_mul(r9959876, r9959866, r9959866, MPFR_RNDN);
        ;
        mpfr_mul(r9959878, r9959876, r9959877, MPFR_RNDN);
        mpfr_add(r9959879, r9959875, r9959878, MPFR_RNDN);
        mpfr_mul(r9959880, r9959874, r9959879, MPFR_RNDN);
        mpfr_add(r9959881, r9959871, r9959880, MPFR_RNDN);
        return mpfr_get_d(r9959881, MPFR_RNDN);
}

static mpfr_t r9959882, r9959883, r9959884, r9959885, r9959886, r9959887, r9959888, r9959889, r9959890, r9959891, r9959892, r9959893, r9959894, r9959895, r9959896, r9959897;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r9959882);
        mpfr_init_set_str(r9959883, "720.0", 10, MPFR_RNDN);
        mpfr_init(r9959884);
        mpfr_init(r9959885);
        mpfr_init_set_str(r9959886, "-120.0", 10, MPFR_RNDN);
        mpfr_init(r9959887);
        mpfr_init_set_str(r9959888, "2", 10, MPFR_RNDN);
        mpfr_init(r9959889);
        mpfr_init(r9959890);
        mpfr_init_set_str(r9959891, "-480.0", 10, MPFR_RNDN);
        mpfr_init(r9959892);
        mpfr_init_set_str(r9959893, "64.0", 10, MPFR_RNDN);
        mpfr_init(r9959894);
        mpfr_init(r9959895);
        mpfr_init(r9959896);
        mpfr_init(r9959897);
}

double f_dm(double x) {
        mpfr_set_d(r9959882, x, MPFR_RNDN);
        ;
        mpfr_mul(r9959884, r9959882, r9959883, MPFR_RNDN);
        mpfr_mul(r9959885, r9959884, r9959882, MPFR_RNDN);
        ;
        mpfr_add(r9959887, r9959885, r9959886, MPFR_RNDN);
        ;
        mpfr_add(r9959889, r9959888, r9959888, MPFR_RNDN);
        mpfr_pow(r9959890, r9959882, r9959889, MPFR_RNDN);
        ;
        mpfr_mul(r9959892, r9959882, r9959882, MPFR_RNDN);
        ;
        mpfr_mul(r9959894, r9959892, r9959893, MPFR_RNDN);
        mpfr_add(r9959895, r9959891, r9959894, MPFR_RNDN);
        mpfr_mul(r9959896, r9959890, r9959895, MPFR_RNDN);
        mpfr_add(r9959897, r9959887, r9959896, MPFR_RNDN);
        return mpfr_get_d(r9959897, MPFR_RNDN);
}

