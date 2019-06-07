#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "35";

double f_if(float x) {
        float r20869569 = 1.0;
        float r20869570 = -35.0;
        float r20869571 = x;
        float r20869572 = r20869570 * r20869571;
        float r20869573 = r20869569 + r20869572;
        float r20869574 = 297.5;
        float r20869575 = r20869571 * r20869571;
        float r20869576 = r20869574 * r20869575;
        float r20869577 = r20869573 + r20869576;
        float r20869578 = -1090.833333;
        float r20869579 = r20869575 * r20869571;
        float r20869580 = r20869578 * r20869579;
        float r20869581 = r20869577 + r20869580;
        float r20869582 = 2181.666667;
        float r20869583 = r20869579 * r20869571;
        float r20869584 = r20869582 * r20869583;
        float r20869585 = r20869581 + r20869584;
        float r20869586 = -2705.266667;
        float r20869587 = r20869583 * r20869571;
        float r20869588 = r20869586 * r20869587;
        float r20869589 = r20869585 + r20869588;
        float r20869590 = 2254.388889;
        float r20869591 = r20869587 * r20869571;
        float r20869592 = r20869590 * r20869591;
        float r20869593 = r20869589 + r20869592;
        float r20869594 = -1334.230159;
        float r20869595 = r20869591 * r20869571;
        float r20869596 = r20869594 * r20869595;
        float r20869597 = r20869593 + r20869596;
        float r20869598 = 583.725694;
        float r20869599 = r20869595 * r20869571;
        float r20869600 = r20869598 * r20869599;
        float r20869601 = r20869597 + r20869600;
        float r20869602 = -194.575231;
        float r20869603 = r20869599 * r20869571;
        float r20869604 = r20869602 * r20869603;
        float r20869605 = r20869601 + r20869604;
        float r20869606 = 50.58956;
        float r20869607 = r20869603 * r20869571;
        float r20869608 = r20869606 * r20869607;
        float r20869609 = r20869605 + r20869608;
        float r20869610 = -10.452388;
        float r20869611 = r20869607 * r20869571;
        float r20869612 = r20869610 * r20869611;
        float r20869613 = r20869609 + r20869612;
        float r20869614 = 1.742065;
        float r20869615 = r20869611 * r20869571;
        float r20869616 = r20869614 * r20869615;
        float r20869617 = r20869613 + r20869616;
        float r20869618 = -0.237086;
        float r20869619 = r20869615 * r20869571;
        float r20869620 = r20869618 * r20869619;
        float r20869621 = r20869617 + r20869620;
        float r20869622 = 0.026612;
        float r20869623 = r20869619 * r20869571;
        float r20869624 = r20869622 * r20869623;
        float r20869625 = r20869621 + r20869624;
        float r20869626 = -0.002484;
        float r20869627 = r20869623 * r20869571;
        float r20869628 = r20869626 * r20869627;
        float r20869629 = r20869625 + r20869628;
        float r20869630 = 0.000194;
        float r20869631 = r20869627 * r20869571;
        float r20869632 = r20869630 * r20869631;
        float r20869633 = r20869629 + r20869632;
        float r20869634 = -1.3e-05;
        float r20869635 = r20869631 * r20869571;
        float r20869636 = r20869634 * r20869635;
        float r20869637 = r20869633 + r20869636;
        float r20869638 = 1e-06;
        float r20869639 = r20869635 * r20869571;
        float r20869640 = r20869638 * r20869639;
        float r20869641 = r20869637 + r20869640;
        return r20869641;
}

double f_id(double x) {
        double r20869642 = 1.0;
        double r20869643 = -35.0;
        double r20869644 = x;
        double r20869645 = r20869643 * r20869644;
        double r20869646 = r20869642 + r20869645;
        double r20869647 = 297.5;
        double r20869648 = r20869644 * r20869644;
        double r20869649 = r20869647 * r20869648;
        double r20869650 = r20869646 + r20869649;
        double r20869651 = -1090.833333;
        double r20869652 = r20869648 * r20869644;
        double r20869653 = r20869651 * r20869652;
        double r20869654 = r20869650 + r20869653;
        double r20869655 = 2181.666667;
        double r20869656 = r20869652 * r20869644;
        double r20869657 = r20869655 * r20869656;
        double r20869658 = r20869654 + r20869657;
        double r20869659 = -2705.266667;
        double r20869660 = r20869656 * r20869644;
        double r20869661 = r20869659 * r20869660;
        double r20869662 = r20869658 + r20869661;
        double r20869663 = 2254.388889;
        double r20869664 = r20869660 * r20869644;
        double r20869665 = r20869663 * r20869664;
        double r20869666 = r20869662 + r20869665;
        double r20869667 = -1334.230159;
        double r20869668 = r20869664 * r20869644;
        double r20869669 = r20869667 * r20869668;
        double r20869670 = r20869666 + r20869669;
        double r20869671 = 583.725694;
        double r20869672 = r20869668 * r20869644;
        double r20869673 = r20869671 * r20869672;
        double r20869674 = r20869670 + r20869673;
        double r20869675 = -194.575231;
        double r20869676 = r20869672 * r20869644;
        double r20869677 = r20869675 * r20869676;
        double r20869678 = r20869674 + r20869677;
        double r20869679 = 50.58956;
        double r20869680 = r20869676 * r20869644;
        double r20869681 = r20869679 * r20869680;
        double r20869682 = r20869678 + r20869681;
        double r20869683 = -10.452388;
        double r20869684 = r20869680 * r20869644;
        double r20869685 = r20869683 * r20869684;
        double r20869686 = r20869682 + r20869685;
        double r20869687 = 1.742065;
        double r20869688 = r20869684 * r20869644;
        double r20869689 = r20869687 * r20869688;
        double r20869690 = r20869686 + r20869689;
        double r20869691 = -0.237086;
        double r20869692 = r20869688 * r20869644;
        double r20869693 = r20869691 * r20869692;
        double r20869694 = r20869690 + r20869693;
        double r20869695 = 0.026612;
        double r20869696 = r20869692 * r20869644;
        double r20869697 = r20869695 * r20869696;
        double r20869698 = r20869694 + r20869697;
        double r20869699 = -0.002484;
        double r20869700 = r20869696 * r20869644;
        double r20869701 = r20869699 * r20869700;
        double r20869702 = r20869698 + r20869701;
        double r20869703 = 0.000194;
        double r20869704 = r20869700 * r20869644;
        double r20869705 = r20869703 * r20869704;
        double r20869706 = r20869702 + r20869705;
        double r20869707 = -1.3e-05;
        double r20869708 = r20869704 * r20869644;
        double r20869709 = r20869707 * r20869708;
        double r20869710 = r20869706 + r20869709;
        double r20869711 = 1e-06;
        double r20869712 = r20869708 * r20869644;
        double r20869713 = r20869711 * r20869712;
        double r20869714 = r20869710 + r20869713;
        return r20869714;
}


