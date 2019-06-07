#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "6";

double f_if(float x) {
        float r10584432 = 1.0;
        float r10584433 = -6.0;
        float r10584434 = x;
        float r10584435 = r10584433 * r10584434;
        float r10584436 = r10584432 + r10584435;
        float r10584437 = 7.5;
        float r10584438 = r10584434 * r10584434;
        float r10584439 = r10584437 * r10584438;
        float r10584440 = r10584436 + r10584439;
        float r10584441 = -3.333333;
        float r10584442 = r10584438 * r10584434;
        float r10584443 = r10584441 * r10584442;
        float r10584444 = r10584440 + r10584443;
        float r10584445 = 0.625;
        float r10584446 = r10584442 * r10584434;
        float r10584447 = r10584445 * r10584446;
        float r10584448 = r10584444 + r10584447;
        float r10584449 = -0.05;
        float r10584450 = r10584446 * r10584434;
        float r10584451 = r10584449 * r10584450;
        float r10584452 = r10584448 + r10584451;
        float r10584453 = 0.001389;
        float r10584454 = r10584450 * r10584434;
        float r10584455 = r10584453 * r10584454;
        float r10584456 = r10584452 + r10584455;
        return r10584456;
}

double f_id(double x) {
        double r10584457 = 1.0;
        double r10584458 = -6.0;
        double r10584459 = x;
        double r10584460 = r10584458 * r10584459;
        double r10584461 = r10584457 + r10584460;
        double r10584462 = 7.5;
        double r10584463 = r10584459 * r10584459;
        double r10584464 = r10584462 * r10584463;
        double r10584465 = r10584461 + r10584464;
        double r10584466 = -3.333333;
        double r10584467 = r10584463 * r10584459;
        double r10584468 = r10584466 * r10584467;
        double r10584469 = r10584465 + r10584468;
        double r10584470 = 0.625;
        double r10584471 = r10584467 * r10584459;
        double r10584472 = r10584470 * r10584471;
        double r10584473 = r10584469 + r10584472;
        double r10584474 = -0.05;
        double r10584475 = r10584471 * r10584459;
        double r10584476 = r10584474 * r10584475;
        double r10584477 = r10584473 + r10584476;
        double r10584478 = 0.001389;
        double r10584479 = r10584475 * r10584459;
        double r10584480 = r10584478 * r10584479;
        double r10584481 = r10584477 + r10584480;
        return r10584481;
}


double f_of(float x) {
        float r10584482 = x;
        float r10584483 = 0.001389;
        float r10584484 = r10584483 * r10584482;
        float r10584485 = r10584482 * r10584484;
        float r10584486 = r10584482 * r10584482;
        float r10584487 = log(r10584486);
        float r10584488 = r10584487 + r10584487;
        float r10584489 = exp(r10584488);
        float r10584490 = r10584485 * r10584489;
        float r10584491 = -6.0;
        float r10584492 = r10584482 * r10584491;
        float r10584493 = 1.0;
        float r10584494 = r10584492 + r10584493;
        float r10584495 = r10584490 + r10584494;
        float r10584496 = r10584486 * r10584486;
        float r10584497 = 0.625;
        float r10584498 = -0.05;
        float r10584499 = r10584498 * r10584482;
        float r10584500 = r10584497 + r10584499;
        float r10584501 = r10584496 * r10584500;
        float r10584502 = 3;
        float r10584503 = pow(r10584482, r10584502);
        float r10584504 = r10584503 * r10584503;
        float r10584505 = 7.5;
        float r10584506 = -3.333333;
        float r10584507 = r10584482 * r10584506;
        float r10584508 = r10584505 + r10584507;
        float r10584509 = r10584504 * r10584508;
        float r10584510 = r10584508 * r10584508;
        float r10584511 = r10584509 * r10584510;
        float r10584512 = cbrt(r10584511);
        float r10584513 = r10584501 + r10584512;
        float r10584514 = r10584495 + r10584513;
        return r10584514;
}

