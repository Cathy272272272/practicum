#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r4111759 = 30240.0;
        float r4111760 = x;
        float r4111761 = r4111759 * r4111760;
        float r4111762 = -80640.0;
        float r4111763 = r4111760 * r4111760;
        float r4111764 = r4111763 * r4111760;
        float r4111765 = r4111762 * r4111764;
        float r4111766 = r4111761 + r4111765;
        float r4111767 = 48384.0;
        float r4111768 = r4111764 * r4111760;
        float r4111769 = r4111768 * r4111760;
        float r4111770 = r4111767 * r4111769;
        float r4111771 = r4111766 + r4111770;
        float r4111772 = -9216.0;
        float r4111773 = r4111769 * r4111760;
        float r4111774 = r4111773 * r4111760;
        float r4111775 = r4111772 * r4111774;
        float r4111776 = r4111771 + r4111775;
        float r4111777 = 512.0;
        float r4111778 = r4111774 * r4111760;
        float r4111779 = r4111778 * r4111760;
        float r4111780 = r4111777 * r4111779;
        float r4111781 = r4111776 + r4111780;
        return r4111781;
}

double f_id(double x) {
        double r4111782 = 30240.0;
        double r4111783 = x;
        double r4111784 = r4111782 * r4111783;
        double r4111785 = -80640.0;
        double r4111786 = r4111783 * r4111783;
        double r4111787 = r4111786 * r4111783;
        double r4111788 = r4111785 * r4111787;
        double r4111789 = r4111784 + r4111788;
        double r4111790 = 48384.0;
        double r4111791 = r4111787 * r4111783;
        double r4111792 = r4111791 * r4111783;
        double r4111793 = r4111790 * r4111792;
        double r4111794 = r4111789 + r4111793;
        double r4111795 = -9216.0;
        double r4111796 = r4111792 * r4111783;
        double r4111797 = r4111796 * r4111783;
        double r4111798 = r4111795 * r4111797;
        double r4111799 = r4111794 + r4111798;
        double r4111800 = 512.0;
        double r4111801 = r4111797 * r4111783;
        double r4111802 = r4111801 * r4111783;
        double r4111803 = r4111800 * r4111802;
        double r4111804 = r4111799 + r4111803;
        return r4111804;
}


double f_of(float x) {
        float r4111805 = 30240.0;
        float r4111806 = -80640.0;
        float r4111807 = x;
        float r4111808 = r4111806 * r4111807;
        float r4111809 = r4111808 * r4111807;
        float r4111810 = r4111805 + r4111809;
        float r4111811 = r4111810 * r4111807;
        float r4111812 = r4111807 * r4111807;
        float r4111813 = r4111812 * r4111812;
        float r4111814 = 48384.0;
        float r4111815 = r4111807 * r4111814;
        float r4111816 = -9216.0;
        float r4111817 = r4111816 * r4111807;
        float r4111818 = r4111812 * r4111817;
        float r4111819 = r4111815 + r4111818;
        float r4111820 = r4111813 * r4111819;
        float r4111821 = r4111811 + r4111820;
        return r4111821;
}

double f_od(double x) {
        double r4111822 = 30240.0;
        double r4111823 = -80640.0;
        double r4111824 = x;
        double r4111825 = r4111823 * r4111824;
        double r4111826 = r4111825 * r4111824;
        double r4111827 = r4111822 + r4111826;
        double r4111828 = r4111827 * r4111824;
        double r4111829 = r4111824 * r4111824;
        double r4111830 = r4111829 * r4111829;
        double r4111831 = 48384.0;
        double r4111832 = r4111824 * r4111831;
        double r4111833 = -9216.0;
        double r4111834 = r4111833 * r4111824;
        double r4111835 = r4111829 * r4111834;
        double r4111836 = r4111832 + r4111835;
        double r4111837 = r4111830 * r4111836;
        double r4111838 = r4111828 + r4111837;
        return r4111838;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4111839, r4111840, r4111841, r4111842, r4111843, r4111844, r4111845, r4111846, r4111847, r4111848, r4111849, r4111850, r4111851, r4111852, r4111853, r4111854, r4111855, r4111856, r4111857, r4111858, r4111859, r4111860, r4111861;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4111839, "30240.0", 10, MPFR_RNDN);
        mpfr_init(r4111840);
        mpfr_init(r4111841);
        mpfr_init_set_str(r4111842, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r4111843);
        mpfr_init(r4111844);
        mpfr_init(r4111845);
        mpfr_init(r4111846);
        mpfr_init_set_str(r4111847, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r4111848);
        mpfr_init(r4111849);
        mpfr_init(r4111850);
        mpfr_init(r4111851);
        mpfr_init_set_str(r4111852, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r4111853);
        mpfr_init(r4111854);
        mpfr_init(r4111855);
        mpfr_init(r4111856);
        mpfr_init_set_str(r4111857, "512.0", 10, MPFR_RNDN);
        mpfr_init(r4111858);
        mpfr_init(r4111859);
        mpfr_init(r4111860);
        mpfr_init(r4111861);
}

