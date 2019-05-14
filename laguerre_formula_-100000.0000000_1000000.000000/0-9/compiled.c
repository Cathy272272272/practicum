#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "9";

double f_if(float x) {
        float r10215494 = 1.0;
        float r10215495 = -9.0;
        float r10215496 = x;
        float r10215497 = r10215495 * r10215496;
        float r10215498 = r10215494 + r10215497;
        float r10215499 = 18.0;
        float r10215500 = r10215496 * r10215496;
        float r10215501 = r10215499 * r10215500;
        float r10215502 = r10215498 + r10215501;
        float r10215503 = -14.0;
        float r10215504 = r10215500 * r10215496;
        float r10215505 = r10215503 * r10215504;
        float r10215506 = r10215502 + r10215505;
        float r10215507 = 5.25;
        float r10215508 = r10215504 * r10215496;
        float r10215509 = r10215507 * r10215508;
        float r10215510 = r10215506 + r10215509;
        float r10215511 = -1.05;
        float r10215512 = r10215508 * r10215496;
        float r10215513 = r10215511 * r10215512;
        float r10215514 = r10215510 + r10215513;
        float r10215515 = 0.116667;
        float r10215516 = r10215512 * r10215496;
        float r10215517 = r10215515 * r10215516;
        float r10215518 = r10215514 + r10215517;
        float r10215519 = -0.007143;
        float r10215520 = r10215516 * r10215496;
        float r10215521 = r10215519 * r10215520;
        float r10215522 = r10215518 + r10215521;
        float r10215523 = 0.000223;
        float r10215524 = r10215520 * r10215496;
        float r10215525 = r10215523 * r10215524;
        float r10215526 = r10215522 + r10215525;
        float r10215527 = -3e-06;
        float r10215528 = r10215524 * r10215496;
        float r10215529 = r10215527 * r10215528;
        float r10215530 = r10215526 + r10215529;
        return r10215530;
}

double f_id(double x) {
        double r10215531 = 1.0;
        double r10215532 = -9.0;
        double r10215533 = x;
        double r10215534 = r10215532 * r10215533;
        double r10215535 = r10215531 + r10215534;
        double r10215536 = 18.0;
        double r10215537 = r10215533 * r10215533;
        double r10215538 = r10215536 * r10215537;
        double r10215539 = r10215535 + r10215538;
        double r10215540 = -14.0;
        double r10215541 = r10215537 * r10215533;
        double r10215542 = r10215540 * r10215541;
        double r10215543 = r10215539 + r10215542;
        double r10215544 = 5.25;
        double r10215545 = r10215541 * r10215533;
        double r10215546 = r10215544 * r10215545;
        double r10215547 = r10215543 + r10215546;
        double r10215548 = -1.05;
        double r10215549 = r10215545 * r10215533;
        double r10215550 = r10215548 * r10215549;
        double r10215551 = r10215547 + r10215550;
        double r10215552 = 0.116667;
        double r10215553 = r10215549 * r10215533;
        double r10215554 = r10215552 * r10215553;
        double r10215555 = r10215551 + r10215554;
        double r10215556 = -0.007143;
        double r10215557 = r10215553 * r10215533;
        double r10215558 = r10215556 * r10215557;
        double r10215559 = r10215555 + r10215558;
        double r10215560 = 0.000223;
        double r10215561 = r10215557 * r10215533;
        double r10215562 = r10215560 * r10215561;
        double r10215563 = r10215559 + r10215562;
        double r10215564 = -3e-06;
        double r10215565 = r10215561 * r10215533;
        double r10215566 = r10215564 * r10215565;
        double r10215567 = r10215563 + r10215566;
        return r10215567;
}


