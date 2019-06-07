#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r8203552 = 1680.0;
        float r8203553 = -13440.0;
        float r8203554 = x;
        float r8203555 = r8203554 * r8203554;
        float r8203556 = r8203553 * r8203555;
        float r8203557 = r8203552 + r8203556;
        float r8203558 = 13440.0;
        float r8203559 = r8203555 * r8203554;
        float r8203560 = r8203559 * r8203554;
        float r8203561 = r8203558 * r8203560;
        float r8203562 = r8203557 + r8203561;
        float r8203563 = -3584.0;
        float r8203564 = r8203560 * r8203554;
        float r8203565 = r8203564 * r8203554;
        float r8203566 = r8203563 * r8203565;
        float r8203567 = r8203562 + r8203566;
        float r8203568 = 256.0;
        float r8203569 = r8203565 * r8203554;
        float r8203570 = r8203569 * r8203554;
        float r8203571 = r8203568 * r8203570;
        float r8203572 = r8203567 + r8203571;
        return r8203572;
}

double f_id(double x) {
        double r8203573 = 1680.0;
        double r8203574 = -13440.0;
        double r8203575 = x;
        double r8203576 = r8203575 * r8203575;
        double r8203577 = r8203574 * r8203576;
        double r8203578 = r8203573 + r8203577;
        double r8203579 = 13440.0;
        double r8203580 = r8203576 * r8203575;
        double r8203581 = r8203580 * r8203575;
        double r8203582 = r8203579 * r8203581;
        double r8203583 = r8203578 + r8203582;
        double r8203584 = -3584.0;
        double r8203585 = r8203581 * r8203575;
        double r8203586 = r8203585 * r8203575;
        double r8203587 = r8203584 * r8203586;
        double r8203588 = r8203583 + r8203587;
        double r8203589 = 256.0;
        double r8203590 = r8203586 * r8203575;
        double r8203591 = r8203590 * r8203575;
        double r8203592 = r8203589 * r8203591;
        double r8203593 = r8203588 + r8203592;
        return r8203593;
}


double f_of(float x) {
        float r8203594 = 256.0;
        float r8203595 = x;
        float r8203596 = 8;
        float r8203597 = pow(r8203595, r8203596);
        float r8203598 = r8203594 * r8203597;
        float r8203599 = 1680.0;
        float r8203600 = 3584.0;
        float r8203601 = 6;
        float r8203602 = pow(r8203595, r8203601);
        float r8203603 = r8203600 * r8203602;
        float r8203604 = r8203599 - r8203603;
        float r8203605 = r8203598 + r8203604;
        float r8203606 = r8203595 * r8203595;
        float r8203607 = -r8203606;
        float r8203608 = 13440.0;
        float r8203609 = r8203606 * r8203608;
        float r8203610 = -13440.0;
        float r8203611 = r8203609 + r8203610;
        float r8203612 = cbrt(r8203611);
        float r8203613 = r8203612 * r8203612;
        float r8203614 = r8203607 * r8203613;
        float r8203615 = r8203614 * r8203612;
        float r8203616 = r8203605 - r8203615;
        return r8203616;
}

