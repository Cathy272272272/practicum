#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "8";

double f_if(float x) {
        float r10743494 = 1.0;
        float r10743495 = -8.0;
        float r10743496 = x;
        float r10743497 = r10743495 * r10743496;
        float r10743498 = r10743494 + r10743497;
        float r10743499 = 14.0;
        float r10743500 = r10743496 * r10743496;
        float r10743501 = r10743499 * r10743500;
        float r10743502 = r10743498 + r10743501;
        float r10743503 = -9.333333;
        float r10743504 = r10743500 * r10743496;
        float r10743505 = r10743503 * r10743504;
        float r10743506 = r10743502 + r10743505;
        float r10743507 = 2.916667;
        float r10743508 = r10743504 * r10743496;
        float r10743509 = r10743507 * r10743508;
        float r10743510 = r10743506 + r10743509;
        float r10743511 = -0.466667;
        float r10743512 = r10743508 * r10743496;
        float r10743513 = r10743511 * r10743512;
        float r10743514 = r10743510 + r10743513;
        float r10743515 = 0.038889;
        float r10743516 = r10743512 * r10743496;
        float r10743517 = r10743515 * r10743516;
        float r10743518 = r10743514 + r10743517;
        float r10743519 = -0.001587;
        float r10743520 = r10743516 * r10743496;
        float r10743521 = r10743519 * r10743520;
        float r10743522 = r10743518 + r10743521;
        float r10743523 = 2.5e-05;
        float r10743524 = r10743520 * r10743496;
        float r10743525 = r10743523 * r10743524;
        float r10743526 = r10743522 + r10743525;
        return r10743526;
}

double f_id(double x) {
        double r10743527 = 1.0;
        double r10743528 = -8.0;
        double r10743529 = x;
        double r10743530 = r10743528 * r10743529;
        double r10743531 = r10743527 + r10743530;
        double r10743532 = 14.0;
        double r10743533 = r10743529 * r10743529;
        double r10743534 = r10743532 * r10743533;
        double r10743535 = r10743531 + r10743534;
        double r10743536 = -9.333333;
        double r10743537 = r10743533 * r10743529;
        double r10743538 = r10743536 * r10743537;
        double r10743539 = r10743535 + r10743538;
        double r10743540 = 2.916667;
        double r10743541 = r10743537 * r10743529;
        double r10743542 = r10743540 * r10743541;
        double r10743543 = r10743539 + r10743542;
        double r10743544 = -0.466667;
        double r10743545 = r10743541 * r10743529;
        double r10743546 = r10743544 * r10743545;
        double r10743547 = r10743543 + r10743546;
        double r10743548 = 0.038889;
        double r10743549 = r10743545 * r10743529;
        double r10743550 = r10743548 * r10743549;
        double r10743551 = r10743547 + r10743550;
        double r10743552 = -0.001587;
        double r10743553 = r10743549 * r10743529;
        double r10743554 = r10743552 * r10743553;
        double r10743555 = r10743551 + r10743554;
        double r10743556 = 2.5e-05;
        double r10743557 = r10743553 * r10743529;
        double r10743558 = r10743556 * r10743557;
        double r10743559 = r10743555 + r10743558;
        return r10743559;
}


double f_of(float x) {
        float r10743560 = 0.038889;
        float r10743561 = -0.001587;
        float r10743562 = x;
        float r10743563 = r10743561 * r10743562;
        float r10743564 = r10743560 + r10743563;
        float r10743565 = 2.5e-05;
        float r10743566 = r10743562 * r10743565;
        float r10743567 = r10743562 * r10743566;
        float r10743568 = r10743564 + r10743567;
        float r10743569 = 3;
        float r10743570 = pow(r10743562, r10743569);
        float r10743571 = r10743570 * r10743570;
        float r10743572 = r10743568 * r10743571;
        float r10743573 = r10743562 * r10743562;
        float r10743574 = -9.333333;
        float r10743575 = r10743574 * r10743562;
        float r10743576 = 14.0;
        float r10743577 = r10743575 + r10743576;
        float r10743578 = r10743573 * r10743577;
        float r10743579 = 1.0;
        float r10743580 = -8.0;
        float r10743581 = r10743580 * r10743562;
        float r10743582 = r10743579 + r10743581;
        float r10743583 = r10743578 + r10743582;
        float r10743584 = r10743572 + r10743583;
        float r10743585 = r10743573 * r10743573;
        float r10743586 = -0.466667;
        float r10743587 = r10743562 * r10743586;
        float r10743588 = 2.916667;
        float r10743589 = r10743587 + r10743588;
        float r10743590 = r10743585 * r10743589;
        float r10743591 = r10743584 + r10743590;
        return r10743591;
}