double f_of(float x) {
        float r20869715 = -1.3e-05;
        float r20869716 = x;
        float r20869717 = r20869715 * r20869716;
        float r20869718 = r20869716 * r20869716;
        float r20869719 = r20869718 * r20869718;
        float r20869720 = r20869719 * r20869719;
        float r20869721 = r20869720 * r20869719;
        float r20869722 = r20869721 * r20869719;
        float r20869723 = r20869717 * r20869722;
        float r20869724 = 1e-06;
        float r20869725 = r20869718 * r20869724;
        float r20869726 = r20869722 * r20869725;
        float r20869727 = r20869723 + r20869726;
        float r20869728 = 2181.666667;
        float r20869729 = r20869728 * r20869716;
        float r20869730 = 3;
        float r20869731 = pow(r20869716, r20869730);
        float r20869732 = r20869729 * r20869731;
        float r20869733 = -2705.266667;
        float r20869734 = r20869733 * r20869716;
        float r20869735 = r20869734 * r20869719;
        float r20869736 = r20869732 + r20869735;
        float r20869737 = -1090.833333;
        float r20869738 = r20869716 * r20869737;
        float r20869739 = r20869718 * r20869738;
        float r20869740 = 1.0;
        float r20869741 = r20869739 + r20869740;
        float r20869742 = -35.0;
        float r20869743 = 297.5;
        float r20869744 = r20869716 * r20869743;
        float r20869745 = r20869742 + r20869744;
        float r20869746 = r20869716 * r20869745;
        float r20869747 = r20869741 + r20869746;
        float r20869748 = r20869736 + r20869747;
        float r20869749 = 2254.388889;
        float r20869750 = r20869718 * r20869749;
        float r20869751 = r20869719 * r20869750;
        float r20869752 = r20869731 * r20869731;
        float r20869753 = 583.725694;
        float r20869754 = r20869718 * r20869753;
        float r20869755 = r20869752 * r20869754;
        float r20869756 = -1334.230159;
        float r20869757 = r20869756 * r20869716;
        float r20869758 = r20869757 * r20869752;
        float r20869759 = r20869755 + r20869758;
        float r20869760 = r20869751 + r20869759;
        float r20869761 = r20869748 + r20869760;
        float r20869762 = -194.575231;
        float r20869763 = r20869716 * r20869762;
        float r20869764 = r20869720 * r20869763;
        float r20869765 = 50.58956;
        float r20869766 = r20869718 * r20869765;
        float r20869767 = r20869720 * r20869766;
        float r20869768 = r20869764 + r20869767;
        float r20869769 = r20869752 * r20869731;
        float r20869770 = -10.452388;
        float r20869771 = r20869718 * r20869770;
        float r20869772 = r20869769 * r20869771;
        float r20869773 = r20869752 * r20869719;
        float r20869774 = 1.742065;
        float r20869775 = r20869718 * r20869774;
        float r20869776 = r20869773 * r20869775;
        float r20869777 = r20869772 + r20869776;
        float r20869778 = r20869768 + r20869777;
        float r20869779 = r20869761 + r20869778;
        float r20869780 = 0.026612;
        float r20869781 = r20869718 * r20869780;
        float r20869782 = r20869721 * r20869781;
        float r20869783 = -0.237086;
        float r20869784 = r20869716 * r20869783;
        float r20869785 = r20869721 * r20869784;
        float r20869786 = r20869782 + r20869785;
        float r20869787 = r20869773 * r20869719;
        float r20869788 = 0.000194;
        float r20869789 = r20869718 * r20869788;
        float r20869790 = r20869787 * r20869789;
        float r20869791 = -0.002484;
        float r20869792 = r20869791 * r20869716;
        float r20869793 = r20869792 * r20869787;
        float r20869794 = r20869790 + r20869793;
        float r20869795 = r20869786 + r20869794;
        float r20869796 = r20869779 + r20869795;
        float r20869797 = r20869727 + r20869796;
        return r20869797;
}