double f_od(double x) {
        double r8203617 = 256.0;
        double r8203618 = x;
        double r8203619 = 8;
        double r8203620 = pow(r8203618, r8203619);
        double r8203621 = r8203617 * r8203620;
        double r8203622 = 1680.0;
        double r8203623 = 3584.0;
        double r8203624 = 6;
        double r8203625 = pow(r8203618, r8203624);
        double r8203626 = r8203623 * r8203625;
        double r8203627 = r8203622 - r8203626;
        double r8203628 = r8203621 + r8203627;
        double r8203629 = r8203618 * r8203618;
        double r8203630 = -r8203629;
        double r8203631 = 13440.0;
        double r8203632 = r8203629 * r8203631;
        double r8203633 = -13440.0;
        double r8203634 = r8203632 + r8203633;
        double r8203635 = cbrt(r8203634);
        double r8203636 = r8203635 * r8203635;
        double r8203637 = r8203630 * r8203636;
        double r8203638 = r8203637 * r8203635;
        double r8203639 = r8203628 - r8203638;
        return r8203639;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r8203640, r8203641, r8203642, r8203643, r8203644, r8203645, r8203646, r8203647, r8203648, r8203649, r8203650, r8203651, r8203652, r8203653, r8203654, r8203655, r8203656, r8203657, r8203658, r8203659, r8203660;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8203640, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203641, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r8203642);
        mpfr_init(r8203643);
        mpfr_init(r8203644);
        mpfr_init(r8203645);
        mpfr_init_set_str(r8203646, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r8203647);
        mpfr_init(r8203648);
        mpfr_init(r8203649);
        mpfr_init(r8203650);
        mpfr_init_set_str(r8203651, "-3584.0", 10, MPFR_RNDN);
        mpfr_init(r8203652);
        mpfr_init(r8203653);
        mpfr_init(r8203654);
        mpfr_init(r8203655);
        mpfr_init_set_str(r8203656, "256.0", 10, MPFR_RNDN);
        mpfr_init(r8203657);
        mpfr_init(r8203658);
        mpfr_init(r8203659);
        mpfr_init(r8203660);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r8203642, x, MPFR_RNDN);
        mpfr_mul(r8203643, r8203642, r8203642, MPFR_RNDN);
        mpfr_mul(r8203644, r8203641, r8203643, MPFR_RNDN);
        mpfr_add(r8203645, r8203640, r8203644, MPFR_RNDN);
        ;
        mpfr_mul(r8203647, r8203643, r8203642, MPFR_RNDN);
        mpfr_mul(r8203648, r8203647, r8203642, MPFR_RNDN);
        mpfr_mul(r8203649, r8203646, r8203648, MPFR_RNDN);
        mpfr_add(r8203650, r8203645, r8203649, MPFR_RNDN);
        ;
        mpfr_mul(r8203652, r8203648, r8203642, MPFR_RNDN);
        mpfr_mul(r8203653, r8203652, r8203642, MPFR_RNDN);
        mpfr_mul(r8203654, r8203651, r8203653, MPFR_RNDN);
        mpfr_add(r8203655, r8203650, r8203654, MPFR_RNDN);
        ;
        mpfr_mul(r8203657, r8203653, r8203642, MPFR_RNDN);
        mpfr_mul(r8203658, r8203657, r8203642, MPFR_RNDN);
        mpfr_mul(r8203659, r8203656, r8203658, MPFR_RNDN);
        mpfr_add(r8203660, r8203655, r8203659, MPFR_RNDN);
        return mpfr_get_d(r8203660, MPFR_RNDN);
}

static mpfr_t r8203661, r8203662, r8203663, r8203664, r8203665, r8203666, r8203667, r8203668, r8203669, r8203670, r8203671, r8203672, r8203673, r8203674, r8203675, r8203676, r8203677, r8203678, r8203679, r8203680, r8203681, r8203682, r8203683;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8203661, "256.0", 10, MPFR_RNDN);
        mpfr_init(r8203662);
        mpfr_init_set_str(r8203663, "8", 10, MPFR_RNDN);
        mpfr_init(r8203664);
        mpfr_init(r8203665);
        mpfr_init_set_str(r8203666, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203667, "3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203668, "6", 10, MPFR_RNDN);
        mpfr_init(r8203669);
        mpfr_init(r8203670);
        mpfr_init(r8203671);
        mpfr_init(r8203672);
        mpfr_init(r8203673);
        mpfr_init(r8203674);
        mpfr_init_set_str(r8203675, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r8203676);
        mpfr_init_set_str(r8203677, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r8203678);
        mpfr_init(r8203679);
        mpfr_init(r8203680);
        mpfr_init(r8203681);
        mpfr_init(r8203682);
        mpfr_init(r8203683);
}

