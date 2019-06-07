#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "11";

double f_if(float x) {
        float r49140669 = -2.707031;
        float r49140670 = x;
        float r49140671 = r49140669 * r49140670;
        float r49140672 = 58.652344;
        float r49140673 = r49140670 * r49140670;
        float r49140674 = r49140673 * r49140670;
        float r49140675 = r49140672 * r49140674;
        float r49140676 = r49140671 + r49140675;
        float r49140677 = -351.914062;
        float r49140678 = r49140674 * r49140670;
        float r49140679 = r49140678 * r49140670;
        float r49140680 = r49140677 * r49140679;
        float r49140681 = r49140676 + r49140680;
        float r49140682 = 854.648438;
        float r49140683 = r49140679 * r49140670;
        float r49140684 = r49140683 * r49140670;
        float r49140685 = r49140682 * r49140684;
        float r49140686 = r49140681 + r49140685;
        float r49140687 = -902.128906;
        float r49140688 = r49140684 * r49140670;
        float r49140689 = r49140688 * r49140670;
        float r49140690 = r49140687 * r49140689;
        float r49140691 = r49140686 + r49140690;
        float r49140692 = 344.449219;
        float r49140693 = r49140689 * r49140670;
        float r49140694 = r49140693 * r49140670;
        float r49140695 = r49140692 * r49140694;
        float r49140696 = r49140691 + r49140695;
        return r49140696;
}

double f_id(double x) {
        double r49140697 = -2.707031;
        double r49140698 = x;
        double r49140699 = r49140697 * r49140698;
        double r49140700 = 58.652344;
        double r49140701 = r49140698 * r49140698;
        double r49140702 = r49140701 * r49140698;
        double r49140703 = r49140700 * r49140702;
        double r49140704 = r49140699 + r49140703;
        double r49140705 = -351.914062;
        double r49140706 = r49140702 * r49140698;
        double r49140707 = r49140706 * r49140698;
        double r49140708 = r49140705 * r49140707;
        double r49140709 = r49140704 + r49140708;
        double r49140710 = 854.648438;
        double r49140711 = r49140707 * r49140698;
        double r49140712 = r49140711 * r49140698;
        double r49140713 = r49140710 * r49140712;
        double r49140714 = r49140709 + r49140713;
        double r49140715 = -902.128906;
        double r49140716 = r49140712 * r49140698;
        double r49140717 = r49140716 * r49140698;
        double r49140718 = r49140715 * r49140717;
        double r49140719 = r49140714 + r49140718;
        double r49140720 = 344.449219;
        double r49140721 = r49140717 * r49140698;
        double r49140722 = r49140721 * r49140698;
        double r49140723 = r49140720 * r49140722;
        double r49140724 = r49140719 + r49140723;
        return r49140724;
}


double f_of(float x) {
        float r49140725 = x;
        float r49140726 = exp(r49140725);
        float r49140727 = r49140725 * r49140725;
        float r49140728 = 3;
        float r49140729 = pow(r49140727, r49140728);
        float r49140730 = pow(r49140726, r49140729);
        float r49140731 = 854.648438;
        float r49140732 = -902.128906;
        float r49140733 = r49140727 * r49140732;
        float r49140734 = r49140731 + r49140733;
        float r49140735 = pow(r49140730, r49140734);
        float r49140736 = 344.449219;
        float r49140737 = exp(r49140736);
        float r49140738 = pow(r49140725, r49140728);
        float r49140739 = pow(r49140737, r49140738);
        float r49140740 = 1;
        float r49140741 = r49140728 + r49140740;
        float r49140742 = pow(r49140727, r49140741);
        float r49140743 = pow(r49140739, r49140742);
        float r49140744 = -351.914062;
        float r49140745 = exp(r49140744);
        float r49140746 = r49140738 * r49140727;
        float r49140747 = pow(r49140745, r49140746);
        float r49140748 = r49140743 * r49140747;
        float r49140749 = -2.707031;
        float r49140750 = r49140749 * r49140725;
        float r49140751 = exp(r49140750);
        float r49140752 = 58.652344;
        float r49140753 = exp(r49140752);
        float r49140754 = pow(r49140753, r49140738);
        float r49140755 = r49140751 * r49140754;
        float r49140756 = r49140748 * r49140755;
        float r49140757 = r49140735 * r49140756;
        float r49140758 = log(r49140757);
        return r49140758;
}

