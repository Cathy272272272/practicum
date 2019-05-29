#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r8833674 = 1.0;
        float r8833675 = -10.0;
        float r8833676 = x;
        float r8833677 = r8833675 * r8833676;
        float r8833678 = r8833674 + r8833677;
        float r8833679 = 22.5;
        float r8833680 = r8833676 * r8833676;
        float r8833681 = r8833679 * r8833680;
        float r8833682 = r8833678 + r8833681;
        float r8833683 = -20.0;
        float r8833684 = r8833680 * r8833676;
        float r8833685 = r8833683 * r8833684;
        float r8833686 = r8833682 + r8833685;
        float r8833687 = 8.75;
        float r8833688 = r8833684 * r8833676;
        float r8833689 = r8833687 * r8833688;
        float r8833690 = r8833686 + r8833689;
        float r8833691 = -2.1;
        float r8833692 = r8833688 * r8833676;
        float r8833693 = r8833691 * r8833692;
        float r8833694 = r8833690 + r8833693;
        float r8833695 = 0.291667;
        float r8833696 = r8833692 * r8833676;
        float r8833697 = r8833695 * r8833696;
        float r8833698 = r8833694 + r8833697;
        float r8833699 = -0.02381;
        float r8833700 = r8833696 * r8833676;
        float r8833701 = r8833699 * r8833700;
        float r8833702 = r8833698 + r8833701;
        float r8833703 = 0.001116;
        float r8833704 = r8833700 * r8833676;
        float r8833705 = r8833703 * r8833704;
        float r8833706 = r8833702 + r8833705;
        float r8833707 = -2.8e-05;
        float r8833708 = r8833704 * r8833676;
        float r8833709 = r8833707 * r8833708;
        float r8833710 = r8833706 + r8833709;
        return r8833710;
}

double f_id(double x) {
        double r8833711 = 1.0;
        double r8833712 = -10.0;
        double r8833713 = x;
        double r8833714 = r8833712 * r8833713;
        double r8833715 = r8833711 + r8833714;
        double r8833716 = 22.5;
        double r8833717 = r8833713 * r8833713;
        double r8833718 = r8833716 * r8833717;
        double r8833719 = r8833715 + r8833718;
        double r8833720 = -20.0;
        double r8833721 = r8833717 * r8833713;
        double r8833722 = r8833720 * r8833721;
        double r8833723 = r8833719 + r8833722;
        double r8833724 = 8.75;
        double r8833725 = r8833721 * r8833713;
        double r8833726 = r8833724 * r8833725;
        double r8833727 = r8833723 + r8833726;
        double r8833728 = -2.1;
        double r8833729 = r8833725 * r8833713;
        double r8833730 = r8833728 * r8833729;
        double r8833731 = r8833727 + r8833730;
        double r8833732 = 0.291667;
        double r8833733 = r8833729 * r8833713;
        double r8833734 = r8833732 * r8833733;
        double r8833735 = r8833731 + r8833734;
        double r8833736 = -0.02381;
        double r8833737 = r8833733 * r8833713;
        double r8833738 = r8833736 * r8833737;
        double r8833739 = r8833735 + r8833738;
        double r8833740 = 0.001116;
        double r8833741 = r8833737 * r8833713;
        double r8833742 = r8833740 * r8833741;
        double r8833743 = r8833739 + r8833742;
        double r8833744 = -2.8e-05;
        double r8833745 = r8833741 * r8833713;
        double r8833746 = r8833744 * r8833745;
        double r8833747 = r8833743 + r8833746;
        return r8833747;
}


