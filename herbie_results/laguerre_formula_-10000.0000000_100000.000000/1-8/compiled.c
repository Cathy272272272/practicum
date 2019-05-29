#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10920482 = 1.0;
        float r10920483 = -8.0;
        float r10920484 = x;
        float r10920485 = r10920483 * r10920484;
        float r10920486 = r10920482 + r10920485;
        float r10920487 = 14.0;
        float r10920488 = r10920484 * r10920484;
        float r10920489 = r10920487 * r10920488;
        float r10920490 = r10920486 + r10920489;
        float r10920491 = -9.333333;
        float r10920492 = r10920488 * r10920484;
        float r10920493 = r10920491 * r10920492;
        float r10920494 = r10920490 + r10920493;
        float r10920495 = 2.916667;
        float r10920496 = r10920492 * r10920484;
        float r10920497 = r10920495 * r10920496;
        float r10920498 = r10920494 + r10920497;
        float r10920499 = -0.466667;
        float r10920500 = r10920496 * r10920484;
        float r10920501 = r10920499 * r10920500;
        float r10920502 = r10920498 + r10920501;
        float r10920503 = 0.038889;
        float r10920504 = r10920500 * r10920484;
        float r10920505 = r10920503 * r10920504;
        float r10920506 = r10920502 + r10920505;
        float r10920507 = -0.001587;
        float r10920508 = r10920504 * r10920484;
        float r10920509 = r10920507 * r10920508;
        float r10920510 = r10920506 + r10920509;
        float r10920511 = 2.5e-05;
        float r10920512 = r10920508 * r10920484;
        float r10920513 = r10920511 * r10920512;
        float r10920514 = r10920510 + r10920513;
        return r10920514;
}

double f_id(double x) {
        double r10920515 = 1.0;
        double r10920516 = -8.0;
        double r10920517 = x;
        double r10920518 = r10920516 * r10920517;
        double r10920519 = r10920515 + r10920518;
        double r10920520 = 14.0;
        double r10920521 = r10920517 * r10920517;
        double r10920522 = r10920520 * r10920521;
        double r10920523 = r10920519 + r10920522;
        double r10920524 = -9.333333;
        double r10920525 = r10920521 * r10920517;
        double r10920526 = r10920524 * r10920525;
        double r10920527 = r10920523 + r10920526;
        double r10920528 = 2.916667;
        double r10920529 = r10920525 * r10920517;
        double r10920530 = r10920528 * r10920529;
        double r10920531 = r10920527 + r10920530;
        double r10920532 = -0.466667;
        double r10920533 = r10920529 * r10920517;
        double r10920534 = r10920532 * r10920533;
        double r10920535 = r10920531 + r10920534;
        double r10920536 = 0.038889;
        double r10920537 = r10920533 * r10920517;
        double r10920538 = r10920536 * r10920537;
        double r10920539 = r10920535 + r10920538;
        double r10920540 = -0.001587;
        double r10920541 = r10920537 * r10920517;
        double r10920542 = r10920540 * r10920541;
        double r10920543 = r10920539 + r10920542;
        double r10920544 = 2.5e-05;
        double r10920545 = r10920541 * r10920517;
        double r10920546 = r10920544 * r10920545;
        double r10920547 = r10920543 + r10920546;
        return r10920547;
}


double f_of(float x) {
        float r10920548 = 1.0;
        float r10920549 = -8.0;
        float r10920550 = x;
        float r10920551 = r10920549 * r10920550;
        float r10920552 = r10920548 + r10920551;
        float r10920553 = 14.0;
        float r10920554 = r10920550 * r10920550;
        float r10920555 = r10920553 * r10920554;
        float r10920556 = r10920552 + r10920555;
        float r10920557 = -9.333333;
        float r10920558 = r10920554 * r10920550;
        float r10920559 = r10920557 * r10920558;
        float r10920560 = r10920556 + r10920559;
        float r10920561 = 2.916667;
        float r10920562 = r10920558 * r10920550;
        float r10920563 = r10920561 * r10920562;
        float r10920564 = r10920560 + r10920563;
        float r10920565 = -0.466667;
        float r10920566 = r10920562 * r10920550;
        float r10920567 = r10920565 * r10920566;
        float r10920568 = r10920564 + r10920567;
        float r10920569 = 0.038889;
        float r10920570 = r10920566 * r10920550;
        float r10920571 = r10920569 * r10920570;
        float r10920572 = r10920568 + r10920571;
        float r10920573 = -0.001587;
        float r10920574 = r10920570 * r10920550;
        float r10920575 = r10920573 * r10920574;
        float r10920576 = r10920572 + r10920575;
        float r10920577 = 2.5e-05;
        float r10920578 = r10920574 * r10920550;
        float r10920579 = r10920577 * r10920578;
        float r10920580 = r10920576 + r10920579;
        return r10920580;
}

