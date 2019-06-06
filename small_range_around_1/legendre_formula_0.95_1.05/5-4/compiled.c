#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "4";

double f_if(float x) {
        float r26948778 = 0.375;
        float r26948779 = -3.75;
        float r26948780 = x;
        float r26948781 = r26948780 * r26948780;
        float r26948782 = r26948779 * r26948781;
        float r26948783 = r26948778 + r26948782;
        float r26948784 = 4.375;
        float r26948785 = r26948781 * r26948780;
        float r26948786 = r26948785 * r26948780;
        float r26948787 = r26948784 * r26948786;
        float r26948788 = r26948783 + r26948787;
        return r26948788;
}

double f_id(double x) {
        double r26948789 = 0.375;
        double r26948790 = -3.75;
        double r26948791 = x;
        double r26948792 = r26948791 * r26948791;
        double r26948793 = r26948790 * r26948792;
        double r26948794 = r26948789 + r26948793;
        double r26948795 = 4.375;
        double r26948796 = r26948792 * r26948791;
        double r26948797 = r26948796 * r26948791;
        double r26948798 = r26948795 * r26948797;
        double r26948799 = r26948794 + r26948798;
        return r26948799;
}


double f_of(float x) {
        float r26948800 = 0.375;
        float r26948801 = x;
        float r26948802 = 4;
        float r26948803 = pow(r26948801, r26948802);
        float r26948804 = 4.375;
        float r26948805 = r26948803 * r26948804;
        float r26948806 = 3.75;
        float r26948807 = r26948806 * r26948801;
        float r26948808 = r26948807 * r26948801;
        float r26948809 = r26948805 - r26948808;
        float r26948810 = r26948809 * r26948809;
        float r26948811 = cbrt(r26948810);
        float r26948812 = r26948804 * r26948803;
        float r26948813 = 2;
        float r26948814 = pow(r26948801, r26948813);
        float r26948815 = r26948806 * r26948814;
        float r26948816 = r26948812 - r26948815;
        float r26948817 = cbrt(r26948816);
        float r26948818 = r26948811 * r26948817;
        float r26948819 = r26948800 + r26948818;
        return r26948819;
}

double f_od(double x) {
        double r26948820 = 0.375;
        double r26948821 = x;
        double r26948822 = 4;
        double r26948823 = pow(r26948821, r26948822);
        double r26948824 = 4.375;
        double r26948825 = r26948823 * r26948824;
        double r26948826 = 3.75;
        double r26948827 = r26948826 * r26948821;
        double r26948828 = r26948827 * r26948821;
        double r26948829 = r26948825 - r26948828;
        double r26948830 = r26948829 * r26948829;
        double r26948831 = cbrt(r26948830);
        double r26948832 = r26948824 * r26948823;
        double r26948833 = 2;
        double r26948834 = pow(r26948821, r26948833);
        double r26948835 = r26948826 * r26948834;
        double r26948836 = r26948832 - r26948835;
        double r26948837 = cbrt(r26948836);
        double r26948838 = r26948831 * r26948837;
        double r26948839 = r26948820 + r26948838;
        return r26948839;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948840, r26948841, r26948842, r26948843, r26948844, r26948845, r26948846, r26948847, r26948848, r26948849, r26948850;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948840, "0.375", 10, MPFR_RNDN);
        mpfr_init_set_str(r26948841, "-3.75", 10, MPFR_RNDN);
        mpfr_init(r26948842);
        mpfr_init(r26948843);
        mpfr_init(r26948844);
        mpfr_init(r26948845);
        mpfr_init_set_str(r26948846, "4.375", 10, MPFR_RNDN);
        mpfr_init(r26948847);
        mpfr_init(r26948848);
        mpfr_init(r26948849);
        mpfr_init(r26948850);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r26948842, x, MPFR_RNDN);
        mpfr_mul(r26948843, r26948842, r26948842, MPFR_RNDN);
        mpfr_mul(r26948844, r26948841, r26948843, MPFR_RNDN);
        mpfr_add(r26948845, r26948840, r26948844, MPFR_RNDN);
        ;
        mpfr_mul(r26948847, r26948843, r26948842, MPFR_RNDN);
        mpfr_mul(r26948848, r26948847, r26948842, MPFR_RNDN);
        mpfr_mul(r26948849, r26948846, r26948848, MPFR_RNDN);
        mpfr_add(r26948850, r26948845, r26948849, MPFR_RNDN);
        return mpfr_get_d(r26948850, MPFR_RNDN);
}