double f_of(float x) {
        float r8833748 = x;
        float r8833749 = r8833748 * r8833748;
        float r8833750 = 0.291667;
        float r8833751 = r8833749 * r8833750;
        float r8833752 = r8833749 * r8833749;
        float r8833753 = r8833751 * r8833752;
        float r8833754 = -2.1;
        float r8833755 = r8833754 * r8833748;
        float r8833756 = 8.75;
        float r8833757 = r8833755 + r8833756;
        float r8833758 = r8833752 * r8833757;
        float r8833759 = r8833753 + r8833758;
        float r8833760 = -10.0;
        float r8833761 = r8833748 * r8833760;
        float r8833762 = 1.0;
        float r8833763 = r8833761 + r8833762;
        float r8833764 = -20.0;
        float r8833765 = r8833764 * r8833748;
        float r8833766 = 22.5;
        float r8833767 = r8833765 + r8833766;
        float r8833768 = r8833749 * r8833767;
        float r8833769 = r8833763 + r8833768;
        float r8833770 = r8833759 + r8833769;
        float r8833771 = -0.02381;
        float r8833772 = r8833771 * r8833748;
        float r8833773 = r8833772 * r8833749;
        float r8833774 = r8833773 * r8833752;
        float r8833775 = 2;
        float r8833776 = r8833775 + r8833775;
        float r8833777 = pow(r8833748, r8833776);
        float r8833778 = r8833777 * r8833777;
        float r8833779 = -2.8e-05;
        float r8833780 = r8833779 * r8833748;
        float r8833781 = 0.001116;
        float r8833782 = r8833780 + r8833781;
        float r8833783 = r8833778 * r8833782;
        float r8833784 = r8833774 + r8833783;
        float r8833785 = r8833770 + r8833784;
        return r8833785;
}

