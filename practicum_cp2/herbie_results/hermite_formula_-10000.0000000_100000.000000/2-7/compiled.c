#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r4210783 = -1680.0;
        float r4210784 = x;
        float r4210785 = r4210783 * r4210784;
        float r4210786 = 3360.0;
        float r4210787 = r4210784 * r4210784;
        float r4210788 = r4210787 * r4210784;
        float r4210789 = r4210786 * r4210788;
        float r4210790 = r4210785 + r4210789;
        float r4210791 = -1344.0;
        float r4210792 = r4210788 * r4210784;
        float r4210793 = r4210792 * r4210784;
        float r4210794 = r4210791 * r4210793;
        float r4210795 = r4210790 + r4210794;
        float r4210796 = 128.0;
        float r4210797 = r4210793 * r4210784;
        float r4210798 = r4210797 * r4210784;
        float r4210799 = r4210796 * r4210798;
        float r4210800 = r4210795 + r4210799;
        return r4210800;
}

double f_id(double x) {
        double r4210801 = -1680.0;
        double r4210802 = x;
        double r4210803 = r4210801 * r4210802;
        double r4210804 = 3360.0;
        double r4210805 = r4210802 * r4210802;
        double r4210806 = r4210805 * r4210802;
        double r4210807 = r4210804 * r4210806;
        double r4210808 = r4210803 + r4210807;
        double r4210809 = -1344.0;
        double r4210810 = r4210806 * r4210802;
        double r4210811 = r4210810 * r4210802;
        double r4210812 = r4210809 * r4210811;
        double r4210813 = r4210808 + r4210812;
        double r4210814 = 128.0;
        double r4210815 = r4210811 * r4210802;
        double r4210816 = r4210815 * r4210802;
        double r4210817 = r4210814 * r4210816;
        double r4210818 = r4210813 + r4210817;
        return r4210818;
}


double f_of(float x) {
        float r4210819 = x;
        float r4210820 = r4210819 * r4210819;
        float r4210821 = r4210820 * r4210820;
        float r4210822 = 128.0;
        float r4210823 = r4210822 * r4210819;
        float r4210824 = r4210820 * r4210823;
        float r4210825 = -1344.0;
        float r4210826 = r4210819 * r4210825;
        float r4210827 = r4210824 + r4210826;
        float r4210828 = r4210821 * r4210827;
        float r4210829 = -1680.0;
        float r4210830 = r4210829 * r4210819;
        float r4210831 = 3360.0;
        float r4210832 = r4210831 * r4210819;
        float r4210833 = r4210820 * r4210832;
        float r4210834 = r4210830 + r4210833;
        float r4210835 = r4210828 + r4210834;
        return r4210835;
}

double f_od(double x) {
        double r4210836 = x;
        double r4210837 = r4210836 * r4210836;
        double r4210838 = r4210837 * r4210837;
        double r4210839 = 128.0;
        double r4210840 = r4210839 * r4210836;
        double r4210841 = r4210837 * r4210840;
        double r4210842 = -1344.0;
        double r4210843 = r4210836 * r4210842;
        double r4210844 = r4210841 + r4210843;
        double r4210845 = r4210838 * r4210844;
        double r4210846 = -1680.0;
        double r4210847 = r4210846 * r4210836;
        double r4210848 = 3360.0;
        double r4210849 = r4210848 * r4210836;
        double r4210850 = r4210837 * r4210849;
        double r4210851 = r4210847 + r4210850;
        double r4210852 = r4210845 + r4210851;
        return r4210852;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4210853, r4210854, r4210855, r4210856, r4210857, r4210858, r4210859, r4210860, r4210861, r4210862, r4210863, r4210864, r4210865, r4210866, r4210867, r4210868, r4210869, r4210870;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r4210853, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r4210854);
        mpfr_init(r4210855);
        mpfr_init_set_str(r4210856, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r4210857);
        mpfr_init(r4210858);
        mpfr_init(r4210859);
        mpfr_init(r4210860);
        mpfr_init_set_str(r4210861, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r4210862);
        mpfr_init(r4210863);
        mpfr_init(r4210864);
        mpfr_init(r4210865);
        mpfr_init_set_str(r4210866, "128.0", 10, MPFR_RNDN);
        mpfr_init(r4210867);
        mpfr_init(r4210868);
        mpfr_init(r4210869);
        mpfr_init(r4210870);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4210854, x, MPFR_RNDN);
        mpfr_mul(r4210855, r4210853, r4210854, MPFR_RNDN);
        ;
        mpfr_mul(r4210857, r4210854, r4210854, MPFR_RNDN);
        mpfr_mul(r4210858, r4210857, r4210854, MPFR_RNDN);
        mpfr_mul(r4210859, r4210856, r4210858, MPFR_RNDN);
        mpfr_add(r4210860, r4210855, r4210859, MPFR_RNDN);
        ;
        mpfr_mul(r4210862, r4210858, r4210854, MPFR_RNDN);
        mpfr_mul(r4210863, r4210862, r4210854, MPFR_RNDN);
        mpfr_mul(r4210864, r4210861, r4210863, MPFR_RNDN);
        mpfr_add(r4210865, r4210860, r4210864, MPFR_RNDN);
        ;
        mpfr_mul(r4210867, r4210863, r4210854, MPFR_RNDN);
        mpfr_mul(r4210868, r4210867, r4210854, MPFR_RNDN);
        mpfr_mul(r4210869, r4210866, r4210868, MPFR_RNDN);
        mpfr_add(r4210870, r4210865, r4210869, MPFR_RNDN);
        return mpfr_get_d(r4210870, MPFR_RNDN);
}

