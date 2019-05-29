#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r6898694 = -30240.0;
        float r6898695 = 302400.0;
        float r6898696 = x;
        float r6898697 = r6898696 * r6898696;
        float r6898698 = r6898695 * r6898697;
        float r6898699 = r6898694 + r6898698;
        float r6898700 = -403200.0;
        float r6898701 = r6898697 * r6898696;
        float r6898702 = r6898701 * r6898696;
        float r6898703 = r6898700 * r6898702;
        float r6898704 = r6898699 + r6898703;
        float r6898705 = 161280.0;
        float r6898706 = r6898702 * r6898696;
        float r6898707 = r6898706 * r6898696;
        float r6898708 = r6898705 * r6898707;
        float r6898709 = r6898704 + r6898708;
        float r6898710 = -23040.0;
        float r6898711 = r6898707 * r6898696;
        float r6898712 = r6898711 * r6898696;
        float r6898713 = r6898710 * r6898712;
        float r6898714 = r6898709 + r6898713;
        float r6898715 = 1024.0;
        float r6898716 = r6898712 * r6898696;
        float r6898717 = r6898716 * r6898696;
        float r6898718 = r6898715 * r6898717;
        float r6898719 = r6898714 + r6898718;
        return r6898719;
}

double f_id(double x) {
        double r6898720 = -30240.0;
        double r6898721 = 302400.0;
        double r6898722 = x;
        double r6898723 = r6898722 * r6898722;
        double r6898724 = r6898721 * r6898723;
        double r6898725 = r6898720 + r6898724;
        double r6898726 = -403200.0;
        double r6898727 = r6898723 * r6898722;
        double r6898728 = r6898727 * r6898722;
        double r6898729 = r6898726 * r6898728;
        double r6898730 = r6898725 + r6898729;
        double r6898731 = 161280.0;
        double r6898732 = r6898728 * r6898722;
        double r6898733 = r6898732 * r6898722;
        double r6898734 = r6898731 * r6898733;
        double r6898735 = r6898730 + r6898734;
        double r6898736 = -23040.0;
        double r6898737 = r6898733 * r6898722;
        double r6898738 = r6898737 * r6898722;
        double r6898739 = r6898736 * r6898738;
        double r6898740 = r6898735 + r6898739;
        double r6898741 = 1024.0;
        double r6898742 = r6898738 * r6898722;
        double r6898743 = r6898742 * r6898722;
        double r6898744 = r6898741 * r6898743;
        double r6898745 = r6898740 + r6898744;
        return r6898745;
}


double f_of(float x) {
        float r6898746 = x;
        float r6898747 = -403200.0;
        float r6898748 = r6898746 * r6898747;
        float r6898749 = 3;
        float r6898750 = pow(r6898746, r6898749);
        float r6898751 = r6898748 * r6898750;
        float r6898752 = -23040.0;
        float r6898753 = 8;
        float r6898754 = pow(r6898746, r6898753);
        float r6898755 = r6898752 * r6898754;
        float r6898756 = r6898751 + r6898755;
        float r6898757 = r6898746 * r6898746;
        float r6898758 = 302400.0;
        float r6898759 = r6898757 * r6898758;
        float r6898760 = -30240.0;
        float r6898761 = r6898759 + r6898760;
        float r6898762 = r6898756 + r6898761;
        float r6898763 = 161280.0;
        float r6898764 = r6898763 * r6898746;
        float r6898765 = 4;
        float r6898766 = pow(r6898746, r6898765);
        float r6898767 = r6898746 * r6898766;
        float r6898768 = r6898764 * r6898767;
        float r6898769 = pow(r6898750, r6898749);
        float r6898770 = 1024.0;
        float r6898771 = r6898770 * r6898746;
        float r6898772 = r6898769 * r6898771;
        float r6898773 = r6898768 + r6898772;
        float r6898774 = r6898762 + r6898773;
        return r6898774;
}