double f_od(double x) {
        double r8833786 = x;
        double r8833787 = r8833786 * r8833786;
        double r8833788 = 0.291667;
        double r8833789 = r8833787 * r8833788;
        double r8833790 = r8833787 * r8833787;
        double r8833791 = r8833789 * r8833790;
        double r8833792 = -2.1;
        double r8833793 = r8833792 * r8833786;
        double r8833794 = 8.75;
        double r8833795 = r8833793 + r8833794;
        double r8833796 = r8833790 * r8833795;
        double r8833797 = r8833791 + r8833796;
        double r8833798 = -10.0;
        double r8833799 = r8833786 * r8833798;
        double r8833800 = 1.0;
        double r8833801 = r8833799 + r8833800;
        double r8833802 = -20.0;
        double r8833803 = r8833802 * r8833786;
        double r8833804 = 22.5;
        double r8833805 = r8833803 + r8833804;
        double r8833806 = r8833787 * r8833805;
        double r8833807 = r8833801 + r8833806;
        double r8833808 = r8833797 + r8833807;
        double r8833809 = -0.02381;
        double r8833810 = r8833809 * r8833786;
        double r8833811 = r8833810 * r8833787;
        double r8833812 = r8833811 * r8833790;
        double r8833813 = 2;
        double r8833814 = r8833813 + r8833813;
        double r8833815 = pow(r8833786, r8833814);
        double r8833816 = r8833815 * r8833815;
        double r8833817 = -2.8e-05;
        double r8833818 = r8833817 * r8833786;
        double r8833819 = 0.001116;
        double r8833820 = r8833818 + r8833819;
        double r8833821 = r8833816 * r8833820;
        double r8833822 = r8833812 + r8833821;
        double r8833823 = r8833808 + r8833822;
        return r8833823;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8833824, r8833825, r8833826, r8833827, r8833828, r8833829, r8833830, r8833831, r8833832, r8833833, r8833834, r8833835, r8833836, r8833837, r8833838, r8833839, r8833840, r8833841, r8833842, r8833843, r8833844, r8833845, r8833846, r8833847, r8833848, r8833849, r8833850, r8833851, r8833852, r8833853, r8833854, r8833855, r8833856, r8833857, r8833858, r8833859, r8833860;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8833824, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8833825, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r8833826);
        mpfr_init(r8833827);
        mpfr_init(r8833828);
        mpfr_init_set_str(r8833829, "22.5", 10, MPFR_RNDN);
        mpfr_init(r8833830);
        mpfr_init(r8833831);
        mpfr_init(r8833832);
        mpfr_init_set_str(r8833833, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r8833834);
        mpfr_init(r8833835);
        mpfr_init(r8833836);
        mpfr_init_set_str(r8833837, "8.75", 10, MPFR_RNDN);
        mpfr_init(r8833838);
        mpfr_init(r8833839);
        mpfr_init(r8833840);
        mpfr_init_set_str(r8833841, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r8833842);
        mpfr_init(r8833843);
        mpfr_init(r8833844);
        mpfr_init_set_str(r8833845, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r8833846);
        mpfr_init(r8833847);
        mpfr_init(r8833848);
        mpfr_init_set_str(r8833849, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r8833850);
        mpfr_init(r8833851);
        mpfr_init(r8833852);
        mpfr_init_set_str(r8833853, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r8833854);
        mpfr_init(r8833855);
        mpfr_init(r8833856);
        mpfr_init_set_str(r8833857, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r8833858);
        mpfr_init(r8833859);
        mpfr_init(r8833860);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8833826, x, MPFR_RNDN);
        mpfr_mul(r8833827, r8833825, r8833826, MPFR_RNDN);
        mpfr_add(r8833828, r8833824, r8833827, MPFR_RNDN);
        ;
        mpfr_mul(r8833830, r8833826, r8833826, MPFR_RNDN);
        mpfr_mul(r8833831, r8833829, r8833830, MPFR_RNDN);
        mpfr_add(r8833832, r8833828, r8833831, MPFR_RNDN);
        ;
        mpfr_mul(r8833834, r8833830, r8833826, MPFR_RNDN);
        mpfr_mul(r8833835, r8833833, r8833834, MPFR_RNDN);
        mpfr_add(r8833836, r8833832, r8833835, MPFR_RNDN);
        ;
        mpfr_mul(r8833838, r8833834, r8833826, MPFR_RNDN);
        mpfr_mul(r8833839, r8833837, r8833838, MPFR_RNDN);
        mpfr_add(r8833840, r8833836, r8833839, MPFR_RNDN);
        ;
        mpfr_mul(r8833842, r8833838, r8833826, MPFR_RNDN);
        mpfr_mul(r8833843, r8833841, r8833842, MPFR_RNDN);
        mpfr_add(r8833844, r8833840, r8833843, MPFR_RNDN);
        ;
        mpfr_mul(r8833846, r8833842, r8833826, MPFR_RNDN);
        mpfr_mul(r8833847, r8833845, r8833846, MPFR_RNDN);
        mpfr_add(r8833848, r8833844, r8833847, MPFR_RNDN);
        ;
        mpfr_mul(r8833850, r8833846, r8833826, MPFR_RNDN);
        mpfr_mul(r8833851, r8833849, r8833850, MPFR_RNDN);
        mpfr_add(r8833852, r8833848, r8833851, MPFR_RNDN);
        ;
        mpfr_mul(r8833854, r8833850, r8833826, MPFR_RNDN);
        mpfr_mul(r8833855, r8833853, r8833854, MPFR_RNDN);
        mpfr_add(r8833856, r8833852, r8833855, MPFR_RNDN);
        ;
        mpfr_mul(r8833858, r8833854, r8833826, MPFR_RNDN);
        mpfr_mul(r8833859, r8833857, r8833858, MPFR_RNDN);
        mpfr_add(r8833860, r8833856, r8833859, MPFR_RNDN);
        return mpfr_get_d(r8833860, MPFR_RNDN);
}