double f_od(double x) {
        double r49140759 = x;
        double r49140760 = exp(r49140759);
        double r49140761 = r49140759 * r49140759;
        double r49140762 = 3;
        double r49140763 = pow(r49140761, r49140762);
        double r49140764 = pow(r49140760, r49140763);
        double r49140765 = 854.648438;
        double r49140766 = -902.128906;
        double r49140767 = r49140761 * r49140766;
        double r49140768 = r49140765 + r49140767;
        double r49140769 = pow(r49140764, r49140768);
        double r49140770 = 344.449219;
        double r49140771 = exp(r49140770);
        double r49140772 = pow(r49140759, r49140762);
        double r49140773 = pow(r49140771, r49140772);
        double r49140774 = 1;
        double r49140775 = r49140762 + r49140774;
        double r49140776 = pow(r49140761, r49140775);
        double r49140777 = pow(r49140773, r49140776);
        double r49140778 = -351.914062;
        double r49140779 = exp(r49140778);
        double r49140780 = r49140772 * r49140761;
        double r49140781 = pow(r49140779, r49140780);
        double r49140782 = r49140777 * r49140781;
        double r49140783 = -2.707031;
        double r49140784 = r49140783 * r49140759;
        double r49140785 = exp(r49140784);
        double r49140786 = 58.652344;
        double r49140787 = exp(r49140786);
        double r49140788 = pow(r49140787, r49140772);
        double r49140789 = r49140785 * r49140788;
        double r49140790 = r49140782 * r49140789;
        double r49140791 = r49140769 * r49140790;
        double r49140792 = log(r49140791);
        return r49140792;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r49140793, r49140794, r49140795, r49140796, r49140797, r49140798, r49140799, r49140800, r49140801, r49140802, r49140803, r49140804, r49140805, r49140806, r49140807, r49140808, r49140809, r49140810, r49140811, r49140812, r49140813, r49140814, r49140815, r49140816, r49140817, r49140818, r49140819, r49140820;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r49140793, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r49140794);
        mpfr_init(r49140795);
        mpfr_init_set_str(r49140796, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r49140797);
        mpfr_init(r49140798);
        mpfr_init(r49140799);
        mpfr_init(r49140800);
        mpfr_init_set_str(r49140801, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r49140802);
        mpfr_init(r49140803);
        mpfr_init(r49140804);
        mpfr_init(r49140805);
        mpfr_init_set_str(r49140806, "854.648438", 10, MPFR_RNDN);
        mpfr_init(r49140807);
        mpfr_init(r49140808);
        mpfr_init(r49140809);
        mpfr_init(r49140810);
        mpfr_init_set_str(r49140811, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r49140812);
        mpfr_init(r49140813);
        mpfr_init(r49140814);
        mpfr_init(r49140815);
        mpfr_init_set_str(r49140816, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r49140817);
        mpfr_init(r49140818);
        mpfr_init(r49140819);
        mpfr_init(r49140820);
}

double f_im(double x) {
        ;
        mpfr_set_d(r49140794, x, MPFR_RNDN);
        mpfr_mul(r49140795, r49140793, r49140794, MPFR_RNDN);
        ;
        mpfr_mul(r49140797, r49140794, r49140794, MPFR_RNDN);
        mpfr_mul(r49140798, r49140797, r49140794, MPFR_RNDN);
        mpfr_mul(r49140799, r49140796, r49140798, MPFR_RNDN);
        mpfr_add(r49140800, r49140795, r49140799, MPFR_RNDN);
        ;
        mpfr_mul(r49140802, r49140798, r49140794, MPFR_RNDN);
        mpfr_mul(r49140803, r49140802, r49140794, MPFR_RNDN);
        mpfr_mul(r49140804, r49140801, r49140803, MPFR_RNDN);
        mpfr_add(r49140805, r49140800, r49140804, MPFR_RNDN);
        ;
        mpfr_mul(r49140807, r49140803, r49140794, MPFR_RNDN);
        mpfr_mul(r49140808, r49140807, r49140794, MPFR_RNDN);
        mpfr_mul(r49140809, r49140806, r49140808, MPFR_RNDN);
        mpfr_add(r49140810, r49140805, r49140809, MPFR_RNDN);
        ;
        mpfr_mul(r49140812, r49140808, r49140794, MPFR_RNDN);
        mpfr_mul(r49140813, r49140812, r49140794, MPFR_RNDN);
        mpfr_mul(r49140814, r49140811, r49140813, MPFR_RNDN);
        mpfr_add(r49140815, r49140810, r49140814, MPFR_RNDN);
        ;
        mpfr_mul(r49140817, r49140813, r49140794, MPFR_RNDN);
        mpfr_mul(r49140818, r49140817, r49140794, MPFR_RNDN);
        mpfr_mul(r49140819, r49140816, r49140818, MPFR_RNDN);
        mpfr_add(r49140820, r49140815, r49140819, MPFR_RNDN);
        return mpfr_get_d(r49140820, MPFR_RNDN);
}

