#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r7081433 = -17297280.0;
        float r7081434 = 242161920.0;
        float r7081435 = x;
        float r7081436 = r7081435 * r7081435;
        float r7081437 = r7081434 * r7081436;
        float r7081438 = r7081433 + r7081437;
        float r7081439 = -484323840.0;
        float r7081440 = r7081436 * r7081435;
        float r7081441 = r7081440 * r7081435;
        float r7081442 = r7081439 * r7081441;
        float r7081443 = r7081438 + r7081442;
        float r7081444 = 322882560.0;
        float r7081445 = r7081441 * r7081435;
        float r7081446 = r7081445 * r7081435;
        float r7081447 = r7081444 * r7081446;
        float r7081448 = r7081443 + r7081447;
        float r7081449 = -92252160.0;
        float r7081450 = r7081446 * r7081435;
        float r7081451 = r7081450 * r7081435;
        float r7081452 = r7081449 * r7081451;
        float r7081453 = r7081448 + r7081452;
        float r7081454 = 12300288.0;
        float r7081455 = r7081451 * r7081435;
        float r7081456 = r7081455 * r7081435;
        float r7081457 = r7081454 * r7081456;
        float r7081458 = r7081453 + r7081457;
        float r7081459 = -745472.0;
        float r7081460 = r7081456 * r7081435;
        float r7081461 = r7081460 * r7081435;
        float r7081462 = r7081459 * r7081461;
        float r7081463 = r7081458 + r7081462;
        float r7081464 = 16384.0;
        float r7081465 = r7081461 * r7081435;
        float r7081466 = r7081465 * r7081435;
        float r7081467 = r7081464 * r7081466;
        float r7081468 = r7081463 + r7081467;
        return r7081468;
}

double f_id(double x) {
        double r7081469 = -17297280.0;
        double r7081470 = 242161920.0;
        double r7081471 = x;
        double r7081472 = r7081471 * r7081471;
        double r7081473 = r7081470 * r7081472;
        double r7081474 = r7081469 + r7081473;
        double r7081475 = -484323840.0;
        double r7081476 = r7081472 * r7081471;
        double r7081477 = r7081476 * r7081471;
        double r7081478 = r7081475 * r7081477;
        double r7081479 = r7081474 + r7081478;
        double r7081480 = 322882560.0;
        double r7081481 = r7081477 * r7081471;
        double r7081482 = r7081481 * r7081471;
        double r7081483 = r7081480 * r7081482;
        double r7081484 = r7081479 + r7081483;
        double r7081485 = -92252160.0;
        double r7081486 = r7081482 * r7081471;
        double r7081487 = r7081486 * r7081471;
        double r7081488 = r7081485 * r7081487;
        double r7081489 = r7081484 + r7081488;
        double r7081490 = 12300288.0;
        double r7081491 = r7081487 * r7081471;
        double r7081492 = r7081491 * r7081471;
        double r7081493 = r7081490 * r7081492;
        double r7081494 = r7081489 + r7081493;
        double r7081495 = -745472.0;
        double r7081496 = r7081492 * r7081471;
        double r7081497 = r7081496 * r7081471;
        double r7081498 = r7081495 * r7081497;
        double r7081499 = r7081494 + r7081498;
        double r7081500 = 16384.0;
        double r7081501 = r7081497 * r7081471;
        double r7081502 = r7081501 * r7081471;
        double r7081503 = r7081500 * r7081502;
        double r7081504 = r7081499 + r7081503;
        return r7081504;
}


double f_of(float x) {
        float r7081505 = x;
        float r7081506 = r7081505 * r7081505;
        float r7081507 = r7081506 * r7081506;
        float r7081508 = r7081507 * r7081507;
        float r7081509 = r7081507 * r7081508;
        float r7081510 = 16384.0;
        float r7081511 = r7081505 * r7081510;
        float r7081512 = r7081505 * r7081511;
        float r7081513 = -745472.0;
        float r7081514 = r7081512 + r7081513;
        float r7081515 = r7081509 * r7081514;
        float r7081516 = 242161920.0;
        float r7081517 = r7081505 * r7081516;
        float r7081518 = r7081517 * r7081505;
        float r7081519 = -17297280.0;
        float r7081520 = r7081518 + r7081519;
        float r7081521 = -484323840.0;
        float r7081522 = 322882560.0;
        float r7081523 = r7081522 * r7081505;
        float r7081524 = r7081505 * r7081523;
        float r7081525 = r7081521 + r7081524;
        float r7081526 = r7081507 * r7081525;
        float r7081527 = r7081520 + r7081526;
        float r7081528 = r7081515 + r7081527;
        float r7081529 = 12300288.0;
        float r7081530 = r7081529 * r7081506;
        float r7081531 = -92252160.0;
        float r7081532 = r7081530 + r7081531;
        float r7081533 = r7081508 * r7081532;
        float r7081534 = r7081528 + r7081533;
        return r7081534;
}