double f_fm(double x) {
        ;
        mpfr_set_d(r8203662, x, MPFR_RNDN);
        ;
        mpfr_pow(r8203664, r8203662, r8203663, MPFR_RNDN);
        mpfr_mul(r8203665, r8203661, r8203664, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r8203669, r8203662, r8203668, MPFR_RNDN);
        mpfr_mul(r8203670, r8203667, r8203669, MPFR_RNDN);
        mpfr_sub(r8203671, r8203666, r8203670, MPFR_RNDN);
        mpfr_add(r8203672, r8203665, r8203671, MPFR_RNDN);
        mpfr_mul(r8203673, r8203662, r8203662, MPFR_RNDN);
        mpfr_neg(r8203674, r8203673, MPFR_RNDN);
        ;
        mpfr_mul(r8203676, r8203673, r8203675, MPFR_RNDN);
        ;
        mpfr_add(r8203678, r8203676, r8203677, MPFR_RNDN);
        mpfr_cbrt(r8203679, r8203678, MPFR_RNDN);
        mpfr_mul(r8203680, r8203679, r8203679, MPFR_RNDN);
        mpfr_mul(r8203681, r8203674, r8203680, MPFR_RNDN);
        mpfr_mul(r8203682, r8203681, r8203679, MPFR_RNDN);
        mpfr_sub(r8203683, r8203672, r8203682, MPFR_RNDN);
        return mpfr_get_d(r8203683, MPFR_RNDN);
}

static mpfr_t r8203684, r8203685, r8203686, r8203687, r8203688, r8203689, r8203690, r8203691, r8203692, r8203693, r8203694, r8203695, r8203696, r8203697, r8203698, r8203699, r8203700, r8203701, r8203702, r8203703, r8203704, r8203705, r8203706;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r8203684, "256.0", 10, MPFR_RNDN);
        mpfr_init(r8203685);
        mpfr_init_set_str(r8203686, "8", 10, MPFR_RNDN);
        mpfr_init(r8203687);
        mpfr_init(r8203688);
        mpfr_init_set_str(r8203689, "1680.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203690, "3584.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r8203691, "6", 10, MPFR_RNDN);
        mpfr_init(r8203692);
        mpfr_init(r8203693);
        mpfr_init(r8203694);
        mpfr_init(r8203695);
        mpfr_init(r8203696);
        mpfr_init(r8203697);
        mpfr_init_set_str(r8203698, "13440.0", 10, MPFR_RNDN);
        mpfr_init(r8203699);
        mpfr_init_set_str(r8203700, "-13440.0", 10, MPFR_RNDN);
        mpfr_init(r8203701);
        mpfr_init(r8203702);
        mpfr_init(r8203703);
        mpfr_init(r8203704);
        mpfr_init(r8203705);
        mpfr_init(r8203706);
}

double f_dm(double x) {
        ;
        mpfr_set_d(r8203685, x, MPFR_RNDN);
        ;
        mpfr_pow(r8203687, r8203685, r8203686, MPFR_RNDN);
        mpfr_mul(r8203688, r8203684, r8203687, MPFR_RNDN);
        ;
        ;
        ;
        mpfr_pow(r8203692, r8203685, r8203691, MPFR_RNDN);
        mpfr_mul(r8203693, r8203690, r8203692, MPFR_RNDN);
        mpfr_sub(r8203694, r8203689, r8203693, MPFR_RNDN);
        mpfr_add(r8203695, r8203688, r8203694, MPFR_RNDN);
        mpfr_mul(r8203696, r8203685, r8203685, MPFR_RNDN);
        mpfr_neg(r8203697, r8203696, MPFR_RNDN);
        ;
        mpfr_mul(r8203699, r8203696, r8203698, MPFR_RNDN);
        ;
        mpfr_add(r8203701, r8203699, r8203700, MPFR_RNDN);
        mpfr_cbrt(r8203702, r8203701, MPFR_RNDN);
        mpfr_mul(r8203703, r8203702, r8203702, MPFR_RNDN);
        mpfr_mul(r8203704, r8203697, r8203703, MPFR_RNDN);
        mpfr_mul(r8203705, r8203704, r8203702, MPFR_RNDN);
        mpfr_sub(r8203706, r8203695, r8203705, MPFR_RNDN);
        return mpfr_get_d(r8203706, MPFR_RNDN);
}

