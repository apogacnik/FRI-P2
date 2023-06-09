
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
    int t1[] = {-322, 765, 249, -597, 0};
    int* t2 = t1;
    int t3[] = {653, -280, 191, 890, -40, -401, -754, 815, -36, -157, 756, 553, 26, -319, 593, 273, 0};
    int* t4 = t3;
    int t5[] = {0};
    int t6[] = {635, 390, -971, 209, 835, -558, 476, -777, 768, -533, -398, 115, 534, -894, 0};
    int* t7 = t5;
    int t8[] = {746, 298, 543, -109, 552, 447, -242, 657, 555, 124, -964, -95, 596, 739, 896, 0};
    int t9[] = {69, -572, 3, -911, -101, 462, 980, 850, 0};
    int* t10 = t2;
    int t11[] = {-662, -717, -240, -36, -167, -171, -59, 649, -78, 631, -785, 844, 432, -13, 375, 105, -25, 932, 514, 0};
    int t12[] = {-758, -638, -937, -426, -535, -821, 813, -50, -755, -989, -874, -575, -285, 208, 596, -365, 70, 184, 403, -832, 0};
    int* t13 = t2;
    int* t14 = t13;
    int* t15 = t14;
    int t16[] = {286, 361, 397, -99, 466, -142, 567, 795, -667, -909, 443, -534, 104, -39, 0};
    int t17[] = {584, -477, -223, -131, -367, -72, 538, 581, 351, -825, -887, 0};
    int t18[] = {-826, -870, -890, 341, 845, 664, -868, 380, -2, 520, -485, -787, -222, 755, 0};
    int* t19 = t4;
    int t20[] = {524, 413, -327, 130, -437, -264, 164, -16, 215, -539, -117, -236, 840, 857, 76, 712, 544, 865, 0};
    int t21[] = {858, -90, 468, 546, 429, 276, -885, -290, -151, 367, 0};
    int t22[] = {493, -865, -190, -48, -102, -229, 944, 383, 374, 179, 203, -743, 523, -352, -972, -948, 0};
    int t23[] = {821, -469, -860, -590, -658, 917, 368, -782, 128, 417, -620, 0};
    int t24[] = {-231, 809, 406, -650, 120, -396, 0};
    int t25[] = {-128, -803, -162, -470, -565, 592, 432, 184, -912, 588, -745, -207, 97, 763, 205, -101, 19, -170, 55, -521, 0};
    int t26[] = {-323, 916, 0};
    int t27[] = {0};
    int* t28 = t2;
    int t29[] = {0};
    int t30[] = {-395, -85, -327, 936, 709, -51, 137, 399, -333, -285, -563, 967, 759, -539, -520, 812, 0};
    int* t31 = t11;
    int* t32 = t12;
    int* t33 = t24;
    int t34[] = {-241, 34, -517, -987, 747, -721, 797, -304, 873, -847, -391, -733, 175, -661, -633, 665, 158, -234, -365, 0};
    int t35[] = {961, 989, 536, -484, -457, 958, -426, -195, -331, -532, 387, 0};
    int* t36 = t29;
    int* t37 = t19;
    int* t38 = t34;
    int t39[] = {375, -599, -668, -603, 0};
    int* t40 = t13;
    int* t41 = t14;
    int t42[] = {712, 216, 802, -32, -99, 205, -507, 0};
    int t43[] = {275, 243, -888, 0};
    int t44[] = {98, -62, -344, -236, 683, -987, 518, 238, 921, 737, 653, -83, 41, -295, 0};
    int t45[] = {464, 231, -880, 46, 598, -419, 696, -857, 767, 451, -337, 928, -427, -712, -387, 633, -48, 0};
    int t46[] = {-943, 354, 983, 607, 715, -440, 0};
    int t47[] = {-168, -646, -532, 713, -126, 182, -348, -759, 183, -810, 763, 334, -736, 111, 0};
    int t48[] = {181, 644, 56, 612, 198, 685, 527, 15, -515, -338, 0};
    int* t49 = t46;
    int t50[] = {797, -301, 759, -296, 335, -431, 352, 801, -876, 0};

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40, t41, t42, t43, t44, t45, t46, t47, t48, t49, t50, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
