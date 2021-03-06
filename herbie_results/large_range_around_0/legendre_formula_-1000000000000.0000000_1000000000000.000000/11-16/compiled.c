#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "16";

double f_if(float x) {
        float r7168501 = 0.196381;
        float r7168502 = -26.707764;
        float r7168503 = x;
        float r7168504 = r7168503 * r7168503;
        float r7168505 = r7168502 * r7168504;
        float r7168506 = r7168501 + r7168505;
        float r7168507 = 592.022095;
        float r7168508 = r7168504 * r7168503;
        float r7168509 = r7168508 * r7168503;
        float r7168510 = r7168507 * r7168509;
        float r7168511 = r7168506 + r7168510;
        float r7168512 = -4972.985596;
        float r7168513 = r7168509 * r7168503;
        float r7168514 = r7168513 * r7168503;
        float r7168515 = r7168512 * r7168514;
        float r7168516 = r7168511 + r7168515;
        float r7168517 = 20424.762268;
        float r7168518 = r7168514 * r7168503;
        float r7168519 = r7168518 * r7168503;
        float r7168520 = r7168517 * r7168519;
        float r7168521 = r7168516 + r7168520;
        float r7168522 = -45388.360596;
        float r7168523 = r7168519 * r7168503;
        float r7168524 = r7168523 * r7168503;
        float r7168525 = r7168522 * r7168524;
        float r7168526 = r7168521 + r7168525;
        float r7168527 = 55703.897095;
        float r7168528 = r7168524 * r7168503;
        float r7168529 = r7168528 * r7168503;
        float r7168530 = r7168527 * r7168529;
        float r7168531 = r7168526 + r7168530;
        float r7168532 = -35503.582764;
        float r7168533 = r7168529 * r7168503;
        float r7168534 = r7168533 * r7168503;
        float r7168535 = r7168532 * r7168534;
        float r7168536 = r7168531 + r7168535;
        float r7168537 = 9171.758881;
        float r7168538 = r7168534 * r7168503;
        float r7168539 = r7168538 * r7168503;
        float r7168540 = r7168537 * r7168539;
        float r7168541 = r7168536 + r7168540;
        return r7168541;
}

double f_id(double x) {
        double r7168542 = 0.196381;
        double r7168543 = -26.707764;
        double r7168544 = x;
        double r7168545 = r7168544 * r7168544;
        double r7168546 = r7168543 * r7168545;
        double r7168547 = r7168542 + r7168546;
        double r7168548 = 592.022095;
        double r7168549 = r7168545 * r7168544;
        double r7168550 = r7168549 * r7168544;
        double r7168551 = r7168548 * r7168550;
        double r7168552 = r7168547 + r7168551;
        double r7168553 = -4972.985596;
        double r7168554 = r7168550 * r7168544;
        double r7168555 = r7168554 * r7168544;
        double r7168556 = r7168553 * r7168555;
        double r7168557 = r7168552 + r7168556;
        double r7168558 = 20424.762268;
        double r7168559 = r7168555 * r7168544;
        double r7168560 = r7168559 * r7168544;
        double r7168561 = r7168558 * r7168560;
        double r7168562 = r7168557 + r7168561;
        double r7168563 = -45388.360596;
        double r7168564 = r7168560 * r7168544;
        double r7168565 = r7168564 * r7168544;
        double r7168566 = r7168563 * r7168565;
        double r7168567 = r7168562 + r7168566;
        double r7168568 = 55703.897095;
        double r7168569 = r7168565 * r7168544;
        double r7168570 = r7168569 * r7168544;
        double r7168571 = r7168568 * r7168570;
        double r7168572 = r7168567 + r7168571;
        double r7168573 = -35503.582764;
        double r7168574 = r7168570 * r7168544;
        double r7168575 = r7168574 * r7168544;
        double r7168576 = r7168573 * r7168575;
        double r7168577 = r7168572 + r7168576;
        double r7168578 = 9171.758881;
        double r7168579 = r7168575 * r7168544;
        double r7168580 = r7168579 * r7168544;
        double r7168581 = r7168578 * r7168580;
        double r7168582 = r7168577 + r7168581;
        return r7168582;
}


