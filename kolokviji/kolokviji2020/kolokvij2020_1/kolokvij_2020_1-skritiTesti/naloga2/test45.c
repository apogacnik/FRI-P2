
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

void izpisi(int** t, int n) {
    for (int i = 0;  i < n;  i++) {
        int* p = t[i];
        while (*p != 0) {
            printf("%d ", *p);
            p++;
        }
        printf("0\n");
    }
    for (int i = 0;  i < n;  i++) {
        for (int j = 0;  j < n;  j++) {
            printf("%d", t[i] == t[j]);
        }
        printf("\n");
    }
}

int __main__() {
    int t1[] = {0};
    int t2[] = {751, 529, 103, -783, -912, 688, -599, -325, -725, -50, 427, 631, -669, 927, 866, 211, 920, 645, -243, 267, -129, 47, 0};
    int* t3 = t1;
    int t4[] = {-576, -873, -688, -881, -265, -806, 413, -945, -589, -664, 43, -463, 441, 27, 979, 892, 993, 916, -173, 0};
    int* t5 = t1;
    int t6[] = {-851, 274, 895, -941, -265, 997, -452, -745, 311, -499, 896, 613, -505, 695, 931, -875, 569, -920, -681, -376, -423, 71, 124, 0};
    int t7[] = {393, 946, -843, 576, 377, -833, -178, 870, 60, -671, -888, 257, -835, -100, 566, -542, 0};
    int t8[] = {-798, -638, 975, -107, -871, -266, -647, -464, -46, 63, 964, -288, -523, 901, 843, -649, 95, 0};
    int* t9 = t4;
    int t10[] = {701, 56, -612, -430, 925, 598, 648, 682, -745, 749, -717, -799, 268, -855, 264, 672, 995, 96, 223, 568, 357, 0};
    int t11[] = {-265, -41, -490, -665, 0};
    int t12[] = {-36, -48, -71, 0};
    int* t13 = t12;
    int t14[] = {-164, 46, -731, 21, 17, -345, 671, -914, -905, -635, 0};
    int* t15 = t4;
    int t16[] = {-872, 319, 163, -902, -976, 290, -19, 651, -574, 284, -370, -953, -752, 971, -990, -550, -189, 966, 658, -265, 72, -73, 0};
    int t17[] = {278, -518, 861, 169, 300, 674, -729, 101, -684, 483, 397, 936, 958, 862, 926, -126, -889, 721, 929, -330, -289, -250, 0};
    int* t18 = t17;
    int* t19 = t14;
    int t20[] = {413, -743, 454, -79, 951, 572, -34, 759, -689, 297, -623, 667, -476, -441, 365, 795, 366, -729, -352, 0};
    int* t21 = t9;
    int t22[] = {-981, 316, -267, -277, -206, 885, 958, 746, 251, 375, -908, -772, -409, -506, 58, -668, 0};
    int* t23 = t5;
    int t24[] = {-834, 0};
    int t25[] = {505, -72, 686, -463, 791, 455, 639, -272, 394, -977, -687, -799, -198, 935, -319, 434, -935, -556, 0};
    int t26[] = {273, -534, 275, 567, -704, -792, 978, 746, 862, -941, 805, 498, -779, 109, 213, 970, 608, 804, -966, 0};
    int t27[] = {943, -661, 452, 527, -189, -411, 0};
    int t28[] = {-8, 74, -770, 139, -351, 742, 556, 259, -642, -324, 838, 518, 0};
    int t29[] = {-997, 517, -404, 0};
    int* t30 = t15;
    int* t31 = t3;
    int t32[] = {302, -809, 773, 796, 844, 0};
    int* t33 = t10;
    int* t34 = t4;
    int* t35 = t26;
    int t36[] = {-943, -444, 652, -590, -646, -547, -352, 229, -916, 352, 328, -789, 996, -131, 881, 208, -832, 54, -96, 0};

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