double f_im(double x) {
        ;
        mpfr_set_d(r4111840, x, MPFR_RNDN);
        mpfr_mul(r4111841, r4111839, r4111840, MPFR_RNDN);
        ;
        mpfr_mul(r4111843, r4111840, r4111840, MPFR_RNDN);
        mpfr_mul(r4111844, r4111843, r4111840, MPFR_RNDN);
        mpfr_mul(r4111845, r4111842, r4111844, MPFR_RNDN);
        mpfr_add(r4111846, r4111841, r4111845, MPFR_RNDN);
        ;
        mpfr_mul(r4111848, r4111844, r4111840, MPFR_RNDN);
        mpfr_mul(r4111849, r4111848, r4111840, MPFR_RNDN);
        mpfr_mul(r4111850, r4111847, r4111849, MPFR_RNDN);
        mpfr_add(r4111851, r4111846, r4111850, MPFR_RNDN);
        ;
        mpfr_mul(r4111853, r4111849, r4111840, MPFR_RNDN);
        mpfr_mul(r4111854, r4111853, r4111840, MPFR_RNDN);
        mpfr_mul(r4111855, r4111852, r4111854, MPFR_RNDN);
        mpfr_add(r4111856, r4111851, r4111855, MPFR_RNDN);
        ;
        mpfr_mul(r4111858, r4111854, r4111840, MPFR_RNDN);
        mpfr_mul(r4111859, r4111858, r4111840, MPFR_RNDN);
        mpfr_mul(r4111860, r4111857, r4111859, MPFR_RNDN);
        mpfr_add(r4111861, r4111856, r4111860, MPFR_RNDN);
        return mpfr_get_d(r4111861, MPFR_RNDN);
}

static mpfr_t r4111862, r4111863, r4111864, r4111865, r4111866, r4111867, r4111868, r4111869, r4111870, r4111871, r4111872, r4111873, r4111874, r4111875, r4111876, r4111877, r4111878;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4111862, "30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4111863, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r4111864);
        mpfr_init(r4111865);
        mpfr_init(r4111866);
        mpfr_init(r4111867);
        mpfr_init(r4111868);
        mpfr_init(r4111869);
        mpfr_init(r4111870);
        mpfr_init_set_str(r4111871, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r4111872);
        mpfr_init_set_str(r4111873, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r4111874);
        mpfr_init(r4111875);
        mpfr_init(r4111876);
        mpfr_init(r4111877);
        mpfr_init(r4111878);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r4111864, x, MPFR_RNDN);
        mpfr_mul(r4111865, r4111863, r4111864, MPFR_RNDN);
        mpfr_mul(r4111866, r4111865, r4111864, MPFR_RNDN);
        mpfr_add(r4111867, r4111862, r4111866, MPFR_RNDN);
        mpfr_mul(r4111868, r4111867, r4111864, MPFR_RNDN);
        mpfr_mul(r4111869, r4111864, r4111864, MPFR_RNDN);
        mpfr_mul(r4111870, r4111869, r4111869, MPFR_RNDN);
        ;
        mpfr_mul(r4111872, r4111864, r4111871, MPFR_RNDN);
        ;
        mpfr_mul(r4111874, r4111873, r4111864, MPFR_RNDN);
        mpfr_mul(r4111875, r4111869, r4111874, MPFR_RNDN);
        mpfr_add(r4111876, r4111872, r4111875, MPFR_RNDN);
        mpfr_mul(r4111877, r4111870, r4111876, MPFR_RNDN);
        mpfr_add(r4111878, r4111868, r4111877, MPFR_RNDN);
        return mpfr_get_d(r4111878, MPFR_RNDN);
}

static mpfr_t r4111879, r4111880, r4111881, r4111882, r4111883, r4111884, r4111885, r4111886, r4111887, r4111888, r4111889, r4111890, r4111891, r4111892, r4111893, r4111894, r4111895;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4111879, "30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r4111880, "-80640.0", 10, MPFR_RNDN);
        mpfr_init(r4111881);
        mpfr_init(r4111882);
        mpfr_init(r4111883);
        mpfr_init(r4111884);
        mpfr_init(r4111885);
        mpfr_init(r4111886);
        mpfr_init(r4111887);
        mpfr_init_set_str(r4111888, "48384.0", 10, MPFR_RNDN);
        mpfr_init(r4111889);
        mpfr_init_set_str(r4111890, "-9216.0", 10, MPFR_RNDN);
        mpfr_init(r4111891);
        mpfr_init(r4111892);
        mpfr_init(r4111893);
        mpfr_init(r4111894);
        mpfr_init(r4111895);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r4111881, x, MPFR_RNDN);
        mpfr_mul(r4111882, r4111880, r4111881, MPFR_RNDN);
        mpfr_mul(r4111883, r4111882, r4111881, MPFR_RNDN);
        mpfr_add(r4111884, r4111879, r4111883, MPFR_RNDN);
        mpfr_mul(r4111885, r4111884, r4111881, MPFR_RNDN);
        mpfr_mul(r4111886, r4111881, r4111881, MPFR_RNDN);
        mpfr_mul(r4111887, r4111886, r4111886, MPFR_RNDN);
        ;
        mpfr_mul(r4111889, r4111881, r4111888, MPFR_RNDN);
        ;
        mpfr_mul(r4111891, r4111890, r4111881, MPFR_RNDN);
        mpfr_mul(r4111892, r4111886, r4111891, MPFR_RNDN);
        mpfr_add(r4111893, r4111889, r4111892, MPFR_RNDN);
        mpfr_mul(r4111894, r4111887, r4111893, MPFR_RNDN);
        mpfr_add(r4111895, r4111885, r4111894, MPFR_RNDN);
        return mpfr_get_d(r4111895, MPFR_RNDN);
}

