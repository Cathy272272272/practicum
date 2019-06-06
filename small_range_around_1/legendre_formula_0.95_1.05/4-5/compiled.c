#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r26948655 = 1.875;
        float r26948656 = x;
        float r26948657 = r26948655 * r26948656;
        float r26948658 = -8.75;
        float r26948659 = r26948656 * r26948656;
        float r26948660 = r26948659 * r26948656;
        float r26948661 = r26948658 * r26948660;
        float r26948662 = r26948657 + r26948661;
        float r26948663 = 7.875;
        float r26948664 = r26948660 * r26948656;
        float r26948665 = r26948664 * r26948656;
        float r26948666 = r26948663 * r26948665;
        float r26948667 = r26948662 + r26948666;
        return r26948667;
}

double f_id(double x) {
        double r26948668 = 1.875;
        double r26948669 = x;
        double r26948670 = r26948668 * r26948669;
        double r26948671 = -8.75;
        double r26948672 = r26948669 * r26948669;
        double r26948673 = r26948672 * r26948669;
        double r26948674 = r26948671 * r26948673;
        double r26948675 = r26948670 + r26948674;
        double r26948676 = 7.875;
        double r26948677 = r26948673 * r26948669;
        double r26948678 = r26948677 * r26948669;
        double r26948679 = r26948676 * r26948678;
        double r26948680 = r26948675 + r26948679;
        return r26948680;
}


double f_of(float x) {
        float r26948681 = 7.875;
        float r26948682 = exp(r26948681);
        float r26948683 = cbrt(r26948682);
        float r26948684 = r26948683 * r26948683;
        float r26948685 = x;
        float r26948686 = 3;
        float r26948687 = pow(r26948685, r26948686);
        float r26948688 = pow(r26948684, r26948687);
        float r26948689 = pow(r26948683, r26948687);
        float r26948690 = r26948688 * r26948689;
        float r26948691 = pow(r26948690, r26948685);
        float r26948692 = pow(r26948691, r26948685);
        float r26948693 = 1.875;
        float r26948694 = r26948693 * r26948685;
        float r26948695 = exp(r26948694);
        float r26948696 = -8.75;
        float r26948697 = exp(r26948696);
        float r26948698 = pow(r26948697, r26948687);
        float r26948699 = r26948695 * r26948698;
        float r26948700 = r26948692 * r26948699;
        float r26948701 = log(r26948700);
        return r26948701;
}

double f_od(double x) {
        double r26948702 = 7.875;
        double r26948703 = exp(r26948702);
        double r26948704 = cbrt(r26948703);
        double r26948705 = r26948704 * r26948704;
        double r26948706 = x;
        double r26948707 = 3;
        double r26948708 = pow(r26948706, r26948707);
        double r26948709 = pow(r26948705, r26948708);
        double r26948710 = pow(r26948704, r26948708);
        double r26948711 = r26948709 * r26948710;
        double r26948712 = pow(r26948711, r26948706);
        double r26948713 = pow(r26948712, r26948706);
        double r26948714 = 1.875;
        double r26948715 = r26948714 * r26948706;
        double r26948716 = exp(r26948715);
        double r26948717 = -8.75;
        double r26948718 = exp(r26948717);
        double r26948719 = pow(r26948718, r26948708);
        double r26948720 = r26948716 * r26948719;
        double r26948721 = r26948713 * r26948720;
        double r26948722 = log(r26948721);
        return r26948722;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r26948723, r26948724, r26948725, r26948726, r26948727, r26948728, r26948729, r26948730, r26948731, r26948732, r26948733, r26948734, r26948735;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948723, "1.875", 10, MPFR_RNDN);
        mpfr_init(r26948724);
        mpfr_init(r26948725);
        mpfr_init_set_str(r26948726, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r26948727);
        mpfr_init(r26948728);
        mpfr_init(r26948729);
        mpfr_init(r26948730);
        mpfr_init_set_str(r26948731, "7.875", 10, MPFR_RNDN);
        mpfr_init(r26948732);
        mpfr_init(r26948733);
        mpfr_init(r26948734);
        mpfr_init(r26948735);
}

double f_im(double x) {
        ;
        mpfr_set_d(r26948724, x, MPFR_RNDN);
        mpfr_mul(r26948725, r26948723, r26948724, MPFR_RNDN);
        ;
        mpfr_mul(r26948727, r26948724, r26948724, MPFR_RNDN);
        mpfr_mul(r26948728, r26948727, r26948724, MPFR_RNDN);
        mpfr_mul(r26948729, r26948726, r26948728, MPFR_RNDN);
        mpfr_add(r26948730, r26948725, r26948729, MPFR_RNDN);
        ;
        mpfr_mul(r26948732, r26948728, r26948724, MPFR_RNDN);
        mpfr_mul(r26948733, r26948732, r26948724, MPFR_RNDN);
        mpfr_mul(r26948734, r26948731, r26948733, MPFR_RNDN);
        mpfr_add(r26948735, r26948730, r26948734, MPFR_RNDN);
        return mpfr_get_d(r26948735, MPFR_RNDN);
}