double f_od(double x) {
        double r6898775 = x;
        double r6898776 = -403200.0;
        double r6898777 = r6898775 * r6898776;
        double r6898778 = 3;
        double r6898779 = pow(r6898775, r6898778);
        double r6898780 = r6898777 * r6898779;
        double r6898781 = -23040.0;
        double r6898782 = 8;
        double r6898783 = pow(r6898775, r6898782);
        double r6898784 = r6898781 * r6898783;
        double r6898785 = r6898780 + r6898784;
        double r6898786 = r6898775 * r6898775;
        double r6898787 = 302400.0;
        double r6898788 = r6898786 * r6898787;
        double r6898789 = -30240.0;
        double r6898790 = r6898788 + r6898789;
        double r6898791 = r6898785 + r6898790;
        double r6898792 = 161280.0;
        double r6898793 = r6898792 * r6898775;
        double r6898794 = 4;
        double r6898795 = pow(r6898775, r6898794);
        double r6898796 = r6898775 * r6898795;
        double r6898797 = r6898793 * r6898796;
        double r6898798 = pow(r6898779, r6898778);
        double r6898799 = 1024.0;
        double r6898800 = r6898799 * r6898775;
        double r6898801 = r6898798 * r6898800;
        double r6898802 = r6898797 + r6898801;
        double r6898803 = r6898791 + r6898802;
        return r6898803;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6898804, r6898805, r6898806, r6898807, r6898808, r6898809, r6898810, r6898811, r6898812, r6898813, r6898814, r6898815, r6898816, r6898817, r6898818, r6898819, r6898820, r6898821, r6898822, r6898823, r6898824, r6898825, r6898826, r6898827, r6898828, r6898829;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6898804, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6898805, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r6898806);
        mpfr_init(r6898807);
        mpfr_init(r6898808);
        mpfr_init(r6898809);
        mpfr_init_set_str(r6898810, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r6898811);
        mpfr_init(r6898812);
        mpfr_init(r6898813);
        mpfr_init(r6898814);
        mpfr_init_set_str(r6898815, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r6898816);
        mpfr_init(r6898817);
        mpfr_init(r6898818);
        mpfr_init(r6898819);
        mpfr_init_set_str(r6898820, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r6898821);
        mpfr_init(r6898822);
        mpfr_init(r6898823);
        mpfr_init(r6898824);
        mpfr_init_set_str(r6898825, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r6898826);
        mpfr_init(r6898827);
        mpfr_init(r6898828);
        mpfr_init(r6898829);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r6898806, x, MPFR_RNDN);
        mpfr_mul(r6898807, r6898806, r6898806, MPFR_RNDN);
        mpfr_mul(r6898808, r6898805, r6898807, MPFR_RNDN);
        mpfr_add(r6898809, r6898804, r6898808, MPFR_RNDN);
        ;
        mpfr_mul(r6898811, r6898807, r6898806, MPFR_RNDN);
        mpfr_mul(r6898812, r6898811, r6898806, MPFR_RNDN);
        mpfr_mul(r6898813, r6898810, r6898812, MPFR_RNDN);
        mpfr_add(r6898814, r6898809, r6898813, MPFR_RNDN);
        ;
        mpfr_mul(r6898816, r6898812, r6898806, MPFR_RNDN);
        mpfr_mul(r6898817, r6898816, r6898806, MPFR_RNDN);
        mpfr_mul(r6898818, r6898815, r6898817, MPFR_RNDN);
        mpfr_add(r6898819, r6898814, r6898818, MPFR_RNDN);
        ;
        mpfr_mul(r6898821, r6898817, r6898806, MPFR_RNDN);
        mpfr_mul(r6898822, r6898821, r6898806, MPFR_RNDN);
        mpfr_mul(r6898823, r6898820, r6898822, MPFR_RNDN);
        mpfr_add(r6898824, r6898819, r6898823, MPFR_RNDN);
        ;
        mpfr_mul(r6898826, r6898822, r6898806, MPFR_RNDN);
        mpfr_mul(r6898827, r6898826, r6898806, MPFR_RNDN);
        mpfr_mul(r6898828, r6898825, r6898827, MPFR_RNDN);
        mpfr_add(r6898829, r6898824, r6898828, MPFR_RNDN);
        return mpfr_get_d(r6898829, MPFR_RNDN);
}

static mpfr_t r6898830, r6898831, r6898832, r6898833, r6898834, r6898835, r6898836, r6898837, r6898838, r6898839, r6898840, r6898841, r6898842, r6898843, r6898844, r6898845, r6898846, r6898847, r6898848, r6898849, r6898850, r6898851, r6898852, r6898853, r6898854, r6898855, r6898856, r6898857, r6898858;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6898830);
        mpfr_init_set_str(r6898831, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r6898832);
        mpfr_init_set_str(r6898833, "3", 10, MPFR_RNDN);
        mpfr_init(r6898834);
        mpfr_init(r6898835);
        mpfr_init_set_str(r6898836, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6898837, "8", 10, MPFR_RNDN);
        mpfr_init(r6898838);
        mpfr_init(r6898839);
        mpfr_init(r6898840);
        mpfr_init(r6898841);
        mpfr_init_set_str(r6898842, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r6898843);
        mpfr_init_set_str(r6898844, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r6898845);
        mpfr_init(r6898846);
        mpfr_init_set_str(r6898847, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r6898848);
        mpfr_init_set_str(r6898849, "4", 10, MPFR_RNDN);
        mpfr_init(r6898850);
        mpfr_init(r6898851);
        mpfr_init(r6898852);
        mpfr_init(r6898853);
        mpfr_init_set_str(r6898854, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r6898855);
        mpfr_init(r6898856);
        mpfr_init(r6898857);
        mpfr_init(r6898858);
}