double f_of(float x) {
        float r10215568 = x;
        float r10215569 = r10215568 * r10215568;
        float r10215570 = r10215569 * r10215569;
        float r10215571 = r10215570 * r10215570;
        float r10215572 = 0.000223;
        float r10215573 = -3e-06;
        float r10215574 = r10215573 * r10215568;
        float r10215575 = r10215572 + r10215574;
        float r10215576 = r10215571 * r10215575;
        float r10215577 = 0.116667;
        float r10215578 = r10215569 * r10215577;
        float r10215579 = r10215570 * r10215578;
        float r10215580 = r10215576 + r10215579;
        float r10215581 = -0.007143;
        float r10215582 = r10215581 * r10215568;
        float r10215583 = r10215582 * r10215569;
        float r10215584 = r10215583 * r10215570;
        float r10215585 = -9.0;
        float r10215586 = r10215568 * r10215585;
        float r10215587 = 1.0;
        float r10215588 = r10215586 + r10215587;
        float r10215589 = r10215584 + r10215588;
        float r10215590 = 18.0;
        float r10215591 = -14.0;
        float r10215592 = r10215568 * r10215591;
        float r10215593 = r10215590 + r10215592;
        float r10215594 = r10215569 * r10215593;
        float r10215595 = log(r10215569);
        float r10215596 = r10215595 + r10215595;
        float r10215597 = exp(r10215596);
        float r10215598 = -1.05;
        float r10215599 = r10215568 * r10215598;
        float r10215600 = 5.25;
        float r10215601 = r10215599 + r10215600;
        float r10215602 = r10215597 * r10215601;
        float r10215603 = r10215594 + r10215602;
        float r10215604 = r10215589 + r10215603;
        float r10215605 = r10215580 + r10215604;
        return r10215605;
}

