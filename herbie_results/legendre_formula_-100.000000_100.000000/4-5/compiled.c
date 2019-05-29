#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r6179609 = 1.875;
        float r6179610 = x;
        float r6179611 = r6179609 * r6179610;
        float r6179612 = -8.75;
        float r6179613 = r6179610 * r6179610;
        float r6179614 = r6179613 * r6179610;
        float r6179615 = r6179612 * r6179614;
        float r6179616 = r6179611 + r6179615;
        float r6179617 = 7.875;
        float r6179618 = r6179614 * r6179610;
        float r6179619 = r6179618 * r6179610;
        float r6179620 = r6179617 * r6179619;
        float r6179621 = r6179616 + r6179620;
        return r6179621;
}

double f_id(double x) {
        double r6179622 = 1.875;
        double r6179623 = x;
        double r6179624 = r6179622 * r6179623;
        double r6179625 = -8.75;
        double r6179626 = r6179623 * r6179623;
        double r6179627 = r6179626 * r6179623;
        double r6179628 = r6179625 * r6179627;
        double r6179629 = r6179624 + r6179628;
        double r6179630 = 7.875;
        double r6179631 = r6179627 * r6179623;
        double r6179632 = r6179631 * r6179623;
        double r6179633 = r6179630 * r6179632;
        double r6179634 = r6179629 + r6179633;
        return r6179634;
}


double f_of(float x) {
        float r6179635 = 1.875;
        float r6179636 = x;
        float r6179637 = r6179635 * r6179636;
        float r6179638 = -8.75;
        float r6179639 = r6179638 * r6179636;
        float r6179640 = r6179636 * r6179636;
        float r6179641 = r6179639 * r6179640;
        float r6179642 = 3;
        float r6179643 = pow(r6179641, r6179642);
        float r6179644 = cbrt(r6179643);
        float r6179645 = r6179637 + r6179644;
        float r6179646 = 7.875;
        float r6179647 = r6179640 * r6179636;
        float r6179648 = r6179647 * r6179636;
        float r6179649 = r6179648 * r6179636;
        float r6179650 = r6179646 * r6179649;
        float r6179651 = r6179645 + r6179650;
        return r6179651;
}

double f_od(double x) {
        double r6179652 = 1.875;
        double r6179653 = x;
        double r6179654 = r6179652 * r6179653;
        double r6179655 = -8.75;
        double r6179656 = r6179655 * r6179653;
        double r6179657 = r6179653 * r6179653;
        double r6179658 = r6179656 * r6179657;
        double r6179659 = 3;
        double r6179660 = pow(r6179658, r6179659);
        double r6179661 = cbrt(r6179660);
        double r6179662 = r6179654 + r6179661;
        double r6179663 = 7.875;
        double r6179664 = r6179657 * r6179653;
        double r6179665 = r6179664 * r6179653;
        double r6179666 = r6179665 * r6179653;
        double r6179667 = r6179663 * r6179666;
        double r6179668 = r6179662 + r6179667;
        return r6179668;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6179669, r6179670, r6179671, r6179672, r6179673, r6179674, r6179675, r6179676, r6179677, r6179678, r6179679, r6179680, r6179681;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179669, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6179670);
        mpfr_init(r6179671);
        mpfr_init_set_str(r6179672, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6179673);
        mpfr_init(r6179674);
        mpfr_init(r6179675);
        mpfr_init(r6179676);
        mpfr_init_set_str(r6179677, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6179678);
        mpfr_init(r6179679);
        mpfr_init(r6179680);
        mpfr_init(r6179681);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6179670, x, MPFR_RNDN);
        mpfr_mul(r6179671, r6179669, r6179670, MPFR_RNDN);
        ;
        mpfr_mul(r6179673, r6179670, r6179670, MPFR_RNDN);
        mpfr_mul(r6179674, r6179673, r6179670, MPFR_RNDN);
        mpfr_mul(r6179675, r6179672, r6179674, MPFR_RNDN);
        mpfr_add(r6179676, r6179671, r6179675, MPFR_RNDN);
        ;
        mpfr_mul(r6179678, r6179674, r6179670, MPFR_RNDN);
        mpfr_mul(r6179679, r6179678, r6179670, MPFR_RNDN);
        mpfr_mul(r6179680, r6179677, r6179679, MPFR_RNDN);
        mpfr_add(r6179681, r6179676, r6179680, MPFR_RNDN);
        return mpfr_get_d(r6179681, MPFR_RNDN);
}

