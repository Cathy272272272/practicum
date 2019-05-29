#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10035711 = 0.273438;
        float r10035712 = -9.84375;
        float r10035713 = x;
        float r10035714 = r10035713 * r10035713;
        float r10035715 = r10035712 * r10035714;
        float r10035716 = r10035711 + r10035715;
        float r10035717 = 54.140625;
        float r10035718 = r10035714 * r10035713;
        float r10035719 = r10035718 * r10035713;
        float r10035720 = r10035717 * r10035719;
        float r10035721 = r10035716 + r10035720;
        float r10035722 = -93.84375;
        float r10035723 = r10035719 * r10035713;
        float r10035724 = r10035723 * r10035713;
        float r10035725 = r10035722 * r10035724;
        float r10035726 = r10035721 + r10035725;
        float r10035727 = 50.273438;
        float r10035728 = r10035724 * r10035713;
        float r10035729 = r10035728 * r10035713;
        float r10035730 = r10035727 * r10035729;
        float r10035731 = r10035726 + r10035730;
        return r10035731;
}

double f_id(double x) {
        double r10035732 = 0.273438;
        double r10035733 = -9.84375;
        double r10035734 = x;
        double r10035735 = r10035734 * r10035734;
        double r10035736 = r10035733 * r10035735;
        double r10035737 = r10035732 + r10035736;
        double r10035738 = 54.140625;
        double r10035739 = r10035735 * r10035734;
        double r10035740 = r10035739 * r10035734;
        double r10035741 = r10035738 * r10035740;
        double r10035742 = r10035737 + r10035741;
        double r10035743 = -93.84375;
        double r10035744 = r10035740 * r10035734;
        double r10035745 = r10035744 * r10035734;
        double r10035746 = r10035743 * r10035745;
        double r10035747 = r10035742 + r10035746;
        double r10035748 = 50.273438;
        double r10035749 = r10035745 * r10035734;
        double r10035750 = r10035749 * r10035734;
        double r10035751 = r10035748 * r10035750;
        double r10035752 = r10035747 + r10035751;
        return r10035752;
}


double f_of(float x) {
        float r10035753 = 0.273438;
        float r10035754 = -9.84375;
        float r10035755 = x;
        float r10035756 = r10035755 * r10035755;
        float r10035757 = r10035754 * r10035756;
        float r10035758 = r10035753 + r10035757;
        float r10035759 = 54.140625;
        float r10035760 = r10035756 * r10035755;
        float r10035761 = r10035760 * r10035755;
        float r10035762 = r10035759 * r10035761;
        float r10035763 = r10035758 + r10035762;
        float r10035764 = -93.84375;
        float r10035765 = r10035761 * r10035755;
        float r10035766 = r10035765 * r10035755;
        float r10035767 = r10035764 * r10035766;
        float r10035768 = r10035763 + r10035767;
        float r10035769 = 50.273438;
        float r10035770 = r10035766 * r10035755;
        float r10035771 = r10035770 * r10035755;
        float r10035772 = r10035769 * r10035771;
        float r10035773 = r10035768 + r10035772;
        return r10035773;
}

