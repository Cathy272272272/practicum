#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r9962576 = -30240.0;
        float r9962577 = 302400.0;
        float r9962578 = x;
        float r9962579 = r9962578 * r9962578;
        float r9962580 = r9962577 * r9962579;
        float r9962581 = r9962576 + r9962580;
        float r9962582 = -403200.0;
        float r9962583 = r9962579 * r9962578;
        float r9962584 = r9962583 * r9962578;
        float r9962585 = r9962582 * r9962584;
        float r9962586 = r9962581 + r9962585;
        float r9962587 = 161280.0;
        float r9962588 = r9962584 * r9962578;
        float r9962589 = r9962588 * r9962578;
        float r9962590 = r9962587 * r9962589;
        float r9962591 = r9962586 + r9962590;
        float r9962592 = -23040.0;
        float r9962593 = r9962589 * r9962578;
        float r9962594 = r9962593 * r9962578;
        float r9962595 = r9962592 * r9962594;
        float r9962596 = r9962591 + r9962595;
        float r9962597 = 1024.0;
        float r9962598 = r9962594 * r9962578;
        float r9962599 = r9962598 * r9962578;
        float r9962600 = r9962597 * r9962599;
        float r9962601 = r9962596 + r9962600;
        return r9962601;
}

double f_id(double x) {
        double r9962602 = -30240.0;
        double r9962603 = 302400.0;
        double r9962604 = x;
        double r9962605 = r9962604 * r9962604;
        double r9962606 = r9962603 * r9962605;
        double r9962607 = r9962602 + r9962606;
        double r9962608 = -403200.0;
        double r9962609 = r9962605 * r9962604;
        double r9962610 = r9962609 * r9962604;
        double r9962611 = r9962608 * r9962610;
        double r9962612 = r9962607 + r9962611;
        double r9962613 = 161280.0;
        double r9962614 = r9962610 * r9962604;
        double r9962615 = r9962614 * r9962604;
        double r9962616 = r9962613 * r9962615;
        double r9962617 = r9962612 + r9962616;
        double r9962618 = -23040.0;
        double r9962619 = r9962615 * r9962604;
        double r9962620 = r9962619 * r9962604;
        double r9962621 = r9962618 * r9962620;
        double r9962622 = r9962617 + r9962621;
        double r9962623 = 1024.0;
        double r9962624 = r9962620 * r9962604;
        double r9962625 = r9962624 * r9962604;
        double r9962626 = r9962623 * r9962625;
        double r9962627 = r9962622 + r9962626;
        return r9962627;
}


double f_of(float x) {
        float r9962628 = -30240.0;
        float r9962629 = 302400.0;
        float r9962630 = x;
        float r9962631 = r9962630 * r9962630;
        float r9962632 = r9962629 * r9962631;
        float r9962633 = r9962628 + r9962632;
        float r9962634 = -403200.0;
        float r9962635 = r9962631 * r9962630;
        float r9962636 = r9962635 * r9962630;
        float r9962637 = r9962634 * r9962636;
        float r9962638 = r9962633 + r9962637;
        float r9962639 = 161280.0;
        float r9962640 = r9962636 * r9962630;
        float r9962641 = r9962640 * r9962630;
        float r9962642 = r9962639 * r9962641;
        float r9962643 = r9962638 + r9962642;
        float r9962644 = -23040.0;
        float r9962645 = r9962641 * r9962630;
        float r9962646 = r9962645 * r9962630;
        float r9962647 = r9962644 * r9962646;
        float r9962648 = r9962643 + r9962647;
        float r9962649 = 1024.0;
        float r9962650 = r9962646 * r9962630;
        float r9962651 = r9962650 * r9962630;
        float r9962652 = r9962649 * r9962651;
        float r9962653 = r9962648 + r9962652;
        return r9962653;
}

