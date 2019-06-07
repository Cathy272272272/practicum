#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7056631 = 0.196381;
        float r7056632 = -26.707764;
        float r7056633 = x;
        float r7056634 = r7056633 * r7056633;
        float r7056635 = r7056632 * r7056634;
        float r7056636 = r7056631 + r7056635;
        float r7056637 = 592.022095;
        float r7056638 = r7056634 * r7056633;
        float r7056639 = r7056638 * r7056633;
        float r7056640 = r7056637 * r7056639;
        float r7056641 = r7056636 + r7056640;
        float r7056642 = -4972.985596;
        float r7056643 = r7056639 * r7056633;
        float r7056644 = r7056643 * r7056633;
        float r7056645 = r7056642 * r7056644;
        float r7056646 = r7056641 + r7056645;
        float r7056647 = 20424.762268;
        float r7056648 = r7056644 * r7056633;
        float r7056649 = r7056648 * r7056633;
        float r7056650 = r7056647 * r7056649;
        float r7056651 = r7056646 + r7056650;
        float r7056652 = -45388.360596;
        float r7056653 = r7056649 * r7056633;
        float r7056654 = r7056653 * r7056633;
        float r7056655 = r7056652 * r7056654;
        float r7056656 = r7056651 + r7056655;
        float r7056657 = 55703.897095;
        float r7056658 = r7056654 * r7056633;
        float r7056659 = r7056658 * r7056633;
        float r7056660 = r7056657 * r7056659;
        float r7056661 = r7056656 + r7056660;
        float r7056662 = -35503.582764;
        float r7056663 = r7056659 * r7056633;
        float r7056664 = r7056663 * r7056633;
        float r7056665 = r7056662 * r7056664;
        float r7056666 = r7056661 + r7056665;
        float r7056667 = 9171.758881;
        float r7056668 = r7056664 * r7056633;
        float r7056669 = r7056668 * r7056633;
        float r7056670 = r7056667 * r7056669;
        float r7056671 = r7056666 + r7056670;
        return r7056671;
}

double f_id(double x) {
        double r7056672 = 0.196381;
        double r7056673 = -26.707764;
        double r7056674 = x;
        double r7056675 = r7056674 * r7056674;
        double r7056676 = r7056673 * r7056675;
        double r7056677 = r7056672 + r7056676;
        double r7056678 = 592.022095;
        double r7056679 = r7056675 * r7056674;
        double r7056680 = r7056679 * r7056674;
        double r7056681 = r7056678 * r7056680;
        double r7056682 = r7056677 + r7056681;
        double r7056683 = -4972.985596;
        double r7056684 = r7056680 * r7056674;
        double r7056685 = r7056684 * r7056674;
        double r7056686 = r7056683 * r7056685;
        double r7056687 = r7056682 + r7056686;
        double r7056688 = 20424.762268;
        double r7056689 = r7056685 * r7056674;
        double r7056690 = r7056689 * r7056674;
        double r7056691 = r7056688 * r7056690;
        double r7056692 = r7056687 + r7056691;
        double r7056693 = -45388.360596;
        double r7056694 = r7056690 * r7056674;
        double r7056695 = r7056694 * r7056674;
        double r7056696 = r7056693 * r7056695;
        double r7056697 = r7056692 + r7056696;
        double r7056698 = 55703.897095;
        double r7056699 = r7056695 * r7056674;
        double r7056700 = r7056699 * r7056674;
        double r7056701 = r7056698 * r7056700;
        double r7056702 = r7056697 + r7056701;
        double r7056703 = -35503.582764;
        double r7056704 = r7056700 * r7056674;
        double r7056705 = r7056704 * r7056674;
        double r7056706 = r7056703 * r7056705;
        double r7056707 = r7056702 + r7056706;
        double r7056708 = 9171.758881;
        double r7056709 = r7056705 * r7056674;
        double r7056710 = r7056709 * r7056674;
        double r7056711 = r7056708 * r7056710;
        double r7056712 = r7056707 + r7056711;
        return r7056712;
}


