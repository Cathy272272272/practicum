#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "3";

double f_if(float x) {
        float r10528602 = 1.0;
        float r10528603 = -3.0;
        float r10528604 = x;
        float r10528605 = r10528603 * r10528604;
        float r10528606 = r10528602 + r10528605;
        float r10528607 = 1.5;
        float r10528608 = r10528604 * r10528604;
        float r10528609 = r10528607 * r10528608;
        float r10528610 = r10528606 + r10528609;
        float r10528611 = -0.166667;
        float r10528612 = r10528608 * r10528604;
        float r10528613 = r10528611 * r10528612;
        float r10528614 = r10528610 + r10528613;
        return r10528614;
}

double f_id(double x) {
        double r10528615 = 1.0;
        double r10528616 = -3.0;
        double r10528617 = x;
        double r10528618 = r10528616 * r10528617;
        double r10528619 = r10528615 + r10528618;
        double r10528620 = 1.5;
        double r10528621 = r10528617 * r10528617;
        double r10528622 = r10528620 * r10528621;
        double r10528623 = r10528619 + r10528622;
        double r10528624 = -0.166667;
        double r10528625 = r10528621 * r10528617;
        double r10528626 = r10528624 * r10528625;
        double r10528627 = r10528623 + r10528626;
        return r10528627;
}


double f_of(float x) {
        float r10528628 = x;
        float r10528629 = -3.0;
        float r10528630 = r10528628 * r10528629;
        float r10528631 = 1.0;
        float r10528632 = r10528630 + r10528631;
        float r10528633 = 1.5;
        float r10528634 = 3;
        float r10528635 = pow(r10528633, r10528634);
        float r10528636 = -0.166667;
        float r10528637 = r10528636 * r10528628;
        float r10528638 = pow(r10528637, r10528634);
        float r10528639 = r10528635 + r10528638;
        float r10528640 = r10528628 * r10528628;
        float r10528641 = r10528639 * r10528640;
        float r10528642 = r10528633 * r10528633;
        float r10528643 = r10528637 * r10528637;
        float r10528644 = r10528633 * r10528637;
        float r10528645 = r10528643 - r10528644;
        float r10528646 = r10528642 + r10528645;
        float r10528647 = r10528641 / r10528646;
        float r10528648 = r10528632 + r10528647;
        return r10528648;
}

double f_od(double x) {
        double r10528649 = x;
        double r10528650 = -3.0;
        double r10528651 = r10528649 * r10528650;
        double r10528652 = 1.0;
        double r10528653 = r10528651 + r10528652;
        double r10528654 = 1.5;
        double r10528655 = 3;
        double r10528656 = pow(r10528654, r10528655);
        double r10528657 = -0.166667;
        double r10528658 = r10528657 * r10528649;
        double r10528659 = pow(r10528658, r10528655);
        double r10528660 = r10528656 + r10528659;
        double r10528661 = r10528649 * r10528649;
        double r10528662 = r10528660 * r10528661;
        double r10528663 = r10528654 * r10528654;
        double r10528664 = r10528658 * r10528658;
        double r10528665 = r10528654 * r10528658;
        double r10528666 = r10528664 - r10528665;
        double r10528667 = r10528663 + r10528666;
        double r10528668 = r10528662 / r10528667;
        double r10528669 = r10528653 + r10528668;
        return r10528669;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10528670, r10528671, r10528672, r10528673, r10528674, r10528675, r10528676, r10528677, r10528678, r10528679, r10528680, r10528681, r10528682;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10528670, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528671, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10528672);
        mpfr_init(r10528673);
        mpfr_init(r10528674);
        mpfr_init_set_str(r10528675, "1.5", 10, MPFR_RNDN);
        mpfr_init(r10528676);
        mpfr_init(r10528677);
        mpfr_init(r10528678);
        mpfr_init_set_str(r10528679, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10528680);
        mpfr_init(r10528681);
        mpfr_init(r10528682);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10528672, x, MPFR_RNDN);
        mpfr_mul(r10528673, r10528671, r10528672, MPFR_RNDN);
        mpfr_add(r10528674, r10528670, r10528673, MPFR_RNDN);
        ;
        mpfr_mul(r10528676, r10528672, r10528672, MPFR_RNDN);
        mpfr_mul(r10528677, r10528675, r10528676, MPFR_RNDN);
        mpfr_add(r10528678, r10528674, r10528677, MPFR_RNDN);
        ;
        mpfr_mul(r10528680, r10528676, r10528672, MPFR_RNDN);
        mpfr_mul(r10528681, r10528679, r10528680, MPFR_RNDN);
        mpfr_add(r10528682, r10528678, r10528681, MPFR_RNDN);
        return mpfr_get_d(r10528682, MPFR_RNDN);
}

