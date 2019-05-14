#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9852631 = 1.0;
        float r9852632 = -5.0;
        float r9852633 = x;
        float r9852634 = r9852632 * r9852633;
        float r9852635 = r9852631 + r9852634;
        float r9852636 = 5.0;
        float r9852637 = r9852633 * r9852633;
        float r9852638 = r9852636 * r9852637;
        float r9852639 = r9852635 + r9852638;
        float r9852640 = -1.666667;
        float r9852641 = r9852637 * r9852633;
        float r9852642 = r9852640 * r9852641;
        float r9852643 = r9852639 + r9852642;
        float r9852644 = 0.208333;
        float r9852645 = r9852641 * r9852633;
        float r9852646 = r9852644 * r9852645;
        float r9852647 = r9852643 + r9852646;
        float r9852648 = -0.008333;
        float r9852649 = r9852645 * r9852633;
        float r9852650 = r9852648 * r9852649;
        float r9852651 = r9852647 + r9852650;
        return r9852651;
}

double f_id(double x) {
        double r9852652 = 1.0;
        double r9852653 = -5.0;
        double r9852654 = x;
        double r9852655 = r9852653 * r9852654;
        double r9852656 = r9852652 + r9852655;
        double r9852657 = 5.0;
        double r9852658 = r9852654 * r9852654;
        double r9852659 = r9852657 * r9852658;
        double r9852660 = r9852656 + r9852659;
        double r9852661 = -1.666667;
        double r9852662 = r9852658 * r9852654;
        double r9852663 = r9852661 * r9852662;
        double r9852664 = r9852660 + r9852663;
        double r9852665 = 0.208333;
        double r9852666 = r9852662 * r9852654;
        double r9852667 = r9852665 * r9852666;
        double r9852668 = r9852664 + r9852667;
        double r9852669 = -0.008333;
        double r9852670 = r9852666 * r9852654;
        double r9852671 = r9852669 * r9852670;
        double r9852672 = r9852668 + r9852671;
        return r9852672;
}


double f_of(float x) {
        float r9852673 = 1.0;
        float r9852674 = -5.0;
        float r9852675 = x;
        float r9852676 = r9852674 * r9852675;
        float r9852677 = r9852673 + r9852676;
        float r9852678 = 5.0;
        float r9852679 = r9852675 * r9852675;
        float r9852680 = r9852678 * r9852679;
        float r9852681 = r9852677 + r9852680;
        float r9852682 = -1.666667;
        float r9852683 = 3;
        float r9852684 = pow(r9852675, r9852683);
        float r9852685 = r9852682 * r9852684;
        float r9852686 = r9852681 + r9852685;
        float r9852687 = 0.208333;
        float r9852688 = r9852679 * r9852675;
        float r9852689 = r9852688 * r9852675;
        float r9852690 = r9852687 * r9852689;
        float r9852691 = r9852686 + r9852690;
        float r9852692 = -0.008333;
        float r9852693 = 1;
        float r9852694 = r9852683 + r9852693;
        float r9852695 = pow(r9852675, r9852694);
        float r9852696 = r9852695 * r9852675;
        float r9852697 = r9852692 * r9852696;
        float r9852698 = r9852691 + r9852697;
        return r9852698;
}