double f_od(double x) {
        double r10920581 = 1.0;
        double r10920582 = -8.0;
        double r10920583 = x;
        double r10920584 = r10920582 * r10920583;
        double r10920585 = r10920581 + r10920584;
        double r10920586 = 14.0;
        double r10920587 = r10920583 * r10920583;
        double r10920588 = r10920586 * r10920587;
        double r10920589 = r10920585 + r10920588;
        double r10920590 = -9.333333;
        double r10920591 = r10920587 * r10920583;
        double r10920592 = r10920590 * r10920591;
        double r10920593 = r10920589 + r10920592;
        double r10920594 = 2.916667;
        double r10920595 = r10920591 * r10920583;
        double r10920596 = r10920594 * r10920595;
        double r10920597 = r10920593 + r10920596;
        double r10920598 = -0.466667;
        double r10920599 = r10920595 * r10920583;
        double r10920600 = r10920598 * r10920599;
        double r10920601 = r10920597 + r10920600;
        double r10920602 = 0.038889;
        double r10920603 = r10920599 * r10920583;
        double r10920604 = r10920602 * r10920603;
        double r10920605 = r10920601 + r10920604;
        double r10920606 = -0.001587;
        double r10920607 = r10920603 * r10920583;
        double r10920608 = r10920606 * r10920607;
        double r10920609 = r10920605 + r10920608;
        double r10920610 = 2.5e-05;
        double r10920611 = r10920607 * r10920583;
        double r10920612 = r10920610 * r10920611;
        double r10920613 = r10920609 + r10920612;
        return r10920613;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10920614, r10920615, r10920616, r10920617, r10920618, r10920619, r10920620, r10920621, r10920622, r10920623, r10920624, r10920625, r10920626, r10920627, r10920628, r10920629, r10920630, r10920631, r10920632, r10920633, r10920634, r10920635, r10920636, r10920637, r10920638, r10920639, r10920640, r10920641, r10920642, r10920643, r10920644, r10920645, r10920646;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10920614, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10920615, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10920616);
        mpfr_init(r10920617);
        mpfr_init(r10920618);
        mpfr_init_set_str(r10920619, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10920620);
        mpfr_init(r10920621);
        mpfr_init(r10920622);
        mpfr_init_set_str(r10920623, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10920624);
        mpfr_init(r10920625);
        mpfr_init(r10920626);
        mpfr_init_set_str(r10920627, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10920628);
        mpfr_init(r10920629);
        mpfr_init(r10920630);
        mpfr_init_set_str(r10920631, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10920632);
        mpfr_init(r10920633);
        mpfr_init(r10920634);
        mpfr_init_set_str(r10920635, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10920636);
        mpfr_init(r10920637);
        mpfr_init(r10920638);
        mpfr_init_set_str(r10920639, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10920640);
        mpfr_init(r10920641);
        mpfr_init(r10920642);
        mpfr_init_set_str(r10920643, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10920644);
        mpfr_init(r10920645);
        mpfr_init(r10920646);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10920616, x, MPFR_RNDN);
        mpfr_mul(r10920617, r10920615, r10920616, MPFR_RNDN);
        mpfr_add(r10920618, r10920614, r10920617, MPFR_RNDN);
        ;
        mpfr_mul(r10920620, r10920616, r10920616, MPFR_RNDN);
        mpfr_mul(r10920621, r10920619, r10920620, MPFR_RNDN);
        mpfr_add(r10920622, r10920618, r10920621, MPFR_RNDN);
        ;
        mpfr_mul(r10920624, r10920620, r10920616, MPFR_RNDN);
        mpfr_mul(r10920625, r10920623, r10920624, MPFR_RNDN);
        mpfr_add(r10920626, r10920622, r10920625, MPFR_RNDN);
        ;
        mpfr_mul(r10920628, r10920624, r10920616, MPFR_RNDN);
        mpfr_mul(r10920629, r10920627, r10920628, MPFR_RNDN);
        mpfr_add(r10920630, r10920626, r10920629, MPFR_RNDN);
        ;
        mpfr_mul(r10920632, r10920628, r10920616, MPFR_RNDN);
        mpfr_mul(r10920633, r10920631, r10920632, MPFR_RNDN);
        mpfr_add(r10920634, r10920630, r10920633, MPFR_RNDN);
        ;
        mpfr_mul(r10920636, r10920632, r10920616, MPFR_RNDN);
        mpfr_mul(r10920637, r10920635, r10920636, MPFR_RNDN);
        mpfr_add(r10920638, r10920634, r10920637, MPFR_RNDN);
        ;
        mpfr_mul(r10920640, r10920636, r10920616, MPFR_RNDN);
        mpfr_mul(r10920641, r10920639, r10920640, MPFR_RNDN);
        mpfr_add(r10920642, r10920638, r10920641, MPFR_RNDN);
        ;
        mpfr_mul(r10920644, r10920640, r10920616, MPFR_RNDN);
        mpfr_mul(r10920645, r10920643, r10920644, MPFR_RNDN);
        mpfr_add(r10920646, r10920642, r10920645, MPFR_RNDN);
        return mpfr_get_d(r10920646, MPFR_RNDN);
}

