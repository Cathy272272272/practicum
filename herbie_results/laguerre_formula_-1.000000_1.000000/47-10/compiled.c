#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r20880530 = 1.0;
        float r20880531 = -10.0;
        float r20880532 = x;
        float r20880533 = r20880531 * r20880532;
        float r20880534 = r20880530 + r20880533;
        float r20880535 = 22.5;
        float r20880536 = r20880532 * r20880532;
        float r20880537 = r20880535 * r20880536;
        float r20880538 = r20880534 + r20880537;
        float r20880539 = -20.0;
        float r20880540 = r20880536 * r20880532;
        float r20880541 = r20880539 * r20880540;
        float r20880542 = r20880538 + r20880541;
        float r20880543 = 8.75;
        float r20880544 = r20880540 * r20880532;
        float r20880545 = r20880543 * r20880544;
        float r20880546 = r20880542 + r20880545;
        float r20880547 = -2.1;
        float r20880548 = r20880544 * r20880532;
        float r20880549 = r20880547 * r20880548;
        float r20880550 = r20880546 + r20880549;
        float r20880551 = 0.291667;
        float r20880552 = r20880548 * r20880532;
        float r20880553 = r20880551 * r20880552;
        float r20880554 = r20880550 + r20880553;
        float r20880555 = -0.02381;
        float r20880556 = r20880552 * r20880532;
        float r20880557 = r20880555 * r20880556;
        float r20880558 = r20880554 + r20880557;
        float r20880559 = 0.001116;
        float r20880560 = r20880556 * r20880532;
        float r20880561 = r20880559 * r20880560;
        float r20880562 = r20880558 + r20880561;
        float r20880563 = -2.8e-05;
        float r20880564 = r20880560 * r20880532;
        float r20880565 = r20880563 * r20880564;
        float r20880566 = r20880562 + r20880565;
        return r20880566;
}

double f_id(double x) {
        double r20880567 = 1.0;
        double r20880568 = -10.0;
        double r20880569 = x;
        double r20880570 = r20880568 * r20880569;
        double r20880571 = r20880567 + r20880570;
        double r20880572 = 22.5;
        double r20880573 = r20880569 * r20880569;
        double r20880574 = r20880572 * r20880573;
        double r20880575 = r20880571 + r20880574;
        double r20880576 = -20.0;
        double r20880577 = r20880573 * r20880569;
        double r20880578 = r20880576 * r20880577;
        double r20880579 = r20880575 + r20880578;
        double r20880580 = 8.75;
        double r20880581 = r20880577 * r20880569;
        double r20880582 = r20880580 * r20880581;
        double r20880583 = r20880579 + r20880582;
        double r20880584 = -2.1;
        double r20880585 = r20880581 * r20880569;
        double r20880586 = r20880584 * r20880585;
        double r20880587 = r20880583 + r20880586;
        double r20880588 = 0.291667;
        double r20880589 = r20880585 * r20880569;
        double r20880590 = r20880588 * r20880589;
        double r20880591 = r20880587 + r20880590;
        double r20880592 = -0.02381;
        double r20880593 = r20880589 * r20880569;
        double r20880594 = r20880592 * r20880593;
        double r20880595 = r20880591 + r20880594;
        double r20880596 = 0.001116;
        double r20880597 = r20880593 * r20880569;
        double r20880598 = r20880596 * r20880597;
        double r20880599 = r20880595 + r20880598;
        double r20880600 = -2.8e-05;
        double r20880601 = r20880597 * r20880569;
        double r20880602 = r20880600 * r20880601;
        double r20880603 = r20880599 + r20880602;
        return r20880603;
}