double f_od(double x) {
        double r20869798 = -1.3e-05;
        double r20869799 = x;
        double r20869800 = r20869798 * r20869799;
        double r20869801 = r20869799 * r20869799;
        double r20869802 = r20869801 * r20869801;
        double r20869803 = r20869802 * r20869802;
        double r20869804 = r20869803 * r20869802;
        double r20869805 = r20869804 * r20869802;
        double r20869806 = r20869800 * r20869805;
        double r20869807 = 1e-06;
        double r20869808 = r20869801 * r20869807;
        double r20869809 = r20869805 * r20869808;
        double r20869810 = r20869806 + r20869809;
        double r20869811 = 2181.666667;
        double r20869812 = r20869811 * r20869799;
        double r20869813 = 3;
        double r20869814 = pow(r20869799, r20869813);
        double r20869815 = r20869812 * r20869814;
        double r20869816 = -2705.266667;
        double r20869817 = r20869816 * r20869799;
        double r20869818 = r20869817 * r20869802;
        double r20869819 = r20869815 + r20869818;
        double r20869820 = -1090.833333;
        double r20869821 = r20869799 * r20869820;
        double r20869822 = r20869801 * r20869821;
        double r20869823 = 1.0;
        double r20869824 = r20869822 + r20869823;
        double r20869825 = -35.0;
        double r20869826 = 297.5;
        double r20869827 = r20869799 * r20869826;
        double r20869828 = r20869825 + r20869827;
        double r20869829 = r20869799 * r20869828;
        double r20869830 = r20869824 + r20869829;
        double r20869831 = r20869819 + r20869830;
        double r20869832 = 2254.388889;
        double r20869833 = r20869801 * r20869832;
        double r20869834 = r20869802 * r20869833;
        double r20869835 = r20869814 * r20869814;
        double r20869836 = 583.725694;
        double r20869837 = r20869801 * r20869836;
        double r20869838 = r20869835 * r20869837;
        double r20869839 = -1334.230159;
        double r20869840 = r20869839 * r20869799;
        double r20869841 = r20869840 * r20869835;
        double r20869842 = r20869838 + r20869841;
        double r20869843 = r20869834 + r20869842;
        double r20869844 = r20869831 + r20869843;
        double r20869845 = -194.575231;
        double r20869846 = r20869799 * r20869845;
        double r20869847 = r20869803 * r20869846;
        double r20869848 = 50.58956;
        double r20869849 = r20869801 * r20869848;
        double r20869850 = r20869803 * r20869849;
        double r20869851 = r20869847 + r20869850;
        double r20869852 = r20869835 * r20869814;
        double r20869853 = -10.452388;
        double r20869854 = r20869801 * r20869853;
        double r20869855 = r20869852 * r20869854;
        double r20869856 = r20869835 * r20869802;
        double r20869857 = 1.742065;
        double r20869858 = r20869801 * r20869857;
        double r20869859 = r20869856 * r20869858;
        double r20869860 = r20869855 + r20869859;
        double r20869861 = r20869851 + r20869860;
        double r20869862 = r20869844 + r20869861;
        double r20869863 = 0.026612;
        double r20869864 = r20869801 * r20869863;
        double r20869865 = r20869804 * r20869864;
        double r20869866 = -0.237086;
        double r20869867 = r20869799 * r20869866;
        double r20869868 = r20869804 * r20869867;
        double r20869869 = r20869865 + r20869868;
        double r20869870 = r20869856 * r20869802;
        double r20869871 = 0.000194;
        double r20869872 = r20869801 * r20869871;
        double r20869873 = r20869870 * r20869872;
        double r20869874 = -0.002484;
        double r20869875 = r20869874 * r20869799;
        double r20869876 = r20869875 * r20869870;
        double r20869877 = r20869873 + r20869876;
        double r20869878 = r20869869 + r20869877;
        double r20869879 = r20869862 + r20869878;
        double r20869880 = r20869810 + r20869879;
        return r20869880;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20869881, r20869882, r20869883, r20869884, r20869885, r20869886, r20869887, r20869888, r20869889, r20869890, r20869891, r20869892, r20869893, r20869894, r20869895, r20869896, r20869897, r20869898, r20869899, r20869900, r20869901, r20869902, r20869903, r20869904, r20869905, r20869906, r20869907, r20869908, r20869909, r20869910, r20869911, r20869912, r20869913, r20869914, r20869915, r20869916, r20869917, r20869918, r20869919, r20869920, r20869921, r20869922, r20869923, r20869924, r20869925, r20869926, r20869927, r20869928, r20869929, r20869930, r20869931, r20869932, r20869933, r20869934, r20869935, r20869936, r20869937, r20869938, r20869939, r20869940, r20869941, r20869942, r20869943, r20869944, r20869945, r20869946, r20869947, r20869948, r20869949, r20869950, r20869951, r20869952, r20869953;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20869881, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20869882, "-35.0", 10, MPFR_RNDN);
        mpfr_init(r20869883);
        mpfr_init(r20869884);
        mpfr_init(r20869885);
        mpfr_init_set_str(r20869886, "297.5", 10, MPFR_RNDN);
        mpfr_init(r20869887);
        mpfr_init(r20869888);
        mpfr_init(r20869889);
        mpfr_init_set_str(r20869890, "-1090.833333", 10, MPFR_RNDN);
        mpfr_init(r20869891);
        mpfr_init(r20869892);
        mpfr_init(r20869893);
        mpfr_init_set_str(r20869894, "2181.666667", 10, MPFR_RNDN);
        mpfr_init(r20869895);
        mpfr_init(r20869896);
        mpfr_init(r20869897);
        mpfr_init_set_str(r20869898, "-2705.266667", 10, MPFR_RNDN);
        mpfr_init(r20869899);
        mpfr_init(r20869900);
        mpfr_init(r20869901);
        mpfr_init_set_str(r20869902, "2254.388889", 10, MPFR_RNDN);
        mpfr_init(r20869903);
        mpfr_init(r20869904);
        mpfr_init(r20869905);
        mpfr_init_set_str(r20869906, "-1334.230159", 10, MPFR_RNDN);
        mpfr_init(r20869907);
        mpfr_init(r20869908);
        mpfr_init(r20869909);
        mpfr_init_set_str(r20869910, "583.725694", 10, MPFR_RNDN);
        mpfr_init(r20869911);
        mpfr_init(r20869912);
        mpfr_init(r20869913);
        mpfr_init_set_str(r20869914, "-194.575231", 10, MPFR_RNDN);
        mpfr_init(r20869915);
        mpfr_init(r20869916);
        mpfr_init(r20869917);
        mpfr_init_set_str(r20869918, "50.58956", 10, MPFR_RNDN);
        mpfr_init(r20869919);
        mpfr_init(r20869920);
        mpfr_init(r20869921);
        mpfr_init_set_str(r20869922, "-10.452388", 10, MPFR_RNDN);
        mpfr_init(r20869923);
        mpfr_init(r20869924);
        mpfr_init(r20869925);
        mpfr_init_set_str(r20869926, "1.742065", 10, MPFR_RNDN);
        mpfr_init(r20869927);
        mpfr_init(r20869928);
        mpfr_init(r20869929);
        mpfr_init_set_str(r20869930, "-0.237086", 10, MPFR_RNDN);
        mpfr_init(r20869931);
        mpfr_init(r20869932);
        mpfr_init(r20869933);
        mpfr_init_set_str(r20869934, "0.026612", 10, MPFR_RNDN);
        mpfr_init(r20869935);
        mpfr_init(r20869936);
        mpfr_init(r20869937);
        mpfr_init_set_str(r20869938, "-0.002484", 10, MPFR_RNDN);
        mpfr_init(r20869939);
        mpfr_init(r20869940);
        mpfr_init(r20869941);
        mpfr_init_set_str(r20869942, "0.000194", 10, MPFR_RNDN);
        mpfr_init(r20869943);
        mpfr_init(r20869944);
        mpfr_init(r20869945);
        mpfr_init_set_str(r20869946, "-1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r20869947);
        mpfr_init(r20869948);
        mpfr_init(r20869949);
        mpfr_init_set_str(r20869950, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r20869951);
        mpfr_init(r20869952);
        mpfr_init(r20869953);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20869883, x, MPFR_RNDN);
        mpfr_mul(r20869884, r20869882, r20869883, MPFR_RNDN);
        mpfr_add(r20869885, r20869881, r20869884, MPFR_RNDN);
        ;
        mpfr_mul(r20869887, r20869883, r20869883, MPFR_RNDN);
        mpfr_mul(r20869888, r20869886, r20869887, MPFR_RNDN);
        mpfr_add(r20869889, r20869885, r20869888, MPFR_RNDN);
        ;
        mpfr_mul(r20869891, r20869887, r20869883, MPFR_RNDN);
        mpfr_mul(r20869892, r20869890, r20869891, MPFR_RNDN);
        mpfr_add(r20869893, r20869889, r20869892, MPFR_RNDN);
        ;
        mpfr_mul(r20869895, r20869891, r20869883, MPFR_RNDN);
        mpfr_mul(r20869896, r20869894, r20869895, MPFR_RNDN);
        mpfr_add(r20869897, r20869893, r20869896, MPFR_RNDN);
        ;
        mpfr_mul(r20869899, r20869895, r20869883, MPFR_RNDN);
        mpfr_mul(r20869900, r20869898, r20869899, MPFR_RNDN);
        mpfr_add(r20869901, r20869897, r20869900, MPFR_RNDN);
        ;
        mpfr_mul(r20869903, r20869899, r20869883, MPFR_RNDN);
        mpfr_mul(r20869904, r20869902, r20869903, MPFR_RNDN);
        mpfr_add(r20869905, r20869901, r20869904, MPFR_RNDN);
        ;
        mpfr_mul(r20869907, r20869903, r20869883, MPFR_RNDN);
        mpfr_mul(r20869908, r20869906, r20869907, MPFR_RNDN);
        mpfr_add(r20869909, r20869905, r20869908, MPFR_RNDN);
        ;
        mpfr_mul(r20869911, r20869907, r20869883, MPFR_RNDN);
        mpfr_mul(r20869912, r20869910, r20869911, MPFR_RNDN);
        mpfr_add(r20869913, r20869909, r20869912, MPFR_RNDN);
        ;
        mpfr_mul(r20869915, r20869911, r20869883, MPFR_RNDN);
        mpfr_mul(r20869916, r20869914, r20869915, MPFR_RNDN);
        mpfr_add(r20869917, r20869913, r20869916, MPFR_RNDN);
        ;
        mpfr_mul(r20869919, r20869915, r20869883, MPFR_RNDN);
        mpfr_mul(r20869920, r20869918, r20869919, MPFR_RNDN);
        mpfr_add(r20869921, r20869917, r20869920, MPFR_RNDN);
        ;
        mpfr_mul(r20869923, r20869919, r20869883, MPFR_RNDN);
        mpfr_mul(r20869924, r20869922, r20869923, MPFR_RNDN);
        mpfr_add(r20869925, r20869921, r20869924, MPFR_RNDN);
        ;
        mpfr_mul(r20869927, r20869923, r20869883, MPFR_RNDN);
        mpfr_mul(r20869928, r20869926, r20869927, MPFR_RNDN);
        mpfr_add(r20869929, r20869925, r20869928, MPFR_RNDN);
        ;
        mpfr_mul(r20869931, r20869927, r20869883, MPFR_RNDN);
        mpfr_mul(r20869932, r20869930, r20869931, MPFR_RNDN);
        mpfr_add(r20869933, r20869929, r20869932, MPFR_RNDN);
        ;
        mpfr_mul(r20869935, r20869931, r20869883, MPFR_RNDN);
        mpfr_mul(r20869936, r20869934, r20869935, MPFR_RNDN);
        mpfr_add(r20869937, r20869933, r20869936, MPFR_RNDN);
        ;
        mpfr_mul(r20869939, r20869935, r20869883, MPFR_RNDN);
        mpfr_mul(r20869940, r20869938, r20869939, MPFR_RNDN);
        mpfr_add(r20869941, r20869937, r20869940, MPFR_RNDN);
        ;
        mpfr_mul(r20869943, r20869939, r20869883, MPFR_RNDN);
        mpfr_mul(r20869944, r20869942, r20869943, MPFR_RNDN);
        mpfr_add(r20869945, r20869941, r20869944, MPFR_RNDN);
        ;
        mpfr_mul(r20869947, r20869943, r20869883, MPFR_RNDN);
        mpfr_mul(r20869948, r20869946, r20869947, MPFR_RNDN);
        mpfr_add(r20869949, r20869945, r20869948, MPFR_RNDN);
        ;
        mpfr_mul(r20869951, r20869947, r20869883, MPFR_RNDN);
        mpfr_mul(r20869952, r20869950, r20869951, MPFR_RNDN);
        mpfr_add(r20869953, r20869949, r20869952, MPFR_RNDN);
        return mpfr_get_d(r20869953, MPFR_RNDN);
}

