#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r4600686 = -0.209473;
        float r4600687 = 21.994629;
        float r4600688 = x;
        float r4600689 = r4600688 * r4600688;
        float r4600690 = r4600687 * r4600689;
        float r4600691 = r4600686 + r4600690;
        float r4600692 = -373.908691;
        float r4600693 = r4600689 * r4600688;
        float r4600694 = r4600693 * r4600688;
        float r4600695 = r4600692 * r4600694;
        float r4600696 = r4600691 + r4600695;
        float r4600697 = 2368.088379;
        float r4600698 = r4600694 * r4600688;
        float r4600699 = r4600698 * r4600688;
        float r4600700 = r4600697 * r4600699;
        float r4600701 = r4600696 + r4600700;
        float r4600702 = -7104.265137;
        float r4600703 = r4600699 * r4600688;
        float r4600704 = r4600703 * r4600688;
        float r4600705 = r4600702 * r4600704;
        float r4600706 = r4600701 + r4600705;
        float r4600707 = 10893.206543;
        float r4600708 = r4600704 * r4600688;
        float r4600709 = r4600708 * r4600688;
        float r4600710 = r4600707 * r4600709;
        float r4600711 = r4600706 + r4600710;
        float r4600712 = -8252.429199;
        float r4600713 = r4600709 * r4600688;
        float r4600714 = r4600713 * r4600688;
        float r4600715 = r4600712 * r4600714;
        float r4600716 = r4600711 + r4600715;
        float r4600717 = 2448.522949;
        float r4600718 = r4600714 * r4600688;
        float r4600719 = r4600718 * r4600688;
        float r4600720 = r4600717 * r4600719;
        float r4600721 = r4600716 + r4600720;
        return r4600721;
}

double f_id(double x) {
        double r4600722 = -0.209473;
        double r4600723 = 21.994629;
        double r4600724 = x;
        double r4600725 = r4600724 * r4600724;
        double r4600726 = r4600723 * r4600725;
        double r4600727 = r4600722 + r4600726;
        double r4600728 = -373.908691;
        double r4600729 = r4600725 * r4600724;
        double r4600730 = r4600729 * r4600724;
        double r4600731 = r4600728 * r4600730;
        double r4600732 = r4600727 + r4600731;
        double r4600733 = 2368.088379;
        double r4600734 = r4600730 * r4600724;
        double r4600735 = r4600734 * r4600724;
        double r4600736 = r4600733 * r4600735;
        double r4600737 = r4600732 + r4600736;
        double r4600738 = -7104.265137;
        double r4600739 = r4600735 * r4600724;
        double r4600740 = r4600739 * r4600724;
        double r4600741 = r4600738 * r4600740;
        double r4600742 = r4600737 + r4600741;
        double r4600743 = 10893.206543;
        double r4600744 = r4600740 * r4600724;
        double r4600745 = r4600744 * r4600724;
        double r4600746 = r4600743 * r4600745;
        double r4600747 = r4600742 + r4600746;
        double r4600748 = -8252.429199;
        double r4600749 = r4600745 * r4600724;
        double r4600750 = r4600749 * r4600724;
        double r4600751 = r4600748 * r4600750;
        double r4600752 = r4600747 + r4600751;
        double r4600753 = 2448.522949;
        double r4600754 = r4600750 * r4600724;
        double r4600755 = r4600754 * r4600724;
        double r4600756 = r4600753 * r4600755;
        double r4600757 = r4600752 + r4600756;
        return r4600757;
}


double f_of(float x) {
        float r4600758 = x;
        float r4600759 = r4600758 * r4600758;
        float r4600760 = r4600759 * r4600759;
        float r4600761 = r4600760 * r4600760;
        float r4600762 = r4600760 * r4600761;
        float r4600763 = 2448.522949;
        float r4600764 = r4600758 * r4600763;
        float r4600765 = r4600758 * r4600764;
        float r4600766 = -8252.429199;
        float r4600767 = r4600765 + r4600766;
        float r4600768 = r4600762 * r4600767;
        float r4600769 = 21.994629;
        float r4600770 = r4600758 * r4600769;
        float r4600771 = r4600770 * r4600758;
        float r4600772 = -0.209473;
        float r4600773 = r4600771 + r4600772;
        float r4600774 = -373.908691;
        float r4600775 = 2368.088379;
        float r4600776 = r4600775 * r4600758;
        float r4600777 = r4600758 * r4600776;
        float r4600778 = r4600774 + r4600777;
        float r4600779 = r4600760 * r4600778;
        float r4600780 = r4600773 + r4600779;
        float r4600781 = r4600768 + r4600780;
        float r4600782 = 10893.206543;
        float r4600783 = r4600782 * r4600759;
        float r4600784 = -7104.265137;
        float r4600785 = r4600783 + r4600784;
        float r4600786 = r4600761 * r4600785;
        float r4600787 = r4600781 + r4600786;
        return r4600787;
}

