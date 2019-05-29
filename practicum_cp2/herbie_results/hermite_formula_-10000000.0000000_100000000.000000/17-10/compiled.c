#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "10";

double f_if(float x) {
        float r9885923 = -30240.0;
        float r9885924 = 302400.0;
        float r9885925 = x;
        float r9885926 = r9885925 * r9885925;
        float r9885927 = r9885924 * r9885926;
        float r9885928 = r9885923 + r9885927;
        float r9885929 = -403200.0;
        float r9885930 = r9885926 * r9885925;
        float r9885931 = r9885930 * r9885925;
        float r9885932 = r9885929 * r9885931;
        float r9885933 = r9885928 + r9885932;
        float r9885934 = 161280.0;
        float r9885935 = r9885931 * r9885925;
        float r9885936 = r9885935 * r9885925;
        float r9885937 = r9885934 * r9885936;
        float r9885938 = r9885933 + r9885937;
        float r9885939 = -23040.0;
        float r9885940 = r9885936 * r9885925;
        float r9885941 = r9885940 * r9885925;
        float r9885942 = r9885939 * r9885941;
        float r9885943 = r9885938 + r9885942;
        float r9885944 = 1024.0;
        float r9885945 = r9885941 * r9885925;
        float r9885946 = r9885945 * r9885925;
        float r9885947 = r9885944 * r9885946;
        float r9885948 = r9885943 + r9885947;
        return r9885948;
}

double f_id(double x) {
        double r9885949 = -30240.0;
        double r9885950 = 302400.0;
        double r9885951 = x;
        double r9885952 = r9885951 * r9885951;
        double r9885953 = r9885950 * r9885952;
        double r9885954 = r9885949 + r9885953;
        double r9885955 = -403200.0;
        double r9885956 = r9885952 * r9885951;
        double r9885957 = r9885956 * r9885951;
        double r9885958 = r9885955 * r9885957;
        double r9885959 = r9885954 + r9885958;
        double r9885960 = 161280.0;
        double r9885961 = r9885957 * r9885951;
        double r9885962 = r9885961 * r9885951;
        double r9885963 = r9885960 * r9885962;
        double r9885964 = r9885959 + r9885963;
        double r9885965 = -23040.0;
        double r9885966 = r9885962 * r9885951;
        double r9885967 = r9885966 * r9885951;
        double r9885968 = r9885965 * r9885967;
        double r9885969 = r9885964 + r9885968;
        double r9885970 = 1024.0;
        double r9885971 = r9885967 * r9885951;
        double r9885972 = r9885971 * r9885951;
        double r9885973 = r9885970 * r9885972;
        double r9885974 = r9885969 + r9885973;
        return r9885974;
}


double f_of(float x) {
        float r9885975 = x;
        float r9885976 = r9885975 * r9885975;
        float r9885977 = r9885976 * r9885976;
        float r9885978 = 161280.0;
        float r9885979 = r9885978 * r9885975;
        float r9885980 = r9885979 * r9885975;
        float r9885981 = r9885977 * r9885980;
        float r9885982 = -23040.0;
        float r9885983 = 8;
        float r9885984 = pow(r9885975, r9885983);
        float r9885985 = r9885982 * r9885984;
        float r9885986 = -403200.0;
        float r9885987 = r9885975 * r9885986;
        float r9885988 = 3;
        float r9885989 = pow(r9885975, r9885988);
        float r9885990 = r9885987 * r9885989;
        float r9885991 = r9885985 + r9885990;
        float r9885992 = r9885981 + r9885991;
        float r9885993 = 1024.0;
        float r9885994 = r9885993 * r9885975;
        float r9885995 = r9885994 * r9885989;
        float r9885996 = r9885989 * r9885989;
        float r9885997 = r9885995 * r9885996;
        float r9885998 = 302400.0;
        float r9885999 = r9885976 * r9885998;
        float r9886000 = -30240.0;
        float r9886001 = r9885999 + r9886000;
        float r9886002 = r9885997 + r9886001;
        float r9886003 = r9885992 + r9886002;
        return r9886003;
}

