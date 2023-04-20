
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
    int t1[] = {316, 748, 96, 807, -196, 12, 158, -140, -56, -978, 61, 380, 911, -568, -437, 957, 540, -66, -297, -567, 172, -732, 208, 418, 260, 100, 54, -254, 766, 664, 33, -235, -264, 48, 241, 118, -294, -655, -532, 606, 514, 491, -821, -274, -869, 927, 293, -99, -637, 744, -787, -941, -675, 511, 631, 412, 89, -391, 77, -641, 213, 488, -756, 131, -537, -850, -228, 686, 365, 170, -731, 474, 520, -261, 101, -470, 909, 835, 413, 279, 947, -60, -207, 966, 948, -292, -745, 375, -494, -277, -831, 311, 767, 712, 455, 400, 395, -967, -859, -89, -507, 705, 738, -298, -408, 677, 150, -620, 592, -893, -738, 266, -529, 0};
    int t2[] = {-95, -136, -334, -437, 99, 544, -629, -736, -951, 282, -731, -571, 136, 29, 554, 652, -5, -969, -900, -805, 835, 858, 45, -970, -125, 385, 293, -513, 730, 247, 526, -406, -623, 66, -966, 145, 290, 403, -198, -73, -370, -654, 557, 772, -139, -725, 67, 911, 422, 360, 848, 657, 988, -862, -327, -536, 240, 789, 14, -511, -531, 781, 877, -123, 630, 23, -614, -993, 904, 860, -283, 73, -956, 306, 365, -687, 926, 895, 796, -994, 358, -532, 216, -554, 472, 52, 387, -247, -407, 321, 7, -925, -628, 295, 582, -882, -842, -631, -98, 361, -707, -565, 58, 609, 0};
    int t3[] = {-900, 467, -870, 661, 640, 23, -926, -965, -986, 565, 797, 20, -262, -74, 458, -673, -59, 549, 235, -534, 457, -810, -218, -406, -213, -641, -11, -826, -451, 809, 518, -657, -427, 833, 670, -231, 0};
    int* t4 = t3;
    int* t5 = t2;
    int t6[] = {474, 170, -992, -546, 269, -994, -85, -530, -665, -161, -30, 475, 555, 60, -223, 940, 233, -755, -895, -876, 641, -691, 383, -400, 807, 753, -193, 376, -955, 701, 220, -879, -165, 39, -113, 566, -320, 694, -585, -172, 493, -166, 714, -317, 441, -844, 417, 991, 395, -104, 488, -857, 670, 531, -453, 740, 908, 757, -708, -105, 140, 23, -779, -266, -904, 871, 166, 459, -321, 895, -267, 835, 126, -447, 619, 866, -288, 981, 8, 258, 779, -709, 765, -350, 0};
    int t7[] = {590, 791, -112, 215, 515, 896, -250, 334, 667, -829, -838, 588, 836, -191, -192, -733, 803, 205, 173, 484, -742, -177, -464, 405, 449, 116, 8, 407, 473, 0};

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