double f_fm(double x) {
        mpfr_set_d(r6898830, x, MPFR_RNDN);
        ;
        mpfr_mul(r6898832, r6898830, r6898831, MPFR_RNDN);
        ;
        mpfr_pow(r6898834, r6898830, r6898833, MPFR_RNDN);
        mpfr_mul(r6898835, r6898832, r6898834, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6898838, r6898830, r6898837, MPFR_RNDN);
        mpfr_mul(r6898839, r6898836, r6898838, MPFR_RNDN);
        mpfr_add(r6898840, r6898835, r6898839, MPFR_RNDN);
        mpfr_mul(r6898841, r6898830, r6898830, MPFR_RNDN);
        ;
        mpfr_mul(r6898843, r6898841, r6898842, MPFR_RNDN);
        ;
        mpfr_add(r6898845, r6898843, r6898844, MPFR_RNDN);
        mpfr_add(r6898846, r6898840, r6898845, MPFR_RNDN);
        ;
        mpfr_mul(r6898848, r6898847, r6898830, MPFR_RNDN);
        ;
        mpfr_pow(r6898850, r6898830, r6898849, MPFR_RNDN);
        mpfr_mul(r6898851, r6898830, r6898850, MPFR_RNDN);
        mpfr_mul(r6898852, r6898848, r6898851, MPFR_RNDN);
        mpfr_pow(r6898853, r6898834, r6898833, MPFR_RNDN);
        ;
        mpfr_mul(r6898855, r6898854, r6898830, MPFR_RNDN);
        mpfr_mul(r6898856, r6898853, r6898855, MPFR_RNDN);
        mpfr_add(r6898857, r6898852, r6898856, MPFR_RNDN);
        mpfr_add(r6898858, r6898846, r6898857, MPFR_RNDN);
        return mpfr_get_d(r6898858, MPFR_RNDN);
}

static mpfr_t r6898859, r6898860, r6898861, r6898862, r6898863, r6898864, r6898865, r6898866, r6898867, r6898868, r6898869, r6898870, r6898871, r6898872, r6898873, r6898874, r6898875, r6898876, r6898877, r6898878, r6898879, r6898880, r6898881, r6898882, r6898883, r6898884, r6898885, r6898886, r6898887;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6898859);
        mpfr_init_set_str(r6898860, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r6898861);
        mpfr_init_set_str(r6898862, "3", 10, MPFR_RNDN);
        mpfr_init(r6898863);
        mpfr_init(r6898864);
        mpfr_init_set_str(r6898865, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6898866, "8", 10, MPFR_RNDN);
        mpfr_init(r6898867);
        mpfr_init(r6898868);
        mpfr_init(r6898869);
        mpfr_init(r6898870);
        mpfr_init_set_str(r6898871, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r6898872);
        mpfr_init_set_str(r6898873, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r6898874);
        mpfr_init(r6898875);
        mpfr_init_set_str(r6898876, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r6898877);
        mpfr_init_set_str(r6898878, "4", 10, MPFR_RNDN);
        mpfr_init(r6898879);
        mpfr_init(r6898880);
        mpfr_init(r6898881);
        mpfr_init(r6898882);
        mpfr_init_set_str(r6898883, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r6898884);
        mpfr_init(r6898885);
        mpfr_init(r6898886);
        mpfr_init(r6898887);
}

double f_dm(double x) {
        mpfr_set_d(r6898859, x, MPFR_RNDN);
        ;
        mpfr_mul(r6898861, r6898859, r6898860, MPFR_RNDN);
        ;
        mpfr_pow(r6898863, r6898859, r6898862, MPFR_RNDN);
        mpfr_mul(r6898864, r6898861, r6898863, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r6898867, r6898859, r6898866, MPFR_RNDN);
        mpfr_mul(r6898868, r6898865, r6898867, MPFR_RNDN);
        mpfr_add(r6898869, r6898864, r6898868, MPFR_RNDN);
        mpfr_mul(r6898870, r6898859, r6898859, MPFR_RNDN);
        ;
        mpfr_mul(r6898872, r6898870, r6898871, MPFR_RNDN);
        ;
        mpfr_add(r6898874, r6898872, r6898873, MPFR_RNDN);
        mpfr_add(r6898875, r6898869, r6898874, MPFR_RNDN);
        ;
        mpfr_mul(r6898877, r6898876, r6898859, MPFR_RNDN);
        ;
        mpfr_pow(r6898879, r6898859, r6898878, MPFR_RNDN);
        mpfr_mul(r6898880, r6898859, r6898879, MPFR_RNDN);
        mpfr_mul(r6898881, r6898877, r6898880, MPFR_RNDN);
        mpfr_pow(r6898882, r6898863, r6898862, MPFR_RNDN);
        ;
        mpfr_mul(r6898884, r6898883, r6898859, MPFR_RNDN);
        mpfr_mul(r6898885, r6898882, r6898884, MPFR_RNDN);
        mpfr_add(r6898886, r6898881, r6898885, MPFR_RNDN);
        mpfr_add(r6898887, r6898875, r6898886, MPFR_RNDN);
        return mpfr_get_d(r6898887, MPFR_RNDN);
}

