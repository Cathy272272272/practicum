#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "5";

double f_if(float x) {
        float r9373572 = 1.0;
        float r9373573 = -5.0;
        float r9373574 = x;
        float r9373575 = r9373573 * r9373574;
        float r9373576 = r9373572 + r9373575;
        float r9373577 = 5.0;
        float r9373578 = r9373574 * r9373574;
        float r9373579 = r9373577 * r9373578;
        float r9373580 = r9373576 + r9373579;
        float r9373581 = -1.666667;
        float r9373582 = r9373578 * r9373574;
        float r9373583 = r9373581 * r9373582;
        float r9373584 = r9373580 + r9373583;
        float r9373585 = 0.208333;
        float r9373586 = r9373582 * r9373574;
        float r9373587 = r9373585 * r9373586;
        float r9373588 = r9373584 + r9373587;
        float r9373589 = -0.008333;
        float r9373590 = r9373586 * r9373574;
        float r9373591 = r9373589 * r9373590;
        float r9373592 = r9373588 + r9373591;
        return r9373592;
}

double f_id(double x) {
        double r9373593 = 1.0;
        double r9373594 = -5.0;
        double r9373595 = x;
        double r9373596 = r9373594 * r9373595;
        double r9373597 = r9373593 + r9373596;
        double r9373598 = 5.0;
        double r9373599 = r9373595 * r9373595;
        double r9373600 = r9373598 * r9373599;
        double r9373601 = r9373597 + r9373600;
        double r9373602 = -1.666667;
        double r9373603 = r9373599 * r9373595;
        double r9373604 = r9373602 * r9373603;
        double r9373605 = r9373601 + r9373604;
        double r9373606 = 0.208333;
        double r9373607 = r9373603 * r9373595;
        double r9373608 = r9373606 * r9373607;
        double r9373609 = r9373605 + r9373608;
        double r9373610 = -0.008333;
        double r9373611 = r9373607 * r9373595;
        double r9373612 = r9373610 * r9373611;
        double r9373613 = r9373609 + r9373612;
        return r9373613;
}


double f_of(float x) {
        float r9373614 = 1.0;
        float r9373615 = -5.0;
        float r9373616 = x;
        float r9373617 = r9373615 * r9373616;
        float r9373618 = r9373614 + r9373617;
        float r9373619 = 5.0;
        float r9373620 = r9373616 * r9373616;
        float r9373621 = r9373619 * r9373620;
        float r9373622 = r9373618 + r9373621;
        float r9373623 = -1.666667;
        float r9373624 = r9373620 * r9373616;
        float r9373625 = r9373623 * r9373624;
        float r9373626 = r9373622 + r9373625;
        float r9373627 = 0.208333;
        float r9373628 = r9373624 * r9373616;
        float r9373629 = r9373627 * r9373628;
        float r9373630 = r9373626 + r9373629;
        float r9373631 = -0.008333;
        float r9373632 = r9373628 * r9373616;
        float r9373633 = r9373631 * r9373632;
        float r9373634 = r9373630 + r9373633;
        return r9373634;
}

double f_od(double x) {
        double r9373635 = 1.0;
        double r9373636 = -5.0;
        double r9373637 = x;
        double r9373638 = r9373636 * r9373637;
        double r9373639 = r9373635 + r9373638;
        double r9373640 = 5.0;
        double r9373641 = r9373637 * r9373637;
        double r9373642 = r9373640 * r9373641;
        double r9373643 = r9373639 + r9373642;
        double r9373644 = -1.666667;
        double r9373645 = r9373641 * r9373637;
        double r9373646 = r9373644 * r9373645;
        double r9373647 = r9373643 + r9373646;
        double r9373648 = 0.208333;
        double r9373649 = r9373645 * r9373637;
        double r9373650 = r9373648 * r9373649;
        double r9373651 = r9373647 + r9373650;
        double r9373652 = -0.008333;
        double r9373653 = r9373649 * r9373637;
        double r9373654 = r9373652 * r9373653;
        double r9373655 = r9373651 + r9373654;
        return r9373655;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9373656, r9373657, r9373658, r9373659, r9373660, r9373661, r9373662, r9373663, r9373664, r9373665, r9373666, r9373667, r9373668, r9373669, r9373670, r9373671, r9373672, r9373673, r9373674, r9373675, r9373676;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373656, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373657, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9373658);
        mpfr_init(r9373659);
        mpfr_init(r9373660);
        mpfr_init_set_str(r9373661, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9373662);
        mpfr_init(r9373663);
        mpfr_init(r9373664);
        mpfr_init_set_str(r9373665, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9373666);
        mpfr_init(r9373667);
        mpfr_init(r9373668);
        mpfr_init_set_str(r9373669, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9373670);
        mpfr_init(r9373671);
        mpfr_init(r9373672);
        mpfr_init_set_str(r9373673, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9373674);
        mpfr_init(r9373675);
        mpfr_init(r9373676);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9373658, x, MPFR_RNDN);
        mpfr_mul(r9373659, r9373657, r9373658, MPFR_RNDN);
        mpfr_add(r9373660, r9373656, r9373659, MPFR_RNDN);
        ;
        mpfr_mul(r9373662, r9373658, r9373658, MPFR_RNDN);
        mpfr_mul(r9373663, r9373661, r9373662, MPFR_RNDN);
        mpfr_add(r9373664, r9373660, r9373663, MPFR_RNDN);
        ;
        mpfr_mul(r9373666, r9373662, r9373658, MPFR_RNDN);
        mpfr_mul(r9373667, r9373665, r9373666, MPFR_RNDN);
        mpfr_add(r9373668, r9373664, r9373667, MPFR_RNDN);
        ;
        mpfr_mul(r9373670, r9373666, r9373658, MPFR_RNDN);
        mpfr_mul(r9373671, r9373669, r9373670, MPFR_RNDN);
        mpfr_add(r9373672, r9373668, r9373671, MPFR_RNDN);
        ;
        mpfr_mul(r9373674, r9373670, r9373658, MPFR_RNDN);
        mpfr_mul(r9373675, r9373673, r9373674, MPFR_RNDN);
        mpfr_add(r9373676, r9373672, r9373675, MPFR_RNDN);
        return mpfr_get_d(r9373676, MPFR_RNDN);
}

