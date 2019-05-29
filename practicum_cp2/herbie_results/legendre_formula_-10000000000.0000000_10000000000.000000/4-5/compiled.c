#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r8924660 = 1.875;
        float r8924661 = x;
        float r8924662 = r8924660 * r8924661;
        float r8924663 = -8.75;
        float r8924664 = r8924661 * r8924661;
        float r8924665 = r8924664 * r8924661;
        float r8924666 = r8924663 * r8924665;
        float r8924667 = r8924662 + r8924666;
        float r8924668 = 7.875;
        float r8924669 = r8924665 * r8924661;
        float r8924670 = r8924669 * r8924661;
        float r8924671 = r8924668 * r8924670;
        float r8924672 = r8924667 + r8924671;
        return r8924672;
}

double f_id(double x) {
        double r8924673 = 1.875;
        double r8924674 = x;
        double r8924675 = r8924673 * r8924674;
        double r8924676 = -8.75;
        double r8924677 = r8924674 * r8924674;
        double r8924678 = r8924677 * r8924674;
        double r8924679 = r8924676 * r8924678;
        double r8924680 = r8924675 + r8924679;
        double r8924681 = 7.875;
        double r8924682 = r8924678 * r8924674;
        double r8924683 = r8924682 * r8924674;
        double r8924684 = r8924681 * r8924683;
        double r8924685 = r8924680 + r8924684;
        return r8924685;
}


double f_of(float x) {
        float r8924686 = -8.75;
        float r8924687 = x;
        float r8924688 = r8924686 * r8924687;
        float r8924689 = r8924687 * r8924687;
        float r8924690 = r8924688 * r8924689;
        float r8924691 = 4;
        float r8924692 = pow(r8924687, r8924691);
        float r8924693 = 7.875;
        float r8924694 = r8924687 * r8924693;
        float r8924695 = r8924692 * r8924694;
        float r8924696 = r8924690 + r8924695;
        float r8924697 = 1.875;
        float r8924698 = r8924697 * r8924687;
        float r8924699 = r8924696 + r8924698;
        return r8924699;
}

double f_od(double x) {
        double r8924700 = -8.75;
        double r8924701 = x;
        double r8924702 = r8924700 * r8924701;
        double r8924703 = r8924701 * r8924701;
        double r8924704 = r8924702 * r8924703;
        double r8924705 = 4;
        double r8924706 = pow(r8924701, r8924705);
        double r8924707 = 7.875;
        double r8924708 = r8924701 * r8924707;
        double r8924709 = r8924706 * r8924708;
        double r8924710 = r8924704 + r8924709;
        double r8924711 = 1.875;
        double r8924712 = r8924711 * r8924701;
        double r8924713 = r8924710 + r8924712;
        return r8924713;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8924714, r8924715, r8924716, r8924717, r8924718, r8924719, r8924720, r8924721, r8924722, r8924723, r8924724, r8924725, r8924726;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924714, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8924715);
        mpfr_init(r8924716);
        mpfr_init_set_str(r8924717, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8924718);
        mpfr_init(r8924719);
        mpfr_init(r8924720);
        mpfr_init(r8924721);
        mpfr_init_set_str(r8924722, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8924723);
        mpfr_init(r8924724);
        mpfr_init(r8924725);
        mpfr_init(r8924726);
}

double f_im(double x) {
        ;
        mpfr_set_d(r8924715, x, MPFR_RNDN);
        mpfr_mul(r8924716, r8924714, r8924715, MPFR_RNDN);
        ;
        mpfr_mul(r8924718, r8924715, r8924715, MPFR_RNDN);
        mpfr_mul(r8924719, r8924718, r8924715, MPFR_RNDN);
        mpfr_mul(r8924720, r8924717, r8924719, MPFR_RNDN);
        mpfr_add(r8924721, r8924716, r8924720, MPFR_RNDN);
        ;
        mpfr_mul(r8924723, r8924719, r8924715, MPFR_RNDN);
        mpfr_mul(r8924724, r8924723, r8924715, MPFR_RNDN);
        mpfr_mul(r8924725, r8924722, r8924724, MPFR_RNDN);
        mpfr_add(r8924726, r8924721, r8924725, MPFR_RNDN);
        return mpfr_get_d(r8924726, MPFR_RNDN);
}

static mpfr_t r8924727, r8924728, r8924729, r8924730, r8924731, r8924732, r8924733, r8924734, r8924735, r8924736, r8924737, r8924738, r8924739, r8924740;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924727, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8924728);
        mpfr_init(r8924729);
        mpfr_init(r8924730);
        mpfr_init(r8924731);
        mpfr_init_set_str(r8924732, "4", 10, MPFR_RNDN);
        mpfr_init(r8924733);
        mpfr_init_set_str(r8924734, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8924735);
        mpfr_init(r8924736);
        mpfr_init(r8924737);
        mpfr_init_set_str(r8924738, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8924739);
        mpfr_init(r8924740);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8924728, x, MPFR_RNDN);
        mpfr_mul(r8924729, r8924727, r8924728, MPFR_RNDN);
        mpfr_mul(r8924730, r8924728, r8924728, MPFR_RNDN);
        mpfr_mul(r8924731, r8924729, r8924730, MPFR_RNDN);
        ;
        mpfr_pow(r8924733, r8924728, r8924732, MPFR_RNDN);
        ;
        mpfr_mul(r8924735, r8924728, r8924734, MPFR_RNDN);
        mpfr_mul(r8924736, r8924733, r8924735, MPFR_RNDN);
        mpfr_add(r8924737, r8924731, r8924736, MPFR_RNDN);
        ;
        mpfr_mul(r8924739, r8924738, r8924728, MPFR_RNDN);
        mpfr_add(r8924740, r8924737, r8924739, MPFR_RNDN);
        return mpfr_get_d(r8924740, MPFR_RNDN);
}

static mpfr_t r8924741, r8924742, r8924743, r8924744, r8924745, r8924746, r8924747, r8924748, r8924749, r8924750, r8924751, r8924752, r8924753, r8924754;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r8924741, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r8924742);
        mpfr_init(r8924743);
        mpfr_init(r8924744);
        mpfr_init(r8924745);
        mpfr_init_set_str(r8924746, "4", 10, MPFR_RNDN);
        mpfr_init(r8924747);
        mpfr_init_set_str(r8924748, "7.875", 10, MPFR_RNDN);
        mpfr_init(r8924749);
        mpfr_init(r8924750);
        mpfr_init(r8924751);
        mpfr_init_set_str(r8924752, "1.875", 10, MPFR_RNDN);
        mpfr_init(r8924753);
        mpfr_init(r8924754);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8924742, x, MPFR_RNDN);
        mpfr_mul(r8924743, r8924741, r8924742, MPFR_RNDN);
        mpfr_mul(r8924744, r8924742, r8924742, MPFR_RNDN);
        mpfr_mul(r8924745, r8924743, r8924744, MPFR_RNDN);
        ;
        mpfr_pow(r8924747, r8924742, r8924746, MPFR_RNDN);
        ;
        mpfr_mul(r8924749, r8924742, r8924748, MPFR_RNDN);
        mpfr_mul(r8924750, r8924747, r8924749, MPFR_RNDN);
        mpfr_add(r8924751, r8924745, r8924750, MPFR_RNDN);
        ;
        mpfr_mul(r8924753, r8924752, r8924742, MPFR_RNDN);
        mpfr_add(r8924754, r8924751, r8924753, MPFR_RNDN);
        return mpfr_get_d(r8924754, MPFR_RNDN);
}