double f_od(double x) {
        double r7081535 = x;
        double r7081536 = r7081535 * r7081535;
        double r7081537 = r7081536 * r7081536;
        double r7081538 = r7081537 * r7081537;
        double r7081539 = r7081537 * r7081538;
        double r7081540 = 16384.0;
        double r7081541 = r7081535 * r7081540;
        double r7081542 = r7081535 * r7081541;
        double r7081543 = -745472.0;
        double r7081544 = r7081542 + r7081543;
        double r7081545 = r7081539 * r7081544;
        double r7081546 = 242161920.0;
        double r7081547 = r7081535 * r7081546;
        double r7081548 = r7081547 * r7081535;
        double r7081549 = -17297280.0;
        double r7081550 = r7081548 + r7081549;
        double r7081551 = -484323840.0;
        double r7081552 = 322882560.0;
        double r7081553 = r7081552 * r7081535;
        double r7081554 = r7081535 * r7081553;
        double r7081555 = r7081551 + r7081554;
        double r7081556 = r7081537 * r7081555;
        double r7081557 = r7081550 + r7081556;
        double r7081558 = r7081545 + r7081557;
        double r7081559 = 12300288.0;
        double r7081560 = r7081559 * r7081536;
        double r7081561 = -92252160.0;
        double r7081562 = r7081560 + r7081561;
        double r7081563 = r7081538 * r7081562;
        double r7081564 = r7081558 + r7081563;
        return r7081564;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7081565, r7081566, r7081567, r7081568, r7081569, r7081570, r7081571, r7081572, r7081573, r7081574, r7081575, r7081576, r7081577, r7081578, r7081579, r7081580, r7081581, r7081582, r7081583, r7081584, r7081585, r7081586, r7081587, r7081588, r7081589, r7081590, r7081591, r7081592, r7081593, r7081594, r7081595, r7081596, r7081597, r7081598, r7081599, r7081600;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7081565, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081566, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7081567);
        mpfr_init(r7081568);
        mpfr_init(r7081569);
        mpfr_init(r7081570);
        mpfr_init_set_str(r7081571, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init(r7081572);
        mpfr_init(r7081573);
        mpfr_init(r7081574);
        mpfr_init(r7081575);
        mpfr_init_set_str(r7081576, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7081577);
        mpfr_init(r7081578);
        mpfr_init(r7081579);
        mpfr_init(r7081580);
        mpfr_init_set_str(r7081581, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7081582);
        mpfr_init(r7081583);
        mpfr_init(r7081584);
        mpfr_init(r7081585);
        mpfr_init_set_str(r7081586, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7081587);
        mpfr_init(r7081588);
        mpfr_init(r7081589);
        mpfr_init(r7081590);
        mpfr_init_set_str(r7081591, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7081592);
        mpfr_init(r7081593);
        mpfr_init(r7081594);
        mpfr_init(r7081595);
        mpfr_init_set_str(r7081596, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7081597);
        mpfr_init(r7081598);
        mpfr_init(r7081599);
        mpfr_init(r7081600);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7081567, x, MPFR_RNDN);
        mpfr_mul(r7081568, r7081567, r7081567, MPFR_RNDN);
        mpfr_mul(r7081569, r7081566, r7081568, MPFR_RNDN);
        mpfr_add(r7081570, r7081565, r7081569, MPFR_RNDN);
        ;
        mpfr_mul(r7081572, r7081568, r7081567, MPFR_RNDN);
        mpfr_mul(r7081573, r7081572, r7081567, MPFR_RNDN);
        mpfr_mul(r7081574, r7081571, r7081573, MPFR_RNDN);
        mpfr_add(r7081575, r7081570, r7081574, MPFR_RNDN);
        ;
        mpfr_mul(r7081577, r7081573, r7081567, MPFR_RNDN);
        mpfr_mul(r7081578, r7081577, r7081567, MPFR_RNDN);
        mpfr_mul(r7081579, r7081576, r7081578, MPFR_RNDN);
        mpfr_add(r7081580, r7081575, r7081579, MPFR_RNDN);
        ;
        mpfr_mul(r7081582, r7081578, r7081567, MPFR_RNDN);
        mpfr_mul(r7081583, r7081582, r7081567, MPFR_RNDN);
        mpfr_mul(r7081584, r7081581, r7081583, MPFR_RNDN);
        mpfr_add(r7081585, r7081580, r7081584, MPFR_RNDN);
        ;
        mpfr_mul(r7081587, r7081583, r7081567, MPFR_RNDN);
        mpfr_mul(r7081588, r7081587, r7081567, MPFR_RNDN);
        mpfr_mul(r7081589, r7081586, r7081588, MPFR_RNDN);
        mpfr_add(r7081590, r7081585, r7081589, MPFR_RNDN);
        ;
        mpfr_mul(r7081592, r7081588, r7081567, MPFR_RNDN);
        mpfr_mul(r7081593, r7081592, r7081567, MPFR_RNDN);
        mpfr_mul(r7081594, r7081591, r7081593, MPFR_RNDN);
        mpfr_add(r7081595, r7081590, r7081594, MPFR_RNDN);
        ;
        mpfr_mul(r7081597, r7081593, r7081567, MPFR_RNDN);
        mpfr_mul(r7081598, r7081597, r7081567, MPFR_RNDN);
        mpfr_mul(r7081599, r7081596, r7081598, MPFR_RNDN);
        mpfr_add(r7081600, r7081595, r7081599, MPFR_RNDN);
        return mpfr_get_d(r7081600, MPFR_RNDN);
}

