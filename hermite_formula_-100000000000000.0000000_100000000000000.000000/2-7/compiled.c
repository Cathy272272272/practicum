#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r9959660 = -1680.0;
        float r9959661 = x;
        float r9959662 = r9959660 * r9959661;
        float r9959663 = 3360.0;
        float r9959664 = r9959661 * r9959661;
        float r9959665 = r9959664 * r9959661;
        float r9959666 = r9959663 * r9959665;
        float r9959667 = r9959662 + r9959666;
        float r9959668 = -1344.0;
        float r9959669 = r9959665 * r9959661;
        float r9959670 = r9959669 * r9959661;
        float r9959671 = r9959668 * r9959670;
        float r9959672 = r9959667 + r9959671;
        float r9959673 = 128.0;
        float r9959674 = r9959670 * r9959661;
        float r9959675 = r9959674 * r9959661;
        float r9959676 = r9959673 * r9959675;
        float r9959677 = r9959672 + r9959676;
        return r9959677;
}

double f_id(double x) {
        double r9959678 = -1680.0;
        double r9959679 = x;
        double r9959680 = r9959678 * r9959679;
        double r9959681 = 3360.0;
        double r9959682 = r9959679 * r9959679;
        double r9959683 = r9959682 * r9959679;
        double r9959684 = r9959681 * r9959683;
        double r9959685 = r9959680 + r9959684;
        double r9959686 = -1344.0;
        double r9959687 = r9959683 * r9959679;
        double r9959688 = r9959687 * r9959679;
        double r9959689 = r9959686 * r9959688;
        double r9959690 = r9959685 + r9959689;
        double r9959691 = 128.0;
        double r9959692 = r9959688 * r9959679;
        double r9959693 = r9959692 * r9959679;
        double r9959694 = r9959691 * r9959693;
        double r9959695 = r9959690 + r9959694;
        return r9959695;
}


double f_of(float x) {
        float r9959696 = -1680.0;
        float r9959697 = x;
        float r9959698 = r9959696 * r9959697;
        float r9959699 = 3360.0;
        float r9959700 = r9959697 * r9959697;
        float r9959701 = r9959700 * r9959697;
        float r9959702 = r9959699 * r9959701;
        float r9959703 = r9959698 + r9959702;
        float r9959704 = -1344.0;
        float r9959705 = r9959701 * r9959697;
        float r9959706 = r9959705 * r9959697;
        float r9959707 = r9959704 * r9959706;
        float r9959708 = r9959703 + r9959707;
        float r9959709 = 128.0;
        float r9959710 = r9959706 * r9959697;
        float r9959711 = r9959710 * r9959697;
        float r9959712 = r9959709 * r9959711;
        float r9959713 = r9959708 + r9959712;
        return r9959713;
}

double f_od(double x) {
        double r9959714 = -1680.0;
        double r9959715 = x;
        double r9959716 = r9959714 * r9959715;
        double r9959717 = 3360.0;
        double r9959718 = r9959715 * r9959715;
        double r9959719 = r9959718 * r9959715;
        double r9959720 = r9959717 * r9959719;
        double r9959721 = r9959716 + r9959720;
        double r9959722 = -1344.0;
        double r9959723 = r9959719 * r9959715;
        double r9959724 = r9959723 * r9959715;
        double r9959725 = r9959722 * r9959724;
        double r9959726 = r9959721 + r9959725;
        double r9959727 = 128.0;
        double r9959728 = r9959724 * r9959715;
        double r9959729 = r9959728 * r9959715;
        double r9959730 = r9959727 * r9959729;
        double r9959731 = r9959726 + r9959730;
        return r9959731;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9959732, r9959733, r9959734, r9959735, r9959736, r9959737, r9959738, r9959739, r9959740, r9959741, r9959742, r9959743, r9959744, r9959745, r9959746, r9959747, r9959748, r9959749;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9959732, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9959733);
        mpfr_init(r9959734);
        mpfr_init_set_str(r9959735, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9959736);
        mpfr_init(r9959737);
        mpfr_init(r9959738);
        mpfr_init(r9959739);
        mpfr_init_set_str(r9959740, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9959741);
        mpfr_init(r9959742);
        mpfr_init(r9959743);
        mpfr_init(r9959744);
        mpfr_init_set_str(r9959745, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9959746);
        mpfr_init(r9959747);
        mpfr_init(r9959748);
        mpfr_init(r9959749);
}

