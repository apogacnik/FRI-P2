
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "naloga2.h"

#define MAX_ST_NASLOVOV 1000000

Vozlisce* izdelaj(int* t, long* naslovi, int* stNaslovov) {
    if (*t < 0) {
        return NULL;
    }
    Vozlisce* v = malloc(sizeof(Vozlisce));
    naslovi[(*stNaslovov)++] = (long) v;
    v->podatek = *t;
    v->naslednje = izdelaj(t + 1, naslovi, stNaslovov);
    return v;
}

void izpisi(Vozlisce* v) {
    printf("[");
    Vozlisce* p = v;
    while (p != NULL) {
        if (p != v) {
            printf(", ");
        }
        printf("%d", p->podatek);
        p = p->naslednje;
    }
    printf("]\n");
}

void pocisti(Vozlisce* v) {
    if (v != NULL) {
        pocisti(v->naslednje);
        free(v);
    }
}

int primerjalnik(const void* pa, const void* pb) {
    long a = *(long*) pa;
    long b = *(long*) pb;
    return (a < b) ? (-1) : ((a > b) ? 1 : 0);
}

bool preveri(Vozlisce* seznam, long* naslovi, int stNaslovov) {
    Vozlisce* p = seznam;
    while (p != NULL) {
        long naslov = (long) p;
        if (bsearch(&naslov, naslovi, stNaslovov, sizeof(long), primerjalnik) != NULL) {
            return false;
        }
        p = p->naslednje;
    }
    return true;
}

