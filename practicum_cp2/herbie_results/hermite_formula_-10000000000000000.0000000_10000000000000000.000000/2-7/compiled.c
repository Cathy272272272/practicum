#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "7";

double f_if(float x) {
        float r6896375 = -1680.0;
        float r6896376 = x;
        float r6896377 = r6896375 * r6896376;
        float r6896378 = 3360.0;
        float r6896379 = r6896376 * r6896376;
        float r6896380 = r6896379 * r6896376;
        float r6896381 = r6896378 * r6896380;
        float r6896382 = r6896377 + r6896381;
        float r6896383 = -1344.0;
        float r6896384 = r6896380 * r6896376;
        float r6896385 = r6896384 * r6896376;
        float r6896386 = r6896383 * r6896385;
        float r6896387 = r6896382 + r6896386;
        float r6896388 = 128.0;
        float r6896389 = r6896385 * r6896376;
        float r6896390 = r6896389 * r6896376;
        float r6896391 = r6896388 * r6896390;
        float r6896392 = r6896387 + r6896391;
        return r6896392;
}

double f_id(double x) {
        double r6896393 = -1680.0;
        double r6896394 = x;
        double r6896395 = r6896393 * r6896394;
        double r6896396 = 3360.0;
        double r6896397 = r6896394 * r6896394;
        double r6896398 = r6896397 * r6896394;
        double r6896399 = r6896396 * r6896398;
        double r6896400 = r6896395 + r6896399;
        double r6896401 = -1344.0;
        double r6896402 = r6896398 * r6896394;
        double r6896403 = r6896402 * r6896394;
        double r6896404 = r6896401 * r6896403;
        double r6896405 = r6896400 + r6896404;
        double r6896406 = 128.0;
        double r6896407 = r6896403 * r6896394;
        double r6896408 = r6896407 * r6896394;
        double r6896409 = r6896406 * r6896408;
        double r6896410 = r6896405 + r6896409;
        return r6896410;
}


double f_of(float x) {
        float r6896411 = x;
        float r6896412 = 2;
        float r6896413 = r6896412 + r6896412;
        float r6896414 = pow(r6896411, r6896413);
        float r6896415 = r6896411 * r6896411;
        float r6896416 = 128.0;
        float r6896417 = r6896416 * r6896411;
        float r6896418 = r6896415 * r6896417;
        float r6896419 = -1344.0;
        float r6896420 = r6896411 * r6896419;
        float r6896421 = r6896418 + r6896420;
        float r6896422 = r6896414 * r6896421;
        float r6896423 = 3360.0;
        float r6896424 = r6896423 * r6896411;
        float r6896425 = r6896424 * r6896411;
        float r6896426 = -1680.0;
        float r6896427 = r6896425 + r6896426;
        float r6896428 = r6896411 * r6896427;
        float r6896429 = r6896422 + r6896428;
        return r6896429;
}

double f_od(double x) {
        double r6896430 = x;
        double r6896431 = 2;
        double r6896432 = r6896431 + r6896431;
        double r6896433 = pow(r6896430, r6896432);
        double r6896434 = r6896430 * r6896430;
        double r6896435 = 128.0;
        double r6896436 = r6896435 * r6896430;
        double r6896437 = r6896434 * r6896436;
        double r6896438 = -1344.0;
        double r6896439 = r6896430 * r6896438;
        double r6896440 = r6896437 + r6896439;
        double r6896441 = r6896433 * r6896440;
        double r6896442 = 3360.0;
        double r6896443 = r6896442 * r6896430;
        double r6896444 = r6896443 * r6896430;
        double r6896445 = -1680.0;
        double r6896446 = r6896444 + r6896445;
        double r6896447 = r6896430 * r6896446;
        double r6896448 = r6896441 + r6896447;
        return r6896448;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r6896449, r6896450, r6896451, r6896452, r6896453, r6896454, r6896455, r6896456, r6896457, r6896458, r6896459, r6896460, r6896461, r6896462, r6896463, r6896464, r6896465, r6896466;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(2384);
        mpfr_init_set_str(r6896449, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r6896450);
        mpfr_init(r6896451);
        mpfr_init_set_str(r6896452, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r6896453);
        mpfr_init(r6896454);
        mpfr_init(r6896455);
        mpfr_init(r6896456);
        mpfr_init_set_str(r6896457, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r6896458);
        mpfr_init(r6896459);
        mpfr_init(r6896460);
        mpfr_init(r6896461);
        mpfr_init_set_str(r6896462, "128.0", 10, MPFR_RNDN);
        mpfr_init(r6896463);
        mpfr_init(r6896464);
        mpfr_init(r6896465);
        mpfr_init(r6896466);
}

double f_im(double x) {
        ;
        mpfr_set_d(r6896450, x, MPFR_RNDN);
        mpfr_mul(r6896451, r6896449, r6896450, MPFR_RNDN);
        ;
        mpfr_mul(r6896453, r6896450, r6896450, MPFR_RNDN);
        mpfr_mul(r6896454, r6896453, r6896450, MPFR_RNDN);
        mpfr_mul(r6896455, r6896452, r6896454, MPFR_RNDN);
        mpfr_add(r6896456, r6896451, r6896455, MPFR_RNDN);
        ;
        mpfr_mul(r6896458, r6896454, r6896450, MPFR_RNDN);
        mpfr_mul(r6896459, r6896458, r6896450, MPFR_RNDN);
        mpfr_mul(r6896460, r6896457, r6896459, MPFR_RNDN);
        mpfr_add(r6896461, r6896456, r6896460, MPFR_RNDN);
        ;
        mpfr_mul(r6896463, r6896459, r6896450, MPFR_RNDN);
        mpfr_mul(r6896464, r6896463, r6896450, MPFR_RNDN);
        mpfr_mul(r6896465, r6896462, r6896464, MPFR_RNDN);
        mpfr_add(r6896466, r6896461, r6896465, MPFR_RNDN);
        return mpfr_get_d(r6896466, MPFR_RNDN);
}