static mpfr_t r26948736, r26948737, r26948738, r26948739, r26948740, r26948741, r26948742, r26948743, r26948744, r26948745, r26948746, r26948747, r26948748, r26948749, r26948750, r26948751, r26948752, r26948753, r26948754, r26948755, r26948756;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948736, "7.875", 10, MPFR_RNDN);
        mpfr_init(r26948737);
        mpfr_init(r26948738);
        mpfr_init(r26948739);
        mpfr_init(r26948740);
        mpfr_init_set_str(r26948741, "3", 10, MPFR_RNDN);
        mpfr_init(r26948742);
        mpfr_init(r26948743);
        mpfr_init(r26948744);
        mpfr_init(r26948745);
        mpfr_init(r26948746);
        mpfr_init(r26948747);
        mpfr_init_set_str(r26948748, "1.875", 10, MPFR_RNDN);
        mpfr_init(r26948749);
        mpfr_init(r26948750);
        mpfr_init_set_str(r26948751, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r26948752);
        mpfr_init(r26948753);
        mpfr_init(r26948754);
        mpfr_init(r26948755);
        mpfr_init(r26948756);
}

double f_fm(double x) {
        ;
        mpfr_exp(r26948737, r26948736, MPFR_RNDN);
        mpfr_cbrt(r26948738, r26948737, MPFR_RNDN);
        mpfr_mul(r26948739, r26948738, r26948738, MPFR_RNDN);
        mpfr_set_d(r26948740, x, MPFR_RNDN);
        ;
        mpfr_pow(r26948742, r26948740, r26948741, MPFR_RNDN);
        mpfr_pow(r26948743, r26948739, r26948742, MPFR_RNDN);
        mpfr_pow(r26948744, r26948738, r26948742, MPFR_RNDN);
        mpfr_mul(r26948745, r26948743, r26948744, MPFR_RNDN);
        mpfr_pow(r26948746, r26948745, r26948740, MPFR_RNDN);
        mpfr_pow(r26948747, r26948746, r26948740, MPFR_RNDN);
        ;
        mpfr_mul(r26948749, r26948748, r26948740, MPFR_RNDN);
        mpfr_exp(r26948750, r26948749, MPFR_RNDN);
        ;
        mpfr_exp(r26948752, r26948751, MPFR_RNDN);
        mpfr_pow(r26948753, r26948752, r26948742, MPFR_RNDN);
        mpfr_mul(r26948754, r26948750, r26948753, MPFR_RNDN);
        mpfr_mul(r26948755, r26948747, r26948754, MPFR_RNDN);
        mpfr_log(r26948756, r26948755, MPFR_RNDN);
        return mpfr_get_d(r26948756, MPFR_RNDN);
}

static mpfr_t r26948757, r26948758, r26948759, r26948760, r26948761, r26948762, r26948763, r26948764, r26948765, r26948766, r26948767, r26948768, r26948769, r26948770, r26948771, r26948772, r26948773, r26948774, r26948775, r26948776, r26948777;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r26948757, "7.875", 10, MPFR_RNDN);
        mpfr_init(r26948758);
        mpfr_init(r26948759);
        mpfr_init(r26948760);
        mpfr_init(r26948761);
        mpfr_init_set_str(r26948762, "3", 10, MPFR_RNDN);
        mpfr_init(r26948763);
        mpfr_init(r26948764);
        mpfr_init(r26948765);
        mpfr_init(r26948766);
        mpfr_init(r26948767);
        mpfr_init(r26948768);
        mpfr_init_set_str(r26948769, "1.875", 10, MPFR_RNDN);
        mpfr_init(r26948770);
        mpfr_init(r26948771);
        mpfr_init_set_str(r26948772, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r26948773);
        mpfr_init(r26948774);
        mpfr_init(r26948775);
        mpfr_init(r26948776);
        mpfr_init(r26948777);
}

double f_dm(double x) {
        ;
        mpfr_exp(r26948758, r26948757, MPFR_RNDN);
        mpfr_cbrt(r26948759, r26948758, MPFR_RNDN);
        mpfr_mul(r26948760, r26948759, r26948759, MPFR_RNDN);
        mpfr_set_d(r26948761, x, MPFR_RNDN);
        ;
        mpfr_pow(r26948763, r26948761, r26948762, MPFR_RNDN);
        mpfr_pow(r26948764, r26948760, r26948763, MPFR_RNDN);
        mpfr_pow(r26948765, r26948759, r26948763, MPFR_RNDN);
        mpfr_mul(r26948766, r26948764, r26948765, MPFR_RNDN);
        mpfr_pow(r26948767, r26948766, r26948761, MPFR_RNDN);
        mpfr_pow(r26948768, r26948767, r26948761, MPFR_RNDN);
        ;
        mpfr_mul(r26948770, r26948769, r26948761, MPFR_RNDN);
        mpfr_exp(r26948771, r26948770, MPFR_RNDN);
        ;
        mpfr_exp(r26948773, r26948772, MPFR_RNDN);
        mpfr_pow(r26948774, r26948773, r26948763, MPFR_RNDN);
        mpfr_mul(r26948775, r26948771, r26948774, MPFR_RNDN);
        mpfr_mul(r26948776, r26948768, r26948775, MPFR_RNDN);
        mpfr_log(r26948777, r26948776, MPFR_RNDN);
        return mpfr_get_d(r26948777, MPFR_RNDN);
}