double f_od(double x) {
        double r10584515 = x;
        double r10584516 = 0.001389;
        double r10584517 = r10584516 * r10584515;
        double r10584518 = r10584515 * r10584517;
        double r10584519 = r10584515 * r10584515;
        double r10584520 = log(r10584519);
        double r10584521 = r10584520 + r10584520;
        double r10584522 = exp(r10584521);
        double r10584523 = r10584518 * r10584522;
        double r10584524 = -6.0;
        double r10584525 = r10584515 * r10584524;
        double r10584526 = 1.0;
        double r10584527 = r10584525 + r10584526;
        double r10584528 = r10584523 + r10584527;
        double r10584529 = r10584519 * r10584519;
        double r10584530 = 0.625;
        double r10584531 = -0.05;
        double r10584532 = r10584531 * r10584515;
        double r10584533 = r10584530 + r10584532;
        double r10584534 = r10584529 * r10584533;
        double r10584535 = 3;
        double r10584536 = pow(r10584515, r10584535);
        double r10584537 = r10584536 * r10584536;
        double r10584538 = 7.5;
        double r10584539 = -3.333333;
        double r10584540 = r10584515 * r10584539;
        double r10584541 = r10584538 + r10584540;
        double r10584542 = r10584537 * r10584541;
        double r10584543 = r10584541 * r10584541;
        double r10584544 = r10584542 * r10584543;
        double r10584545 = cbrt(r10584544);
        double r10584546 = r10584534 + r10584545;
        double r10584547 = r10584528 + r10584546;
        return r10584547;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r10584548, r10584549, r10584550, r10584551, r10584552, r10584553, r10584554, r10584555, r10584556, r10584557, r10584558, r10584559, r10584560, r10584561, r10584562, r10584563, r10584564, r10584565, r10584566, r10584567, r10584568, r10584569, r10584570, r10584571, r10584572;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r10584548, "1.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584549, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10584550);
        mpfr_init(r10584551);
        mpfr_init(r10584552);
        mpfr_init_set_str(r10584553, "7.5", 10, MPFR_RNDN);
        mpfr_init(r10584554);
        mpfr_init(r10584555);
        mpfr_init(r10584556);
        mpfr_init_set_str(r10584557, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10584558);
        mpfr_init(r10584559);
        mpfr_init(r10584560);
        mpfr_init_set_str(r10584561, "0.625", 10, MPFR_RNDN);
        mpfr_init(r10584562);
        mpfr_init(r10584563);
        mpfr_init(r10584564);
        mpfr_init_set_str(r10584565, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10584566);
        mpfr_init(r10584567);
        mpfr_init(r10584568);
        mpfr_init_set_str(r10584569, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10584570);
        mpfr_init(r10584571);
        mpfr_init(r10584572);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r10584550, x, MPFR_RNDN);
        mpfr_mul(r10584551, r10584549, r10584550, MPFR_RNDN);
        mpfr_add(r10584552, r10584548, r10584551, MPFR_RNDN);
        ;
        mpfr_mul(r10584554, r10584550, r10584550, MPFR_RNDN);
        mpfr_mul(r10584555, r10584553, r10584554, MPFR_RNDN);
        mpfr_add(r10584556, r10584552, r10584555, MPFR_RNDN);
        ;
        mpfr_mul(r10584558, r10584554, r10584550, MPFR_RNDN);
        mpfr_mul(r10584559, r10584557, r10584558, MPFR_RNDN);
        mpfr_add(r10584560, r10584556, r10584559, MPFR_RNDN);
        ;
        mpfr_mul(r10584562, r10584558, r10584550, MPFR_RNDN);
        mpfr_mul(r10584563, r10584561, r10584562, MPFR_RNDN);
        mpfr_add(r10584564, r10584560, r10584563, MPFR_RNDN);
        ;
        mpfr_mul(r10584566, r10584562, r10584550, MPFR_RNDN);
        mpfr_mul(r10584567, r10584565, r10584566, MPFR_RNDN);
        mpfr_add(r10584568, r10584564, r10584567, MPFR_RNDN);
        ;
        mpfr_mul(r10584570, r10584566, r10584550, MPFR_RNDN);
        mpfr_mul(r10584571, r10584569, r10584570, MPFR_RNDN);
        mpfr_add(r10584572, r10584568, r10584571, MPFR_RNDN);
        return mpfr_get_d(r10584572, MPFR_RNDN);
}

