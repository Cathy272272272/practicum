#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r7402623 = -0.3125;
        float r7402624 = 6.5625;
        float r7402625 = x;
        float r7402626 = r7402625 * r7402625;
        float r7402627 = r7402624 * r7402626;
        float r7402628 = r7402623 + r7402627;
        float r7402629 = -19.6875;
        float r7402630 = r7402626 * r7402625;
        float r7402631 = r7402630 * r7402625;
        float r7402632 = r7402629 * r7402631;
        float r7402633 = r7402628 + r7402632;
        float r7402634 = 14.4375;
        float r7402635 = r7402631 * r7402625;
        float r7402636 = r7402635 * r7402625;
        float r7402637 = r7402634 * r7402636;
        float r7402638 = r7402633 + r7402637;
        return r7402638;
}

double f_id(double x) {
        double r7402639 = -0.3125;
        double r7402640 = 6.5625;
        double r7402641 = x;
        double r7402642 = r7402641 * r7402641;
        double r7402643 = r7402640 * r7402642;
        double r7402644 = r7402639 + r7402643;
        double r7402645 = -19.6875;
        double r7402646 = r7402642 * r7402641;
        double r7402647 = r7402646 * r7402641;
        double r7402648 = r7402645 * r7402647;
        double r7402649 = r7402644 + r7402648;
        double r7402650 = 14.4375;
        double r7402651 = r7402647 * r7402641;
        double r7402652 = r7402651 * r7402641;
        double r7402653 = r7402650 * r7402652;
        double r7402654 = r7402649 + r7402653;
        return r7402654;
}


double f_of(float x) {
        float r7402655 = x;
        float r7402656 = 6.5625;
        float r7402657 = r7402655 * r7402656;
        float r7402658 = r7402657 * r7402655;
        float r7402659 = -0.3125;
        float r7402660 = r7402658 + r7402659;
        float r7402661 = r7402655 * r7402655;
        float r7402662 = r7402661 * r7402661;
        float r7402663 = -19.6875;
        float r7402664 = 3;
        float r7402665 = pow(r7402663, r7402664);
        float r7402666 = 14.4375;
        float r7402667 = r7402661 * r7402666;
        float r7402668 = pow(r7402667, r7402664);
        float r7402669 = r7402665 + r7402668;
        float r7402670 = r7402662 * r7402669;
        float r7402671 = r7402663 * r7402663;
        float r7402672 = r7402667 * r7402667;
        float r7402673 = r7402663 * r7402667;
        float r7402674 = r7402672 - r7402673;
        float r7402675 = r7402671 + r7402674;
        float r7402676 = r7402670 / r7402675;
        float r7402677 = r7402660 + r7402676;
        return r7402677;
}

double f_od(double x) {
        double r7402678 = x;
        double r7402679 = 6.5625;
        double r7402680 = r7402678 * r7402679;
        double r7402681 = r7402680 * r7402678;
        double r7402682 = -0.3125;
        double r7402683 = r7402681 + r7402682;
        double r7402684 = r7402678 * r7402678;
        double r7402685 = r7402684 * r7402684;
        double r7402686 = -19.6875;
        double r7402687 = 3;
        double r7402688 = pow(r7402686, r7402687);
        double r7402689 = 14.4375;
        double r7402690 = r7402684 * r7402689;
        double r7402691 = pow(r7402690, r7402687);
        double r7402692 = r7402688 + r7402691;
        double r7402693 = r7402685 * r7402692;
        double r7402694 = r7402686 * r7402686;
        double r7402695 = r7402690 * r7402690;
        double r7402696 = r7402686 * r7402690;
        double r7402697 = r7402695 - r7402696;
        double r7402698 = r7402694 + r7402697;
        double r7402699 = r7402693 / r7402698;
        double r7402700 = r7402683 + r7402699;
        return r7402700;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7402701, r7402702, r7402703, r7402704, r7402705, r7402706, r7402707, r7402708, r7402709, r7402710, r7402711, r7402712, r7402713, r7402714, r7402715, r7402716;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r7402701, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402702, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7402703);
        mpfr_init(r7402704);
        mpfr_init(r7402705);
        mpfr_init(r7402706);
        mpfr_init_set_str(r7402707, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r7402708);
        mpfr_init(r7402709);
        mpfr_init(r7402710);
        mpfr_init(r7402711);
        mpfr_init_set_str(r7402712, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7402713);
        mpfr_init(r7402714);
        mpfr_init(r7402715);
        mpfr_init(r7402716);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7402703, x, MPFR_RNDN);
        mpfr_mul(r7402704, r7402703, r7402703, MPFR_RNDN);
        mpfr_mul(r7402705, r7402702, r7402704, MPFR_RNDN);
        mpfr_add(r7402706, r7402701, r7402705, MPFR_RNDN);
        ;
        mpfr_mul(r7402708, r7402704, r7402703, MPFR_RNDN);
        mpfr_mul(r7402709, r7402708, r7402703, MPFR_RNDN);
        mpfr_mul(r7402710, r7402707, r7402709, MPFR_RNDN);
        mpfr_add(r7402711, r7402706, r7402710, MPFR_RNDN);
        ;
        mpfr_mul(r7402713, r7402709, r7402703, MPFR_RNDN);
        mpfr_mul(r7402714, r7402713, r7402703, MPFR_RNDN);
        mpfr_mul(r7402715, r7402712, r7402714, MPFR_RNDN);
        mpfr_add(r7402716, r7402711, r7402715, MPFR_RNDN);
        return mpfr_get_d(r7402716, MPFR_RNDN);
}

