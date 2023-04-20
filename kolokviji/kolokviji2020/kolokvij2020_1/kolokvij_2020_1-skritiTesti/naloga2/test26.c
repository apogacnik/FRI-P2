
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
    int t1[] = {-384, -679, -73, 282, 299, 429, -907, 844, 711, 312, 684, 704, 559, -366, 316, -333, -963, -379, 455, 622, 137, 638, -218, 731, -628, -146, -109, 520, 924, 239, -971, -962, 295, -557, 248, -33, 32, 272, 961, -892, -875, -655, -68, -692, 636, -955, -803, 824, -779, -915, 411, 843, 369, -435, 599, 496, 724, 908, -739, 1, -431, 550, 420, -85, 192, 482, 211, -535, 610, 618, -46, -47, -422, 882, 154, -780, -58, -136, 156, 326, 244, -429, 639, -82, 900, -694, -929, -270, -128, -861, 995, 384, 307, 886, 805, 50, 460, 302, 717, 670, -688, -816, 92, 814, 647, 196, -94, 552, -491, -497, -179, 714, -611, 948, 425, -23, -484, -383, 993, -175, 377, -249, 492, -740, -145, 163, -245, 790, 20, 423, -896, -171, 301, -829, 160, 426, 761, 22, 776, -503, 964, 40, 830, 603, -284, 150, -32, 95, -432, 516, 630, -66, -516, -721, 493, -909, -699, 762, -364, 64, -586, -39, 959, -800, -110, 437, 439, 127, 267, 528, -542, -888, 799, 782, 736, 569, 853, -514, 962, -111, -921, 527, -759, 87, -138, -704, 665, 187, -917, -839, -468, -320, -664, -8, -877, 438, -75, 77, 281, 107, -663, 201, 779, 831, -882, -168, 99, 860, -342, 19, 434, 322, 29, -642, 857, 153, -31, -822, 986, -714, -709, -848, 657, -614, 703, 629, 457, -854, 199, 895, -492, 4, 409, -870, -448, -753, -276, 955, 689, 291, 753, -427, 923, -835, 136, 412, -993, 644, 537, -292, -363, 557, -475, 675, 471, -442, -528, 68, -234, -133, 867, 892, -89, -203, -504, -744, -51, 841, 571, -155, -2, -139, 519, 294, 23, 351, -437, -358, -79, -479, 51, -502, 382, -471, -271, 504, 162, 922, 155, 872, 236, 221, 233, 289, 624, -778, -763, -420, -787, -640, -760, -676, -648, -914, -236, -804, 890, 379, -140, -359, 355, 389, -950, -751, -906, 700, -334, 974, 623, -265, -461, 584, 204, -283, -285, -964, -191, 813, -788, 589, -287, 458, 733, -174, 637, -824, 347, -808, -762, 178, -453, 673, -904, -750, 490, 525, 778, -768, -900, 419, 250, 783, 532, -207, 965, 70, 792, 343, 486, -375, -934, 985, -65, 261, -12, -221, -163, -16, -318, 274, 593, -170, -782, 855, -607, 269, 359, 356, -112, 861, -786, 646, 462, 586, 650, 175, 775, -57, -42, -527, 935, 701, 501, 461, 820, 866, -451, -901, -231, 189, 86, -983, -50, 451, -946, 0};
    int* t2 = t1;

    int* t[] = {t1, t2, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