double f_of(float x) {
        float r20880604 = 1.0;
        float r20880605 = -10.0;
        float r20880606 = x;
        float r20880607 = r20880605 * r20880606;
        float r20880608 = r20880604 + r20880607;
        float r20880609 = 22.5;
        float r20880610 = r20880606 * r20880606;
        float r20880611 = r20880609 * r20880610;
        float r20880612 = r20880608 + r20880611;
        float r20880613 = -20.0;
        float r20880614 = r20880610 * r20880606;
        float r20880615 = r20880613 * r20880614;
        float r20880616 = r20880612 + r20880615;
        float r20880617 = 8.75;
        float r20880618 = r20880614 * r20880606;
        float r20880619 = r20880617 * r20880618;
        float r20880620 = r20880616 + r20880619;
        float r20880621 = -2.1;
        float r20880622 = r20880618 * r20880606;
        float r20880623 = r20880621 * r20880622;
        float r20880624 = r20880620 + r20880623;
        float r20880625 = 0.291667;
        float r20880626 = r20880622 * r20880606;
        float r20880627 = r20880625 * r20880626;
        float r20880628 = r20880624 + r20880627;
        float r20880629 = -0.02381;
        float r20880630 = r20880626 * r20880606;
        float r20880631 = r20880629 * r20880630;
        float r20880632 = r20880628 + r20880631;
        float r20880633 = 0.001116;
        float r20880634 = r20880630 * r20880606;
        float r20880635 = r20880633 * r20880634;
        float r20880636 = r20880632 + r20880635;
        float r20880637 = -2.8e-05;
        float r20880638 = r20880634 * r20880606;
        float r20880639 = r20880637 * r20880638;
        float r20880640 = r20880636 + r20880639;
        return r20880640;
}

