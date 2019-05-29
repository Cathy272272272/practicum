#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r5395634 = 2.932617;
        float r5395635 = x;
        float r5395636 = r5395634 * r5395635;
        float r5395637 = -87.978516;
        float r5395638 = r5395635 * r5395635;
        float r5395639 = r5395638 * r5395635;
        float r5395640 = r5395637 * r5395639;
        float r5395641 = r5395636 + r5395640;
        float r5395642 = 747.817383;
        float r5395643 = r5395639 * r5395635;
        float r5395644 = r5395643 * r5395635;
        float r5395645 = r5395642 * r5395644;
        float r5395646 = r5395641 + r5395645;
        float r5395647 = -2706.386719;
        float r5395648 = r5395644 * r5395635;
        float r5395649 = r5395648 * r5395635;
        float r5395650 = r5395647 * r5395649;
        float r5395651 = r5395646 + r5395650;
        float r5395652 = 4736.176758;
        float r5395653 = r5395649 * r5395635;
        float r5395654 = r5395653 * r5395635;
        float r5395655 = r5395652 * r5395654;
        float r5395656 = r5395651 + r5395655;
        float r5395657 = -3961.166016;
        float r5395658 = r5395654 * r5395635;
        float r5395659 = r5395658 * r5395635;
        float r5395660 = r5395657 * r5395659;
        float r5395661 = r5395656 + r5395660;
        float r5395662 = 1269.604492;
        float r5395663 = r5395659 * r5395635;
        float r5395664 = r5395663 * r5395635;
        float r5395665 = r5395662 * r5395664;
        float r5395666 = r5395661 + r5395665;
        return r5395666;
}

double f_id(double x) {
        double r5395667 = 2.932617;
        double r5395668 = x;
        double r5395669 = r5395667 * r5395668;
        double r5395670 = -87.978516;
        double r5395671 = r5395668 * r5395668;
        double r5395672 = r5395671 * r5395668;
        double r5395673 = r5395670 * r5395672;
        double r5395674 = r5395669 + r5395673;
        double r5395675 = 747.817383;
        double r5395676 = r5395672 * r5395668;
        double r5395677 = r5395676 * r5395668;
        double r5395678 = r5395675 * r5395677;
        double r5395679 = r5395674 + r5395678;
        double r5395680 = -2706.386719;
        double r5395681 = r5395677 * r5395668;
        double r5395682 = r5395681 * r5395668;
        double r5395683 = r5395680 * r5395682;
        double r5395684 = r5395679 + r5395683;
        double r5395685 = 4736.176758;
        double r5395686 = r5395682 * r5395668;
        double r5395687 = r5395686 * r5395668;
        double r5395688 = r5395685 * r5395687;
        double r5395689 = r5395684 + r5395688;
        double r5395690 = -3961.166016;
        double r5395691 = r5395687 * r5395668;
        double r5395692 = r5395691 * r5395668;
        double r5395693 = r5395690 * r5395692;
        double r5395694 = r5395689 + r5395693;
        double r5395695 = 1269.604492;
        double r5395696 = r5395692 * r5395668;
        double r5395697 = r5395696 * r5395668;
        double r5395698 = r5395695 * r5395697;
        double r5395699 = r5395694 + r5395698;
        return r5395699;
}


double f_of(float x) {
        float r5395700 = x;
        float r5395701 = r5395700 * r5395700;
        float r5395702 = 3;
        float r5395703 = pow(r5395700, r5395702);
        float r5395704 = r5395703 * r5395703;
        float r5395705 = r5395703 * r5395704;
        float r5395706 = r5395701 * r5395705;
        float r5395707 = 1269.604492;
        float r5395708 = r5395701 * r5395707;
        float r5395709 = -3961.166016;
        float r5395710 = r5395708 + r5395709;
        float r5395711 = r5395706 * r5395710;
        float r5395712 = 747.817383;
        float r5395713 = r5395700 * r5395712;
        float r5395714 = r5395713 * r5395701;
        float r5395715 = r5395701 * r5395714;
        float r5395716 = 2.932617;
        float r5395717 = r5395716 * r5395700;
        float r5395718 = -87.978516;
        float r5395719 = r5395718 * r5395700;
        float r5395720 = r5395701 * r5395719;
        float r5395721 = r5395717 + r5395720;
        float r5395722 = r5395715 + r5395721;
        float r5395723 = -2706.386719;
        float r5395724 = 4736.176758;
        float r5395725 = r5395701 * r5395724;
        float r5395726 = r5395723 + r5395725;
        float r5395727 = pow(r5395701, r5395702);
        float r5395728 = r5395727 * r5395700;
        float r5395729 = r5395726 * r5395728;
        float r5395730 = 1;
        float r5395731 = pow(r5395729, r5395730);
        float r5395732 = r5395722 + r5395731;
        float r5395733 = r5395711 + r5395732;
        return r5395733;
}