double f_od(double x) {
        double r10215606 = x;
        double r10215607 = r10215606 * r10215606;
        double r10215608 = r10215607 * r10215607;
        double r10215609 = r10215608 * r10215608;
        double r10215610 = 0.000223;
        double r10215611 = -3e-06;
        double r10215612 = r10215611 * r10215606;
        double r10215613 = r10215610 + r10215612;
        double r10215614 = r10215609 * r10215613;
        double r10215615 = 0.116667;
        double r10215616 = r10215607 * r10215615;
        double r10215617 = r10215608 * r10215616;
        double r10215618 = r10215614 + r10215617;
        double r10215619 = -0.007143;
        double r10215620 = r10215619 * r10215606;
        double r10215621 = r10215620 * r10215607;
        double r10215622 = r10215621 * r10215608;
        double r10215623 = -9.0;
        double r10215624 = r10215606 * r10215623;
        double r10215625 = 1.0;
        double r10215626 = r10215624 + r10215625;
        double r10215627 = r10215622 + r10215626;
        double r10215628 = 18.0;
        double r10215629 = -14.0;
        double r10215630 = r10215606 * r10215629;
        double r10215631 = r10215628 + r10215630;
        double r10215632 = r10215607 * r10215631;
        double r10215633 = log(r10215607);
        double r10215634 = r10215633 + r10215633;
        double r10215635 = exp(r10215634);
        double r10215636 = -1.05;
        double r10215637 = r10215606 * r10215636;
        double r10215638 = 5.25;
        double r10215639 = r10215637 + r10215638;
        double r10215640 = r10215635 * r10215639;
        double r10215641 = r10215632 + r10215640;
        double r10215642 = r10215627 + r10215641;
        double r10215643 = r10215618 + r10215642;
        return r10215643;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10215644, r10215645, r10215646, r10215647, r10215648, r10215649, r10215650, r10215651, r10215652, r10215653, r10215654, r10215655, r10215656, r10215657, r10215658, r10215659, r10215660, r10215661, r10215662, r10215663, r10215664, r10215665, r10215666, r10215667, r10215668, r10215669, r10215670, r10215671, r10215672, r10215673, r10215674, r10215675, r10215676, r10215677, r10215678, r10215679, r10215680;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10215644, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215645, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10215646);
        mpfr_init(r10215647);
        mpfr_init(r10215648);
        mpfr_init_set_str(r10215649, "18.0", 10, MPFR_RNDN);
        mpfr_init(r10215650);
        mpfr_init(r10215651);
        mpfr_init(r10215652);
        mpfr_init_set_str(r10215653, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10215654);
        mpfr_init(r10215655);
        mpfr_init(r10215656);
        mpfr_init_set_str(r10215657, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10215658);
        mpfr_init(r10215659);
        mpfr_init(r10215660);
        mpfr_init_set_str(r10215661, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10215662);
        mpfr_init(r10215663);
        mpfr_init(r10215664);
        mpfr_init_set_str(r10215665, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10215666);
        mpfr_init(r10215667);
        mpfr_init(r10215668);
        mpfr_init_set_str(r10215669, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10215670);
        mpfr_init(r10215671);
        mpfr_init(r10215672);
        mpfr_init_set_str(r10215673, "0.000223", 10, MPFR_RNDN);
        mpfr_init(r10215674);
        mpfr_init(r10215675);
        mpfr_init(r10215676);
        mpfr_init_set_str(r10215677, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10215678);
        mpfr_init(r10215679);
        mpfr_init(r10215680);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10215646, x, MPFR_RNDN);
        mpfr_mul(r10215647, r10215645, r10215646, MPFR_RNDN);
        mpfr_add(r10215648, r10215644, r10215647, MPFR_RNDN);
        ;
        mpfr_mul(r10215650, r10215646, r10215646, MPFR_RNDN);
        mpfr_mul(r10215651, r10215649, r10215650, MPFR_RNDN);
        mpfr_add(r10215652, r10215648, r10215651, MPFR_RNDN);
        ;
        mpfr_mul(r10215654, r10215650, r10215646, MPFR_RNDN);
        mpfr_mul(r10215655, r10215653, r10215654, MPFR_RNDN);
        mpfr_add(r10215656, r10215652, r10215655, MPFR_RNDN);
        ;
        mpfr_mul(r10215658, r10215654, r10215646, MPFR_RNDN);
        mpfr_mul(r10215659, r10215657, r10215658, MPFR_RNDN);
        mpfr_add(r10215660, r10215656, r10215659, MPFR_RNDN);
        ;
        mpfr_mul(r10215662, r10215658, r10215646, MPFR_RNDN);
        mpfr_mul(r10215663, r10215661, r10215662, MPFR_RNDN);
        mpfr_add(r10215664, r10215660, r10215663, MPFR_RNDN);
        ;
        mpfr_mul(r10215666, r10215662, r10215646, MPFR_RNDN);
        mpfr_mul(r10215667, r10215665, r10215666, MPFR_RNDN);
        mpfr_add(r10215668, r10215664, r10215667, MPFR_RNDN);
        ;
        mpfr_mul(r10215670, r10215666, r10215646, MPFR_RNDN);
        mpfr_mul(r10215671, r10215669, r10215670, MPFR_RNDN);
        mpfr_add(r10215672, r10215668, r10215671, MPFR_RNDN);
        ;
        mpfr_mul(r10215674, r10215670, r10215646, MPFR_RNDN);
        mpfr_mul(r10215675, r10215673, r10215674, MPFR_RNDN);
        mpfr_add(r10215676, r10215672, r10215675, MPFR_RNDN);
        ;
        mpfr_mul(r10215678, r10215674, r10215646, MPFR_RNDN);
        mpfr_mul(r10215679, r10215677, r10215678, MPFR_RNDN);
        mpfr_add(r10215680, r10215676, r10215679, MPFR_RNDN);
        return mpfr_get_d(r10215680, MPFR_RNDN);
}