double f_od(double x) {
        double r20880641 = 1.0;
        double r20880642 = -10.0;
        double r20880643 = x;
        double r20880644 = r20880642 * r20880643;
        double r20880645 = r20880641 + r20880644;
        double r20880646 = 22.5;
        double r20880647 = r20880643 * r20880643;
        double r20880648 = r20880646 * r20880647;
        double r20880649 = r20880645 + r20880648;
        double r20880650 = -20.0;
        double r20880651 = r20880647 * r20880643;
        double r20880652 = r20880650 * r20880651;
        double r20880653 = r20880649 + r20880652;
        double r20880654 = 8.75;
        double r20880655 = r20880651 * r20880643;
        double r20880656 = r20880654 * r20880655;
        double r20880657 = r20880653 + r20880656;
        double r20880658 = -2.1;
        double r20880659 = r20880655 * r20880643;
        double r20880660 = r20880658 * r20880659;
        double r20880661 = r20880657 + r20880660;
        double r20880662 = 0.291667;
        double r20880663 = r20880659 * r20880643;
        double r20880664 = r20880662 * r20880663;
        double r20880665 = r20880661 + r20880664;
        double r20880666 = -0.02381;
        double r20880667 = r20880663 * r20880643;
        double r20880668 = r20880666 * r20880667;
        double r20880669 = r20880665 + r20880668;
        double r20880670 = 0.001116;
        double r20880671 = r20880667 * r20880643;
        double r20880672 = r20880670 * r20880671;
        double r20880673 = r20880669 + r20880672;
        double r20880674 = -2.8e-05;
        double r20880675 = r20880671 * r20880643;
        double r20880676 = r20880674 * r20880675;
        double r20880677 = r20880673 + r20880676;
        return r20880677;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r20880678, r20880679, r20880680, r20880681, r20880682, r20880683, r20880684, r20880685, r20880686, r20880687, r20880688, r20880689, r20880690, r20880691, r20880692, r20880693, r20880694, r20880695, r20880696, r20880697, r20880698, r20880699, r20880700, r20880701, r20880702, r20880703, r20880704, r20880705, r20880706, r20880707, r20880708, r20880709, r20880710, r20880711, r20880712, r20880713, r20880714;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880678, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880679, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r20880680);
        mpfr_init(r20880681);
        mpfr_init(r20880682);
        mpfr_init_set_str(r20880683, "22.5", 10, MPFR_RNDN);
        mpfr_init(r20880684);
        mpfr_init(r20880685);
        mpfr_init(r20880686);
        mpfr_init_set_str(r20880687, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r20880688);
        mpfr_init(r20880689);
        mpfr_init(r20880690);
        mpfr_init_set_str(r20880691, "8.75", 10, MPFR_RNDN);
        mpfr_init(r20880692);
        mpfr_init(r20880693);
        mpfr_init(r20880694);
        mpfr_init_set_str(r20880695, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r20880696);
        mpfr_init(r20880697);
        mpfr_init(r20880698);
        mpfr_init_set_str(r20880699, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r20880700);
        mpfr_init(r20880701);
        mpfr_init(r20880702);
        mpfr_init_set_str(r20880703, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r20880704);
        mpfr_init(r20880705);
        mpfr_init(r20880706);
        mpfr_init_set_str(r20880707, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r20880708);
        mpfr_init(r20880709);
        mpfr_init(r20880710);
        mpfr_init_set_str(r20880711, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r20880712);
        mpfr_init(r20880713);
        mpfr_init(r20880714);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r20880680, x, MPFR_RNDN);
        mpfr_mul(r20880681, r20880679, r20880680, MPFR_RNDN);
        mpfr_add(r20880682, r20880678, r20880681, MPFR_RNDN);
        ;
        mpfr_mul(r20880684, r20880680, r20880680, MPFR_RNDN);
        mpfr_mul(r20880685, r20880683, r20880684, MPFR_RNDN);
        mpfr_add(r20880686, r20880682, r20880685, MPFR_RNDN);
        ;
        mpfr_mul(r20880688, r20880684, r20880680, MPFR_RNDN);
        mpfr_mul(r20880689, r20880687, r20880688, MPFR_RNDN);
        mpfr_add(r20880690, r20880686, r20880689, MPFR_RNDN);
        ;
        mpfr_mul(r20880692, r20880688, r20880680, MPFR_RNDN);
        mpfr_mul(r20880693, r20880691, r20880692, MPFR_RNDN);
        mpfr_add(r20880694, r20880690, r20880693, MPFR_RNDN);
        ;
        mpfr_mul(r20880696, r20880692, r20880680, MPFR_RNDN);
        mpfr_mul(r20880697, r20880695, r20880696, MPFR_RNDN);
        mpfr_add(r20880698, r20880694, r20880697, MPFR_RNDN);
        ;
        mpfr_mul(r20880700, r20880696, r20880680, MPFR_RNDN);
        mpfr_mul(r20880701, r20880699, r20880700, MPFR_RNDN);
        mpfr_add(r20880702, r20880698, r20880701, MPFR_RNDN);
        ;
        mpfr_mul(r20880704, r20880700, r20880680, MPFR_RNDN);
        mpfr_mul(r20880705, r20880703, r20880704, MPFR_RNDN);
        mpfr_add(r20880706, r20880702, r20880705, MPFR_RNDN);
        ;
        mpfr_mul(r20880708, r20880704, r20880680, MPFR_RNDN);
        mpfr_mul(r20880709, r20880707, r20880708, MPFR_RNDN);
        mpfr_add(r20880710, r20880706, r20880709, MPFR_RNDN);
        ;
        mpfr_mul(r20880712, r20880708, r20880680, MPFR_RNDN);
        mpfr_mul(r20880713, r20880711, r20880712, MPFR_RNDN);
        mpfr_add(r20880714, r20880710, r20880713, MPFR_RNDN);
        return mpfr_get_d(r20880714, MPFR_RNDN);
}