static mpfr_t r49140821, r49140822, r49140823, r49140824, r49140825, r49140826, r49140827, r49140828, r49140829, r49140830, r49140831, r49140832, r49140833, r49140834, r49140835, r49140836, r49140837, r49140838, r49140839, r49140840, r49140841, r49140842, r49140843, r49140844, r49140845, r49140846, r49140847, r49140848, r49140849, r49140850, r49140851, r49140852, r49140853, r49140854;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49140821);
        mpfr_init(r49140822);
        mpfr_init(r49140823);
        mpfr_init_set_str(r49140824, "3", 10, MPFR_RNDN);
        mpfr_init(r49140825);
        mpfr_init(r49140826);
        mpfr_init_set_str(r49140827, "854.648438", 10, MPFR_RNDN);
        mpfr_init_set_str(r49140828, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r49140829);
        mpfr_init(r49140830);
        mpfr_init(r49140831);
        mpfr_init_set_str(r49140832, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r49140833);
        mpfr_init(r49140834);
        mpfr_init(r49140835);
        mpfr_init_set_str(r49140836, "1", 10, MPFR_RNDN);
        mpfr_init(r49140837);
        mpfr_init(r49140838);
        mpfr_init(r49140839);
        mpfr_init_set_str(r49140840, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r49140841);
        mpfr_init(r49140842);
        mpfr_init(r49140843);
        mpfr_init(r49140844);
        mpfr_init_set_str(r49140845, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r49140846);
        mpfr_init(r49140847);
        mpfr_init_set_str(r49140848, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r49140849);
        mpfr_init(r49140850);
        mpfr_init(r49140851);
        mpfr_init(r49140852);
        mpfr_init(r49140853);
        mpfr_init(r49140854);
}

double f_fm(double x) {
        mpfr_set_d(r49140821, x, MPFR_RNDN);
        mpfr_exp(r49140822, r49140821, MPFR_RNDN);
        mpfr_mul(r49140823, r49140821, r49140821, MPFR_RNDN);
        ;
        mpfr_pow(r49140825, r49140823, r49140824, MPFR_RNDN);
        mpfr_pow(r49140826, r49140822, r49140825, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r49140829, r49140823, r49140828, MPFR_RNDN);
        mpfr_add(r49140830, r49140827, r49140829, MPFR_RNDN);
        mpfr_pow(r49140831, r49140826, r49140830, MPFR_RNDN);
        ;
        mpfr_exp(r49140833, r49140832, MPFR_RNDN);
        mpfr_pow(r49140834, r49140821, r49140824, MPFR_RNDN);
        mpfr_pow(r49140835, r49140833, r49140834, MPFR_RNDN);
        ;
        mpfr_add(r49140837, r49140824, r49140836, MPFR_RNDN);
        mpfr_pow(r49140838, r49140823, r49140837, MPFR_RNDN);
        mpfr_pow(r49140839, r49140835, r49140838, MPFR_RNDN);
        ;
        mpfr_exp(r49140841, r49140840, MPFR_RNDN);
        mpfr_mul(r49140842, r49140834, r49140823, MPFR_RNDN);
        mpfr_pow(r49140843, r49140841, r49140842, MPFR_RNDN);
        mpfr_mul(r49140844, r49140839, r49140843, MPFR_RNDN);
        ;
        mpfr_mul(r49140846, r49140845, r49140821, MPFR_RNDN);
        mpfr_exp(r49140847, r49140846, MPFR_RNDN);
        ;
        mpfr_exp(r49140849, r49140848, MPFR_RNDN);
        mpfr_pow(r49140850, r49140849, r49140834, MPFR_RNDN);
        mpfr_mul(r49140851, r49140847, r49140850, MPFR_RNDN);
        mpfr_mul(r49140852, r49140844, r49140851, MPFR_RNDN);
        mpfr_mul(r49140853, r49140831, r49140852, MPFR_RNDN);
        mpfr_log(r49140854, r49140853, MPFR_RNDN);
        return mpfr_get_d(r49140854, MPFR_RNDN);
}