static mpfr_t r10215681, r10215682, r10215683, r10215684, r10215685, r10215686, r10215687, r10215688, r10215689, r10215690, r10215691, r10215692, r10215693, r10215694, r10215695, r10215696, r10215697, r10215698, r10215699, r10215700, r10215701, r10215702, r10215703, r10215704, r10215705, r10215706, r10215707, r10215708, r10215709, r10215710, r10215711, r10215712, r10215713, r10215714, r10215715, r10215716, r10215717, r10215718;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10215681);
        mpfr_init(r10215682);
        mpfr_init(r10215683);
        mpfr_init(r10215684);
        mpfr_init_set_str(r10215685, "0.000223", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215686, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10215687);
        mpfr_init(r10215688);
        mpfr_init(r10215689);
        mpfr_init_set_str(r10215690, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10215691);
        mpfr_init(r10215692);
        mpfr_init(r10215693);
        mpfr_init_set_str(r10215694, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10215695);
        mpfr_init(r10215696);
        mpfr_init(r10215697);
        mpfr_init_set_str(r10215698, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10215699);
        mpfr_init_set_str(r10215700, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10215701);
        mpfr_init(r10215702);
        mpfr_init_set_str(r10215703, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215704, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10215705);
        mpfr_init(r10215706);
        mpfr_init(r10215707);
        mpfr_init(r10215708);
        mpfr_init(r10215709);
        mpfr_init(r10215710);
        mpfr_init_set_str(r10215711, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10215712);
        mpfr_init_set_str(r10215713, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10215714);
        mpfr_init(r10215715);
        mpfr_init(r10215716);
        mpfr_init(r10215717);
        mpfr_init(r10215718);
}

double f_fm(double x) {
        mpfr_set_d(r10215681, x, MPFR_RNDN);
        mpfr_mul(r10215682, r10215681, r10215681, MPFR_RNDN);
        mpfr_mul(r10215683, r10215682, r10215682, MPFR_RNDN);
        mpfr_mul(r10215684, r10215683, r10215683, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215687, r10215686, r10215681, MPFR_RNDN);
        mpfr_add(r10215688, r10215685, r10215687, MPFR_RNDN);
        mpfr_mul(r10215689, r10215684, r10215688, MPFR_RNDN);
        ;
        mpfr_mul(r10215691, r10215682, r10215690, MPFR_RNDN);
        mpfr_mul(r10215692, r10215683, r10215691, MPFR_RNDN);
        mpfr_add(r10215693, r10215689, r10215692, MPFR_RNDN);
        ;
        mpfr_mul(r10215695, r10215694, r10215681, MPFR_RNDN);
        mpfr_mul(r10215696, r10215695, r10215682, MPFR_RNDN);
        mpfr_mul(r10215697, r10215696, r10215683, MPFR_RNDN);
        ;
        mpfr_mul(r10215699, r10215681, r10215698, MPFR_RNDN);
        ;
        mpfr_add(r10215701, r10215699, r10215700, MPFR_RNDN);
        mpfr_add(r10215702, r10215697, r10215701, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215705, r10215681, r10215704, MPFR_RNDN);
        mpfr_add(r10215706, r10215703, r10215705, MPFR_RNDN);
        mpfr_mul(r10215707, r10215682, r10215706, MPFR_RNDN);
        mpfr_log(r10215708, r10215682, MPFR_RNDN);
        mpfr_add(r10215709, r10215708, r10215708, MPFR_RNDN);
        mpfr_exp(r10215710, r10215709, MPFR_RNDN);
        ;
        mpfr_mul(r10215712, r10215681, r10215711, MPFR_RNDN);
        ;
        mpfr_add(r10215714, r10215712, r10215713, MPFR_RNDN);
        mpfr_mul(r10215715, r10215710, r10215714, MPFR_RNDN);
        mpfr_add(r10215716, r10215707, r10215715, MPFR_RNDN);
        mpfr_add(r10215717, r10215702, r10215716, MPFR_RNDN);
        mpfr_add(r10215718, r10215693, r10215717, MPFR_RNDN);
        return mpfr_get_d(r10215718, MPFR_RNDN);
}