static mpfr_t r10920647, r10920648, r10920649, r10920650, r10920651, r10920652, r10920653, r10920654, r10920655, r10920656, r10920657, r10920658, r10920659, r10920660, r10920661, r10920662, r10920663, r10920664, r10920665, r10920666, r10920667, r10920668, r10920669, r10920670, r10920671, r10920672, r10920673, r10920674, r10920675, r10920676, r10920677, r10920678, r10920679;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10920647, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10920648, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10920649);
        mpfr_init(r10920650);
        mpfr_init(r10920651);
        mpfr_init_set_str(r10920652, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10920653);
        mpfr_init(r10920654);
        mpfr_init(r10920655);
        mpfr_init_set_str(r10920656, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10920657);
        mpfr_init(r10920658);
        mpfr_init(r10920659);
        mpfr_init_set_str(r10920660, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10920661);
        mpfr_init(r10920662);
        mpfr_init(r10920663);
        mpfr_init_set_str(r10920664, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10920665);
        mpfr_init(r10920666);
        mpfr_init(r10920667);
        mpfr_init_set_str(r10920668, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10920669);
        mpfr_init(r10920670);
        mpfr_init(r10920671);
        mpfr_init_set_str(r10920672, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10920673);
        mpfr_init(r10920674);
        mpfr_init(r10920675);
        mpfr_init_set_str(r10920676, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10920677);
        mpfr_init(r10920678);
        mpfr_init(r10920679);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10920649, x, MPFR_RNDN);
        mpfr_mul(r10920650, r10920648, r10920649, MPFR_RNDN);
        mpfr_add(r10920651, r10920647, r10920650, MPFR_RNDN);
        ;
        mpfr_mul(r10920653, r10920649, r10920649, MPFR_RNDN);
        mpfr_mul(r10920654, r10920652, r10920653, MPFR_RNDN);
        mpfr_add(r10920655, r10920651, r10920654, MPFR_RNDN);
        ;
        mpfr_mul(r10920657, r10920653, r10920649, MPFR_RNDN);
        mpfr_mul(r10920658, r10920656, r10920657, MPFR_RNDN);
        mpfr_add(r10920659, r10920655, r10920658, MPFR_RNDN);
        ;
        mpfr_mul(r10920661, r10920657, r10920649, MPFR_RNDN);
        mpfr_mul(r10920662, r10920660, r10920661, MPFR_RNDN);
        mpfr_add(r10920663, r10920659, r10920662, MPFR_RNDN);
        ;
        mpfr_mul(r10920665, r10920661, r10920649, MPFR_RNDN);
        mpfr_mul(r10920666, r10920664, r10920665, MPFR_RNDN);
        mpfr_add(r10920667, r10920663, r10920666, MPFR_RNDN);
        ;
        mpfr_mul(r10920669, r10920665, r10920649, MPFR_RNDN);
        mpfr_mul(r10920670, r10920668, r10920669, MPFR_RNDN);
        mpfr_add(r10920671, r10920667, r10920670, MPFR_RNDN);
        ;
        mpfr_mul(r10920673, r10920669, r10920649, MPFR_RNDN);
        mpfr_mul(r10920674, r10920672, r10920673, MPFR_RNDN);
        mpfr_add(r10920675, r10920671, r10920674, MPFR_RNDN);
        ;
        mpfr_mul(r10920677, r10920673, r10920649, MPFR_RNDN);
        mpfr_mul(r10920678, r10920676, r10920677, MPFR_RNDN);
        mpfr_add(r10920679, r10920675, r10920678, MPFR_RNDN);
        return mpfr_get_d(r10920679, MPFR_RNDN);
}

