#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r33707538 = -0.3125;
        float r33707539 = 6.5625;
        float r33707540 = x;
        float r33707541 = r33707540 * r33707540;
        float r33707542 = r33707539 * r33707541;
        float r33707543 = r33707538 + r33707542;
        float r33707544 = -19.6875;
        float r33707545 = r33707541 * r33707540;
        float r33707546 = r33707545 * r33707540;
        float r33707547 = r33707544 * r33707546;
        float r33707548 = r33707543 + r33707547;
        float r33707549 = 14.4375;
        float r33707550 = r33707546 * r33707540;
        float r33707551 = r33707550 * r33707540;
        float r33707552 = r33707549 * r33707551;
        float r33707553 = r33707548 + r33707552;
        return r33707553;
}

double f_id(double x) {
        double r33707554 = -0.3125;
        double r33707555 = 6.5625;
        double r33707556 = x;
        double r33707557 = r33707556 * r33707556;
        double r33707558 = r33707555 * r33707557;
        double r33707559 = r33707554 + r33707558;
        double r33707560 = -19.6875;
        double r33707561 = r33707557 * r33707556;
        double r33707562 = r33707561 * r33707556;
        double r33707563 = r33707560 * r33707562;
        double r33707564 = r33707559 + r33707563;
        double r33707565 = 14.4375;
        double r33707566 = r33707562 * r33707556;
        double r33707567 = r33707566 * r33707556;
        double r33707568 = r33707565 * r33707567;
        double r33707569 = r33707564 + r33707568;
        return r33707569;
}


double f_of(float x) {
        float r33707570 = x;
        float r33707571 = r33707570 * r33707570;
        float r33707572 = r33707571 * r33707571;
        float r33707573 = -19.6875;
        float r33707574 = 14.4375;
        float r33707575 = r33707574 * r33707570;
        float r33707576 = r33707575 * r33707570;
        float r33707577 = r33707573 + r33707576;
        float r33707578 = r33707572 * r33707577;
        float r33707579 = 6.5625;
        float r33707580 = r33707570 * r33707579;
        float r33707581 = r33707570 * r33707580;
        float r33707582 = -0.3125;
        float r33707583 = r33707581 + r33707582;
        float r33707584 = r33707578 + r33707583;
        float r33707585 = cbrt(r33707584);
        float r33707586 = r33707580 * r33707570;
        float r33707587 = r33707586 + r33707582;
        float r33707588 = r33707571 * r33707574;
        float r33707589 = r33707573 + r33707588;
        float r33707590 = r33707572 * r33707589;
        float r33707591 = r33707587 + r33707590;
        float r33707592 = cbrt(r33707591);
        float r33707593 = r33707585 * r33707592;
        float r33707594 = exp(r33707587);
        float r33707595 = exp(r33707590);
        float r33707596 = r33707594 * r33707595;
        float r33707597 = log(r33707596);
        float r33707598 = cbrt(r33707597);
        float r33707599 = r33707593 * r33707598;
        return r33707599;
}

