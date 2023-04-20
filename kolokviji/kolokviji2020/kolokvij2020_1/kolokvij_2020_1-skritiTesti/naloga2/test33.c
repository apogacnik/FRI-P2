
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
    int t1[] = {-938, -741, 164, 577, 233, -996, 971, 407, -25, -931, 241, 581, -605, 399, 185, -115, 291, 29, 489, 420, 148, 229, 688, -177, -63, -554, -687, 341, 806, -702, -578, 862, 414, -227, 258, 398, 225, -82, -252, -629, -967, 10, -478, -963, 252, -957, -324, 672, 197, 392, -590, -831, -692, 521, 192, 215, -623, -584, -852, -181, 427, -246, 716, -674, -72, -810, 991, 173, -176, -914, 719, -570, 0};
    int* t2 = t1;
    int* t3 = t1;
    int* t4 = t2;
    int* t5 = t1;
    int* t6 = t3;
    int* t7 = t3;
    int* t8 = t4;
    int* t9 = t4;
    int t10[] = {-143, 908, -398, 343, 575, 347, -829, 298, 687, 56, 565, -299, -326, 528, 737, 869, -549, 399, -532, -86, 515, 109, 728, 720, -836, 779, 422, 184, 243, 618, -375, 231, -305, -585, -74, -286, -386, -563, 410, 37, 792, 974, 311, 676, 643, 20, 971, -793, 387, -726, 140, -957, -155, -206, 794, 447, -14, -158, -712, 768, 980, -171, -567, -991, -941, 393, -976, -569, -931, -861, -895, -493, -494, 628, -912, 350, 0};
    int* t11 = t3;
    int t12[] = {165, 246, -416, 645, -192, 210, 299, -721, 506, 927, -423, 95, 351, 542, -627, 174, 623, -550, -310, 0};
    int* t13 = t4;

    int* t[] = {t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12, t13, NULL};

    pretvori(t);
    int n = sizeof(t) / sizeof(t[0]) - 1;
    izpisi(t, n);

    exit(0);
    return 0;
}