static mpfr_t r10528683, r10528684, r10528685, r10528686, r10528687, r10528688, r10528689, r10528690, r10528691, r10528692, r10528693, r10528694, r10528695, r10528696, r10528697, r10528698, r10528699, r10528700, r10528701, r10528702, r10528703;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10528683);
        mpfr_init_set_str(r10528684, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10528685);
        mpfr_init_set_str(r10528686, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528687);
        mpfr_init_set_str(r10528688, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528689, "3", 10, MPFR_RNDN);
        mpfr_init(r10528690);
        mpfr_init_set_str(r10528691, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10528692);
        mpfr_init(r10528693);
        mpfr_init(r10528694);
        mpfr_init(r10528695);
        mpfr_init(r10528696);
        mpfr_init(r10528697);
        mpfr_init(r10528698);
        mpfr_init(r10528699);
        mpfr_init(r10528700);
        mpfr_init(r10528701);
        mpfr_init(r10528702);
        mpfr_init(r10528703);
}

double f_fm(double x) {
        mpfr_set_d(r10528683, x, MPFR_RNDN);
        ;
        mpfr_mul(r10528685, r10528683, r10528684, MPFR_RNDN);
        ;
        mpfr_add(r10528687, r10528685, r10528686, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10528690, r10528688, r10528689, MPFR_RNDN);
        ;
        mpfr_mul(r10528692, r10528691, r10528683, MPFR_RNDN);
        mpfr_pow(r10528693, r10528692, r10528689, MPFR_RNDN);
        mpfr_add(r10528694, r10528690, r10528693, MPFR_RNDN);
        mpfr_mul(r10528695, r10528683, r10528683, MPFR_RNDN);
        mpfr_mul(r10528696, r10528694, r10528695, MPFR_RNDN);
        mpfr_mul(r10528697, r10528688, r10528688, MPFR_RNDN);
        mpfr_mul(r10528698, r10528692, r10528692, MPFR_RNDN);
        mpfr_mul(r10528699, r10528688, r10528692, MPFR_RNDN);
        mpfr_sub(r10528700, r10528698, r10528699, MPFR_RNDN);
        mpfr_add(r10528701, r10528697, r10528700, MPFR_RNDN);
        mpfr_div(r10528702, r10528696, r10528701, MPFR_RNDN);
        mpfr_add(r10528703, r10528687, r10528702, MPFR_RNDN);
        return mpfr_get_d(r10528703, MPFR_RNDN);
}

static mpfr_t r10528704, r10528705, r10528706, r10528707, r10528708, r10528709, r10528710, r10528711, r10528712, r10528713, r10528714, r10528715, r10528716, r10528717, r10528718, r10528719, r10528720, r10528721, r10528722, r10528723, r10528724;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10528704);
        mpfr_init_set_str(r10528705, "-3.0", 10, MPFR_RNDN);
        mpfr_init(r10528706);
        mpfr_init_set_str(r10528707, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10528708);
        mpfr_init_set_str(r10528709, "1.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10528710, "3", 10, MPFR_RNDN);
        mpfr_init(r10528711);
        mpfr_init_set_str(r10528712, "-0.166667", 10, MPFR_RNDN);
        mpfr_init(r10528713);
        mpfr_init(r10528714);
        mpfr_init(r10528715);
        mpfr_init(r10528716);
        mpfr_init(r10528717);
        mpfr_init(r10528718);
        mpfr_init(r10528719);
        mpfr_init(r10528720);
        mpfr_init(r10528721);
        mpfr_init(r10528722);
        mpfr_init(r10528723);
        mpfr_init(r10528724);
}

double f_dm(double x) {
        mpfr_set_d(r10528704, x, MPFR_RNDN);
        ;
        mpfr_mul(r10528706, r10528704, r10528705, MPFR_RNDN);
        ;
        mpfr_add(r10528708, r10528706, r10528707, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r10528711, r10528709, r10528710, MPFR_RNDN);
        ;
        mpfr_mul(r10528713, r10528712, r10528704, MPFR_RNDN);
        mpfr_pow(r10528714, r10528713, r10528710, MPFR_RNDN);
        mpfr_add(r10528715, r10528711, r10528714, MPFR_RNDN);
        mpfr_mul(r10528716, r10528704, r10528704, MPFR_RNDN);
        mpfr_mul(r10528717, r10528715, r10528716, MPFR_RNDN);
        mpfr_mul(r10528718, r10528709, r10528709, MPFR_RNDN);
        mpfr_mul(r10528719, r10528713, r10528713, MPFR_RNDN);
        mpfr_mul(r10528720, r10528709, r10528713, MPFR_RNDN);
        mpfr_sub(r10528721, r10528719, r10528720, MPFR_RNDN);
        mpfr_add(r10528722, r10528718, r10528721, MPFR_RNDN);
        mpfr_div(r10528723, r10528717, r10528722, MPFR_RNDN);
        mpfr_add(r10528724, r10528708, r10528723, MPFR_RNDN);
        return mpfr_get_d(r10528724, MPFR_RNDN);
}