static mpfr_t r20869954, r20869955, r20869956, r20869957, r20869958, r20869959, r20869960, r20869961, r20869962, r20869963, r20869964, r20869965, r20869966, r20869967, r20869968, r20869969, r20869970, r20869971, r20869972, r20869973, r20869974, r20869975, r20869976, r20869977, r20869978, r20869979, r20869980, r20869981, r20869982, r20869983, r20869984, r20869985, r20869986, r20869987, r20869988, r20869989, r20869990, r20869991, r20869992, r20869993, r20869994, r20869995, r20869996, r20869997, r20869998, r20869999, r20870000, r20870001, r20870002, r20870003, r20870004, r20870005, r20870006, r20870007, r20870008, r20870009, r20870010, r20870011, r20870012, r20870013, r20870014, r20870015, r20870016, r20870017, r20870018, r20870019, r20870020, r20870021, r20870022, r20870023, r20870024, r20870025, r20870026, r20870027, r20870028, r20870029, r20870030, r20870031, r20870032, r20870033, r20870034, r20870035, r20870036;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20869954, "-1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r20869955);
        mpfr_init(r20869956);
        mpfr_init(r20869957);
        mpfr_init(r20869958);
        mpfr_init(r20869959);
        mpfr_init(r20869960);
        mpfr_init(r20869961);
        mpfr_init(r20869962);
        mpfr_init_set_str(r20869963, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r20869964);
        mpfr_init(r20869965);
        mpfr_init(r20869966);
        mpfr_init_set_str(r20869967, "2181.666667", 10, MPFR_RNDN);
        mpfr_init(r20869968);
        mpfr_init_set_str(r20869969, "3", 10, MPFR_RNDN);
        mpfr_init(r20869970);
        mpfr_init(r20869971);
        mpfr_init_set_str(r20869972, "-2705.266667", 10, MPFR_RNDN);
        mpfr_init(r20869973);
        mpfr_init(r20869974);
        mpfr_init(r20869975);
        mpfr_init_set_str(r20869976, "-1090.833333", 10, MPFR_RNDN);
        mpfr_init(r20869977);
        mpfr_init(r20869978);
        mpfr_init_set_str(r20869979, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20869980);
        mpfr_init_set_str(r20869981, "-35.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20869982, "297.5", 10, MPFR_RNDN);
        mpfr_init(r20869983);
        mpfr_init(r20869984);
        mpfr_init(r20869985);
        mpfr_init(r20869986);
        mpfr_init(r20869987);
        mpfr_init_set_str(r20869988, "2254.388889", 10, MPFR_RNDN);
        mpfr_init(r20869989);
        mpfr_init(r20869990);
        mpfr_init(r20869991);
        mpfr_init_set_str(r20869992, "583.725694", 10, MPFR_RNDN);
        mpfr_init(r20869993);
        mpfr_init(r20869994);
        mpfr_init_set_str(r20869995, "-1334.230159", 10, MPFR_RNDN);
        mpfr_init(r20869996);
        mpfr_init(r20869997);
        mpfr_init(r20869998);
        mpfr_init(r20869999);
        mpfr_init(r20870000);
        mpfr_init_set_str(r20870001, "-194.575231", 10, MPFR_RNDN);
        mpfr_init(r20870002);
        mpfr_init(r20870003);
        mpfr_init_set_str(r20870004, "50.58956", 10, MPFR_RNDN);
        mpfr_init(r20870005);
        mpfr_init(r20870006);
        mpfr_init(r20870007);
        mpfr_init(r20870008);
        mpfr_init_set_str(r20870009, "-10.452388", 10, MPFR_RNDN);
        mpfr_init(r20870010);
        mpfr_init(r20870011);
        mpfr_init(r20870012);
        mpfr_init_set_str(r20870013, "1.742065", 10, MPFR_RNDN);
        mpfr_init(r20870014);
        mpfr_init(r20870015);
        mpfr_init(r20870016);
        mpfr_init(r20870017);
        mpfr_init(r20870018);
        mpfr_init_set_str(r20870019, "0.026612", 10, MPFR_RNDN);
        mpfr_init(r20870020);
        mpfr_init(r20870021);
        mpfr_init_set_str(r20870022, "-0.237086", 10, MPFR_RNDN);
        mpfr_init(r20870023);
        mpfr_init(r20870024);
        mpfr_init(r20870025);
        mpfr_init(r20870026);
        mpfr_init_set_str(r20870027, "0.000194", 10, MPFR_RNDN);
        mpfr_init(r20870028);
        mpfr_init(r20870029);
        mpfr_init_set_str(r20870030, "-0.002484", 10, MPFR_RNDN);
        mpfr_init(r20870031);
        mpfr_init(r20870032);
        mpfr_init(r20870033);
        mpfr_init(r20870034);
        mpfr_init(r20870035);
        mpfr_init(r20870036);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r20869955, x, MPFR_RNDN);
        mpfr_mul(r20869956, r20869954, r20869955, MPFR_RNDN);
        mpfr_mul(r20869957, r20869955, r20869955, MPFR_RNDN);
        mpfr_mul(r20869958, r20869957, r20869957, MPFR_RNDN);
        mpfr_mul(r20869959, r20869958, r20869958, MPFR_RNDN);
        mpfr_mul(r20869960, r20869959, r20869958, MPFR_RNDN);
        mpfr_mul(r20869961, r20869960, r20869958, MPFR_RNDN);
        mpfr_mul(r20869962, r20869956, r20869961, MPFR_RNDN);
        ;
        mpfr_mul(r20869964, r20869957, r20869963, MPFR_RNDN);
        mpfr_mul(r20869965, r20869961, r20869964, MPFR_RNDN);
        mpfr_add(r20869966, r20869962, r20869965, MPFR_RNDN);
        ;
        mpfr_mul(r20869968, r20869967, r20869955, MPFR_RNDN);
        ;
        mpfr_pow(r20869970, r20869955, r20869969, MPFR_RNDN);
        mpfr_mul(r20869971, r20869968, r20869970, MPFR_RNDN);
        ;
        mpfr_mul(r20869973, r20869972, r20869955, MPFR_RNDN);
        mpfr_mul(r20869974, r20869973, r20869958, MPFR_RNDN);
        mpfr_add(r20869975, r20869971, r20869974, MPFR_RNDN);
        ;
        mpfr_mul(r20869977, r20869955, r20869976, MPFR_RNDN);
        mpfr_mul(r20869978, r20869957, r20869977, MPFR_RNDN);
        ;
        mpfr_add(r20869980, r20869978, r20869979, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20869983, r20869955, r20869982, MPFR_RNDN);
        mpfr_add(r20869984, r20869981, r20869983, MPFR_RNDN);
        mpfr_mul(r20869985, r20869955, r20869984, MPFR_RNDN);
        mpfr_add(r20869986, r20869980, r20869985, MPFR_RNDN);
        mpfr_add(r20869987, r20869975, r20869986, MPFR_RNDN);
        ;
        mpfr_mul(r20869989, r20869957, r20869988, MPFR_RNDN);
        mpfr_mul(r20869990, r20869958, r20869989, MPFR_RNDN);
        mpfr_mul(r20869991, r20869970, r20869970, MPFR_RNDN);
        ;
        mpfr_mul(r20869993, r20869957, r20869992, MPFR_RNDN);
        mpfr_mul(r20869994, r20869991, r20869993, MPFR_RNDN);
        ;
        mpfr_mul(r20869996, r20869995, r20869955, MPFR_RNDN);
        mpfr_mul(r20869997, r20869996, r20869991, MPFR_RNDN);
        mpfr_add(r20869998, r20869994, r20869997, MPFR_RNDN);
        mpfr_add(r20869999, r20869990, r20869998, MPFR_RNDN);
        mpfr_add(r20870000, r20869987, r20869999, MPFR_RNDN);
        ;
        mpfr_mul(r20870002, r20869955, r20870001, MPFR_RNDN);
        mpfr_mul(r20870003, r20869959, r20870002, MPFR_RNDN);
        ;
        mpfr_mul(r20870005, r20869957, r20870004, MPFR_RNDN);
        mpfr_mul(r20870006, r20869959, r20870005, MPFR_RNDN);
        mpfr_add(r20870007, r20870003, r20870006, MPFR_RNDN);
        mpfr_mul(r20870008, r20869991, r20869970, MPFR_RNDN);
        ;
        mpfr_mul(r20870010, r20869957, r20870009, MPFR_RNDN);
        mpfr_mul(r20870011, r20870008, r20870010, MPFR_RNDN);
        mpfr_mul(r20870012, r20869991, r20869958, MPFR_RNDN);
        ;
        mpfr_mul(r20870014, r20869957, r20870013, MPFR_RNDN);
        mpfr_mul(r20870015, r20870012, r20870014, MPFR_RNDN);
        mpfr_add(r20870016, r20870011, r20870015, MPFR_RNDN);
        mpfr_add(r20870017, r20870007, r20870016, MPFR_RNDN);
        mpfr_add(r20870018, r20870000, r20870017, MPFR_RNDN);
        ;
        mpfr_mul(r20870020, r20869957, r20870019, MPFR_RNDN);
        mpfr_mul(r20870021, r20869960, r20870020, MPFR_RNDN);
        ;
        mpfr_mul(r20870023, r20869955, r20870022, MPFR_RNDN);
        mpfr_mul(r20870024, r20869960, r20870023, MPFR_RNDN);
        mpfr_add(r20870025, r20870021, r20870024, MPFR_RNDN);
        mpfr_mul(r20870026, r20870012, r20869958, MPFR_RNDN);
        ;
        mpfr_mul(r20870028, r20869957, r20870027, MPFR_RNDN);
        mpfr_mul(r20870029, r20870026, r20870028, MPFR_RNDN);
        ;
        mpfr_mul(r20870031, r20870030, r20869955, MPFR_RNDN);
        mpfr_mul(r20870032, r20870031, r20870026, MPFR_RNDN);
        mpfr_add(r20870033, r20870029, r20870032, MPFR_RNDN);
        mpfr_add(r20870034, r20870025, r20870033, MPFR_RNDN);
        mpfr_add(r20870035, r20870018, r20870034, MPFR_RNDN);
        mpfr_add(r20870036, r20869966, r20870035, MPFR_RNDN);
        return mpfr_get_d(r20870036, MPFR_RNDN);
}