double f_of(float x) {
        float r7168583 = 0.196381;
        float r7168584 = -26.707764;
        float r7168585 = x;
        float r7168586 = r7168584 * r7168585;
        float r7168587 = r7168586 * r7168585;
        float r7168588 = r7168583 + r7168587;
        float r7168589 = 592.022095;
        float r7168590 = r7168585 * r7168585;
        float r7168591 = r7168590 * r7168585;
        float r7168592 = r7168591 * r7168585;
        float r7168593 = r7168589 * r7168592;
        float r7168594 = r7168588 + r7168593;
        float r7168595 = -4972.985596;
        float r7168596 = r7168592 * r7168585;
        float r7168597 = r7168596 * r7168585;
        float r7168598 = r7168595 * r7168597;
        float r7168599 = r7168594 + r7168598;
        float r7168600 = 20424.762268;
        float r7168601 = r7168597 * r7168585;
        float r7168602 = r7168601 * r7168585;
        float r7168603 = r7168600 * r7168602;
        float r7168604 = r7168599 + r7168603;
        float r7168605 = -45388.360596;
        float r7168606 = r7168602 * r7168585;
        float r7168607 = r7168606 * r7168585;
        float r7168608 = r7168605 * r7168607;
        float r7168609 = r7168604 + r7168608;
        float r7168610 = 55703.897095;
        float r7168611 = r7168607 * r7168585;
        float r7168612 = r7168611 * r7168585;
        float r7168613 = r7168610 * r7168612;
        float r7168614 = r7168609 + r7168613;
        float r7168615 = -35503.582764;
        float r7168616 = r7168612 * r7168585;
        float r7168617 = r7168616 * r7168585;
        float r7168618 = r7168615 * r7168617;
        float r7168619 = r7168614 + r7168618;
        float r7168620 = 9171.758881;
        float r7168621 = r7168617 * r7168585;
        float r7168622 = r7168621 * r7168585;
        float r7168623 = r7168620 * r7168622;
        float r7168624 = r7168619 + r7168623;
        return r7168624;
}

