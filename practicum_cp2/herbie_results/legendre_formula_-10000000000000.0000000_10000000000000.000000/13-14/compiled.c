#include <tgmath.h>
#include <gmp.h>
#include <mpfr.h>
#include <stdio.h>
#include <stdbool.h>

char *name = "14";

double f_if(float x) {
        float r7515889 = -0.209473;
        float r7515890 = 21.994629;
        float r7515891 = x;
        float r7515892 = r7515891 * r7515891;
        float r7515893 = r7515890 * r7515892;
        float r7515894 = r7515889 + r7515893;
        float r7515895 = -373.908691;
        float r7515896 = r7515892 * r7515891;
        float r7515897 = r7515896 * r7515891;
        float r7515898 = r7515895 * r7515897;
        float r7515899 = r7515894 + r7515898;
        float r7515900 = 2368.088379;
        float r7515901 = r7515897 * r7515891;
        float r7515902 = r7515901 * r7515891;
        float r7515903 = r7515900 * r7515902;
        float r7515904 = r7515899 + r7515903;
        float r7515905 = -7104.265137;
        float r7515906 = r7515902 * r7515891;
        float r7515907 = r7515906 * r7515891;
        float r7515908 = r7515905 * r7515907;
        float r7515909 = r7515904 + r7515908;
        float r7515910 = 10893.206543;
        float r7515911 = r7515907 * r7515891;
        float r7515912 = r7515911 * r7515891;
        float r7515913 = r7515910 * r7515912;
        float r7515914 = r7515909 + r7515913;
        float r7515915 = -8252.429199;
        float r7515916 = r7515912 * r7515891;
        float r7515917 = r7515916 * r7515891;
        float r7515918 = r7515915 * r7515917;
        float r7515919 = r7515914 + r7515918;
        float r7515920 = 2448.522949;
        float r7515921 = r7515917 * r7515891;
        float r7515922 = r7515921 * r7515891;
        float r7515923 = r7515920 * r7515922;
        float r7515924 = r7515919 + r7515923;
        return r7515924;
}

double f_id(double x) {
        double r7515925 = -0.209473;
        double r7515926 = 21.994629;
        double r7515927 = x;
        double r7515928 = r7515927 * r7515927;
        double r7515929 = r7515926 * r7515928;
        double r7515930 = r7515925 + r7515929;
        double r7515931 = -373.908691;
        double r7515932 = r7515928 * r7515927;
        double r7515933 = r7515932 * r7515927;
        double r7515934 = r7515931 * r7515933;
        double r7515935 = r7515930 + r7515934;
        double r7515936 = 2368.088379;
        double r7515937 = r7515933 * r7515927;
        double r7515938 = r7515937 * r7515927;
        double r7515939 = r7515936 * r7515938;
        double r7515940 = r7515935 + r7515939;
        double r7515941 = -7104.265137;
        double r7515942 = r7515938 * r7515927;
        double r7515943 = r7515942 * r7515927;
        double r7515944 = r7515941 * r7515943;
        double r7515945 = r7515940 + r7515944;
        double r7515946 = 10893.206543;
        double r7515947 = r7515943 * r7515927;
        double r7515948 = r7515947 * r7515927;
        double r7515949 = r7515946 * r7515948;
        double r7515950 = r7515945 + r7515949;
        double r7515951 = -8252.429199;
        double r7515952 = r7515948 * r7515927;
        double r7515953 = r7515952 * r7515927;
        double r7515954 = r7515951 * r7515953;
        double r7515955 = r7515950 + r7515954;
        double r7515956 = 2448.522949;
        double r7515957 = r7515953 * r7515927;
        double r7515958 = r7515957 * r7515927;
        double r7515959 = r7515956 * r7515958;
        double r7515960 = r7515955 + r7515959;
        return r7515960;
}


