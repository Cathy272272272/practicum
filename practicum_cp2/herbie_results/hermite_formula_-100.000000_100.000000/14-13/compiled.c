#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r7081661 = 17297280.0;
        float r7081662 = x;
        float r7081663 = r7081661 * r7081662;
        float r7081664 = -69189120.0;
        float r7081665 = r7081662 * r7081662;
        float r7081666 = r7081665 * r7081662;
        float r7081667 = r7081664 * r7081666;
        float r7081668 = r7081663 + r7081667;
        float r7081669 = 69189120.0;
        float r7081670 = r7081666 * r7081662;
        float r7081671 = r7081670 * r7081662;
        float r7081672 = r7081669 * r7081671;
        float r7081673 = r7081668 + r7081672;
        float r7081674 = -26357760.0;
        float r7081675 = r7081671 * r7081662;
        float r7081676 = r7081675 * r7081662;
        float r7081677 = r7081674 * r7081676;
        float r7081678 = r7081673 + r7081677;
        float r7081679 = 4392960.0;
        float r7081680 = r7081676 * r7081662;
        float r7081681 = r7081680 * r7081662;
        float r7081682 = r7081679 * r7081681;
        float r7081683 = r7081678 + r7081682;
        float r7081684 = -319488.0;
        float r7081685 = r7081681 * r7081662;
        float r7081686 = r7081685 * r7081662;
        float r7081687 = r7081684 * r7081686;
        float r7081688 = r7081683 + r7081687;
        float r7081689 = 8192.0;
        float r7081690 = r7081686 * r7081662;
        float r7081691 = r7081690 * r7081662;
        float r7081692 = r7081689 * r7081691;
        float r7081693 = r7081688 + r7081692;
        return r7081693;
}

double f_id(double x) {
        double r7081694 = 17297280.0;
        double r7081695 = x;
        double r7081696 = r7081694 * r7081695;
        double r7081697 = -69189120.0;
        double r7081698 = r7081695 * r7081695;
        double r7081699 = r7081698 * r7081695;
        double r7081700 = r7081697 * r7081699;
        double r7081701 = r7081696 + r7081700;
        double r7081702 = 69189120.0;
        double r7081703 = r7081699 * r7081695;
        double r7081704 = r7081703 * r7081695;
        double r7081705 = r7081702 * r7081704;
        double r7081706 = r7081701 + r7081705;
        double r7081707 = -26357760.0;
        double r7081708 = r7081704 * r7081695;
        double r7081709 = r7081708 * r7081695;
        double r7081710 = r7081707 * r7081709;
        double r7081711 = r7081706 + r7081710;
        double r7081712 = 4392960.0;
        double r7081713 = r7081709 * r7081695;
        double r7081714 = r7081713 * r7081695;
        double r7081715 = r7081712 * r7081714;
        double r7081716 = r7081711 + r7081715;
        double r7081717 = -319488.0;
        double r7081718 = r7081714 * r7081695;
        double r7081719 = r7081718 * r7081695;
        double r7081720 = r7081717 * r7081719;
        double r7081721 = r7081716 + r7081720;
        double r7081722 = 8192.0;
        double r7081723 = r7081719 * r7081695;
        double r7081724 = r7081723 * r7081695;
        double r7081725 = r7081722 * r7081724;
        double r7081726 = r7081721 + r7081725;
        return r7081726;
}