double f_of(float x) {
        float r7056713 = x;
        float r7056714 = r7056713 * r7056713;
        float r7056715 = r7056714 * r7056714;
        float r7056716 = 592.022095;
        float r7056717 = -4972.985596;
        float r7056718 = r7056717 * r7056713;
        float r7056719 = r7056713 * r7056718;
        float r7056720 = r7056716 + r7056719;
        float r7056721 = r7056715 * r7056720;
        float r7056722 = -26.707764;
        float r7056723 = r7056714 * r7056722;
        float r7056724 = cbrt(r7056723);
        float r7056725 = r7056724 * r7056724;
        float r7056726 = r7056725 * r7056724;
        float r7056727 = 0.196381;
        float r7056728 = r7056726 + r7056727;
        float r7056729 = 20424.762268;
        float r7056730 = r7056714 * r7056729;
        float r7056731 = 3;
        float r7056732 = pow(r7056714, r7056731);
        float r7056733 = r7056730 * r7056732;
        float r7056734 = r7056728 + r7056733;
        float r7056735 = r7056721 + r7056734;
        float r7056736 = r7056732 * r7056715;
        float r7056737 = -45388.360596;
        float r7056738 = 55703.897095;
        float r7056739 = r7056738 * r7056713;
        float r7056740 = r7056713 * r7056739;
        float r7056741 = r7056737 + r7056740;
        float r7056742 = r7056736 * r7056741;
        float r7056743 = r7056736 * r7056715;
        float r7056744 = -35503.582764;
        float r7056745 = 9171.758881;
        float r7056746 = r7056714 * r7056745;
        float r7056747 = r7056744 + r7056746;
        float r7056748 = r7056743 * r7056747;
        float r7056749 = r7056742 + r7056748;
        float r7056750 = r7056735 + r7056749;
        return r7056750;
}

