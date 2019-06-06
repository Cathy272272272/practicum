#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "13";

double f_if(float x) {
        float r6328538 = 17297280.0;
        float r6328539 = x;
        float r6328540 = r6328538 * r6328539;
        float r6328541 = -69189120.0;
        float r6328542 = r6328539 * r6328539;
        float r6328543 = r6328542 * r6328539;
        float r6328544 = r6328541 * r6328543;
        float r6328545 = r6328540 + r6328544;
        float r6328546 = 69189120.0;
        float r6328547 = r6328543 * r6328539;
        float r6328548 = r6328547 * r6328539;
        float r6328549 = r6328546 * r6328548;
        float r6328550 = r6328545 + r6328549;
        float r6328551 = -26357760.0;
        float r6328552 = r6328548 * r6328539;
        float r6328553 = r6328552 * r6328539;
        float r6328554 = r6328551 * r6328553;
        float r6328555 = r6328550 + r6328554;
        float r6328556 = 4392960.0;
        float r6328557 = r6328553 * r6328539;
        float r6328558 = r6328557 * r6328539;
        float r6328559 = r6328556 * r6328558;
        float r6328560 = r6328555 + r6328559;
        float r6328561 = -319488.0;
        float r6328562 = r6328558 * r6328539;
        float r6328563 = r6328562 * r6328539;
        float r6328564 = r6328561 * r6328563;
        float r6328565 = r6328560 + r6328564;
        float r6328566 = 8192.0;
        float r6328567 = r6328563 * r6328539;
        float r6328568 = r6328567 * r6328539;
        float r6328569 = r6328566 * r6328568;
        float r6328570 = r6328565 + r6328569;
        return r6328570;
}

double f_id(double x) {
        double r6328571 = 17297280.0;
        double r6328572 = x;
        double r6328573 = r6328571 * r6328572;
        double r6328574 = -69189120.0;
        double r6328575 = r6328572 * r6328572;
        double r6328576 = r6328575 * r6328572;
        double r6328577 = r6328574 * r6328576;
        double r6328578 = r6328573 + r6328577;
        double r6328579 = 69189120.0;
        double r6328580 = r6328576 * r6328572;
        double r6328581 = r6328580 * r6328572;
        double r6328582 = r6328579 * r6328581;
        double r6328583 = r6328578 + r6328582;
        double r6328584 = -26357760.0;
        double r6328585 = r6328581 * r6328572;
        double r6328586 = r6328585 * r6328572;
        double r6328587 = r6328584 * r6328586;
        double r6328588 = r6328583 + r6328587;
        double r6328589 = 4392960.0;
        double r6328590 = r6328586 * r6328572;
        double r6328591 = r6328590 * r6328572;
        double r6328592 = r6328589 * r6328591;
        double r6328593 = r6328588 + r6328592;
        double r6328594 = -319488.0;
        double r6328595 = r6328591 * r6328572;
        double r6328596 = r6328595 * r6328572;
        double r6328597 = r6328594 * r6328596;
        double r6328598 = r6328593 + r6328597;
        double r6328599 = 8192.0;
        double r6328600 = r6328596 * r6328572;
        double r6328601 = r6328600 * r6328572;
        double r6328602 = r6328599 * r6328601;
        double r6328603 = r6328598 + r6328602;
        return r6328603;
}


double f_of(float x) {
        float r6328604 = x;
        float r6328605 = r6328604 * r6328604;
        float r6328606 = 3;
        float r6328607 = pow(r6328604, r6328606);
        float r6328608 = r6328607 * r6328607;
        float r6328609 = r6328607 * r6328608;
        float r6328610 = r6328605 * r6328609;
        float r6328611 = 8192.0;
        float r6328612 = r6328605 * r6328611;
        float r6328613 = -319488.0;
        float r6328614 = r6328612 + r6328613;
        float r6328615 = r6328610 * r6328614;
        float r6328616 = 69189120.0;
        float r6328617 = r6328604 * r6328616;
        float r6328618 = r6328617 * r6328605;
        float r6328619 = r6328605 * r6328618;
        float r6328620 = 17297280.0;
        float r6328621 = r6328620 * r6328604;
        float r6328622 = -69189120.0;
        float r6328623 = r6328622 * r6328604;
        float r6328624 = r6328605 * r6328623;
        float r6328625 = r6328621 + r6328624;
        float r6328626 = r6328619 + r6328625;
        float r6328627 = r6328608 * r6328604;
        float r6328628 = -26357760.0;
        float r6328629 = 4392960.0;
        float r6328630 = r6328629 * r6328604;
        float r6328631 = r6328604 * r6328630;
        float r6328632 = r6328628 + r6328631;
        float r6328633 = r6328627 * r6328632;
        float r6328634 = r6328626 + r6328633;
        float r6328635 = r6328615 + r6328634;
        return r6328635;
}