double f_od(double x) {
        double r10743592 = 0.038889;
        double r10743593 = -0.001587;
        double r10743594 = x;
        double r10743595 = r10743593 * r10743594;
        double r10743596 = r10743592 + r10743595;
        double r10743597 = 2.5e-05;
        double r10743598 = r10743594 * r10743597;
        double r10743599 = r10743594 * r10743598;
        double r10743600 = r10743596 + r10743599;
        double r10743601 = 3;
        double r10743602 = pow(r10743594, r10743601);
        double r10743603 = r10743602 * r10743602;
        double r10743604 = r10743600 * r10743603;
        double r10743605 = r10743594 * r10743594;
        double r10743606 = -9.333333;
        double r10743607 = r10743606 * r10743594;
        double r10743608 = 14.0;
        double r10743609 = r10743607 + r10743608;
        double r10743610 = r10743605 * r10743609;
        double r10743611 = 1.0;
        double r10743612 = -8.0;
        double r10743613 = r10743612 * r10743594;
        double r10743614 = r10743611 + r10743613;
        double r10743615 = r10743610 + r10743614;
        double r10743616 = r10743604 + r10743615;
        double r10743617 = r10743605 * r10743605;
        double r10743618 = -0.466667;
        double r10743619 = r10743594 * r10743618;
        double r10743620 = 2.916667;
        double r10743621 = r10743619 + r10743620;
        double r10743622 = r10743617 * r10743621;
        double r10743623 = r10743616 + r10743622;
        return r10743623;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10743624, r10743625, r10743626, r10743627, r10743628, r10743629, r10743630, r10743631, r10743632, r10743633, r10743634, r10743635, r10743636, r10743637, r10743638, r10743639, r10743640, r10743641, r10743642, r10743643, r10743644, r10743645, r10743646, r10743647, r10743648, r10743649, r10743650, r10743651, r10743652, r10743653, r10743654, r10743655, r10743656;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10743624, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10743625, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10743626);
        mpfr_init(r10743627);
        mpfr_init(r10743628);
        mpfr_init_set_str(r10743629, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10743630);
        mpfr_init(r10743631);
        mpfr_init(r10743632);
        mpfr_init_set_str(r10743633, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10743634);
        mpfr_init(r10743635);
        mpfr_init(r10743636);
        mpfr_init_set_str(r10743637, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10743638);
        mpfr_init(r10743639);
        mpfr_init(r10743640);
        mpfr_init_set_str(r10743641, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10743642);
        mpfr_init(r10743643);
        mpfr_init(r10743644);
        mpfr_init_set_str(r10743645, "0.038889", 10, MPFR_RNDN);
        mpfr_init(r10743646);
        mpfr_init(r10743647);
        mpfr_init(r10743648);
        mpfr_init_set_str(r10743649, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10743650);
        mpfr_init(r10743651);
        mpfr_init(r10743652);
        mpfr_init_set_str(r10743653, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10743654);
        mpfr_init(r10743655);
        mpfr_init(r10743656);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10743626, x, MPFR_RNDN);
        mpfr_mul(r10743627, r10743625, r10743626, MPFR_RNDN);
        mpfr_add(r10743628, r10743624, r10743627, MPFR_RNDN);
        ;
        mpfr_mul(r10743630, r10743626, r10743626, MPFR_RNDN);
        mpfr_mul(r10743631, r10743629, r10743630, MPFR_RNDN);
        mpfr_add(r10743632, r10743628, r10743631, MPFR_RNDN);
        ;
        mpfr_mul(r10743634, r10743630, r10743626, MPFR_RNDN);
        mpfr_mul(r10743635, r10743633, r10743634, MPFR_RNDN);
        mpfr_add(r10743636, r10743632, r10743635, MPFR_RNDN);
        ;
        mpfr_mul(r10743638, r10743634, r10743626, MPFR_RNDN);
        mpfr_mul(r10743639, r10743637, r10743638, MPFR_RNDN);
        mpfr_add(r10743640, r10743636, r10743639, MPFR_RNDN);
        ;
        mpfr_mul(r10743642, r10743638, r10743626, MPFR_RNDN);
        mpfr_mul(r10743643, r10743641, r10743642, MPFR_RNDN);
        mpfr_add(r10743644, r10743640, r10743643, MPFR_RNDN);
        ;
        mpfr_mul(r10743646, r10743642, r10743626, MPFR_RNDN);
        mpfr_mul(r10743647, r10743645, r10743646, MPFR_RNDN);
        mpfr_add(r10743648, r10743644, r10743647, MPFR_RNDN);
        ;
        mpfr_mul(r10743650, r10743646, r10743626, MPFR_RNDN);
        mpfr_mul(r10743651, r10743649, r10743650, MPFR_RNDN);
        mpfr_add(r10743652, r10743648, r10743651, MPFR_RNDN);
        ;
        mpfr_mul(r10743654, r10743650, r10743626, MPFR_RNDN);
        mpfr_mul(r10743655, r10743653, r10743654, MPFR_RNDN);
        mpfr_add(r10743656, r10743652, r10743655, MPFR_RNDN);
        return mpfr_get_d(r10743656, MPFR_RNDN);
}