static mpfr_t r4210871, r4210872, r4210873, r4210874, r4210875, r4210876, r4210877, r4210878, r4210879, r4210880, r4210881, r4210882, r4210883, r4210884, r4210885, r4210886, r4210887;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r4210871);
        mpfr_init(r4210872);
        mpfr_init(r4210873);
        mpfr_init_set_str(r4210874, "128.0", 10, MPFR_RNDN);
        mpfr_init(r4210875);
        mpfr_init(r4210876);
        mpfr_init_set_str(r4210877, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r4210878);
        mpfr_init(r4210879);
        mpfr_init(r4210880);
        mpfr_init_set_str(r4210881, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r4210882);
        mpfr_init_set_str(r4210883, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r4210884);
        mpfr_init(r4210885);
        mpfr_init(r4210886);
        mpfr_init(r4210887);
}

double f_fm(double x) {
        mpfr_set_d(r4210871, x, MPFR_RNDN);
        mpfr_mul(r4210872, r4210871, r4210871, MPFR_RNDN);
        mpfr_mul(r4210873, r4210872, r4210872, MPFR_RNDN);
        ;
        mpfr_mul(r4210875, r4210874, r4210871, MPFR_RNDN);
        mpfr_mul(r4210876, r4210872, r4210875, MPFR_RNDN);
        ;
        mpfr_mul(r4210878, r4210871, r4210877, MPFR_RNDN);
        mpfr_add(r4210879, r4210876, r4210878, MPFR_RNDN);
        mpfr_mul(r4210880, r4210873, r4210879, MPFR_RNDN);
        ;
        mpfr_mul(r4210882, r4210881, r4210871, MPFR_RNDN);
        ;
        mpfr_mul(r4210884, r4210883, r4210871, MPFR_RNDN);
        mpfr_mul(r4210885, r4210872, r4210884, MPFR_RNDN);
        mpfr_add(r4210886, r4210882, r4210885, MPFR_RNDN);
        mpfr_add(r4210887, r4210880, r4210886, MPFR_RNDN);
        return mpfr_get_d(r4210887, MPFR_RNDN);
}

static mpfr_t r4210888, r4210889, r4210890, r4210891, r4210892, r4210893, r4210894, r4210895, r4210896, r4210897, r4210898, r4210899, r4210900, r4210901, r4210902, r4210903, r4210904;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r4210888);
        mpfr_init(r4210889);
        mpfr_init(r4210890);
        mpfr_init_set_str(r4210891, "128.0", 10, MPFR_RNDN);
        mpfr_init(r4210892);
        mpfr_init(r4210893);
        mpfr_init_set_str(r4210894, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r4210895);
        mpfr_init(r4210896);
        mpfr_init(r4210897);
        mpfr_init_set_str(r4210898, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r4210899);
        mpfr_init_set_str(r4210900, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r4210901);
        mpfr_init(r4210902);
        mpfr_init(r4210903);
        mpfr_init(r4210904);
}

double f_dm(double x) {
        mpfr_set_d(r4210888, x, MPFR_RNDN);
        mpfr_mul(r4210889, r4210888, r4210888, MPFR_RNDN);
        mpfr_mul(r4210890, r4210889, r4210889, MPFR_RNDN);
        ;
        mpfr_mul(r4210892, r4210891, r4210888, MPFR_RNDN);
        mpfr_mul(r4210893, r4210889, r4210892, MPFR_RNDN);
        ;
        mpfr_mul(r4210895, r4210888, r4210894, MPFR_RNDN);
        mpfr_add(r4210896, r4210893, r4210895, MPFR_RNDN);
        mpfr_mul(r4210897, r4210890, r4210896, MPFR_RNDN);
        ;
        mpfr_mul(r4210899, r4210898, r4210888, MPFR_RNDN);
        ;
        mpfr_mul(r4210901, r4210900, r4210888, MPFR_RNDN);
        mpfr_mul(r4210902, r4210889, r4210901, MPFR_RNDN);
        mpfr_add(r4210903, r4210899, r4210902, MPFR_RNDN);
        mpfr_add(r4210904, r4210897, r4210903, MPFR_RNDN);
        return mpfr_get_d(r4210904, MPFR_RNDN);
}

