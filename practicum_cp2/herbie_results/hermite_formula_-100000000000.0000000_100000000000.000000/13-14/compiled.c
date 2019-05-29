#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r11055543 = -17297280.0;
        float r11055544 = 242161920.0;
        float r11055545 = x;
        float r11055546 = r11055545 * r11055545;
        float r11055547 = r11055544 * r11055546;
        float r11055548 = r11055543 + r11055547;
        float r11055549 = -484323840.0;
        float r11055550 = r11055546 * r11055545;
        float r11055551 = r11055550 * r11055545;
        float r11055552 = r11055549 * r11055551;
        float r11055553 = r11055548 + r11055552;
        float r11055554 = 322882560.0;
        float r11055555 = r11055551 * r11055545;
        float r11055556 = r11055555 * r11055545;
        float r11055557 = r11055554 * r11055556;
        float r11055558 = r11055553 + r11055557;
        float r11055559 = -92252160.0;
        float r11055560 = r11055556 * r11055545;
        float r11055561 = r11055560 * r11055545;
        float r11055562 = r11055559 * r11055561;
        float r11055563 = r11055558 + r11055562;
        float r11055564 = 12300288.0;
        float r11055565 = r11055561 * r11055545;
        float r11055566 = r11055565 * r11055545;
        float r11055567 = r11055564 * r11055566;
        float r11055568 = r11055563 + r11055567;
        float r11055569 = -745472.0;
        float r11055570 = r11055566 * r11055545;
        float r11055571 = r11055570 * r11055545;
        float r11055572 = r11055569 * r11055571;
        float r11055573 = r11055568 + r11055572;
        float r11055574 = 16384.0;
        float r11055575 = r11055571 * r11055545;
        float r11055576 = r11055575 * r11055545;
        float r11055577 = r11055574 * r11055576;
        float r11055578 = r11055573 + r11055577;
        return r11055578;
}

double f_id(double x) {
        double r11055579 = -17297280.0;
        double r11055580 = 242161920.0;
        double r11055581 = x;
        double r11055582 = r11055581 * r11055581;
        double r11055583 = r11055580 * r11055582;
        double r11055584 = r11055579 + r11055583;
        double r11055585 = -484323840.0;
        double r11055586 = r11055582 * r11055581;
        double r11055587 = r11055586 * r11055581;
        double r11055588 = r11055585 * r11055587;
        double r11055589 = r11055584 + r11055588;
        double r11055590 = 322882560.0;
        double r11055591 = r11055587 * r11055581;
        double r11055592 = r11055591 * r11055581;
        double r11055593 = r11055590 * r11055592;
        double r11055594 = r11055589 + r11055593;
        double r11055595 = -92252160.0;
        double r11055596 = r11055592 * r11055581;
        double r11055597 = r11055596 * r11055581;
        double r11055598 = r11055595 * r11055597;
        double r11055599 = r11055594 + r11055598;
        double r11055600 = 12300288.0;
        double r11055601 = r11055597 * r11055581;
        double r11055602 = r11055601 * r11055581;
        double r11055603 = r11055600 * r11055602;
        double r11055604 = r11055599 + r11055603;
        double r11055605 = -745472.0;
        double r11055606 = r11055602 * r11055581;
        double r11055607 = r11055606 * r11055581;
        double r11055608 = r11055605 * r11055607;
        double r11055609 = r11055604 + r11055608;
        double r11055610 = 16384.0;
        double r11055611 = r11055607 * r11055581;
        double r11055612 = r11055611 * r11055581;
        double r11055613 = r11055610 * r11055612;
        double r11055614 = r11055609 + r11055613;
        return r11055614;
}


double f_of(float x) {
        float r11055615 = -17297280.0;
        float r11055616 = 242161920.0;
        float r11055617 = x;
        float r11055618 = r11055617 * r11055617;
        float r11055619 = r11055616 * r11055618;
        float r11055620 = r11055615 + r11055619;
        float r11055621 = 3;
        float r11055622 = 1;
        float r11055623 = r11055621 + r11055622;
        float r11055624 = pow(r11055618, r11055623);
        float r11055625 = -92252160.0;
        float r11055626 = 12300288.0;
        float r11055627 = r11055626 * r11055618;
        float r11055628 = r11055625 + r11055627;
        float r11055629 = r11055624 * r11055628;
        float r11055630 = r11055620 + r11055629;
        float r11055631 = -484323840.0;
        float r11055632 = 322882560.0;
        float r11055633 = r11055617 * r11055632;
        float r11055634 = r11055633 * r11055617;
        float r11055635 = r11055631 + r11055634;
        float r11055636 = r11055618 * r11055618;
        float r11055637 = r11055635 * r11055636;
        float r11055638 = pow(r11055617, r11055621);
        float r11055639 = r11055618 * r11055638;
        float r11055640 = r11055639 * r11055639;
        float r11055641 = 16384.0;
        float r11055642 = r11055641 * r11055617;
        float r11055643 = r11055642 * r11055638;
        float r11055644 = -745472.0;
        float r11055645 = r11055618 * r11055644;
        float r11055646 = r11055643 + r11055645;
        float r11055647 = r11055640 * r11055646;
        float r11055648 = r11055637 + r11055647;
        float r11055649 = r11055630 + r11055648;
        return r11055649;
}