static mpfr_t r10584573, r10584574, r10584575, r10584576, r10584577, r10584578, r10584579, r10584580, r10584581, r10584582, r10584583, r10584584, r10584585, r10584586, r10584587, r10584588, r10584589, r10584590, r10584591, r10584592, r10584593, r10584594, r10584595, r10584596, r10584597, r10584598, r10584599, r10584600, r10584601, r10584602, r10584603, r10584604, r10584605;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584573);
        mpfr_init_set_str(r10584574, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10584575);
        mpfr_init(r10584576);
        mpfr_init(r10584577);
        mpfr_init(r10584578);
        mpfr_init(r10584579);
        mpfr_init(r10584580);
        mpfr_init(r10584581);
        mpfr_init_set_str(r10584582, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10584583);
        mpfr_init_set_str(r10584584, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10584585);
        mpfr_init(r10584586);
        mpfr_init(r10584587);
        mpfr_init_set_str(r10584588, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584589, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10584590);
        mpfr_init(r10584591);
        mpfr_init(r10584592);
        mpfr_init_set_str(r10584593, "3", 10, MPFR_RNDN);
        mpfr_init(r10584594);
        mpfr_init(r10584595);
        mpfr_init_set_str(r10584596, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584597, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10584598);
        mpfr_init(r10584599);
        mpfr_init(r10584600);
        mpfr_init(r10584601);
        mpfr_init(r10584602);
        mpfr_init(r10584603);
        mpfr_init(r10584604);
        mpfr_init(r10584605);
}

double f_fm(double x) {
        mpfr_set_d(r10584573, x, MPFR_RNDN);
        ;
        mpfr_mul(r10584575, r10584574, r10584573, MPFR_RNDN);
        mpfr_mul(r10584576, r10584573, r10584575, MPFR_RNDN);
        mpfr_mul(r10584577, r10584573, r10584573, MPFR_RNDN);
        mpfr_log(r10584578, r10584577, MPFR_RNDN);
        mpfr_add(r10584579, r10584578, r10584578, MPFR_RNDN);
        mpfr_exp(r10584580, r10584579, MPFR_RNDN);
        mpfr_mul(r10584581, r10584576, r10584580, MPFR_RNDN);
        ;
        mpfr_mul(r10584583, r10584573, r10584582, MPFR_RNDN);
        ;
        mpfr_add(r10584585, r10584583, r10584584, MPFR_RNDN);
        mpfr_add(r10584586, r10584581, r10584585, MPFR_RNDN);
        mpfr_mul(r10584587, r10584577, r10584577, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584590, r10584589, r10584573, MPFR_RNDN);
        mpfr_add(r10584591, r10584588, r10584590, MPFR_RNDN);
        mpfr_mul(r10584592, r10584587, r10584591, MPFR_RNDN);
        ;
        mpfr_pow(r10584594, r10584573, r10584593, MPFR_RNDN);
        mpfr_mul(r10584595, r10584594, r10584594, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584598, r10584573, r10584597, MPFR_RNDN);
        mpfr_add(r10584599, r10584596, r10584598, MPFR_RNDN);
        mpfr_mul(r10584600, r10584595, r10584599, MPFR_RNDN);
        mpfr_mul(r10584601, r10584599, r10584599, MPFR_RNDN);
        mpfr_mul(r10584602, r10584600, r10584601, MPFR_RNDN);
        mpfr_cbrt(r10584603, r10584602, MPFR_RNDN);
        mpfr_add(r10584604, r10584592, r10584603, MPFR_RNDN);
        mpfr_add(r10584605, r10584586, r10584604, MPFR_RNDN);
        return mpfr_get_d(r10584605, MPFR_RNDN);
}