double f_of(float x) {
        float r7081727 = 17297280.0;
        float r7081728 = x;
        float r7081729 = r7081727 * r7081728;
        float r7081730 = -69189120.0;
        float r7081731 = r7081728 * r7081728;
        float r7081732 = r7081731 * r7081728;
        float r7081733 = r7081730 * r7081732;
        float r7081734 = r7081729 + r7081733;
        float r7081735 = 69189120.0;
        float r7081736 = r7081735 * r7081728;
        float r7081737 = r7081731 * r7081731;
        float r7081738 = r7081736 * r7081737;
        float r7081739 = 3;
        float r7081740 = pow(r7081738, r7081739);
        float r7081741 = cbrt(r7081740);
        float r7081742 = r7081734 + r7081741;
        float r7081743 = -26357760.0;
        float r7081744 = r7081732 * r7081728;
        float r7081745 = r7081744 * r7081728;
        float r7081746 = r7081745 * r7081728;
        float r7081747 = r7081746 * r7081728;
        float r7081748 = r7081743 * r7081747;
        float r7081749 = r7081742 + r7081748;
        float r7081750 = 4392960.0;
        float r7081751 = r7081747 * r7081728;
        float r7081752 = r7081751 * r7081728;
        float r7081753 = r7081750 * r7081752;
        float r7081754 = r7081749 + r7081753;
        float r7081755 = -319488.0;
        float r7081756 = r7081752 * r7081728;
        float r7081757 = r7081756 * r7081728;
        float r7081758 = r7081755 * r7081757;
        float r7081759 = r7081754 + r7081758;
        float r7081760 = 8192.0;
        float r7081761 = r7081757 * r7081728;
        float r7081762 = r7081761 * r7081728;
        float r7081763 = r7081760 * r7081762;
        float r7081764 = r7081759 + r7081763;
        return r7081764;
}

double f_od(double x) {
        double r7081765 = 17297280.0;
        double r7081766 = x;
        double r7081767 = r7081765 * r7081766;
        double r7081768 = -69189120.0;
        double r7081769 = r7081766 * r7081766;
        double r7081770 = r7081769 * r7081766;
        double r7081771 = r7081768 * r7081770;
        double r7081772 = r7081767 + r7081771;
        double r7081773 = 69189120.0;
        double r7081774 = r7081773 * r7081766;
        double r7081775 = r7081769 * r7081769;
        double r7081776 = r7081774 * r7081775;
        double r7081777 = 3;
        double r7081778 = pow(r7081776, r7081777);
        double r7081779 = cbrt(r7081778);
        double r7081780 = r7081772 + r7081779;
        double r7081781 = -26357760.0;
        double r7081782 = r7081770 * r7081766;
        double r7081783 = r7081782 * r7081766;
        double r7081784 = r7081783 * r7081766;
        double r7081785 = r7081784 * r7081766;
        double r7081786 = r7081781 * r7081785;
        double r7081787 = r7081780 + r7081786;
        double r7081788 = 4392960.0;
        double r7081789 = r7081785 * r7081766;
        double r7081790 = r7081789 * r7081766;
        double r7081791 = r7081788 * r7081790;
        double r7081792 = r7081787 + r7081791;
        double r7081793 = -319488.0;
        double r7081794 = r7081790 * r7081766;
        double r7081795 = r7081794 * r7081766;
        double r7081796 = r7081793 * r7081795;
        double r7081797 = r7081792 + r7081796;
        double r7081798 = 8192.0;
        double r7081799 = r7081795 * r7081766;
        double r7081800 = r7081799 * r7081766;
        double r7081801 = r7081798 * r7081800;
        double r7081802 = r7081797 + r7081801;
        return r7081802;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7081803, r7081804, r7081805, r7081806, r7081807, r7081808, r7081809, r7081810, r7081811, r7081812, r7081813, r7081814, r7081815, r7081816, r7081817, r7081818, r7081819, r7081820, r7081821, r7081822, r7081823, r7081824, r7081825, r7081826, r7081827, r7081828, r7081829, r7081830, r7081831, r7081832, r7081833, r7081834, r7081835;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7081803, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7081804);
        mpfr_init(r7081805);
        mpfr_init_set_str(r7081806, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7081807);
        mpfr_init(r7081808);
        mpfr_init(r7081809);
        mpfr_init(r7081810);
        mpfr_init_set_str(r7081811, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7081812);
        mpfr_init(r7081813);
        mpfr_init(r7081814);
        mpfr_init(r7081815);
        mpfr_init_set_str(r7081816, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r7081817);
        mpfr_init(r7081818);
        mpfr_init(r7081819);
        mpfr_init(r7081820);
        mpfr_init_set_str(r7081821, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r7081822);
        mpfr_init(r7081823);
        mpfr_init(r7081824);
        mpfr_init(r7081825);
        mpfr_init_set_str(r7081826, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r7081827);
        mpfr_init(r7081828);
        mpfr_init(r7081829);
        mpfr_init(r7081830);
        mpfr_init_set_str(r7081831, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r7081832);
        mpfr_init(r7081833);
        mpfr_init(r7081834);
        mpfr_init(r7081835);
}