double f_od(double x) {
        double r9962654 = -30240.0;
        double r9962655 = 302400.0;
        double r9962656 = x;
        double r9962657 = r9962656 * r9962656;
        double r9962658 = r9962655 * r9962657;
        double r9962659 = r9962654 + r9962658;
        double r9962660 = -403200.0;
        double r9962661 = r9962657 * r9962656;
        double r9962662 = r9962661 * r9962656;
        double r9962663 = r9962660 * r9962662;
        double r9962664 = r9962659 + r9962663;
        double r9962665 = 161280.0;
        double r9962666 = r9962662 * r9962656;
        double r9962667 = r9962666 * r9962656;
        double r9962668 = r9962665 * r9962667;
        double r9962669 = r9962664 + r9962668;
        double r9962670 = -23040.0;
        double r9962671 = r9962667 * r9962656;
        double r9962672 = r9962671 * r9962656;
        double r9962673 = r9962670 * r9962672;
        double r9962674 = r9962669 + r9962673;
        double r9962675 = 1024.0;
        double r9962676 = r9962672 * r9962656;
        double r9962677 = r9962676 * r9962656;
        double r9962678 = r9962675 * r9962677;
        double r9962679 = r9962674 + r9962678;
        return r9962679;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9962680, r9962681, r9962682, r9962683, r9962684, r9962685, r9962686, r9962687, r9962688, r9962689, r9962690, r9962691, r9962692, r9962693, r9962694, r9962695, r9962696, r9962697, r9962698, r9962699, r9962700, r9962701, r9962702, r9962703, r9962704, r9962705;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9962680, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962681, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9962682);
        mpfr_init(r9962683);
        mpfr_init(r9962684);
        mpfr_init(r9962685);
        mpfr_init_set_str(r9962686, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9962687);
        mpfr_init(r9962688);
        mpfr_init(r9962689);
        mpfr_init(r9962690);
        mpfr_init_set_str(r9962691, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9962692);
        mpfr_init(r9962693);
        mpfr_init(r9962694);
        mpfr_init(r9962695);
        mpfr_init_set_str(r9962696, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9962697);
        mpfr_init(r9962698);
        mpfr_init(r9962699);
        mpfr_init(r9962700);
        mpfr_init_set_str(r9962701, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9962702);
        mpfr_init(r9962703);
        mpfr_init(r9962704);
        mpfr_init(r9962705);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9962682, x, MPFR_RNDN);
        mpfr_mul(r9962683, r9962682, r9962682, MPFR_RNDN);
        mpfr_mul(r9962684, r9962681, r9962683, MPFR_RNDN);
        mpfr_add(r9962685, r9962680, r9962684, MPFR_RNDN);
        ;
        mpfr_mul(r9962687, r9962683, r9962682, MPFR_RNDN);
        mpfr_mul(r9962688, r9962687, r9962682, MPFR_RNDN);
        mpfr_mul(r9962689, r9962686, r9962688, MPFR_RNDN);
        mpfr_add(r9962690, r9962685, r9962689, MPFR_RNDN);
        ;
        mpfr_mul(r9962692, r9962688, r9962682, MPFR_RNDN);
        mpfr_mul(r9962693, r9962692, r9962682, MPFR_RNDN);
        mpfr_mul(r9962694, r9962691, r9962693, MPFR_RNDN);
        mpfr_add(r9962695, r9962690, r9962694, MPFR_RNDN);
        ;
        mpfr_mul(r9962697, r9962693, r9962682, MPFR_RNDN);
        mpfr_mul(r9962698, r9962697, r9962682, MPFR_RNDN);
        mpfr_mul(r9962699, r9962696, r9962698, MPFR_RNDN);
        mpfr_add(r9962700, r9962695, r9962699, MPFR_RNDN);
        ;
        mpfr_mul(r9962702, r9962698, r9962682, MPFR_RNDN);
        mpfr_mul(r9962703, r9962702, r9962682, MPFR_RNDN);
        mpfr_mul(r9962704, r9962701, r9962703, MPFR_RNDN);
        mpfr_add(r9962705, r9962700, r9962704, MPFR_RNDN);
        return mpfr_get_d(r9962705, MPFR_RNDN);
}