double f_od(double x) {
        double r7168625 = 0.196381;
        double r7168626 = -26.707764;
        double r7168627 = x;
        double r7168628 = r7168626 * r7168627;
        double r7168629 = r7168628 * r7168627;
        double r7168630 = r7168625 + r7168629;
        double r7168631 = 592.022095;
        double r7168632 = r7168627 * r7168627;
        double r7168633 = r7168632 * r7168627;
        double r7168634 = r7168633 * r7168627;
        double r7168635 = r7168631 * r7168634;
        double r7168636 = r7168630 + r7168635;
        double r7168637 = -4972.985596;
        double r7168638 = r7168634 * r7168627;
        double r7168639 = r7168638 * r7168627;
        double r7168640 = r7168637 * r7168639;
        double r7168641 = r7168636 + r7168640;
        double r7168642 = 20424.762268;
        double r7168643 = r7168639 * r7168627;
        double r7168644 = r7168643 * r7168627;
        double r7168645 = r7168642 * r7168644;
        double r7168646 = r7168641 + r7168645;
        double r7168647 = -45388.360596;
        double r7168648 = r7168644 * r7168627;
        double r7168649 = r7168648 * r7168627;
        double r7168650 = r7168647 * r7168649;
        double r7168651 = r7168646 + r7168650;
        double r7168652 = 55703.897095;
        double r7168653 = r7168649 * r7168627;
        double r7168654 = r7168653 * r7168627;
        double r7168655 = r7168652 * r7168654;
        double r7168656 = r7168651 + r7168655;
        double r7168657 = -35503.582764;
        double r7168658 = r7168654 * r7168627;
        double r7168659 = r7168658 * r7168627;
        double r7168660 = r7168657 * r7168659;
        double r7168661 = r7168656 + r7168660;
        double r7168662 = 9171.758881;
        double r7168663 = r7168659 * r7168627;
        double r7168664 = r7168663 * r7168627;
        double r7168665 = r7168662 * r7168664;
        double r7168666 = r7168661 + r7168665;
        return r7168666;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7168667, r7168668, r7168669, r7168670, r7168671, r7168672, r7168673, r7168674, r7168675, r7168676, r7168677, r7168678, r7168679, r7168680, r7168681, r7168682, r7168683, r7168684, r7168685, r7168686, r7168687, r7168688, r7168689, r7168690, r7168691, r7168692, r7168693, r7168694, r7168695, r7168696, r7168697, r7168698, r7168699, r7168700, r7168701, r7168702, r7168703, r7168704, r7168705, r7168706, r7168707;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7168667, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7168668, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7168669);
        mpfr_init(r7168670);
        mpfr_init(r7168671);
        mpfr_init(r7168672);
        mpfr_init_set_str(r7168673, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7168674);
        mpfr_init(r7168675);
        mpfr_init(r7168676);
        mpfr_init(r7168677);
        mpfr_init_set_str(r7168678, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7168679);
        mpfr_init(r7168680);
        mpfr_init(r7168681);
        mpfr_init(r7168682);
        mpfr_init_set_str(r7168683, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7168684);
        mpfr_init(r7168685);
        mpfr_init(r7168686);
        mpfr_init(r7168687);
        mpfr_init_set_str(r7168688, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7168689);
        mpfr_init(r7168690);
        mpfr_init(r7168691);
        mpfr_init(r7168692);
        mpfr_init_set_str(r7168693, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7168694);
        mpfr_init(r7168695);
        mpfr_init(r7168696);
        mpfr_init(r7168697);
        mpfr_init_set_str(r7168698, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7168699);
        mpfr_init(r7168700);
        mpfr_init(r7168701);
        mpfr_init(r7168702);
        mpfr_init_set_str(r7168703, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7168704);
        mpfr_init(r7168705);
        mpfr_init(r7168706);
        mpfr_init(r7168707);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7168669, x, MPFR_RNDN);
        mpfr_mul(r7168670, r7168669, r7168669, MPFR_RNDN);
        mpfr_mul(r7168671, r7168668, r7168670, MPFR_RNDN);
        mpfr_add(r7168672, r7168667, r7168671, MPFR_RNDN);
        ;
        mpfr_mul(r7168674, r7168670, r7168669, MPFR_RNDN);
        mpfr_mul(r7168675, r7168674, r7168669, MPFR_RNDN);
        mpfr_mul(r7168676, r7168673, r7168675, MPFR_RNDN);
        mpfr_add(r7168677, r7168672, r7168676, MPFR_RNDN);
        ;
        mpfr_mul(r7168679, r7168675, r7168669, MPFR_RNDN);
        mpfr_mul(r7168680, r7168679, r7168669, MPFR_RNDN);
        mpfr_mul(r7168681, r7168678, r7168680, MPFR_RNDN);
        mpfr_add(r7168682, r7168677, r7168681, MPFR_RNDN);
        ;
        mpfr_mul(r7168684, r7168680, r7168669, MPFR_RNDN);
        mpfr_mul(r7168685, r7168684, r7168669, MPFR_RNDN);
        mpfr_mul(r7168686, r7168683, r7168685, MPFR_RNDN);
        mpfr_add(r7168687, r7168682, r7168686, MPFR_RNDN);
        ;
        mpfr_mul(r7168689, r7168685, r7168669, MPFR_RNDN);
        mpfr_mul(r7168690, r7168689, r7168669, MPFR_RNDN);
        mpfr_mul(r7168691, r7168688, r7168690, MPFR_RNDN);
        mpfr_add(r7168692, r7168687, r7168691, MPFR_RNDN);
        ;
        mpfr_mul(r7168694, r7168690, r7168669, MPFR_RNDN);
        mpfr_mul(r7168695, r7168694, r7168669, MPFR_RNDN);
        mpfr_mul(r7168696, r7168693, r7168695, MPFR_RNDN);
        mpfr_add(r7168697, r7168692, r7168696, MPFR_RNDN);
        ;
        mpfr_mul(r7168699, r7168695, r7168669, MPFR_RNDN);
        mpfr_mul(r7168700, r7168699, r7168669, MPFR_RNDN);
        mpfr_mul(r7168701, r7168698, r7168700, MPFR_RNDN);
        mpfr_add(r7168702, r7168697, r7168701, MPFR_RNDN);
        ;
        mpfr_mul(r7168704, r7168700, r7168669, MPFR_RNDN);
        mpfr_mul(r7168705, r7168704, r7168669, MPFR_RNDN);
        mpfr_mul(r7168706, r7168703, r7168705, MPFR_RNDN);
        mpfr_add(r7168707, r7168702, r7168706, MPFR_RNDN);
        return mpfr_get_d(r7168707, MPFR_RNDN);
}