double f_im(double x) {
        ;
        mpfr_set_d(r7081804, x, MPFR_RNDN);
        mpfr_mul(r7081805, r7081803, r7081804, MPFR_RNDN);
        ;
        mpfr_mul(r7081807, r7081804, r7081804, MPFR_RNDN);
        mpfr_mul(r7081808, r7081807, r7081804, MPFR_RNDN);
        mpfr_mul(r7081809, r7081806, r7081808, MPFR_RNDN);
        mpfr_add(r7081810, r7081805, r7081809, MPFR_RNDN);
        ;
        mpfr_mul(r7081812, r7081808, r7081804, MPFR_RNDN);
        mpfr_mul(r7081813, r7081812, r7081804, MPFR_RNDN);
        mpfr_mul(r7081814, r7081811, r7081813, MPFR_RNDN);
        mpfr_add(r7081815, r7081810, r7081814, MPFR_RNDN);
        ;
        mpfr_mul(r7081817, r7081813, r7081804, MPFR_RNDN);
        mpfr_mul(r7081818, r7081817, r7081804, MPFR_RNDN);
        mpfr_mul(r7081819, r7081816, r7081818, MPFR_RNDN);
        mpfr_add(r7081820, r7081815, r7081819, MPFR_RNDN);
        ;
        mpfr_mul(r7081822, r7081818, r7081804, MPFR_RNDN);
        mpfr_mul(r7081823, r7081822, r7081804, MPFR_RNDN);
        mpfr_mul(r7081824, r7081821, r7081823, MPFR_RNDN);
        mpfr_add(r7081825, r7081820, r7081824, MPFR_RNDN);
        ;
        mpfr_mul(r7081827, r7081823, r7081804, MPFR_RNDN);
        mpfr_mul(r7081828, r7081827, r7081804, MPFR_RNDN);
        mpfr_mul(r7081829, r7081826, r7081828, MPFR_RNDN);
        mpfr_add(r7081830, r7081825, r7081829, MPFR_RNDN);
        ;
        mpfr_mul(r7081832, r7081828, r7081804, MPFR_RNDN);
        mpfr_mul(r7081833, r7081832, r7081804, MPFR_RNDN);
        mpfr_mul(r7081834, r7081831, r7081833, MPFR_RNDN);
        mpfr_add(r7081835, r7081830, r7081834, MPFR_RNDN);
        return mpfr_get_d(r7081835, MPFR_RNDN);
}