double f_of(float x) {
        float r7515961 = x;
        float r7515962 = 14;
        float r7515963 = pow(r7515961, r7515962);
        float r7515964 = 2448.522949;
        float r7515965 = r7515963 * r7515964;
        float r7515966 = 8252.429199;
        float r7515967 = 12;
        float r7515968 = pow(r7515961, r7515967);
        float r7515969 = r7515966 * r7515968;
        float r7515970 = r7515965 - r7515969;
        float r7515971 = 2368.088379;
        float r7515972 = r7515971 * r7515961;
        float r7515973 = r7515961 * r7515972;
        float r7515974 = r7515973 * r7515973;
        float r7515975 = -373.908691;
        float r7515976 = r7515975 * r7515975;
        float r7515977 = r7515974 - r7515976;
        float r7515978 = r7515961 * r7515961;
        float r7515979 = r7515978 * r7515978;
        float r7515980 = r7515977 * r7515979;
        float r7515981 = r7515973 - r7515975;
        float r7515982 = r7515980 / r7515981;
        float r7515983 = r7515970 + r7515982;
        float r7515984 = -0.209473;
        float r7515985 = 21.994629;
        float r7515986 = r7515985 * r7515961;
        float r7515987 = r7515961 * r7515986;
        float r7515988 = r7515984 + r7515987;
        float r7515989 = 3;
        float r7515990 = 1;
        float r7515991 = r7515989 + r7515990;
        float r7515992 = pow(r7515978, r7515991);
        float r7515993 = -7104.265137;
        float r7515994 = 10893.206543;
        float r7515995 = r7515994 * r7515961;
        float r7515996 = r7515961 * r7515995;
        float r7515997 = r7515993 + r7515996;
        float r7515998 = r7515992 * r7515997;
        float r7515999 = r7515988 + r7515998;
        float r7516000 = r7515983 + r7515999;
        return r7516000;
}

double f_od(double x) {
        double r7516001 = x;
        double r7516002 = 14;
        double r7516003 = pow(r7516001, r7516002);
        double r7516004 = 2448.522949;
        double r7516005 = r7516003 * r7516004;
        double r7516006 = 8252.429199;
        double r7516007 = 12;
        double r7516008 = pow(r7516001, r7516007);
        double r7516009 = r7516006 * r7516008;
        double r7516010 = r7516005 - r7516009;
        double r7516011 = 2368.088379;
        double r7516012 = r7516011 * r7516001;
        double r7516013 = r7516001 * r7516012;
        double r7516014 = r7516013 * r7516013;
        double r7516015 = -373.908691;
        double r7516016 = r7516015 * r7516015;
        double r7516017 = r7516014 - r7516016;
        double r7516018 = r7516001 * r7516001;
        double r7516019 = r7516018 * r7516018;
        double r7516020 = r7516017 * r7516019;
        double r7516021 = r7516013 - r7516015;
        double r7516022 = r7516020 / r7516021;
        double r7516023 = r7516010 + r7516022;
        double r7516024 = -0.209473;
        double r7516025 = 21.994629;
        double r7516026 = r7516025 * r7516001;
        double r7516027 = r7516001 * r7516026;
        double r7516028 = r7516024 + r7516027;
        double r7516029 = 3;
        double r7516030 = 1;
        double r7516031 = r7516029 + r7516030;
        double r7516032 = pow(r7516018, r7516031);
        double r7516033 = -7104.265137;
        double r7516034 = 10893.206543;
        double r7516035 = r7516034 * r7516001;
        double r7516036 = r7516001 * r7516035;
        double r7516037 = r7516033 + r7516036;
        double r7516038 = r7516032 * r7516037;
        double r7516039 = r7516028 + r7516038;
        double r7516040 = r7516023 + r7516039;
        return r7516040;
}

void mpfr_fmod2(mpfr_t r, mpfr_t n, mpfr_t d, mpfr_rnd_t rmd) {
        mpfr_fmod(r, n, d, rmd);
        if (mpfr_cmp_ui(r, 0) < 0) mpfr_add(r, r, d, rmd);
}


static mpfr_t r7516041, r7516042, r7516043, r7516044, r7516045, r7516046, r7516047, r7516048, r7516049, r7516050, r7516051, r7516052, r7516053, r7516054, r7516055, r7516056, r7516057, r7516058, r7516059, r7516060, r7516061, r7516062, r7516063, r7516064, r7516065, r7516066, r7516067, r7516068, r7516069, r7516070, r7516071, r7516072, r7516073, r7516074, r7516075, r7516076;