static mpfr_t r7168708, r7168709, r7168710, r7168711, r7168712, r7168713, r7168714, r7168715, r7168716, r7168717, r7168718, r7168719, r7168720, r7168721, r7168722, r7168723, r7168724, r7168725, r7168726, r7168727, r7168728, r7168729, r7168730, r7168731, r7168732, r7168733, r7168734, r7168735, r7168736, r7168737, r7168738, r7168739, r7168740, r7168741, r7168742, r7168743, r7168744, r7168745, r7168746, r7168747, r7168748, r7168749;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7168708, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7168709, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7168710);
        mpfr_init(r7168711);
        mpfr_init(r7168712);
        mpfr_init(r7168713);
        mpfr_init_set_str(r7168714, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7168715);
        mpfr_init(r7168716);
        mpfr_init(r7168717);
        mpfr_init(r7168718);
        mpfr_init(r7168719);
        mpfr_init_set_str(r7168720, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7168721);
        mpfr_init(r7168722);
        mpfr_init(r7168723);
        mpfr_init(r7168724);
        mpfr_init_set_str(r7168725, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7168726);
        mpfr_init(r7168727);
        mpfr_init(r7168728);
        mpfr_init(r7168729);
        mpfr_init_set_str(r7168730, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7168731);
        mpfr_init(r7168732);
        mpfr_init(r7168733);
        mpfr_init(r7168734);
        mpfr_init_set_str(r7168735, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7168736);
        mpfr_init(r7168737);
        mpfr_init(r7168738);
        mpfr_init(r7168739);
        mpfr_init_set_str(r7168740, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7168741);
        mpfr_init(r7168742);
        mpfr_init(r7168743);
        mpfr_init(r7168744);
        mpfr_init_set_str(r7168745, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7168746);
        mpfr_init(r7168747);
        mpfr_init(r7168748);
        mpfr_init(r7168749);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r7168710, x, MPFR_RNDN);
        mpfr_mul(r7168711, r7168709, r7168710, MPFR_RNDN);
        mpfr_mul(r7168712, r7168711, r7168710, MPFR_RNDN);
        mpfr_add(r7168713, r7168708, r7168712, MPFR_RNDN);
        ;
        mpfr_mul(r7168715, r7168710, r7168710, MPFR_RNDN);
        mpfr_mul(r7168716, r7168715, r7168710, MPFR_RNDN);
        mpfr_mul(r7168717, r7168716, r7168710, MPFR_RNDN);
        mpfr_mul(r7168718, r7168714, r7168717, MPFR_RNDN);
        mpfr_add(r7168719, r7168713, r7168718, MPFR_RNDN);
        ;
        mpfr_mul(r7168721, r7168717, r7168710, MPFR_RNDN);
        mpfr_mul(r7168722, r7168721, r7168710, MPFR_RNDN);
        mpfr_mul(r7168723, r7168720, r7168722, MPFR_RNDN);
        mpfr_add(r7168724, r7168719, r7168723, MPFR_RNDN);
        ;
        mpfr_mul(r7168726, r7168722, r7168710, MPFR_RNDN);
        mpfr_mul(r7168727, r7168726, r7168710, MPFR_RNDN);
        mpfr_mul(r7168728, r7168725, r7168727, MPFR_RNDN);
        mpfr_add(r7168729, r7168724, r7168728, MPFR_RNDN);
        ;
        mpfr_mul(r7168731, r7168727, r7168710, MPFR_RNDN);
        mpfr_mul(r7168732, r7168731, r7168710, MPFR_RNDN);
        mpfr_mul(r7168733, r7168730, r7168732, MPFR_RNDN);
        mpfr_add(r7168734, r7168729, r7168733, MPFR_RNDN);
        ;
        mpfr_mul(r7168736, r7168732, r7168710, MPFR_RNDN);
        mpfr_mul(r7168737, r7168736, r7168710, MPFR_RNDN);
        mpfr_mul(r7168738, r7168735, r7168737, MPFR_RNDN);
        mpfr_add(r7168739, r7168734, r7168738, MPFR_RNDN);
        ;
        mpfr_mul(r7168741, r7168737, r7168710, MPFR_RNDN);
        mpfr_mul(r7168742, r7168741, r7168710, MPFR_RNDN);
        mpfr_mul(r7168743, r7168740, r7168742, MPFR_RNDN);
        mpfr_add(r7168744, r7168739, r7168743, MPFR_RNDN);
        ;
        mpfr_mul(r7168746, r7168742, r7168710, MPFR_RNDN);
        mpfr_mul(r7168747, r7168746, r7168710, MPFR_RNDN);
        mpfr_mul(r7168748, r7168745, r7168747, MPFR_RNDN);
        mpfr_add(r7168749, r7168744, r7168748, MPFR_RNDN);
        return mpfr_get_d(r7168749, MPFR_RNDN);
}