static mpfr_t r7081601, r7081602, r7081603, r7081604, r7081605, r7081606, r7081607, r7081608, r7081609, r7081610, r7081611, r7081612, r7081613, r7081614, r7081615, r7081616, r7081617, r7081618, r7081619, r7081620, r7081621, r7081622, r7081623, r7081624, r7081625, r7081626, r7081627, r7081628, r7081629, r7081630;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7081601);
        mpfr_init(r7081602);
        mpfr_init(r7081603);
        mpfr_init(r7081604);
        mpfr_init(r7081605);
        mpfr_init_set_str(r7081606, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7081607);
        mpfr_init(r7081608);
        mpfr_init_set_str(r7081609, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7081610);
        mpfr_init(r7081611);
        mpfr_init_set_str(r7081612, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7081613);
        mpfr_init(r7081614);
        mpfr_init_set_str(r7081615, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7081616);
        mpfr_init_set_str(r7081617, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081618, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7081619);
        mpfr_init(r7081620);
        mpfr_init(r7081621);
        mpfr_init(r7081622);
        mpfr_init(r7081623);
        mpfr_init(r7081624);
        mpfr_init_set_str(r7081625, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7081626);
        mpfr_init_set_str(r7081627, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7081628);
        mpfr_init(r7081629);
        mpfr_init(r7081630);
}

double f_fm(double x) {
        mpfr_set_d(r7081601, x, MPFR_RNDN);
        mpfr_mul(r7081602, r7081601, r7081601, MPFR_RNDN);
        mpfr_mul(r7081603, r7081602, r7081602, MPFR_RNDN);
        mpfr_mul(r7081604, r7081603, r7081603, MPFR_RNDN);
        mpfr_mul(r7081605, r7081603, r7081604, MPFR_RNDN);
        ;
        mpfr_mul(r7081607, r7081601, r7081606, MPFR_RNDN);
        mpfr_mul(r7081608, r7081601, r7081607, MPFR_RNDN);
        ;
        mpfr_add(r7081610, r7081608, r7081609, MPFR_RNDN);
        mpfr_mul(r7081611, r7081605, r7081610, MPFR_RNDN);
        ;
        mpfr_mul(r7081613, r7081601, r7081612, MPFR_RNDN);
        mpfr_mul(r7081614, r7081613, r7081601, MPFR_RNDN);
        ;
        mpfr_add(r7081616, r7081614, r7081615, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7081619, r7081618, r7081601, MPFR_RNDN);
        mpfr_mul(r7081620, r7081601, r7081619, MPFR_RNDN);
        mpfr_add(r7081621, r7081617, r7081620, MPFR_RNDN);
        mpfr_mul(r7081622, r7081603, r7081621, MPFR_RNDN);
        mpfr_add(r7081623, r7081616, r7081622, MPFR_RNDN);
        mpfr_add(r7081624, r7081611, r7081623, MPFR_RNDN);
        ;
        mpfr_mul(r7081626, r7081625, r7081602, MPFR_RNDN);
        ;
        mpfr_add(r7081628, r7081626, r7081627, MPFR_RNDN);
        mpfr_mul(r7081629, r7081604, r7081628, MPFR_RNDN);
        mpfr_add(r7081630, r7081624, r7081629, MPFR_RNDN);
        return mpfr_get_d(r7081630, MPFR_RNDN);
}