double f_od(double x) {
        double r9852699 = 1.0;
        double r9852700 = -5.0;
        double r9852701 = x;
        double r9852702 = r9852700 * r9852701;
        double r9852703 = r9852699 + r9852702;
        double r9852704 = 5.0;
        double r9852705 = r9852701 * r9852701;
        double r9852706 = r9852704 * r9852705;
        double r9852707 = r9852703 + r9852706;
        double r9852708 = -1.666667;
        double r9852709 = 3;
        double r9852710 = pow(r9852701, r9852709);
        double r9852711 = r9852708 * r9852710;
        double r9852712 = r9852707 + r9852711;
        double r9852713 = 0.208333;
        double r9852714 = r9852705 * r9852701;
        double r9852715 = r9852714 * r9852701;
        double r9852716 = r9852713 * r9852715;
        double r9852717 = r9852712 + r9852716;
        double r9852718 = -0.008333;
        double r9852719 = 1;
        double r9852720 = r9852709 + r9852719;
        double r9852721 = pow(r9852701, r9852720);
        double r9852722 = r9852721 * r9852701;
        double r9852723 = r9852718 * r9852722;
        double r9852724 = r9852717 + r9852723;
        return r9852724;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9852725, r9852726, r9852727, r9852728, r9852729, r9852730, r9852731, r9852732, r9852733, r9852734, r9852735, r9852736, r9852737, r9852738, r9852739, r9852740, r9852741, r9852742, r9852743, r9852744, r9852745;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852725, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852726, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9852727);
        mpfr_init(r9852728);
        mpfr_init(r9852729);
        mpfr_init_set_str(r9852730, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9852731);
        mpfr_init(r9852732);
        mpfr_init(r9852733);
        mpfr_init_set_str(r9852734, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9852735);
        mpfr_init(r9852736);
        mpfr_init(r9852737);
        mpfr_init_set_str(r9852738, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9852739);
        mpfr_init(r9852740);
        mpfr_init(r9852741);
        mpfr_init_set_str(r9852742, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9852743);
        mpfr_init(r9852744);
        mpfr_init(r9852745);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9852727, x, MPFR_RNDN);
        mpfr_mul(r9852728, r9852726, r9852727, MPFR_RNDN);
        mpfr_add(r9852729, r9852725, r9852728, MPFR_RNDN);
        ;
        mpfr_mul(r9852731, r9852727, r9852727, MPFR_RNDN);
        mpfr_mul(r9852732, r9852730, r9852731, MPFR_RNDN);
        mpfr_add(r9852733, r9852729, r9852732, MPFR_RNDN);
        ;
        mpfr_mul(r9852735, r9852731, r9852727, MPFR_RNDN);
        mpfr_mul(r9852736, r9852734, r9852735, MPFR_RNDN);
        mpfr_add(r9852737, r9852733, r9852736, MPFR_RNDN);
        ;
        mpfr_mul(r9852739, r9852735, r9852727, MPFR_RNDN);
        mpfr_mul(r9852740, r9852738, r9852739, MPFR_RNDN);
        mpfr_add(r9852741, r9852737, r9852740, MPFR_RNDN);
        ;
        mpfr_mul(r9852743, r9852739, r9852727, MPFR_RNDN);
        mpfr_mul(r9852744, r9852742, r9852743, MPFR_RNDN);
        mpfr_add(r9852745, r9852741, r9852744, MPFR_RNDN);
        return mpfr_get_d(r9852745, MPFR_RNDN);
}

static mpfr_t r9852746, r9852747, r9852748, r9852749, r9852750, r9852751, r9852752, r9852753, r9852754, r9852755, r9852756, r9852757, r9852758, r9852759, r9852760, r9852761, r9852762, r9852763, r9852764, r9852765, r9852766, r9852767, r9852768, r9852769, r9852770, r9852771;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852746, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852747, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9852748);
        mpfr_init(r9852749);
        mpfr_init(r9852750);
        mpfr_init_set_str(r9852751, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9852752);
        mpfr_init(r9852753);
        mpfr_init(r9852754);
        mpfr_init_set_str(r9852755, "-1.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852756, "3", 10, MPFR_RNDN);
        mpfr_init(r9852757);
        mpfr_init(r9852758);
        mpfr_init(r9852759);
        mpfr_init_set_str(r9852760, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9852761);
        mpfr_init(r9852762);
        mpfr_init(r9852763);
        mpfr_init(r9852764);
        mpfr_init_set_str(r9852765, "-0.008333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852766, "1", 10, MPFR_RNDN);
        mpfr_init(r9852767);
        mpfr_init(r9852768);
        mpfr_init(r9852769);
        mpfr_init(r9852770);
        mpfr_init(r9852771);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9852748, x, MPFR_RNDN);
        mpfr_mul(r9852749, r9852747, r9852748, MPFR_RNDN);
        mpfr_add(r9852750, r9852746, r9852749, MPFR_RNDN);
        ;
        mpfr_mul(r9852752, r9852748, r9852748, MPFR_RNDN);
        mpfr_mul(r9852753, r9852751, r9852752, MPFR_RNDN);
        mpfr_add(r9852754, r9852750, r9852753, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9852757, r9852748, r9852756, MPFR_RNDN);
        mpfr_mul(r9852758, r9852755, r9852757, MPFR_RNDN);
        mpfr_add(r9852759, r9852754, r9852758, MPFR_RNDN);
        ;
        mpfr_mul(r9852761, r9852752, r9852748, MPFR_RNDN);
        mpfr_mul(r9852762, r9852761, r9852748, MPFR_RNDN);
        mpfr_mul(r9852763, r9852760, r9852762, MPFR_RNDN);
        mpfr_add(r9852764, r9852759, r9852763, MPFR_RNDN);
        ;
        ;
        mpfr_add(r9852767, r9852756, r9852766, MPFR_RNDN);
        mpfr_pow(r9852768, r9852748, r9852767, MPFR_RNDN);
        mpfr_mul(r9852769, r9852768, r9852748, MPFR_RNDN);
        mpfr_mul(r9852770, r9852765, r9852769, MPFR_RNDN);
        mpfr_add(r9852771, r9852764, r9852770, MPFR_RNDN);
        return mpfr_get_d(r9852771, MPFR_RNDN);
}