double f_od(double x) {
        double r11055650 = -17297280.0;
        double r11055651 = 242161920.0;
        double r11055652 = x;
        double r11055653 = r11055652 * r11055652;
        double r11055654 = r11055651 * r11055653;
        double r11055655 = r11055650 + r11055654;
        double r11055656 = 3;
        double r11055657 = 1;
        double r11055658 = r11055656 + r11055657;
        double r11055659 = pow(r11055653, r11055658);
        double r11055660 = -92252160.0;
        double r11055661 = 12300288.0;
        double r11055662 = r11055661 * r11055653;
        double r11055663 = r11055660 + r11055662;
        double r11055664 = r11055659 * r11055663;
        double r11055665 = r11055655 + r11055664;
        double r11055666 = -484323840.0;
        double r11055667 = 322882560.0;
        double r11055668 = r11055652 * r11055667;
        double r11055669 = r11055668 * r11055652;
        double r11055670 = r11055666 + r11055669;
        double r11055671 = r11055653 * r11055653;
        double r11055672 = r11055670 * r11055671;
        double r11055673 = pow(r11055652, r11055656);
        double r11055674 = r11055653 * r11055673;
        double r11055675 = r11055674 * r11055674;
        double r11055676 = 16384.0;
        double r11055677 = r11055676 * r11055652;
        double r11055678 = r11055677 * r11055673;
        double r11055679 = -745472.0;
        double r11055680 = r11055653 * r11055679;
        double r11055681 = r11055678 + r11055680;
        double r11055682 = r11055675 * r11055681;
        double r11055683 = r11055672 + r11055682;
        double r11055684 = r11055665 + r11055683;
        return r11055684;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r11055685, r11055686, r11055687, r11055688, r11055689, r11055690, r11055691, r11055692, r11055693, r11055694, r11055695, r11055696, r11055697, r11055698, r11055699, r11055700, r11055701, r11055702, r11055703, r11055704, r11055705, r11055706, r11055707, r11055708, r11055709, r11055710, r11055711, r11055712, r11055713, r11055714, r11055715, r11055716, r11055717, r11055718, r11055719, r11055720;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055685, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055686, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r11055687);
        mpfr_init(r11055688);
        mpfr_init(r11055689);
        mpfr_init(r11055690);
        mpfr_init_set_str(r11055691, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r11055692);
        mpfr_init(r11055693);
        mpfr_init(r11055694);
        mpfr_init(r11055695);
        mpfr_init_set_str(r11055696, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r11055697);
        mpfr_init(r11055698);
        mpfr_init(r11055699);
        mpfr_init(r11055700);
        mpfr_init_set_str(r11055701, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r11055702);
        mpfr_init(r11055703);
        mpfr_init(r11055704);
        mpfr_init(r11055705);
        mpfr_init_set_str(r11055706, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r11055707);
        mpfr_init(r11055708);
        mpfr_init(r11055709);
        mpfr_init(r11055710);
        mpfr_init_set_str(r11055711, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r11055712);
        mpfr_init(r11055713);
        mpfr_init(r11055714);
        mpfr_init(r11055715);
        mpfr_init_set_str(r11055716, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r11055717);
        mpfr_init(r11055718);
        mpfr_init(r11055719);
        mpfr_init(r11055720);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r11055687, x, MPFR_RNDN);
        mpfr_mul(r11055688, r11055687, r11055687, MPFR_RNDN);
        mpfr_mul(r11055689, r11055686, r11055688, MPFR_RNDN);
        mpfr_add(r11055690, r11055685, r11055689, MPFR_RNDN);
        ;
        mpfr_mul(r11055692, r11055688, r11055687, MPFR_RNDN);
        mpfr_mul(r11055693, r11055692, r11055687, MPFR_RNDN);
        mpfr_mul(r11055694, r11055691, r11055693, MPFR_RNDN);
        mpfr_add(r11055695, r11055690, r11055694, MPFR_RNDN);
        ;
        mpfr_mul(r11055697, r11055693, r11055687, MPFR_RNDN);
        mpfr_mul(r11055698, r11055697, r11055687, MPFR_RNDN);
        mpfr_mul(r11055699, r11055696, r11055698, MPFR_RNDN);
        mpfr_add(r11055700, r11055695, r11055699, MPFR_RNDN);
        ;
        mpfr_mul(r11055702, r11055698, r11055687, MPFR_RNDN);
        mpfr_mul(r11055703, r11055702, r11055687, MPFR_RNDN);
        mpfr_mul(r11055704, r11055701, r11055703, MPFR_RNDN);
        mpfr_add(r11055705, r11055700, r11055704, MPFR_RNDN);
        ;
        mpfr_mul(r11055707, r11055703, r11055687, MPFR_RNDN);
        mpfr_mul(r11055708, r11055707, r11055687, MPFR_RNDN);
        mpfr_mul(r11055709, r11055706, r11055708, MPFR_RNDN);
        mpfr_add(r11055710, r11055705, r11055709, MPFR_RNDN);
        ;
        mpfr_mul(r11055712, r11055708, r11055687, MPFR_RNDN);
        mpfr_mul(r11055713, r11055712, r11055687, MPFR_RNDN);
        mpfr_mul(r11055714, r11055711, r11055713, MPFR_RNDN);
        mpfr_add(r11055715, r11055710, r11055714, MPFR_RNDN);
        ;
        mpfr_mul(r11055717, r11055713, r11055687, MPFR_RNDN);
        mpfr_mul(r11055718, r11055717, r11055687, MPFR_RNDN);
        mpfr_mul(r11055719, r11055716, r11055718, MPFR_RNDN);
        mpfr_add(r11055720, r11055715, r11055719, MPFR_RNDN);
        return mpfr_get_d(r11055720, MPFR_RNDN);
}