double f_im(double x) {
        ;
        mpfr_set_d(r9959733, x, MPFR_RNDN);
        mpfr_mul(r9959734, r9959732, r9959733, MPFR_RNDN);
        ;
        mpfr_mul(r9959736, r9959733, r9959733, MPFR_RNDN);
        mpfr_mul(r9959737, r9959736, r9959733, MPFR_RNDN);
        mpfr_mul(r9959738, r9959735, r9959737, MPFR_RNDN);
        mpfr_add(r9959739, r9959734, r9959738, MPFR_RNDN);
        ;
        mpfr_mul(r9959741, r9959737, r9959733, MPFR_RNDN);
        mpfr_mul(r9959742, r9959741, r9959733, MPFR_RNDN);
        mpfr_mul(r9959743, r9959740, r9959742, MPFR_RNDN);
        mpfr_add(r9959744, r9959739, r9959743, MPFR_RNDN);
        ;
        mpfr_mul(r9959746, r9959742, r9959733, MPFR_RNDN);
        mpfr_mul(r9959747, r9959746, r9959733, MPFR_RNDN);
        mpfr_mul(r9959748, r9959745, r9959747, MPFR_RNDN);
        mpfr_add(r9959749, r9959744, r9959748, MPFR_RNDN);
        return mpfr_get_d(r9959749, MPFR_RNDN);
}

static mpfr_t r9959750, r9959751, r9959752, r9959753, r9959754, r9959755, r9959756, r9959757, r9959758, r9959759, r9959760, r9959761, r9959762, r9959763, r9959764, r9959765, r9959766, r9959767;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9959750, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9959751);
        mpfr_init(r9959752);
        mpfr_init_set_str(r9959753, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9959754);
        mpfr_init(r9959755);
        mpfr_init(r9959756);
        mpfr_init(r9959757);
        mpfr_init_set_str(r9959758, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9959759);
        mpfr_init(r9959760);
        mpfr_init(r9959761);
        mpfr_init(r9959762);
        mpfr_init_set_str(r9959763, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9959764);
        mpfr_init(r9959765);
        mpfr_init(r9959766);
        mpfr_init(r9959767);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r9959751, x, MPFR_RNDN);
        mpfr_mul(r9959752, r9959750, r9959751, MPFR_RNDN);
        ;
        mpfr_mul(r9959754, r9959751, r9959751, MPFR_RNDN);
        mpfr_mul(r9959755, r9959754, r9959751, MPFR_RNDN);
        mpfr_mul(r9959756, r9959753, r9959755, MPFR_RNDN);
        mpfr_add(r9959757, r9959752, r9959756, MPFR_RNDN);
        ;
        mpfr_mul(r9959759, r9959755, r9959751, MPFR_RNDN);
        mpfr_mul(r9959760, r9959759, r9959751, MPFR_RNDN);
        mpfr_mul(r9959761, r9959758, r9959760, MPFR_RNDN);
        mpfr_add(r9959762, r9959757, r9959761, MPFR_RNDN);
        ;
        mpfr_mul(r9959764, r9959760, r9959751, MPFR_RNDN);
        mpfr_mul(r9959765, r9959764, r9959751, MPFR_RNDN);
        mpfr_mul(r9959766, r9959763, r9959765, MPFR_RNDN);
        mpfr_add(r9959767, r9959762, r9959766, MPFR_RNDN);
        return mpfr_get_d(r9959767, MPFR_RNDN);
}

static mpfr_t r9959768, r9959769, r9959770, r9959771, r9959772, r9959773, r9959774, r9959775, r9959776, r9959777, r9959778, r9959779, r9959780, r9959781, r9959782, r9959783, r9959784, r9959785;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r9959768, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r9959769);
        mpfr_init(r9959770);
        mpfr_init_set_str(r9959771, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r9959772);
        mpfr_init(r9959773);
        mpfr_init(r9959774);
        mpfr_init(r9959775);
        mpfr_init_set_str(r9959776, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r9959777);
        mpfr_init(r9959778);
        mpfr_init(r9959779);
        mpfr_init(r9959780);
        mpfr_init_set_str(r9959781, "128.0", 10, MPFR_RNDN);
        mpfr_init(r9959782);
        mpfr_init(r9959783);
        mpfr_init(r9959784);
        mpfr_init(r9959785);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r9959769, x, MPFR_RNDN);
        mpfr_mul(r9959770, r9959768, r9959769, MPFR_RNDN);
        ;
        mpfr_mul(r9959772, r9959769, r9959769, MPFR_RNDN);
        mpfr_mul(r9959773, r9959772, r9959769, MPFR_RNDN);
        mpfr_mul(r9959774, r9959771, r9959773, MPFR_RNDN);
        mpfr_add(r9959775, r9959770, r9959774, MPFR_RNDN);
        ;
        mpfr_mul(r9959777, r9959773, r9959769, MPFR_RNDN);
        mpfr_mul(r9959778, r9959777, r9959769, MPFR_RNDN);
        mpfr_mul(r9959779, r9959776, r9959778, MPFR_RNDN);
        mpfr_add(r9959780, r9959775, r9959779, MPFR_RNDN);
        ;
        mpfr_mul(r9959782, r9959778, r9959769, MPFR_RNDN);
        mpfr_mul(r9959783, r9959782, r9959769, MPFR_RNDN);
        mpfr_mul(r9959784, r9959781, r9959783, MPFR_RNDN);
        mpfr_add(r9959785, r9959780, r9959784, MPFR_RNDN);
        return mpfr_get_d(r9959785, MPFR_RNDN);
}