static mpfr_t r49140855, r49140856, r49140857, r49140858, r49140859, r49140860, r49140861, r49140862, r49140863, r49140864, r49140865, r49140866, r49140867, r49140868, r49140869, r49140870, r49140871, r49140872, r49140873, r49140874, r49140875, r49140876, r49140877, r49140878, r49140879, r49140880, r49140881, r49140882, r49140883, r49140884, r49140885, r49140886, r49140887, r49140888;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r49140855);
        mpfr_init(r49140856);
        mpfr_init(r49140857);
        mpfr_init_set_str(r49140858, "3", 10, MPFR_RNDN);
        mpfr_init(r49140859);
        mpfr_init(r49140860);
        mpfr_init_set_str(r49140861, "854.648438", 10, MPFR_RNDN);
        mpfr_init_set_str(r49140862, "-902.128906", 10, MPFR_RNDN);
        mpfr_init(r49140863);
        mpfr_init(r49140864);
        mpfr_init(r49140865);
        mpfr_init_set_str(r49140866, "344.449219", 10, MPFR_RNDN);
        mpfr_init(r49140867);
        mpfr_init(r49140868);
        mpfr_init(r49140869);
        mpfr_init_set_str(r49140870, "1", 10, MPFR_RNDN);
        mpfr_init(r49140871);
        mpfr_init(r49140872);
        mpfr_init(r49140873);
        mpfr_init_set_str(r49140874, "-351.914062", 10, MPFR_RNDN);
        mpfr_init(r49140875);
        mpfr_init(r49140876);
        mpfr_init(r49140877);
        mpfr_init(r49140878);
        mpfr_init_set_str(r49140879, "-2.707031", 10, MPFR_RNDN);
        mpfr_init(r49140880);
        mpfr_init(r49140881);
        mpfr_init_set_str(r49140882, "58.652344", 10, MPFR_RNDN);
        mpfr_init(r49140883);
        mpfr_init(r49140884);
        mpfr_init(r49140885);
        mpfr_init(r49140886);
        mpfr_init(r49140887);
        mpfr_init(r49140888);
}

double f_dm(double x) {
        mpfr_set_d(r49140855, x, MPFR_RNDN);
        mpfr_exp(r49140856, r49140855, MPFR_RNDN);
        mpfr_mul(r49140857, r49140855, r49140855, MPFR_RNDN);
        ;
        mpfr_pow(r49140859, r49140857, r49140858, MPFR_RNDN);
        mpfr_pow(r49140860, r49140856, r49140859, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r49140863, r49140857, r49140862, MPFR_RNDN);
        mpfr_add(r49140864, r49140861, r49140863, MPFR_RNDN);
        mpfr_pow(r49140865, r49140860, r49140864, MPFR_RNDN);
        ;
        mpfr_exp(r49140867, r49140866, MPFR_RNDN);
        mpfr_pow(r49140868, r49140855, r49140858, MPFR_RNDN);
        mpfr_pow(r49140869, r49140867, r49140868, MPFR_RNDN);
        ;
        mpfr_add(r49140871, r49140858, r49140870, MPFR_RNDN);
        mpfr_pow(r49140872, r49140857, r49140871, MPFR_RNDN);
        mpfr_pow(r49140873, r49140869, r49140872, MPFR_RNDN);
        ;
        mpfr_exp(r49140875, r49140874, MPFR_RNDN);
        mpfr_mul(r49140876, r49140868, r49140857, MPFR_RNDN);
        mpfr_pow(r49140877, r49140875, r49140876, MPFR_RNDN);
        mpfr_mul(r49140878, r49140873, r49140877, MPFR_RNDN);
        ;
        mpfr_mul(r49140880, r49140879, r49140855, MPFR_RNDN);
        mpfr_exp(r49140881, r49140880, MPFR_RNDN);
        ;
        mpfr_exp(r49140883, r49140882, MPFR_RNDN);
        mpfr_pow(r49140884, r49140883, r49140868, MPFR_RNDN);
        mpfr_mul(r49140885, r49140881, r49140884, MPFR_RNDN);
        mpfr_mul(r49140886, r49140878, r49140885, MPFR_RNDN);
        mpfr_mul(r49140887, r49140865, r49140886, MPFR_RNDN);
        mpfr_log(r49140888, r49140887, MPFR_RNDN);
        return mpfr_get_d(r49140888, MPFR_RNDN);
}