static mpfr_t r10743657, r10743658, r10743659, r10743660, r10743661, r10743662, r10743663, r10743664, r10743665, r10743666, r10743667, r10743668, r10743669, r10743670, r10743671, r10743672, r10743673, r10743674, r10743675, r10743676, r10743677, r10743678, r10743679, r10743680, r10743681, r10743682, r10743683, r10743684, r10743685, r10743686, r10743687, r10743688;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10743657, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r10743658, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10743659);
        mpfr_init(r10743660);
        mpfr_init(r10743661);
        mpfr_init_set_str(r10743662, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10743663);
        mpfr_init(r10743664);
        mpfr_init(r10743665);
        mpfr_init_set_str(r10743666, "3", 10, MPFR_RNDN);
        mpfr_init(r10743667);
        mpfr_init(r10743668);
        mpfr_init(r10743669);
        mpfr_init(r10743670);
        mpfr_init_set_str(r10743671, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10743672);
        mpfr_init_set_str(r10743673, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10743674);
        mpfr_init(r10743675);
        mpfr_init_set_str(r10743676, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10743677, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10743678);
        mpfr_init(r10743679);
        mpfr_init(r10743680);
        mpfr_init(r10743681);
        mpfr_init(r10743682);
        mpfr_init_set_str(r10743683, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10743684);
        mpfr_init_set_str(r10743685, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10743686);
        mpfr_init(r10743687);
        mpfr_init(r10743688);
}

double f_fm(double x) {
        ;
        ;
        mpfr_set_d(r10743659, x, MPFR_RNDN);
        mpfr_mul(r10743660, r10743658, r10743659, MPFR_RNDN);
        mpfr_add(r10743661, r10743657, r10743660, MPFR_RNDN);
        ;
        mpfr_mul(r10743663, r10743659, r10743662, MPFR_RNDN);
        mpfr_mul(r10743664, r10743659, r10743663, MPFR_RNDN);
        mpfr_add(r10743665, r10743661, r10743664, MPFR_RNDN);
        ;
        mpfr_pow(r10743667, r10743659, r10743666, MPFR_RNDN);
        mpfr_mul(r10743668, r10743667, r10743667, MPFR_RNDN);
        mpfr_mul(r10743669, r10743665, r10743668, MPFR_RNDN);
        mpfr_mul(r10743670, r10743659, r10743659, MPFR_RNDN);
        ;
        mpfr_mul(r10743672, r10743671, r10743659, MPFR_RNDN);
        ;
        mpfr_add(r10743674, r10743672, r10743673, MPFR_RNDN);
        mpfr_mul(r10743675, r10743670, r10743674, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10743678, r10743677, r10743659, MPFR_RNDN);
        mpfr_add(r10743679, r10743676, r10743678, MPFR_RNDN);
        mpfr_add(r10743680, r10743675, r10743679, MPFR_RNDN);
        mpfr_add(r10743681, r10743669, r10743680, MPFR_RNDN);
        mpfr_mul(r10743682, r10743670, r10743670, MPFR_RNDN);
        ;
        mpfr_mul(r10743684, r10743659, r10743683, MPFR_RNDN);
        ;
        mpfr_add(r10743686, r10743684, r10743685, MPFR_RNDN);
        mpfr_mul(r10743687, r10743682, r10743686, MPFR_RNDN);
        mpfr_add(r10743688, r10743681, r10743687, MPFR_RNDN);
        return mpfr_get_d(r10743688, MPFR_RNDN);
}