double f_od(double x) {
        double r5395734 = x;
        double r5395735 = r5395734 * r5395734;
        double r5395736 = 3;
        double r5395737 = pow(r5395734, r5395736);
        double r5395738 = r5395737 * r5395737;
        double r5395739 = r5395737 * r5395738;
        double r5395740 = r5395735 * r5395739;
        double r5395741 = 1269.604492;
        double r5395742 = r5395735 * r5395741;
        double r5395743 = -3961.166016;
        double r5395744 = r5395742 + r5395743;
        double r5395745 = r5395740 * r5395744;
        double r5395746 = 747.817383;
        double r5395747 = r5395734 * r5395746;
        double r5395748 = r5395747 * r5395735;
        double r5395749 = r5395735 * r5395748;
        double r5395750 = 2.932617;
        double r5395751 = r5395750 * r5395734;
        double r5395752 = -87.978516;
        double r5395753 = r5395752 * r5395734;
        double r5395754 = r5395735 * r5395753;
        double r5395755 = r5395751 + r5395754;
        double r5395756 = r5395749 + r5395755;
        double r5395757 = -2706.386719;
        double r5395758 = 4736.176758;
        double r5395759 = r5395735 * r5395758;
        double r5395760 = r5395757 + r5395759;
        double r5395761 = pow(r5395735, r5395736);
        double r5395762 = r5395761 * r5395734;
        double r5395763 = r5395760 * r5395762;
        double r5395764 = 1;
        double r5395765 = pow(r5395763, r5395764);
        double r5395766 = r5395756 + r5395765;
        double r5395767 = r5395745 + r5395766;
        return r5395767;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r5395768, r5395769, r5395770, r5395771, r5395772, r5395773, r5395774, r5395775, r5395776, r5395777, r5395778, r5395779, r5395780, r5395781, r5395782, r5395783, r5395784, r5395785, r5395786, r5395787, r5395788, r5395789, r5395790, r5395791, r5395792, r5395793, r5395794, r5395795, r5395796, r5395797, r5395798, r5395799, r5395800;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r5395768, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r5395769);
        mpfr_init(r5395770);
        mpfr_init_set_str(r5395771, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r5395772);
        mpfr_init(r5395773);
        mpfr_init(r5395774);
        mpfr_init(r5395775);
        mpfr_init_set_str(r5395776, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r5395777);
        mpfr_init(r5395778);
        mpfr_init(r5395779);
        mpfr_init(r5395780);
        mpfr_init_set_str(r5395781, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init(r5395782);
        mpfr_init(r5395783);
        mpfr_init(r5395784);
        mpfr_init(r5395785);
        mpfr_init_set_str(r5395786, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r5395787);
        mpfr_init(r5395788);
        mpfr_init(r5395789);
        mpfr_init(r5395790);
        mpfr_init_set_str(r5395791, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r5395792);
        mpfr_init(r5395793);
        mpfr_init(r5395794);
        mpfr_init(r5395795);
        mpfr_init_set_str(r5395796, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r5395797);
        mpfr_init(r5395798);
        mpfr_init(r5395799);
        mpfr_init(r5395800);
}

double f_im(double x) {
        ;
        mpfr_set_d(r5395769, x, MPFR_RNDN);
        mpfr_mul(r5395770, r5395768, r5395769, MPFR_RNDN);
        ;
        mpfr_mul(r5395772, r5395769, r5395769, MPFR_RNDN);
        mpfr_mul(r5395773, r5395772, r5395769, MPFR_RNDN);
        mpfr_mul(r5395774, r5395771, r5395773, MPFR_RNDN);
        mpfr_add(r5395775, r5395770, r5395774, MPFR_RNDN);
        ;
        mpfr_mul(r5395777, r5395773, r5395769, MPFR_RNDN);
        mpfr_mul(r5395778, r5395777, r5395769, MPFR_RNDN);
        mpfr_mul(r5395779, r5395776, r5395778, MPFR_RNDN);
        mpfr_add(r5395780, r5395775, r5395779, MPFR_RNDN);
        ;
        mpfr_mul(r5395782, r5395778, r5395769, MPFR_RNDN);
        mpfr_mul(r5395783, r5395782, r5395769, MPFR_RNDN);
        mpfr_mul(r5395784, r5395781, r5395783, MPFR_RNDN);
        mpfr_add(r5395785, r5395780, r5395784, MPFR_RNDN);
        ;
        mpfr_mul(r5395787, r5395783, r5395769, MPFR_RNDN);
        mpfr_mul(r5395788, r5395787, r5395769, MPFR_RNDN);
        mpfr_mul(r5395789, r5395786, r5395788, MPFR_RNDN);
        mpfr_add(r5395790, r5395785, r5395789, MPFR_RNDN);
        ;
        mpfr_mul(r5395792, r5395788, r5395769, MPFR_RNDN);
        mpfr_mul(r5395793, r5395792, r5395769, MPFR_RNDN);
        mpfr_mul(r5395794, r5395791, r5395793, MPFR_RNDN);
        mpfr_add(r5395795, r5395790, r5395794, MPFR_RNDN);
        ;
        mpfr_mul(r5395797, r5395793, r5395769, MPFR_RNDN);
        mpfr_mul(r5395798, r5395797, r5395769, MPFR_RNDN);
        mpfr_mul(r5395799, r5395796, r5395798, MPFR_RNDN);
        mpfr_add(r5395800, r5395795, r5395799, MPFR_RNDN);
        return mpfr_get_d(r5395800, MPFR_RNDN);
}

