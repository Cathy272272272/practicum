#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r8595701 = 1.0;
        float r8595702 = -6.0;
        float r8595703 = x;
        float r8595704 = r8595702 * r8595703;
        float r8595705 = r8595701 + r8595704;
        float r8595706 = 7.5;
        float r8595707 = r8595703 * r8595703;
        float r8595708 = r8595706 * r8595707;
        float r8595709 = r8595705 + r8595708;
        float r8595710 = -3.333333;
        float r8595711 = r8595707 * r8595703;
        float r8595712 = r8595710 * r8595711;
        float r8595713 = r8595709 + r8595712;
        float r8595714 = 0.625;
        float r8595715 = r8595711 * r8595703;
        float r8595716 = r8595714 * r8595715;
        float r8595717 = r8595713 + r8595716;
        float r8595718 = -0.05;
        float r8595719 = r8595715 * r8595703;
        float r8595720 = r8595718 * r8595719;
        float r8595721 = r8595717 + r8595720;
        float r8595722 = 0.001389;
        float r8595723 = r8595719 * r8595703;
        float r8595724 = r8595722 * r8595723;
        float r8595725 = r8595721 + r8595724;
        return r8595725;
}

double f_id(double x) {
        double r8595726 = 1.0;
        double r8595727 = -6.0;
        double r8595728 = x;
        double r8595729 = r8595727 * r8595728;
        double r8595730 = r8595726 + r8595729;
        double r8595731 = 7.5;
        double r8595732 = r8595728 * r8595728;
        double r8595733 = r8595731 * r8595732;
        double r8595734 = r8595730 + r8595733;
        double r8595735 = -3.333333;
        double r8595736 = r8595732 * r8595728;
        double r8595737 = r8595735 * r8595736;
        double r8595738 = r8595734 + r8595737;
        double r8595739 = 0.625;
        double r8595740 = r8595736 * r8595728;
        double r8595741 = r8595739 * r8595740;
        double r8595742 = r8595738 + r8595741;
        double r8595743 = -0.05;
        double r8595744 = r8595740 * r8595728;
        double r8595745 = r8595743 * r8595744;
        double r8595746 = r8595742 + r8595745;
        double r8595747 = 0.001389;
        double r8595748 = r8595744 * r8595728;
        double r8595749 = r8595747 * r8595748;
        double r8595750 = r8595746 + r8595749;
        return r8595750;
}


double f_of(float x) {
        float r8595751 = x;
        float r8595752 = 0.001389;
        float r8595753 = r8595752 * r8595751;
        float r8595754 = r8595751 * r8595753;
        float r8595755 = r8595751 * r8595751;
        float r8595756 = r8595755 * r8595755;
        float r8595757 = r8595754 * r8595756;
        float r8595758 = -6.0;
        float r8595759 = r8595751 * r8595758;
        float r8595760 = 1.0;
        float r8595761 = r8595759 + r8595760;
        float r8595762 = r8595757 + r8595761;
        float r8595763 = 0.625;
        float r8595764 = -0.05;
        float r8595765 = r8595764 * r8595751;
        float r8595766 = r8595763 + r8595765;
        float r8595767 = r8595756 * r8595766;
        float r8595768 = -3.333333;
        float r8595769 = r8595768 * r8595751;
        float r8595770 = 7.5;
        float r8595771 = r8595769 + r8595770;
        float r8595772 = r8595755 * r8595771;
        float r8595773 = r8595767 + r8595772;
        float r8595774 = r8595762 + r8595773;
        return r8595774;
}

