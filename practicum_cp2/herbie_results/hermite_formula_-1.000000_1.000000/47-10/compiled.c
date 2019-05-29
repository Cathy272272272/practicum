#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r7998736 = -30240.0;
        float r7998737 = 302400.0;
        float r7998738 = x;
        float r7998739 = r7998738 * r7998738;
        float r7998740 = r7998737 * r7998739;
        float r7998741 = r7998736 + r7998740;
        float r7998742 = -403200.0;
        float r7998743 = r7998739 * r7998738;
        float r7998744 = r7998743 * r7998738;
        float r7998745 = r7998742 * r7998744;
        float r7998746 = r7998741 + r7998745;
        float r7998747 = 161280.0;
        float r7998748 = r7998744 * r7998738;
        float r7998749 = r7998748 * r7998738;
        float r7998750 = r7998747 * r7998749;
        float r7998751 = r7998746 + r7998750;
        float r7998752 = -23040.0;
        float r7998753 = r7998749 * r7998738;
        float r7998754 = r7998753 * r7998738;
        float r7998755 = r7998752 * r7998754;
        float r7998756 = r7998751 + r7998755;
        float r7998757 = 1024.0;
        float r7998758 = r7998754 * r7998738;
        float r7998759 = r7998758 * r7998738;
        float r7998760 = r7998757 * r7998759;
        float r7998761 = r7998756 + r7998760;
        return r7998761;
}

double f_id(double x) {
        double r7998762 = -30240.0;
        double r7998763 = 302400.0;
        double r7998764 = x;
        double r7998765 = r7998764 * r7998764;
        double r7998766 = r7998763 * r7998765;
        double r7998767 = r7998762 + r7998766;
        double r7998768 = -403200.0;
        double r7998769 = r7998765 * r7998764;
        double r7998770 = r7998769 * r7998764;
        double r7998771 = r7998768 * r7998770;
        double r7998772 = r7998767 + r7998771;
        double r7998773 = 161280.0;
        double r7998774 = r7998770 * r7998764;
        double r7998775 = r7998774 * r7998764;
        double r7998776 = r7998773 * r7998775;
        double r7998777 = r7998772 + r7998776;
        double r7998778 = -23040.0;
        double r7998779 = r7998775 * r7998764;
        double r7998780 = r7998779 * r7998764;
        double r7998781 = r7998778 * r7998780;
        double r7998782 = r7998777 + r7998781;
        double r7998783 = 1024.0;
        double r7998784 = r7998780 * r7998764;
        double r7998785 = r7998784 * r7998764;
        double r7998786 = r7998783 * r7998785;
        double r7998787 = r7998782 + r7998786;
        return r7998787;
}


double f_of(float x) {
        float r7998788 = -30240.0;
        float r7998789 = x;
        float r7998790 = 4;
        float r7998791 = pow(r7998789, r7998790);
        float r7998792 = -403200.0;
        float r7998793 = r7998791 * r7998792;
        float r7998794 = 302400.0;
        float r7998795 = r7998789 * r7998794;
        float r7998796 = r7998789 * r7998795;
        float r7998797 = r7998793 + r7998796;
        float r7998798 = r7998788 + r7998797;
        float r7998799 = r7998789 * r7998789;
        float r7998800 = r7998799 * r7998799;
        float r7998801 = r7998800 * r7998800;
        float r7998802 = 1024.0;
        float r7998803 = r7998799 * r7998802;
        float r7998804 = -23040.0;
        float r7998805 = r7998803 + r7998804;
        float r7998806 = r7998801 * r7998805;
        float r7998807 = r7998798 + r7998806;
        float r7998808 = 161280.0;
        float r7998809 = r7998799 * r7998808;
        float r7998810 = r7998800 * r7998809;
        float r7998811 = r7998807 + r7998810;
        return r7998811;
}

