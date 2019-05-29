#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "15";

double f_if(float x) {
        float r10200467 = 1.0;
        float r10200468 = -15.0;
        float r10200469 = x;
        float r10200470 = r10200468 * r10200469;
        float r10200471 = r10200467 + r10200470;
        float r10200472 = 52.5;
        float r10200473 = r10200469 * r10200469;
        float r10200474 = r10200472 * r10200473;
        float r10200475 = r10200471 + r10200474;
        float r10200476 = -75.833333;
        float r10200477 = r10200473 * r10200469;
        float r10200478 = r10200476 * r10200477;
        float r10200479 = r10200475 + r10200478;
        float r10200480 = 56.875;
        float r10200481 = r10200477 * r10200469;
        float r10200482 = r10200480 * r10200481;
        float r10200483 = r10200479 + r10200482;
        float r10200484 = -25.025;
        float r10200485 = r10200481 * r10200469;
        float r10200486 = r10200484 * r10200485;
        float r10200487 = r10200483 + r10200486;
        float r10200488 = 6.951389;
        float r10200489 = r10200485 * r10200469;
        float r10200490 = r10200488 * r10200489;
        float r10200491 = r10200487 + r10200490;
        float r10200492 = -1.276786;
        float r10200493 = r10200489 * r10200469;
        float r10200494 = r10200492 * r10200493;
        float r10200495 = r10200491 + r10200494;
        float r10200496 = 0.159598;
        float r10200497 = r10200493 * r10200469;
        float r10200498 = r10200496 * r10200497;
        float r10200499 = r10200495 + r10200498;
        float r10200500 = -0.013792;
        float r10200501 = r10200497 * r10200469;
        float r10200502 = r10200500 * r10200501;
        float r10200503 = r10200499 + r10200502;
        float r10200504 = 0.000828;
        float r10200505 = r10200501 * r10200469;
        float r10200506 = r10200504 * r10200505;
        float r10200507 = r10200503 + r10200506;
        float r10200508 = -3.4e-05;
        float r10200509 = r10200505 * r10200469;
        float r10200510 = r10200508 * r10200509;
        float r10200511 = r10200507 + r10200510;
        float r10200512 = 1e-06;
        float r10200513 = r10200509 * r10200469;
        float r10200514 = r10200512 * r10200513;
        float r10200515 = r10200511 + r10200514;
        return r10200515;
}

double f_id(double x) {
        double r10200516 = 1.0;
        double r10200517 = -15.0;
        double r10200518 = x;
        double r10200519 = r10200517 * r10200518;
        double r10200520 = r10200516 + r10200519;
        double r10200521 = 52.5;
        double r10200522 = r10200518 * r10200518;
        double r10200523 = r10200521 * r10200522;
        double r10200524 = r10200520 + r10200523;
        double r10200525 = -75.833333;
        double r10200526 = r10200522 * r10200518;
        double r10200527 = r10200525 * r10200526;
        double r10200528 = r10200524 + r10200527;
        double r10200529 = 56.875;
        double r10200530 = r10200526 * r10200518;
        double r10200531 = r10200529 * r10200530;
        double r10200532 = r10200528 + r10200531;
        double r10200533 = -25.025;
        double r10200534 = r10200530 * r10200518;
        double r10200535 = r10200533 * r10200534;
        double r10200536 = r10200532 + r10200535;
        double r10200537 = 6.951389;
        double r10200538 = r10200534 * r10200518;
        double r10200539 = r10200537 * r10200538;
        double r10200540 = r10200536 + r10200539;
        double r10200541 = -1.276786;
        double r10200542 = r10200538 * r10200518;
        double r10200543 = r10200541 * r10200542;
        double r10200544 = r10200540 + r10200543;
        double r10200545 = 0.159598;
        double r10200546 = r10200542 * r10200518;
        double r10200547 = r10200545 * r10200546;
        double r10200548 = r10200544 + r10200547;
        double r10200549 = -0.013792;
        double r10200550 = r10200546 * r10200518;
        double r10200551 = r10200549 * r10200550;
        double r10200552 = r10200548 + r10200551;
        double r10200553 = 0.000828;
        double r10200554 = r10200550 * r10200518;
        double r10200555 = r10200553 * r10200554;
        double r10200556 = r10200552 + r10200555;
        double r10200557 = -3.4e-05;
        double r10200558 = r10200554 * r10200518;
        double r10200559 = r10200557 * r10200558;
        double r10200560 = r10200556 + r10200559;
        double r10200561 = 1e-06;
        double r10200562 = r10200558 * r10200518;
        double r10200563 = r10200561 * r10200562;
        double r10200564 = r10200560 + r10200563;
        return r10200564;
}