static mpfr_t r8833861, r8833862, r8833863, r8833864, r8833865, r8833866, r8833867, r8833868, r8833869, r8833870, r8833871, r8833872, r8833873, r8833874, r8833875, r8833876, r8833877, r8833878, r8833879, r8833880, r8833881, r8833882, r8833883, r8833884, r8833885, r8833886, r8833887, r8833888, r8833889, r8833890, r8833891, r8833892, r8833893, r8833894, r8833895, r8833896, r8833897, r8833898;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8833861);
        mpfr_init(r8833862);
        mpfr_init_set_str(r8833863, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r8833864);
        mpfr_init(r8833865);
        mpfr_init(r8833866);
        mpfr_init_set_str(r8833867, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r8833868);
        mpfr_init_set_str(r8833869, "8.75", 10, MPFR_RNDN);
        mpfr_init(r8833870);
        mpfr_init(r8833871);
        mpfr_init(r8833872);
        mpfr_init_set_str(r8833873, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r8833874);
        mpfr_init_set_str(r8833875, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8833876);
        mpfr_init_set_str(r8833877, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r8833878);
        mpfr_init_set_str(r8833879, "22.5", 10, MPFR_RNDN);
        mpfr_init(r8833880);
        mpfr_init(r8833881);
        mpfr_init(r8833882);
        mpfr_init(r8833883);
        mpfr_init_set_str(r8833884, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r8833885);
        mpfr_init(r8833886);
        mpfr_init(r8833887);
        mpfr_init_set_str(r8833888, "2", 10, MPFR_RNDN);
        mpfr_init(r8833889);
        mpfr_init(r8833890);
        mpfr_init(r8833891);
        mpfr_init_set_str(r8833892, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r8833893);
        mpfr_init_set_str(r8833894, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r8833895);
        mpfr_init(r8833896);
        mpfr_init(r8833897);
        mpfr_init(r8833898);
}

double f_fm(double x) {
        mpfr_set_d(r8833861, x, MPFR_RNDN);
        mpfr_mul(r8833862, r8833861, r8833861, MPFR_RNDN);
        ;
        mpfr_mul(r8833864, r8833862, r8833863, MPFR_RNDN);
        mpfr_mul(r8833865, r8833862, r8833862, MPFR_RNDN);
        mpfr_mul(r8833866, r8833864, r8833865, MPFR_RNDN);
        ;
        mpfr_mul(r8833868, r8833867, r8833861, MPFR_RNDN);
        ;
        mpfr_add(r8833870, r8833868, r8833869, MPFR_RNDN);
        mpfr_mul(r8833871, r8833865, r8833870, MPFR_RNDN);
        mpfr_add(r8833872, r8833866, r8833871, MPFR_RNDN);
        ;
        mpfr_mul(r8833874, r8833861, r8833873, MPFR_RNDN);
        ;
        mpfr_add(r8833876, r8833874, r8833875, MPFR_RNDN);
        ;
        mpfr_mul(r8833878, r8833877, r8833861, MPFR_RNDN);
        ;
        mpfr_add(r8833880, r8833878, r8833879, MPFR_RNDN);
        mpfr_mul(r8833881, r8833862, r8833880, MPFR_RNDN);
        mpfr_add(r8833882, r8833876, r8833881, MPFR_RNDN);
        mpfr_add(r8833883, r8833872, r8833882, MPFR_RNDN);
        ;
        mpfr_mul(r8833885, r8833884, r8833861, MPFR_RNDN);
        mpfr_mul(r8833886, r8833885, r8833862, MPFR_RNDN);
        mpfr_mul(r8833887, r8833886, r8833865, MPFR_RNDN);
        ;
        mpfr_add(r8833889, r8833888, r8833888, MPFR_RNDN);
        mpfr_pow(r8833890, r8833861, r8833889, MPFR_RNDN);
        mpfr_mul(r8833891, r8833890, r8833890, MPFR_RNDN);
        ;
        mpfr_mul(r8833893, r8833892, r8833861, MPFR_RNDN);
        ;
        mpfr_add(r8833895, r8833893, r8833894, MPFR_RNDN);
        mpfr_mul(r8833896, r8833891, r8833895, MPFR_RNDN);
        mpfr_add(r8833897, r8833887, r8833896, MPFR_RNDN);
        mpfr_add(r8833898, r8833883, r8833897, MPFR_RNDN);
        return mpfr_get_d(r8833898, MPFR_RNDN);
}