double f_od(double x) {
        double r7998812 = -30240.0;
        double r7998813 = x;
        double r7998814 = 4;
        double r7998815 = pow(r7998813, r7998814);
        double r7998816 = -403200.0;
        double r7998817 = r7998815 * r7998816;
        double r7998818 = 302400.0;
        double r7998819 = r7998813 * r7998818;
        double r7998820 = r7998813 * r7998819;
        double r7998821 = r7998817 + r7998820;
        double r7998822 = r7998812 + r7998821;
        double r7998823 = r7998813 * r7998813;
        double r7998824 = r7998823 * r7998823;
        double r7998825 = r7998824 * r7998824;
        double r7998826 = 1024.0;
        double r7998827 = r7998823 * r7998826;
        double r7998828 = -23040.0;
        double r7998829 = r7998827 + r7998828;
        double r7998830 = r7998825 * r7998829;
        double r7998831 = r7998822 + r7998830;
        double r7998832 = 161280.0;
        double r7998833 = r7998823 * r7998832;
        double r7998834 = r7998824 * r7998833;
        double r7998835 = r7998831 + r7998834;
        return r7998835;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7998836, r7998837, r7998838, r7998839, r7998840, r7998841, r7998842, r7998843, r7998844, r7998845, r7998846, r7998847, r7998848, r7998849, r7998850, r7998851, r7998852, r7998853, r7998854, r7998855, r7998856, r7998857, r7998858, r7998859, r7998860, r7998861;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998836, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7998837, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7998838);
        mpfr_init(r7998839);
        mpfr_init(r7998840);
        mpfr_init(r7998841);
        mpfr_init_set_str(r7998842, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7998843);
        mpfr_init(r7998844);
        mpfr_init(r7998845);
        mpfr_init(r7998846);
        mpfr_init_set_str(r7998847, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7998848);
        mpfr_init(r7998849);
        mpfr_init(r7998850);
        mpfr_init(r7998851);
        mpfr_init_set_str(r7998852, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7998853);
        mpfr_init(r7998854);
        mpfr_init(r7998855);
        mpfr_init(r7998856);
        mpfr_init_set_str(r7998857, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7998858);
        mpfr_init(r7998859);
        mpfr_init(r7998860);
        mpfr_init(r7998861);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7998838, x, MPFR_RNDN);
        mpfr_mul(r7998839, r7998838, r7998838, MPFR_RNDN);
        mpfr_mul(r7998840, r7998837, r7998839, MPFR_RNDN);
        mpfr_add(r7998841, r7998836, r7998840, MPFR_RNDN);
        ;
        mpfr_mul(r7998843, r7998839, r7998838, MPFR_RNDN);
        mpfr_mul(r7998844, r7998843, r7998838, MPFR_RNDN);
        mpfr_mul(r7998845, r7998842, r7998844, MPFR_RNDN);
        mpfr_add(r7998846, r7998841, r7998845, MPFR_RNDN);
        ;
        mpfr_mul(r7998848, r7998844, r7998838, MPFR_RNDN);
        mpfr_mul(r7998849, r7998848, r7998838, MPFR_RNDN);
        mpfr_mul(r7998850, r7998847, r7998849, MPFR_RNDN);
        mpfr_add(r7998851, r7998846, r7998850, MPFR_RNDN);
        ;
        mpfr_mul(r7998853, r7998849, r7998838, MPFR_RNDN);
        mpfr_mul(r7998854, r7998853, r7998838, MPFR_RNDN);
        mpfr_mul(r7998855, r7998852, r7998854, MPFR_RNDN);
        mpfr_add(r7998856, r7998851, r7998855, MPFR_RNDN);
        ;
        mpfr_mul(r7998858, r7998854, r7998838, MPFR_RNDN);
        mpfr_mul(r7998859, r7998858, r7998838, MPFR_RNDN);
        mpfr_mul(r7998860, r7998857, r7998859, MPFR_RNDN);
        mpfr_add(r7998861, r7998856, r7998860, MPFR_RNDN);
        return mpfr_get_d(r7998861, MPFR_RNDN);
}