double f_od(double x) {
        double r10035774 = 0.273438;
        double r10035775 = -9.84375;
        double r10035776 = x;
        double r10035777 = r10035776 * r10035776;
        double r10035778 = r10035775 * r10035777;
        double r10035779 = r10035774 + r10035778;
        double r10035780 = 54.140625;
        double r10035781 = r10035777 * r10035776;
        double r10035782 = r10035781 * r10035776;
        double r10035783 = r10035780 * r10035782;
        double r10035784 = r10035779 + r10035783;
        double r10035785 = -93.84375;
        double r10035786 = r10035782 * r10035776;
        double r10035787 = r10035786 * r10035776;
        double r10035788 = r10035785 * r10035787;
        double r10035789 = r10035784 + r10035788;
        double r10035790 = 50.273438;
        double r10035791 = r10035787 * r10035776;
        double r10035792 = r10035791 * r10035776;
        double r10035793 = r10035790 * r10035792;
        double r10035794 = r10035789 + r10035793;
        return r10035794;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10035795, r10035796, r10035797, r10035798, r10035799, r10035800, r10035801, r10035802, r10035803, r10035804, r10035805, r10035806, r10035807, r10035808, r10035809, r10035810, r10035811, r10035812, r10035813, r10035814, r10035815;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10035795, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r10035796, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r10035797);
        mpfr_init(r10035798);
        mpfr_init(r10035799);
        mpfr_init(r10035800);
        mpfr_init_set_str(r10035801, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r10035802);
        mpfr_init(r10035803);
        mpfr_init(r10035804);
        mpfr_init(r10035805);
        mpfr_init_set_str(r10035806, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r10035807);
        mpfr_init(r10035808);
        mpfr_init(r10035809);
        mpfr_init(r10035810);
        mpfr_init_set_str(r10035811, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r10035812);
        mpfr_init(r10035813);
        mpfr_init(r10035814);
        mpfr_init(r10035815);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10035797, x, MPFR_RNDN);
        mpfr_mul(r10035798, r10035797, r10035797, MPFR_RNDN);
        mpfr_mul(r10035799, r10035796, r10035798, MPFR_RNDN);
        mpfr_add(r10035800, r10035795, r10035799, MPFR_RNDN);
        ;
        mpfr_mul(r10035802, r10035798, r10035797, MPFR_RNDN);
        mpfr_mul(r10035803, r10035802, r10035797, MPFR_RNDN);
        mpfr_mul(r10035804, r10035801, r10035803, MPFR_RNDN);
        mpfr_add(r10035805, r10035800, r10035804, MPFR_RNDN);
        ;
        mpfr_mul(r10035807, r10035803, r10035797, MPFR_RNDN);
        mpfr_mul(r10035808, r10035807, r10035797, MPFR_RNDN);
        mpfr_mul(r10035809, r10035806, r10035808, MPFR_RNDN);
        mpfr_add(r10035810, r10035805, r10035809, MPFR_RNDN);
        ;
        mpfr_mul(r10035812, r10035808, r10035797, MPFR_RNDN);
        mpfr_mul(r10035813, r10035812, r10035797, MPFR_RNDN);
        mpfr_mul(r10035814, r10035811, r10035813, MPFR_RNDN);
        mpfr_add(r10035815, r10035810, r10035814, MPFR_RNDN);
        return mpfr_get_d(r10035815, MPFR_RNDN);
}

static mpfr_t r10035816, r10035817, r10035818, r10035819, r10035820, r10035821, r10035822, r10035823, r10035824, r10035825, r10035826, r10035827, r10035828, r10035829, r10035830, r10035831, r10035832, r10035833, r10035834, r10035835, r10035836;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10035816, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r10035817, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r10035818);
        mpfr_init(r10035819);
        mpfr_init(r10035820);
        mpfr_init(r10035821);
        mpfr_init_set_str(r10035822, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r10035823);
        mpfr_init(r10035824);
        mpfr_init(r10035825);
        mpfr_init(r10035826);
        mpfr_init_set_str(r10035827, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r10035828);
        mpfr_init(r10035829);
        mpfr_init(r10035830);
        mpfr_init(r10035831);
        mpfr_init_set_str(r10035832, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r10035833);
        mpfr_init(r10035834);
        mpfr_init(r10035835);
        mpfr_init(r10035836);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10035818, x, MPFR_RNDN);
        mpfr_mul(r10035819, r10035818, r10035818, MPFR_RNDN);
        mpfr_mul(r10035820, r10035817, r10035819, MPFR_RNDN);
        mpfr_add(r10035821, r10035816, r10035820, MPFR_RNDN);
        ;
        mpfr_mul(r10035823, r10035819, r10035818, MPFR_RNDN);
        mpfr_mul(r10035824, r10035823, r10035818, MPFR_RNDN);
        mpfr_mul(r10035825, r10035822, r10035824, MPFR_RNDN);
        mpfr_add(r10035826, r10035821, r10035825, MPFR_RNDN);
        ;
        mpfr_mul(r10035828, r10035824, r10035818, MPFR_RNDN);
        mpfr_mul(r10035829, r10035828, r10035818, MPFR_RNDN);
        mpfr_mul(r10035830, r10035827, r10035829, MPFR_RNDN);
        mpfr_add(r10035831, r10035826, r10035830, MPFR_RNDN);
        ;
        mpfr_mul(r10035833, r10035829, r10035818, MPFR_RNDN);
        mpfr_mul(r10035834, r10035833, r10035818, MPFR_RNDN);
        mpfr_mul(r10035835, r10035832, r10035834, MPFR_RNDN);
        mpfr_add(r10035836, r10035831, r10035835, MPFR_RNDN);
        return mpfr_get_d(r10035836, MPFR_RNDN);
}