static mpfr_t r10584606, r10584607, r10584608, r10584609, r10584610, r10584611, r10584612, r10584613, r10584614, r10584615, r10584616, r10584617, r10584618, r10584619, r10584620, r10584621, r10584622, r10584623, r10584624, r10584625, r10584626, r10584627, r10584628, r10584629, r10584630, r10584631, r10584632, r10584633, r10584634, r10584635, r10584636, r10584637, r10584638;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r10584606);
        mpfr_init_set_str(r10584607, "0.001389", 10, MPFR_RNDN);
        mpfr_init(r10584608);
        mpfr_init(r10584609);
        mpfr_init(r10584610);
        mpfr_init(r10584611);
        mpfr_init(r10584612);
        mpfr_init(r10584613);
        mpfr_init(r10584614);
        mpfr_init_set_str(r10584615, "-6.0", 10, MPFR_RNDN);
        mpfr_init(r10584616);
        mpfr_init_set_str(r10584617, "1.0", 10, MPFR_RNDN);
        mpfr_init(r10584618);
        mpfr_init(r10584619);
        mpfr_init(r10584620);
        mpfr_init_set_str(r10584621, "0.625", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584622, "-0.05", 10, MPFR_RNDN);
        mpfr_init(r10584623);
        mpfr_init(r10584624);
        mpfr_init(r10584625);
        mpfr_init_set_str(r10584626, "3", 10, MPFR_RNDN);
        mpfr_init(r10584627);
        mpfr_init(r10584628);
        mpfr_init_set_str(r10584629, "7.5", 10, MPFR_RNDN);
        mpfr_init_set_str(r10584630, "-3.333333", 10, MPFR_RNDN);
        mpfr_init(r10584631);
        mpfr_init(r10584632);
        mpfr_init(r10584633);
        mpfr_init(r10584634);
        mpfr_init(r10584635);
        mpfr_init(r10584636);
        mpfr_init(r10584637);
        mpfr_init(r10584638);
}

double f_dm(double x) {
        mpfr_set_d(r10584606, x, MPFR_RNDN);
        ;
        mpfr_mul(r10584608, r10584607, r10584606, MPFR_RNDN);
        mpfr_mul(r10584609, r10584606, r10584608, MPFR_RNDN);
        mpfr_mul(r10584610, r10584606, r10584606, MPFR_RNDN);
        mpfr_log(r10584611, r10584610, MPFR_RNDN);
        mpfr_add(r10584612, r10584611, r10584611, MPFR_RNDN);
        mpfr_exp(r10584613, r10584612, MPFR_RNDN);
        mpfr_mul(r10584614, r10584609, r10584613, MPFR_RNDN);
        ;
        mpfr_mul(r10584616, r10584606, r10584615, MPFR_RNDN);
        ;
        mpfr_add(r10584618, r10584616, r10584617, MPFR_RNDN);
        mpfr_add(r10584619, r10584614, r10584618, MPFR_RNDN);
        mpfr_mul(r10584620, r10584610, r10584610, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584623, r10584622, r10584606, MPFR_RNDN);
        mpfr_add(r10584624, r10584621, r10584623, MPFR_RNDN);
        mpfr_mul(r10584625, r10584620, r10584624, MPFR_RNDN);
        ;
        mpfr_pow(r10584627, r10584606, r10584626, MPFR_RNDN);
        mpfr_mul(r10584628, r10584627, r10584627, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r10584631, r10584606, r10584630, MPFR_RNDN);
        mpfr_add(r10584632, r10584629, r10584631, MPFR_RNDN);
        mpfr_mul(r10584633, r10584628, r10584632, MPFR_RNDN);
        mpfr_mul(r10584634, r10584632, r10584632, MPFR_RNDN);
        mpfr_mul(r10584635, r10584633, r10584634, MPFR_RNDN);
        mpfr_cbrt(r10584636, r10584635, MPFR_RNDN);
        mpfr_add(r10584637, r10584625, r10584636, MPFR_RNDN);
        mpfr_add(r10584638, r10584619, r10584637, MPFR_RNDN);
        return mpfr_get_d(r10584638, MPFR_RNDN);
}