double f_od(double x) {
        double r4600788 = x;
        double r4600789 = r4600788 * r4600788;
        double r4600790 = r4600789 * r4600789;
        double r4600791 = r4600790 * r4600790;
        double r4600792 = r4600790 * r4600791;
        double r4600793 = 2448.522949;
        double r4600794 = r4600788 * r4600793;
        double r4600795 = r4600788 * r4600794;
        double r4600796 = -8252.429199;
        double r4600797 = r4600795 + r4600796;
        double r4600798 = r4600792 * r4600797;
        double r4600799 = 21.994629;
        double r4600800 = r4600788 * r4600799;
        double r4600801 = r4600800 * r4600788;
        double r4600802 = -0.209473;
        double r4600803 = r4600801 + r4600802;
        double r4600804 = -373.908691;
        double r4600805 = 2368.088379;
        double r4600806 = r4600805 * r4600788;
        double r4600807 = r4600788 * r4600806;
        double r4600808 = r4600804 + r4600807;
        double r4600809 = r4600790 * r4600808;
        double r4600810 = r4600803 + r4600809;
        double r4600811 = r4600798 + r4600810;
        double r4600812 = 10893.206543;
        double r4600813 = r4600812 * r4600789;
        double r4600814 = -7104.265137;
        double r4600815 = r4600813 + r4600814;
        double r4600816 = r4600791 * r4600815;
        double r4600817 = r4600811 + r4600816;
        return r4600817;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r4600818, r4600819, r4600820, r4600821, r4600822, r4600823, r4600824, r4600825, r4600826, r4600827, r4600828, r4600829, r4600830, r4600831, r4600832, r4600833, r4600834, r4600835, r4600836, r4600837, r4600838, r4600839, r4600840, r4600841, r4600842, r4600843, r4600844, r4600845, r4600846, r4600847, r4600848, r4600849, r4600850, r4600851, r4600852, r4600853;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r4600818, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r4600819, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r4600820);
        mpfr_init(r4600821);
        mpfr_init(r4600822);
        mpfr_init(r4600823);
        mpfr_init_set_str(r4600824, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r4600825);
        mpfr_init(r4600826);
        mpfr_init(r4600827);
        mpfr_init(r4600828);
        mpfr_init_set_str(r4600829, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r4600830);
        mpfr_init(r4600831);
        mpfr_init(r4600832);
        mpfr_init(r4600833);
        mpfr_init_set_str(r4600834, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r4600835);
        mpfr_init(r4600836);
        mpfr_init(r4600837);
        mpfr_init(r4600838);
        mpfr_init_set_str(r4600839, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r4600840);
        mpfr_init(r4600841);
        mpfr_init(r4600842);
        mpfr_init(r4600843);
        mpfr_init_set_str(r4600844, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r4600845);
        mpfr_init(r4600846);
        mpfr_init(r4600847);
        mpfr_init(r4600848);
        mpfr_init_set_str(r4600849, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r4600850);
        mpfr_init(r4600851);
        mpfr_init(r4600852);
        mpfr_init(r4600853);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r4600820, x, MPFR_RNDN);
        mpfr_mul(r4600821, r4600820, r4600820, MPFR_RNDN);
        mpfr_mul(r4600822, r4600819, r4600821, MPFR_RNDN);
        mpfr_add(r4600823, r4600818, r4600822, MPFR_RNDN);
        ;
        mpfr_mul(r4600825, r4600821, r4600820, MPFR_RNDN);
        mpfr_mul(r4600826, r4600825, r4600820, MPFR_RNDN);
        mpfr_mul(r4600827, r4600824, r4600826, MPFR_RNDN);
        mpfr_add(r4600828, r4600823, r4600827, MPFR_RNDN);
        ;
        mpfr_mul(r4600830, r4600826, r4600820, MPFR_RNDN);
        mpfr_mul(r4600831, r4600830, r4600820, MPFR_RNDN);
        mpfr_mul(r4600832, r4600829, r4600831, MPFR_RNDN);
        mpfr_add(r4600833, r4600828, r4600832, MPFR_RNDN);
        ;
        mpfr_mul(r4600835, r4600831, r4600820, MPFR_RNDN);
        mpfr_mul(r4600836, r4600835, r4600820, MPFR_RNDN);
        mpfr_mul(r4600837, r4600834, r4600836, MPFR_RNDN);
        mpfr_add(r4600838, r4600833, r4600837, MPFR_RNDN);
        ;
        mpfr_mul(r4600840, r4600836, r4600820, MPFR_RNDN);
        mpfr_mul(r4600841, r4600840, r4600820, MPFR_RNDN);
        mpfr_mul(r4600842, r4600839, r4600841, MPFR_RNDN);
        mpfr_add(r4600843, r4600838, r4600842, MPFR_RNDN);
        ;
        mpfr_mul(r4600845, r4600841, r4600820, MPFR_RNDN);
        mpfr_mul(r4600846, r4600845, r4600820, MPFR_RNDN);
        mpfr_mul(r4600847, r4600844, r4600846, MPFR_RNDN);
        mpfr_add(r4600848, r4600843, r4600847, MPFR_RNDN);
        ;
        mpfr_mul(r4600850, r4600846, r4600820, MPFR_RNDN);
        mpfr_mul(r4600851, r4600850, r4600820, MPFR_RNDN);
        mpfr_mul(r4600852, r4600849, r4600851, MPFR_RNDN);
        mpfr_add(r4600853, r4600848, r4600852, MPFR_RNDN);
        return mpfr_get_d(r4600853, MPFR_RNDN);
}