double f_od(double x) {
        double r7056751 = x;
        double r7056752 = r7056751 * r7056751;
        double r7056753 = r7056752 * r7056752;
        double r7056754 = 592.022095;
        double r7056755 = -4972.985596;
        double r7056756 = r7056755 * r7056751;
        double r7056757 = r7056751 * r7056756;
        double r7056758 = r7056754 + r7056757;
        double r7056759 = r7056753 * r7056758;
        double r7056760 = -26.707764;
        double r7056761 = r7056752 * r7056760;
        double r7056762 = cbrt(r7056761);
        double r7056763 = r7056762 * r7056762;
        double r7056764 = r7056763 * r7056762;
        double r7056765 = 0.196381;
        double r7056766 = r7056764 + r7056765;
        double r7056767 = 20424.762268;
        double r7056768 = r7056752 * r7056767;
        double r7056769 = 3;
        double r7056770 = pow(r7056752, r7056769);
        double r7056771 = r7056768 * r7056770;
        double r7056772 = r7056766 + r7056771;
        double r7056773 = r7056759 + r7056772;
        double r7056774 = r7056770 * r7056753;
        double r7056775 = -45388.360596;
        double r7056776 = 55703.897095;
        double r7056777 = r7056776 * r7056751;
        double r7056778 = r7056751 * r7056777;
        double r7056779 = r7056775 + r7056778;
        double r7056780 = r7056774 * r7056779;
        double r7056781 = r7056774 * r7056753;
        double r7056782 = -35503.582764;
        double r7056783 = 9171.758881;
        double r7056784 = r7056752 * r7056783;
        double r7056785 = r7056782 + r7056784;
        double r7056786 = r7056781 * r7056785;
        double r7056787 = r7056780 + r7056786;
        double r7056788 = r7056773 + r7056787;
        return r7056788;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7056789, r7056790, r7056791, r7056792, r7056793, r7056794, r7056795, r7056796, r7056797, r7056798, r7056799, r7056800, r7056801, r7056802, r7056803, r7056804, r7056805, r7056806, r7056807, r7056808, r7056809, r7056810, r7056811, r7056812, r7056813, r7056814, r7056815, r7056816, r7056817, r7056818, r7056819, r7056820, r7056821, r7056822, r7056823, r7056824, r7056825, r7056826, r7056827, r7056828, r7056829;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7056789, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056790, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7056791);
        mpfr_init(r7056792);
        mpfr_init(r7056793);
        mpfr_init(r7056794);
        mpfr_init_set_str(r7056795, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7056796);
        mpfr_init(r7056797);
        mpfr_init(r7056798);
        mpfr_init(r7056799);
        mpfr_init_set_str(r7056800, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7056801);
        mpfr_init(r7056802);
        mpfr_init(r7056803);
        mpfr_init(r7056804);
        mpfr_init_set_str(r7056805, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7056806);
        mpfr_init(r7056807);
        mpfr_init(r7056808);
        mpfr_init(r7056809);
        mpfr_init_set_str(r7056810, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7056811);
        mpfr_init(r7056812);
        mpfr_init(r7056813);
        mpfr_init(r7056814);
        mpfr_init_set_str(r7056815, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7056816);
        mpfr_init(r7056817);
        mpfr_init(r7056818);
        mpfr_init(r7056819);
        mpfr_init_set_str(r7056820, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7056821);
        mpfr_init(r7056822);
        mpfr_init(r7056823);
        mpfr_init(r7056824);
        mpfr_init_set_str(r7056825, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7056826);
        mpfr_init(r7056827);
        mpfr_init(r7056828);
        mpfr_init(r7056829);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7056791, x, MPFR_RNDN);
        mpfr_mul(r7056792, r7056791, r7056791, MPFR_RNDN);
        mpfr_mul(r7056793, r7056790, r7056792, MPFR_RNDN);
        mpfr_add(r7056794, r7056789, r7056793, MPFR_RNDN);
        ;
        mpfr_mul(r7056796, r7056792, r7056791, MPFR_RNDN);
        mpfr_mul(r7056797, r7056796, r7056791, MPFR_RNDN);
        mpfr_mul(r7056798, r7056795, r7056797, MPFR_RNDN);
        mpfr_add(r7056799, r7056794, r7056798, MPFR_RNDN);
        ;
        mpfr_mul(r7056801, r7056797, r7056791, MPFR_RNDN);
        mpfr_mul(r7056802, r7056801, r7056791, MPFR_RNDN);
        mpfr_mul(r7056803, r7056800, r7056802, MPFR_RNDN);
        mpfr_add(r7056804, r7056799, r7056803, MPFR_RNDN);
        ;
        mpfr_mul(r7056806, r7056802, r7056791, MPFR_RNDN);
        mpfr_mul(r7056807, r7056806, r7056791, MPFR_RNDN);
        mpfr_mul(r7056808, r7056805, r7056807, MPFR_RNDN);
        mpfr_add(r7056809, r7056804, r7056808, MPFR_RNDN);
        ;
        mpfr_mul(r7056811, r7056807, r7056791, MPFR_RNDN);
        mpfr_mul(r7056812, r7056811, r7056791, MPFR_RNDN);
        mpfr_mul(r7056813, r7056810, r7056812, MPFR_RNDN);
        mpfr_add(r7056814, r7056809, r7056813, MPFR_RNDN);
        ;
        mpfr_mul(r7056816, r7056812, r7056791, MPFR_RNDN);
        mpfr_mul(r7056817, r7056816, r7056791, MPFR_RNDN);
        mpfr_mul(r7056818, r7056815, r7056817, MPFR_RNDN);
        mpfr_add(r7056819, r7056814, r7056818, MPFR_RNDN);
        ;
        mpfr_mul(r7056821, r7056817, r7056791, MPFR_RNDN);
        mpfr_mul(r7056822, r7056821, r7056791, MPFR_RNDN);
        mpfr_mul(r7056823, r7056820, r7056822, MPFR_RNDN);
        mpfr_add(r7056824, r7056819, r7056823, MPFR_RNDN);
        ;
        mpfr_mul(r7056826, r7056822, r7056791, MPFR_RNDN);
        mpfr_mul(r7056827, r7056826, r7056791, MPFR_RNDN);
        mpfr_mul(r7056828, r7056825, r7056827, MPFR_RNDN);
        mpfr_add(r7056829, r7056824, r7056828, MPFR_RNDN);
        return mpfr_get_d(r7056829, MPFR_RNDN);
}