static mpfr_t r7168750, r7168751, r7168752, r7168753, r7168754, r7168755, r7168756, r7168757, r7168758, r7168759, r7168760, r7168761, r7168762, r7168763, r7168764, r7168765, r7168766, r7168767, r7168768, r7168769, r7168770, r7168771, r7168772, r7168773, r7168774, r7168775, r7168776, r7168777, r7168778, r7168779, r7168780, r7168781, r7168782, r7168783, r7168784, r7168785, r7168786, r7168787, r7168788, r7168789, r7168790, r7168791;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7168750, "0.196381", 10, MPFR_RNDN);
        mpfr_init_set_str(r7168751, "-26.707764", 10, MPFR_RNDN);
        mpfr_init(r7168752);
        mpfr_init(r7168753);
        mpfr_init(r7168754);
        mpfr_init(r7168755);
        mpfr_init_set_str(r7168756, "592.022095", 10, MPFR_RNDN);
        mpfr_init(r7168757);
        mpfr_init(r7168758);
        mpfr_init(r7168759);
        mpfr_init(r7168760);
        mpfr_init(r7168761);
        mpfr_init_set_str(r7168762, "-4972.985596", 10, MPFR_RNDN);
        mpfr_init(r7168763);
        mpfr_init(r7168764);
        mpfr_init(r7168765);
        mpfr_init(r7168766);
        mpfr_init_set_str(r7168767, "20424.762268", 10, MPFR_RNDN);
        mpfr_init(r7168768);
        mpfr_init(r7168769);
        mpfr_init(r7168770);
        mpfr_init(r7168771);
        mpfr_init_set_str(r7168772, "-45388.360596", 10, MPFR_RNDN);
        mpfr_init(r7168773);
        mpfr_init(r7168774);
        mpfr_init(r7168775);
        mpfr_init(r7168776);
        mpfr_init_set_str(r7168777, "55703.897095", 10, MPFR_RNDN);
        mpfr_init(r7168778);
        mpfr_init(r7168779);
        mpfr_init(r7168780);
        mpfr_init(r7168781);
        mpfr_init_set_str(r7168782, "-35503.582764", 10, MPFR_RNDN);
        mpfr_init(r7168783);
        mpfr_init(r7168784);
        mpfr_init(r7168785);
        mpfr_init(r7168786);
        mpfr_init_set_str(r7168787, "9171.758881", 10, MPFR_RNDN);
        mpfr_init(r7168788);
        mpfr_init(r7168789);
        mpfr_init(r7168790);
        mpfr_init(r7168791);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r7168752, x, MPFR_RNDN);
        mpfr_mul(r7168753, r7168751, r7168752, MPFR_RNDN);
        mpfr_mul(r7168754, r7168753, r7168752, MPFR_RNDN);
        mpfr_add(r7168755, r7168750, r7168754, MPFR_RNDN);
        ;
        mpfr_mul(r7168757, r7168752, r7168752, MPFR_RNDN);
        mpfr_mul(r7168758, r7168757, r7168752, MPFR_RNDN);
        mpfr_mul(r7168759, r7168758, r7168752, MPFR_RNDN);
        mpfr_mul(r7168760, r7168756, r7168759, MPFR_RNDN);
        mpfr_add(r7168761, r7168755, r7168760, MPFR_RNDN);
        ;
        mpfr_mul(r7168763, r7168759, r7168752, MPFR_RNDN);
        mpfr_mul(r7168764, r7168763, r7168752, MPFR_RNDN);
        mpfr_mul(r7168765, r7168762, r7168764, MPFR_RNDN);
        mpfr_add(r7168766, r7168761, r7168765, MPFR_RNDN);
        ;
        mpfr_mul(r7168768, r7168764, r7168752, MPFR_RNDN);
        mpfr_mul(r7168769, r7168768, r7168752, MPFR_RNDN);
        mpfr_mul(r7168770, r7168767, r7168769, MPFR_RNDN);
        mpfr_add(r7168771, r7168766, r7168770, MPFR_RNDN);
        ;
        mpfr_mul(r7168773, r7168769, r7168752, MPFR_RNDN);
        mpfr_mul(r7168774, r7168773, r7168752, MPFR_RNDN);
        mpfr_mul(r7168775, r7168772, r7168774, MPFR_RNDN);
        mpfr_add(r7168776, r7168771, r7168775, MPFR_RNDN);
        ;
        mpfr_mul(r7168778, r7168774, r7168752, MPFR_RNDN);
        mpfr_mul(r7168779, r7168778, r7168752, MPFR_RNDN);
        mpfr_mul(r7168780, r7168777, r7168779, MPFR_RNDN);
        mpfr_add(r7168781, r7168776, r7168780, MPFR_RNDN);
        ;
        mpfr_mul(r7168783, r7168779, r7168752, MPFR_RNDN);
        mpfr_mul(r7168784, r7168783, r7168752, MPFR_RNDN);
        mpfr_mul(r7168785, r7168782, r7168784, MPFR_RNDN);
        mpfr_add(r7168786, r7168781, r7168785, MPFR_RNDN);
        ;
        mpfr_mul(r7168788, r7168784, r7168752, MPFR_RNDN);
        mpfr_mul(r7168789, r7168788, r7168752, MPFR_RNDN);
        mpfr_mul(r7168790, r7168787, r7168789, MPFR_RNDN);
        mpfr_add(r7168791, r7168786, r7168790, MPFR_RNDN);
        return mpfr_get_d(r7168791, MPFR_RNDN);
}