static mpfr_t r10035837, r10035838, r10035839, r10035840, r10035841, r10035842, r10035843, r10035844, r10035845, r10035846, r10035847, r10035848, r10035849, r10035850, r10035851, r10035852, r10035853, r10035854, r10035855, r10035856, r10035857;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10035837, "0.273438", 10, MPFR_RNDN);
        mpfr_init_set_str(r10035838, "-9.84375", 10, MPFR_RNDN);
        mpfr_init(r10035839);
        mpfr_init(r10035840);
        mpfr_init(r10035841);
        mpfr_init(r10035842);
        mpfr_init_set_str(r10035843, "54.140625", 10, MPFR_RNDN);
        mpfr_init(r10035844);
        mpfr_init(r10035845);
        mpfr_init(r10035846);
        mpfr_init(r10035847);
        mpfr_init_set_str(r10035848, "-93.84375", 10, MPFR_RNDN);
        mpfr_init(r10035849);
        mpfr_init(r10035850);
        mpfr_init(r10035851);
        mpfr_init(r10035852);
        mpfr_init_set_str(r10035853, "50.273438", 10, MPFR_RNDN);
        mpfr_init(r10035854);
        mpfr_init(r10035855);
        mpfr_init(r10035856);
        mpfr_init(r10035857);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10035839, x, MPFR_RNDN);
        mpfr_mul(r10035840, r10035839, r10035839, MPFR_RNDN);
        mpfr_mul(r10035841, r10035838, r10035840, MPFR_RNDN);
        mpfr_add(r10035842, r10035837, r10035841, MPFR_RNDN);
        ;
        mpfr_mul(r10035844, r10035840, r10035839, MPFR_RNDN);
        mpfr_mul(r10035845, r10035844, r10035839, MPFR_RNDN);
        mpfr_mul(r10035846, r10035843, r10035845, MPFR_RNDN);
        mpfr_add(r10035847, r10035842, r10035846, MPFR_RNDN);
        ;
        mpfr_mul(r10035849, r10035845, r10035839, MPFR_RNDN);
        mpfr_mul(r10035850, r10035849, r10035839, MPFR_RNDN);
        mpfr_mul(r10035851, r10035848, r10035850, MPFR_RNDN);
        mpfr_add(r10035852, r10035847, r10035851, MPFR_RNDN);
        ;
        mpfr_mul(r10035854, r10035850, r10035839, MPFR_RNDN);
        mpfr_mul(r10035855, r10035854, r10035839, MPFR_RNDN);
        mpfr_mul(r10035856, r10035853, r10035855, MPFR_RNDN);
        mpfr_add(r10035857, r10035852, r10035856, MPFR_RNDN);
        return mpfr_get_d(r10035857, MPFR_RNDN);
}