double f_of(float x) {
        float r10200565 = x;
        float r10200566 = r10200565 * r10200565;
        float r10200567 = 52.5;
        float r10200568 = 75.833333;
        float r10200569 = r10200568 * r10200565;
        float r10200570 = r10200567 - r10200569;
        float r10200571 = r10200566 * r10200570;
        float r10200572 = 3;
        float r10200573 = pow(r10200565, r10200572);
        float r10200574 = pow(r10200573, r10200572);
        float r10200575 = 1e-06;
        float r10200576 = r10200565 * r10200575;
        float r10200577 = r10200576 * r10200566;
        float r10200578 = r10200574 * r10200577;
        float r10200579 = r10200571 + r10200578;
        float r10200580 = 0.000828;
        float r10200581 = 3.4e-05;
        float r10200582 = r10200581 * r10200565;
        float r10200583 = r10200580 - r10200582;
        float r10200584 = r10200566 * r10200583;
        float r10200585 = 1;
        float r10200586 = r10200572 + r10200585;
        float r10200587 = pow(r10200566, r10200586);
        float r10200588 = r10200584 * r10200587;
        float r10200589 = r10200579 + r10200588;
        float r10200590 = -0.013792;
        float r10200591 = r10200565 * r10200590;
        float r10200592 = 0.159598;
        float r10200593 = r10200591 + r10200592;
        float r10200594 = r10200593 * r10200587;
        float r10200595 = r10200566 * r10200566;
        float r10200596 = 56.875;
        float r10200597 = -25.025;
        float r10200598 = r10200597 * r10200565;
        float r10200599 = r10200596 + r10200598;
        float r10200600 = r10200595 * r10200599;
        float r10200601 = r10200594 + r10200600;
        float r10200602 = pow(r10200566, r10200572);
        float r10200603 = -1.276786;
        float r10200604 = r10200565 * r10200603;
        float r10200605 = 6.951389;
        float r10200606 = r10200604 + r10200605;
        float r10200607 = r10200602 * r10200606;
        float r10200608 = -15.0;
        float r10200609 = r10200565 * r10200608;
        float r10200610 = 1.0;
        float r10200611 = r10200609 + r10200610;
        float r10200612 = r10200607 + r10200611;
        float r10200613 = r10200601 + r10200612;
        float r10200614 = r10200589 + r10200613;
        return r10200614;
}