static mpfr_t r6179682, r6179683, r6179684, r6179685, r6179686, r6179687, r6179688, r6179689, r6179690, r6179691, r6179692, r6179693, r6179694, r6179695, r6179696, r6179697, r6179698;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179682, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6179683);
        mpfr_init(r6179684);
        mpfr_init_set_str(r6179685, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6179686);
        mpfr_init(r6179687);
        mpfr_init(r6179688);
        mpfr_init_set_str(r6179689, "3", 10, MPFR_RNDN);
        mpfr_init(r6179690);
        mpfr_init(r6179691);
        mpfr_init(r6179692);
        mpfr_init_set_str(r6179693, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6179694);
        mpfr_init(r6179695);
        mpfr_init(r6179696);
        mpfr_init(r6179697);
        mpfr_init(r6179698);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r6179683, x, MPFR_RNDN);
        mpfr_mul(r6179684, r6179682, r6179683, MPFR_RNDN);
        ;
        mpfr_mul(r6179686, r6179685, r6179683, MPFR_RNDN);
        mpfr_mul(r6179687, r6179683, r6179683, MPFR_RNDN);
        mpfr_mul(r6179688, r6179686, r6179687, MPFR_RNDN);
        ;
        mpfr_pow(r6179690, r6179688, r6179689, MPFR_RNDN);
        mpfr_cbrt(r6179691, r6179690, MPFR_RNDN);
        mpfr_add(r6179692, r6179684, r6179691, MPFR_RNDN);
        ;
        mpfr_mul(r6179694, r6179687, r6179683, MPFR_RNDN);
        mpfr_mul(r6179695, r6179694, r6179683, MPFR_RNDN);
        mpfr_mul(r6179696, r6179695, r6179683, MPFR_RNDN);
        mpfr_mul(r6179697, r6179693, r6179696, MPFR_RNDN);
        mpfr_add(r6179698, r6179692, r6179697, MPFR_RNDN);
        return mpfr_get_d(r6179698, MPFR_RNDN);
}

static mpfr_t r6179699, r6179700, r6179701, r6179702, r6179703, r6179704, r6179705, r6179706, r6179707, r6179708, r6179709, r6179710, r6179711, r6179712, r6179713, r6179714, r6179715;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6179699, "1.875", 10, MPFR_RNDN);
        mpfr_init(r6179700);
        mpfr_init(r6179701);
        mpfr_init_set_str(r6179702, "-8.75", 10, MPFR_RNDN);
        mpfr_init(r6179703);
        mpfr_init(r6179704);
        mpfr_init(r6179705);
        mpfr_init_set_str(r6179706, "3", 10, MPFR_RNDN);
        mpfr_init(r6179707);
        mpfr_init(r6179708);
        mpfr_init(r6179709);
        mpfr_init_set_str(r6179710, "7.875", 10, MPFR_RNDN);
        mpfr_init(r6179711);
        mpfr_init(r6179712);
        mpfr_init(r6179713);
        mpfr_init(r6179714);
        mpfr_init(r6179715);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r6179700, x, MPFR_RNDN);
        mpfr_mul(r6179701, r6179699, r6179700, MPFR_RNDN);
        ;
        mpfr_mul(r6179703, r6179702, r6179700, MPFR_RNDN);
        mpfr_mul(r6179704, r6179700, r6179700, MPFR_RNDN);
        mpfr_mul(r6179705, r6179703, r6179704, MPFR_RNDN);
        ;
        mpfr_pow(r6179707, r6179705, r6179706, MPFR_RNDN);
        mpfr_cbrt(r6179708, r6179707, MPFR_RNDN);
        mpfr_add(r6179709, r6179701, r6179708, MPFR_RNDN);
        ;
        mpfr_mul(r6179711, r6179704, r6179700, MPFR_RNDN);
        mpfr_mul(r6179712, r6179711, r6179700, MPFR_RNDN);
        mpfr_mul(r6179713, r6179712, r6179700, MPFR_RNDN);
        mpfr_mul(r6179714, r6179710, r6179713, MPFR_RNDN);
        mpfr_add(r6179715, r6179709, r6179714, MPFR_RNDN);
        return mpfr_get_d(r6179715, MPFR_RNDN);
}