double f_od(double x) {
        double r9886004 = x;
        double r9886005 = r9886004 * r9886004;
        double r9886006 = r9886005 * r9886005;
        double r9886007 = 161280.0;
        double r9886008 = r9886007 * r9886004;
        double r9886009 = r9886008 * r9886004;
        double r9886010 = r9886006 * r9886009;
        double r9886011 = -23040.0;
        double r9886012 = 8;
        double r9886013 = pow(r9886004, r9886012);
        double r9886014 = r9886011 * r9886013;
        double r9886015 = -403200.0;
        double r9886016 = r9886004 * r9886015;
        double r9886017 = 3;
        double r9886018 = pow(r9886004, r9886017);
        double r9886019 = r9886016 * r9886018;
        double r9886020 = r9886014 + r9886019;
        double r9886021 = r9886010 + r9886020;
        double r9886022 = 1024.0;
        double r9886023 = r9886022 * r9886004;
        double r9886024 = r9886023 * r9886018;
        double r9886025 = r9886018 * r9886018;
        double r9886026 = r9886024 * r9886025;
        double r9886027 = 302400.0;
        double r9886028 = r9886005 * r9886027;
        double r9886029 = -30240.0;
        double r9886030 = r9886028 + r9886029;
        double r9886031 = r9886026 + r9886030;
        double r9886032 = r9886021 + r9886031;
        return r9886032;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r9886033, r9886034, r9886035, r9886036, r9886037, r9886038, r9886039, r9886040, r9886041, r9886042, r9886043, r9886044, r9886045, r9886046, r9886047, r9886048, r9886049, r9886050, r9886051, r9886052, r9886053, r9886054, r9886055, r9886056, r9886057, r9886058;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r9886033, "-30240.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9886034, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9886035);
        mpfr_init(r9886036);
        mpfr_init(r9886037);
        mpfr_init(r9886038);
        mpfr_init_set_str(r9886039, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9886040);
        mpfr_init(r9886041);
        mpfr_init(r9886042);
        mpfr_init(r9886043);
        mpfr_init_set_str(r9886044, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9886045);
        mpfr_init(r9886046);
        mpfr_init(r9886047);
        mpfr_init(r9886048);
        mpfr_init_set_str(r9886049, "-23040.0", 10, MPFR_RNDN);
        mpfr_init(r9886050);
        mpfr_init(r9886051);
        mpfr_init(r9886052);
        mpfr_init(r9886053);
        mpfr_init_set_str(r9886054, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9886055);
        mpfr_init(r9886056);
        mpfr_init(r9886057);
        mpfr_init(r9886058);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r9886035, x, MPFR_RNDN);
        mpfr_mul(r9886036, r9886035, r9886035, MPFR_RNDN);
        mpfr_mul(r9886037, r9886034, r9886036, MPFR_RNDN);
        mpfr_add(r9886038, r9886033, r9886037, MPFR_RNDN);
        ;
        mpfr_mul(r9886040, r9886036, r9886035, MPFR_RNDN);
        mpfr_mul(r9886041, r9886040, r9886035, MPFR_RNDN);
        mpfr_mul(r9886042, r9886039, r9886041, MPFR_RNDN);
        mpfr_add(r9886043, r9886038, r9886042, MPFR_RNDN);
        ;
        mpfr_mul(r9886045, r9886041, r9886035, MPFR_RNDN);
        mpfr_mul(r9886046, r9886045, r9886035, MPFR_RNDN);
        mpfr_mul(r9886047, r9886044, r9886046, MPFR_RNDN);
        mpfr_add(r9886048, r9886043, r9886047, MPFR_RNDN);
        ;
        mpfr_mul(r9886050, r9886046, r9886035, MPFR_RNDN);
        mpfr_mul(r9886051, r9886050, r9886035, MPFR_RNDN);
        mpfr_mul(r9886052, r9886049, r9886051, MPFR_RNDN);
        mpfr_add(r9886053, r9886048, r9886052, MPFR_RNDN);
        ;
        mpfr_mul(r9886055, r9886051, r9886035, MPFR_RNDN);
        mpfr_mul(r9886056, r9886055, r9886035, MPFR_RNDN);
        mpfr_mul(r9886057, r9886054, r9886056, MPFR_RNDN);
        mpfr_add(r9886058, r9886053, r9886057, MPFR_RNDN);
        return mpfr_get_d(r9886058, MPFR_RNDN);
}