static mpfr_t r7081836, r7081837, r7081838, r7081839, r7081840, r7081841, r7081842, r7081843, r7081844, r7081845, r7081846, r7081847, r7081848, r7081849, r7081850, r7081851, r7081852, r7081853, r7081854, r7081855, r7081856, r7081857, r7081858, r7081859, r7081860, r7081861, r7081862, r7081863, r7081864, r7081865, r7081866, r7081867, r7081868, r7081869, r7081870, r7081871, r7081872, r7081873;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7081836, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7081837);
        mpfr_init(r7081838);
        mpfr_init_set_str(r7081839, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7081840);
        mpfr_init(r7081841);
        mpfr_init(r7081842);
        mpfr_init(r7081843);
        mpfr_init_set_str(r7081844, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7081845);
        mpfr_init(r7081846);
        mpfr_init(r7081847);
        mpfr_init_set_str(r7081848, "3", 10, MPFR_RNDN);
        mpfr_init(r7081849);
        mpfr_init(r7081850);
        mpfr_init(r7081851);
        mpfr_init_set_str(r7081852, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r7081853);
        mpfr_init(r7081854);
        mpfr_init(r7081855);
        mpfr_init(r7081856);
        mpfr_init(r7081857);
        mpfr_init(r7081858);
        mpfr_init_set_str(r7081859, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r7081860);
        mpfr_init(r7081861);
        mpfr_init(r7081862);
        mpfr_init(r7081863);
        mpfr_init_set_str(r7081864, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r7081865);
        mpfr_init(r7081866);
        mpfr_init(r7081867);
        mpfr_init(r7081868);
        mpfr_init_set_str(r7081869, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r7081870);
        mpfr_init(r7081871);
        mpfr_init(r7081872);
        mpfr_init(r7081873);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r7081837, x, MPFR_RNDN);
        mpfr_mul(r7081838, r7081836, r7081837, MPFR_RNDN);
        ;
        mpfr_mul(r7081840, r7081837, r7081837, MPFR_RNDN);
        mpfr_mul(r7081841, r7081840, r7081837, MPFR_RNDN);
        mpfr_mul(r7081842, r7081839, r7081841, MPFR_RNDN);
        mpfr_add(r7081843, r7081838, r7081842, MPFR_RNDN);
        ;
        mpfr_mul(r7081845, r7081844, r7081837, MPFR_RNDN);
        mpfr_mul(r7081846, r7081840, r7081840, MPFR_RNDN);
        mpfr_mul(r7081847, r7081845, r7081846, MPFR_RNDN);
        ;
        mpfr_pow(r7081849, r7081847, r7081848, MPFR_RNDN);
        mpfr_cbrt(r7081850, r7081849, MPFR_RNDN);
        mpfr_add(r7081851, r7081843, r7081850, MPFR_RNDN);
        ;
        mpfr_mul(r7081853, r7081841, r7081837, MPFR_RNDN);
        mpfr_mul(r7081854, r7081853, r7081837, MPFR_RNDN);
        mpfr_mul(r7081855, r7081854, r7081837, MPFR_RNDN);
        mpfr_mul(r7081856, r7081855, r7081837, MPFR_RNDN);
        mpfr_mul(r7081857, r7081852, r7081856, MPFR_RNDN);
        mpfr_add(r7081858, r7081851, r7081857, MPFR_RNDN);
        ;
        mpfr_mul(r7081860, r7081856, r7081837, MPFR_RNDN);
        mpfr_mul(r7081861, r7081860, r7081837, MPFR_RNDN);
        mpfr_mul(r7081862, r7081859, r7081861, MPFR_RNDN);
        mpfr_add(r7081863, r7081858, r7081862, MPFR_RNDN);
        ;
        mpfr_mul(r7081865, r7081861, r7081837, MPFR_RNDN);
        mpfr_mul(r7081866, r7081865, r7081837, MPFR_RNDN);
        mpfr_mul(r7081867, r7081864, r7081866, MPFR_RNDN);
        mpfr_add(r7081868, r7081863, r7081867, MPFR_RNDN);
        ;
        mpfr_mul(r7081870, r7081866, r7081837, MPFR_RNDN);
        mpfr_mul(r7081871, r7081870, r7081837, MPFR_RNDN);
        mpfr_mul(r7081872, r7081869, r7081871, MPFR_RNDN);
        mpfr_add(r7081873, r7081868, r7081872, MPFR_RNDN);
        return mpfr_get_d(r7081873, MPFR_RNDN);
}

