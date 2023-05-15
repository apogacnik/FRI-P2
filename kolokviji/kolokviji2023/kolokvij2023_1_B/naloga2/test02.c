
#include <stdio.h>
#include <stdlib.h>
#include "naloga2.h"

char* NIZI[] = {
    "Janez",
    "Mojca",
    "Peter",
    "Sonja",
    "Mitja",
    "Roman",
    "Jasna",
    "Urban",
    "Darja",
    "Ivana",
    NULL
};

int main() {
    char** izhodni = naSredino(NIZI, 5);

    int stNizov = sizeof(NIZI) / sizeof(NIZI[0]) - 1;
    for (int i = 0; i < stNizov; i++) {
        printf("%d: \"%s\"\n", i, izhodni[i]);
        free(izhodni[i]);
    }
    printf("%s\n", (izhodni[stNizov] == NULL) ? ("NULL") : ("NAPAKA"));

    free(izhodni);
    return 0;
}
