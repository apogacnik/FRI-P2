
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
    int t1[] = {-549, -9, 483, -355, -823, 983, 0};
    int t2[] = {-343, -927, -753, 950, 667, 195, -690, 0};
    int t3[] = {-475, -8, -208, 173, 740, 217, 104, -772, 319, 0};
    int t4[] = {-974, 407, -991, 122, 233, -241, 311, 469, 330, -334, -821, 329, 508, 10, 0};
    int* t5 = t1;
    int t6[] = {403, 515, -728, 523, -794, -887, 804, -56, 89, -74, -39, 457, 696, -590, -708, -908, 309, -118, -16, -548, 0};
    int t7[] = {-88, 650, -847, 683, 993, 678, 906, -529, 124, 394, 952, 232, -562, 316, 170, 375, 783, 756, 559, -433, 298, -504, -320, 0};
    int t8[] = {-80, -226, -259, 24, -323, 559, 674, 320, 588, 274, 0};
    int t9[] = {-927, 353, -79, 74, -154, -893, 983, -770, 309, -554, -626, -203, 0};
    int t10[] = {-361, -904, 463, -640, -411, 835, -529, -611, 453, -230, 837, -734, 884, 431, 480, 555, -712, -80, 0};
    int t11[] = {738, -868, -562, -652, -568, -608, -623, -776, 866, -955, -102, -415, 82, 21, -132, 913, 529, -784, 395, 854, 0};
    int t12[] = {-797, 855, 477, 951, -718, 26, 140, 562, 557, -239, -759, 113, -217, 76, 39, -914, -447, 677, 0};
    int t13[] = {-11, -857, -690, 360, 732, 371, -738, 311, -536, 0};
    int t14[] = {582, 0};
    int t15[] = {627, -18, -961, -735, -208, -951, 219, 395, -667, 0};
    int t16[] = {-596, -148, 626, 335, -550, -331, 945, -461, 906, -957, -506, 0};
    int t17[] = {-503, -260, 617, 801, 832, 112, -45, -223, 950, 0};
    int t18[] = {116, 834, 302, -877, 719, 0};
    int t19[] = {889, 351, 466, -703, -54, -710, -282, 901, 717, -1, 912, 691, 982, 239, 72, 0};
    int t20[] = {-810, -510, 143, 965, -684, 304, 0};
    int t21[] = {-674, 675, 509, -269, 716, -790, 450, -922, -559, 0};
    int t22[] = {977, 277, -851, 811, -715, -367, -144, -786, 856, 331, 310, -645, -519, 726, -649, 126, -362, 341, -762, -943, -120, 743, 0};
    int t23[] = {-192, -738, -732, 485, -978, -559, 686, -237, 393, 587, -469, 814, 0};
    int t24[] = {522, 0};
    int t25[] = {-331, 548, -422, -105, 763, -447, 862, 760, 292, -397, 0};
    int t26[] = {501, -571, -780, 741, 0};
    int t27[] = {-434, -876, -340, 779, 492, -671, -166, -254, -918, -889, 744, -89, -411, 554, -706, -432, -528, 221, -399, -37, 0};
    int t28[] = {353, -734, -456, 320, 484, -827, 236, 538, -858, 227, -28, -802, 0};
    int* t29 = t13;
    int t30[] = {-500, -373, -237, -465, 703, 945, -330, -772, 599, -935, -805, -859, -953, 356, 579, -957, 27, -189, 528, 0};
    int t31[] = {640, -624, 390, -854, -588, -688, -256, 983, 112, -398, 599, 211, -488, 0};
    int* t32 = t28;
    int* t33 = t30;
    int t34[] = {214, -152, 964, -206, -340, 240, -51, 30, 510, 202, 711, 0};
    int t35[] = {334, 288, -538, -652, 0};
    int t36[] = {-113, 736, -399, 765, -968, -83, -332, 836, 611, -540, 243, 796, 552, 439, 871, -950, -635, -767, 926, 407, 136, -948, 312, 0};
    int t37[] = {-299, -986, 0};
    int t38[] = {-456, 100, 389, -867, -722, 925, 645, -303, -175, -416, -159, 0};
    int t39[] = {199, -6, -497, -914, -764, -293, 390, 356, -566, 147, 567, -845, -839, -682, -898, 0};
    int t40[] = {539, 905, 377, -220, -382, 527, -323, -744, -278, -33, 0};
    int t41[] = {268, 450, -712, 794, -469, -211, -590, 681, -653, -460, -325, 766, -963, 128, -490, -242, -90, 0};
    int t42[] = {-181, 539, 523, 579, -646, 340, -474, 93, -871, -591, -68, -567, 747, 75, 883, -745, 144, 112, 415, -837, 769, 0};

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, t23, t24, t25, t26, t27, t28, t29, t30, t31, t32, t33, t34, t35, t36, t37, t38, t39, t40, t41, t42, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