static mpfr_t r20880715, r20880716, r20880717, r20880718, r20880719, r20880720, r20880721, r20880722, r20880723, r20880724, r20880725, r20880726, r20880727, r20880728, r20880729, r20880730, r20880731, r20880732, r20880733, r20880734, r20880735, r20880736, r20880737, r20880738, r20880739, r20880740, r20880741, r20880742, r20880743, r20880744, r20880745, r20880746, r20880747, r20880748, r20880749, r20880750, r20880751;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880715, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880716, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r20880717);
        mpfr_init(r20880718);
        mpfr_init(r20880719);
        mpfr_init_set_str(r20880720, "22.5", 10, MPFR_RNDN);
        mpfr_init(r20880721);
        mpfr_init(r20880722);
        mpfr_init(r20880723);
        mpfr_init_set_str(r20880724, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r20880725);
        mpfr_init(r20880726);
        mpfr_init(r20880727);
        mpfr_init_set_str(r20880728, "8.75", 10, MPFR_RNDN);
        mpfr_init(r20880729);
        mpfr_init(r20880730);
        mpfr_init(r20880731);
        mpfr_init_set_str(r20880732, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r20880733);
        mpfr_init(r20880734);
        mpfr_init(r20880735);
        mpfr_init_set_str(r20880736, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r20880737);
        mpfr_init(r20880738);
        mpfr_init(r20880739);
        mpfr_init_set_str(r20880740, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r20880741);
        mpfr_init(r20880742);
        mpfr_init(r20880743);
        mpfr_init_set_str(r20880744, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r20880745);
        mpfr_init(r20880746);
        mpfr_init(r20880747);
        mpfr_init_set_str(r20880748, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r20880749);
        mpfr_init(r20880750);
        mpfr_init(r20880751);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r20880717, x, MPFR_RNDN);
        mpfr_mul(r20880718, r20880716, r20880717, MPFR_RNDN);
        mpfr_add(r20880719, r20880715, r20880718, MPFR_RNDN);
        ;
        mpfr_mul(r20880721, r20880717, r20880717, MPFR_RNDN);
        mpfr_mul(r20880722, r20880720, r20880721, MPFR_RNDN);
        mpfr_add(r20880723, r20880719, r20880722, MPFR_RNDN);
        ;
        mpfr_mul(r20880725, r20880721, r20880717, MPFR_RNDN);
        mpfr_mul(r20880726, r20880724, r20880725, MPFR_RNDN);
        mpfr_add(r20880727, r20880723, r20880726, MPFR_RNDN);
        ;
        mpfr_mul(r20880729, r20880725, r20880717, MPFR_RNDN);
        mpfr_mul(r20880730, r20880728, r20880729, MPFR_RNDN);
        mpfr_add(r20880731, r20880727, r20880730, MPFR_RNDN);
        ;
        mpfr_mul(r20880733, r20880729, r20880717, MPFR_RNDN);
        mpfr_mul(r20880734, r20880732, r20880733, MPFR_RNDN);
        mpfr_add(r20880735, r20880731, r20880734, MPFR_RNDN);
        ;
        mpfr_mul(r20880737, r20880733, r20880717, MPFR_RNDN);
        mpfr_mul(r20880738, r20880736, r20880737, MPFR_RNDN);
        mpfr_add(r20880739, r20880735, r20880738, MPFR_RNDN);
        ;
        mpfr_mul(r20880741, r20880737, r20880717, MPFR_RNDN);
        mpfr_mul(r20880742, r20880740, r20880741, MPFR_RNDN);
        mpfr_add(r20880743, r20880739, r20880742, MPFR_RNDN);
        ;
        mpfr_mul(r20880745, r20880741, r20880717, MPFR_RNDN);
        mpfr_mul(r20880746, r20880744, r20880745, MPFR_RNDN);
        mpfr_add(r20880747, r20880743, r20880746, MPFR_RNDN);
        ;
        mpfr_mul(r20880749, r20880745, r20880717, MPFR_RNDN);
        mpfr_mul(r20880750, r20880748, r20880749, MPFR_RNDN);
        mpfr_add(r20880751, r20880747, r20880750, MPFR_RNDN);
        return mpfr_get_d(r20880751, MPFR_RNDN);
}