static mpfr_t r10743689, r10743690, r10743691, r10743692, r10743693, r10743694, r10743695, r10743696, r10743697, r10743698, r10743699, r10743700, r10743701, r10743702, r10743703, r10743704, r10743705, r10743706, r10743707, r10743708, r10743709, r10743710, r10743711, r10743712, r10743713, r10743714, r10743715, r10743716, r10743717, r10743718, r10743719, r10743720;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10743689, "0.038889", 10, MPFR_RNDN);
        mpfr_init_set_str(r10743690, "-0.001587", 10, MPFR_RNDN);
        mpfr_init(r10743691);
        mpfr_init(r10743692);
        mpfr_init(r10743693);
        mpfr_init_set_str(r10743694, "2.5e-05", 10, MPFR_RNDN);
        mpfr_init(r10743695);
        mpfr_init(r10743696);
        mpfr_init(r10743697);
        mpfr_init_set_str(r10743698, "3", 10, MPFR_RNDN);
        mpfr_init(r10743699);
        mpfr_init(r10743700);
        mpfr_init(r10743701);
        mpfr_init(r10743702);
        mpfr_init_set_str(r10743703, "-9.333333", 10, MPFR_RNDN);
        mpfr_init(r10743704);
        mpfr_init_set_str(r10743705, "14.0", 10, MPFR_RNDN);
        mpfr_init(r10743706);
        mpfr_init(r10743707);
        mpfr_init_set_str(r10743708, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10743709, "-8.0", 10, MPFR_RNDN);
        mpfr_init(r10743710);
        mpfr_init(r10743711);
        mpfr_init(r10743712);
        mpfr_init(r10743713);
        mpfr_init(r10743714);
        mpfr_init_set_str(r10743715, "-0.466667", 10, MPFR_RNDN);
        mpfr_init(r10743716);
        mpfr_init_set_str(r10743717, "2.916667", 10, MPFR_RNDN);
        mpfr_init(r10743718);
        mpfr_init(r10743719);
        mpfr_init(r10743720);
}

double f_dm(double x) {
        ;
        ;
        mpfr_set_d(r10743691, x, MPFR_RNDN);
        mpfr_mul(r10743692, r10743690, r10743691, MPFR_RNDN);
        mpfr_add(r10743693, r10743689, r10743692, MPFR_RNDN);
        ;
        mpfr_mul(r10743695, r10743691, r10743694, MPFR_RNDN);
        mpfr_mul(r10743696, r10743691, r10743695, MPFR_RNDN);
        mpfr_add(r10743697, r10743693, r10743696, MPFR_RNDN);
        ;
        mpfr_pow(r10743699, r10743691, r10743698, MPFR_RNDN);
        mpfr_mul(r10743700, r10743699, r10743699, MPFR_RNDN);
        mpfr_mul(r10743701, r10743697, r10743700, MPFR_RNDN);
        mpfr_mul(r10743702, r10743691, r10743691, MPFR_RNDN);
        ;
        mpfr_mul(r10743704, r10743703, r10743691, MPFR_RNDN);
        ;
        mpfr_add(r10743706, r10743704, r10743705, MPFR_RNDN);
        mpfr_mul(r10743707, r10743702, r10743706, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10743710, r10743709, r10743691, MPFR_RNDN);
        mpfr_add(r10743711, r10743708, r10743710, MPFR_RNDN);
        mpfr_add(r10743712, r10743707, r10743711, MPFR_RNDN);
        mpfr_add(r10743713, r10743701, r10743712, MPFR_RNDN);
        mpfr_mul(r10743714, r10743702, r10743702, MPFR_RNDN);
        ;
        mpfr_mul(r10743716, r10743691, r10743715, MPFR_RNDN);
        ;
        mpfr_add(r10743718, r10743716, r10743717, MPFR_RNDN);
        mpfr_mul(r10743719, r10743714, r10743718, MPFR_RNDN);
        mpfr_add(r10743720, r10743713, r10743719, MPFR_RNDN);
        return mpfr_get_d(r10743720, MPFR_RNDN);
}