double f_od(double x) {
        double r6328636 = x;
        double r6328637 = r6328636 * r6328636;
        double r6328638 = 3;
        double r6328639 = pow(r6328636, r6328638);
        double r6328640 = r6328639 * r6328639;
        double r6328641 = r6328639 * r6328640;
        double r6328642 = r6328637 * r6328641;
        double r6328643 = 8192.0;
        double r6328644 = r6328637 * r6328643;
        double r6328645 = -319488.0;
        double r6328646 = r6328644 + r6328645;
        double r6328647 = r6328642 * r6328646;
        double r6328648 = 69189120.0;
        double r6328649 = r6328636 * r6328648;
        double r6328650 = r6328649 * r6328637;
        double r6328651 = r6328637 * r6328650;
        double r6328652 = 17297280.0;
        double r6328653 = r6328652 * r6328636;
        double r6328654 = -69189120.0;
        double r6328655 = r6328654 * r6328636;
        double r6328656 = r6328637 * r6328655;
        double r6328657 = r6328653 + r6328656;
        double r6328658 = r6328651 + r6328657;
        double r6328659 = r6328640 * r6328636;
        double r6328660 = -26357760.0;
        double r6328661 = 4392960.0;
        double r6328662 = r6328661 * r6328636;
        double r6328663 = r6328636 * r6328662;
        double r6328664 = r6328660 + r6328663;
        double r6328665 = r6328659 * r6328664;
        double r6328666 = r6328658 + r6328665;
        double r6328667 = r6328647 + r6328666;
        return r6328667;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6328668, r6328669, r6328670, r6328671, r6328672, r6328673, r6328674, r6328675, r6328676, r6328677, r6328678, r6328679, r6328680, r6328681, r6328682, r6328683, r6328684, r6328685, r6328686, r6328687, r6328688, r6328689, r6328690, r6328691, r6328692, r6328693, r6328694, r6328695, r6328696, r6328697, r6328698, r6328699, r6328700;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r6328668, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6328669);
        mpfr_init(r6328670);
        mpfr_init_set_str(r6328671, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r6328672);
        mpfr_init(r6328673);
        mpfr_init(r6328674);
        mpfr_init(r6328675);
        mpfr_init_set_str(r6328676, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r6328677);
        mpfr_init(r6328678);
        mpfr_init(r6328679);
        mpfr_init(r6328680);
        mpfr_init_set_str(r6328681, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init(r6328682);
        mpfr_init(r6328683);
        mpfr_init(r6328684);
        mpfr_init(r6328685);
        mpfr_init_set_str(r6328686, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r6328687);
        mpfr_init(r6328688);
        mpfr_init(r6328689);
        mpfr_init(r6328690);
        mpfr_init_set_str(r6328691, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r6328692);
        mpfr_init(r6328693);
        mpfr_init(r6328694);
        mpfr_init(r6328695);
        mpfr_init_set_str(r6328696, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r6328697);
        mpfr_init(r6328698);
        mpfr_init(r6328699);
        mpfr_init(r6328700);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6328669, x, MPFR_RNDN);
        mpfr_mul(r6328670, r6328668, r6328669, MPFR_RNDN);
        ;
        mpfr_mul(r6328672, r6328669, r6328669, MPFR_RNDN);
        mpfr_mul(r6328673, r6328672, r6328669, MPFR_RNDN);
        mpfr_mul(r6328674, r6328671, r6328673, MPFR_RNDN);
        mpfr_add(r6328675, r6328670, r6328674, MPFR_RNDN);
        ;
        mpfr_mul(r6328677, r6328673, r6328669, MPFR_RNDN);
        mpfr_mul(r6328678, r6328677, r6328669, MPFR_RNDN);
        mpfr_mul(r6328679, r6328676, r6328678, MPFR_RNDN);
        mpfr_add(r6328680, r6328675, r6328679, MPFR_RNDN);
        ;
        mpfr_mul(r6328682, r6328678, r6328669, MPFR_RNDN);
        mpfr_mul(r6328683, r6328682, r6328669, MPFR_RNDN);
        mpfr_mul(r6328684, r6328681, r6328683, MPFR_RNDN);
        mpfr_add(r6328685, r6328680, r6328684, MPFR_RNDN);
        ;
        mpfr_mul(r6328687, r6328683, r6328669, MPFR_RNDN);
        mpfr_mul(r6328688, r6328687, r6328669, MPFR_RNDN);
        mpfr_mul(r6328689, r6328686, r6328688, MPFR_RNDN);
        mpfr_add(r6328690, r6328685, r6328689, MPFR_RNDN);
        ;
        mpfr_mul(r6328692, r6328688, r6328669, MPFR_RNDN);
        mpfr_mul(r6328693, r6328692, r6328669, MPFR_RNDN);
        mpfr_mul(r6328694, r6328691, r6328693, MPFR_RNDN);
        mpfr_add(r6328695, r6328690, r6328694, MPFR_RNDN);
        ;
        mpfr_mul(r6328697, r6328693, r6328669, MPFR_RNDN);
        mpfr_mul(r6328698, r6328697, r6328669, MPFR_RNDN);
        mpfr_mul(r6328699, r6328696, r6328698, MPFR_RNDN);
        mpfr_add(r6328700, r6328695, r6328699, MPFR_RNDN);
        return mpfr_get_d(r6328700, MPFR_RNDN);
}