double f_od(double x) {
        double r10200615 = x;
        double r10200616 = r10200615 * r10200615;
        double r10200617 = 52.5;
        double r10200618 = 75.833333;
        double r10200619 = r10200618 * r10200615;
        double r10200620 = r10200617 - r10200619;
        double r10200621 = r10200616 * r10200620;
        double r10200622 = 3;
        double r10200623 = pow(r10200615, r10200622);
        double r10200624 = pow(r10200623, r10200622);
        double r10200625 = 1e-06;
        double r10200626 = r10200615 * r10200625;
        double r10200627 = r10200626 * r10200616;
        double r10200628 = r10200624 * r10200627;
        double r10200629 = r10200621 + r10200628;
        double r10200630 = 0.000828;
        double r10200631 = 3.4e-05;
        double r10200632 = r10200631 * r10200615;
        double r10200633 = r10200630 - r10200632;
        double r10200634 = r10200616 * r10200633;
        double r10200635 = 1;
        double r10200636 = r10200622 + r10200635;
        double r10200637 = pow(r10200616, r10200636);
        double r10200638 = r10200634 * r10200637;
        double r10200639 = r10200629 + r10200638;
        double r10200640 = -0.013792;
        double r10200641 = r10200615 * r10200640;
        double r10200642 = 0.159598;
        double r10200643 = r10200641 + r10200642;
        double r10200644 = r10200643 * r10200637;
        double r10200645 = r10200616 * r10200616;
        double r10200646 = 56.875;
        double r10200647 = -25.025;
        double r10200648 = r10200647 * r10200615;
        double r10200649 = r10200646 + r10200648;
        double r10200650 = r10200645 * r10200649;
        double r10200651 = r10200644 + r10200650;
        double r10200652 = pow(r10200616, r10200622);
        double r10200653 = -1.276786;
        double r10200654 = r10200615 * r10200653;
        double r10200655 = 6.951389;
        double r10200656 = r10200654 + r10200655;
        double r10200657 = r10200652 * r10200656;
        double r10200658 = -15.0;
        double r10200659 = r10200615 * r10200658;
        double r10200660 = 1.0;
        double r10200661 = r10200659 + r10200660;
        double r10200662 = r10200657 + r10200661;
        double r10200663 = r10200651 + r10200662;
        double r10200664 = r10200639 + r10200663;
        return r10200664;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10200665, r10200666, r10200667, r10200668, r10200669, r10200670, r10200671, r10200672, r10200673, r10200674, r10200675, r10200676, r10200677, r10200678, r10200679, r10200680, r10200681, r10200682, r10200683, r10200684, r10200685, r10200686, r10200687, r10200688, r10200689, r10200690, r10200691, r10200692, r10200693, r10200694, r10200695, r10200696, r10200697, r10200698, r10200699, r10200700, r10200701, r10200702, r10200703, r10200704, r10200705, r10200706, r10200707, r10200708, r10200709, r10200710, r10200711, r10200712, r10200713;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10200665, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200666, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r10200667);
        mpfr_init(r10200668);
        mpfr_init(r10200669);
        mpfr_init_set_str(r10200670, "52.5", 10, MPFR_RNDN);
        mpfr_init(r10200671);
        mpfr_init(r10200672);
        mpfr_init(r10200673);
        mpfr_init_set_str(r10200674, "-75.833333", 10, MPFR_RNDN);
        mpfr_init(r10200675);
        mpfr_init(r10200676);
        mpfr_init(r10200677);
        mpfr_init_set_str(r10200678, "56.875", 10, MPFR_RNDN);
        mpfr_init(r10200679);
        mpfr_init(r10200680);
        mpfr_init(r10200681);
        mpfr_init_set_str(r10200682, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r10200683);
        mpfr_init(r10200684);
        mpfr_init(r10200685);
        mpfr_init_set_str(r10200686, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r10200687);
        mpfr_init(r10200688);
        mpfr_init(r10200689);
        mpfr_init_set_str(r10200690, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r10200691);
        mpfr_init(r10200692);
        mpfr_init(r10200693);
        mpfr_init_set_str(r10200694, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r10200695);
        mpfr_init(r10200696);
        mpfr_init(r10200697);
        mpfr_init_set_str(r10200698, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r10200699);
        mpfr_init(r10200700);
        mpfr_init(r10200701);
        mpfr_init_set_str(r10200702, "0.000828", 10, MPFR_RNDN);
        mpfr_init(r10200703);
        mpfr_init(r10200704);
        mpfr_init(r10200705);
        mpfr_init_set_str(r10200706, "-3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r10200707);
        mpfr_init(r10200708);
        mpfr_init(r10200709);
        mpfr_init_set_str(r10200710, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r10200711);
        mpfr_init(r10200712);
        mpfr_init(r10200713);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10200667, x, MPFR_RNDN);
        mpfr_mul(r10200668, r10200666, r10200667, MPFR_RNDN);
        mpfr_add(r10200669, r10200665, r10200668, MPFR_RNDN);
        ;
        mpfr_mul(r10200671, r10200667, r10200667, MPFR_RNDN);
        mpfr_mul(r10200672, r10200670, r10200671, MPFR_RNDN);
        mpfr_add(r10200673, r10200669, r10200672, MPFR_RNDN);
        ;
        mpfr_mul(r10200675, r10200671, r10200667, MPFR_RNDN);
        mpfr_mul(r10200676, r10200674, r10200675, MPFR_RNDN);
        mpfr_add(r10200677, r10200673, r10200676, MPFR_RNDN);
        ;
        mpfr_mul(r10200679, r10200675, r10200667, MPFR_RNDN);
        mpfr_mul(r10200680, r10200678, r10200679, MPFR_RNDN);
        mpfr_add(r10200681, r10200677, r10200680, MPFR_RNDN);
        ;
        mpfr_mul(r10200683, r10200679, r10200667, MPFR_RNDN);
        mpfr_mul(r10200684, r10200682, r10200683, MPFR_RNDN);
        mpfr_add(r10200685, r10200681, r10200684, MPFR_RNDN);
        ;
        mpfr_mul(r10200687, r10200683, r10200667, MPFR_RNDN);
        mpfr_mul(r10200688, r10200686, r10200687, MPFR_RNDN);
        mpfr_add(r10200689, r10200685, r10200688, MPFR_RNDN);
        ;
        mpfr_mul(r10200691, r10200687, r10200667, MPFR_RNDN);
        mpfr_mul(r10200692, r10200690, r10200691, MPFR_RNDN);
        mpfr_add(r10200693, r10200689, r10200692, MPFR_RNDN);
        ;
        mpfr_mul(r10200695, r10200691, r10200667, MPFR_RNDN);
        mpfr_mul(r10200696, r10200694, r10200695, MPFR_RNDN);
        mpfr_add(r10200697, r10200693, r10200696, MPFR_RNDN);
        ;
        mpfr_mul(r10200699, r10200695, r10200667, MPFR_RNDN);
        mpfr_mul(r10200700, r10200698, r10200699, MPFR_RNDN);
        mpfr_add(r10200701, r10200697, r10200700, MPFR_RNDN);
        ;
        mpfr_mul(r10200703, r10200699, r10200667, MPFR_RNDN);
        mpfr_mul(r10200704, r10200702, r10200703, MPFR_RNDN);
        mpfr_add(r10200705, r10200701, r10200704, MPFR_RNDN);
        ;
        mpfr_mul(r10200707, r10200703, r10200667, MPFR_RNDN);
        mpfr_mul(r10200708, r10200706, r10200707, MPFR_RNDN);
        mpfr_add(r10200709, r10200705, r10200708, MPFR_RNDN);
        ;
        mpfr_mul(r10200711, r10200707, r10200667, MPFR_RNDN);
        mpfr_mul(r10200712, r10200710, r10200711, MPFR_RNDN);
        mpfr_add(r10200713, r10200709, r10200712, MPFR_RNDN);
        return mpfr_get_d(r10200713, MPFR_RNDN);
}

