#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9402648 = 120.0;
        float r9402649 = x;
        float r9402650 = r9402648 * r9402649;
        float r9402651 = -160.0;
        float r9402652 = r9402649 * r9402649;
        float r9402653 = r9402652 * r9402649;
        float r9402654 = r9402651 * r9402653;
        float r9402655 = r9402650 + r9402654;
        float r9402656 = 32.0;
        float r9402657 = r9402653 * r9402649;
        float r9402658 = r9402657 * r9402649;
        float r9402659 = r9402656 * r9402658;
        float r9402660 = r9402655 + r9402659;
        return r9402660;
}

double f_id(double x) {
        double r9402661 = 120.0;
        double r9402662 = x;
        double r9402663 = r9402661 * r9402662;
        double r9402664 = -160.0;
        double r9402665 = r9402662 * r9402662;
        double r9402666 = r9402665 * r9402662;
        double r9402667 = r9402664 * r9402666;
        double r9402668 = r9402663 + r9402667;
        double r9402669 = 32.0;
        double r9402670 = r9402666 * r9402662;
        double r9402671 = r9402670 * r9402662;
        double r9402672 = r9402669 * r9402671;
        double r9402673 = r9402668 + r9402672;
        return r9402673;
}


double f_of(float x) {
        float r9402674 = 120.0;
        float r9402675 = x;
        float r9402676 = r9402674 * r9402675;
        float r9402677 = -160.0;
        float r9402678 = r9402675 * r9402675;
        float r9402679 = r9402678 * r9402675;
        float r9402680 = r9402677 * r9402679;
        float r9402681 = r9402676 + r9402680;
        float r9402682 = 32.0;
        float r9402683 = r9402679 * r9402675;
        float r9402684 = r9402683 * r9402675;
        float r9402685 = r9402682 * r9402684;
        float r9402686 = r9402681 + r9402685;
        return r9402686;
}

double f_od(double x) {
        double r9402687 = 120.0;
        double r9402688 = x;
        double r9402689 = r9402687 * r9402688;
        double r9402690 = -160.0;
        double r9402691 = r9402688 * r9402688;
        double r9402692 = r9402691 * r9402688;
        double r9402693 = r9402690 * r9402692;
        double r9402694 = r9402689 + r9402693;
        double r9402695 = 32.0;
        double r9402696 = r9402692 * r9402688;
        double r9402697 = r9402696 * r9402688;
        double r9402698 = r9402695 * r9402697;
        double r9402699 = r9402694 + r9402698;
        return r9402699;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9402700, r9402701, r9402702, r9402703, r9402704, r9402705, r9402706, r9402707, r9402708, r9402709, r9402710, r9402711, r9402712;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402700, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9402701);
        mpfr_init(r9402702);
        mpfr_init_set_str(r9402703, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9402704);
        mpfr_init(r9402705);
        mpfr_init(r9402706);
        mpfr_init(r9402707);
        mpfr_init_set_str(r9402708, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9402709);
        mpfr_init(r9402710);
        mpfr_init(r9402711);
        mpfr_init(r9402712);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9402701, x, MPFR_RNDN);
        mpfr_mul(r9402702, r9402700, r9402701, MPFR_RNDN);
        ;
        mpfr_mul(r9402704, r9402701, r9402701, MPFR_RNDN);
        mpfr_mul(r9402705, r9402704, r9402701, MPFR_RNDN);
        mpfr_mul(r9402706, r9402703, r9402705, MPFR_RNDN);
        mpfr_add(r9402707, r9402702, r9402706, MPFR_RNDN);
        ;
        mpfr_mul(r9402709, r9402705, r9402701, MPFR_RNDN);
        mpfr_mul(r9402710, r9402709, r9402701, MPFR_RNDN);
        mpfr_mul(r9402711, r9402708, r9402710, MPFR_RNDN);
        mpfr_add(r9402712, r9402707, r9402711, MPFR_RNDN);
        return mpfr_get_d(r9402712, MPFR_RNDN);
}

static mpfr_t r9402713, r9402714, r9402715, r9402716, r9402717, r9402718, r9402719, r9402720, r9402721, r9402722, r9402723, r9402724, r9402725;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402713, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9402714);
        mpfr_init(r9402715);
        mpfr_init_set_str(r9402716, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9402717);
        mpfr_init(r9402718);
        mpfr_init(r9402719);
        mpfr_init(r9402720);
        mpfr_init_set_str(r9402721, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9402722);
        mpfr_init(r9402723);
        mpfr_init(r9402724);
        mpfr_init(r9402725);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9402714, x, MPFR_RNDN);
        mpfr_mul(r9402715, r9402713, r9402714, MPFR_RNDN);
        ;
        mpfr_mul(r9402717, r9402714, r9402714, MPFR_RNDN);
        mpfr_mul(r9402718, r9402717, r9402714, MPFR_RNDN);
        mpfr_mul(r9402719, r9402716, r9402718, MPFR_RNDN);
        mpfr_add(r9402720, r9402715, r9402719, MPFR_RNDN);
        ;
        mpfr_mul(r9402722, r9402718, r9402714, MPFR_RNDN);
        mpfr_mul(r9402723, r9402722, r9402714, MPFR_RNDN);
        mpfr_mul(r9402724, r9402721, r9402723, MPFR_RNDN);
        mpfr_add(r9402725, r9402720, r9402724, MPFR_RNDN);
        return mpfr_get_d(r9402725, MPFR_RNDN);
}

static mpfr_t r9402726, r9402727, r9402728, r9402729, r9402730, r9402731, r9402732, r9402733, r9402734, r9402735, r9402736, r9402737, r9402738;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9402726, "120.0", 10, MPFR_RNDN);
        mpfr_init(r9402727);
        mpfr_init(r9402728);
        mpfr_init_set_str(r9402729, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r9402730);
        mpfr_init(r9402731);
        mpfr_init(r9402732);
        mpfr_init(r9402733);
        mpfr_init_set_str(r9402734, "32.0", 10, MPFR_RNDN);
        mpfr_init(r9402735);
        mpfr_init(r9402736);
        mpfr_init(r9402737);
        mpfr_init(r9402738);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9402727, x, MPFR_RNDN);
        mpfr_mul(r9402728, r9402726, r9402727, MPFR_RNDN);
        ;
        mpfr_mul(r9402730, r9402727, r9402727, MPFR_RNDN);
        mpfr_mul(r9402731, r9402730, r9402727, MPFR_RNDN);
        mpfr_mul(r9402732, r9402729, r9402731, MPFR_RNDN);
        mpfr_add(r9402733, r9402728, r9402732, MPFR_RNDN);
        ;
        mpfr_mul(r9402735, r9402731, r9402727, MPFR_RNDN);
        mpfr_mul(r9402736, r9402735, r9402727, MPFR_RNDN);
        mpfr_mul(r9402737, r9402734, r9402736, MPFR_RNDN);
        mpfr_add(r9402738, r9402733, r9402737, MPFR_RNDN);
        return mpfr_get_d(r9402738, MPFR_RNDN);
}