void setup_mpfr_f_im() {
        mpfr_set_default_prec(592);
        mpfr_init_set_str(r7516041, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516042, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7516043);
        mpfr_init(r7516044);
        mpfr_init(r7516045);
        mpfr_init(r7516046);
        mpfr_init_set_str(r7516047, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7516048);
        mpfr_init(r7516049);
        mpfr_init(r7516050);
        mpfr_init(r7516051);
        mpfr_init_set_str(r7516052, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7516053);
        mpfr_init(r7516054);
        mpfr_init(r7516055);
        mpfr_init(r7516056);
        mpfr_init_set_str(r7516057, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init(r7516058);
        mpfr_init(r7516059);
        mpfr_init(r7516060);
        mpfr_init(r7516061);
        mpfr_init_set_str(r7516062, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7516063);
        mpfr_init(r7516064);
        mpfr_init(r7516065);
        mpfr_init(r7516066);
        mpfr_init_set_str(r7516067, "-8252.429199", 10, MPFR_RNDN);
        mpfr_init(r7516068);
        mpfr_init(r7516069);
        mpfr_init(r7516070);
        mpfr_init(r7516071);
        mpfr_init_set_str(r7516072, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7516073);
        mpfr_init(r7516074);
        mpfr_init(r7516075);
        mpfr_init(r7516076);
}

double f_im(double x) {
        ;
        ;
        mpfr_set_d(r7516043, x, MPFR_RNDN);
        mpfr_mul(r7516044, r7516043, r7516043, MPFR_RNDN);
        mpfr_mul(r7516045, r7516042, r7516044, MPFR_RNDN);
        mpfr_add(r7516046, r7516041, r7516045, MPFR_RNDN);
        ;
        mpfr_mul(r7516048, r7516044, r7516043, MPFR_RNDN);
        mpfr_mul(r7516049, r7516048, r7516043, MPFR_RNDN);
        mpfr_mul(r7516050, r7516047, r7516049, MPFR_RNDN);
        mpfr_add(r7516051, r7516046, r7516050, MPFR_RNDN);
        ;
        mpfr_mul(r7516053, r7516049, r7516043, MPFR_RNDN);
        mpfr_mul(r7516054, r7516053, r7516043, MPFR_RNDN);
        mpfr_mul(r7516055, r7516052, r7516054, MPFR_RNDN);
        mpfr_add(r7516056, r7516051, r7516055, MPFR_RNDN);
        ;
        mpfr_mul(r7516058, r7516054, r7516043, MPFR_RNDN);
        mpfr_mul(r7516059, r7516058, r7516043, MPFR_RNDN);
        mpfr_mul(r7516060, r7516057, r7516059, MPFR_RNDN);
        mpfr_add(r7516061, r7516056, r7516060, MPFR_RNDN);
        ;
        mpfr_mul(r7516063, r7516059, r7516043, MPFR_RNDN);
        mpfr_mul(r7516064, r7516063, r7516043, MPFR_RNDN);
        mpfr_mul(r7516065, r7516062, r7516064, MPFR_RNDN);
        mpfr_add(r7516066, r7516061, r7516065, MPFR_RNDN);
        ;
        mpfr_mul(r7516068, r7516064, r7516043, MPFR_RNDN);
        mpfr_mul(r7516069, r7516068, r7516043, MPFR_RNDN);
        mpfr_mul(r7516070, r7516067, r7516069, MPFR_RNDN);
        mpfr_add(r7516071, r7516066, r7516070, MPFR_RNDN);
        ;
        mpfr_mul(r7516073, r7516069, r7516043, MPFR_RNDN);
        mpfr_mul(r7516074, r7516073, r7516043, MPFR_RNDN);
        mpfr_mul(r7516075, r7516072, r7516074, MPFR_RNDN);
        mpfr_add(r7516076, r7516071, r7516075, MPFR_RNDN);
        return mpfr_get_d(r7516076, MPFR_RNDN);
}

static mpfr_t r7516077, r7516078, r7516079, r7516080, r7516081, r7516082, r7516083, r7516084, r7516085, r7516086, r7516087, r7516088, r7516089, r7516090, r7516091, r7516092, r7516093, r7516094, r7516095, r7516096, r7516097, r7516098, r7516099, r7516100, r7516101, r7516102, r7516103, r7516104, r7516105, r7516106, r7516107, r7516108, r7516109, r7516110, r7516111, r7516112, r7516113, r7516114, r7516115, r7516116;

void setup_mpfr_f_fm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7516077);
        mpfr_init_set_str(r7516078, "14", 10, MPFR_RNDN);
        mpfr_init(r7516079);
        mpfr_init_set_str(r7516080, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7516081);
        mpfr_init_set_str(r7516082, "8252.429199", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516083, "12", 10, MPFR_RNDN);
        mpfr_init(r7516084);
        mpfr_init(r7516085);
        mpfr_init(r7516086);
        mpfr_init_set_str(r7516087, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7516088);
        mpfr_init(r7516089);
        mpfr_init(r7516090);
        mpfr_init_set_str(r7516091, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7516092);
        mpfr_init(r7516093);
        mpfr_init(r7516094);
        mpfr_init(r7516095);
        mpfr_init(r7516096);
        mpfr_init(r7516097);
        mpfr_init(r7516098);
        mpfr_init(r7516099);
        mpfr_init_set_str(r7516100, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516101, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7516102);
        mpfr_init(r7516103);
        mpfr_init(r7516104);
        mpfr_init_set_str(r7516105, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516106, "1", 10, MPFR_RNDN);
        mpfr_init(r7516107);
        mpfr_init(r7516108);
        mpfr_init_set_str(r7516109, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516110, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7516111);
        mpfr_init(r7516112);
        mpfr_init(r7516113);
        mpfr_init(r7516114);
        mpfr_init(r7516115);
        mpfr_init(r7516116);
}