static mpfr_t r9886059, r9886060, r9886061, r9886062, r9886063, r9886064, r9886065, r9886066, r9886067, r9886068, r9886069, r9886070, r9886071, r9886072, r9886073, r9886074, r9886075, r9886076, r9886077, r9886078, r9886079, r9886080, r9886081, r9886082, r9886083, r9886084, r9886085, r9886086, r9886087;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9886059);
        mpfr_init(r9886060);
        mpfr_init(r9886061);
        mpfr_init_set_str(r9886062, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9886063);
        mpfr_init(r9886064);
        mpfr_init(r9886065);
        mpfr_init_set_str(r9886066, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9886067, "8", 10, MPFR_RNDN);
        mpfr_init(r9886068);
        mpfr_init(r9886069);
        mpfr_init_set_str(r9886070, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9886071);
        mpfr_init_set_str(r9886072, "3", 10, MPFR_RNDN);
        mpfr_init(r9886073);
        mpfr_init(r9886074);
        mpfr_init(r9886075);
        mpfr_init(r9886076);
        mpfr_init_set_str(r9886077, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9886078);
        mpfr_init(r9886079);
        mpfr_init(r9886080);
        mpfr_init(r9886081);
        mpfr_init_set_str(r9886082, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9886083);
        mpfr_init_set_str(r9886084, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r9886085);
        mpfr_init(r9886086);
        mpfr_init(r9886087);
}

double f_fm(double x) {
        mpfr_set_d(r9886059, x, MPFR_RNDN);
        mpfr_mul(r9886060, r9886059, r9886059, MPFR_RNDN);
        mpfr_mul(r9886061, r9886060, r9886060, MPFR_RNDN);
        ;
        mpfr_mul(r9886063, r9886062, r9886059, MPFR_RNDN);
        mpfr_mul(r9886064, r9886063, r9886059, MPFR_RNDN);
        mpfr_mul(r9886065, r9886061, r9886064, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9886068, r9886059, r9886067, MPFR_RNDN);
        mpfr_mul(r9886069, r9886066, r9886068, MPFR_RNDN);
        ;
        mpfr_mul(r9886071, r9886059, r9886070, MPFR_RNDN);
        ;
        mpfr_pow(r9886073, r9886059, r9886072, MPFR_RNDN);
        mpfr_mul(r9886074, r9886071, r9886073, MPFR_RNDN);
        mpfr_add(r9886075, r9886069, r9886074, MPFR_RNDN);
        mpfr_add(r9886076, r9886065, r9886075, MPFR_RNDN);
        ;
        mpfr_mul(r9886078, r9886077, r9886059, MPFR_RNDN);
        mpfr_mul(r9886079, r9886078, r9886073, MPFR_RNDN);
        mpfr_mul(r9886080, r9886073, r9886073, MPFR_RNDN);
        mpfr_mul(r9886081, r9886079, r9886080, MPFR_RNDN);
        ;
        mpfr_mul(r9886083, r9886060, r9886082, MPFR_RNDN);
        ;
        mpfr_add(r9886085, r9886083, r9886084, MPFR_RNDN);
        mpfr_add(r9886086, r9886081, r9886085, MPFR_RNDN);
        mpfr_add(r9886087, r9886076, r9886086, MPFR_RNDN);
        return mpfr_get_d(r9886087, MPFR_RNDN);
}