static mpfr_t r7056830, r7056831, r7056832, r7056833, r7056834, r7056835, r7056836, r7056837, r7056838, r7056839, r7056840, r7056841, r7056842, r7056843, r7056844, r7056845, r7056846, r7056847, r7056848, r7056849, r7056850, r7056851, r7056852, r7056853, r7056854, r7056855, r7056856, r7056857, r7056858, r7056859, r7056860, r7056861, r7056862, r7056863, r7056864, r7056865, r7056866, r7056867;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7056830);
        mpfr_init(r7056831);
        mpfr_init(r7056832);
        mpfr_init_set_str(r7056833, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056834, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7056835);
        mpfr_init(r7056836);
        mpfr_init(r7056837);
        mpfr_init(r7056838);
        mpfr_init_set_str(r7056839, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7056840);
        mpfr_init(r7056841);
        mpfr_init(r7056842);
        mpfr_init(r7056843);
        mpfr_init_set_str(r7056844, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r7056845);
        mpfr_init_set_str(r7056846, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7056847);
        mpfr_init_set_str(r7056848, "3", 10, MPFR_RNDN);
        mpfr_init(r7056849);
        mpfr_init(r7056850);
        mpfr_init(r7056851);
        mpfr_init(r7056852);
        mpfr_init(r7056853);
        mpfr_init_set_str(r7056854, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056855, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7056856);
        mpfr_init(r7056857);
        mpfr_init(r7056858);
        mpfr_init(r7056859);
        mpfr_init(r7056860);
        mpfr_init_set_str(r7056861, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056862, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7056863);
        mpfr_init(r7056864);
        mpfr_init(r7056865);
        mpfr_init(r7056866);
        mpfr_init(r7056867);
}

double f_fm(double x) {
        mpfr_set_d(r7056830, x, MPFR_RNDN);
        mpfr_mul(r7056831, r7056830, r7056830, MPFR_RNDN);
        mpfr_mul(r7056832, r7056831, r7056831, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056835, r7056834, r7056830, MPFR_RNDN);
        mpfr_mul(r7056836, r7056830, r7056835, MPFR_RNDN);
        mpfr_add(r7056837, r7056833, r7056836, MPFR_RNDN);
        mpfr_mul(r7056838, r7056832, r7056837, MPFR_RNDN);
        ;
        mpfr_mul(r7056840, r7056831, r7056839, MPFR_RNDN);
        mpfr_cbrt(r7056841, r7056840, MPFR_RNDN);
        mpfr_mul(r7056842, r7056841, r7056841, MPFR_RNDN);
        mpfr_mul(r7056843, r7056842, r7056841, MPFR_RNDN);
        ;
        mpfr_add(r7056845, r7056843, r7056844, MPFR_RNDN);
        ;
        mpfr_mul(r7056847, r7056831, r7056846, MPFR_RNDN);
        ;
        mpfr_pow(r7056849, r7056831, r7056848, MPFR_RNDN);
        mpfr_mul(r7056850, r7056847, r7056849, MPFR_RNDN);
        mpfr_add(r7056851, r7056845, r7056850, MPFR_RNDN);
        mpfr_add(r7056852, r7056838, r7056851, MPFR_RNDN);
        mpfr_mul(r7056853, r7056849, r7056832, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056856, r7056855, r7056830, MPFR_RNDN);
        mpfr_mul(r7056857, r7056830, r7056856, MPFR_RNDN);
        mpfr_add(r7056858, r7056854, r7056857, MPFR_RNDN);
        mpfr_mul(r7056859, r7056853, r7056858, MPFR_RNDN);
        mpfr_mul(r7056860, r7056853, r7056832, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056863, r7056831, r7056862, MPFR_RNDN);
        mpfr_add(r7056864, r7056861, r7056863, MPFR_RNDN);
        mpfr_mul(r7056865, r7056860, r7056864, MPFR_RNDN);
        mpfr_add(r7056866, r7056859, r7056865, MPFR_RNDN);
        mpfr_add(r7056867, r7056852, r7056866, MPFR_RNDN);
        return mpfr_get_d(r7056867, MPFR_RNDN);
}