static mpfr_t r7998862, r7998863, r7998864, r7998865, r7998866, r7998867, r7998868, r7998869, r7998870, r7998871, r7998872, r7998873, r7998874, r7998875, r7998876, r7998877, r7998878, r7998879, r7998880, r7998881, r7998882, r7998883, r7998884, r7998885;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998862, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r7998863);
        mpfr_init_set_str(r7998864, "4", 10, MPFR_RNDN);
        mpfr_init(r7998865);
        mpfr_init_set_str(r7998866, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7998867);
        mpfr_init_set_str(r7998868, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7998869);
        mpfr_init(r7998870);
        mpfr_init(r7998871);
        mpfr_init(r7998872);
        mpfr_init(r7998873);
        mpfr_init(r7998874);
        mpfr_init(r7998875);
        mpfr_init_set_str(r7998876, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7998877);
        mpfr_init_set_str(r7998878, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7998879);
        mpfr_init(r7998880);
        mpfr_init(r7998881);
        mpfr_init_set_str(r7998882, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7998883);
        mpfr_init(r7998884);
        mpfr_init(r7998885);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7998863, x, MPFR_RNDN);
        ;
        mpfr_pow(r7998865, r7998863, r7998864, MPFR_RNDN);
        ;
        mpfr_mul(r7998867, r7998865, r7998866, MPFR_RNDN);
        ;
        mpfr_mul(r7998869, r7998863, r7998868, MPFR_RNDN);
        mpfr_mul(r7998870, r7998863, r7998869, MPFR_RNDN);
        mpfr_add(r7998871, r7998867, r7998870, MPFR_RNDN);
        mpfr_add(r7998872, r7998862, r7998871, MPFR_RNDN);
        mpfr_mul(r7998873, r7998863, r7998863, MPFR_RNDN);
        mpfr_mul(r7998874, r7998873, r7998873, MPFR_RNDN);
        mpfr_mul(r7998875, r7998874, r7998874, MPFR_RNDN);
        ;
        mpfr_mul(r7998877, r7998873, r7998876, MPFR_RNDN);
        ;
        mpfr_add(r7998879, r7998877, r7998878, MPFR_RNDN);
        mpfr_mul(r7998880, r7998875, r7998879, MPFR_RNDN);
        mpfr_add(r7998881, r7998872, r7998880, MPFR_RNDN);
        ;
        mpfr_mul(r7998883, r7998873, r7998882, MPFR_RNDN);
        mpfr_mul(r7998884, r7998874, r7998883, MPFR_RNDN);
        mpfr_add(r7998885, r7998881, r7998884, MPFR_RNDN);
        return mpfr_get_d(r7998885, MPFR_RNDN);
}

static mpfr_t r7998886, r7998887, r7998888, r7998889, r7998890, r7998891, r7998892, r7998893, r7998894, r7998895, r7998896, r7998897, r7998898, r7998899, r7998900, r7998901, r7998902, r7998903, r7998904, r7998905, r7998906, r7998907, r7998908, r7998909;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7998886, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r7998887);
        mpfr_init_set_str(r7998888, "4", 10, MPFR_RNDN);
        mpfr_init(r7998889);
        mpfr_init_set_str(r7998890, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r7998891);
        mpfr_init_set_str(r7998892, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r7998893);
        mpfr_init(r7998894);
        mpfr_init(r7998895);
        mpfr_init(r7998896);
        mpfr_init(r7998897);
        mpfr_init(r7998898);
        mpfr_init(r7998899);
        mpfr_init_set_str(r7998900, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r7998901);
        mpfr_init_set_str(r7998902, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r7998903);
        mpfr_init(r7998904);
        mpfr_init(r7998905);
        mpfr_init_set_str(r7998906, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r7998907);
        mpfr_init(r7998908);
        mpfr_init(r7998909);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7998887, x, MPFR_RNDN);
        ;
        mpfr_pow(r7998889, r7998887, r7998888, MPFR_RNDN);
        ;
        mpfr_mul(r7998891, r7998889, r7998890, MPFR_RNDN);
        ;
        mpfr_mul(r7998893, r7998887, r7998892, MPFR_RNDN);
        mpfr_mul(r7998894, r7998887, r7998893, MPFR_RNDN);
        mpfr_add(r7998895, r7998891, r7998894, MPFR_RNDN);
        mpfr_add(r7998896, r7998886, r7998895, MPFR_RNDN);
        mpfr_mul(r7998897, r7998887, r7998887, MPFR_RNDN);
        mpfr_mul(r7998898, r7998897, r7998897, MPFR_RNDN);
        mpfr_mul(r7998899, r7998898, r7998898, MPFR_RNDN);
        ;
        mpfr_mul(r7998901, r7998897, r7998900, MPFR_RNDN);
        ;
        mpfr_add(r7998903, r7998901, r7998902, MPFR_RNDN);
        mpfr_mul(r7998904, r7998899, r7998903, MPFR_RNDN);
        mpfr_add(r7998905, r7998896, r7998904, MPFR_RNDN);
        ;
        mpfr_mul(r7998907, r7998897, r7998906, MPFR_RNDN);
        mpfr_mul(r7998908, r7998898, r7998907, MPFR_RNDN);
        mpfr_add(r7998909, r7998905, r7998908, MPFR_RNDN);
        return mpfr_get_d(r7998909, MPFR_RNDN);
}