static mpfr_t r20880752, r20880753, r20880754, r20880755, r20880756, r20880757, r20880758, r20880759, r20880760, r20880761, r20880762, r20880763, r20880764, r20880765, r20880766, r20880767, r20880768, r20880769, r20880770, r20880771, r20880772, r20880773, r20880774, r20880775, r20880776, r20880777, r20880778, r20880779, r20880780, r20880781, r20880782, r20880783, r20880784, r20880785, r20880786, r20880787, r20880788;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(336);
        mpfr_init_set_str(r20880752, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r20880753, "-10.0", 10, MPFR_RNDN);
        mpfr_init(r20880754);
        mpfr_init(r20880755);
        mpfr_init(r20880756);
        mpfr_init_set_str(r20880757, "22.5", 10, MPFR_RNDN);
        mpfr_init(r20880758);
        mpfr_init(r20880759);
        mpfr_init(r20880760);
        mpfr_init_set_str(r20880761, "-20.0", 10, MPFR_RNDN);
        mpfr_init(r20880762);
        mpfr_init(r20880763);
        mpfr_init(r20880764);
        mpfr_init_set_str(r20880765, "8.75", 10, MPFR_RNDN);
        mpfr_init(r20880766);
        mpfr_init(r20880767);
        mpfr_init(r20880768);
        mpfr_init_set_str(r20880769, "-2.1", 10, MPFR_RNDN);
        mpfr_init(r20880770);
        mpfr_init(r20880771);
        mpfr_init(r20880772);
        mpfr_init_set_str(r20880773, "0.291667", 10, MPFR_RNDN);
        mpfr_init(r20880774);
        mpfr_init(r20880775);
        mpfr_init(r20880776);
        mpfr_init_set_str(r20880777, "-0.02381", 10, MPFR_RNDN);
        mpfr_init(r20880778);
        mpfr_init(r20880779);
        mpfr_init(r20880780);
        mpfr_init_set_str(r20880781, "0.001116", 10, MPFR_RNDN);
        mpfr_init(r20880782);
        mpfr_init(r20880783);
        mpfr_init(r20880784);
        mpfr_init_set_str(r20880785, "-2.8e-05", 10, MPFR_RNDN);
        mpfr_init(r20880786);
        mpfr_init(r20880787);
        mpfr_init(r20880788);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r20880754, x, MPFR_RNDN);
        mpfr_mul(r20880755, r20880753, r20880754, MPFR_RNDN);
        mpfr_add(r20880756, r20880752, r20880755, MPFR_RNDN);
        ;
        mpfr_mul(r20880758, r20880754, r20880754, MPFR_RNDN);
        mpfr_mul(r20880759, r20880757, r20880758, MPFR_RNDN);
        mpfr_add(r20880760, r20880756, r20880759, MPFR_RNDN);
        ;
        mpfr_mul(r20880762, r20880758, r20880754, MPFR_RNDN);
        mpfr_mul(r20880763, r20880761, r20880762, MPFR_RNDN);
        mpfr_add(r20880764, r20880760, r20880763, MPFR_RNDN);
        ;
        mpfr_mul(r20880766, r20880762, r20880754, MPFR_RNDN);
        mpfr_mul(r20880767, r20880765, r20880766, MPFR_RNDN);
        mpfr_add(r20880768, r20880764, r20880767, MPFR_RNDN);
        ;
        mpfr_mul(r20880770, r20880766, r20880754, MPFR_RNDN);
        mpfr_mul(r20880771, r20880769, r20880770, MPFR_RNDN);
        mpfr_add(r20880772, r20880768, r20880771, MPFR_RNDN);
        ;
        mpfr_mul(r20880774, r20880770, r20880754, MPFR_RNDN);
        mpfr_mul(r20880775, r20880773, r20880774, MPFR_RNDN);
        mpfr_add(r20880776, r20880772, r20880775, MPFR_RNDN);
        ;
        mpfr_mul(r20880778, r20880774, r20880754, MPFR_RNDN);
        mpfr_mul(r20880779, r20880777, r20880778, MPFR_RNDN);
        mpfr_add(r20880780, r20880776, r20880779, MPFR_RNDN);
        ;
        mpfr_mul(r20880782, r20880778, r20880754, MPFR_RNDN);
        mpfr_mul(r20880783, r20880781, r20880782, MPFR_RNDN);
        mpfr_add(r20880784, r20880780, r20880783, MPFR_RNDN);
        ;
        mpfr_mul(r20880786, r20880782, r20880754, MPFR_RNDN);
        mpfr_mul(r20880787, r20880785, r20880786, MPFR_RNDN);
        mpfr_add(r20880788, r20880784, r20880787, MPFR_RNDN);
        return mpfr_get_d(r20880788, MPFR_RNDN);
}