static mpfr_t r9962706, r9962707, r9962708, r9962709, r9962710, r9962711, r9962712, r9962713, r9962714, r9962715, r9962716, r9962717, r9962718, r9962719, r9962720, r9962721, r9962722, r9962723, r9962724, r9962725, r9962726, r9962727, r9962728, r9962729, r9962730, r9962731;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9962706, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962707, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9962708);
        mpfr_init(r9962709);
        mpfr_init(r9962710);
        mpfr_init(r9962711);
        mpfr_init_set_str(r9962712, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9962713);
        mpfr_init(r9962714);
        mpfr_init(r9962715);
        mpfr_init(r9962716);
        mpfr_init_set_str(r9962717, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9962718);
        mpfr_init(r9962719);
        mpfr_init(r9962720);
        mpfr_init(r9962721);
        mpfr_init_set_str(r9962722, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9962723);
        mpfr_init(r9962724);
        mpfr_init(r9962725);
        mpfr_init(r9962726);
        mpfr_init_set_str(r9962727, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9962728);
        mpfr_init(r9962729);
        mpfr_init(r9962730);
        mpfr_init(r9962731);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r9962708, x, MPFR_RNDN);
        mpfr_mul(r9962709, r9962708, r9962708, MPFR_RNDN);
        mpfr_mul(r9962710, r9962707, r9962709, MPFR_RNDN);
        mpfr_add(r9962711, r9962706, r9962710, MPFR_RNDN);
        ;
        mpfr_mul(r9962713, r9962709, r9962708, MPFR_RNDN);
        mpfr_mul(r9962714, r9962713, r9962708, MPFR_RNDN);
        mpfr_mul(r9962715, r9962712, r9962714, MPFR_RNDN);
        mpfr_add(r9962716, r9962711, r9962715, MPFR_RNDN);
        ;
        mpfr_mul(r9962718, r9962714, r9962708, MPFR_RNDN);
        mpfr_mul(r9962719, r9962718, r9962708, MPFR_RNDN);
        mpfr_mul(r9962720, r9962717, r9962719, MPFR_RNDN);
        mpfr_add(r9962721, r9962716, r9962720, MPFR_RNDN);
        ;
        mpfr_mul(r9962723, r9962719, r9962708, MPFR_RNDN);
        mpfr_mul(r9962724, r9962723, r9962708, MPFR_RNDN);
        mpfr_mul(r9962725, r9962722, r9962724, MPFR_RNDN);
        mpfr_add(r9962726, r9962721, r9962725, MPFR_RNDN);
        ;
        mpfr_mul(r9962728, r9962724, r9962708, MPFR_RNDN);
        mpfr_mul(r9962729, r9962728, r9962708, MPFR_RNDN);
        mpfr_mul(r9962730, r9962727, r9962729, MPFR_RNDN);
        mpfr_add(r9962731, r9962726, r9962730, MPFR_RNDN);
        return mpfr_get_d(r9962731, MPFR_RNDN);
}

static mpfr_t r9962732, r9962733, r9962734, r9962735, r9962736, r9962737, r9962738, r9962739, r9962740, r9962741, r9962742, r9962743, r9962744, r9962745, r9962746, r9962747, r9962748, r9962749, r9962750, r9962751, r9962752, r9962753, r9962754, r9962755, r9962756, r9962757;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9962732, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9962733, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9962734);
        mpfr_init(r9962735);
        mpfr_init(r9962736);
        mpfr_init(r9962737);
        mpfr_init_set_str(r9962738, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9962739);
        mpfr_init(r9962740);
        mpfr_init(r9962741);
        mpfr_init(r9962742);
        mpfr_init_set_str(r9962743, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9962744);
        mpfr_init(r9962745);
        mpfr_init(r9962746);
        mpfr_init(r9962747);
        mpfr_init_set_str(r9962748, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9962749);
        mpfr_init(r9962750);
        mpfr_init(r9962751);
        mpfr_init(r9962752);
        mpfr_init_set_str(r9962753, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9962754);
        mpfr_init(r9962755);
        mpfr_init(r9962756);
        mpfr_init(r9962757);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r9962734, x, MPFR_RNDN);
        mpfr_mul(r9962735, r9962734, r9962734, MPFR_RNDN);
        mpfr_mul(r9962736, r9962733, r9962735, MPFR_RNDN);
        mpfr_add(r9962737, r9962732, r9962736, MPFR_RNDN);
        ;
        mpfr_mul(r9962739, r9962735, r9962734, MPFR_RNDN);
        mpfr_mul(r9962740, r9962739, r9962734, MPFR_RNDN);
        mpfr_mul(r9962741, r9962738, r9962740, MPFR_RNDN);
        mpfr_add(r9962742, r9962737, r9962741, MPFR_RNDN);
        ;
        mpfr_mul(r9962744, r9962740, r9962734, MPFR_RNDN);
        mpfr_mul(r9962745, r9962744, r9962734, MPFR_RNDN);
        mpfr_mul(r9962746, r9962743, r9962745, MPFR_RNDN);
        mpfr_add(r9962747, r9962742, r9962746, MPFR_RNDN);
        ;
        mpfr_mul(r9962749, r9962745, r9962734, MPFR_RNDN);
        mpfr_mul(r9962750, r9962749, r9962734, MPFR_RNDN);
        mpfr_mul(r9962751, r9962748, r9962750, MPFR_RNDN);
        mpfr_add(r9962752, r9962747, r9962751, MPFR_RNDN);
        ;
        mpfr_mul(r9962754, r9962750, r9962734, MPFR_RNDN);
        mpfr_mul(r9962755, r9962754, r9962734, MPFR_RNDN);
        mpfr_mul(r9962756, r9962753, r9962755, MPFR_RNDN);
        mpfr_add(r9962757, r9962752, r9962756, MPFR_RNDN);
        return mpfr_get_d(r9962757, MPFR_RNDN);
}

