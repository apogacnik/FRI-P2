
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
    int t1[] = {-526, 653, 206, -244, 40, 815, -773, 163, 783, 991, 770, -146, 999, -31, -442, 637, 418, -308, -823, -682, -623, -332, 353, -415, -363, -757, 325, 238, 986, 471, 177, -376, -902, -618, -848, 32, 949, -30, -591, -287, 171, -39, 179, 930, -909, 574, -996, -788, -257, 231, 671, -72, -124, -180, 564, -427, 166, 37, -337, 787, 451, -783, -284, -288, 188, 421, -929, -884, 718, -497, 157, -74, -905, 960, -951, -98, 987, -286, 297, -683, 215, 714, -656, 984, -661, -316, -116, 846, -713, 623, 774, -738, 109, 760, 752, 768, -224, 139, -535, -29, -351, 428, 747, -482, -980, 762, 268, 527, 144, 790, -890, 721, 6, -867, 262, 116, -248, 436, 274, 45, -253, -594, 507, 479, 55, -219, 970, -599, 377, 405, -760, -624, -50, 662, 30, -501, 265, 485, -488, -322, 239, 665, -101, 380, -922, -386, -532, -524, 931, -567, -33, 137, -452, -27, -117, -416, -711, -25, 0};
    int* t2 = t1;
    int* t3 = t1;

    int* t[] = {t1, t2, t3, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