static mpfr_t r6328701, r6328702, r6328703, r6328704, r6328705, r6328706, r6328707, r6328708, r6328709, r6328710, r6328711, r6328712, r6328713, r6328714, r6328715, r6328716, r6328717, r6328718, r6328719, r6328720, r6328721, r6328722, r6328723, r6328724, r6328725, r6328726, r6328727, r6328728, r6328729, r6328730, r6328731, r6328732;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6328701);
        mpfr_init(r6328702);
        mpfr_init_set_str(r6328703, "3", 10, MPFR_RNDN);
        mpfr_init(r6328704);
        mpfr_init(r6328705);
        mpfr_init(r6328706);
        mpfr_init(r6328707);
        mpfr_init_set_str(r6328708, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r6328709);
        mpfr_init_set_str(r6328710, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r6328711);
        mpfr_init(r6328712);
        mpfr_init_set_str(r6328713, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r6328714);
        mpfr_init(r6328715);
        mpfr_init(r6328716);
        mpfr_init_set_str(r6328717, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6328718);
        mpfr_init_set_str(r6328719, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r6328720);
        mpfr_init(r6328721);
        mpfr_init(r6328722);
        mpfr_init(r6328723);
        mpfr_init(r6328724);
        mpfr_init_set_str(r6328725, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328726, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r6328727);
        mpfr_init(r6328728);
        mpfr_init(r6328729);
        mpfr_init(r6328730);
        mpfr_init(r6328731);
        mpfr_init(r6328732);
}

double f_fm(double x) {
        mpfr_set_d(r6328701, x, MPFR_RNDN);
        mpfr_mul(r6328702, r6328701, r6328701, MPFR_RNDN);
        ;
        mpfr_pow(r6328704, r6328701, r6328703, MPFR_RNDN);
        mpfr_mul(r6328705, r6328704, r6328704, MPFR_RNDN);
        mpfr_mul(r6328706, r6328704, r6328705, MPFR_RNDN);
        mpfr_mul(r6328707, r6328702, r6328706, MPFR_RNDN);
        ;
        mpfr_mul(r6328709, r6328702, r6328708, MPFR_RNDN);
        ;
        mpfr_add(r6328711, r6328709, r6328710, MPFR_RNDN);
        mpfr_mul(r6328712, r6328707, r6328711, MPFR_RNDN);
        ;
        mpfr_mul(r6328714, r6328701, r6328713, MPFR_RNDN);
        mpfr_mul(r6328715, r6328714, r6328702, MPFR_RNDN);
        mpfr_mul(r6328716, r6328702, r6328715, MPFR_RNDN);
        ;
        mpfr_mul(r6328718, r6328717, r6328701, MPFR_RNDN);
        ;
        mpfr_mul(r6328720, r6328719, r6328701, MPFR_RNDN);
        mpfr_mul(r6328721, r6328702, r6328720, MPFR_RNDN);
        mpfr_add(r6328722, r6328718, r6328721, MPFR_RNDN);
        mpfr_add(r6328723, r6328716, r6328722, MPFR_RNDN);
        mpfr_mul(r6328724, r6328705, r6328701, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328727, r6328726, r6328701, MPFR_RNDN);
        mpfr_mul(r6328728, r6328701, r6328727, MPFR_RNDN);
        mpfr_add(r6328729, r6328725, r6328728, MPFR_RNDN);
        mpfr_mul(r6328730, r6328724, r6328729, MPFR_RNDN);
        mpfr_add(r6328731, r6328723, r6328730, MPFR_RNDN);
        mpfr_add(r6328732, r6328712, r6328731, MPFR_RNDN);
        return mpfr_get_d(r6328732, MPFR_RNDN);
}