static mpfr_t r9852772, r9852773, r9852774, r9852775, r9852776, r9852777, r9852778, r9852779, r9852780, r9852781, r9852782, r9852783, r9852784, r9852785, r9852786, r9852787, r9852788, r9852789, r9852790, r9852791, r9852792, r9852793, r9852794, r9852795, r9852796, r9852797;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9852772, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852773, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9852774);
        mpfr_init(r9852775);
        mpfr_init(r9852776);
        mpfr_init_set_str(r9852777, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9852778);
        mpfr_init(r9852779);
        mpfr_init(r9852780);
        mpfr_init_set_str(r9852781, "-1.666667", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852782, "3", 10, MPFR_RNDN);
        mpfr_init(r9852783);
        mpfr_init(r9852784);
        mpfr_init(r9852785);
        mpfr_init_set_str(r9852786, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9852787);
        mpfr_init(r9852788);
        mpfr_init(r9852789);
        mpfr_init(r9852790);
        mpfr_init_set_str(r9852791, "-0.008333", 10, MPFR_RNDN);
        mpfr_init_set_str(r9852792, "1", 10, MPFR_RNDN);
        mpfr_init(r9852793);
        mpfr_init(r9852794);
        mpfr_init(r9852795);
        mpfr_init(r9852796);
        mpfr_init(r9852797);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9852774, x, MPFR_RNDN);
        mpfr_mul(r9852775, r9852773, r9852774, MPFR_RNDN);
        mpfr_add(r9852776, r9852772, r9852775, MPFR_RNDN);
        ;
        mpfr_mul(r9852778, r9852774, r9852774, MPFR_RNDN);
        mpfr_mul(r9852779, r9852777, r9852778, MPFR_RNDN);
        mpfr_add(r9852780, r9852776, r9852779, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9852783, r9852774, r9852782, MPFR_RNDN);
        mpfr_mul(r9852784, r9852781, r9852783, MPFR_RNDN);
        mpfr_add(r9852785, r9852780, r9852784, MPFR_RNDN);
        ;
        mpfr_mul(r9852787, r9852778, r9852774, MPFR_RNDN);
        mpfr_mul(r9852788, r9852787, r9852774, MPFR_RNDN);
        mpfr_mul(r9852789, r9852786, r9852788, MPFR_RNDN);
        mpfr_add(r9852790, r9852785, r9852789, MPFR_RNDN);
        ;
        ;
        mpfr_add(r9852793, r9852782, r9852792, MPFR_RNDN);
        mpfr_pow(r9852794, r9852774, r9852793, MPFR_RNDN);
        mpfr_mul(r9852795, r9852794, r9852774, MPFR_RNDN);
        mpfr_mul(r9852796, r9852791, r9852795, MPFR_RNDN);
        mpfr_add(r9852797, r9852790, r9852796, MPFR_RNDN);
        return mpfr_get_d(r9852797, MPFR_RNDN);
}