static mpfr_t r7056868, r7056869, r7056870, r7056871, r7056872, r7056873, r7056874, r7056875, r7056876, r7056877, r7056878, r7056879, r7056880, r7056881, r7056882, r7056883, r7056884, r7056885, r7056886, r7056887, r7056888, r7056889, r7056890, r7056891, r7056892, r7056893, r7056894, r7056895, r7056896, r7056897, r7056898, r7056899, r7056900, r7056901, r7056902, r7056903, r7056904, r7056905;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7056868);
        mpfr_init(r7056869);
        mpfr_init(r7056870);
        mpfr_init_set_str(r7056871, "592.022095", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056872, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7056873);
        mpfr_init(r7056874);
        mpfr_init(r7056875);
        mpfr_init(r7056876);
        mpfr_init_set_str(r7056877, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7056878);
        mpfr_init(r7056879);
        mpfr_init(r7056880);
        mpfr_init(r7056881);
        mpfr_init_set_str(r7056882, "0.196381", 10, MPFR_RNDN);
        mpfr_init(r7056883);
        mpfr_init_set_str(r7056884, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7056885);
        mpfr_init_set_str(r7056886, "3", 10, MPFR_RNDN);
        mpfr_init(r7056887);
        mpfr_init(r7056888);
        mpfr_init(r7056889);
        mpfr_init(r7056890);
        mpfr_init(r7056891);
        mpfr_init_set_str(r7056892, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056893, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7056894);
        mpfr_init(r7056895);
        mpfr_init(r7056896);
        mpfr_init(r7056897);
        mpfr_init(r7056898);
        mpfr_init_set_str(r7056899, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init_set_str(r7056900, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7056901);
        mpfr_init(r7056902);
        mpfr_init(r7056903);
        mpfr_init(r7056904);
        mpfr_init(r7056905);
}

double f_dm(double x) {
        mpfr_set_d(r7056868, x, MPFR_RNDN);
        mpfr_mul(r7056869, r7056868, r7056868, MPFR_RNDN);
        mpfr_mul(r7056870, r7056869, r7056869, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056873, r7056872, r7056868, MPFR_RNDN);
        mpfr_mul(r7056874, r7056868, r7056873, MPFR_RNDN);
        mpfr_add(r7056875, r7056871, r7056874, MPFR_RNDN);
        mpfr_mul(r7056876, r7056870, r7056875, MPFR_RNDN);
        ;
        mpfr_mul(r7056878, r7056869, r7056877, MPFR_RNDN);
        mpfr_cbrt(r7056879, r7056878, MPFR_RNDN);
        mpfr_mul(r7056880, r7056879, r7056879, MPFR_RNDN);
        mpfr_mul(r7056881, r7056880, r7056879, MPFR_RNDN);
        ;
        mpfr_add(r7056883, r7056881, r7056882, MPFR_RNDN);
        ;
        mpfr_mul(r7056885, r7056869, r7056884, MPFR_RNDN);
        ;
        mpfr_pow(r7056887, r7056869, r7056886, MPFR_RNDN);
        mpfr_mul(r7056888, r7056885, r7056887, MPFR_RNDN);
        mpfr_add(r7056889, r7056883, r7056888, MPFR_RNDN);
        mpfr_add(r7056890, r7056876, r7056889, MPFR_RNDN);
        mpfr_mul(r7056891, r7056887, r7056870, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056894, r7056893, r7056868, MPFR_RNDN);
        mpfr_mul(r7056895, r7056868, r7056894, MPFR_RNDN);
        mpfr_add(r7056896, r7056892, r7056895, MPFR_RNDN);
        mpfr_mul(r7056897, r7056891, r7056896, MPFR_RNDN);
        mpfr_mul(r7056898, r7056891, r7056870, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7056901, r7056869, r7056900, MPFR_RNDN);
        mpfr_add(r7056902, r7056899, r7056901, MPFR_RNDN);
        mpfr_mul(r7056903, r7056898, r7056902, MPFR_RNDN);
        mpfr_add(r7056904, r7056897, r7056903, MPFR_RNDN);
        mpfr_add(r7056905, r7056890, r7056904, MPFR_RNDN);
        return mpfr_get_d(r7056905, MPFR_RNDN);
}