static mpfr_t r11055721, r11055722, r11055723, r11055724, r11055725, r11055726, r11055727, r11055728, r11055729, r11055730, r11055731, r11055732, r11055733, r11055734, r11055735, r11055736, r11055737, r11055738, r11055739, r11055740, r11055741, r11055742, r11055743, r11055744, r11055745, r11055746, r11055747, r11055748, r11055749, r11055750, r11055751, r11055752, r11055753, r11055754, r11055755;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055721, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055722, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r11055723);
        mpfr_init(r11055724);
        mpfr_init(r11055725);
        mpfr_init(r11055726);
        mpfr_init_set_str(r11055727, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055728, "1", 10, MPFR_RNDN);
        mpfr_init(r11055729);
        mpfr_init(r11055730);
        mpfr_init_set_str(r11055731, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055732, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r11055733);
        mpfr_init(r11055734);
        mpfr_init(r11055735);
        mpfr_init(r11055736);
        mpfr_init_set_str(r11055737, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055738, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r11055739);
        mpfr_init(r11055740);
        mpfr_init(r11055741);
        mpfr_init(r11055742);
        mpfr_init(r11055743);
        mpfr_init(r11055744);
        mpfr_init(r11055745);
        mpfr_init(r11055746);
        mpfr_init_set_str(r11055747, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r11055748);
        mpfr_init(r11055749);
        mpfr_init_set_str(r11055750, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r11055751);
        mpfr_init(r11055752);
        mpfr_init(r11055753);
        mpfr_init(r11055754);
        mpfr_init(r11055755);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r11055723, x, MPFR_RNDN);
        mpfr_mul(r11055724, r11055723, r11055723, MPFR_RNDN);
        mpfr_mul(r11055725, r11055722, r11055724, MPFR_RNDN);
        mpfr_add(r11055726, r11055721, r11055725, MPFR_RNDN);
        ;
        ;
        mpfr_add(r11055729, r11055727, r11055728, MPFR_RNDN);
        mpfr_pow(r11055730, r11055724, r11055729, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055733, r11055732, r11055724, MPFR_RNDN);
        mpfr_add(r11055734, r11055731, r11055733, MPFR_RNDN);
        mpfr_mul(r11055735, r11055730, r11055734, MPFR_RNDN);
        mpfr_add(r11055736, r11055726, r11055735, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055739, r11055723, r11055738, MPFR_RNDN);
        mpfr_mul(r11055740, r11055739, r11055723, MPFR_RNDN);
        mpfr_add(r11055741, r11055737, r11055740, MPFR_RNDN);
        mpfr_mul(r11055742, r11055724, r11055724, MPFR_RNDN);
        mpfr_mul(r11055743, r11055741, r11055742, MPFR_RNDN);
        mpfr_pow(r11055744, r11055723, r11055727, MPFR_RNDN);
        mpfr_mul(r11055745, r11055724, r11055744, MPFR_RNDN);
        mpfr_mul(r11055746, r11055745, r11055745, MPFR_RNDN);
        ;
        mpfr_mul(r11055748, r11055747, r11055723, MPFR_RNDN);
        mpfr_mul(r11055749, r11055748, r11055744, MPFR_RNDN);
        ;
        mpfr_mul(r11055751, r11055724, r11055750, MPFR_RNDN);
        mpfr_add(r11055752, r11055749, r11055751, MPFR_RNDN);
        mpfr_mul(r11055753, r11055746, r11055752, MPFR_RNDN);
        mpfr_add(r11055754, r11055743, r11055753, MPFR_RNDN);
        mpfr_add(r11055755, r11055736, r11055754, MPFR_RNDN);
        return mpfr_get_d(r11055755, MPFR_RNDN);
}