double f_od(double x) {
        double r8595775 = x;
        double r8595776 = 0.001389;
        double r8595777 = r8595776 * r8595775;
        double r8595778 = r8595775 * r8595777;
        double r8595779 = r8595775 * r8595775;
        double r8595780 = r8595779 * r8595779;
        double r8595781 = r8595778 * r8595780;
        double r8595782 = -6.0;
        double r8595783 = r8595775 * r8595782;
        double r8595784 = 1.0;
        double r8595785 = r8595783 + r8595784;
        double r8595786 = r8595781 + r8595785;
        double r8595787 = 0.625;
        double r8595788 = -0.05;
        double r8595789 = r8595788 * r8595775;
        double r8595790 = r8595787 + r8595789;
        double r8595791 = r8595780 * r8595790;
        double r8595792 = -3.333333;
        double r8595793 = r8595792 * r8595775;
        double r8595794 = 7.5;
        double r8595795 = r8595793 + r8595794;
        double r8595796 = r8595779 * r8595795;
        double r8595797 = r8595791 + r8595796;
        double r8595798 = r8595786 + r8595797;
        return r8595798;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8595799, r8595800, r8595801, r8595802, r8595803, r8595804, r8595805, r8595806, r8595807, r8595808, r8595809, r8595810, r8595811, r8595812, r8595813, r8595814, r8595815, r8595816, r8595817, r8595818, r8595819, r8595820, r8595821, r8595822, r8595823;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r8595799, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595800, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r8595801);
        mpfr_init(r8595802);
        mpfr_init(r8595803);
        mpfr_init_set_str(r8595804, "7.5", 10, MPFR_RNDN);
        mpfr_init(r8595805);
        mpfr_init(r8595806);
        mpfr_init(r8595807);
        mpfr_init_set_str(r8595808, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r8595809);
        mpfr_init(r8595810);
        mpfr_init(r8595811);
        mpfr_init_set_str(r8595812, "0.625", 10, MPFR_RNDN);
        mpfr_init(r8595813);
        mpfr_init(r8595814);
        mpfr_init(r8595815);
        mpfr_init_set_str(r8595816, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r8595817);
        mpfr_init(r8595818);
        mpfr_init(r8595819);
        mpfr_init_set_str(r8595820, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r8595821);
        mpfr_init(r8595822);
        mpfr_init(r8595823);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8595801, x, MPFR_RNDN);
        mpfr_mul(r8595802, r8595800, r8595801, MPFR_RNDN);
        mpfr_add(r8595803, r8595799, r8595802, MPFR_RNDN);
        ;
        mpfr_mul(r8595805, r8595801, r8595801, MPFR_RNDN);
        mpfr_mul(r8595806, r8595804, r8595805, MPFR_RNDN);
        mpfr_add(r8595807, r8595803, r8595806, MPFR_RNDN);
        ;
        mpfr_mul(r8595809, r8595805, r8595801, MPFR_RNDN);
        mpfr_mul(r8595810, r8595808, r8595809, MPFR_RNDN);
        mpfr_add(r8595811, r8595807, r8595810, MPFR_RNDN);
        ;
        mpfr_mul(r8595813, r8595809, r8595801, MPFR_RNDN);
        mpfr_mul(r8595814, r8595812, r8595813, MPFR_RNDN);
        mpfr_add(r8595815, r8595811, r8595814, MPFR_RNDN);
        ;
        mpfr_mul(r8595817, r8595813, r8595801, MPFR_RNDN);
        mpfr_mul(r8595818, r8595816, r8595817, MPFR_RNDN);
        mpfr_add(r8595819, r8595815, r8595818, MPFR_RNDN);
        ;
        mpfr_mul(r8595821, r8595817, r8595801, MPFR_RNDN);
        mpfr_mul(r8595822, r8595820, r8595821, MPFR_RNDN);
        mpfr_add(r8595823, r8595819, r8595822, MPFR_RNDN);
        return mpfr_get_d(r8595823, MPFR_RNDN);
}

static mpfr_t r8595824, r8595825, r8595826, r8595827, r8595828, r8595829, r8595830, r8595831, r8595832, r8595833, r8595834, r8595835, r8595836, r8595837, r8595838, r8595839, r8595840, r8595841, r8595842, r8595843, r8595844, r8595845, r8595846, r8595847;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8595824);
        mpfr_init_set_str(r8595825, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r8595826);
        mpfr_init(r8595827);
        mpfr_init(r8595828);
        mpfr_init(r8595829);
        mpfr_init(r8595830);
        mpfr_init_set_str(r8595831, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r8595832);
        mpfr_init_set_str(r8595833, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8595834);
        mpfr_init(r8595835);
        mpfr_init_set_str(r8595836, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595837, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r8595838);
        mpfr_init(r8595839);
        mpfr_init(r8595840);
        mpfr_init_set_str(r8595841, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r8595842);
        mpfr_init_set_str(r8595843, "7.5", 10, MPFR_RNDN);
        mpfr_init(r8595844);
        mpfr_init(r8595845);
        mpfr_init(r8595846);
        mpfr_init(r8595847);
}