static mpfr_t r9373677, r9373678, r9373679, r9373680, r9373681, r9373682, r9373683, r9373684, r9373685, r9373686, r9373687, r9373688, r9373689, r9373690, r9373691, r9373692, r9373693, r9373694, r9373695, r9373696, r9373697;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373677, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373678, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9373679);
        mpfr_init(r9373680);
        mpfr_init(r9373681);
        mpfr_init_set_str(r9373682, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9373683);
        mpfr_init(r9373684);
        mpfr_init(r9373685);
        mpfr_init_set_str(r9373686, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9373687);
        mpfr_init(r9373688);
        mpfr_init(r9373689);
        mpfr_init_set_str(r9373690, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9373691);
        mpfr_init(r9373692);
        mpfr_init(r9373693);
        mpfr_init_set_str(r9373694, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9373695);
        mpfr_init(r9373696);
        mpfr_init(r9373697);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9373679, x, MPFR_RNDN);
        mpfr_mul(r9373680, r9373678, r9373679, MPFR_RNDN);
        mpfr_add(r9373681, r9373677, r9373680, MPFR_RNDN);
        ;
        mpfr_mul(r9373683, r9373679, r9373679, MPFR_RNDN);
        mpfr_mul(r9373684, r9373682, r9373683, MPFR_RNDN);
        mpfr_add(r9373685, r9373681, r9373684, MPFR_RNDN);
        ;
        mpfr_mul(r9373687, r9373683, r9373679, MPFR_RNDN);
        mpfr_mul(r9373688, r9373686, r9373687, MPFR_RNDN);
        mpfr_add(r9373689, r9373685, r9373688, MPFR_RNDN);
        ;
        mpfr_mul(r9373691, r9373687, r9373679, MPFR_RNDN);
        mpfr_mul(r9373692, r9373690, r9373691, MPFR_RNDN);
        mpfr_add(r9373693, r9373689, r9373692, MPFR_RNDN);
        ;
        mpfr_mul(r9373695, r9373691, r9373679, MPFR_RNDN);
        mpfr_mul(r9373696, r9373694, r9373695, MPFR_RNDN);
        mpfr_add(r9373697, r9373693, r9373696, MPFR_RNDN);
        return mpfr_get_d(r9373697, MPFR_RNDN);
}

static mpfr_t r9373698, r9373699, r9373700, r9373701, r9373702, r9373703, r9373704, r9373705, r9373706, r9373707, r9373708, r9373709, r9373710, r9373711, r9373712, r9373713, r9373714, r9373715, r9373716, r9373717, r9373718;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r9373698, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9373699, "-5.0", 10, MPFR_RNDN);
        mpfr_init(r9373700);
        mpfr_init(r9373701);
        mpfr_init(r9373702);
        mpfr_init_set_str(r9373703, "5.0", 10, MPFR_RNDN);
        mpfr_init(r9373704);
        mpfr_init(r9373705);
        mpfr_init(r9373706);
        mpfr_init_set_str(r9373707, "-1.666667", 10, MPFR_RNDN);
        mpfr_init(r9373708);
        mpfr_init(r9373709);
        mpfr_init(r9373710);
        mpfr_init_set_str(r9373711, "0.208333", 10, MPFR_RNDN);
        mpfr_init(r9373712);
        mpfr_init(r9373713);
        mpfr_init(r9373714);
        mpfr_init_set_str(r9373715, "-0.008333", 10, MPFR_RNDN);
        mpfr_init(r9373716);
        mpfr_init(r9373717);
        mpfr_init(r9373718);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9373700, x, MPFR_RNDN);
        mpfr_mul(r9373701, r9373699, r9373700, MPFR_RNDN);
        mpfr_add(r9373702, r9373698, r9373701, MPFR_RNDN);
        ;
        mpfr_mul(r9373704, r9373700, r9373700, MPFR_RNDN);
        mpfr_mul(r9373705, r9373703, r9373704, MPFR_RNDN);
        mpfr_add(r9373706, r9373702, r9373705, MPFR_RNDN);
        ;
        mpfr_mul(r9373708, r9373704, r9373700, MPFR_RNDN);
        mpfr_mul(r9373709, r9373707, r9373708, MPFR_RNDN);
        mpfr_add(r9373710, r9373706, r9373709, MPFR_RNDN);
        ;
        mpfr_mul(r9373712, r9373708, r9373700, MPFR_RNDN);
        mpfr_mul(r9373713, r9373711, r9373712, MPFR_RNDN);
        mpfr_add(r9373714, r9373710, r9373713, MPFR_RNDN);
        ;
        mpfr_mul(r9373716, r9373712, r9373700, MPFR_RNDN);
        mpfr_mul(r9373717, r9373715, r9373716, MPFR_RNDN);
        mpfr_add(r9373718, r9373714, r9373717, MPFR_RNDN);
        return mpfr_get_d(r9373718, MPFR_RNDN);
}

