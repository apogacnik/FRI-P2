// 10/10 javni
// 50/50 skriti

#include <stdio.h>
#include <stdlib.h>

#include "naloga2.h"

// Vrne dolzino tabele (, ki se konca z 0)
int getLength(int* t) {
  int len;
  for (len = 0; t[len] != 0; len++) {
    continue;
  }

  return len + 1;
}

// Kopira tabelo orig v tabelo copy
void kopiraj(int* orig, int* copy, int len) {
  for (int i = 0; i < len; i++) {
    copy[i] = orig[i];
  }

  return;
}

void pretvori(int** t) {
  while (*t != NULL) {
    int currTabLen = getLength(*t);
    int* copy = (int*)malloc(currTabLen * sizeof(int));

    kopiraj(*t, copy, currTabLen);

    *t = copy; // zapisi nov pointer v primarno tabelo
    *t++;
  }

  return;
}

int main() {

  return 0;
}