double f_fm(double x) {
        mpfr_set_d(r8595824, x, MPFR_RNDN);
        ;
        mpfr_mul(r8595826, r8595825, r8595824, MPFR_RNDN);
        mpfr_mul(r8595827, r8595824, r8595826, MPFR_RNDN);
        mpfr_mul(r8595828, r8595824, r8595824, MPFR_RNDN);
        mpfr_mul(r8595829, r8595828, r8595828, MPFR_RNDN);
        mpfr_mul(r8595830, r8595827, r8595829, MPFR_RNDN);
        ;
        mpfr_mul(r8595832, r8595824, r8595831, MPFR_RNDN);
        ;
        mpfr_add(r8595834, r8595832, r8595833, MPFR_RNDN);
        mpfr_add(r8595835, r8595830, r8595834, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8595838, r8595837, r8595824, MPFR_RNDN);
        mpfr_add(r8595839, r8595836, r8595838, MPFR_RNDN);
        mpfr_mul(r8595840, r8595829, r8595839, MPFR_RNDN);
        ;
        mpfr_mul(r8595842, r8595841, r8595824, MPFR_RNDN);
        ;
        mpfr_add(r8595844, r8595842, r8595843, MPFR_RNDN);
        mpfr_mul(r8595845, r8595828, r8595844, MPFR_RNDN);
        mpfr_add(r8595846, r8595840, r8595845, MPFR_RNDN);
        mpfr_add(r8595847, r8595835, r8595846, MPFR_RNDN);
        return mpfr_get_d(r8595847, MPFR_RNDN);
}

static mpfr_t r8595848, r8595849, r8595850, r8595851, r8595852, r8595853, r8595854, r8595855, r8595856, r8595857, r8595858, r8595859, r8595860, r8595861, r8595862, r8595863, r8595864, r8595865, r8595866, r8595867, r8595868, r8595869, r8595870, r8595871;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r8595848);
        mpfr_init_set_str(r8595849, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r8595850);
        mpfr_init(r8595851);
        mpfr_init(r8595852);
        mpfr_init(r8595853);
        mpfr_init(r8595854);
        mpfr_init_set_str(r8595855, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r8595856);
        mpfr_init_set_str(r8595857, "1.0", 10, MPFR_RNDN);
        mpfr_init(r8595858);
        mpfr_init(r8595859);
        mpfr_init_set_str(r8595860, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r8595861, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r8595862);
        mpfr_init(r8595863);
        mpfr_init(r8595864);
        mpfr_init_set_str(r8595865, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r8595866);
        mpfr_init_set_str(r8595867, "7.5", 10, MPFR_RNDN);
        mpfr_init(r8595868);
        mpfr_init(r8595869);
        mpfr_init(r8595870);
        mpfr_init(r8595871);
}

double f_dm(double x) {
        mpfr_set_d(r8595848, x, MPFR_RNDN);
        ;
        mpfr_mul(r8595850, r8595849, r8595848, MPFR_RNDN);
        mpfr_mul(r8595851, r8595848, r8595850, MPFR_RNDN);
        mpfr_mul(r8595852, r8595848, r8595848, MPFR_RNDN);
        mpfr_mul(r8595853, r8595852, r8595852, MPFR_RNDN);
        mpfr_mul(r8595854, r8595851, r8595853, MPFR_RNDN);
        ;
        mpfr_mul(r8595856, r8595848, r8595855, MPFR_RNDN);
        ;
        mpfr_add(r8595858, r8595856, r8595857, MPFR_RNDN);
        mpfr_add(r8595859, r8595854, r8595858, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r8595862, r8595861, r8595848, MPFR_RNDN);
        mpfr_add(r8595863, r8595860, r8595862, MPFR_RNDN);
        mpfr_mul(r8595864, r8595853, r8595863, MPFR_RNDN);
        ;
        mpfr_mul(r8595866, r8595865, r8595848, MPFR_RNDN);
        ;
        mpfr_add(r8595868, r8595866, r8595867, MPFR_RNDN);
        mpfr_mul(r8595869, r8595852, r8595868, MPFR_RNDN);
        mpfr_add(r8595870, r8595864, r8595869, MPFR_RNDN);
        mpfr_add(r8595871, r8595859, r8595870, MPFR_RNDN);
        return mpfr_get_d(r8595871, MPFR_RNDN);
}

