
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
    int t1[] = {342, 683, 551, -840, -802, -580, 519, 503, -112, -43, -753, -856, -31, 446, -746, 724, -403, 23, 113, -599, 826, -821, -515, 375, -553, -896, 590, 870, 251, -391, -258, 760, -4, -636, -983, -226, -104, 0};
    int t2[] = {-975, -321, -285, -222, -538, 265, 998, -83, 985, 97, -668, -598, -163, 651, -90, -594, -834, 515, 740, 150, 913, 810, 506, 551, -1, 681, 580, 566, -459, 528, 811, -742, -70, 680, -813, -346, 71, 505, 0};
    int t3[] = {-399, -744, 645, 178, -119, 831, -333, 524, -666, -19, -79, 65, -170, -510, -296, 315, -320, 637, -159, -400, -910, 576, 733, -254, 541, 983, -587, -35, 745, -752, 0};
    int t4[] = {851, 809, 852, -105, 891, 927, 84, -706, -191, -780, -889, -262, 482, -129, 283, 985, -13, -362, -876, -787, 320, 468, -601, 698, 485, -637, -761, 518, 425, 0};
    int t5[] = {0};
    int t6[] = {827, -194, 306, -390, -787, 530, 125, -365, -615, -426, 407, -858, 693, -959, -742, -989, -311, -442, 85, -876, 173, 532, -352, 638, -69, 847, 573, -23, -956, 43, -35, 0};
    int t7[] = {283, 0};
    int t8[] = {846, 863, 209, 575, 202, 684, 564, 198, 994, 538, 707, 59, 894, -891, -301, -556, -177, 690, -145, 0};
    int t9[] = {865, 413, 61, 958, -897, -59, -83, 794, 993, 383, -233, 366, 531, -621, 901, -1, -871, 17, 532, -514, -330, 540, -541, 0};
    int t10[] = {-596, 778, 961, -736, 231, -927, -856, 845, 53, -996, -225, 0};
    int t11[] = {237, -844, -97, -230, 733, -433, 0};
    int t12[] = {613, 632, -350, 904, -831, -554, -182, 237, 312, -929, 69, 496, -923, -731, 918, 337, -314, -725, 114, -897, -558, -33, 674, 910, 996, 819, 344, -951, -610, -913, 597, 891, -856, -857, 929, 829, 596, 361, 735, 105, 173, -54, 0};
    int t13[] = {-557, 341, 614, 997, 507, -453, 544, 722, 267, 482, -9, -830, 20, -435, -581, -247, -288, 209, -492, 360, -527, 624, 311, -376, 620, -419, -485, -82, -948, 176, 0};
    int t14[] = {-537, 322, 780, 556, -598, -304, 459, 538, -867, -144, -830, 111, 422, -809, -985, 0};
    int t15[] = {-32, -525, 926, 621, 266, -917, -199, -448, 262, 268, 212, -475, -40, -694, -776, -164, 583, 4, 611, -516, 891, 0};
    int t16[] = {-679, -66, 776, -93, 306, 0};
    int* t17 = t14;
    int t18[] = {-666, -445, -550, -163, -940, 496, 363, -106, -224, -305, 983, -976, 114, 525, -725, -480, 108, 183, 640, 0};
    int t19[] = {911, 858, 25, -731, 0};
    int* t20 = t19;
    int t21[] = {-622, -115, 0};
    int t22[] = {319, 199, 600, 715, 420, 413, -265, 835, 514, -390, 996, -862, 0};

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, t14, t15, t16, t17, t18, t19, t20, t21, t22, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
