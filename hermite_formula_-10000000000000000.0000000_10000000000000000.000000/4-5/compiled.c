#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6896617 = 120.0;
        float r6896618 = x;
        float r6896619 = r6896617 * r6896618;
        float r6896620 = -160.0;
        float r6896621 = r6896618 * r6896618;
        float r6896622 = r6896621 * r6896618;
        float r6896623 = r6896620 * r6896622;
        float r6896624 = r6896619 + r6896623;
        float r6896625 = 32.0;
        float r6896626 = r6896622 * r6896618;
        float r6896627 = r6896626 * r6896618;
        float r6896628 = r6896625 * r6896627;
        float r6896629 = r6896624 + r6896628;
        return r6896629;
}

double f_id(double x) {
        double r6896630 = 120.0;
        double r6896631 = x;
        double r6896632 = r6896630 * r6896631;
        double r6896633 = -160.0;
        double r6896634 = r6896631 * r6896631;
        double r6896635 = r6896634 * r6896631;
        double r6896636 = r6896633 * r6896635;
        double r6896637 = r6896632 + r6896636;
        double r6896638 = 32.0;
        double r6896639 = r6896635 * r6896631;
        double r6896640 = r6896639 * r6896631;
        double r6896641 = r6896638 * r6896640;
        double r6896642 = r6896637 + r6896641;
        return r6896642;
}


double f_of(float x) {
        float r6896643 = 120.0;
        float r6896644 = x;
        float r6896645 = r6896643 * r6896644;
        float r6896646 = -160.0;
        float r6896647 = r6896644 * r6896644;
        float r6896648 = r6896647 * r6896644;
        float r6896649 = r6896646 * r6896648;
        float r6896650 = r6896645 + r6896649;
        float r6896651 = 32.0;
        float r6896652 = 3;
        float r6896653 = 1;
        float r6896654 = r6896652 + r6896653;
        float r6896655 = pow(r6896644, r6896654);
        float r6896656 = r6896655 * r6896644;
        float r6896657 = r6896651 * r6896656;
        float r6896658 = r6896650 + r6896657;
        return r6896658;
}

double f_od(double x) {
        double r6896659 = 120.0;
        double r6896660 = x;
        double r6896661 = r6896659 * r6896660;
        double r6896662 = -160.0;
        double r6896663 = r6896660 * r6896660;
        double r6896664 = r6896663 * r6896660;
        double r6896665 = r6896662 * r6896664;
        double r6896666 = r6896661 + r6896665;
        double r6896667 = 32.0;
        double r6896668 = 3;
        double r6896669 = 1;
        double r6896670 = r6896668 + r6896669;
        double r6896671 = pow(r6896660, r6896670);
        double r6896672 = r6896671 * r6896660;
        double r6896673 = r6896667 * r6896672;
        double r6896674 = r6896666 + r6896673;
        return r6896674;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896675, r6896676, r6896677, r6896678, r6896679, r6896680, r6896681, r6896682, r6896683, r6896684, r6896685, r6896686, r6896687;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896675, "120.0", 10, MPFR_RNDN);
        mpfr_init(r6896676);
        mpfr_init(r6896677);
        mpfr_init_set_str(r6896678, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r6896679);
        mpfr_init(r6896680);
        mpfr_init(r6896681);
        mpfr_init(r6896682);
        mpfr_init_set_str(r6896683, "32.0", 10, MPFR_RNDN);
        mpfr_init(r6896684);
        mpfr_init(r6896685);
        mpfr_init(r6896686);
        mpfr_init(r6896687);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6896676, x, MPFR_RNDN);
        mpfr_mul(r6896677, r6896675, r6896676, MPFR_RNDN);
        ;
        mpfr_mul(r6896679, r6896676, r6896676, MPFR_RNDN);
        mpfr_mul(r6896680, r6896679, r6896676, MPFR_RNDN);
        mpfr_mul(r6896681, r6896678, r6896680, MPFR_RNDN);
        mpfr_add(r6896682, r6896677, r6896681, MPFR_RNDN);
        ;
        mpfr_mul(r6896684, r6896680, r6896676, MPFR_RNDN);
        mpfr_mul(r6896685, r6896684, r6896676, MPFR_RNDN);
        mpfr_mul(r6896686, r6896683, r6896685, MPFR_RNDN);
        mpfr_add(r6896687, r6896682, r6896686, MPFR_RNDN);
        return mpfr_get_d(r6896687, MPFR_RNDN);
}