double f_fm(double x) {
        mpfr_set_d(r7516077, x, MPFR_RNDN);
        ;
        mpfr_pow(r7516079, r7516077, r7516078, MPFR_RNDN);
        ;
        mpfr_mul(r7516081, r7516079, r7516080, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7516084, r7516077, r7516083, MPFR_RNDN);
        mpfr_mul(r7516085, r7516082, r7516084, MPFR_RNDN);
        mpfr_sub(r7516086, r7516081, r7516085, MPFR_RNDN);
        ;
        mpfr_mul(r7516088, r7516087, r7516077, MPFR_RNDN);
        mpfr_mul(r7516089, r7516077, r7516088, MPFR_RNDN);
        mpfr_mul(r7516090, r7516089, r7516089, MPFR_RNDN);
        ;
        mpfr_mul(r7516092, r7516091, r7516091, MPFR_RNDN);
        mpfr_sub(r7516093, r7516090, r7516092, MPFR_RNDN);
        mpfr_mul(r7516094, r7516077, r7516077, MPFR_RNDN);
        mpfr_mul(r7516095, r7516094, r7516094, MPFR_RNDN);
        mpfr_mul(r7516096, r7516093, r7516095, MPFR_RNDN);
        mpfr_sub(r7516097, r7516089, r7516091, MPFR_RNDN);
        mpfr_div(r7516098, r7516096, r7516097, MPFR_RNDN);
        mpfr_add(r7516099, r7516086, r7516098, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7516102, r7516101, r7516077, MPFR_RNDN);
        mpfr_mul(r7516103, r7516077, r7516102, MPFR_RNDN);
        mpfr_add(r7516104, r7516100, r7516103, MPFR_RNDN);
        ;
        ;
        mpfr_add(r7516107, r7516105, r7516106, MPFR_RNDN);
        mpfr_pow(r7516108, r7516094, r7516107, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7516111, r7516110, r7516077, MPFR_RNDN);
        mpfr_mul(r7516112, r7516077, r7516111, MPFR_RNDN);
        mpfr_add(r7516113, r7516109, r7516112, MPFR_RNDN);
        mpfr_mul(r7516114, r7516108, r7516113, MPFR_RNDN);
        mpfr_add(r7516115, r7516104, r7516114, MPFR_RNDN);
        mpfr_add(r7516116, r7516099, r7516115, MPFR_RNDN);
        return mpfr_get_d(r7516116, MPFR_RNDN);
}

static mpfr_t r7516117, r7516118, r7516119, r7516120, r7516121, r7516122, r7516123, r7516124, r7516125, r7516126, r7516127, r7516128, r7516129, r7516130, r7516131, r7516132, r7516133, r7516134, r7516135, r7516136, r7516137, r7516138, r7516139, r7516140, r7516141, r7516142, r7516143, r7516144, r7516145, r7516146, r7516147, r7516148, r7516149, r7516150, r7516151, r7516152, r7516153, r7516154, r7516155, r7516156;