static mpfr_t r7081631, r7081632, r7081633, r7081634, r7081635, r7081636, r7081637, r7081638, r7081639, r7081640, r7081641, r7081642, r7081643, r7081644, r7081645, r7081646, r7081647, r7081648, r7081649, r7081650, r7081651, r7081652, r7081653, r7081654, r7081655, r7081656, r7081657, r7081658, r7081659, r7081660;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7081631);
        mpfr_init(r7081632);
        mpfr_init(r7081633);
        mpfr_init(r7081634);
        mpfr_init(r7081635);
        mpfr_init_set_str(r7081636, "16384.0", 10, MPFR_RNDN);
        mpfr_init(r7081637);
        mpfr_init(r7081638);
        mpfr_init_set_str(r7081639, "-745472.0", 10, MPFR_RNDN);
        mpfr_init(r7081640);
        mpfr_init(r7081641);
        mpfr_init_set_str(r7081642, "242161920.0", 10, MPFR_RNDN);
        mpfr_init(r7081643);
        mpfr_init(r7081644);
        mpfr_init_set_str(r7081645, "-17297280.0", 10, MPFR_RNDN);
        mpfr_init(r7081646);
        mpfr_init_set_str(r7081647, "-484323840.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r7081648, "322882560.0", 10, MPFR_RNDN);
        mpfr_init(r7081649);
        mpfr_init(r7081650);
        mpfr_init(r7081651);
        mpfr_init(r7081652);
        mpfr_init(r7081653);
        mpfr_init(r7081654);
        mpfr_init_set_str(r7081655, "12300288.0", 10, MPFR_RNDN);
        mpfr_init(r7081656);
        mpfr_init_set_str(r7081657, "-92252160.0", 10, MPFR_RNDN);
        mpfr_init(r7081658);
        mpfr_init(r7081659);
        mpfr_init(r7081660);
}

double f_dm(double x) {
        mpfr_set_d(r7081631, x, MPFR_RNDN);
        mpfr_mul(r7081632, r7081631, r7081631, MPFR_RNDN);
        mpfr_mul(r7081633, r7081632, r7081632, MPFR_RNDN);
        mpfr_mul(r7081634, r7081633, r7081633, MPFR_RNDN);
        mpfr_mul(r7081635, r7081633, r7081634, MPFR_RNDN);
        ;
        mpfr_mul(r7081637, r7081631, r7081636, MPFR_RNDN);
        mpfr_mul(r7081638, r7081631, r7081637, MPFR_RNDN);
        ;
        mpfr_add(r7081640, r7081638, r7081639, MPFR_RNDN);
        mpfr_mul(r7081641, r7081635, r7081640, MPFR_RNDN);
        ;
        mpfr_mul(r7081643, r7081631, r7081642, MPFR_RNDN);
        mpfr_mul(r7081644, r7081643, r7081631, MPFR_RNDN);
        ;
        mpfr_add(r7081646, r7081644, r7081645, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7081649, r7081648, r7081631, MPFR_RNDN);
        mpfr_mul(r7081650, r7081631, r7081649, MPFR_RNDN);
        mpfr_add(r7081651, r7081647, r7081650, MPFR_RNDN);
        mpfr_mul(r7081652, r7081633, r7081651, MPFR_RNDN);
        mpfr_add(r7081653, r7081646, r7081652, MPFR_RNDN);
        mpfr_add(r7081654, r7081641, r7081653, MPFR_RNDN);
        ;
        mpfr_mul(r7081656, r7081655, r7081632, MPFR_RNDN);
        ;
        mpfr_add(r7081658, r7081656, r7081657, MPFR_RNDN);
        mpfr_mul(r7081659, r7081634, r7081658, MPFR_RNDN);
        mpfr_add(r7081660, r7081654, r7081659, MPFR_RNDN);
        return mpfr_get_d(r7081660, MPFR_RNDN);
}