static mpfr_t r10920680, r10920681, r10920682, r10920683, r10920684, r10920685, r10920686, r10920687, r10920688, r10920689, r10920690, r10920691, r10920692, r10920693, r10920694, r10920695, r10920696, r10920697, r10920698, r10920699, r10920700, r10920701, r10920702, r10920703, r10920704, r10920705, r10920706, r10920707, r10920708, r10920709, r10920710, r10920711, r10920712;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10920680, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10920681, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10920682);
        mpfr_init(r10920683);
        mpfr_init(r10920684);
        mpfr_init_set_str(r10920685, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10920686);
        mpfr_init(r10920687);
        mpfr_init(r10920688);
        mpfr_init_set_str(r10920689, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10920690);
        mpfr_init(r10920691);
        mpfr_init(r10920692);
        mpfr_init_set_str(r10920693, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10920694);
        mpfr_init(r10920695);
        mpfr_init(r10920696);
        mpfr_init_set_str(r10920697, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10920698);
        mpfr_init(r10920699);
        mpfr_init(r10920700);
        mpfr_init_set_str(r10920701, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10920702);
        mpfr_init(r10920703);
        mpfr_init(r10920704);
        mpfr_init_set_str(r10920705, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10920706);
        mpfr_init(r10920707);
        mpfr_init(r10920708);
        mpfr_init_set_str(r10920709, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10920710);
        mpfr_init(r10920711);
        mpfr_init(r10920712);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10920682, x, MPFR_RNDN);
        mpfr_mul(r10920683, r10920681, r10920682, MPFR_RNDN);
        mpfr_add(r10920684, r10920680, r10920683, MPFR_RNDN);
        ;
        mpfr_mul(r10920686, r10920682, r10920682, MPFR_RNDN);
        mpfr_mul(r10920687, r10920685, r10920686, MPFR_RNDN);
        mpfr_add(r10920688, r10920684, r10920687, MPFR_RNDN);
        ;
        mpfr_mul(r10920690, r10920686, r10920682, MPFR_RNDN);
        mpfr_mul(r10920691, r10920689, r10920690, MPFR_RNDN);
        mpfr_add(r10920692, r10920688, r10920691, MPFR_RNDN);
        ;
        mpfr_mul(r10920694, r10920690, r10920682, MPFR_RNDN);
        mpfr_mul(r10920695, r10920693, r10920694, MPFR_RNDN);
        mpfr_add(r10920696, r10920692, r10920695, MPFR_RNDN);
        ;
        mpfr_mul(r10920698, r10920694, r10920682, MPFR_RNDN);
        mpfr_mul(r10920699, r10920697, r10920698, MPFR_RNDN);
        mpfr_add(r10920700, r10920696, r10920699, MPFR_RNDN);
        ;
        mpfr_mul(r10920702, r10920698, r10920682, MPFR_RNDN);
        mpfr_mul(r10920703, r10920701, r10920702, MPFR_RNDN);
        mpfr_add(r10920704, r10920700, r10920703, MPFR_RNDN);
        ;
        mpfr_mul(r10920706, r10920702, r10920682, MPFR_RNDN);
        mpfr_mul(r10920707, r10920705, r10920706, MPFR_RNDN);
        mpfr_add(r10920708, r10920704, r10920707, MPFR_RNDN);
        ;
        mpfr_mul(r10920710, r10920706, r10920682, MPFR_RNDN);
        mpfr_mul(r10920711, r10920709, r10920710, MPFR_RNDN);
        mpfr_add(r10920712, r10920708, r10920711, MPFR_RNDN);
        return mpfr_get_d(r10920712, MPFR_RNDN);
}