static mpfr_t r6896467, r6896468, r6896469, r6896470, r6896471, r6896472, r6896473, r6896474, r6896475, r6896476, r6896477, r6896478, r6896479, r6896480, r6896481, r6896482, r6896483, r6896484, r6896485;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6896467);
        mpfr_init_set_str(r6896468, "2", 10, MPFR_RNDN);
        mpfr_init(r6896469);
        mpfr_init(r6896470);
        mpfr_init(r6896471);
        mpfr_init_set_str(r6896472, "128.0", 10, MPFR_RNDN);
        mpfr_init(r6896473);
        mpfr_init(r6896474);
        mpfr_init_set_str(r6896475, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r6896476);
        mpfr_init(r6896477);
        mpfr_init(r6896478);
        mpfr_init_set_str(r6896479, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r6896480);
        mpfr_init(r6896481);
        mpfr_init_set_str(r6896482, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r6896483);
        mpfr_init(r6896484);
        mpfr_init(r6896485);
}

double f_fm(double x) {
        mpfr_set_d(r6896467, x, MPFR_RNDN);
        ;
        mpfr_add(r6896469, r6896468, r6896468, MPFR_RNDN);
        mpfr_pow(r6896470, r6896467, r6896469, MPFR_RNDN);
        mpfr_mul(r6896471, r6896467, r6896467, MPFR_RNDN);
        ;
        mpfr_mul(r6896473, r6896472, r6896467, MPFR_RNDN);
        mpfr_mul(r6896474, r6896471, r6896473, MPFR_RNDN);
        ;
        mpfr_mul(r6896476, r6896467, r6896475, MPFR_RNDN);
        mpfr_add(r6896477, r6896474, r6896476, MPFR_RNDN);
        mpfr_mul(r6896478, r6896470, r6896477, MPFR_RNDN);
        ;
        mpfr_mul(r6896480, r6896479, r6896467, MPFR_RNDN);
        mpfr_mul(r6896481, r6896480, r6896467, MPFR_RNDN);
        ;
        mpfr_add(r6896483, r6896481, r6896482, MPFR_RNDN);
        mpfr_mul(r6896484, r6896467, r6896483, MPFR_RNDN);
        mpfr_add(r6896485, r6896478, r6896484, MPFR_RNDN);
        return mpfr_get_d(r6896485, MPFR_RNDN);
}

static mpfr_t r6896486, r6896487, r6896488, r6896489, r6896490, r6896491, r6896492, r6896493, r6896494, r6896495, r6896496, r6896497, r6896498, r6896499, r6896500, r6896501, r6896502, r6896503, r6896504;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(2384);
        mpfr_init(r6896486);
        mpfr_init_set_str(r6896487, "2", 10, MPFR_RNDN);
        mpfr_init(r6896488);
        mpfr_init(r6896489);
        mpfr_init(r6896490);
        mpfr_init_set_str(r6896491, "128.0", 10, MPFR_RNDN);
        mpfr_init(r6896492);
        mpfr_init(r6896493);
        mpfr_init_set_str(r6896494, "-1344.0", 10, MPFR_RNDN);
        mpfr_init(r6896495);
        mpfr_init(r6896496);
        mpfr_init(r6896497);
        mpfr_init_set_str(r6896498, "3360.0", 10, MPFR_RNDN);
        mpfr_init(r6896499);
        mpfr_init(r6896500);
        mpfr_init_set_str(r6896501, "-1680.0", 10, MPFR_RNDN);
        mpfr_init(r6896502);
        mpfr_init(r6896503);
        mpfr_init(r6896504);
}

double f_dm(double x) {
        mpfr_set_d(r6896486, x, MPFR_RNDN);
        ;
        mpfr_add(r6896488, r6896487, r6896487, MPFR_RNDN);
        mpfr_pow(r6896489, r6896486, r6896488, MPFR_RNDN);
        mpfr_mul(r6896490, r6896486, r6896486, MPFR_RNDN);
        ;
        mpfr_mul(r6896492, r6896491, r6896486, MPFR_RNDN);
        mpfr_mul(r6896493, r6896490, r6896492, MPFR_RNDN);
        ;
        mpfr_mul(r6896495, r6896486, r6896494, MPFR_RNDN);
        mpfr_add(r6896496, r6896493, r6896495, MPFR_RNDN);
        mpfr_mul(r6896497, r6896489, r6896496, MPFR_RNDN);
        ;
        mpfr_mul(r6896499, r6896498, r6896486, MPFR_RNDN);
        mpfr_mul(r6896500, r6896499, r6896486, MPFR_RNDN);
        ;
        mpfr_add(r6896502, r6896500, r6896501, MPFR_RNDN);
        mpfr_mul(r6896503, r6896486, r6896502, MPFR_RNDN);
        mpfr_add(r6896504, r6896497, r6896503, MPFR_RNDN);
        return mpfr_get_d(r6896504, MPFR_RNDN);
}