static mpfr_t r11055756, r11055757, r11055758, r11055759, r11055760, r11055761, r11055762, r11055763, r11055764, r11055765, r11055766, r11055767, r11055768, r11055769, r11055770, r11055771, r11055772, r11055773, r11055774, r11055775, r11055776, r11055777, r11055778, r11055779, r11055780, r11055781, r11055782, r11055783, r11055784, r11055785, r11055786, r11055787, r11055788, r11055789, r11055790;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r11055756, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055757, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r11055758);
        mpfr_init(r11055759);
        mpfr_init(r11055760);
        mpfr_init(r11055761);
        mpfr_init_set_str(r11055762, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055763, "1", 10, MPFR_RNDN);
        mpfr_init(r11055764);
        mpfr_init(r11055765);
        mpfr_init_set_str(r11055766, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055767, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r11055768);
        mpfr_init(r11055769);
        mpfr_init(r11055770);
        mpfr_init(r11055771);
        mpfr_init_set_str(r11055772, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r11055773, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r11055774);
        mpfr_init(r11055775);
        mpfr_init(r11055776);
        mpfr_init(r11055777);
        mpfr_init(r11055778);
        mpfr_init(r11055779);
        mpfr_init(r11055780);
        mpfr_init(r11055781);
        mpfr_init_set_str(r11055782, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r11055783);
        mpfr_init(r11055784);
        mpfr_init_set_str(r11055785, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r11055786);
        mpfr_init(r11055787);
        mpfr_init(r11055788);
        mpfr_init(r11055789);
        mpfr_init(r11055790);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r11055758, x, MPFR_RNDN);
        mpfr_mul(r11055759, r11055758, r11055758, MPFR_RNDN);
        mpfr_mul(r11055760, r11055757, r11055759, MPFR_RNDN);
        mpfr_add(r11055761, r11055756, r11055760, MPFR_RNDN);
        ;
        ;
        mpfr_add(r11055764, r11055762, r11055763, MPFR_RNDN);
        mpfr_pow(r11055765, r11055759, r11055764, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055768, r11055767, r11055759, MPFR_RNDN);
        mpfr_add(r11055769, r11055766, r11055768, MPFR_RNDN);
        mpfr_mul(r11055770, r11055765, r11055769, MPFR_RNDN);
        mpfr_add(r11055771, r11055761, r11055770, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r11055774, r11055758, r11055773, MPFR_RNDN);
        mpfr_mul(r11055775, r11055774, r11055758, MPFR_RNDN);
        mpfr_add(r11055776, r11055772, r11055775, MPFR_RNDN);
        mpfr_mul(r11055777, r11055759, r11055759, MPFR_RNDN);
        mpfr_mul(r11055778, r11055776, r11055777, MPFR_RNDN);
        mpfr_pow(r11055779, r11055758, r11055762, MPFR_RNDN);
        mpfr_mul(r11055780, r11055759, r11055779, MPFR_RNDN);
        mpfr_mul(r11055781, r11055780, r11055780, MPFR_RNDN);
        ;
        mpfr_mul(r11055783, r11055782, r11055758, MPFR_RNDN);
        mpfr_mul(r11055784, r11055783, r11055779, MPFR_RNDN);
        ;
        mpfr_mul(r11055786, r11055759, r11055785, MPFR_RNDN);
        mpfr_add(r11055787, r11055784, r11055786, MPFR_RNDN);
        mpfr_mul(r11055788, r11055781, r11055787, MPFR_RNDN);
        mpfr_add(r11055789, r11055778, r11055788, MPFR_RNDN);
        mpfr_add(r11055790, r11055771, r11055789, MPFR_RNDN);
        return mpfr_get_d(r11055790, MPFR_RNDN);
}