static mpfr_t r9886088, r9886089, r9886090, r9886091, r9886092, r9886093, r9886094, r9886095, r9886096, r9886097, r9886098, r9886099, r9886100, r9886101, r9886102, r9886103, r9886104, r9886105, r9886106, r9886107, r9886108, r9886109, r9886110, r9886111, r9886112, r9886113, r9886114, r9886115, r9886116;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r9886088);
        mpfr_init(r9886089);
        mpfr_init(r9886090);
        mpfr_init_set_str(r9886091, "161280.0", 10, MPFR_RNDN);
        mpfr_init(r9886092);
        mpfr_init(r9886093);
        mpfr_init(r9886094);
        mpfr_init_set_str(r9886095, "-23040.0", 10, MPFR_RNDN);
        mpfr_init_set_str(r9886096, "8", 10, MPFR_RNDN);
        mpfr_init(r9886097);
        mpfr_init(r9886098);
        mpfr_init_set_str(r9886099, "-403200.0", 10, MPFR_RNDN);
        mpfr_init(r9886100);
        mpfr_init_set_str(r9886101, "3", 10, MPFR_RNDN);
        mpfr_init(r9886102);
        mpfr_init(r9886103);
        mpfr_init(r9886104);
        mpfr_init(r9886105);
        mpfr_init_set_str(r9886106, "1024.0", 10, MPFR_RNDN);
        mpfr_init(r9886107);
        mpfr_init(r9886108);
        mpfr_init(r9886109);
        mpfr_init(r9886110);
        mpfr_init_set_str(r9886111, "302400.0", 10, MPFR_RNDN);
        mpfr_init(r9886112);
        mpfr_init_set_str(r9886113, "-30240.0", 10, MPFR_RNDN);
        mpfr_init(r9886114);
        mpfr_init(r9886115);
        mpfr_init(r9886116);
}

double f_dm(double x) {
        mpfr_set_d(r9886088, x, MPFR_RNDN);
        mpfr_mul(r9886089, r9886088, r9886088, MPFR_RNDN);
        mpfr_mul(r9886090, r9886089, r9886089, MPFR_RNDN);
        ;
        mpfr_mul(r9886092, r9886091, r9886088, MPFR_RNDN);
        mpfr_mul(r9886093, r9886092, r9886088, MPFR_RNDN);
        mpfr_mul(r9886094, r9886090, r9886093, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r9886097, r9886088, r9886096, MPFR_RNDN);
        mpfr_mul(r9886098, r9886095, r9886097, MPFR_RNDN);
        ;
        mpfr_mul(r9886100, r9886088, r9886099, MPFR_RNDN);
        ;
        mpfr_pow(r9886102, r9886088, r9886101, MPFR_RNDN);
        mpfr_mul(r9886103, r9886100, r9886102, MPFR_RNDN);
        mpfr_add(r9886104, r9886098, r9886103, MPFR_RNDN);
        mpfr_add(r9886105, r9886094, r9886104, MPFR_RNDN);
        ;
        mpfr_mul(r9886107, r9886106, r9886088, MPFR_RNDN);
        mpfr_mul(r9886108, r9886107, r9886102, MPFR_RNDN);
        mpfr_mul(r9886109, r9886102, r9886102, MPFR_RNDN);
        mpfr_mul(r9886110, r9886108, r9886109, MPFR_RNDN);
        ;
        mpfr_mul(r9886112, r9886089, r9886111, MPFR_RNDN);
        ;
        mpfr_add(r9886114, r9886112, r9886113, MPFR_RNDN);
        mpfr_add(r9886115, r9886110, r9886114, MPFR_RNDN);
        mpfr_add(r9886116, r9886105, r9886115, MPFR_RNDN);
        return mpfr_get_d(r9886116, MPFR_RNDN);
}