double f_od(double x) {
        double r33707600 = x;
        double r33707601 = r33707600 * r33707600;
        double r33707602 = r33707601 * r33707601;
        double r33707603 = -19.6875;
        double r33707604 = 14.4375;
        double r33707605 = r33707604 * r33707600;
        double r33707606 = r33707605 * r33707600;
        double r33707607 = r33707603 + r33707606;
        double r33707608 = r33707602 * r33707607;
        double r33707609 = 6.5625;
        double r33707610 = r33707600 * r33707609;
        double r33707611 = r33707600 * r33707610;
        double r33707612 = -0.3125;
        double r33707613 = r33707611 + r33707612;
        double r33707614 = r33707608 + r33707613;
        double r33707615 = cbrt(r33707614);
        double r33707616 = r33707610 * r33707600;
        double r33707617 = r33707616 + r33707612;
        double r33707618 = r33707601 * r33707604;
        double r33707619 = r33707603 + r33707618;
        double r33707620 = r33707602 * r33707619;
        double r33707621 = r33707617 + r33707620;
        double r33707622 = cbrt(r33707621);
        double r33707623 = r33707615 * r33707622;
        double r33707624 = exp(r33707617);
        double r33707625 = exp(r33707620);
        double r33707626 = r33707624 * r33707625;
        double r33707627 = log(r33707626);
        double r33707628 = cbrt(r33707627);
        double r33707629 = r33707623 * r33707628;
        return r33707629;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r33707630, r33707631, r33707632, r33707633, r33707634, r33707635, r33707636, r33707637, r33707638, r33707639, r33707640, r33707641, r33707642, r33707643, r33707644, r33707645;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r33707630, "-0.3125", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707631, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r33707632);
        mpfr_init(r33707633);
        mpfr_init(r33707634);
        mpfr_init(r33707635);
        mpfr_init_set_str(r33707636, "-19.6875", 10, MPFR_RNDN);
        mpfr_init(r33707637);
        mpfr_init(r33707638);
        mpfr_init(r33707639);
        mpfr_init(r33707640);
        mpfr_init_set_str(r33707641, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r33707642);
        mpfr_init(r33707643);
        mpfr_init(r33707644);
        mpfr_init(r33707645);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r33707632, x, MPFR_RNDN);
        mpfr_mul(r33707633, r33707632, r33707632, MPFR_RNDN);
        mpfr_mul(r33707634, r33707631, r33707633, MPFR_RNDN);
        mpfr_add(r33707635, r33707630, r33707634, MPFR_RNDN);
        ;
        mpfr_mul(r33707637, r33707633, r33707632, MPFR_RNDN);
        mpfr_mul(r33707638, r33707637, r33707632, MPFR_RNDN);
        mpfr_mul(r33707639, r33707636, r33707638, MPFR_RNDN);
        mpfr_add(r33707640, r33707635, r33707639, MPFR_RNDN);
        ;
        mpfr_mul(r33707642, r33707638, r33707632, MPFR_RNDN);
        mpfr_mul(r33707643, r33707642, r33707632, MPFR_RNDN);
        mpfr_mul(r33707644, r33707641, r33707643, MPFR_RNDN);
        mpfr_add(r33707645, r33707640, r33707644, MPFR_RNDN);
        return mpfr_get_d(r33707645, MPFR_RNDN);
}

static mpfr_t r33707646, r33707647, r33707648, r33707649, r33707650, r33707651, r33707652, r33707653, r33707654, r33707655, r33707656, r33707657, r33707658, r33707659, r33707660, r33707661, r33707662, r33707663, r33707664, r33707665, r33707666, r33707667, r33707668, r33707669, r33707670, r33707671, r33707672, r33707673, r33707674, r33707675;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707646);
        mpfr_init(r33707647);
        mpfr_init(r33707648);
        mpfr_init_set_str(r33707649, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707650, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r33707651);
        mpfr_init(r33707652);
        mpfr_init(r33707653);
        mpfr_init(r33707654);
        mpfr_init_set_str(r33707655, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r33707656);
        mpfr_init(r33707657);
        mpfr_init_set_str(r33707658, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r33707659);
        mpfr_init(r33707660);
        mpfr_init(r33707661);
        mpfr_init(r33707662);
        mpfr_init(r33707663);
        mpfr_init(r33707664);
        mpfr_init(r33707665);
        mpfr_init(r33707666);
        mpfr_init(r33707667);
        mpfr_init(r33707668);
        mpfr_init(r33707669);
        mpfr_init(r33707670);
        mpfr_init(r33707671);
        mpfr_init(r33707672);
        mpfr_init(r33707673);
        mpfr_init(r33707674);
        mpfr_init(r33707675);
}

double f_fm(double x) {
        mpfr_set_d(r33707646, x, MPFR_RNDN);
        mpfr_mul(r33707647, r33707646, r33707646, MPFR_RNDN);
        mpfr_mul(r33707648, r33707647, r33707647, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r33707651, r33707650, r33707646, MPFR_RNDN);
        mpfr_mul(r33707652, r33707651, r33707646, MPFR_RNDN);
        mpfr_add(r33707653, r33707649, r33707652, MPFR_RNDN);
        mpfr_mul(r33707654, r33707648, r33707653, MPFR_RNDN);
        ;
        mpfr_mul(r33707656, r33707646, r33707655, MPFR_RNDN);
        mpfr_mul(r33707657, r33707646, r33707656, MPFR_RNDN);
        ;
        mpfr_add(r33707659, r33707657, r33707658, MPFR_RNDN);
        mpfr_add(r33707660, r33707654, r33707659, MPFR_RNDN);
        mpfr_cbrt(r33707661, r33707660, MPFR_RNDN);
        mpfr_mul(r33707662, r33707656, r33707646, MPFR_RNDN);
        mpfr_add(r33707663, r33707662, r33707658, MPFR_RNDN);
        mpfr_mul(r33707664, r33707647, r33707650, MPFR_RNDN);
        mpfr_add(r33707665, r33707649, r33707664, MPFR_RNDN);
        mpfr_mul(r33707666, r33707648, r33707665, MPFR_RNDN);
        mpfr_add(r33707667, r33707663, r33707666, MPFR_RNDN);
        mpfr_cbrt(r33707668, r33707667, MPFR_RNDN);
        mpfr_mul(r33707669, r33707661, r33707668, MPFR_RNDN);
        mpfr_exp(r33707670, r33707663, MPFR_RNDN);
        mpfr_exp(r33707671, r33707666, MPFR_RNDN);
        mpfr_mul(r33707672, r33707670, r33707671, MPFR_RNDN);
        mpfr_log(r33707673, r33707672, MPFR_RNDN);
        mpfr_cbrt(r33707674, r33707673, MPFR_RNDN);
        mpfr_mul(r33707675, r33707669, r33707674, MPFR_RNDN);
        return mpfr_get_d(r33707675, MPFR_RNDN);
}