static mpfr_t r5395801, r5395802, r5395803, r5395804, r5395805, r5395806, r5395807, r5395808, r5395809, r5395810, r5395811, r5395812, r5395813, r5395814, r5395815, r5395816, r5395817, r5395818, r5395819, r5395820, r5395821, r5395822, r5395823, r5395824, r5395825, r5395826, r5395827, r5395828, r5395829, r5395830, r5395831, r5395832, r5395833, r5395834;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5395801);
        mpfr_init(r5395802);
        mpfr_init_set_str(r5395803, "3", 10, MPFR_RNDN);
        mpfr_init(r5395804);
        mpfr_init(r5395805);
        mpfr_init(r5395806);
        mpfr_init(r5395807);
        mpfr_init_set_str(r5395808, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r5395809);
        mpfr_init_set_str(r5395810, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r5395811);
        mpfr_init(r5395812);
        mpfr_init_set_str(r5395813, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r5395814);
        mpfr_init(r5395815);
        mpfr_init(r5395816);
        mpfr_init_set_str(r5395817, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r5395818);
        mpfr_init_set_str(r5395819, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r5395820);
        mpfr_init(r5395821);
        mpfr_init(r5395822);
        mpfr_init(r5395823);
        mpfr_init_set_str(r5395824, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r5395825, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r5395826);
        mpfr_init(r5395827);
        mpfr_init(r5395828);
        mpfr_init(r5395829);
        mpfr_init(r5395830);
        mpfr_init_set_str(r5395831, "1", 10, MPFR_RNDN);
        mpfr_init(r5395832);
        mpfr_init(r5395833);
        mpfr_init(r5395834);
}

double f_fm(double x) {
        mpfr_set_d(r5395801, x, MPFR_RNDN);
        mpfr_mul(r5395802, r5395801, r5395801, MPFR_RNDN);
        ;
        mpfr_pow(r5395804, r5395801, r5395803, MPFR_RNDN);
        mpfr_mul(r5395805, r5395804, r5395804, MPFR_RNDN);
        mpfr_mul(r5395806, r5395804, r5395805, MPFR_RNDN);
        mpfr_mul(r5395807, r5395802, r5395806, MPFR_RNDN);
        ;
        mpfr_mul(r5395809, r5395802, r5395808, MPFR_RNDN);
        ;
        mpfr_add(r5395811, r5395809, r5395810, MPFR_RNDN);
        mpfr_mul(r5395812, r5395807, r5395811, MPFR_RNDN);
        ;
        mpfr_mul(r5395814, r5395801, r5395813, MPFR_RNDN);
        mpfr_mul(r5395815, r5395814, r5395802, MPFR_RNDN);
        mpfr_mul(r5395816, r5395802, r5395815, MPFR_RNDN);
        ;
        mpfr_mul(r5395818, r5395817, r5395801, MPFR_RNDN);
        ;
        mpfr_mul(r5395820, r5395819, r5395801, MPFR_RNDN);
        mpfr_mul(r5395821, r5395802, r5395820, MPFR_RNDN);
        mpfr_add(r5395822, r5395818, r5395821, MPFR_RNDN);
        mpfr_add(r5395823, r5395816, r5395822, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5395826, r5395802, r5395825, MPFR_RNDN);
        mpfr_add(r5395827, r5395824, r5395826, MPFR_RNDN);
        mpfr_pow(r5395828, r5395802, r5395803, MPFR_RNDN);
        mpfr_mul(r5395829, r5395828, r5395801, MPFR_RNDN);
        mpfr_mul(r5395830, r5395827, r5395829, MPFR_RNDN);
        ;
        mpfr_pow(r5395832, r5395830, r5395831, MPFR_RNDN);
        mpfr_add(r5395833, r5395823, r5395832, MPFR_RNDN);
        mpfr_add(r5395834, r5395812, r5395833, MPFR_RNDN);
        return mpfr_get_d(r5395834, MPFR_RNDN);
}