static mpfr_t r10215719, r10215720, r10215721, r10215722, r10215723, r10215724, r10215725, r10215726, r10215727, r10215728, r10215729, r10215730, r10215731, r10215732, r10215733, r10215734, r10215735, r10215736, r10215737, r10215738, r10215739, r10215740, r10215741, r10215742, r10215743, r10215744, r10215745, r10215746, r10215747, r10215748, r10215749, r10215750, r10215751, r10215752, r10215753, r10215754, r10215755, r10215756;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10215719);
        mpfr_init(r10215720);
        mpfr_init(r10215721);
        mpfr_init(r10215722);
        mpfr_init_set_str(r10215723, "0.000223", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215724, "-3e-06", 10, MPFR_RNDN);
        mpfr_init(r10215725);
        mpfr_init(r10215726);
        mpfr_init(r10215727);
        mpfr_init_set_str(r10215728, "0.116667", 10, MPFR_RNDN);
        mpfr_init(r10215729);
        mpfr_init(r10215730);
        mpfr_init(r10215731);
        mpfr_init_set_str(r10215732, "-0.007143", 10, MPFR_RNDN);
        mpfr_init(r10215733);
        mpfr_init(r10215734);
        mpfr_init(r10215735);
        mpfr_init_set_str(r10215736, "-9.0", 10, MPFR_RNDN);
        mpfr_init(r10215737);
        mpfr_init_set_str(r10215738, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10215739);
        mpfr_init(r10215740);
        mpfr_init_set_str(r10215741, "18.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10215742, "-14.0", 10, MPFR_RNDN);
        mpfr_init(r10215743);
        mpfr_init(r10215744);
        mpfr_init(r10215745);
        mpfr_init(r10215746);
        mpfr_init(r10215747);
        mpfr_init(r10215748);
        mpfr_init_set_str(r10215749, "-1.05", 10, MPFR_RNDN);
        mpfr_init(r10215750);
        mpfr_init_set_str(r10215751, "5.25", 10, MPFR_RNDN);
        mpfr_init(r10215752);
        mpfr_init(r10215753);
        mpfr_init(r10215754);
        mpfr_init(r10215755);
        mpfr_init(r10215756);
}

double f_dm(double x) {
        mpfr_set_d(r10215719, x, MPFR_RNDN);
        mpfr_mul(r10215720, r10215719, r10215719, MPFR_RNDN);
        mpfr_mul(r10215721, r10215720, r10215720, MPFR_RNDN);
        mpfr_mul(r10215722, r10215721, r10215721, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215725, r10215724, r10215719, MPFR_RNDN);
        mpfr_add(r10215726, r10215723, r10215725, MPFR_RNDN);
        mpfr_mul(r10215727, r10215722, r10215726, MPFR_RNDN);
        ;
        mpfr_mul(r10215729, r10215720, r10215728, MPFR_RNDN);
        mpfr_mul(r10215730, r10215721, r10215729, MPFR_RNDN);
        mpfr_add(r10215731, r10215727, r10215730, MPFR_RNDN);
        ;
        mpfr_mul(r10215733, r10215732, r10215719, MPFR_RNDN);
        mpfr_mul(r10215734, r10215733, r10215720, MPFR_RNDN);
        mpfr_mul(r10215735, r10215734, r10215721, MPFR_RNDN);
        ;
        mpfr_mul(r10215737, r10215719, r10215736, MPFR_RNDN);
        ;
        mpfr_add(r10215739, r10215737, r10215738, MPFR_RNDN);
        mpfr_add(r10215740, r10215735, r10215739, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10215743, r10215719, r10215742, MPFR_RNDN);
        mpfr_add(r10215744, r10215741, r10215743, MPFR_RNDN);
        mpfr_mul(r10215745, r10215720, r10215744, MPFR_RNDN);
        mpfr_log(r10215746, r10215720, MPFR_RNDN);
        mpfr_add(r10215747, r10215746, r10215746, MPFR_RNDN);
        mpfr_exp(r10215748, r10215747, MPFR_RNDN);
        ;
        mpfr_mul(r10215750, r10215719, r10215749, MPFR_RNDN);
        ;
        mpfr_add(r10215752, r10215750, r10215751, MPFR_RNDN);
        mpfr_mul(r10215753, r10215748, r10215752, MPFR_RNDN);
        mpfr_add(r10215754, r10215745, r10215753, MPFR_RNDN);
        mpfr_add(r10215755, r10215740, r10215754, MPFR_RNDN);
        mpfr_add(r10215756, r10215731, r10215755, MPFR_RNDN);
        return mpfr_get_d(r10215756, MPFR_RNDN);
}