static mpfr_t r8833899, r8833900, r8833901, r8833902, r8833903, r8833904, r8833905, r8833906, r8833907, r8833908, r8833909, r8833910, r8833911, r8833912, r8833913, r8833914, r8833915, r8833916, r8833917, r8833918, r8833919, r8833920, r8833921, r8833922, r8833923, r8833924, r8833925, r8833926, r8833927, r8833928, r8833929, r8833930, r8833931, r8833932, r8833933, r8833934, r8833935, r8833936;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8833899);
        mpfr_init(r8833900);
        mpfr_init_set_str(r8833901, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r8833902);
        mpfr_init(r8833903);
        mpfr_init(r8833904);
        mpfr_init_set_str(r8833905, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r8833906);
        mpfr_init_set_str(r8833907, "8.75", 10, MPFR_RNDN);
        mpfr_init(r8833908);
        mpfr_init(r8833909);
        mpfr_init(r8833910);
        mpfr_init_set_str(r8833911, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r8833912);
        mpfr_init_set_str(r8833913, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8833914);
        mpfr_init_set_str(r8833915, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r8833916);
        mpfr_init_set_str(r8833917, "22.5", 10, MPFR_RNDN);
        mpfr_init(r8833918);
        mpfr_init(r8833919);
        mpfr_init(r8833920);
        mpfr_init(r8833921);
        mpfr_init_set_str(r8833922, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r8833923);
        mpfr_init(r8833924);
        mpfr_init(r8833925);
        mpfr_init_set_str(r8833926, "2", 10, MPFR_RNDN);
        mpfr_init(r8833927);
        mpfr_init(r8833928);
        mpfr_init(r8833929);
        mpfr_init_set_str(r8833930, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r8833931);
        mpfr_init_set_str(r8833932, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r8833933);
        mpfr_init(r8833934);
        mpfr_init(r8833935);
        mpfr_init(r8833936);
}

double f_dm(double x) {
        mpfr_set_d(r8833899, x, MPFR_RNDN);
        mpfr_mul(r8833900, r8833899, r8833899, MPFR_RNDN);
        ;
        mpfr_mul(r8833902, r8833900, r8833901, MPFR_RNDN);
        mpfr_mul(r8833903, r8833900, r8833900, MPFR_RNDN);
        mpfr_mul(r8833904, r8833902, r8833903, MPFR_RNDN);
        ;
        mpfr_mul(r8833906, r8833905, r8833899, MPFR_RNDN);
        ;
        mpfr_add(r8833908, r8833906, r8833907, MPFR_RNDN);
        mpfr_mul(r8833909, r8833903, r8833908, MPFR_RNDN);
        mpfr_add(r8833910, r8833904, r8833909, MPFR_RNDN);
        ;
        mpfr_mul(r8833912, r8833899, r8833911, MPFR_RNDN);
        ;
        mpfr_add(r8833914, r8833912, r8833913, MPFR_RNDN);
        ;
        mpfr_mul(r8833916, r8833915, r8833899, MPFR_RNDN);
        ;
        mpfr_add(r8833918, r8833916, r8833917, MPFR_RNDN);
        mpfr_mul(r8833919, r8833900, r8833918, MPFR_RNDN);
        mpfr_add(r8833920, r8833914, r8833919, MPFR_RNDN);
        mpfr_add(r8833921, r8833910, r8833920, MPFR_RNDN);
        ;
        mpfr_mul(r8833923, r8833922, r8833899, MPFR_RNDN);
        mpfr_mul(r8833924, r8833923, r8833900, MPFR_RNDN);
        mpfr_mul(r8833925, r8833924, r8833903, MPFR_RNDN);
        ;
        mpfr_add(r8833927, r8833926, r8833926, MPFR_RNDN);
        mpfr_pow(r8833928, r8833899, r8833927, MPFR_RNDN);
        mpfr_mul(r8833929, r8833928, r8833928, MPFR_RNDN);
        ;
        mpfr_mul(r8833931, r8833930, r8833899, MPFR_RNDN);
        ;
        mpfr_add(r8833933, r8833931, r8833932, MPFR_RNDN);
        mpfr_mul(r8833934, r8833929, r8833933, MPFR_RNDN);
        mpfr_add(r8833935, r8833925, r8833934, MPFR_RNDN);
        mpfr_add(r8833936, r8833921, r8833935, MPFR_RNDN);
        return mpfr_get_d(r8833936, MPFR_RNDN);
}

