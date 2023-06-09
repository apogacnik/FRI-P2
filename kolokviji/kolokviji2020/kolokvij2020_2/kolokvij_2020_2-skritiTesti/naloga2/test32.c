
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
        (int[]) {9036, 4446, 2446, 1705, 6861, 5570, 8390, 2210, 9813, 2828, 401, 9405, 5238, 7236, 805, 474, 9761, 1252, 4995, 917, 5831, 4161, 806, 5462, 3418, 5621, 8134, 2390, 666, 5476, 4020, 2129, 6466, 2231, 4593, 1176, 7947, -1},
        (int[]) {1699, 2954, 3873, 6432, 4836, 874, 9352, 9878, -1},
        (int[]) {2886, 5598, 3446, 7767, 8591, 648, 8848, 2837, 8501, 1944, 7006, 8776, 2872, 3323, 4886, 6843, 8509, 9316, 3492, 3781, 544, 1590, 2167, 6752, 5766, 1559, 1310, 8907, 4555, 5952, 3238, 9057, 5619, 7460, 3943, 3756, 2088, 5846, 8765, 5621, 9003, 8232, 5349, 4675, 1688, 6565, -1},
        (int[]) {8116, 2104, 9227, 6249, 8492, 8993, 6805, 7343, 3759, 7352, 660, 2012, 9144, 2083, 5868, 2013, 3576, 5885, 7729, 9224, 5748, -1},
        (int[]) {8735, 5273, 9578, 2101, 637, 1561, 9924, 3474, 3701, 574, 341, 6902, 7200, 4312, -1},
        (int[]) {2654, 3066, 1267, 6300, 353, 6200, 1653, 346, 5064, 7423, 5591, 384, 6063, 9621, 2224, 9171, 4597, 6983, 6999, 2778, 6013, 7737, 2369, 9712, 8711, 1263, 6221, 4189, 3390, 6670, 1520, 1861, 4031, 3782, 7805, 6254, 7988, 4676, 9015, 5173, 6548, 3015, 8208, 7873, 946, 1306, -1},
        (int[]) {5558, 1726, 3758, 4863, 7434, 9522, 3793, 1050, 116, 7705, 3144, 4903, 1244, 9822, -1},
        (int[]) {5134, 3643, 7621, 5448, 2706, 217, 4899, 5827, 1741, 1682, 1511, 8483, 3842, 8357, 7785, 2015, 5469, 7044, 5637, 2575, 6717, 1735, 3005, 1562, 7257, 3806, 1660, 1861, 6569, 5068, 1008, -1},
        (int[]) {1724, 9922, 1725, 5438, 8369, 8638, 6085, 7638, 2406, 7852, 9565, 1227, 5583, 8359, 313, 6376, 8450, 8565, 2275, 5136, 713, 5693, 7766, 3930, 4885, 6217, 4753, 2182, 4717, 83, 7481, 5902, 8304, 659, 9531, 2542, 2391, 4757, 3212, 7951, 9489, 5669, 3497, 9143, 6248, 1966, 1817, 9404, 3860, 8620, 9095, 3987, 9075, 9431, 8468, 2186, 8391, 6031, -1},
        (int[]) {1724, 2747, 2840, 1411, 5489, 6254, 1989, 7930, 1233, 7771, 4139, 2765, 661, 7102, 8141, 9361, 9584, 9529, 7622, 6293, 4751, 1491, 7823, 8501, 2177, 7786, 4394, 1543, 9818, 4513, 331, 3814, 2421, 2694, 9862, 1928, 1034, -1},
        (int[]) {6488, 4439, 5051, 9277, 8588, 8591, 6139, 8898, 3320, 1680, 7050, 1323, 3250, 2074, 4125, 9704, 627, 2503, 244, 9317, 1213, 1499, 6365, 5883, 3371, 8520, 189, 2102, 1654, 8754, 3077, 7146, -1},
        (int[]) {6846, 8892, 2086, 8600, 5308, 3672, 1727, 4114, 704, 5452, 4440, 1339, 7918, 9187, 2479, 8278, -1},
        (int[]) {1132, 239, 8968, 9080, 2220, 4848, 554, 1567, 9585, 5421, 2957, 1327, 4239, 2380, 6236, 8425, 5014, 4875, 6913, 8509, 9293, 5456, 4337, 2461, 8141, 9383, 5233, 6837, 929, 6060, 4618, 428, 3100, 7215, 4436, 5167, 5216, 8210, 8411, 9622, 4258, 5557, 3726, 9119, 6748, 2256, 4689, 5249, 9999, 605, 7406, 3848, 2487, 9548, 3184, 53, 6924, 9962, 7276, 9161, 9310, 6104, 3005, 8622, 1593, 2129, 6408, 9243, 5903, 8402, 132, 765, 9621, 9779, 1381, 160, 9033, 5086, 9965, 4878, 9209, 8861, 2344, 4996, 4336, 6979, -1},
        (int[]) {2396, 845, 6915, 4684, 9760, 8745, 1907, 2247, 6426, 8147, 4487, 6647, 2511, 1138, 1663, 7015, 3458, 4074, 2067, 4921, 7159, 3926, 8808, 6884, 4, 3350, 7821, 5548, 1227, 6649, 3708, 2698, 1962, 9171, 7349, 5328, 8133, 3000, 8075, 8870, 2387, -1},
        (int[]) {6632, 1516, 3107, 6889, 3069, 7251, 1536, 7922, 2457, 3267, 4163, 2484, 5750, 3652, 4399, 1999, 3195, 4209, 7284, 4430, 6873, 1735, 5759, 4360, 2092, 9258, 4452, 8466, 6729, 5038, 9972, 7072, 5478, 6538, 6243, 9751, 7805, 5903, 2247, 1772, 1198, 1434, 93, 8842, 5716, 9467, 5079, 3452, 4943, 2284, 664, 7110, -1},
        (int[]) {1482, 5053, 4483, 5330, 2060, 6009, 1205, 2290, 2166, 6406, 670, 3314, 505, 1705, 1281, 7430, 6636, 5048, 6181, 1056, 1106, 4352, 7780, 9728, 7966, 2944, 4866, 2674, 3666, 7538, 79, 268, 7917, 4543, 2353, 4270, 7896, 1254, 4607, 2954, 4823, 8980, 692, 3537, -1},
        (int[]) {1161, 5920, 3425, 1703, 881, 1986, 526, 4736, 2472, 7360, 5391, 1254, 3387, 8781, 4983, 5409, 4313, 3243, 3026, 8471, 4847, 151, 7743, 7202, 2557, 7108, 6826, 8672, 5323, 5127, 2967, 9212, 1560, 6724, 6560, 975, 6588, 2163, 6021, 1808, 529, 3083, 8155, 3333, 8929, 3041, 9267, 2058, 3416, 2661, 4380, 7678, 4531, 2256, 1946, 8690, 1572, 2890, 9354, 7902, 4613, 647, 6866, 4092, 2934, 5201, 5655, 4969, 4729, 6385, 6189, 5107, 5960, 8492, 4090, 8773, 3480, 5132, 8980, 2014, 1990, 6749, 2901, 8293, 8248, 9101, 2552, 2598, 3254, 7065, 1618, -1},
        (int[]) {7187, 6823, 7504, 2627, 5618, 4695, 5, 4835, 2547, 608, 8180, 6316, 332, 3469, 9566, 1074, 7751, 2042, 5509, 2062, -1},
        (int[]) {3031, 495, 6481, 4062, 8191, 494, 9361, 7934, 7685, 2272, 6457, 6680, 1864, 733, 611, 5722, -1},
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