static mpfr_t r7402717, r7402718, r7402719, r7402720, r7402721, r7402722, r7402723, r7402724, r7402725, r7402726, r7402727, r7402728, r7402729, r7402730, r7402731, r7402732, r7402733, r7402734, r7402735, r7402736, r7402737, r7402738, r7402739;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7402717);
        mpfr_init_set_str(r7402718, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7402719);
        mpfr_init(r7402720);
        mpfr_init_set_str(r7402721, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r7402722);
        mpfr_init(r7402723);
        mpfr_init(r7402724);
        mpfr_init_set_str(r7402725, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402726, "3", 10, MPFR_RNDN);
        mpfr_init(r7402727);
        mpfr_init_set_str(r7402728, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7402729);
        mpfr_init(r7402730);
        mpfr_init(r7402731);
        mpfr_init(r7402732);
        mpfr_init(r7402733);
        mpfr_init(r7402734);
        mpfr_init(r7402735);
        mpfr_init(r7402736);
        mpfr_init(r7402737);
        mpfr_init(r7402738);
        mpfr_init(r7402739);
}

double f_fm(double x) {
        mpfr_set_d(r7402717, x, MPFR_RNDN);
        ;
        mpfr_mul(r7402719, r7402717, r7402718, MPFR_RNDN);
        mpfr_mul(r7402720, r7402719, r7402717, MPFR_RNDN);
        ;
        mpfr_add(r7402722, r7402720, r7402721, MPFR_RNDN);
        mpfr_mul(r7402723, r7402717, r7402717, MPFR_RNDN);
        mpfr_mul(r7402724, r7402723, r7402723, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7402727, r7402725, r7402726, MPFR_RNDN);
        ;
        mpfr_mul(r7402729, r7402723, r7402728, MPFR_RNDN);
        mpfr_pow(r7402730, r7402729, r7402726, MPFR_RNDN);
        mpfr_add(r7402731, r7402727, r7402730, MPFR_RNDN);
        mpfr_mul(r7402732, r7402724, r7402731, MPFR_RNDN);
        mpfr_mul(r7402733, r7402725, r7402725, MPFR_RNDN);
        mpfr_mul(r7402734, r7402729, r7402729, MPFR_RNDN);
        mpfr_mul(r7402735, r7402725, r7402729, MPFR_RNDN);
        mpfr_sub(r7402736, r7402734, r7402735, MPFR_RNDN);
        mpfr_add(r7402737, r7402733, r7402736, MPFR_RNDN);
        mpfr_div(r7402738, r7402732, r7402737, MPFR_RNDN);
        mpfr_add(r7402739, r7402722, r7402738, MPFR_RNDN);
        return mpfr_get_d(r7402739, MPFR_RNDN);
}

static mpfr_t r7402740, r7402741, r7402742, r7402743, r7402744, r7402745, r7402746, r7402747, r7402748, r7402749, r7402750, r7402751, r7402752, r7402753, r7402754, r7402755, r7402756, r7402757, r7402758, r7402759, r7402760, r7402761, r7402762;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r7402740);
        mpfr_init_set_str(r7402741, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r7402742);
        mpfr_init(r7402743);
        mpfr_init_set_str(r7402744, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r7402745);
        mpfr_init(r7402746);
        mpfr_init(r7402747);
        mpfr_init_set_str(r7402748, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r7402749, "3", 10, MPFR_RNDN);
        mpfr_init(r7402750);
        mpfr_init_set_str(r7402751, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r7402752);
        mpfr_init(r7402753);
        mpfr_init(r7402754);
        mpfr_init(r7402755);
        mpfr_init(r7402756);
        mpfr_init(r7402757);
        mpfr_init(r7402758);
        mpfr_init(r7402759);
        mpfr_init(r7402760);
        mpfr_init(r7402761);
        mpfr_init(r7402762);
}

double f_dm(double x) {
        mpfr_set_d(r7402740, x, MPFR_RNDN);
        ;
        mpfr_mul(r7402742, r7402740, r7402741, MPFR_RNDN);
        mpfr_mul(r7402743, r7402742, r7402740, MPFR_RNDN);
        ;
        mpfr_add(r7402745, r7402743, r7402744, MPFR_RNDN);
        mpfr_mul(r7402746, r7402740, r7402740, MPFR_RNDN);
        mpfr_mul(r7402747, r7402746, r7402746, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7402750, r7402748, r7402749, MPFR_RNDN);
        ;
        mpfr_mul(r7402752, r7402746, r7402751, MPFR_RNDN);
        mpfr_pow(r7402753, r7402752, r7402749, MPFR_RNDN);
        mpfr_add(r7402754, r7402750, r7402753, MPFR_RNDN);
        mpfr_mul(r7402755, r7402747, r7402754, MPFR_RNDN);
        mpfr_mul(r7402756, r7402748, r7402748, MPFR_RNDN);
        mpfr_mul(r7402757, r7402752, r7402752, MPFR_RNDN);
        mpfr_mul(r7402758, r7402748, r7402752, MPFR_RNDN);
        mpfr_sub(r7402759, r7402757, r7402758, MPFR_RNDN);
        mpfr_add(r7402760, r7402756, r7402759, MPFR_RNDN);
        mpfr_div(r7402761, r7402755, r7402760, MPFR_RNDN);
        mpfr_add(r7402762, r7402745, r7402761, MPFR_RNDN);
        return mpfr_get_d(r7402762, MPFR_RNDN);
}