static mpfr_t r20870037, r20870038, r20870039, r20870040, r20870041, r20870042, r20870043, r20870044, r20870045, r20870046, r20870047, r20870048, r20870049, r20870050, r20870051, r20870052, r20870053, r20870054, r20870055, r20870056, r20870057, r20870058, r20870059, r20870060, r20870061, r20870062, r20870063, r20870064, r20870065, r20870066, r20870067, r20870068, r20870069, r20870070, r20870071, r20870072, r20870073, r20870074, r20870075, r20870076, r20870077, r20870078, r20870079, r20870080, r20870081, r20870082, r20870083, r20870084, r20870085, r20870086, r20870087, r20870088, r20870089, r20870090, r20870091, r20870092, r20870093, r20870094, r20870095, r20870096, r20870097, r20870098, r20870099, r20870100, r20870101, r20870102, r20870103, r20870104, r20870105, r20870106, r20870107, r20870108, r20870109, r20870110, r20870111, r20870112, r20870113, r20870114, r20870115, r20870116, r20870117, r20870118, r20870119;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r20870037, "-1.3e-05", 10, MPFR_RNDN);
        mpfr_init(r20870038);
        mpfr_init(r20870039);
        mpfr_init(r20870040);
        mpfr_init(r20870041);
        mpfr_init(r20870042);
        mpfr_init(r20870043);
        mpfr_init(r20870044);
        mpfr_init(r20870045);
        mpfr_init_set_str(r20870046, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r20870047);
        mpfr_init(r20870048);
        mpfr_init(r20870049);
        mpfr_init_set_str(r20870050, "2181.666667", 10, MPFR_RNDN);
        mpfr_init(r20870051);
        mpfr_init_set_str(r20870052, "3", 10, MPFR_RNDN);
        mpfr_init(r20870053);
        mpfr_init(r20870054);
        mpfr_init_set_str(r20870055, "-2705.266667", 10, MPFR_RNDN);
        mpfr_init(r20870056);
        mpfr_init(r20870057);
        mpfr_init(r20870058);
        mpfr_init_set_str(r20870059, "-1090.833333", 10, MPFR_RNDN);
        mpfr_init(r20870060);
        mpfr_init(r20870061);
        mpfr_init_set_str(r20870062, "1.0", 10, MPFR_RNDN);
        mpfr_init(r20870063);
        mpfr_init_set_str(r20870064, "-35.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20870065, "297.5", 10, MPFR_RNDN);
        mpfr_init(r20870066);
        mpfr_init(r20870067);
        mpfr_init(r20870068);
        mpfr_init(r20870069);
        mpfr_init(r20870070);
        mpfr_init_set_str(r20870071, "2254.388889", 10, MPFR_RNDN);
        mpfr_init(r20870072);
        mpfr_init(r20870073);
        mpfr_init(r20870074);
        mpfr_init_set_str(r20870075, "583.725694", 10, MPFR_RNDN);
        mpfr_init(r20870076);
        mpfr_init(r20870077);
        mpfr_init_set_str(r20870078, "-1334.230159", 10, MPFR_RNDN);
        mpfr_init(r20870079);
        mpfr_init(r20870080);
        mpfr_init(r20870081);
        mpfr_init(r20870082);
        mpfr_init(r20870083);
        mpfr_init_set_str(r20870084, "-194.575231", 10, MPFR_RNDN);
        mpfr_init(r20870085);
        mpfr_init(r20870086);
        mpfr_init_set_str(r20870087, "50.58956", 10, MPFR_RNDN);
        mpfr_init(r20870088);
        mpfr_init(r20870089);
        mpfr_init(r20870090);
        mpfr_init(r20870091);
        mpfr_init_set_str(r20870092, "-10.452388", 10, MPFR_RNDN);
        mpfr_init(r20870093);
        mpfr_init(r20870094);
        mpfr_init(r20870095);
        mpfr_init_set_str(r20870096, "1.742065", 10, MPFR_RNDN);
        mpfr_init(r20870097);
        mpfr_init(r20870098);
        mpfr_init(r20870099);
        mpfr_init(r20870100);
        mpfr_init(r20870101);
        mpfr_init_set_str(r20870102, "0.026612", 10, MPFR_RNDN);
        mpfr_init(r20870103);
        mpfr_init(r20870104);
        mpfr_init_set_str(r20870105, "-0.237086", 10, MPFR_RNDN);
        mpfr_init(r20870106);
        mpfr_init(r20870107);
        mpfr_init(r20870108);
        mpfr_init(r20870109);
        mpfr_init_set_str(r20870110, "0.000194", 10, MPFR_RNDN);
        mpfr_init(r20870111);
        mpfr_init(r20870112);
        mpfr_init_set_str(r20870113, "-0.002484", 10, MPFR_RNDN);
        mpfr_init(r20870114);
        mpfr_init(r20870115);
        mpfr_init(r20870116);
        mpfr_init(r20870117);
        mpfr_init(r20870118);
        mpfr_init(r20870119);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r20870038, x, MPFR_RNDN);
        mpfr_mul(r20870039, r20870037, r20870038, MPFR_RNDN);
        mpfr_mul(r20870040, r20870038, r20870038, MPFR_RNDN);
        mpfr_mul(r20870041, r20870040, r20870040, MPFR_RNDN);
        mpfr_mul(r20870042, r20870041, r20870041, MPFR_RNDN);
        mpfr_mul(r20870043, r20870042, r20870041, MPFR_RNDN);
        mpfr_mul(r20870044, r20870043, r20870041, MPFR_RNDN);
        mpfr_mul(r20870045, r20870039, r20870044, MPFR_RNDN);
        ;
        mpfr_mul(r20870047, r20870040, r20870046, MPFR_RNDN);
        mpfr_mul(r20870048, r20870044, r20870047, MPFR_RNDN);
        mpfr_add(r20870049, r20870045, r20870048, MPFR_RNDN);
        ;
        mpfr_mul(r20870051, r20870050, r20870038, MPFR_RNDN);
        ;
        mpfr_pow(r20870053, r20870038, r20870052, MPFR_RNDN);
        mpfr_mul(r20870054, r20870051, r20870053, MPFR_RNDN);
        ;
        mpfr_mul(r20870056, r20870055, r20870038, MPFR_RNDN);
        mpfr_mul(r20870057, r20870056, r20870041, MPFR_RNDN);
        mpfr_add(r20870058, r20870054, r20870057, MPFR_RNDN);
        ;
        mpfr_mul(r20870060, r20870038, r20870059, MPFR_RNDN);
        mpfr_mul(r20870061, r20870040, r20870060, MPFR_RNDN);
        ;
        mpfr_add(r20870063, r20870061, r20870062, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r20870066, r20870038, r20870065, MPFR_RNDN);
        mpfr_add(r20870067, r20870064, r20870066, MPFR_RNDN);
        mpfr_mul(r20870068, r20870038, r20870067, MPFR_RNDN);
        mpfr_add(r20870069, r20870063, r20870068, MPFR_RNDN);
        mpfr_add(r20870070, r20870058, r20870069, MPFR_RNDN);
        ;
        mpfr_mul(r20870072, r20870040, r20870071, MPFR_RNDN);
        mpfr_mul(r20870073, r20870041, r20870072, MPFR_RNDN);
        mpfr_mul(r20870074, r20870053, r20870053, MPFR_RNDN);
        ;
        mpfr_mul(r20870076, r20870040, r20870075, MPFR_RNDN);
        mpfr_mul(r20870077, r20870074, r20870076, MPFR_RNDN);
        ;
        mpfr_mul(r20870079, r20870078, r20870038, MPFR_RNDN);
        mpfr_mul(r20870080, r20870079, r20870074, MPFR_RNDN);
        mpfr_add(r20870081, r20870077, r20870080, MPFR_RNDN);
        mpfr_add(r20870082, r20870073, r20870081, MPFR_RNDN);
        mpfr_add(r20870083, r20870070, r20870082, MPFR_RNDN);
        ;
        mpfr_mul(r20870085, r20870038, r20870084, MPFR_RNDN);
        mpfr_mul(r20870086, r20870042, r20870085, MPFR_RNDN);
        ;
        mpfr_mul(r20870088, r20870040, r20870087, MPFR_RNDN);
        mpfr_mul(r20870089, r20870042, r20870088, MPFR_RNDN);
        mpfr_add(r20870090, r20870086, r20870089, MPFR_RNDN);
        mpfr_mul(r20870091, r20870074, r20870053, MPFR_RNDN);
        ;
        mpfr_mul(r20870093, r20870040, r20870092, MPFR_RNDN);
        mpfr_mul(r20870094, r20870091, r20870093, MPFR_RNDN);
        mpfr_mul(r20870095, r20870074, r20870041, MPFR_RNDN);
        ;
        mpfr_mul(r20870097, r20870040, r20870096, MPFR_RNDN);
        mpfr_mul(r20870098, r20870095, r20870097, MPFR_RNDN);
        mpfr_add(r20870099, r20870094, r20870098, MPFR_RNDN);
        mpfr_add(r20870100, r20870090, r20870099, MPFR_RNDN);
        mpfr_add(r20870101, r20870083, r20870100, MPFR_RNDN);
        ;
        mpfr_mul(r20870103, r20870040, r20870102, MPFR_RNDN);
        mpfr_mul(r20870104, r20870043, r20870103, MPFR_RNDN);
        ;
        mpfr_mul(r20870106, r20870038, r20870105, MPFR_RNDN);
        mpfr_mul(r20870107, r20870043, r20870106, MPFR_RNDN);
        mpfr_add(r20870108, r20870104, r20870107, MPFR_RNDN);
        mpfr_mul(r20870109, r20870095, r20870041, MPFR_RNDN);
        ;
        mpfr_mul(r20870111, r20870040, r20870110, MPFR_RNDN);
        mpfr_mul(r20870112, r20870109, r20870111, MPFR_RNDN);
        ;
        mpfr_mul(r20870114, r20870113, r20870038, MPFR_RNDN);
        mpfr_mul(r20870115, r20870114, r20870109, MPFR_RNDN);
        mpfr_add(r20870116, r20870112, r20870115, MPFR_RNDN);
        mpfr_add(r20870117, r20870108, r20870116, MPFR_RNDN);
        mpfr_add(r20870118, r20870101, r20870117, MPFR_RNDN);
        mpfr_add(r20870119, r20870049, r20870118, MPFR_RNDN);
        return mpfr_get_d(r20870119, MPFR_RNDN);
}

