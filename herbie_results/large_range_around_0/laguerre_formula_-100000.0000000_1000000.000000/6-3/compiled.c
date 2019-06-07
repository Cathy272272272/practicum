#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10216652 = 1.0;
        float r10216653 = -3.0;
        float r10216654 = x;
        float r10216655 = r10216653 * r10216654;
        float r10216656 = r10216652 + r10216655;
        float r10216657 = 1.5;
        float r10216658 = r10216654 * r10216654;
        float r10216659 = r10216657 * r10216658;
        float r10216660 = r10216656 + r10216659;
        float r10216661 = -0.166667;
        float r10216662 = r10216658 * r10216654;
        float r10216663 = r10216661 * r10216662;
        float r10216664 = r10216660 + r10216663;
        return r10216664;
}

double f_id(double x) {
        double r10216665 = 1.0;
        double r10216666 = -3.0;
        double r10216667 = x;
        double r10216668 = r10216666 * r10216667;
        double r10216669 = r10216665 + r10216668;
        double r10216670 = 1.5;
        double r10216671 = r10216667 * r10216667;
        double r10216672 = r10216670 * r10216671;
        double r10216673 = r10216669 + r10216672;
        double r10216674 = -0.166667;
        double r10216675 = r10216671 * r10216667;
        double r10216676 = r10216674 * r10216675;
        double r10216677 = r10216673 + r10216676;
        return r10216677;
}


double f_of(float x) {
        float r10216678 = x;
        float r10216679 = -3.0;
        float r10216680 = r10216678 * r10216679;
        float r10216681 = 1.0;
        float r10216682 = r10216680 + r10216681;
        float r10216683 = 1.5;
        float r10216684 = r10216683 * r10216683;
        float r10216685 = -0.166667;
        float r10216686 = r10216685 * r10216678;
        float r10216687 = r10216686 * r10216686;
        float r10216688 = r10216684 - r10216687;
        float r10216689 = r10216678 * r10216678;
        float r10216690 = r10216688 * r10216689;
        float r10216691 = r10216683 - r10216686;
        float r10216692 = r10216690 / r10216691;
        float r10216693 = r10216682 + r10216692;
        return r10216693;
}

double f_od(double x) {
        double r10216694 = x;
        double r10216695 = -3.0;
        double r10216696 = r10216694 * r10216695;
        double r10216697 = 1.0;
        double r10216698 = r10216696 + r10216697;
        double r10216699 = 1.5;
        double r10216700 = r10216699 * r10216699;
        double r10216701 = -0.166667;
        double r10216702 = r10216701 * r10216694;
        double r10216703 = r10216702 * r10216702;
        double r10216704 = r10216700 - r10216703;
        double r10216705 = r10216694 * r10216694;
        double r10216706 = r10216704 * r10216705;
        double r10216707 = r10216699 - r10216702;
        double r10216708 = r10216706 / r10216707;
        double r10216709 = r10216698 + r10216708;
        return r10216709;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10216710, r10216711, r10216712, r10216713, r10216714, r10216715, r10216716, r10216717, r10216718, r10216719, r10216720, r10216721, r10216722;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r10216710, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10216711, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10216712);
        mpfr_init(r10216713);
        mpfr_init(r10216714);
        mpfr_init_set_str(r10216715, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10216716);
        mpfr_init(r10216717);
        mpfr_init(r10216718);
        mpfr_init_set_str(r10216719, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10216720);
        mpfr_init(r10216721);
        mpfr_init(r10216722);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10216712, x, MPFR_RNDN);
        mpfr_mul(r10216713, r10216711, r10216712, MPFR_RNDN);
        mpfr_add(r10216714, r10216710, r10216713, MPFR_RNDN);
        ;
        mpfr_mul(r10216716, r10216712, r10216712, MPFR_RNDN);
        mpfr_mul(r10216717, r10216715, r10216716, MPFR_RNDN);
        mpfr_add(r10216718, r10216714, r10216717, MPFR_RNDN);
        ;
        mpfr_mul(r10216720, r10216716, r10216712, MPFR_RNDN);
        mpfr_mul(r10216721, r10216719, r10216720, MPFR_RNDN);
        mpfr_add(r10216722, r10216718, r10216721, MPFR_RNDN);
        return mpfr_get_d(r10216722, MPFR_RNDN);
}