int __main__() {
    int* t[] = {
        (int[]) {8698, 3099, 5285, 3175, 2440, 6878, 7143, 9105, 846, 9567, 2737, 2334, 4176, 5272, 6406, 8454, 7463, 4837, 4671, 7085, 4417, 1794, 650, 2216, 8481, 5070, 3590, 7557, -1},
        (int[]) {6211, 8431, 4375, 8835, 5198, 6298, 4839, 8795, 2806, 8019, 4613, 68, 2493, 5246, 9983, 5337, 7902, 4383, 6549, 7375, 2872, 2554, 2248, 3633, 9533, 4372, 3711, 841, -1},
        (int[]) {6888, 5771, 2165, 1382, 9970, 8707, 5764, 7594, 6331, 6605, 5898, 8059, 2440, 9906, 2358, 8225, 631, 3802, 3931, 2852, 3240, 5554, 7254, 451, 9912, 5184, 1834, 1997, -1},
        (int[]) {9685, 1873, 2092, 4251, 9068, 5382, 5997, 2115, 5352, 119, 7437, 9655, 8848, 2741, 2947, 5804, 8902, 321, 5416, 6460, 9997, 7858, 2465, 867, 7654, 7269, 6255, 2434, -1},
        (int[]) {4220, 2316, 1595, 6127, 2504, 3865, 4406, 5418, 8446, 447, 6914, 9885, 9923, 3223, 4665, 3536, 7351, 4351, 8828, 9321, 9498, 6569, 6740, 3829, 6669, 4422, 1203, 4523, -1},
        (int[]) {606, 7124, 8605, 3211, 6260, 4507, 1719, 8011, 5363, 5390, 6397, 2462, 3799, 1437, 3166, 1953, 2459, 253, 3841, 9977, 9769, 5747, 4504, 7878, 3103, 8210, 5791, 1831, -1},
        (int[]) {2521, 5074, 5206, 4078, 4826, 9647, 1511, 7181, 3974, 3229, 211, 7084, 232, 7950, 2118, 1931, 4097, 2236, 981, 6988, 7578, 8634, 862, 1713, 5017, 1224, 4094, 4253, -1},
        (int[]) {7356, 6529, 9582, 5751, 6599, 7268, 3212, 1610, 2922, 8119, 301, 1754, 8206, 616, 4433, 4275, 7336, 20, 9643, 3313, 8861, 395, 6268, 7295, 8194, 7405, 737, 1213, -1},
        (int[]) {7400, 3495, 5235, 253, 8567, 1054, 6156, 7223, 9325, 9482, 9127, 8215, 6374, 6410, 1540, 6281, 5226, 4511, 6081, 2997, 5843, 62, 7987, 8349, 7898, 8449, 1102, 2445, -1},
        (int[]) {4150, 8797, 1191, 9280, 7548, 3187, 9516, 1225, 7287, 9029, 8807, 5993, 142, 4080, 2899, 4385, 3241, 6344, 3080, 751, 2088, 3744, 1705, 3790, 5561, 1630, 2328, 8371, -1},
        (int[]) {1289, 3398, 1826, 3285, 5051, 3042, 9704, 4076, 6046, 8158, 3281, 285, 7168, 4543, 7284, 6491, 626, 4370, 3810, 3668, 9126, 5275, 7833, 8701, 3635, 1324, 2444, 9256, -1},
        (int[]) {7779, 5574, 8569, 3117, 256, 9792, 3908, 3479, 1882, 2670, 2073, 1060, 167, 8495, 80, 3737, 2963, 5800, 4706, 2402, 448, 5689, 514, 1508, 5054, 6395, 8633, 4072, -1},
        (int[]) {7912, 221, 8255, 9596, 7104, 1965, 3035, 4945, 1159, 1161, 3486, 8769, 5454, 3216, 8330, 3604, 8804, 8121, 470, 8111, 6613, 5854, 9293, 7130, 2443, 4047, 7208, 3922, -1},
        (int[]) {692, 719, 437, 239, 9998, 6075, 6267, 9533, 4816, 2001, 932, 232, 8285, 9820, 4744, 7516, 113, 3497, 7776, 918, 8959, 3457, 4782, 4555, 1789, 546, 913, 9575, -1},
        (int[]) {4942, 5742, 3833, 1440, 3274, 5493, 2449, 5827, 8578, 304, 7084, 5913, 320, 1840, 8440, 2558, 3619, 8294, 2987, 6139, 3692, 1635, 3658, 3012, 8743, 1911, 2182, 4866, -1},
        (int[]) {961, 7965, 8654, 6881, 549, 4743, 2293, 3555, 2373, 4013, 8340, 2075, 1203, 8422, 3318, 1537, 2204, 2007, 4887, 9022, 3059, 6946, 4659, 7247, 8116, 6518, 3471, 3319, -1},
        (int[]) {9586, 9781, 6879, 8426, 1152, 2565, 4580, 1309, 5629, 1648, 5045, 8317, 5602, 7412, 2012, 2544, 8143, 4689, 3256, 2936, 112, 3919, 5632, 364, 6408, 6319, 9948, 24, -1},
        (int[]) {3233, 4742, 7203, 576, 8678, 3047, 9736, 3217, 9366, 9909, 9860, 8523, 3924, 379, 4849, 846, 24, 7072, 7877, 8346, 3283, 2935, 9553, 2847, 9080, 4251, 990, 4390, -1},
        (int[]) {4158, 9665, 5705, 8200, 786, 3331, 2642, 6289, 9608, 2274, 9878, 9685, 6957, 9422, 5317, 719, 2682, 4542, 597, 4578, 3274, 1145, 1608, 4165, 8952, 6498, 2764, 2064, -1},
        (int[]) {1383, 2675, 2416, 7180, 3836, 1062, 9976, 6839, 4453, 1955, 6611, 519, 3697, 1288, 5956, 7782, 5470, 325, 4776, 3107, 4646, 2710, 9042, 5854, 3533, 3033, 8826, 5146, -1},
    };
    int n = sizeof(t) / sizeof(int*);

    Vozlisce** seznami = malloc(n * sizeof(Vozlisce*));
    long* naslovi = malloc(MAX_ST_NASLOVOV * sizeof(long));
    int stNaslovov = 0;
    for (int i = 0;  i < n;  i++) {
        seznami[i] = izdelaj(t[i], naslovi, &stNaslovov);
    }
    qsort(naslovi, stNaslovov, sizeof(long), primerjalnik);

    Vozlisce* prepleten = prepleti(seznami, n);
    if (!preveri(prepleten, naslovi, stNaslovov)) {
        printf("NAPAKA!\n");
        printf("Vsa vozlisca prepletenega seznama morajo biti kopije vozlisc originalnih seznamov.\n");
    }
    izpisi(prepleten);
    pocisti(prepleten);

    for (int i = 0;  i < n;  i++) {
        pocisti(seznami[i]);
    }
    free(seznami);
    free(naslovi);

    exit(0);
    return 0;
}