static mpfr_t r7081874, r7081875, r7081876, r7081877, r7081878, r7081879, r7081880, r7081881, r7081882, r7081883, r7081884, r7081885, r7081886, r7081887, r7081888, r7081889, r7081890, r7081891, r7081892, r7081893, r7081894, r7081895, r7081896, r7081897, r7081898, r7081899, r7081900, r7081901, r7081902, r7081903, r7081904, r7081905, r7081906, r7081907, r7081908, r7081909, r7081910, r7081911;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7081874, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7081875);
        mpfr_init(r7081876);
        mpfr_init_set_str(r7081877, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7081878);
        mpfr_init(r7081879);
        mpfr_init(r7081880);
        mpfr_init(r7081881);
        mpfr_init_set_str(r7081882, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r7081883);
        mpfr_init(r7081884);
        mpfr_init(r7081885);
        mpfr_init_set_str(r7081886, "3", 10, MPFR_RNDN);
        mpfr_init(r7081887);
        mpfr_init(r7081888);
        mpfr_init(r7081889);
        mpfr_init_set_str(r7081890, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r7081891);
        mpfr_init(r7081892);
        mpfr_init(r7081893);
        mpfr_init(r7081894);
        mpfr_init(r7081895);
        mpfr_init(r7081896);
        mpfr_init_set_str(r7081897, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r7081898);
        mpfr_init(r7081899);
        mpfr_init(r7081900);
        mpfr_init(r7081901);
        mpfr_init_set_str(r7081902, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r7081903);
        mpfr_init(r7081904);
        mpfr_init(r7081905);
        mpfr_init(r7081906);
        mpfr_init_set_str(r7081907, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r7081908);
        mpfr_init(r7081909);
        mpfr_init(r7081910);
        mpfr_init(r7081911);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r7081875, x, MPFR_RNDN);
        mpfr_mul(r7081876, r7081874, r7081875, MPFR_RNDN);
        ;
        mpfr_mul(r7081878, r7081875, r7081875, MPFR_RNDN);
        mpfr_mul(r7081879, r7081878, r7081875, MPFR_RNDN);
        mpfr_mul(r7081880, r7081877, r7081879, MPFR_RNDN);
        mpfr_add(r7081881, r7081876, r7081880, MPFR_RNDN);
        ;
        mpfr_mul(r7081883, r7081882, r7081875, MPFR_RNDN);
        mpfr_mul(r7081884, r7081878, r7081878, MPFR_RNDN);
        mpfr_mul(r7081885, r7081883, r7081884, MPFR_RNDN);
        ;
        mpfr_pow(r7081887, r7081885, r7081886, MPFR_RNDN);
        mpfr_cbrt(r7081888, r7081887, MPFR_RNDN);
        mpfr_add(r7081889, r7081881, r7081888, MPFR_RNDN);
        ;
        mpfr_mul(r7081891, r7081879, r7081875, MPFR_RNDN);
        mpfr_mul(r7081892, r7081891, r7081875, MPFR_RNDN);
        mpfr_mul(r7081893, r7081892, r7081875, MPFR_RNDN);
        mpfr_mul(r7081894, r7081893, r7081875, MPFR_RNDN);
        mpfr_mul(r7081895, r7081890, r7081894, MPFR_RNDN);
        mpfr_add(r7081896, r7081889, r7081895, MPFR_RNDN);
        ;
        mpfr_mul(r7081898, r7081894, r7081875, MPFR_RNDN);
        mpfr_mul(r7081899, r7081898, r7081875, MPFR_RNDN);
        mpfr_mul(r7081900, r7081897, r7081899, MPFR_RNDN);
        mpfr_add(r7081901, r7081896, r7081900, MPFR_RNDN);
        ;
        mpfr_mul(r7081903, r7081899, r7081875, MPFR_RNDN);
        mpfr_mul(r7081904, r7081903, r7081875, MPFR_RNDN);
        mpfr_mul(r7081905, r7081902, r7081904, MPFR_RNDN);
        mpfr_add(r7081906, r7081901, r7081905, MPFR_RNDN);
        ;
        mpfr_mul(r7081908, r7081904, r7081875, MPFR_RNDN);
        mpfr_mul(r7081909, r7081908, r7081875, MPFR_RNDN);
        mpfr_mul(r7081910, r7081907, r7081909, MPFR_RNDN);
        mpfr_add(r7081911, r7081906, r7081910, MPFR_RNDN);
        return mpfr_get_d(r7081911, MPFR_RNDN);
}