static mpfr_t r33707676, r33707677, r33707678, r33707679, r33707680, r33707681, r33707682, r33707683, r33707684, r33707685, r33707686, r33707687, r33707688, r33707689, r33707690, r33707691, r33707692, r33707693, r33707694, r33707695, r33707696, r33707697, r33707698, r33707699, r33707700, r33707701, r33707702, r33707703, r33707704, r33707705;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r33707676);
        mpfr_init(r33707677);
        mpfr_init(r33707678);
        mpfr_init_set_str(r33707679, "-19.6875", 10, MPFR_RNDN);
        mpfr_init_set_str(r33707680, "14.4375", 10, MPFR_RNDN);
        mpfr_init(r33707681);
        mpfr_init(r33707682);
        mpfr_init(r33707683);
        mpfr_init(r33707684);
        mpfr_init_set_str(r33707685, "6.5625", 10, MPFR_RNDN);
        mpfr_init(r33707686);
        mpfr_init(r33707687);
        mpfr_init_set_str(r33707688, "-0.3125", 10, MPFR_RNDN);
        mpfr_init(r33707689);
        mpfr_init(r33707690);
        mpfr_init(r33707691);
        mpfr_init(r33707692);
        mpfr_init(r33707693);
        mpfr_init(r33707694);
        mpfr_init(r33707695);
        mpfr_init(r33707696);
        mpfr_init(r33707697);
        mpfr_init(r33707698);
        mpfr_init(r33707699);
        mpfr_init(r33707700);
        mpfr_init(r33707701);
        mpfr_init(r33707702);
        mpfr_init(r33707703);
        mpfr_init(r33707704);
        mpfr_init(r33707705);
}

double f_dm(double x) {
        mpfr_set_d(r33707676, x, MPFR_RNDN);
        mpfr_mul(r33707677, r33707676, r33707676, MPFR_RNDN);
        mpfr_mul(r33707678, r33707677, r33707677, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r33707681, r33707680, r33707676, MPFR_RNDN);
        mpfr_mul(r33707682, r33707681, r33707676, MPFR_RNDN);
        mpfr_add(r33707683, r33707679, r33707682, MPFR_RNDN);
        mpfr_mul(r33707684, r33707678, r33707683, MPFR_RNDN);
        ;
        mpfr_mul(r33707686, r33707676, r33707685, MPFR_RNDN);
        mpfr_mul(r33707687, r33707676, r33707686, MPFR_RNDN);
        ;
        mpfr_add(r33707689, r33707687, r33707688, MPFR_RNDN);
        mpfr_add(r33707690, r33707684, r33707689, MPFR_RNDN);
        mpfr_cbrt(r33707691, r33707690, MPFR_RNDN);
        mpfr_mul(r33707692, r33707686, r33707676, MPFR_RNDN);
        mpfr_add(r33707693, r33707692, r33707688, MPFR_RNDN);
        mpfr_mul(r33707694, r33707677, r33707680, MPFR_RNDN);
        mpfr_add(r33707695, r33707679, r33707694, MPFR_RNDN);
        mpfr_mul(r33707696, r33707678, r33707695, MPFR_RNDN);
        mpfr_add(r33707697, r33707693, r33707696, MPFR_RNDN);
        mpfr_cbrt(r33707698, r33707697, MPFR_RNDN);
        mpfr_mul(r33707699, r33707691, r33707698, MPFR_RNDN);
        mpfr_exp(r33707700, r33707693, MPFR_RNDN);
        mpfr_exp(r33707701, r33707696, MPFR_RNDN);
        mpfr_mul(r33707702, r33707700, r33707701, MPFR_RNDN);
        mpfr_log(r33707703, r33707702, MPFR_RNDN);
        mpfr_cbrt(r33707704, r33707703, MPFR_RNDN);
        mpfr_mul(r33707705, r33707699, r33707704, MPFR_RNDN);
        return mpfr_get_d(r33707705, MPFR_RNDN);
}