static mpfr_t r26948851, r26948852, r26948853, r26948854, r26948855, r26948856, r26948857, r26948858, r26948859, r26948860, r26948861, r26948862, r26948863, r26948864, r26948865, r26948866, r26948867, r26948868, r26948869, r26948870;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948851, "0.375", 10, MPFR_RNDN);
        mpfr_init(r26948852);
        mpfr_init_set_str(r26948853, "4", 10, MPFR_RNDN);
        mpfr_init(r26948854);
        mpfr_init_set_str(r26948855, "4.375", 10, MPFR_RNDN);
        mpfr_init(r26948856);
        mpfr_init_set_str(r26948857, "3.75", 10, MPFR_RNDN);
        mpfr_init(r26948858);
        mpfr_init(r26948859);
        mpfr_init(r26948860);
        mpfr_init(r26948861);
        mpfr_init(r26948862);
        mpfr_init(r26948863);
        mpfr_init_set_str(r26948864, "2", 10, MPFR_RNDN);
        mpfr_init(r26948865);
        mpfr_init(r26948866);
        mpfr_init(r26948867);
        mpfr_init(r26948868);
        mpfr_init(r26948869);
        mpfr_init(r26948870);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r26948852, x, MPFR_RNDN);
        ;
        mpfr_pow(r26948854, r26948852, r26948853, MPFR_RNDN);
        ;
        mpfr_mul(r26948856, r26948854, r26948855, MPFR_RNDN);
        ;
        mpfr_mul(r26948858, r26948857, r26948852, MPFR_RNDN);
        mpfr_mul(r26948859, r26948858, r26948852, MPFR_RNDN);
        mpfr_sub(r26948860, r26948856, r26948859, MPFR_RNDN);
        mpfr_mul(r26948861, r26948860, r26948860, MPFR_RNDN);
        mpfr_cbrt(r26948862, r26948861, MPFR_RNDN);
        mpfr_mul(r26948863, r26948855, r26948854, MPFR_RNDN);
        ;
        mpfr_pow(r26948865, r26948852, r26948864, MPFR_RNDN);
        mpfr_mul(r26948866, r26948857, r26948865, MPFR_RNDN);
        mpfr_sub(r26948867, r26948863, r26948866, MPFR_RNDN);
        mpfr_cbrt(r26948868, r26948867, MPFR_RNDN);
        mpfr_mul(r26948869, r26948862, r26948868, MPFR_RNDN);
        mpfr_add(r26948870, r26948851, r26948869, MPFR_RNDN);
        return mpfr_get_d(r26948870, MPFR_RNDN);
}

static mpfr_t r26948871, r26948872, r26948873, r26948874, r26948875, r26948876, r26948877, r26948878, r26948879, r26948880, r26948881, r26948882, r26948883, r26948884, r26948885, r26948886, r26948887, r26948888, r26948889, r26948890;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948871, "0.375", 10, MPFR_RNDN);
        mpfr_init(r26948872);
        mpfr_init_set_str(r26948873, "4", 10, MPFR_RNDN);
        mpfr_init(r26948874);
        mpfr_init_set_str(r26948875, "4.375", 10, MPFR_RNDN);
        mpfr_init(r26948876);
        mpfr_init_set_str(r26948877, "3.75", 10, MPFR_RNDN);
        mpfr_init(r26948878);
        mpfr_init(r26948879);
        mpfr_init(r26948880);
        mpfr_init(r26948881);
        mpfr_init(r26948882);
        mpfr_init(r26948883);
        mpfr_init_set_str(r26948884, "2", 10, MPFR_RNDN);
        mpfr_init(r26948885);
        mpfr_init(r26948886);
        mpfr_init(r26948887);
        mpfr_init(r26948888);
        mpfr_init(r26948889);
        mpfr_init(r26948890);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r26948872, x, MPFR_RNDN);
        ;
        mpfr_pow(r26948874, r26948872, r26948873, MPFR_RNDN);
        ;
        mpfr_mul(r26948876, r26948874, r26948875, MPFR_RNDN);
        ;
        mpfr_mul(r26948878, r26948877, r26948872, MPFR_RNDN);
        mpfr_mul(r26948879, r26948878, r26948872, MPFR_RNDN);
        mpfr_sub(r26948880, r26948876, r26948879, MPFR_RNDN);
        mpfr_mul(r26948881, r26948880, r26948880, MPFR_RNDN);
        mpfr_cbrt(r26948882, r26948881, MPFR_RNDN);
        mpfr_mul(r26948883, r26948875, r26948874, MPFR_RNDN);
        ;
        mpfr_pow(r26948885, r26948872, r26948884, MPFR_RNDN);
        mpfr_mul(r26948886, r26948877, r26948885, MPFR_RNDN);
        mpfr_sub(r26948887, r26948883, r26948886, MPFR_RNDN);
        mpfr_cbrt(r26948888, r26948887, MPFR_RNDN);
        mpfr_mul(r26948889, r26948882, r26948888, MPFR_RNDN);
        mpfr_add(r26948890, r26948871, r26948889, MPFR_RNDN);
        return mpfr_get_d(r26948890, MPFR_RNDN);
}