void setup_mpfr_f_dm() {
        mpfr_set_default_prec(592);
        mpfr_init(r7516117);
        mpfr_init_set_str(r7516118, "14", 10, MPFR_RNDN);
        mpfr_init(r7516119);
        mpfr_init_set_str(r7516120, "2448.522949", 10, MPFR_RNDN);
        mpfr_init(r7516121);
        mpfr_init_set_str(r7516122, "8252.429199", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516123, "12", 10, MPFR_RNDN);
        mpfr_init(r7516124);
        mpfr_init(r7516125);
        mpfr_init(r7516126);
        mpfr_init_set_str(r7516127, "2368.088379", 10, MPFR_RNDN);
        mpfr_init(r7516128);
        mpfr_init(r7516129);
        mpfr_init(r7516130);
        mpfr_init_set_str(r7516131, "-373.908691", 10, MPFR_RNDN);
        mpfr_init(r7516132);
        mpfr_init(r7516133);
        mpfr_init(r7516134);
        mpfr_init(r7516135);
        mpfr_init(r7516136);
        mpfr_init(r7516137);
        mpfr_init(r7516138);
        mpfr_init(r7516139);
        mpfr_init_set_str(r7516140, "-0.209473", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516141, "21.994629", 10, MPFR_RNDN);
        mpfr_init(r7516142);
        mpfr_init(r7516143);
        mpfr_init(r7516144);
        mpfr_init_set_str(r7516145, "3", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516146, "1", 10, MPFR_RNDN);
        mpfr_init(r7516147);
        mpfr_init(r7516148);
        mpfr_init_set_str(r7516149, "-7104.265137", 10, MPFR_RNDN);
        mpfr_init_set_str(r7516150, "10893.206543", 10, MPFR_RNDN);
        mpfr_init(r7516151);
        mpfr_init(r7516152);
        mpfr_init(r7516153);
        mpfr_init(r7516154);
        mpfr_init(r7516155);
        mpfr_init(r7516156);
}

double f_dm(double x) {
        mpfr_set_d(r7516117, x, MPFR_RNDN);
        ;
        mpfr_pow(r7516119, r7516117, r7516118, MPFR_RNDN);
        ;
        mpfr_mul(r7516121, r7516119, r7516120, MPFR_RNDN);
        ;
        ;
        mpfr_pow(r7516124, r7516117, r7516123, MPFR_RNDN);
        mpfr_mul(r7516125, r7516122, r7516124, MPFR_RNDN);
        mpfr_sub(r7516126, r7516121, r7516125, MPFR_RNDN);
        ;
        mpfr_mul(r7516128, r7516127, r7516117, MPFR_RNDN);
        mpfr_mul(r7516129, r7516117, r7516128, MPFR_RNDN);
        mpfr_mul(r7516130, r7516129, r7516129, MPFR_RNDN);
        ;
        mpfr_mul(r7516132, r7516131, r7516131, MPFR_RNDN);
        mpfr_sub(r7516133, r7516130, r7516132, MPFR_RNDN);
        mpfr_mul(r7516134, r7516117, r7516117, MPFR_RNDN);
        mpfr_mul(r7516135, r7516134, r7516134, MPFR_RNDN);
        mpfr_mul(r7516136, r7516133, r7516135, MPFR_RNDN);
        mpfr_sub(r7516137, r7516129, r7516131, MPFR_RNDN);
        mpfr_div(r7516138, r7516136, r7516137, MPFR_RNDN);
        mpfr_add(r7516139, r7516126, r7516138, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7516142, r7516141, r7516117, MPFR_RNDN);
        mpfr_mul(r7516143, r7516117, r7516142, MPFR_RNDN);
        mpfr_add(r7516144, r7516140, r7516143, MPFR_RNDN);
        ;
        ;
        mpfr_add(r7516147, r7516145, r7516146, MPFR_RNDN);
        mpfr_pow(r7516148, r7516134, r7516147, MPFR_RNDN);
        ;
        ;
        mpfr_mul(r7516151, r7516150, r7516117, MPFR_RNDN);
        mpfr_mul(r7516152, r7516117, r7516151, MPFR_RNDN);
        mpfr_add(r7516153, r7516149, r7516152, MPFR_RNDN);
        mpfr_mul(r7516154, r7516148, r7516153, MPFR_RNDN);
        mpfr_add(r7516155, r7516144, r7516154, MPFR_RNDN);
        mpfr_add(r7516156, r7516139, r7516155, MPFR_RNDN);
        return mpfr_get_d(r7516156, MPFR_RNDN);
}