static mpfr_t r10216723, r10216724, r10216725, r10216726, r10216727, r10216728, r10216729, r10216730, r10216731, r10216732, r10216733, r10216734, r10216735, r10216736, r10216737, r10216738;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10216723);
        mpfr_init_set_str(r10216724, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10216725);
        mpfr_init_set_str(r10216726, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216727);
        mpfr_init_set_str(r10216728, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10216729);
        mpfr_init_set_str(r10216730, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10216731);
        mpfr_init(r10216732);
        mpfr_init(r10216733);
        mpfr_init(r10216734);
        mpfr_init(r10216735);
        mpfr_init(r10216736);
        mpfr_init(r10216737);
        mpfr_init(r10216738);
}

double f_fm(double x) {
        mpfr_set_d(r10216723, x, MPFR_RNDN);
        ;
        mpfr_mul(r10216725, r10216723, r10216724, MPFR_RNDN);
        ;
        mpfr_add(r10216727, r10216725, r10216726, MPFR_RNDN);
        ;
        mpfr_mul(r10216729, r10216728, r10216728, MPFR_RNDN);
        ;
        mpfr_mul(r10216731, r10216730, r10216723, MPFR_RNDN);
        mpfr_mul(r10216732, r10216731, r10216731, MPFR_RNDN);
        mpfr_sub(r10216733, r10216729, r10216732, MPFR_RNDN);
        mpfr_mul(r10216734, r10216723, r10216723, MPFR_RNDN);
        mpfr_mul(r10216735, r10216733, r10216734, MPFR_RNDN);
        mpfr_sub(r10216736, r10216728, r10216731, MPFR_RNDN);
        mpfr_div(r10216737, r10216735, r10216736, MPFR_RNDN);
        mpfr_add(r10216738, r10216727, r10216737, MPFR_RNDN);
        return mpfr_get_d(r10216738, MPFR_RNDN);
}

static mpfr_t r10216739, r10216740, r10216741, r10216742, r10216743, r10216744, r10216745, r10216746, r10216747, r10216748, r10216749, r10216750, r10216751, r10216752, r10216753, r10216754;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init(r10216739);
        mpfr_init_set_str(r10216740, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10216741);
        mpfr_init_set_str(r10216742, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10216743);
        mpfr_init_set_str(r10216744, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10216745);
        mpfr_init_set_str(r10216746, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10216747);
        mpfr_init(r10216748);
        mpfr_init(r10216749);
        mpfr_init(r10216750);
        mpfr_init(r10216751);
        mpfr_init(r10216752);
        mpfr_init(r10216753);
        mpfr_init(r10216754);
}

double f_dm(double x) {
        mpfr_set_d(r10216739, x, MPFR_RNDN);
        ;
        mpfr_mul(r10216741, r10216739, r10216740, MPFR_RNDN);
        ;
        mpfr_add(r10216743, r10216741, r10216742, MPFR_RNDN);
        ;
        mpfr_mul(r10216745, r10216744, r10216744, MPFR_RNDN);
        ;
        mpfr_mul(r10216747, r10216746, r10216739, MPFR_RNDN);
        mpfr_mul(r10216748, r10216747, r10216747, MPFR_RNDN);
        mpfr_sub(r10216749, r10216745, r10216748, MPFR_RNDN);
        mpfr_mul(r10216750, r10216739, r10216739, MPFR_RNDN);
        mpfr_mul(r10216751, r10216749, r10216750, MPFR_RNDN);
        mpfr_sub(r10216752, r10216744, r10216747, MPFR_RNDN);
        mpfr_div(r10216753, r10216751, r10216752, MPFR_RNDN);
        mpfr_add(r10216754, r10216743, r10216753, MPFR_RNDN);
        return mpfr_get_d(r10216754, MPFR_RNDN);
}