static mpfr_t r5395835, r5395836, r5395837, r5395838, r5395839, r5395840, r5395841, r5395842, r5395843, r5395844, r5395845, r5395846, r5395847, r5395848, r5395849, r5395850, r5395851, r5395852, r5395853, r5395854, r5395855, r5395856, r5395857, r5395858, r5395859, r5395860, r5395861, r5395862, r5395863, r5395864, r5395865, r5395866, r5395867, r5395868;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r5395835);
        mpfr_init(r5395836);
        mpfr_init_set_str(r5395837, "3", 10, MPFR_RNDN);
        mpfr_init(r5395838);
        mpfr_init(r5395839);
        mpfr_init(r5395840);
        mpfr_init(r5395841);
        mpfr_init_set_str(r5395842, "1269.604492", 10, MPFR_RNDN);
        mpfr_init(r5395843);
        mpfr_init_set_str(r5395844, "-3961.166016", 10, MPFR_RNDN);
        mpfr_init(r5395845);
        mpfr_init(r5395846);
        mpfr_init_set_str(r5395847, "747.817383", 10, MPFR_RNDN);
        mpfr_init(r5395848);
        mpfr_init(r5395849);
        mpfr_init(r5395850);
        mpfr_init_set_str(r5395851, "2.932617", 10, MPFR_RNDN);
        mpfr_init(r5395852);
        mpfr_init_set_str(r5395853, "-87.978516", 10, MPFR_RNDN);
        mpfr_init(r5395854);
        mpfr_init(r5395855);
        mpfr_init(r5395856);
        mpfr_init(r5395857);
        mpfr_init_set_str(r5395858, "-2706.386719", 10, MPFR_RNDN);
        mpfr_init_set_str(r5395859, "4736.176758", 10, MPFR_RNDN);
        mpfr_init(r5395860);
        mpfr_init(r5395861);
        mpfr_init(r5395862);
        mpfr_init(r5395863);
        mpfr_init(r5395864);
        mpfr_init_set_str(r5395865, "1", 10, MPFR_RNDN);
        mpfr_init(r5395866);
        mpfr_init(r5395867);
        mpfr_init(r5395868);
}

double f_dm(double x) {
        mpfr_set_d(r5395835, x, MPFR_RNDN);
        mpfr_mul(r5395836, r5395835, r5395835, MPFR_RNDN);
        ;
        mpfr_pow(r5395838, r5395835, r5395837, MPFR_RNDN);
        mpfr_mul(r5395839, r5395838, r5395838, MPFR_RNDN);
        mpfr_mul(r5395840, r5395838, r5395839, MPFR_RNDN);
        mpfr_mul(r5395841, r5395836, r5395840, MPFR_RNDN);
        ;
        mpfr_mul(r5395843, r5395836, r5395842, MPFR_RNDN);
        ;
        mpfr_add(r5395845, r5395843, r5395844, MPFR_RNDN);
        mpfr_mul(r5395846, r5395841, r5395845, MPFR_RNDN);
        ;
        mpfr_mul(r5395848, r5395835, r5395847, MPFR_RNDN);
        mpfr_mul(r5395849, r5395848, r5395836, MPFR_RNDN);
        mpfr_mul(r5395850, r5395836, r5395849, MPFR_RNDN);
        ;
        mpfr_mul(r5395852, r5395851, r5395835, MPFR_RNDN);
        ;
        mpfr_mul(r5395854, r5395853, r5395835, MPFR_RNDN);
        mpfr_mul(r5395855, r5395836, r5395854, MPFR_RNDN);
        mpfr_add(r5395856, r5395852, r5395855, MPFR_RNDN);
        mpfr_add(r5395857, r5395850, r5395856, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r5395860, r5395836, r5395859, MPFR_RNDN);
        mpfr_add(r5395861, r5395858, r5395860, MPFR_RNDN);
        mpfr_pow(r5395862, r5395836, r5395837, MPFR_RNDN);
        mpfr_mul(r5395863, r5395862, r5395835, MPFR_RNDN);
        mpfr_mul(r5395864, r5395861, r5395863, MPFR_RNDN);
        ;
        mpfr_pow(r5395866, r5395864, r5395865, MPFR_RNDN);
        mpfr_add(r5395867, r5395857, r5395866, MPFR_RNDN);
        mpfr_add(r5395868, r5395846, r5395867, MPFR_RNDN);
        return mpfr_get_d(r5395868, MPFR_RNDN);
}