static mpfr_t r10200714, r10200715, r10200716, r10200717, r10200718, r10200719, r10200720, r10200721, r10200722, r10200723, r10200724, r10200725, r10200726, r10200727, r10200728, r10200729, r10200730, r10200731, r10200732, r10200733, r10200734, r10200735, r10200736, r10200737, r10200738, r10200739, r10200740, r10200741, r10200742, r10200743, r10200744, r10200745, r10200746, r10200747, r10200748, r10200749, r10200750, r10200751, r10200752, r10200753, r10200754, r10200755, r10200756, r10200757, r10200758, r10200759, r10200760, r10200761, r10200762, r10200763;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10200714);
        mpfr_init(r10200715);
        mpfr_init_set_str(r10200716, "52.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200717, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r10200718);
        mpfr_init(r10200719);
        mpfr_init(r10200720);
        mpfr_init_set_str(r10200721, "3", 10, MPFR_RNDN);
        mpfr_init(r10200722);
        mpfr_init(r10200723);
        mpfr_init_set_str(r10200724, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r10200725);
        mpfr_init(r10200726);
        mpfr_init(r10200727);
        mpfr_init(r10200728);
        mpfr_init_set_str(r10200729, "0.000828", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200730, "3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r10200731);
        mpfr_init(r10200732);
        mpfr_init(r10200733);
        mpfr_init_set_str(r10200734, "1", 10, MPFR_RNDN);
        mpfr_init(r10200735);
        mpfr_init(r10200736);
        mpfr_init(r10200737);
        mpfr_init(r10200738);
        mpfr_init_set_str(r10200739, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r10200740);
        mpfr_init_set_str(r10200741, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r10200742);
        mpfr_init(r10200743);
        mpfr_init(r10200744);
        mpfr_init_set_str(r10200745, "56.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200746, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r10200747);
        mpfr_init(r10200748);
        mpfr_init(r10200749);
        mpfr_init(r10200750);
        mpfr_init(r10200751);
        mpfr_init_set_str(r10200752, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r10200753);
        mpfr_init_set_str(r10200754, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r10200755);
        mpfr_init(r10200756);
        mpfr_init_set_str(r10200757, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r10200758);
        mpfr_init_set_str(r10200759, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10200760);
        mpfr_init(r10200761);
        mpfr_init(r10200762);
        mpfr_init(r10200763);
}

double f_fm(double x) {
        mpfr_set_d(r10200714, x, MPFR_RNDN);
        mpfr_mul(r10200715, r10200714, r10200714, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10200718, r10200717, r10200714, MPFR_RNDN);
        mpfr_sub(r10200719, r10200716, r10200718, MPFR_RNDN);
        mpfr_mul(r10200720, r10200715, r10200719, MPFR_RNDN);
        ;
        mpfr_pow(r10200722, r10200714, r10200721, MPFR_RNDN);
        mpfr_pow(r10200723, r10200722, r10200721, MPFR_RNDN);
        ;
        mpfr_mul(r10200725, r10200714, r10200724, MPFR_RNDN);
        mpfr_mul(r10200726, r10200725, r10200715, MPFR_RNDN);
        mpfr_mul(r10200727, r10200723, r10200726, MPFR_RNDN);
        mpfr_add(r10200728, r10200720, r10200727, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10200731, r10200730, r10200714, MPFR_RNDN);
        mpfr_sub(r10200732, r10200729, r10200731, MPFR_RNDN);
        mpfr_mul(r10200733, r10200715, r10200732, MPFR_RNDN);
        ;
        mpfr_add(r10200735, r10200721, r10200734, MPFR_RNDN);
        mpfr_pow(r10200736, r10200715, r10200735, MPFR_RNDN);
        mpfr_mul(r10200737, r10200733, r10200736, MPFR_RNDN);
        mpfr_add(r10200738, r10200728, r10200737, MPFR_RNDN);
        ;
        mpfr_mul(r10200740, r10200714, r10200739, MPFR_RNDN);
        ;
        mpfr_add(r10200742, r10200740, r10200741, MPFR_RNDN);
        mpfr_mul(r10200743, r10200742, r10200736, MPFR_RNDN);
        mpfr_mul(r10200744, r10200715, r10200715, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10200747, r10200746, r10200714, MPFR_RNDN);
        mpfr_add(r10200748, r10200745, r10200747, MPFR_RNDN);
        mpfr_mul(r10200749, r10200744, r10200748, MPFR_RNDN);
        mpfr_add(r10200750, r10200743, r10200749, MPFR_RNDN);
        mpfr_pow(r10200751, r10200715, r10200721, MPFR_RNDN);
        ;
        mpfr_mul(r10200753, r10200714, r10200752, MPFR_RNDN);
        ;
        mpfr_add(r10200755, r10200753, r10200754, MPFR_RNDN);
        mpfr_mul(r10200756, r10200751, r10200755, MPFR_RNDN);
        ;
        mpfr_mul(r10200758, r10200714, r10200757, MPFR_RNDN);
        ;
        mpfr_add(r10200760, r10200758, r10200759, MPFR_RNDN);
        mpfr_add(r10200761, r10200756, r10200760, MPFR_RNDN);
        mpfr_add(r10200762, r10200750, r10200761, MPFR_RNDN);
        mpfr_add(r10200763, r10200738, r10200762, MPFR_RNDN);
        return mpfr_get_d(r10200763, MPFR_RNDN);
}

static mpfr_t r10200764, r10200765, r10200766, r10200767, r10200768, r10200769, r10200770, r10200771, r10200772, r10200773, r10200774, r10200775, r10200776, r10200777, r10200778, r10200779, r10200780, r10200781, r10200782, r10200783, r10200784, r10200785, r10200786, r10200787, r10200788, r10200789, r10200790, r10200791, r10200792, r10200793, r10200794, r10200795, r10200796, r10200797, r10200798, r10200799, r10200800, r10200801, r10200802, r10200803, r10200804, r10200805, r10200806, r10200807, r10200808, r10200809, r10200810, r10200811, r10200812, r10200813;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10200764);
        mpfr_init(r10200765);
        mpfr_init_set_str(r10200766, "52.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200767, "75.833333", 10, MPFR_RNDN);
        mpfr_init(r10200768);
        mpfr_init(r10200769);
        mpfr_init(r10200770);
        mpfr_init_set_str(r10200771, "3", 10, MPFR_RNDN);
        mpfr_init(r10200772);
        mpfr_init(r10200773);
        mpfr_init_set_str(r10200774, "1e-06", 10, MPFR_RNDN);
        mpfr_init(r10200775);
        mpfr_init(r10200776);
        mpfr_init(r10200777);
        mpfr_init(r10200778);
        mpfr_init_set_str(r10200779, "0.000828", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200780, "3.4e-05", 10, MPFR_RNDN);
        mpfr_init(r10200781);
        mpfr_init(r10200782);
        mpfr_init(r10200783);
        mpfr_init_set_str(r10200784, "1", 10, MPFR_RNDN);
        mpfr_init(r10200785);
        mpfr_init(r10200786);
        mpfr_init(r10200787);
        mpfr_init(r10200788);
        mpfr_init_set_str(r10200789, "-0.013792", 10, MPFR_RNDN);
        mpfr_init(r10200790);
        mpfr_init_set_str(r10200791, "0.159598", 10, MPFR_RNDN);
        mpfr_init(r10200792);
        mpfr_init(r10200793);
        mpfr_init(r10200794);
        mpfr_init_set_str(r10200795, "56.875", 10, MPFR_RNDN);
        mpfr_init_set_str(r10200796, "-25.025", 10, MPFR_RNDN);
        mpfr_init(r10200797);
        mpfr_init(r10200798);
        mpfr_init(r10200799);
        mpfr_init(r10200800);
        mpfr_init(r10200801);
        mpfr_init_set_str(r10200802, "-1.276786", 10, MPFR_RNDN);
        mpfr_init(r10200803);
        mpfr_init_set_str(r10200804, "6.951389", 10, MPFR_RNDN);
        mpfr_init(r10200805);
        mpfr_init(r10200806);
        mpfr_init_set_str(r10200807, "-15.0", 10, MPFR_RNDN);
        mpfr_init(r10200808);
        mpfr_init_set_str(r10200809, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10200810);
        mpfr_init(r10200811);
        mpfr_init(r10200812);
        mpfr_init(r10200813);
}

double f_dm(double x) {
        mpfr_set_d(r10200764, x, MPFR_RNDN);
        mpfr_mul(r10200765, r10200764, r10200764, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10200768, r10200767, r10200764, MPFR_RNDN);
        mpfr_sub(r10200769, r10200766, r10200768, MPFR_RNDN);
        mpfr_mul(r10200770, r10200765, r10200769, MPFR_RNDN);
        ;
        mpfr_pow(r10200772, r10200764, r10200771, MPFR_RNDN);
        mpfr_pow(r10200773, r10200772, r10200771, MPFR_RNDN);
        ;
        mpfr_mul(r10200775, r10200764, r10200774, MPFR_RNDN);
        mpfr_mul(r10200776, r10200775, r10200765, MPFR_RNDN);
        mpfr_mul(r10200777, r10200773, r10200776, MPFR_RNDN);
        mpfr_add(r10200778, r10200770, r10200777, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10200781, r10200780, r10200764, MPFR_RNDN);
        mpfr_sub(r10200782, r10200779, r10200781, MPFR_RNDN);
        mpfr_mul(r10200783, r10200765, r10200782, MPFR_RNDN);
        ;
        mpfr_add(r10200785, r10200771, r10200784, MPFR_RNDN);
        mpfr_pow(r10200786, r10200765, r10200785, MPFR_RNDN);
        mpfr_mul(r10200787, r10200783, r10200786, MPFR_RNDN);
        mpfr_add(r10200788, r10200778, r10200787, MPFR_RNDN);
        ;
        mpfr_mul(r10200790, r10200764, r10200789, MPFR_RNDN);
        ;
        mpfr_add(r10200792, r10200790, r10200791, MPFR_RNDN);
        mpfr_mul(r10200793, r10200792, r10200786, MPFR_RNDN);
        mpfr_mul(r10200794, r10200765, r10200765, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10200797, r10200796, r10200764, MPFR_RNDN);
        mpfr_add(r10200798, r10200795, r10200797, MPFR_RNDN);
        mpfr_mul(r10200799, r10200794, r10200798, MPFR_RNDN);
        mpfr_add(r10200800, r10200793, r10200799, MPFR_RNDN);
        mpfr_pow(r10200801, r10200765, r10200771, MPFR_RNDN);
        ;
        mpfr_mul(r10200803, r10200764, r10200802, MPFR_RNDN);
        ;
        mpfr_add(r10200805, r10200803, r10200804, MPFR_RNDN);
        mpfr_mul(r10200806, r10200801, r10200805, MPFR_RNDN);
        ;
        mpfr_mul(r10200808, r10200764, r10200807, MPFR_RNDN);
        ;
        mpfr_add(r10200810, r10200808, r10200809, MPFR_RNDN);
        mpfr_add(r10200811, r10200806, r10200810, MPFR_RNDN);
        mpfr_add(r10200812, r10200800, r10200811, MPFR_RNDN);
        mpfr_add(r10200813, r10200788, r10200812, MPFR_RNDN);
        return mpfr_get_d(r10200813, MPFR_RNDN);
}