static mpfr_t r6328733, r6328734, r6328735, r6328736, r6328737, r6328738, r6328739, r6328740, r6328741, r6328742, r6328743, r6328744, r6328745, r6328746, r6328747, r6328748, r6328749, r6328750, r6328751, r6328752, r6328753, r6328754, r6328755, r6328756, r6328757, r6328758, r6328759, r6328760, r6328761, r6328762, r6328763, r6328764;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r6328733);
        mpfr_init(r6328734);
        mpfr_init_set_str(r6328735, "3", 10, MPFR_RNDN);
        mpfr_init(r6328736);
        mpfr_init(r6328737);
        mpfr_init(r6328738);
        mpfr_init(r6328739);
        mpfr_init_set_str(r6328740, "8192.0", 10, MPFR_RNDN);
        mpfr_init(r6328741);
        mpfr_init_set_str(r6328742, "-319488.0", 10, MPFR_RNDN);
        mpfr_init(r6328743);
        mpfr_init(r6328744);
        mpfr_init_set_str(r6328745, "69189120.0", 10, MPFR_RNDN);
        mpfr_init(r6328746);
        mpfr_init(r6328747);
        mpfr_init(r6328748);
        mpfr_init_set_str(r6328749, "17297280.0", 10, MPFR_RNDN);
        mpfr_init(r6328750);
        mpfr_init_set_str(r6328751, "-69189120.0", 10, MPFR_RNDN);
        mpfr_init(r6328752);
        mpfr_init(r6328753);
        mpfr_init(r6328754);
        mpfr_init(r6328755);
        mpfr_init(r6328756);
        mpfr_init_set_str(r6328757, "-26357760.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r6328758, "4392960.0", 10, MPFR_RNDN);
        mpfr_init(r6328759);
        mpfr_init(r6328760);
        mpfr_init(r6328761);
        mpfr_init(r6328762);
        mpfr_init(r6328763);
        mpfr_init(r6328764);
}

double f_dm(double x) {
        mpfr_set_d(r6328733, x, MPFR_RNDN);
        mpfr_mul(r6328734, r6328733, r6328733, MPFR_RNDN);
        ;
        mpfr_pow(r6328736, r6328733, r6328735, MPFR_RNDN);
        mpfr_mul(r6328737, r6328736, r6328736, MPFR_RNDN);
        mpfr_mul(r6328738, r6328736, r6328737, MPFR_RNDN);
        mpfr_mul(r6328739, r6328734, r6328738, MPFR_RNDN);
        ;
        mpfr_mul(r6328741, r6328734, r6328740, MPFR_RNDN);
        ;
        mpfr_add(r6328743, r6328741, r6328742, MPFR_RNDN);
        mpfr_mul(r6328744, r6328739, r6328743, MPFR_RNDN);
        ;
        mpfr_mul(r6328746, r6328733, r6328745, MPFR_RNDN);
        mpfr_mul(r6328747, r6328746, r6328734, MPFR_RNDN);
        mpfr_mul(r6328748, r6328734, r6328747, MPFR_RNDN);
        ;
        mpfr_mul(r6328750, r6328749, r6328733, MPFR_RNDN);
        ;
        mpfr_mul(r6328752, r6328751, r6328733, MPFR_RNDN);
        mpfr_mul(r6328753, r6328734, r6328752, MPFR_RNDN);
        mpfr_add(r6328754, r6328750, r6328753, MPFR_RNDN);
        mpfr_add(r6328755, r6328748, r6328754, MPFR_RNDN);
        mpfr_mul(r6328756, r6328737, r6328733, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r6328759, r6328758, r6328733, MPFR_RNDN);
        mpfr_mul(r6328760, r6328733, r6328759, MPFR_RNDN);
        mpfr_add(r6328761, r6328757, r6328760, MPFR_RNDN);
        mpfr_mul(r6328762, r6328756, r6328761, MPFR_RNDN);
        mpfr_add(r6328763, r6328755, r6328762, MPFR_RNDN);
        mpfr_add(r6328764, r6328744, r6328763, MPFR_RNDN);
        return mpfr_get_d(r6328764, MPFR_RNDN);
}