static mpfr_t r6896688, r6896689, r6896690, r6896691, r6896692, r6896693, r6896694, r6896695, r6896696, r6896697, r6896698, r6896699, r6896700, r6896701, r6896702, r6896703;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896688, "120.0", 10, MPFR_RNDN);
        mpfr_init(r6896689);
        mpfr_init(r6896690);
        mpfr_init_set_str(r6896691, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r6896692);
        mpfr_init(r6896693);
        mpfr_init(r6896694);
        mpfr_init(r6896695);
        mpfr_init_set_str(r6896696, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896697, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896698, "1", 10, MPFR_RNDN);
        mpfr_init(r6896699);
        mpfr_init(r6896700);
        mpfr_init(r6896701);
        mpfr_init(r6896702);
        mpfr_init(r6896703);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6896689, x, MPFR_RNDN);
        mpfr_mul(r6896690, r6896688, r6896689, MPFR_RNDN);
        ;
        mpfr_mul(r6896692, r6896689, r6896689, MPFR_RNDN);
        mpfr_mul(r6896693, r6896692, r6896689, MPFR_RNDN);
        mpfr_mul(r6896694, r6896691, r6896693, MPFR_RNDN);
        mpfr_add(r6896695, r6896690, r6896694, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r6896699, r6896697, r6896698, MPFR_RNDN);
        mpfr_pow(r6896700, r6896689, r6896699, MPFR_RNDN);
        mpfr_mul(r6896701, r6896700, r6896689, MPFR_RNDN);
        mpfr_mul(r6896702, r6896696, r6896701, MPFR_RNDN);
        mpfr_add(r6896703, r6896695, r6896702, MPFR_RNDN);
        return mpfr_get_d(r6896703, MPFR_RNDN);
}

static mpfr_t r6896704, r6896705, r6896706, r6896707, r6896708, r6896709, r6896710, r6896711, r6896712, r6896713, r6896714, r6896715, r6896716, r6896717, r6896718, r6896719;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896704, "120.0", 10, MPFR_RNDN);
        mpfr_init(r6896705);
        mpfr_init(r6896706);
        mpfr_init_set_str(r6896707, "-160.0", 10, MPFR_RNDN);
        mpfr_init(r6896708);
        mpfr_init(r6896709);
        mpfr_init(r6896710);
        mpfr_init(r6896711);
        mpfr_init_set_str(r6896712, "32.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896713, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r6896714, "1", 10, MPFR_RNDN);
        mpfr_init(r6896715);
        mpfr_init(r6896716);
        mpfr_init(r6896717);
        mpfr_init(r6896718);
        mpfr_init(r6896719);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6896705, x, MPFR_RNDN);
        mpfr_mul(r6896706, r6896704, r6896705, MPFR_RNDN);
        ;
        mpfr_mul(r6896708, r6896705, r6896705, MPFR_RNDN);
        mpfr_mul(r6896709, r6896708, r6896705, MPFR_RNDN);
        mpfr_mul(r6896710, r6896707, r6896709, MPFR_RNDN);
        mpfr_add(r6896711, r6896706, r6896710, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_add(r6896715, r6896713, r6896714, MPFR_RNDN);
        mpfr_pow(r6896716, r6896705, r6896715, MPFR_RNDN);
        mpfr_mul(r6896717, r6896716, r6896705, MPFR_RNDN);
        mpfr_mul(r6896718, r6896712, r6896717, MPFR_RNDN);
        mpfr_add(r6896719, r6896711, r6896718, MPFR_RNDN);
        return mpfr_get_d(r6896719, MPFR_RNDN);
}