static mpfr_t r4600854, r4600855, r4600856, r4600857, r4600858, r4600859, r4600860, r4600861, r4600862, r4600863, r4600864, r4600865, r4600866, r4600867, r4600868, r4600869, r4600870, r4600871, r4600872, r4600873, r4600874, r4600875, r4600876, r4600877, r4600878, r4600879, r4600880, r4600881, r4600882, r4600883;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4600854);
        mpfr_init(r4600855);
        mpfr_init(r4600856);
        mpfr_init(r4600857);
        mpfr_init(r4600858);
        mpfr_init_set_str(r4600859, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r4600860);
        mpfr_init(r4600861);
        mpfr_init_set_str(r4600862, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r4600863);
        mpfr_init(r4600864);
        mpfr_init_set_str(r4600865, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r4600866);
        mpfr_init(r4600867);
        mpfr_init_set_str(r4600868, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r4600869);
        mpfr_init_set_str(r4600870, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r4600871, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r4600872);
        mpfr_init(r4600873);
        mpfr_init(r4600874);
        mpfr_init(r4600875);
        mpfr_init(r4600876);
        mpfr_init(r4600877);
        mpfr_init_set_str(r4600878, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r4600879);
        mpfr_init_set_str(r4600880, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r4600881);
        mpfr_init(r4600882);
        mpfr_init(r4600883);
}

double f_fm(double x) {
        mpfr_set_d(r4600854, x, MPFR_RNDN);
        mpfr_mul(r4600855, r4600854, r4600854, MPFR_RNDN);
        mpfr_mul(r4600856, r4600855, r4600855, MPFR_RNDN);
        mpfr_mul(r4600857, r4600856, r4600856, MPFR_RNDN);
        mpfr_mul(r4600858, r4600856, r4600857, MPFR_RNDN);
        ;
        mpfr_mul(r4600860, r4600854, r4600859, MPFR_RNDN);
        mpfr_mul(r4600861, r4600854, r4600860, MPFR_RNDN);
        ;
        mpfr_add(r4600863, r4600861, r4600862, MPFR_RNDN);
        mpfr_mul(r4600864, r4600858, r4600863, MPFR_RNDN);
        ;
        mpfr_mul(r4600866, r4600854, r4600865, MPFR_RNDN);
        mpfr_mul(r4600867, r4600866, r4600854, MPFR_RNDN);
        ;
        mpfr_add(r4600869, r4600867, r4600868, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4600872, r4600871, r4600854, MPFR_RNDN);
        mpfr_mul(r4600873, r4600854, r4600872, MPFR_RNDN);
        mpfr_add(r4600874, r4600870, r4600873, MPFR_RNDN);
        mpfr_mul(r4600875, r4600856, r4600874, MPFR_RNDN);
        mpfr_add(r4600876, r4600869, r4600875, MPFR_RNDN);
        mpfr_add(r4600877, r4600864, r4600876, MPFR_RNDN);
        ;
        mpfr_mul(r4600879, r4600878, r4600855, MPFR_RNDN);
        ;
        mpfr_add(r4600881, r4600879, r4600880, MPFR_RNDN);
        mpfr_mul(r4600882, r4600857, r4600881, MPFR_RNDN);
        mpfr_add(r4600883, r4600877, r4600882, MPFR_RNDN);
        return mpfr_get_d(r4600883, MPFR_RNDN);
}

static mpfr_t r4600884, r4600885, r4600886, r4600887, r4600888, r4600889, r4600890, r4600891, r4600892, r4600893, r4600894, r4600895, r4600896, r4600897, r4600898, r4600899, r4600900, r4600901, r4600902, r4600903, r4600904, r4600905, r4600906, r4600907, r4600908, r4600909, r4600910, r4600911, r4600912, r4600913;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r4600884);
        mpfr_init(r4600885);
        mpfr_init(r4600886);
        mpfr_init(r4600887);
        mpfr_init(r4600888);
        mpfr_init_set_str(r4600889, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r4600890);
        mpfr_init(r4600891);
        mpfr_init_set_str(r4600892, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r4600893);
        mpfr_init(r4600894);
        mpfr_init_set_str(r4600895, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r4600896);
        mpfr_init(r4600897);
        mpfr_init_set_str(r4600898, "-0.209473", 10, MPFR_RNDN);
        mpfr_init(r4600899);
        mpfr_init_set_str(r4600900, "-373.908691", 10, MPFR_RNDN);
        mpfr_init_set_str(r4600901, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r4600902);
        mpfr_init(r4600903);
        mpfr_init(r4600904);
        mpfr_init(r4600905);
        mpfr_init(r4600906);
        mpfr_init(r4600907);
        mpfr_init_set_str(r4600908, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r4600909);
        mpfr_init_set_str(r4600910, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r4600911);
        mpfr_init(r4600912);
        mpfr_init(r4600913);
}

double f_dm(double x) {
        mpfr_set_d(r4600884, x, MPFR_RNDN);
        mpfr_mul(r4600885, r4600884, r4600884, MPFR_RNDN);
        mpfr_mul(r4600886, r4600885, r4600885, MPFR_RNDN);
        mpfr_mul(r4600887, r4600886, r4600886, MPFR_RNDN);
        mpfr_mul(r4600888, r4600886, r4600887, MPFR_RNDN);
        ;
        mpfr_mul(r4600890, r4600884, r4600889, MPFR_RNDN);
        mpfr_mul(r4600891, r4600884, r4600890, MPFR_RNDN);
        ;
        mpfr_add(r4600893, r4600891, r4600892, MPFR_RNDN);
        mpfr_mul(r4600894, r4600888, r4600893, MPFR_RNDN);
        ;
        mpfr_mul(r4600896, r4600884, r4600895, MPFR_RNDN);
        mpfr_mul(r4600897, r4600896, r4600884, MPFR_RNDN);
        ;
        mpfr_add(r4600899, r4600897, r4600898, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r4600902, r4600901, r4600884, MPFR_RNDN);
        mpfr_mul(r4600903, r4600884, r4600902, MPFR_RNDN);
        mpfr_add(r4600904, r4600900, r4600903, MPFR_RNDN);
        mpfr_mul(r4600905, r4600886, r4600904, MPFR_RNDN);
        mpfr_add(r4600906, r4600899, r4600905, MPFR_RNDN);
        mpfr_add(r4600907, r4600894, r4600906, MPFR_RNDN);
        ;
        mpfr_mul(r4600909, r4600908, r4600885, MPFR_RNDN);
        ;
        mpfr_add(r4600911, r4600909, r4600910, MPFR_RNDN);
        mpfr_mul(r4600912, r4600887, r4600911, MPFR_RNDN);
        mpfr_add(r4600913, r4600907, r4600912, MPFR_RNDN);
        return mpfr_get_d(r4600913, MPFR_RNDN);
}

